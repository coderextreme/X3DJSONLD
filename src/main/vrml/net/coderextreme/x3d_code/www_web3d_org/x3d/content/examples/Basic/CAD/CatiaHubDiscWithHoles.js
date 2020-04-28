let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interchange";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.info = new MFString(new java.lang.String["File created using CATIA"]);
WorldInfo2.title = "CatiaHubDiscWithHoles.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let NavigationInfo3 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo3.type = new MFString(new java.lang.String["EXAMINE","WALK","FLY"]);
browser.currentScene.children[1] = NavigationInfo3;

let Background4 = browser.currentScene.createNode("Background");
Background4.skyColor = new MFColor(new float[1,1,1]);
browser.currentScene.children[2] = Background4;

let Viewpoint5 = browser.currentScene.createNode("Viewpoint");
Viewpoint5.description = "Main Viewpoint";
Viewpoint5.fieldOfView = 0.471225;
Viewpoint5.orientation = new SFRotation(new float[0.326678,0.502925,0.800218,2.185925]);
Viewpoint5.position = new SFVec3f(new float[0.411502,0.183945,0.216403]);
browser.currentScene.children[3] = Viewpoint5;

let Viewpoint6 = browser.currentScene.createNode("Viewpoint");
Viewpoint6.description = "Iso View";
Viewpoint6.fieldOfView = 0.471225;
Viewpoint6.orientation = new SFRotation(new float[0.187053,0.451587,0.872399,2.448076]);
Viewpoint6.position = new SFVec3f(new float[0.288675,0.288675,0.288675]);
browser.currentScene.children[4] = Viewpoint6;

let Viewpoint7 = browser.currentScene.createNode("Viewpoint");
Viewpoint7.description = "Front View";
Viewpoint7.fieldOfView = 0.471225;
Viewpoint7.orientation = new SFRotation(new float[0.57735,0.57735,0.57735,2.094395]);
Viewpoint7.position = new SFVec3f(new float[0.5,0,0]);
browser.currentScene.children[5] = Viewpoint7;

let Viewpoint8 = browser.currentScene.createNode("Viewpoint");
Viewpoint8.description = "Back View";
Viewpoint8.fieldOfView = 0.471225;
Viewpoint8.orientation = new SFRotation(new float[0.57735,-0.57735,-0.57735,2.094395]);
Viewpoint8.position = new SFVec3f(new float[-0.5,0,0]);
browser.currentScene.children[6] = Viewpoint8;

let Viewpoint9 = browser.currentScene.createNode("Viewpoint");
Viewpoint9.description = "Left View";
Viewpoint9.fieldOfView = 0.471225;
Viewpoint9.orientation = new SFRotation(new float[1,-0.000173,0.000173,1.570796]);
Viewpoint9.position = new SFVec3f(new float[0,-0.5,0]);
browser.currentScene.children[7] = Viewpoint9;

let Viewpoint10 = browser.currentScene.createNode("Viewpoint");
Viewpoint10.description = "Right View";
Viewpoint10.fieldOfView = 0.471225;
Viewpoint10.orientation = new SFRotation(new float[-0.000122,-0.707107,-0.707107,3.141348]);
Viewpoint10.position = new SFVec3f(new float[0,0.5,0]);
browser.currentScene.children[8] = Viewpoint10;

let Viewpoint11 = browser.currentScene.createNode("Viewpoint");
Viewpoint11.description = "Top View";
Viewpoint11.fieldOfView = 0.471225;
Viewpoint11.orientation = new SFRotation(new float[0,0,1,1.570796]);
Viewpoint11.position = new SFVec3f(new float[0,0,0.5]);
browser.currentScene.children[9] = Viewpoint11;

let Viewpoint12 = browser.currentScene.createNode("Viewpoint");
Viewpoint12.description = "Bottom View";
Viewpoint12.fieldOfView = 0.471225;
Viewpoint12.orientation = new SFRotation(new float[0.707107,0.707107,0,3.141593]);
Viewpoint12.position = new SFVec3f(new float[0,0,-0.5]);
browser.currentScene.children[10] = Viewpoint12;

let Transform13 = browser.currentScene.createNode("Transform");
Transform13.scale = new SFVec3f(new float[0.001,0.001,0.001]);
let Group14 = browser.currentScene.createNode("Group");
let Group15 = browser.currentScene.createNode("Group");
let Group16 = browser.currentScene.createNode("Group");
let Group17 = browser.currentScene.createNode("Group");
Group17.DEF = "_03E91BA8";
let Shape18 = browser.currentScene.createNode("Shape");
let Appearance19 = browser.currentScene.createNode("Appearance");
let Material20 = browser.currentScene.createNode("Material");
Material20.DEF = "_material0";
Material20.diffuseColor = new SFColor(new float[1,0.745098,0.278431]);
Appearance19.material = Material20;

Shape18.appearance = Appearance19;

let IndexedFaceSet21 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet21.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1,34,35,36,-1,35,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,39,41,40,-1,40,41,42,-1,41,43,42,-1,42,43,44,-1,43,45,44,-1,44,45,46,-1,45,47,46,-1,46,47,48,-1,47,49,48,-1,48,49,50,-1,49,51,50,-1,50,51,52,-1,51,53,52,-1,52,53,54,-1,53,55,54,-1,54,55,56,-1,55,57,56,-1,56,57,58,-1,57,59,58,-1,58,59,60,-1,59,61,60,-1,60,61,62,-1,61,63,62,-1]);
IndexedFaceSet21.solid = False;
let Coordinate22 = browser.currentScene.createNode("Coordinate");
Coordinate22.point = new MFVec3f(new float[-150,0,0,-150,0,30,-149.23,15.1752,0,-149.23,15.1752,30,-146.929,30.1948,0,-146.929,30.1948,30,-143.121,44.9045,0,-143.121,44.9045,30,-137.844,59.1534,0,-137.844,59.1534,30,-131.152,72.7953,0,-131.152,72.7953,30,-123.115,85.6902,0,-123.115,85.6902,30,-113.814,97.7059,0,-113.814,97.7059,30,-103.345,108.719,0,-103.345,108.719,30,-91.8159,118.616,0,-91.8159,118.616,30,-79.3446,127.297,0,-79.3446,127.297,30,-66.0591,134.671,0,-66.0591,134.671,30,-52.0958,140.663,0,-52.0958,140.663,30,-37.5979,145.212,0,-37.5979,145.212,30,-22.7142,148.27,0,-22.7142,148.27,30,-7.59738,149.807,0,-7.59738,149.807,30,7.59738,149.807,0,7.59738,149.807,30,22.7142,148.27,0,22.7142,148.27,30,37.5979,145.212,0,37.5979,145.212,30,52.0958,140.663,0,52.0958,140.663,30,66.0591,134.671,0,66.0591,134.671,30,79.3446,127.297,0,79.3446,127.297,30,91.8159,118.616,0,91.8159,118.616,30,103.345,108.719,0,103.345,108.719,30,113.814,97.7059,0,113.814,97.7059,30,123.115,85.6902,0,123.115,85.6902,30,131.152,72.7953,0,131.152,72.7953,30,137.844,59.1534,0,137.844,59.1534,30,143.121,44.9045,0,143.121,44.9045,30,146.929,30.1948,0,146.929,30.1948,30,149.23,15.1752,0,149.23,15.1752,30,150,0,0,150,0,30]);
IndexedFaceSet21.coord = Coordinate22;

let Normal23 = browser.currentScene.createNode("Normal");
Normal23.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-0.994872,0.101138,0,-0.994872,0.101138,0,-0.979536,0.20127,0,-0.979536,0.20127,0,-0.954141,0.299356,0,-0.954141,0.299356,0,-0.918969,0.39433,0,-0.918969,0.39433,0,-0.874362,0.485275,0,-0.874362,0.485275,0,-0.820779,0.571245,0,-0.820779,0.571245,0,-0.758772,0.651357,0,-0.758772,0.651357,0,-0.688955,0.724804,0,-0.688955,0.724804,0,-0.612079,0.790796,0,-0.612079,0.790796,0,-0.528947,0.848655,0,-0.528947,0.848655,0,-0.440382,0.89781,0,-0.440382,0.89781,0,-0.347301,0.937754,0,-0.347301,0.937754,0,-0.250649,0.968078,0,-0.250649,0.968078,0,-0.151402,0.988472,0,-0.151402,0.988472,0,-0.0506302,0.998717,0,-0.0506302,0.998717,0,0.0506302,0.998717,0,0.0506302,0.998717,0,0.151402,0.988472,0,0.151402,0.988472,0,0.250649,0.968078,0,0.250649,0.968078,0,0.347301,0.937754,0,0.347301,0.937754,0,0.440382,0.89781,0,0.440382,0.89781,0,0.528947,0.848655,0,0.528947,0.848655,0,0.612079,0.790796,0,0.612079,0.790796,0,0.688955,0.724804,0,0.688955,0.724804,0,0.758772,0.651357,0,0.758772,0.651357,0,0.820779,0.571245,0,0.820779,0.571245,0,0.874362,0.485275,0,0.874362,0.485275,0,0.918969,0.39433,0,0.918969,0.39433,0,0.954141,0.299356,0,0.954141,0.299356,0,0.979536,0.20127,0,0.979536,0.20127,0,0.994872,0.101138,0,0.994872,0.101138,0,1,0,0,1,0,0]);
IndexedFaceSet21.normal = Normal23;

Shape18.geometry = IndexedFaceSet21;

Group17.children = new MFNode();

Group17.children[0] = Shape18;

let Shape24 = browser.currentScene.createNode("Shape");
let Appearance25 = browser.currentScene.createNode("Appearance");
let Material26 = browser.currentScene.createNode("Material");
Material26.USE = "_material0";
Appearance25.material = Material26;

