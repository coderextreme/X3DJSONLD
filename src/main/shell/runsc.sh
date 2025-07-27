#!/bin/bash
set -euo pipefail
IFS=$'\n\t'
${NODE} SchemaCheck.js
