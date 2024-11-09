#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "comment";
meta2.content = "World of Titania";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Fri, 13 Nov 2015 10:12:58 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.2.1, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Fri, 13 Nov 2015 10:12:58 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Transform Transform9 = createNode("Transform");
Transform9.DEF = "DropMarker";
Switch Switch10 = createNode("Switch");
Switch10.whichChoice = 1;
Transform Transform11 = createNode("Transform");
Transform11.DEF = "borderShape";
Transform11.translation = new SFVec3f(new float[0,1.05704,0.00542445]);
Transform11.scale = new SFVec3f(new float[2.19152,1.05704,0.532585]);
Shape Shape12 = createNode("Shape");
Appearance Appearance13 = createNode("Appearance");
Material Material14 = createNode("Material");
Material14.ambientIntensity = 0.170909;
Material14.diffuseColor = new SFColor(new float[0.325457,0.93617,0.0809836]);
Material14.emissiveColor = new SFColor(new float[0,0.266752,1]);
Appearance13.material = Material14;

Shape12.appearance = Appearance13;

IndexedFaceSet IndexedFaceSet15 = createNode("IndexedFaceSet");
IndexedFaceSet15.solid = False;
IndexedFaceSet15.creaseAngle = 0.5;
IndexedFaceSet15.coordIndex = new MFInt32(new int[6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]);
Coordinate Coordinate16 = createNode("Coordinate");
Coordinate16.point = new MFVec3f(new float[-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1]);
IndexedFaceSet15.coord = Coordinate16;

Shape12.geometry = IndexedFaceSet15;

Transform11.child = new undefined();

Transform11.child[0] = Shape12;

Switch10.children = new MFNode();

Switch10.children[0] = Transform11;

Transform Transform17 = createNode("Transform");
Switch10.children[1] = Transform17;

Transform9.children = new MFNode();

Transform9.children[0] = Switch10;

children[1] = Transform9;

Transform Transform18 = createNode("Transform");
Transform18.DEF = "JumpSkull";
LOD LOD19 = createNode("LOD");
LOD19.range = new MFFloat(new float[40]);
Transform Transform20 = createNode("Transform");
Transform20.DEF = "Skull_ON";
Transform Transform21 = createNode("Transform");
Transform21.DEF = "JumpSkull_1";
Transform Transform22 = createNode("Transform");
Transform22.DEF = "skullHorizontalAnim";
Transform22.center = new SFVec3f(new float[-0.00436014,0.633252,0.125815]);
Group Group23 = createNode("Group");
Group Group24 = createNode("Group");
Group24.DEF = "horizontal";
TimeSensor TimeSensor25 = createNode("TimeSensor");
TimeSensor25.DEF = "Time";
TimeSensor25.cycleInterval = 3.7;
TimeSensor25.loop = True;
TimeSensor25.startTime = 958599924.155;
TimeSensor25.stopTime = 1;
Group24.children = new MFNode();

Group24.children[0] = TimeSensor25;

Group23.children = new MFNode();

Group23.children[0] = Group24;

PositionInterpolator PositionInterpolator26 = createNode("PositionInterpolator");
PositionInterpolator26.DEF = "skullHorizontalAnimTranslationInterp";
PositionInterpolator26.key = new MFFloat(new float[0,0.0324324,0.0648648,0.0972972,0.12973,0.162162,0.193694,0.225225,0.256756,0.288288,0.31982,0.351351,0.385135,0.418918,0.452702,0.486486,0.513513,0.54054,0.567568,0.594595,0.621622,0.648649,0.68018,0.711712,0.743244,0.774775,0.806307,0.837838,0.87027,0.902703,0.935135,0.967568,1]);
PositionInterpolator26.keyValue = new MFVec3f(new float[0,0,0,-0.377012,0,0,-0.825372,0,0,-1.23806,0,0,-1.50805,0,0,-1.52832,0,0,-1.22849,0,0,-0.682969,0,0,-0.0135763,0,0,0.657854,0,0,1.20949,0,0,1.5195,0,0,1.42241,0,0,0.974765,0,0,0.419613,0,0,0,0,0,-0.227434,0,0,-0.458097,0,0,-0.664528,0,0,-0.819265,0,0,-0.894844,0,0,-0.863805,0,0,-0.644793,0,0,-0.262207,0,0,0.199537,0,0,0.656019,0,0,1.02282,0,0,1.21553,0,0,1.17904,0,0,0.961765,0,0,0.641177,0,0,0.294762,0,0,0,0,0]);
Group23.children[1] = PositionInterpolator26;

Transform22.children = new MFNode();

Transform22.children[0] = Group23;

Transform Transform27 = createNode("Transform");
Transform27.DEF = "shadowVerticalAnim";
Transform27.scale = new SFVec3f(new float[1.87714,1.87714,1.87714]);
Transform27.center = new SFVec3f(new float[0,0.00821206,0]);
Group Group28 = createNode("Group");
Group Group29 = createNode("Group");
Group29.DEF = "vertical";
TimeSensor TimeSensor30 = createNode("TimeSensor");
TimeSensor30.DEF = "Time_1";
TimeSensor30.cycleInterval = 2.3;
TimeSensor30.loop = True;
TimeSensor30.startTime = 958599924.155;
TimeSensor30.stopTime = 1;
Group29.children = new MFNode();

Group29.children[0] = TimeSensor30;

Group28.children = new MFNode();

Group28.children[0] = Group29;

PositionInterpolator PositionInterpolator31 = createNode("PositionInterpolator");
PositionInterpolator31.DEF = "shadowVerticalAnimScaleFactorInterp";
PositionInterpolator31.key = new MFFloat(new float[0,0.0869565,0.152174,0.217391,0.26087,0.304348,0.391304,0.434782,0.478261,0.521739,0.565217,0.608696,0.695652,0.73913,0.782609,0.847826,0.913043,0.956522,1]);
PositionInterpolator31.keyValue = new MFVec3f(new float[1.87714,1.87714,1.87714,3.79584,3.79584,3.79584,2.90333,2.90333,2.90333,1.87714,1.87714,1.87714,2.34634,2.34634,2.34634,2.90465,2.90465,2.90465,1.87714,1.87714,1.87714,1.71196,1.71196,1.71196,1.68379,1.68379,1.68379,1.87714,1.87714,1.87714,2.79095,2.79095,2.79095,3.53861,3.53861,3.53861,1.87714,1.87714,1.87714,1.69583,1.69583,1.69583,1.87714,1.87714,1.87714,2.76798,2.76798,2.76798,3.42642,3.42642,3.42642,2.84544,2.84544,2.84544,1.87714,1.87714,1.87714]);
Group28.children[1] = PositionInterpolator31;

Transform27.children = new MFNode();

Transform27.children[0] = Group28;

Transform Transform32 = createNode("Transform");
Transform32.DEF = "shadow";
Transform Transform33 = createNode("Transform");
Transform33.DEF = "shadowShape";
Transform33.translation = new SFVec3f(new float[0,-0.357346,0]);
Transform33.scale = new SFVec3f(new float[3.65559,3.65558,3.65559]);
Shape Shape34 = createNode("Shape");
Appearance Appearance35 = createNode("Appearance");
Material Material36 = createNode("Material");
Appearance35.material = Material36;

ImageTexture ImageTexture37 = createNode("ImageTexture");
ImageTexture37.url = new MFString(new java.lang.String["shadow.png"]);
Appearance35.texture = ImageTexture37;

Shape34.appearance = Appearance35;

IndexedFaceSet IndexedFaceSet38 = createNode("IndexedFaceSet");
IndexedFaceSet38.creaseAngle = 0.5;
IndexedFaceSet38.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet38.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate39 = createNode("TextureCoordinate");
TextureCoordinate39.point = new MFVec2f(new float[0,1,0,0,1,0,1,1]);
IndexedFaceSet38.texCoord = TextureCoordinate39;

Coordinate Coordinate40 = createNode("Coordinate");
Coordinate40.point = new MFVec3f(new float[-0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,-0.1]);
IndexedFaceSet38.coord = Coordinate40;

Shape34.geometry = IndexedFaceSet38;

Transform33.child = new undefined();

Transform33.child[0] = Shape34;

Transform32.children = new MFNode();

Transform32.children[0] = Transform33;

Transform27.children[1] = Transform32;

Transform22.children[1] = Transform27;

Transform Transform41 = createNode("Transform");
Transform41.DEF = "skullVerticalAnim";
Transform41.translation = new SFVec3f(new float[0,-0.272788,0]);
Transform41.center = new SFVec3f(new float[-0.0043602,0.90604,0.125815]);
Group Group42 = createNode("Group");
Group Group43 = createNode("Group");
Group43.USE = "vertical";
Group42.children = new MFNode();