Shape24.appearance = Appearance25;

let IndexedFaceSet27 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet27.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1,34,35,36,-1,35,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,39,41,40,-1,40,41,42,-1,41,43,42,-1,42,43,44,-1,43,45,44,-1,44,45,46,-1,45,47,46,-1,46,47,48,-1,47,49,48,-1,48,49,50,-1,49,51,50,-1,50,51,52,-1,51,53,52,-1,52,53,54,-1,53,55,54,-1,54,55,56,-1,55,57,56,-1,56,57,58,-1,57,59,58,-1,58,59,60,-1,59,61,60,-1,60,61,62,-1,61,63,62,-1]);
IndexedFaceSet27.solid = False;
let Coordinate28 = browser.currentScene.createNode("Coordinate");
Coordinate28.point = new MFVec3f(new float[150,0,0,150,0,30,149.23,-15.1752,0,149.23,-15.1752,30,146.929,-30.1948,0,146.929,-30.1948,30,143.121,-44.9045,0,143.121,-44.9045,30,137.844,-59.1534,0,137.844,-59.1534,30,131.152,-72.7953,0,131.152,-72.7953,30,123.115,-85.6902,0,123.115,-85.6902,30,113.814,-97.7059,0,113.814,-97.7059,30,103.345,-108.719,0,103.345,-108.719,30,91.8159,-118.616,0,91.8159,-118.616,30,79.3446,-127.297,0,79.3446,-127.297,30,66.0591,-134.671,0,66.0591,-134.671,30,52.0958,-140.663,0,52.0958,-140.663,30,37.5979,-145.212,0,37.5979,-145.212,30,22.7142,-148.27,0,22.7142,-148.27,30,7.59738,-149.807,0,7.59738,-149.807,30,-7.59738,-149.807,0,-7.59738,-149.807,30,-22.7142,-148.27,0,-22.7142,-148.27,30,-37.5979,-145.212,0,-37.5979,-145.212,30,-52.0958,-140.663,0,-52.0958,-140.663,30,-66.0591,-134.671,0,-66.0591,-134.671,30,-79.3446,-127.297,0,-79.3446,-127.297,30,-91.8159,-118.616,0,-91.8159,-118.616,30,-103.345,-108.719,0,-103.345,-108.719,30,-113.814,-97.7059,0,-113.814,-97.7059,30,-123.115,-85.6902,0,-123.115,-85.6902,30,-131.152,-72.7953,0,-131.152,-72.7953,30,-137.844,-59.1534,0,-137.844,-59.1534,30,-143.121,-44.9045,0,-143.121,-44.9045,30,-146.929,-30.1948,0,-146.929,-30.1948,30,-149.23,-15.1752,0,-149.23,-15.1752,30,-150,0,0,-150,0,30]);
IndexedFaceSet27.coord = Coordinate28;

let Normal29 = browser.currentScene.createNode("Normal");
Normal29.vector = new MFVec3f(new float[1,0,0,1,0,0,0.994872,-0.101138,0,0.994872,-0.101138,0,0.979536,-0.20127,0,0.979536,-0.20127,0,0.954141,-0.299356,0,0.954141,-0.299356,0,0.918969,-0.39433,0,0.918969,-0.39433,0,0.874362,-0.485275,0,0.874362,-0.485275,0,0.820779,-0.571245,0,0.820779,-0.571245,0,0.758772,-0.651357,0,0.758772,-0.651357,0,0.688955,-0.724804,0,0.688955,-0.724804,0,0.612079,-0.790796,0,0.612079,-0.790796,0,0.528947,-0.848655,0,0.528947,-0.848655,0,0.440382,-0.89781,0,0.440382,-0.89781,0,0.347301,-0.937754,0,0.347301,-0.937754,0,0.250649,-0.968078,0,0.250649,-0.968078,0,0.151402,-0.988472,0,0.151402,-0.988472,0,0.0506302,-0.998717,0,0.0506302,-0.998717,0,-0.0506302,-0.998717,0,-0.0506302,-0.998717,0,-0.151402,-0.988472,0,-0.151402,-0.988472,0,-0.250649,-0.968078,0,-0.250649,-0.968078,0,-0.347301,-0.937754,0,-0.347301,-0.937754,0,-0.440382,-0.89781,0,-0.440382,-0.89781,0,-0.528947,-0.848655,0,-0.528947,-0.848655,0,-0.612079,-0.790796,0,-0.612079,-0.790796,0,-0.688955,-0.724804,0,-0.688955,-0.724804,0,-0.758772,-0.651357,0,-0.758772,-0.651357,0,-0.820779,-0.571245,0,-0.820779,-0.571245,0,-0.874362,-0.485275,0,-0.874362,-0.485275,0,-0.918969,-0.39433,0,-0.918969,-0.39433,0,-0.954141,-0.299356,0,-0.954141,-0.299356,0,-0.979536,-0.20127,0,-0.979536,-0.20127,0,-0.994872,-0.101138,0,-0.994872,-0.101138,0,-1,0,0,-1,0,0]);
IndexedFaceSet27.normal = Normal29;

Shape24.geometry = IndexedFaceSet27;

Group17.children[1] = Shape24;

let Shape30 = browser.currentScene.createNode("Shape");
let Appearance31 = browser.currentScene.createNode("Appearance");
let Material32 = browser.currentScene.createNode("Material");
Material32.USE = "_material0";
Appearance31.material = Material32;

Shape30.appearance = Appearance31;

let IndexedFaceSet33 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet33.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet33.solid = False;
let Coordinate34 = browser.currentScene.createNode("Coordinate");
Coordinate34.point = new MFVec3f(new float[15,120,30,15,120,0,14.2658,115.365,30,14.2658,115.365,0,12.1353,111.183,30,12.1353,111.183,0,8.81678,107.865,30,8.81678,107.865,0,4.63525,105.734,30,4.63525,105.734,0,0,105,30,0,105,0,-4.63525,105.734,30,-4.63525,105.734,0,-8.81678,107.865,30,-8.81678,107.865,0,-12.1353,111.183,30,-12.1353,111.183,0,-14.2658,115.365,30,-14.2658,115.365,0,-15,120,30,-15,120,0]);
IndexedFaceSet33.coord = Coordinate34;

let Normal35 = browser.currentScene.createNode("Normal");
Normal35.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-0.951062,0.309,0,-0.951062,0.309,0,-0.809038,0.587756,0,-0.809038,0.587756,0,-0.587756,0.809038,0,-0.587756,0.809038,0,-0.309,0.951062,0,-0.309,0.951062,0,0,1,0,0,1,0,0.309,0.951062,0,0.309,0.951062,0,0.587756,0.809038,0,0.587756,0.809038,0,0.809038,0.587756,0,0.809038,0.587756,0,0.951062,0.309,0,0.951062,0.309,0,1,0,0,1,0,0]);
IndexedFaceSet33.normal = Normal35;

Shape30.geometry = IndexedFaceSet33;

Group17.children[2] = Shape30;

let Shape36 = browser.currentScene.createNode("Shape");
let Appearance37 = browser.currentScene.createNode("Appearance");
let Material38 = browser.currentScene.createNode("Material");
Material38.USE = "_material0";
Appearance37.material = Material38;

Shape36.appearance = Appearance37;

let IndexedFaceSet39 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet39.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet39.solid = False;
let Coordinate40 = browser.currentScene.createNode("Coordinate");
Coordinate40.point = new MFVec3f(new float[-15,120,30,-15,120,0,-14.2658,124.635,30,-14.2658,124.635,0,-12.1353,128.817,30,-12.1353,128.817,0,-8.81678,132.135,30,-8.81678,132.135,0,-4.63525,134.266,30,-4.63525,134.266,0,0,135,30,0,135,0,4.63525,134.266,30,4.63525,134.266,0,8.81678,132.135,30,8.81678,132.135,0,12.1353,128.817,30,12.1353,128.817,0,14.2658,124.635,30,14.2658,124.635,0,15,120,30,15,120,0]);
IndexedFaceSet39.coord = Coordinate40;

let Normal41 = browser.currentScene.createNode("Normal");
Normal41.vector = new MFVec3f(new float[1,0,0,1,0,0,0.951062,-0.309,0,0.951062,-0.309,0,0.809038,-0.587756,0,0.809038,-0.587756,0,0.587756,-0.809038,0,0.587756,-0.809038,0,0.309,-0.951062,0,0.309,-0.951062,0,0,-1,0,0,-1,0,-0.309,-0.951062,0,-0.309,-0.951062,0,-0.587756,-0.809038,0,-0.587756,-0.809038,0,-0.809038,-0.587756,0,-0.809038,-0.587756,0,-0.951062,-0.309,0,-0.951062,-0.309,0,-1,0,0,-1,0,0]);
IndexedFaceSet39.normal = Normal41;

Shape36.geometry = IndexedFaceSet39;

Group17.children[3] = Shape36;

let Shape42 = browser.currentScene.createNode("Shape");
let Appearance43 = browser.currentScene.createNode("Appearance");
let Material44 = browser.currentScene.createNode("Material");
Material44.USE = "_material0";
Appearance43.material = Material44;

Shape42.appearance = Appearance43;

let IndexedFaceSet45 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet45.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet45.solid = False;
let Coordinate46 = browser.currentScene.createNode("Coordinate");
Coordinate46.point = new MFVec3f(new float[92.1345,91.9253,30,92.1345,91.9253,0,91.4004,87.2901,30,91.4004,87.2901,0,89.2698,83.1086,30,89.2698,83.1086,0,85.9513,79.7901,30,85.9513,79.7901,0,81.7698,77.6595,30,81.7698,77.6595,0,77.1345,76.9253,30,77.1345,76.9253,0,72.4993,77.6595,30,72.4993,77.6595,0,68.3177,79.7901,30,68.3177,79.7901,0,64.9993,83.1086,30,64.9993,83.1086,0,62.8687,87.2901,30,62.8687,87.2901,0,62.1345,91.9253,30,62.1345,91.9253,0]);
IndexedFaceSet45.coord = Coordinate46;

