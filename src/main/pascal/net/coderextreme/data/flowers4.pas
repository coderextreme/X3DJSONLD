unit flowers4;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createflowers4: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group16: TGroupNode;
NavigationInfo17: TNavigationInfoNode;
Background18: TBackgroundNode;
Transform19: TTransformNode;
Shape20: TShapeNode;
Appearance21: TAppearanceNode;
Material22: TMaterialNode;
ComposedCubeMapTexture23: TComposedCubeMapTextureNode;
ImageTexture24: TImageTextureNode;
ImageTexture25: TImageTextureNode;
ImageTexture26: TImageTextureNode;
ImageTexture27: TImageTextureNode;
ImageTexture28: TImageTextureNode;
ImageTexture29: TImageTextureNode;
ComposedShader30: TComposedShaderNode;
SFInt3231: TSFInt32;
SFVec3f32: TSFVec3f;
SFFloat33: TSFFloat;
SFFloat34: TSFFloat;
SFFloat35: TSFFloat;
ShaderPart36: TShaderPartNode;
ShaderPart37: TShaderPartNode;
IndexedFaceSet38: TIndexedFaceSetNode;
Coordinate39: TCoordinateNode;
Script40: TScriptNode;
SFFloat41: TSFFloat;
MFVec3f42: TMFVec3f;
MFInt3243: TMFInt32;
SFFloat44: TSFFloat;
SFFloat45: TSFFloat;
SFFloat46: TSFFloat;
SFFloat47: TSFFloat;
TimeSensor48: TTimeSensorNode;

procedure Initflowers4Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
{ METHOD .Component }
X3D0.Components['EnvironmentalEffects'] := 3;
{ METHOD .Component }
X3D0.Components['Shaders'] := 1;
{ METHOD .Component }
X3D0.Components['CubeMapTexturing'] := 1;
{ METHOD .Component }
X3D0.Components['Texturing'] := 1;
{ METHOD .Component }
X3D0.Components['Rendering'] := 1;
{ METHOD .Component }
X3D0.Components['Shape'] := 4;
{ METHOD .Component }
X3D0.Components['Grouping'] := 3;
{ METHOD .Component }
X3D0.Components['Core'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'flowers4.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manual';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/flowers4.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'an animated flower';
{ METHOD .Meta }
{ METHOD .Head }
Group16 := TGroupNode.Create;
NavigationInfo17 := TNavigationInfoNode.Create;
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(NavigationInfo17);
Background18 := TBackgroundNode.Create;
Background18.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background18.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background18.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background18.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background18.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background18.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(Background18);
Transform19 := TTransformNode.Create;
Shape20 := TShapeNode.Create;
Appearance21 := TAppearanceNode.Create;
Material22 := TMaterialNode.Create;
Material22.DiffuseColor := Vector3(0.7,0.7,0.7);
Material22.SpecularColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance21.Material := Material22;
ComposedCubeMapTexture23 := TComposedCubeMapTextureNode.Create;
ImageTexture24 := TImageTextureNode.Create;
ImageTexture24.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ METHOD .SetBackTexture }
ComposedCubeMapTexture23.BackTexture := ImageTexture24;
end;

procedure Initflowers4Part1;
begin

ImageTexture25 := TImageTextureNode.Create;
ImageTexture25.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ METHOD .SetBottomTexture }
ComposedCubeMapTexture23.BottomTexture := ImageTexture25;
ImageTexture26 := TImageTextureNode.Create;
ImageTexture26.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ METHOD .SetFrontTexture }
ComposedCubeMapTexture23.FrontTexture := ImageTexture26;
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ METHOD .SetLeftTexture }
ComposedCubeMapTexture23.LeftTexture := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ METHOD .SetRightTexture }
ComposedCubeMapTexture23.RightTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .SetTopTexture }
ComposedCubeMapTexture23.TopTexture := ImageTexture29;
{ METHOD .Texture }
Appearance21.Texture := ComposedCubeMapTexture23;
ComposedShader30 := TComposedShaderNode.Create;
ComposedShader30.Language := 'GLSL';
SFInt3231 := TSFInt32.CreateUndefined(ComposedShader30, false, 'cube');
SFInt3231.Value := '0';
{ METHOD .AddSFInt32 }
ComposedShader30.AddSFInt32([SFInt3231]);
SFVec3f32 := TSFVec3f.CreateUndefined(ComposedShader30, false, 'chromaticDispertion');
SFVec3f32.Value := '0.98 1 1.033';
{ METHOD .AddSFVec3f }
ComposedShader30.AddSFVec3f([SFVec3f32]);
SFFloat33 := TSFFloat.CreateUndefined(ComposedShader30, false, 'bias');
SFFloat33.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader30.AddSFFloat([SFFloat33]);
SFFloat34 := TSFFloat.CreateUndefined(ComposedShader30, false, 'scale');
SFFloat34.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader30.AddSFFloat([SFFloat34]);
SFFloat35 := TSFFloat.CreateUndefined(ComposedShader30, false, 'power');
SFFloat35.Value := '2';
{ METHOD .AddSFFloat }
ComposedShader30.AddSFFloat([SFFloat35]);
ShaderPart36 := TShaderPartNode.Create;
ShaderPart36.SetUrl(['../shaders/x_ite.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs']);
ShaderPart36.FdType.Value := 'VERTEX';
{ METHOD .Parts }
ComposedShader30.Parts := ShaderPart36;
ShaderPart37 := TShaderPartNode.Create;
ShaderPart37.SetUrl(['../shaders/x_ite.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs']);
ShaderPart37.FdType.Value := 'FRAGMENT';
end;

