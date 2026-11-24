unit sliders;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

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
Transform98: TTransformNode;
PlaneSensor99: TPlaneSensorNode;
Transform100: TTransformNode;
TouchSensor101: TTouchSensorNode;
Transform102: TTransformNode;
Shape103: TShapeNode;
Text104: TTextNode;
FontStyle106: TFontStyleNode;
Appearance107: TAppearanceNode;
Material108: TMaterialNode;
Script109: TScriptNode;
SFFloat110: TSFFloat;
SFString111: TSFString;
SFVec3f112: TSFVec3f;
SFNode113: TSFNode;
SFFloat114: TSFFloat;
MFString115: TMFString;
X3DPrototype120: TX3DPrototypeNode;
SFVec3f121: TSFVec3f;
MFString122: TMFString;
SFFloat123: TSFFloat;
SFString124: TSFString;
SFNode125: TSFNode;
Script126: TScriptNode;
X3DPrototype127: TX3DPrototypeNode;
SFVec3f128: TSFVec3f;
MFString129: TMFString;
SFFloat130: TSFFloat;
SFString131: TSFString;
SFNode132: TSFNode;
Script133: TScriptNode;
X3DPrototype134: TX3DPrototypeNode;
SFVec3f135: TSFVec3f;
MFString136: TMFString;
SFFloat137: TSFFloat;
SFString138: TSFString;
SFNode139: TSFNode;
Script140: TScriptNode;
X3DPrototype141: TX3DPrototypeNode;
SFVec3f142: TSFVec3f;
MFString143: TMFString;
SFFloat144: TSFFloat;
SFString145: TSFString;
SFNode146: TSFNode;
Script147: TScriptNode;
X3DPrototype148: TX3DPrototypeNode;
SFVec3f149: TSFVec3f;
MFString150: TMFString;
SFFloat151: TSFFloat;
SFString152: TSFString;
SFNode153: TSFNode;
Script154: TScriptNode;
X3DPrototype155: TX3DPrototypeNode;
SFVec3f156: TSFVec3f;
MFString157: TMFString;
SFFloat158: TSFFloat;
SFString159: TSFString;
SFNode160: TSFNode;
Script161: TScriptNode;
Layer162: TLayerNode;
Viewpoint163: TViewpointNode;

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
Group15 := TGroupNode.Create;;
LayerSet16 := TLayerSetNode.Create;;
LayerSet16.ActiveLayer := 1;
LayerSet16.SetOrder([1,2,3]);
Layer17 := TLayerNode.Create;;
Layer17.Pickable := True;
Layer17.SetObjectType(['ALL']);
NavigationInfo18 := TNavigationInfoNode.Create;;
NavigationInfo18.SetType(['EXAMINE']);
NavigationInfo18.SetAvatarSize([0.25,1.75,0.75]);
{ METHOD .FdChildren.Add }
Layer17.FdChildren.Add(NavigationInfo18);
DirectionalLight19 := TDirectionalLightNode.Create;;
DirectionalLight19.AmbientIntensity := 0.2;
DirectionalLight19.Direction := Vector3(0,-1,0);
{ METHOD .FdChildren.Add }
Layer17.FdChildren.Add(DirectionalLight19);
DirectionalLight20 := TDirectionalLightNode.Create;;
DirectionalLight20.AmbientIntensity := 0.2;
end;

procedure InitslidersPart1;
begin

DirectionalLight20.Direction := Vector3(-1,-0.1,-1);
{ METHOD .FdChildren.Add }
Layer17.FdChildren.Add(DirectionalLight20);
Viewpoint21 := TViewpointNode.Create;;
Viewpoint21.Description := 'My Overview';
Viewpoint21.FieldOfView := 1.570796;
Viewpoint21.Position := Vector3(0,1.75,60);
{ METHOD .FdChildren.Add }
Layer17.FdChildren.Add(Viewpoint21);
Group22 := TGroupNode.Create;;
{ Arrow X }
Transform23 := TTransformNode.Create;;
Transform23.Translation := Vector3(25,0,0);
Transform23.Rotation := Vector4(0,0,-1,1.57);
Shape24 := TShapeNode.Create;;
Cylinder25 := TCylinderNode.Create;;
Cylinder25.Radius := 0.35;
Cylinder25.Height := 50;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape24.Geometry := Cylinder25;
Appearance26 := TAppearanceNode.Create;;
Material27 := TMaterialNode.Create;;
Material27.DiffuseColor := Vector3(1,0,0);
Material27.EmissiveColor := Vector3(1,0,0);
{ METHOD .SetMaterial }
Appearance26.Material := Material27;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape24.Appearance := Appearance26;
{ METHOD .FdChildren.Add }
Transform23.FdChildren.Add(Shape24);
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(Transform23);
Transform28 := TTransformNode.Create;;
Transform28.Translation := Vector3(50,0,0);
Transform28.Rotation := Vector4(0,0,-1,1.57);
Shape29 := TShapeNode.Create;;
Cone30 := TConeNode.Create;;
Cone30.BottomRadius := 0.8;
end;

