unit sliders;

interface

uses X3DNodes;

function Createsliders: TX3DRootNode;

implementation

uses CastleVectors;

function Createsliders: TX3DRootNode;
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
X3DField61: TX3DField;
X3DField62: TX3DField;
X3DField63: TX3DField;
X3DField64: TX3DField;
X3DField65: TX3DField;
X3DField66: TX3DField;
X3DField67: TX3DField;
X3DField68: TX3DField;
X3DField69: TX3DField;
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
X3DField89: TX3DField;
X3DField90: TX3DField;
X3DField91: TX3DField;
X3DField92: TX3DField;
X3DField93: TX3DField;
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
X3DField112: TX3DField;
X3DField113: TX3DField;
X3DField114: TX3DField;
X3DField115: TX3DField;
X3DField116: TX3DField;
X3DField117: TX3DField;
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
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
{ <component name='Shape' level='4'></component> }
X3D0.Components['Scripting'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Meta['title'] := 'sliders.x3d';
X3D0.Meta['created'] := '8 August 2025';
X3D0.Meta['description'] := '*Bumpy flower with prototype sliders*';
X3D0.Meta['creator'] := 'Doug Sanden, Christoph Valentin, John Carlson';
X3D0.Meta['identifier'] := 'https://www.coderextreme.net/X3DJSONLD/src/main/data/sliders.x3d';
X3D0.Meta['license'] := 'license.html';
X3D0.Meta['generator'] := 'Vim, VI Improved';
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
{ .AddChildren }
Layer17.AddChildren([NavigationInfo18]);
DirectionalLight19 := TDirectionalLightNode.Create;
DirectionalLight19.AmbientIntensity := 0.2;
DirectionalLight19.Direction := Vector3(0,-1,0);
{ .AddChildren }
Layer17.AddChildren([DirectionalLight19]);
DirectionalLight20 := TDirectionalLightNode.Create;
DirectionalLight20.AmbientIntensity := 0.2;
DirectionalLight20.Direction := Vector3(-1,-0.1,-1);
{ .AddChildren }
Layer17.AddChildren([DirectionalLight20]);
Viewpoint21 := TViewpointNode.Create;
Viewpoint21.Description := 'My Overview';
Viewpoint21.FieldOfView := 1.570796;
Viewpoint21.Position := Vector3(0,1.75,60);
{ .AddChildren }
Layer17.AddChildren([Viewpoint21]);
Group22 := TGroupNode.Create;
{ Arrow X }
Transform23 := TTransformNode.Create;
Transform23.Translation := Vector3(25,0,0);
Transform23.Rotation := Vector4(0,0,-1,1.57);
Shape24 := TShapeNode.Create;
Cylinder25 := TCylinderNode.Create;
Cylinder25.Radius := 0.35;
Cylinder25.Height := 50;
{ .SetGeometry }
Shape24.Geometry := Cylinder25;
Appearance26 := TAppearanceNode.Create;
Material27 := TMaterialNode.Create;
Material27.DiffuseColor := Vector3(1,0,0);
Material27.EmissiveColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance26.Material := Material27;
{ .SetAppearance }
Shape24.Appearance := Appearance26;
{ .AddChild }
Transform23.AddChildren([Shape24]);
{ .AddChildren }
Group22.AddChildren([Transform23]);
Transform28 := TTransformNode.Create;
Transform28.Translation := Vector3(50,0,0);
Transform28.Rotation := Vector4(0,0,-1,1.57);
Shape29 := TShapeNode.Create;
Cone30 := TConeNode.Create;
Cone30.BottomRadius := 0.8;
Cone30.Height := 3;
{ .SetGeometry }
Shape29.Geometry := Cone30;
Appearance31 := TAppearanceNode.Create;
Material32 := Material27;
{ .SetMaterial }
Appearance31.Material := Material32;
{ .SetAppearance }
Shape29.Appearance := Appearance31;
{ .AddChild }
Transform28.AddChildren([Shape29]);
{ .AddChildren }
Group22.AddChildren([Transform28]);
{ Arrow Y }
Transform33 := TTransformNode.Create;
Transform33.Translation := Vector3(0,25,0);
Shape34 := TShapeNode.Create;
Cylinder35 := Cylinder25;
{ .SetGeometry }
Shape34.Geometry := Cylinder35;
Appearance36 := TAppearanceNode.Create;
Material37 := TMaterialNode.Create;
Material37.DiffuseColor := Vector3(0,1,0);
Material37.EmissiveColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance36.Material := Material37;
{ .SetAppearance }
Shape34.Appearance := Appearance36;
{ .AddChild }
Transform33.AddChildren([Shape34]);
{ .AddChildren }
Group22.AddChildren([Transform33]);
Transform38 := TTransformNode.Create;
Transform38.Translation := Vector3(0,50,0);
Shape39 := TShapeNode.Create;
Cone40 := Cone30;
{ .SetGeometry }
Shape39.Geometry := Cone40;
Appearance41 := TAppearanceNode.Create;
Material42 := Material37;
{ .SetMaterial }
Appearance41.Material := Material42;
{ .SetAppearance }
Shape39.Appearance := Appearance41;
{ .AddChild }
Transform38.AddChildren([Shape39]);
{ .AddChildren }
Group22.AddChildren([Transform38]);
{ Arrow Z }
Transform43 := TTransformNode.Create;
Transform43.Translation := Vector3(0,0,25);
Transform43.Rotation := Vector4(1,0,0,1.57);
Shape44 := TShapeNode.Create;
Cylinder45 := Cylinder25;
{ .SetGeometry }
Shape44.Geometry := Cylinder45;
Appearance46 := TAppearanceNode.Create;
Material47 := TMaterialNode.Create;
Material47.DiffuseColor := Vector3(0,0,1);
Material47.EmissiveColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance46.Material := Material47;
{ .SetAppearance }
Shape44.Appearance := Appearance46;
{ .AddChild }
Transform43.AddChildren([Shape44]);
{ .AddChildren }
Group22.AddChildren([Transform43]);
Transform48 := TTransformNode.Create;
Transform48.Translation := Vector3(0,0,50);
Transform48.Rotation := Vector4(1,0,0,1.57);
Shape49 := TShapeNode.Create;
Cone50 := Cone30;
{ .SetGeometry }
Shape49.Geometry := Cone50;
Appearance51 := TAppearanceNode.Create;
Material52 := Material47;
{ .SetMaterial }
Appearance51.Material := Material52;
{ .SetAppearance }
Shape49.Appearance := Appearance51;
{ .AddChild }
Transform48.AddChildren([Shape49]);
{ .AddChildren }
Group22.AddChildren([Transform48]);
{ .AddChildren }
Layer17.AddChildren([Group22]);
{ the model that is being reviewed by the users of this scene }
Transform53 := TTransformNode.Create;
Transform54 := TTransformNode.Create;
Shape55 := TShapeNode.Create;
IndexedFaceSet56 := TIndexedFaceSetNode.Create;
IndexedFaceSet56.Convex := False;
Coordinate57 := TCoordinateNode.Create;
{ .SetCoord }
IndexedFaceSet56.Coord := Coordinate57;
{ .SetGeometry }
Shape55.Geometry := IndexedFaceSet56;
Appearance58 := TAppearanceNode.Create;
Material59 := TMaterialNode.Create;
Material59.DiffuseColor := Vector3(0.7,0.7,0.7);
Material59.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance58.Material := Material59;
{ .SetAppearance }
Shape55.Appearance := Appearance58;
{ .AddChild }
Transform54.AddChildren([Shape55]);
{ .AddChildren }
Transform53.AddChildren([Transform54]);
{ .AddChildren }
Layer17.AddChildren([Transform53]);
Script60 := TScriptNode.Create;
X3DField61 := TX3DField.Create;
X3DField61.NameField := 'coordinates';
X3DField61.Type := 'MFVec3f';
X3DField61.AccessType := 'inputOutput';
{ .SetX3DField }
Script60.X3DField := X3DField61;
X3DField62 := TX3DField.Create;
X3DField62.NameField := 'coordIndexes';
X3DField62.Type := 'MFInt32';
X3DField62.AccessType := 'inputOutput';
{ .AddX3DField }
Script60.X3DField := X3DField62;
X3DField63 := TX3DField.Create;
X3DField63.NameField := 'a';
X3DField63.Type := 'SFFloat';
X3DField63.AccessType := 'inputOutput';
X3DField63.Value := '5';
{ .AddX3DField }
Script60.X3DField := X3DField63;
X3DField64 := TX3DField.Create;
X3DField64.NameField := 'b';
X3DField64.Type := 'SFFloat';
X3DField64.AccessType := 'inputOutput';
X3DField64.Value := '5';
{ .AddX3DField }
Script60.X3DField := X3DField64;
X3DField65 := TX3DField.Create;
X3DField65.NameField := 'c';
X3DField65.Type := 'SFFloat';
X3DField65.AccessType := 'inputOutput';
X3DField65.Value := '5';
{ .AddX3DField }
Script60.X3DField := X3DField65;
X3DField66 := TX3DField.Create;
X3DField66.NameField := 'd';
X3DField66.Type := 'SFFloat';
X3DField66.AccessType := 'inputOutput';
X3DField66.Value := '5';
{ .AddX3DField }
Script60.X3DField := X3DField66;
X3DField67 := TX3DField.Create;
X3DField67.NameField := 'pdelta';
X3DField67.Type := 'SFFloat';
X3DField67.AccessType := 'inputOutput';
X3DField67.Value := '0';
{ .AddX3DField }
Script60.X3DField := X3DField67;
X3DField68 := TX3DField.Create;
X3DField68.NameField := 'tdelta';
X3DField68.Type := 'SFFloat';
X3DField68.AccessType := 'inputOutput';
X3DField68.Value := '0';
{ .AddX3DField }
Script60.X3DField := X3DField68;
X3DField69 := TX3DField.Create;
X3DField69.NameField := 'resolution';
X3DField69.Type := 'SFInt32';
X3DField69.AccessType := 'inputOutput';
X3DField69.Value := '50';
{ .AddX3DField }
Script60.X3DField := X3DField69;

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
{ .AddChildren }
Layer17.AddChildren([Script60]);
Layer17.AddRoute(Script60.FdCoordindexes, IndexedFaceSet56.EventSet_coordindex);
{ .AddX3DRoute }
Layer17.AddRoute(Script60.FdCoordinates, Coordinate57.EventSet_point);
{ .AddX3DRoute }
{ .AddLayers }
LayerSet16.Layers := Layer17;
LayoutLayer72 := TLayoutLayerNode.Create;
LayoutLayer72.Pickable := True;
LayoutLayer72.SetObjectType(['ALL']);
Layout73 := TLayoutNode.Create;
Layout73.SetAlign(['LEFT','BOTTOM']);
Layout73.SetOffset([-0.2,0.19]);
Layout73.SetSize([0.4,0.6]);
{ .SetLayout }
LayoutLayer72.Layout := Layout73;
Viewport74 := TViewportNode.Create;
Viewport74.SetClipBoundary([0,1,0,1]);
{ .SetViewport }
LayoutLayer72.Viewport := Viewport74;
Transform75 := TTransformNode.Create;
Transform75.Translation := Vector3(0,0,-3);
Shape76 := TShapeNode.Create;
Appearance77 := TAppearanceNode.Create;
Material78 := TMaterialNode.Create;
Material78.DiffuseColor := Vector3(0,0,0);
Material78.Transparency := 0.7;
{ .SetMaterial }
Appearance77.Material := Material78;
{ .SetAppearance }
Shape76.Appearance := Appearance77;
Box79 := TBoxNode.Create;
Box79.Size := Vector3(100,100,0.02);
{ .SetGeometry }
Shape76.Geometry := Box79;
{ .AddChild }
Transform75.AddChildren([Shape76]);
{ .AddChildren }
LayoutLayer72.AddChildren([Transform75]);
Transform80 := TTransformNode.Create;
Transform81 := TTransformNode.Create;
Transform81.Translation := Vector3(0,0,-20);
Shape82 := TShapeNode.Create;
Text83 := TTextNode.Create;
Text83.SetText(['r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)']);
FontStyle84 := TFontStyleNode.Create;
FontStyle84.Size := 0.09;
{ .SetFontStyle }
Text83.FontStyle := FontStyle84;
{ .SetGeometry }
Shape82.Geometry := Text83;
Appearance85 := TAppearanceNode.Create;
Material86 := TMaterialNode.Create;
Material86.DiffuseColor := Vector3(1,1,0);
{ .SetMaterial }
Appearance85.Material := Material86;
{ .SetAppearance }
Shape82.Appearance := Appearance85;
{ .AddChild }
Transform81.AddChildren([Shape82]);
{ .AddChildren }
Transform80.AddChildren([Transform81]);
{ .AddChildren }
LayoutLayer72.AddChildren([Transform80]);
{ The slider parameters }
X3DPrototype87 := TX3DPrototype.Create;
X3DPrototype87.NameField := 'SliderProto';
X3DInterfaceDeclaration88 := TX3DInterfaceDeclaration.Create(nil);
X3DField89 := TX3DField.Create;
X3DField89.NameField := 'sliderTranslation';
X3DField89.AccessType := 'inputOutput';
X3DField89.Type := 'SFVec3f';
X3DField89.Value := '0 0 0';
{ .SetX3DField }
X3DInterfaceDeclaration88.X3DField := X3DField89;
X3DField90 := TX3DField.Create;
X3DField90.NameField := 'textString';
X3DField90.AccessType := 'inputOutput';
X3DField90.Type := 'MFString';
X3DField90.Value := '\'x=\'';
{ .AddX3DField }
X3DInterfaceDeclaration88.X3DField := X3DField90;
X3DField91 := TX3DField.Create;
X3DField91.NameField := 'parameterScale';
X3DField91.AccessType := 'inputOutput';
X3DField91.Type := 'SFFloat';
X3DField91.Value := '15';
{ .AddX3DField }
X3DInterfaceDeclaration88.X3DField := X3DField91;
X3DField92 := TX3DField.Create;
X3DField92.NameField := 'parameterName';
X3DField92.AccessType := 'inputOutput';
X3DField92.Type := 'SFString';
X3DField92.Value := 'x';
{ .AddX3DField }
X3DInterfaceDeclaration88.X3DField := X3DField92;
X3DField93 := TX3DField.Create;
X3DField93.NameField := 'orbScript';
X3DField93.AccessType := 'inputOutput';
X3DField93.Type := 'SFNode';
{ .AddX3DField }
X3DInterfaceDeclaration88.X3DField := X3DField93;
{ .SetX3DInterfaceDeclaration }
X3DPrototype87.X3DInterfaceDeclaration := X3DInterfaceDeclaration88;
X3DPrototype94 := TX3DPrototype.Create;
Group95 := TGroupNode.Create;
Transform96 := TTransformNode.Create;
Transform96.Translation := Vector3(0,0.7,0);
IS97 := TIS.Create;
connect98 := Tconnect.Create;
connect98.NodeField := 'translation';
connect98.ProtoField := 'sliderTranslation';
{ .AddConnect }
IS97.Connect := connect98;
{ .SetIS }
Transform96.IS := IS97;
Transform99 := TTransformNode.Create;
Transform99.Translation := Vector3(0,0,0.1);
PlaneSensor100 := TPlaneSensorNode.Create;
PlaneSensor100.Description := 'Grab with mouse to adjust slider';
PlaneSensor100.MaxPosition := Vector2Single(1,0);
{ .AddChildren }
Transform99.AddChildren([PlaneSensor100]);
Transform101 := TTransformNode.Create;
Transform101.Translation := Vector3(0,0,0);
TouchSensor102 := TTouchSensorNode.Create;
TouchSensor102.Description := 'Maybe start dragging this?';
{ .AddChildren }
Transform101.AddChildren([TouchSensor102]);
{ .AddChildren }
Transform99.AddChildren([Transform101]);
Transform103 := TTransformNode.Create;
Shape104 := TShapeNode.Create;
Text105 := TTextNode.Create;
Text105.SetText(['a=']);
IS106 := TIS.Create;
connect107 := Tconnect.Create;
connect107.NodeField := 'string';
connect107.ProtoField := 'textString';
{ .AddConnect }
IS106.Connect := connect107;
{ .SetIS }
Text105.IS := IS106;
FontStyle108 := TFontStyleNode.Create;
FontStyle108.Style := fsBold;
FontStyle108.Size := 0.23;
{ .SetFontStyle }
Text105.FontStyle := FontStyle108;
{ .SetGeometry }
Shape104.Geometry := Text105;
Appearance109 := TAppearanceNode.Create;
Material110 := TMaterialNode.Create;
{ .SetMaterial }
Appearance109.Material := Material110;
{ .SetAppearance }
Shape104.Appearance := Appearance109;
{ .AddChild }
Transform103.AddChildren([Shape104]);
{ .AddChildren }
Transform99.AddChildren([Transform103]);
{ .AddChildren }
Transform96.AddChildren([Transform99]);
{ .AddChildren }
Group95.AddChildren([Transform96]);
Script111 := TScriptNode.Create;
X3DField112 := TX3DField.Create;
X3DField112.NameField := 'protoScale';
X3DField112.AccessType := 'inputOutput';
X3DField112.Type := 'SFFloat';
{ .SetX3DField }
Script111.X3DField := X3DField112;
X3DField113 := TX3DField.Create;
X3DField113.NameField := 'protoParameterName';
X3DField113.AccessType := 'inputOutput';
X3DField113.Type := 'SFString';
{ .AddX3DField }
Script111.X3DField := X3DField113;
X3DField114 := TX3DField.Create;
X3DField114.NameField := 'newTranslation';
X3DField114.AccessType := 'inputOnly';
X3DField114.Type := 'SFVec3f';
X3DField114.Value := '1 1 1';
{ .AddX3DField }
Script111.X3DField := X3DField114;
X3DField115 := TX3DField.Create;
X3DField115.NameField := 'protoScript';
X3DField115.AccessType := 'inputOutput';
X3DField115.Type := 'SFNode';
{ .AddX3DField }
Script111.X3DField := X3DField115;
X3DField116 := TX3DField.Create;
X3DField116.NameField := 'protoValue';
X3DField116.AccessType := 'inputOutput';
X3DField116.Type := 'SFFloat';
X3DField116.Value := '1';
{ .AddX3DField }
Script111.X3DField := X3DField116;
X3DField117 := TX3DField.Create;
X3DField117.NameField := 'protoText';
X3DField117.AccessType := 'inputOutput';
X3DField117.Type := 'MFString';
X3DField117.Value := '\'1.0\'';
{ .AddX3DField }
Script111.X3DField := X3DField117;
IS118 := TIS.Create;
connect119 := Tconnect.Create;
connect119.NodeField := 'protoScale';
connect119.ProtoField := 'parameterScale';
{ .AddConnect }
IS118.Connect := connect119;
connect120 := Tconnect.Create;
connect120.NodeField := 'protoParameterName';
connect120.ProtoField := 'parameterName';
{ .AddConnect }
IS118.Connect := connect120;
connect121 := Tconnect.Create;
connect121.NodeField := 'protoScript';
connect121.ProtoField := 'orbScript';
{ .AddConnect }
IS118.Connect := connect121;
{ .SetIS }
Script111.IS := IS118;

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
{ .AddChildren }
Group95.AddChildren([Script111]);
Group95.AddRoute(PlaneSensor100.EventTranslation_changed, Transform99.FdTranslation);
{ .AddX3DRoute }
Group95.AddRoute(PlaneSensor100.EventTranslation_changed, Script111.FdNewtranslation);
{ .AddX3DRoute }
Group95.AddRoute(Script111.FdPrototext, Text105.FdString);
{ .AddX3DRoute }
{ .SetGroup }
X3DPrototype94.Group := Group95;
{ .AddX3DPrototype }
X3DPrototype87.X3DPrototype := X3DPrototype94;
{ .AddX3DPrototype }
LayoutLayer72.X3DPrototype := X3DPrototype87;
X3DPrototype125 := TX3DPrototypeNode.Create;
X3DPrototype125.NameField := 'SliderProto';
SFVec3f126 := TSFVec3f.Create(SliderProto1, false, 'sliderTranslation', Vector3(0,0.7,0));
SFVec3f126.NameField := 'sliderTranslation';
SFVec3f126.Value := '0 0.7 0';
{ .SetSFVec3f }
X3DPrototype125.SFVec3f := SFVec3f126;
MFString127 := TMFString.Create(SliderProto1, false, 'textString', (['a=']));
MFString127.NameField := 'textString';
MFString127.Value := '\"a=\"';
{ .AddMFString }
X3DPrototype125.MFString := MFString127;
SFFloat128 := TSFFloat.Create(SliderProto1, false, 'parameterScale', 30);
SFFloat128.NameField := 'parameterScale';
SFFloat128.Value := '30';
{ .AddSFFloat }
X3DPrototype125.SFFloat := SFFloat128;
SFString129 := TSFString.Create(SliderProto1, false, 'parameterName', 'a');
SFString129.NameField := 'parameterName';
SFString129.Value := 'a';
{ .AddSFString }
X3DPrototype125.SFString := SFString129;
SFNode130 := TSFNode.Create;
SFNode130.NameField := 'orbScript';
Script131 := Script60;
{ .SetScript }
SFNode130.Script := Script131;
{ .AddSFNode }
X3DPrototype125.SFNode := SFNode130;
{ .AddX3DPrototype }
LayoutLayer72.X3DPrototype := X3DPrototype125;
X3DPrototype132 := TX3DPrototypeNode.Create;
X3DPrototype132.NameField := 'SliderProto';
SFVec3f133 := TSFVec3f.Create(SliderProto1, false, 'sliderTranslation', Vector3(0,0.4,0));
SFVec3f133.NameField := 'sliderTranslation';
SFVec3f133.Value := '0 0.4 0';
{ .SetSFVec3f }
X3DPrototype132.SFVec3f := SFVec3f133;
MFString134 := TMFString.Create(SliderProto1, false, 'textString', (['b=']));
MFString134.NameField := 'textString';
MFString134.Value := '\"b=\"';
{ .AddMFString }
X3DPrototype132.MFString := MFString134;
SFFloat135 := TSFFloat.Create(SliderProto1, false, 'parameterScale', 30);
SFFloat135.NameField := 'parameterScale';
SFFloat135.Value := '30';
{ .AddSFFloat }
X3DPrototype132.SFFloat := SFFloat135;
SFString136 := TSFString.Create(SliderProto1, false, 'parameterName', 'b');
SFString136.NameField := 'parameterName';
SFString136.Value := 'b';
{ .AddSFString }
X3DPrototype132.SFString := SFString136;
SFNode137 := TSFNode.Create;
SFNode137.NameField := 'orbScript';
Script138 := Script60;
{ .SetScript }
SFNode137.Script := Script138;
{ .AddSFNode }
X3DPrototype132.SFNode := SFNode137;
{ .AddX3DPrototype }
LayoutLayer72.X3DPrototype := X3DPrototype132;
X3DPrototype139 := TX3DPrototypeNode.Create;
X3DPrototype139.NameField := 'SliderProto';
SFVec3f140 := TSFVec3f.Create(SliderProto1, false, 'sliderTranslation', Vector3(0,0.1,0));
SFVec3f140.NameField := 'sliderTranslation';
SFVec3f140.Value := '0 0.1 0';
{ .SetSFVec3f }
X3DPrototype139.SFVec3f := SFVec3f140;
MFString141 := TMFString.Create(SliderProto1, false, 'textString', (['c=']));
MFString141.NameField := 'textString';
MFString141.Value := '\"c=\"';
{ .AddMFString }
X3DPrototype139.MFString := MFString141;
SFFloat142 := TSFFloat.Create(SliderProto1, false, 'parameterScale', 20);
SFFloat142.NameField := 'parameterScale';
SFFloat142.Value := '20';
{ .AddSFFloat }
X3DPrototype139.SFFloat := SFFloat142;
SFString143 := TSFString.Create(SliderProto1, false, 'parameterName', 'c');
SFString143.NameField := 'parameterName';
SFString143.Value := 'c';
{ .AddSFString }
X3DPrototype139.SFString := SFString143;
SFNode144 := TSFNode.Create;
SFNode144.NameField := 'orbScript';
Script145 := Script60;
{ .SetScript }
SFNode144.Script := Script145;
{ .AddSFNode }
X3DPrototype139.SFNode := SFNode144;
{ .AddX3DPrototype }
LayoutLayer72.X3DPrototype := X3DPrototype139;
X3DPrototype146 := TX3DPrototypeNode.Create;
X3DPrototype146.NameField := 'SliderProto';
SFVec3f147 := TSFVec3f.Create(SliderProto1, false, 'sliderTranslation', Vector3(0,-0.2,0));
SFVec3f147.NameField := 'sliderTranslation';
SFVec3f147.Value := '0 -0.2 0';
{ .SetSFVec3f }
X3DPrototype146.SFVec3f := SFVec3f147;
MFString148 := TMFString.Create(SliderProto1, false, 'textString', (['d=']));
MFString148.NameField := 'textString';
MFString148.Value := '\"d=\"';
{ .AddMFString }
X3DPrototype146.MFString := MFString148;
SFFloat149 := TSFFloat.Create(SliderProto1, false, 'parameterScale', 20);
SFFloat149.NameField := 'parameterScale';
SFFloat149.Value := '20';
{ .AddSFFloat }
X3DPrototype146.SFFloat := SFFloat149;
SFString150 := TSFString.Create(SliderProto1, false, 'parameterName', 'd');
SFString150.NameField := 'parameterName';
SFString150.Value := 'd';
{ .AddSFString }
X3DPrototype146.SFString := SFString150;
SFNode151 := TSFNode.Create;
SFNode151.NameField := 'orbScript';
Script152 := Script60;
{ .SetScript }
SFNode151.Script := Script152;
{ .AddSFNode }
X3DPrototype146.SFNode := SFNode151;
{ .AddX3DPrototype }
LayoutLayer72.X3DPrototype := X3DPrototype146;
X3DPrototype153 := TX3DPrototypeNode.Create;
X3DPrototype153.NameField := 'SliderProto';
SFVec3f154 := TSFVec3f.Create(SliderProto1, false, 'sliderTranslation', Vector3(0,-0.5,0));
SFVec3f154.NameField := 'sliderTranslation';
SFVec3f154.Value := '0 -0.5 0';
{ .SetSFVec3f }
X3DPrototype153.SFVec3f := SFVec3f154;
MFString155 := TMFString.Create(SliderProto1, false, 'textString', (['tdelta=']));
MFString155.NameField := 'textString';
MFString155.Value := '\"tdelta=\"';
{ .AddMFString }
X3DPrototype153.MFString := MFString155;
SFFloat156 := TSFFloat.Create(SliderProto1, false, 'parameterScale', 6.28);
SFFloat156.NameField := 'parameterScale';
SFFloat156.Value := '6.28';
{ .AddSFFloat }
X3DPrototype153.SFFloat := SFFloat156;
SFString157 := TSFString.Create(SliderProto1, false, 'parameterName', 'tdelta');
SFString157.NameField := 'parameterName';
SFString157.Value := 'tdelta';
{ .AddSFString }
X3DPrototype153.SFString := SFString157;
SFNode158 := TSFNode.Create;
SFNode158.NameField := 'orbScript';
Script159 := Script60;
{ .SetScript }
SFNode158.Script := Script159;
{ .AddSFNode }
X3DPrototype153.SFNode := SFNode158;
{ .AddX3DPrototype }
LayoutLayer72.X3DPrototype := X3DPrototype153;
X3DPrototype160 := TX3DPrototypeNode.Create;
X3DPrototype160.NameField := 'SliderProto';
SFVec3f161 := TSFVec3f.Create(SliderProto1, false, 'sliderTranslation', Vector3(0,-0.8,0));
SFVec3f161.NameField := 'sliderTranslation';
SFVec3f161.Value := '0 -0.8 0';
{ .SetSFVec3f }
X3DPrototype160.SFVec3f := SFVec3f161;
MFString162 := TMFString.Create(SliderProto1, false, 'textString', (['pdelta=']));
MFString162.NameField := 'textString';
MFString162.Value := '\"pdelta=\"';
{ .AddMFString }
X3DPrototype160.MFString := MFString162;
SFFloat163 := TSFFloat.Create(SliderProto1, false, 'parameterScale', 6.28);
SFFloat163.NameField := 'parameterScale';
SFFloat163.Value := '6.28';
{ .AddSFFloat }
X3DPrototype160.SFFloat := SFFloat163;
SFString164 := TSFString.Create(SliderProto1, false, 'parameterName', 'pdelta');
SFString164.NameField := 'parameterName';
SFString164.Value := 'pdelta';
{ .AddSFString }
X3DPrototype160.SFString := SFString164;
SFNode165 := TSFNode.Create;
SFNode165.NameField := 'orbScript';
Script166 := Script60;
{ .SetScript }
SFNode165.Script := Script166;
{ .AddSFNode }
X3DPrototype160.SFNode := SFNode165;
{ .AddX3DPrototype }
LayoutLayer72.X3DPrototype := X3DPrototype160;
{ .AddLayers }
LayerSet16.Layers := LayoutLayer72;
Layer167 := TLayerNode.Create;
Layer167.Pickable := True;
Layer167.SetObjectType(['ALL']);
Viewpoint168 := TViewpointNode.Create;
Viewpoint168.Description := 'My Humanoids';
Viewpoint168.FieldOfView := 1.570796;
Viewpoint168.Position := Vector3(0,1.75,80);
{ .AddChildren }
Layer167.AddChildren([Viewpoint168]);
{ .AddLayers }
LayerSet16.Layers := Layer167;
{ .AddChildren }
Group15.AddChildren([LayerSet16]);
{ .AddGroup }
X3D0.AddChildren([Group15]);
Result := X3D0;
end;

begin
end.
