let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
//ExternProtoDeclare statements for Geospatial nodes are no longer needed for backwards compatibility for VRML 97, since X3dToVrml97.xsl now handles that task.
//This scene shows example Geospatial node relationships in a scene graph.
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "newGeospatialScene.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let WorldInfo3 = browser.currentScene.createNode("WorldInfo");
WorldInfo3.info = new MFString(new java.lang.String["WorldInfo contains generic information or metadata about a VRML scene, not about the georeferenced information."]);
browser.currentScene.children[1] = WorldInfo3;

let GeoMetadata4 = browser.currentScene.createNode("GeoMetadata");
GeoMetadata4.summary = new MFString(new java.lang.String["title","example title","description","example description"]);
GeoMetadata4.url = new MFString(new java.lang.String["http://example"]);
browser.currentScene.children[2] = GeoMetadata4;

let GeoViewpoint5 = browser.currentScene.createNode("GeoViewpoint");
let GeoOrigin6 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin6.DEF = "DefaultGeoOrigin";
GeoViewpoint5.geoOrigin = GeoOrigin6;

browser.currentScene.children[3] = GeoViewpoint5;

//GeoInline replaced by Inline
let Inline7 = browser.currentScene.createNode("Inline");
browser.currentScene.children[4] = Inline7;

let GeoLocation8 = browser.currentScene.createNode("GeoLocation");
let GeoOrigin9 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin9.USE = "DefaultGeoOrigin";
GeoLocation8.geoOrigin = GeoOrigin9;

browser.currentScene.children[5] = GeoLocation8;

let GeoLOD10 = browser.currentScene.createNode("GeoLOD");
GeoLOD10.center = new SFVec3d(new double[10,10,1]);
GeoLOD10.child1Url = new MFString(new java.lang.String["http://b"]);
GeoLOD10.child2Url = new MFString(new java.lang.String["http://c"]);
GeoLOD10.child3Url = new MFString(new java.lang.String["http://d"]);
GeoLOD10.child4Url = new MFString(new java.lang.String["http://e"]);
GeoLOD10.range = 1000;
GeoLOD10.rootUrl = new MFString(new java.lang.String["http://a"]);
let GeoOrigin11 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin11.USE = "DefaultGeoOrigin";
GeoLOD10.geoOrigin = GeoOrigin11;

//Nodes loaded via the 'rootUrl' field appear under 'rootNode' for current GeoLOD level.
//Defining both 'rootUrl' and 'rootNode' is erroneous, use either one or the other.
//rootNode nodes are the default geometry to be shown at this level of detail
let WorldInfo12 = browser.currentScene.createNode("WorldInfo");
GeoLOD10.rootNode = new MFNode();

GeoLOD10.rootNode[0] = WorldInfo12;

let Shape13 = browser.currentScene.createNode("Shape");
GeoLOD10.rootNode[1] = Shape13;

browser.currentScene.children[6] = GeoLOD10;

let Shape14 = browser.currentScene.createNode("Shape");
let GeoElevationGrid15 = browser.currentScene.createNode("GeoElevationGrid");
GeoElevationGrid15.height = new MFDouble(new double[0,0]);
let GeoOrigin16 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin16.USE = "DefaultGeoOrigin";
GeoElevationGrid15.geoOrigin = GeoOrigin16;

let Color17 = browser.currentScene.createNode("Color");
GeoElevationGrid15.color = Color17;

let Normal18 = browser.currentScene.createNode("Normal");
GeoElevationGrid15.normal = Normal18;

let TextureCoordinate19 = browser.currentScene.createNode("TextureCoordinate");
GeoElevationGrid15.texCoord = TextureCoordinate19;

Shape14.geometry = GeoElevationGrid15;

browser.currentScene.children[7] = Shape14;

let Shape20 = browser.currentScene.createNode("Shape");
let IndexedFaceSet21 = browser.currentScene.createNode("IndexedFaceSet");
let GeoCoordinate22 = browser.currentScene.createNode("GeoCoordinate");
let GeoOrigin23 = browser.currentScene.createNode("GeoOrigin");
GeoOrigin23.USE = "DefaultGeoOrigin";
GeoCoordinate22.geoOrigin = GeoOrigin23;

IndexedFaceSet21.coord = GeoCoordinate22;

Shape20.geometry = IndexedFaceSet21;

browser.currentScene.children[8] = Shape20;