procedure Initflowers4Part2;
begin

{ METHOD .Parts }
ComposedShader30.Parts := ShaderPart37;
{ METHOD .AddChildren }
Appearance21.AddChildren([ComposedShader30]);
{ METHOD .Appearance }
Shape20.Appearance := Appearance21;
{ <Sphere> }
IndexedFaceSet38 := TIndexedFaceSetNode.Create;
IndexedFaceSet38.Convex := False;
Coordinate39 := TCoordinateNode.Create;
{ METHOD .Coord }
IndexedFaceSet38.Coord := Coordinate39;
{ METHOD .Geometry }
Shape20.Geometry := IndexedFaceSet38;
{ METHOD .FdChildren.Add }
Transform19.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(Transform19);
Script40 := TScriptNode.Create;
SFFloat41 := TSFFloat.CreateUndefined(Script40, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(SFFloat41);
MFVec3f42 := TMFVec3f.CreateUndefined(Script40, false, 'coordinates');
{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(MFVec3f42);
MFInt3243 := TMFInt32.CreateUndefined(Script40, false, 'coordIndexes');
{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(MFInt3243);
SFFloat44 := TSFFloat.CreateUndefined(Script40, false, 'e');
SFFloat44.Value := '5';
{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(SFFloat44);
SFFloat45 := TSFFloat.CreateUndefined(Script40, false, 'f');
SFFloat45.Value := '5';
{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(SFFloat45);
SFFloat46 := TSFFloat.CreateUndefined(Script40, false, 'g');
SFFloat46.Value := '5';
{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(SFFloat46);
SFFloat47 := TSFFloat.CreateUndefined(Script40, false, 'h');
SFFloat47.Value := '5';
{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(SFFloat47);

Script40.SetSourceCode('''ecmascript:\n"+
"function initialize() {\n"+
"     var resolution = 100;\n"+
"     updateCoordinates(resolution);\n"+
"     var localci = new MFInt32();\n"+
"     var arrIndex = 0;\n"+
"     for (var i = 0; i < resolution-1; i++) {\n"+
"     	for (var j = 0; j < resolution-1; j++) {\n"+
"	     localci[arrIndex++] = i*resolution+j;\n"+
"	     localci[arrIndex++] = i*resolution+j+1;\n"+
"	     localci[arrIndex++] = (i+1)*resolution+j+1;\n"+
"	     localci[arrIndex++] = (i+1)*resolution+j;\n"+
"	     localci[arrIndex++] = -1;\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = localci;\n"+
"}\n"+
"\n"+
"function updateCoordinates(resolution) {\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var localc = new MFVec3f();\n"+
"     var arrIndex = 0;\n"+
"     for (var i = 0; i < resolution; i++) {\n"+
"     	for (var j = 0; j < resolution; j++) {\n"+
"		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"		localc[arrIndex++] = new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		);\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = localc;\n"+
"}\n"+
"\n"+
"function set_fraction(fraction, eventTime) {\n"+
"	var choice = Math.floor(Math.random() * 4);\n"+
"	switch (choice) {\n"+
"	case 0:\n"+
"		e += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 1:\n"+
"		f += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 2:\n"+
"		g += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 3:\n"+
"		h += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	}\n"+
"	if (e < 1) {\n"+
"		e = 10;\n"+
"	}\n"+
"	if (f < 1) {\n"+
"		f = 10;\n"+
"	}\n"+
"	if (g < 1) {\n"+
"		g = 4;\n"+
"	}\n"+
"	if (h < 1) {\n"+
"		h = 4;\n"+
"	}\n"+
"	var resolution = 100;\n"+
"	updateCoordinates(resolution);\n"+
"}''');
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(Script40);
TimeSensor48 := TTimeSensorNode.Create;
TimeSensor48.CycleInterval := 16;
TimeSensor48.Loop := True;
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(TimeSensor48);
{ Original "OrbitScript.coordIndexes TO Orbit.EventSet_coordIndex }
{ Sample OrbitScript.coordIndexes TO Orbit.EventSet_coordIndex}
Group16.AddRoute(OrbitScript.[object Object], IndexedFaceSet38.EventSet_coordIndex);
{ METHOD .AddX3DROUTE }
{ Original "OrbitScript.coordinates TO OrbitCoordinates.EventSet_point }
{ Sample OrbitScript.coordinates TO OrbitCoordinates.EventSet_point}
Group16.AddRoute(OrbitScript.[object Object], Coordinate39.EventSet_point);
{ METHOD .AddX3DROUTE }
{ Original "Clock.EventFraction_changed TO OrbitScript.EventSet_fraction }
{ Sample Clock.EventFraction_changed TO OrbitScript.EventSet_fraction}
Group16.AddRoute(TimeSensor48.EventFraction_changed, Script40.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3D0.AddChildren([Group16]);
end;

function Createflowers4: TX3DRootNode;
begin
Initflowers4Part0;
Initflowers4Part1;
Initflowers4Part2;
Result := X3D0;
end;

begin
end.
