#!/usr/bin/env bash
# ==============================================================================
# batch_convert_x3d.sh
# Batch converter for X3D files to glTF/GLB using x3d_to_glb_merged.py
#
# Features:
#   * Parallel conversion using a multi-worker job queue
#   * Auto-detection or explicit --bones / --no-bones forwarding
#   * Timeout guards per model (prevents hanging on slow remote assets)
#   * Preserves folder hierarchy or outputs to a single directory
#   * Includes a built-in runner for the Web3D HumanoidAnimation suite
#   * Generates a final summary report with execution times and file sizes
# ==============================================================================

set -uo pipefail

# ------------------------------------------------------------------------------
# Configuration & Defaults
# ------------------------------------------------------------------------------
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PYTHON_BIN="${PYTHON_BIN:-python3}"
CONVERTER="${CONVERTER:-${SCRIPT_DIR}/x3d_to_glb_merged9.1.py}"

JOBS="$(nproc 2>/dev/null || sysctl -n hw.ncpu 2>/dev/null || echo 4)"
TIMEOUT_SEC=180
OUTPUT_DIR=""
EXTRA_FLAGS=()
DRY_RUN=false
RUN_SUITE=false
SEARCH_PATH=""

# Terminal colors
if [[ -t 1 ]]; then
    C_RESET="\033[0m"
    C_BOLD="\033[1m"
    C_GREEN="\033[32m"
    C_RED="\033[31m"
    C_YELLOW="\033[33m"
    C_BLUE="\033[34m"
    C_CYAN="\033[36m"
else
    C_RESET="" C_BOLD="" C_GREEN="" C_RED="" C_YELLOW="" C_BLUE="" C_CYAN=""
fi

# ------------------------------------------------------------------------------
# Usage / Help
# ------------------------------------------------------------------------------
usage() {
    cat <<EOF
${C_BOLD}Usage:${C_RESET}
  $0 [options] <path/to/models_dir_or_file.x3d>
  $0 [options] --suite

${C_BOLD}Options:${C_RESET}
  -j, --jobs NUM          Number of concurrent conversion jobs (default: ${JOBS})
  -o, --output-dir DIR    Directory where .glb files will be written
                          (default: placed alongside each source .x3d file)
  -c, --converter PATH    Path to the python converter script
                          (default: ${CONVERTER})
  -t, --timeout SEC       Timeout in seconds per file (default: ${TIMEOUT_SEC}s)
      --bones             Force interactive bone mode on all models
      --no-bones          Force interactive bone mode off on all models
      --suite             Run the predefined Web3D HumanoidAnimation benchmark suite
      --dry-run           Print files that would be converted without executing
  -h, --help              Show this help message

${C_BOLD}Examples:${C_RESET}
  # Convert all models in a directory recursively (4 parallel workers)
  $0 -j 4 ./models/

  # Convert into a dedicated output folder
  $0 -o ./dist/ ./models/

  # Run with bone mode forced on
  $0 --bones ./medicalbones/

  # Run standard Web3D example suite (checks \$X3D_EXAMPLES)
  $0 --suite
EOF
    exit 0
}

# ------------------------------------------------------------------------------
# Parse Arguments
# ------------------------------------------------------------------------------
while [[ $# -gt 0 ]]; do
    case "$1" in
        -j|--jobs)
            JOBS="$2"; shift 2 ;;
        -o|--output-dir)
            OUTPUT_DIR="$2"; shift 2 ;;
        -c|--converter)
            CONVERTER="$2"; shift 2 ;;
        -t|--timeout)
            TIMEOUT_SEC="$2"; shift 2 ;;
        --bones)
            EXTRA_FLAGS+=("--bones"); shift ;;
        --no-bones)
            EXTRA_FLAGS+=("--no-bones"); shift ;;
        --suite)
            RUN_SUITE=true; shift ;;
        --dry-run)
            DRY_RUN=true; shift ;;
        -h|--help)
            usage ;;
        -*)
            echo -e "${C_RED}Error:${C_RESET} Unknown option: $1" >&2
            usage ;;
        *)
            if [[ -z "${SEARCH_PATH}" ]]; then
                SEARCH_PATH="$1"
            else
                echo -e "${C_RED}Error:${C_RESET} Multiple targets specified: ${SEARCH_PATH} and $1" >&2
                exit 1
            fi
            shift ;;
    esac
