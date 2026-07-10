function ballx3dom: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group15: TGroupNode;
WorldInfo16: TWorldInfoNode;
NavigationInfo17: TNavigationInfoNode;
Viewpoint18: TViewpointNode;
Background19: TBackgroundNode;
Transform20: TTransformNode;
Shape21: TShapeNode;
Sphere22: TSphereNode;
Appearance23: TAppearanceNode;
Material24: TMaterialNode;
ComposedCubeMapTexture25: TComposedCubeMapTextureNode;
ImageTexture26: TImageTextureNode;
ImageTexture27: TImageTextureNode;
ImageTexture28: TImageTextureNode;
ImageTexture29: TImageTextureNode;
ImageTexture30: TImageTextureNode;
ImageTexture31: TImageTextureNode;
ComposedShader32: TComposedShaderNode;
field33: TfieldNode;
field34: TfieldNode;
ComposedCubeMapTexture35: TComposedCubeMapTextureNode;
field36: TfieldNode;
field37: TfieldNode;
field38: TfieldNode;
ShaderPart39: TShaderPartNode;
ShaderPart40: TShaderPartNode;
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
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Meta['title'] := 'ballx3dom.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d';
X3D0.Meta['description'] := 'a prismatic sphere';
Group15 := TGroupNode.Create;
WorldInfo16 := TWorldInfoNode.Create;
WorldInfo16.Title := 'ball.x3d';
{ .AddChildren }
Group15.AddChildren([WorldInfo16]);
NavigationInfo17 := TNavigationInfoNode.Create;
NavigationInfo17.SetType(['ANY','EXAMINE','FLY','LOOKAT']);
{ .AddChildren }
Group15.AddChildren([NavigationInfo17]);
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.Description := 'Tour Views';
{ .AddChildren }
Group15.AddChildren([Viewpoint18]);
Background19 := TBackgroundNode.Create;
Background19.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background19.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background19.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background19.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background19.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background19.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Group15.AddChildren([Background19]);
Transform20 := TTransformNode.Create;
Shape21 := TShapeNode.Create;
Sphere22 := TSphereNode.Create;
{ .SetGeometry }
Shape21.Geometry := Sphere22;
Appearance23 := TAppearanceNode.Create;
Material24 := TMaterialNode.Create;
Material24.DiffuseColor := Vector3(0.7,0.7,0.7);
Material24.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance23.Material := Material24;
ComposedCubeMapTexture25 := TComposedCubeMapTextureNode.Create;
ImageTexture26 := TImageTextureNode.Create;
ImageTexture26.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ .SetBackTexture }
ComposedCubeMapTexture25.BackTexture := ImageTexture26;
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .SetBottomTexture }
ComposedCubeMapTexture25.BottomTexture := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ .SetFrontTexture }
ComposedCubeMapTexture25.FrontTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ .SetLeftTexture }
ComposedCubeMapTexture25.LeftTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ .SetRightTexture }
ComposedCubeMapTexture25.RightTexture := ImageTexture30;
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .SetTopTexture }
ComposedCubeMapTexture25.TopTexture := ImageTexture31;
{ .SetTexture }
Appearance23.Texture := ComposedCubeMapTexture25;
ComposedShader32 := TComposedShaderNode.Create;
ComposedShader32.Language := 'GLSL';
field33 := TfieldNode.Create;
field33.NameField := 'chromaticDispertion';
field33.AccessType := 'inputOutput';
field33.Type := 'SFVec3f';
field33.Value := '0.98 1 1.033';
{ .AddField }
ComposedShader32.Field := field33;
field34 := TfieldNode.Create;
field34.NameField := 'cube';
field34.Type := 'SFNode';
field34.AccessType := 'inputOutput';
ComposedCubeMapTexture35 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture35 := ComposedCubeMapTexture25;
{ .AddChildren }
field34.AddChildren([ComposedCubeMapTexture35]);
{ .AddField }
ComposedShader32.Field := field34;
field36 := TfieldNode.Create;
field36.NameField := 'bias';
field36.AccessType := 'inputOutput';
field36.Type := 'SFFloat';
field36.Value := '0.5';
{ .AddField }
ComposedShader32.Field := field36;
field37 := TfieldNode.Create;
field37.NameField := 'scale';
field37.AccessType := 'inputOutput';
field37.Type := 'SFFloat';
field37.Value := '0.5';
{ .AddField }
ComposedShader32.Field := field37;
field38 := TfieldNode.Create;
field38.NameField := 'power';
field38.AccessType := 'inputOutput';
field38.Type := 'SFFloat';
field38.Value := '2';
{ .AddField }
ComposedShader32.Field := field38;
ShaderPart39 := TShaderPartNode.Create;
ShaderPart39.SetUrl(['../shaders/x3dom.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs']);
ShaderPart39.Type := 'VERTEX';
{ .AddParts }
ComposedShader32.Parts := ShaderPart39;
ShaderPart40 := TShaderPartNode.Create;
ShaderPart40.SetUrl(['../shaders/common.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs']);
ShaderPart40.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader32.Parts := ShaderPart40;
{ .AddShaders }
Appearance23.Shaders := ComposedShader32;
{ .SetAppearance }
Shape21.Appearance := Appearance23;
{ .AddChild }
Transform20.AddChildren([Shape21]);
{ .AddChildren }
Group15.AddChildren([Transform20]);
{ .AddGroup }
X3D0.AddChildren([Group15]);
Result := X3D0;
end;
