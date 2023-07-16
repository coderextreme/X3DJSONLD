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
var MFString = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Anchor = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var TextureTransform = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:07:08 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:07:08 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              translation : new SFVec3f([0,-0.13131,-4.24642]),
              children : new MFNode([
                new Anchor({
                  description : new SFString("Klicken Sie hier fr mehr Informationen."),
                  url : new MFString(["javascript: function tmt_winLaunch(theURL,winName,targetName,features) { eval(winName+\"=window.open('\"+theURL+\"','\"+targetName+\"','\"+features+\"')\") } tmt_winLaunch('/3D/html/mbenz/placeholder.html', 'place','place','resizable=yes,width=623,height=454,left=0,top=0');"]),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([0,0,4.24642]),
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([0.849871,1.24305,0.438164]),
                          rotation : new SFRotation([0,1,0,4.40104]),
                          scale : new SFVec3f([0.0166332,0.0166332,0.0166331]),
                          scaleOrientation : new SFRotation([0,-1,0,0.0475829]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      ambientIntensity : new SFFloat(0),
                                      diffuseColor : new SFColor([0,0,0]),
                                      emissiveColor : new SFColor([0.0105023,0,0.255319])}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Klicken Sie hier für mehr Informationen"]),
                                  length : new MFFloat([0]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"]),
                                      size : new SFFloat(14),
                                      justify : new MFString(["MIDDLE"])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([0.87594,1.32607,0.433684]),
                          rotation : new SFRotation([0,1,0,4.40105]),
                          scale : new SFVec3f([1.04406,0.312523,0.572791]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      DEF : new SFString("_1"),
                                      url : new MFString(["reflect1.png"])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  texCoordIndex : new MFInt32([8,2,3,9,-1,0,1,10,11,-1,6,4,5,7,-1]),
                                  coordIndex : new MFInt32([4,2,3,5,-1,0,1,6,7,-1,6,4,5,7,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,0,0.817739,0.049106,0.806606,0.16361,-0.0111324,0.114504,0.285304,0.614504,0.047491,0.614504,0.275742,0.535128,0.0379284,0.535128,0.817739,0.049106,0,0,0.799982,0.181014,-0.0177568,0.131908])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-2,-0.590364,0,2,-0.590364,0,2,0.5,0,-2,0.5,0,2,0.405434,0,-2,0.405434,0,2,-0.475578,0,-2,-0.475578,0])}))}))})])})])})])})])}),

            new Transform({
              translation : new SFVec3f([0.680146,3.24833,0.131503]),
              rotation : new SFRotation([0,1,0,4.40104]),
              scale : new SFVec3f([0.0166332,0.0166332,0.0166331]),
              scaleOrientation : new SFRotation([0,-1,0,0.0411904]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          ambientIntensity : new SFFloat(0),
                          diffuseColor : new SFColor([0,0,0]),
                          emissiveColor : new SFColor([0.0105023,0,0.255319])}))})),
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["Wir zeigen Ihnen, wo es langgeht!"]),
                      length : new MFFloat([0]),
                      fontStyle : new SFNode(
                        new FontStyle({
                          family : new MFString(["SANS"]),
                          size : new SFFloat(24),
                          justify : new MFString(["MIDDLE"])}))}))})])}),

            new Transform({
              translation : new SFVec3f([1.62071,1.56621,-2.5691]),
              rotation : new SFRotation([0,-1,0,1.43136]),
              scale : new SFVec3f([1.83524,1.83524,1.83524]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["nposter7.jpg"])})),
                      textureTransform : new SFNode(
                        new TextureTransform({}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      coordIndex : new MFInt32([3,2,1,0,-1,4,5,6,7,-1]),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([-0.5,-1.21971,0,0.5,-1.21971,0,0.5,-2.19099,0,-0.5,-2.19099,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])}),

            new Transform({
              DEF : new SFString("gpswall"),
              translation : new SFVec3f([-4.9369,0.156386,-4.67969]),
              scale : new SFVec3f([0.365073,0.310739,0.365073]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new ImageTexture({
                          DEF : new SFString("_2"),
                          url : new MFString(["reflect1.png"])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      solid : new SFBool(false),
                      convex : new SFBool(false),
                      creaseAngle : new SFFloat(1.09275),
                      colorIndex : new MFInt32([2,0,0,4,-1,5,0,0,7,-1,8,1,0,6,-1,3,0,1,9,-1,0,0,10,12,-1,10,5,7,12,-1,0,0,13,14,-1,13,2,4,14,-1,0,1,16,11,-1,16,8,6,11,-1,1,0,15,17,-1,15,3,9,17,-1]),
                      texCoordIndex : new MFInt32([10,9,7,11,-1,12,2,3,13,-1,14,5,2,12,-1,11,7,5,14,-1,0,1,15,16,-1,26,27,28,29,-1,6,8,17,18,-1,20,21,23,22,-1,1,4,19,15,-1,24,25,27,26,-1,4,6,18,19,-1,22,23,25,24,-1]),
                      coordIndex : new MFInt32([10,9,7,11,-1,12,2,3,13,-1,14,5,2,12,-1,11,7,5,14,-1,0,1,15,16,-1,15,12,13,16,-1,6,8,17,18,-1,17,10,11,18,-1,1,4,19,15,-1,19,14,12,15,-1,4,6,18,19,-1,18,11,14,19,-1]),
                      color : new SFNode(
                        new Color({
                          color : new MFColor([0.648936,0.634597,0.645351,1,1,1,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,1,1,1,1,1,1,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,1,1,1,1,1,1])})),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([0,0,0.380598,0.0899431,-0.535154,3.96498,-0.915752,3.87504,0.860324,0.203312,-0.0554278,4.07835,1.39199,0.328955,0.476236,4.204,1.92365,0.454598,1.0079,4.32964,1.03128,4.23073,0.499611,4.10508,-0.511779,3.86607,-0.892376,3.77613,-0.0320526,3.97944,0.353306,0.205428,-0.0272913,0.115484,1.89636,0.570083,1.3647,0.44444,0.833032,0.318797,-0.0707566,0.175867,-0.12258,0.645321,-0.122945,0.169169,-0.174768,0.638623,-0.175133,0.162471,-0.226956,0.631925,-0.222223,0.156428,-0.274046,0.625881,-0.311406,0.621087,-0.259583,0.151633])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([10.866,0.03,23.152,14.955,0.03,19.063,14.955,10.438,19.063,10.866,10.438,23.152,17.581,0.03,13.909,17.581,10.438,13.909,18.486,0.03,8.197,18.486,10.438,8.197,17.581,0.03,2.485,17.581,10.438,2.485,17.581,10.1723,2.485,18.486,10.1723,8.197,14.955,10.1723,19.063,10.866,10.1723,23.152,17.581,10.1723,13.909,14.955,0.340181,19.063,10.866,0.34018,23.152,17.581,0.340181,2.485,18.486,0.34018,8.197,17.581,0.340181,13.909])}))}))})])}),

            new Transform({
              translation : new SFVec3f([-4.9369,0.156386,-4.67969]),
              scale : new SFVec3f([0.365073,0.310739,0.365073]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new ImageTexture({
                          USE : new SFString("_2")}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      solid : new SFBool(false),
                      convex : new SFBool(false),
                      creaseAngle : new SFFloat(1.09275),
                      colorIndex : new MFInt32([4,0,0,2,-1,7,0,0,5,-1,6,0,1,8,-1,9,1,0,3,-1,12,10,0,0,-1,12,7,5,10,-1,14,13,0,0,-1,14,4,2,13,-1,11,16,1,0,-1,11,6,8,16,-1,17,15,0,1,-1,17,9,3,15,-1]),
                      texCoordIndex : new MFInt32([11,7,9,10,-1,13,3,2,12,-1,12,2,5,14,-1,14,5,7,11,-1,16,15,1,0,-1,29,28,27,26,-1,18,17,8,6,-1,22,23,21,20,-1,15,19,4,1,-1,26,27,25,24,-1,19,18,6,4,-1,24,25,23,22,-1]),
                      coordIndex : new MFInt32([11,7,9,10,-1,13,3,2,12,-1,12,2,5,14,-1,14,5,7,11,-1,16,15,1,0,-1,16,13,12,15,-1,18,17,8,6,-1,18,11,10,17,-1,15,19,4,1,-1,15,12,14,19,-1,19,18,6,4,-1,19,14,11,18,-1]),
                      color : new SFNode(
                        new Color({
                          color : new MFColor([0.648936,0.634597,0.645351,1,1,1,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,1,1,1,1,1,1,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,0.648936,0.634597,0.645351,1,1,1,1,1,1])})),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([0,0,0.380598,0.0899431,-0.535154,3.96498,-0.915752,3.87504,0.860324,0.203312,-0.0554278,4.07835,1.39199,0.328955,0.476236,4.204,1.92365,0.454598,1.0079,4.32964,1.03128,4.23073,0.499611,4.10508,-0.511779,3.86607,-0.892376,3.77613,-0.0320526,3.97944,0.353306,0.205428,-0.0272913,0.115484,1.89636,0.570083,1.3647,0.44444,0.833032,0.318797,-0.0707566,0.175867,-0.12258,0.645321,-0.122945,0.169169,-0.174768,0.638623,-0.175133,0.162471,-0.226956,0.631925,-0.222223,0.156428,-0.274046,0.625881,-0.311406,0.621087,-0.259583,0.151633])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([10.866,-1.09944,23.152,14.955,-1.09944,19.063,14.955,-11.5074,19.063,10.866,-11.5074,23.152,17.581,-1.09944,13.909,17.581,-11.5074,13.909,18.486,-1.09944,8.197,18.486,-11.5074,8.197,17.581,-1.09944,2.485,17.581,-11.5074,2.485,17.581,-11.2417,2.485,18.486,-11.2417,8.197,14.955,-11.2417,19.063,10.866,-11.2417,23.152,17.581,-11.2417,13.909,14.955,-1.40962,19.063,10.866,-1.40962,23.152,17.581,-1.40962,2.485,18.486,-1.40962,8.197,17.581,-1.40962,13.909])}))}))})])}),

            new Transform({
              translation : new SFVec3f([0.70189,3.3865,0.136921]),
              rotation : new SFRotation([0,1,0,4.40105]),
              scale : new SFVec3f([1.56978,0.545617,1]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new ImageTexture({
                          USE : new SFString("_1")}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      solid : new SFBool(false),
                      texCoordIndex : new MFInt32([8,2,3,9,-1,0,1,10,11,-1,6,4,5,7,-1]),
                      coordIndex : new MFInt32([4,2,3,5,-1,0,1,6,7,-1,6,4,5,7,-1]),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([0,0,0.817739,0.049106,0.806606,0.16361,-0.0111324,0.114504,0.285304,0.614504,0.047491,0.614504,0.275742,0.535128,0.0379284,0.535128,0.817739,0.049106,0,0,0.799982,0.181014,-0.0177568,0.131908])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([-2,-0.590364,0,2,-0.590364,0,2,0.5,0,-2,0.5,0,2,0.405434,0,-2,0.405434,0,2,-0.475578,0,-2,-0.475578,0])}))}))})])}),

            new Transform({
              translation : new SFVec3f([0.857668,2.29135,0.413938]),
              rotation : new SFRotation([0,1,0,4.40104]),
              scale : new SFVec3f([0.0166332,0.0166332,0.0166331]),
              scaleOrientation : new SFRotation([0,-1,0,0.0512221]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          ambientIntensity : new SFFloat(0),
                          diffuseColor : new SFColor([0,0,0]),
                          emissiveColor : new SFColor([0.0105023,0,0.255319])}))})),
                  geometry : new SFNode(
                    new Text({
                      string : new MFString([", ","Sicher ans Ziel mit Fahrzeugen von, ","Mercedes-Benz., ","Den besten Weg dorthin finden Siemit Hilfe unseres neuen GPS-Systems."]),
                      length : new MFFloat([0]),
                      fontStyle : new SFNode(
                        new FontStyle({
                          family : new MFString(["SANS"]),
                          size : new SFFloat(14),
                          justify : new MFString(["MIDDLE"])}))}))})])}),

            new Transform({
              translation : new SFVec3f([0.538423,-4.54485e-7,0.0512834]),
              rotation : new SFRotation([-0.9843,-0.124808,-0.124808,1.58662]),
              scale : new SFVec3f([3.84786,15.2707,3.84786]),
              scaleOrientation : new SFRotation([-5.11952e-7,-1,4.71969e-9,0.0184387]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["shadow70-128.png"])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      coordIndex : new MFInt32([0,1,2,3,-1]),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])}),

            new Transform({
              translation : new SFVec3f([-0.392339,1.56621,3.17072]),
              rotation : new SFRotation([0,1,0,3.92957]),
              scale : new SFVec3f([1.34079,1.83524,1.83524]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["nposter4.jpg"])})),
                      textureTransform : new SFNode(
                        new TextureTransform({}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      coordIndex : new MFInt32([3,2,1,0,-1,4,5,6,7,-1]),
                      texCoord : new SFNode(
                        new TextureCoordinate({
                          point : new MFVec2f([0.895677,0.00903876,0.480148,0.00903876,0.480148,0.990512,0.895677,0.990512,0.895677,0.00903876,0.480148,0.00903876,0.480148,0.990512,0.895677,0.990512])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([-0.5,-1.21971,0,0.5,-1.21971,0,0.5,-2.19099,0,-0.5,-2.19099,0,-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])})])}))});
console.log(X3D0.toXMLNode());