done

# ------------------------------------------------------------------------------
# Pre-flight Checks
# ------------------------------------------------------------------------------
if ! command -v "${PYTHON_BIN}" &>/dev/null; then
    echo -e "${C_RED}Error:${C_RESET} Python executable '${PYTHON_BIN}' not found in PATH." >&2
    exit 1
fi

if [[ ! -f "${CONVERTER}" ]]; then
    echo -e "${C_RED}Error:${C_RESET} Converter script not found: ${CONVERTER}" >&2
    exit 1
fi

# ------------------------------------------------------------------------------
# Collect Target Models
# ------------------------------------------------------------------------------
declare -a INPUT_FILES=()
declare -a OUTPUT_FILES=()

if [[ "${RUN_SUITE}" == true ]]; then
    BASE="${X3D_EXAMPLES:-/home/yottzumm/www.web3d.org/x3d/content/examples/HumanoidAnimation}"
    SUITE_JOBS=(
        "${BASE}/Bones/AllBonesCollection.x3d"
        "${BASE}/Bones/AllBonesJohn.x3d"
        "${BASE}/Bones/AllBonesLOA5SkeletonsInlineAnimation.x3d"
        "${BASE}/Bones/AllBonesLOA5SkeletonsComparision.x3d"
        "${BASE}/Bones/pelvis.x3d"
        "${BASE}/Characters/JinLOA4Animated.x3d"
        "${BASE}/FacialAnimation/JinFacsAu27MouthStretchMorpher.x3d"
        "${BASE}/Medical/AnimatedAssembledHumanSkeleton.x3d"
        "${BASE}/Medical/LaughingUpperSkeleton.x3d"
        "${BASE}/WinterAndSpring/AllCharactersMainStage.x3d"
        "${BASE}/WinterAndSpring/AllKindaRepairedMainStage.x3d"
        "../../ci2had/resources/CleanedYouClocks.x3d"
        "../../ci2had/resources/JinMouthStretch.x3d"
        "JoeKickAnimation.x3d"
        "JoeSkinTexcoordDisplacerKick.x3d"
        "Laugh.x3d"
        "layers.x3d"
        "../../medicalbones/0scaled/0skeleton1AImapped.x3d"
    )

    for item in "${SUITE_JOBS[@]}"; do
        if [[ -f "${item}" ]]; then
            INPUT_FILES+=("${item}")
            base_name="$(basename "${item}" .x3d)"
            if [[ -n "${OUTPUT_DIR}" ]]; then
                OUTPUT_FILES+=("${OUTPUT_DIR}/${base_name}.glb")
            else
                OUTPUT_FILES+=("$(dirname "${item}")/${base_name}.glb")
            fi
        fi
    done

    if [[ ${#INPUT_FILES[@]} -eq 0 ]]; then
        echo -e "${C_YELLOW}Notice:${C_RESET} None of the predefined suite files were found at base path: ${BASE}"
        echo "Set X3D_EXAMPLES to point to your Web3D archive root."
        exit 1
    fi

else
    if [[ -z "${SEARCH_PATH}" ]]; then
        echo -e "${C_RED}Error:${C_RESET} Please specify a directory, a .x3d file, or --suite." >&2
        usage
    fi

    if [[ -f "${SEARCH_PATH}" ]]; then
        INPUT_FILES+=("${SEARCH_PATH}")
        base_name="$(basename "${SEARCH_PATH}" .x3d)"
        if [[ -n "${OUTPUT_DIR}" ]]; then
            OUTPUT_FILES+=("${OUTPUT_DIR}/${base_name}.glb")
        else
            OUTPUT_FILES+=("$(dirname "${SEARCH_PATH}")/${base_name}.glb")
        fi
    elif [[ -d "${SEARCH_PATH}" ]]; then
        # Find all .x3d files (case-insensitive)
        while IFS= read -r -d '' file; do
            INPUT_FILES+=("${file}")
            rel_dir="$(dirname "${file}")"
            base_name="$(basename "${file}" .x3d)"
            if [[ -n "${OUTPUT_DIR}" ]]; then
                # Mirror directory structure under output dir
                rel_path="${file#"${SEARCH_PATH}"/}"
                out_subdir="${OUTPUT_DIR}/$(dirname "${rel_path}")"
                OUTPUT_FILES+=("${out_subdir}/${base_name}.glb")
            else
                OUTPUT_FILES+=("${rel_dir}/${base_name}.glb")
            fi
        done < <(find "${SEARCH_PATH}" -type f \( -iname "*.x3d" \) -print0 | sort -z)
    else
        echo -e "${C_RED}Error:${C_RESET} Target does not exist: ${SEARCH_PATH}" >&2
        exit 1
    fi
fi

TOTAL=${#INPUT_FILES[@]}
if [[ ${TOTAL} -eq 0 ]]; then
    echo -e "${C_YELLOW}No .x3d files found.${C_RESET}"
    exit 0
fi

# ------------------------------------------------------------------------------
# Summary Banner
# ------------------------------------------------------------------------------
echo -e "${C_BOLD}==============================================================================${C_RESET}"
echo -e "${C_BOLD} X3D -> GLB Batch Converter${C_RESET}"
echo -e "${C_BOLD}==============================================================================${C_RESET}"
echo -e " Converter     : ${C_CYAN}${CONVERTER}${C_RESET}"
echo -e " Target Count  : ${C_BOLD}${TOTAL}${C_RESET} file(s)"
echo -e " Concurrency   : ${C_BOLD}${JOBS}${C_RESET} worker(s)"
echo -e " Timeout       : ${TIMEOUT_SEC}s per model"
[[ -n "${OUTPUT_DIR}" ]] && echo -e " Output Dir    : ${C_CYAN}${OUTPUT_DIR}${C_RESET}"
[[ ${#EXTRA_FLAGS[@]} -gt 0 ]] && echo -e " Flags         : ${EXTRA_FLAGS[*]}"
echo -e "${C_BOLD}------------------------------------------------------------------------------${C_RESET}"

if [[ "${DRY_RUN}" == true ]]; then
    echo -e "${C_YELLOW}[DRY RUN] The following jobs would be executed:${C_RESET}"
    for i in "${!INPUT_FILES[@]}"; do
        echo "  [$(($i + 1))/${TOTAL}] ${INPUT_FILES[$i]} -> ${OUTPUT_FILES[$i]}"
    done
    exit 0
fi

# ------------------------------------------------------------------------------
# Parallel Execution Engine
# ------------------------------------------------------------------------------
LOG_DIR="$(mktemp -d -t x3d_convert_logs_XXXXXX)"
REPORT_FILE="${LOG_DIR}/report.tsv"
touch "${REPORT_FILE}"

run_single_job() {
    local index="$1"
    local in_f="$2"
    local out_f="$3"
    local log_f="${LOG_DIR}/job_${index}.log"
    local start_ts end_ts duration status err_msg

    mkdir -p "$(dirname "${out_f}")"

    start_ts=$(date +%s)
    
    # Run conversion under timeout
    if command -v timeout &>/dev/null; then
        timeout "${TIMEOUT_SEC}" "${PYTHON_BIN}" "${CONVERTER}" "${EXTRA_FLAGS[@]}" "${in_f}" "${out_f}" > "${log_f}" 2>&1
        local exit_code=$?
    else
        "${PYTHON_BIN}" "${CONVERTER}" "${EXTRA_FLAGS[@]}" "${in_f}" "${out_f}" > "${log_f}" 2>&1
        local exit_code=$?
    fi

    end_ts=$(date +%s)
    duration=$((end_ts - start_ts))

    if [[ ${exit_code} -eq 0 && -f "${out_f}" ]]; then
        local sz_bytes
        sz_bytes=$(wc -c < "${out_f}" 2>/dev/null || stat -c%s "${out_f}" 2>/dev/null || echo 0)
        local sz_kb=$((sz_bytes / 1024))
        status="OK"
        echo -e "[${C_GREEN}DONE${C_RESET}] (${index}/${TOTAL}) ${C_BOLD}$(basename "${in_f}")${C_RESET} -> $(basename "${out_f}") (${sz_kb} KB, ${duration}s)"
        echo -e "${index}\t${status}\t${duration}\t${sz_kb}\t${in_f}\t${out_f}" >> "${REPORT_FILE}"
    elif [[ ${exit_code} -eq 124 ]]; then
        status="TIMEOUT"
        echo -e "[${C_RED}TIMEOUT${C_RESET}] (${index}/${TOTAL}) ${in_f} (${duration}s)"
        echo -e "${index}\t${status}\t${duration}\t0\t${in_f}\t${out_f}" >> "${REPORT_FILE}"
    else
        status="FAIL"
        err_msg=$(tail -n 2 "${log_f}" | tr '\n' ' ' | sed 's/\t/ /g')
        echo -e "[${C_RED}FAIL${C_RESET}] (${index}/${TOTAL}) ${C_BOLD}$(basename "${in_f}")${C_RESET}: ${err_msg}"
        echo -e "${index}\t${status}\t${duration}\t0\t${in_f}\t${out_f}" >> "${REPORT_FILE}"
    fi
}

export -f run_single_job
export CONVERTER PYTHON_BIN TIMEOUT_SEC LOG_DIR REPORT_FILE TOTAL
export C_RESET C_BOLD C_GREEN C_RED C_YELLOW C_CYAN
export EXTRA_FLAGS

GLOBAL_START=$(date +%s)

# Queue execution using a parallel loop pool
running_jobs=0
for idx in "${!INPUT_FILES[@]}"; do
    num=$((idx + 1))
    run_single_job "${num}" "${INPUT_FILES[$idx]}" "${OUTPUT_FILES[$idx]}" &
    ((running_jobs++))

    if [[ ${running_jobs} -ge ${JOBS} ]]; then
        wait -n 2>/dev/null || wait
        ((running_jobs--))
    fi
done

# Wait for all remaining background jobs
wait

GLOBAL_END=$(date +%s)
GLOBAL_DURATION=$((GLOBAL_END - GLOBAL_START))

# ------------------------------------------------------------------------------
# Final Report & Statistics
# ------------------------------------------------------------------------------
PASSED=$(grep -c $'\tOK\t' "${REPORT_FILE}" || true)
FAILED=$(grep -c $'\tFAIL\t' "${REPORT_FILE}" || true)
TIMED_OUT=$(grep -c $'\tTIMEOUT\t' "${REPORT_FILE}" || true)

echo -e "\n${C_BOLD}==============================================================================${C_RESET}"
echo -e "${C_BOLD} Conversion Summary${C_RESET}"
echo -e "${C_BOLD}==============================================================================${C_RESET}"
echo -e " Total Processed : ${TOTAL}"
echo -e " ${C_GREEN}Successes${C_RESET}       : ${PASSED}"
echo -e " ${C_RED}Failures${C_RESET}        : ${FAILED}"
if [[ ${TIMED_OUT} -gt 0 ]]; then
    echo -e " ${C_YELLOW}Timeouts${C_RESET}        : ${TIMED_OUT}"
fi
echo -e " Elapsed Time    : ${GLOBAL_DURATION}s"
echo -e " Detailed Logs   : ${LOG_DIR}"

if [[ ${FAILED} -gt 0 || ${TIMED_OUT} -gt 0 ]]; then
    echo -e "\n${C_BOLD}Failed Tasks:${C_RESET}"
    awk -F'\t' '$2 != "OK" { printf "  * [%s] %s (Log: '${LOG_DIR}'/job_%s.log)\n", $2, $5, $1 }' "${REPORT_FILE}"
fi
echo -e "${C_BOLD}==============================================================================${C_RESET}"

# Exit with non-zero if any files failed
[[ ${FAILED} -eq 0 && ${TIMED_OUT} -eq 0 ]]