let Normal47 = browser.currentScene.createNode("Normal");
Normal47.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-0.951062,0.309,0,-0.951062,0.309,0,-0.809038,0.587756,0,-0.809038,0.587756,0,-0.587756,0.809038,0,-0.587756,0.809038,0,-0.309,0.951062,0,-0.309,0.951062,0,0,1,0,0,1,0,0.309,0.951062,0,0.309,0.951062,0,0.587756,0.809038,0,0.587756,0.809038,0,0.809038,0.587756,0,0.809038,0.587756,0,0.951062,0.309,0,0.951062,0.309,0,1,0,0,1,0,0]);
IndexedFaceSet45.normal = Normal47;

Shape42.geometry = IndexedFaceSet45;

Group17.children[4] = Shape42;

let Shape48 = browser.currentScene.createNode("Shape");
let Appearance49 = browser.currentScene.createNode("Appearance");
let Material50 = browser.currentScene.createNode("Material");
Material50.USE = "_material0";
Appearance49.material = Material50;

Shape48.appearance = Appearance49;

let IndexedFaceSet51 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet51.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet51.solid = False;
let Coordinate52 = browser.currentScene.createNode("Coordinate");
Coordinate52.point = new MFVec3f(new float[62.1345,91.9253,30,62.1345,91.9253,0,62.8687,96.5606,30,62.8687,96.5606,0,64.9993,100.742,30,64.9993,100.742,0,68.3177,104.061,30,68.3177,104.061,0,72.4993,106.191,30,72.4993,106.191,0,77.1345,106.925,30,77.1345,106.925,0,81.7698,106.191,30,81.7698,106.191,0,85.9513,104.061,30,85.9513,104.061,0,89.2698,100.742,30,89.2698,100.742,0,91.4004,96.5606,30,91.4004,96.5606,0,92.1345,91.9253,30,92.1345,91.9253,0]);
IndexedFaceSet51.coord = Coordinate52;

let Normal53 = browser.currentScene.createNode("Normal");
Normal53.vector = new MFVec3f(new float[1,0,0,1,0,0,0.951062,-0.309,0,0.951062,-0.309,0,0.809038,-0.587756,0,0.809038,-0.587756,0,0.587756,-0.809038,0,0.587756,-0.809038,0,0.309,-0.951062,0,0.309,-0.951062,0,0,-1,0,0,-1,0,-0.309,-0.951062,0,-0.309,-0.951062,0,-0.587756,-0.809038,0,-0.587756,-0.809038,0,-0.809038,-0.587756,0,-0.809038,-0.587756,0,-0.951062,-0.309,0,-0.951062,-0.309,0,-1,0,0,-1,0,0]);
IndexedFaceSet51.normal = Normal53;

Shape48.geometry = IndexedFaceSet51;

Group17.children[5] = Shape48;

let Shape54 = browser.currentScene.createNode("Shape");
let Appearance55 = browser.currentScene.createNode("Appearance");
let Material56 = browser.currentScene.createNode("Material");
Material56.USE = "_material0";
Appearance55.material = Material56;

Shape54.appearance = Appearance55;

let IndexedFaceSet57 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet57.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet57.solid = False;
let Coordinate58 = browser.currentScene.createNode("Coordinate");
Coordinate58.point = new MFVec3f(new float[133.177,20.8378,30,133.177,20.8378,0,132.443,16.2025,30,132.443,16.2025,0,130.312,12.021,30,130.312,12.021,0,126.994,8.70253,30,126.994,8.70253,0,122.812,6.57193,30,122.812,6.57193,0,118.177,5.83778,30,118.177,5.83778,0,113.542,6.57193,30,113.542,6.57193,0,109.36,8.70253,30,109.36,8.70253,0,106.042,12.021,30,106.042,12.021,0,103.911,16.2025,30,103.911,16.2025,0,103.177,20.8378,30,103.177,20.8378,0]);
IndexedFaceSet57.coord = Coordinate58;

let Normal59 = browser.currentScene.createNode("Normal");
Normal59.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-0.951062,0.309,0,-0.951062,0.309,0,-0.809038,0.587756,0,-0.809038,0.587756,0,-0.587756,0.809038,0,-0.587756,0.809038,0,-0.309,0.951062,0,-0.309,0.951062,0,0,1,0,0,1,0,0.309,0.951062,0,0.309,0.951062,0,0.587756,0.809038,0,0.587756,0.809038,0,0.809038,0.587756,0,0.809038,0.587756,0,0.951062,0.309,0,0.951062,0.309,0,1,0,0,1,0,0]);
IndexedFaceSet57.normal = Normal59;

Shape54.geometry = IndexedFaceSet57;

Group17.children[6] = Shape54;

let Shape60 = browser.currentScene.createNode("Shape");
let Appearance61 = browser.currentScene.createNode("Appearance");
let Material62 = browser.currentScene.createNode("Material");
Material62.USE = "_material0";
Appearance61.material = Material62;

Shape60.appearance = Appearance61;

let IndexedFaceSet63 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet63.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet63.solid = False;
let Coordinate64 = browser.currentScene.createNode("Coordinate");
Coordinate64.point = new MFVec3f(new float[103.177,20.8378,30,103.177,20.8378,0,103.911,25.473,30,103.911,25.473,0,106.042,29.6546,30,106.042,29.6546,0,109.36,32.973,30,109.36,32.973,0,113.542,35.1036,30,113.542,35.1036,0,118.177,35.8378,30,118.177,35.8378,0,122.812,35.1036,30,122.812,35.1036,0,126.994,32.973,30,126.994,32.973,0,130.312,29.6546,30,130.312,29.6546,0,132.443,25.473,30,132.443,25.473,0,133.177,20.8378,30,133.177,20.8378,0]);
IndexedFaceSet63.coord = Coordinate64;

let Normal65 = browser.currentScene.createNode("Normal");
Normal65.vector = new MFVec3f(new float[1,0,0,1,0,0,0.951062,-0.309,0,0.951062,-0.309,0,0.809038,-0.587756,0,0.809038,-0.587756,0,0.587756,-0.809038,0,0.587756,-0.809038,0,0.309,-0.951062,0,0.309,-0.951062,0,0,-1,0,0,-1,0,-0.309,-0.951062,0,-0.309,-0.951062,0,-0.587756,-0.809038,0,-0.587756,-0.809038,0,-0.809038,-0.587756,0,-0.809038,-0.587756,0,-0.951062,-0.309,0,-0.951062,-0.309,0,-1,0,0,-1,0,0]);
IndexedFaceSet63.normal = Normal65;

Shape60.geometry = IndexedFaceSet63;

Group17.children[7] = Shape60;

let Shape66 = browser.currentScene.createNode("Shape");
let Appearance67 = browser.currentScene.createNode("Appearance");
let Material68 = browser.currentScene.createNode("Material");
Material68.USE = "_material0";
Appearance67.material = Material68;

Shape66.appearance = Appearance67;

let IndexedFaceSet69 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet69.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet69.solid = False;
let Coordinate70 = browser.currentScene.createNode("Coordinate");
Coordinate70.point = new MFVec3f(new float[118.923,-60,30,118.923,-60,0,118.189,-64.6353,30,118.189,-64.6353,0,116.058,-68.8168,30,116.058,-68.8168,0,112.74,-72.1353,30,112.74,-72.1353,0,108.558,-74.2658,30,108.558,-74.2658,0,103.923,-75,30,103.923,-75,0,99.2878,-74.2658,30,99.2878,-74.2658,0,95.1063,-72.1353,30,95.1063,-72.1353,0,91.7878,-68.8168,30,91.7878,-68.8168,0,89.6572,-64.6353,30,89.6572,-64.6353,0,88.923,-60,30,88.923,-60,0]);
IndexedFaceSet69.coord = Coordinate70;

let Normal71 = browser.currentScene.createNode("Normal");
Normal71.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-0.951062,0.309,0,-0.951062,0.309,0,-0.809038,0.587756,0,-0.809038,0.587756,0,-0.587756,0.809038,0,-0.587756,0.809038,0,-0.309,0.951062,0,-0.309,0.951062,0,0,1,0,0,1,0,0.309,0.951062,0,0.309,0.951062,0,0.587756,0.809038,0,0.587756,0.809038,0,0.809038,0.587756,0,0.809038,0.587756,0,0.951062,0.309,0,0.951062,0.309,0,1,0,0,1,0,0]);
IndexedFaceSet69.normal = Normal71;

Shape66.geometry = IndexedFaceSet69;

Group17.children[8] = Shape66;

let Shape72 = browser.currentScene.createNode("Shape");
let Appearance73 = browser.currentScene.createNode("Appearance");
let Material74 = browser.currentScene.createNode("Material");
Material74.USE = "_material0";
Appearance73.material = Material74;

Shape72.appearance = Appearance73;

let IndexedFaceSet75 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet75.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet75.solid = False;
let Coordinate76 = browser.currentScene.createNode("Coordinate");
Coordinate76.point = new MFVec3f(new float[88.923,-60,30,88.923,-60,0,89.6572,-55.3647,30,89.6572,-55.3647,0,91.7878,-51.1832,30,91.7878,-51.1832,0,95.1063,-47.8647,30,95.1063,-47.8647,0,99.2878,-45.7342,30,99.2878,-45.7342,0,103.923,-45,30,103.923,-45,0,108.558,-45.7342,30,108.558,-45.7342,0,112.74,-47.8647,30,112.74,-47.8647,0,116.058,-51.1832,30,116.058,-51.1832,0,118.189,-55.3647,30,118.189,-55.3647,0,118.923,-60,30,118.923,-60,0]);
IndexedFaceSet75.coord = Coordinate76;

