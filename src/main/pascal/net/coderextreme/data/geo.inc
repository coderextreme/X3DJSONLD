function geo: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group15: TGroupNode;
NavigationInfo16: TNavigationInfoNode;
Viewpoint17: TViewpointNode;
Background18: TBackgroundNode;
Transform19: TTransformNode;
Shape20: TShapeNode;
Sphere21: TSphereNode;
Appearance22: TAppearanceNode;
Material23: TMaterialNode;
ComposedCubeMapTexture24: TComposedCubeMapTextureNode;
ImageTexture25: TImageTextureNode;
ImageTexture26: TImageTextureNode;
ImageTexture27: TImageTextureNode;
ImageTexture28: TImageTextureNode;
ImageTexture29: TImageTextureNode;
ImageTexture30: TImageTextureNode;
ComposedShader31: TComposedShaderNode;
field32: TfieldNode;
field33: TfieldNode;
ComposedCubeMapTexture34: TComposedCubeMapTextureNode;
field35: TfieldNode;
field36: TfieldNode;
field37: TfieldNode;
ShaderPart38: TShaderPartNode;
ShaderPart39: TShaderPartNode;
ComposedShader40: TComposedShaderNode;
field41: TfieldNode;
field42: TfieldNode;
ComposedCubeMapTexture43: TComposedCubeMapTextureNode;
field44: TfieldNode;
field45: TfieldNode;
field46: TfieldNode;
ShaderPart47: TShaderPartNode;
ShaderPart48: TShaderPartNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
{ <component name='Shape' level='4'></component> }
X3D0.Components['Scripting'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Meta['title'] := 'geo.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d';
X3D0.Meta['description'] := 'a sphere';
Group15 := TGroupNode.Create;
NavigationInfo16 := TNavigationInfoNode.Create;
NavigationInfo16.SetType(['ANY','EXAMINE','FLY','LOOKAT']);
{ .AddChildren }
Group15.AddChildren([NavigationInfo16]);
Viewpoint17 := TViewpointNode.Create;
Viewpoint17.Description := 'Tour Views';
{ .AddChildren }
Group15.AddChildren([Viewpoint17]);
{ Viewpoint position='0 0 4' description='sphere in road'/ }
Background18 := TBackgroundNode.Create;
Background18.SetBackUrl(['../resources/images/bBK.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png']);
Background18.SetBottomUrl(['../resources/images/bBT.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png']);
Background18.SetFrontUrl(['../resources/images/bFR.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png']);
Background18.SetLeftUrl(['../resources/images/bLF.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png']);
Background18.SetRightUrl(['../resources/images/bRT.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png']);
Background18.SetTopUrl(['../resources/images/bTP.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png']);
{ .AddChildren }
Group15.AddChildren([Background18]);
Transform19 := TTransformNode.Create;
Shape20 := TShapeNode.Create;
Sphere21 := TSphereNode.Create;
{ .SetGeometry }
Shape20.Geometry := Sphere21;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(0.7,0.7,0.7);
Material23.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance22.Material := Material23;
ComposedCubeMapTexture24 := TComposedCubeMapTextureNode.Create;
ImageTexture25 := TImageTextureNode.Create;
ImageTexture25.SetUrl(['../resources/images/bBK.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png']);
{ .SetBackTexture }
ComposedCubeMapTexture24.BackTexture := ImageTexture25;
ImageTexture26 := TImageTextureNode.Create;
ImageTexture26.SetUrl(['../resources/images/bBT.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png']);
{ .SetBottomTexture }
ComposedCubeMapTexture24.BottomTexture := ImageTexture26;
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/bFR.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png']);
{ .SetFrontTexture }
ComposedCubeMapTexture24.FrontTexture := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/bLF.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png']);
{ .SetLeftTexture }
ComposedCubeMapTexture24.LeftTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/bRT.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png']);
{ .SetRightTexture }
ComposedCubeMapTexture24.RightTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/bTP.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png']);
{ .SetTopTexture }
ComposedCubeMapTexture24.TopTexture := ImageTexture30;
{ .SetTexture }
Appearance22.Texture := ComposedCubeMapTexture24;
ComposedShader31 := TComposedShaderNode.Create;
ComposedShader31.Language := 'GLSL';
field32 := TfieldNode.Create;
field32.NameField := 'chromaticDispertion';
field32.AccessType := 'inputOutput';
field32.Type := 'SFVec3f';
field32.Value := '0.98 1 1.033';
{ .AddField }
ComposedShader31.Field := field32;
field33 := TfieldNode.Create;
field33.NameField := 'cube';
field33.Type := 'SFNode';
field33.AccessType := 'inputOutput';
ComposedCubeMapTexture34 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture34 := ComposedCubeMapTexture24;
{ .AddChildren }
field33.AddChildren([ComposedCubeMapTexture34]);
{ .AddField }
ComposedShader31.Field := field33;
field35 := TfieldNode.Create;
field35.NameField := 'bias';
field35.AccessType := 'inputOutput';
field35.Type := 'SFFloat';
field35.Value := '0.5';
{ .AddField }
ComposedShader31.Field := field35;
field36 := TfieldNode.Create;
field36.NameField := 'scale';
field36.AccessType := 'inputOutput';
field36.Type := 'SFFloat';
field36.Value := '0.5';
{ .AddField }
ComposedShader31.Field := field36;
field37 := TfieldNode.Create;
field37.NameField := 'power';
field37.AccessType := 'inputOutput';
field37.Type := 'SFFloat';
field37.Value := '2';
{ .AddField }
ComposedShader31.Field := field37;
ShaderPart38 := TShaderPartNode.Create;
ShaderPart38.SetUrl(['../shaders/x3dom.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs']);
ShaderPart38.Type := 'VERTEX';
{ .AddParts }
ComposedShader31.Parts := ShaderPart38;
ShaderPart39 := TShaderPartNode.Create;
ShaderPart39.SetUrl(['../shaders/common.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs']);
ShaderPart39.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader31.Parts := ShaderPart39;
{ .AddShaders }
Appearance22.Shaders := ComposedShader31;
ComposedShader40 := TComposedShaderNode.Create;
ComposedShader40.Language := 'GLSL';
field41 := TfieldNode.Create;
field41.NameField := 'chromaticDispertion';
field41.AccessType := 'initializeOnly';
field41.Type := 'SFVec3f';
field41.Value := '0.98 1 1.033';
{ .AddField }
ComposedShader40.Field := field41;
field42 := TfieldNode.Create;
field42.NameField := 'cube';
field42.Type := 'SFNode';
field42.AccessType := 'initializeOnly';
ComposedCubeMapTexture43 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture43 := ComposedCubeMapTexture24;
{ .AddChildren }
field42.AddChildren([ComposedCubeMapTexture43]);
{ .AddField }
ComposedShader40.Field := field42;
field44 := TfieldNode.Create;
field44.NameField := 'bias';
field44.AccessType := 'initializeOnly';
field44.Type := 'SFFloat';
field44.Value := '0.5';
{ .AddField }
ComposedShader40.Field := field44;
field45 := TfieldNode.Create;
field45.NameField := 'scale';
field45.AccessType := 'initializeOnly';
field45.Type := 'SFFloat';
field45.Value := '0.5';
{ .AddField }
ComposedShader40.Field := field45;
field46 := TfieldNode.Create;
field46.NameField := 'power';
field46.AccessType := 'initializeOnly';
field46.Type := 'SFFloat';
field46.Value := '2';
{ .AddField }
ComposedShader40.Field := field46;
ShaderPart47 := TShaderPartNode.Create;
ShaderPart47.SetUrl(['../shaders/x_ite.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs']);
ShaderPart47.Type := 'VERTEX';
{ .AddParts }
ComposedShader40.Parts := ShaderPart47;
ShaderPart48 := TShaderPartNode.Create;
ShaderPart48.SetUrl(['../shaders/x_ite.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs']);
ShaderPart48.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader40.Parts := ShaderPart48;
{ .AddShaders }
Appearance22.Shaders := ComposedShader40;
{ .SetAppearance }
Shape20.Appearance := Appearance22;
{ .AddChild }
Transform19.AddChildren([Shape20]);
{ .AddChildren }
Group15.AddChildren([Transform19]);
{ .AddGroup }
X3D0.AddChildren([Group15]);
Result := X3D0;
end;