Group42.children[0] = Group43;

PositionInterpolator PositionInterpolator44 = createNode("PositionInterpolator");
PositionInterpolator44.DEF = "skullVerticalAnimTranslationInterp";
PositionInterpolator44.key = new MFFloat(new float[0,0.0869565,0.152174,0.217391,0.26087,0.304348,0.391304,0.434782,0.478261,0.521739,0.565217,0.608696,0.695652,0.73913,0.782609,0.847826,0.913043,0.956522,1]);
PositionInterpolator44.keyValue = new MFVec3f(new float[0,-0.272788,0,0,0.540838,0,0,0.155838,0,0,-0.272788,0,0,-0.0267661,0,0,0.249999,0,0,-0.259513,0,0,-0.341914,0,0,-0.357559,0,0,-0.272788,0,0,0.135901,0,0,0.47149,0,0,-0.272788,0,0,-0.350793,0,0,-0.272788,0,0,0.0893181,0,0,0.356962,0,0,0.120806,0,0,-0.272788,0]);
Group42.children[1] = PositionInterpolator44;

Transform41.children = new MFNode();

Transform41.children[0] = Group42;

Transform Transform45 = createNode("Transform");
Transform45.DEF = "Switch_Norm-Freeze";
Transform45.center = new SFVec3f(new float[-0.00586528,0.932163,0.15668]);
Switch Switch46 = createNode("Switch");
Switch46.whichChoice = 0;
Transform Transform47 = createNode("Transform");
Transform47.DEF = "skull_Norm";
Transform47.center = new SFVec3f(new float[0.00000190735,0.935473,0.145708]);
Transform Transform48 = createNode("Transform");
Transform48.DEF = "skull";
Transform Transform49 = createNode("Transform");
Transform49.DEF = "skullShape";
Transform49.translation = new SFVec3f(new float[-19.5668,-10.6345,-47.5113]);
Transform49.center = new SFVec3f(new float[19.5329,11.5643,47.6742]);
Transform Transform50 = createNode("Transform");
Transform50.translation = new SFVec3f(new float[19.5757,11.0525,47.8027]);
Shape Shape51 = createNode("Shape");
Appearance Appearance52 = createNode("Appearance");
Material Material53 = createNode("Material");
Material53.ambientIntensity = 0.226102;
Material53.diffuseColor = new SFColor(new float[1,0,0.0146904]);
Material53.specularColor = new SFColor(new float[1,1,1]);
Material53.emissiveColor = new SFColor(new float[0.170213,0.00377935,0]);
Material53.shininess = 0.265957;
Appearance52.material = Material53;

ImageTexture ImageTexture54 = createNode("ImageTexture");
ImageTexture54.url = new MFString(new java.lang.String["fels1.png"]);
Appearance52.texture = ImageTexture54;

Shape51.appearance = Appearance52;

IndexedFaceSet IndexedFaceSet55 = createNode("IndexedFaceSet");
IndexedFaceSet55.solid = False;
IndexedFaceSet55.creaseAngle = 3.14159;
IndexedFaceSet55.texCoordIndex = new MFInt32(new int[46,37,49,-1,37,36,49,-1,46,49,51,-1,3,50,2,-1,47,38,4,-1,45,6,10,-1,42,45,10,-1,42,10,40,-1,10,33,40,-1,33,36,40,-1,11,12,22,-1,32,22,16,-1,32,11,22,-1,15,26,27,-1,15,23,26,-1,23,24,25,-1,23,12,24,-1,50,49,2,-1,49,34,2,-1,3,38,51,-1,38,46,51,-1,45,4,6,-1,45,47,4,-1,58,53,48,-1,58,48,35,-1,33,58,35,-1,7,62,60,-1,7,8,62,-1,8,63,62,-1,33,60,58,-1,33,7,60,-1,53,66,48,-1,53,64,66,-1,66,34,48,-1,66,0,34,-1,18,17,7,-1,18,32,16,-1,18,7,32,-1,17,19,21,-1,19,20,21,-1,65,1,0,-1,64,63,9,-1,63,8,9,-1,65,64,1,-1,64,9,1,-1,67,68,68,67,-1,69,67,67,69,-1,70,69,69,70,-1,71,70,70,71,-1,72,71,71,72,-1,73,72,72,73,-1,74,73,73,74,-1,75,74,74,75,-1,76,75,75,76,-1,75,76,77,-1,72,73,77,-1,74,75,77,-1,73,74,77,-1,77,76,76,77,-1,78,68,68,78,-1,79,77,77,79,-1,80,79,79,80,-1,81,80,80,81,-1,82,81,81,82,-1,83,81,81,83,-1,84,83,83,84,-1,85,84,84,85,-1,86,85,85,86,-1,87,86,86,87,-1,88,87,87,88,-1,89,88,88,89,-1,90,89,89,90,-1,91,90,90,91,-1,92,91,91,92,-1,93,92,92,93,-1,93,82,82,93,-1,94,93,82,-1,94,81,83,-1,94,87,88,-1,94,86,87,-1,94,88,89,-1,94,89,90,-1,94,90,91,-1,94,91,92,-1,94,92,93,-1,94,85,86,-1,94,84,85,-1,94,83,84,-1,78,68,95,96,82,-1,95,77,79,80,81,96,-1,97,72,77,-1,97,69,70,-1,97,70,71,-1,97,71,72,-1,28,29,15,-1,29,19,15,-1,67,69,68,-1,69,97,68,-1]);
IndexedFaceSet55.coordIndex = new MFInt32(new int[31,26,32,-1,26,25,32,-1,31,32,33,-1,3,33,2,-1,31,27,4,-1,30,5,9,-1,29,30,9,-1,29,9,28,-1,9,23,28,-1,23,25,28,-1,9,10,16,-1,23,16,11,-1,23,9,16,-1,11,19,20,-1,11,16,19,-1,16,17,18,-1,16,10,17,-1,33,32,2,-1,32,24,2,-1,3,27,33,-1,27,31,33,-1,30,4,5,-1,30,31,4,-1,35,34,32,-1,35,32,25,-1,23,35,25,-1,6,37,36,-1,6,7,37,-1,7,38,37,-1,23,36,35,-1,23,6,36,-1,34,40,32,-1,34,39,40,-1,40,24,32,-1,40,0,24,-1,13,12,6,-1,13,23,11,-1,13,6,23,-1,12,13,15,-1,13,14,15,-1,40,1,0,-1,39,38,8,-1,38,7,8,-1,40,39,1,-1,39,8,1,-1,41,42,43,44,-1,45,41,44,46,-1,47,45,46,48,-1,49,47,48,50,-1,51,49,50,52,-1,53,51,52,54,-1,55,53,54,56,-1,57,55,56,58,-1,59,57,58,60,-1,57,59,61,-1,51,53,61,-1,55,57,61,-1,53,55,61,-1,61,59,60,62,-1,42,63,64,43,-1,65,61,62,66,-1,67,65,66,68,-1,69,67,68,70,-1,63,71,72,64,-1,73,69,70,74,-1,75,73,74,76,-1,77,75,76,78,-1,79,77,78,80,-1,81,79,80,82,-1,83,81,82,84,-1,85,83,84,86,-1,87,85,86,88,-1,89,87,88,90,-1,91,89,90,92,-1,93,91,92,94,-1,71,93,94,72,-1,95,93,71,-1,95,69,73,-1,95,81,83,-1,95,79,81,-1,95,83,85,-1,95,85,87,-1,95,87,89,-1,95,89,91,-1,95,91,93,-1,95,77,79,-1,95,75,77,-1,95,73,75,-1,63,42,96,95,71,-1,96,61,65,67,69,95,-1,96,51,61,-1,96,45,47,-1,96,47,49,-1,96,49,51,-1,21,22,11,-1,22,13,11,-1,41,45,42,-1,45,96,42,-1]);
TextureCoordinate TextureCoordinate56 = createNode("TextureCoordinate");
TextureCoordinate56.point = new MFVec2f(new float[0.625471,0.962222,0.812735,0.885793,0.324709,0.959695,0.0710967,0.845171,0.0939856,0.772855,0.450894,0.566416,0.229922,0.694228,0.580161,0.706635,0.648257,0.692177,0.847468,0.758627,0.333465,0.697896,0.333465,0.697896,0.332838,0.684864,0.578735,0.652995,0.578735,0.652995,0.468042,0.667341,0.468042,0.667341,0.57936,0.676519,0.539984,0.673273,0.539984,0.673273,0.553002,0.642463,0.578629,0.649016,0.384786,0.678132,0.384786,0.678132,0.330957,0.645779,0.364728,0.638418,0.390491,0.604096,0.455984,0.595073,0.490472,0.61755,0.531303,0.628863,0.187534,0.897751,0.732009,0.91874,0.456813,0.702266,0.456813,0.702266,0.47509,0.960958,0.459566,0.741228,0.459566,0.741228,0.325125,0.777201,0.0794491,0.818783,0.186509,0.719339,0.392261,0.735833,0.0890324,0.788504,0.322949,0.747872,0.172776,0.802987,0.172776,0.802987,0.290762,0.759685,0.274509,0.785768,0.274509,0.785768,0.46813,0.862446,0.46813,0.862446,0.285602,0.854504,0.285602,0.854504,0.816662,0.871418,0.564237,0.779389,0.828471,0.828183,0.458534,0.72663,0.458534,0.72663,0.505281,0.749963,0.505281,0.749963,0.712198,0.713506,0.543162,0.743289,0.837969,0.793405,0.600042,0.752958,0.63832,0.773986,0.640311,0.793437,0.632891,0.87783,0.632891,0.87783,0.749593,0.37518,0.73121,0.404872,0.810657,0.373674,0.871039,0.400143,0.868778,0.417543,0.829902,0.430412,0.872155,0.441346,0.901368,0.458018,0.862443,0.477177,0.807803,0.472513,0.778839,0.443636,0.334768,0.394313,0.734937,0.444713,0.333214,0.431468,0.303359,0.431468,0.294629,0.391802,0.263284,0.456767,0.231493,0.458344,0.203366,0.446707,0.21326,0.431468,0.248715,0.414184,0.218516,0.406705,0.198501,0.385788,0.196661,0.364513,0.220942,0.351936,0.258443,0.356417,0.295422,0.373161,0.298994,0.411635,0.755024,0.424254,0.298994,0.411635,0.755024,0.424254]);
IndexedFaceSet55.texCoord = TextureCoordinate56;

