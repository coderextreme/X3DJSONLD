#!/bin/bash
set -euo pipefail
IFS=$'\n\t'
jsonlint $1 2>> xxx || echo $1 >> xxx
