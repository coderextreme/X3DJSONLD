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
var Group = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var VisibilitySensor = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Billboard = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
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
              content : new SFString("Thu, 05 Nov 2015 03:28:56 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.2.0, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 05 Nov 2015 03:28:56 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Group({
              children : new MFNode([
                new WorldInfo({
                  info : new MFString([", ","Created in Titania, ","Packaged by CosmoPackagePackaged by CosmoPackage"])}),

                new Transform({
                  DEF : new SFString("level2"),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("VisibilitySensor"),
                      children : new MFNode([
                        new VisibilitySensor({
                          DEF : new SFString("_1"),
                          size : new SFVec3f([0.7,0.7,0.7])})])}),

                    new Transform({
                      DEF : new SFString("Bonus"),
                      children : new MFNode([
                        new Group({
                          DEF : new SFString("rotate"),
                          children : new MFNode([
                            new Group({
                              DEF : new SFString("Bonus_1"),
                              children : new MFNode([
                                new TimeSensor({
                                  DEF : new SFString("Time"),
                                  cycleInterval : new SFTime(10),
                                  loop : new SFBool(true),
                                  startTime : new SFTime(952980296.19053),
                                  stopTime : new SFTime(952972802.072958)})])}),

                            new OrientationInterpolator({
                              DEF : new SFString("BonusRotationInterp"),
                              key : new MFFloat([0,0.25,0.5,0.75,1]),
                              keyValue : new MFRotation([0,0,1,0,0,-1,0,1.57079,0,1,0,3.14159,0,1,0,1.5708,0,0,1,0])})])}),

                        new Transform({
                          DEF : new SFString("sanduhr"),
                          children : new MFNode([
                            new Transform({
                              rotation : new SFRotation([0,0,1,0.287199]),
                              children : new MFNode([
                                new Shape({
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      colorIndex : new MFInt32([0,2,2,0,-1,0,2,2,0,-1,4,4,4,4,-1,0,2,2,0,-1,1,1,1,1,-1,0,2,2,0,-1,2,2,2,2,-1,2,0,0,2,-1,1,1,1,1,-1,2,0,0,2,-1,3,3,3,3,-1,2,0,0,2,-1]),
                                      coordIndex : new MFInt32([0,1,2,3,-1,3,2,4,5,-1,6,0,3,5,-1,5,4,7,6,-1,1,7,4,2,-1,6,7,1,0,-1,8,9,10,11,-1,11,10,12,13,-1,14,8,11,13,-1,13,12,15,14,-1,9,15,12,10,-1,14,15,9,8,-1]),
                                      color : new SFNode(
                                        new Color({
                                          color : new MFColor([0.0481283,0,0.00527964,0.566845,0.0076234,0,0.240642,0,0,0.0481283,0.029009,0.0252846,0.0213904,0,0.00234651])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.15312,0.36392,0.15283,0.15312,0.320038,0.152865,0.15312,0.319794,-0.153375,0.15312,0.363676,-0.15341,-0.15312,0.319794,-0.153375,-0.15312,0.363676,-0.15341,-0.15312,0.36392,0.15283,-0.15312,0.320038,0.152865,0.15312,-0.332721,0.153385,0.15312,-0.376602,0.15342,0.15312,-0.376846,-0.15282,0.15312,-0.332964,-0.152855,-0.15312,-0.376846,-0.15282,-0.15312,-0.332964,-0.152855,-0.15312,-0.332721,0.153385,-0.15312,-0.376602,0.15342])}))}))})])}),

                            new Transform({
                              DEF : new SFString("obj"),
                              rotation : new SFRotation([0,0,1,0.287199]),
                              children : new MFNode([
                                new Shape({
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      colorIndex : new MFInt32([2,1,3,-1,0,1,1,-1,2,1,0,-1,0,1,1,-1,2,1,3,-1,0,1,1,-1,2,1,0,-1,0,1,1,-1,2,1,3,-1,0,1,1,-1,2,1,0,-1,0,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,0,1,-1,1,2,3,-1,1,0,1,-1,1,2,0,-1,1,0,1,-1,1,2,3,-1,1,0,1,-1,1,2,0,-1,1,0,1,-1,1,2,3,-1,1,0,1,-1,1,2,0,-1]),
                                      coordIndex : new MFInt32([0,1,2,-1,2,1,3,-1,2,3,4,-1,4,3,5,-1,4,5,6,-1,6,5,7,-1,6,7,8,-1,8,7,9,-1,8,9,10,-1,10,9,11,-1,10,11,12,-1,12,11,13,-1,14,15,16,-1,16,15,17,-1,16,17,18,-1,18,17,19,-1,18,19,20,-1,20,19,21,-1,20,21,22,-1,22,21,23,-1,22,23,24,-1,24,23,25,-1,24,25,26,-1,26,25,27,-1,28,29,30,-1,30,29,31,-1,30,31,32,-1,32,31,33,-1,32,33,34,-1,34,33,35,-1,34,35,36,-1,36,35,37,-1,36,37,38,-1,38,37,39,-1,38,39,40,-1,40,39,41,-1]),
                                      color : new SFNode(
                                        new Color({
                                          color : new MFColor([1,0,0.043376,1,0.442751,0,0.540107,0.0467591,0,0.791444,0.292867,0.280675])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.151133,-0.342532,-4.8137e-12,0.0123568,-0.0179521,-7.19952e-13,0.0755665,-0.342532,0.130885,0.0061784,-0.0179521,0.0107013,-0.0755665,-0.342532,0.130885,-0.0061784,-0.0179521,0.0107013,-0.151133,-0.342532,-5.19143e-12,-0.0123568,-0.0179521,-1.09976e-12,-0.0755665,-0.342532,-0.130885,-0.0061784,-0.0179521,-0.0107013,0.0755665,-0.342532,-0.130885,0.0061784,-0.0179521,-0.0107013,0.151133,-0.342532,-4.8137e-12,0.0123568,-0.0179521,-7.19952e-13,0.0123568,-0.0179521,-7.19952e-13,0.0133073,0.0236975,4.6467e-12,0.0061784,-0.0179521,0.0107013,0.00665363,0.0236975,0.0115244,-0.0061784,-0.0179521,0.0107013,-0.00665363,0.0236975,0.0115244,-0.0123568,-0.0179521,-1.09976e-12,-0.0133073,0.0236975,3.53806e-12,-0.0061784,-0.0179521,-0.0107013,-0.00665363,0.0236975,-0.0115244,0.0061784,-0.0179521,-0.0107013,0.00665363,0.0236975,-0.0115244,0.0123568,-0.0179521,-7.19952e-13,0.0133073,0.0236975,4.6467e-12,0.0133073,0.0236975,4.6467e-12,0.152083,0.342533,-4.90405e-12,0.00665363,0.0236975,0.0115244,0.0760416,0.342533,0.131708,-0.00665363,0.0236975,0.0115244,-0.0760416,0.342533,0.131708,-0.0133073,0.0236975,3.53806e-12,-0.152083,0.342533,-5.10109e-12,-0.00665363,0.0236975,-0.0115244,-0.0760416,0.342533,-0.131708,0.00665363,0.0236975,-0.0115244,0.0760416,0.342533,-0.131708,0.0133073,0.0236975,4.6467e-12,0.152083,0.342533,-4.90405e-12])}))}))})])}),

                            new Transform({
                              rotation : new SFRotation([0,0,1,0.287199]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      solid : new SFBool(false),
                                      colorIndex : new MFInt32([0,1,1,0,-1,1,1,0,0,-1,0,0,1,1,-1,0,1,1,0,-1,0,0,1,1,-1,0,1,1,0,-1,1,1,0,0,-1,0,1,1,0,-1]),
                                      coordIndex : new MFInt32([0,1,2,3,-1,4,5,0,3,-1,9,8,7,6,-1,9,11,10,8,-1,15,14,13,12,-1,15,17,16,14,-1,18,19,20,21,-1,20,22,23,21,-1]),
                                      color : new SFNode(
                                        new Color({
                                          color : new MFColor([0.919786,0.349022,0.089409,0.28877,0.0554722,0.0688231])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.115194,-0.00911173,0.149401,-0.115194,0.322477,0.149137,-0.143802,0.322454,0.120527,-0.143802,-0.0091345,0.120791,-0.143802,-0.340723,0.121055,-0.115194,-0.3407,0.149665,0.148124,-0.340725,0.118842,0.119514,-0.340702,0.147451,0.119514,-0.00911331,0.147187,0.148124,-0.00913608,0.118578,0.119514,0.322475,0.146923,0.148124,0.322453,0.118313,0.117301,-0.340934,-0.14447,0.14591,-0.340912,-0.11586,0.14591,-0.00932315,-0.116124,0.117301,-0.00934592,-0.144734,0.14591,0.322265,-0.116389,0.117301,0.322243,-0.144998,-0.117407,-0.340933,-0.142257,-0.146016,-0.34091,-0.113647,-0.146016,-0.0093213,-0.113911,-0.117407,-0.00934407,-0.142521,-0.146016,0.322267,-0.114175,-0.117407,0.322245,-0.142785])}))}))})])})])})])}),

                    new Transform({
                      DEF : new SFString("Glow2"),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("Glow"),
                          children : new MFNode([
                            new Billboard({
                              axisOfRotation : new SFVec3f([0,0,0]),
                              children : new MFNode([
                                new Transform({
                                  DEF : new SFString("glow"),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          texture : new SFNode(
                                            new ImageTexture({
                                              url : new MFString(["bt-glow.png"])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          colorIndex : new MFInt32([1,1,1,-1,1,1,1,-1]),
                                          coordIndex : new MFInt32([1,2,0,-1,2,3,0,-1]),
                                          color : new SFNode(
                                            new Color({
                                              color : new MFColor([0.8,0.198115,0,1,0.0603581,0])})),
                                          texCoord : new SFNode(
                                            new TextureCoordinate({
                                              point : new MFVec2f([0,0,1,0,1,1,0,1,1,0.5,0,0.5,0.5,1,0.5,0])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.5,-0.502186,0,0.5,-0.502186,0,0.5,0.497814,0,-0.5,0.497814,0])}))}))})])})])})])})])})])})])}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("isActive"),
              toNode : new SFString("Time"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("Time"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("exitTime"),
              toNode : new SFString("Time"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Time"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("BonusRotationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("BonusRotationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Bonus"),
              toField : new SFString("set_rotation")})])}))});
console.log(X3D0.toXMLNode());