Coordinate Coordinate57 = createNode("Coordinate");
Coordinate57.point = new MFVec3f(new float[0.110405,0.841788,-0.237501,0.21585,0.731281,-0.227798,-0.154585,0.835635,-0.233615,-0.265114,0.691961,-0.230242,-0.288793,0.509673,-0.245409,-0.235711,0.404156,-0.141072,0.0674488,0.358012,-0.0515823,0.127557,0.364806,-0.0921264,0.237717,0.491609,-0.257022,-0.181029,0.371436,-0.0695539,-0.151542,0.350471,-0.0543398,-0.0292647,0.31706,-0.000579407,0.0672483,0.329411,-0.0451259,0.0325478,0.317369,-0.0296691,0.0484802,0.26256,-0.046725,0.070443,0.278584,-0.0551211,-0.105209,0.337145,-0.0311992,-0.14777,0.277962,-0.067387,-0.117235,0.26376,-0.0532698,-0.0899637,0.19965,-0.051412,-0.0317591,0.181868,-0.0358799,-0.00398623,0.22976,-0.0481929,0.0311702,0.256889,-0.0477668,-0.0404813,0.382955,7.47313e-9,-0.021432,0.838709,-0.165185,-0.0377285,0.45647,7.6821e-9,-0.141338,0.539613,-0.052842,-0.273755,0.625443,-0.235776,-0.0980858,0.446029,-0.0296912,-0.14112,0.455766,-0.0511925,-0.185125,0.49778,-0.0682051,-0.183779,0.558297,-0.0742021,-0.0291645,0.685182,-1.25592e-9,-0.170736,0.690484,-0.0701952,0.0543608,0.528943,-0.0490673,0.00242253,0.473158,-0.0216999,0.0355712,0.460742,-0.0401538,0.0855176,0.479246,-0.067194,0.12043,0.519083,-0.0836102,0.121171,0.555795,-0.0851941,0.115402,0.714964,-0.0787549,-0.274161,0.397509,-0.0759497,-0.258126,0.344094,-0.0760598,-0.241332,0.368051,-0.110422,-0.257591,0.424726,-0.110422,-0.309989,0.396351,-0.0753589,-0.311879,0.418144,-0.109721,-0.332971,0.367755,-0.0760598,-0.34802,0.379475,-0.110422,-0.332164,0.341819,-0.0760598,-0.346997,0.346582,-0.110422,-0.315219,0.322627,-0.0760598,-0.322029,0.321948,-0.110422,-0.333408,0.306626,-0.075989,-0.349312,0.301925,-0.110351,-0.331727,0.290716,-0.0759741,-0.354056,0.279599,-0.110337,-0.316053,0.264959,-0.075947,-0.330444,0.245891,-0.110309,-0.277865,0.270282,-0.075656,-0.280637,0.252638,-0.110018,-0.259482,0.301926,-0.075656,-0.255699,0.295567,-0.110018,0.138441,0.355145,-0.0762625,0.140803,0.370382,-0.110625,-0.225975,0.305419,-0.0760598,-0.228147,0.291405,-0.110422,0.141887,0.314284,-0.0762625,0.139715,0.300269,-0.110625,0.166443,0.307338,-0.0765573,0.157688,0.298797,-0.11092,0.171443,0.364492,-0.0770387,0.164966,0.370646,-0.111401,0.179997,0.272009,-0.0762625,0.17879,0.253754,-0.110625,0.224875,0.243447,-0.0784859,0.229916,0.22437,-0.112848,0.257635,0.2816,-0.0762625,0.268387,0.266644,-0.110625,0.248452,0.322473,-0.0737841,0.257466,0.313261,-0.108147,0.223118,0.332189,-0.0762625,0.225383,0.329673,-0.110625,0.229813,0.338609,-0.0719985,0.238138,0.338651,-0.106361,0.247059,0.369658,-0.0719985,0.259625,0.377335,-0.106361,0.247404,0.383719,-0.0716961,0.260631,0.399299,-0.106059,0.237191,0.409732,-0.0732986,0.245806,0.430173,-0.107661,0.214892,0.411247,-0.0745307,0.216048,0.4303,-0.108893,0.190738,0.394235,-0.0770387,0.184366,0.407331,-0.111401,0.182767,0.336477,-0.059575,-0.254049,0.323621,-0.0710882]);
IndexedFaceSet55.coord = Coordinate57;

Shape51.geometry = IndexedFaceSet55;

Transform50.child = new undefined();

Transform50.child[0] = Shape51;

Transform49.children = new MFNode();

Transform49.children[0] = Transform50;

Transform48.children = new MFNode();

Transform48.children[0] = Transform49;

Transform47.children = new MFNode();

Transform47.children[0] = Transform48;

Transform Transform58 = createNode("Transform");
Transform58.DEF = "wings";
Transform58.translation = new SFVec3f(new float[0,0.272788,0]);
Transform Transform59 = createNode("Transform");
Transform59.DEF = "f1";
Transform59.translation = new SFVec3f(new float[-0.00000101328,-2.38419e-7,6.55651e-7]);
Transform59.scale = new SFVec3f(new float[1,1,0.999999]);
Transform59.scaleOrientation = new SFRotation(new float[0.115357,0.278496,-0.953485,0.819646]);
Transform59.center = new SFVec3f(new float[-0.1705,0.909488,0.0927509]);
Group Group60 = createNode("Group");
Group Group61 = createNode("Group");
Group61.DEF = "wings_1";
TimeSensor TimeSensor62 = createNode("TimeSensor");
TimeSensor62.DEF = "Time_2";
TimeSensor62.cycleInterval = 0.6;
TimeSensor62.loop = True;
TimeSensor62.startTime = 958599924.155;
TimeSensor62.stopTime = 1;
Group61.children = new MFNode();

Group61.children[0] = TimeSensor62;

Group60.children = new MFNode();

Group60.children[0] = Group61;

OrientationInterpolator OrientationInterpolator63 = createNode("OrientationInterpolator");
OrientationInterpolator63.DEF = "f1RotationInterp";
OrientationInterpolator63.key = new MFFloat(new float[0,0.166667,0.333333,0.5,0.666667,0.833333,1]);
OrientationInterpolator63.keyValue = new MFRotation(new float[0,0,1,0,0.747409,-0.196416,-0.634666,0.349266,0.747409,-0.196416,-0.634666,0.814955,0.747409,-0.196416,-0.634666,1.0478,0.747409,-0.196416,-0.634666,0.814955,0.747409,-0.196416,-0.634666,0.349266,0,0,1,0]);
Group60.children[1] = OrientationInterpolator63;

Transform59.children = new MFNode();

