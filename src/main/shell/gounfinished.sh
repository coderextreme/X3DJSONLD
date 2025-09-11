#!/usr/bin/env bash
bash nogo.sh |sed 's/$/.x3d/' | sed 's/^/\.\.\/data\//' | xargs bash go.sh 2>&1
