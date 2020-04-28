let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Interactive";
X3D0.version = "3.1";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "CatiaHubAssemblyCombined.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "Hello CatiaHubAssemblyCombined";
Viewpoint3.position = new SFVec3f(new float[0,0,1]);
browser.currentScene.children[1] = Viewpoint3;

let Transform4 = browser.currentScene.createNode("Transform");
Transform4.DEF = "RootTransform";
Transform4.scale = new SFVec3f(new float[0.001,0.001,0.001]);
let CADAssembly5 = browser.currentScene.createNode("CADAssembly");
CADAssembly5.name = "Hub_Assembly";
let Transform6 = browser.currentScene.createNode("Transform");
Transform6.DEF = "TransformCatiaHubDiscWithHoles";
let CADAssembly7 = browser.currentScene.createNode("CADAssembly");
CADAssembly7.name = "disc_with_holes";
let CADPart8 = browser.currentScene.createNode("CADPart");
CADPart8.name = "disc_with_holes";
let CADFace9 = browser.currentScene.createNode("CADFace");
CADFace9.name = "disc_with_holes_mesh01";
let Shape10 = browser.currentScene.createNode("Shape");
let Appearance11 = browser.currentScene.createNode("Appearance");
let Material12 = browser.currentScene.createNode("Material");
Material12.DEF = "_material0";
Material12.diffuseColor = new SFColor(new float[1,0.745098,0.278431]);
Appearance11.material = Material12;

Shape10.appearance = Appearance11;

let IndexedFaceSet13 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet13.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1,34,35,36,-1,35,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,39,41,40,-1,40,41,42,-1,41,43,42,-1,42,43,44,-1,43,45,44,-1,44,45,46,-1,45,47,46,-1,46,47,48,-1,47,49,48,-1,48,49,50,-1,49,51,50,-1,50,51,52,-1,51,53,52,-1,52,53,54,-1,53,55,54,-1,54,55,56,-1,55,57,56,-1,56,57,58,-1,57,59,58,-1,58,59,60,-1,59,61,60,-1,60,61,62,-1,61,63,62,-1]);
IndexedFaceSet13.solid = False;
let Coordinate14 = browser.currentScene.createNode("Coordinate");
Coordinate14.point = new MFVec3f(new float[-150,0,0,-150,0,30,-149.23,15.1752,0,-149.23,15.1752,30,-146.929,30.1948,0,-146.929,30.1948,30,-143.121,44.9045,0,-143.121,44.9045,30,-137.844,59.1534,0,-137.844,59.1534,30,-131.152,72.7953,0,-131.152,72.7953,30,-123.115,85.6902,0,-123.115,85.6902,30,-113.814,97.7059,0,-113.814,97.7059,30,-103.345,108.719,0,-103.345,108.719,30,-91.8159,118.616,0,-91.8159,118.616,30,-79.3446,127.297,0,-79.3446,127.297,30,-66.0591,134.671,0,-66.0591,134.671,30,-52.0958,140.663,0,-52.0958,140.663,30,-37.5979,145.212,0,-37.5979,145.212,30,-22.7142,148.27,0,-22.7142,148.27,30,-7.59738,149.807,0,-7.59738,149.807,30,7.59738,149.807,0,7.59738,149.807,30,22.7142,148.27,0,22.7142,148.27,30,37.5979,145.212,0,37.5979,145.212,30,52.0958,140.663,0,52.0958,140.663,30,66.0591,134.671,0,66.0591,134.671,30,79.3446,127.297,0,79.3446,127.297,30,91.8159,118.616,0,91.8159,118.616,30,103.345,108.719,0,103.345,108.719,30,113.814,97.7059,0,113.814,97.7059,30,123.115,85.6902,0,123.115,85.6902,30,131.152,72.7953,0,131.152,72.7953,30,137.844,59.1534,0,137.844,59.1534,30,143.121,44.9045,0,143.121,44.9045,30,146.929,30.1948,0,146.929,30.1948,30,149.23,15.1752,0,149.23,15.1752,30,150,0,0,150,0,30]);
IndexedFaceSet13.coord = Coordinate14;

let Normal15 = browser.currentScene.createNode("Normal");
Normal15.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-0.994872,0.101138,0,-0.994872,0.101138,0,-0.979536,0.20127,0,-0.979536,0.20127,0,-0.954141,0.299356,0,-0.954141,0.299356,0,-0.918969,0.39433,0,-0.918969,0.39433,0,-0.874362,0.485275,0,-0.874362,0.485275,0,-0.820779,0.571245,0,-0.820779,0.571245,0,-0.758772,0.651357,0,-0.758772,0.651357,0,-0.688955,0.724804,0,-0.688955,0.724804,0,-0.612079,0.790796,0,-0.612079,0.790796,0,-0.528947,0.848655,0,-0.528947,0.848655,0,-0.440382,0.89781,0,-0.440382,0.89781,0,-0.347301,0.937754,0,-0.347301,0.937754,0,-0.250649,0.968078,0,-0.250649,0.968078,0,-0.151402,0.988472,0,-0.151402,0.988472,0,-0.0506302,0.998717,0,-0.0506302,0.998717,0,0.0506302,0.998717,0,0.0506302,0.998717,0,0.151402,0.988472,0,0.151402,0.988472,0,0.250649,0.968078,0,0.250649,0.968078,0,0.347301,0.937754,0,0.347301,0.937754,0,0.440382,0.89781,0,0.440382,0.89781,0,0.528947,0.848655,0,0.528947,0.848655,0,0.612079,0.790796,0,0.612079,0.790796,0,0.688955,0.724804,0,0.688955,0.724804,0,0.758772,0.651357,0,0.758772,0.651357,0,0.820779,0.571245,0,0.820779,0.571245,0,0.874362,0.485275,0,0.874362,0.485275,0,0.918969,0.39433,0,0.918969,0.39433,0,0.954141,0.299356,0,0.954141,0.299356,0,0.979536,0.20127,0,0.979536,0.20127,0,0.994872,0.101138,0,0.994872,0.101138,0,1,0,0,1,0,0]);
IndexedFaceSet13.normal = Normal15;

Shape10.geometry = IndexedFaceSet13;

CADFace9.shape = Shape10;

CADPart8.children = new MFNode();

CADPart8.children[0] = CADFace9;

let CADFace16 = browser.currentScene.createNode("CADFace");
CADFace16.name = "disc_with_holes_mesh02";
let Shape17 = browser.currentScene.createNode("Shape");
let Appearance18 = browser.currentScene.createNode("Appearance");
let Material19 = browser.currentScene.createNode("Material");
Material19.USE = "_material0";
Appearance18.material = Material19;

Shape17.appearance = Appearance18;

let IndexedFaceSet20 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet20.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1,34,35,36,-1,35,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,39,41,40,-1,40,41,42,-1,41,43,42,-1,42,43,44,-1,43,45,44,-1,44,45,46,-1,45,47,46,-1,46,47,48,-1,47,49,48,-1,48,49,50,-1,49,51,50,-1,50,51,52,-1,51,53,52,-1,52,53,54,-1,53,55,54,-1,54,55,56,-1,55,57,56,-1,56,57,58,-1,57,59,58,-1,58,59,60,-1,59,61,60,-1,60,61,62,-1,61,63,62,-1]);
IndexedFaceSet20.solid = False;
let Coordinate21 = browser.currentScene.createNode("Coordinate");
Coordinate21.point = new MFVec3f(new float[150,0,0,150,0,30,149.23,-15.1752,0,149.23,-15.1752,30,146.929,-30.1948,0,146.929,-30.1948,30,143.121,-44.9045,0,143.121,-44.9045,30,137.844,-59.1534,0,137.844,-59.1534,30,131.152,-72.7953,0,131.152,-72.7953,30,123.115,-85.6902,0,123.115,-85.6902,30,113.814,-97.7059,0,113.814,-97.7059,30,103.345,-108.719,0,103.345,-108.719,30,91.8159,-118.616,0,91.8159,-118.616,30,79.3446,-127.297,0,79.3446,-127.297,30,66.0591,-134.671,0,66.0591,-134.671,30,52.0958,-140.663,0,52.0958,-140.663,30,37.5979,-145.212,0,37.5979,-145.212,30,22.7142,-148.27,0,22.7142,-148.27,30,7.59738,-149.807,0,7.59738,-149.807,30,-7.59738,-149.807,0,-7.59738,-149.807,30,-22.7142,-148.27,0,-22.7142,-148.27,30,-37.5979,-145.212,0,-37.5979,-145.212,30,-52.0958,-140.663,0,-52.0958,-140.663,30,-66.0591,-134.671,0,-66.0591,-134.671,30,-79.3446,-127.297,0,-79.3446,-127.297,30,-91.8159,-118.616,0,-91.8159,-118.616,30,-103.345,-108.719,0,-103.345,-108.719,30,-113.814,-97.7059,0,-113.814,-97.7059,30,-123.115,-85.6902,0,-123.115,-85.6902,30,-131.152,-72.7953,0,-131.152,-72.7953,30,-137.844,-59.1534,0,-137.844,-59.1534,30,-143.121,-44.9045,0,-143.121,-44.9045,30,-146.929,-30.1948,0,-146.929,-30.1948,30,-149.23,-15.1752,0,-149.23,-15.1752,30,-150,0,0,-150,0,30]);
IndexedFaceSet20.coord = Coordinate21;

let Normal22 = browser.currentScene.createNode("Normal");
Normal22.vector = new MFVec3f(new float[1,0,0,1,0,0,0.994872,-0.101138,0,0.994872,-0.101138,0,0.979536,-0.20127,0,0.979536,-0.20127,0,0.954141,-0.299356,0,0.954141,-0.299356,0,0.918969,-0.39433,0,0.918969,-0.39433,0,0.874362,-0.485275,0,0.874362,-0.485275,0,0.820779,-0.571245,0,0.820779,-0.571245,0,0.758772,-0.651357,0,0.758772,-0.651357,0,0.688955,-0.724804,0,0.688955,-0.724804,0,0.612079,-0.790796,0,0.612079,-0.790796,0,0.528947,-0.848655,0,0.528947,-0.848655,0,0.440382,-0.89781,0,0.440382,-0.89781,0,0.347301,-0.937754,0,0.347301,-0.937754,0,0.250649,-0.968078,0,0.250649,-0.968078,0,0.151402,-0.988472,0,0.151402,-0.988472,0,0.0506302,-0.998717,0,0.0506302,-0.998717,0,-0.0506302,-0.998717,0,-0.0506302,-0.998717,0,-0.151402,-0.988472,0,-0.151402,-0.988472,0,-0.250649,-0.968078,0,-0.250649,-0.968078,0,-0.347301,-0.937754,0,-0.347301,-0.937754,0,-0.440382,-0.89781,0,-0.440382,-0.89781,0,-0.528947,-0.848655,0,-0.528947,-0.848655,0,-0.612079,-0.790796,0,-0.612079,-0.790796,0,-0.688955,-0.724804,0,-0.688955,-0.724804,0,-0.758772,-0.651357,0,-0.758772,-0.651357,0,-0.820779,-0.571245,0,-0.820779,-0.571245,0,-0.874362,-0.485275,0,-0.874362,-0.485275,0,-0.918969,-0.39433,0,-0.918969,-0.39433,0,-0.954141,-0.299356,0,-0.954141,-0.299356,0,-0.979536,-0.20127,0,-0.979536,-0.20127,0,-0.994872,-0.101138,0,-0.994872,-0.101138,0,-1,0,0,-1,0,0]);
IndexedFaceSet20.normal = Normal22;

Shape17.geometry = IndexedFaceSet20;

CADFace16.shape = Shape17;

CADPart8.children[1] = CADFace16;

let CADFace23 = browser.currentScene.createNode("CADFace");
CADFace23.name = "disc_with_holes_mesh03";
let Shape24 = browser.currentScene.createNode("Shape");
let Appearance25 = browser.currentScene.createNode("Appearance");
let Material26 = browser.currentScene.createNode("Material");
Material26.USE = "_material0";
Appearance25.material = Material26;

Shape24.appearance = Appearance25;

let IndexedFaceSet27 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet27.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet27.solid = False;
let Coordinate28 = browser.currentScene.createNode("Coordinate");
Coordinate28.point = new MFVec3f(new float[15,120,30,15,120,0,14.2658,115.365,30,14.2658,115.365,0,12.1353,111.183,30,12.1353,111.183,0,8.81678,107.865,30,8.81678,107.865,0,4.63525,105.734,30,4.63525,105.734,0,0,105,30,0,105,0,-4.63525,105.734,30,-4.63525,105.734,0,-8.81678,107.865,30,-8.81678,107.865,0,-12.1353,111.183,30,-12.1353,111.183,0,-14.2658,115.365,30,-14.2658,115.365,0,-15,120,30,-15,120,0]);
IndexedFaceSet27.coord = Coordinate28;

let Normal29 = browser.currentScene.createNode("Normal");
Normal29.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-0.951062,0.309,0,-0.951062,0.309,0,-0.809038,0.587756,0,-0.809038,0.587756,0,-0.587756,0.809038,0,-0.587756,0.809038,0,-0.309,0.951062,0,-0.309,0.951062,0,0,1,0,0,1,0,0.309,0.951062,0,0.309,0.951062,0,0.587756,0.809038,0,0.587756,0.809038,0,0.809038,0.587756,0,0.809038,0.587756,0,0.951062,0.309,0,0.951062,0.309,0,1,0,0,1,0,0]);
IndexedFaceSet27.normal = Normal29;

Shape24.geometry = IndexedFaceSet27;

CADFace23.shape = Shape24;

CADPart8.children[2] = CADFace23;

let CADFace30 = browser.currentScene.createNode("CADFace");
CADFace30.name = "disc_with_holes_mesh04";
let Shape31 = browser.currentScene.createNode("Shape");
let Appearance32 = browser.currentScene.createNode("Appearance");
let Material33 = browser.currentScene.createNode("Material");
Material33.USE = "_material0";
Appearance32.material = Material33;

Shape31.appearance = Appearance32;

let IndexedFaceSet34 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet34.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet34.solid = False;
let Coordinate35 = browser.currentScene.createNode("Coordinate");
Coordinate35.point = new MFVec3f(new float[-15,120,30,-15,120,0,-14.2658,124.635,30,-14.2658,124.635,0,-12.1353,128.817,30,-12.1353,128.817,0,-8.81678,132.135,30,-8.81678,132.135,0,-4.63525,134.266,30,-4.63525,134.266,0,0,135,30,0,135,0,4.63525,134.266,30,4.63525,134.266,0,8.81678,132.135,30,8.81678,132.135,0,12.1353,128.817,30,12.1353,128.817,0,14.2658,124.635,30,14.2658,124.635,0,15,120,30,15,120,0]);
IndexedFaceSet34.coord = Coordinate35;

let Normal36 = browser.currentScene.createNode("Normal");
Normal36.vector = new MFVec3f(new float[1,0,0,1,0,0,0.951062,-0.309,0,0.951062,-0.309,0,0.809038,-0.587756,0,0.809038,-0.587756,0,0.587756,-0.809038,0,0.587756,-0.809038,0,0.309,-0.951062,0,0.309,-0.951062,0,0,-1,0,0,-1,0,-0.309,-0.951062,0,-0.309,-0.951062,0,-0.587756,-0.809038,0,-0.587756,-0.809038,0,-0.809038,-0.587756,0,-0.809038,-0.587756,0,-0.951062,-0.309,0,-0.951062,-0.309,0,-1,0,0,-1,0,0]);
IndexedFaceSet34.normal = Normal36;

Shape31.geometry = IndexedFaceSet34;

CADFace30.shape = Shape31;

CADPart8.children[3] = CADFace30;

