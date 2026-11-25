unit ballx3dom;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createballx3dom: TX3DRootNode;

implementation

uses CastleVectors;

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
  FieldVal33: TSFVec3f;
  FieldVal34: TSFNode;
  FieldVal36: TSFFloat;
  FieldVal37: TSFFloat;
  FieldVal38: TSFFloat;
  ShaderPart39: TShaderPartNode;
  ShaderPart40: TShaderPartNode;

procedure Initballx3domPart0;
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
Group15.FdChildren.Add(WorldInfo16);
NavigationInfo17 := TNavigationInfoNode.Create;
NavigationInfo17.SetType(['ANY', 'EXAMINE', 'FLY', 'LOOKAT']);
Group15.FdChildren.Add(NavigationInfo17);
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.Description := 'Tour Views';
Group15.FdChildren.Add(Viewpoint18);
Background19 := TBackgroundNode.Create;
Background19.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background19.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background19.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background19.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background19.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background19.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Group15.FdChildren.Add(Background19);
Transform20 := TTransformNode.Create;
Shape21 := TShapeNode.Create;
Sphere22 := TSphereNode.Create;
Shape21.Geometry := Sphere22;
Appearance23 := TAppearanceNode.Create;
end;

procedure Initballx3domPart1;
begin
Material24 := TMaterialNode.Create;
Material24.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material24.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance23.Material := Material24;
ComposedCubeMapTexture25 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture25.X3DName := 'texture';
ImageTexture26 := TImageTextureNode.Create;
ImageTexture26.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
ComposedCubeMapTexture25.FdBackTexture.Set(ImageTexture26);
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
ComposedCubeMapTexture25.FdBottomTexture.Set(ImageTexture27);
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
ComposedCubeMapTexture25.FdFrontTexture.Set(ImageTexture28);
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
ComposedCubeMapTexture25.FdLeftTexture.Set(ImageTexture29);
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
ComposedCubeMapTexture25.FdRightTexture.Set(ImageTexture30);
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
ComposedCubeMapTexture25.FdTopTexture.Set(ImageTexture31);
Appearance23.Texture := ComposedCubeMapTexture25;
ComposedShader32 := TComposedShaderNode.Create;
ComposedShader32.Language := 'GLSL';
FieldVal33 := TSFVec3f.Create(ComposedShader32, True, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader32.AddCustomFieldOrEvent(FieldVal33);
FieldVal34 := TSFNode.CreateUndefined(ComposedShader32, True, 'cube');
ComposedShader32.AddCustomFieldOrEvent(FieldVal34);
FieldVal34.Value := ComposedCubeMapTexture25;
FieldVal36 := TSFFloat.Create(ComposedShader32, True, 'bias', 0.5);
ComposedShader32.AddCustomFieldOrEvent(FieldVal36);
FieldVal37 := TSFFloat.Create(ComposedShader32, True, 'scale', 0.5);
ComposedShader32.AddCustomFieldOrEvent(FieldVal37);
FieldVal38 := TSFFloat.Create(ComposedShader32, True, 'power', 2);
ComposedShader32.AddCustomFieldOrEvent(FieldVal38);
ShaderPart39 := TShaderPartNode.Create;
ShaderPart39.SetUrl(['../shaders/x3dom.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs']);
end;

procedure Initballx3domPart2;
begin
ShaderPart39.FdType.Value := 'VERTEX';
ComposedShader32.Parts := ShaderPart39;
ShaderPart40 := TShaderPartNode.Create;
ShaderPart40.X3DName := 'common';
ShaderPart40.SetUrl(['../shaders/common.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs']);
ShaderPart40.FdType.Value := 'FRAGMENT';
ComposedShader32.Parts := ShaderPart40;
Appearance23.AddChildren([ComposedShader32]);
Shape21.Appearance := Appearance23;
Transform20.FdChildren.Add(Shape21);
Group15.FdChildren.Add(Transform20);
X3D0.AddChildren([Group15]);
end;

function Createballx3dom: TX3DRootNode;
begin
  Initballx3domPart0;
  Initballx3domPart1;
  Initballx3domPart2;
  Result := X3D0;
end;

begin
end.
