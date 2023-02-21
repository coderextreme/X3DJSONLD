/*
 * ATTENTION: The "eval" devtool has been used (maybe by default in mode: "development").
 * This devtool is neither made for production nor for readable output files.
 * It uses "eval()" calls to create a separate source file in the browser devtools.
 * If you are trying to read the output file, select a different devtool (https://webpack.js.org/configuration/devtool/)
 * or disable the default devtool with "devtool: false".
 * If you are looking for production-ready output files, see mode: "production" (https://webpack.js.org/configuration/mode/).
 */
/******/ (() => { // webpackBootstrap
/******/ 	"use strict";
/******/ 	var __webpack_modules__ = ({

/***/ "./src/main/node/entry.mjs":
/*!*********************************!*\
  !*** ./src/main/node/entry.mjs ***!
  \*********************************/
/***/ ((__unused_webpack___webpack_module__, __webpack_exports__, __webpack_require__) => {

eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export */ __webpack_require__.d(__webpack_exports__, {\n/* harmony export */   \"default\": () => (__WEBPACK_DEFAULT_EXPORT__)\n/* harmony export */ });\n/* harmony default export */ const __WEBPACK_DEFAULT_EXPORT__ = (\"import { x3dcode, examples } from \\\"./config.mjs\\\";\\nimport {convertJsonToStl } from \\\"./convertJsonToStl.mjs\\\";\\nimport { convertPlyToJson } from \\\"./convertPlyToJson.mjs\\\";\\nimport { convertStlToJson } from \\\"./convertStlToJson.mjs\\\";\\nimport { writeUint18ArrayBufferToEXIEditor, encodeJSON, decodeEXI4JSON } from \\\"./exi.mjs\\\";\\nimport fieldTypes from \\\"./fieldTypes.mjs\\\";\\nimport { JavaScriptSerializer } from \\\"./JavaScriptSerializer.mjs\\\";\\nimport mapToMethod from \\\"./mapToMethod.mjs\\\";\\nimport mapToMethod2 from \\\"./mapToMethod2.mjs\\\";\\nimport { Matrix } from \\\"./matrix.mjs\\\";\\nimport PROTOS from \\\"./PrototypeExpander.mjs\\\";\\nimport { PythonSerializer } from \\\"./PythonSerializer.mjs\\\";\\nimport { LOG, Packages, Script, Scripts } from \\\"./Script.mjs\\\";\\nimport { Three2Serializer } from \\\"./Three2Serializer.mjs\\\";\\nimport { X3DJSONLD } from \\\"./X3DJSONLD.mjs\\\";\\nimport sax from '../../../node_modules/saxon-js/SaxonJS2N.js';\\nconst { SaxonJS2N } = sax;\\nimport DOM2JSONSerializer from \\\"./DOM2JSONSerializer.mjs\\\";\\nimport * as loaderJQuery from \\\"./loaderJQuery.mjs\\\";\\nimport loadJson from \\\"../node/loadJson.mjs\\\";\\n\");\n\n//# sourceURL=webpack://X3DJSONLD/./src/main/node/entry.mjs?");

/***/ })

/******/ 	});
/************************************************************************/
/******/ 	// The require scope
/******/ 	var __webpack_require__ = {};
/******/ 	
/************************************************************************/
/******/ 	/* webpack/runtime/define property getters */
/******/ 	(() => {
/******/ 		// define getter functions for harmony exports
/******/ 		__webpack_require__.d = (exports, definition) => {
/******/ 			for(var key in definition) {
/******/ 				if(__webpack_require__.o(definition, key) && !__webpack_require__.o(exports, key)) {
/******/ 					Object.defineProperty(exports, key, { enumerable: true, get: definition[key] });
/******/ 				}
/******/ 			}
/******/ 		};
/******/ 	})();
/******/ 	
/******/ 	/* webpack/runtime/hasOwnProperty shorthand */
/******/ 	(() => {
/******/ 		__webpack_require__.o = (obj, prop) => (Object.prototype.hasOwnProperty.call(obj, prop))
/******/ 	})();
/******/ 	
/******/ 	/* webpack/runtime/make namespace object */
/******/ 	(() => {
/******/ 		// define __esModule on exports
/******/ 		__webpack_require__.r = (exports) => {
/******/ 			if(typeof Symbol !== 'undefined' && Symbol.toStringTag) {
/******/ 				Object.defineProperty(exports, Symbol.toStringTag, { value: 'Module' });
/******/ 			}
/******/ 			Object.defineProperty(exports, '__esModule', { value: true });
/******/ 		};
/******/ 	})();
/******/ 	
/************************************************************************/
/******/ 	
/******/ 	// startup
/******/ 	// Load entry module and return exports
/******/ 	// This entry module can't be inlined because the eval devtool is used.
/******/ 	var __webpack_exports__ = {};
/******/ 	__webpack_modules__["./src/main/node/entry.mjs"](0, __webpack_exports__, __webpack_require__);
/******/ 	
/******/ })()
;