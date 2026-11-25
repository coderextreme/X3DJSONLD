unit mirror;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createmirror: TX3DRootNode;

implementation

uses CastleVectors;

var
  X3D0: TX3DRootNode;
  Group15: TGroupNode;
  Viewpoint16: TViewpointNode;
  TextureBackground17: TTextureBackgroundNode;
  ImageTexture18: TImageTextureNode;
  ImageTexture19: TImageTextureNode;
  ImageTexture20: TImageTextureNode;
  ImageTexture21: TImageTextureNode;
  ImageTexture22: TImageTextureNode;
  ImageTexture23: TImageTextureNode;
  Transform24: TTransformNode;
  Shape25: TShapeNode;
  Appearance26: TAppearanceNode;
  Material27: TMaterialNode;
  ComposedCubeMapTexture28: TComposedCubeMapTextureNode;
  ImageTexture29: TImageTextureNode;
  ImageTexture30: TImageTextureNode;
  ImageTexture31: TImageTextureNode;
  ImageTexture32: TImageTextureNode;
  ImageTexture33: TImageTextureNode;
  ImageTexture34: TImageTextureNode;
  ComposedShader35: TComposedShaderNode;
  FieldVal36: TSFVec3f;
  FieldVal37: TSFInt32;
  FieldVal38: TSFFloat;
  FieldVal39: TSFFloat;
  FieldVal40: TSFFloat;
  ShaderPart41: TShaderPartNode;
  ShaderPart42: TShaderPartNode;
  ComposedShader43: TComposedShaderNode;
  FieldVal44: TSFVec3f;
  FieldVal45: TSFInt32;
  FieldVal46: TSFFloat;
  FieldVal47: TSFFloat;
  FieldVal48: TSFFloat;
  ShaderPart49: TShaderPartNode;
  ShaderPart50: TShaderPartNode;
  Sphere51: TSphereNode;
  Script52: TScriptNode;
  FieldVal53: TMFString;
  FieldVal54: TMFString;
  FieldVal55: TMFString;
  FieldVal56: TMFString;
  FieldVal57: TMFString;
  FieldVal58: TMFString;
  FieldVal59: TX3DEvent;
  FieldVal60: TX3DEvent;
  FieldVal61: TX3DEvent;
  FieldVal62: TX3DEvent;
  FieldVal63: TX3DEvent;
  FieldVal64: TX3DEvent;
  FieldVal65: TX3DEvent;
  FieldVal66: TSFInt32;
  TimeSensor67: TTimeSensorNode;

procedure InitmirrorPart0;
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
X3D0.Meta['title'] := 'mirror.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/mirror.x3d';
X3D0.Meta['description'] := 'sphere with alternating backgrounds';
Group15 := TGroupNode.Create;
Viewpoint16 := TViewpointNode.Create;
Viewpoint16.Position := Vector3(0, 5, 100);
Viewpoint16.Description := 'Switch background and images texture';
Group15.FdChildren.Add(Viewpoint16);
TextureBackground17 := TTextureBackgroundNode.Create;
ImageTexture18 := TImageTextureNode.Create;
ImageTexture18.X3DName := 'leftBackgroundTexture';
ImageTexture18.SetUrl(['../resources/images/all_probes/beach_cross/beach_left.png', 'https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png']);
TextureBackground17.LeftTexture := ImageTexture18;
ImageTexture19 := TImageTextureNode.Create;
ImageTexture19.X3DName := 'rightBackgroundTexture';
ImageTexture19.SetUrl(['../resources/images/all_probes/beach_cross/beach_right.png', 'https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png']);
TextureBackground17.RightTexture := ImageTexture19;
ImageTexture20 := TImageTextureNode.Create;
ImageTexture20.X3DName := 'frontBackgroundTexture';
ImageTexture20.SetUrl(['../resources/images/all_probes/beach_cross/beach_front.png', 'https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png']);
TextureBackground17.FrontTexture := ImageTexture20;
ImageTexture21 := TImageTextureNode.Create;
ImageTexture21.X3DName := 'backBackgroundTexture';
ImageTexture21.SetUrl(['../resources/images/all_probes/beach_cross/beach_back.png', 'https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png']);
TextureBackground17.BackTexture := ImageTexture21;
end;

