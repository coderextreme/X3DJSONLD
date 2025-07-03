function cgeball: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group13: TGroupNode;
WorldInfo14: TWorldInfoNode;
NavigationInfo15: TNavigationInfoNode;
Viewpoint16: TViewpointNode;
Background17: TBackgroundNode;
Transform18: TTransformNode;
Shape19: TShapeNode;
Sphere20: TSphereNode;
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
ComposedCubeMapTexture33: TComposedCubeMapTextureNode;
field34: TfieldNode;
field35: TfieldNode;
field36: TfieldNode;
ShaderPart37: TShaderPartNode;
ShaderPart38: TShaderPartNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
{ component name='Shaders' level='1'></component }
{ component name='CubeMapTexturing' level='1'></component }
X3D0.Meta['title'] := 'ball.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/personal/ball.x3d';
X3D0.Meta['description'] := 'a prismatic sphere';
Group13 := TGroupNode.Create;
WorldInfo14 := TWorldInfoNode.Create;
WorldInfo14.Title := 'ball.x3d';
{ .AddChildren }
Group13.AddChildren([WorldInfo14]);
NavigationInfo15 := TNavigationInfoNode.Create;
NavigationInfo15.SetType(['ANY','EXAMINE','FLY','LOOKAT']);
{ .AddChildren }
Group13.AddChildren([NavigationInfo15]);
Viewpoint16 := TViewpointNode.Create;
Viewpoint16.Description := 'Tour Views';
Viewpoint16.Position := Vector3(0,0,12);
{ .AddChildren }
Group13.AddChildren([Viewpoint16]);
Background17 := TBackgroundNode.Create;
Background17.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background17.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background17.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background17.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background17.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background17.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Group13.AddChildren([Background17]);
Transform18 := TTransformNode.Create;
Shape19 := TShapeNode.Create;
Sphere20 := TSphereNode.Create;
{ .SetGeometry }
Shape19.Geometry := Sphere20;
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
field31.NameField := 'chromaticDispertion';
field31.AccessType := 'inputOutput';
field31.Type := 'SFVec3f';
field31.Value := '0.98 1 1.033';
{ .AddField }
ComposedShader30.Field := field31;
field32 := TfieldNode.Create;
field32.NameField := 'cube';
field32.Type := 'SFNode';
field32.AccessType := 'inputOutput';
ComposedCubeMapTexture33 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture33 := ComposedCubeMapTexture23;
{ .AddChildren }
field32.AddChildren([ComposedCubeMapTexture33]);
{ .AddField }
ComposedShader30.Field := field32;
field34 := TfieldNode.Create;
field34.NameField := 'bias';
field34.AccessType := 'inputOutput';
field34.Type := 'SFFloat';
field34.Value := '0.5';
{ .AddField }
ComposedShader30.Field := field34;
field35 := TfieldNode.Create;
field35.NameField := 'scale';
field35.AccessType := 'inputOutput';
field35.Type := 'SFFloat';
field35.Value := '0.5';
{ .AddField }
ComposedShader30.Field := field35;
field36 := TfieldNode.Create;
field36.NameField := 'power';
field36.AccessType := 'inputOutput';
field36.Type := 'SFFloat';
field36.Value := '2';
{ .AddField }
ComposedShader30.Field := field36;
ShaderPart37 := TShaderPartNode.Create;
ShaderPart37.SetUrl(['../shaders/castle.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs']);
ShaderPart37.Type := 'VERTEX';
{ .AddParts }
ComposedShader30.Parts := ShaderPart37;
ShaderPart38 := TShaderPartNode.Create;
ShaderPart38.SetUrl(['../shaders/castle.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs']);
ShaderPart38.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader30.Parts := ShaderPart38;
{ .AddShaders }
Appearance21.Shaders := ComposedShader30;
{ .SetAppearance }
Shape19.Appearance := Appearance21;
{ .AddChild }
Transform18.AddChildren([Shape19]);
{ .AddChildren }
Group13.AddChildren([Transform18]);
{ .AddGroup }
X3D0.AddChildren([Group13]);
Result := X3D0;
end;
