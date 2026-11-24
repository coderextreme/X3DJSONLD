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
SFVec3f32: TSFVec3f;
SFNode33: TSFNode;
ComposedCubeMapTexture34: TComposedCubeMapTextureNode;
SFFloat35: TSFFloat;
SFFloat36: TSFFloat;
SFFloat37: TSFFloat;
ShaderPart38: TShaderPartNode;
ShaderPart39: TShaderPartNode;
ComposedShader40: TComposedShaderNode;
SFVec3f41: TSFVec3f;
SFNode42: TSFNode;
ComposedCubeMapTexture43: TComposedCubeMapTextureNode;
SFFloat44: TSFFloat;
SFFloat45: TSFFloat;
SFFloat46: TSFFloat;
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
X3D0.Components['Grouping'] := 3;
{ METHOD .Component }
X3D0.Components['Core'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'geo.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manual';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'a sphere';
{ METHOD .Meta }
{ METHOD .Head }
Group15 := TGroupNode.Create;;
NavigationInfo16 := TNavigationInfoNode.Create;;
NavigationInfo16.SetType(['ANY','EXAMINE','FLY','LOOKAT']);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(NavigationInfo16);
Viewpoint17 := TViewpointNode.Create;;
Viewpoint17.Description := 'Tour Views';
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Viewpoint17);
{ Viewpoint position='0 0 4' description='sphere in road'/ }
Background18 := TBackgroundNode.Create;;
Background18.SetBackUrl(['../resources/images/bBK.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png']);
Background18.SetBottomUrl(['../resources/images/bBT.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png']);
Background18.SetFrontUrl(['../resources/images/bFR.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png']);
Background18.SetLeftUrl(['../resources/images/bLF.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png']);
Background18.SetRightUrl(['../resources/images/bRT.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png']);
Background18.SetTopUrl(['../resources/images/bTP.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png']);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Background18);
Transform19 := TTransformNode.Create;;
Shape20 := TShapeNode.Create;;
end;

procedure InitgeoPart1;
begin

Sphere21 := TSphereNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape20.Geometry := Sphere21;
Appearance22 := TAppearanceNode.Create;;
Material23 := TMaterialNode.Create;;
Material23.DiffuseColor := Vector3(0.7,0.7,0.7);
Material23.SpecularColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance22.Material := Material23;
ComposedCubeMapTexture24 := TComposedCubeMapTextureNode.Create;;
ImageTexture25 := TImageTextureNode.Create;;
ImageTexture25.SetUrl(['../resources/images/bBK.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png']);
{ METHOD .FdBackTexture.Set }
ComposedCubeMapTexture24.FdBackTexture.Set(ImageTexture25);
ImageTexture26 := TImageTextureNode.Create;;
ImageTexture26.SetUrl(['../resources/images/bBT.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png']);
{ METHOD .FdBottomTexture.Set }
ComposedCubeMapTexture24.FdBottomTexture.Set(ImageTexture26);
ImageTexture27 := TImageTextureNode.Create;;
ImageTexture27.SetUrl(['../resources/images/bFR.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png']);
{ METHOD .FdFrontTexture.Set }
ComposedCubeMapTexture24.FdFrontTexture.Set(ImageTexture27);
ImageTexture28 := TImageTextureNode.Create;;
ImageTexture28.SetUrl(['../resources/images/bLF.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png']);
{ METHOD .FdLeftTexture.Set }
ComposedCubeMapTexture24.FdLeftTexture.Set(ImageTexture28);
ImageTexture29 := TImageTextureNode.Create;;
ImageTexture29.SetUrl(['../resources/images/bRT.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png']);
{ METHOD .FdRightTexture.Set }
ComposedCubeMapTexture24.FdRightTexture.Set(ImageTexture29);
ImageTexture30 := TImageTextureNode.Create;;
ImageTexture30.SetUrl(['../resources/images/bTP.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png']);
{ METHOD .FdTopTexture.Set }
ComposedCubeMapTexture24.FdTopTexture.Set(ImageTexture30);
{ METHOD .Texture }
{ METHOD.SET .Texture }
Appearance22.Texture := ComposedCubeMapTexture24;
ComposedShader31 := TComposedShaderNode.Create;;
ComposedShader31.Language := 'GLSL';
end;

