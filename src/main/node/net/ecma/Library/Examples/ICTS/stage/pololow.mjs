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
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:07:15 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:07:15 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              children : new MFNode([
                new Transform({
                  DEF : new SFString("chassis"),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0.787234),
                              diffuseColor : new SFColor([1,1,1]),
                              shininess : new SFFloat(0.0106383)})),
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["polo.jpg"])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          solid : new SFBool(false),
                          texCoordIndex : new MFInt32([0,1,2,-1,1,3,2,-1,4,5,6,-1,7,8,9,-1,10,11,12,-1,13,14,15,-1,16,17,18,-1,6,19,20,-1,20,19,13,-1,4,6,20,-1,20,13,15,-1,4,20,15,-1,21,22,23,-1,22,24,23,-1,18,21,23,-1,16,18,23,-1,24,25,23,-1,26,27,28,29,-1,30,4,31,32,-1,33,30,34,35,36,37,38,39,-1,40,41,42,43,-1,44,45,46,38,47,-1,48,49,50,51,-1,52,48,53,54,55,56,-1,57,58,55,59,-1,60,61,42,62,63,64,-1,65,66,67,7,9,-1,68,69,70,64,-1,66,65,71,72,-1,73,25,74,75,-1,76,77,78,79,-1,80,81,82,83,74,84,85,86,-1,87,88,89,90,91,23,25,-1,91,92,93,86,94,-1,95,96,97,98,-1,99,100,101,102,-1,71,95,103,104,105,106,107,101,72,-1,108,109,110,111,-1,110,112,113,111,-1,99,102,102,99,-1,109,102,102,-1,109,102,109,-1,99,102,109,108,-1,108,109,109,108,-1,108,6,6,108,-1,98,97,97,98,-1,112,6,112,-1,113,97,97,113,-1,98,97,113,112,-1,112,113,113,112,-1,112,6,6,-1,114,115,116,117,118,96,119,120,100,-1,120,6,120,-1,119,121,121,119,-1,122,121,121,122,-1,119,121,122,120,-1,120,122,122,120,-1,120,6,6,-1,123,124,49,125,126,127,128,58,-1,121,129,130,131,132,122,-1,133,134,10,12,135,-1,136,135,137,138,-1,139,10,140,141,-1,142,143,144,145,4,15,146,147,45,-1,148,139,141,149,-1,150,151,140,136,152,153,154,155,-1,91,156,157,16,23,-1,137,158,159,138,-1,160,161,162,163,-1,164,165,166,167,-1,168,169,170,-1,168,171,169,-1]),
                          coordIndex : new MFInt32([0,1,2,-1,1,3,2,-1,4,5,6,-1,7,5,4,-1,8,9,10,-1,11,9,8,-1,12,10,13,-1,6,14,15,-1,15,14,11,-1,4,6,15,-1,15,11,8,-1,4,15,8,-1,16,17,18,-1,17,7,18,-1,13,16,18,-1,12,13,18,-1,7,19,18,-1,20,21,22,23,-1,24,4,25,26,-1,2,24,26,23,22,27,28,0,-1,29,4,24,30,-1,31,32,33,28,27,-1,28,33,34,35,-1,0,28,35,36,37,1,-1,38,39,37,36,-1,40,30,24,2,3,41,-1,29,42,19,7,4,-1,19,42,40,41,-1,42,29,25,43,-1,43,19,41,44,-1,45,46,47,48,-1,49,48,47,44,41,3,1,37,-1,43,46,45,50,51,18,19,-1,51,50,49,37,39,-1,52,53,54,55,-1,56,57,58,59,-1,25,52,55,60,61,62,59,58,43,-1,63,62,61,64,-1,61,60,65,64,-1,66,67,56,59,-1,68,66,59,-1,68,59,62,-1,67,66,68,69,-1,69,68,62,63,-1,67,69,63,56,-1,70,71,55,54,-1,71,60,55,-1,72,70,54,65,-1,71,70,72,73,-1,73,72,65,60,-1,71,73,60,-1,56,63,64,65,54,53,74,75,57,-1,76,75,74,-1,77,76,74,78,-1,79,77,78,80,-1,76,77,79,81,-1,81,79,80,75,-1,76,81,75,-1,38,34,33,32,82,83,51,39,-1,78,32,82,83,51,80,-1,84,85,8,10,12,-1,84,12,86,87,-1,88,8,85,89,-1,31,21,20,25,4,8,88,90,32,-1,90,88,89,91,-1,91,89,85,84,87,92,83,82,-1,51,93,86,12,18,-1,86,93,92,87,-1,94,95,96,97,-1,98,99,100,101,-1,102,103,104,-1,102,105,103,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0.314845,0.599014,0.317776,0.505559,0.336822,0.582022,0.34269,0.514055,0.614926,0.599721,0.766022,0.443437,0.765828,0.117115,0.292702,0.505447,0.293655,0.550583,0.272146,0.575224,0.229466,0.212768,0.220809,0.0887781,0.00746351,0.0948936,0.35162,0.0250328,0.257347,0.100666,0.230411,0.225096,0.230141,0.264601,0.254106,0.107683,0.372155,0.00285878,0.615574,0.0207149,0.616201,0.166095,0.614813,0.00266513,0.765905,0.183638,0.614346,0.165092,0.766839,0.446228,0.614322,0.600109,0.434678,0.601378,0.406464,0.601638,0.412746,0.950627,0.43889,0.948828,0.532918,0.942361,0.594633,0.599908,0.516015,0.943524,0.52458,0.977198,0.516015,0.943524,0.43889,0.948828,0.412746,0.950627,0.283252,0.959533,0.268994,0.960514,0.272918,0.996071,0.965258,0.602933,0.972411,0.602933,0.942664,0.879853,0.935349,0.87994,0.246708,0.603106,0.229569,0.603264,0.233607,0.639859,0.283252,0.959533,0.194959,0.951843,0.226137,0.655428,0.210125,0.655387,0.18568,0.952034,0.191502,0.984712,0.18568,0.952034,0.0453464,0.954927,0.0374424,0.95509,0.0400551,0.980535,0.0211934,0.654897,0.00661527,0.654859,0.0453464,0.954927,0.829724,0.881202,0.935349,0.87994,0.93964,0.908008,0.827531,0.914674,0.82402,0.88127,0.272108,0.571642,0.271229,0.489625,0.271193,0.486264,0.794761,0.602933,0.801473,0.602933,0.829724,0.881202,0.272108,0.571642,0.271229,0.489625,0.593939,0.599939,0.529087,0.941743,0.512695,0.942661,0.40855,0.598391,0.436623,0.598625,0.437833,0.946856,0.412745,0.948262,0.282665,0.955551,0.412745,0.948262,0.437833,0.946856,0.512695,0.942661,0.518858,0.982743,0.271227,0.982743,0.268416,0.956349,0.593939,0.599939,0.436623,0.598625,0.40855,0.598391,0.248915,0.597058,0.230141,0.596901,0.248915,0.597058,0.282665,0.955551,0.235254,0.644922,0.272108,0.571642,0.272108,0.571642,0.272053,0.566516,0.272053,0.566516,0.271284,0.494751,0.271229,0.489625,0.271229,0.489625,0.271284,0.494751,0.272053,0.566516,0.271723,0.53576,0.271668,0.530634,0.271613,0.525507,0.271284,0.494751,0.271613,0.525507,0.271613,0.525507,0.271668,0.530634,0.271668,0.530634,0.271723,0.53576,0.271723,0.53576,0.271284,0.494751,0.271613,0.525507,0.271668,0.530634,0.271723,0.53576,0.272053,0.566516,0.272108,0.571642,0.271229,0.489625,0.272108,0.571642,0.271229,0.489625,0.0211934,0.654897,0.210125,0.655387,0.230328,0.589865,0.213336,0.620664,0.0202153,0.609615,0.000685288,0.603533,0.272108,0.571642,0.272045,0.565753,0.2713,0.496232,0.271229,0.489625,0.0190281,0.212963,0.213801,0.212782,0.00135259,0.212979,0.0190281,0.212963,0.000921061,0.375278,0.0176609,0.376645,0.229857,0.382112,0.213801,0.212782,0.215105,0.381495,0.246708,0.603106,0.406464,0.601638,0.434678,0.601378,0.594633,0.599908,0.230078,0.374799,0.22988,0.463433,0.22961,0.470431,0.215003,0.470954,0.213509,0.468793,0.213611,0.379334,0.0195026,0.371503,0.019859,0.490559,0.0167178,0.602167,0.215463,0.59109,0.230141,0.497951,0.230141,0.399001,0.00115683,0.488722,0.0164821,0.488722,0.00115683,0.488722,0.000685288,0.603533,0.0167178,0.602167,0.0164821,0.488722,0.230328,0.589865,0.22961,0.470431,0.215003,0.470954,0.215463,0.59109,0.768126,0.46022,0.999243,0.160853,0.999818,0.45361,0.766976,0.15752])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([1.1363,0.985846,0.430833,1.14473,0.990366,-0.42847,-0.108499,0.985846,0.43083,-0.100067,0.990366,-0.428473,-0.633833,0.613206,0.628505,-1.35124,0.480544,0.545487,-1.35124,0.203635,0.545487,-1.35123,0.480544,-0.543598,1.35126,0.280522,0.655057,1.14191,0.105489,0.547224,1.14191,0.105489,-0.563697,0.662435,0.105489,0.547223,1.35127,0.280522,-0.664854,0.662438,0.105489,-0.563698,-0.671423,0.105489,0.54722,-0.662666,0.223772,0.648868,-0.67142,0.105489,-0.563701,-1.35123,0.203635,-0.543598,-0.66277,0.222308,-0.656223,-0.63383,0.613206,-0.627323,0.294684,0.61123,0.628508,0.440019,0.610921,0.628508,0.440746,0.951582,0.448916,0.31071,0.951552,0.44895,-0.156982,0.951456,0.449073,-0.5293,0.612984,0.628506,-0.0729072,0.951473,0.449051,1.08484,0.951716,0.448746,1.15576,0.951732,0.448727,-0.633833,0.613206,0.57794,-0.156999,0.951364,0.393649,1.26298,0.60917,0.62851,1.35126,0.608982,0.62851,1.33124,0.644091,0.610094,1.33082,0.644993,0.521644,1.15594,0.952469,0.39625,1.15871,0.963647,-0.397373,1.15886,0.964275,-0.442072,1.32594,0.655627,-0.522038,1.32556,0.656448,-0.60257,-0.157247,0.950025,-0.406562,-0.157261,0.949954,-0.44978,-0.63383,0.613206,-0.567269,-0.528507,0.612982,-0.627322,-0.0744994,0.950853,-0.449296,0.429414,0.610944,-0.62732,0.284356,0.611252,-0.62732,0.303477,0.954967,-0.447082,0.430149,0.956344,-0.44634,1.08692,0.963493,-0.442493,1.25426,0.609188,-0.627318,1.35127,0.608982,-0.627318,0.281415,0.611258,0.628508,0.452912,0.610893,0.628508,0.452912,0.610893,0.550019,0.281415,0.611258,0.550018,0.452915,0.610893,-0.548831,0.452915,0.610893,-0.62732,0.281418,0.611258,-0.62732,0.281418,0.611258,-0.548831,0.281416,0.611258,0.0790828,0.281416,0.611258,0.000593613,0.281416,0.611258,-0.0778956,0.452913,0.610893,-0.0778951,0.452913,0.610893,0.000594047,0.452913,0.610893,0.0790832,0.360779,0.786623,-0.490329,0.452914,0.786427,-0.490329,0.360778,0.786623,-0.131039,0.452914,0.786427,-0.131039,0.452912,0.786427,0.491317,0.360776,0.786623,0.491317,0.452913,0.786427,0.125037,0.360777,0.786623,0.125037,0.982249,0.609767,0.628509,0.982252,0.609767,-0.627319,1.03337,0.72343,0.550177,1.10499,0.723278,0.550178,1.10499,0.609506,0.62851,1.10499,0.723278,-0.541359,1.10499,0.609506,-0.627318,1.03338,0.72343,-0.541359,1.35126,0.608982,0.538341,1.35127,0.608982,-0.526152,1.35127,0.280522,-0.562579,1.35126,0.280522,0.564414,1.35127,0.413368,-0.649672,1.35127,0.411806,-0.54802,1.35126,0.410547,0.644548,1.35126,0.414643,0.553767,1.35126,0.487531,0.638327,1.35126,0.486683,0.548049,1.35127,0.510394,-0.537086,1.35127,0.511175,-0.638495,1.35127,0.511176,-0.638495,1.35127,0.608983,-0.627318,1.35127,0.608983,-0.526152,1.35127,0.510395,-0.537086,1.35126,0.608983,0.62851,1.35126,0.487532,0.638327,1.35126,0.486683,0.548049,1.35126,0.608983,0.538341,-1.35123,0.480545,-0.543598,-1.35124,0.203635,0.545487,-1.35124,0.480545,0.545487,-1.35123,0.203635,-0.543598])}))}))})])}),

                new Transform({
                  DEF : new SFString("glas"),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0),
                              diffuseColor : new SFColor([0,0,0]),
                              emissiveColor : new SFColor([0.0344082,0.0957447,0.0957447]),
                              shininess : new SFFloat(0),
                              transparency : new SFFloat(0.329787)}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1,12,13,14,15,-1,16,17,18,19,-1,20,21,22,23,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0.284356,0.611253,-0.627318,-0.528507,0.612983,-0.62732,-0.0744994,0.950854,-0.449293,0.303477,0.954968,-0.447079,0.440019,0.610922,0.628511,1.26298,0.60917,0.628513,1.08484,0.951716,0.448749,0.440746,0.951582,0.448919,1.33082,0.644993,0.521647,1.32594,0.655628,-0.522036,1.15871,0.963648,-0.39737,1.15594,0.95247,0.396253,-0.5293,0.612984,0.628509,0.294684,0.611231,0.628511,0.31071,0.951553,0.448953,-0.0729072,0.951474,0.449054,-0.63383,0.613207,-0.579874,-0.633833,0.613207,0.577942,-0.156999,0.951365,0.393652,-0.157247,0.950026,-0.40656,1.25426,0.609189,-0.627315,0.429414,0.610945,-0.627317,0.430149,0.956345,-0.446337,1.08692,0.963493,-0.44249])}))}))})])}),

                new Transform({
                  DEF : new SFString("rad"),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(5.85714),
                              diffuseColor : new SFColor([0.0744681,0.0744681,0.0744681])})),
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["rad.png"])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          creaseAngle : new SFFloat(0.5),
                          coordIndex : new MFInt32([0,1,2,3,-1,3,2,4,5,-1,5,4,6,7,-1,7,6,8,9,-1,9,8,10,11,-1,11,10,12,13,-1,13,12,14,15,-1,15,14,16,17,-1,17,16,18,19,-1,19,18,20,21,-1,21,20,22,23,-1,23,22,24,25,-1,25,24,26,27,-1,27,26,28,29,-1,29,28,30,31,-1,31,30,1,0,-1,32,30,28,-1,32,1,30,-1,32,28,26,-1,32,26,24,-1,32,24,22,-1,32,22,20,-1,32,20,18,-1,32,18,16,-1,32,16,14,-1,32,14,12,-1,32,12,10,-1,32,10,8,-1,32,8,6,-1,32,6,4,-1,32,4,2,-1,32,2,1,-1,33,34,35,36,-1,36,35,37,38,-1,38,37,39,40,-1,40,39,41,42,-1,42,41,43,44,-1,44,43,45,46,-1,46,45,47,48,-1,48,47,49,50,-1,50,49,51,52,-1,52,51,53,54,-1,54,53,55,56,-1,56,55,57,58,-1,58,57,59,60,-1,60,59,61,62,-1,62,61,63,64,-1,64,63,34,33,-1,65,63,61,-1,65,34,63,-1,65,61,59,-1,65,35,34,-1,65,59,57,-1,65,57,55,-1,65,55,53,-1,65,53,51,-1,65,51,49,-1,65,49,47,-1,65,47,45,-1,65,45,43,-1,65,43,41,-1,65,41,39,-1,65,39,37,-1,65,37,35,-1,66,67,68,69,-1,69,68,70,71,-1,71,70,72,73,-1,73,72,74,75,-1,75,74,76,77,-1,77,76,78,79,-1,79,78,80,81,-1,81,80,82,83,-1,83,82,84,85,-1,85,84,86,87,-1,87,86,88,89,-1,89,88,90,91,-1,91,90,92,93,-1,93,92,94,95,-1,95,94,96,97,-1,97,96,67,66,-1,98,66,69,-1,98,97,66,-1,98,69,71,-1,98,95,97,-1,98,71,73,-1,98,73,75,-1,98,75,77,-1,98,77,79,-1,98,79,81,-1,98,81,83,-1,98,83,85,-1,98,85,87,-1,98,87,89,-1,98,89,91,-1,98,91,93,-1,98,93,95,-1,99,100,101,102,-1,102,101,103,104,-1,104,103,105,106,-1,106,105,107,108,-1,108,107,109,110,-1,110,109,111,112,-1,112,111,113,114,-1,114,113,115,116,-1,116,115,117,118,-1,118,117,119,120,-1,120,119,121,122,-1,122,121,123,124,-1,124,123,125,126,-1,126,125,127,128,-1,128,127,129,130,-1,130,129,100,99,-1,131,99,102,-1,131,130,99,-1,131,102,104,-1,131,128,130,-1,131,104,106,-1,131,106,108,-1,131,108,110,-1,131,110,112,-1,131,112,114,-1,131,114,116,-1,131,116,118,-1,131,118,120,-1,131,120,122,-1,131,122,124,-1,131,124,126,-1,131,126,128,-1]),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0.5,1,0.5,1,0.691342,0.96194,0.691342,0.96194,0.853554,0.853554,0.853554,0.853554,0.96194,0.691342,0.96194,0.691342,1,0.5,1,0.5,0.96194,0.308658,0.96194,0.308658,0.853554,0.146446,0.853554,0.146446,0.691342,0.03806,0.691342,0.03806,0.5,0,0.5,0,0.308659,0.03806,0.308659,0.03806,0.146446,0.146446,0.146446,0.146446,0.03806,0.308658,0.03806,0.308658,0,0.5,0,0.5,0.0380605,0.691342,0.0380605,0.691342,0.146446,0.853554,0.146446,0.853554,0.308659,0.96194,0.308659,0.96194,0.5,0.5,0.5,1,0.5,1,0.691342,0.96194,0.691342,0.96194,0.853554,0.853554,0.853554,0.853554,0.96194,0.691342,0.96194,0.691342,1,0.5,1,0.5,0.96194,0.308658,0.96194,0.308658,0.853554,0.146446,0.853554,0.146446,0.691342,0.03806,0.691342,0.03806,0.5,0,0.5,0,0.308659,0.03806,0.308659,0.03806,0.146446,0.146446,0.146446,0.146446,0.03806,0.308658,0.03806,0.308658,0,0.5,0,0.5,0.0380605,0.691342,0.0380605,0.691342,0.146446,0.853554,0.146446,0.853554,0.308659,0.96194,0.308659,0.96194,0.5,0.5,0.5,1,0.5,1,0.691342,0.96194,0.691342,0.96194,0.853554,0.853554,0.853554,0.853554,0.96194,0.691342,0.96194,0.691342,1,0.5,1,0.5,0.96194,0.308658,0.96194,0.308658,0.853554,0.146446,0.853554,0.146446,0.691342,0.03806,0.691342,0.03806,0.5,0,0.5,0,0.308659,0.03806,0.308659,0.03806,0.146446,0.146446,0.146446,0.146446,0.03806,0.308658,0.03806,0.308658,0,0.5,0,0.5,0.0380605,0.691342,0.0380605,0.691342,0.146446,0.853554,0.146446,0.853554,0.308659,0.96194,0.308659,0.96194,0.5,0.5,0.5,1,0.5,1,0.691342,0.96194,0.691342,0.96194,0.853554,0.853554,0.853554,0.853554,0.96194,0.691342,0.96194,0.691342,1,0.5,1,0.5,0.96194,0.308658,0.96194,0.308658,0.853554,0.146446,0.853554,0.146446,0.691342,0.03806,0.691342,0.03806,0.5,0,0.5,0,0.308659,0.03806,0.308659,0.03806,0.146446,0.146446,0.146446,0.146446,0.03806,0.308658,0.03806,0.308658,0,0.5,0,0.5,0.0380605,0.691342,0.0380605,0.691342,0.146446,0.853554,0.146446,0.853554,0.308659,0.96194,0.308659,0.96194,0.5,0.5])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0.746387,0.186682,0.533677,0.746386,0.186682,0.674942,0.760596,0.258121,0.674942,0.760597,0.258121,0.533677,0.801064,0.318685,0.674943,0.801064,0.318685,0.533677,0.861628,0.359152,0.674943,0.861628,0.359152,0.533677,0.933067,0.373362,0.674943,0.933067,0.373363,0.533677,1.00451,0.359152,0.674943,1.00451,0.359152,0.533677,1.06507,0.318685,0.674943,1.06507,0.318685,0.533677,1.10554,0.258121,0.674943,1.10554,0.258121,0.533678,1.11975,0.186682,0.674944,1.11975,0.186682,0.533678,1.10554,0.115242,0.674943,1.10554,0.115242,0.533678,1.06507,0.0546784,0.674943,1.06507,0.0546785,0.533677,1.00451,0.014211,0.674943,1.00451,0.0142112,0.533677,0.933067,9.08971e-7,0.674943,0.933067,0.00000108778,0.533677,0.861627,0.0142113,0.674943,0.861628,0.0142114,0.533677,0.801064,0.0546784,0.674943,0.801064,0.0546786,0.533677,0.760596,0.115242,0.674943,0.760597,0.115242,0.533677,0.933067,0.186682,0.674943,-1.1611,0.186683,0.488835,-1.1611,0.186683,0.630101,-1.14689,0.258122,0.630101,-1.14689,0.258122,0.488835,-1.10642,0.318686,0.630101,-1.10642,0.318686,0.488835,-1.04586,0.359153,0.630101,-1.04586,0.359153,0.488835,-0.974419,0.373363,0.630101,-0.974419,0.373363,0.488835,-0.902979,0.359153,0.630101,-0.902979,0.359153,0.488836,-0.842416,0.318686,0.630102,-0.842415,0.318686,0.488836,-0.801948,0.258122,0.630102,-0.801948,0.258122,0.488836,-0.787738,0.186683,0.630102,-0.787738,0.186683,0.488836,-0.801948,0.115243,0.630102,-0.801948,0.115243,0.488836,-0.842416,0.0546793,0.630101,-0.842415,0.0546794,0.488836,-0.902979,0.014212,0.630101,-0.902979,0.0142121,0.488836,-0.974419,0.00000187755,0.630101,-0.974419,0.00000198185,0.488835,-1.04586,0.0142122,0.630101,-1.04586,0.0142123,0.488835,-1.10642,0.0546794,0.630101,-1.10642,0.0546795,0.488835,-1.14689,0.115243,0.630101,-1.14689,0.115243,0.488835,-0.974419,0.186683,0.630101,-1.1611,0.186682,-0.648864,-1.1611,0.186682,-0.507598,-1.14689,0.258121,-0.507598,-1.14689,0.258121,-0.648864,-1.10642,0.318685,-0.507598,-1.10642,0.318685,-0.648864,-1.04586,0.359152,-0.507598,-1.04586,0.359152,-0.648864,-0.974419,0.373362,-0.507598,-0.974419,0.373362,-0.648863,-0.902979,0.359152,-0.507597,-0.902979,0.359152,-0.648863,-0.842416,0.318685,-0.507597,-0.842415,0.318685,-0.648863,-0.801948,0.258121,-0.507597,-0.801948,0.258121,-0.648863,-0.787738,0.186682,-0.507597,-0.787738,0.186682,-0.648863,-0.801948,0.115242,-0.507597,-0.801948,0.115242,-0.648863,-0.842416,0.0546784,-0.507597,-0.842416,0.0546785,-0.648863,-0.902979,0.0142111,-0.507597,-0.902979,0.0142113,-0.648863,-0.974419,0.00000102818,-0.507598,-0.974419,0.00000119209,-0.648863,-1.04586,0.0142114,-0.507598,-1.04586,0.0142116,-0.648864,-1.10642,0.0546786,-0.507598,-1.10642,0.0546788,-0.648864,-1.14689,0.115242,-0.507598,-1.14689,0.115242,-0.648864,-0.974419,0.186682,-0.648863,0.746394,0.186681,-0.674937,0.746394,0.186681,-0.533671,0.760604,0.25812,-0.533671,0.760604,0.25812,-0.674937,0.801072,0.318684,-0.533671,0.801072,0.318684,-0.674937,0.861635,0.359151,-0.533671,0.861636,0.359152,-0.674937,0.933075,0.373362,-0.533671,0.933075,0.373362,-0.674937,1.00451,0.359151,-0.533671,1.00451,0.359151,-0.674937,1.06508,0.318684,-0.533671,1.06508,0.318684,-0.674936,1.10555,0.25812,-0.53367,1.10555,0.25812,-0.674936,1.11976,0.186681,-0.53367,1.11976,0.186681,-0.674936,1.10555,0.115241,-0.53367,1.10555,0.115241,-0.674936,1.06508,0.0546776,-0.533671,1.06508,0.0546778,-0.674936,1.00451,0.0142103,-0.533671,1.00451,0.0142104,-0.674937,0.933075,1.49012e-7,-0.533671,0.933075,2.83122e-7,-0.674937,0.861635,0.0142105,-0.533671,0.861635,0.0142106,-0.674937,0.801072,0.0546776,-0.533671,0.801072,0.0546778,-0.674937,0.760604,0.115241,-0.533671,0.760604,0.115241,-0.674937,0.933075,0.186681,-0.674937])}))}))})])})])})])}))});
console.log(X3D0.toXMLNode());