let Normal77 = browser.currentScene.createNode("Normal");
Normal77.vector = new MFVec3f(new float[1,0,0,1,0,0,0.951062,-0.309,0,0.951062,-0.309,0,0.809038,-0.587756,0,0.809038,-0.587756,0,0.587756,-0.809038,0,0.587756,-0.809038,0,0.309,-0.951062,0,0.309,-0.951062,0,0,-1,0,0,-1,0,-0.309,-0.951062,0,-0.309,-0.951062,0,-0.587756,-0.809038,0,-0.587756,-0.809038,0,-0.809038,-0.587756,0,-0.809038,-0.587756,0,-0.951062,-0.309,0,-0.951062,-0.309,0,-1,0,0,-1,0,0]);
IndexedFaceSet75.normal = Normal77;

Shape72.geometry = IndexedFaceSet75;

Group17.children[9] = Shape72;

let Shape78 = browser.currentScene.createNode("Shape");
let Appearance79 = browser.currentScene.createNode("Appearance");
let Material80 = browser.currentScene.createNode("Material");
Material80.USE = "_material0";
Appearance79.material = Material80;

Shape78.appearance = Appearance79;

let IndexedFaceSet81 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet81.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet81.solid = False;
let Coordinate82 = browser.currentScene.createNode("Coordinate");
Coordinate82.point = new MFVec3f(new float[56.0424,-112.763,30,56.0424,-112.763,0,55.3083,-117.398,30,55.3083,-117.398,0,53.1777,-121.58,30,53.1777,-121.58,0,49.8592,-124.898,30,49.8592,-124.898,0,45.6777,-127.029,30,45.6777,-127.029,0,41.0424,-127.763,30,41.0424,-127.763,0,36.4072,-127.029,30,36.4072,-127.029,0,32.2256,-124.898,30,32.2256,-124.898,0,28.9072,-121.58,30,28.9072,-121.58,0,26.7766,-117.398,30,26.7766,-117.398,0,26.0424,-112.763,30,26.0424,-112.763,0]);
IndexedFaceSet81.coord = Coordinate82;

let Normal83 = browser.currentScene.createNode("Normal");
Normal83.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-0.951062,0.309,0,-0.951062,0.309,0,-0.809038,0.587756,0,-0.809038,0.587756,0,-0.587756,0.809038,0,-0.587756,0.809038,0,-0.309,0.951062,0,-0.309,0.951062,0,0,1,0,0,1,0,0.309,0.951062,0,0.309,0.951062,0,0.587756,0.809038,0,0.587756,0.809038,0,0.809038,0.587756,0,0.809038,0.587756,0,0.951062,0.309,0,0.951062,0.309,0,1,0,0,1,0,0]);
IndexedFaceSet81.normal = Normal83;

Shape78.geometry = IndexedFaceSet81;

Group17.children[10] = Shape78;

let Shape84 = browser.currentScene.createNode("Shape");
let Appearance85 = browser.currentScene.createNode("Appearance");
let Material86 = browser.currentScene.createNode("Material");
Material86.USE = "_material0";
Appearance85.material = Material86;

Shape84.appearance = Appearance85;

let IndexedFaceSet87 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet87.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet87.solid = False;
let Coordinate88 = browser.currentScene.createNode("Coordinate");
Coordinate88.point = new MFVec3f(new float[26.0424,-112.763,30,26.0424,-112.763,0,26.7766,-108.128,30,26.7766,-108.128,0,28.9072,-103.946,30,28.9072,-103.946,0,32.2256,-100.628,30,32.2256,-100.628,0,36.4072,-98.4973,30,36.4072,-98.4973,0,41.0424,-97.7631,30,41.0424,-97.7631,0,45.6777,-98.4973,30,45.6777,-98.4973,0,49.8592,-100.628,30,49.8592,-100.628,0,53.1777,-103.946,30,53.1777,-103.946,0,55.3083,-108.128,30,55.3083,-108.128,0,56.0424,-112.763,30,56.0424,-112.763,0]);
IndexedFaceSet87.coord = Coordinate88;

let Normal89 = browser.currentScene.createNode("Normal");
Normal89.vector = new MFVec3f(new float[1,0,0,1,0,0,0.951062,-0.309,0,0.951062,-0.309,0,0.809038,-0.587756,0,0.809038,-0.587756,0,0.587756,-0.809038,0,0.587756,-0.809038,0,0.309,-0.951062,0,0.309,-0.951062,0,0,-1,0,0,-1,0,-0.309,-0.951062,0,-0.309,-0.951062,0,-0.587756,-0.809038,0,-0.587756,-0.809038,0,-0.809038,-0.587756,0,-0.809038,-0.587756,0,-0.951062,-0.309,0,-0.951062,-0.309,0,-1,0,0,-1,0,0]);
IndexedFaceSet87.normal = Normal89;

Shape84.geometry = IndexedFaceSet87;

Group17.children[11] = Shape84;

let Shape90 = browser.currentScene.createNode("Shape");
let Appearance91 = browser.currentScene.createNode("Appearance");
let Material92 = browser.currentScene.createNode("Material");
Material92.USE = "_material0";
Appearance91.material = Material92;

Shape90.appearance = Appearance91;

let IndexedFaceSet93 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet93.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet93.solid = False;
let Coordinate94 = browser.currentScene.createNode("Coordinate");
Coordinate94.point = new MFVec3f(new float[-26.0424,-112.763,30,-26.0424,-112.763,0,-26.7766,-117.398,30,-26.7766,-117.398,0,-28.9072,-121.58,30,-28.9072,-121.58,0,-32.2256,-124.898,30,-32.2256,-124.898,0,-36.4072,-127.029,30,-36.4072,-127.029,0,-41.0424,-127.763,30,-41.0424,-127.763,0,-45.6777,-127.029,30,-45.6777,-127.029,0,-49.8592,-124.898,30,-49.8592,-124.898,0,-53.1777,-121.58,30,-53.1777,-121.58,0,-55.3083,-117.398,30,-55.3083,-117.398,0,-56.0424,-112.763,30,-56.0424,-112.763,0]);
IndexedFaceSet93.coord = Coordinate94;

let Normal95 = browser.currentScene.createNode("Normal");
Normal95.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-0.951062,0.309,0,-0.951062,0.309,0,-0.809038,0.587756,0,-0.809038,0.587756,0,-0.587756,0.809038,0,-0.587756,0.809038,0,-0.309,0.951062,0,-0.309,0.951062,0,0,1,0,0,1,0,0.309,0.951062,0,0.309,0.951062,0,0.587756,0.809038,0,0.587756,0.809038,0,0.809038,0.587756,0,0.809038,0.587756,0,0.951062,0.309,0,0.951062,0.309,0,1,0,0,1,0,0]);
IndexedFaceSet93.normal = Normal95;

Shape90.geometry = IndexedFaceSet93;

Group17.children[12] = Shape90;

let Shape96 = browser.currentScene.createNode("Shape");
let Appearance97 = browser.currentScene.createNode("Appearance");
let Material98 = browser.currentScene.createNode("Material");
Material98.USE = "_material0";
Appearance97.material = Material98;

Shape96.appearance = Appearance97;

let IndexedFaceSet99 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet99.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet99.solid = False;
let Coordinate100 = browser.currentScene.createNode("Coordinate");
Coordinate100.point = new MFVec3f(new float[-56.0424,-112.763,30,-56.0424,-112.763,0,-55.3083,-108.128,30,-55.3083,-108.128,0,-53.1777,-103.946,30,-53.1777,-103.946,0,-49.8592,-100.628,30,-49.8592,-100.628,0,-45.6777,-98.4973,30,-45.6777,-98.4973,0,-41.0424,-97.7631,30,-41.0424,-97.7631,0,-36.4072,-98.4973,30,-36.4072,-98.4973,0,-32.2256,-100.628,30,-32.2256,-100.628,0,-28.9072,-103.946,30,-28.9072,-103.946,0,-26.7766,-108.128,30,-26.7766,-108.128,0,-26.0424,-112.763,30,-26.0424,-112.763,0]);
IndexedFaceSet99.coord = Coordinate100;

let Normal101 = browser.currentScene.createNode("Normal");
Normal101.vector = new MFVec3f(new float[1,0,0,1,0,0,0.951062,-0.309,0,0.951062,-0.309,0,0.809038,-0.587756,0,0.809038,-0.587756,0,0.587756,-0.809038,0,0.587756,-0.809038,0,0.309,-0.951062,0,0.309,-0.951062,0,0,-1,0,0,-1,0,-0.309,-0.951062,0,-0.309,-0.951062,0,-0.587756,-0.809038,0,-0.587756,-0.809038,0,-0.809038,-0.587756,0,-0.809038,-0.587756,0,-0.951062,-0.309,0,-0.951062,-0.309,0,-1,0,0,-1,0,0]);
IndexedFaceSet99.normal = Normal101;

Shape96.geometry = IndexedFaceSet99;

Group17.children[13] = Shape96;

let Shape102 = browser.currentScene.createNode("Shape");
let Appearance103 = browser.currentScene.createNode("Appearance");
let Material104 = browser.currentScene.createNode("Material");
Material104.USE = "_material0";
Appearance103.material = Material104;

Shape102.appearance = Appearance103;

