#!/bin/bash
find node_modules/ajv node_modules/ajv-formats node_modules/ajv-i18n -name "*.js" | sort | egrep '2020.js|2019.js|ajv.js|index.js' | xargs browserify > src/main/node/ajvAll.js
