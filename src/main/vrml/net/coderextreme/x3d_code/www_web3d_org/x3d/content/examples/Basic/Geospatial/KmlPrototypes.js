let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let ProtoDeclare2 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="PlaceMark" appinfo="A Placemark with a Point has an icon associated with it that marks a point on the earth in the 3D viewer." documentation="http://code.google.com/apis/kml/documentation/kml_tags_21.html#placemark" ><ProtoInterface><field name="id" accessType="initializeOnly" type="SFString"></field>
<field name="name" accessType="inputOutput" appinfo="Label for the object" type="MFString"></field>
<field name="description" accessType="inputOutput" appinfo="User-supplied text that appears in the description balloon" type="SFString"></field>
<field name="coordinates" accessType="initializeOnly" appinfo="longitude latitude and altitude" type="SFVec3d" value="0 0 0"></field>
<field name="address" accessType="inputOutput" appinfo="A string value representing an unstructured address written as a standard street city state address and/or as a postal code." type="MFString"></field>
<field name="visibility" accessType="initializeOnly" appinfo=". Specifies whether the feature is drawn in the 3D viewer when it is initially loaded" type="SFBool" value="true"></field>
<field name="set_visibility" accessType="inputOnly" type="SFBool"></field>
<field name="visibility_changed" accessType="outputOnly" type="SFBool"></field>
<field name="open" accessType="initializeOnly" appinfo="Specifies whether a Folder appears closed or open when first loaded" type="SFBool" value="true"></field>
<field name="snippet" accessType="initializeOnly" appinfo="A short description of the feature" type="MFString"></field>
<field name="set_snippet" accessType="inputOnly" type="MFString"></field>
<field name="snippet_changed" accessType="outputOnly" type="MFString"></field>
<field name="geometry" accessType="inputOutput" appinfo="Shape or (KML) Point LineString LinearRing Polygon MultiGeometry Model" type="MFNode"><!--default NULL node--></field>
<field name="diffuseColor" accessType="inputOutput" appinfo="Default color for PlaceMark" type="SFColor" value="0.2 0.8 0.4"></field>
<field name="metadata" accessType="inputOutput" type="SFNode"><!--default NULL node--></field>
<!--TODO: is the 'open' parameter appropriate for X3D? Maintain value for round-trip conversions.--><!--TODO: need LookAt Prototype--><!--TODO: AddressDetails, phoneNumber, TimePrimitive, styleUrl, StyleSelector, Region--><!--TODO: Geometry prototypes for KML Point,LineString,LinearRing, Polygon,MultiGeometry,Model--></ProtoInterface>
<ProtoBody><!--TODO: is Switch needed to choose between balloon and provided geometry, or are both shown?--><Switch DEF="SwitchVisible" whichChoice="0"><Anchor><IS><connect nodeField="url" protoField="address"></connect>
<connect nodeField="description" protoField="description"></connect>
</IS>
<GeoLocation><GeoOrigin><IS><connect nodeField="geoCoords" protoField="coordinates"></connect>
</IS>
</GeoOrigin>
</GeoLocation>
<Shape DEF="PlaceMarkBalloon"><Extrusion containerField="geometry" creaseAngle="3.14" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" scale="0.01 0.01 0.03 0.03 0.06 0.06 0.09 0.09 0.14 0.14 0.23 0.23 0.25 0.25 0.23 0.23 0.18 0.18 0.1 0.1 0.03 0.03" spine="0 0 0 0 0.12 0 0 0.28 0 0 0.4 0 0 0.55 0 0 0.65 0 0 0.75 0 0 0.85 0 0 0.92 0 0 0.98 0 0 1 0"></Extrusion>
<Appearance><Material DEF="PlaceMarkMaterial"><IS><connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
</IS>
</Material>
</Appearance>
</Shape>
<Transform DEF="PlaceMarkName" translation="0 1.2 0"><Shape><Text containerField="geometry"><IS><connect nodeField="string" protoField="name"></connect>
</IS>
<FontStyle justify="&quot;MIDDLE&quot; &quot;MIDDLE&quot;" size="0.2"></FontStyle>
</Text>
<Appearance><Material USE="PlaceMarkMaterial"></Material>
</Appearance>
</Shape>
</Transform>
<Transform DEF="SnippetTranslation" translation="0 2.4 0"><Shape><Text containerField="geometry"><IS><connect nodeField="string" protoField="snippet"></connect>
</IS>
<FontStyle justify="&quot;MIDDLE&quot; &quot;MIDDLE&quot;" size="0.2"></FontStyle>
</Text>
<Appearance><Material USE="PlaceMarkMaterial"></Material>
</Appearance>
</Shape>
</Transform>
<Group DEF="GeometryGroup"><IS><connect nodeField="children" protoField="geometry"></connect>
</IS>
</Group>
</Anchor>
</Switch>
<!--remaining nodes in ProtoBody are not rendered--><WorldInfo><IS><connect nodeField="title" protoField="id"></connect>
</IS>
</WorldInfo>
<Group DEF="MetadataHolderPlaceMark"><IS><connect nodeField="metadata" protoField="metadata"></connect>
</IS>
</Group>
<Script DEF="BehaviorScript"><field name="visibility" accessType="initializeOnly" type="SFBool"></field>
<field name="set_visibility" accessType="inputOnly" type="SFBool"></field>
<field name="visibility_changed" accessType="outputOnly" type="SFBool"></field>
<field name="visibilityChoice" accessType="outputOnly" type="SFInt32"></field>
<field name="open" accessType="initializeOnly" type="SFBool"></field>
<field name="snippet" accessType="initializeOnly" type="MFString"></field>
<field name="set_snippet" accessType="inputOnly" type="MFString"></field>
<field name="snippet_changed" accessType="outputOnly" type="MFString"></field>
<field name="snippetOffset" accessType="outputOnly" type="SFVec3f"></field>
<IS><connect nodeField="visibility" protoField="visibility"></connect>
<connect nodeField="set_visibility" protoField="set_visibility"></connect>
<connect nodeField="visibility_changed" protoField="visibility_changed"></connect>
<connect nodeField="open" protoField="open"></connect>
<connect nodeField="snippet" protoField="snippet"></connect>
<connect nodeField="set_snippet" protoField="set_snippet"></connect>
<connect nodeField="snippet_changed" protoField="snippet_changed"></connect>
</IS>
<![CDATA[ecmascript:

function initialize ()
{
	Browser.print ('visibility=' + visibility);
	if (visibility == false) visibilityChoice = -1;

	// TODO:  if (open == false) open_changed = -1;

	adjustSnippetOffset ();
}

function set_visibility (value, timestamp)
{
	visibility = value;         // remember change
	visibility_changed = value; // send eventOut
	if (visibility == false) visibilityChoice = -1;
	else                     visibilityChoice =  0;
}

function set_snippet (value, timestamp)
{
	snippet = value;         // remember change
	snippet_changed = value; // send eventOut
	adjustSnippetOffset ();
}

function adjustSnippetOffset () // TODO
{
//	snippetOffset = new SFVec3f (0.0, (snippet.length * 0.3), 0.0);
//	Browser.print ('snippet.length=' + snippet.length + ', snippetOffset=' + snippetOffset);
}

function set_open (value, timestamp) // TODO
{

}]]></Script>
<ROUTE fromField="visibilityChoice" fromNode="BehaviorScript" toField="whichChoice" toNode="SwitchVisible"></ROUTE>
<ROUTE fromField="snippetOffset" fromNode="BehaviorScript" toField="set_translation" toNode="SnippetTranslation"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare2.name = "PlaceMark";
ProtoDeclare2.appinfo = "A Placemark with a Point has an icon associated with it that marks a point on the earth in the 3D viewer.";
ProtoDeclare2.documentation = "http://code.google.com/apis/kml/documentation/kml_tags_21.html#placemark";
let ProtoInterface3 = browser.currentScene.createNode("ProtoInterface");
let field4 = browser.currentScene.createNode("field");
field4.name = "id";
field4.accessType = "initializeOnly";
field4.type = "SFString";
ProtoInterface3.field = new MFNode();

