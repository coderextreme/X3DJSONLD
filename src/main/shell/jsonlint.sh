#!/bin/bash
jsonlint $1 2>> xxx || echo $1 >> xxx
