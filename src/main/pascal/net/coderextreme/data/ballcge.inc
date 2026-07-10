function ballcge: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group14: TGroupNode;
WorldInfo15: TWorldInfoNode;
NavigationInfo16: TNavigationInfoNode;
Viewpoint17: TViewpointNode;
Background18: TBackgroundNode;
Transform19: TTransformNode;
Shape20: TShapeNode;
Sphere21: TSphereNode;
Appearance22: TAppearanceNode;
Material23: TMaterialNode;
ComposedShader24: TComposedShaderNode;
field25: TfieldNode;
field26: TfieldNode;
ComposedCubeMapTexture27: TComposedCubeMapTextureNode;
ImageTexture28: TImageTextureNode;
ImageTexture29: TImageTextureNode;
ImageTexture30: TImageTextureNode;
ImageTexture31: TImageTextureNode;
ImageTexture32: TImageTextureNode;
ImageTexture33: TImageTextureNode;
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
X3D0.Components['Shaders'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Grouping'] := 3;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Core'] := 1;
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d';
X3D0.Meta['title'] := 'ball.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['description'] := 'a prismatic sphere';
Group14 := TGroupNode.Create;
WorldInfo15 := TWorldInfoNode.Create;
WorldInfo15.Title := 'ball.x3d';
{ .AddChildren }
Group14.AddChildren([WorldInfo15]);
NavigationInfo16 := TNavigationInfoNode.Create;
NavigationInfo16.SetAvatarSize([0.25,1.60000002384186,0.75]);
NavigationInfo16.SetType(['ANY','EXAMINE','FLY','LOOKAT']);
{ .AddChildren }
Group14.AddChildren([NavigationInfo16]);
Viewpoint17 := TViewpointNode.Create;
Viewpoint17.Position := Vector3(0,0,12);
Viewpoint17.Description := 'Tour Views';
{ .AddChildren }
Group14.AddChildren([Viewpoint17]);
Background18 := TBackgroundNode.Create;
Background18.SetTopUrl(['file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Background18.SetBackUrl(['file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background18.SetLeftUrl(['file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background18.SetFrontUrl(['file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background18.SetRightUrl(['file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background18.SetBottomUrl(['file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .AddChildren }
Group14.AddChildren([Background18]);
Transform19 := TTransformNode.Create;
Shape20 := TShapeNode.Create;
Sphere21 := TSphereNode.Create;
{ .SetGeometry }
Shape20.Geometry := Sphere21;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(0.699999988079071,0.699999988079071,0.699999988079071);
Material23.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance22.Material := Material23;
ComposedShader24 := TComposedShaderNode.Create;
ComposedShader24.Language := 'GLSL';
field25 := TfieldNode.Create;
field25.NameField := 'chromaticDispertion';
field25.AccessType := 'initializeOnly';
field25.Type := 'SFVec3f';
field25.Value := '0.980000019073486 1 1.03299999237061';
{ .AddField }
ComposedShader24.Field := field25;
field26 := TfieldNode.Create;
field26.NameField := 'cube';
field26.AccessType := 'initializeOnly';
field26.Type := 'SFNode';
ComposedCubeMapTexture27 := TComposedCubeMapTextureNode.Create;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ .SetBackTexture }
ComposedCubeMapTexture27.BackTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .SetBottomTexture }
ComposedCubeMapTexture27.BottomTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ .SetFrontTexture }
ComposedCubeMapTexture27.FrontTexture := ImageTexture30;
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ .SetLeftTexture }
ComposedCubeMapTexture27.LeftTexture := ImageTexture31;
ImageTexture32 := TImageTextureNode.Create;
ImageTexture32.SetUrl(['file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ .SetRightTexture }
ComposedCubeMapTexture27.RightTexture := ImageTexture32;
ImageTexture33 := TImageTextureNode.Create;
ImageTexture33.SetUrl(['file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .SetTopTexture }
ComposedCubeMapTexture27.TopTexture := ImageTexture33;
{ .AddChildren }
field26.AddChildren([ComposedCubeMapTexture27]);
{ .AddField }
ComposedShader24.Field := field26;
field34 := TfieldNode.Create;
field34.NameField := 'bias';
field34.AccessType := 'initializeOnly';
field34.Type := 'SFFloat';
field34.Value := '0.5';
{ .AddField }
ComposedShader24.Field := field34;
field35 := TfieldNode.Create;
field35.NameField := 'scale';
field35.AccessType := 'initializeOnly';
field35.Type := 'SFFloat';
field35.Value := '0.5';
{ .AddField }
ComposedShader24.Field := field35;
field36 := TfieldNode.Create;
field36.NameField := 'power';
field36.AccessType := 'initializeOnly';
field36.Type := 'SFFloat';
field36.Value := '2';
{ .AddField }
ComposedShader24.Field := field36;
ShaderPart37 := TShaderPartNode.Create;
ShaderPart37.SetUrl(['file:/C:/Users/jcarl/X3DJSONLD/src/main/shaders/castle.vs']);
ShaderPart37.Type := 'VERTEX';
{ .AddParts }
ComposedShader24.Parts := ShaderPart37;
ShaderPart38 := TShaderPartNode.Create;
ShaderPart38.SetUrl(['file:/C:/Users/jcarl/X3DJSONLD/src/main/shaders/castle.fs']);
ShaderPart38.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader24.Parts := ShaderPart38;
{ .AddShaders }
Appearance22.Shaders := ComposedShader24;
{ .SetAppearance }
Shape20.Appearance := Appearance22;
{ .AddChild }
Transform19.AddChildren([Shape20]);
{ .AddChildren }
Group14.AddChildren([Transform19]);
{ .AddGroup }
X3D0.AddChildren([Group14]);
Result := X3D0;
end;