ProtoInterface3.field[0] = field4;

let field5 = browser.currentScene.createNode("field");
field5.name = "name";
field5.accessType = "inputOutput";
field5.appinfo = "Label for the object";
field5.type = "MFString";
ProtoInterface3.field[1] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "description";
field6.accessType = "inputOutput";
field6.appinfo = "User-supplied text that appears in the description balloon";
field6.type = "SFString";
ProtoInterface3.field[2] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "coordinates";
field7.accessType = "initializeOnly";
field7.appinfo = "longitude latitude and altitude";
field7.type = "SFVec3d";
field7.value = "0 0 0";
ProtoInterface3.field[3] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "address";
field8.accessType = "inputOutput";
field8.appinfo = "A string value representing an unstructured address written as a standard street city state address and/or as a postal code.";
field8.type = "MFString";
ProtoInterface3.field[4] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "visibility";
field9.accessType = "initializeOnly";
field9.appinfo = ". Specifies whether the feature is drawn in the 3D viewer when it is initially loaded";
field9.type = "SFBool";
field9.value = "true";
ProtoInterface3.field[5] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "set_visibility";
field10.accessType = "inputOnly";
field10.type = "SFBool";
ProtoInterface3.field[6] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "visibility_changed";
field11.accessType = "outputOnly";
field11.type = "SFBool";
ProtoInterface3.field[7] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "open";
field12.accessType = "initializeOnly";
field12.appinfo = "Specifies whether a Folder appears closed or open when first loaded";
field12.type = "SFBool";
field12.value = "true";
ProtoInterface3.field[8] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "snippet";
field13.accessType = "initializeOnly";
field13.appinfo = "A short description of the feature";
field13.type = "MFString";
ProtoInterface3.field[9] = field13;

