#!/bin/bash

export PROCESSORS=1
ls *.x3d | xargs -P $PROCESSORS ./several.sh