let IndexedFaceSet105 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet105.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet105.solid = False;
let Coordinate106 = browser.currentScene.createNode("Coordinate");
Coordinate106.point = new MFVec3f(new float[-88.923,-60,30,-88.923,-60,0,-89.6572,-64.6353,30,-89.6572,-64.6353,0,-91.7878,-68.8168,30,-91.7878,-68.8168,0,-95.1063,-72.1353,30,-95.1063,-72.1353,0,-99.2878,-74.2658,30,-99.2878,-74.2658,0,-103.923,-75,30,-103.923,-75,0,-108.558,-74.2658,30,-108.558,-74.2658,0,-112.74,-72.1353,30,-112.74,-72.1353,0,-116.058,-68.8168,30,-116.058,-68.8168,0,-118.189,-64.6353,30,-118.189,-64.6353,0,-118.923,-60,30,-118.923,-60,0]);
IndexedFaceSet105.coord = Coordinate106;

let Normal107 = browser.currentScene.createNode("Normal");
Normal107.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-0.951062,0.309,0,-0.951062,0.309,0,-0.809038,0.587756,0,-0.809038,0.587756,0,-0.587756,0.809038,0,-0.587756,0.809038,0,-0.309,0.951062,0,-0.309,0.951062,0,0,1,0,0,1,0,0.309,0.951062,0,0.309,0.951062,0,0.587756,0.809038,0,0.587756,0.809038,0,0.809038,0.587756,0,0.809038,0.587756,0,0.951062,0.309,0,0.951062,0.309,0,1,0,0,1,0,0]);
IndexedFaceSet105.normal = Normal107;

Shape102.geometry = IndexedFaceSet105;

Group17.children[14] = Shape102;

let Shape108 = browser.currentScene.createNode("Shape");
let Appearance109 = browser.currentScene.createNode("Appearance");
let Material110 = browser.currentScene.createNode("Material");
Material110.USE = "_material0";
Appearance109.material = Material110;

Shape108.appearance = Appearance109;

let IndexedFaceSet111 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet111.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet111.solid = False;
let Coordinate112 = browser.currentScene.createNode("Coordinate");
Coordinate112.point = new MFVec3f(new float[-118.923,-60,30,-118.923,-60,0,-118.189,-55.3647,30,-118.189,-55.3647,0,-116.058,-51.1832,30,-116.058,-51.1832,0,-112.74,-47.8647,30,-112.74,-47.8647,0,-108.558,-45.7342,30,-108.558,-45.7342,0,-103.923,-45,30,-103.923,-45,0,-99.2878,-45.7342,30,-99.2878,-45.7342,0,-95.1063,-47.8647,30,-95.1063,-47.8647,0,-91.7878,-51.1832,30,-91.7878,-51.1832,0,-89.6572,-55.3647,30,-89.6572,-55.3647,0,-88.923,-60,30,-88.923,-60,0]);
IndexedFaceSet111.coord = Coordinate112;

let Normal113 = browser.currentScene.createNode("Normal");
Normal113.vector = new MFVec3f(new float[1,0,0,1,0,0,0.951062,-0.309,0,0.951062,-0.309,0,0.809038,-0.587756,0,0.809038,-0.587756,0,0.587756,-0.809038,0,0.587756,-0.809038,0,0.309,-0.951062,0,0.309,-0.951062,0,0,-1,0,0,-1,0,-0.309,-0.951062,0,-0.309,-0.951062,0,-0.587756,-0.809038,0,-0.587756,-0.809038,0,-0.809038,-0.587756,0,-0.809038,-0.587756,0,-0.951062,-0.309,0,-0.951062,-0.309,0,-1,0,0,-1,0,0]);
IndexedFaceSet111.normal = Normal113;

Shape108.geometry = IndexedFaceSet111;

Group17.children[15] = Shape108;

let Shape114 = browser.currentScene.createNode("Shape");
let Appearance115 = browser.currentScene.createNode("Appearance");
let Material116 = browser.currentScene.createNode("Material");
Material116.USE = "_material0";
Appearance115.material = Material116;

Shape114.appearance = Appearance115;

let IndexedFaceSet117 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet117.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet117.solid = False;
let Coordinate118 = browser.currentScene.createNode("Coordinate");
Coordinate118.point = new MFVec3f(new float[-103.177,20.8378,30,-103.177,20.8378,0,-103.911,16.2025,30,-103.911,16.2025,0,-106.042,12.021,30,-106.042,12.021,0,-109.36,8.70253,30,-109.36,8.70253,0,-113.542,6.57193,30,-113.542,6.57193,0,-118.177,5.83778,30,-118.177,5.83778,0,-122.812,6.57193,30,-122.812,6.57193,0,-126.994,8.70253,30,-126.994,8.70253,0,-130.312,12.021,30,-130.312,12.021,0,-132.443,16.2025,30,-132.443,16.2025,0,-133.177,20.8378,30,-133.177,20.8378,0]);
IndexedFaceSet117.coord = Coordinate118;

let Normal119 = browser.currentScene.createNode("Normal");
Normal119.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-0.951062,0.309,0,-0.951062,0.309,0,-0.809038,0.587756,0,-0.809038,0.587756,0,-0.587756,0.809038,0,-0.587756,0.809038,0,-0.309,0.951062,0,-0.309,0.951062,0,0,1,0,0,1,0,0.309,0.951062,0,0.309,0.951062,0,0.587756,0.809038,0,0.587756,0.809038,0,0.809038,0.587756,0,0.809038,0.587756,0,0.951062,0.309,0,0.951062,0.309,0,1,0,0,1,0,0]);
IndexedFaceSet117.normal = Normal119;

Shape114.geometry = IndexedFaceSet117;

Group17.children[16] = Shape114;

let Shape120 = browser.currentScene.createNode("Shape");
let Appearance121 = browser.currentScene.createNode("Appearance");
let Material122 = browser.currentScene.createNode("Material");
Material122.USE = "_material0";
Appearance121.material = Material122;

Shape120.appearance = Appearance121;

let IndexedFaceSet123 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet123.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet123.solid = False;
let Coordinate124 = browser.currentScene.createNode("Coordinate");
Coordinate124.point = new MFVec3f(new float[-133.177,20.8378,30,-133.177,20.8378,0,-132.443,25.473,30,-132.443,25.473,0,-130.312,29.6546,30,-130.312,29.6546,0,-126.994,32.973,30,-126.994,32.973,0,-122.812,35.1036,30,-122.812,35.1036,0,-118.177,35.8378,30,-118.177,35.8378,0,-113.542,35.1036,30,-113.542,35.1036,0,-109.36,32.973,30,-109.36,32.973,0,-106.042,29.6546,30,-106.042,29.6546,0,-103.911,25.473,30,-103.911,25.473,0,-103.177,20.8378,30,-103.177,20.8378,0]);
IndexedFaceSet123.coord = Coordinate124;

let Normal125 = browser.currentScene.createNode("Normal");
Normal125.vector = new MFVec3f(new float[1,0,0,1,0,0,0.951062,-0.309,0,0.951062,-0.309,0,0.809038,-0.587756,0,0.809038,-0.587756,0,0.587756,-0.809038,0,0.587756,-0.809038,0,0.309,-0.951062,0,0.309,-0.951062,0,0,-1,0,0,-1,0,-0.309,-0.951062,0,-0.309,-0.951062,0,-0.587756,-0.809038,0,-0.587756,-0.809038,0,-0.809038,-0.587756,0,-0.809038,-0.587756,0,-0.951062,-0.309,0,-0.951062,-0.309,0,-1,0,0,-1,0,0]);
IndexedFaceSet123.normal = Normal125;

Shape120.geometry = IndexedFaceSet123;

Group17.children[17] = Shape120;

let Shape126 = browser.currentScene.createNode("Shape");
let Appearance127 = browser.currentScene.createNode("Appearance");
let Material128 = browser.currentScene.createNode("Material");
Material128.USE = "_material0";
Appearance127.material = Material128;

Shape126.appearance = Appearance127;

let IndexedFaceSet129 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet129.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet129.solid = False;
let Coordinate130 = browser.currentScene.createNode("Coordinate");
Coordinate130.point = new MFVec3f(new float[-62.1345,91.9253,30,-62.1345,91.9253,0,-62.8687,87.2901,30,-62.8687,87.2901,0,-64.9993,83.1086,30,-64.9993,83.1086,0,-68.3177,79.7901,30,-68.3177,79.7901,0,-72.4993,77.6595,30,-72.4993,77.6595,0,-77.1345,76.9253,30,-77.1345,76.9253,0,-81.7698,77.6595,30,-81.7698,77.6595,0,-85.9513,79.7901,30,-85.9513,79.7901,0,-89.2698,83.1086,30,-89.2698,83.1086,0,-91.4004,87.2901,30,-91.4004,87.2901,0,-92.1345,91.9253,30,-92.1345,91.9253,0]);
IndexedFaceSet129.coord = Coordinate130;

let Normal131 = browser.currentScene.createNode("Normal");
Normal131.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-0.951062,0.309,0,-0.951062,0.309,0,-0.809038,0.587756,0,-0.809038,0.587756,0,-0.587756,0.809038,0,-0.587756,0.809038,0,-0.309,0.951062,0,-0.309,0.951062,0,0,1,0,0,1,0,0.309,0.951062,0,0.309,0.951062,0,0.587756,0.809038,0,0.587756,0.809038,0,0.809038,0.587756,0,0.809038,0.587756,0,0.951062,0.309,0,0.951062,0.309,0,1,0,0,1,0,0]);
IndexedFaceSet129.normal = Normal131;

Shape126.geometry = IndexedFaceSet129;

Group17.children[18] = Shape126;

let Shape132 = browser.currentScene.createNode("Shape");
let Appearance133 = browser.currentScene.createNode("Appearance");
let Material134 = browser.currentScene.createNode("Material");
Material134.USE = "_material0";
Appearance133.material = Material134;

