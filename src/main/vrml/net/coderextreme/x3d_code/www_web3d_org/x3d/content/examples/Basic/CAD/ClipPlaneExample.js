let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
//TODO Schematron error for orientation='0 0 0 0'
let Viewpoint2 = browser.currentScene.createNode("Viewpoint");
Viewpoint2.description = "ClipPlanes front view";
Viewpoint2.position = new SFVec3f(new float[0,1,10]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "ClipPlanes oblique view";
Viewpoint3.orientation = new SFRotation(new float[1,0,0,-0.851966]);
Viewpoint3.position = new SFVec3f(new float[0,8,7]);
browser.currentScene.children[1] = Viewpoint3;

let Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.description = "ClipPlanes overhead view";
Viewpoint4.orientation = new SFRotation(new float[1,0,0,-1.570796]);
Viewpoint4.position = new SFVec3f(new float[0,12,0]);
browser.currentScene.children[2] = Viewpoint4;

let Viewpoint5 = browser.currentScene.createNode("Viewpoint");
Viewpoint5.description = "ClipPlanes side view";
Viewpoint5.orientation = new SFRotation(new float[-0.03326,0.99889,0.03326,1.571904]);
Viewpoint5.position = new SFVec3f(new float[15,1,0]);
browser.currentScene.children[3] = Viewpoint5;

let Background6 = browser.currentScene.createNode("Background");
Background6.DEF = "WhiteBackground";
Background6.groundColor = new MFColor(new float[1,1,1]);
Background6.skyColor = new MFColor(new float[1,1,1]);
browser.currentScene.children[4] = Background6;

let Group7 = browser.currentScene.createNode("Group");
Group7.DEF = "ClipPlaneGroup";
//ClipPlane nodes affect peers and children
let ClipPlane8 = browser.currentScene.createNode("ClipPlane");
ClipPlane8.DEF = "ClipPlaneHorizontal";
Group7.children = new MFNode();

Group7.children[0] = ClipPlane8;

let ClipPlane9 = browser.currentScene.createNode("ClipPlane");
ClipPlane9.DEF = "ClipPlaneVertical";
ClipPlane9.plane = new SFVec4f(new float[0,0,-1,0]);
Group7.children[1] = ClipPlane9;

//Non-standard scripting animation test for ClipPlane <PythonScript DEF=\"PS\" url=\"OpacityMapStyle.py\" /> <ROUTE fromNode='timer_pos0' fromField='value_changed' toNode='PS' toField='planeEquation'/> <ROUTE fromNode='PS' fromField='planeEquation' toNode='CP' toField='plane'/>
//<TimeSensor DEF='timer' cycleInterval='13.000' loop='true' startTime='0.000'/> <ROUTE fromNode='timer' fromField='fraction_changed' toNode='timer_pos0' toField='set_fraction'/> <ROUTE fromNode='timer_pos0' fromField='value_changed' toNode='move' toField='set_translation'/>
let Group10 = browser.currentScene.createNode("Group");
Group10.DEF = "PrimitiveShapes";
let WorldInfo11 = browser.currentScene.createNode("WorldInfo");
WorldInfo11.info = new MFString(new java.lang.String["This Web3D Content was created with Vivaty Studio, a Web3D authoring tool","www.mediamachines.com"]);
WorldInfo11.title = "primitives";
Group10.children = new MFNode();

Group10.children[0] = WorldInfo11;

let Transform12 = browser.currentScene.createNode("Transform");
Transform12.DEF = "dad_Box1";
Transform12.translation = new SFVec3f(new float[-3,0,0]);
let Shape13 = browser.currentScene.createNode("Shape");
Shape13.DEF = "Box1";
let Appearance14 = browser.currentScene.createNode("Appearance");
let Material15 = browser.currentScene.createNode("Material");
Material15.DEF = "Red";
Material15.ambientIntensity = 0.2;
Material15.diffuseColor = new SFColor(new float[1,0,0]);
Material15.shininess = 0.2;
Appearance14.material = Material15;

Shape13.appearance = Appearance14;

let Box16 = browser.currentScene.createNode("Box");
Box16.DEF = "GeoBox1";
Box16.solid = False;
Shape13.geometry = Box16;

Transform12.children = new MFNode();

Transform12.children[0] = Shape13;

Group10.children[1] = Transform12;

let Transform17 = browser.currentScene.createNode("Transform");
Transform17.DEF = "dad_Cylinder1";
Transform17.translation = new SFVec3f(new float[-1,0,0]);
let Shape18 = browser.currentScene.createNode("Shape");
Shape18.DEF = "Cylinder1";
let Appearance19 = browser.currentScene.createNode("Appearance");
let Material20 = browser.currentScene.createNode("Material");
Material20.DEF = "Green";
Material20.ambientIntensity = 0.2;
Material20.diffuseColor = new SFColor(new float[0,1,0]);
Material20.shininess = 0.2;
Appearance19.material = Material20;

Shape18.appearance = Appearance19;

let Cylinder21 = browser.currentScene.createNode("Cylinder");
Cylinder21.DEF = "GeoCylinder1";
Cylinder21.solid = False;
Shape18.geometry = Cylinder21;

Transform17.children = new MFNode();

Transform17.children[0] = Shape18;

Group10.children[2] = Transform17;

let Transform22 = browser.currentScene.createNode("Transform");
Transform22.DEF = "dad_Cone1";
Transform22.translation = new SFVec3f(new float[1,0,0]);
let Shape23 = browser.currentScene.createNode("Shape");
Shape23.DEF = "Cone1";
let Appearance24 = browser.currentScene.createNode("Appearance");
let Material25 = browser.currentScene.createNode("Material");
Material25.DEF = "Blue";
Material25.ambientIntensity = 0.2;
Material25.diffuseColor = new SFColor(new float[0,0,1]);
Material25.shininess = 0.2;
Appearance24.material = Material25;

Shape23.appearance = Appearance24;

let Cone26 = browser.currentScene.createNode("Cone");
Cone26.DEF = "GeoCone1";
Cone26.solid = False;
Shape23.geometry = Cone26;

Transform22.children = new MFNode();

Transform22.children[0] = Shape23;

Group10.children[3] = Transform22;

let Transform27 = browser.currentScene.createNode("Transform");
Transform27.DEF = "dad_Sphere1";
Transform27.translation = new SFVec3f(new float[3,0,0]);
let Shape28 = browser.currentScene.createNode("Shape");
Shape28.DEF = "Sphere1";
let Appearance29 = browser.currentScene.createNode("Appearance");
let Material30 = browser.currentScene.createNode("Material");
Material30.DEF = "Shiny_Yellow";
Material30.ambientIntensity = 0.2;
Material30.diffuseColor = new SFColor(new float[1,1,0]);
Material30.shininess = 0.1;
Material30.specularColor = new SFColor(new float[1,1,0]);
Appearance29.material = Material30;

Shape28.appearance = Appearance29;

let Sphere31 = browser.currentScene.createNode("Sphere");
Sphere31.DEF = "GeoSphere1";
Sphere31.solid = False;
Shape28.geometry = Sphere31;

Transform27.children = new MFNode();

Transform27.children[0] = Shape28;

Group10.children[4] = Transform27;

let Transform32 = browser.currentScene.createNode("Transform");
Transform32.DEF = "dad_Light1";
Transform32.translation = new SFVec3f(new float[0,5,0]);
let PointLight33 = browser.currentScene.createNode("PointLight");
PointLight33.DEF = "Light1";
Transform32.children = new MFNode();

Transform32.children[0] = PointLight33;

Group10.children[5] = Transform32;

let Transform34 = browser.currentScene.createNode("Transform");
Transform34.DEF = "dad_Background1";
Transform34.translation = new SFVec3f(new float[-0.73213,4.14112,0]);
let Background35 = browser.currentScene.createNode("Background");
Background35.DEF = "Background1";
Background35.groundColor = new MFColor(new float[1,1,1]);
Background35.skyColor = new MFColor(new float[1,1,1]);
Transform34.children = new MFNode();

Transform34.children[0] = Background35;

Group10.children[6] = Transform34;

Group7.children[2] = Group10;

let Transform36 = browser.currentScene.createNode("Transform");
Transform36.translation = new SFVec3f(new float[0,3,0]);
let Group37 = browser.currentScene.createNode("Group");
Group37.USE = "PrimitiveShapes";
Transform36.children = new MFNode();

Transform36.children[0] = Group37;

Group7.children[3] = Transform36;

browser.currentScene.children[5] = Group7;

//Keep boundary lines outside of scope of the two clipping planes so that they can illustrate boundaries without being cut off
let Group38 = browser.currentScene.createNode("Group");
Group38.DEF = "BoundaryLines";
let Transform39 = browser.currentScene.createNode("Transform");
Transform39.DEF = "move";
Transform39.translation = new SFVec3f(new float[0,0.00001,0]);
let Shape40 = browser.currentScene.createNode("Shape");
Shape40.DEF = "PlaneOutlineHorizontal";
let Appearance41 = browser.currentScene.createNode("Appearance");
Appearance41.DEF = "BoundaryLineAppearance";
let Material42 = browser.currentScene.createNode("Material");
Material42.ambientIntensity = 0.2;
Material42.emissiveColor = new SFColor(new float[0.1,0.1,0.1]);
Appearance41.material = Material42;

Shape40.appearance = Appearance41;

let IndexedLineSet43 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet43.coordIndex = new MFInt32(new int[0,1,2,3,0,-1]);
let Coordinate44 = browser.currentScene.createNode("Coordinate");
Coordinate44.point = new MFVec3f(new float[5,0,-2,5,0,2,-5,0,2,-5,0,-2]);
IndexedLineSet43.coord = Coordinate44;

Shape40.geometry = IndexedLineSet43;

Transform39.children = new MFNode();

Transform39.children[0] = Shape40;

Group38.children = new MFNode();

Group38.children[0] = Transform39;

let PositionInterpolator45 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator45.DEF = "timer_pos0";
PositionInterpolator45.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator45.keyValue = new MFVec3f(new float[0,2,0,0,-2,0,0,2,0]);
Group38.children[1] = PositionInterpolator45;

let Transform46 = browser.currentScene.createNode("Transform");
Transform46.rotation = new SFRotation(new float[1,0,0,-1.578]);
let Transform47 = browser.currentScene.createNode("Transform");
Transform47.DEF = "move2";
Transform47.translation = new SFVec3f(new float[0,0.00001,0]);
let Shape48 = browser.currentScene.createNode("Shape");
Shape48.DEF = "PlaneOutlineVertical";
let Appearance49 = browser.currentScene.createNode("Appearance");
Appearance49.USE = "BoundaryLineAppearance";
Shape48.appearance = Appearance49;

//also includes center line
let IndexedLineSet50 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet50.coordIndex = new MFInt32(new int[0,1,2,3,0,-1,4,5,-1]);
let Coordinate51 = browser.currentScene.createNode("Coordinate");
Coordinate51.point = new MFVec3f(new float[5,0,-2,5,0,4,-5,0,4,-5,0,-2,5,0,0,-5,0,0]);
IndexedLineSet50.coord = Coordinate51;

Shape48.geometry = IndexedLineSet50;

Transform47.children = new MFNode();

Transform47.children[0] = Shape48;

Transform46.children = new MFNode();

Transform46.children[0] = Transform47;

Group38.children[2] = Transform46;

browser.currentScene.children[6] = Group38;