Transform59.children[0] = Group60;

Transform Transform64 = createNode("Transform");
Transform64.translation = new SFVec3f(new float[-0.393212,0.980911,-0.00724912]);
Transform64.rotation = new SFRotation(new float[0,0,1,1.27876]);
Transform64.scale = new SFVec3f(new float[3.06449,1.26549,0.999999]);
Transform64.center = new SFVec3f(new float[-0.0149836,0.0460329,0.1]);
Shape Shape65 = createNode("Shape");
Appearance Appearance66 = createNode("Appearance");
Material Material67 = createNode("Material");
Material67.DEF = "_1";
Material67.ambientIntensity = 0.664894;
Material67.diffuseColor = new SFColor(new float[0.8,0.373192,0.349306]);
Material67.emissiveColor = new SFColor(new float[0.308511,0.143917,0.134706]);
Appearance66.material = Material67;

ImageTexture ImageTexture68 = createNode("ImageTexture");
ImageTexture68.DEF = "_2";
ImageTexture68.url = new MFString(new java.lang.String["skullwing.png"]);
Appearance66.texture = ImageTexture68;

Shape65.appearance = Appearance66;

IndexedFaceSet IndexedFaceSet69 = createNode("IndexedFaceSet");
IndexedFaceSet69.creaseAngle = 0.5;
IndexedFaceSet69.colorIndex = new MFInt32(new int[1,1,1,-1,0,1,1,-1,0,1,1,-1,0,1,1,-1,0,1,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1]);
IndexedFaceSet69.texCoordIndex = new MFInt32(new int[12,9,8,-1,18,12,8,-1,18,8,7,-1,18,7,0,-1,18,0,1,-1,16,19,15,-1,1,5,15,-1,19,1,15,-1,19,18,1,-1,6,2,4,-1,2,3,4,-1]);
IndexedFaceSet69.coordIndex = new MFInt32(new int[8,7,6,-1,11,8,6,-1,11,6,5,-1,11,5,0,-1,11,0,1,-1,10,12,9,-1,1,4,9,-1,12,1,9,-1,12,11,1,-1,4,1,3,-1,1,2,3,-1]);
Color Color70 = createNode("Color");
Color70.color = new MFColor(new float[0.8,0.8,0.8,0.8,0,0.0209248]);
IndexedFaceSet69.color = Color70;

TextureCoordinate TextureCoordinate71 = createNode("TextureCoordinate");
TextureCoordinate71.point = new MFVec2f(new float[0.356681,1,0.63697,0.677329,0.63697,0.677329,0.960898,0.634832,0.988551,0.572329,0.940554,0.327839,0.940554,0.327839,0.303086,1,0.0689046,0.504903,0.0344523,0.432065,0.398346,1,0.398346,0,0.134045,0.313815,0.53041,1,0.53041,0,0.858475,0.262231,0.867119,0.208996,0.231292,0.239947,0.494418,0.0400775,0.675777,0.0423422]);
IndexedFaceSet69.texCoord = TextureCoordinate71;

Coordinate Coordinate72 = createNode("Coordinate");
Coordinate72.point = new MFVec3f(new float[0.02329,-0.0374336,0.1,0.00168681,0.103469,0.1,0.00390457,0.260481,0.1,-0.000750042,0.274923,0.1,-0.0217119,0.256082,0.1,0.0223446,-0.0632876,0.1,-0.0225201,-0.167523,0.1,-0.0291206,-0.182857,0.1,-0.0370926,-0.132728,0.1,-0.0285576,0.217645,0.1,-0.032785,0.222754,0.1,-0.0532571,0.0459435,0.1,-0.0498716,0.133391,0.1]);
IndexedFaceSet69.coord = Coordinate72;

Shape65.geometry = IndexedFaceSet69;

Transform64.child = new undefined();

Transform64.child[0] = Shape65;

Transform59.children[1] = Transform64;

Transform58.children = new MFNode();

Transform58.children[0] = Transform59;

Transform Transform73 = createNode("Transform");
Transform73.DEF = "f2";
Transform73.translation = new SFVec3f(new float[-7.15256e-7,0.00000107288,-2.98023e-7]);
Transform73.scale = new SFVec3f(new float[1,1,0.999999]);
Transform73.scaleOrientation = new SFRotation(new float[-0.11113,-0.942637,-0.314777,0.299228]);
Transform73.center = new SFVec3f(new float[0.190979,0.872976,0.092751]);
Group Group74 = createNode("Group");
Group Group75 = createNode("Group");
Group75.USE = "wings_1";
Group74.children = new MFNode();

Group74.children[0] = Group75;

OrientationInterpolator OrientationInterpolator76 = createNode("OrientationInterpolator");
OrientationInterpolator76.DEF = "f2RotationInterp";
OrientationInterpolator76.key = new MFFloat(new float[0,0.166667,0.333333,0.5,0.666667,0.833333,1]);
OrientationInterpolator76.keyValue = new MFRotation(new float[0,0,1,0,0.618463,0.109738,0.778114,0.283405,0.618463,0.109738,0.778114,0.661279,0.618463,0.109738,0.778114,0.850215,0.618463,0.109738,0.778114,0.661279,0.618463,0.109738,0.778114,0.283405,0,0,1,0]);
Group74.children[1] = OrientationInterpolator76;

Transform73.children = new MFNode();

Transform73.children[0] = Group74;

Transform Transform77 = createNode("Transform");
Transform77.translation = new SFVec3f(new float[0.413459,0.980829,-0.00724902]);
Transform77.rotation = new SFRotation(new float[0,0,1,0.358836]);
Transform77.scale = new SFVec3f(new float[3.06449,1.26549,1]);
Transform77.center = new SFVec3f(new float[0.00230039,0.00400775,0.1]);
Shape Shape78 = createNode("Shape");
Appearance Appearance79 = createNode("Appearance");
Material Material80 = createNode("Material");
Material80.USE = "_1";
Appearance79.material = Material80;

ImageTexture ImageTexture81 = createNode("ImageTexture");
ImageTexture81.USE = "_2";
Appearance79.texture = ImageTexture81;

Shape78.appearance = Appearance79;

IndexedFaceSet IndexedFaceSet82 = createNode("IndexedFaceSet");
IndexedFaceSet82.creaseAngle = 0.5;
IndexedFaceSet82.colorIndex = new MFInt32(new int[1,1,1,-1,1,1,0,-1,1,1,0,-1,1,1,0,-1,0,1,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1]);
IndexedFaceSet82.texCoordIndex = new MFInt32(new int[8,9,12,-1,8,12,18,-1,7,8,18,-1,0,7,18,-1,1,0,18,-1,15,19,16,-1,15,5,1,-1,15,1,19,-1,1,18,19,-1,4,2,6,-1,4,3,2,-1]);
IndexedFaceSet82.coordIndex = new MFInt32(new int[6,7,8,-1,6,8,11,-1,5,6,11,-1,0,5,11,-1,1,0,11,-1,9,12,10,-1,9,4,1,-1,9,1,12,-1,1,11,12,-1,3,1,4,-1,3,2,1,-1]);
Color Color83 = createNode("Color");
Color83.color = new MFColor(new float[0.8,0.8,0.8,0.8,0,0.0209248]);
IndexedFaceSet82.color = Color83;

TextureCoordinate TextureCoordinate84 = createNode("TextureCoordinate");
TextureCoordinate84.point = new MFVec2f(new float[0.356681,1,0.63697,0.677329,0.63697,0.677329,0.960898,0.634832,0.988551,0.572329,0.940554,0.327839,0.940554,0.327839,0.303086,1,0.0689046,0.504903,0.0344523,0.432065,0.398346,1,0.398346,0,0.134045,0.313815,0.53041,1,0.53041,0,0.858475,0.262231,0.867119,0.208996,0.231292,0.239947,0.494418,0.0400775,0.675777,0.0423422]);
IndexedFaceSet82.texCoord = TextureCoordinate84;

Coordinate Coordinate85 = createNode("Coordinate");
Coordinate85.point = new MFVec3f(new float[-0.0286638,0.1,0.1,0.0273939,0.0354657,0.1,0.0921796,0.0269664,0.1,0.0977103,0.0144657,0.1,0.0881108,-0.0344322,0.1,-0.0393828,0.1,0.1,-0.0862191,0.000980511,0.1,-0.0931095,-0.013587,0.1,-0.0731911,-0.037237,0.1,0.071695,-0.0475538,0.1,0.0734238,-0.0582008,0.1,-0.00111641,-0.0919845,0.1,0.0351553,-0.0915316,0.1]);
IndexedFaceSet82.coord = Coordinate85;

