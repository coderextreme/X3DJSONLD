unit flowers7;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

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
  FieldVal32: TSFNode;
  FieldVal34: TSFVec3f;
  FieldVal35: TSFFloat;
  FieldVal36: TSFFloat;
  FieldVal37: TSFFloat;
  FieldVal38: TSFFloat;
  FieldVal39: TSFFloat;
  FieldVal40: TSFFloat;
  FieldVal41: TSFFloat;
  FieldVal42: TSFFloat;
  FieldVal43: TSFFloat;
  ShaderPart44: TShaderPartNode;
  ShaderPart45: TShaderPartNode;
  ComposedShader46: TComposedShaderNode;
  FieldVal47: TSFNode;
  FieldVal49: TSFVec3f;
  FieldVal50: TX3DEvent;
  FieldVal51: TX3DEvent;
  FieldVal52: TX3DEvent;
  FieldVal53: TX3DEvent;
  FieldVal54: TX3DEvent;
  FieldVal55: TX3DEvent;
  FieldVal56: TX3DEvent;
  FieldVal57: TX3DEvent;
  FieldVal58: TX3DEvent;
  ShaderPart59: TShaderPartNode;
  ShaderPart60: TShaderPartNode;
  Sphere61: TSphereNode;
  Script62: TScriptNode;
  FieldVal63: TMFString;
  FieldVal64: TMFString;
  FieldVal65: TMFString;
  FieldVal66: TMFString;
  FieldVal67: TMFString;
  FieldVal68: TMFString;
  FieldVal69: TMFString;
  FieldVal70: TMFString;
  FieldVal71: TMFString;
  FieldVal72: TMFString;
  FieldVal73: TMFString;
  FieldVal74: TMFString;
  FieldVal75: TX3DEvent;
  FieldVal76: TSFInt32;
  Script77: TScriptNode;
  FieldVal78: TX3DEvent;
  FieldVal79: TSFFloat;
  FieldVal80: TSFFloat;
  FieldVal81: TSFFloat;
  FieldVal82: TSFFloat;
  FieldVal83: TSFFloat;
  FieldVal84: TSFFloat;
  TimeSensor85: TTimeSensorNode;

procedure Initflowers7Part0;
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
X3D0.Components['Shape'] := 4;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Meta['title'] := 'flowers7.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d';
X3D0.Meta['description'] := 'a flower';
Group16 := TGroupNode.Create;
NavigationInfo17 := TNavigationInfoNode.Create;
Group16.FdChildren.Add(NavigationInfo17);
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
Background18 := TBackgroundNode.Create;
Background18.X3DName := 'background';
Background18.SetBackUrl(['../resources/images/all_probes/beach_cross/beach_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png']);
Background18.SetBottomUrl(['../resources/images/all_probes/beach_cross/beach_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png']);
Background18.SetFrontUrl(['../resources/images/all_probes/beach_cross/beach_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png']);
Background18.SetLeftUrl(['../resources/images/all_probes/beach_cross/beach_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png']);
Background18.SetRightUrl(['../resources/images/all_probes/beach_cross/beach_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png']);
Background18.SetTopUrl(['../resources/images/all_probes/beach_cross/beach_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png']);
Group16.FdChildren.Add(Background18);
Viewpoint19 := TViewpointNode.Create;
Viewpoint19.Position := Vector3(0, 0, 40);
Viewpoint19.Description := 'Transparent rose';
Group16.FdChildren.Add(Viewpoint19);
Transform20 := TTransformNode.Create;
Shape21 := TShapeNode.Create;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(0.7, 0.7, 0.7);
end;