Shape132.appearance = Appearance133;

let IndexedFaceSet135 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet135.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet135.solid = False;
let Coordinate136 = browser.currentScene.createNode("Coordinate");
Coordinate136.point = new MFVec3f(new float[-92.1345,91.9253,30,-92.1345,91.9253,0,-91.4004,96.5606,30,-91.4004,96.5606,0,-89.2698,100.742,30,-89.2698,100.742,0,-85.9513,104.061,30,-85.9513,104.061,0,-81.7698,106.191,30,-81.7698,106.191,0,-77.1345,106.925,30,-77.1345,106.925,0,-72.4993,106.191,30,-72.4993,106.191,0,-68.3177,104.061,30,-68.3177,104.061,0,-64.9993,100.742,30,-64.9993,100.742,0,-62.8687,96.5606,30,-62.8687,96.5606,0,-62.1345,91.9253,30,-62.1345,91.9253,0]);
IndexedFaceSet135.coord = Coordinate136;

let Normal137 = browser.currentScene.createNode("Normal");
Normal137.vector = new MFVec3f(new float[1,0,0,1,0,0,0.951062,-0.309,0,0.951062,-0.309,0,0.809038,-0.587756,0,0.809038,-0.587756,0,0.587756,-0.809038,0,0.587756,-0.809038,0,0.309,-0.951062,0,0.309,-0.951062,0,0,-1,0,0,-1,0,-0.309,-0.951062,0,-0.309,-0.951062,0,-0.587756,-0.809038,0,-0.587756,-0.809038,0,-0.809038,-0.587756,0,-0.809038,-0.587756,0,-0.951062,-0.309,0,-0.951062,-0.309,0,-1,0,0,-1,0,0]);
IndexedFaceSet135.normal = Normal137;

Shape132.geometry = IndexedFaceSet135;

Group17.children[19] = Shape132;

let Shape138 = browser.currentScene.createNode("Shape");
let Appearance139 = browser.currentScene.createNode("Appearance");
let Material140 = browser.currentScene.createNode("Material");
Material140.USE = "_material0";
Appearance139.material = Material140;

Shape138.appearance = Appearance139;

let IndexedFaceSet141 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet141.coordIndex = new MFInt32(new int[40,41,42,-1,41,43,42,-1,44,45,46,-1,45,47,46,-1,15,14,12,-1,14,48,12,-1,12,48,10,-1,19,18,49,-1,18,50,49,-1,49,50,51,-1,51,52,49,-1,52,53,49,-1,23,22,54,-1,22,38,54,-1,54,38,37,-1,33,3,55,-1,3,56,55,-1,55,56,57,-1,56,24,57,-1,57,24,26,-1,58,27,59,-1,27,29,59,-1,59,29,60,-1,43,61,62,-1,61,63,62,-1,62,63,64,-1,63,65,64,-1,64,65,66,-1,65,67,66,-1,66,67,68,-1,67,69,68,-1,68,69,70,-1,28,27,71,-1,27,72,71,-1,71,72,73,-1,72,31,73,-1,73,31,30,-1,19,74,20,-1,74,75,20,-1,20,75,76,-1,36,35,77,-1,35,78,77,-1,77,78,79,-1,79,78,80,-1,78,81,80,-1,80,81,82,-1,81,83,82,-1,82,83,84,-1,83,85,84,-1,84,85,86,-1,70,69,87,-1,69,88,87,-1,87,88,89,-1,90,91,92,-1,90,92,93,-1,90,93,94,-1,95,96,97,-1,95,97,98,-1,95,98,99,-1,95,99,100,-1,95,100,16,-1,95,16,15,-1,95,15,53,-1,95,53,52,-1,95,52,8,-1,95,8,7,-1,95,7,101,-1,102,103,44,-1,102,44,46,-1,102,46,104,-1,102,104,105,-1,102,105,106,-1,102,106,107,-1,102,107,108,-1,102,108,96,-1,102,96,109,-1,47,110,111,-1,47,111,112,-1,47,112,113,-1,47,113,114,-1,47,114,115,-1,47,115,116,-1,47,116,46,-1,117,118,119,-1,117,119,120,-1,117,120,121,-1,117,121,122,-1,117,122,0,-1,117,0,2,-1,1,123,124,-1,1,124,125,-1,1,125,126,-1,1,126,43,-1,1,43,62,-1,43,126,127,-1,43,127,128,-1,43,128,129,-1,43,129,130,-1,43,130,131,-1,43,131,132,-1,43,132,42,-1,133,40,42,-1,133,42,134,-1,133,134,135,-1,133,135,136,-1,133,136,137,-1,133,137,138,-1,133,138,111,-1,133,111,110,-1,139,140,141,-1,139,141,142,-1,139,142,143,-1,139,143,25,-1,139,25,24,-1,144,111,145,-1,144,145,146,-1,144,146,147,-1,144,147,148,-1,144,148,140,-1,144,140,139,-1,144,139,149,-1,144,149,92,-1,144,92,91,-1,144,91,150,-1,144,150,151,-1,144,151,152,-1,144,152,96,-1,153,12,11,-1,153,11,154,-1,153,154,155,-1,153,155,156,-1,153,156,94,-1,153,94,93,-1,157,9,8,-1,157,8,158,-1,157,158,159,-1,157,159,160,-1,157,160,161,-1,157,161,162,-1,7,84,86,-1,7,86,163,-1,7,163,164,-1,7,164,165,-1,7,165,166,-1,7,166,167,-1,7,167,101,-1,163,168,169,-1,163,169,170,-1,163,170,171,-1,163,171,172,-1,163,172,164,-1,161,173,174,-1,161,174,175,-1,161,175,176,-1,161,176,177,-1,161,177,178,-1,161,178,179,-1,161,179,180,-1,161,180,162,-1,181,174,173,-1,181,173,182,-1,181,182,183,-1,181,183,184,-1,181,184,185,-1,186,181,185,-1,186,185,187,-1,186,187,188,-1,186,188,189,-1,186,189,76,-1,186,76,75,-1,190,35,34,-1,190,34,191,-1,190,191,192,-1,190,192,193,-1,190,193,194,-1,190,194,177,-1,177,194,195,-1,177,195,196,-1,177,196,178,-1,168,163,197,-1,168,197,22,-1,168,22,21,-1,96,95,198,-1,96,198,199,-1,96,199,200,-1,96,200,201,-1,96,201,39,-1,96,39,38,-1,96,38,202,-1,96,202,109,-1,96,108,203,-1,96,203,204,-1,96,204,205,-1,96,205,206,-1,96,206,144,-1,111,144,207,-1,111,207,208,-1,111,208,209,-1,111,209,210,-1,111,210,112,-1,123,1,0,-1,123,0,32,-1,123,32,31,-1,123,31,3,-1,123,3,6,-1,123,6,211,-1,123,211,212,-1,123,212,213,-1,123,213,111,-1,111,138,214,-1,111,214,215,-1,111,215,216,-1,111,216,217,-1,111,217,123,-1,218,219,220,-1,218,220,221,-1,218,221,222,-1,218,222,223,-1,218,223,89,-1,218,89,88,-1,219,224,225,-1,219,225,226,-1,219,226,220,-1,119,118,227,-1,119,227,228,-1,119,228,224,-1,119,224,219,-1,119,219,229,-1,119,229,230,-1,119,230,231,-1,119,231,232,-1,233,234,235,-1,233,235,236,-1,233,236,237,-1,233,237,238,-1,233,238,232,-1,233,232,231,-1,234,59,60,-1,234,60,239,-1,234,239,240,-1,234,240,241,-1,234,241,235,-1,0,1,2,-1,3,4,5,-1,6,3,5,-1,7,8,9,-1,10,11,12,-1,13,14,15,-1,13,15,16,-1,17,18,19,-1,19,20,17,-1,21,22,23,-1,24,25,26,-1,27,28,29,-1,30,31,32,-1,33,4,3,-1,34,35,36,-1,37,38,39,-1]);
IndexedFaceSet141.solid = False;
let Coordinate142 = browser.currentScene.createNode("Coordinate");
Coordinate142.point = new MFVec3f(new float[89.6572,-55.3647,0,103.911,25.473,0,103.177,20.8378,0,66.0591,-134.671,0,55.3083,-117.398,0,56.0424,-112.763,0,55.3083,-108.128,0,-103.911,25.473,0,-89.6572,-55.3647,0,-103.177,20.8378,0,-45.6777,-127.029,0,-41.0424,-127.763,0,-52.0958,-140.663,0,-55.3083,-117.398,0,-53.1777,-121.58,0,-66.0591,-134.671,0,-56.0424,-112.763,0,-99.2878,-74.2658,0,-95.1063,-72.1353,0,-103.345,-108.719,0,-103.923,-75,0,-72.4993,106.191,0,-79.3446,127.297,0,-68.3177,104.061,0,37.5979,-145.212,0,36.4072,-127.029,0,41.0424,-127.763,0,103.345,-108.719,0,99.2878,-74.2658,0,103.923,-75,0,89.6572,-64.6353,0,79.3446,-127.297,0,88.923,-60,0,53.1777,-121.58,0,-130.312,29.6546,0,-146.929,30.1948,0,-126.994,32.973,0,-62.8687,96.5606,0,-66.0591,134.671,0,-62.1345,91.9253,0,79.3446,127.297,0,91.8159,118.616,0,77.1345,106.925,0,103.345,108.719,0,7.59738,149.807,0,22.7142,148.27,0,0,135,0,37.5979,145.212,0,-49.8592,-124.898,0,-91.8159,-118.616,0,-91.7878,-68.8168,0,-89.6572,-64.6353,0,-88.923,-60,0,-79.3446,-127.297,0,-64.9993,100.742,0,49.8592,-124.898,0,52.0958,-140.663,0,45.6777,-127.029,0,113.814,-97.7059,0,123.115,-85.6902,0,108.558,-74.2658,0,113.814,97.7059,0,106.042,29.6546,0,123.115,85.6902,0,109.36,32.973,0,131.152,72.7953,0,113.542,35.1036,0,137.844,59.1534,0,118.177,35.8378,0,143.121,44.9045,0,122.812,35.1036,0,95.1063,-72.1353,0,91.8159,-118.616,0,91.7878,-68.8168,0,-113.814,-97.7059,0,-123.115,-85.6902,0,-108.558,-74.2658,0,-122.812,35.1036,0,-143.121,44.9045,0,-118.177,35.8378,0,-113.542,35.1036,0,-137.844,59.1534,0,-109.36,32.973,0,-131.152,72.7953,0,-106.042,29.6546,0,-123.115,85.6902,0,-113.814,97.7059,0,126.994,32.973,0,146.929,30.1948,0,130.312,29.6546,0,-26.0424,-112.763,0,-26.7766,-108.128,0,-7.59738,-149.807,0,-22.7142,-148.27,0,-26.7766,-117.398,0,-77.1345,76.9253,0,-41.0424,-97.7631,0,-45.6777,-98.4973,0,-49.8592,-100.628,0,-53.1777,-103.946,0,-55.3083,-108.128,0,-81.7698,77.6595,0,-22.7142,148.27,0,-7.59738,149.807,0,-4.63525,134.266,0,-8.81678,132.135,0,-12.1353,128.817,0,-14.2658,124.635,0,-15,120,0,-37.5979,145.212,0,52.0958,140.663,0,41.0424,-97.7631,0,15,120,0,14.2658,124.635,0,12.1353,128.817,0,8.81678,132.135,0,4.63525,134.266,0,103.911,16.2025,0,106.042,12.021,0,103.923,-45,0,99.2878,-45.7342,0,95.1063,-47.8647,0,91.7878,-51.1832,0,77.1345,76.9253,0,81.7698,77.6595,0,85.9513,79.7901,0,89.2698,83.1086,0,91.4004,87.2901,0,92.1345,91.9253,0,91.4004,96.5606,0,89.2698,100.742,0,85.9513,104.061,0,81.7698,106.191,0,66.0591,134.671,0,72.4993,106.191,0,68.3177,104.061,0,64.9993,100.742,0,62.8687,96.5606,0,62.1345,91.9253,0,22.7142,-148.27,0,26.0424,-112.763,0,26.7766,-117.398,0,28.9072,-121.58,0,32.2256,-124.898,0,0,105,0,36.4072,-98.4973,0,32.2256,-100.628,0,28.9072,-103.946,0,26.7766,-108.128,0,7.59738,-149.807,0,-28.9072,-103.946,0,-32.2256,-100.628,0,-36.4072,-98.4973,0,-37.5979,-145.212,0,-36.4072,-127.029,0,-32.2256,-124.898,0,-28.9072,-121.58,0,-103.911,16.2025,0,-91.7878,-51.1832,0,-95.1063,-47.8647,0,-99.2878,-45.7342,0,-103.923,-45,0,-106.042,12.021,0,-103.345,108.719,0,-92.1345,91.9253,0,-91.4004,87.2901,0,-89.2698,83.1086,0,-85.9513,79.7901,0,-77.1345,106.925,0,-81.7698,106.191,0,-85.9513,104.061,0,-89.2698,100.742,0,-91.4004,96.5606,0,-108.558,-45.7342,0,-143.121,-44.9045,0,-146.929,-30.1948,0,-149.23,-15.1752,0,-150,0,0,-118.177,5.83778,0,-113.542,6.57193,0,-109.36,8.70253,0,-137.844,-59.1534,0,-112.74,-47.8647,0,-116.058,-51.1832,0,-118.189,-55.3647,0,-118.923,-60,0,-131.152,-72.7953,0,-118.189,-64.6353,0,-116.058,-68.8168,0,-112.74,-72.1353,0,-149.23,15.1752,0,-132.443,25.473,0,-133.177,20.8378,0,-132.443,16.2025,0,-130.312,12.021,0,-126.994,8.70253,0,-122.812,6.57193,0,-91.8159,118.616,0,-72.4993,77.6595,0,-68.3177,79.7901,0,-64.9993,83.1086,0,-62.8687,87.2901,0,-52.0958,140.663,0,-14.2658,115.365,0,-12.1353,111.183,0,-8.81678,107.865,0,-4.63525,105.734,0,4.63525,105.734,0,8.81678,107.865,0,12.1353,111.183,0,14.2658,115.365,0,53.1777,-103.946,0,49.8592,-100.628,0,45.6777,-98.4973,0,62.8687,87.2901,0,64.9993,83.1086,0,68.3177,79.7901,0,72.4993,77.6595,0,149.23,15.1752,0,150,0,0,130.312,12.021,0,132.443,16.2025,0,133.177,20.8378,0,132.443,25.473,0,118.177,5.83778,0,122.812,6.57193,0,126.994,8.70253,0,109.36,8.70253,0,113.542,6.57193,0,149.23,-15.1752,0,146.929,-30.1948,0,143.121,-44.9045,0,108.558,-45.7342,0,137.844,-59.1534,0,131.152,-72.7953,0,118.923,-60,0,118.189,-55.3647,0,116.058,-51.1832,0,112.74,-47.8647,0,112.74,-72.1353,0,116.058,-68.8168,0,118.189,-64.6353,0]);
IndexedFaceSet141.coord = Coordinate142;

