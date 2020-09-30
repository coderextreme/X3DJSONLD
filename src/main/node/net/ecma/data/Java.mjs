'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { CommentsBlock } from './x3d.mjs';
import { component } from './x3d.mjs';
import { SFInt32 } from './x3d.mjs';
import { unit } from './x3d.mjs';
import { SFDouble } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { ViewpointGroup } from './x3d.mjs';
import { WorldInfo } from './x3d.mjs';
import { MetadataString } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { LayerSet } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { Anchor } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { ImageTexture } from './x3d.mjs';
import { Box } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { IndexedLineSet } from './x3d.mjs';
import { MFInt32 } from './x3d.mjs';
import { Coordinate } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
import { PositionInterpolator } from './x3d.mjs';
import { MFFloat } from './x3d.mjs';
import { TimeSensor } from './x3d.mjs';
import { SFTime } from './x3d.mjs';
import { ROUTE } from './x3d.mjs';
import { Text } from './x3d.mjs';
import { MetadataSet } from './x3d.mjs';
import { FontStyle } from './x3d.mjs';
import { Collision } from './x3d.mjs';
import { OrientationInterpolator } from './x3d.mjs';
import { MFRotation } from './x3d.mjs';
import { Group } from './x3d.mjs';
import { Background } from './x3d.mjs';
import { MFColor } from './x3d.mjs';
import { ColorInterpolator } from './x3d.mjs';
import { X3DScript } from './x3d.mjs';
import { field } from './x3d.mjs';
import { ProtoDeclare } from './x3d.mjs';
import { ProtoInterface } from './x3d.mjs';
import { ProtoBody } from './x3d.mjs';
import { TouchSensor } from './x3d.mjs';
import { IS } from './x3d.mjs';
import { connect } from './x3d.mjs';
import { ExternProtoDeclare } from './x3d.mjs';
import { ProtoInstance } from './x3d.mjs';
import { fieldValue } from './x3d.mjs';
import { Sphere } from './x3d.mjs';
import { Cone } from './x3d.mjs';
import { Cylinder } from './x3d.mjs';
import { Inline } from './x3d.mjs';
import { IMPORT } from './x3d.mjs';
import { EXPORT } from './x3d.mjs';
import { Sound } from './x3d.mjs';
import { AudioClip } from './x3d.mjs';
import { MovieTexture } from './x3d.mjs';
import { Extrusion } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          { "#comment" : new CommentsBlock("comment #1") },
          { "#comment" : new CommentsBlock("comment #2") },
          { "#comment" : new CommentsBlock("comment #3") },
          { "#comment" : new CommentsBlock("comment #4") },
          component : new SFNode(
            new component({
              name : new SFString("Navigation"),
              level : new SFInt32(3)})),
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
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("Java.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface (SAI) Library")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.web3d.org/specifications/java/X3DJSAIL.html")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Java.java")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("6 September 2016")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("6 June 2018")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D Java Scene Access Interface Library (X3DJSAIL)")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("http://www.web3d.org/specifications/java/examples/HelloWorldProgram.java")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Netbeans http://www.netbeans.org")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Don Brutzman")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/Java.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("Java.txt")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("Java.x3dv")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("Java.wrl")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("Java.html")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("X3dValidator https://savage.nps.edu/X3dValidator?url=http://www.web3d.org/specifications/java/examples/Java.x3d")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("http://www.web3d.org/specifications/java/examples/Java.x3d")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")}),

            new meta({
              name : new SFString("info"),
              content : new SFString("tested sat: name value cannot contain embedded space character")}),

            new meta({
              name : new SFString("translated"),
              content : new SFString("06 June 2018")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("X3D JSON encoding: http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ViewpointGroup({
              description : new SFString("Available viewpoints")}),

            new WorldInfo({
              DEF : new SFString("WorldInfoDEF"),
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
              DEF : new SFString("scene.addChildLayerSetTest")})),

            new Transform({
              DEF : new SFString("LogoGeometryTransform"),
              translation : new SFVec3f([0,1.5,0]),
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              children : new MFNode([
                new Anchor({
                  description : new SFString("select for X3D Java SAI Library (X3DJSAIL) description"),
                  url : new MFString(["../X3DJSAIL.html","http://www.web3d.org/specifications/java/X3DJSAIL.html"]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Shape({
                      DEF : new SFString("BoxShape"),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
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
                              url : new MFString(["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","http://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"])}))})),
                      geometry : new SFNode(
                        new Box({
                          DEF : new SFString("test-NMTOKEN_regex.0123456789"),
                          cssClass : new SFString("untextured"),
                          size : new SFVec3f([2,2,2]),
                          solid : new SFBool(true)}))})])})])}),

            new Shape({
              DEF : new SFString("LineShape"),
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              appearance : new SFNode(
                new Appearance({
                  material : new SFNode(
                    new Material({
                      emissiveColor : new SFColor([0.6,0.19607843,0.8])}))})),
              geometry : new SFNode(
                new IndexedLineSet({
                  coordIndex : new MFInt32([0,1,2,3,4,0]),
                  { "#comment" : new CommentsBlock("Coordinate 3-tuple point count: 6") },
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
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              children : new MFNode([
                new Shape({
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          USE : new SFString("GreenMaterial")}))})),
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["X3D Java","SAI Library","X3DJSAIL"]),
                      { "#comment" : new CommentsBlock("Comment example A, plain quotation marks: He said, \"Immel did it!\"") },
                      { "#comment" : new CommentsBlock("Comment example B, XML character entities: He said, &quot;Immel did it!&quot;") },
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
                              value : new MFString(["checks MetadataSetObject addValue() method"])}))}),
                      fontStyle : new SFNode(
                        new FontStyle({
                          justify : new MFString(["MIDDLE","MIDDLE"])}))])}))}),

                new Collision({
                  enabled : new SFBool(true),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  { "#comment" : new CommentsBlock("test containerField='proxy'") },
                  proxy : new SFNode(
                    new Shape({
                      DEF : new SFString("ProxyShape"),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      { "#comment" : new CommentsBlock("alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'") },
                      { "#comment" : new CommentsBlock("alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'") },
                      { "#comment" : new CommentsBlock("alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})") },
                      { "#comment" : new CommentsBlock("reference: http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html") },
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["One, Two, Text","","He said, \"Immel did it!\" \"\""])}))}))}),
              { "#comment" : new CommentsBlock("It's a beautiful world") },
              { "#comment" : new CommentsBlock("... for you!") },
              { "#comment" : new CommentsBlock("https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)") }])}),
          { "#comment" : new CommentsBlock("repeatedly spin 180 degrees as a readable special effect") },

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
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              children : new MFNode([
                new Background({
                  DEF : new SFString("GradualBackground"),
                  skyColor : new MFColor([0,0,0]),
                  transparency : new SFFloat(0)}),

                new ColorInterpolator({
                  DEF : new SFString("ColorAnimator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFColor([0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1]),
                  { "#comment" : new CommentsBlock("AZURE to INDIGO and back again") }}),

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
                  toNode : new SFString("ColorAnimator")}),
              X3DScript : new SFNode(
                new X3DScript({
                  DEF : new SFString("colorTypeConversionScript"),
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("colorInput"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_MFCOLOR,
                      name : new SFString("colorsOutput"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}))])}),

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
                  { "#comment" : new CommentsBlock("Initial node of ProtoBody determines prototype node type") },
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.25),
                      diffuseColor : new SFColor([0.282435,0.085159,0.134462]),
                      shininess : new SFFloat(0.127273),
                      specularColor : new SFColor([0.276305,0.11431,0.139857])}),
                  { "#comment" : new CommentsBlock("[HelloWorldProgram diagnostic] should be connected to scene graph: ArtDeco01ProtoDeclare.getNodeType()=\"Material\"") },
                  { "#comment" : new CommentsBlock("presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types") },

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
              url : new MFString(["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"]),
              { "#comment" : new CommentsBlock("[HelloWorldProgram diagnostic] ArtDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"") },
              field : new MFNode([
                new field({
                  type : field.TYPE_SFSTRING,
                  name : new SFString("description"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("tooltip for descriptionField")})])}),
          { "#comment" : new CommentsBlock("Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place") },

            new Shape({
              DEF : new SFString("TestShape1"),
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              appearance : new SFNode(
                new Appearance({
                  DEF : new SFString("TestAppearance1"),
                  { "#comment" : new CommentsBlock("ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java") },
                  shaders : new SFNode(
                    new ProtoInstance({
                      name : new SFString("ArtDeco01Material"),
                      { "#comment" : new CommentsBlock("[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"") },
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("description"),
                          value : new SFString("ArtDeco01Material can substitute for a Material node")})])}))})),
              geometry : new SFNode(
                new Sphere({
                  radius : new SFFloat(0.001)}))}),

            new Shape({
              DEF : new SFString("TestShape2"),
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              appearance : new SFNode(
                new Appearance({
                  DEF : new SFString("TestAppearance2"),
                  { "#comment" : new CommentsBlock("ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java") },
                  shaders : new SFNode(
                    new ProtoInstance({
                      name : new SFString("ArtDeco02Material"),
                      DEF : new SFString("ArtDeco02MaterialDEF"),
                      { "#comment" : new CommentsBlock("[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"") },
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("description"),
                          value : new SFString("ArtDeco02Material can substitute for another Material node")})])}))})),
              geometry : new SFNode(
                new Cone({
                  bottomRadius : new SFFloat(0.001),
                  height : new SFFloat(0.001),
                  side : new SFBool(true),
                  bottom : new SFBool(true),
                  solid : new SFBool(true)}))}),

            new Shape({
              DEF : new SFString("TestShape3"),
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              appearance : new SFNode(
                new Appearance({
                  DEF : new SFString("TestAppearance3"),
                  { "#comment" : new CommentsBlock("ArtDeco02Material ProtoInstance USE goes here...") },
                  shaders : new SFNode(
                    new ProtoInstance({
                      USE : new SFString("ArtDeco02MaterialDEF")}))})),
              geometry : new SFNode(
                new Cylinder({
                  height : new SFFloat(0.001),
                  radius : new SFFloat(0.001)}))}),

            new Inline({
              DEF : new SFString("inlineSceneDef"),
              url : new MFString(["someOtherScene.x3d"]),
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1])}),

            new IMPORT({
              aS : new SFString("WorldInfoDEF2"),
              importedDEF : new SFString("WorldInfoDEF"),
              inlineDEF : new SFString("inlineSceneDef")}),

            new EXPORT({
              aS : new SFString("WorldInfoDEF3"),
              localDEF : new SFString("WorldInfoDEF")}),

            new ProtoDeclare({
              name : new SFString("MaterialModulator"),
              appinfo : new SFString("mimic a Material node and modulate fields as an animation effect"),
              documentation : new SFString("http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html"),
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
                  { "#comment" : new CommentsBlock("Only first node (the node type) is renderable, others are along for the ride") },
                  X3DScript : new SFNode(
                    new X3DScript({
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
                              protoField : new SFString("diffuseColor")})])}))])}))])}))}),
          { "#comment" : new CommentsBlock("Test success: declarative statement createDeclarativeShapeTests()") },

            new Group({
              DEF : new SFString("DeclarativeGroupExample"),
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              children : new MFNode([
                new Shape({
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  metadata : new MFNode([
                    new MetadataString({
                      name : new SFString("findThisNameValue"),
                      DEF : new SFString("FindableMetadataStringTest"),
                      value : new MFString(["test case"])}),
                  appearance : new SFNode(
                    new Appearance({
                      DEF : new SFString("DeclarativeAppearanceExample"),
                      { "#comment" : new CommentsBlock("DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance") },
                      shaders : new SFNode(
                        new ProtoInstance({
                          name : new SFString("MaterialModulator"),
                          DEF : new SFString("MyMaterialModulator")}))})),
                  geometry : new SFNode(
                    new Cone({
                      bottom : new SFBool(false),
                      bottomRadius : new SFFloat(0.05),
                      height : new SFFloat(0.1),
                      side : new SFBool(true),
                      solid : new SFBool(true)}))])}),
              { "#comment" : new CommentsBlock("Test success: declarativeGroup.addChild() singleton pipeline method") }])}),
          { "#comment" : new CommentsBlock("Test success: declarative statement addChild()") },
          { "#comment" : new CommentsBlock("Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>") },
          { "#comment" : new CommentsBlock("Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>") },
          { "#comment" : new CommentsBlock("Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found") },
          { "#comment" : new CommentsBlock("Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found") },
          { "#comment" : new CommentsBlock("Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found") },

            new Group({
              DEF : new SFString("TestFieldObjectsGroup"),
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              { "#comment" : new CommentsBlock("testFieldObjects() results") },
              { "#comment" : new CommentsBlock("SFBool default=true, true=true, false=false, negate()=true") },
              { "#comment" : new CommentsBlock("MFBool default=, initial=true false true, negate()=false true false") },
              { "#comment" : new CommentsBlock("SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0") },
              { "#comment" : new CommentsBlock("MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7") },
              { "#comment" : new CommentsBlock("... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=") },
              { "#comment" : new CommentsBlock("SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344") }}),

            new Sound({
              location : new SFVec3f([0,1.6,0]),
              { "#comment" : new CommentsBlock("set sound-ellipsoid location height at 1.6m to match typical avatar height") },
              source : new SFNode(
                new AudioClip({
                  description : new SFString("chimes"),
                  url : new MFString(["chimes.wav","http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"]),
                  loop : new SFBool(false),
                  pitch : new SFFloat(1),
                  startTime : new SFTime(0),
                  stopTime : new SFTime(0),
                  pauseTime : new SFTime(0),
                  resumeTime : new SFTime(0),
                  { "#comment" : new CommentsBlock("Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d") }}))}),

            new Sound({
              location : new SFVec3f([0,1.6,0]),
              { "#comment" : new CommentsBlock("set sound-ellipsoid location height at 1.6m to match typical avatar height") },
              source : new SFNode(
                new MovieTexture({
                  description : new SFString("mpgsys.mpg from ConformanceNist suite"),
                  url : new MFString(["mpgsys.mpg","http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"]),
                  { "#comment" : new CommentsBlock("Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d") },
                  { "#comment" : new CommentsBlock("Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\"") }}))}),
          { "#comment" : new CommentsBlock("Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true") },
          { "#comment" : new CommentsBlock("Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false") },
          { "#comment" : new CommentsBlock("Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false") },
          { "#comment" : new CommentsBlock("Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true") },
          { "#comment" : new CommentsBlock("Test success: CommentsBlock.isNode()=false, testComments.isNode()=false") },
          { "#comment" : new CommentsBlock("Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true") },

            new Shape({
              DEF : new SFString("ExtrusionShape"),
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              { "#comment" : new CommentsBlock("ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'") },
              { "#comment" : new CommentsBlock("ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'") },
              appearance : new SFNode(
                new Appearance({
                  DEF : new SFString("TransparentAppearance"),
                  material : new SFNode(
                    new Material({
                      transparency : new SFFloat(1)}))})),
              geometry : new SFNode(
                new Extrusion({
                  DEF : new SFString("ExampleExtrusion")}))})])}))});
console.log(X3D0.toXMLNode());