let field14 = browser.currentScene.createNode("field");
field14.name = "set_snippet";
field14.accessType = "inputOnly";
field14.type = "MFString";
ProtoInterface3.field[10] = field14;

let field15 = browser.currentScene.createNode("field");
field15.name = "snippet_changed";
field15.accessType = "outputOnly";
field15.type = "MFString";
ProtoInterface3.field[11] = field15;

let field16 = browser.currentScene.createNode("field");
field16.name = "geometry";
field16.accessType = "inputOutput";
field16.appinfo = "Shape or (KML) Point LineString LinearRing Polygon MultiGeometry Model";
field16.type = "MFNode";
//default NULL node
ProtoInterface3.field[12] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "diffuseColor";
field17.accessType = "inputOutput";
field17.appinfo = "Default color for PlaceMark";
field17.type = "SFColor";
field17.value = "0.2 0.8 0.4";
ProtoInterface3.field[13] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "metadata";
field18.accessType = "inputOutput";
field18.type = "SFNode";
//default NULL node
ProtoInterface3.field[14] = field18;

//TODO: is the 'open' parameter appropriate for X3D? Maintain value for round-trip conversions.
//TODO: need LookAt Prototype
//TODO: AddressDetails, phoneNumber, TimePrimitive, styleUrl, StyleSelector, Region
//TODO: Geometry prototypes for KML Point,LineString,LinearRing, Polygon,MultiGeometry,Model
ProtoDeclare2.protoInterface = ProtoInterface3;

let ProtoBody19 = browser.currentScene.createNode("ProtoBody");
//TODO: is Switch needed to choose between balloon and provided geometry, or are both shown?
let Switch20 = browser.currentScene.createNode("Switch");
Switch20.DEF = "SwitchVisible";
Switch20.whichChoice = 0;
let Anchor21 = browser.currentScene.createNode("Anchor");
let IS22 = browser.currentScene.createNode("IS");
let connect23 = browser.currentScene.createNode("connect");
connect23.nodeField = "url";
connect23.protoField = "address";
IS22.connect = new MFNode();

IS22.connect[0] = connect23;

let connect24 = browser.currentScene.createNode("connect");
connect24.nodeField = "description";
connect24.protoField = "description";
IS22.connect[1] = connect24;

Anchor21.iS = IS22;

let GeoLocation25 = browser.currentScene.createNode("GeoLocation");
let GeoOrigin26 = browser.currentScene.createNode("GeoOrigin");
let IS27 = browser.currentScene.createNode("IS");
let connect28 = browser.currentScene.createNode("connect");
connect28.nodeField = "geoCoords";
connect28.protoField = "coordinates";
IS27.connect = new MFNode();

IS27.connect[0] = connect28;

GeoOrigin26.iS = IS27;

GeoLocation25.geoOrigin = GeoOrigin26;

Anchor21.children = new MFNode();

Anchor21.children[0] = GeoLocation25;