procedure InitmirrorPart1;
begin
ImageTexture22 := TImageTextureNode.Create;
ImageTexture22.X3DName := 'topBackgroundTexture';
ImageTexture22.SetUrl(['../resources/images/all_probes/beach_cross/beach_top.png', 'https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png']);
TextureBackground17.TopTexture := ImageTexture22;
ImageTexture23 := TImageTextureNode.Create;
ImageTexture23.X3DName := 'bottomBackgroundTexture';
ImageTexture23.SetUrl(['../resources/images/all_probes/beach_cross/beach_bottom.png', 'https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png']);
TextureBackground17.BottomTexture := ImageTexture23;
Group15.FdChildren.Add(TextureBackground17);
Transform24 := TTransformNode.Create;
Shape25 := TShapeNode.Create;
Appearance26 := TAppearanceNode.Create;
Material27 := TMaterialNode.Create;
Material27.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material27.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance26.Material := Material27;
ComposedCubeMapTexture28 := TComposedCubeMapTextureNode.Create;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.X3DName := 'backShader';
ImageTexture29.SetUrl(['../resources/images/all_probes/beach_cross/beach_back.png', 'https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png']);
ComposedCubeMapTexture28.FdBackTexture.Set(ImageTexture29);
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.X3DName := 'bottomShader';
ImageTexture30.SetUrl(['../resources/images/all_probes/beach_cross/beach_bottom.png', 'https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png']);
ComposedCubeMapTexture28.FdBottomTexture.Set(ImageTexture30);
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.X3DName := 'frontShader';
ImageTexture31.SetUrl(['../resources/images/all_probes/beach_cross/beach_front.png', 'https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png']);
ComposedCubeMapTexture28.FdFrontTexture.Set(ImageTexture31);
ImageTexture32 := TImageTextureNode.Create;
ImageTexture32.X3DName := 'leftShader';
ImageTexture32.SetUrl(['../resources/images/all_probes/beach_cross/beach_left.png', 'https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png']);
ComposedCubeMapTexture28.FdLeftTexture.Set(ImageTexture32);
ImageTexture33 := TImageTextureNode.Create;
ImageTexture33.X3DName := 'rightShader';
ImageTexture33.SetUrl(['../resources/images/all_probes/beach_cross/beach_right.png', 'https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png']);
ComposedCubeMapTexture28.FdRightTexture.Set(ImageTexture33);
ImageTexture34 := TImageTextureNode.Create;
ImageTexture34.X3DName := 'topShader';
ImageTexture34.SetUrl(['../resources/images/all_probes/beach_cross/beach_top.png', 'https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png']);
end;