let CADFace37 = browser.currentScene.createNode("CADFace");
CADFace37.name = "disc_with_holes_mesh05";
let Shape38 = browser.currentScene.createNode("Shape");
let Appearance39 = browser.currentScene.createNode("Appearance");
let Material40 = browser.currentScene.createNode("Material");
Material40.USE = "_material0";
Appearance39.material = Material40;

Shape38.appearance = Appearance39;

let IndexedFaceSet41 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet41.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet41.solid = False;
let Coordinate42 = browser.currentScene.createNode("Coordinate");
Coordinate42.point = new MFVec3f(new float[92.1345,91.9253,30,92.1345,91.9253,0,91.4004,87.2901,30,91.4004,87.2901,0,89.2698,83.1086,30,89.2698,83.1086,0,85.9513,79.7901,30,85.9513,79.7901,0,81.7698,77.6595,30,81.7698,77.6595,0,77.1345,76.9253,30,77.1345,76.9253,0,72.4993,77.6595,30,72.4993,77.6595,0,68.3177,79.7901,30,68.3177,79.7901,0,64.9993,83.1086,30,64.9993,83.1086,0,62.8687,87.2901,30,62.8687,87.2901,0,62.1345,91.9253,30,62.1345,91.9253,0]);
IndexedFaceSet41.coord = Coordinate42;

let Normal43 = browser.currentScene.createNode("Normal");
Normal43.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-0.951062,0.309,0,-0.951062,0.309,0,-0.809038,0.587756,0,-0.809038,0.587756,0,-0.587756,0.809038,0,-0.587756,0.809038,0,-0.309,0.951062,0,-0.309,0.951062,0,0,1,0,0,1,0,0.309,0.951062,0,0.309,0.951062,0,0.587756,0.809038,0,0.587756,0.809038,0,0.809038,0.587756,0,0.809038,0.587756,0,0.951062,0.309,0,0.951062,0.309,0,1,0,0,1,0,0]);
IndexedFaceSet41.normal = Normal43;

Shape38.geometry = IndexedFaceSet41;

CADFace37.shape = Shape38;

CADPart8.children[4] = CADFace37;

let CADFace44 = browser.currentScene.createNode("CADFace");
CADFace44.name = "disc_with_holes_mesh06";
let Shape45 = browser.currentScene.createNode("Shape");
let Appearance46 = browser.currentScene.createNode("Appearance");
let Material47 = browser.currentScene.createNode("Material");
Material47.USE = "_material0";
Appearance46.material = Material47;

Shape45.appearance = Appearance46;

let IndexedFaceSet48 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet48.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet48.solid = False;
let Coordinate49 = browser.currentScene.createNode("Coordinate");
Coordinate49.point = new MFVec3f(new float[62.1345,91.9253,30,62.1345,91.9253,0,62.8687,96.5606,30,62.8687,96.5606,0,64.9993,100.742,30,64.9993,100.742,0,68.3177,104.061,30,68.3177,104.061,0,72.4993,106.191,30,72.4993,106.191,0,77.1345,106.925,30,77.1345,106.925,0,81.7698,106.191,30,81.7698,106.191,0,85.9513,104.061,30,85.9513,104.061,0,89.2698,100.742,30,89.2698,100.742,0,91.4004,96.5606,30,91.4004,96.5606,0,92.1345,91.9253,30,92.1345,91.9253,0]);
IndexedFaceSet48.coord = Coordinate49;

let Normal50 = browser.currentScene.createNode("Normal");
Normal50.vector = new MFVec3f(new float[1,0,0,1,0,0,0.951062,-0.309,0,0.951062,-0.309,0,0.809038,-0.587756,0,0.809038,-0.587756,0,0.587756,-0.809038,0,0.587756,-0.809038,0,0.309,-0.951062,0,0.309,-0.951062,0,0,-1,0,0,-1,0,-0.309,-0.951062,0,-0.309,-0.951062,0,-0.587756,-0.809038,0,-0.587756,-0.809038,0,-0.809038,-0.587756,0,-0.809038,-0.587756,0,-0.951062,-0.309,0,-0.951062,-0.309,0,-1,0,0,-1,0,0]);
IndexedFaceSet48.normal = Normal50;

Shape45.geometry = IndexedFaceSet48;

CADFace44.shape = Shape45;

CADPart8.children[5] = CADFace44;

let CADFace51 = browser.currentScene.createNode("CADFace");
CADFace51.name = "disc_with_holes_mesh07";
let Shape52 = browser.currentScene.createNode("Shape");
let Appearance53 = browser.currentScene.createNode("Appearance");
let Material54 = browser.currentScene.createNode("Material");
Material54.USE = "_material0";
Appearance53.material = Material54;

Shape52.appearance = Appearance53;

let IndexedFaceSet55 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet55.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet55.solid = False;
let Coordinate56 = browser.currentScene.createNode("Coordinate");
Coordinate56.point = new MFVec3f(new float[133.177,20.8378,30,133.177,20.8378,0,132.443,16.2025,30,132.443,16.2025,0,130.312,12.021,30,130.312,12.021,0,126.994,8.70253,30,126.994,8.70253,0,122.812,6.57193,30,122.812,6.57193,0,118.177,5.83778,30,118.177,5.83778,0,113.542,6.57193,30,113.542,6.57193,0,109.36,8.70253,30,109.36,8.70253,0,106.042,12.021,30,106.042,12.021,0,103.911,16.2025,30,103.911,16.2025,0,103.177,20.8378,30,103.177,20.8378,0]);
IndexedFaceSet55.coord = Coordinate56;

let Normal57 = browser.currentScene.createNode("Normal");
Normal57.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-0.951062,0.309,0,-0.951062,0.309,0,-0.809038,0.587756,0,-0.809038,0.587756,0,-0.587756,0.809038,0,-0.587756,0.809038,0,-0.309,0.951062,0,-0.309,0.951062,0,0,1,0,0,1,0,0.309,0.951062,0,0.309,0.951062,0,0.587756,0.809038,0,0.587756,0.809038,0,0.809038,0.587756,0,0.809038,0.587756,0,0.951062,0.309,0,0.951062,0.309,0,1,0,0,1,0,0]);
IndexedFaceSet55.normal = Normal57;

Shape52.geometry = IndexedFaceSet55;

CADFace51.shape = Shape52;

CADPart8.children[6] = CADFace51;

let CADFace58 = browser.currentScene.createNode("CADFace");
CADFace58.name = "disc_with_holes_mesh08";
let Shape59 = browser.currentScene.createNode("Shape");
let Appearance60 = browser.currentScene.createNode("Appearance");
let Material61 = browser.currentScene.createNode("Material");
Material61.USE = "_material0";
Appearance60.material = Material61;

Shape59.appearance = Appearance60;

let IndexedFaceSet62 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet62.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet62.solid = False;
let Coordinate63 = browser.currentScene.createNode("Coordinate");
Coordinate63.point = new MFVec3f(new float[103.177,20.8378,30,103.177,20.8378,0,103.911,25.473,30,103.911,25.473,0,106.042,29.6546,30,106.042,29.6546,0,109.36,32.973,30,109.36,32.973,0,113.542,35.1036,30,113.542,35.1036,0,118.177,35.8378,30,118.177,35.8378,0,122.812,35.1036,30,122.812,35.1036,0,126.994,32.973,30,126.994,32.973,0,130.312,29.6546,30,130.312,29.6546,0,132.443,25.473,30,132.443,25.473,0,133.177,20.8378,30,133.177,20.8378,0]);
IndexedFaceSet62.coord = Coordinate63;

let Normal64 = browser.currentScene.createNode("Normal");
Normal64.vector = new MFVec3f(new float[1,0,0,1,0,0,0.951062,-0.309,0,0.951062,-0.309,0,0.809038,-0.587756,0,0.809038,-0.587756,0,0.587756,-0.809038,0,0.587756,-0.809038,0,0.309,-0.951062,0,0.309,-0.951062,0,0,-1,0,0,-1,0,-0.309,-0.951062,0,-0.309,-0.951062,0,-0.587756,-0.809038,0,-0.587756,-0.809038,0,-0.809038,-0.587756,0,-0.809038,-0.587756,0,-0.951062,-0.309,0,-0.951062,-0.309,0,-1,0,0,-1,0,0]);
IndexedFaceSet62.normal = Normal64;

Shape59.geometry = IndexedFaceSet62;

CADFace58.shape = Shape59;

CADPart8.children[7] = CADFace58;

let CADFace65 = browser.currentScene.createNode("CADFace");
CADFace65.name = "disc_with_holes_mesh09";
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

CADFace65.shape = Shape66;

CADPart8.children[8] = CADFace65;

let CADFace72 = browser.currentScene.createNode("CADFace");
CADFace72.name = "disc_with_holes_mesh10";
let Shape73 = browser.currentScene.createNode("Shape");
let Appearance74 = browser.currentScene.createNode("Appearance");
let Material75 = browser.currentScene.createNode("Material");
Material75.USE = "_material0";
Appearance74.material = Material75;

Shape73.appearance = Appearance74;

let IndexedFaceSet76 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet76.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet76.solid = False;
let Coordinate77 = browser.currentScene.createNode("Coordinate");
Coordinate77.point = new MFVec3f(new float[88.923,-60,30,88.923,-60,0,89.6572,-55.3647,30,89.6572,-55.3647,0,91.7878,-51.1832,30,91.7878,-51.1832,0,95.1063,-47.8647,30,95.1063,-47.8647,0,99.2878,-45.7342,30,99.2878,-45.7342,0,103.923,-45,30,103.923,-45,0,108.558,-45.7342,30,108.558,-45.7342,0,112.74,-47.8647,30,112.74,-47.8647,0,116.058,-51.1832,30,116.058,-51.1832,0,118.189,-55.3647,30,118.189,-55.3647,0,118.923,-60,30,118.923,-60,0]);
IndexedFaceSet76.coord = Coordinate77;

let Normal78 = browser.currentScene.createNode("Normal");
Normal78.vector = new MFVec3f(new float[1,0,0,1,0,0,0.951062,-0.309,0,0.951062,-0.309,0,0.809038,-0.587756,0,0.809038,-0.587756,0,0.587756,-0.809038,0,0.587756,-0.809038,0,0.309,-0.951062,0,0.309,-0.951062,0,0,-1,0,0,-1,0,-0.309,-0.951062,0,-0.309,-0.951062,0,-0.587756,-0.809038,0,-0.587756,-0.809038,0,-0.809038,-0.587756,0,-0.809038,-0.587756,0,-0.951062,-0.309,0,-0.951062,-0.309,0,-1,0,0,-1,0,0]);
IndexedFaceSet76.normal = Normal78;

Shape73.geometry = IndexedFaceSet76;

CADFace72.shape = Shape73;

CADPart8.children[9] = CADFace72;

let CADFace79 = browser.currentScene.createNode("CADFace");
CADFace79.name = "disc_with_holes_mesh11";
let Shape80 = browser.currentScene.createNode("Shape");
let Appearance81 = browser.currentScene.createNode("Appearance");
let Material82 = browser.currentScene.createNode("Material");
Material82.USE = "_material0";
Appearance81.material = Material82;

Shape80.appearance = Appearance81;

let IndexedFaceSet83 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet83.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet83.solid = False;
let Coordinate84 = browser.currentScene.createNode("Coordinate");
Coordinate84.point = new MFVec3f(new float[56.0424,-112.763,30,56.0424,-112.763,0,55.3083,-117.398,30,55.3083,-117.398,0,53.1777,-121.58,30,53.1777,-121.58,0,49.8592,-124.898,30,49.8592,-124.898,0,45.6777,-127.029,30,45.6777,-127.029,0,41.0424,-127.763,30,41.0424,-127.763,0,36.4072,-127.029,30,36.4072,-127.029,0,32.2256,-124.898,30,32.2256,-124.898,0,28.9072,-121.58,30,28.9072,-121.58,0,26.7766,-117.398,30,26.7766,-117.398,0,26.0424,-112.763,30,26.0424,-112.763,0]);
IndexedFaceSet83.coord = Coordinate84;

let Normal85 = browser.currentScene.createNode("Normal");
Normal85.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-0.951062,0.309,0,-0.951062,0.309,0,-0.809038,0.587756,0,-0.809038,0.587756,0,-0.587756,0.809038,0,-0.587756,0.809038,0,-0.309,0.951062,0,-0.309,0.951062,0,0,1,0,0,1,0,0.309,0.951062,0,0.309,0.951062,0,0.587756,0.809038,0,0.587756,0.809038,0,0.809038,0.587756,0,0.809038,0.587756,0,0.951062,0.309,0,0.951062,0.309,0,1,0,0,1,0,0]);
IndexedFaceSet83.normal = Normal85;

Shape80.geometry = IndexedFaceSet83;

CADFace79.shape = Shape80;

CADPart8.children[10] = CADFace79;

let CADFace86 = browser.currentScene.createNode("CADFace");
CADFace86.name = "disc_with_holes_mesh12";
let Shape87 = browser.currentScene.createNode("Shape");
let Appearance88 = browser.currentScene.createNode("Appearance");
let Material89 = browser.currentScene.createNode("Material");
Material89.USE = "_material0";
Appearance88.material = Material89;

Shape87.appearance = Appearance88;

let IndexedFaceSet90 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet90.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet90.solid = False;
let Coordinate91 = browser.currentScene.createNode("Coordinate");
Coordinate91.point = new MFVec3f(new float[26.0424,-112.763,30,26.0424,-112.763,0,26.7766,-108.128,30,26.7766,-108.128,0,28.9072,-103.946,30,28.9072,-103.946,0,32.2256,-100.628,30,32.2256,-100.628,0,36.4072,-98.4973,30,36.4072,-98.4973,0,41.0424,-97.7631,30,41.0424,-97.7631,0,45.6777,-98.4973,30,45.6777,-98.4973,0,49.8592,-100.628,30,49.8592,-100.628,0,53.1777,-103.946,30,53.1777,-103.946,0,55.3083,-108.128,30,55.3083,-108.128,0,56.0424,-112.763,30,56.0424,-112.763,0]);
IndexedFaceSet90.coord = Coordinate91;

let Normal92 = browser.currentScene.createNode("Normal");
Normal92.vector = new MFVec3f(new float[1,0,0,1,0,0,0.951062,-0.309,0,0.951062,-0.309,0,0.809038,-0.587756,0,0.809038,-0.587756,0,0.587756,-0.809038,0,0.587756,-0.809038,0,0.309,-0.951062,0,0.309,-0.951062,0,0,-1,0,0,-1,0,-0.309,-0.951062,0,-0.309,-0.951062,0,-0.587756,-0.809038,0,-0.587756,-0.809038,0,-0.809038,-0.587756,0,-0.809038,-0.587756,0,-0.951062,-0.309,0,-0.951062,-0.309,0,-1,0,0,-1,0,0]);
IndexedFaceSet90.normal = Normal92;

Shape87.geometry = IndexedFaceSet90;

CADFace86.shape = Shape87;

CADPart8.children[11] = CADFace86;

let CADFace93 = browser.currentScene.createNode("CADFace");
CADFace93.name = "disc_with_holes_mesh13";
let Shape94 = browser.currentScene.createNode("Shape");
let Appearance95 = browser.currentScene.createNode("Appearance");
let Material96 = browser.currentScene.createNode("Material");
Material96.USE = "_material0";
Appearance95.material = Material96;

Shape94.appearance = Appearance95;