procedure InitslidersPart2;
begin

Cone30.Height := 3;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape29.Geometry := Cone30;
Appearance31 := TAppearanceNode.Create;;
{ METHOD .SetMaterial }
Appearance31.Material := Material27;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape29.Appearance := Appearance31;
{ METHOD .FdChildren.Add }
Transform28.FdChildren.Add(Shape29);
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(Transform28);
{ Arrow Y }
Transform33 := TTransformNode.Create;;
Transform33.Translation := Vector3(0,25,0);
Shape34 := TShapeNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape34.Geometry := Cylinder25;
Appearance36 := TAppearanceNode.Create;;
Material37 := TMaterialNode.Create;;
Material37.DiffuseColor := Vector3(0,1,0);
Material37.EmissiveColor := Vector3(0,1,0);
{ METHOD .SetMaterial }
Appearance36.Material := Material37;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape34.Appearance := Appearance36;
{ METHOD .FdChildren.Add }
Transform33.FdChildren.Add(Shape34);
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(Transform33);
Transform38 := TTransformNode.Create;;
Transform38.Translation := Vector3(0,50,0);
Shape39 := TShapeNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape39.Geometry := Cone30;
Appearance41 := TAppearanceNode.Create;;
{ METHOD .SetMaterial }
Appearance41.Material := Material37;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape39.Appearance := Appearance41;
{ METHOD .FdChildren.Add }
Transform38.FdChildren.Add(Shape39);
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(Transform38);
{ Arrow Z }
Transform43 := TTransformNode.Create;;
Transform43.Translation := Vector3(0,0,25);
Transform43.Rotation := Vector4(1,0,0,1.57);
end;

procedure InitslidersPart3;
begin

Shape44 := TShapeNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape44.Geometry := Cylinder25;
Appearance46 := TAppearanceNode.Create;;
Material47 := TMaterialNode.Create;;
Material47.DiffuseColor := Vector3(0,0,1);
Material47.EmissiveColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance46.Material := Material47;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape44.Appearance := Appearance46;
{ METHOD .FdChildren.Add }
Transform43.FdChildren.Add(Shape44);
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(Transform43);
Transform48 := TTransformNode.Create;;
Transform48.Translation := Vector3(0,0,50);
Transform48.Rotation := Vector4(1,0,0,1.57);
Shape49 := TShapeNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape49.Geometry := Cone30;
Appearance51 := TAppearanceNode.Create;;
{ METHOD .SetMaterial }
Appearance51.Material := Material47;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape49.Appearance := Appearance51;
{ METHOD .FdChildren.Add }
Transform48.FdChildren.Add(Shape49);
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(Transform48);
{ METHOD .FdChildren.Add }
Layer17.FdChildren.Add(Group22);
{ the model that is being reviewed by the users of this scene }
Transform53 := TTransformNode.Create;;
Transform54 := TTransformNode.Create;;
Shape55 := TShapeNode.Create;;
IndexedFaceSet56 := TIndexedFaceSetNode.Create;;
IndexedFaceSet56.Convex := False;
Coordinate57 := TCoordinateNode.Create;;
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet56.Coord := Coordinate57;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape55.Geometry := IndexedFaceSet56;
end;

procedure InitslidersPart4;
begin

