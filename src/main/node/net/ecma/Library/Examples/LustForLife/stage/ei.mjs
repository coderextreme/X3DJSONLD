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
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Full"),
      version : new SFString("3.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("comment"),
              content : new SFString("World of Titania")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("Sun, 22 Mar 2015 12:16:40 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.6, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sun, 22 Mar 2015 12:16:40 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Transform({
              DEF : new SFString("rotes_Ei"),
              translation : new SFVec3f([7.51904,6.81411,5.22572]),
              rotation : new SFRotation([0.995439,-0.0674618,-0.067462,4.70782]),
              scale : new SFVec3f([1.22008,1.75404,1.22008]),
              scaleOrientation : new SFRotation([4.86686e-7,1,-5.64468e-8,0.524985]),
              children : new MFNode([
                new Shape({
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      solid : new SFBool(false),
                      colorIndex : new MFInt32([4,4,4,4,-1,0,1,0,0,-1,0,0,0,0,0,-1,0,0,0,2,-1,4,4,4,4,-1,0,0,0,0,-1,0,0,2,0,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,11,4,-1,4,11,2,4,-1,4,2,11,4,-1,4,11,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,2,4,-1,4,2,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,4,4,4,4,-1,0,9,0,0,-1,0,0,0,0,-1,0,0,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,12,0,0,-1,3,2,0,0,-1,2,3,0,0,-1,10,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,2,0,0,-1,2,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,6,0,-1,0,0,7,6,-1,0,0,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,5,6,8,8,-1,0,0,0,0,-1,0,7,13,0,-1]),
                      coordIndex : new MFInt32([1,0,88,87,-1,90,91,88,87,-1,3,170,1,4,5,-1,92,90,87,89,-1,4,1,87,89,-1,7,5,4,6,-1,95,92,89,93,-1,4,89,93,6,-1,6,93,94,9,-1,14,98,99,13,-1,97,99,13,12,-1,94,97,12,9,-1,14,98,102,17,-1,17,102,103,18,-1,18,103,106,21,-1,21,106,107,22,-1,22,107,110,25,-1,25,110,111,26,-1,26,111,114,29,-1,29,114,115,30,-1,30,115,118,33,-1,33,118,119,34,-1,34,119,122,37,-1,37,122,123,38,-1,38,123,126,41,-1,41,126,127,42,-1,42,127,130,45,-1,45,130,131,46,-1,46,131,134,49,-1,49,134,135,50,-1,50,135,138,53,-1,53,138,139,54,-1,54,139,142,57,-1,57,142,143,58,-1,58,143,146,61,-1,61,146,147,62,-1,62,147,150,65,-1,65,150,151,66,-1,66,151,154,69,-1,69,154,155,70,-1,70,155,158,73,-1,73,158,159,74,-1,74,159,162,77,-1,77,162,163,80,-1,80,163,166,83,-1,83,166,167,85,-1,85,86,84,83,-1,80,83,84,82,-1,77,79,80,82,81,78,-1,76,74,77,78,-1,96,95,93,94,-1,100,96,94,97,-1,101,100,97,99,-1,99,98,102,104,101,-1,102,103,105,104,-1,103,106,108,105,-1,106,107,109,108,-1,107,110,112,109,-1,110,111,113,112,-1,111,114,116,113,-1,114,115,117,116,-1,115,118,120,117,-1,118,119,121,120,-1,119,122,124,121,-1,122,123,125,124,-1,123,126,128,125,-1,126,127,129,128,-1,127,130,132,129,-1,130,131,133,132,-1,131,134,136,133,-1,134,135,137,136,-1,135,138,140,137,-1,138,139,141,140,-1,139,142,144,141,-1,142,143,145,144,-1,143,146,148,145,-1,146,147,149,148,-1,147,150,152,149,-1,150,151,153,152,-1,151,154,156,153,-1,154,155,157,156,-1,155,158,160,157,-1,158,159,161,160,-1,159,162,164,161,-1,162,163,165,164,-1,163,166,168,165,-1,166,167,169,168,-1,10,7,6,8,9,11,-1,15,11,9,12,-1,12,13,16,15,-1,19,16,13,14,17,-1,20,19,17,18,-1,23,20,18,21,-1,21,22,24,23,-1,76,75,73,74,-1,75,72,70,73,-1,72,71,69,70,-1,71,68,66,69,-1,68,67,65,66,-1,67,64,62,65,-1,64,63,61,62,-1,63,60,58,61,-1,60,59,57,58,-1,59,56,54,57,-1,56,55,53,54,-1,55,52,50,53,-1,52,51,49,50,-1,51,48,46,49,-1,48,47,45,46,-1,47,44,42,45,-1,44,43,41,42,-1,40,39,37,38,-1,39,36,34,37,-1,38,41,43,40,-1,36,35,33,34,-1,35,32,30,33,-1,32,31,29,30,-1,31,28,26,29,-1,28,27,25,26,-1,27,24,22,25,-1,85,167,169,86,-1,1,170,171,0,-1,170,3,2,171,-1]),
                      color : new SFNode(
                        new Color({
                          color : new MFColor([1,0,0,0.283422,0,0,1,0.208556,0.208556,1,0.315508,0.315508,0.850267,0,0,0.73262,0,0,0.57754,0,0,0.219251,0,0,0.15508,0,0,0.251337,0,0,1,0.26738,0.26738,1,0.240642,0.240642,1,0.283422,0.283422,0,0,0])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([-3.12399,-2.98571,-5.57544,-4.1408,-2.98571,-2.49481,-3.12399,0,-5.57544,-4.1408,0,-2.49481,-4.38336,-2.98571,-1.57525,-4.38336,0,-1.57525,-4.58247,-2.98571,-0.659568,-4.58247,0,-0.659568,-4.6238,-2.98571,-0.347054,-4.64436,-2.98571,-0.0855082,-4.6238,0,-0.347054,-4.64436,0,-0.0855082,-4.65854,-2.98571,0.380743,-4.6392,-2.98571,0.806243,-4.6392,-3.39362,0.806243,-4.65854,0,0.380743,-4.6392,0,0.806243,-4.5817,-3.39362,1.21636,-4.48138,-3.39362,1.63645,-4.5817,0,1.21636,-4.48138,0,1.63645,-4.33484,-3.39362,2.08429,-4.14353,-3.39362,2.54727,-4.33484,0,2.08429,-4.14353,0,2.54727,-3.91016,-3.39362,3.00515,-3.63743,-3.39362,3.43772,-3.91016,0,3.00515,-3.63743,0,3.43772,-3.32817,-3.39362,3.82837,-2.98582,-3.39362,4.17487,-3.32817,0,3.82837,-2.98582,0,4.17487,-2.61396,-3.39362,4.4786,-2.21619,-3.39362,4.74093,-2.61396,0,4.4786,-2.21619,0,4.74093,-1.79623,-3.39362,4.96224,-1.3584,-3.39362,5.13894,-1.79623,0,4.96224,-1.3584,0,5.13894,-0.907174,-3.39362,5.26645,-0.447016,-3.39362,5.34017,-0.907174,0,5.26645,-0.447016,0,5.34017,0.0172123,-3.39362,5.35708,0.479082,-3.39362,5.3203,0.0172123,0,5.35708,0.479082,0,5.3203,0.931773,-3.39362,5.2345,1.36846,-3.39362,5.10435,0.931773,0,5.2345,1.36846,0,5.10435,1.78315,-3.39362,4.93429,2.17312,-3.39362,4.7278,1.78315,0,4.93429,2.17312,0,4.7278,2.53644,-3.39362,4.48813,2.87122,-3.39362,4.2185,2.53644,0,4.48813,2.87122,0,4.2185,3.17647,-3.39362,3.91999,3.45485,-3.39362,3.58495,3.17647,0,3.91999,3.45485,0,3.58495,3.70997,-3.39362,3.20357,3.9454,-3.39362,2.76602,3.70997,0,3.20357,3.9454,0,2.76602,4.16131,-3.39362,2.26656,4.34417,-3.39362,1.71571,4.16131,0,2.26656,4.34417,0,1.71571,4.47702,-3.39362,1.12806,4.54289,-3.39362,0.518212,4.47702,0,1.12806,4.54289,0,0.518212,4.52613,-3.39362,-0.115583,4.52613,0,-0.115583,4.48339,-3.39362,-0.461396,4.41621,-3.39362,-0.840385,4.48339,0,-0.461396,4.41621,0,-0.840385,4.20456,-3.39362,-1.73558,4.20456,0,-1.73558,3.86795,-3.39362,-2.92565,3.86795,0,-2.92565,-4.34736,-2.98571,-2.55676,-3.35083,-2.98571,-5.57541,-4.59198,-2.98571,-1.62894,-4.34736,0,-2.55676,-3.35083,0,-5.57541,-4.59198,0,-1.62894,-4.79442,-2.98571,-0.695396,-4.85937,-2.98571,-0.0986094,-4.79442,0,-0.695396,-4.85937,0,-0.0986094,-4.87444,-2.98571,0.388526,-4.85379,-3.39362,0.832426,-4.85379,-2.98571,0.832426,-4.87444,0,0.388526,-4.85379,0,0.832426,-4.79322,-3.39362,1.25933,-4.68855,-3.39362,1.69549,-4.79322,0,1.25933,-4.68855,0,1.69549,-4.53665,-3.39362,2.15941,-4.33868,-3.39362,2.6386,-4.53665,0,2.15941,-4.33868,0,2.6386,-4.09685,-3.39362,3.11287,-3.81339,-3.39362,3.56199,-4.09685,0,3.11287,-3.81339,0,3.56199,-3.49079,-3.39362,3.96925,-3.13272,-3.39362,4.33189,-3.49079,0,3.96925,-3.13272,0,4.33189,-2.74312,-3.39362,4.65066,-2.32591,-3.39362,4.9263,-2.74312,0,4.65066,-2.32591,0,4.9263,-1.88518,-3.39362,5.15866,-1.42546,-3.39362,5.34394,-1.88518,0,5.15866,-1.42546,0,5.34394,-0.951464,-3.39362,5.47748,-0.467858,-3.39362,5.55458,-0.951464,0,5.47748,-0.467858,0,5.55458,0.0202174,-3.39362,5.57217,0.505825,-3.39362,5.53357,0.0202174,0,5.57217,0.505825,0,5.53357,0.981576,-3.39362,5.44371,1.44008,-3.39362,5.30751,0.981576,0,5.44371,1.44008,0,5.30751,1.8749,-3.39362,5.12962,2.28336,-3.39362,4.91352,1.8749,0,5.12962,2.28336,0,4.91352,2.66373,-3.39362,4.66242,3.0143,-3.39362,4.37954,2.66373,0,4.66242,3.0143,0,4.37954,3.33419,-3.39362,4.06598,3.626,-3.39362,3.71447,3.33419,0,4.06598,3.626,0,3.71447,3.89317,-3.39362,3.31565,4.13916,-3.39362,2.86014,3.89317,0,3.31565,4.13916,0,2.86014,4.36395,-3.39362,2.34238,4.55362,-3.39362,1.77199,4.36395,0,2.34238,4.55362,0,1.77199,4.69081,-3.39362,1.16242,4.75813,-3.39362,0.527105,4.69081,0,1.16242,4.75813,0,0.527105,4.73993,-3.39362,-0.134947,4.62749,-3.39362,-0.882386,4.73993,0,-0.134947,4.62749,0,-0.882386,4.41378,-3.39362,-1.78828,4.09179,-3.39362,-2.92571,4.41378,0,-1.78828,4.09179,0,-2.92571,-4.1408,-1.89442,-2.49481,-3.12399,-1.89442,-5.57544])}))}))})])})])}))});
console.log(X3D0.toXMLNode());