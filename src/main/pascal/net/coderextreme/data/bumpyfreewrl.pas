unit bumpyfreewrl;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createbumpyfreewrl: TX3DRootNode;

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
  FieldVal33: TX3DEvent;
  FieldVal34: TX3DEvent;
  FieldVal35: TX3DEvent;
  FieldVal36: TX3DEvent;
  FieldVal37: TX3DEvent;
  FieldVal38: TSFFloat;
  FieldVal39: TSFFloat;
  FieldVal40: TSFFloat;
  FieldVal41: TSFFloat;
  FieldVal42: TSFFloat;
  FieldVal43: TSFFloat;
  ShaderPart44: TShaderPartNode;
  ShaderPart45: TShaderPartNode;

procedure InitbumpyfreewrlPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
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
X3D0.Meta['title'] := 'bumpyfreewrl.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := 'A flower';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/bumpfreewrl.x3d';
Group15 := TGroupNode.Create;
WorldInfo16 := TWorldInfoNode.Create;
WorldInfo16.Title := 'bumpyx_ite.x3d';
Group15.FdChildren.Add(WorldInfo16);
NavigationInfo17 := TNavigationInfoNode.Create;
Group15.FdChildren.Add(NavigationInfo17);
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.Position := Vector3(0, 0, 40);
Viewpoint18.Description := 'Transparent rose';
Group15.FdChildren.Add(Viewpoint18);
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
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
end;

procedure InitbumpyfreewrlPart1;
begin
Sphere22.Radius := 5;
Shape21.Geometry := Sphere22;
Appearance23 := TAppearanceNode.Create;
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
ComposedShader32.X3DName := 'freewrlShader';
ComposedShader32.Language := 'GLSL';
FieldVal33 := TSFVec3f.CreateEvent(ComposedShader32, 'chromaticDispertion', True);
ComposedShader32.AddCustomFieldOrEvent(FieldVal33);
FieldVal34 := TSFInt32.CreateEvent(ComposedShader32, 'fw_textureCoordGenType', True);
ComposedShader32.AddCustomFieldOrEvent(FieldVal34);
FieldVal35 := TSFFloat.CreateEvent(ComposedShader32, 'bias', True);
ComposedShader32.AddCustomFieldOrEvent(FieldVal35);
FieldVal36 := TSFFloat.CreateEvent(ComposedShader32, 'scale', True);
ComposedShader32.AddCustomFieldOrEvent(FieldVal36);
FieldVal37 := TSFFloat.CreateEvent(ComposedShader32, 'power', True);
end;

procedure InitbumpyfreewrlPart2;
begin
ComposedShader32.AddCustomFieldOrEvent(FieldVal37);
FieldVal38 := TSFFloat.Create(ComposedShader32, True, 'a', 10);
ComposedShader32.AddCustomFieldOrEvent(FieldVal38);
FieldVal39 := TSFFloat.Create(ComposedShader32, True, 'b', 1);
ComposedShader32.AddCustomFieldOrEvent(FieldVal39);
FieldVal40 := TSFFloat.Create(ComposedShader32, True, 'c', 5);
ComposedShader32.AddCustomFieldOrEvent(FieldVal40);
FieldVal41 := TSFFloat.Create(ComposedShader32, True, 'd', 5);
ComposedShader32.AddCustomFieldOrEvent(FieldVal41);
FieldVal42 := TSFFloat.Create(ComposedShader32, True, 'tdelta', 0);
ComposedShader32.AddCustomFieldOrEvent(FieldVal42);
FieldVal43 := TSFFloat.Create(ComposedShader32, True, 'pdelta', 0);
ComposedShader32.AddCustomFieldOrEvent(FieldVal43);
ShaderPart44 := TShaderPartNode.Create;
ShaderPart44.SetUrl(['../shaders/freewrl_flowers_chromatic.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs']);
ShaderPart44.FdType.Value := 'VERTEX';
ComposedShader32.Parts := ShaderPart44;
ShaderPart45 := TShaderPartNode.Create;
ShaderPart45.SetUrl(['../shaders/freewrl_bubbles.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs']);
ShaderPart45.FdType.Value := 'FRAGMENT';
ComposedShader32.Parts := ShaderPart45;
Appearance23.AddChildren([ComposedShader32]);
Shape21.Appearance := Appearance23;
Transform20.FdChildren.Add(Shape21);
Group15.FdChildren.Add(Transform20);
X3D0.AddChildren([Group15]);
end;

function Createbumpyfreewrl: TX3DRootNode;
begin
  InitbumpyfreewrlPart0;
  InitbumpyfreewrlPart1;
  InitbumpyfreewrlPart2;
  Result := X3D0;
end;

begin
end.