let IndexedFaceSet97 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet97.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet97.solid = False;
let Coordinate98 = browser.currentScene.createNode("Coordinate");
Coordinate98.point = new MFVec3f(new float[-26.0424,-112.763,30,-26.0424,-112.763,0,-26.7766,-117.398,30,-26.7766,-117.398,0,-28.9072,-121.58,30,-28.9072,-121.58,0,-32.2256,-124.898,30,-32.2256,-124.898,0,-36.4072,-127.029,30,-36.4072,-127.029,0,-41.0424,-127.763,30,-41.0424,-127.763,0,-45.6777,-127.029,30,-45.6777,-127.029,0,-49.8592,-124.898,30,-49.8592,-124.898,0,-53.1777,-121.58,30,-53.1777,-121.58,0,-55.3083,-117.398,30,-55.3083,-117.398,0,-56.0424,-112.763,30,-56.0424,-112.763,0]);
IndexedFaceSet97.coord = Coordinate98;

let Normal99 = browser.currentScene.createNode("Normal");
Normal99.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-0.951062,0.309,0,-0.951062,0.309,0,-0.809038,0.587756,0,-0.809038,0.587756,0,-0.587756,0.809038,0,-0.587756,0.809038,0,-0.309,0.951062,0,-0.309,0.951062,0,0,1,0,0,1,0,0.309,0.951062,0,0.309,0.951062,0,0.587756,0.809038,0,0.587756,0.809038,0,0.809038,0.587756,0,0.809038,0.587756,0,0.951062,0.309,0,0.951062,0.309,0,1,0,0,1,0,0]);
IndexedFaceSet97.normal = Normal99;

Shape94.geometry = IndexedFaceSet97;

CADFace93.shape = Shape94;

CADPart8.children[12] = CADFace93;

let CADFace100 = browser.currentScene.createNode("CADFace");
CADFace100.name = "disc_with_holes_mesh14";
let Shape101 = browser.currentScene.createNode("Shape");
let Appearance102 = browser.currentScene.createNode("Appearance");
let Material103 = browser.currentScene.createNode("Material");
Material103.USE = "_material0";
Appearance102.material = Material103;

Shape101.appearance = Appearance102;

let IndexedFaceSet104 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet104.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet104.solid = False;
let Coordinate105 = browser.currentScene.createNode("Coordinate");
Coordinate105.point = new MFVec3f(new float[-56.0424,-112.763,30,-56.0424,-112.763,0,-55.3083,-108.128,30,-55.3083,-108.128,0,-53.1777,-103.946,30,-53.1777,-103.946,0,-49.8592,-100.628,30,-49.8592,-100.628,0,-45.6777,-98.4973,30,-45.6777,-98.4973,0,-41.0424,-97.7631,30,-41.0424,-97.7631,0,-36.4072,-98.4973,30,-36.4072,-98.4973,0,-32.2256,-100.628,30,-32.2256,-100.628,0,-28.9072,-103.946,30,-28.9072,-103.946,0,-26.7766,-108.128,30,-26.7766,-108.128,0,-26.0424,-112.763,30,-26.0424,-112.763,0]);
IndexedFaceSet104.coord = Coordinate105;

let Normal106 = browser.currentScene.createNode("Normal");
Normal106.vector = new MFVec3f(new float[1,0,0,1,0,0,0.951062,-0.309,0,0.951062,-0.309,0,0.809038,-0.587756,0,0.809038,-0.587756,0,0.587756,-0.809038,0,0.587756,-0.809038,0,0.309,-0.951062,0,0.309,-0.951062,0,0,-1,0,0,-1,0,-0.309,-0.951062,0,-0.309,-0.951062,0,-0.587756,-0.809038,0,-0.587756,-0.809038,0,-0.809038,-0.587756,0,-0.809038,-0.587756,0,-0.951062,-0.309,0,-0.951062,-0.309,0,-1,0,0,-1,0,0]);
IndexedFaceSet104.normal = Normal106;

Shape101.geometry = IndexedFaceSet104;

CADFace100.shape = Shape101;

CADPart8.children[13] = CADFace100;

let CADFace107 = browser.currentScene.createNode("CADFace");
CADFace107.name = "disc_with_holes_mesh15";
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
Coordinate112.point = new MFVec3f(new float[-88.923,-60,30,-88.923,-60,0,-89.6572,-64.6353,30,-89.6572,-64.6353,0,-91.7878,-68.8168,30,-91.7878,-68.8168,0,-95.1063,-72.1353,30,-95.1063,-72.1353,0,-99.2878,-74.2658,30,-99.2878,-74.2658,0,-103.923,-75,30,-103.923,-75,0,-108.558,-74.2658,30,-108.558,-74.2658,0,-112.74,-72.1353,30,-112.74,-72.1353,0,-116.058,-68.8168,30,-116.058,-68.8168,0,-118.189,-64.6353,30,-118.189,-64.6353,0,-118.923,-60,30,-118.923,-60,0]);
IndexedFaceSet111.coord = Coordinate112;

let Normal113 = browser.currentScene.createNode("Normal");
Normal113.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-0.951062,0.309,0,-0.951062,0.309,0,-0.809038,0.587756,0,-0.809038,0.587756,0,-0.587756,0.809038,0,-0.587756,0.809038,0,-0.309,0.951062,0,-0.309,0.951062,0,0,1,0,0,1,0,0.309,0.951062,0,0.309,0.951062,0,0.587756,0.809038,0,0.587756,0.809038,0,0.809038,0.587756,0,0.809038,0.587756,0,0.951062,0.309,0,0.951062,0.309,0,1,0,0,1,0,0]);
IndexedFaceSet111.normal = Normal113;

Shape108.geometry = IndexedFaceSet111;

CADFace107.shape = Shape108;

CADPart8.children[14] = CADFace107;

let CADFace114 = browser.currentScene.createNode("CADFace");
CADFace114.name = "disc_with_holes_mesh16";
let Shape115 = browser.currentScene.createNode("Shape");
let Appearance116 = browser.currentScene.createNode("Appearance");
let Material117 = browser.currentScene.createNode("Material");
Material117.USE = "_material0";
Appearance116.material = Material117;

Shape115.appearance = Appearance116;

let IndexedFaceSet118 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet118.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet118.solid = False;
let Coordinate119 = browser.currentScene.createNode("Coordinate");
Coordinate119.point = new MFVec3f(new float[-118.923,-60,30,-118.923,-60,0,-118.189,-55.3647,30,-118.189,-55.3647,0,-116.058,-51.1832,30,-116.058,-51.1832,0,-112.74,-47.8647,30,-112.74,-47.8647,0,-108.558,-45.7342,30,-108.558,-45.7342,0,-103.923,-45,30,-103.923,-45,0,-99.2878,-45.7342,30,-99.2878,-45.7342,0,-95.1063,-47.8647,30,-95.1063,-47.8647,0,-91.7878,-51.1832,30,-91.7878,-51.1832,0,-89.6572,-55.3647,30,-89.6572,-55.3647,0,-88.923,-60,30,-88.923,-60,0]);
IndexedFaceSet118.coord = Coordinate119;

let Normal120 = browser.currentScene.createNode("Normal");
Normal120.vector = new MFVec3f(new float[1,0,0,1,0,0,0.951062,-0.309,0,0.951062,-0.309,0,0.809038,-0.587756,0,0.809038,-0.587756,0,0.587756,-0.809038,0,0.587756,-0.809038,0,0.309,-0.951062,0,0.309,-0.951062,0,0,-1,0,0,-1,0,-0.309,-0.951062,0,-0.309,-0.951062,0,-0.587756,-0.809038,0,-0.587756,-0.809038,0,-0.809038,-0.587756,0,-0.809038,-0.587756,0,-0.951062,-0.309,0,-0.951062,-0.309,0,-1,0,0,-1,0,0]);
IndexedFaceSet118.normal = Normal120;

Shape115.geometry = IndexedFaceSet118;

CADFace114.shape = Shape115;

CADPart8.children[15] = CADFace114;

let CADFace121 = browser.currentScene.createNode("CADFace");
CADFace121.name = "disc_with_holes_mesh17";
let Shape122 = browser.currentScene.createNode("Shape");
let Appearance123 = browser.currentScene.createNode("Appearance");
let Material124 = browser.currentScene.createNode("Material");
Material124.USE = "_material0";
Appearance123.material = Material124;

Shape122.appearance = Appearance123;

let IndexedFaceSet125 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet125.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet125.solid = False;
let Coordinate126 = browser.currentScene.createNode("Coordinate");
Coordinate126.point = new MFVec3f(new float[-103.177,20.8378,30,-103.177,20.8378,0,-103.911,16.2025,30,-103.911,16.2025,0,-106.042,12.021,30,-106.042,12.021,0,-109.36,8.70253,30,-109.36,8.70253,0,-113.542,6.57193,30,-113.542,6.57193,0,-118.177,5.83778,30,-118.177,5.83778,0,-122.812,6.57193,30,-122.812,6.57193,0,-126.994,8.70253,30,-126.994,8.70253,0,-130.312,12.021,30,-130.312,12.021,0,-132.443,16.2025,30,-132.443,16.2025,0,-133.177,20.8378,30,-133.177,20.8378,0]);
IndexedFaceSet125.coord = Coordinate126;

let Normal127 = browser.currentScene.createNode("Normal");
Normal127.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-0.951062,0.309,0,-0.951062,0.309,0,-0.809038,0.587756,0,-0.809038,0.587756,0,-0.587756,0.809038,0,-0.587756,0.809038,0,-0.309,0.951062,0,-0.309,0.951062,0,0,1,0,0,1,0,0.309,0.951062,0,0.309,0.951062,0,0.587756,0.809038,0,0.587756,0.809038,0,0.809038,0.587756,0,0.809038,0.587756,0,0.951062,0.309,0,0.951062,0.309,0,1,0,0,1,0,0]);
IndexedFaceSet125.normal = Normal127;

Shape122.geometry = IndexedFaceSet125;

CADFace121.shape = Shape122;

CADPart8.children[16] = CADFace121;

let CADFace128 = browser.currentScene.createNode("CADFace");
CADFace128.name = "disc_with_holes_mesh18";
let Shape129 = browser.currentScene.createNode("Shape");
let Appearance130 = browser.currentScene.createNode("Appearance");
let Material131 = browser.currentScene.createNode("Material");
Material131.USE = "_material0";
Appearance130.material = Material131;

Shape129.appearance = Appearance130;

let IndexedFaceSet132 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet132.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet132.solid = False;
let Coordinate133 = browser.currentScene.createNode("Coordinate");
Coordinate133.point = new MFVec3f(new float[-133.177,20.8378,30,-133.177,20.8378,0,-132.443,25.473,30,-132.443,25.473,0,-130.312,29.6546,30,-130.312,29.6546,0,-126.994,32.973,30,-126.994,32.973,0,-122.812,35.1036,30,-122.812,35.1036,0,-118.177,35.8378,30,-118.177,35.8378,0,-113.542,35.1036,30,-113.542,35.1036,0,-109.36,32.973,30,-109.36,32.973,0,-106.042,29.6546,30,-106.042,29.6546,0,-103.911,25.473,30,-103.911,25.473,0,-103.177,20.8378,30,-103.177,20.8378,0]);
IndexedFaceSet132.coord = Coordinate133;

let Normal134 = browser.currentScene.createNode("Normal");
Normal134.vector = new MFVec3f(new float[1,0,0,1,0,0,0.951062,-0.309,0,0.951062,-0.309,0,0.809038,-0.587756,0,0.809038,-0.587756,0,0.587756,-0.809038,0,0.587756,-0.809038,0,0.309,-0.951062,0,0.309,-0.951062,0,0,-1,0,0,-1,0,-0.309,-0.951062,0,-0.309,-0.951062,0,-0.587756,-0.809038,0,-0.587756,-0.809038,0,-0.809038,-0.587756,0,-0.809038,-0.587756,0,-0.951062,-0.309,0,-0.951062,-0.309,0,-1,0,0,-1,0,0]);
IndexedFaceSet132.normal = Normal134;

Shape129.geometry = IndexedFaceSet132;

CADFace128.shape = Shape129;

CADPart8.children[17] = CADFace128;

let CADFace135 = browser.currentScene.createNode("CADFace");
CADFace135.name = "disc_with_holes_mesh19";
let Shape136 = browser.currentScene.createNode("Shape");
let Appearance137 = browser.currentScene.createNode("Appearance");
let Material138 = browser.currentScene.createNode("Material");
Material138.USE = "_material0";
Appearance137.material = Material138;

Shape136.appearance = Appearance137;

let IndexedFaceSet139 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet139.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet139.solid = False;
let Coordinate140 = browser.currentScene.createNode("Coordinate");
Coordinate140.point = new MFVec3f(new float[-62.1345,91.9253,30,-62.1345,91.9253,0,-62.8687,87.2901,30,-62.8687,87.2901,0,-64.9993,83.1086,30,-64.9993,83.1086,0,-68.3177,79.7901,30,-68.3177,79.7901,0,-72.4993,77.6595,30,-72.4993,77.6595,0,-77.1345,76.9253,30,-77.1345,76.9253,0,-81.7698,77.6595,30,-81.7698,77.6595,0,-85.9513,79.7901,30,-85.9513,79.7901,0,-89.2698,83.1086,30,-89.2698,83.1086,0,-91.4004,87.2901,30,-91.4004,87.2901,0,-92.1345,91.9253,30,-92.1345,91.9253,0]);
IndexedFaceSet139.coord = Coordinate140;

let Normal141 = browser.currentScene.createNode("Normal");
Normal141.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-0.951062,0.309,0,-0.951062,0.309,0,-0.809038,0.587756,0,-0.809038,0.587756,0,-0.587756,0.809038,0,-0.587756,0.809038,0,-0.309,0.951062,0,-0.309,0.951062,0,0,1,0,0,1,0,0.309,0.951062,0,0.309,0.951062,0,0.587756,0.809038,0,0.587756,0.809038,0,0.809038,0.587756,0,0.809038,0.587756,0,0.951062,0.309,0,0.951062,0.309,0,1,0,0,1,0,0]);
IndexedFaceSet139.normal = Normal141;

Shape136.geometry = IndexedFaceSet139;

CADFace135.shape = Shape136;

CADPart8.children[18] = CADFace135;

let CADFace142 = browser.currentScene.createNode("CADFace");
CADFace142.name = "disc_with_holes_mesh20";
let Shape143 = browser.currentScene.createNode("Shape");
let Appearance144 = browser.currentScene.createNode("Appearance");
let Material145 = browser.currentScene.createNode("Material");
Material145.USE = "_material0";
Appearance144.material = Material145;

Shape143.appearance = Appearance144;

let IndexedFaceSet146 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet146.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1]);
IndexedFaceSet146.solid = False;
let Coordinate147 = browser.currentScene.createNode("Coordinate");
Coordinate147.point = new MFVec3f(new float[-92.1345,91.9253,30,-92.1345,91.9253,0,-91.4004,96.5606,30,-91.4004,96.5606,0,-89.2698,100.742,30,-89.2698,100.742,0,-85.9513,104.061,30,-85.9513,104.061,0,-81.7698,106.191,30,-81.7698,106.191,0,-77.1345,106.925,30,-77.1345,106.925,0,-72.4993,106.191,30,-72.4993,106.191,0,-68.3177,104.061,30,-68.3177,104.061,0,-64.9993,100.742,30,-64.9993,100.742,0,-62.8687,96.5606,30,-62.8687,96.5606,0,-62.1345,91.9253,30,-62.1345,91.9253,0]);
IndexedFaceSet146.coord = Coordinate147;

let Normal148 = browser.currentScene.createNode("Normal");
Normal148.vector = new MFVec3f(new float[1,0,0,1,0,0,0.951062,-0.309,0,0.951062,-0.309,0,0.809038,-0.587756,0,0.809038,-0.587756,0,0.587756,-0.809038,0,0.587756,-0.809038,0,0.309,-0.951062,0,0.309,-0.951062,0,0,-1,0,0,-1,0,-0.309,-0.951062,0,-0.309,-0.951062,0,-0.587756,-0.809038,0,-0.587756,-0.809038,0,-0.809038,-0.587756,0,-0.809038,-0.587756,0,-0.951062,-0.309,0,-0.951062,-0.309,0,-1,0,0,-1,0,0]);
IndexedFaceSet146.normal = Normal148;