Shape138.geometry = IndexedFaceSet141;

Group17.children[20] = Shape138;

let Shape143 = browser.currentScene.createNode("Shape");
let Appearance144 = browser.currentScene.createNode("Appearance");
let Material145 = browser.currentScene.createNode("Material");
Material145.USE = "_material0";
Appearance144.material = Material145;

Shape143.appearance = Appearance144;

let IndexedFaceSet146 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet146.coordIndex = new MFInt32(new int[40,41,42,-1,41,43,42,-1,44,45,46,-1,45,47,46,-1,14,13,48,-1,13,10,48,-1,48,10,12,-1,18,17,49,-1,17,50,49,-1,49,50,51,-1,52,51,53,-1,51,50,53,-1,22,21,38,-1,21,54,38,-1,38,54,39,-1,5,33,55,-1,33,56,55,-1,55,56,26,-1,56,57,26,-1,26,57,24,-1,29,58,27,-1,58,59,27,-1,27,59,60,-1,61,42,62,-1,42,63,62,-1,62,63,64,-1,63,65,64,-1,64,65,66,-1,65,67,66,-1,66,67,68,-1,67,69,68,-1,68,69,70,-1,29,28,71,-1,28,72,71,-1,71,72,31,-1,72,73,31,-1,31,73,32,-1,74,17,75,-1,17,20,75,-1,75,20,76,-1,35,34,77,-1,34,78,77,-1,77,78,79,-1,77,79,80,-1,79,81,80,-1,80,81,82,-1,81,83,82,-1,82,83,84,-1,83,85,84,-1,84,85,86,-1,68,70,87,-1,70,88,87,-1,87,88,89,-1,90,91,92,-1,90,92,93,-1,90,93,94,-1,95,96,9,-1,95,9,8,-1,95,8,52,-1,95,52,53,-1,95,53,13,-1,95,13,16,-1,95,16,97,-1,95,97,98,-1,95,98,99,-1,95,99,100,-1,95,100,101,-1,102,103,101,-1,102,101,104,-1,102,104,105,-1,102,105,106,-1,102,106,107,-1,102,107,108,-1,102,108,47,-1,102,47,45,-1,102,45,109,-1,46,47,110,-1,46,110,111,-1,46,111,112,-1,46,112,113,-1,46,113,114,-1,46,114,115,-1,46,115,116,-1,117,0,2,-1,117,2,118,-1,117,118,119,-1,117,119,120,-1,117,120,121,-1,117,121,122,-1,1,63,42,-1,1,42,123,-1,1,123,124,-1,1,124,125,-1,1,125,126,-1,42,43,127,-1,42,127,128,-1,42,128,129,-1,42,129,130,-1,42,130,131,-1,42,131,132,-1,42,132,123,-1,133,116,115,-1,133,115,134,-1,133,134,135,-1,133,135,136,-1,133,136,137,-1,133,137,138,-1,133,138,43,-1,133,43,41,-1,139,26,25,-1,139,25,140,-1,139,140,141,-1,139,141,142,-1,139,142,143,-1,144,101,145,-1,144,145,146,-1,144,146,147,-1,144,147,94,-1,144,94,93,-1,144,93,148,-1,144,148,139,-1,144,139,143,-1,144,143,149,-1,144,149,150,-1,144,150,151,-1,144,151,152,-1,144,152,115,-1,153,92,91,-1,153,91,154,-1,153,154,155,-1,153,155,156,-1,153,156,11,-1,153,11,10,-1,157,158,159,-1,157,159,160,-1,157,160,161,-1,157,161,162,-1,157,162,8,-1,157,8,7,-1,9,96,163,-1,9,163,164,-1,9,164,165,-1,9,165,166,-1,9,166,167,-1,9,167,86,-1,9,86,85,-1,167,166,168,-1,167,168,169,-1,167,169,170,-1,167,170,171,-1,167,171,172,-1,159,158,173,-1,159,173,174,-1,159,174,175,-1,159,175,176,-1,159,176,177,-1,159,177,178,-1,159,178,179,-1,159,179,180,-1,181,182,183,-1,181,183,184,-1,181,184,185,-1,181,185,180,-1,181,180,179,-1,186,75,76,-1,186,76,187,-1,186,187,188,-1,186,188,189,-1,186,189,182,-1,186,182,181,-1,190,176,191,-1,190,191,192,-1,190,192,193,-1,190,193,194,-1,190,194,36,-1,190,36,35,-1,176,175,195,-1,176,195,196,-1,176,196,191,-1,172,23,22,-1,172,22,197,-1,172,197,167,-1,101,103,198,-1,101,198,38,-1,101,38,37,-1,101,37,199,-1,101,199,200,-1,101,200,201,-1,101,201,202,-1,101,202,95,-1,101,144,203,-1,101,203,204,-1,101,204,205,-1,101,205,206,-1,101,206,104,-1,115,114,207,-1,115,207,208,-1,115,208,209,-1,115,209,210,-1,115,210,144,-1,126,115,211,-1,126,211,212,-1,126,212,213,-1,126,213,6,-1,126,6,5,-1,126,5,31,-1,126,31,30,-1,126,30,2,-1,126,2,1,-1,115,126,214,-1,115,214,215,-1,115,215,216,-1,115,216,217,-1,115,217,134,-1,218,87,89,-1,218,89,219,-1,218,219,220,-1,218,220,221,-1,218,221,222,-1,218,222,223,-1,223,222,224,-1,223,224,225,-1,223,225,226,-1,121,227,228,-1,121,228,229,-1,121,229,230,-1,121,230,223,-1,121,223,226,-1,121,226,231,-1,121,231,232,-1,121,232,122,-1,233,228,227,-1,233,227,234,-1,233,234,235,-1,233,235,236,-1,233,236,237,-1,233,237,238,-1,238,237,239,-1,238,239,240,-1,238,240,241,-1,238,241,60,-1,238,60,59,-1,0,1,2,-1,3,4,5,-1,3,5,6,-1,7,8,9,-1,10,11,12,-1,13,14,15,-1,16,13,15,-1,17,18,19,-1,19,20,17,-1,21,22,23,-1,24,25,26,-1,27,28,29,-1,30,31,32,-1,5,4,33,-1,34,35,36,-1,37,38,39,-1]);
IndexedFaceSet146.solid = False;
let Coordinate147 = browser.currentScene.createNode("Coordinate");
Coordinate147.point = new MFVec3f(new float[103.177,20.8378,30,103.911,25.473,30,89.6572,-55.3647,30,56.0424,-112.763,30,55.3083,-117.398,30,66.0591,-134.671,30,55.3083,-108.128,30,-103.177,20.8378,30,-89.6572,-55.3647,30,-103.911,25.473,30,-52.0958,-140.663,30,-41.0424,-127.763,30,-45.6777,-127.029,30,-66.0591,-134.671,30,-53.1777,-121.58,30,-55.3083,-117.398,30,-56.0424,-112.763,30,-103.345,-108.719,30,-95.1063,-72.1353,30,-99.2878,-74.2658,30,-103.923,-75,30,-68.3177,104.061,30,-79.3446,127.297,30,-72.4993,106.191,30,41.0424,-127.763,30,36.4072,-127.029,30,37.5979,-145.212,30,103.923,-75,30,99.2878,-74.2658,30,103.345,-108.719,30,88.923,-60,30,79.3446,-127.297,30,89.6572,-64.6353,30,53.1777,-121.58,30,-126.994,32.973,30,-146.929,30.1948,30,-130.312,29.6546,30,-62.1345,91.9253,30,-66.0591,134.671,30,-62.8687,96.5606,30,91.8159,118.616,30,79.3446,127.297,30,103.345,108.719,30,77.1345,106.925,30,22.7142,148.27,30,7.59738,149.807,30,37.5979,145.212,30,0,135,30,-49.8592,-124.898,30,-91.7878,-68.8168,30,-91.8159,-118.616,30,-89.6572,-64.6353,30,-88.923,-60,30,-79.3446,-127.297,30,-64.9993,100.742,30,52.0958,-140.663,30,49.8592,-124.898,30,45.6777,-127.029,30,113.814,-97.7059,30,123.115,-85.6902,30,108.558,-74.2658,30,113.814,97.7059,30,123.115,85.6902,30,106.042,29.6546,30,131.152,72.7953,30,109.36,32.973,30,137.844,59.1534,30,113.542,35.1036,30,143.121,44.9045,30,118.177,35.8378,30,122.812,35.1036,30,91.8159,-118.616,30,95.1063,-72.1353,30,91.7878,-68.8168,30,-113.814,-97.7059,30,-123.115,-85.6902,30,-108.558,-74.2658,30,-143.121,44.9045,30,-122.812,35.1036,30,-118.177,35.8378,30,-137.844,59.1534,30,-113.542,35.1036,30,-131.152,72.7953,30,-109.36,32.973,30,-123.115,85.6902,30,-106.042,29.6546,30,-113.814,97.7059,30,146.929,30.1948,30,126.994,32.973,30,130.312,29.6546,30,-26.0424,-112.763,30,-26.7766,-117.398,30,-22.7142,-148.27,30,-7.59738,-149.807,30,-26.7766,-108.128,30,-77.1345,76.9253,30,-81.7698,77.6595,30,-55.3083,-108.128,30,-53.1777,-103.946,30,-49.8592,-100.628,30,-45.6777,-98.4973,30,-41.0424,-97.7631,30,-22.7142,148.27,30,-37.5979,145.212,30,-15,120,30,-14.2658,124.635,30,-12.1353,128.817,30,-8.81678,132.135,30,-4.63525,134.266,30,-7.59738,149.807,30,4.63525,134.266,30,8.81678,132.135,30,12.1353,128.817,30,14.2658,124.635,30,15,120,30,41.0424,-97.7631,30,52.0958,140.663,30,103.911,16.2025,30,91.7878,-51.1832,30,95.1063,-47.8647,30,99.2878,-45.7342,30,103.923,-45,30,106.042,12.021,30,89.2698,83.1086,30,85.9513,79.7901,30,81.7698,77.6595,30,77.1345,76.9253,30,81.7698,106.191,30,85.9513,104.061,30,89.2698,100.742,30,91.4004,96.5606,30,92.1345,91.9253,30,91.4004,87.2901,30,66.0591,134.671,30,62.1345,91.9253,30,62.8687,96.5606,30,64.9993,100.742,30,68.3177,104.061,30,72.4993,106.191,30,22.7142,-148.27,30,32.2256,-124.898,30,28.9072,-121.58,30,26.7766,-117.398,30,26.0424,-112.763,30,0,105,30,-36.4072,-98.4973,30,-32.2256,-100.628,30,-28.9072,-103.946,30,7.59738,-149.807,30,26.7766,-108.128,30,28.9072,-103.946,30,32.2256,-100.628,30,36.4072,-98.4973,30,-37.5979,-145.212,30,-28.9072,-121.58,30,-32.2256,-124.898,30,-36.4072,-127.029,30,-103.911,16.2025,30,-106.042,12.021,30,-103.923,-45,30,-99.2878,-45.7342,30,-95.1063,-47.8647,30,-91.7878,-51.1832,30,-85.9513,79.7901,30,-89.2698,83.1086,30,-91.4004,87.2901,30,-92.1345,91.9253,30,-103.345,108.719,30,-91.4004,96.5606,30,-89.2698,100.742,30,-85.9513,104.061,30,-81.7698,106.191,30,-77.1345,106.925,30,-109.36,8.70253,30,-113.542,6.57193,30,-118.177,5.83778,30,-150,0,30,-149.23,-15.1752,30,-146.929,-30.1948,30,-143.121,-44.9045,30,-108.558,-45.7342,30,-137.844,-59.1534,30,-118.923,-60,30,-118.189,-55.3647,30,-116.058,-51.1832,30,-112.74,-47.8647,30,-131.152,-72.7953,30,-112.74,-72.1353,30,-116.058,-68.8168,30,-118.189,-64.6353,30,-149.23,15.1752,30,-130.312,12.021,30,-132.443,16.2025,30,-133.177,20.8378,30,-132.443,25.473,30,-122.812,6.57193,30,-126.994,8.70253,30,-91.8159,118.616,30,-52.0958,140.663,30,-62.8687,87.2901,30,-64.9993,83.1086,30,-68.3177,79.7901,30,-72.4993,77.6595,30,-4.63525,105.734,30,-8.81678,107.865,30,-12.1353,111.183,30,-14.2658,115.365,30,14.2658,115.365,30,12.1353,111.183,30,8.81678,107.865,30,4.63525,105.734,30,45.6777,-98.4973,30,49.8592,-100.628,30,53.1777,-103.946,30,72.4993,77.6595,30,68.3177,79.7901,30,64.9993,83.1086,30,62.8687,87.2901,30,149.23,15.1752,30,132.443,25.473,30,133.177,20.8378,30,132.443,16.2025,30,130.312,12.021,30,150,0,30,126.994,8.70253,30,122.812,6.57193,30,118.177,5.83778,30,108.558,-45.7342,30,143.121,-44.9045,30,146.929,-30.1948,30,149.23,-15.1752,30,113.542,6.57193,30,109.36,8.70253,30,137.844,-59.1534,30,112.74,-47.8647,30,116.058,-51.1832,30,118.189,-55.3647,30,118.923,-60,30,131.152,-72.7953,30,118.189,-64.6353,30,116.058,-68.8168,30,112.74,-72.1353,30]);
IndexedFaceSet146.coord = Coordinate147;

Shape143.geometry = IndexedFaceSet146;

Group17.children[21] = Shape143;

Group16.children = new MFNode();

Group16.children[0] = Group17;

Group15.children = new MFNode();

Group15.children[0] = Group16;

Group14.children = new MFNode();

Group14.children[0] = Group15;

Transform13.children = new MFNode();

Transform13.children[0] = Group14;

browser.currentScene.children[11] = Transform13;

