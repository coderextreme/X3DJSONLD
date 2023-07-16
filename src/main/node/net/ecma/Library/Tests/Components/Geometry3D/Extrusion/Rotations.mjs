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
var MetadataBoolean = require('./x3d.mjs');
var MFBool = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var MetadataDouble = require('./x3d.mjs');
var MFDouble = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Extrusion = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
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
              content : new SFString("Sat, 06 Aug 2016 06:44:36 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("holger")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.4.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///home/holger/Projekte/Titania/Library/Tests/Extrusion/Rotations.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sat, 06 Aug 2016 19:29:42 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("Titania"),
                  DEF : new SFString("Titania"),
                  reference : new SFString("http://titania.create3000.de"),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("AngleGrid"),
                      DEF : new SFString("AngleGrid"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataBoolean({
                          name : new SFString("enabled"),
                          DEF : new SFString("enabled"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFBool([false])}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Grid"),
                      DEF : new SFString("Grid"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataBoolean({
                          name : new SFString("enabled"),
                          DEF : new SFString("enabled_1"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFBool([true])}))})),
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
                          value : new MFDouble([2.79252147674561,5.76409196853638,4.20475006103516])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("orientation"),
                          DEF : new SFString("orientation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([-0.882984838661416,0.437083442792234,0.17116027205798,0.886694786879645])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("centerOfRotation"),
                          DEF : new SFString("centerOfRotation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0.5,0,-1])}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Selection"),
                      DEF : new SFString("Selection"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("previous"),
                          DEF : new SFString("previous"),
                          reference : new SFString("http://titania.create3000.de")})),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("children"),
                          DEF : new SFString("children"),
                          reference : new SFString("http://titania.create3000.de"),
                          viewpoint : new SFNode(
                            new Viewpoint({
                              DEF : new SFString("_1"),
                              position : new SFVec3f([2.79252,5.76409,4.20475]),
                              orientation : new SFRotation([-0.882984838661416,0.437083442792234,0.17116027205798,0.886694786879645]),
                              centerOfRotation : new SFVec3f([0.5,0,-1])}))}))}))})])}),

            new Transform({
              DEF : new SFString("Extrusion"),
              translation : new SFVec3f([-2,0,0]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({})),
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString([", ","http://cdn.rawgit.com/create3000/Library/master/Textures/Game/rockgold.png, ","https://cdn.rawgit.com/create3000/Library/master/Textures/Game/rockgold.png, ","http://rawgit.com/create3000/Library/master/Textures/Game/rockgold.pnghttps://rawgit.com/create3000/Library/master/Textures/Game/rockgold.png"]),
                          repeatS : new SFBool(false),
                          repeatT : new SFBool(false)}))})),
                  geometry : new SFNode(
                    new Extrusion({
                      DEF : new SFString("Extrusion1"),
                      crossSection : new MFVec2f([0,1,1,0,0,-1]),
                      orientation : new MFRotation([0,0,1,0,0,0,1,0.199999999999999,0,0,1,0.4,0,0,1,0.6,0,0,1,0.8]),
                      spine : new MFVec3f([0,0,0,0,0,0,0,0,0,0,0,0,0,0,0])}))})])}),

            new Transform({
              DEF : new SFString("Extrusion_1"),
              translation : new SFVec3f([2,0,0]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({})),
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString([", ","http://cdn.rawgit.com/create3000/Library/master/Textures/Game/rockgold.png, ","https://cdn.rawgit.com/create3000/Library/master/Textures/Game/rockgold.png, ","http://rawgit.com/create3000/Library/master/Textures/Game/rockgold.pnghttps://rawgit.com/create3000/Library/master/Textures/Game/rockgold.png"]),
                          repeatS : new SFBool(false),
                          repeatT : new SFBool(false)}))})),
                  geometry : new SFNode(
                    new Extrusion({
                      DEF : new SFString("Extrusion2"),
                      creaseAngle : new SFFloat(0.580624),
                      crossSection : new MFVec2f([0,1,1,0,0,-1]),
                      orientation : new MFRotation([0,0,1,0,0,0,1,0.196349540624999,0,0,1,0.39269908125,0,0,1,0.589048621875,0,0,1,0.7853981625,0,0,1,0.981747703125,0,0,1,1.17809724375,0,0,1,1.374446784375,0,0,1,1.570796325,0,0,1,1.767145865625,0,0,1,1.96349540625,0,0,1,2.159844946875,0,0,1,2.3561944875,0,0,1,2.552544028125,0,0,1,2.74889356875,0,0,1,2.945243109375,0,0,1,3.14159265,0,0,1,3.337942190625,0,0,1,3.53429173125,0,0,1,3.730641271875,0,0,1,3.9269908125,0,0,1,4.123340353125,0,0,1,4.31968989375,0,0,1,4.516039434375,0,0,1,4.712388975,0,0,1,4.908738515625,0,0,1,5.10508805625,0,0,1,5.301437596875,0,0,1,5.4977871375,0,0,1,5.694136678125,0,0,1,5.89048621875,0,0,1,6.086835759375,0,0,1,0]),
                      spine : new MFVec3f([0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0])}))})])}),

            new Transform({
              DEF : new SFString("Extrusion_2"),
              translation : new SFVec3f([0,0,-2]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({})),
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString([", ","http://cdn.rawgit.com/create3000/Library/master/Textures/Game/rockgold.png, ","https://cdn.rawgit.com/create3000/Library/master/Textures/Game/rockgold.png, ","http://rawgit.com/create3000/Library/master/Textures/Game/rockgold.pnghttps://rawgit.com/create3000/Library/master/Textures/Game/rockgold.png"]),
                          repeatS : new SFBool(false),
                          repeatT : new SFBool(false)}))})),
                  geometry : new SFNode(
                    new Extrusion({
                      DEF : new SFString("Extrusion3"),
                      creaseAngle : new SFFloat(0.580624),
                      crossSection : new MFVec2f([0,1,0.19509,0.980785,0.382683,0.92388,0.55557,0.83147,0.707107,0.707107,0.83147,0.55557,0.92388,0.382683,0.980785,0.19509,1,-2.32051e-8,0.980785,-0.19509,0.92388,-0.382683,0.83147,-0.55557,0.707107,-0.707107,0.55557,-0.83147,0.382683,-0.92388,0.19509,-0.980785,-4.64102e-8,-1]),
                      orientation : new MFRotation([0,0,1,0,0,0,1,0.196349540624999,0,0,1,0.39269908125,0,0,1,0.589048621875,0,0,1,0.7853981625,0,0,1,0.981747703125,0,0,1,1.17809724375,0,0,1,1.374446784375,0,0,1,1.570796325,0,0,1,1.767145865625,0,0,1,1.96349540625,0,0,1,2.159844946875,0,0,1,2.3561944875,0,0,1,2.552544028125,0,0,1,2.74889356875,0,0,1,2.945243109375,0,0,1,3.14159265,0,0,1,3.337942190625,0,0,1,3.53429173125,0,0,1,3.730641271875,0,0,1,3.9269908125,0,0,1,4.123340353125,0,0,1,4.31968989375,0,0,1,4.516039434375,0,0,1,4.712388975,0,0,1,4.908738515625,0,0,1,5.10508805625,0,0,1,5.301437596875,0,0,1,5.4977871375,0,0,1,5.694136678125,0,0,1,5.89048621875,0,0,1,6.086835759375,0,0,1,0]),
                      spine : new MFVec3f([0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0])}))})])}),

            new Viewpoint({
              USE : new SFString("_1")})])}))});
console.log(X3D0.toXMLNode());
