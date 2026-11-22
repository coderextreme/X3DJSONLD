unit flowers7;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createflowers7: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group16: TGroupNode;
NavigationInfo17: TNavigationInfoNode;
Background18: TBackgroundNode;
Viewpoint19: TViewpointNode;
Transform20: TTransformNode;
Shape21: TShapeNode;
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
SFNode32: TSFNode;
ComposedCubeMapTexture33: TComposedCubeMapTextureNode;
SFVec3f34: TSFVec3f;
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
ComposedShader46: TComposedShaderNode;
SFNode47: TSFNode;
ComposedCubeMapTexture48: TComposedCubeMapTextureNode;
SFVec3f49: TSFVec3f;
SFFloat50: TSFFloat;
SFFloat51: TSFFloat;
SFFloat52: TSFFloat;
SFFloat53: TSFFloat;
SFFloat54: TSFFloat;
SFFloat55: TSFFloat;
SFFloat56: TSFFloat;
SFFloat57: TSFFloat;
SFFloat58: TSFFloat;
ShaderPart59: TShaderPartNode;
ShaderPart60: TShaderPartNode;
Sphere61: TSphereNode;
Script62: TScriptNode;
MFString63: TMFString;
MFString64: TMFString;
MFString65: TMFString;
MFString66: TMFString;
MFString67: TMFString;
MFString68: TMFString;
MFString69: TMFString;
MFString70: TMFString;
MFString71: TMFString;
MFString72: TMFString;
MFString73: TMFString;
MFString74: TMFString;
SFFloat75: TSFFloat;
SFInt3276: TSFInt32;
Script77: TScriptNode;
SFFloat78: TSFFloat;
SFFloat79: TSFFloat;
SFFloat80: TSFFloat;
SFFloat81: TSFFloat;
SFFloat82: TSFFloat;
SFFloat83: TSFFloat;
SFFloat84: TSFFloat;
TimeSensor85: TTimeSensorNode;

