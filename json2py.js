"use strict";

// Convert X3D JSON to Python

var convertJSON = require('./convertJSON.js');

convertJSON('./PythonSerializer.js', ".py");
