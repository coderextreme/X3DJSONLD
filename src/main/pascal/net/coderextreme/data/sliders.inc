function sliders: TX3DRootNode;
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
field61: TfieldNode;
field62: TfieldNode;
field63: TfieldNode;
field64: TfieldNode;
field65: TfieldNode;
field66: TfieldNode;
field67: TfieldNode;
field68: TfieldNode;
field69: TfieldNode;
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
ProtoDeclare87: TProtoDeclareNode;
ProtoInterface88: TProtoInterfaceNode;
field89: TfieldNode;
field90: TfieldNode;
field91: TfieldNode;
field92: TfieldNode;
field93: TfieldNode;
ProtoBody94: TProtoBodyNode;
Group95: TGroupNode;
Transform96: TTransformNode;
IS97: TISNode;
connect98: TconnectNode;
Transform99: TTransformNode;
PlaneSensor100: TPlaneSensorNode;
Transform101: TTransformNode;
TouchSensor102: TTouchSensorNode;
Transform103: TTransformNode;
Shape104: TShapeNode;
Text105: TTextNode;
IS106: TISNode;
connect107: TconnectNode;
FontStyle108: TFontStyleNode;
Appearance109: TAppearanceNode;
Material110: TMaterialNode;
Script111: TScriptNode;
field112: TfieldNode;
field113: TfieldNode;
field114: TfieldNode;
field115: TfieldNode;
field116: TfieldNode;
field117: TfieldNode;
IS118: TISNode;
connect119: TconnectNode;
connect120: TconnectNode;
connect121: TconnectNode;
ProtoInstance125: TProtoInstanceNode;
fieldValue126: TfieldValueNode;
fieldValue127: TfieldValueNode;
fieldValue128: TfieldValueNode;
fieldValue129: TfieldValueNode;
fieldValue130: TfieldValueNode;
Script131: TScriptNode;
ProtoInstance132: TProtoInstanceNode;
fieldValue133: TfieldValueNode;
fieldValue134: TfieldValueNode;
fieldValue135: TfieldValueNode;
fieldValue136: TfieldValueNode;
fieldValue137: TfieldValueNode;
Script138: TScriptNode;
ProtoInstance139: TProtoInstanceNode;
fieldValue140: TfieldValueNode;
fieldValue141: TfieldValueNode;
fieldValue142: TfieldValueNode;
fieldValue143: TfieldValueNode;
fieldValue144: TfieldValueNode;
Script145: TScriptNode;
ProtoInstance146: TProtoInstanceNode;
fieldValue147: TfieldValueNode;
fieldValue148: TfieldValueNode;
fieldValue149: TfieldValueNode;
fieldValue150: TfieldValueNode;
fieldValue151: TfieldValueNode;
Script152: TScriptNode;
ProtoInstance153: TProtoInstanceNode;
fieldValue154: TfieldValueNode;
fieldValue155: TfieldValueNode;
fieldValue156: TfieldValueNode;
fieldValue157: TfieldValueNode;
fieldValue158: TfieldValueNode;
Script159: TScriptNode;
ProtoInstance160: TProtoInstanceNode;
fieldValue161: TfieldValueNode;
fieldValue162: TfieldValueNode;
fieldValue163: TfieldValueNode;
fieldValue164: TfieldValueNode;
fieldValue165: TfieldValueNode;
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
Material32 := TMaterialNode.Create;
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
Cylinder35 := TCylinderNode.Create;
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
Cone40 := TConeNode.Create;
Cone40 := Cone30;
{ .SetGeometry }
Shape39.Geometry := Cone40;
Appearance41 := TAppearanceNode.Create;
Material42 := TMaterialNode.Create;
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
Cylinder45 := TCylinderNode.Create;
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
Cone50 := TConeNode.Create;
Cone50 := Cone30;
{ .SetGeometry }
Shape49.Geometry := Cone50;
Appearance51 := TAppearanceNode.Create;
Material52 := TMaterialNode.Create;
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
field61 := TfieldNode.Create;
field61.NameField := 'coordinates';
field61.Type := 'MFVec3f';
field61.AccessType := 'inputOutput';
{ .AddField }
Script60.Field := field61;
field62 := TfieldNode.Create;
field62.NameField := 'coordIndexes';
field62.Type := 'MFInt32';
field62.AccessType := 'inputOutput';
{ .AddField }
Script60.Field := field62;
field63 := TfieldNode.Create;
field63.NameField := 'a';
field63.Type := 'SFFloat';
field63.AccessType := 'inputOutput';
field63.Value := '5';
{ .AddField }
Script60.Field := field63;
field64 := TfieldNode.Create;
field64.NameField := 'b';
field64.Type := 'SFFloat';
field64.AccessType := 'inputOutput';
field64.Value := '5';
{ .AddField }
Script60.Field := field64;
field65 := TfieldNode.Create;
field65.NameField := 'c';
field65.Type := 'SFFloat';
field65.AccessType := 'inputOutput';
field65.Value := '5';
{ .AddField }
Script60.Field := field65;
field66 := TfieldNode.Create;
field66.NameField := 'd';
field66.Type := 'SFFloat';
field66.AccessType := 'inputOutput';
field66.Value := '5';
{ .AddField }
Script60.Field := field66;
field67 := TfieldNode.Create;
field67.NameField := 'pdelta';
field67.Type := 'SFFloat';
field67.AccessType := 'inputOutput';
field67.Value := '0';
{ .AddField }
Script60.Field := field67;
field68 := TfieldNode.Create;
field68.NameField := 'tdelta';
field68.Type := 'SFFloat';
field68.AccessType := 'inputOutput';
field68.Value := '0';
{ .AddField }
Script60.Field := field68;
field69 := TfieldNode.Create;
field69.NameField := 'resolution';
field69.Type := 'SFInt32';
field69.AccessType := 'inputOutput';
field69.Value := '50';
{ .AddField }
Script60.Field := field69;

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
ProtoDeclare87 := TProtoDeclareNode.Create;
ProtoDeclare87.NameField := 'SliderProto';
ProtoInterface88 := TProtoInterfaceNode.Create;
field89 := TfieldNode.Create;
field89.NameField := 'sliderTranslation';
field89.AccessType := 'inputOutput';
field89.Type := 'SFVec3f';
field89.Value := '0 0 0';
{ .AddField }
ProtoInterface88.Field := field89;
field90 := TfieldNode.Create;
field90.NameField := 'textString';
field90.AccessType := 'inputOutput';
field90.Type := 'MFString';
field90.Value := '\"x=\"';
{ .AddField }
ProtoInterface88.Field := field90;
field91 := TfieldNode.Create;
field91.NameField := 'parameterScale';
field91.AccessType := 'inputOutput';
field91.Type := 'SFFloat';
field91.Value := '15';
{ .AddField }
ProtoInterface88.Field := field91;
field92 := TfieldNode.Create;
field92.NameField := 'parameterName';
field92.AccessType := 'inputOutput';
field92.Type := 'SFString';
field92.Value := 'x';
{ .AddField }
ProtoInterface88.Field := field92;
field93 := TfieldNode.Create;
field93.NameField := 'orbScript';
field93.AccessType := 'inputOutput';
field93.Type := 'SFNode';
{ .AddField }
ProtoInterface88.Field := field93;
{ .SetProtoInterface }
ProtoDeclare87.ProtoInterface := ProtoInterface88;
ProtoBody94 := TProtoBodyNode.Create;
Group95 := TGroupNode.Create;
Transform96 := TTransformNode.Create;
Transform96.Translation := Vector3(0,0.7,0);
IS97 := TISNode.Create;
connect98 := TconnectNode.Create;
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
PlaneSensor100.MaxPosition := Vector2(1,0);
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
IS106 := TISNode.Create;
connect107 := TconnectNode.Create;
connect107.NodeField := 'string';
connect107.ProtoField := 'textString';
{ .AddConnect }
IS106.Connect := connect107;
{ .SetIS }
Text105.IS := IS106;
FontStyle108 := TFontStyleNode.Create;
FontStyle108.Style := 'BOLD';
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
field112 := TfieldNode.Create;
field112.NameField := 'protoScale';
field112.AccessType := 'inputOutput';
field112.Type := 'SFFloat';
{ .AddField }
Script111.Field := field112;
field113 := TfieldNode.Create;
field113.NameField := 'protoParameterName';
field113.AccessType := 'inputOutput';
field113.Type := 'SFString';
{ .AddField }
Script111.Field := field113;
field114 := TfieldNode.Create;
field114.NameField := 'newTranslation';
field114.AccessType := 'inputOnly';
field114.Type := 'SFVec3f';
field114.Value := '1 1 1';
{ .AddField }
Script111.Field := field114;
field115 := TfieldNode.Create;
field115.NameField := 'protoScript';
field115.AccessType := 'inputOutput';
field115.Type := 'SFNode';
{ .AddField }
Script111.Field := field115;
field116 := TfieldNode.Create;
field116.NameField := 'protoValue';
field116.AccessType := 'inputOutput';
field116.Type := 'SFFloat';
field116.Value := '1';
{ .AddField }
Script111.Field := field116;
field117 := TfieldNode.Create;
field117.NameField := 'protoText';
field117.AccessType := 'inputOutput';
field117.Type := 'MFString';
field117.Value := '\"1.0\"';
{ .AddField }
Script111.Field := field117;
IS118 := TISNode.Create;
connect119 := TconnectNode.Create;
connect119.NodeField := 'protoScale';
connect119.ProtoField := 'parameterScale';
{ .AddConnect }
IS118.Connect := connect119;
connect120 := TconnectNode.Create;
connect120.NodeField := 'protoParameterName';
connect120.ProtoField := 'parameterName';
{ .AddConnect }
IS118.Connect := connect120;
connect121 := TconnectNode.Create;
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
{ .AddChildren }
ProtoBody94.AddChildren([Group95]);
{ .SetProtoBody }
ProtoDeclare87.ProtoBody := ProtoBody94;
{ .AddChildren }
LayoutLayer72.AddChildren([ProtoDeclare87]);
ProtoInstance125 := TProtoInstanceNode.Create;
ProtoInstance125.NameField := 'SliderProto';
fieldValue126 := TfieldValueNode.Create;
fieldValue126.NameField := 'sliderTranslation';
fieldValue126.Value := '0 0.7 0';
{ .AddFieldValue }
ProtoInstance125.FieldValue := fieldValue126;
fieldValue127 := TfieldValueNode.Create;
fieldValue127.NameField := 'textString';
fieldValue127.Value := '\"a=\"';
{ .AddFieldValue }
ProtoInstance125.FieldValue := fieldValue127;
fieldValue128 := TfieldValueNode.Create;
fieldValue128.NameField := 'parameterScale';
fieldValue128.Value := '30';
{ .AddFieldValue }
ProtoInstance125.FieldValue := fieldValue128;
fieldValue129 := TfieldValueNode.Create;
fieldValue129.NameField := 'parameterName';
fieldValue129.Value := 'a';
{ .AddFieldValue }
ProtoInstance125.FieldValue := fieldValue129;
fieldValue130 := TfieldValueNode.Create;
fieldValue130.NameField := 'orbScript';
Script131 := TScriptNode.Create;
Script131 := Script60;
{ .AddChildren }
fieldValue130.AddChildren([Script131]);
{ .AddFieldValue }
ProtoInstance125.FieldValue := fieldValue130;
{ .AddChildren }
LayoutLayer72.AddChildren([ProtoInstance125]);
ProtoInstance132 := TProtoInstanceNode.Create;
ProtoInstance132.NameField := 'SliderProto';
fieldValue133 := TfieldValueNode.Create;
fieldValue133.NameField := 'sliderTranslation';
fieldValue133.Value := '0 0.4 0';
{ .AddFieldValue }
ProtoInstance132.FieldValue := fieldValue133;
fieldValue134 := TfieldValueNode.Create;
fieldValue134.NameField := 'textString';
fieldValue134.Value := '\"b=\"';
{ .AddFieldValue }
ProtoInstance132.FieldValue := fieldValue134;
fieldValue135 := TfieldValueNode.Create;
fieldValue135.NameField := 'parameterScale';
fieldValue135.Value := '30';
{ .AddFieldValue }
ProtoInstance132.FieldValue := fieldValue135;
fieldValue136 := TfieldValueNode.Create;
fieldValue136.NameField := 'parameterName';
fieldValue136.Value := 'b';
{ .AddFieldValue }
ProtoInstance132.FieldValue := fieldValue136;
fieldValue137 := TfieldValueNode.Create;
fieldValue137.NameField := 'orbScript';
Script138 := TScriptNode.Create;
Script138 := Script60;
{ .AddChildren }
fieldValue137.AddChildren([Script138]);
{ .AddFieldValue }
ProtoInstance132.FieldValue := fieldValue137;
{ .AddChildren }
LayoutLayer72.AddChildren([ProtoInstance132]);
ProtoInstance139 := TProtoInstanceNode.Create;
ProtoInstance139.NameField := 'SliderProto';
fieldValue140 := TfieldValueNode.Create;
fieldValue140.NameField := 'sliderTranslation';
fieldValue140.Value := '0 0.1 0';
{ .AddFieldValue }
ProtoInstance139.FieldValue := fieldValue140;
fieldValue141 := TfieldValueNode.Create;
fieldValue141.NameField := 'textString';
fieldValue141.Value := '\"c=\"';
{ .AddFieldValue }
ProtoInstance139.FieldValue := fieldValue141;
fieldValue142 := TfieldValueNode.Create;
fieldValue142.NameField := 'parameterScale';
fieldValue142.Value := '20';
{ .AddFieldValue }
ProtoInstance139.FieldValue := fieldValue142;
fieldValue143 := TfieldValueNode.Create;
fieldValue143.NameField := 'parameterName';
fieldValue143.Value := 'c';
{ .AddFieldValue }
ProtoInstance139.FieldValue := fieldValue143;
fieldValue144 := TfieldValueNode.Create;
fieldValue144.NameField := 'orbScript';
Script145 := TScriptNode.Create;
Script145 := Script60;
{ .AddChildren }
fieldValue144.AddChildren([Script145]);
{ .AddFieldValue }
ProtoInstance139.FieldValue := fieldValue144;
{ .AddChildren }
LayoutLayer72.AddChildren([ProtoInstance139]);
ProtoInstance146 := TProtoInstanceNode.Create;
ProtoInstance146.NameField := 'SliderProto';
fieldValue147 := TfieldValueNode.Create;
fieldValue147.NameField := 'sliderTranslation';
fieldValue147.Value := '0 -0.2 0';
{ .AddFieldValue }
ProtoInstance146.FieldValue := fieldValue147;
fieldValue148 := TfieldValueNode.Create;
fieldValue148.NameField := 'textString';
fieldValue148.Value := '\"d=\"';
{ .AddFieldValue }
ProtoInstance146.FieldValue := fieldValue148;
fieldValue149 := TfieldValueNode.Create;
fieldValue149.NameField := 'parameterScale';
fieldValue149.Value := '20';
{ .AddFieldValue }
ProtoInstance146.FieldValue := fieldValue149;
fieldValue150 := TfieldValueNode.Create;
fieldValue150.NameField := 'parameterName';
fieldValue150.Value := 'd';
{ .AddFieldValue }
ProtoInstance146.FieldValue := fieldValue150;
fieldValue151 := TfieldValueNode.Create;
fieldValue151.NameField := 'orbScript';
Script152 := TScriptNode.Create;
Script152 := Script60;
{ .AddChildren }
fieldValue151.AddChildren([Script152]);
{ .AddFieldValue }
ProtoInstance146.FieldValue := fieldValue151;
{ .AddChildren }
LayoutLayer72.AddChildren([ProtoInstance146]);
ProtoInstance153 := TProtoInstanceNode.Create;
ProtoInstance153.NameField := 'SliderProto';
fieldValue154 := TfieldValueNode.Create;
fieldValue154.NameField := 'sliderTranslation';
fieldValue154.Value := '0 -0.5 0';
{ .AddFieldValue }
ProtoInstance153.FieldValue := fieldValue154;
fieldValue155 := TfieldValueNode.Create;
fieldValue155.NameField := 'textString';
fieldValue155.Value := '\"tdelta=\"';
{ .AddFieldValue }
ProtoInstance153.FieldValue := fieldValue155;
fieldValue156 := TfieldValueNode.Create;
fieldValue156.NameField := 'parameterScale';
fieldValue156.Value := '6.28';
{ .AddFieldValue }
ProtoInstance153.FieldValue := fieldValue156;
fieldValue157 := TfieldValueNode.Create;
fieldValue157.NameField := 'parameterName';
fieldValue157.Value := 'tdelta';
{ .AddFieldValue }
ProtoInstance153.FieldValue := fieldValue157;
fieldValue158 := TfieldValueNode.Create;
fieldValue158.NameField := 'orbScript';
Script159 := TScriptNode.Create;
Script159 := Script60;
{ .AddChildren }
fieldValue158.AddChildren([Script159]);
{ .AddFieldValue }
ProtoInstance153.FieldValue := fieldValue158;
{ .AddChildren }
LayoutLayer72.AddChildren([ProtoInstance153]);
ProtoInstance160 := TProtoInstanceNode.Create;
ProtoInstance160.NameField := 'SliderProto';
fieldValue161 := TfieldValueNode.Create;
fieldValue161.NameField := 'sliderTranslation';
fieldValue161.Value := '0 -0.8 0';
{ .AddFieldValue }
ProtoInstance160.FieldValue := fieldValue161;
fieldValue162 := TfieldValueNode.Create;
fieldValue162.NameField := 'textString';
fieldValue162.Value := '\"pdelta=\"';
{ .AddFieldValue }
ProtoInstance160.FieldValue := fieldValue162;
fieldValue163 := TfieldValueNode.Create;
fieldValue163.NameField := 'parameterScale';
fieldValue163.Value := '6.28';
{ .AddFieldValue }
ProtoInstance160.FieldValue := fieldValue163;
fieldValue164 := TfieldValueNode.Create;
fieldValue164.NameField := 'parameterName';
fieldValue164.Value := 'pdelta';
{ .AddFieldValue }
ProtoInstance160.FieldValue := fieldValue164;
fieldValue165 := TfieldValueNode.Create;
fieldValue165.NameField := 'orbScript';
Script166 := TScriptNode.Create;
Script166 := Script60;
{ .AddChildren }
fieldValue165.AddChildren([Script166]);
{ .AddFieldValue }
ProtoInstance160.FieldValue := fieldValue165;
{ .AddChildren }
LayoutLayer72.AddChildren([ProtoInstance160]);
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