Shape143.geometry = IndexedFaceSet146;

CADFace142.shape = Shape143;

CADPart8.children[19] = CADFace142;

let CADFace149 = browser.currentScene.createNode("CADFace");
CADFace149.name = "disc_with_holes_mesh21";
let Shape150 = browser.currentScene.createNode("Shape");
let Appearance151 = browser.currentScene.createNode("Appearance");
let Material152 = browser.currentScene.createNode("Material");
Material152.USE = "_material0";
Appearance151.material = Material152;

Shape150.appearance = Appearance151;

let IndexedFaceSet153 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet153.coordIndex = new MFInt32(new int[40,41,42,-1,41,43,42,-1,44,45,46,-1,45,47,46,-1,15,14,12,-1,14,48,12,-1,12,48,10,-1,19,18,49,-1,18,50,49,-1,49,50,51,-1,51,52,49,-1,52,53,49,-1,23,22,54,-1,22,38,54,-1,54,38,37,-1,33,3,55,-1,3,56,55,-1,55,56,57,-1,56,24,57,-1,57,24,26,-1,58,27,59,-1,27,29,59,-1,59,29,60,-1,43,61,62,-1,61,63,62,-1,62,63,64,-1,63,65,64,-1,64,65,66,-1,65,67,66,-1,66,67,68,-1,67,69,68,-1,68,69,70,-1,28,27,71,-1,27,72,71,-1,71,72,73,-1,72,31,73,-1,73,31,30,-1,19,74,20,-1,74,75,20,-1,20,75,76,-1,36,35,77,-1,35,78,77,-1,77,78,79,-1,79,78,80,-1,78,81,80,-1,80,81,82,-1,81,83,82,-1,82,83,84,-1,83,85,84,-1,84,85,86,-1,70,69,87,-1,69,88,87,-1,87,88,89,-1,90,91,92,-1,90,92,93,-1,90,93,94,-1,95,96,97,-1,95,97,98,-1,95,98,99,-1,95,99,100,-1,95,100,16,-1,95,16,15,-1,95,15,53,-1,95,53,52,-1,95,52,8,-1,95,8,7,-1,95,7,101,-1,102,103,44,-1,102,44,46,-1,102,46,104,-1,102,104,105,-1,102,105,106,-1,102,106,107,-1,102,107,108,-1,102,108,96,-1,102,96,109,-1,47,110,111,-1,47,111,112,-1,47,112,113,-1,47,113,114,-1,47,114,115,-1,47,115,116,-1,47,116,46,-1,117,118,119,-1,117,119,120,-1,117,120,121,-1,117,121,122,-1,117,122,0,-1,117,0,2,-1,1,123,124,-1,1,124,125,-1,1,125,126,-1,1,126,43,-1,1,43,62,-1,43,126,127,-1,43,127,128,-1,43,128,129,-1,43,129,130,-1,43,130,131,-1,43,131,132,-1,43,132,42,-1,133,40,42,-1,133,42,134,-1,133,134,135,-1,133,135,136,-1,133,136,137,-1,133,137,138,-1,133,138,111,-1,133,111,110,-1,139,140,141,-1,139,141,142,-1,139,142,143,-1,139,143,25,-1,139,25,24,-1,144,111,145,-1,144,145,146,-1,144,146,147,-1,144,147,148,-1,144,148,140,-1,144,140,139,-1,144,139,149,-1,144,149,92,-1,144,92,91,-1,144,91,150,-1,144,150,151,-1,144,151,152,-1,144,152,96,-1,153,12,11,-1,153,11,154,-1,153,154,155,-1,153,155,156,-1,153,156,94,-1,153,94,93,-1,157,9,8,-1,157,8,158,-1,157,158,159,-1,157,159,160,-1,157,160,161,-1,157,161,162,-1,7,84,86,-1,7,86,163,-1,7,163,164,-1,7,164,165,-1,7,165,166,-1,7,166,167,-1,7,167,101,-1,163,168,169,-1,163,169,170,-1,163,170,171,-1,163,171,172,-1,163,172,164,-1,161,173,174,-1,161,174,175,-1,161,175,176,-1,161,176,177,-1,161,177,178,-1,161,178,179,-1,161,179,180,-1,161,180,162,-1,181,174,173,-1,181,173,182,-1,181,182,183,-1,181,183,184,-1,181,184,185,-1,186,181,185,-1,186,185,187,-1,186,187,188,-1,186,188,189,-1,186,189,76,-1,186,76,75,-1,190,35,34,-1,190,34,191,-1,190,191,192,-1,190,192,193,-1,190,193,194,-1,190,194,177,-1,177,194,195,-1,177,195,196,-1,177,196,178,-1,168,163,197,-1,168,197,22,-1,168,22,21,-1,96,95,198,-1,96,198,199,-1,96,199,200,-1,96,200,201,-1,96,201,39,-1,96,39,38,-1,96,38,202,-1,96,202,109,-1,96,108,203,-1,96,203,204,-1,96,204,205,-1,96,205,206,-1,96,206,144,-1,111,144,207,-1,111,207,208,-1,111,208,209,-1,111,209,210,-1,111,210,112,-1,123,1,0,-1,123,0,32,-1,123,32,31,-1,123,31,3,-1,123,3,6,-1,123,6,211,-1,123,211,212,-1,123,212,213,-1,123,213,111,-1,111,138,214,-1,111,214,215,-1,111,215,216,-1,111,216,217,-1,111,217,123,-1,218,219,220,-1,218,220,221,-1,218,221,222,-1,218,222,223,-1,218,223,89,-1,218,89,88,-1,219,224,225,-1,219,225,226,-1,219,226,220,-1,119,118,227,-1,119,227,228,-1,119,228,224,-1,119,224,219,-1,119,219,229,-1,119,229,230,-1,119,230,231,-1,119,231,232,-1,233,234,235,-1,233,235,236,-1,233,236,237,-1,233,237,238,-1,233,238,232,-1,233,232,231,-1,234,59,60,-1,234,60,239,-1,234,239,240,-1,234,240,241,-1,234,241,235,-1,0,1,2,-1,3,4,5,-1,6,3,5,-1,7,8,9,-1,10,11,12,-1,13,14,15,-1,13,15,16,-1,17,18,19,-1,19,20,17,-1,21,22,23,-1,24,25,26,-1,27,28,29,-1,30,31,32,-1,33,4,3,-1,34,35,36,-1,37,38,39,-1]);
IndexedFaceSet153.solid = False;
let Coordinate154 = browser.currentScene.createNode("Coordinate");
Coordinate154.point = new MFVec3f(new float[89.6572,-55.3647,0,103.911,25.473,0,103.177,20.8378,0,66.0591,-134.671,0,55.3083,-117.398,0,56.0424,-112.763,0,55.3083,-108.128,0,-103.911,25.473,0,-89.6572,-55.3647,0,-103.177,20.8378,0,-45.6777,-127.029,0,-41.0424,-127.763,0,-52.0958,-140.663,0,-55.3083,-117.398,0,-53.1777,-121.58,0,-66.0591,-134.671,0,-56.0424,-112.763,0,-99.2878,-74.2658,0,-95.1063,-72.1353,0,-103.345,-108.719,0,-103.923,-75,0,-72.4993,106.191,0,-79.3446,127.297,0,-68.3177,104.061,0,37.5979,-145.212,0,36.4072,-127.029,0,41.0424,-127.763,0,103.345,-108.719,0,99.2878,-74.2658,0,103.923,-75,0,89.6572,-64.6353,0,79.3446,-127.297,0,88.923,-60,0,53.1777,-121.58,0,-130.312,29.6546,0,-146.929,30.1948,0,-126.994,32.973,0,-62.8687,96.5606,0,-66.0591,134.671,0,-62.1345,91.9253,0,79.3446,127.297,0,91.8159,118.616,0,77.1345,106.925,0,103.345,108.719,0,7.59738,149.807,0,22.7142,148.27,0,0,135,0,37.5979,145.212,0,-49.8592,-124.898,0,-91.8159,-118.616,0,-91.7878,-68.8168,0,-89.6572,-64.6353,0,-88.923,-60,0,-79.3446,-127.297,0,-64.9993,100.742,0,49.8592,-124.898,0,52.0958,-140.663,0,45.6777,-127.029,0,113.814,-97.7059,0,123.115,-85.6902,0,108.558,-74.2658,0,113.814,97.7059,0,106.042,29.6546,0,123.115,85.6902,0,109.36,32.973,0,131.152,72.7953,0,113.542,35.1036,0,137.844,59.1534,0,118.177,35.8378,0,143.121,44.9045,0,122.812,35.1036,0,95.1063,-72.1353,0,91.8159,-118.616,0,91.7878,-68.8168,0,-113.814,-97.7059,0,-123.115,-85.6902,0,-108.558,-74.2658,0,-122.812,35.1036,0,-143.121,44.9045,0,-118.177,35.8378,0,-113.542,35.1036,0,-137.844,59.1534,0,-109.36,32.973,0,-131.152,72.7953,0,-106.042,29.6546,0,-123.115,85.6902,0,-113.814,97.7059,0,126.994,32.973,0,146.929,30.1948,0,130.312,29.6546,0,-26.0424,-112.763,0,-26.7766,-108.128,0,-7.59738,-149.807,0,-22.7142,-148.27,0,-26.7766,-117.398,0,-77.1345,76.9253,0,-41.0424,-97.7631,0,-45.6777,-98.4973,0,-49.8592,-100.628,0,-53.1777,-103.946,0,-55.3083,-108.128,0,-81.7698,77.6595,0,-22.7142,148.27,0,-7.59738,149.807,0,-4.63525,134.266,0,-8.81678,132.135,0,-12.1353,128.817,0,-14.2658,124.635,0,-15,120,0,-37.5979,145.212,0,52.0958,140.663,0,41.0424,-97.7631,0,15,120,0,14.2658,124.635,0,12.1353,128.817,0,8.81678,132.135,0,4.63525,134.266,0,103.911,16.2025,0,106.042,12.021,0,103.923,-45,0,99.2878,-45.7342,0,95.1063,-47.8647,0,91.7878,-51.1832,0,77.1345,76.9253,0,81.7698,77.6595,0,85.9513,79.7901,0,89.2698,83.1086,0,91.4004,87.2901,0,92.1345,91.9253,0,91.4004,96.5606,0,89.2698,100.742,0,85.9513,104.061,0,81.7698,106.191,0,66.0591,134.671,0,72.4993,106.191,0,68.3177,104.061,0,64.9993,100.742,0,62.8687,96.5606,0,62.1345,91.9253,0,22.7142,-148.27,0,26.0424,-112.763,0,26.7766,-117.398,0,28.9072,-121.58,0,32.2256,-124.898,0,0,105,0,36.4072,-98.4973,0,32.2256,-100.628,0,28.9072,-103.946,0,26.7766,-108.128,0,7.59738,-149.807,0,-28.9072,-103.946,0,-32.2256,-100.628,0,-36.4072,-98.4973,0,-37.5979,-145.212,0,-36.4072,-127.029,0,-32.2256,-124.898,0,-28.9072,-121.58,0,-103.911,16.2025,0,-91.7878,-51.1832,0,-95.1063,-47.8647,0,-99.2878,-45.7342,0,-103.923,-45,0,-106.042,12.021,0,-103.345,108.719,0,-92.1345,91.9253,0,-91.4004,87.2901,0,-89.2698,83.1086,0,-85.9513,79.7901,0,-77.1345,106.925,0,-81.7698,106.191,0,-85.9513,104.061,0,-89.2698,100.742,0,-91.4004,96.5606,0,-108.558,-45.7342,0,-143.121,-44.9045,0,-146.929,-30.1948,0,-149.23,-15.1752,0,-150,0,0,-118.177,5.83778,0,-113.542,6.57193,0,-109.36,8.70253,0,-137.844,-59.1534,0,-112.74,-47.8647,0,-116.058,-51.1832,0,-118.189,-55.3647,0,-118.923,-60,0,-131.152,-72.7953,0,-118.189,-64.6353,0,-116.058,-68.8168,0,-112.74,-72.1353,0,-149.23,15.1752,0,-132.443,25.473,0,-133.177,20.8378,0,-132.443,16.2025,0,-130.312,12.021,0,-126.994,8.70253,0,-122.812,6.57193,0,-91.8159,118.616,0,-72.4993,77.6595,0,-68.3177,79.7901,0,-64.9993,83.1086,0,-62.8687,87.2901,0,-52.0958,140.663,0,-14.2658,115.365,0,-12.1353,111.183,0,-8.81678,107.865,0,-4.63525,105.734,0,4.63525,105.734,0,8.81678,107.865,0,12.1353,111.183,0,14.2658,115.365,0,53.1777,-103.946,0,49.8592,-100.628,0,45.6777,-98.4973,0,62.8687,87.2901,0,64.9993,83.1086,0,68.3177,79.7901,0,72.4993,77.6595,0,149.23,15.1752,0,150,0,0,130.312,12.021,0,132.443,16.2025,0,133.177,20.8378,0,132.443,25.473,0,118.177,5.83778,0,122.812,6.57193,0,126.994,8.70253,0,109.36,8.70253,0,113.542,6.57193,0,149.23,-15.1752,0,146.929,-30.1948,0,143.121,-44.9045,0,108.558,-45.7342,0,137.844,-59.1534,0,131.152,-72.7953,0,118.923,-60,0,118.189,-55.3647,0,116.058,-51.1832,0,112.74,-47.8647,0,112.74,-72.1353,0,116.058,-68.8168,0,118.189,-64.6353,0]);
IndexedFaceSet153.coord = Coordinate154;

Shape150.geometry = IndexedFaceSet153;

CADFace149.shape = Shape150;

CADPart8.children[20] = CADFace149;

let CADFace155 = browser.currentScene.createNode("CADFace");
CADFace155.name = "disc_with_holes_mesh22";
let Shape156 = browser.currentScene.createNode("Shape");
let Appearance157 = browser.currentScene.createNode("Appearance");
let Material158 = browser.currentScene.createNode("Material");
Material158.USE = "_material0";
Appearance157.material = Material158;

Shape156.appearance = Appearance157;