let Shape29 = browser.currentScene.createNode("Shape");
Shape29.DEF = "PlaceMarkBalloon";
let Extrusion30 = browser.currentScene.createNode("Extrusion");
Extrusion30.creaseAngle = 3.14;
Extrusion30.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion30.scale = new MFVec2f(new float[0.01,0.01,0.03,0.03,0.06,0.06,0.09,0.09,0.14,0.14,0.23,0.23,0.25,0.25,0.23,0.23,0.18,0.18,0.1,0.1,0.03,0.03]);
Extrusion30.spine = new MFVec3f(new float[0,0,0,0,0.12,0,0,0.28,0,0,0.4,0,0,0.55,0,0,0.65,0,0,0.75,0,0,0.85,0,0,0.92,0,0,0.98,0,0,1,0]);
Shape29.geometry = Extrusion30;

let Appearance31 = browser.currentScene.createNode("Appearance");
let Material32 = browser.currentScene.createNode("Material");
Material32.DEF = "PlaceMarkMaterial";
let IS33 = browser.currentScene.createNode("IS");
let connect34 = browser.currentScene.createNode("connect");
connect34.nodeField = "diffuseColor";
connect34.protoField = "diffuseColor";
IS33.connect = new MFNode();

IS33.connect[0] = connect34;

Material32.iS = IS33;

Appearance31.material = Material32;

Shape29.appearance = Appearance31;

Anchor21.children[1] = Shape29;

let Transform35 = browser.currentScene.createNode("Transform");
Transform35.DEF = "PlaceMarkName";
Transform35.translation = new SFVec3f(new float[0,1.2,0]);
let Shape36 = browser.currentScene.createNode("Shape");
let Text37 = browser.currentScene.createNode("Text");
let IS38 = browser.currentScene.createNode("IS");
let connect39 = browser.currentScene.createNode("connect");
connect39.nodeField = "string";
connect39.protoField = "name";
IS38.connect = new MFNode();

IS38.connect[0] = connect39;

Text37.iS = IS38;

let FontStyle40 = browser.currentScene.createNode("FontStyle");
FontStyle40.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle40.size = 0.2;
Text37.fontStyle = FontStyle40;

Shape36.geometry = Text37;

let Appearance41 = browser.currentScene.createNode("Appearance");
let Material42 = browser.currentScene.createNode("Material");
Material42.USE = "PlaceMarkMaterial";
Appearance41.material = Material42;

Shape36.appearance = Appearance41;

Transform35.children = new MFNode();

Transform35.children[0] = Shape36;

Anchor21.children[2] = Transform35;

let Transform43 = browser.currentScene.createNode("Transform");
Transform43.DEF = "SnippetTranslation";
Transform43.translation = new SFVec3f(new float[0,2.4,0]);
let Shape44 = browser.currentScene.createNode("Shape");
let Text45 = browser.currentScene.createNode("Text");
let IS46 = browser.currentScene.createNode("IS");
let connect47 = browser.currentScene.createNode("connect");
connect47.nodeField = "string";
connect47.protoField = "snippet";
IS46.connect = new MFNode();

IS46.connect[0] = connect47;

Text45.iS = IS46;

let FontStyle48 = browser.currentScene.createNode("FontStyle");
FontStyle48.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle48.size = 0.2;
Text45.fontStyle = FontStyle48;

Shape44.geometry = Text45;

let Appearance49 = browser.currentScene.createNode("Appearance");
let Material50 = browser.currentScene.createNode("Material");
Material50.USE = "PlaceMarkMaterial";
Appearance49.material = Material50;

Shape44.appearance = Appearance49;

Transform43.children = new MFNode();

Transform43.children[0] = Shape44;

Anchor21.children[3] = Transform43;

let Group51 = browser.currentScene.createNode("Group");
Group51.DEF = "GeometryGroup";
let IS52 = browser.currentScene.createNode("IS");
let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "children";
connect53.protoField = "geometry";
IS52.connect = new MFNode();

IS52.connect[0] = connect53;

Group51.iS = IS52;

Anchor21.children[4] = Group51;

Switch20.children = new MFNode();

Switch20.children[0] = Anchor21;

ProtoBody19.children = new MFNode();

ProtoBody19.children[0] = Switch20;

//remaining nodes in ProtoBody are not rendered
let WorldInfo54 = browser.currentScene.createNode("WorldInfo");
let IS55 = browser.currentScene.createNode("IS");
let connect56 = browser.currentScene.createNode("connect");
connect56.nodeField = "title";
connect56.protoField = "id";
IS55.connect = new MFNode();

