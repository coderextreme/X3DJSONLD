"use strict";

// Convert X3D JSON to X3D XML

var convertJSON = require('./convertJSON.js');

convertJSON('./DOMSerializer.js', "-roundtrip.x3d");