Shape78.geometry = IndexedFaceSet82;

Transform77.child = new undefined();

Transform77.child[0] = Shape78;

Transform73.children[1] = Transform77;

Transform58.children[1] = Transform73;

Transform47.children[1] = Transform58;

Transform Transform86 = createNode("Transform");
Transform86.DEF = "glow";
Transform Transform87 = createNode("Transform");
Transform87.DEF = "glowShape";
Transform87.translation = new SFVec3f(new float[0.00000190735,0.935473,0]);
Transform87.scale = new SFVec3f(new float[1.80083,1.80082,1.80087]);
Shape Shape88 = createNode("Shape");
Appearance Appearance89 = createNode("Appearance");
ImageTexture ImageTexture90 = createNode("ImageTexture");
ImageTexture90.url = new MFString(new java.lang.String["glow_red.png"]);
Appearance89.texture = ImageTexture90;

Shape88.appearance = Appearance89;

IndexedFaceSet IndexedFaceSet91 = createNode("IndexedFaceSet");
IndexedFaceSet91.solid = False;
IndexedFaceSet91.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet91.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate92 = createNode("TextureCoordinate");
TextureCoordinate92.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet91.texCoord = TextureCoordinate92;

Coordinate Coordinate93 = createNode("Coordinate");
Coordinate93.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet91.coord = Coordinate93;

Shape88.geometry = IndexedFaceSet91;

Transform87.child = new undefined();

Transform87.child[0] = Shape88;

Transform86.children = new MFNode();

Transform86.children[0] = Transform87;

Transform47.children[2] = Transform86;

Switch46.children = new MFNode();

Switch46.children[0] = Transform47;

Transform Transform94 = createNode("Transform");
Transform94.DEF = "skull_freeze";
Transform94.translation = new SFVec3f(new float[0,-0.759082,0.010972]);
Transform Transform95 = createNode("Transform");
Transform95.translation = new SFVec3f(new float[-0.00586526,1.69125,1.4808e-7]);
Transform95.scale = new SFVec3f(new float[1.91928,1.91928,1.91928]);
Shape Shape96 = createNode("Shape");
Appearance Appearance97 = createNode("Appearance");
ImageTexture ImageTexture98 = createNode("ImageTexture");
ImageTexture98.url = new MFString(new java.lang.String["glow_blue.png"]);
Appearance97.texture = ImageTexture98;

Shape96.appearance = Appearance97;

IndexedFaceSet IndexedFaceSet99 = createNode("IndexedFaceSet");
IndexedFaceSet99.solid = False;
IndexedFaceSet99.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet99.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate100 = createNode("TextureCoordinate");
TextureCoordinate100.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet99.texCoord = TextureCoordinate100;

Coordinate Coordinate101 = createNode("Coordinate");
Coordinate101.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet99.coord = Coordinate101;

Shape96.geometry = IndexedFaceSet99;

Transform95.child = new undefined();

Transform95.child[0] = Shape96;

Transform94.children = new MFNode();

Transform94.children[0] = Transform95;

Transform Transform102 = createNode("Transform");
Transform102.translation = new SFVec3f(new float[0,-0.0122347,0]);
Transform Transform103 = createNode("Transform");
Transform103.translation = new SFVec3f(new float[0.412476,2.02879,-0.007249]);
Transform103.rotation = new SFRotation(new float[0,0,1,0.358836]);
Transform103.scale = new SFVec3f(new float[3.06449,1.26549,1]);
Transform103.center = new SFVec3f(new float[0.00230039,0.00400775,0.1]);
Group Group104 = createNode("Group");
Group Group105 = createNode("Group");
Group105.DEF = "ice";
TimeSensor TimeSensor106 = createNode("TimeSensor");
TimeSensor106.DEF = "Time_3";
TimeSensor106.cycleInterval = 10;
TimeSensor106.stopTime = 1;
Group105.children = new MFNode();

Group105.children[0] = TimeSensor106;

Group104.children = new MFNode();

Group104.children[0] = Group105;

Group Group107 = createNode("Group");
ScalarInterpolator ScalarInterpolator108 = createNode("ScalarInterpolator");
ScalarInterpolator108.DEF = "_3";
ScalarInterpolator108.key = new MFFloat(new float[0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.839999,0.849999,0.859999,0.869999,0.879999,0.889999,0.899999,0.909999,0.919999,0.929999,0.939999,0.949999,0.959999,0.969999,0.979999,0.989999,1]);
ScalarInterpolator108.keyValue = new MFFloat(new float[1,0.98,0.96,0.94,0.92,0.9,0.88,0.86,0.84,0.82,0.8,0.78,0.76,0.74,0.72,0.7,0.68,0.66,0.64,0.62,0.6,0.58,0.56,0.54,0.52,0.5,0.48,0.46,0.44,0.42,0.4,0.38,0.36,0.34,0.32,0.3,0.28,0.26,0.24,0.22,0.2,0.18,0.16,0.14,0.12,0.1,0.0800003,0.0600003,0.0400004,0.0200004,3.72529e-7,-0.0199997,-0.0399997,-0.0599996,-0.0799996,-0.0999994,-0.12,-0.14,-0.159999,-0.179999,-0.199999,-0.219999,-0.239999,-0.259999,-0.279999,-0.299999,-0.319999,-0.339999,-0.359999,-0.379999,-0.399999,-0.419999,-0.439999,-0.459999,-0.479999,-0.499999,-0.519999,-0.539999,-0.559999,-0.579999,-0.599999,-0.619999,-0.639999,-0.659999,-0.679999,-0.699999,-0.719999,-0.739999,-0.759999,-0.779999,-0.799999,-0.819999,-0.839999,-0.859999,-0.879999,-0.899999,-0.919999,-0.939999,-0.959999,-0.979999,-1]);
Group107.children = new MFNode();

Group107.children[0] = ScalarInterpolator108;

ScalarInterpolator ScalarInterpolator109 = createNode("ScalarInterpolator");
ScalarInterpolator109.DEF = "_4";
ScalarInterpolator109.key = new MFFloat(new float[0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.839999,0.849999,0.859999,0.869999,0.879999,0.889999,0.899999,0.909999,0.919999,0.929999,0.939999,0.949999,0.959999,0.969999,0.979999,0.989999,1]);
ScalarInterpolator109.keyValue = new MFFloat(new float[1,0.98,0.96,0.94,0.92,0.9,0.88,0.86,0.84,0.82,0.8,0.78,0.76,0.74,0.72,0.7,0.68,0.66,0.64,0.62,0.6,0.58,0.56,0.54,0.52,0.5,0.48,0.46,0.44,0.42,0.4,0.38,0.36,0.34,0.32,0.3,0.28,0.26,0.24,0.22,0.2,0.18,0.16,0.14,0.12,0.1,0.0800003,0.0600003,0.0400004,0.0200004,3.72529e-7,-0.0199997,-0.0399997,-0.0599996,-0.0799996,-0.0999994,-0.12,-0.14,-0.159999,-0.179999,-0.199999,-0.219999,-0.239999,-0.259999,-0.279999,-0.299999,-0.319999,-0.339999,-0.359999,-0.379999,-0.399999,-0.419999,-0.439999,-0.459999,-0.479999,-0.499999,-0.519999,-0.539999,-0.559999,-0.579999,-0.599999,-0.619999,-0.639999,-0.659999,-0.679999,-0.699999,-0.719999,-0.739999,-0.759999,-0.779999,-0.799999,-0.819999,-0.839999,-0.859999,-0.879999,-0.899999,-0.919999,-0.939999,-0.959999,-0.979999,-1]);
Group107.children[1] = ScalarInterpolator109;

Script Script110 = createNode("Script");
Script110.DEF = "_5";
field field111 = createNode("field");
field111.name = "vec";
field111.accessType = "outputOnly";
field111.type = "SFVec2f";
Script110.field = new MFNode();

Script110.field[0] = field111;

field field112 = createNode("field");
field112.name = "xIn";
field112.accessType = "inputOnly";
field112.type = "SFFloat";
Script110.field[1] = field112;

field field113 = createNode("field");
field113.name = "yIn";
field113.accessType = "inputOnly";
field113.type = "SFFloat";
Script110.field[2] = field113;

field field114 = createNode("field");
field114.name = "xBuf";
field114.accessType = "initializeOnly";
field114.type = "SFFloat";
Script110.field[3] = field114;

field field115 = createNode("field");
field115.name = "yBuf";
field115.accessType = "initializeOnly";
field115.type = "SFFloat";
Script110.field[4] = field115;