IS55.connect[0] = connect56;

WorldInfo54.iS = IS55;

ProtoBody19.children[1] = WorldInfo54;

let Group57 = browser.currentScene.createNode("Group");
Group57.DEF = "MetadataHolderPlaceMark";
let IS58 = browser.currentScene.createNode("IS");
let connect59 = browser.currentScene.createNode("connect");
connect59.nodeField = "metadata";
connect59.protoField = "metadata";
IS58.connect = new MFNode();

IS58.connect[0] = connect59;

Group57.iS = IS58;

ProtoBody19.children[2] = Group57;

let Script60 = browser.currentScene.createNode("Script");
Script60.DEF = "BehaviorScript";
let field61 = browser.currentScene.createNode("field");
field61.name = "visibility";
field61.accessType = "initializeOnly";
field61.type = "SFBool";
Script60.field = new MFNode();

Script60.field[0] = field61;

let field62 = browser.currentScene.createNode("field");
field62.name = "set_visibility";
field62.accessType = "inputOnly";
field62.type = "SFBool";
Script60.field[1] = field62;

let field63 = browser.currentScene.createNode("field");
field63.name = "visibility_changed";
field63.accessType = "outputOnly";
field63.type = "SFBool";
Script60.field[2] = field63;

let field64 = browser.currentScene.createNode("field");
field64.name = "visibilityChoice";
field64.accessType = "outputOnly";
field64.type = "SFInt32";
Script60.field[3] = field64;

let field65 = browser.currentScene.createNode("field");
field65.name = "open";
field65.accessType = "initializeOnly";
field65.type = "SFBool";
Script60.field[4] = field65;

let field66 = browser.currentScene.createNode("field");
field66.name = "snippet";
field66.accessType = "initializeOnly";
field66.type = "MFString";
Script60.field[5] = field66;

let field67 = browser.currentScene.createNode("field");
field67.name = "set_snippet";
field67.accessType = "inputOnly";
field67.type = "MFString";
Script60.field[6] = field67;

let field68 = browser.currentScene.createNode("field");
field68.name = "snippet_changed";
field68.accessType = "outputOnly";
field68.type = "MFString";
Script60.field[7] = field68;

let field69 = browser.currentScene.createNode("field");
field69.name = "snippetOffset";
field69.accessType = "outputOnly";
field69.type = "SFVec3f";
Script60.field[8] = field69;

let IS70 = browser.currentScene.createNode("IS");
let connect71 = browser.currentScene.createNode("connect");
connect71.nodeField = "visibility";
connect71.protoField = "visibility";
IS70.connect = new MFNode();

IS70.connect[0] = connect71;

let connect72 = browser.currentScene.createNode("connect");
connect72.nodeField = "set_visibility";
connect72.protoField = "set_visibility";
IS70.connect[1] = connect72;

let connect73 = browser.currentScene.createNode("connect");
connect73.nodeField = "visibility_changed";
connect73.protoField = "visibility_changed";
IS70.connect[2] = connect73;

let connect74 = browser.currentScene.createNode("connect");
connect74.nodeField = "open";
connect74.protoField = "open";
IS70.connect[3] = connect74;

let connect75 = browser.currentScene.createNode("connect");
connect75.nodeField = "snippet";
connect75.protoField = "snippet";
IS70.connect[4] = connect75;

let connect76 = browser.currentScene.createNode("connect");
connect76.nodeField = "set_snippet";
connect76.protoField = "set_snippet";
IS70.connect[5] = connect76;

let connect77 = browser.currentScene.createNode("connect");
connect77.nodeField = "snippet_changed";
connect77.protoField = "snippet_changed";
IS70.connect[6] = connect77;

Script60.iS = IS70;


