unit mirror2;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createmirror2: TX3DRootNode;

implementation

uses CastleVectors;

var
  X3D0: TX3DRootNode;
  Group15: TGroupNode;
  Viewpoint16: TViewpointNode;
  Background17: TBackgroundNode;
  Transform18: TTransformNode;
  Shape19: TShapeNode;
  Appearance20: TAppearanceNode;
  Material21: TMaterialNode;
  ComposedCubeMapTexture22: TComposedCubeMapTextureNode;
  ImageTexture23: TImageTextureNode;
  ImageTexture24: TImageTextureNode;
  ImageTexture25: TImageTextureNode;
  ImageTexture26: TImageTextureNode;
  ImageTexture27: TImageTextureNode;
  ImageTexture28: TImageTextureNode;
  ComposedShader29: TComposedShaderNode;
  FieldVal30: TSFVec3f;
  FieldVal31: TSFInt32;
  FieldVal32: TSFFloat;
  FieldVal33: TSFFloat;
  FieldVal34: TSFFloat;
  ShaderPart35: TShaderPartNode;
  ShaderPart36: TShaderPartNode;
  ComposedShader37: TComposedShaderNode;
  FieldVal38: TSFVec3f;
  FieldVal39: TSFInt32;
  FieldVal40: TSFFloat;
  FieldVal41: TSFFloat;
  FieldVal42: TSFFloat;
  ShaderPart43: TShaderPartNode;
  ShaderPart44: TShaderPartNode;
  Sphere45: TSphereNode;
  Script46: TScriptNode;
  FieldVal47: TMFString;
  FieldVal48: TMFString;
  FieldVal49: TMFString;
  FieldVal50: TMFString;
  FieldVal51: TMFString;
  FieldVal52: TMFString;
  FieldVal53: TX3DEvent;
  FieldVal54: TX3DEvent;
  FieldVal55: TX3DEvent;
  FieldVal56: TX3DEvent;
  FieldVal57: TX3DEvent;
  FieldVal58: TX3DEvent;
  FieldVal59: TX3DEvent;
  FieldVal60: TSFInt32;
  TimeSensor61: TTimeSensorNode;

procedure Initmirror2Part0;
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
X3D0.Meta['title'] := 'mirror2.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/mirror2.x3d';
X3D0.Meta['description'] := 'a mirrored sphere';
Group15 := TGroupNode.Create;
Viewpoint16 := TViewpointNode.Create;
Viewpoint16.Position := Vector3(0, 5, 100);
Viewpoint16.Description := 'Switch background and images texture';
Group15.FdChildren.Add(Viewpoint16);
Background17 := TBackgroundNode.Create;
Background17.X3DName := 'cube';
Background17.SetLeftUrl(['../resources/images/all_probes/beach_cross/beach_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png']);
Background17.SetRightUrl(['../resources/images/all_probes/beach_cross/beach_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png']);
Background17.SetFrontUrl(['../resources/images/all_probes/beach_cross/beach_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png']);
Background17.SetBackUrl(['../resources/images/all_probes/beach_cross/beach_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png']);
Background17.SetTopUrl(['../resources/images/all_probes/beach_cross/beach_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png']);
Background17.SetBottomUrl(['../resources/images/all_probes/beach_cross/beach_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png']);
Group15.FdChildren.Add(Background17);
Transform18 := TTransformNode.Create;
Shape19 := TShapeNode.Create;
Appearance20 := TAppearanceNode.Create;
Material21 := TMaterialNode.Create;
Material21.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material21.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance20.Material := Material21;
ComposedCubeMapTexture22 := TComposedCubeMapTextureNode.Create;
end;