Script110.setSourceCode(`vrmlscript: function xIn(value) { xBuf = value; vec[0] = xBuf; vec[1] = yBuf; } function yIn(value) { yBuf = value; vec[0] = xBuf; vec[1] = yBuf; }`)
Group107.children[2] = Script110;

Group104.children[1] = Group107;

Transform103.children = new MFNode();

Transform103.children[0] = Group104;

Shape Shape116 = createNode("Shape");
Appearance Appearance117 = createNode("Appearance");
Material Material118 = createNode("Material");
Material118.ambientIntensity = 0.664894;
Material118.diffuseColor = new SFColor(new float[0.8,0.373192,0.349306]);
Material118.emissiveColor = new SFColor(new float[0.308511,0.143917,0.134706]);
Appearance117.material = Material118;

ImageTexture ImageTexture119 = createNode("ImageTexture");
ImageTexture119.url = new MFString(new java.lang.String["icesplatm.png"]);
Appearance117.texture = ImageTexture119;

TextureTransform TextureTransform120 = createNode("TextureTransform");
TextureTransform120.DEF = "_6";
TextureTransform120.translation = new SFVec2f(new float[1,1]);
TextureTransform120.scale = new SFVec2f(new float[2,2]);
Appearance117.textureTransform = TextureTransform120;

Shape116.appearance = Appearance117;

IndexedFaceSet IndexedFaceSet121 = createNode("IndexedFaceSet");
IndexedFaceSet121.creaseAngle = 0.5;
IndexedFaceSet121.colorIndex = new MFInt32(new int[1,1,1,-1,1,1,0,-1,1,1,0,-1,1,1,0,-1,0,1,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,2,-1,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,2,2,-1,2,2,2,-1,2,2,2,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,3,3,3,-1,3,3,3,-1,4,4,4,-1,3,3,3,-1,3,4,4,-1,3,4,4,-1,3,4,4,-1,3,4,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1]);
IndexedFaceSet121.texCoordIndex = new MFInt32(new int[8,9,12,-1,8,12,18,-1,7,8,18,-1,0,7,18,-1,1,0,18,-1,15,19,16,-1,15,5,1,-1,15,1,19,-1,1,18,19,-1,4,2,6,-1,4,3,2,-1,20,21,22,-1,21,23,24,-1,23,25,24,-1,26,27,28,-1,29,27,30,-1,29,30,31,-1,32,29,33,-1,32,33,34,-1,35,36,32,-1,36,23,32,-1,37,26,28,-1,37,28,38,-1,20,37,38,-1,20,22,37,-1,39,40,41,-1,40,42,41,-1,43,39,41,-1,44,45,39,-1,44,46,45,-1,43,44,39,-1,47,48,46,-1,44,47,46,-1,49,50,51,-1,50,42,51,-1,51,52,53,-1,49,51,54,-1,55,51,53,-1,48,49,54,-1,56,55,53,-1,56,48,54,-1,57,58,59,-1,57,59,60,-1,40,57,60,-1,40,22,61,-1,40,61,57,-1,22,62,61,-1,22,63,62,-1,63,64,62,-1,64,63,65,-1,66,64,65,-1,66,65,67,-1,58,68,59,-1,58,66,68,-1,68,52,59,-1,69,66,67,-1,68,70,52,-1,69,67,70,-1,71,72,72,71,-1,71,73,72,-1,73,71,71,73,-1,74,73,73,74,-1,75,74,74,75,-1,76,75,75,76,-1,77,76,76,77,-1,78,77,77,78,-1,79,78,78,79,-1,80,79,79,80,-1,79,80,81,-1,78,79,81,-1,76,77,81,-1,77,78,81,-1,81,80,80,81,-1,82,72,72,82,-1,83,81,81,83,-1,84,83,83,84,-1,85,84,84,85,-1,86,85,85,86,-1,87,85,85,87,-1,88,87,87,88,-1,89,88,88,89,-1,90,89,89,90,-1,91,90,90,91,-1,92,91,91,92,-1,93,92,92,93,-1,94,93,93,94,-1,95,94,94,95,-1,96,95,95,96,-1,97,96,96,97,-1,97,86,86,97,-1,98,97,86,-1,98,96,97,-1,98,85,87,-1,98,87,88,-1,98,91,92,-1,98,90,91,-1,98,92,93,-1,98,89,90,-1,98,93,94,-1,98,94,95,-1,98,95,96,-1,98,88,89,-1,82,72,99,100,86,-1,73,101,72,-1,99,81,83,84,85,100,-1,101,76,81,-1,101,75,76,-1,101,73,74,-1,101,74,75,-1,102,103,104,-1,105,102,104,-1,106,107,108,-1,109,110,111,-1,112,106,108,-1,112,108,113,-1,112,113,114,-1,112,114,109,-1,115,116,111,-1,116,109,111,-1,116,112,109,-1]);
IndexedFaceSet121.coordIndex = new MFInt32(new int[6,7,8,-1,6,8,11,-1,5,6,11,-1,0,5,11,-1,1,0,11,-1,9,12,10,-1,9,4,1,-1,9,1,12,-1,1,11,12,-1,3,1,4,-1,3,2,1,-1,13,14,15,-1,14,13,16,-1,13,17,16,-1,18,19,20,-1,20,19,21,-1,20,21,22,-1,23,20,24,-1,23,24,25,-1,26,27,23,-1,27,13,23,-1,28,18,20,-1,28,20,23,-1,13,28,23,-1,13,15,28,-1,18,28,29,-1,28,30,29,-1,31,18,29,-1,32,33,18,-1,32,34,33,-1,31,32,18,-1,35,36,34,-1,32,35,34,-1,35,37,38,-1,37,30,38,-1,38,39,40,-1,35,38,41,-1,41,38,40,-1,36,35,41,-1,42,41,40,-1,42,36,41,-1,43,44,38,-1,43,38,30,-1,28,43,30,-1,28,15,45,-1,28,45,43,-1,15,46,45,-1,15,47,46,-1,47,48,46,-1,48,47,49,-1,50,48,49,-1,50,49,51,-1,44,52,38,-1,44,50,52,-1,52,39,38,-1,52,50,51,-1,52,53,39,-1,52,51,53,-1,54,55,56,57,-1,54,58,55,-1,58,54,57,59,-1,60,58,59,61,-1,62,60,61,63,-1,64,62,63,65,-1,66,64,65,67,-1,68,66,67,69,-1,70,68,69,71,-1,72,70,71,73,-1,70,72,74,-1,68,70,74,-1,64,66,74,-1,66,68,74,-1,74,72,73,75,-1,55,76,77,56,-1,78,74,75,79,-1,80,78,79,81,-1,82,80,81,83,-1,76,84,85,77,-1,86,82,83,87,-1,88,86,87,89,-1,90,88,89,91,-1,92,90,91,93,-1,94,92,93,95,-1,96,94,95,97,-1,98,96,97,99,-1,100,98,99,101,-1,102,100,101,103,-1,104,102,103,105,-1,106,104,105,107,-1,84,106,107,85,-1,108,106,84,-1,108,104,106,-1,108,82,86,-1,108,86,88,-1,108,94,96,-1,108,92,94,-1,108,96,98,-1,108,90,92,-1,108,98,100,-1,108,100,102,-1,108,102,104,-1,108,88,90,-1,76,55,109,108,84,-1,58,109,55,-1,109,74,78,80,82,108,-1,109,64,74,-1,109,62,64,-1,109,58,60,-1,109,60,62,-1,110,111,112,-1,113,110,112,-1,114,115,116,-1,110,113,117,-1,118,114,116,-1,118,116,119,-1,118,119,120,-1,118,120,110,-1,121,122,117,-1,122,110,117,-1,122,118,110,-1]);
Color Color122 = createNode("Color");
Color122.color = new MFColor(new float[0.8,0.8,0.8,0.8,0,0.0209248,0.8,0.8,0.8,0.8,0.8,0.8,0.8,0,0.0209248]);
IndexedFaceSet121.color = Color122;