Script60.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	Browser.print ('visibility=' + visibility);\n"+
"	if (visibility == false) visibilityChoice = -1;\n"+
"\n"+
"	// TODO:  if (open == false) open_changed = -1;\n"+
"\n"+
"	adjustSnippetOffset ();\n"+
"}\n"+
"\n"+
"function set_visibility (value, timestamp)\n"+
"{\n"+
"	visibility = value;         // remember change\n"+
"	visibility_changed = value; // send eventOut\n"+
"	if (visibility == false) visibilityChoice = -1;\n"+
"	else                     visibilityChoice =  0;\n"+
"}\n"+
"\n"+
"function set_snippet (value, timestamp)\n"+
"{\n"+
"	snippet = value;         // remember change\n"+
"	snippet_changed = value; // send eventOut\n"+
"	adjustSnippetOffset ();\n"+
"}\n"+
"\n"+
"function adjustSnippetOffset () // TODO\n"+
"{\n"+
"//	snippetOffset = new SFVec3f (0.0, (snippet.length * 0.3), 0.0);\n"+
"//	Browser.print ('snippet.length=' + snippet.length + ', snippetOffset=' + snippetOffset);\n"+
"}\n"+
"\n"+
"function set_open (value, timestamp) // TODO\n"+
"{\n"+
"\n"+
"}`)
ProtoBody19.children[3] = Script60;

let ROUTE78 = browser.currentScene.createNode("ROUTE");
ROUTE78.fromField = "visibilityChoice";
ROUTE78.fromNode = "BehaviorScript";
ROUTE78.toField = "whichChoice";
ROUTE78.toNode = "SwitchVisible";
ProtoBody19.children[4] = ROUTE78;

let ROUTE79 = browser.currentScene.createNode("ROUTE");
ROUTE79.fromField = "snippetOffset";
ROUTE79.fromNode = "BehaviorScript";
ROUTE79.toField = "set_translation";
ROUTE79.toNode = "SnippetTranslation";
ProtoBody19.children[5] = ROUTE79;

ProtoDeclare2.protoBody = ProtoBody19;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare2;

