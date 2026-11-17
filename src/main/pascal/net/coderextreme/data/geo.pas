unit geo;

interface

uses X3DNodes;

function Creategeo: TX3DRootNode;

implementation

uses CastleVectors;

function Creategeo: TX3DRootNode;
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
X3DField32: TX3DField;
X3DField33: TX3DField;
ComposedCubeMapTexture34: TComposedCubeMapTextureNode;
X3DField35: TX3DField;
X3DField36: TX3DField;
X3DField37: TX3DField;
ShaderPart38: TShaderPartNode;
ShaderPart39: TShaderPartNode;
ComposedShader40: TComposedShaderNode;
X3DField41: TX3DField;
X3DField42: TX3DField;
ComposedCubeMapTexture43: TComposedCubeMapTextureNode;
X3DField44: TX3DField;
X3DField45: TX3DField;
X3DField46: TX3DField;
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
X3DField32 := TX3DField.Create;
X3DField32.NameField := 'chromaticDispertion';
X3DField32.AccessType := 'inputOutput';
X3DField32.Type := 'SFVec3f';
X3DField32.Value := '0.98 1 1.033';
{ .SetX3DField }
ComposedShader31.X3DField := X3DField32;
X3DField33 := TX3DField.Create;
X3DField33.NameField := 'cube';
X3DField33.Type := 'SFNode';
X3DField33.AccessType := 'inputOutput';
ComposedCubeMapTexture34 := ComposedCubeMapTexture24;
{ .SetComposedCubeMapTexture }
X3DField33.ComposedCubeMapTexture := ComposedCubeMapTexture34;
{ .AddX3DField }
ComposedShader31.X3DField := X3DField33;
X3DField35 := TX3DField.Create;
X3DField35.NameField := 'bias';
X3DField35.AccessType := 'inputOutput';
X3DField35.Type := 'SFFloat';
X3DField35.Value := '0.5';
{ .AddX3DField }
ComposedShader31.X3DField := X3DField35;
X3DField36 := TX3DField.Create;
X3DField36.NameField := 'scale';
X3DField36.AccessType := 'inputOutput';
X3DField36.Type := 'SFFloat';
X3DField36.Value := '0.5';
{ .AddX3DField }
ComposedShader31.X3DField := X3DField36;
X3DField37 := TX3DField.Create;
X3DField37.NameField := 'power';
X3DField37.AccessType := 'inputOutput';
X3DField37.Type := 'SFFloat';
X3DField37.Value := '2';
{ .AddX3DField }
ComposedShader31.X3DField := X3DField37;
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
X3DField41 := TX3DField.Create;
X3DField41.NameField := 'chromaticDispertion';
X3DField41.AccessType := 'initializeOnly';
X3DField41.Type := 'SFVec3f';
X3DField41.Value := '0.98 1 1.033';
{ .SetX3DField }
ComposedShader40.X3DField := X3DField41;
X3DField42 := TX3DField.Create;
X3DField42.NameField := 'cube';
X3DField42.Type := 'SFNode';
X3DField42.AccessType := 'initializeOnly';
ComposedCubeMapTexture43 := ComposedCubeMapTexture24;
{ .SetComposedCubeMapTexture }
X3DField42.ComposedCubeMapTexture := ComposedCubeMapTexture43;
{ .AddX3DField }
ComposedShader40.X3DField := X3DField42;
X3DField44 := TX3DField.Create;
X3DField44.NameField := 'bias';
X3DField44.AccessType := 'initializeOnly';
X3DField44.Type := 'SFFloat';
X3DField44.Value := '0.5';
{ .AddX3DField }
ComposedShader40.X3DField := X3DField44;
X3DField45 := TX3DField.Create;
X3DField45.NameField := 'scale';
X3DField45.AccessType := 'initializeOnly';
X3DField45.Type := 'SFFloat';
X3DField45.Value := '0.5';
{ .AddX3DField }
ComposedShader40.X3DField := X3DField45;
X3DField46 := TX3DField.Create;
X3DField46.NameField := 'power';
X3DField46.AccessType := 'initializeOnly';
X3DField46.Type := 'SFFloat';
X3DField46.Value := '2';
{ .AddX3DField }
ComposedShader40.X3DField := X3DField46;
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

begin
end.
