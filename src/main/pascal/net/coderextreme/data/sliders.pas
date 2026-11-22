unit sliders;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createsliders: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group15: TGroupNode;
LayerSet16: TLayerSetNode;
Layer17: TLayerNode;
NavigationInfo18: TNavigationInfoNode;
DirectionalLight19: TDirectionalLightNode;
DirectionalLight20: TDirectionalLightNode;
Viewpoint21: TViewpointNode;
Group22: TGroupNode;
Transform23: TTransformNode;
Shape24: TShapeNode;
Cylinder25: TCylinderNode;
Appearance26: TAppearanceNode;
Material27: TMaterialNode;
Transform28: TTransformNode;
Shape29: TShapeNode;
Cone30: TConeNode;
Appearance31: TAppearanceNode;
Material32: TMaterialNode;
Transform33: TTransformNode;
Shape34: TShapeNode;
Cylinder35: TCylinderNode;
Appearance36: TAppearanceNode;
Material37: TMaterialNode;
Transform38: TTransformNode;
Shape39: TShapeNode;
Cone40: TConeNode;
Appearance41: TAppearanceNode;
Material42: TMaterialNode;
Transform43: TTransformNode;
Shape44: TShapeNode;
Cylinder45: TCylinderNode;
Appearance46: TAppearanceNode;
Material47: TMaterialNode;
Transform48: TTransformNode;
Shape49: TShapeNode;
Cone50: TConeNode;
Appearance51: TAppearanceNode;
Material52: TMaterialNode;
Transform53: TTransformNode;
Transform54: TTransformNode;
Shape55: TShapeNode;
IndexedFaceSet56: TIndexedFaceSetNode;
Coordinate57: TCoordinateNode;
Appearance58: TAppearanceNode;
Material59: TMaterialNode;
Script60: TScriptNode;
MFVec3f61: TMFVec3f;
MFInt3262: TMFInt32;
SFFloat63: TSFFloat;
SFFloat64: TSFFloat;
SFFloat65: TSFFloat;
SFFloat66: TSFFloat;
SFFloat67: TSFFloat;
SFFloat68: TSFFloat;
SFInt3269: TSFInt32;
LayoutLayer72: TLayoutLayerNode;
Layout73: TLayoutNode;
Viewport74: TViewportNode;
Transform75: TTransformNode;
Shape76: TShapeNode;
Appearance77: TAppearanceNode;
Material78: TMaterialNode;
Box79: TBoxNode;
Transform80: TTransformNode;
Transform81: TTransformNode;
Shape82: TShapeNode;
Text83: TTextNode;
FontStyle84: TFontStyleNode;
Appearance85: TAppearanceNode;
Material86: TMaterialNode;
X3DPrototype87: TX3DPrototype;
X3DInterfaceDeclaration88: TX3DInterfaceDeclaration;
SFVec3f89: TSFVec3f;
MFString90: TMFString;
SFFloat91: TSFFloat;
SFString92: TSFString;
SFNode93: TSFNode;
X3DPrototype94: TX3DPrototype;
Group95: TGroupNode;
Transform96: TTransformNode;
IS97: TIS;
connect98: Tconnect;
Transform99: TTransformNode;
PlaneSensor100: TPlaneSensorNode;
Transform101: TTransformNode;
TouchSensor102: TTouchSensorNode;
Transform103: TTransformNode;
Shape104: TShapeNode;
Text105: TTextNode;
IS106: TIS;
connect107: Tconnect;
FontStyle108: TFontStyleNode;
Appearance109: TAppearanceNode;
Material110: TMaterialNode;
Script111: TScriptNode;
SFFloat112: TSFFloat;
SFString113: TSFString;
SFVec3f114: TSFVec3f;
SFNode115: TSFNode;
SFFloat116: TSFFloat;
MFString117: TMFString;
IS118: TIS;
connect119: Tconnect;
connect120: Tconnect;
connect121: Tconnect;
X3DPrototype125: TX3DPrototypeNode;
SFVec3f126: TSFVec3f;
MFString127: TMFString;
SFFloat128: TSFFloat;
SFString129: TSFString;
SFNode130: TSFNode;
Script131: TScriptNode;
X3DPrototype132: TX3DPrototypeNode;
SFVec3f133: TSFVec3f;
MFString134: TMFString;
SFFloat135: TSFFloat;
SFString136: TSFString;
SFNode137: TSFNode;
Script138: TScriptNode;
X3DPrototype139: TX3DPrototypeNode;
SFVec3f140: TSFVec3f;
MFString141: TMFString;
SFFloat142: TSFFloat;
SFString143: TSFString;
SFNode144: TSFNode;
Script145: TScriptNode;
X3DPrototype146: TX3DPrototypeNode;
SFVec3f147: TSFVec3f;
MFString148: TMFString;
SFFloat149: TSFFloat;
SFString150: TSFString;
SFNode151: TSFNode;
Script152: TScriptNode;
X3DPrototype153: TX3DPrototypeNode;
SFVec3f154: TSFVec3f;
MFString155: TMFString;
SFFloat156: TSFFloat;
SFString157: TSFString;
SFNode158: TSFNode;
Script159: TScriptNode;
X3DPrototype160: TX3DPrototypeNode;
SFVec3f161: TSFVec3f;
MFString162: TMFString;
SFFloat163: TSFFloat;
SFString164: TSFString;
SFNode165: TSFNode;
Script166: TScriptNode;
Layer167: TLayerNode;
Viewpoint168: TViewpointNode;

