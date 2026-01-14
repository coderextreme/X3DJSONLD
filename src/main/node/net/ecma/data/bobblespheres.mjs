'use strict';
var X3D = require('./x3d.mjs');
try {
	var fs = require('fs');
} catch (e) {
console.log("Problems loading fs. On browser?",e);
}
var SFString = require('./x3d.mjs');
var SFNode = require('./x3d.mjs');
var head = require('./x3d.mjs');
var component = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var MFNode = require('./x3d.mjs');
var meta = require('./x3d.mjs');
var Scene = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var DirectionalLight = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var PhysicalMaterial = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var undefined = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var ColorInterpolator = require('./x3d.mjs');
var ScalarInterpolator = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var IORMaterialExtension = require('./x3d.mjs');
var IridescenceMaterialExtension = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("X_ITE"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("Bobble Spheres Full Animation (Final Working)")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Full scene with corrected Script nodes that use the initialize() function to safely reference nodes and prevent race conditions.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Generated from Python script")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("Bobble Spheres (PBR Full Animation)")}),

            new NavigationInfo({}),

            new Background({
              skyAngle : new MFFloat([1.57]),
              skyColor : new MFColor([0.15,0.25,0.8,0.9,0.9,0.9])}),

            new Viewpoint({
              description : new SFString("Initial Camera"),
              position : new SFVec3f([-70,15,-25]),
              orientation : new SFRotation([0.147,0.989,0.005,-1.82]),
              fieldOfView : new SFFloat(0.349)}),

            new DirectionalLight({
              direction : new SFVec3f([-0.5,-1,-0.5]),
              intensity : new SFFloat(2)}),
          /*Static objects*/

            new Transform({
              translation : new SFVec3f([0,-1000,-1]),
              child : new SFNode(
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new PhysicalMaterial({
                          baseColor : new SFColor([0.5,0.5,0.5])}))})),
                  geometry : new SFNode(
                    new Sphere({
                      radius : new SFFloat(1000)}))}))}),

            new Transform({
              translation : new SFVec3f([0,1,0]),
              child : new SFNode(
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new PhysicalMaterial({
                          baseColor : new SFColor([0.9,0.9,0.9]),
                          transmissionFactor : new undefined("0.9"),
                          roughness : new SFFloat(0),
                          indexOfRefraction : new undefined("1.5")}))})),
                  geometry : new SFNode(
                    new Sphere({}))}))}),

            new Transform({
              translation : new SFVec3f([-4,1,0]),
              child : new SFNode(
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new PhysicalMaterial({
                          baseColor : new SFColor([1,0.95,0.9]),
                          transmissionFactor : new undefined("0.8"),
                          roughness : new SFFloat(0.05),
                          indexOfRefraction : new undefined("1.1")}))})),
                  geometry : new SFNode(
                    new Sphere({}))}))}),

            new Transform({
              translation : new SFVec3f([4,1,0]),
              child : new SFNode(
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new PhysicalMaterial({
                          baseColor : new SFColor([0.7,0.6,0.5]),
                          roughness : new SFFloat(0.1)}))})),
                  geometry : new SFNode(
                    new Sphere({}))}))}),
          /*=== DYNAMICALLY GENERATED SPHERES ===*/
          /*Example: Matte Sphere with animated color and roughness (Using initialize())*/

            new Transform({
              DEF : new SFString("T_0"),
              translation : new SFVec3f([-10.871,0.2,-10.453]),
              child : new SFNode(
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new PhysicalMaterial({
                          DEF : new SFString("M_0"),
                          baseColor : new SFColor([0.627,0.003,0.165])}))})),
                  geometry : new SFNode(
                    new Sphere({
                      radius : new SFFloat(0.2)}))}))}),

            new TimeSensor({
              DEF : new SFString("C_0"),
              cycleInterval : new SFTime(5.21),
              loop : new SFBool(true)}),

            new PositionInterpolator({
              DEF : new SFString("PI_0"),
              key : new MFFloat([0,0.5,1]),
              keyValue : new MFVec3f([-10.871,0.2,-10.453,-10.871,0.6,-10.453,-10.871,0.2,-10.453])}),

            new ColorInterpolator({
              DEF : new SFString("CI_0"),
              key : new MFFloat([0,0.5,1]),
              keyValue : new MFColor([0.627,0.003,0.165,0.011,0.583,0.443,0.627,0.003,0.165])}),

            new ScalarInterpolator({
              DEF : new SFString("SI_0"),
              key : new MFFloat([0,0.5,1]),
              keyValue : new MFFloat([1,0.4,1])}),

            new Script({
              DEF : new SFString("Animator_0"),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFCOLOR,
                  name : new SFString("set_color"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("set_roughness"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("targetMaterial"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new PhysicalMaterial({
                      USE : new SFString("M_0")})])}),
              ]),