procedure InitmirrorPart2;
begin
ComposedCubeMapTexture28.FdTopTexture.Set(ImageTexture34);
Appearance26.Texture := ComposedCubeMapTexture28;
ComposedShader35 := TComposedShaderNode.Create;
ComposedShader35.X3DName := 'x3dom';
ComposedShader35.Language := 'GLSL';
FieldVal36 := TSFVec3f.Create(ComposedShader35, True, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader35.AddCustomFieldOrEvent(FieldVal36);
FieldVal37 := TSFInt32.Create(ComposedShader35, True, 'cube', 0);
ComposedShader35.AddCustomFieldOrEvent(FieldVal37);
FieldVal38 := TSFFloat.Create(ComposedShader35, True, 'bias', 0.5);
ComposedShader35.AddCustomFieldOrEvent(FieldVal38);
FieldVal39 := TSFFloat.Create(ComposedShader35, True, 'scale', 0.5);
ComposedShader35.AddCustomFieldOrEvent(FieldVal39);
FieldVal40 := TSFFloat.Create(ComposedShader35, True, 'power', 2);
ComposedShader35.AddCustomFieldOrEvent(FieldVal40);
ShaderPart41 := TShaderPartNode.Create;
ShaderPart41.SetUrl(['../shaders/x3dom.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs']);
ShaderPart41.FdType.Value := 'VERTEX';
ComposedShader35.Parts := ShaderPart41;
ShaderPart42 := TShaderPartNode.Create;
ShaderPart42.SetUrl(['../shaders/mix.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs']);
ShaderPart42.FdType.Value := 'FRAGMENT';
ComposedShader35.Parts := ShaderPart42;
Appearance26.AddChildren([ComposedShader35]);
ComposedShader43 := TComposedShaderNode.Create;
ComposedShader43.X3DName := 'x_ite';
ComposedShader43.Language := 'GLSL';
{ http://hypertextbook.com/facts/2005/JustinChe.shtml }
FieldVal44 := TSFVec3f.Create(ComposedShader43, True, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader43.AddCustomFieldOrEvent(FieldVal44);
FieldVal45 := TSFInt32.Create(ComposedShader43, True, 'cube', 0);
ComposedShader43.AddCustomFieldOrEvent(FieldVal45);
FieldVal46 := TSFFloat.Create(ComposedShader43, True, 'bias', 0.5);
ComposedShader43.AddCustomFieldOrEvent(FieldVal46);
FieldVal47 := TSFFloat.Create(ComposedShader43, True, 'scale', 0.5);
ComposedShader43.AddCustomFieldOrEvent(FieldVal47);
FieldVal48 := TSFFloat.Create(ComposedShader43, True, 'power', 2);
ComposedShader43.AddCustomFieldOrEvent(FieldVal48);
ShaderPart49 := TShaderPartNode.Create;
ShaderPart49.SetUrl(['../shaders/x_ite.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs']);
end;

procedure InitmirrorPart3;
begin
ShaderPart49.FdType.Value := 'VERTEX';
ComposedShader43.Parts := ShaderPart49;
ShaderPart50 := TShaderPartNode.Create;
ShaderPart50.SetUrl(['../shaders/x_itemix.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs']);
ShaderPart50.FdType.Value := 'FRAGMENT';
ComposedShader43.Parts := ShaderPart50;
Appearance26.AddChildren([ComposedShader43]);
Shape25.Appearance := Appearance26;
Sphere51 := TSphereNode.Create;
Sphere51.Radius := 30;
Shape25.Geometry := Sphere51;
Transform24.FdChildren.Add(Shape25);
Script52 := TScriptNode.Create;
Script52.X3DName := 'UrlSelector';
Script52.DirectOutput := True;
FieldVal53 := TMFString.Create(Script52, False, 'frontUrls', (['../resources/images/all_probes/beach_cross/beach_front.png', '../resources/images/all_probes/building_cross/building_front.png', '../resources/images/all_probes/campus_cross/campus_front.png', '../resources/images/all_probes/galileo_cross/galileo_front.png', '../resources/images/all_probes/grace_cross/grace_front.png', '../resources/images/all_probes/kitchen_cross/kitchen_front.png', '../resources/images/all_probes/rnl_cross/rnl_front.png', '../resources/images/all_probes/stpeters_cross/stpeters_front.png', '../resources/images/all_probes/uffizi_cross/uffizi_front.png']));
Script52.AddCustomFieldOrEvent(FieldVal53);
FieldVal54 := TMFString.Create(Script52, False, 'backUrls', (['../resources/images/all_probes/beach_cross/beach_back.png', '../resources/images/all_probes/building_cross/building_back.png', '../resources/images/all_probes/campus_cross/campus_back.png', '../resources/images/all_probes/galileo_cross/galileo_back.png', '../resources/images/all_probes/grace_cross/grace_back.png', '../resources/images/all_probes/kitchen_cross/kitchen_back.png', '../resources/images/all_probes/rnl_cross/rnl_back.png', '../resources/images/all_probes/stpeters_cross/stpeters_back.png', '../resources/images/all_probes/uffizi_cross/uffizi_back.png']));
Script52.AddCustomFieldOrEvent(FieldVal54);
FieldVal55 := TMFString.Create(Script52, False, 'leftUrls', (['../resources/images/all_probes/beach_cross/beach_left.png', '../resources/images/all_probes/building_cross/building_left.png', '../resources/images/all_probes/campus_cross/campus_left.png', '../resources/images/all_probes/galileo_cross/galileo_left.png', '../resources/images/all_probes/grace_cross/grace_left.png', '../resources/images/all_probes/kitchen_cross/kitchen_left.png', '../resources/images/all_probes/rnl_cross/rnl_left.png', '../resources/images/all_probes/stpeters_cross/stpeters_left.png', '../resources/images/all_probes/uffizi_cross/uffizi_left.png']));
Script52.AddCustomFieldOrEvent(FieldVal55);
FieldVal56 := TMFString.Create(Script52, False, 'rightUrls', (['../resources/images/all_probes/beach_cross/beach_right.png', '../resources/images/all_probes/building_cross/building_right.png', '../resources/images/all_probes/campus_cross/campus_right.png', '../resources/images/all_probes/galileo_cross/galileo_right.png', '../resources/images/all_probes/grace_cross/grace_right.png', '../resources/images/all_probes/kitchen_cross/kitchen_right.png', '../resources/images/all_probes/rnl_cross/rnl_right.png', '../resources/images/all_probes/stpeters_cross/stpeters_right.png', '../resources/images/all_probes/uffizi_cross/uffizi_right.png']));
Script52.AddCustomFieldOrEvent(FieldVal56);
FieldVal57 := TMFString.Create(Script52, False, 'topUrls', (['../resources/images/all_probes/beach_cross/beach_top.png', '../resources/images/all_probes/building_cross/building_top.png', '../resources/images/all_probes/campus_cross/campus_top.png', '../resources/images/all_probes/galileo_cross/galileo_top.png', '../resources/images/all_probes/grace_cross/grace_top.png', '../resources/images/all_probes/kitchen_cross/kitchen_top.png', '../resources/images/all_probes/rnl_cross/rnl_top.png', '../resources/images/all_probes/stpeters_cross/stpeters_top.png', '../resources/images/all_probes/uffizi_cross/uffizi_top.png']));
Script52.AddCustomFieldOrEvent(FieldVal57);
FieldVal58 := TMFString.Create(Script52, False, 'bottomUrls', (['../resources/images/all_probes/beach_cross/beach_bottom.png', '../resources/images/all_probes/building_cross/building_bottom.png', '../resources/images/all_probes/campus_cross/campus_bottom.png', '../resources/images/all_probes/galileo_cross/galileo_bottom.png', '../resources/images/all_probes/grace_cross/grace_bottom.png', '../resources/images/all_probes/kitchen_cross/kitchen_bottom.png', '../resources/images/all_probes/rnl_cross/rnl_bottom.png', '../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', '../resources/images/all_probes/uffizi_cross/uffizi_bottom.png']));
Script52.AddCustomFieldOrEvent(FieldVal58);
FieldVal59 := TMFString.CreateEvent(Script52, 'front_changed', False);
Script52.AddCustomFieldOrEvent(FieldVal59);
FieldVal60 := TMFString.CreateEvent(Script52, 'back_changed', False);
Script52.AddCustomFieldOrEvent(FieldVal60);
FieldVal61 := TMFString.CreateEvent(Script52, 'left_changed', False);
Script52.AddCustomFieldOrEvent(FieldVal61);
FieldVal62 := TMFString.CreateEvent(Script52, 'right_changed', False);
Script52.AddCustomFieldOrEvent(FieldVal62);
FieldVal63 := TMFString.CreateEvent(Script52, 'top_changed', False);
Script52.AddCustomFieldOrEvent(FieldVal63);
FieldVal64 := TMFString.CreateEvent(Script52, 'bottom_changed', False);
Script52.AddCustomFieldOrEvent(FieldVal64);
FieldVal65 := TSFFloat.CreateEvent(Script52, 'set_fraction', True);
end;

procedure InitmirrorPart4;
begin
Script52.AddCustomFieldOrEvent(FieldVal65);
FieldVal66 := TSFInt32.Create(Script52, True, 'old', -1);
Script52.AddCustomFieldOrEvent(FieldVal66);
Script52.SetSourceCode('ecmascript:' + LineEnding +
  '        function set_fraction( f, tm ) {' + LineEnding +
  '	    var side = Math.floor(f*frontUrls.length);' + LineEnding +
  '	    if (side > frontUrls.length-1) {' + LineEnding +
  '	    	side = 0;' + LineEnding +
  '	    }' + LineEnding +
  '	    if (side != old) {' + LineEnding +
  '	    	    Browser.print(f+" "+side);' + LineEnding +
  '	    	    old = side;' + LineEnding +
  '		    front_changed[0] = frontUrls[side];' + LineEnding +
  '		    back_changed[0] = backUrls[side];' + LineEnding +
  '		    left_changed[0] = leftUrls[side];' + LineEnding +
  '		    right_changed[0] = rightUrls[side];' + LineEnding +
  '		    top_changed[0] = topUrls[side];' + LineEnding +
  '		    bottom_changed[0] = bottomUrls[side];' + LineEnding +
  '            }' + LineEnding +
  '        }');
Transform24.FdChildren.Add(Script52);
TimeSensor67 := TTimeSensorNode.Create;
TimeSensor67.X3DName := 'Clock';
TimeSensor67.CycleInterval := 45;
TimeSensor67.Loop := True;
Transform24.FdChildren.Add(TimeSensor67);
{ ROUTE Clock.fraction_changed TO UrlSelector.set_fraction }
Transform24.AddRoute(TimeSensor67.EventFraction_changed, FieldVal65);
{ ROUTE UrlSelector.front_changed TO frontBackgroundTexture.url }
Transform24.AddRoute(FieldVal59, ImageTexture20.url);
{ ROUTE UrlSelector.back_changed TO backBackgroundTexture.url }
Transform24.AddRoute(FieldVal60, ImageTexture21.url);
{ ROUTE UrlSelector.left_changed TO leftBackgroundTexture.url }
Transform24.AddRoute(FieldVal61, ImageTexture18.url);
{ ROUTE UrlSelector.right_changed TO rightBackgroundTexture.url }
Transform24.AddRoute(FieldVal62, ImageTexture19.url);
{ ROUTE UrlSelector.top_changed TO topBackgroundTexture.url }
Transform24.AddRoute(FieldVal63, ImageTexture22.url);
{ ROUTE UrlSelector.bottom_changed TO bottomBackgroundTexture.url }
Transform24.AddRoute(FieldVal64, ImageTexture23.url);
{ ROUTE UrlSelector.front_changed TO frontShader.url }
Transform24.AddRoute(FieldVal59, ImageTexture31.url);
{ ROUTE UrlSelector.back_changed TO backShader.url }
Transform24.AddRoute(FieldVal60, ImageTexture29.url);
{ ROUTE UrlSelector.left_changed TO leftShader.url }
Transform24.AddRoute(FieldVal61, ImageTexture32.url);
{ ROUTE UrlSelector.right_changed TO rightShader.url }
Transform24.AddRoute(FieldVal62, ImageTexture33.url);
{ ROUTE UrlSelector.top_changed TO topShader.url }
Transform24.AddRoute(FieldVal63, ImageTexture34.url);
{ ROUTE UrlSelector.bottom_changed TO bottomShader.url }
Transform24.AddRoute(FieldVal64, ImageTexture30.url);
Group15.FdChildren.Add(Transform24);
X3D0.AddChildren([Group15]);
end;

function Createmirror: TX3DRootNode;
begin
  InitmirrorPart0;
  InitmirrorPart1;
  InitmirrorPart2;
  InitmirrorPart3;
  InitmirrorPart4;
  Result := X3D0;
end;

begin
end.