let ProtoDeclare80 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Point" appinfo="A geographic location defined by longitude latitude and (required) altitude." documentation="http://code.google.com/apis/kml/documentation/kml_tags_21.html#point" ><ProtoInterface><field name="id" accessType="initializeOnly" type="SFString"></field>
<field name="altitudeMode" accessType="initializeOnly" appinfo="allowed values: clampToGround relativeToGround absolute" type="SFString" value="clampToGround"></field>
<field name="coordinates" accessType="initializeOnly" type="SFVec3d" value="0 0 0"></field>
<field name="set_coordinates" accessType="inputOnly" type="SFVec3d"></field>
<field name="coordinates_changed" accessType="outputOnly" type="SFVec3d"></field>
<field name="extrude" accessType="initializeOnly" type="SFBool" value="false"></field>
<field name="tessellate" accessType="initializeOnly" type="SFBool" value="false"></field>
<field name="metadata" accessType="inputOutput" type="SFNode"><!--default NULL node--></field>
</ProtoInterface>
<ProtoBody><Script DEF="PointScript"><field name="altitudeMode" accessType="initializeOnly" type="SFString"></field>
<field name="coordinates" accessType="initializeOnly" type="SFVec3d"></field>
<field name="set_coordinates" accessType="inputOnly" type="SFVec3d"></field>
<field name="coordinates_changed" accessType="outputOnly" type="SFVec3d"></field>
<field name="extrude" accessType="initializeOnly" type="SFBool"></field>
<field name="tessellate" accessType="initializeOnly" type="SFBool"></field>
<IS><connect nodeField="altitudeMode" protoField="altitudeMode"></connect>
<connect nodeField="coordinates" protoField="coordinates"></connect>
<connect nodeField="set_coordinates" protoField="set_coordinates"></connect>
<connect nodeField="coordinates_changed" protoField="coordinates_changed"></connect>
<connect nodeField="extrude" protoField="extrude"></connect>
<connect nodeField="tessellate" protoField="tessellate"></connect>
</IS>
<![CDATA[ecmascript:

function initialize ()
{
	if  (altitudeMode == '') altitudeMode = 'clampToGround';
	if ((altitudeMode != 'clampToGround') &&
	    (altitudeMode != 'relativeToGround') &&
	    (altitudeMode != 'absolute'))
	{
		warningString = '[Point';
		if (id != '') warningString += ' ' + id;
		warningString += '] illegal value ';
		warningString += 'altitudeMode=' + altitudeMode;
		Browser.print (warningString);
	}
}

function set_coordinates (value)
{
	coordinates = value;
	coordinates_changed = value;
}

// TODO: how to handle extrude, tessellate]]></Script>
<WorldInfo><IS><connect nodeField="title" protoField="id"></connect>
</IS>
</WorldInfo>
<Group DEF="MetadataHolderPoint"><IS><connect nodeField="metadata" protoField="metadata"></connect>
</IS>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare80.name = "Point";
ProtoDeclare80.appinfo = "A geographic location defined by longitude latitude and (required) altitude.";
ProtoDeclare80.documentation = "http://code.google.com/apis/kml/documentation/kml_tags_21.html#point";
let ProtoInterface81 = browser.currentScene.createNode("ProtoInterface");
let field82 = browser.currentScene.createNode("field");
field82.name = "id";
field82.accessType = "initializeOnly";
field82.type = "SFString";
ProtoInterface81.field = new MFNode();

ProtoInterface81.field[0] = field82;

let field83 = browser.currentScene.createNode("field");
field83.name = "altitudeMode";
field83.accessType = "initializeOnly";
field83.appinfo = "allowed values: clampToGround relativeToGround absolute";
field83.type = "SFString";
field83.value = "clampToGround";
ProtoInterface81.field[1] = field83;

let field84 = browser.currentScene.createNode("field");
field84.name = "coordinates";
field84.accessType = "initializeOnly";
field84.type = "SFVec3d";
field84.value = "0 0 0";
ProtoInterface81.field[2] = field84;

let field85 = browser.currentScene.createNode("field");
field85.name = "set_coordinates";
field85.accessType = "inputOnly";
field85.type = "SFVec3d";
ProtoInterface81.field[3] = field85;

let field86 = browser.currentScene.createNode("field");
field86.name = "coordinates_changed";
field86.accessType = "outputOnly";
field86.type = "SFVec3d";
ProtoInterface81.field[4] = field86;

let field87 = browser.currentScene.createNode("field");
field87.name = "extrude";
field87.accessType = "initializeOnly";
field87.type = "SFBool";
field87.value = "false";
ProtoInterface81.field[5] = field87;

let field88 = browser.currentScene.createNode("field");
field88.name = "tessellate";
field88.accessType = "initializeOnly";
field88.type = "SFBool";
field88.value = "false";
ProtoInterface81.field[6] = field88;

let field89 = browser.currentScene.createNode("field");
field89.name = "metadata";
field89.accessType = "inputOutput";
field89.type = "SFNode";
//default NULL node
ProtoInterface81.field[7] = field89;

ProtoDeclare80.protoInterface = ProtoInterface81;

let ProtoBody90 = browser.currentScene.createNode("ProtoBody");
let Script91 = browser.currentScene.createNode("Script");
Script91.DEF = "PointScript";
let field92 = browser.currentScene.createNode("field");
field92.name = "altitudeMode";
field92.accessType = "initializeOnly";
field92.type = "SFString";
Script91.field = new MFNode();

Script91.field[0] = field92;

let field93 = browser.currentScene.createNode("field");
field93.name = "coordinates";
field93.accessType = "initializeOnly";
field93.type = "SFVec3d";
Script91.field[1] = field93;

let field94 = browser.currentScene.createNode("field");
field94.name = "set_coordinates";
field94.accessType = "inputOnly";
field94.type = "SFVec3d";
Script91.field[2] = field94;

let field95 = browser.currentScene.createNode("field");
field95.name = "coordinates_changed";
field95.accessType = "outputOnly";
field95.type = "SFVec3d";
Script91.field[3] = field95;

let field96 = browser.currentScene.createNode("field");
field96.name = "extrude";
field96.accessType = "initializeOnly";
field96.type = "SFBool";
Script91.field[4] = field96;

let field97 = browser.currentScene.createNode("field");
field97.name = "tessellate";
field97.accessType = "initializeOnly";
field97.type = "SFBool";
Script91.field[5] = field97;

let IS98 = browser.currentScene.createNode("IS");
let connect99 = browser.currentScene.createNode("connect");
connect99.nodeField = "altitudeMode";
connect99.protoField = "altitudeMode";
IS98.connect = new MFNode();

IS98.connect[0] = connect99;

let connect100 = browser.currentScene.createNode("connect");
connect100.nodeField = "coordinates";
connect100.protoField = "coordinates";
IS98.connect[1] = connect100;

let connect101 = browser.currentScene.createNode("connect");
connect101.nodeField = "set_coordinates";
connect101.protoField = "set_coordinates";
IS98.connect[2] = connect101;

let connect102 = browser.currentScene.createNode("connect");
connect102.nodeField = "coordinates_changed";
connect102.protoField = "coordinates_changed";
IS98.connect[3] = connect102;

let connect103 = browser.currentScene.createNode("connect");
connect103.nodeField = "extrude";
connect103.protoField = "extrude";
IS98.connect[4] = connect103;

let connect104 = browser.currentScene.createNode("connect");
connect104.nodeField = "tessellate";
connect104.protoField = "tessellate";
IS98.connect[5] = connect104;

Script91.iS = IS98;


Script91.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	if  (altitudeMode == '') altitudeMode = 'clampToGround';\n"+
"	if ((altitudeMode != 'clampToGround') &&\n"+
"	    (altitudeMode != 'relativeToGround') &&\n"+
"	    (altitudeMode != 'absolute'))\n"+
"	{\n"+
"		warningString = '[Point';\n"+
"		if (id != '') warningString += ' ' + id;\n"+
"		warningString += '] illegal value ';\n"+
"		warningString += 'altitudeMode=' + altitudeMode;\n"+
"		Browser.print (warningString);\n"+
"	}\n"+
"}\n"+
"\n"+
"function set_coordinates (value)\n"+
"{\n"+
"	coordinates = value;\n"+
"	coordinates_changed = value;\n"+
"}\n"+
"\n"+
"// TODO: how to handle extrude, tessellate`)
ProtoBody90.children = new MFNode();

ProtoBody90.children[0] = Script91;

let WorldInfo105 = browser.currentScene.createNode("WorldInfo");
let IS106 = browser.currentScene.createNode("IS");
let connect107 = browser.currentScene.createNode("connect");
connect107.nodeField = "title";
connect107.protoField = "id";
IS106.connect = new MFNode();

IS106.connect[0] = connect107;

WorldInfo105.iS = IS106;

ProtoBody90.children[1] = WorldInfo105;

let Group108 = browser.currentScene.createNode("Group");
Group108.DEF = "MetadataHolderPoint";
let IS109 = browser.currentScene.createNode("IS");
let connect110 = browser.currentScene.createNode("connect");
connect110.nodeField = "metadata";
connect110.protoField = "metadata";
IS109.connect = new MFNode();

IS109.connect[0] = connect110;

Group108.iS = IS109;

ProtoBody90.children[2] = Group108;

ProtoDeclare80.protoBody = ProtoBody90;

browser.currentScene.children[1] = ProtoDeclare80;

//========== Examples ==========
let Viewpoint111 = browser.currentScene.createNode("Viewpoint");
Viewpoint111.description = "Placemark example";
Viewpoint111.position = new SFVec3f(new float[0,0,4]);
browser.currentScene.children[2] = Viewpoint111;

//<?xml version=\"1.0\" encoding=\"UTF-8\"?> <kml xmlns=\"http://earth.google.com/kml/2.1\"> <Placemark> <name>Simple placemark</name> <description>Attached to the ground. Intelligently places itself at the height of the underlying terrain.</description> <Point> <coordinates>-122.0822035425683,37.42228990140251,0</coordinates> </Point> </Placemark> </kml>
let ProtoInstance112 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance112.name = "PlaceMark";
let fieldValue113 = browser.currentScene.createNode("fieldValue");
fieldValue113.name = "name";
fieldValue113.value = "\"Simple placemark\"";
ProtoInstance112.fieldValue = new MFNode();

ProtoInstance112.fieldValue[0] = fieldValue113;

let fieldValue114 = browser.currentScene.createNode("fieldValue");
fieldValue114.name = "description";
fieldValue114.value = "Attached to the ground. Intelligently places itself at the height of the underlying terrain.";
ProtoInstance112.fieldValue[1] = fieldValue114;

let fieldValue115 = browser.currentScene.createNode("fieldValue");
fieldValue115.name = "coordinates";
fieldValue115.value = "-122.0822035425683 37.42228990140251 0";
ProtoInstance112.fieldValue[2] = fieldValue115;

let fieldValue116 = browser.currentScene.createNode("fieldValue");
fieldValue116.name = "address";
fieldValue116.value = "\"https://www.web3d.org/x3d-earth\"";
ProtoInstance112.fieldValue[3] = fieldValue116;

browser.currentScene.children[3] = ProtoInstance112;