TextureCoordinate TextureCoordinate123 = createNode("TextureCoordinate");
TextureCoordinate123.point = new MFVec2f(new float[0.189388,0.312108,0.338214,0.2114,0.338214,0.2114,0.510212,0.198136,0.524895,0.178628,0.49941,0.102321,0.49941,0.102321,0.160931,0.312108,0.0365866,0.157584,0.0344523,0.432065,0.398346,1,0.398346,0,0.0711742,0.0979442,0.53041,1,0.53041,0,0.455828,0.0818443,0.460418,0.0652294,0.231292,0.239947,0.262523,0.0125085,0.35882,0.0132153,0.539984,0.673273,0.57936,0.676519,0.580161,0.706635,0.539984,0.673273,0.578629,0.649016,0.553002,0.642463,0.333465,0.697896,0.332838,0.684864,0.384786,0.678132,0.384786,0.678132,0.330957,0.645779,0.364728,0.638418,0.468042,0.667341,0.390491,0.604096,0.455984,0.595073,0.490472,0.61755,0.531303,0.628863,0.456813,0.702266,0.468042,0.667341,0.333465,0.697896,0.456813,0.702266,0.392261,0.735833,0.459566,0.741228,0.322949,0.747872,0.290762,0.759685,0.229922,0.694228,0.0939856,0.772855,0.274509,0.785768,0.0794491,0.818783,0.274509,0.785768,0.325125,0.777201,0.46813,0.862446,0.47509,0.960958,0.324709,0.959695,0.285602,0.854504,0.285602,0.854504,0.0710967,0.845171,0.505281,0.749963,0.564237,0.779389,0.46813,0.862446,0.459566,0.741228,0.543162,0.743289,0.600042,0.752958,0.648257,0.692177,0.63832,0.773986,0.847468,0.758627,0.640311,0.793437,0.812735,0.885793,0.632891,0.87783,0.632891,0.87783,0.625471,0.962222,0.749593,0.37518,0.73121,0.404872,0.810657,0.373674,0.871039,0.400143,0.868778,0.417543,0.829902,0.430412,0.872155,0.441346,0.901368,0.458018,0.862443,0.477177,0.807803,0.472513,0.778839,0.443636,0.334768,0.394313,0.734937,0.444713,0.333214,0.431468,0.303359,0.431468,0.294629,0.391802,0.263284,0.456767,0.231493,0.458344,0.203366,0.446707,0.21326,0.431468,0.248715,0.414184,0.218516,0.406705,0.198501,0.385788,0.196661,0.364513,0.220942,0.351936,0.258443,0.356417,0.295422,0.373161,0.298994,0.411635,0.755024,0.424254,0.298994,0.411635,0.755024,0.424254,0.388869,0.297427,0.215427,0.286718,0.20062,0.270967,0.22632,0.209358,0.658151,0.205824,0.0344523,0.432065,0.693029,0.253977,0.388869,0.297427,0.22632,0.209358,0.270268,0.192825,0.465195,0.136844,0.567641,0.378738,0.538944,0.378738,0.265639,0.17941,0.36809,0.137415]);
IndexedFaceSet121.texCoord = TextureCoordinate123;

Coordinate Coordinate124 = createNode("Coordinate");
Coordinate124.point = new MFVec3f(new float[-0.0286638,0.1,0.1,0.0273939,0.0354657,0.1,0.0921796,0.0269664,0.1,0.0977103,0.0144657,0.1,0.0881108,-0.0344322,0.1,-0.0393828,0.1,0.1,-0.0862191,0.000980511,0.1,-0.0931095,-0.013587,0.1,-0.0731911,-0.037237,0.1,0.071695,-0.0475538,0.1,0.0734238,-0.0582008,0.1,-0.00111641,-0.0919845,0.1,0.0351553,-0.0915316,0.1,-0.172032,-0.281476,0.268996,-0.16005,-0.282196,0.253539,-0.156711,-0.26109,0.247083,-0.164899,-0.320688,0.243544,-0.173445,-0.326449,0.25194,-0.231091,-0.182203,0.229111,-0.224484,-0.205898,0.244325,-0.211855,-0.228615,0.267466,-0.231641,-0.260592,0.231278,-0.223939,-0.279574,0.245395,-0.190953,-0.264551,0.298086,-0.222954,-0.334575,0.247253,-0.207208,-0.363884,0.262785,-0.193234,-0.336157,0.250472,-0.179384,-0.325841,0.250898,-0.186829,-0.212684,0.298665,-0.197201,-0.150031,0.268974,-0.177563,-0.159056,0.298665,-0.209233,-0.130885,0.247473,-0.217864,-0.087588,0.23046,-0.244049,-0.14282,0.157593,-0.248175,-0.0500199,0.0532562,-0.210517,-0.0431865,0.224463,-0.230313,0.0314623,0.0628892,-0.199691,-0.0687881,0.245823,-0.148737,0.00778574,0.298665,-0.12878,0.119231,0.13348,-0.169815,0.153907,0.0650502,-0.191384,0.0509958,0.22847,-0.22005,0.0782793,0.0684232,-0.163383,-0.157851,0.276965,-0.141122,-0.130991,0.249598,-0.154678,-0.176237,0.258511,-0.137297,-0.176406,0.231471,-0.137567,-0.272744,0.206539,-0.122065,-0.156621,0.215055,-0.0893785,-0.209496,0.0416432,-0.117632,-0.129664,0.213471,-0.0685937,-0.0261004,0.0708672,-0.101154,-0.0102978,0.21991,-0.0881468,0.0849229,0.0611642,-0.256558,-0.137068,0.222715,-0.25778,-0.181038,0.222605,-0.249904,-0.167973,0.188243,-0.248376,-0.121529,0.188243,-0.267637,-0.127982,0.223306,-0.265718,-0.111333,0.188944,-0.277936,-0.142762,0.222605,-0.281191,-0.129914,0.188243,-0.280662,-0.162175,0.222605,-0.284648,-0.154535,0.188243,-0.277684,-0.181077,0.222605,-0.279843,-0.17969,0.188243,-0.285075,-0.187868,0.222676,-0.290473,-0.186933,0.188314,-0.286385,-0.200106,0.222691,-0.294481,-0.202135,0.188328,-0.284548,-0.223513,0.222718,-0.29113,-0.233627,0.188356,-0.27227,-0.230172,0.223009,-0.275139,-0.242457,0.188647,-0.263027,-0.211861,0.223009,-0.2626,-0.217615,0.188647,-0.135349,-0.282912,0.222403,-0.132881,-0.272294,0.18804,-0.252389,-0.218575,0.222605,-0.254659,-0.228341,0.188243,-0.138979,-0.314101,0.222403,-0.141249,-0.323867,0.18804,-0.132272,-0.326054,0.222108,-0.135926,-0.329944,0.187745,-0.124195,-0.285155,0.221626,-0.125468,-0.278804,0.187264,-0.13218,-0.355955,0.222403,-0.13464,-0.369126,0.18804,-0.121741,-0.389541,0.220179,-0.122387,-0.405055,0.185817,-0.107359,-0.370404,0.222403,-0.105788,-0.384453,0.18804,-0.105481,-0.337615,0.224881,-0.103783,-0.346932,0.190518,-0.112108,-0.323395,0.222403,-0.111704,-0.325886,0.18804,-0.109327,-0.320503,0.226667,-0.106779,-0.322783,0.192304,-0.1005,-0.302317,0.226667,-0.0957804,-0.300124,0.192304,-0.0987827,-0.292009,0.226969,-0.092956,-0.284153,0.192606,-0.0989221,-0.269929,0.225367,-0.0939475,-0.257196,0.191004,-0.105562,-0.26262,0.224134,-0.103025,-0.248844,0.189772,-0.114891,-0.268503,0.221626,-0.115337,-0.257046,0.187264,-0.123945,-0.309025,0.23909,-0.258881,-0.197317,0.227577,-0.257881,0.301021,0.0999999,-0.30812,0.400424,0.0999998,-0.315685,0.400207,0.0999998,-0.322196,0.348409,0.0999998,-0.20378,0.083205,0.0999999,-0.182481,0.068191,0.0999999,-0.18352,0.0901978,0.0999999,-0.313716,0.311932,0.0999998,-0.272272,0.160318,0.0999999,-0.190581,0.239783,0.0999999,-0.198502,0.257269,0.0999999,-0.317956,0.306884,0.0999998,-0.29895,0.219823,0.0999998]);
IndexedFaceSet121.coord = Coordinate124;

Shape116.geometry = IndexedFaceSet121;

Transform103.child[1] = Shape116;

Transform102.children = new MFNode();

Transform102.children[0] = Transform103;

Transform94.children[1] = Transform102;

Switch46.children[1] = Transform94;

Transform45.children = new MFNode();

Transform45.children[0] = Switch46;

Transform41.children[1] = Transform45;

Transform22.children[2] = Transform41;

Transform21.children = new MFNode();

Transform21.children[0] = Transform22;

Transform20.children = new MFNode();

Transform20.children[0] = Transform21;