Appearance58 := TAppearanceNode.Create;;
Material59 := TMaterialNode.Create;;
Material59.DiffuseColor := Vector3(0.7,0.7,0.7);
Material59.SpecularColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance58.Material := Material59;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape55.Appearance := Appearance58;
{ METHOD .FdChildren.Add }
Transform54.FdChildren.Add(Shape55);
{ METHOD .FdChildren.Add }
Transform53.FdChildren.Add(Transform54);
{ METHOD .FdChildren.Add }
Layer17.FdChildren.Add(Transform53);
Script60 := TScriptNode.Create;;
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
Layer17.AddRoute(OrbitScript.undefined, IndexedFaceSet56.EventSet_coordIndex);
{ METHOD .AddX3DROUTE }
{ Original "OrbitScript.coordinates TO OrbitCoordinates.EventSet_point }
{ Sample OrbitScript.coordinates TO OrbitCoordinates.EventSet_point}
Layer17.AddRoute(OrbitScript.undefined, Coordinate57.EventSet_point);
{ METHOD .AddX3DROUTE }
{ METHOD .FdLayers.Add }
LayerSet16.FdLayers.Add(Layer17);
LayoutLayer72 := TLayoutLayerNode.Create;;
LayoutLayer72.Pickable := True;
LayoutLayer72.SetObjectType(['ALL']);
Layout73 := TLayoutNode.Create;;
Layout73.SetAlign(['LEFT','BOTTOM']);
Layout73.SetOffset([-0.2,0.19]);
Layout73.SetSize([0.4,0.6]);
{ METHOD .SetLayout }
LayoutLayer72.Layout := Layout73;
Viewport74 := TViewportNode.Create;;
Viewport74.SetClipBoundary([0,1,0,1]);
{ METHOD .Viewport }
{ METHOD.SET .Viewport }
LayoutLayer72.Viewport := Viewport74;
Transform75 := TTransformNode.Create;;
Transform75.Translation := Vector3(0,0,-3);
Shape76 := TShapeNode.Create;;
Appearance77 := TAppearanceNode.Create;;
Material78 := TMaterialNode.Create;;
Material78.DiffuseColor := Vector3(0,0,0);
Material78.Transparency := 0.7;
{ METHOD .SetMaterial }
Appearance77.Material := Material78;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape76.Appearance := Appearance77;
Box79 := TBoxNode.Create;;
Box79.Size := Vector3(100,100,0.02);
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape76.Geometry := Box79;
{ METHOD .FdChildren.Add }
Transform75.FdChildren.Add(Shape76);
{ METHOD .FdChildren.Add }
LayoutLayer72.FdChildren.Add(Transform75);
Transform80 := TTransformNode.Create;;
Transform81 := TTransformNode.Create;;
Transform81.Translation := Vector3(0,0,-20);
Shape82 := TShapeNode.Create;;
Text83 := TTextNode.Create;;
Text83.SetText(['r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)']);
FontStyle84 := TFontStyleNode.Create;;
FontStyle84.Size := 0.09;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text83.FontStyle := FontStyle84;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape82.Geometry := Text83;
Appearance85 := TAppearanceNode.Create;;
Material86 := TMaterialNode.Create;;
Material86.DiffuseColor := Vector3(1,1,0);
{ METHOD .SetMaterial }
Appearance85.Material := Material86;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape82.Appearance := Appearance85;
{ METHOD .FdChildren.Add }
Transform81.FdChildren.Add(Shape82);
{ METHOD .FdChildren.Add }
Transform80.FdChildren.Add(Transform81);
{ METHOD .FdChildren.Add }
LayoutLayer72.FdChildren.Add(Transform80);
{ The slider parameters }
X3DPrototype87 := TX3DPrototype.Create;;
X3DInterfaceDeclaration88 := TX3DInterfaceDeclaration.Create(nil);;
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
X3DPrototype94 := TX3DPrototype.Create;;
Group95 := TGroupNode.Create;;
Transform96 := TTransformNode.Create;;
Transform96.Translation := Vector3(0,0.7,0);
Transform98 := TTransformNode.Create;;
Transform98.Translation := Vector3(0,0,0.1);
PlaneSensor99 := TPlaneSensorNode.Create;;
PlaneSensor99.Description := 'Grab with mouse to adjust slider';
PlaneSensor99.MaxPosition := Vector2(1,0);
{ METHOD .FdChildren.Add }
Transform98.FdChildren.Add(PlaneSensor99);
Transform100 := TTransformNode.Create;;
Transform100.Translation := Vector3(0,0,0);
TouchSensor101 := TTouchSensorNode.Create;;
TouchSensor101.Description := 'Maybe start dragging this?';
{ METHOD .FdChildren.Add }
Transform100.FdChildren.Add(TouchSensor101);
{ METHOD .FdChildren.Add }
Transform98.FdChildren.Add(Transform100);
Transform102 := TTransformNode.Create;;
Shape103 := TShapeNode.Create;;
Text104 := TTextNode.Create;;
Text104.SetText(['a=']);
FontStyle106 := TFontStyleNode.Create;;
FontStyle106.Style := fsBOLD;
FontStyle106.Size := 0.23;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text104.FontStyle := FontStyle106;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape103.Geometry := Text104;
Appearance107 := TAppearanceNode.Create;;
Material108 := TMaterialNode.Create;;
{ METHOD .SetMaterial }
Appearance107.Material := Material108;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape103.Appearance := Appearance107;
{ METHOD .FdChildren.Add }
Transform102.FdChildren.Add(Shape103);
{ METHOD .FdChildren.Add }
Transform98.FdChildren.Add(Transform102);
{ METHOD .FdChildren.Add }
Transform96.FdChildren.Add(Transform98);
{ METHOD .FdChildren.Add }
Group95.FdChildren.Add(Transform96);
Script109 := TScriptNode.Create;;
SFFloat110 := TSFFloat.CreateUndefined(Script109, false, 'protoScale');
{ METHOD .Fd.AddCustomField }
Script109.AddCustomField(SFFloat110);
SFString111 := TSFString.CreateUndefined(Script109, false, 'protoParameterName');
{ METHOD .Fd.AddCustomField }
Script109.AddCustomField(SFString111);
SFVec3f112 := TSFVec3f.CreateUndefined(Script109, false, 'newTranslation');
SFVec3f112.Value := '1 1 1';
{ METHOD .Fd.AddCustomField }
Script109.AddCustomField(SFVec3f112);
SFNode113 := TSFNode.CreateUndefined(Script109, false, 'protoScript');
{ METHOD .Fd.AddCustomField }
Script109.AddCustomField(SFNode113);
SFFloat114 := TSFFloat.CreateUndefined(Script109, false, 'protoValue');
SFFloat114.Value := '1';
{ METHOD .Fd.AddCustomField }
Script109.AddCustomField(SFFloat114);
MFString115 := TMFString.CreateUndefined(Script109, false, 'protoText');
MFString115.Value := '\"1.0\"';
{ METHOD .Fd.AddCustomField }
Script109.AddCustomField(MFString115);

Script109.SetSourceCode('''ecmascript:\n"+
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
Group95.FdChildren.Add(Script109);
{ Original "protoSensor.EventTranslation_changed TO protoTransform.FdTranslation.EventIn }
{ Sample protoSensor.EventTranslation_changed TO protoTransform.FdTranslation.EventIn}
Group95.AddRoute(PlaneSensor99.EventTranslation_changed, Transform98.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "protoSensor.EventTranslation_changed TO protoValueTransformerScript.newTranslation }
{ Sample protoSensor.EventTranslation_changed TO protoValueTransformerScript.newTranslation}
Group95.AddRoute(PlaneSensor99.EventTranslation_changed, SFVec3f112);
{ METHOD .AddX3DROUTE }
{ Original "protoValueTransformerScript.protoText TO protoText.string }
{ Sample protoValueTransformerScript.protoText TO protoText.string}
Group95.AddRoute(protoValueTransformerScript.undefined, Text104.string);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3DPrototype94.AddChildren([Group95]);
{ METHOD .AddX3DPrototype }
X3DPrototype87.AddX3DPrototype([X3DPrototype94]);
{ METHOD .AddX3DPrototype }
LayoutLayer72.AddX3DPrototype([X3DPrototype87]);
X3DPrototype120 := TX3DPrototypeNode;
SFVec3f121 := TSFVec3f.CreateUndefined(X3DPrototype120, false, 'sliderTranslation');
SFVec3f121.Value := '0 0.7 0';
{ METHOD .AddSFVec3f }
X3DPrototype120.AddSFVec3f([SFVec3f121]);
MFString122 := TMFString.CreateUndefined(X3DPrototype120, false, 'textString');
MFString122.Value := '\"a=\"';
{ METHOD .AddMFString }
X3DPrototype120.AddMFString([MFString122]);
SFFloat123 := TSFFloat.CreateUndefined(X3DPrototype120, false, 'parameterScale');
SFFloat123.Value := '30';
{ METHOD .AddSFFloat }
X3DPrototype120.AddSFFloat([SFFloat123]);
SFString124 := TSFString.CreateUndefined(X3DPrototype120, false, 'parameterName');
SFString124.Value := 'a';
{ METHOD .AddSFString }
X3DPrototype120.AddSFString([SFString124]);
SFNode125 := TSFNode.CreateUndefined(X3DPrototype120, false, 'orbScript');
{ METHOD .AddScript }
SFNode125.AddScript([Script60]);
{ METHOD .AddSFNode }
X3DPrototype120.AddSFNode([SFNode125]);
{ METHOD .AddX3DPrototype }
LayoutLayer72.AddX3DPrototype([X3DPrototype120]);
X3DPrototype127 := TX3DPrototypeNode;
SFVec3f128 := TSFVec3f.CreateUndefined(X3DPrototype127, false, 'sliderTranslation');
SFVec3f128.Value := '0 0.4 0';
{ METHOD .AddSFVec3f }
X3DPrototype127.AddSFVec3f([SFVec3f128]);
MFString129 := TMFString.CreateUndefined(X3DPrototype127, false, 'textString');
MFString129.Value := '\"b=\"';
{ METHOD .AddMFString }
X3DPrototype127.AddMFString([MFString129]);
SFFloat130 := TSFFloat.CreateUndefined(X3DPrototype127, false, 'parameterScale');
SFFloat130.Value := '30';
{ METHOD .AddSFFloat }
X3DPrototype127.AddSFFloat([SFFloat130]);
SFString131 := TSFString.CreateUndefined(X3DPrototype127, false, 'parameterName');
SFString131.Value := 'b';
{ METHOD .AddSFString }
X3DPrototype127.AddSFString([SFString131]);
SFNode132 := TSFNode.CreateUndefined(X3DPrototype127, false, 'orbScript');
{ METHOD .AddScript }
SFNode132.AddScript([Script60]);
{ METHOD .AddSFNode }
X3DPrototype127.AddSFNode([SFNode132]);
{ METHOD .AddX3DPrototype }
LayoutLayer72.AddX3DPrototype([X3DPrototype127]);
X3DPrototype134 := TX3DPrototypeNode;
SFVec3f135 := TSFVec3f.CreateUndefined(X3DPrototype134, false, 'sliderTranslation');
SFVec3f135.Value := '0 0.1 0';
{ METHOD .AddSFVec3f }
X3DPrototype134.AddSFVec3f([SFVec3f135]);
MFString136 := TMFString.CreateUndefined(X3DPrototype134, false, 'textString');
MFString136.Value := '\"c=\"';
{ METHOD .AddMFString }
X3DPrototype134.AddMFString([MFString136]);
SFFloat137 := TSFFloat.CreateUndefined(X3DPrototype134, false, 'parameterScale');
SFFloat137.Value := '20';
{ METHOD .AddSFFloat }
X3DPrototype134.AddSFFloat([SFFloat137]);
SFString138 := TSFString.CreateUndefined(X3DPrototype134, false, 'parameterName');
SFString138.Value := 'c';
{ METHOD .AddSFString }
X3DPrototype134.AddSFString([SFString138]);
SFNode139 := TSFNode.CreateUndefined(X3DPrototype134, false, 'orbScript');
{ METHOD .AddScript }
SFNode139.AddScript([Script60]);
{ METHOD .AddSFNode }
X3DPrototype134.AddSFNode([SFNode139]);
{ METHOD .AddX3DPrototype }
LayoutLayer72.AddX3DPrototype([X3DPrototype134]);
X3DPrototype141 := TX3DPrototypeNode;
SFVec3f142 := TSFVec3f.CreateUndefined(X3DPrototype141, false, 'sliderTranslation');
SFVec3f142.Value := '0 -0.2 0';
{ METHOD .AddSFVec3f }
X3DPrototype141.AddSFVec3f([SFVec3f142]);
MFString143 := TMFString.CreateUndefined(X3DPrototype141, false, 'textString');
MFString143.Value := '\"d=\"';
{ METHOD .AddMFString }
X3DPrototype141.AddMFString([MFString143]);
SFFloat144 := TSFFloat.CreateUndefined(X3DPrototype141, false, 'parameterScale');
SFFloat144.Value := '20';
{ METHOD .AddSFFloat }
X3DPrototype141.AddSFFloat([SFFloat144]);
SFString145 := TSFString.CreateUndefined(X3DPrototype141, false, 'parameterName');
SFString145.Value := 'd';
{ METHOD .AddSFString }
X3DPrototype141.AddSFString([SFString145]);
SFNode146 := TSFNode.CreateUndefined(X3DPrototype141, false, 'orbScript');
{ METHOD .AddScript }
SFNode146.AddScript([Script60]);
{ METHOD .AddSFNode }
X3DPrototype141.AddSFNode([SFNode146]);
{ METHOD .AddX3DPrototype }
LayoutLayer72.AddX3DPrototype([X3DPrototype141]);
X3DPrototype148 := TX3DPrototypeNode;
SFVec3f149 := TSFVec3f.CreateUndefined(X3DPrototype148, false, 'sliderTranslation');
SFVec3f149.Value := '0 -0.5 0';
{ METHOD .AddSFVec3f }
X3DPrototype148.AddSFVec3f([SFVec3f149]);
MFString150 := TMFString.CreateUndefined(X3DPrototype148, false, 'textString');
MFString150.Value := '\"tdelta=\"';
{ METHOD .AddMFString }
X3DPrototype148.AddMFString([MFString150]);
SFFloat151 := TSFFloat.CreateUndefined(X3DPrototype148, false, 'parameterScale');
SFFloat151.Value := '6.28';
{ METHOD .AddSFFloat }
X3DPrototype148.AddSFFloat([SFFloat151]);
SFString152 := TSFString.CreateUndefined(X3DPrototype148, false, 'parameterName');
SFString152.Value := 'tdelta';
{ METHOD .AddSFString }
X3DPrototype148.AddSFString([SFString152]);
SFNode153 := TSFNode.CreateUndefined(X3DPrototype148, false, 'orbScript');
{ METHOD .AddScript }
SFNode153.AddScript([Script60]);
{ METHOD .AddSFNode }
X3DPrototype148.AddSFNode([SFNode153]);
{ METHOD .AddX3DPrototype }
LayoutLayer72.AddX3DPrototype([X3DPrototype148]);
X3DPrototype155 := TX3DPrototypeNode;
SFVec3f156 := TSFVec3f.CreateUndefined(X3DPrototype155, false, 'sliderTranslation');
SFVec3f156.Value := '0 -0.8 0';
{ METHOD .AddSFVec3f }
X3DPrototype155.AddSFVec3f([SFVec3f156]);
MFString157 := TMFString.CreateUndefined(X3DPrototype155, false, 'textString');
MFString157.Value := '\"pdelta=\"';
{ METHOD .AddMFString }
X3DPrototype155.AddMFString([MFString157]);
SFFloat158 := TSFFloat.CreateUndefined(X3DPrototype155, false, 'parameterScale');
SFFloat158.Value := '6.28';
{ METHOD .AddSFFloat }
X3DPrototype155.AddSFFloat([SFFloat158]);
SFString159 := TSFString.CreateUndefined(X3DPrototype155, false, 'parameterName');
SFString159.Value := 'pdelta';
{ METHOD .AddSFString }
X3DPrototype155.AddSFString([SFString159]);
SFNode160 := TSFNode.CreateUndefined(X3DPrototype155, false, 'orbScript');
{ METHOD .AddScript }
SFNode160.AddScript([Script60]);
{ METHOD .AddSFNode }
X3DPrototype155.AddSFNode([SFNode160]);
{ METHOD .AddX3DPrototype }
LayoutLayer72.AddX3DPrototype([X3DPrototype155]);
{ METHOD .FdLayers.Add }
LayerSet16.FdLayers.Add(LayoutLayer72);
Layer162 := TLayerNode.Create;;
Layer162.Pickable := True;
Layer162.SetObjectType(['ALL']);
Viewpoint163 := TViewpointNode.Create;;
Viewpoint163.Description := 'My Humanoids';
Viewpoint163.FieldOfView := 1.570796;
Viewpoint163.Position := Vector3(0,1.75,80);
{ METHOD .FdChildren.Add }
Layer162.FdChildren.Add(Viewpoint163);
{ METHOD .FdLayers.Add }
LayerSet16.FdLayers.Add(Layer162);
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
InitslidersPart4;
Result := X3D0;
end;

begin
end.