procedure Initflowers7Part1;
begin
Material23.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance22.Material := Material23;
ComposedCubeMapTexture24 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture24.X3DName := 'texture';
ImageTexture25 := TImageTextureNode.Create;
ImageTexture25.X3DName := 'backShader';
ImageTexture25.SetUrl(['../resources/images/all_probes/beach_cross/beach_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png']);
ComposedCubeMapTexture24.FdBackTexture.Set(ImageTexture25);
ImageTexture26 := TImageTextureNode.Create;
ImageTexture26.X3DName := 'bottomShader';
ImageTexture26.SetUrl(['../resources/images/all_probes/beach_cross/beach_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png']);
ComposedCubeMapTexture24.FdBottomTexture.Set(ImageTexture26);
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.X3DName := 'frontShader';
ImageTexture27.SetUrl(['../resources/images/all_probes/beach_cross/beach_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png']);
ComposedCubeMapTexture24.FdFrontTexture.Set(ImageTexture27);
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.X3DName := 'leftShader';
ImageTexture28.SetUrl(['../resources/images/all_probes/beach_cross/beach_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png']);
ComposedCubeMapTexture24.FdLeftTexture.Set(ImageTexture28);
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.X3DName := 'rightShader';
ImageTexture29.SetUrl(['../resources/images/all_probes/beach_cross/beach_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png']);
ComposedCubeMapTexture24.FdRightTexture.Set(ImageTexture29);
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.X3DName := 'topShader';
ImageTexture30.SetUrl(['../resources/images/all_probes/beach_cross/beach_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png']);
ComposedCubeMapTexture24.FdTopTexture.Set(ImageTexture30);
Appearance22.Texture := ComposedCubeMapTexture24;
ComposedShader31 := TComposedShaderNode.Create;
ComposedShader31.X3DName := 'x3dom';
ComposedShader31.Language := 'GLSL';
{ TODO VERIFY <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> }
FieldVal32 := TSFNode.CreateUndefined(ComposedShader31, True, 'cube');
ComposedShader31.AddCustomFieldOrEvent(FieldVal32);
FieldVal32.Value := ComposedCubeMapTexture24;
FieldVal34 := TSFVec3f.Create(ComposedShader31, False, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader31.AddCustomFieldOrEvent(FieldVal34);
FieldVal35 := TSFFloat.Create(ComposedShader31, True, 'bias', 0.5);
ComposedShader31.AddCustomFieldOrEvent(FieldVal35);
end;

procedure Initflowers7Part2;
begin
FieldVal36 := TSFFloat.Create(ComposedShader31, True, 'scale', 0.5);
ComposedShader31.AddCustomFieldOrEvent(FieldVal36);
FieldVal37 := TSFFloat.Create(ComposedShader31, True, 'power', 2);
ComposedShader31.AddCustomFieldOrEvent(FieldVal37);
FieldVal38 := TSFFloat.Create(ComposedShader31, True, 'a', 10);
ComposedShader31.AddCustomFieldOrEvent(FieldVal38);
FieldVal39 := TSFFloat.Create(ComposedShader31, True, 'b', 1);
ComposedShader31.AddCustomFieldOrEvent(FieldVal39);
FieldVal40 := TSFFloat.Create(ComposedShader31, True, 'c', 20);
ComposedShader31.AddCustomFieldOrEvent(FieldVal40);
FieldVal41 := TSFFloat.Create(ComposedShader31, True, 'd', 20);
ComposedShader31.AddCustomFieldOrEvent(FieldVal41);
FieldVal42 := TSFFloat.Create(ComposedShader31, True, 'tdelta', 0);
ComposedShader31.AddCustomFieldOrEvent(FieldVal42);
FieldVal43 := TSFFloat.Create(ComposedShader31, True, 'pdelta', 0);
ComposedShader31.AddCustomFieldOrEvent(FieldVal43);
ShaderPart44 := TShaderPartNode.Create;
ShaderPart44.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs']);
ShaderPart44.FdType.Value := 'VERTEX';
ComposedShader31.Parts := ShaderPart44;
ShaderPart45 := TShaderPartNode.Create;
ShaderPart45.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs']);
ShaderPart45.FdType.Value := 'FRAGMENT';
ComposedShader31.Parts := ShaderPart45;
Appearance22.AddChildren([ComposedShader31]);
ComposedShader46 := TComposedShaderNode.Create;
ComposedShader46.X3DName := 'x_ite';
ComposedShader46.Language := 'GLSL';
FieldVal47 := TSFNode.CreateUndefined(ComposedShader46, True, 'cube');
ComposedShader46.AddCustomFieldOrEvent(FieldVal47);
FieldVal47.Value := ComposedCubeMapTexture24;
FieldVal49 := TSFVec3f.Create(ComposedShader46, False, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader46.AddCustomFieldOrEvent(FieldVal49);
FieldVal50 := TSFFloat.CreateEvent(ComposedShader46, 'bias', True);
ComposedShader46.AddCustomFieldOrEvent(FieldVal50);
FieldVal51 := TSFFloat.CreateEvent(ComposedShader46, 'scale', True);
ComposedShader46.AddCustomFieldOrEvent(FieldVal51);
FieldVal52 := TSFFloat.CreateEvent(ComposedShader46, 'power', True);
ComposedShader46.AddCustomFieldOrEvent(FieldVal52);
FieldVal53 := TSFFloat.CreateEvent(ComposedShader46, 'a', True);
end;

procedure Initflowers7Part3;
begin
ComposedShader46.AddCustomFieldOrEvent(FieldVal53);
FieldVal54 := TSFFloat.CreateEvent(ComposedShader46, 'b', True);
ComposedShader46.AddCustomFieldOrEvent(FieldVal54);
FieldVal55 := TSFFloat.CreateEvent(ComposedShader46, 'c', True);
ComposedShader46.AddCustomFieldOrEvent(FieldVal55);
FieldVal56 := TSFFloat.CreateEvent(ComposedShader46, 'd', True);
ComposedShader46.AddCustomFieldOrEvent(FieldVal56);
FieldVal57 := TSFFloat.CreateEvent(ComposedShader46, 'tdelta', True);
ComposedShader46.AddCustomFieldOrEvent(FieldVal57);
FieldVal58 := TSFFloat.CreateEvent(ComposedShader46, 'pdelta', True);
ComposedShader46.AddCustomFieldOrEvent(FieldVal58);
ShaderPart59 := TShaderPartNode.Create;
ShaderPart59.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs']);
ShaderPart59.FdType.Value := 'VERTEX';
ComposedShader46.Parts := ShaderPart59;
ShaderPart60 := TShaderPartNode.Create;
ShaderPart60.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs']);
ShaderPart60.FdType.Value := 'FRAGMENT';
ComposedShader46.Parts := ShaderPart60;
Appearance22.AddChildren([ComposedShader46]);
Shape21.Appearance := Appearance22;
Sphere61 := TSphereNode.Create;
Shape21.Geometry := Sphere61;
Transform20.FdChildren.Add(Shape21);
Group16.FdChildren.Add(Transform20);
Script62 := TScriptNode.Create;
Script62.X3DName := 'UrlSelector';
Script62.DirectOutput := True;
FieldVal63 := TMFString.Create(Script62, False, 'frontUrls', (['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png']));
Script62.AddCustomFieldOrEvent(FieldVal63);
FieldVal64 := TMFString.Create(Script62, False, 'backUrls', (['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png']));
Script62.AddCustomFieldOrEvent(FieldVal64);
FieldVal65 := TMFString.Create(Script62, False, 'leftUrls', (['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png']));
Script62.AddCustomFieldOrEvent(FieldVal65);
FieldVal66 := TMFString.Create(Script62, False, 'rightUrls', (['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png']));
Script62.AddCustomFieldOrEvent(FieldVal66);
FieldVal67 := TMFString.Create(Script62, False, 'topUrls', (['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png']));
Script62.AddCustomFieldOrEvent(FieldVal67);
FieldVal68 := TMFString.Create(Script62, False, 'bottomUrls', (['https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png']));
Script62.AddCustomFieldOrEvent(FieldVal68);
end;

procedure Initflowers7Part4;
begin
FieldVal69 := TMFString.CreateUndefined(Script62, True, 'front');
Script62.AddCustomFieldOrEvent(FieldVal69);
FieldVal70 := TMFString.CreateUndefined(Script62, True, 'back');
Script62.AddCustomFieldOrEvent(FieldVal70);
FieldVal71 := TMFString.CreateUndefined(Script62, True, 'left');
Script62.AddCustomFieldOrEvent(FieldVal71);
FieldVal72 := TMFString.CreateUndefined(Script62, True, 'right');
Script62.AddCustomFieldOrEvent(FieldVal72);
FieldVal73 := TMFString.CreateUndefined(Script62, True, 'top');
Script62.AddCustomFieldOrEvent(FieldVal73);
FieldVal74 := TMFString.CreateUndefined(Script62, True, 'bottom');
Script62.AddCustomFieldOrEvent(FieldVal74);
FieldVal75 := TSFFloat.CreateEvent(Script62, 'set_fraction', True);
Script62.AddCustomFieldOrEvent(FieldVal75);
FieldVal76 := TSFInt32.Create(Script62, True, 'old', -1);
Script62.AddCustomFieldOrEvent(FieldVal76);
Script62.SetSourceCode('ecmascript:' + LineEnding +
  '        function set_fraction( f, tm ) {' + LineEnding +
  '            var side = Math.floor(f*frontUrls.length);' + LineEnding +
  '            if (side > frontUrls.length-1) {' + LineEnding +
  '                side = 0;' + LineEnding +
  '            }' + LineEnding +
  '            if (side != old) {' + LineEnding +
  '                    old = side;' + LineEnding +
  '                    front[0] = frontUrls[side];' + LineEnding +
  '                    back[0] = backUrls[side];' + LineEnding +
  '                    left[0] = leftUrls[side];' + LineEnding +
  '                    right[0] = rightUrls[side];' + LineEnding +
  '                    top[0] = topUrls[side];' + LineEnding +
  '                    bottom[0] = bottomUrls[side];' + LineEnding +
  '            }' + LineEnding +
  '        }');
Group16.FdChildren.Add(Script62);
{ <TimeSensor DEF="Clock" cycleInterval="45" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/> }
Script77 := TScriptNode.Create;
Script77.X3DName := 'Animate';
Script77.DirectOutput := True;
FieldVal78 := TSFFloat.CreateEvent(Script77, 'set_fraction', True);
Script77.AddCustomFieldOrEvent(FieldVal78);
FieldVal79 := TSFFloat.Create(Script77, True, 'a', 10);
Script77.AddCustomFieldOrEvent(FieldVal79);
FieldVal80 := TSFFloat.Create(Script77, True, 'b', 1);
Script77.AddCustomFieldOrEvent(FieldVal80);
FieldVal81 := TSFFloat.Create(Script77, True, 'c', 20);
Script77.AddCustomFieldOrEvent(FieldVal81);
FieldVal82 := TSFFloat.Create(Script77, True, 'd', 20);
Script77.AddCustomFieldOrEvent(FieldVal82);
FieldVal83 := TSFFloat.Create(Script77, True, 'tdelta', 0);
Script77.AddCustomFieldOrEvent(FieldVal83);
FieldVal84 := TSFFloat.Create(Script77, True, 'pdelta', 0);
Script77.AddCustomFieldOrEvent(FieldVal84);
Script77.SetSourceCode('ecmascript:' + LineEnding +
  '' + LineEnding +
  'function set_fraction() {' + LineEnding +
  '	var choice = Math.floor(Math.random() * 4);' + LineEnding +
  '	switch (choice) {' + LineEnding +
  '	case 0:' + LineEnding +
  '		a = a + Math.floor(Math.random() * 2) * 2 - 1;' + LineEnding +
  '		break;' + LineEnding +
  '	case 1:' + LineEnding +
  '		b = b + Math.floor(Math.random() * 2) * 2 - 1;' + LineEnding +
  '		break;' + LineEnding +
  '	case 2:' + LineEnding +
  '		c = c + Math.floor(Math.random() * 2) * 2 - 1;' + LineEnding +
  '		break;' + LineEnding +
  '	case 3:' + LineEnding +
  '		d = d + Math.floor(Math.random() * 2) * 2 - 1;' + LineEnding +
  '		break;' + LineEnding +
  '	}' + LineEnding +
  '	tdelta = tdelta + 0.5;' + LineEnding +
  '	pdelta = pdelta + 0.5;' + LineEnding +
  '	if (a < 1) {' + LineEnding +
  '		a = 10;' + LineEnding +
  '	}' + LineEnding +
  '	if (b < 1) {' + LineEnding +
  '		b = 10;' + LineEnding +
  '	}' + LineEnding +
  '	if (c < 1) {' + LineEnding +
  '		c = 4;' + LineEnding +
  '	}' + LineEnding +
  '	if (c > 20) {' + LineEnding +
  '		c = 4;' + LineEnding +
  '	}' + LineEnding +
  '	if (d < 1) {' + LineEnding +
  '		d = 4;' + LineEnding +
  '	}' + LineEnding +
  '	if (d > 20) {' + LineEnding +
  '		d = 4;' + LineEnding +
  '	}' + LineEnding +
  '}');
Group16.FdChildren.Add(Script77);
TimeSensor85 := TTimeSensorNode.Create;
TimeSensor85.X3DName := 'TourTime';
end;

procedure Initflowers7Part5;
begin
TimeSensor85.CycleInterval := 5;
TimeSensor85.Loop := True;
Group16.FdChildren.Add(TimeSensor85);
{ ROUTE TourTime.fraction_changed TO Animate.set_fraction }
Group16.AddRoute(TimeSensor85.EventFraction_changed, FieldVal78);
{ ROUTE Animate.a TO x_ite.a }
Group16.AddRoute(FieldVal79, ComposedShader46.a);
{ ROUTE Animate.b TO x_ite.b }
Group16.AddRoute(FieldVal80, ComposedShader46.b);
{ ROUTE Animate.c TO x_ite.c }
Group16.AddRoute(FieldVal81, ComposedShader46.c);
{ ROUTE Animate.d TO x_ite.d }
Group16.AddRoute(FieldVal82, ComposedShader46.d);
{ ROUTE Animate.pdelta TO x_ite.pdelta }
Group16.AddRoute(FieldVal84, ComposedShader46.pdelta);
{ ROUTE Animate.tdelta TO x_ite.tdelta }
Group16.AddRoute(FieldVal83, ComposedShader46.tdelta);
{ ROUTE Animate.a TO x3dom.a }
Group16.AddRoute(FieldVal79, ComposedShader31.a);
{ ROUTE Animate.b TO x3dom.b }
Group16.AddRoute(FieldVal80, ComposedShader31.b);
{ ROUTE Animate.c TO x3dom.c }
Group16.AddRoute(FieldVal81, ComposedShader31.c);
{ ROUTE Animate.d TO x3dom.d }
Group16.AddRoute(FieldVal82, ComposedShader31.d);
{ ROUTE Animate.pdelta TO x3dom.pdelta }
Group16.AddRoute(FieldVal84, ComposedShader31.pdelta);
{ ROUTE Animate.tdelta TO x3dom.tdelta }
Group16.AddRoute(FieldVal83, ComposedShader31.tdelta);
X3D0.AddChildren([Group16]);
end;

function Createflowers7: TX3DRootNode;
begin
  Initflowers7Part0;
  Initflowers7Part1;
  Initflowers7Part2;
  Initflowers7Part3;
  Initflowers7Part4;
  Initflowers7Part5;
  Result := X3D0;
end;

begin
end.
