import { x3dcode, examples } from "./config.mjs";
import {convertJsonToStl } from "./convertJsonToStl.mjs";
import { convertPlyToJson } from "./convertPlyToJson.mjs";
import { convertStlToJson } from "./convertStlToJson.mjs";
import { writeUint18ArrayBufferToEXIEditor, encodeJSON, decodeEXI4JSON } from "./exi.mjs";
import fieldTypes from "./fieldTypes.mjs";
import { JavaScriptSerializer } from "./JavaScriptSerializer.mjs";
import mapToMethod from "./mapToMethod.mjs";
import mapToMethod2 from "./mapToMethod2.mjs";
import { Matrix } from "./matrix.mjs";
import PROTOS from "./PrototypeExpander.mjs";
import { PythonSerializer } from "./PythonSerializer.mjs";
import { LOG, Packages, Script, Scripts } from "./Script.mjs";
import { Three2Serializer } from "./Three2Serializer.mjs";
import { X3DJSONLD } from "./X3DJSONLD.mjs";
import sax from '../../../node_modules/saxon-js/SaxonJS2N.js';
const { SaxonJS2N } = sax;
import DOM2JSONSerializer from "./DOM2JSONSerializer.mjs";
import * as loaderJQuery from "./loaderJQuery.mjs";
import loadJson from "../node/loadJson.mjs";