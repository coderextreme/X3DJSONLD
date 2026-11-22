unit bumpyfreewrl;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

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
SFVec3f33: TSFVec3f;
SFInt3234: TSFInt32;
SFFloat35: TSFFloat;
SFFloat36: TSFFloat;
SFFloat37: TSFFloat;
SFFloat38: TSFFloat;
SFFloat39: TSFFloat;
SFFloat40: TSFFloat;
SFFloat41: TSFFloat;
SFFloat42: TSFFloat;
SFFloat43: TSFFloat;
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
X3D0.Meta['title'] := 'bumpyfreewrl.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['description'] := 'A flower';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/bumpfreewrl.x3d';
{ METHOD .Meta }
{ METHOD .Head }
Group15 := TGroupNode.Create;
WorldInfo16 := TWorldInfoNode.Create;
WorldInfo16.Title := 'bumpyx_ite.x3d';
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(WorldInfo16);
NavigationInfo17 := TNavigationInfoNode.Create;
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(NavigationInfo17);
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.Position := Vector3(0,0,40);
Viewpoint18.Description := 'Transparent rose';
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Viewpoint18);
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
Background19 := TBackgroundNode.Create;
Background19.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background19.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background19.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background19.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background19.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background19.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Background19);
Transform20 := TTransformNode.Create;
Shape21 := TShapeNode.Create;
Sphere22 := TSphereNode.Create;
Sphere22.Radius := 5;
{ METHOD .Geometry }
Shape21.Geometry := Sphere22;
end;

procedure InitbumpyfreewrlPart1;
begin

Appearance23 := TAppearanceNode.Create;
Material24 := TMaterialNode.Create;
Material24.DiffuseColor := Vector3(0.7,0.7,0.7);
Material24.SpecularColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance23.Material := Material24;
ComposedCubeMapTexture25 := TComposedCubeMapTextureNode.Create;
ImageTexture26 := TImageTextureNode.Create;
ImageTexture26.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ METHOD .SetBackTexture }
ComposedCubeMapTexture25.BackTexture := ImageTexture26;
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ METHOD .SetBottomTexture }
ComposedCubeMapTexture25.BottomTexture := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ METHOD .SetFrontTexture }
ComposedCubeMapTexture25.FrontTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ METHOD .SetLeftTexture }
ComposedCubeMapTexture25.LeftTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ METHOD .SetRightTexture }
ComposedCubeMapTexture25.RightTexture := ImageTexture30;
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .SetTopTexture }
ComposedCubeMapTexture25.TopTexture := ImageTexture31;
{ METHOD .Texture }
Appearance23.Texture := ComposedCubeMapTexture25;
ComposedShader32 := TComposedShaderNode.Create;
ComposedShader32.Language := 'GLSL';
SFVec3f33 := TSFVec3f.CreateUndefined(ComposedShader32, false, 'chromaticDispertion');
SFVec3f33.Value := '0.98 1 1.033';
{ METHOD .AddSFVec3f }
ComposedShader32.AddSFVec3f([SFVec3f33]);
SFInt3234 := TSFInt32.CreateUndefined(ComposedShader32, false, 'fw_textureCoordGenType');
SFInt3234.Value := '0';
{ METHOD .AddSFInt32 }
ComposedShader32.AddSFInt32([SFInt3234]);
SFFloat35 := TSFFloat.CreateUndefined(ComposedShader32, false, 'bias');
SFFloat35.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader32.AddSFFloat([SFFloat35]);
SFFloat36 := TSFFloat.CreateUndefined(ComposedShader32, false, 'scale');
SFFloat36.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader32.AddSFFloat([SFFloat36]);
SFFloat37 := TSFFloat.CreateUndefined(ComposedShader32, false, 'power');
end;

procedure InitbumpyfreewrlPart2;
begin

SFFloat37.Value := '2';
{ METHOD .AddSFFloat }
ComposedShader32.AddSFFloat([SFFloat37]);
SFFloat38 := TSFFloat.CreateUndefined(ComposedShader32, false, 'a');
SFFloat38.Value := '10';
{ METHOD .AddSFFloat }
ComposedShader32.AddSFFloat([SFFloat38]);
SFFloat39 := TSFFloat.CreateUndefined(ComposedShader32, false, 'b');
SFFloat39.Value := '1';
{ METHOD .AddSFFloat }
ComposedShader32.AddSFFloat([SFFloat39]);
SFFloat40 := TSFFloat.CreateUndefined(ComposedShader32, false, 'c');
SFFloat40.Value := '5';
{ METHOD .AddSFFloat }
ComposedShader32.AddSFFloat([SFFloat40]);
SFFloat41 := TSFFloat.CreateUndefined(ComposedShader32, false, 'd');
SFFloat41.Value := '5';
{ METHOD .AddSFFloat }
ComposedShader32.AddSFFloat([SFFloat41]);
SFFloat42 := TSFFloat.CreateUndefined(ComposedShader32, false, 'tdelta');
SFFloat42.Value := '0';
{ METHOD .AddSFFloat }
ComposedShader32.AddSFFloat([SFFloat42]);
SFFloat43 := TSFFloat.CreateUndefined(ComposedShader32, false, 'pdelta');
SFFloat43.Value := '0';
{ METHOD .AddSFFloat }
ComposedShader32.AddSFFloat([SFFloat43]);
ShaderPart44 := TShaderPartNode.Create;
ShaderPart44.SetUrl(['../shaders/freewrl_flowers_chromatic.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs']);
ShaderPart44.FdType.Value := 'VERTEX';
{ METHOD .Parts }
ComposedShader32.Parts := ShaderPart44;
ShaderPart45 := TShaderPartNode.Create;
ShaderPart45.SetUrl(['../shaders/freewrl_bubbles.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs']);
ShaderPart45.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
ComposedShader32.Parts := ShaderPart45;
{ METHOD .AddChildren }
Appearance23.AddChildren([ComposedShader32]);
{ METHOD .Appearance }
Shape21.Appearance := Appearance23;
{ METHOD .FdChildren.Add }
Transform20.FdChildren.Add(Shape21);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Transform20);
{ METHOD .AddGroup }
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