procedure InitgeoPart2;
begin

SFVec3f32 := TSFVec3f.CreateUndefined(ComposedShader31, false, 'chromaticDispertion');
SFVec3f32.Value := '0.98 1 1.033';
{ METHOD .AddSFVec3f }
ComposedShader31.AddSFVec3f([SFVec3f32]);
SFNode33 := TSFNode.CreateUndefined(ComposedShader31, false, 'cube');
{ METHOD .AddComposedCubeMapTexture }
SFNode33.AddComposedCubeMapTexture([ComposedCubeMapTexture24]);
{ METHOD .AddSFNode }
ComposedShader31.AddSFNode([SFNode33]);
SFFloat35 := TSFFloat.CreateUndefined(ComposedShader31, false, 'bias');
SFFloat35.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader31.AddSFFloat([SFFloat35]);
SFFloat36 := TSFFloat.CreateUndefined(ComposedShader31, false, 'scale');
SFFloat36.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader31.AddSFFloat([SFFloat36]);
SFFloat37 := TSFFloat.CreateUndefined(ComposedShader31, false, 'power');
SFFloat37.Value := '2';
{ METHOD .AddSFFloat }
ComposedShader31.AddSFFloat([SFFloat37]);
ShaderPart38 := TShaderPartNode.Create;;
ShaderPart38.SetUrl(['../shaders/x3dom.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs']);
ShaderPart38.FdType.Value := 'VERTEX';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader31.Parts := ShaderPart38;
ShaderPart39 := TShaderPartNode.Create;;
ShaderPart39.SetUrl(['../shaders/common.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs']);
ShaderPart39.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader31.Parts := ShaderPart39;
{ METHOD .AddChildren }
Appearance22.AddChildren([ComposedShader31]);
ComposedShader40 := TComposedShaderNode.Create;;
ComposedShader40.Language := 'GLSL';
SFVec3f41 := TSFVec3f.CreateUndefined(ComposedShader40, false, 'chromaticDispertion');
SFVec3f41.Value := '0.98 1 1.033';
{ METHOD .AddSFVec3f }
ComposedShader40.AddSFVec3f([SFVec3f41]);
SFNode42 := TSFNode.CreateUndefined(ComposedShader40, false, 'cube');
{ METHOD .AddComposedCubeMapTexture }
SFNode42.AddComposedCubeMapTexture([ComposedCubeMapTexture24]);
{ METHOD .AddSFNode }
ComposedShader40.AddSFNode([SFNode42]);
SFFloat44 := TSFFloat.CreateUndefined(ComposedShader40, false, 'bias');
SFFloat44.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader40.AddSFFloat([SFFloat44]);
SFFloat45 := TSFFloat.CreateUndefined(ComposedShader40, false, 'scale');
SFFloat45.Value := '0.5';
end;

procedure InitgeoPart3;
begin

{ METHOD .AddSFFloat }
ComposedShader40.AddSFFloat([SFFloat45]);
SFFloat46 := TSFFloat.CreateUndefined(ComposedShader40, false, 'power');
SFFloat46.Value := '2';
{ METHOD .AddSFFloat }
ComposedShader40.AddSFFloat([SFFloat46]);
ShaderPart47 := TShaderPartNode.Create;;
ShaderPart47.SetUrl(['../shaders/x_ite.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs']);
ShaderPart47.FdType.Value := 'VERTEX';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader40.Parts := ShaderPart47;
ShaderPart48 := TShaderPartNode.Create;;
ShaderPart48.SetUrl(['../shaders/x_ite.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs']);
ShaderPart48.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader40.Parts := ShaderPart48;
{ METHOD .AddChildren }
Appearance22.AddChildren([ComposedShader40]);
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape20.Appearance := Appearance22;
{ METHOD .FdChildren.Add }
Transform19.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Transform19);
{ METHOD .AddGroup }
X3D0.AddChildren([Group15]);
end;

function Creategeo: TX3DRootNode;
begin
InitgeoPart0;
InitgeoPart1;
InitgeoPart2;
InitgeoPart3;
Result := X3D0;
end;

begin
end.
