#!/bin/bash
#find node_modules/ajv node_modules/ajv-formats node_modules/ajv-i18n -name "*.js" | sort | egrep '2020.js|2019.js|ajv.js|index.js' | xargs browserify > src/main/node/ajvAll.js
find src/main/node/myAjv2020.js | xargs browserify > src/main/node/ajv2020.js
find src/main/node/myAjvAddFormats.js | xargs browserify > src/main/node/ajvAddFormats.js
# find src/main/node/loadValidate.js | xargs browserify > src/main/node/ajvvalidator.js
