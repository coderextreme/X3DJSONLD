import { convertECMAScriptToPascal } from "./JS2Pas.js";

const result = convertECMAScriptToPascal(ecmascriptSource, {
	scriptName: "Animate",
	unitName: "AnimateScriptUnit",
	fields: [
		{ name: "translation", type: "SFVec3f", accessType: "inputOutput", varName: "FieldVal59" },
		{ name: "velocity", type: "SFVec3f", accessType: "outputOnly", varName: "FieldVal60" },
		{ name: "set_fraction", type: "SFFloat", accessType: "inputOnly", varName: "FieldVal61" },
		{ name: "a", type: "SFFloat", accessType: "outputOnly", varName: "FieldVal62" },
		{ name: "b", type: "SFFloat", accessType: "outputOnly", varName: "FieldVal63" },
		{ name: "c", type: "SFFloat", accessType: "outputOnly", varName: "FieldVal64" },
		{ name: "d", type: "SFFloat", accessType: "outputOnly", varName: "FieldVal65" },
		{ name: "tdelta", type: "SFFloat", accessType: "outputOnly", varName: "FieldVal66" },
		{ name: "pdelta", type: "SFFloat", accessType: "outputOnly", varName: "FieldVal67" }
	]
});

// 1. Set on the X3D TScriptNode:
//    Script58.SetUrl([result.compiledUrl]);
// 2. Write result.pascalUnit to AnimateScriptUnit.pas
// 3. After creating Scene: TCastleScene:
//    AnimateScript := TAnimateScript.Create(FieldVal59, FieldVal60, FieldVal62, ...);
//    AnimateScript.RegisterHandlers(Scene);
