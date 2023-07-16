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
var MFNode = require('./x3d.mjs');
var meta = require('./x3d.mjs');
var Scene = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var MetadataSet = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var MetadataDouble = require('./x3d.mjs');
var MFDouble = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var TwoSidedMaterial = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Extrusion = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Full"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("comment"),
              content : new SFString("World of Titania")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("Sat, 06 Aug 2016 21:20:09 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("holger")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.4.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///home/holger/.config/Titania/Materials/Test/Test9.x3dv")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sat, 06 Aug 2016 21:22:47 GMT")}),

            new meta({
              name : new SFString("titania magic"),
              content : new SFString("Material")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("Test9"),
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("Titania"),
                  DEF : new SFString("Titania"),
                  reference : new SFString("http://titania.create3000.de"),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("NavigationInfo"),
                      DEF : new SFString("NavigationInfo"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataString({
                          name : new SFString("type"),
                          DEF : new SFString("type"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFString(["EXAMINE"])}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Viewpoint"),
                      DEF : new SFString("Viewpoint"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("position"),
                          DEF : new SFString("position"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0.500247853117111,0.462496657119401,2.77530185804378])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("orientation"),
                          DEF : new SFString("orientation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([-0.630731817514386,0.72940230697818,0.264857790049507,0.249682745994581])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("centerOfRotation"),
                          DEF : new SFString("centerOfRotation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0,0,0])}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Selection"),
                      DEF : new SFString("Selection"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("children"),
                          DEF : new SFString("children"),
                          reference : new SFString("http://titania.create3000.de")})),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("previous"),
                          DEF : new SFString("previous"),
                          reference : new SFString("http://titania.create3000.de")}))}))})])}),

            new Transform({
              rotation : new SFRotation([0.577350269189626,-0.577350269189626,0.577350269189626,2.0943951023932]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new TwoSidedMaterial({
                          separateBackColor : new SFBool(true),
                          ambientIntensity : new SFFloat(0.253968),
                          diffuseColor : new SFColor([0.279399,0.589,0.394407]),
                          specularColor : new SFColor([0.39624,0.427003,0.00760637]),
                          shininess : new SFFloat(0.0378378),
                          backAmbientIntensity : new SFFloat(0.253968),
                          backDiffuseColor : new SFColor([0.117647,0.564706,1]),
                          backSpecularColor : new SFColor([0.39624,0.427003,0.00760637]),
                          backShininess : new SFFloat(0.0378378)}))})),
                  geometry : new SFNode(
                    new Extrusion({
                      beginCap : new SFBool(false),
                      endCap : new SFBool(false),
                      creaseAngle : new SFFloat(3.14159),
                      crossSection : new MFVec2f([0,1,0.0980171,0.995185,0.19509,0.980785,0.290285,0.95694,0.382683,0.92388,0.471397,0.881921,0.55557,0.83147,0.634393,0.77301,0.707107,0.707107,0.77301,0.634393,0.83147,0.55557,0.881921,0.471397,0.92388,0.382683,0.95694,0.290285,0.980785,0.19509,0.995185,0.0980171,1,6.12323e-17,0.995185,-0.0980171,0.980785,-0.19509,0.95694,-0.290285,0.92388,-0.382683,0.881921,-0.471397,0.83147,-0.55557,0.77301,-0.634393,0.707107,-0.707107,0.634393,-0.77301,0.55557,-0.83147,0.471397,-0.881921,0.382683,-0.92388,0.290285,-0.95694,0.19509,-0.980785,0.0980171,-0.995185,0,-1]),
                      orientation : new MFRotation([0,0,1,0,0,0,1,0.0981747704246805,0,0,1,0.196349540849361,0,0,1,0.294524311274043,0,0,1,0.392699081698724,0,0,1,0.490873852123405,0,0,1,0.589048622548087,0,0,1,0.687223392972767,0,0,1,0.785398163397448,0,0,1,0.883572933822129,0,0,1,0.98174770424681,0,0,1,1.07992247467149,0,0,1,1.17809724509617,0,0,1,1.27627201552085,0,0,1,1.37444678594553,0,0,1,1.47262155637022,0,0,1,1.5707963267949,0,0,1,1.66897109721958,0,0,1,1.76714586764426,0,0,1,1.86532063806894,0,0,1,1.96349540849362,0,0,1,2.0616701789183,0,0,1,2.15984494934298,0,0,1,2.25801971976766,0,0,1,2.35619449019234,0,0,1,2.45436926061703,0,0,1,2.55254403104171,0,0,1,2.65071880146639,0,0,1,2.74889357189107,0,0,1,2.84706834231575,0,0,1,2.94524311274043,0,0,1,3.04341788316511,0,0,1,3.14159265358979]),
                      spine : new MFVec3f([0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0])}))})])}),

            new Transform({
              rotation : new SFRotation([0.577350269189626,0.577350269189626,-0.577350269189626,2.0943951023932]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new TwoSidedMaterial({
                          separateBackColor : new SFBool(true),
                          ambientIntensity : new SFFloat(0.253968),
                          diffuseColor : new SFColor([0.279399,0.589,0.394407]),
                          specularColor : new SFColor([0.39624,0.427003,0.00760637]),
                          shininess : new SFFloat(0.0378378),
                          transparency : new SFFloat(1),
                          backAmbientIntensity : new SFFloat(0.253968),
                          backDiffuseColor : new SFColor([0.117647,0.564706,1]),
                          backSpecularColor : new SFColor([0.39624,0.427003,0.00760637]),
                          backShininess : new SFFloat(0.0378378)}))})),
                  geometry : new SFNode(
                    new Extrusion({
                      beginCap : new SFBool(false),
                      endCap : new SFBool(false),
                      solid : new SFBool(false),
                      ccw : new SFBool(false),
                      creaseAngle : new SFFloat(3.14159),
                      crossSection : new MFVec2f([0,1,0.0980171,0.995185,0.19509,0.980785,0.290285,0.95694,0.382683,0.92388,0.471397,0.881921,0.55557,0.83147,0.634393,0.77301,0.707107,0.707107,0.77301,0.634393,0.83147,0.55557,0.881921,0.471397,0.92388,0.382683,0.95694,0.290285,0.980785,0.19509,0.995185,0.0980171,1,6.12323e-17,0.995185,-0.0980171,0.980785,-0.19509,0.95694,-0.290285,0.92388,-0.382683,0.881921,-0.471397,0.83147,-0.55557,0.77301,-0.634393,0.707107,-0.707107,0.634393,-0.77301,0.55557,-0.83147,0.471397,-0.881921,0.382683,-0.92388,0.290285,-0.95694,0.19509,-0.980785,0.0980171,-0.995185,0,-1]),
                      orientation : new MFRotation([0,0,1,0,0,0,1,0.0981747704246805,0,0,1,0.196349540849361,0,0,1,0.294524311274043,0,0,1,0.392699081698724,0,0,1,0.490873852123405,0,0,1,0.589048622548087,0,0,1,0.687223392972767,0,0,1,0.785398163397448,0,0,1,0.883572933822129,0,0,1,0.98174770424681,0,0,1,1.07992247467149,0,0,1,1.17809724509617,0,0,1,1.27627201552085,0,0,1,1.37444678594553,0,0,1,1.47262155637022,0,0,1,1.5707963267949,0,0,1,1.66897109721958,0,0,1,1.76714586764426,0,0,1,1.86532063806894,0,0,1,1.96349540849362,0,0,1,2.0616701789183,0,0,1,2.15984494934298,0,0,1,2.25801971976766,0,0,1,2.35619449019234,0,0,1,2.45436926061703,0,0,1,2.55254403104171,0,0,1,2.65071880146639,0,0,1,2.74889357189107,0,0,1,2.84706834231575,0,0,1,2.94524311274043,0,0,1,3.04341788316511,0,0,1,3.14159265358979]),
                      spine : new MFVec3f([0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0])}))})])})])}))});
console.log(X3D0.toXMLNode());