procedure Initflowers7Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
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
X3D0.Components['Shape'] := 4;
{ METHOD .Component }
X3D0.Components['Grouping'] := 3;
{ METHOD .Component }
X3D0.Components['Core'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'flowers7.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manual';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'a flower';
{ METHOD .Meta }
{ METHOD .Head }
Group16 := TGroupNode.Create;
NavigationInfo17 := TNavigationInfoNode.Create;
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(NavigationInfo17);
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
Background18 := TBackgroundNode.Create;
Background18.SetBackUrl(['../resources/images/all_probes/beach_cross/beach_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png']);
Background18.SetBottomUrl(['../resources/images/all_probes/beach_cross/beach_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png']);
Background18.SetFrontUrl(['../resources/images/all_probes/beach_cross/beach_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png']);
Background18.SetLeftUrl(['../resources/images/all_probes/beach_cross/beach_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png']);
Background18.SetRightUrl(['../resources/images/all_probes/beach_cross/beach_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png']);
Background18.SetTopUrl(['../resources/images/all_probes/beach_cross/beach_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png']);
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(Background18);
Viewpoint19 := TViewpointNode.Create;
Viewpoint19.Position := Vector3(0,0,40);
Viewpoint19.Description := 'Transparent rose';
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(Viewpoint19);
Transform20 := TTransformNode.Create;
Shape21 := TShapeNode.Create;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(0.7,0.7,0.7);
Material23.SpecularColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance22.Material := Material23;
end;

procedure Initflowers7Part1;
begin

ComposedCubeMapTexture24 := TComposedCubeMapTextureNode.Create;
ImageTexture25 := TImageTextureNode.Create;
ImageTexture25.SetUrl(['../resources/images/all_probes/beach_cross/beach_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png']);
{ METHOD .SetBackTexture }
ComposedCubeMapTexture24.BackTexture := ImageTexture25;
ImageTexture26 := TImageTextureNode.Create;
ImageTexture26.SetUrl(['../resources/images/all_probes/beach_cross/beach_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png']);
{ METHOD .SetBottomTexture }
ComposedCubeMapTexture24.BottomTexture := ImageTexture26;
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/all_probes/beach_cross/beach_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png']);
{ METHOD .SetFrontTexture }
ComposedCubeMapTexture24.FrontTexture := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/beach_cross/beach_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png']);
{ METHOD .SetLeftTexture }
ComposedCubeMapTexture24.LeftTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/beach_cross/beach_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png']);
{ METHOD .SetRightTexture }
ComposedCubeMapTexture24.RightTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/beach_cross/beach_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png']);
{ METHOD .SetTopTexture }
ComposedCubeMapTexture24.TopTexture := ImageTexture30;
{ METHOD .Texture }
Appearance22.Texture := ComposedCubeMapTexture24;
ComposedShader31 := TComposedShaderNode.Create;
ComposedShader31.Language := 'GLSL';
{ TODO VERIFY <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> }
SFNode32 := TSFNode.CreateUndefined(ComposedShader31, false, 'cube');
{ METHOD .AddComposedCubeMapTexture }
SFNode32.AddComposedCubeMapTexture([ComposedCubeMapTexture24]);
{ METHOD .AddSFNode }
ComposedShader31.AddSFNode([SFNode32]);
SFVec3f34 := TSFVec3f.CreateUndefined(ComposedShader31, false, 'chromaticDispertion');
SFVec3f34.Value := '0.98 1 1.033';
{ METHOD .AddSFVec3f }
ComposedShader31.AddSFVec3f([SFVec3f34]);
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
SFFloat38 := TSFFloat.CreateUndefined(ComposedShader31, false, 'a');
SFFloat38.Value := '10';
{ METHOD .AddSFFloat }
ComposedShader31.AddSFFloat([SFFloat38]);
end;

procedure Initflowers7Part2;
begin

SFFloat39 := TSFFloat.CreateUndefined(ComposedShader31, false, 'b');
SFFloat39.Value := '1';
{ METHOD .AddSFFloat }
ComposedShader31.AddSFFloat([SFFloat39]);
SFFloat40 := TSFFloat.CreateUndefined(ComposedShader31, false, 'c');
SFFloat40.Value := '20';
{ METHOD .AddSFFloat }
ComposedShader31.AddSFFloat([SFFloat40]);
SFFloat41 := TSFFloat.CreateUndefined(ComposedShader31, false, 'd');
SFFloat41.Value := '20';
{ METHOD .AddSFFloat }
ComposedShader31.AddSFFloat([SFFloat41]);
SFFloat42 := TSFFloat.CreateUndefined(ComposedShader31, false, 'tdelta');
SFFloat42.Value := '0';
{ METHOD .AddSFFloat }
ComposedShader31.AddSFFloat([SFFloat42]);
SFFloat43 := TSFFloat.CreateUndefined(ComposedShader31, false, 'pdelta');
SFFloat43.Value := '0';
{ METHOD .AddSFFloat }
ComposedShader31.AddSFFloat([SFFloat43]);
ShaderPart44 := TShaderPartNode.Create;
ShaderPart44.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs']);
ShaderPart44.FdType.Value := 'VERTEX';
{ METHOD .Parts }
ComposedShader31.Parts := ShaderPart44;
ShaderPart45 := TShaderPartNode.Create;
ShaderPart45.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs']);
ShaderPart45.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
ComposedShader31.Parts := ShaderPart45;
{ METHOD .AddChildren }
Appearance22.AddChildren([ComposedShader31]);
ComposedShader46 := TComposedShaderNode.Create;
ComposedShader46.Language := 'GLSL';
SFNode47 := TSFNode.CreateUndefined(ComposedShader46, false, 'cube');
{ METHOD .AddComposedCubeMapTexture }
SFNode47.AddComposedCubeMapTexture([ComposedCubeMapTexture24]);
{ METHOD .AddSFNode }
ComposedShader46.AddSFNode([SFNode47]);
SFVec3f49 := TSFVec3f.CreateUndefined(ComposedShader46, false, 'chromaticDispertion');
SFVec3f49.Value := '0.98 1 1.033';
{ METHOD .AddSFVec3f }
ComposedShader46.AddSFVec3f([SFVec3f49]);
SFFloat50 := TSFFloat.CreateUndefined(ComposedShader46, false, 'bias');
SFFloat50.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader46.AddSFFloat([SFFloat50]);
SFFloat51 := TSFFloat.CreateUndefined(ComposedShader46, false, 'scale');
SFFloat51.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader46.AddSFFloat([SFFloat51]);
SFFloat52 := TSFFloat.CreateUndefined(ComposedShader46, false, 'power');
SFFloat52.Value := '2';
end;

procedure Initflowers7Part3;
begin

{ METHOD .AddSFFloat }
ComposedShader46.AddSFFloat([SFFloat52]);
SFFloat53 := TSFFloat.CreateUndefined(ComposedShader46, false, 'a');
SFFloat53.Value := '10';
{ METHOD .AddSFFloat }
ComposedShader46.AddSFFloat([SFFloat53]);
SFFloat54 := TSFFloat.CreateUndefined(ComposedShader46, false, 'b');
SFFloat54.Value := '1';
{ METHOD .AddSFFloat }
ComposedShader46.AddSFFloat([SFFloat54]);
SFFloat55 := TSFFloat.CreateUndefined(ComposedShader46, false, 'c');
SFFloat55.Value := '20';
{ METHOD .AddSFFloat }
ComposedShader46.AddSFFloat([SFFloat55]);
SFFloat56 := TSFFloat.CreateUndefined(ComposedShader46, false, 'd');
SFFloat56.Value := '20';
{ METHOD .AddSFFloat }
ComposedShader46.AddSFFloat([SFFloat56]);
SFFloat57 := TSFFloat.CreateUndefined(ComposedShader46, false, 'tdelta');
SFFloat57.Value := '0';
{ METHOD .AddSFFloat }
ComposedShader46.AddSFFloat([SFFloat57]);
SFFloat58 := TSFFloat.CreateUndefined(ComposedShader46, false, 'pdelta');
SFFloat58.Value := '0';
{ METHOD .AddSFFloat }
ComposedShader46.AddSFFloat([SFFloat58]);
ShaderPart59 := TShaderPartNode.Create;
ShaderPart59.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs']);
ShaderPart59.FdType.Value := 'VERTEX';
{ METHOD .Parts }
ComposedShader46.Parts := ShaderPart59;
ShaderPart60 := TShaderPartNode.Create;
ShaderPart60.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs']);
ShaderPart60.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
ComposedShader46.Parts := ShaderPart60;
{ METHOD .AddChildren }
Appearance22.AddChildren([ComposedShader46]);
{ METHOD .Appearance }
Shape21.Appearance := Appearance22;
Sphere61 := TSphereNode.Create;
{ METHOD .Geometry }
Shape21.Geometry := Sphere61;
{ METHOD .FdChildren.Add }
Transform20.FdChildren.Add(Shape21);
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(Transform20);
Script62 := TScriptNode.Create;
Script62.DirectOutput := True;
MFString63 := TMFString.CreateUndefined(Script62, false, 'frontUrls');
MFString63.Value := '\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png\"';
{ METHOD .Fd.AddCustomField }
Script62.AddCustomField(MFString63);
MFString64 := TMFString.CreateUndefined(Script62, false, 'backUrls');
MFString64.Value := '\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png\"';
end;

procedure Initflowers7Part4;
begin

{ METHOD .Fd.AddCustomField }
Script62.AddCustomField(MFString64);
MFString65 := TMFString.CreateUndefined(Script62, false, 'leftUrls');
MFString65.Value := '\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png\"';
{ METHOD .Fd.AddCustomField }
Script62.AddCustomField(MFString65);
MFString66 := TMFString.CreateUndefined(Script62, false, 'rightUrls');
MFString66.Value := '\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png\"';
{ METHOD .Fd.AddCustomField }
Script62.AddCustomField(MFString66);
MFString67 := TMFString.CreateUndefined(Script62, false, 'topUrls');
MFString67.Value := '\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png\"';
{ METHOD .Fd.AddCustomField }
Script62.AddCustomField(MFString67);
MFString68 := TMFString.CreateUndefined(Script62, false, 'bottomUrls');
MFString68.Value := '\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"';
{ METHOD .Fd.AddCustomField }
Script62.AddCustomField(MFString68);
MFString69 := TMFString.CreateUndefined(Script62, false, 'front');
{ METHOD .Fd.AddCustomField }
Script62.AddCustomField(MFString69);
MFString70 := TMFString.CreateUndefined(Script62, false, 'back');
{ METHOD .Fd.AddCustomField }
Script62.AddCustomField(MFString70);
MFString71 := TMFString.CreateUndefined(Script62, false, 'left');
{ METHOD .Fd.AddCustomField }
Script62.AddCustomField(MFString71);
MFString72 := TMFString.CreateUndefined(Script62, false, 'right');
{ METHOD .Fd.AddCustomField }
Script62.AddCustomField(MFString72);
MFString73 := TMFString.CreateUndefined(Script62, false, 'top');
{ METHOD .Fd.AddCustomField }
Script62.AddCustomField(MFString73);
MFString74 := TMFString.CreateUndefined(Script62, false, 'bottom');
{ METHOD .Fd.AddCustomField }
Script62.AddCustomField(MFString74);
SFFloat75 := TSFFloat.CreateUndefined(Script62, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script62.AddCustomField(SFFloat75);
SFInt3276 := TSFInt32.CreateUndefined(Script62, false, 'old');
SFInt3276.Value := '-1';
{ METHOD .Fd.AddCustomField }
Script62.AddCustomField(SFInt3276);

Script62.SetSourceCode('''ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"            var side = Math.floor(f*frontUrls.length);\n"+
"            if (side > frontUrls.length-1) {\n"+
"                side = 0;\n"+
"            }\n"+
"            if (side != old) {\n"+
"                    old = side;\n"+
"                    front[0] = frontUrls[side];\n"+
"                    back[0] = backUrls[side];\n"+
"                    left[0] = leftUrls[side];\n"+
"                    right[0] = rightUrls[side];\n"+
"                    top[0] = topUrls[side];\n"+
"                    bottom[0] = bottomUrls[side];\n"+
"            }\n"+
"        }''');
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(Script62);
{ <TimeSensor DEF="Clock" cycleInterval="45" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/> }
Script77 := TScriptNode.Create;
Script77.DirectOutput := True;
SFFloat78 := TSFFloat.CreateUndefined(Script77, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script77.AddCustomField(SFFloat78);
SFFloat79 := TSFFloat.CreateUndefined(Script77, false, 'a');
SFFloat79.Value := '10';
{ METHOD .Fd.AddCustomField }
Script77.AddCustomField(SFFloat79);
SFFloat80 := TSFFloat.CreateUndefined(Script77, false, 'b');
SFFloat80.Value := '1';
{ METHOD .Fd.AddCustomField }
Script77.AddCustomField(SFFloat80);
SFFloat81 := TSFFloat.CreateUndefined(Script77, false, 'c');
SFFloat81.Value := '20';
{ METHOD .Fd.AddCustomField }
Script77.AddCustomField(SFFloat81);
SFFloat82 := TSFFloat.CreateUndefined(Script77, false, 'd');
SFFloat82.Value := '20';
{ METHOD .Fd.AddCustomField }
Script77.AddCustomField(SFFloat82);
SFFloat83 := TSFFloat.CreateUndefined(Script77, false, 'tdelta');
SFFloat83.Value := '0';
{ METHOD .Fd.AddCustomField }
Script77.AddCustomField(SFFloat83);
SFFloat84 := TSFFloat.CreateUndefined(Script77, false, 'pdelta');
SFFloat84.Value := '0';
{ METHOD .Fd.AddCustomField }
Script77.AddCustomField(SFFloat84);

Script77.SetSourceCode('''ecmascript:\n"+
"\n"+
"function set_fraction() {\n"+
"	var choice = Math.floor(Math.random() * 4);\n"+
"	switch (choice) {\n"+
"	case 0:\n"+
"		a = a + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 1:\n"+
"		b = b + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 2:\n"+
"		c = c + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 3:\n"+
"		d = d + Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	}\n"+
"	tdelta = tdelta + 0.5;\n"+
"	pdelta = pdelta + 0.5;\n"+
"	if (a < 1) {\n"+
"		a = 10;\n"+
"	}\n"+
"	if (b < 1) {\n"+
"		b = 10;\n"+
"	}\n"+
"	if (c < 1) {\n"+
"		c = 4;\n"+
"	}\n"+
"	if (c > 20) {\n"+
"		c = 4;\n"+
"	}\n"+
"	if (d < 1) {\n"+
"		d = 4;\n"+
"	}\n"+
"	if (d > 20) {\n"+
"		d = 4;\n"+
"	}\n"+
"}''');
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(Script77);
TimeSensor85 := TTimeSensorNode.Create;
TimeSensor85.CycleInterval := 5;
TimeSensor85.Loop := True;
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(TimeSensor85);
{ Original "TourTime.EventFraction_changed TO Animate.EventSet_fraction }
{ Sample TourTime.EventFraction_changed TO Animate.EventSet_fraction}
Group16.AddRoute(TimeSensor85.EventFraction_changed, Script77.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Animate.a TO x_ite.a }
{ Sample Animate.a TO x_ite.a}
Group16.AddRoute(Animate.[object Object], ComposedShader46.set_a);
{ METHOD .AddX3DROUTE }
{ Original "Animate.b TO x_ite.b }
{ Sample Animate.b TO x_ite.b}
Group16.AddRoute(Animate.[object Object], ComposedShader46.set_b);
{ METHOD .AddX3DROUTE }
{ Original "Animate.c TO x_ite.c }
{ Sample Animate.c TO x_ite.c}
Group16.AddRoute(Animate.[object Object], ComposedShader46.set_c);
{ METHOD .AddX3DROUTE }
{ Original "Animate.d TO x_ite.d }
{ Sample Animate.d TO x_ite.d}
Group16.AddRoute(Animate.[object Object], ComposedShader46.set_d);
{ METHOD .AddX3DROUTE }
{ Original "Animate.pdelta TO x_ite.pdelta }
{ Sample Animate.pdelta TO x_ite.pdelta}
Group16.AddRoute(Animate.[object Object], ComposedShader46.set_pdelta);
{ METHOD .AddX3DROUTE }
{ Original "Animate.tdelta TO x_ite.tdelta }
{ Sample Animate.tdelta TO x_ite.tdelta}
Group16.AddRoute(Animate.[object Object], ComposedShader46.set_tdelta);
{ METHOD .AddX3DROUTE }
{ Original "Animate.a TO x3dom.a }
{ Sample Animate.a TO x3dom.a}
Group16.AddRoute(Animate.[object Object], ComposedShader31.set_a);
{ METHOD .AddX3DROUTE }
{ Original "Animate.b TO x3dom.b }
{ Sample Animate.b TO x3dom.b}
Group16.AddRoute(Animate.[object Object], ComposedShader31.set_b);
{ METHOD .AddX3DROUTE }
{ Original "Animate.c TO x3dom.c }
{ Sample Animate.c TO x3dom.c}
Group16.AddRoute(Animate.[object Object], ComposedShader31.set_c);
{ METHOD .AddX3DROUTE }
{ Original "Animate.d TO x3dom.d }
{ Sample Animate.d TO x3dom.d}
Group16.AddRoute(Animate.[object Object], ComposedShader31.set_d);
{ METHOD .AddX3DROUTE }
{ Original "Animate.pdelta TO x3dom.pdelta }
{ Sample Animate.pdelta TO x3dom.pdelta}
Group16.AddRoute(Animate.[object Object], ComposedShader31.set_pdelta);
{ METHOD .AddX3DROUTE }
{ Original "Animate.tdelta TO x3dom.tdelta }
{ Sample Animate.tdelta TO x3dom.tdelta}
Group16.AddRoute(Animate.[object Object], ComposedShader31.set_tdelta);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3D0.AddChildren([Group16]);
end;

function Createflowers7: TX3DRootNode;
begin
Initflowers7Part0;
Initflowers7Part1;
Initflowers7Part2;
Initflowers7Part3;
Initflowers7Part4;
Result := X3D0;
end;

begin
end.
