unit geo;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Creategeo: TX3DRootNode;

implementation

uses CastleVectors;

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
  FieldVal32: TSFVec3f;
  FieldVal33: TSFNode;
  FieldVal35: TSFFloat;
  FieldVal36: TSFFloat;
  FieldVal37: TSFFloat;
  ShaderPart38: TShaderPartNode;
  ShaderPart39: TShaderPartNode;
  ComposedShader40: TComposedShaderNode;
  FieldVal41: TSFVec3f;
  FieldVal42: TSFNode;
  FieldVal44: TSFFloat;
  FieldVal45: TSFFloat;
  FieldVal46: TSFFloat;
  ShaderPart47: TShaderPartNode;
  ShaderPart48: TShaderPartNode;

procedure InitgeoPart0;
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
NavigationInfo16.SetType(['ANY', 'EXAMINE', 'FLY', 'LOOKAT']);
Group15.FdChildren.Add(NavigationInfo16);
Viewpoint17 := TViewpointNode.Create;
Viewpoint17.X3DName := 'Tour';
Viewpoint17.Description := 'Tour Views';
Group15.FdChildren.Add(Viewpoint17);
{ Viewpoint position='0 0 4' description='sphere in road'/ }
Background18 := TBackgroundNode.Create;
Background18.SetBackUrl(['../resources/images/bBK.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png']);
Background18.SetBottomUrl(['../resources/images/bBT.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png']);
Background18.SetFrontUrl(['../resources/images/bFR.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png']);
Background18.SetLeftUrl(['../resources/images/bLF.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png']);
Background18.SetRightUrl(['../resources/images/bRT.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png']);
Background18.SetTopUrl(['../resources/images/bTP.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png']);
Group15.FdChildren.Add(Background18);
Transform19 := TTransformNode.Create;
Shape20 := TShapeNode.Create;
Sphere21 := TSphereNode.Create;
Shape20.Geometry := Sphere21;
Appearance22 := TAppearanceNode.Create;
end;

procedure InitgeoPart1;
begin
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material23.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance22.Material := Material23;
ComposedCubeMapTexture24 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture24.X3DName := 'texture';
ImageTexture25 := TImageTextureNode.Create;
ImageTexture25.SetUrl(['../resources/images/bBK.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png']);
ComposedCubeMapTexture24.FdBackTexture.Set(ImageTexture25);
ImageTexture26 := TImageTextureNode.Create;
ImageTexture26.SetUrl(['../resources/images/bBT.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png']);
ComposedCubeMapTexture24.FdBottomTexture.Set(ImageTexture26);
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/bFR.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png']);
ComposedCubeMapTexture24.FdFrontTexture.Set(ImageTexture27);
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/bLF.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png']);
ComposedCubeMapTexture24.FdLeftTexture.Set(ImageTexture28);
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/bRT.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png']);
ComposedCubeMapTexture24.FdRightTexture.Set(ImageTexture29);
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/bTP.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png']);
ComposedCubeMapTexture24.FdTopTexture.Set(ImageTexture30);
Appearance22.Texture := ComposedCubeMapTexture24;
ComposedShader31 := TComposedShaderNode.Create;
ComposedShader31.Language := 'GLSL';
FieldVal32 := TSFVec3f.Create(ComposedShader31, True, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader31.AddCustomFieldOrEvent(FieldVal32);
FieldVal33 := TSFNode.CreateUndefined(ComposedShader31, True, 'cube');
ComposedShader31.AddCustomFieldOrEvent(FieldVal33);
FieldVal33.Value := ComposedCubeMapTexture24;
FieldVal35 := TSFFloat.Create(ComposedShader31, True, 'bias', 0.5);
ComposedShader31.AddCustomFieldOrEvent(FieldVal35);
FieldVal36 := TSFFloat.Create(ComposedShader31, True, 'scale', 0.5);
ComposedShader31.AddCustomFieldOrEvent(FieldVal36);
FieldVal37 := TSFFloat.Create(ComposedShader31, True, 'power', 2);
ComposedShader31.AddCustomFieldOrEvent(FieldVal37);
ShaderPart38 := TShaderPartNode.Create;
ShaderPart38.SetUrl(['../shaders/x3dom.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs']);
end;

procedure InitgeoPart2;
begin
ShaderPart38.FdType.Value := 'VERTEX';
ComposedShader31.Parts := ShaderPart38;
ShaderPart39 := TShaderPartNode.Create;
ShaderPart39.X3DName := 'common';
ShaderPart39.SetUrl(['../shaders/common.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs']);
ShaderPart39.FdType.Value := 'FRAGMENT';
ComposedShader31.Parts := ShaderPart39;
Appearance22.AddChildren([ComposedShader31]);
ComposedShader40 := TComposedShaderNode.Create;
ComposedShader40.Language := 'GLSL';
FieldVal41 := TSFVec3f.Create(ComposedShader40, False, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader40.AddCustomFieldOrEvent(FieldVal41);
FieldVal42 := TSFNode.CreateUndefined(ComposedShader40, False, 'cube');
ComposedShader40.AddCustomFieldOrEvent(FieldVal42);
FieldVal42.Value := ComposedCubeMapTexture24;
FieldVal44 := TSFFloat.Create(ComposedShader40, False, 'bias', 0.5);
ComposedShader40.AddCustomFieldOrEvent(FieldVal44);
FieldVal45 := TSFFloat.Create(ComposedShader40, False, 'scale', 0.5);
ComposedShader40.AddCustomFieldOrEvent(FieldVal45);
FieldVal46 := TSFFloat.Create(ComposedShader40, False, 'power', 2);
ComposedShader40.AddCustomFieldOrEvent(FieldVal46);
ShaderPart47 := TShaderPartNode.Create;
ShaderPart47.SetUrl(['../shaders/x_ite.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs']);
ShaderPart47.FdType.Value := 'VERTEX';
ComposedShader40.Parts := ShaderPart47;
ShaderPart48 := TShaderPartNode.Create;
ShaderPart48.SetUrl(['../shaders/x_ite.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs']);
ShaderPart48.FdType.Value := 'FRAGMENT';
ComposedShader40.Parts := ShaderPart48;
Appearance22.AddChildren([ComposedShader40]);
Shape20.Appearance := Appearance22;
Transform19.FdChildren.Add(Shape20);
Group15.FdChildren.Add(Transform19);
X3D0.AddChildren([Group15]);
end;

function Creategeo: TX3DRootNode;
begin
  InitgeoPart0;
  InitgeoPart1;
  InitgeoPart2;
  Result := X3D0;
end;

begin
end.
