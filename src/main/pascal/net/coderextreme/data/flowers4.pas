unit flowers4;

interface

uses X3DNodes;

function Createflowers4: TX3DRootNode;

implementation

uses CastleVectors;

function Createflowers4: TX3DRootNode;
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
X3DField31: TX3DField;
X3DField32: TX3DField;
X3DField33: TX3DField;
X3DField34: TX3DField;
X3DField35: TX3DField;
ShaderPart36: TShaderPartNode;
ShaderPart37: TShaderPartNode;
IndexedFaceSet38: TIndexedFaceSetNode;
Coordinate39: TCoordinateNode;
Script40: TScriptNode;
X3DField41: TX3DField;
X3DField42: TX3DField;
X3DField43: TX3DField;
X3DField44: TX3DField;
X3DField45: TX3DField;
X3DField46: TX3DField;
X3DField47: TX3DField;
TimeSensor48: TTimeSensorNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Shape'] := 4;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Meta['title'] := 'flowers4.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/flowers4.x3d';
X3D0.Meta['description'] := 'an animated flower';
Group16 := TGroupNode.Create;
NavigationInfo17 := TNavigationInfoNode.Create;
{ .AddChildren }
Group16.AddChildren([NavigationInfo17]);
Background18 := TBackgroundNode.Create;
Background18.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background18.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background18.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background18.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background18.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background18.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Group16.AddChildren([Background18]);
Transform19 := TTransformNode.Create;
Shape20 := TShapeNode.Create;
Appearance21 := TAppearanceNode.Create;
Material22 := TMaterialNode.Create;
Material22.DiffuseColor := Vector3(0.7,0.7,0.7);
Material22.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance21.Material := Material22;
ComposedCubeMapTexture23 := TComposedCubeMapTextureNode.Create;
ImageTexture24 := TImageTextureNode.Create;
ImageTexture24.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ .SetBackTexture }
ComposedCubeMapTexture23.BackTexture := ImageTexture24;
ImageTexture25 := TImageTextureNode.Create;
ImageTexture25.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .SetBottomTexture }
ComposedCubeMapTexture23.BottomTexture := ImageTexture25;
ImageTexture26 := TImageTextureNode.Create;
ImageTexture26.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ .SetFrontTexture }
ComposedCubeMapTexture23.FrontTexture := ImageTexture26;
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ .SetLeftTexture }
ComposedCubeMapTexture23.LeftTexture := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ .SetRightTexture }
ComposedCubeMapTexture23.RightTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .SetTopTexture }
ComposedCubeMapTexture23.TopTexture := ImageTexture29;
{ .SetTexture }
Appearance21.Texture := ComposedCubeMapTexture23;
ComposedShader30 := TComposedShaderNode.Create;
ComposedShader30.Language := 'GLSL';
X3DField31 := TX3DField.Create;
X3DField31.NameField := 'cube';
X3DField31.Type := 'SFInt32';
X3DField31.AccessType := 'inputOutput';
X3DField31.Value := '0';
{ .SetX3DField }
ComposedShader30.X3DField := X3DField31;
X3DField32 := TX3DField.Create;
X3DField32.NameField := 'chromaticDispertion';
X3DField32.AccessType := 'inputOutput';
X3DField32.Type := 'SFVec3f';
X3DField32.Value := '0.98 1 1.033';
{ .AddX3DField }
ComposedShader30.X3DField := X3DField32;
X3DField33 := TX3DField.Create;
X3DField33.NameField := 'bias';
X3DField33.Type := 'SFFloat';
X3DField33.AccessType := 'inputOutput';
X3DField33.Value := '0.5';
{ .AddX3DField }
ComposedShader30.X3DField := X3DField33;
X3DField34 := TX3DField.Create;
X3DField34.NameField := 'scale';
X3DField34.Type := 'SFFloat';
X3DField34.AccessType := 'inputOutput';
X3DField34.Value := '0.5';
{ .AddX3DField }
ComposedShader30.X3DField := X3DField34;
X3DField35 := TX3DField.Create;
X3DField35.NameField := 'power';
X3DField35.Type := 'SFFloat';
X3DField35.AccessType := 'inputOutput';
X3DField35.Value := '2';
{ .AddX3DField }
ComposedShader30.X3DField := X3DField35;
ShaderPart36 := TShaderPartNode.Create;
ShaderPart36.SetUrl(['../shaders/x_ite.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs']);
ShaderPart36.Type := 'VERTEX';
{ .AddParts }
ComposedShader30.Parts := ShaderPart36;
ShaderPart37 := TShaderPartNode.Create;
ShaderPart37.SetUrl(['../shaders/x_ite.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs']);
ShaderPart37.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader30.Parts := ShaderPart37;
{ .AddShaders }
Appearance21.Shaders := ComposedShader30;
{ .SetAppearance }
Shape20.Appearance := Appearance21;
{ <Sphere> }
IndexedFaceSet38 := TIndexedFaceSetNode.Create;
IndexedFaceSet38.Convex := False;
Coordinate39 := TCoordinateNode.Create;
{ .SetCoord }
IndexedFaceSet38.Coord := Coordinate39;
{ .SetGeometry }
Shape20.Geometry := IndexedFaceSet38;
{ .AddChild }
Transform19.AddChildren([Shape20]);
{ .AddChildren }
Group16.AddChildren([Transform19]);
Script40 := TScriptNode.Create;
X3DField41 := TX3DField.Create;
X3DField41.NameField := 'set_fraction';
X3DField41.AccessType := 'inputOnly';
X3DField41.Type := 'SFFloat';
{ .SetX3DField }
Script40.X3DField := X3DField41;
X3DField42 := TX3DField.Create;
X3DField42.NameField := 'coordinates';
X3DField42.AccessType := 'inputOutput';
X3DField42.Type := 'MFVec3f';
{ .AddX3DField }
Script40.X3DField := X3DField42;
X3DField43 := TX3DField.Create;
X3DField43.NameField := 'coordIndexes';
X3DField43.AccessType := 'outputOnly';
X3DField43.Type := 'MFInt32';
{ .AddX3DField }
Script40.X3DField := X3DField43;
X3DField44 := TX3DField.Create;
X3DField44.NameField := 'e';
X3DField44.Type := 'SFFloat';
X3DField44.AccessType := 'inputOutput';
X3DField44.Value := '5';
{ .AddX3DField }
Script40.X3DField := X3DField44;
X3DField45 := TX3DField.Create;
X3DField45.NameField := 'f';
X3DField45.Type := 'SFFloat';
X3DField45.AccessType := 'inputOutput';
X3DField45.Value := '5';
{ .AddX3DField }
Script40.X3DField := X3DField45;
X3DField46 := TX3DField.Create;
X3DField46.NameField := 'g';
X3DField46.Type := 'SFFloat';
X3DField46.AccessType := 'inputOutput';
X3DField46.Value := '5';
{ .AddX3DField }
Script40.X3DField := X3DField46;
X3DField47 := TX3DField.Create;
X3DField47.NameField := 'h';
X3DField47.Type := 'SFFloat';
X3DField47.AccessType := 'inputOutput';
X3DField47.Value := '5';
{ .AddX3DField }
Script40.X3DField := X3DField47;

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
{ .AddChildren }
Group16.AddChildren([Script40]);
TimeSensor48 := TTimeSensorNode.Create;
TimeSensor48.CycleInterval := 16;
TimeSensor48.Loop := True;
{ .AddChildren }
Group16.AddChildren([TimeSensor48]);
Group16.AddRoute(Script40.FdCoordindexes, IndexedFaceSet38.EventSet_coordindex);
{ .AddX3DRoute }
Group16.AddRoute(Script40.FdCoordinates, Coordinate39.EventSet_point);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor48.EventFraction_changed, Script40.EventSet_fraction);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group16]);
Result := X3D0;
end;

begin
end.