let IndexedFaceSet159 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet159.coordIndex = new MFInt32(new int[40,41,42,-1,41,43,42,-1,44,45,46,-1,45,47,46,-1,14,13,48,-1,13,10,48,-1,48,10,12,-1,18,17,49,-1,17,50,49,-1,49,50,51,-1,52,51,53,-1,51,50,53,-1,22,21,38,-1,21,54,38,-1,38,54,39,-1,5,33,55,-1,33,56,55,-1,55,56,26,-1,56,57,26,-1,26,57,24,-1,29,58,27,-1,58,59,27,-1,27,59,60,-1,61,42,62,-1,42,63,62,-1,62,63,64,-1,63,65,64,-1,64,65,66,-1,65,67,66,-1,66,67,68,-1,67,69,68,-1,68,69,70,-1,29,28,71,-1,28,72,71,-1,71,72,31,-1,72,73,31,-1,31,73,32,-1,74,17,75,-1,17,20,75,-1,75,20,76,-1,35,34,77,-1,34,78,77,-1,77,78,79,-1,77,79,80,-1,79,81,80,-1,80,81,82,-1,81,83,82,-1,82,83,84,-1,83,85,84,-1,84,85,86,-1,68,70,87,-1,70,88,87,-1,87,88,89,-1,90,91,92,-1,90,92,93,-1,90,93,94,-1,95,96,9,-1,95,9,8,-1,95,8,52,-1,95,52,53,-1,95,53,13,-1,95,13,16,-1,95,16,97,-1,95,97,98,-1,95,98,99,-1,95,99,100,-1,95,100,101,-1,102,103,101,-1,102,101,104,-1,102,104,105,-1,102,105,106,-1,102,106,107,-1,102,107,108,-1,102,108,47,-1,102,47,45,-1,102,45,109,-1,46,47,110,-1,46,110,111,-1,46,111,112,-1,46,112,113,-1,46,113,114,-1,46,114,115,-1,46,115,116,-1,117,0,2,-1,117,2,118,-1,117,118,119,-1,117,119,120,-1,117,120,121,-1,117,121,122,-1,1,63,42,-1,1,42,123,-1,1,123,124,-1,1,124,125,-1,1,125,126,-1,42,43,127,-1,42,127,128,-1,42,128,129,-1,42,129,130,-1,42,130,131,-1,42,131,132,-1,42,132,123,-1,133,116,115,-1,133,115,134,-1,133,134,135,-1,133,135,136,-1,133,136,137,-1,133,137,138,-1,133,138,43,-1,133,43,41,-1,139,26,25,-1,139,25,140,-1,139,140,141,-1,139,141,142,-1,139,142,143,-1,144,101,145,-1,144,145,146,-1,144,146,147,-1,144,147,94,-1,144,94,93,-1,144,93,148,-1,144,148,139,-1,144,139,143,-1,144,143,149,-1,144,149,150,-1,144,150,151,-1,144,151,152,-1,144,152,115,-1,153,92,91,-1,153,91,154,-1,153,154,155,-1,153,155,156,-1,153,156,11,-1,153,11,10,-1,157,158,159,-1,157,159,160,-1,157,160,161,-1,157,161,162,-1,157,162,8,-1,157,8,7,-1,9,96,163,-1,9,163,164,-1,9,164,165,-1,9,165,166,-1,9,166,167,-1,9,167,86,-1,9,86,85,-1,167,166,168,-1,167,168,169,-1,167,169,170,-1,167,170,171,-1,167,171,172,-1,159,158,173,-1,159,173,174,-1,159,174,175,-1,159,175,176,-1,159,176,177,-1,159,177,178,-1,159,178,179,-1,159,179,180,-1,181,182,183,-1,181,183,184,-1,181,184,185,-1,181,185,180,-1,181,180,179,-1,186,75,76,-1,186,76,187,-1,186,187,188,-1,186,188,189,-1,186,189,182,-1,186,182,181,-1,190,176,191,-1,190,191,192,-1,190,192,193,-1,190,193,194,-1,190,194,36,-1,190,36,35,-1,176,175,195,-1,176,195,196,-1,176,196,191,-1,172,23,22,-1,172,22,197,-1,172,197,167,-1,101,103,198,-1,101,198,38,-1,101,38,37,-1,101,37,199,-1,101,199,200,-1,101,200,201,-1,101,201,202,-1,101,202,95,-1,101,144,203,-1,101,203,204,-1,101,204,205,-1,101,205,206,-1,101,206,104,-1,115,114,207,-1,115,207,208,-1,115,208,209,-1,115,209,210,-1,115,210,144,-1,126,115,211,-1,126,211,212,-1,126,212,213,-1,126,213,6,-1,126,6,5,-1,126,5,31,-1,126,31,30,-1,126,30,2,-1,126,2,1,-1,115,126,214,-1,115,214,215,-1,115,215,216,-1,115,216,217,-1,115,217,134,-1,218,87,89,-1,218,89,219,-1,218,219,220,-1,218,220,221,-1,218,221,222,-1,218,222,223,-1,223,222,224,-1,223,224,225,-1,223,225,226,-1,121,227,228,-1,121,228,229,-1,121,229,230,-1,121,230,223,-1,121,223,226,-1,121,226,231,-1,121,231,232,-1,121,232,122,-1,233,228,227,-1,233,227,234,-1,233,234,235,-1,233,235,236,-1,233,236,237,-1,233,237,238,-1,238,237,239,-1,238,239,240,-1,238,240,241,-1,238,241,60,-1,238,60,59,-1,0,1,2,-1,3,4,5,-1,3,5,6,-1,7,8,9,-1,10,11,12,-1,13,14,15,-1,16,13,15,-1,17,18,19,-1,19,20,17,-1,21,22,23,-1,24,25,26,-1,27,28,29,-1,30,31,32,-1,5,4,33,-1,34,35,36,-1,37,38,39,-1]);
IndexedFaceSet159.solid = False;
let Coordinate160 = browser.currentScene.createNode("Coordinate");
Coordinate160.point = new MFVec3f(new float[103.177,20.8378,30,103.911,25.473,30,89.6572,-55.3647,30,56.0424,-112.763,30,55.3083,-117.398,30,66.0591,-134.671,30,55.3083,-108.128,30,-103.177,20.8378,30,-89.6572,-55.3647,30,-103.911,25.473,30,-52.0958,-140.663,30,-41.0424,-127.763,30,-45.6777,-127.029,30,-66.0591,-134.671,30,-53.1777,-121.58,30,-55.3083,-117.398,30,-56.0424,-112.763,30,-103.345,-108.719,30,-95.1063,-72.1353,30,-99.2878,-74.2658,30,-103.923,-75,30,-68.3177,104.061,30,-79.3446,127.297,30,-72.4993,106.191,30,41.0424,-127.763,30,36.4072,-127.029,30,37.5979,-145.212,30,103.923,-75,30,99.2878,-74.2658,30,103.345,-108.719,30,88.923,-60,30,79.3446,-127.297,30,89.6572,-64.6353,30,53.1777,-121.58,30,-126.994,32.973,30,-146.929,30.1948,30,-130.312,29.6546,30,-62.1345,91.9253,30,-66.0591,134.671,30,-62.8687,96.5606,30,91.8159,118.616,30,79.3446,127.297,30,103.345,108.719,30,77.1345,106.925,30,22.7142,148.27,30,7.59738,149.807,30,37.5979,145.212,30,0,135,30,-49.8592,-124.898,30,-91.7878,-68.8168,30,-91.8159,-118.616,30,-89.6572,-64.6353,30,-88.923,-60,30,-79.3446,-127.297,30,-64.9993,100.742,30,52.0958,-140.663,30,49.8592,-124.898,30,45.6777,-127.029,30,113.814,-97.7059,30,123.115,-85.6902,30,108.558,-74.2658,30,113.814,97.7059,30,123.115,85.6902,30,106.042,29.6546,30,131.152,72.7953,30,109.36,32.973,30,137.844,59.1534,30,113.542,35.1036,30,143.121,44.9045,30,118.177,35.8378,30,122.812,35.1036,30,91.8159,-118.616,30,95.1063,-72.1353,30,91.7878,-68.8168,30,-113.814,-97.7059,30,-123.115,-85.6902,30,-108.558,-74.2658,30,-143.121,44.9045,30,-122.812,35.1036,30,-118.177,35.8378,30,-137.844,59.1534,30,-113.542,35.1036,30,-131.152,72.7953,30,-109.36,32.973,30,-123.115,85.6902,30,-106.042,29.6546,30,-113.814,97.7059,30,146.929,30.1948,30,126.994,32.973,30,130.312,29.6546,30,-26.0424,-112.763,30,-26.7766,-117.398,30,-22.7142,-148.27,30,-7.59738,-149.807,30,-26.7766,-108.128,30,-77.1345,76.9253,30,-81.7698,77.6595,30,-55.3083,-108.128,30,-53.1777,-103.946,30,-49.8592,-100.628,30,-45.6777,-98.4973,30,-41.0424,-97.7631,30,-22.7142,148.27,30,-37.5979,145.212,30,-15,120,30,-14.2658,124.635,30,-12.1353,128.817,30,-8.81678,132.135,30,-4.63525,134.266,30,-7.59738,149.807,30,4.63525,134.266,30,8.81678,132.135,30,12.1353,128.817,30,14.2658,124.635,30,15,120,30,41.0424,-97.7631,30,52.0958,140.663,30,103.911,16.2025,30,91.7878,-51.1832,30,95.1063,-47.8647,30,99.2878,-45.7342,30,103.923,-45,30,106.042,12.021,30,89.2698,83.1086,30,85.9513,79.7901,30,81.7698,77.6595,30,77.1345,76.9253,30,81.7698,106.191,30,85.9513,104.061,30,89.2698,100.742,30,91.4004,96.5606,30,92.1345,91.9253,30,91.4004,87.2901,30,66.0591,134.671,30,62.1345,91.9253,30,62.8687,96.5606,30,64.9993,100.742,30,68.3177,104.061,30,72.4993,106.191,30,22.7142,-148.27,30,32.2256,-124.898,30,28.9072,-121.58,30,26.7766,-117.398,30,26.0424,-112.763,30,0,105,30,-36.4072,-98.4973,30,-32.2256,-100.628,30,-28.9072,-103.946,30,7.59738,-149.807,30,26.7766,-108.128,30,28.9072,-103.946,30,32.2256,-100.628,30,36.4072,-98.4973,30,-37.5979,-145.212,30,-28.9072,-121.58,30,-32.2256,-124.898,30,-36.4072,-127.029,30,-103.911,16.2025,30,-106.042,12.021,30,-103.923,-45,30,-99.2878,-45.7342,30,-95.1063,-47.8647,30,-91.7878,-51.1832,30,-85.9513,79.7901,30,-89.2698,83.1086,30,-91.4004,87.2901,30,-92.1345,91.9253,30,-103.345,108.719,30,-91.4004,96.5606,30,-89.2698,100.742,30,-85.9513,104.061,30,-81.7698,106.191,30,-77.1345,106.925,30,-109.36,8.70253,30,-113.542,6.57193,30,-118.177,5.83778,30,-150,0,30,-149.23,-15.1752,30,-146.929,-30.1948,30,-143.121,-44.9045,30,-108.558,-45.7342,30,-137.844,-59.1534,30,-118.923,-60,30,-118.189,-55.3647,30,-116.058,-51.1832,30,-112.74,-47.8647,30,-131.152,-72.7953,30,-112.74,-72.1353,30,-116.058,-68.8168,30,-118.189,-64.6353,30,-149.23,15.1752,30,-130.312,12.021,30,-132.443,16.2025,30,-133.177,20.8378,30,-132.443,25.473,30,-122.812,6.57193,30,-126.994,8.70253,30,-91.8159,118.616,30,-52.0958,140.663,30,-62.8687,87.2901,30,-64.9993,83.1086,30,-68.3177,79.7901,30,-72.4993,77.6595,30,-4.63525,105.734,30,-8.81678,107.865,30,-12.1353,111.183,30,-14.2658,115.365,30,14.2658,115.365,30,12.1353,111.183,30,8.81678,107.865,30,4.63525,105.734,30,45.6777,-98.4973,30,49.8592,-100.628,30,53.1777,-103.946,30,72.4993,77.6595,30,68.3177,79.7901,30,64.9993,83.1086,30,62.8687,87.2901,30,149.23,15.1752,30,132.443,25.473,30,133.177,20.8378,30,132.443,16.2025,30,130.312,12.021,30,150,0,30,126.994,8.70253,30,122.812,6.57193,30,118.177,5.83778,30,108.558,-45.7342,30,143.121,-44.9045,30,146.929,-30.1948,30,149.23,-15.1752,30,113.542,6.57193,30,109.36,8.70253,30,137.844,-59.1534,30,112.74,-47.8647,30,116.058,-51.1832,30,118.189,-55.3647,30,118.923,-60,30,131.152,-72.7953,30,118.189,-64.6353,30,116.058,-68.8168,30,112.74,-72.1353,30]);
IndexedFaceSet159.coord = Coordinate160;

Shape156.geometry = IndexedFaceSet159;

CADFace155.shape = Shape156;

CADPart8.children[21] = CADFace155;

CADAssembly7.children = new MFNode();

CADAssembly7.children[0] = CADPart8;

Transform6.children = new MFNode();

Transform6.children[0] = CADAssembly7;

CADAssembly5.children = new MFNode();

CADAssembly5.children[0] = Transform6;

let Transform161 = browser.currentScene.createNode("Transform");
Transform161.DEF = "TransformCatiaHubCap";
Transform161.translation = new SFVec3f(new float[0,0,30]);
let CADAssembly162 = browser.currentScene.createNode("CADAssembly");
CADAssembly162.name = "cap";
let CADPart163 = browser.currentScene.createNode("CADPart");
CADPart163.name = "cap";
let CADFace164 = browser.currentScene.createNode("CADFace");
CADFace164.name = "cap_mesh01";
let Shape165 = browser.currentScene.createNode("Shape");
let Appearance166 = browser.currentScene.createNode("Appearance");
let Material167 = browser.currentScene.createNode("Material");
Material167.DEF = "_material1";
Material167.diffuseColor = new SFColor(new float[0.94902,0.635294,0.341176]);
Appearance166.material = Material167;

Shape165.appearance = Appearance166;

let IndexedFaceSet168 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet168.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1,34,35,36,-1,35,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,39,41,40,-1,40,41,42,-1,41,43,42,-1,42,43,44,-1,43,45,44,-1]);
IndexedFaceSet168.solid = False;
let Coordinate169 = browser.currentScene.createNode("Coordinate");
Coordinate169.point = new MFVec3f(new float[-75,0,0,-75,0,20,-74.2366,10.6736,0,-74.2366,10.6736,20,-71.962,21.1299,0,-71.962,21.1299,20,-68.2224,31.1561,0,-68.2224,31.1561,20,-63.094,40.5481,0,-63.094,40.5481,20,-56.6812,49.1146,0,-56.6812,49.1146,20,-49.1146,56.6812,0,-49.1146,56.6812,20,-40.5481,63.094,0,-40.5481,63.094,20,-31.1561,68.2224,0,-31.1561,68.2224,20,-21.1299,71.962,0,-21.1299,71.962,20,-10.6736,74.2366,0,-10.6736,74.2366,20,0,75,0,0,75,20,10.6736,74.2366,0,10.6736,74.2366,20,21.1299,71.962,0,21.1299,71.962,20,31.1561,68.2224,0,31.1561,68.2224,20,40.5481,63.094,0,40.5481,63.094,20,49.1146,56.6812,0,49.1146,56.6812,20,56.6812,49.1146,0,56.6812,49.1146,20,63.094,40.5481,0,63.094,40.5481,20,68.2224,31.1561,0,68.2224,31.1561,20,71.962,21.1299,0,71.962,21.1299,20,74.2366,10.6736,0,74.2366,10.6736,20,75,0,0,75,0,20]);
IndexedFaceSet168.coord = Coordinate169;

let Normal170 = browser.currentScene.createNode("Normal");
Normal170.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-0.989822,0.142308,0,-0.989822,0.142308,0,-0.959498,0.281716,0,-0.959498,0.281716,0,-0.909645,0.415387,0,-0.909645,0.415387,0,-0.841257,0.540635,0,-0.841257,0.540635,0,-0.755771,0.654836,0,-0.755771,0.654836,0,-0.654836,0.755771,0,-0.654836,0.755771,0,-0.540635,0.841257,0,-0.540635,0.841257,0,-0.415387,0.909645,0,-0.415387,0.909645,0,-0.281716,0.959498,0,-0.281716,0.959498,0,-0.142308,0.989822,0,-0.142308,0.989822,0,0,1,0,0,1,0,0.142308,0.989822,0,0.142308,0.989822,0,0.281716,0.959498,0,0.281716,0.959498,0,0.415387,0.909645,0,0.415387,0.909645,0,0.540635,0.841257,0,0.540635,0.841257,0,0.654836,0.755771,0,0.654836,0.755771,0,0.755771,0.654836,0,0.755771,0.654836,0,0.841257,0.540635,0,0.841257,0.540635,0,0.909645,0.415387,0,0.909645,0.415387,0,0.959498,0.281716,0,0.959498,0.281716,0,0.989822,0.142308,0,0.989822,0.142308,0,1,0,0,1,0,0]);
IndexedFaceSet168.normal = Normal170;