ecmascript:eval (0
        var matNode = null; // Variable to hold the material node reference

        , function initialize() {
          // This , function runs AFTER the targetMaterial field is connected.
          // We safely store the reference to the actual material node.
          matNode = targetMaterial.value;
        }

        , function set_color(value, timestamp) {
          if (matNode) { // Check if the node reference was stored
            matNode.baseColor = value;
          }
        }
        , function set_roughness(value, timestamp) {
          if (matNode) {
            matNode.roughness = value;
          }
        })}),

            new ROUTE({
              fromNode : new SFString("C_0"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("PI_0"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PI_0"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("T_0"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("C_0"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("CI_0"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("CI_0"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Animator_0"),
              toField : new SFString("set_color")}),

            new ROUTE({
              fromNode : new SFString("C_0"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SI_0"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SI_0"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Animator_0"),
              toField : new SFString("set_roughness")}),
          /*Example: Metal Sphere with animated roughness (Using initialize())*/

            new Transform({
              DEF : new SFString("T_1"),
              translation : new SFVec3f([-10.411,0.2,-9.16]),
              child : new SFNode(
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new PhysicalMaterial({
                          DEF : new SFString("M_1"),
                          baseColor : new SFColor([0.707,0.888,0.536]),
                          roughness : new SFFloat(0.2)}))})),
                  geometry : new SFNode(
                    new Sphere({
                      radius : new SFFloat(0.2)}))}))}),

            new TimeSensor({
              DEF : new SFString("C_1"),
              cycleInterval : new SFTime(4.15),
              loop : new SFBool(true)}),

            new PositionInterpolator({
              DEF : new SFString("PI_1"),
              key : new MFFloat([0,0.5,1]),
              keyValue : new MFVec3f([-10.411,0.2,-9.16,-10.411,0.6,-9.16,-10.411,0.2,-9.16])}),

            new ScalarInterpolator({
              DEF : new SFString("SI_1"),
              key : new MFFloat([0,0.5,1]),
              keyValue : new MFFloat([0.5,0,0.5])}),

            new Script({
              DEF : new SFString("Animator_1"),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("set_roughness"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("targetMaterial"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new PhysicalMaterial({
                      USE : new SFString("M_1")})])}),
              ]),
ecmascript:eval (0
        var matNode = null;

        , function initialize() {
          matNode = targetMaterial.value;
        }

        , function set_roughness(value, timestamp) {
          if (matNode) {
            matNode.roughness = value;
          }
        })}),

            new ROUTE({
              fromNode : new SFString("C_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("PI_1"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PI_1"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("T_1"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("C_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SI_1"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SI_1"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Animator_1"),
              toField : new SFString("set_roughness")}),
          /*The extension-based spheres were already correct and need no changes*/

            new Transform({
              DEF : new SFString("T_2"),
              translation : new SFVec3f([-10.155,0.2,-8.324]),
              child : new SFNode(
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new PhysicalMaterial({
                          transmissionFactor : new undefined("0.95"),
                          roughness : new SFFloat(0.05),
                          iORMaterialExtension : new SFNode(
                            new IORMaterialExtension({
                              DEF : new SFString("IOR_2"),
                              indexOfRefraction : new SFString("1.5")}))}))})),
                  geometry : new SFNode(
                    new Sphere({
                      radius : new SFFloat(0.2)}))}))}),

            new TimeSensor({
              DEF : new SFString("C_2"),
              cycleInterval : new SFTime(3.88),
              loop : new SFBool(true)}),

            new PositionInterpolator({
              DEF : new SFString("PI_2"),
              key : new MFFloat([0,0.5,1]),
              keyValue : new MFVec3f([-10.155,0.2,-8.324,-10.155,0.6,-8.324,-10.155,0.2,-8.324])}),

            new ScalarInterpolator({
              DEF : new SFString("SI_2"),
              key : new MFFloat([0,0.5,1]),
              keyValue : new MFFloat([1.4,1.7,1.4])}),

            new ROUTE({
              fromNode : new SFString("C_2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("PI_2"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PI_2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("T_2"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("C_2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SI_2"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SI_2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("IOR_2"),
              toField : new SFString("set_indexOfRefraction")}),

            new Transform({
              DEF : new SFString("T_3"),
              translation : new SFVec3f([-10.518,0.2,-7.283]),
              child : new SFNode(
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new PhysicalMaterial({
                          transmissionFactor : new undefined("0.95"),
                          roughness : new SFFloat(0.05),
                          indexOfRefraction : new undefined("1.33"),
                          iridescenceMaterialExtension : new SFNode(
                            new IridescenceMaterialExtension({
                              DEF : new SFString("IRI_3"),
                              iridescence : new SFString("1"),
                              iridescenceIndexOfRefraction : new SFString("1.3"),
                              iridescenceThicknessMinimum : new SFString("100")}))}))})),
                  geometry : new SFNode(
                    new Sphere({
                      radius : new SFFloat(0.2)}))}))}),

            new TimeSensor({
              DEF : new SFString("C_3"),
              cycleInterval : new SFTime(6),
              loop : new SFBool(true)}),

            new PositionInterpolator({
              DEF : new SFString("PI_3"),
              key : new MFFloat([0,0.5,1]),
              keyValue : new MFVec3f([-10.518,0.2,-7.283,-10.518,0.6,-7.283,-10.518,0.2,-7.283])}),

            new ScalarInterpolator({
              DEF : new SFString("SI_3"),
              key : new MFFloat([0,0.5,1]),
              keyValue : new MFFloat([100,700,100])}),

            new ROUTE({
              fromNode : new SFString("C_3"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("PI_3"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PI_3"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("T_3"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("C_3"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SI_3"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SI_3"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("IRI_3"),
              toField : new SFString("set_iridescenceThicknessMaximum")})])}))});
console.log(X3D0.toXMLNode());
