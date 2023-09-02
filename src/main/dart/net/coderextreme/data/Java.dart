// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('3.3'),
      head_ : 
        head(
          /*comment #1*/
          /*comment #2*/
          /*comment #3*/
          /*comment #4*/
          component_ : 
            component(
              name_ : SFString('Navigation'),
              level_ : 3),
          component_ : 
            component(
              name_ : SFString('Layering'),
              level_ : 1),
          unit_ : 
            unit(
              name_ : SFString('AngleUnitConversion'),
              category_ : SFString('angle'),
              conversionFactor_ : 1),
          unit_ : 
            unit(
              name_ : SFString('LengthUnitConversion'),
              category_ : SFString('length'),
              conversionFactor_ : 1),
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('Java.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface (SAI) Library')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/specifications/java/X3DJSAIL.html')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('Java.java')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('6 September 2016')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('6 June 2018')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D Java Scene Access Interface Library (X3DJSAIL)')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('https://www.web3d.org/specifications/java/examples/HelloWorldProgram.java')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('Netbeans http://www.netbeans.org')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Don Brutzman')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/Java.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('Java.txt')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('Java.x3dv')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('Java.wrl')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('Java.html')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('X3dValidator https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/Java.x3d')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/specifications/java/examples/Java.x3d')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html')),

            meta(
              name_ : SFString('info'),
              content_ : SFString('tested sat: name value cannot contain embedded space character')),

            meta(
              name_ : SFString('translated'),
              content_ : SFString('06 June 2018')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding'))]),
      Scene_ : 
        Scene(
          children_ : [
            ViewpointGroup(
              description_ : SFString('Available viewpoints')),

            WorldInfo(
              DEF_ : SFString('WorldInfoDEF'),
              title_ : SFString('HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)')),

            WorldInfo(
              USE_ : SFString('WorldInfoDEF')),

            WorldInfo(
              USE_ : SFString('WorldInfoDEF')),
          metadata_ : [
            MetadataString(
              name_ : SFString('test'),
              DEF_ : SFString('scene.addChildMetadata'),
              value_ : MFString([SFString("Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding")])),
          layerSet_ : 
            LayerSet(
              DEF_ : SFString('scene.addChildLayerSetTest'))],

            Transform(
              DEF_ : SFString('LogoGeometryTransform'),
              translation_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(0)]),
              children_ : [
                Anchor(
                  description_ : SFString('select for X3D Java SAI Library (X3DJSAIL) description'),
                  url_ : MFString([SFString("../X3DJSAIL.html"), SFString("https://www.web3d.org/specifications/java/X3DJSAIL.html")]),
                  children_ : [
                    Shape(
                      DEF_ : SFString('BoxShape'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              DEF_ : SFString('GreenMaterial'),
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(1)]),
                              emissiveColor_ : SFColor([SFDouble(0.8), SFDouble(0), SFDouble(0)]),
                              transparency_ : 0.1),
                          texture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("images/X3dJavaSceneAccessInterfaceSaiLibrary.png"), SFString("https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png")]))),
                      geometry_ : 
                        Box(
                          DEF_ : SFString('test-NMTOKEN_regex.0123456789'),
                          cssClass_ : SFString('untextured')))])]),

            Shape(
              DEF_ : SFString('LineShape'),
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      emissiveColor_ : SFColor([SFDouble(0.6), SFDouble(0.19607843), SFDouble(0.8)]))),
              geometry_ : 
                IndexedLineSet(
                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(4), SFInt32(0)]),
                  /*Coordinate 3-tuple point count: 6*/
                  coord_ : 
                    Coordinate(
                      point_ : MFVec3f([SFVec3f([0,1.5,0]),SFVec3f([2,1.5,0]),SFVec3f([2,1.5,-2]),SFVec3f([-2,1.5,-2]),SFVec3f([-2,1.5,0]),SFVec3f([0,1.5,0])])))),

            PositionInterpolator(
              DEF_ : SFString('BoxPathAnimator'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.375), SFFloat(0.625), SFFloat(0.875), SFFloat(1)]),
              keyValue_ : MFVec3f([SFVec3f([0,1.5,0]),SFVec3f([2,1.5,0]),SFVec3f([2,1.5,-2]),SFVec3f([-2,1.5,-2]),SFVec3f([-2,1.5,0]),SFVec3f([0,1.5,0])])),

            TimeSensor(
              DEF_ : SFString('OrbitClock'),
              cycleInterval_ : 8,
              loop_ : true),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('OrbitClock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('BoxPathAnimator')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('BoxPathAnimator'),
              toField_ : SFString('set_translation'),
              toNode_ : SFString('LogoGeometryTransform')),

            Transform(
              DEF_ : SFString('TextTransform'),
              translation_ : SFVec3f([SFDouble(0), SFDouble(-1.5), SFDouble(0)]),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          USE_ : SFString('GreenMaterial'))),
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("X3D Java"), SFString("SAI Library"), SFString("X3DJSAIL")]),
                      /*Comment example A, plain quotation marks: He said, \"Immel did it!\"*/
                      /*Comment example B, XML character entities: He said, &quot;Immel did it!&quot;*/
                      metadata_ : [
                        MetadataSet(
                          name_ : SFString('EscapedQuotationMarksMetadataSet'),
                          value_ : 
                            MetadataString(
                              name_ : SFString('quotesTestC'),
                              value_ : MFString([SFString("MFString example C, backslash-escaped quotes: He said, \"Immel did it!\"")])),
                          value_ : 
                            MetadataString(
                              name_ : SFString('extraChildTest'),
                              value_ : MFString([SFString("checks MetadataSetObject addValue() method")]))),
                      fontStyle_ : 
                        FontStyle(
                          justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))])),
              children_ : [
                Collision(
                  /*test containerField='proxy'*/
                  proxy_ : 
                    Shape(
                      DEF_ : SFString('ProxyShape'),
                      /*alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'*/
                      /*alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'*/
                      /*alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})*/
                      /*reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html*/
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("One, Two, Text"), SFString(""), SFString("He said, \"Immel did it!\" \"\"")])))),
              /*It's a beautiful world*/
              /*... for you!*/
              /*https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)*/]),
          /*repeatedly spin 180 degrees as a readable special effect*/

            OrientationInterpolator(
              DEF_ : SFString('SpinInterpolator'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(4.712389), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1.5707964)])),

            TimeSensor(
              DEF_ : SFString('SpinClock'),
              cycleInterval_ : 5,
              loop_ : true),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('SpinClock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('SpinInterpolator')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('SpinInterpolator'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('TextTransform')),

            Group(
              DEF_ : SFString('BackgroundGroup'),
              children_ : [
                Background(
                  DEF_ : SFString('GradualBackground')),

                Script(
                  DEF_ : SFString('colorTypeConversionScript'),
                  field_ : [
                    field(
                      type_ : SFString("SFColor"),
                      name_ : SFString('colorInput'),
                      accessType_ : SFString("inputOnly")),

                    field(
                      type_ : SFString("MFColor"),
                      name_ : SFString('colorsOutput'),
                      accessType_ : SFString("outputOnly")),
                  ],
ecmascript:eval (0

, function colorInput (eventValue) // Example source code
{
   colorsOutput = new MFColor(eventValue); // assigning value sends output event
// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\n');
})),

                ColorInterpolator(
                  DEF_ : SFString('ColorAnimator'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                  keyValue_ : MFColor([SFColor(0.9411765), SFColor(1), SFColor(1), SFColor(0.29411766), SFColor(0), SFColor(0.50980395), SFColor(0.9411765), SFColor(1), SFColor(1)]),
                  /*AZURE to INDIGO and back again*/),

                TimeSensor(
                  DEF_ : SFString('ColorClock'),
                  cycleInterval_ : 60,
                  loop_ : true),

                ROUTE(
                  fromField_ : SFString('colorsOutput'),
                  fromNode_ : SFString('colorTypeConversionScript'),
                  toField_ : SFString('skyColor'),
                  toNode_ : SFString('GradualBackground')),

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('ColorAnimator'),
                  toField_ : SFString('colorInput'),
                  toNode_ : SFString('colorTypeConversionScript')),

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('ColorClock'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('ColorAnimator'))]),

            ProtoDeclare(
              name_ : SFString('ArtDeco01Material'),
              appinfo_ : SFString('tooltip: ArtDeco01Material prototype is a Material node'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFString"),
                      name_ : SFString('description'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('tooltip for descriptionField'),
                      value_ : SFString('ArtDeco01Material prototype is a Material node')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('enabled'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('true'))]),
              ProtoBody_ : 
                ProtoBody(
                  /*Initial node of ProtoBody determines prototype node type*/
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.25,
                      diffuseColor_ : SFColor([SFDouble(0.282435), SFDouble(0.085159), SFDouble(0.134462)]),
                      shininess_ : 0.127273,
                      specularColor_ : SFColor([SFDouble(0.276305), SFDouble(0.11431), SFDouble(0.139857)])),
                  /*[HelloWorldProgram diagnostic] should be connected to scene graph: ArtDeco01ProtoDeclare.getNodeType()=\"Material\"*/
                  /*presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types*/

                    TouchSensor(
                      description_ : SFString('within ProtoBody'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('description'),
                              protoField_ : SFString('description')),

                            connect(
                              nodeField_ : SFString('enabled'),
                              protoField_ : SFString('enabled'))]))])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco02Material'),
              appinfo_ : SFString('this is a different Material node'),
              url_ : MFString([SFString("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material"), SFString("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material")]),
              /*[HelloWorldProgram diagnostic] ArtDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"*/
              field_ : [
                field(
                  type_ : SFString("SFString"),
                  name_ : SFString('description'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('tooltip for descriptionField'))]),
          /*Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place*/

            Shape(
              DEF_ : SFString('TestShape1'),
              appearance_ : 
                Appearance(
                  DEF_ : SFString('TestAppearance1'),
                  /*ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java*/
                  shaders_ : 
                    ProtoInstance(
                      name_ : SFString('ArtDeco01Material'),
                      /*[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"*/
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('description'),
                          value_ : SFString('ArtDeco01Material can substitute for a Material node'))])),
              geometry_ : 
                Sphere(
                  radius_ : 0.001)),

            Shape(
              DEF_ : SFString('TestShape2'),
              appearance_ : 
                Appearance(
                  DEF_ : SFString('TestAppearance2'),
                  /*ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java*/
                  shaders_ : 
                    ProtoInstance(
                      name_ : SFString('ArtDeco02Material'),
                      DEF_ : SFString('ArtDeco02MaterialDEF'),
                      /*[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"*/
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('description'),
                          value_ : SFString('ArtDeco02Material can substitute for another Material node'))])),
              geometry_ : 
                Cone(
                  bottomRadius_ : 0.001,
                  height_ : 0.001)),

            Shape(
              DEF_ : SFString('TestShape3'),
              appearance_ : 
                Appearance(
                  DEF_ : SFString('TestAppearance3'),
                  /*ArtDeco02Material ProtoInstance USE goes here...*/
                  shaders_ : 
                    ProtoInstance(
                      USE_ : SFString('ArtDeco02MaterialDEF'))),
              geometry_ : 
                Cylinder(
                  height_ : 0.001,
                  radius_ : 0.001)),

            Inline(
              DEF_ : SFString('inlineSceneDef'),
              url_ : MFString([SFString("someOtherScene.x3d")])),

            IMPORT(
              aS_ : SFString('WorldInfoDEF2'),
              importedDEF_ : SFString('WorldInfoDEF'),
              inlineDEF_ : SFString('inlineSceneDef')),

            EXPORT(
              aS_ : SFString('WorldInfoDEF3'),
              localDEF_ : SFString('WorldInfoDEF')),

            ProtoDeclare(
              name_ : SFString('MaterialModulator'),
              appinfo_ : SFString('mimic a Material node and modulate fields as an animation effect'),
              documentation_ : SFString('http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('enabled'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('true')),

                    field(
                      type_ : SFString("SFColor"),
                      name_ : SFString('diffuseColor'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 0')),

                    field(
                      type_ : SFString("SFColor"),
                      name_ : SFString('emissiveColor'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0.05 0.05 0.5')),

                    field(
                      type_ : SFString("SFColor"),
                      name_ : SFString('specularColor'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 0')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('transparency'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('shininess'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('ambientIntensity'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      DEF_ : SFString('MaterialNode'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('diffuseColor'),
                              protoField_ : SFString('diffuseColor')),

                            connect(
                              nodeField_ : SFString('emissiveColor'),
                              protoField_ : SFString('emissiveColor')),

                            connect(
                              nodeField_ : SFString('specularColor'),
                              protoField_ : SFString('specularColor')),

                            connect(
                              nodeField_ : SFString('transparency'),
                              protoField_ : SFString('transparency')),

                            connect(
                              nodeField_ : SFString('shininess'),
                              protoField_ : SFString('shininess')),

                            connect(
                              nodeField_ : SFString('ambientIntensity'),
                              protoField_ : SFString('ambientIntensity'))])),
                  /*Only first node (the node type) is renderable, others are along for the ride*/

                    Script(
                      DEF_ : SFString('MaterialModulatorScript'),
                      field_ : [
                        field(
                          type_ : SFString("SFBool"),
                          name_ : SFString('enabled'),
                          accessType_ : SFString("inputOutput")),

                        field(
                          type_ : SFString("SFColor"),
                          name_ : SFString('diffuseColor'),
                          accessType_ : SFString("inputOutput")),

                        field(
                          type_ : SFString("SFColor"),
                          name_ : SFString('newColor'),
                          accessType_ : SFString("outputOnly")),

                        field(
                          type_ : SFString("SFTime"),
                          name_ : SFString('clockTrigger'),
                          accessType_ : SFString("inputOnly"))],

                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('enabled'),
                              protoField_ : SFString('enabled')),

                            connect(
                              nodeField_ : SFString('diffuseColor'),
                              protoField_ : SFString('diffuseColor'))]),
                      ,
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
}))])),
          /*Test success: declarative statement createDeclarativeShapeTests()*/

            Group(
              DEF_ : SFString('DeclarativeGroupExample'),
              children_ : [
                Shape(
                  metadata_ : [
                    MetadataString(
                      name_ : SFString('findThisNameValue'),
                      DEF_ : SFString('FindableMetadataStringTest'),
                      value_ : MFString([SFString("test case")])),
                  appearance_ : 
                    Appearance(
                      DEF_ : SFString('DeclarativeAppearanceExample'),
                      /*DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance*/
                      shaders_ : 
                        ProtoInstance(
                          name_ : SFString('MaterialModulator'),
                          DEF_ : SFString('MyMaterialModulator')))],
                  geometry_ : 
                    Cone(
                      bottom_ : false,
                      bottomRadius_ : 0.05,
                      height_ : 0.1)),
              /*Test success: declarativeGroup.addChild() singleton pipeline method*/]),
          /*Test success: declarative statement addChild()*/
          /*Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>*/
          /*Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>*/
          /*Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found*/
          /*Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found*/
          /*Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found*/

            Group(
              DEF_ : SFString('TestFieldObjectsGroup'),
              /*testFieldObjects() results*/
              /*SFBool default=true, true=true, false=false, negate()=true*/
              /*MFBool default=, initial=true false true, negate()=false true false*/
              /*SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0*/
              /*MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7*/
              /*... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=*/
              /*SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344*/),

            Sound(
              location_ : SFVec3f([SFDouble(0), SFDouble(1.6), SFDouble(0)]),
              /*set sound-ellipsoid location height at 1.6m to match typical avatar height*/
              source_ : 
                AudioClip(
                  description_ : SFString('chimes'),
                  url_ : MFString([SFString("chimes.wav"), SFString("https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav")]),
                  /*Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d*/)),

            Sound(
              location_ : SFVec3f([SFDouble(0), SFDouble(1.6), SFDouble(0)]),
              /*set sound-ellipsoid location height at 1.6m to match typical avatar height*/
              source_ : 
                MovieTexture(
                  description_ : SFString('mpgsys.mpg from ConformanceNist suite'),
                  url_ : MFString([SFString("mpgsys.mpg"), SFString("https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg")]),
                  /*Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d*/
                  /*Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\"*/)),
          /*Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true*/
          /*Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false*/
          /*Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false*/
          /*Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true*/
          /*Test success: CommentsBlock.isNode()=false, testComments.isNode()=false*/
          /*Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true*/

            Shape(
              DEF_ : SFString('ExtrusionShape'),
              /*ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'*/
              /*ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'*/
              appearance_ : 
                Appearance(
                  DEF_ : SFString('TransparentAppearance'),
                  material_ : 
                    Material(
                      transparency_ : 1)),
              geometry_ : 
                Extrusion(
                  DEF_ : SFString('ExampleExtrusion')))));
void main() { exit(0); }