Shape165.geometry = IndexedFaceSet168;

CADFace164.shape = Shape165;

CADPart163.children = new MFNode();

CADPart163.children[0] = CADFace164;

let CADFace171 = browser.currentScene.createNode("CADFace");
CADFace171.name = "cap_mesh02";
let Shape172 = browser.currentScene.createNode("Shape");
let Appearance173 = browser.currentScene.createNode("Appearance");
let Material174 = browser.currentScene.createNode("Material");
Material174.USE = "_material1";
Appearance173.material = Material174;

Shape172.appearance = Appearance173;

let IndexedFaceSet175 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet175.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1,34,35,36,-1,35,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,39,41,40,-1,40,41,42,-1,41,43,42,-1,42,43,44,-1,43,45,44,-1]);
IndexedFaceSet175.solid = False;
let Coordinate176 = browser.currentScene.createNode("Coordinate");
Coordinate176.point = new MFVec3f(new float[75,0,0,75,0,20,74.2366,-10.6736,0,74.2366,-10.6736,20,71.962,-21.1299,0,71.962,-21.1299,20,68.2224,-31.1561,0,68.2224,-31.1561,20,63.094,-40.5481,0,63.094,-40.5481,20,56.6812,-49.1146,0,56.6812,-49.1146,20,49.1146,-56.6812,0,49.1146,-56.6812,20,40.5481,-63.094,0,40.5481,-63.094,20,31.1561,-68.2224,0,31.1561,-68.2224,20,21.1299,-71.962,0,21.1299,-71.962,20,10.6736,-74.2366,0,10.6736,-74.2366,20,0,-75,0,0,-75,20,-10.6736,-74.2366,0,-10.6736,-74.2366,20,-21.1299,-71.962,0,-21.1299,-71.962,20,-31.1561,-68.2224,0,-31.1561,-68.2224,20,-40.5481,-63.094,0,-40.5481,-63.094,20,-49.1146,-56.6812,0,-49.1146,-56.6812,20,-56.6812,-49.1146,0,-56.6812,-49.1146,20,-63.094,-40.5481,0,-63.094,-40.5481,20,-68.2224,-31.1561,0,-68.2224,-31.1561,20,-71.962,-21.1299,0,-71.962,-21.1299,20,-74.2366,-10.6736,0,-74.2366,-10.6736,20,-75,0,0,-75,0,20]);
IndexedFaceSet175.coord = Coordinate176;

let Normal177 = browser.currentScene.createNode("Normal");
Normal177.vector = new MFVec3f(new float[1,0,0,1,0,0,0.989822,-0.142308,0,0.989822,-0.142308,0,0.959498,-0.281716,0,0.959498,-0.281716,0,0.909645,-0.415387,0,0.909645,-0.415387,0,0.841257,-0.540635,0,0.841257,-0.540635,0,0.755771,-0.654836,0,0.755771,-0.654836,0,0.654836,-0.755771,0,0.654836,-0.755771,0,0.540635,-0.841257,0,0.540635,-0.841257,0,0.415387,-0.909645,0,0.415387,-0.909645,0,0.281716,-0.959498,0,0.281716,-0.959498,0,0.142308,-0.989822,0,0.142308,-0.989822,0,0,-1,0,0,-1,0,-0.142308,-0.989822,0,-0.142308,-0.989822,0,-0.281716,-0.959498,0,-0.281716,-0.959498,0,-0.415387,-0.909645,0,-0.415387,-0.909645,0,-0.540635,-0.841257,0,-0.540635,-0.841257,0,-0.654836,-0.755771,0,-0.654836,-0.755771,0,-0.755771,-0.654836,0,-0.755771,-0.654836,0,-0.841257,-0.540635,0,-0.841257,-0.540635,0,-0.909645,-0.415387,0,-0.909645,-0.415387,0,-0.959498,-0.281716,0,-0.959498,-0.281716,0,-0.989822,-0.142308,0,-0.989822,-0.142308,0,-1,0,0,-1,0,0]);
IndexedFaceSet175.normal = Normal177;

Shape172.geometry = IndexedFaceSet175;

CADFace171.shape = Shape172;

CADPart163.children[1] = CADFace171;

let CADFace178 = browser.currentScene.createNode("CADFace");
CADFace178.name = "cap_mesh03";
let Shape179 = browser.currentScene.createNode("Shape");
let Appearance180 = browser.currentScene.createNode("Appearance");
let Material181 = browser.currentScene.createNode("Material");
Material181.USE = "_material1";
Appearance180.material = Material181;

Shape179.appearance = Appearance180;

let IndexedFaceSet182 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet182.coordIndex = new MFInt32(new int[2,1,3,-1,1,4,3,-1,3,4,5,-1,4,6,5,-1,5,6,7,-1,6,8,7,-1,7,8,9,-1,8,10,9,-1,9,10,11,-1,10,12,11,-1,11,12,13,-1,12,14,13,-1,13,14,15,-1,14,16,15,-1,15,16,17,-1,16,18,17,-1,17,18,19,-1,18,20,19,-1,19,20,21,-1,20,22,21,-1,21,22,23,-1,22,24,23,-1,23,24,25,-1,24,26,25,-1,25,26,27,-1,26,28,27,-1,27,28,29,-1,28,30,29,-1,29,30,31,-1,30,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,34,36,35,-1,35,36,37,-1,36,38,37,-1,37,38,39,-1,38,40,39,-1,39,40,41,-1,40,42,41,-1,41,42,43,-1,0,1,2,-1]);
IndexedFaceSet182.solid = False;
let Coordinate183 = browser.currentScene.createNode("Coordinate");
Coordinate183.point = new MFVec3f(new float[0,75,0,10.6736,74.2366,0,-10.6736,74.2366,0,-21.1299,71.962,0,21.1299,71.962,0,-31.1561,68.2224,0,31.1561,68.2224,0,-40.5481,63.094,0,40.5481,63.094,0,-49.1146,56.6812,0,49.1146,56.6812,0,-56.6812,49.1146,0,56.6812,49.1146,0,-63.094,40.5481,0,63.094,40.5481,0,-68.2224,31.1561,0,68.2224,31.1561,0,-71.962,21.1299,0,71.962,21.1299,0,-74.2366,10.6736,0,74.2366,10.6736,0,-75,0,0,75,0,0,-74.2366,-10.6736,0,74.2366,-10.6736,0,-71.962,-21.1299,0,71.962,-21.1299,0,-68.2224,-31.1561,0,68.2224,-31.1561,0,-63.094,-40.5481,0,63.094,-40.5481,0,-56.6812,-49.1146,0,56.6812,-49.1146,0,-49.1146,-56.6812,0,49.1146,-56.6812,0,-40.5481,-63.094,0,40.5481,-63.094,0,-31.1561,-68.2224,0,31.1561,-68.2224,0,-21.1299,-71.962,0,21.1299,-71.962,0,-10.6736,-74.2366,0,10.6736,-74.2366,0,0,-75,0]);
IndexedFaceSet182.coord = Coordinate183;

Shape179.geometry = IndexedFaceSet182;

CADFace178.shape = Shape179;

CADPart163.children[2] = CADFace178;

let CADFace184 = browser.currentScene.createNode("CADFace");
CADFace184.name = "cap_mesh04";
let Shape185 = browser.currentScene.createNode("Shape");
let Appearance186 = browser.currentScene.createNode("Appearance");
let Material187 = browser.currentScene.createNode("Material");
Material187.USE = "_material1";
Appearance186.material = Material187;

Shape185.appearance = Appearance186;

let IndexedFaceSet188 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet188.coordIndex = new MFInt32(new int[1,0,3,-1,0,4,3,-1,3,4,5,-1,4,6,5,-1,5,6,7,-1,6,8,7,-1,7,8,9,-1,8,10,9,-1,9,10,11,-1,10,12,11,-1,11,12,13,-1,12,14,13,-1,13,14,15,-1,14,16,15,-1,15,16,17,-1,16,18,17,-1,17,18,19,-1,18,20,19,-1,19,20,21,-1,20,22,21,-1,21,22,23,-1,22,24,23,-1,23,24,25,-1,24,26,25,-1,25,26,27,-1,26,28,27,-1,27,28,29,-1,28,30,29,-1,29,30,31,-1,30,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,34,36,35,-1,35,36,37,-1,36,38,37,-1,37,38,39,-1,38,40,39,-1,39,40,41,-1,40,42,41,-1,41,42,43,-1,0,1,2,-1]);
IndexedFaceSet188.solid = False;
let Coordinate189 = browser.currentScene.createNode("Coordinate");
Coordinate189.point = new MFVec3f(new float[-10.6736,74.2366,20,10.6736,74.2366,20,0,75,20,21.1299,71.962,20,-21.1299,71.962,20,31.1561,68.2224,20,-31.1561,68.2224,20,40.5481,63.094,20,-40.5481,63.094,20,49.1146,56.6812,20,-49.1146,56.6812,20,56.6812,49.1146,20,-56.6812,49.1146,20,63.094,40.5481,20,-63.094,40.5481,20,68.2224,31.1561,20,-68.2224,31.1561,20,71.962,21.1299,20,-71.962,21.1299,20,74.2366,10.6736,20,-74.2366,10.6736,20,75,0,20,-75,0,20,74.2366,-10.6736,20,-74.2366,-10.6736,20,71.962,-21.1299,20,-71.962,-21.1299,20,68.2224,-31.1561,20,-68.2224,-31.1561,20,63.094,-40.5481,20,-63.094,-40.5481,20,56.6812,-49.1146,20,-56.6812,-49.1146,20,49.1146,-56.6812,20,-49.1146,-56.6812,20,40.5481,-63.094,20,-40.5481,-63.094,20,31.1561,-68.2224,20,-31.1561,-68.2224,20,21.1299,-71.962,20,-21.1299,-71.962,20,10.6736,-74.2366,20,-10.6736,-74.2366,20,0,-75,20]);
IndexedFaceSet188.coord = Coordinate189;

Shape185.geometry = IndexedFaceSet188;

CADFace184.shape = Shape185;

CADPart163.children[3] = CADFace184;

CADAssembly162.children = new MFNode();

CADAssembly162.children[0] = CADPart163;

Transform161.children = new MFNode();

Transform161.children[0] = CADAssembly162;

CADAssembly5.children[1] = Transform161;

let Transform190 = browser.currentScene.createNode("Transform");
Transform190.DEF = "TransformCatiaHubGasket";
let CADAssembly191 = browser.currentScene.createNode("CADAssembly");
CADAssembly191.name = "sleeve_sub_assembly";
let Transform192 = browser.currentScene.createNode("Transform");
Transform192.DEF = "T5";
Transform192.translation = new SFVec3f(new float[0,0,50]);
let CADAssembly193 = browser.currentScene.createNode("CADAssembly");
CADAssembly193.name = "gasket";
let CADPart194 = browser.currentScene.createNode("CADPart");
CADPart194.name = "gasket";
let CADFace195 = browser.currentScene.createNode("CADFace");
CADFace195.name = "gasket_mesh01";
let Shape196 = browser.currentScene.createNode("Shape");
let Appearance197 = browser.currentScene.createNode("Appearance");
let Material198 = browser.currentScene.createNode("Material");
Material198.DEF = "_material2";
Material198.diffuseColor = new SFColor(new float[0,1,0]);
Appearance197.material = Material198;

Shape196.appearance = Appearance197;

let IndexedFaceSet199 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet199.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1]);
IndexedFaceSet199.solid = False;
let Coordinate200 = browser.currentScene.createNode("Coordinate");
Coordinate200.point = new MFVec3f(new float[-45,0,0,-45,0,35,-44.2338,8.26873,0,-44.2338,8.26873,35,-41.9613,16.2559,0,-41.9613,16.2559,35,-38.2598,23.6894,0,-38.2598,23.6894,35,-33.2554,30.3163,0,-33.2554,30.3163,35,-27.1186,35.9108,0,-27.1186,35.9108,35,-20.0582,40.2823,0,-20.0582,40.2823,35,-12.3148,43.2822,0,-12.3148,43.2822,35,-4.15208,44.808,0,-4.15208,44.808,35,4.15208,44.808,0,4.15208,44.808,35,12.3148,43.2822,0,12.3148,43.2822,35,20.0582,40.2823,0,20.0582,40.2823,35,27.1186,35.9108,0,27.1186,35.9108,35,33.2554,30.3163,0,33.2554,30.3163,35,38.2598,23.6894,0,38.2598,23.6894,35,41.9613,16.2559,0,41.9613,16.2559,35,44.2338,8.26873,0,44.2338,8.26873,35,45,0,0,45,0,35]);
IndexedFaceSet199.coord = Coordinate200;

let Normal201 = browser.currentScene.createNode("Normal");
Normal201.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-0.982978,0.183721,0,-0.982978,0.183721,0,-0.932482,0.361217,0,-0.932482,0.361217,0,-0.850228,0.526414,0,-0.850228,0.526414,0,-0.739036,0.673666,0,-0.739036,0.673666,0,-0.602619,0.798029,0,-0.602619,0.798029,0,-0.445723,0.895171,0,-0.445723,0.895171,0,-0.273659,0.961827,0,-0.273659,0.961827,0,-0.0922575,0.995735,0,-0.0922575,0.995735,0,0.0922575,0.995735,0,0.0922575,0.995735,0,0.273659,0.961827,0,0.273659,0.961827,0,0.445723,0.895171,0,0.445723,0.895171,0,0.602619,0.798029,0,0.602619,0.798029,0,0.739036,0.673666,0,0.739036,0.673666,0,0.850228,0.526414,0,0.850228,0.526414,0,0.932482,0.361217,0,0.932482,0.361217,0,0.982978,0.183721,0,0.982978,0.183721,0,1,0,0,1,0,0]);
IndexedFaceSet199.normal = Normal201;

Shape196.geometry = IndexedFaceSet199;

CADFace195.shape = Shape196;

CADPart194.children = new MFNode();

CADPart194.children[0] = CADFace195;

let CADFace202 = browser.currentScene.createNode("CADFace");
CADFace202.name = "gasket_mesh02";
let Shape203 = browser.currentScene.createNode("Shape");
let Appearance204 = browser.currentScene.createNode("Appearance");
let Material205 = browser.currentScene.createNode("Material");
Material205.USE = "_material2";
Appearance204.material = Material205;

Shape203.appearance = Appearance204;

let IndexedFaceSet206 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet206.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1]);
IndexedFaceSet206.solid = False;
let Coordinate207 = browser.currentScene.createNode("Coordinate");
Coordinate207.point = new MFVec3f(new float[45,0,0,45,0,35,44.2338,-8.26873,0,44.2338,-8.26873,35,41.9613,-16.2559,0,41.9613,-16.2559,35,38.2598,-23.6894,0,38.2598,-23.6894,35,33.2554,-30.3163,0,33.2554,-30.3163,35,27.1186,-35.9108,0,27.1186,-35.9108,35,20.0582,-40.2823,0,20.0582,-40.2823,35,12.3148,-43.2822,0,12.3148,-43.2822,35,4.15208,-44.808,0,4.15208,-44.808,35,-4.15208,-44.808,0,-4.15208,-44.808,35,-12.3148,-43.2822,0,-12.3148,-43.2822,35,-20.0582,-40.2823,0,-20.0582,-40.2823,35,-27.1186,-35.9108,0,-27.1186,-35.9108,35,-33.2554,-30.3163,0,-33.2554,-30.3163,35,-38.2598,-23.6894,0,-38.2598,-23.6894,35,-41.9613,-16.2559,0,-41.9613,-16.2559,35,-44.2338,-8.26873,0,-44.2338,-8.26873,35,-45,0,0,-45,0,35]);
IndexedFaceSet206.coord = Coordinate207;