procedure InitslidersPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
{ <component name='Shape' level='4'></component> }
X3D0.Components['Scripting'] := 1;
{ METHOD .Component }
X3D0.Components['EnvironmentalEffects'] := 3;
{ METHOD .Component }
X3D0.Components['Texturing'] := 1;
{ METHOD .Component }
X3D0.Components['Rendering'] := 1;
{ METHOD .Component }
X3D0.Components['Grouping'] := 3;
{ METHOD .Component }
X3D0.Components['Core'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'sliders.x3d';
{ METHOD .Meta }
X3D0.Meta['created'] := '8 August 2025';
{ METHOD .Meta }
X3D0.Meta['description'] := '*Bumpy flower with prototype sliders*';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Doug Sanden, Christoph Valentin, John Carlson';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.coderextreme.net/X3DJSONLD/src/main/data/sliders.x3d';
{ METHOD .Meta }
X3D0.Meta['license'] := 'license.html';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'Vim, VI Improved';
{ METHOD .Meta }
{ METHOD .Head }
Group15 := TGroupNode.Create;
LayerSet16 := TLayerSetNode.Create;
LayerSet16.ActiveLayer := 1;
LayerSet16.SetOrder([1,2,3]);
Layer17 := TLayerNode.Create;
Layer17.Pickable := True;
Layer17.SetObjectType(['ALL']);
NavigationInfo18 := TNavigationInfoNode.Create;
NavigationInfo18.SetType(['EXAMINE']);
NavigationInfo18.SetAvatarSize([0.25,1.75,0.75]);
{ METHOD .FdChildren.Add }
Layer17.FdChildren.Add(NavigationInfo18);
DirectionalLight19 := TDirectionalLightNode.Create;
DirectionalLight19.AmbientIntensity := 0.2;
DirectionalLight19.Direction := Vector3(0,-1,0);
{ METHOD .FdChildren.Add }
Layer17.FdChildren.Add(DirectionalLight19);
DirectionalLight20 := TDirectionalLightNode.Create;
DirectionalLight20.AmbientIntensity := 0.2;
DirectionalLight20.Direction := Vector3(-1,-0.1,-1);
{ METHOD .FdChildren.Add }
Layer17.FdChildren.Add(DirectionalLight20);
Viewpoint21 := TViewpointNode.Create;
Viewpoint21.Description := 'My Overview';
Viewpoint21.FieldOfView := 1.570796;
Viewpoint21.Position := Vector3(0,1.75,60);
end;

procedure InitslidersPart1;
begin

{ METHOD .FdChildren.Add }
Layer17.FdChildren.Add(Viewpoint21);
Group22 := TGroupNode.Create;
{ Arrow X }
Transform23 := TTransformNode.Create;
Transform23.Translation := Vector3(25,0,0);
Transform23.Rotation := Vector4(0,0,-1,1.57);
Shape24 := TShapeNode.Create;
Cylinder25 := TCylinderNode.Create;
Cylinder25.Radius := 0.35;
Cylinder25.Height := 50;
{ METHOD .Geometry }
Shape24.Geometry := Cylinder25;
Appearance26 := TAppearanceNode.Create;
Material27 := TMaterialNode.Create;
Material27.DiffuseColor := Vector3(1,0,0);
Material27.EmissiveColor := Vector3(1,0,0);
{ METHOD .SetMaterial }
Appearance26.Material := Material27;
{ METHOD .Appearance }
Shape24.Appearance := Appearance26;
{ METHOD .FdChildren.Add }
Transform23.FdChildren.Add(Shape24);
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(Transform23);
Transform28 := TTransformNode.Create;
Transform28.Translation := Vector3(50,0,0);
Transform28.Rotation := Vector4(0,0,-1,1.57);
Shape29 := TShapeNode.Create;
Cone30 := TConeNode.Create;
Cone30.BottomRadius := 0.8;
Cone30.Height := 3;
{ METHOD .Geometry }
Shape29.Geometry := Cone30;
Appearance31 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance31.Material := Material27;
{ METHOD .Appearance }
Shape29.Appearance := Appearance31;
{ METHOD .FdChildren.Add }
Transform28.FdChildren.Add(Shape29);
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(Transform28);
{ Arrow Y }
Transform33 := TTransformNode.Create;
Transform33.Translation := Vector3(0,25,0);
Shape34 := TShapeNode.Create;
{ METHOD .Geometry }
Shape34.Geometry := Cylinder25;
Appearance36 := TAppearanceNode.Create;
Material37 := TMaterialNode.Create;
Material37.DiffuseColor := Vector3(0,1,0);
Material37.EmissiveColor := Vector3(0,1,0);
{ METHOD .SetMaterial }
Appearance36.Material := Material37;
end;

procedure InitslidersPart2;
begin

{ METHOD .Appearance }
Shape34.Appearance := Appearance36;
{ METHOD .FdChildren.Add }
Transform33.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(Transform33);
Transform38 := TTransformNode.Create;
Transform38.Translation := Vector3(0,50,0);
Shape39 := TShapeNode.Create;
{ METHOD .Geometry }
Shape39.Geometry := Cone30;
Appearance41 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance41.Material := Material37;
{ METHOD .Appearance }
Shape39.Appearance := Appearance41;
{ METHOD .FdChildren.Add }
Transform38.FdChildren.Add(Shape39);
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(Transform38);
{ Arrow Z }
Transform43 := TTransformNode.Create;
Transform43.Translation := Vector3(0,0,25);
Transform43.Rotation := Vector4(1,0,0,1.57);
Shape44 := TShapeNode.Create;
{ METHOD .Geometry }
Shape44.Geometry := Cylinder25;
Appearance46 := TAppearanceNode.Create;
Material47 := TMaterialNode.Create;
Material47.DiffuseColor := Vector3(0,0,1);
Material47.EmissiveColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance46.Material := Material47;
{ METHOD .Appearance }
Shape44.Appearance := Appearance46;
{ METHOD .FdChildren.Add }
Transform43.FdChildren.Add(Shape44);
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(Transform43);
Transform48 := TTransformNode.Create;
Transform48.Translation := Vector3(0,0,50);
Transform48.Rotation := Vector4(1,0,0,1.57);
Shape49 := TShapeNode.Create;
{ METHOD .Geometry }
Shape49.Geometry := Cone30;
Appearance51 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance51.Material := Material47;
{ METHOD .Appearance }
Shape49.Appearance := Appearance51;
{ METHOD .FdChildren.Add }
Transform48.FdChildren.Add(Shape49);
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(Transform48);
{ METHOD .FdChildren.Add }
Layer17.FdChildren.Add(Group22);
{ the model that is being reviewed by the users of this scene }
Transform53 := TTransformNode.Create;
Transform54 := TTransformNode.Create;
Shape55 := TShapeNode.Create;
IndexedFaceSet56 := TIndexedFaceSetNode.Create;
end;

procedure InitslidersPart3;
begin

IndexedFaceSet56.Convex := False;
Coordinate57 := TCoordinateNode.Create;
{ METHOD .Coord }
IndexedFaceSet56.Coord := Coordinate57;
{ METHOD .Geometry }
Shape55.Geometry := IndexedFaceSet56;
Appearance58 := TAppearanceNode.Create;
Material59 := TMaterialNode.Create;
Material59.DiffuseColor := Vector3(0.7,0.7,0.7);
Material59.SpecularColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance58.Material := Material59;
{ METHOD .Appearance }
Shape55.Appearance := Appearance58;
{ METHOD .FdChildren.Add }
Transform54.FdChildren.Add(Shape55);
{ METHOD .FdChildren.Add }
Transform53.FdChildren.Add(Transform54);
{ METHOD .FdChildren.Add }
Layer17.FdChildren.Add(Transform53);
Script60 := TScriptNode.Create;
MFVec3f61 := TMFVec3f.CreateUndefined(Script60, false, 'coordinates');
{ METHOD .Fd.AddCustomField }
Script60.AddCustomField(MFVec3f61);
MFInt3262 := TMFInt32.CreateUndefined(Script60, false, 'coordIndexes');
{ METHOD .Fd.AddCustomField }
Script60.AddCustomField(MFInt3262);
SFFloat63 := TSFFloat.CreateUndefined(Script60, false, 'a');
SFFloat63.Value := '5';
{ METHOD .Fd.AddCustomField }
Script60.AddCustomField(SFFloat63);
SFFloat64 := TSFFloat.CreateUndefined(Script60, false, 'b');
SFFloat64.Value := '5';
{ METHOD .Fd.AddCustomField }
Script60.AddCustomField(SFFloat64);
SFFloat65 := TSFFloat.CreateUndefined(Script60, false, 'c');
SFFloat65.Value := '5';
{ METHOD .Fd.AddCustomField }
Script60.AddCustomField(SFFloat65);
SFFloat66 := TSFFloat.CreateUndefined(Script60, false, 'd');
SFFloat66.Value := '5';
{ METHOD .Fd.AddCustomField }
Script60.AddCustomField(SFFloat66);
SFFloat67 := TSFFloat.CreateUndefined(Script60, false, 'pdelta');
SFFloat67.Value := '0';
{ METHOD .Fd.AddCustomField }
Script60.AddCustomField(SFFloat67);
SFFloat68 := TSFFloat.CreateUndefined(Script60, false, 'tdelta');
SFFloat68.Value := '0';
{ METHOD .Fd.AddCustomField }
Script60.AddCustomField(SFFloat68);
SFInt3269 := TSFInt32.CreateUndefined(Script60, false, 'resolution');
SFInt3269.Value := '50';
{ METHOD .Fd.AddCustomField }
Script60.AddCustomField(SFInt3269);

Script60.SetSourceCode('''ecmascript:\n"+
"			function initialize() {\n"+
"			     generateCoordinates();\n"+
"			     var arrIndex = 0;\n"+
"			     for (var i = 0; i < resolution-1; i++) {\n"+
"				for (var j = 0; j < resolution-1; j++) {\n"+
"				     coordIndexes[arrIndex++] = i*resolution+j;\n"+
"				     coordIndexes[arrIndex++] = i*resolution+j+1;\n"+
"				     coordIndexes[arrIndex++] = (i+1)*resolution+j+1;\n"+
"				     coordIndexes[arrIndex++] = (i+1)*resolution+j;\n"+
"				     coordIndexes[arrIndex++] = -1;\n"+
"				}\n"+
"			    }\n"+
"			}\n"+
"			function set_a(value) {\n"+
"				a = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function set_b(value) {\n"+
"				b = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function set_c(value) {\n"+
"				c = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function set_d(value) {\n"+
"				d = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function set_pdelta(value) {\n"+
"				pdelta = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function set_tdelta(value) {\n"+
"				tdelta = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function resolution(value) {\n"+
"				resolution = value;\n"+
"				initialize();\n"+
"			}\n"+
"\n"+
"			function generateCoordinates() {\n"+
"			     var theta = 0.0;\n"+
"			     var phi = 0.0;\n"+
"			     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"			     var arrIndex = 0;\n"+
"			     for (var i = 0; i < resolution; i++) {\n"+
"				for (var j = 0; j < resolution; j++) {\n"+
"					var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);\n"+
"					coordinates[arrIndex++] = new SFVec3f(\n"+
"						rho * Math.cos(phi) * Math.cos(theta),\n"+
"						rho * Math.cos(phi) * Math.sin(theta),\n"+
"						rho * Math.sin(phi)\n"+
"					);\n"+
"					theta += delta;\n"+
"				}\n"+
"				phi += delta;\n"+
"			     }\n"+
"			}''');
{ METHOD .FdChildren.Add }
Layer17.FdChildren.Add(Script60);
{ Original "OrbitScript.coordIndexes TO Orbit.EventSet_coordIndex }
{ Sample OrbitScript.coordIndexes TO Orbit.EventSet_coordIndex}
Layer17.AddRoute(OrbitScript.[object Object], IndexedFaceSet56.set_EventSet_coordIndex);
{ METHOD .AddX3DROUTE }
{ Original "OrbitScript.coordinates TO OrbitCoordinates.EventSet_point }
{ Sample OrbitScript.coordinates TO OrbitCoordinates.EventSet_point}
Layer17.AddRoute(OrbitScript.[object Object], Coordinate57.set_EventSet_point);
{ METHOD .AddX3DROUTE }
{ METHOD .FdLayers.Add }
LayerSet16.FdLayers.Add(Layer17);
LayoutLayer72 := TLayoutLayerNode.Create;
LayoutLayer72.Pickable := True;
LayoutLayer72.SetObjectType(['ALL']);
Layout73 := TLayoutNode.Create;
Layout73.SetAlign(['LEFT','BOTTOM']);
Layout73.SetOffset([-0.2,0.19]);
Layout73.SetSize([0.4,0.6]);
{ METHOD .SetLayout }
LayoutLayer72.Layout := Layout73;
Viewport74 := TViewportNode.Create;
Viewport74.SetClipBoundary([0,1,0,1]);
{ METHOD .Viewport }
LayoutLayer72.Viewport := Viewport74;
Transform75 := TTransformNode.Create;
Transform75.Translation := Vector3(0,0,-3);
Shape76 := TShapeNode.Create;
Appearance77 := TAppearanceNode.Create;
Material78 := TMaterialNode.Create;
Material78.DiffuseColor := Vector3(0,0,0);
Material78.Transparency := 0.7;
{ METHOD .SetMaterial }
Appearance77.Material := Material78;
{ METHOD .Appearance }
Shape76.Appearance := Appearance77;
Box79 := TBoxNode.Create;
Box79.Size := Vector3(100,100,0.02);
{ METHOD .Geometry }
Shape76.Geometry := Box79;
{ METHOD .FdChildren.Add }
Transform75.FdChildren.Add(Shape76);
{ METHOD .FdChildren.Add }
LayoutLayer72.FdChildren.Add(Transform75);
Transform80 := TTransformNode.Create;
Transform81 := TTransformNode.Create;
Transform81.Translation := Vector3(0,0,-20);
Shape82 := TShapeNode.Create;
Text83 := TTextNode.Create;
Text83.SetText(['r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)']);
FontStyle84 := TFontStyleNode.Create;
FontStyle84.Size := 0.09;
{ METHOD .FontStyle }
Text83.FontStyle := FontStyle84;
{ METHOD .Geometry }
Shape82.Geometry := Text83;
Appearance85 := TAppearanceNode.Create;
Material86 := TMaterialNode.Create;
Material86.DiffuseColor := Vector3(1,1,0);
{ METHOD .SetMaterial }
Appearance85.Material := Material86;
{ METHOD .Appearance }
Shape82.Appearance := Appearance85;
{ METHOD .FdChildren.Add }
Transform81.FdChildren.Add(Shape82);
{ METHOD .FdChildren.Add }
Transform80.FdChildren.Add(Transform81);
{ METHOD .FdChildren.Add }
LayoutLayer72.FdChildren.Add(Transform80);
{ The slider parameters }
X3DPrototype87 := TX3DPrototype.Create;
X3DInterfaceDeclaration88 := TX3DInterfaceDeclaration.Create(nil);
SFVec3f89 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration88, false, 'sliderTranslation');
SFVec3f89.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration88.AddSFVec3f([SFVec3f89]);
MFString90 := TMFString.CreateUndefined(X3DInterfaceDeclaration88, false, 'textString');
MFString90.Value := '\"x=\"';
{ METHOD .AddMFString }
X3DInterfaceDeclaration88.AddMFString([MFString90]);
SFFloat91 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration88, false, 'parameterScale');
SFFloat91.Value := '15';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration88.AddSFFloat([SFFloat91]);
SFString92 := TSFString.CreateUndefined(X3DInterfaceDeclaration88, false, 'parameterName');
SFString92.Value := 'x';
{ METHOD .AddSFString }
X3DInterfaceDeclaration88.AddSFString([SFString92]);
SFNode93 := TSFNode.CreateUndefined(X3DInterfaceDeclaration88, false, 'orbScript');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration88.AddSFNode([SFNode93]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype87.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration88]);
X3DPrototype94 := TX3DPrototype.Create;
Group95 := TGroupNode.Create;
Transform96 := TTransformNode.Create;
Transform96.Translation := Vector3(0,0.7,0);
IS97 := TIS.Create;
connect98 := Tconnect.Create;
connect98.NodeField := 'translation';
connect98.ProtoField := 'sliderTranslation';
{ METHOD .Connect }
IS97.Connect := connect98;
{ METHOD .IS }
Transform96.IS := IS97;
Transform99 := TTransformNode.Create;
Transform99.Translation := Vector3(0,0,0.1);
PlaneSensor100 := TPlaneSensorNode.Create;
PlaneSensor100.Description := 'Grab with mouse to adjust slider';
PlaneSensor100.MaxPosition := Vector2(1,0);
{ METHOD .FdChildren.Add }
Transform99.FdChildren.Add(PlaneSensor100);
Transform101 := TTransformNode.Create;
Transform101.Translation := Vector3(0,0,0);
TouchSensor102 := TTouchSensorNode.Create;
TouchSensor102.Description := 'Maybe start dragging this?';
{ METHOD .FdChildren.Add }
Transform101.FdChildren.Add(TouchSensor102);
{ METHOD .FdChildren.Add }
Transform99.FdChildren.Add(Transform101);
Transform103 := TTransformNode.Create;
Shape104 := TShapeNode.Create;
Text105 := TTextNode.Create;
Text105.SetText(['a=']);
IS106 := TIS.Create;
connect107 := Tconnect.Create;
connect107.NodeField := 'string';
connect107.ProtoField := 'textString';
{ METHOD .Connect }
IS106.Connect := connect107;
{ METHOD .IS }
Text105.IS := IS106;
FontStyle108 := TFontStyleNode.Create;
FontStyle108.Style := fsBOLD;
FontStyle108.Size := 0.23;
{ METHOD .FontStyle }
Text105.FontStyle := FontStyle108;
{ METHOD .Geometry }
Shape104.Geometry := Text105;
Appearance109 := TAppearanceNode.Create;
Material110 := TMaterialNode.Create;
{ METHOD .SetMaterial }
Appearance109.Material := Material110;
{ METHOD .Appearance }
Shape104.Appearance := Appearance109;
{ METHOD .FdChildren.Add }
Transform103.FdChildren.Add(Shape104);
{ METHOD .FdChildren.Add }
Transform99.FdChildren.Add(Transform103);
{ METHOD .FdChildren.Add }
Transform96.FdChildren.Add(Transform99);
{ METHOD .FdChildren.Add }
Group95.FdChildren.Add(Transform96);
Script111 := TScriptNode.Create;
SFFloat112 := TSFFloat.CreateUndefined(Script111, false, 'protoScale');
{ METHOD .Fd.AddCustomField }
Script111.AddCustomField(SFFloat112);
SFString113 := TSFString.CreateUndefined(Script111, false, 'protoParameterName');
{ METHOD .Fd.AddCustomField }
Script111.AddCustomField(SFString113);
SFVec3f114 := TSFVec3f.CreateUndefined(Script111, false, 'newTranslation');
SFVec3f114.Value := '1 1 1';
{ METHOD .Fd.AddCustomField }
Script111.AddCustomField(SFVec3f114);
SFNode115 := TSFNode.CreateUndefined(Script111, false, 'protoScript');
{ METHOD .Fd.AddCustomField }
Script111.AddCustomField(SFNode115);
SFFloat116 := TSFFloat.CreateUndefined(Script111, false, 'protoValue');
SFFloat116.Value := '1';
{ METHOD .Fd.AddCustomField }
Script111.AddCustomField(SFFloat116);
MFString117 := TMFString.CreateUndefined(Script111, false, 'protoText');
MFString117.Value := '\"1.0\"';
{ METHOD .Fd.AddCustomField }
Script111.AddCustomField(MFString117);
IS118 := TIS.Create;
connect119 := Tconnect.Create;
connect119.NodeField := 'protoScale';
connect119.ProtoField := 'parameterScale';
{ METHOD .Connect }
IS118.Connect := connect119;
connect120 := Tconnect.Create;
connect120.NodeField := 'protoParameterName';
connect120.ProtoField := 'parameterName';
{ METHOD .Connect }
IS118.Connect := connect120;
connect121 := Tconnect.Create;
connect121.NodeField := 'protoScript';
connect121.ProtoField := 'orbScript';
{ METHOD .Connect }
IS118.Connect := connect121;
{ METHOD .Fd.AddCustomField }
Script111.AddCustomField(IS118);

