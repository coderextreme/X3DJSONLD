function bumpyfreewrl: TX3DRootNode;
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
field35: TfieldNode;
field36: TfieldNode;
field37: TfieldNode;
field38: TfieldNode;
field39: TfieldNode;
field40: TfieldNode;
field41: TfieldNode;
field42: TfieldNode;
field43: TfieldNode;
ShaderPart44: TShaderPartNode;
ShaderPart45: TShaderPartNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
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
{ <component name='Shape' level='4'></component> }
X3D0.Meta['title'] := 'bumpyfreewrl.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := 'A flower';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/bumpfreewrl.x3d';
Group15 := TGroupNode.Create;
WorldInfo16 := TWorldInfoNode.Create;
WorldInfo16.Title := 'bumpyx_ite.x3d';
{ .AddChildren }
Group15.AddChildren([WorldInfo16]);
NavigationInfo17 := TNavigationInfoNode.Create;
{ .AddChildren }
Group15.AddChildren([NavigationInfo17]);
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.Position := Vector3(0,0,40);
Viewpoint18.Description := 'Transparent rose';
{ .AddChildren }
Group15.AddChildren([Viewpoint18]);
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
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
Sphere22.Radius := 5;
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
{ .SetBack }
ComposedCubeMapTexture25.Back := ImageTexture26;
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .SetBottom }
ComposedCubeMapTexture25.Bottom := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ .SetFront }
ComposedCubeMapTexture25.Front := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ .SetLeft }
ComposedCubeMapTexture25.Left := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ .SetRight }
ComposedCubeMapTexture25.Right := ImageTexture30;
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .SetTop }
ComposedCubeMapTexture25.Top := ImageTexture31;
{ .SetTexture }
Appearance23.Texture := ComposedCubeMapTexture25;
ComposedShader32 := TComposedShaderNode.Create;
ComposedShader32.Language := 'GLSL';
field33 := TfieldNode.Create;
field33.NameField := 'chromaticDispertion';
field33.AccessType := 'inputOnly';
field33.Type := 'SFVec3f';
field33.Value := '0.98 1 1.033';
{ .AddField }
ComposedShader32.Field := field33;
field34 := TfieldNode.Create;
field34.NameField := 'fw_textureCoordGenType';
field34.AccessType := 'inputOnly';
field34.Type := 'SFInt32';
field34.Value := '0';
{ .AddField }
ComposedShader32.Field := field34;
field35 := TfieldNode.Create;
field35.NameField := 'bias';
field35.Type := 'SFFloat';
field35.AccessType := 'inputOnly';
field35.Value := '0.5';
{ .AddField }
ComposedShader32.Field := field35;
field36 := TfieldNode.Create;
field36.NameField := 'scale';
field36.Type := 'SFFloat';
field36.AccessType := 'inputOnly';
field36.Value := '0.5';
{ .AddField }
ComposedShader32.Field := field36;
field37 := TfieldNode.Create;
field37.NameField := 'power';
field37.Type := 'SFFloat';
field37.AccessType := 'inputOnly';
field37.Value := '2';
{ .AddField }
ComposedShader32.Field := field37;
field38 := TfieldNode.Create;
field38.NameField := 'a';
field38.Type := 'SFFloat';
field38.AccessType := 'inputOutput';
field38.Value := '10';
{ .AddField }
ComposedShader32.Field := field38;
field39 := TfieldNode.Create;
field39.NameField := 'b';
field39.Type := 'SFFloat';
field39.AccessType := 'inputOutput';
field39.Value := '1';
{ .AddField }
ComposedShader32.Field := field39;
field40 := TfieldNode.Create;
field40.NameField := 'c';
field40.Type := 'SFFloat';
field40.AccessType := 'inputOutput';
field40.Value := '5';
{ .AddField }
ComposedShader32.Field := field40;
field41 := TfieldNode.Create;
field41.NameField := 'd';
field41.Type := 'SFFloat';
field41.AccessType := 'inputOutput';
field41.Value := '5';
{ .AddField }
ComposedShader32.Field := field41;
field42 := TfieldNode.Create;
field42.NameField := 'tdelta';
field42.Type := 'SFFloat';
field42.AccessType := 'inputOutput';
field42.Value := '0';
{ .AddField }
ComposedShader32.Field := field42;
field43 := TfieldNode.Create;
field43.NameField := 'pdelta';
field43.Type := 'SFFloat';
field43.AccessType := 'inputOutput';
field43.Value := '0';
{ .AddField }
ComposedShader32.Field := field43;
ShaderPart44 := TShaderPartNode.Create;
ShaderPart44.SetUrl(['../shaders/freewrl_flowers_chromatic.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs']);
ShaderPart44.Type := 'VERTEX';
{ .AddParts }
ComposedShader32.Parts := ShaderPart44;
ShaderPart45 := TShaderPartNode.Create;
ShaderPart45.SetUrl(['../shaders/freewrl_bubbles.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs']);
ShaderPart45.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader32.Parts := ShaderPart45;
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