let Normal208 = browser.currentScene.createNode("Normal");
Normal208.vector = new MFVec3f(new float[1,0,0,1,0,0,0.982978,-0.183721,0,0.982978,-0.183721,0,0.932482,-0.361217,0,0.932482,-0.361217,0,0.850228,-0.526414,0,0.850228,-0.526414,0,0.739036,-0.673666,0,0.739036,-0.673666,0,0.602619,-0.798029,0,0.602619,-0.798029,0,0.445723,-0.895171,0,0.445723,-0.895171,0,0.273659,-0.961827,0,0.273659,-0.961827,0,0.0922575,-0.995735,0,0.0922575,-0.995735,0,-0.0922575,-0.995735,0,-0.0922575,-0.995735,0,-0.273659,-0.961827,0,-0.273659,-0.961827,0,-0.445723,-0.895171,0,-0.445723,-0.895171,0,-0.602619,-0.798029,0,-0.602619,-0.798029,0,-0.739036,-0.673666,0,-0.739036,-0.673666,0,-0.850228,-0.526414,0,-0.850228,-0.526414,0,-0.932482,-0.361217,0,-0.932482,-0.361217,0,-0.982978,-0.183721,0,-0.982978,-0.183721,0,-1,0,0,-1,0,0]);
IndexedFaceSet206.normal = Normal208;

Shape203.geometry = IndexedFaceSet206;

CADFace202.shape = Shape203;

CADPart194.children[1] = CADFace202;

let CADFace209 = browser.currentScene.createNode("CADFace");
CADFace209.name = "gasket_mesh03";
let Shape210 = browser.currentScene.createNode("Shape");
let Appearance211 = browser.currentScene.createNode("Appearance");
let Material212 = browser.currentScene.createNode("Material");
Material212.USE = "_material2";
Appearance211.material = Material212;

Shape210.appearance = Appearance211;

let IndexedFaceSet213 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet213.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1]);
IndexedFaceSet213.solid = False;
let Coordinate214 = browser.currentScene.createNode("Coordinate");
Coordinate214.point = new MFVec3f(new float[30,0,35,30,0,0,29.2478,-6.67563,35,29.2478,-6.67563,0,27.0291,-13.0165,35,27.0291,-13.0165,0,23.4549,-18.7047,35,23.4549,-18.7047,0,18.7047,-23.4549,35,18.7047,-23.4549,0,13.0165,-27.0291,35,13.0165,-27.0291,0,6.67563,-29.2478,35,6.67563,-29.2478,0,0,-30,35,0,-30,0,-6.67563,-29.2478,35,-6.67563,-29.2478,0,-13.0165,-27.0291,35,-13.0165,-27.0291,0,-18.7047,-23.4549,35,-18.7047,-23.4549,0,-23.4549,-18.7047,35,-23.4549,-18.7047,0,-27.0291,-13.0165,35,-27.0291,-13.0165,0,-29.2478,-6.67563,35,-29.2478,-6.67563,0,-30,0,35,-30,0,0]);
IndexedFaceSet213.coord = Coordinate214;

let Normal215 = browser.currentScene.createNode("Normal");
Normal215.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-0.97493,0.22251,0,-0.97493,0.22251,0,-0.90097,0.433882,0,-0.90097,0.433882,0,-0.781853,0.623463,0,-0.781853,0.623463,0,-0.623463,0.781853,0,-0.623463,0.781853,0,-0.433882,0.90097,0,-0.433882,0.90097,0,-0.22251,0.97493,0,-0.22251,0.97493,0,0,1,0,0,1,0,0.22251,0.97493,0,0.22251,0.97493,0,0.433882,0.90097,0,0.433882,0.90097,0,0.623463,0.781853,0,0.623463,0.781853,0,0.781853,0.623463,0,0.781853,0.623463,0,0.90097,0.433882,0,0.90097,0.433882,0,0.97493,0.22251,0,0.97493,0.22251,0,1,0,0,1,0,0]);
IndexedFaceSet213.normal = Normal215;

Shape210.geometry = IndexedFaceSet213;

CADFace209.shape = Shape210;

CADPart194.children[2] = CADFace209;

let CADFace216 = browser.currentScene.createNode("CADFace");
CADFace216.name = "gasket_mesh04";
let Shape217 = browser.currentScene.createNode("Shape");
let Appearance218 = browser.currentScene.createNode("Appearance");
let Material219 = browser.currentScene.createNode("Material");
Material219.USE = "_material2";
Appearance218.material = Material219;

Shape217.appearance = Appearance218;

let IndexedFaceSet220 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet220.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1]);
IndexedFaceSet220.solid = False;
let Coordinate221 = browser.currentScene.createNode("Coordinate");
Coordinate221.point = new MFVec3f(new float[-30,0,35,-30,0,0,-29.2478,6.67563,35,-29.2478,6.67563,0,-27.0291,13.0165,35,-27.0291,13.0165,0,-23.4549,18.7047,35,-23.4549,18.7047,0,-18.7047,23.4549,35,-18.7047,23.4549,0,-13.0165,27.0291,35,-13.0165,27.0291,0,-6.67563,29.2478,35,-6.67563,29.2478,0,0,30,35,0,30,0,6.67563,29.2478,35,6.67563,29.2478,0,13.0165,27.0291,35,13.0165,27.0291,0,18.7047,23.4549,35,18.7047,23.4549,0,23.4549,18.7047,35,23.4549,18.7047,0,27.0291,13.0165,35,27.0291,13.0165,0,29.2478,6.67563,35,29.2478,6.67563,0,30,0,35,30,0,0]);
IndexedFaceSet220.coord = Coordinate221;

let Normal222 = browser.currentScene.createNode("Normal");
Normal222.vector = new MFVec3f(new float[1,0,0,1,0,0,0.97493,-0.22251,0,0.97493,-0.22251,0,0.90097,-0.433882,0,0.90097,-0.433882,0,0.781853,-0.623463,0,0.781853,-0.623463,0,0.623463,-0.781853,0,0.623463,-0.781853,0,0.433882,-0.90097,0,0.433882,-0.90097,0,0.22251,-0.97493,0,0.22251,-0.97493,0,0,-1,0,0,-1,0,-0.22251,-0.97493,0,-0.22251,-0.97493,0,-0.433882,-0.90097,0,-0.433882,-0.90097,0,-0.623463,-0.781853,0,-0.623463,-0.781853,0,-0.781853,-0.623463,0,-0.781853,-0.623463,0,-0.90097,-0.433882,0,-0.90097,-0.433882,0,-0.97493,-0.22251,0,-0.97493,-0.22251,0,-1,0,0,-1,0,0]);
IndexedFaceSet220.normal = Normal222;

Shape217.geometry = IndexedFaceSet220;

CADFace216.shape = Shape217;

CADPart194.children[3] = CADFace216;

let CADFace223 = browser.currentScene.createNode("CADFace");
CADFace223.name = "gasket_mesh05";
let Shape224 = browser.currentScene.createNode("Shape");
let Appearance225 = browser.currentScene.createNode("Appearance");
let Material226 = browser.currentScene.createNode("Material");
Material226.USE = "_material2";
Appearance225.material = Material226;

Shape224.appearance = Appearance225;

let IndexedFaceSet227 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet227.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,2,4,5,-1,4,6,5,-1,5,6,7,-1,6,8,7,-1,7,8,9,-1,7,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,17,18,16,-1,18,14,16,-1,19,20,21,-1,20,22,21,-1,21,22,23,-1,23,22,24,-1,22,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,28,27,29,-1,27,30,29,-1,29,30,31,-1,30,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,35,34,36,-1,34,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,41,18,17,-1,41,17,42,-1,41,42,43,-1,41,43,44,-1,41,44,45,-1,41,45,46,-1,41,46,47,-1,41,47,48,-1,41,48,49,-1,44,40,39,-1,44,39,50,-1,44,50,51,-1,44,51,52,-1,44,52,45,-1,53,1,0,-1,53,0,54,-1,53,54,55,-1,53,55,56,-1,53,56,57,-1,53,57,58,-1,53,58,59,-1,53,59,60,-1,53,60,61,-1,53,61,20,-1,53,20,19,-1]);
IndexedFaceSet227.solid = False;
let Coordinate228 = browser.currentScene.createNode("Coordinate");
Coordinate228.point = new MFVec3f(new float[-33.2554,30.3163,0,-6.67563,29.2478,0,-38.2598,23.6894,0,-13.0165,27.0291,0,-18.7047,23.4549,0,-41.9613,16.2559,0,-23.4549,18.7047,0,-44.2338,8.26873,0,-27.0291,13.0165,0,-29.2478,6.67563,0,-45,0,0,-30,0,0,-44.2338,-8.26873,0,-29.2478,-6.67563,0,-41.9613,-16.2559,0,-27.0291,-13.0165,0,-23.4549,-18.7047,0,-18.7047,-23.4549,0,-38.2598,-23.6894,0,6.67563,29.2478,0,33.2554,30.3163,0,13.0165,27.0291,0,38.2598,23.6894,0,18.7047,23.4549,0,23.4549,18.7047,0,41.9613,16.2559,0,27.0291,13.0165,0,44.2338,8.26873,0,29.2478,6.67563,0,30,0,0,45,0,0,29.2478,-6.67563,0,44.2338,-8.26873,0,27.0291,-13.0165,0,41.9613,-16.2559,0,23.4549,-18.7047,0,18.7047,-23.4549,0,38.2598,-23.6894,0,13.0165,-27.0291,0,33.2554,-30.3163,0,6.67563,-29.2478,0,-33.2554,-30.3163,0,-13.0165,-27.0291,0,-6.67563,-29.2478,0,0,-30,0,4.15208,-44.808,0,-4.15208,-44.808,0,-12.3148,-43.2822,0,-20.0582,-40.2823,0,-27.1186,-35.9108,0,27.1186,-35.9108,0,20.0582,-40.2823,0,12.3148,-43.2822,0,0,30,0,-27.1186,35.9108,0,-20.0582,40.2823,0,-12.3148,43.2822,0,-4.15208,44.808,0,4.15208,44.808,0,12.3148,43.2822,0,20.0582,40.2823,0,27.1186,35.9108,0]);
IndexedFaceSet227.coord = Coordinate228;

Shape224.geometry = IndexedFaceSet227;

CADFace223.shape = Shape224;

CADPart194.children[4] = CADFace223;

let CADFace229 = browser.currentScene.createNode("CADFace");
CADFace229.name = "gasket_mesh06";
let Shape230 = browser.currentScene.createNode("Shape");
let Appearance231 = browser.currentScene.createNode("Appearance");
let Material232 = browser.currentScene.createNode("Material");
Material232.USE = "_material2";
Appearance231.material = Material232;

Shape230.appearance = Appearance231;

let IndexedFaceSet233 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet233.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,4,3,5,-1,3,6,5,-1,5,6,7,-1,6,8,7,-1,7,8,9,-1,9,8,10,-1,8,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,17,18,15,-1,18,16,15,-1,19,20,21,-1,20,22,21,-1,21,22,23,-1,21,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,26,28,29,-1,28,30,29,-1,29,30,31,-1,30,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,33,35,36,-1,35,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,41,42,43,-1,41,43,44,-1,41,44,45,-1,41,45,46,-1,41,46,47,-1,41,47,48,-1,41,48,49,-1,41,49,18,-1,41,18,17,-1,47,46,50,-1,47,50,51,-1,47,51,52,-1,47,52,38,-1,47,38,40,-1,53,20,19,-1,53,19,54,-1,53,54,55,-1,53,55,56,-1,53,56,57,-1,53,57,58,-1,53,58,59,-1,53,59,60,-1,53,60,61,-1,53,61,1,-1,53,1,0,-1]);
IndexedFaceSet233.solid = False;
let Coordinate234 = browser.currentScene.createNode("Coordinate");
Coordinate234.point = new MFVec3f(new float[-6.67563,29.2478,35,-33.2554,30.3163,35,-13.0165,27.0291,35,-38.2598,23.6894,35,-18.7047,23.4549,35,-23.4549,18.7047,35,-41.9613,16.2559,35,-27.0291,13.0165,35,-44.2338,8.26873,35,-29.2478,6.67563,35,-30,0,35,-45,0,35,-29.2478,-6.67563,35,-44.2338,-8.26873,35,-27.0291,-13.0165,35,-41.9613,-16.2559,35,-23.4549,-18.7047,35,-38.2598,-23.6894,35,-18.7047,-23.4549,35,33.2554,30.3163,35,6.67563,29.2478,35,38.2598,23.6894,35,13.0165,27.0291,35,18.7047,23.4549,35,41.9613,16.2559,35,23.4549,18.7047,35,44.2338,8.26873,35,27.0291,13.0165,35,29.2478,6.67563,35,45,0,35,30,0,35,44.2338,-8.26873,35,29.2478,-6.67563,35,41.9613,-16.2559,35,27.0291,-13.0165,35,23.4549,-18.7047,35,38.2598,-23.6894,35,18.7047,-23.4549,35,33.2554,-30.3163,35,13.0165,-27.0291,35,6.67563,-29.2478,35,-33.2554,-30.3163,35,-27.1186,-35.9108,35,-20.0582,-40.2823,35,-12.3148,-43.2822,35,-4.15208,-44.808,35,4.15208,-44.808,35,0,-30,35,-6.67563,-29.2478,35,-13.0165,-27.0291,35,12.3148,-43.2822,35,20.0582,-40.2823,35,27.1186,-35.9108,35,0,30,35,27.1186,35.9108,35,20.0582,40.2823,35,12.3148,43.2822,35,4.15208,44.808,35,-4.15208,44.808,35,-12.3148,43.2822,35,-20.0582,40.2823,35,-27.1186,35.9108,35]);
IndexedFaceSet233.coord = Coordinate234;

Shape230.geometry = IndexedFaceSet233;

CADFace229.shape = Shape230;

CADPart194.children[5] = CADFace229;

CADAssembly193.children = new MFNode();

CADAssembly193.children[0] = CADPart194;

Transform192.children = new MFNode();

Transform192.children[0] = CADAssembly193;

CADAssembly191.children = new MFNode();

CADAssembly191.children[0] = Transform192;

let Transform235 = browser.currentScene.createNode("Transform");
Transform235.DEF = "TransformCatiaHubBushing";
Transform235.translation = new SFVec3f(new float[0,0,85]);
let CADAssembly236 = browser.currentScene.createNode("CADAssembly");
CADAssembly236.name = "cylinder";
let CADPart237 = browser.currentScene.createNode("CADPart");
CADPart237.name = "cylinder";
let CADFace238 = browser.currentScene.createNode("CADFace");
CADFace238.name = "cylinder_mesh01";
let Shape239 = browser.currentScene.createNode("Shape");
let Appearance240 = browser.currentScene.createNode("Appearance");
let Material241 = browser.currentScene.createNode("Material");
Material241.DEF = "_material3";
Material241.diffuseColor = new SFColor(new float[0,1,1]);
Appearance240.material = Material241;

Shape239.appearance = Appearance240;