Transform Transform125 = createNode("Transform");
Transform125.DEF = "vSens";
Transform125.translation = new SFVec3f(new float[0,1.0619,0.00946464]);
Transform125.scale = new SFVec3f(new float[4.39647,2.13168,1.064]);
VisibilitySensor VisibilitySensor126 = createNode("VisibilitySensor");
VisibilitySensor126.DEF = "_7";
VisibilitySensor126.size = new SFVec3f(new float[1,1,1]);
Transform125.children = new MFNode();

Transform125.children[0] = VisibilitySensor126;

Transform20.children[1] = Transform125;

LOD19.children = new MFNode();

LOD19.children[0] = Transform20;

Transform Transform127 = createNode("Transform");
Transform127.DEF = "OFF";
LOD19.children[1] = Transform127;

Transform18.children = new MFNode();

Transform18.children[0] = LOD19;

children[2] = Transform18;

TimeSensor TimeSensor128 = createNode("TimeSensor");
TimeSensor128.DEF = "enterWorldTimeSensor";
TimeSensor128.loop = True;
TimeSensor128.startTime = 1;
children[3] = TimeSensor128;

Script Script129 = createNode("Script");
Script129.DEF = "enterWorldScript";
field field130 = createNode("field");
field130.name = "startTime";
field130.accessType = "outputOnly";
field130.type = "SFTime";
Script129.field = new MFNode();

Script129.field[0] = field130;

field field131 = createNode("field");
field131.name = "firstTime";
field131.accessType = "outputOnly";
field131.type = "SFBool";
Script129.field[1] = field131;

field field132 = createNode("field");
field132.name = "triggerIn";
field132.accessType = "inputOnly";
field132.type = "SFTime";
Script129.field[2] = field132;


Script129.setSourceCode(`vrmlscript:function triggerIn(value, time) {\n"+
"\n"+
"         // fire off a single round                                     \n"+
"         startTime = value;                                             \n"+
"         firstTime = FALSE;                                             \n"+
"       }`)
children[4] = Script129;

ROUTE ROUTE133 = createNode("ROUTE");
ROUTE133.fromNode = "_7";
ROUTE133.fromField = "isActive";
ROUTE133.toNode = "Time";
ROUTE133.toField = "set_enabled";
children[5] = ROUTE133;

ROUTE ROUTE134 = createNode("ROUTE");
ROUTE134.fromNode = "_7";
ROUTE134.fromField = "enterTime";
ROUTE134.toNode = "Time";
ROUTE134.toField = "set_startTime";
children[6] = ROUTE134;

ROUTE ROUTE135 = createNode("ROUTE");
ROUTE135.fromNode = "Time";
ROUTE135.fromField = "fraction_changed";
ROUTE135.toNode = "skullHorizontalAnimTranslationInterp";
ROUTE135.toField = "set_fraction";
children[7] = ROUTE135;

ROUTE ROUTE136 = createNode("ROUTE");
ROUTE136.fromNode = "_7";
ROUTE136.fromField = "isActive";
ROUTE136.toNode = "Time_1";
ROUTE136.toField = "set_enabled";
children[8] = ROUTE136;

ROUTE ROUTE137 = createNode("ROUTE");
ROUTE137.fromNode = "_7";
ROUTE137.fromField = "enterTime";
ROUTE137.toNode = "Time_1";
ROUTE137.toField = "set_startTime";
children[9] = ROUTE137;

ROUTE ROUTE138 = createNode("ROUTE");
ROUTE138.fromNode = "Time_1";
ROUTE138.fromField = "fraction_changed";
ROUTE138.toNode = "shadowVerticalAnimScaleFactorInterp";
ROUTE138.toField = "set_fraction";
children[10] = ROUTE138;

ROUTE ROUTE139 = createNode("ROUTE");
ROUTE139.fromNode = "shadowVerticalAnimScaleFactorInterp";
ROUTE139.fromField = "value_changed";
ROUTE139.toNode = "shadowVerticalAnim";
ROUTE139.toField = "set_scale";
children[11] = ROUTE139;

ROUTE ROUTE140 = createNode("ROUTE");
ROUTE140.fromNode = "Time_1";
ROUTE140.fromField = "fraction_changed";
ROUTE140.toNode = "skullVerticalAnimTranslationInterp";
ROUTE140.toField = "set_fraction";
children[12] = ROUTE140;

ROUTE ROUTE141 = createNode("ROUTE");
ROUTE141.fromNode = "_7";
ROUTE141.fromField = "isActive";
ROUTE141.toNode = "Time_2";
ROUTE141.toField = "set_enabled";
children[13] = ROUTE141;

ROUTE ROUTE142 = createNode("ROUTE");
ROUTE142.fromNode = "_7";
ROUTE142.fromField = "enterTime";
ROUTE142.toNode = "Time_2";
ROUTE142.toField = "set_startTime";
children[14] = ROUTE142;

ROUTE ROUTE143 = createNode("ROUTE");
ROUTE143.fromNode = "Time_2";
ROUTE143.fromField = "fraction_changed";
ROUTE143.toNode = "f1RotationInterp";
ROUTE143.toField = "set_fraction";
children[15] = ROUTE143;

ROUTE ROUTE144 = createNode("ROUTE");
ROUTE144.fromNode = "f1RotationInterp";
ROUTE144.fromField = "value_changed";
ROUTE144.toNode = "f1";
ROUTE144.toField = "set_rotation";
children[16] = ROUTE144;

ROUTE ROUTE145 = createNode("ROUTE");
ROUTE145.fromNode = "Time_2";
ROUTE145.fromField = "fraction_changed";
ROUTE145.toNode = "f2RotationInterp";
ROUTE145.toField = "set_fraction";
children[17] = ROUTE145;

ROUTE ROUTE146 = createNode("ROUTE");
ROUTE146.fromNode = "f2RotationInterp";
ROUTE146.fromField = "value_changed";
ROUTE146.toNode = "f2";
ROUTE146.toField = "set_rotation";
children[18] = ROUTE146;

ROUTE ROUTE147 = createNode("ROUTE");
ROUTE147.fromNode = "enterWorldScript";
ROUTE147.fromField = "startTime";
ROUTE147.toNode = "Time_3";
ROUTE147.toField = "set_startTime";
children[19] = ROUTE147;

ROUTE ROUTE148 = createNode("ROUTE");
ROUTE148.fromNode = "Time_3";
ROUTE148.fromField = "fraction_changed";
ROUTE148.toNode = "_3";
ROUTE148.toField = "set_fraction";
children[20] = ROUTE148;

ROUTE ROUTE149 = createNode("ROUTE");
ROUTE149.fromNode = "Time_3";
ROUTE149.fromField = "fraction_changed";
ROUTE149.toNode = "_4";
ROUTE149.toField = "set_fraction";
children[21] = ROUTE149;

ROUTE ROUTE150 = createNode("ROUTE");
ROUTE150.fromNode = "_3";
ROUTE150.fromField = "value_changed";
ROUTE150.toNode = "_5";
ROUTE150.toField = "xIn";
children[22] = ROUTE150;

ROUTE ROUTE151 = createNode("ROUTE");
ROUTE151.fromNode = "_4";
ROUTE151.fromField = "value_changed";
ROUTE151.toNode = "_5";
ROUTE151.toField = "yIn";
children[23] = ROUTE151;

ROUTE ROUTE152 = createNode("ROUTE");
ROUTE152.fromNode = "_5";
ROUTE152.fromField = "vec";
ROUTE152.toNode = "_6";
ROUTE152.toField = "set_translation";
children[24] = ROUTE152;

ROUTE ROUTE153 = createNode("ROUTE");
ROUTE153.fromNode = "skullVerticalAnimTranslationInterp";
ROUTE153.fromField = "value_changed";
ROUTE153.toNode = "skullVerticalAnim";
ROUTE153.toField = "set_translation";
children[25] = ROUTE153;

ROUTE ROUTE154 = createNode("ROUTE");
ROUTE154.fromNode = "skullHorizontalAnimTranslationInterp";
ROUTE154.fromField = "value_changed";
ROUTE154.toNode = "skullHorizontalAnim";
ROUTE154.toField = "set_translation";
children[26] = ROUTE154;

ROUTE ROUTE155 = createNode("ROUTE");
ROUTE155.fromNode = "enterWorldScript";
ROUTE155.fromField = "firstTime";
ROUTE155.toNode = "enterWorldTimeSensor";
ROUTE155.toField = "set_enabled";
children[27] = ROUTE155;

ROUTE ROUTE156 = createNode("ROUTE");
ROUTE156.fromNode = "enterWorldTimeSensor";
ROUTE156.fromField = "time";
ROUTE156.toNode = "enterWorldScript";
ROUTE156.toField = "triggerIn";
children[28] = ROUTE156;

}