procedure Initmirror2Part1;
begin
ImageTexture23 := TImageTextureNode.Create;
ImageTexture23.X3DName := 'backShader';
ImageTexture23.SetUrl(['../resources/images/all_probes/beach_cross/beach_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png']);
ComposedCubeMapTexture22.FdBackTexture.Set(ImageTexture23);
ImageTexture24 := TImageTextureNode.Create;
ImageTexture24.X3DName := 'bottomShader';
ImageTexture24.SetUrl(['../resources/images/all_probes/beach_cross/beach_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png']);
ComposedCubeMapTexture22.FdBottomTexture.Set(ImageTexture24);
ImageTexture25 := TImageTextureNode.Create;
ImageTexture25.X3DName := 'frontShader';
ImageTexture25.SetUrl(['../resources/images/all_probes/beach_cross/beach_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png']);
ComposedCubeMapTexture22.FdFrontTexture.Set(ImageTexture25);
ImageTexture26 := TImageTextureNode.Create;
ImageTexture26.X3DName := 'leftShader';
ImageTexture26.SetUrl(['../resources/images/all_probes/beach_cross/beach_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png']);
ComposedCubeMapTexture22.FdLeftTexture.Set(ImageTexture26);
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.X3DName := 'rightShader';
ImageTexture27.SetUrl(['../resources/images/all_probes/beach_cross/beach_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png']);
ComposedCubeMapTexture22.FdRightTexture.Set(ImageTexture27);
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.X3DName := 'topShader';
ImageTexture28.SetUrl(['../resources/images/all_probes/beach_cross/beach_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png']);
ComposedCubeMapTexture22.FdTopTexture.Set(ImageTexture28);
Appearance20.Texture := ComposedCubeMapTexture22;
ComposedShader29 := TComposedShaderNode.Create;
ComposedShader29.X3DName := 'x_ite';
ComposedShader29.Language := 'GLSL';
{ http://hypertextbook.com/facts/2005/JustinChe.shtml }
FieldVal30 := TSFVec3f.Create(ComposedShader29, True, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader29.AddCustomFieldOrEvent(FieldVal30);
FieldVal31 := TSFInt32.Create(ComposedShader29, True, 'cube', 0);
ComposedShader29.AddCustomFieldOrEvent(FieldVal31);
FieldVal32 := TSFFloat.Create(ComposedShader29, True, 'bias', 0.5);
ComposedShader29.AddCustomFieldOrEvent(FieldVal32);
FieldVal33 := TSFFloat.Create(ComposedShader29, True, 'scale', 0.5);
ComposedShader29.AddCustomFieldOrEvent(FieldVal33);
FieldVal34 := TSFFloat.Create(ComposedShader29, True, 'power', 2);
ComposedShader29.AddCustomFieldOrEvent(FieldVal34);
ShaderPart35 := TShaderPartNode.Create;
end;

procedure Initmirror2Part2;
begin
ShaderPart35.SetUrl(['../shaders/x_ite.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs']);
ShaderPart35.FdType.Value := 'VERTEX';
ComposedShader29.Parts := ShaderPart35;
ShaderPart36 := TShaderPartNode.Create;
ShaderPart36.SetUrl(['../shaders/x_itemix.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs']);
ShaderPart36.FdType.Value := 'FRAGMENT';
ComposedShader29.Parts := ShaderPart36;
Appearance20.AddChildren([ComposedShader29]);
ComposedShader37 := TComposedShaderNode.Create;
ComposedShader37.X3DName := 'x3dom';
ComposedShader37.Language := 'GLSL';
FieldVal38 := TSFVec3f.Create(ComposedShader37, True, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader37.AddCustomFieldOrEvent(FieldVal38);
FieldVal39 := TSFInt32.Create(ComposedShader37, True, 'cube', 0);
ComposedShader37.AddCustomFieldOrEvent(FieldVal39);
FieldVal40 := TSFFloat.Create(ComposedShader37, True, 'bias', 0.5);
ComposedShader37.AddCustomFieldOrEvent(FieldVal40);
FieldVal41 := TSFFloat.Create(ComposedShader37, True, 'scale', 0.5);
ComposedShader37.AddCustomFieldOrEvent(FieldVal41);
FieldVal42 := TSFFloat.Create(ComposedShader37, True, 'power', 2);
ComposedShader37.AddCustomFieldOrEvent(FieldVal42);
ShaderPart43 := TShaderPartNode.Create;
ShaderPart43.SetUrl(['../shaders/x3dom.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs']);
ShaderPart43.FdType.Value := 'VERTEX';
ComposedShader37.Parts := ShaderPart43;
ShaderPart44 := TShaderPartNode.Create;
ShaderPart44.SetUrl(['../shaders/mix.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs']);
ShaderPart44.FdType.Value := 'FRAGMENT';
ComposedShader37.Parts := ShaderPart44;
Appearance20.AddChildren([ComposedShader37]);
Shape19.Appearance := Appearance20;
Sphere45 := TSphereNode.Create;
Sphere45.Radius := 30;
Shape19.Geometry := Sphere45;
Transform18.FdChildren.Add(Shape19);
Script46 := TScriptNode.Create;
Script46.X3DName := 'UrlSelector';
Script46.DirectOutput := True;
FieldVal47 := TMFString.Create(Script46, False, 'frontUrls', (['../resources/images/all_probes/beach_cross/beach_front.png', '../resources/images/all_probes/building_cross/building_front.png', '../resources/images/all_probes/campus_cross/campus_front.png', '../resources/images/all_probes/galileo_cross/galileo_front.png', '../resources/images/all_probes/grace_cross/grace_front.png', '../resources/images/all_probes/kitchen_cross/kitchen_front.png', '../resources/images/all_probes/rnl_cross/rnl_front.png', '../resources/images/all_probes/stpeters_cross/stpeters_front.png', '../resources/images/all_probes/uffizi_cross/uffizi_front.png']));
Script46.AddCustomFieldOrEvent(FieldVal47);
end;

procedure Initmirror2Part3;
begin
FieldVal48 := TMFString.Create(Script46, False, 'backUrls', (['../resources/images/all_probes/beach_cross/beach_back.png', '../resources/images/all_probes/building_cross/building_back.png', '../resources/images/all_probes/campus_cross/campus_back.png', '../resources/images/all_probes/galileo_cross/galileo_back.png', '../resources/images/all_probes/grace_cross/grace_back.png', '../resources/images/all_probes/kitchen_cross/kitchen_back.png', '../resources/images/all_probes/rnl_cross/rnl_back.png', '../resources/images/all_probes/stpeters_cross/stpeters_back.png', '../resources/images/all_probes/uffizi_cross/uffizi_back.png']));
Script46.AddCustomFieldOrEvent(FieldVal48);
FieldVal49 := TMFString.Create(Script46, False, 'leftUrls', (['../resources/images/all_probes/beach_cross/beach_left.png', '../resources/images/all_probes/building_cross/building_left.png', '../resources/images/all_probes/campus_cross/campus_left.png', '../resources/images/all_probes/galileo_cross/galileo_left.png', '../resources/images/all_probes/grace_cross/grace_left.png', '../resources/images/all_probes/kitchen_cross/kitchen_left.png', '../resources/images/all_probes/rnl_cross/rnl_left.png', '../resources/images/all_probes/stpeters_cross/stpeters_left.png', '../resources/images/all_probes/uffizi_cross/uffizi_left.png']));
Script46.AddCustomFieldOrEvent(FieldVal49);
FieldVal50 := TMFString.Create(Script46, False, 'rightUrls', (['../resources/images/all_probes/beach_cross/beach_right.png', '../resources/images/all_probes/building_cross/building_right.png', '../resources/images/all_probes/campus_cross/campus_right.png', '../resources/images/all_probes/galileo_cross/galileo_right.png', '../resources/images/all_probes/grace_cross/grace_right.png', '../resources/images/all_probes/kitchen_cross/kitchen_right.png', '../resources/images/all_probes/rnl_cross/rnl_right.png', '../resources/images/all_probes/stpeters_cross/stpeters_right.png', '../resources/images/all_probes/uffizi_cross/uffizi_right.png']));
Script46.AddCustomFieldOrEvent(FieldVal50);
FieldVal51 := TMFString.Create(Script46, False, 'topUrls', (['../resources/images/all_probes/beach_cross/beach_top.png', '../resources/images/all_probes/building_cross/building_top.png', '../resources/images/all_probes/campus_cross/campus_top.png', '../resources/images/all_probes/galileo_cross/galileo_top.png', '../resources/images/all_probes/grace_cross/grace_top.png', '../resources/images/all_probes/kitchen_cross/kitchen_top.png', '../resources/images/all_probes/rnl_cross/rnl_top.png', '../resources/images/all_probes/stpeters_cross/stpeters_top.png', '../resources/images/all_probes/uffizi_cross/uffizi_top.png']));
Script46.AddCustomFieldOrEvent(FieldVal51);
FieldVal52 := TMFString.Create(Script46, False, 'bottomUrls', (['../resources/images/all_probes/beach_cross/beach_bottom.png', '../resources/images/all_probes/building_cross/building_bottom.png', '../resources/images/all_probes/campus_cross/campus_bottom.png', '../resources/images/all_probes/galileo_cross/galileo_bottom.png', '../resources/images/all_probes/grace_cross/grace_bottom.png', '../resources/images/all_probes/kitchen_cross/kitchen_bottom.png', '../resources/images/all_probes/rnl_cross/rnl_bottom.png', '../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', '../resources/images/all_probes/uffizi_cross/uffizi_bottom.png']));
Script46.AddCustomFieldOrEvent(FieldVal52);
FieldVal53 := TMFString.CreateEvent(Script46, 'front_changed', False);
Script46.AddCustomFieldOrEvent(FieldVal53);
FieldVal54 := TMFString.CreateEvent(Script46, 'back_changed', False);
Script46.AddCustomFieldOrEvent(FieldVal54);
FieldVal55 := TMFString.CreateEvent(Script46, 'left_changed', False);
Script46.AddCustomFieldOrEvent(FieldVal55);
FieldVal56 := TMFString.CreateEvent(Script46, 'right_changed', False);
Script46.AddCustomFieldOrEvent(FieldVal56);
FieldVal57 := TMFString.CreateEvent(Script46, 'top_changed', False);
Script46.AddCustomFieldOrEvent(FieldVal57);
FieldVal58 := TMFString.CreateEvent(Script46, 'bottom_changed', False);
Script46.AddCustomFieldOrEvent(FieldVal58);
FieldVal59 := TSFFloat.CreateEvent(Script46, 'set_fraction', True);
Script46.AddCustomFieldOrEvent(FieldVal59);
FieldVal60 := TSFInt32.Create(Script46, True, 'old', -1);
Script46.AddCustomFieldOrEvent(FieldVal60);
Script46.SetSourceCode('ecmascript:' + LineEnding +
  '        function set_fraction( f, tm ) {' + LineEnding +
  '	    var side = Math.floor(f*frontUrls.length);' + LineEnding +
  '	    if (side > frontUrls.length-1) {' + LineEnding +
  '	    	side = 0;' + LineEnding +
  '	    }' + LineEnding +
  '	    if (side != old) {' + LineEnding +
  '	    	    // Browser.print(f+" "+side);' + LineEnding +
  '	    	    old = side;' + LineEnding +
  '		    front_changed[0] = frontUrls[side];' + LineEnding +
  '		    back_changed[0] = backUrls[side];' + LineEnding +
  '		    left_changed[0] = leftUrls[side];' + LineEnding +
  '		    right_changed[0] = rightUrls[side];' + LineEnding +
  '		    top_changed[0] = topUrls[side];' + LineEnding +
  '		    bottom_changed[0] = bottomUrls[side];' + LineEnding +
  '            }' + LineEnding +
  '        }');
Transform18.FdChildren.Add(Script46);
TimeSensor61 := TTimeSensorNode.Create;
TimeSensor61.X3DName := 'Clock';
TimeSensor61.CycleInterval := 45;
TimeSensor61.Loop := True;
Transform18.FdChildren.Add(TimeSensor61);
{ ROUTE Clock.fraction_changed TO UrlSelector.set_fraction }
Transform18.AddRoute(TimeSensor61.EventFraction_changed, FieldVal59);
{ ROUTE UrlSelector.front_changed TO cube.frontUrl }
Transform18.AddRoute(FieldVal53, Background17.frontUrl);
{ ROUTE UrlSelector.back_changed TO cube.backUrl }
Transform18.AddRoute(FieldVal54, Background17.backUrl);
{ ROUTE UrlSelector.left_changed TO cube.leftUrl }
end;

procedure Initmirror2Part4;
begin
Transform18.AddRoute(FieldVal55, Background17.leftUrl);
{ ROUTE UrlSelector.right_changed TO cube.rightUrl }
Transform18.AddRoute(FieldVal56, Background17.rightUrl);
{ ROUTE UrlSelector.top_changed TO cube.topUrl }
Transform18.AddRoute(FieldVal57, Background17.topUrl);
{ ROUTE UrlSelector.bottom_changed TO cube.bottomUrl }
Transform18.AddRoute(FieldVal58, Background17.bottomUrl);
{ ROUTE UrlSelector.front_changed TO frontShader.url }
Transform18.AddRoute(FieldVal53, ImageTexture25.url);
{ ROUTE UrlSelector.back_changed TO backShader.url }
Transform18.AddRoute(FieldVal54, ImageTexture23.url);
{ ROUTE UrlSelector.left_changed TO leftShader.url }
Transform18.AddRoute(FieldVal55, ImageTexture26.url);
{ ROUTE UrlSelector.right_changed TO rightShader.url }
Transform18.AddRoute(FieldVal56, ImageTexture27.url);
{ ROUTE UrlSelector.top_changed TO topShader.url }
Transform18.AddRoute(FieldVal57, ImageTexture28.url);
{ ROUTE UrlSelector.bottom_changed TO bottomShader.url }
Transform18.AddRoute(FieldVal58, ImageTexture24.url);
Group15.FdChildren.Add(Transform18);
X3D0.AddChildren([Group15]);
end;

function Createmirror2: TX3DRootNode;
begin
  Initmirror2Part0;
  Initmirror2Part1;
  Initmirror2Part2;
  Initmirror2Part3;
  Initmirror2Part4;
  Result := X3D0;
end;

begin
end.