let IndexedFaceSet242 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet242.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1]);
IndexedFaceSet242.solid = False;
let Coordinate243 = browser.currentScene.createNode("Coordinate");
Coordinate243.point = new MFVec3f(new float[-30,0,0,-30,0,80,-29.2478,6.67563,0,-29.2478,6.67563,80,-27.0291,13.0165,0,-27.0291,13.0165,80,-23.4549,18.7047,0,-23.4549,18.7047,80,-18.7047,23.4549,0,-18.7047,23.4549,80,-13.0165,27.0291,0,-13.0165,27.0291,80,-6.67563,29.2478,0,-6.67563,29.2478,80,0,30,0,0,30,80,6.67563,29.2478,0,6.67563,29.2478,80,13.0165,27.0291,0,13.0165,27.0291,80,18.7047,23.4549,0,18.7047,23.4549,80,23.4549,18.7047,0,23.4549,18.7047,80,27.0291,13.0165,0,27.0291,13.0165,80,29.2478,6.67563,0,29.2478,6.67563,80,30,0,0,30,0,80]);
IndexedFaceSet242.coord = Coordinate243;

let Normal244 = browser.currentScene.createNode("Normal");
Normal244.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-0.97493,0.22251,0,-0.97493,0.22251,0,-0.90097,0.433882,0,-0.90097,0.433882,0,-0.781853,0.623463,0,-0.781853,0.623463,0,-0.623463,0.781853,0,-0.623463,0.781853,0,-0.433882,0.90097,0,-0.433882,0.90097,0,-0.22251,0.97493,0,-0.22251,0.97493,0,0,1,0,0,1,0,0.22251,0.97493,0,0.22251,0.97493,0,0.433882,0.90097,0,0.433882,0.90097,0,0.623463,0.781853,0,0.623463,0.781853,0,0.781853,0.623463,0,0.781853,0.623463,0,0.90097,0.433882,0,0.90097,0.433882,0,0.97493,0.22251,0,0.97493,0.22251,0,1,0,0,1,0,0]);
IndexedFaceSet242.normal = Normal244;

Shape239.geometry = IndexedFaceSet242;

CADFace238.shape = Shape239;

CADPart237.children = new MFNode();

CADPart237.children[0] = CADFace238;

let CADFace245 = browser.currentScene.createNode("CADFace");
CADFace245.name = "cylinder_mesh02";
let Shape246 = browser.currentScene.createNode("Shape");
let Appearance247 = browser.currentScene.createNode("Appearance");
let Material248 = browser.currentScene.createNode("Material");
Material248.USE = "_material3";
Appearance247.material = Material248;

Shape246.appearance = Appearance247;

let IndexedFaceSet249 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet249.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1]);
IndexedFaceSet249.solid = False;
let Coordinate250 = browser.currentScene.createNode("Coordinate");
Coordinate250.point = new MFVec3f(new float[30,0,0,30,0,80,29.2478,-6.67563,0,29.2478,-6.67563,80,27.0291,-13.0165,0,27.0291,-13.0165,80,23.4549,-18.7047,0,23.4549,-18.7047,80,18.7047,-23.4549,0,18.7047,-23.4549,80,13.0165,-27.0291,0,13.0165,-27.0291,80,6.67563,-29.2478,0,6.67563,-29.2478,80,0,-30,0,0,-30,80,-6.67563,-29.2478,0,-6.67563,-29.2478,80,-13.0165,-27.0291,0,-13.0165,-27.0291,80,-18.7047,-23.4549,0,-18.7047,-23.4549,80,-23.4549,-18.7047,0,-23.4549,-18.7047,80,-27.0291,-13.0165,0,-27.0291,-13.0165,80,-29.2478,-6.67563,0,-29.2478,-6.67563,80,-30,0,0,-30,0,80]);
IndexedFaceSet249.coord = Coordinate250;

let Normal251 = browser.currentScene.createNode("Normal");
Normal251.vector = new MFVec3f(new float[1,0,0,1,0,0,0.97493,-0.22251,0,0.97493,-0.22251,0,0.90097,-0.433882,0,0.90097,-0.433882,0,0.781853,-0.623463,0,0.781853,-0.623463,0,0.623463,-0.781853,0,0.623463,-0.781853,0,0.433882,-0.90097,0,0.433882,-0.90097,0,0.22251,-0.97493,0,0.22251,-0.97493,0,0,-1,0,0,-1,0,-0.22251,-0.97493,0,-0.22251,-0.97493,0,-0.433882,-0.90097,0,-0.433882,-0.90097,0,-0.623463,-0.781853,0,-0.623463,-0.781853,0,-0.781853,-0.623463,0,-0.781853,-0.623463,0,-0.90097,-0.433882,0,-0.90097,-0.433882,0,-0.97493,-0.22251,0,-0.97493,-0.22251,0,-1,0,0,-1,0,0]);
IndexedFaceSet249.normal = Normal251;

Shape246.geometry = IndexedFaceSet249;

CADFace245.shape = Shape246;

CADPart237.children[1] = CADFace245;

let CADFace252 = browser.currentScene.createNode("CADFace");
CADFace252.name = "cylinder_mesh03";
let Shape253 = browser.currentScene.createNode("Shape");
let Appearance254 = browser.currentScene.createNode("Appearance");
let Material255 = browser.currentScene.createNode("Material");
Material255.USE = "_material3";
Appearance254.material = Material255;

Shape253.appearance = Appearance254;

let IndexedFaceSet256 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet256.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1]);
IndexedFaceSet256.solid = False;
let Coordinate257 = browser.currentScene.createNode("Coordinate");
Coordinate257.point = new MFVec3f(new float[20,0,80,20,0,0,19.3185,-5.17638,80,19.3185,-5.17638,0,17.3205,-10,80,17.3205,-10,0,14.1421,-14.1421,80,14.1421,-14.1421,0,10,-17.3205,80,10,-17.3205,0,5.17638,-19.3185,80,5.17638,-19.3185,0,0,-20,80,0,-20,0,-5.17638,-19.3185,80,-5.17638,-19.3185,0,-10,-17.3205,80,-10,-17.3205,0,-14.1421,-14.1421,80,-14.1421,-14.1421,0,-17.3205,-10,80,-17.3205,-10,0,-19.3185,-5.17638,80,-19.3185,-5.17638,0,-20,0,80,-20,0,0]);
IndexedFaceSet256.coord = Coordinate257;

let Normal258 = browser.currentScene.createNode("Normal");
Normal258.vector = new MFVec3f(new float[-1,0,0,-1,0,0,-0.965932,0.258797,0,-0.965932,0.258797,0,-0.866034,0.499985,0,-0.866034,0.499985,0,-0.707083,0.70713,0,-0.707083,0.70713,0,-0.499985,0.866034,0,-0.499985,0.866034,0,-0.258797,0.965932,0,-0.258797,0.965932,0,0,1,0,0,1,0,0.258797,0.965932,0,0.258797,0.965932,0,0.499985,0.866034,0,0.499985,0.866034,0,0.707083,0.70713,0,0.707083,0.70713,0,0.866034,0.499985,0,0.866034,0.499985,0,0.965932,0.258797,0,0.965932,0.258797,0,1,0,0,1,0,0]);
IndexedFaceSet256.normal = Normal258;

Shape253.geometry = IndexedFaceSet256;

CADFace252.shape = Shape253;

CADPart237.children[2] = CADFace252;

let CADFace259 = browser.currentScene.createNode("CADFace");
CADFace259.name = "cylinder_mesh04";
let Shape260 = browser.currentScene.createNode("Shape");
let Appearance261 = browser.currentScene.createNode("Appearance");
let Material262 = browser.currentScene.createNode("Material");
Material262.USE = "_material3";
Appearance261.material = Material262;

Shape260.appearance = Appearance261;

let IndexedFaceSet263 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet263.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1]);
IndexedFaceSet263.solid = False;
let Coordinate264 = browser.currentScene.createNode("Coordinate");
Coordinate264.point = new MFVec3f(new float[-20,0,80,-20,0,0,-19.3185,5.17638,80,-19.3185,5.17638,0,-17.3205,10,80,-17.3205,10,0,-14.1421,14.1421,80,-14.1421,14.1421,0,-10,17.3205,80,-10,17.3205,0,-5.17638,19.3185,80,-5.17638,19.3185,0,0,20,80,0,20,0,5.17638,19.3185,80,5.17638,19.3185,0,10,17.3205,80,10,17.3205,0,14.1421,14.1421,80,14.1421,14.1421,0,17.3205,10,80,17.3205,10,0,19.3185,5.17638,80,19.3185,5.17638,0,20,0,80,20,0,0]);
IndexedFaceSet263.coord = Coordinate264;

let Normal265 = browser.currentScene.createNode("Normal");
Normal265.vector = new MFVec3f(new float[1,0,0,1,0,0,0.965932,-0.258797,0,0.965932,-0.258797,0,0.866034,-0.499985,0,0.866034,-0.499985,0,0.707083,-0.70713,0,0.707083,-0.70713,0,0.499985,-0.866034,0,0.499985,-0.866034,0,0.258797,-0.965932,0,0.258797,-0.965932,0,0,-1,0,0,-1,0,-0.258797,-0.965932,0,-0.258797,-0.965932,0,-0.499985,-0.866034,0,-0.499985,-0.866034,0,-0.707083,-0.70713,0,-0.707083,-0.70713,0,-0.866034,-0.499985,0,-0.866034,-0.499985,0,-0.965932,-0.258797,0,-0.965932,-0.258797,0,-1,0,0,-1,0,0]);
IndexedFaceSet263.normal = Normal265;

Shape260.geometry = IndexedFaceSet263;

CADFace259.shape = Shape260;

CADPart237.children[3] = CADFace259;

let CADFace266 = browser.currentScene.createNode("CADFace");
CADFace266.name = "cylinder_mesh05";
let Shape267 = browser.currentScene.createNode("Shape");
let Appearance268 = browser.currentScene.createNode("Appearance");
let Material269 = browser.currentScene.createNode("Material");
Material269.USE = "_material3";
Appearance268.material = Material269;

Shape267.appearance = Appearance268;

let IndexedFaceSet270 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet270.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,2,4,5,-1,4,6,5,-1,5,6,7,-1,5,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,12,14,15,-1,14,16,15,-1,15,16,17,-1,15,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,23,24,25,-1,24,26,25,-1,25,26,27,-1,27,26,28,-1,26,29,28,-1,28,29,30,-1,30,29,31,-1,29,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,34,36,35,-1,35,36,37,-1,37,36,38,-1,36,39,38,-1,38,39,40,-1,40,39,19,-1,39,41,19,-1,19,41,21,-1,41,42,21,-1,21,42,43,-1,44,1,0,-1,44,0,45,-1,44,45,46,-1,44,46,47,-1,44,47,48,-1,44,48,49,-1,44,49,50,-1,44,50,51,-1,44,51,24,-1,44,24,23,-1]);
IndexedFaceSet270.solid = False;
let Coordinate271 = browser.currentScene.createNode("Coordinate");
Coordinate271.point = new MFVec3f(new float[-23.4549,18.7047,0,-5.17638,19.3185,0,-27.0291,13.0165,0,-10,17.3205,0,-14.1421,14.1421,0,-29.2478,6.67563,0,-17.3205,10,0,-19.3185,5.17638,0,-30,0,0,-20,0,0,-29.2478,-6.67563,0,-19.3185,-5.17638,0,-27.0291,-13.0165,0,-17.3205,-10,0,-14.1421,-14.1421,0,-23.4549,-18.7047,0,-10,-17.3205,0,-5.17638,-19.3185,0,-18.7047,-23.4549,0,0,-20,0,-13.0165,-27.0291,0,0,-30,0,-6.67563,-29.2478,0,5.17638,19.3185,0,23.4549,18.7047,0,10,17.3205,0,27.0291,13.0165,0,14.1421,14.1421,0,17.3205,10,0,29.2478,6.67563,0,19.3185,5.17638,0,20,0,0,30,0,0,19.3185,-5.17638,0,29.2478,-6.67563,0,17.3205,-10,0,27.0291,-13.0165,0,14.1421,-14.1421,0,10,-17.3205,0,23.4549,-18.7047,0,5.17638,-19.3185,0,18.7047,-23.4549,0,13.0165,-27.0291,0,6.67563,-29.2478,0,0,20,0,-18.7047,23.4549,0,-13.0165,27.0291,0,-6.67563,29.2478,0,0,30,0,6.67563,29.2478,0,13.0165,27.0291,0,18.7047,23.4549,0]);
IndexedFaceSet270.coord = Coordinate271;

Shape267.geometry = IndexedFaceSet270;

CADFace266.shape = Shape267;

CADPart237.children[4] = CADFace266;

let CADFace272 = browser.currentScene.createNode("CADFace");
CADFace272.name = "cylinder_mesh06";
let Shape273 = browser.currentScene.createNode("Shape");
let Appearance274 = browser.currentScene.createNode("Appearance");
let Material275 = browser.currentScene.createNode("Material");
Material275.USE = "_material3";
Appearance274.material = Material275;

Shape273.appearance = Appearance274;

let IndexedFaceSet276 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet276.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,2,3,4,-1,4,3,5,-1,3,6,5,-1,5,6,7,-1,7,6,8,-1,6,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,14,13,15,-1,13,16,15,-1,15,16,17,-1,17,16,18,-1,16,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,23,24,25,-1,24,26,25,-1,25,26,27,-1,25,27,28,-1,27,29,28,-1,28,29,30,-1,28,30,31,-1,30,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,34,36,35,-1,35,36,37,-1,35,37,38,-1,37,39,38,-1,38,39,40,-1,38,40,41,-1,40,18,41,-1,41,18,42,-1,18,20,42,-1,42,20,43,-1,44,24,23,-1,44,23,45,-1,44,45,46,-1,44,46,47,-1,44,47,48,-1,44,48,49,-1,44,49,50,-1,44,50,51,-1,44,51,1,-1,44,1,0,-1]);
IndexedFaceSet276.solid = False;
let Coordinate277 = browser.currentScene.createNode("Coordinate");
Coordinate277.point = new MFVec3f(new float[-5.17638,19.3185,80,-23.4549,18.7047,80,-10,17.3205,80,-27.0291,13.0165,80,-14.1421,14.1421,80,-17.3205,10,80,-29.2478,6.67563,80,-19.3185,5.17638,80,-20,0,80,-30,0,80,-19.3185,-5.17638,80,-29.2478,-6.67563,80,-17.3205,-10,80,-27.0291,-13.0165,80,-14.1421,-14.1421,80,-10,-17.3205,80,-23.4549,-18.7047,80,-5.17638,-19.3185,80,0,-20,80,-18.7047,-23.4549,80,0,-30,80,-13.0165,-27.0291,80,-6.67563,-29.2478,80,23.4549,18.7047,80,5.17638,19.3185,80,27.0291,13.0165,80,10,17.3205,80,14.1421,14.1421,80,29.2478,6.67563,80,17.3205,10,80,19.3185,5.17638,80,30,0,80,20,0,80,29.2478,-6.67563,80,19.3185,-5.17638,80,27.0291,-13.0165,80,17.3205,-10,80,14.1421,-14.1421,80,23.4549,-18.7047,80,10,-17.3205,80,5.17638,-19.3185,80,18.7047,-23.4549,80,13.0165,-27.0291,80,6.67563,-29.2478,80,0,20,80,18.7047,23.4549,80,13.0165,27.0291,80,6.67563,29.2478,80,0,30,80,-6.67563,29.2478,80,-13.0165,27.0291,80,-18.7047,23.4549,80]);
IndexedFaceSet276.coord = Coordinate277;

Shape273.geometry = IndexedFaceSet276;

CADFace272.shape = Shape273;

CADPart237.children[5] = CADFace272;

CADAssembly236.children = new MFNode();

CADAssembly236.children[0] = CADPart237;

Transform235.children = new MFNode();

Transform235.children[0] = CADAssembly236;

CADAssembly191.children[1] = Transform235;

Transform190.children = new MFNode();

Transform190.children[0] = CADAssembly191;

CADAssembly5.children[2] = Transform190;

Transform4.children = new MFNode();

Transform4.children[0] = CADAssembly5;

browser.currentScene.children[2] = Transform4;