Script111.SetSourceCode('''ecmascript:\n"+
"function set_protoScale(value) {\n"+
"	protoScale = value;\n"+
"}\n"+
"\n"+
"function set_protoParameterName(value) {\n"+
"	protoParameterName = value;\n"+
"}\n"+
"\n"+
"function set_protoScript(value) {\n"+
"	protoScript = value;\n"+
"}\n"+
"\n"+
"function set_protoValue(value) {\n"+
"	protoValue = value;\n"+
"}\n"+
"\n"+
"function set_protoText(value) {\n"+
"	protoText = value;\n"+
"}\n"+
"\n"+
"function newTranslation(value) {\n"+
"       	set_protoValue(value.x * protoScale);\n"+
"       	set_protoText(new MFString(protoParameterName+'='+protoValue.toFixed(2)));\n"+
"	protoScript[protoParameterName] = protoValue;\n"+
"};''');
{ METHOD .FdChildren.Add }
Group95.FdChildren.Add(Script111);
{ Original "protoSensor.EventTranslation_changed TO protoTransform.EventSet_translation }
{ Sample protoSensor.EventTranslation_changed TO protoTransform.EventSet_translation}
Group95.AddRoute(PlaneSensor100.EventTranslation_changed, Transform99.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ Original "protoSensor.EventTranslation_changed TO protoValueTransformerScript.newTranslation }
{ Sample protoSensor.EventTranslation_changed TO protoValueTransformerScript.newTranslation}
Group95.AddRoute(PlaneSensor100.EventTranslation_changed, SFVec3f114);
{ METHOD .AddX3DROUTE }
{ Original "protoValueTransformerScript.protoText TO protoText.string }
{ Sample protoValueTransformerScript.protoText TO protoText.string}
Group95.AddRoute(protoValueTransformerScript.[object Object], Text105.set_string);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3DPrototype94.AddChildren([Group95]);
{ METHOD .AddX3DPrototype }
X3DPrototype87.AddX3DPrototype([X3DPrototype94]);
{ METHOD .AddX3DPrototype }
LayoutLayer72.AddX3DPrototype([X3DPrototype87]);
X3DPrototype125 := TX3DPrototypeNode.Create;
SFVec3f126 := TSFVec3f.CreateUndefined(X3DPrototype125, false, 'sliderTranslation');
SFVec3f126.Value := '0 0.7 0';
{ METHOD .AddSFVec3f }
X3DPrototype125.AddSFVec3f([SFVec3f126]);
MFString127 := TMFString.CreateUndefined(X3DPrototype125, false, 'textString');
MFString127.Value := '\"a=\"';
{ METHOD .AddMFString }
X3DPrototype125.AddMFString([MFString127]);
SFFloat128 := TSFFloat.CreateUndefined(X3DPrototype125, false, 'parameterScale');
SFFloat128.Value := '30';
{ METHOD .AddSFFloat }
X3DPrototype125.AddSFFloat([SFFloat128]);
SFString129 := TSFString.CreateUndefined(X3DPrototype125, false, 'parameterName');
SFString129.Value := 'a';
{ METHOD .AddSFString }
X3DPrototype125.AddSFString([SFString129]);
SFNode130 := TSFNode.CreateUndefined(X3DPrototype125, false, 'orbScript');
{ METHOD .AddScript }
SFNode130.AddScript([Script60]);
{ METHOD .AddSFNode }
X3DPrototype125.AddSFNode([SFNode130]);
{ METHOD .AddX3DPrototype }
LayoutLayer72.AddX3DPrototype([X3DPrototype125]);
X3DPrototype132 := TX3DPrototypeNode.Create;
SFVec3f133 := TSFVec3f.CreateUndefined(X3DPrototype132, false, 'sliderTranslation');
SFVec3f133.Value := '0 0.4 0';
{ METHOD .AddSFVec3f }
X3DPrototype132.AddSFVec3f([SFVec3f133]);
MFString134 := TMFString.CreateUndefined(X3DPrototype132, false, 'textString');
MFString134.Value := '\"b=\"';
{ METHOD .AddMFString }
X3DPrototype132.AddMFString([MFString134]);
SFFloat135 := TSFFloat.CreateUndefined(X3DPrototype132, false, 'parameterScale');
SFFloat135.Value := '30';
{ METHOD .AddSFFloat }
X3DPrototype132.AddSFFloat([SFFloat135]);
SFString136 := TSFString.CreateUndefined(X3DPrototype132, false, 'parameterName');
SFString136.Value := 'b';
{ METHOD .AddSFString }
X3DPrototype132.AddSFString([SFString136]);
SFNode137 := TSFNode.CreateUndefined(X3DPrototype132, false, 'orbScript');
{ METHOD .AddScript }
SFNode137.AddScript([Script60]);
{ METHOD .AddSFNode }
X3DPrototype132.AddSFNode([SFNode137]);
{ METHOD .AddX3DPrototype }
LayoutLayer72.AddX3DPrototype([X3DPrototype132]);
X3DPrototype139 := TX3DPrototypeNode.Create;
SFVec3f140 := TSFVec3f.CreateUndefined(X3DPrototype139, false, 'sliderTranslation');
SFVec3f140.Value := '0 0.1 0';
{ METHOD .AddSFVec3f }
X3DPrototype139.AddSFVec3f([SFVec3f140]);
MFString141 := TMFString.CreateUndefined(X3DPrototype139, false, 'textString');
MFString141.Value := '\"c=\"';
{ METHOD .AddMFString }
X3DPrototype139.AddMFString([MFString141]);
SFFloat142 := TSFFloat.CreateUndefined(X3DPrototype139, false, 'parameterScale');
SFFloat142.Value := '20';
{ METHOD .AddSFFloat }
X3DPrototype139.AddSFFloat([SFFloat142]);
SFString143 := TSFString.CreateUndefined(X3DPrototype139, false, 'parameterName');
SFString143.Value := 'c';
{ METHOD .AddSFString }
X3DPrototype139.AddSFString([SFString143]);
SFNode144 := TSFNode.CreateUndefined(X3DPrototype139, false, 'orbScript');
{ METHOD .AddScript }
SFNode144.AddScript([Script60]);
{ METHOD .AddSFNode }
X3DPrototype139.AddSFNode([SFNode144]);
{ METHOD .AddX3DPrototype }
LayoutLayer72.AddX3DPrototype([X3DPrototype139]);
X3DPrototype146 := TX3DPrototypeNode.Create;
SFVec3f147 := TSFVec3f.CreateUndefined(X3DPrototype146, false, 'sliderTranslation');
SFVec3f147.Value := '0 -0.2 0';
{ METHOD .AddSFVec3f }
X3DPrototype146.AddSFVec3f([SFVec3f147]);
MFString148 := TMFString.CreateUndefined(X3DPrototype146, false, 'textString');
MFString148.Value := '\"d=\"';
{ METHOD .AddMFString }
X3DPrototype146.AddMFString([MFString148]);
SFFloat149 := TSFFloat.CreateUndefined(X3DPrototype146, false, 'parameterScale');
SFFloat149.Value := '20';
{ METHOD .AddSFFloat }
X3DPrototype146.AddSFFloat([SFFloat149]);
SFString150 := TSFString.CreateUndefined(X3DPrototype146, false, 'parameterName');
SFString150.Value := 'd';
{ METHOD .AddSFString }
X3DPrototype146.AddSFString([SFString150]);
SFNode151 := TSFNode.CreateUndefined(X3DPrototype146, false, 'orbScript');
{ METHOD .AddScript }
SFNode151.AddScript([Script60]);
{ METHOD .AddSFNode }
X3DPrototype146.AddSFNode([SFNode151]);
{ METHOD .AddX3DPrototype }
LayoutLayer72.AddX3DPrototype([X3DPrototype146]);
X3DPrototype153 := TX3DPrototypeNode.Create;
SFVec3f154 := TSFVec3f.CreateUndefined(X3DPrototype153, false, 'sliderTranslation');
SFVec3f154.Value := '0 -0.5 0';
{ METHOD .AddSFVec3f }
X3DPrototype153.AddSFVec3f([SFVec3f154]);
MFString155 := TMFString.CreateUndefined(X3DPrototype153, false, 'textString');
MFString155.Value := '\"tdelta=\"';
{ METHOD .AddMFString }
X3DPrototype153.AddMFString([MFString155]);
SFFloat156 := TSFFloat.CreateUndefined(X3DPrototype153, false, 'parameterScale');
SFFloat156.Value := '6.28';
{ METHOD .AddSFFloat }
X3DPrototype153.AddSFFloat([SFFloat156]);
SFString157 := TSFString.CreateUndefined(X3DPrototype153, false, 'parameterName');
SFString157.Value := 'tdelta';
{ METHOD .AddSFString }
X3DPrototype153.AddSFString([SFString157]);
SFNode158 := TSFNode.CreateUndefined(X3DPrototype153, false, 'orbScript');
{ METHOD .AddScript }
SFNode158.AddScript([Script60]);
{ METHOD .AddSFNode }
X3DPrototype153.AddSFNode([SFNode158]);
{ METHOD .AddX3DPrototype }
LayoutLayer72.AddX3DPrototype([X3DPrototype153]);
X3DPrototype160 := TX3DPrototypeNode.Create;
SFVec3f161 := TSFVec3f.CreateUndefined(X3DPrototype160, false, 'sliderTranslation');
SFVec3f161.Value := '0 -0.8 0';
{ METHOD .AddSFVec3f }
X3DPrototype160.AddSFVec3f([SFVec3f161]);
MFString162 := TMFString.CreateUndefined(X3DPrototype160, false, 'textString');
MFString162.Value := '\"pdelta=\"';
{ METHOD .AddMFString }
X3DPrototype160.AddMFString([MFString162]);
SFFloat163 := TSFFloat.CreateUndefined(X3DPrototype160, false, 'parameterScale');
SFFloat163.Value := '6.28';
{ METHOD .AddSFFloat }
X3DPrototype160.AddSFFloat([SFFloat163]);
SFString164 := TSFString.CreateUndefined(X3DPrototype160, false, 'parameterName');
SFString164.Value := 'pdelta';
{ METHOD .AddSFString }
X3DPrototype160.AddSFString([SFString164]);
SFNode165 := TSFNode.CreateUndefined(X3DPrototype160, false, 'orbScript');
{ METHOD .AddScript }
SFNode165.AddScript([Script60]);
{ METHOD .AddSFNode }
X3DPrototype160.AddSFNode([SFNode165]);
{ METHOD .AddX3DPrototype }
LayoutLayer72.AddX3DPrototype([X3DPrototype160]);
{ METHOD .FdLayers.Add }
LayerSet16.FdLayers.Add(LayoutLayer72);
Layer167 := TLayerNode.Create;
Layer167.Pickable := True;
Layer167.SetObjectType(['ALL']);
Viewpoint168 := TViewpointNode.Create;
Viewpoint168.Description := 'My Humanoids';
Viewpoint168.FieldOfView := 1.570796;
Viewpoint168.Position := Vector3(0,1.75,80);
{ METHOD .FdChildren.Add }
Layer167.FdChildren.Add(Viewpoint168);
{ METHOD .FdLayers.Add }
LayerSet16.FdLayers.Add(Layer167);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(LayerSet16);
{ METHOD .AddGroup }
X3D0.AddChildren([Group15]);
end;

function Createsliders: TX3DRootNode;
begin
InitslidersPart0;
InitslidersPart1;
InitslidersPart2;
InitslidersPart3;
Result := X3D0;
end;

begin
end.
