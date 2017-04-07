#!/bin/bash

ls ./*.x3d | xargs -P 8 ./several.sh
