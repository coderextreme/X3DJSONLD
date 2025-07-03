function flowers4: TX3DRootNode;
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
field31: TfieldNode;
field32: TfieldNode;
field33: TfieldNode;
field34: TfieldNode;
field35: TfieldNode;
ShaderPart36: TShaderPartNode;
ShaderPart37: TShaderPartNode;
IndexedFaceSet38: TIndexedFaceSetNode;
Coordinate39: TCoordinateNode;
Script40: TScriptNode;
field41: TfieldNode;
field42: TfieldNode;
field43: TfieldNode;
field44: TfieldNode;
field45: TfieldNode;
field46: TfieldNode;
field47: TfieldNode;
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
field31 := TfieldNode.Create;
field31.NameField := 'cube';
field31.Type := 'SFInt32';
field31.AccessType := 'inputOutput';
field31.Value := '0';
{ .AddField }
ComposedShader30.Field := field31;
field32 := TfieldNode.Create;
field32.NameField := 'chromaticDispertion';
field32.AccessType := 'inputOutput';
field32.Type := 'SFVec3f';
field32.Value := '0.98 1 1.033';
{ .AddField }
ComposedShader30.Field := field32;
field33 := TfieldNode.Create;
field33.NameField := 'bias';
field33.Type := 'SFFloat';
field33.AccessType := 'inputOutput';
field33.Value := '0.5';
{ .AddField }
ComposedShader30.Field := field33;
field34 := TfieldNode.Create;
field34.NameField := 'scale';
field34.Type := 'SFFloat';
field34.AccessType := 'inputOutput';
field34.Value := '0.5';
{ .AddField }
ComposedShader30.Field := field34;
field35 := TfieldNode.Create;
field35.NameField := 'power';
field35.Type := 'SFFloat';
field35.AccessType := 'inputOutput';
field35.Value := '2';
{ .AddField }
ComposedShader30.Field := field35;
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
field41 := TfieldNode.Create;
field41.NameField := 'set_fraction';
field41.AccessType := 'inputOnly';
field41.Type := 'SFFloat';
{ .AddField }
Script40.Field := field41;
field42 := TfieldNode.Create;
field42.NameField := 'coordinates';
field42.AccessType := 'inputOutput';
field42.Type := 'MFVec3f';
{ .AddField }
Script40.Field := field42;
field43 := TfieldNode.Create;
field43.NameField := 'coordIndexes';
field43.AccessType := 'outputOnly';
field43.Type := 'MFInt32';
{ .AddField }
Script40.Field := field43;
field44 := TfieldNode.Create;
field44.NameField := 'e';
field44.Type := 'SFFloat';
field44.AccessType := 'inputOutput';
field44.Value := '5';
{ .AddField }
Script40.Field := field44;
field45 := TfieldNode.Create;
field45.NameField := 'f';
field45.Type := 'SFFloat';
field45.AccessType := 'inputOutput';
field45.Value := '5';
{ .AddField }
Script40.Field := field45;
field46 := TfieldNode.Create;
field46.NameField := 'g';
field46.Type := 'SFFloat';
field46.AccessType := 'inputOutput';
field46.Value := '5';
{ .AddField }
Script40.Field := field46;
field47 := TfieldNode.Create;
field47.NameField := 'h';
field47.Type := 'SFFloat';
field47.AccessType := 'inputOutput';
field47.Value := '5';
{ .AddField }
Script40.Field := field47;

Script40.SetSourceCode('''ecmascript:\n"+
"function initialize() {\n"+
"     var resolution = 100;\n"+
"     updateCoordinates(resolution);\n"+
"     var cis = [];\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     cis.push(i*resolution+j);\n"+
"	     cis.push(i*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j);\n"+
"	     cis.push(-1);\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = new MFInt32(...cis);\n"+
"}\n"+
"\n"+
"function updateCoordinates(resolution) {\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var crds = [];\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"		crds.push(new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		));\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = new MFVec3f(...crds);\n"+
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
