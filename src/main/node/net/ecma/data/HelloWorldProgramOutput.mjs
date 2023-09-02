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
var unit = require('./x3d.mjs');
var SFDouble = require('./x3d.mjs');
var MFNode = require('./x3d.mjs');
var meta = require('./x3d.mjs');
var Scene = require('./x3d.mjs');
var ViewpointGroup = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var LayerSet = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Anchor = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var IndexedLineSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var MetadataSet = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var Collision = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ColorInterpolator = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var ProtoDeclare = require('./x3d.mjs');
var ProtoInterface = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var ExternProtoDeclare = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var Cone = require('./x3d.mjs');
var Cylinder = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var IMPORT = require('./x3d.mjs');
var EXPORT = require('./x3d.mjs');
var Sound = require('./x3d.mjs');
var AudioClip = require('./x3d.mjs');
var MovieTexture = require('./x3d.mjs');
var Extrusion = require('./x3d.mjs');
var ProgramShader = require('./x3d.mjs');
var ShaderProgram = require('./x3d.mjs');
var ComposedShader = require('./x3d.mjs');
var ShaderPart = require('./x3d.mjs');
var CADLayer = require('./x3d.mjs');
var CADAssembly = require('./x3d.mjs');
var CADPart = require('./x3d.mjs');
var CADFace = require('./x3d.mjs');
var EspduTransform = require('./x3d.mjs');
var ReceiverPdu = require('./x3d.mjs');
var SignalPdu = require('./x3d.mjs');
var TransmitterPdu = require('./x3d.mjs');
var DISEntityManager = require('./x3d.mjs');
var DISEntityTypeMapping = require('./x3d.mjs');
var LoadSensor = require('./x3d.mjs');
var GeoMetadata = require('./x3d.mjs');
var ImageCubeMapTexture = require('./x3d.mjs');
var ImageTexture3D = require('./x3d.mjs');
var PackagedShader = require('./x3d.mjs');
var X3D0 =  new X3D({

      cssClass : new SFString("x3dModel.class"),
      profile : new SFString("Full"),
      style : new SFString("x3dModel.style"),
      version : new SFString("4.0"),
      /*x3dVersionComparisonTest for this model: supportsX3dVersion(X3D.VERSION_3_0)=true*/
      head : new SFNode(
        new head({
          /*comment #1*/
          /*comment #2*/
          /*comment #3*/
          /*comment #4*/
          component : new SFNode(
            new component({
              name : new SFString("Navigation"),
              level : new SFInt32(3)})),
          component : new SFNode(
            new component({
              name : new SFString("Shaders"),
              level : new SFInt32(1)})),
          component : new SFNode(
            new component({
              name : new SFString("CADGeometry"),
              level : new SFInt32(2)})),
          component : new SFNode(
            new component({
              name : new SFString("DIS"),
              level : new SFInt32(2)})),
          component : new SFNode(
            new component({
              name : new SFString("HAnim"),
              level : new SFInt32(1)})),
          component : new SFNode(
            new component({
              name : new SFString("Grouping"),
              level : new SFInt32(1)})),
          component : new SFNode(
            new component({
              name : new SFString("Layering"),
              level : new SFInt32(1)})),
          unit : new SFNode(
            new unit({
              name : new SFString("AngleUnitConversion"),
              category : new SFString("angle"),
              conversionFactor : new SFDouble(1)})),
          unit : new SFNode(
            new unit({
              name : new SFString("LengthUnitConversion"),
              category : new SFString("length"),
              conversionFactor : new SFDouble(1)})),
          unit : new SFNode(
            new unit({
              name : new SFString("ForceFromPoundsToNewtons"),
              category : new SFString("force"),
              conversionFactor : new SFDouble(4.4482)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("HelloWorldProgramOutput.x3d")}),

            new meta({
              name : new SFString("info"),
              content : new SFString("continued development and testing in progress")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL)")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/specifications/java/X3DJSAIL.html")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("HelloWorldProgramOutput.java")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("6 September 2016")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("30 July 2023")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D Java Scene Access Interface Library (X3DJSAIL)")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("https://www.web3d.org/specifications/java/examples/HelloWorldProgram.java")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Netbeans https://www.netbeans.org")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Don Brutzman")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/HelloWorldProgramOutput.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HelloWorldProgramOutput.txt")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HelloWorldProgramOutput.x3dv")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HelloWorldProgramOutput.wrl")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HelloWorldProgramOutput.html")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ViewpointGroup({
              description : new SFString("Available viewpoints"),
              children : new MFNode([
                new Viewpoint({
                  DEF : new SFString("DefaultView"),
                  description : new SFString("Hello X3DJSAIL")}),

                new Viewpoint({
                  DEF : new SFString("TopDownView"),
                  description : new SFString("top-down view from above"),
                  orientation : new SFRotation([1,0,0,-1.570796]),
                  position : new SFVec3f([0,100,0])})])}),

            new NavigationInfo({
              type : ["EXAMINE","FLY","ANY"]}),

            new WorldInfo({
              DEF : new SFString("WorldInfoDEF"),
              cssClass : new SFString("worldInfoNode.class"),
              style : new SFString("worldInfoNode.style"),
              title : new SFString("HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)")}),

            new WorldInfo({
              USE : new SFString("WorldInfoDEF")}),

            new WorldInfo({
              USE : new SFString("WorldInfoDEF")}),
          metadata : new MFNode([
            new MetadataString({
              name : new SFString("test"),
              DEF : new SFString("scene.addChildMetadata"),
              value : new MFString(["Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"])}),
          layerSet : new SFNode(
            new LayerSet({
              DEF : new SFString("scene.addChildLayerSetTest")})]),

            new Transform({
              DEF : new SFString("LogoGeometryTransform"),
              translation : new SFVec3f([0,1.5,0]),
              children : new MFNode([
                new Anchor({
                  DEF : new SFString("siteAnchor"),
                  description : new SFString("select for X3D Java SAI Library (X3DJSAIL) description"),
                  url : new MFString(["../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"]),
                  children : new MFNode([
                    new Shape({
                      DEF : new SFString("BoxShape"),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("GreenMaterial"),
                              diffuseColor : new SFColor([0,1,1]),
                              emissiveColor : new SFColor([0.8,0,0]),
                              transparency : new SFFloat(0.1)})),
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"])}))})),
                      geometry : new SFNode(
                        new Box({
                          DEF : new SFString("test-NMTOKEN_regex.0123456789"),
                          cssClass : new SFString("untextured")}))})])})])}),

            new Shape({
              DEF : new SFString("LineShape"),
              appearance : new SFNode(
                new Appearance({
                  material : new SFNode(
                    new Material({
                      emissiveColor : new SFColor([0.6,0.19607843,0.8])}))})),
              geometry : new SFNode(
                new IndexedLineSet({
                  coordIndex : new MFInt32([0,1,2,3,4,0]),
                  /*Coordinate 3-tuple point count: 6*/
                  coord : new SFNode(
                    new Coordinate({
                      point : new MFVec3f([0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0])}))}))}),

            new PositionInterpolator({
              DEF : new SFString("BoxPathAnimator"),
              key : new MFFloat([0,0.125,0.375,0.625,0.875,1]),
              keyValue : new MFVec3f([0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0])}),

            new TimeSensor({
              DEF : new SFString("OrbitClock"),
              cycleInterval : new SFTime(8),
              loop : new SFBool(true)}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("OrbitClock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("BoxPathAnimator")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("BoxPathAnimator"),
              toField : new SFString("set_translation"),
              toNode : new SFString("LogoGeometryTransform")}),

            new Transform({
              DEF : new SFString("TextTransform"),
              translation : new SFVec3f([0,-1.5,0]),
              child : new SFNode(
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          USE : new SFString("GreenMaterial")}))})),
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["X3D Java","SAI Library","X3DJSAIL"]),
                      /*Comment example A, plain quotation marks: He said, \"Immel did it!\"*/
                      /*Comment example B, XML character entities: He said, &quot;Immel did it!&quot;*/
                      metadata : new MFNode([
                        new MetadataSet({
                          name : new SFString("EscapedQuotationMarksMetadataSet"),
                          value : new SFNode(
                            new MetadataString({
                              name : new SFString("quotesTestC"),
                              value : new MFString(["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""])})),
                          value : new SFNode(
                            new MetadataString({
                              name : new SFString("extraChildTest"),
                              value : new MFString(["checks MetadataSet addValue() method"])}))}),
                      fontStyle : new SFNode(
                        new FontStyle({
                          justify : new MFString(["MIDDLE","MIDDLE"])})])}))})),
              children : new MFNode([
                new Collision({
                  /*test containerField='proxy'*/
                  proxy : new SFNode(
                    new Shape({
                      DEF : new SFString("ProxyShape"),
                      /*alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'*/
                      /*alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'*/
                      /*alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})*/
                      /*reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html*/
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["One, Two, Text","","He said, \"Immel did it!\" \"\""])}))}))}),
              /*It's a beautiful world*/
              /*... for you!*/
              /*https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)*/])}),
          /*repeatedly spin 180 degrees as a readable special effect*/

            new OrientationInterpolator({
              DEF : new SFString("SpinInterpolator"),
              key : new MFFloat([0,0.5,1]),
              keyValue : new MFRotation([0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964])}),

            new TimeSensor({
              DEF : new SFString("SpinClock"),
              cycleInterval : new SFTime(5),
              loop : new SFBool(true)}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("SpinClock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("SpinInterpolator")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("SpinInterpolator"),
              toField : new SFString("rotation"),
              toNode : new SFString("TextTransform")}),

            new Group({
              DEF : new SFString("BackgroundGroup"),
              children : new MFNode([
                new Background({
                  DEF : new SFString("GradualBackground")}),

                new Script({
                  DEF : new SFString("colorTypeConversionScript"),
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("colorInput"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_MFCOLOR,
                      name : new SFString("colorsOutput"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                  ]),
ecmascript:eval (0

, function colorInput (eventValue) // Example source code
{
   colorsOutput = new MFColor(eventValue); // assigning value sends output event
// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\n');
})}),

                new ColorInterpolator({
                  DEF : new SFString("ColorAnimator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFColor([0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1]),
                  /*AZURE to INDIGO and back again*/}),

                new TimeSensor({
                  DEF : new SFString("ColorClock"),
                  cycleInterval : new SFTime(60),
                  loop : new SFBool(true)}),

                new ROUTE({
                  fromField : new SFString("colorsOutput"),
                  fromNode : new SFString("colorTypeConversionScript"),
                  toField : new SFString("skyColor"),
                  toNode : new SFString("GradualBackground")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("ColorAnimator"),
                  toField : new SFString("colorInput"),
                  toNode : new SFString("colorTypeConversionScript")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("ColorClock"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("ColorAnimator")})])}),

            new ProtoDeclare({
              name : new SFString("ArtDeco01Material"),
              appinfo : new SFString("tooltip: ArtDeco01Material prototype is a Material node"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFSTRING,
                      name : new SFString("description"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("tooltip for descriptionField"),
                      value : new SFString("ArtDeco01Material prototype is a Material node")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("enabled"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("true")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  /*Initial node of ProtoBody determines prototype node type*/
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.25),
                      diffuseColor : new SFColor([0.282435,0.085159,0.134462]),
                      shininess : new SFFloat(0.127273),
                      specularColor : new SFColor([0.276305,0.11431,0.139857])}),
                  /*[HelloWorldProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()=\"Material\"*/
                  /*presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types*/

                    new TouchSensor({
                      description : new SFString("within ProtoBody"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("description"),
                              protoField : new SFString("description")}),

                            new connect({
                              nodeField : new SFString("enabled"),
                              protoField : new SFString("enabled")})])}))})])}))}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco02Material"),
              appinfo : new SFString("this is a different Material node"),
              url : new MFString(["https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"]),
              /*[HelloWorldProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"*/
              field : new MFNode([
                new field({
                  type : field.TYPE_SFSTRING,
                  name : new SFString("description"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("tooltip for descriptionField")})])}),
          /*Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place*/

            new Shape({
              DEF : new SFString("TestShape1"),
              appearance : new SFNode(
                new Appearance({
                  DEF : new SFString("TestAppearance1"),
                  /*ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java*/
                  shaders : new SFNode(
                    new ProtoInstance({
                      name : new SFString("ArtDeco01Material"),
                      /*[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"*/
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("description"),
                          value : new SFString("ArtDeco01Material can substitute for a Material node")})])}))})),
              geometry : new SFNode(
                new Sphere({
                  radius : new SFFloat(0.001)}))}),

            new Shape({
              DEF : new SFString("TestShape2"),
              appearance : new SFNode(
                new Appearance({
                  DEF : new SFString("TestAppearance2"),
                  /*ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java*/
                  shaders : new SFNode(
                    new ProtoInstance({
                      name : new SFString("ArtDeco02Material"),
                      DEF : new SFString("ArtDeco02MaterialDEF"),
                      /*[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"*/
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("description"),
                          value : new SFString("ArtDeco02Material can substitute for another Material node")})])}))})),
              geometry : new SFNode(
                new Cone({
                  bottomRadius : new SFFloat(0.001),
                  height : new SFFloat(0.001)}))}),

            new Shape({
              DEF : new SFString("TestShape3"),
              appearance : new SFNode(
                new Appearance({
                  DEF : new SFString("TestAppearance3"),
                  /*ArtDeco02Material ProtoInstance USE goes here. Note that name field is NOT defined as part of ProtoInstance USE.*/
                  shaders : new SFNode(
                    new ProtoInstance({
                      USE : new SFString("ArtDeco02MaterialDEF")}))})),
              geometry : new SFNode(
                new Cylinder({
                  height : new SFFloat(0.001),
                  radius : new SFFloat(0.001)}))}),

            new Inline({
              DEF : new SFString("inlineScene"),
              url : new MFString(["someOtherScene.x3d","https://www.web3d.org/specifications/java/examples/someOtherScene.x3d"])}),

            new IMPORT({
              aS : new SFString("WorldInfoDEF2"),
              importedDEF : new SFString("WorldInfoDEF"),
              inlineDEF : new SFString("inlineScene")}),

            new EXPORT({
              aS : new SFString("WorldInfoDEF3"),
              localDEF : new SFString("WorldInfoDEF")}),

            new ProtoDeclare({
              name : new SFString("MaterialModulator"),
              appinfo : new SFString("mimic a Material node and modulate fields as an animation effect"),
              documentation : new SFString("https://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("enabled"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("diffuseColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("emissiveColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0.05 0.05 0.5")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("specularColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("transparency"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("shininess"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("ambientIntensity"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      DEF : new SFString("MaterialNode"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("diffuseColor"),
                              protoField : new SFString("diffuseColor")}),

                            new connect({
                              nodeField : new SFString("emissiveColor"),
                              protoField : new SFString("emissiveColor")}),

                            new connect({
                              nodeField : new SFString("specularColor"),
                              protoField : new SFString("specularColor")}),

                            new connect({
                              nodeField : new SFString("transparency"),
                              protoField : new SFString("transparency")}),

                            new connect({
                              nodeField : new SFString("shininess"),
                              protoField : new SFString("shininess")}),

                            new connect({
                              nodeField : new SFString("ambientIntensity"),
                              protoField : new SFString("ambientIntensity")})])}))}),
                  /*Only first node (the node type) is renderable, others are along for the ride*/

                    new Script({
                      DEF : new SFString("MaterialModulatorScript"),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("enabled"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                        new field({
                          type : field.TYPE_SFCOLOR,
                          name : new SFString("diffuseColor"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                        new field({
                          type : field.TYPE_SFCOLOR,
                          name : new SFString("newColor"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("clockTrigger"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("enabled"),
                              protoField : new SFString("enabled")}),

                            new connect({
                              nodeField : new SFString("diffuseColor"),
                              protoField : new SFString("diffuseColor")})])})]),
                      
ecmascript:eval (0
, function initialize ()
{
    newColor = diffuseColor; // start with correct color
}
, function set_enabled (newValue)
{
	enabled = newValue;
}
, function clockTrigger (timeValue)
{
    if (!enabled) return;
    red   = newColor.r;
    green = newColor.g;
    blue  = newColor.b;

    // note different modulation rates for each color component, % is modulus operator
    newColor = new SFColor ((red + 0.02) % 1, (green + 0.03) % 1, (blue + 0.04) % 1);
	if (enabled)
	{
		Browser.print ('diffuseColor=(' + red + ',' + green + ',' + blue + ') newColor=' + newColor.toString() + '\n');
	}
})})])}))}),
          /*Test success: declarative statement createDeclarativeShapeTests()*/

            new Group({
              DEF : new SFString("DeclarativeGroupExample"),
              children : new MFNode([
                new Shape({
                  metadata : new MFNode([
                    new MetadataString({
                      name : new SFString("findThisNameValue"),
                      DEF : new SFString("FindableMetadataStringTest"),
                      value : new MFString(["test case"])}),
                  appearance : new SFNode(
                    new Appearance({
                      DEF : new SFString("DeclarativeAppearanceExample"),
                      /*DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance*/
                      shaders : new SFNode(
                        new ProtoInstance({
                          name : new SFString("MaterialModulator"),
                          DEF : new SFString("MyMaterialModulator")}))})]),
                  geometry : new SFNode(
                    new Cone({
                      bottom : new SFBool(false),
                      bottomRadius : new SFFloat(0.05),
                      height : new SFFloat(0.1)}))}),
              /*Test success: declarativeGroup.addChild() singleton pipeline method*/])}),
          /*Test success: declarative statement addChild()*/
          /*Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>*/
          /*Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>*/
          /*Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found*/
          /*Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found*/
          /*Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found*/

            new Group({
              DEF : new SFString("TestFieldObjectsGroup"),
              /*testFieldObjects() results*/
              /*SFBool default=false, true=true, false=false, negate()=true*/
              /*MFBool default=, initial=true false true, negate()=false true false*/
              /*SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0*/
              /*MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7*/
              /*... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=*/
              /*SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344, regex matches()=true*/
              /*regex test SFVec3f().matches(\"1 2 3\")=true, regex test SFVec3f().matches(\"1 2 3 4\")=false, regex test (SFRotation.matches(\"0 0 0 0\")=true, failure detecting illegal (zero axis) rotation value*/}),

            new Sound({
              location : new SFVec3f([0,1.6,0]),
              /*set sound-ellipsoid location height at 1.6m to match typical avatar height*/
              source : new SFNode(
                new AudioClip({
                  description : new SFString("chimes"),
                  url : new MFString(["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"]),
                  /*Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d*/}))}),

            new Sound({
              location : new SFVec3f([0,1.6,0]),
              /*set sound-ellipsoid location height at 1.6m to match typical avatar height*/
              source : new SFNode(
                new MovieTexture({
                  description : new SFString("mpgsys.mpg from ConformanceNist suite"),
                  url : new MFString(["mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"]),
                  /*Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d*/
                  /*Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\" \"children\"*/}))}),
          /*Test success: Anchor.isNode()=true, siteAnchor.isNode()=true*/
          /*Test success: Anchor.isStatement()=false, siteAnchor.isStatement()=false*/
          /*Test success: ROUTE.isNode()=false, orbitPositionROUTE.isNode()=false*/
          /*Test success: ROUTE.isStatement()=true, orbitPositionROUTE.isStatement()=true*/
          /*Test success: CommentsBlock.isNode()=false, testComments.isNode()=false*/
          /*Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true*/

            new Shape({
              DEF : new SFString("ExtrusionShape"),
              /*ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'*/
              /*ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'*/
              appearance : new SFNode(
                new Appearance({
                  DEF : new SFString("TransparentAppearance"),
                  material : new SFNode(
                    new Material({
                      transparency : new SFFloat(1)}))})),
              geometry : new SFNode(
                new Extrusion({
                  DEF : new SFString("ExampleExtrusion")}))}),

            new Group({
              /*Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes*/
              children : new MFNode([
                new ProtoDeclare({
                  name : new SFString("NewWorldInfo"),
                  ProtoInterface : new SFNode(
                    new ProtoInterface({
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFSTRING,
                          name : new SFString("description"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)})])})),
                  ProtoBody : new SFNode(
                    new ProtoBody({
                      children : new MFNode([
                        new WorldInfo({})])}))}),

                new ProtoInstance({
                  name : new SFString("NewWorldInfo"),
                  DEF : new SFString("Proto1"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("description"),
                      value : new SFString("testing 1 2 3")})])}),

                new Group({
                  DEF : new SFString("Node2"),
                  /*intentionally empty*/}),

                new ProtoInstance({
                  name : new SFString("NewWorldInfo"),
                  DEF : new SFString("Proto3")}),

                new Transform({
                  DEF : new SFString("Node4"),
                  /*intentionally empty*/}),
              /*Test satisfactorily creates MFNode children array as an ordered list with mixed content*/])}),

            new ProtoDeclare({
              name : new SFString("ShaderProto"),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new ProgramShader({})])}))}),

            new Shape({
              appearance : new SFNode(
                new Appearance({
                  /*Test MFNode shaders array as an ordered list consisting of comments, ProtoInstance and nodes*/
                  /*Test satisfactorily creates MFNode shaders array as an ordered list with mixed content*/
                  shaders : new SFNode(
                    new ProgramShader({
                      DEF : new SFString("TestShader1"),
                      programs : new SFNode(
                        new ShaderProgram({
                          type : "VERTEX",
                          DEF : new SFString("TestShader2")}))})),
                  shaders : new SFNode(
                    new ProtoInstance({
                      name : new SFString("ShaderProto"),
                      DEF : new SFString("TestShader3")})),
                  shaders : new SFNode(
                    new ComposedShader({
                      DEF : new SFString("TestShader4"),
                      parts : new SFNode(
                        new ShaderPart({
                          type : "VERTEX",
                          DEF : new SFString("TestShader5")}))}))}))}),

            new Transform({
              DEF : new SFString("SpecialtyNodes"),
              children : new MFNode([
                new CADLayer({
                  children : new MFNode([
                    new CADAssembly({
                      children : new MFNode([
                        new CADPart({
                          children : new MFNode([
                            new CADFace({})])})])})])}),

                new EspduTransform({}),

                new ReceiverPdu({}),

                new SignalPdu({}),

                new TransmitterPdu({}),

                new DISEntityManager({
                  children : new MFNode([
                    new DISEntityTypeMapping({})])})])}),

            new EspduTransform({
              children : new MFNode([
                new WorldInfo({})])}),

            new ReceiverPdu({}),

            new SignalPdu({}),

            new TransmitterPdu({}),

            new DISEntityManager({
              children : new MFNode([
                new DISEntityTypeMapping({})])}),

            new LoadSensor({
              /*Contained nodes typically must be USE references for nodes previously DEFined in the scene*/
              /*The following nodes are test cases for all X3DUrlObject nodes*/
              children : new MFNode([
                new Anchor({
                  USE : new SFString("siteAnchor")}),

                new Inline({
                  USE : new SFString("inlineScene")}),

                new DISEntityTypeMapping({}),

                new GeoMetadata({}),

                new AudioClip({}),

                new ImageCubeMapTexture({}),

                new ImageTexture3D({}),

                new ImageTexture({}),

                new MovieTexture({}),

                new Script({}),

                new PackagedShader({}),

                new ShaderPart({
                  type : "VERTEX"}),

                new ShaderProgram({
                  type : "VERTEX"})])})}))});
console.log(X3D0.toXMLNode());
