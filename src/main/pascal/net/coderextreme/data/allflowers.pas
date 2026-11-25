unit allflowers;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createallflowers: TX3DRootNode;

implementation

uses Classes, SysUtils, X3DLoad, CastleVectors;

function CreateEmptyPrototype(const AName: String): TX3DPrototype;
var
  Stream: TStringStream;
  TempRoot: TX3DRootNode;
  CopyState: TX3DNodeDeepCopyState;
begin
  Stream := TStringStream.Create('#X3D V4.0 utf8' + LineEnding + 'PROTO ' + AName + ' [] {}');
  try
    TempRoot := LoadNode(Stream, '', 'model/x3d+vrml');
    try
      CopyState := TX3DNodeDeepCopyState.Create;
      try
        Result := TempRoot.Prototypes[0].DeepCopy(CopyState) as TX3DPrototype;
      finally
        FreeAndNil(CopyState);
      end;
    finally
      FreeAndNil(TempRoot);
    end;
  finally
    FreeAndNil(Stream);
  end;
end;

var
  X3D0: TX3DRootNode;
  Group14: TGroupNode;
  ProtoDeclare15: TX3DPrototype;
  FieldDecl17: TX3DInterfaceDeclaration;
  FieldVal17: TMFString;
  FieldDecl18: TX3DInterfaceDeclaration;
  FieldVal18: TMFString;
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
  FieldVal32: TX3DEvent;
  FieldVal33: TSFVec3f;
  FieldVal34: TX3DEvent;
  FieldVal35: TX3DEvent;
  FieldVal36: TX3DEvent;
  FieldVal37: TX3DEvent;
  FieldVal38: TX3DEvent;
  FieldVal39: TX3DEvent;
  FieldVal40: TX3DEvent;
  FieldVal41: TX3DEvent;
  FieldVal42: TX3DEvent;
  ShaderPart43: TShaderPartNode;
  ShaderPart44: TShaderPartNode;
  Sphere45: TSphereNode;
  Script46: TScriptNode;
  FieldVal47: TSFVec3f;
  FieldVal48: TSFInt32;
  FieldVal49: TSFInt32;
  FieldVal50: TX3DEvent;
  FieldVal51: TX3DEvent;
  FieldVal52: TX3DEvent;
  FieldVal53: TX3DEvent;
  FieldVal54: TX3DEvent;
  FieldVal55: TX3DEvent;
  FieldVal56: TX3DEvent;
  FieldVal57: TX3DEvent;
  Script58: TScriptNode;
  FieldVal59: TSFVec3f;
  FieldVal60: TX3DEvent;
  FieldVal61: TX3DEvent;
  FieldVal62: TX3DEvent;
  FieldVal63: TX3DEvent;
  FieldVal64: TX3DEvent;
  FieldVal65: TX3DEvent;
  FieldVal66: TX3DEvent;
  FieldVal67: TX3DEvent;
  TimeSensor68: TTimeSensorNode;
  NavigationInfo85: TNavigationInfoNode;
  Background86: TBackgroundNode;
  Group87: TGroupNode;
  ProtoInstance88: TX3DPrototypeNode;
  ProtoInstance91: TX3DPrototypeNode;
  ProtoInstance94: TX3DPrototypeNode;
  Group97: TGroupNode;
  ProtoInstance98: TX3DPrototypeNode;
  ProtoInstance101: TX3DPrototypeNode;
  ProtoInstance104: TX3DPrototypeNode;
  Group107: TGroupNode;
  ProtoInstance108: TX3DPrototypeNode;
  ProtoInstance111: TX3DPrototypeNode;
  ProtoInstance114: TX3DPrototypeNode;
  Group117: TGroupNode;
  ProtoInstance118: TX3DPrototypeNode;
  ProtoInstance121: TX3DPrototypeNode;
  ProtoInstance124: TX3DPrototypeNode;
  Group127: TGroupNode;
  ProtoInstance128: TX3DPrototypeNode;
  ProtoInstance131: TX3DPrototypeNode;
  ProtoInstance134: TX3DPrototypeNode;

procedure InitallflowersPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Interchange';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 1;
X3D0.Components['Core'] := 2;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Grouping'] := 2;
X3D0.Components['Scripting'] := 1;
X3D0.Components['Shaders'] := 1;
X3D0.Meta['title'] := 'allflowers.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['created'] := 'Nov 13 2022';
X3D0.Meta['description'] := '3 Composed Shaders';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/allflowers.x3d';
X3D0.Meta['modified'] := 'Fri, 13 Nov 2026 21:19:45 GMT';
X3D0.Meta['generator'] := 'Sunrize X3D Editor V2.6.6, https://create3000.github.io/sunrize/';
Group14 := TGroupNode.Create;
ProtoDeclare15 := CreateEmptyPrototype('FlowerProto');
ProtoDeclare15.X3DName := 'FlowerProto';
FieldVal17 := TMFString.Create(nil, True, 'vertex', (['../shaders/x_ite_flowers_chromatic.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs']));
FieldDecl17 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl17.FieldOrEvent := FieldVal17;
FieldVal17.ParentInterfaceDeclaration := FieldDecl17;
ProtoDeclare15.InterfaceDeclarations.Add(FieldDecl17);
FieldVal18 := TMFString.Create(nil, True, 'fragment', (['../shaders/x_ite.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs']));
FieldDecl18 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl18.FieldOrEvent := FieldVal18;
FieldVal18.ParentInterfaceDeclaration := FieldDecl18;
ProtoDeclare15.InterfaceDeclarations.Add(FieldDecl18);
Transform20 := TTransformNode.Create;
Transform20.X3DName := 'xform';
Shape21 := TShapeNode.Create;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material23.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance22.Material := Material23;
ComposedCubeMapTexture24 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture24.X3DName := 'texture';
ImageTexture25 := TImageTextureNode.Create;
end;

procedure InitallflowersPart1;
begin
ImageTexture25.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
ComposedCubeMapTexture24.FdFrontTexture.Set(ImageTexture25);
ImageTexture26 := TImageTextureNode.Create;
ImageTexture26.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
ComposedCubeMapTexture24.FdBackTexture.Set(ImageTexture26);
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
ComposedCubeMapTexture24.FdLeftTexture.Set(ImageTexture27);
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
ComposedCubeMapTexture24.FdRightTexture.Set(ImageTexture28);
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
ComposedCubeMapTexture24.FdTopTexture.Set(ImageTexture29);
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
ComposedCubeMapTexture24.FdBottomTexture.Set(ImageTexture30);
Appearance22.Texture := ComposedCubeMapTexture24;
ComposedShader31 := TComposedShaderNode.Create;
ComposedShader31.X3DName := 'shader';
ComposedShader31.Language := 'GLSL';
FieldVal32 := TSFNode.CreateEvent(ComposedShader31, 'cube', True);
ComposedShader31.AddCustomFieldOrEvent(FieldVal32);
FieldVal33 := TSFVec3f.Create(ComposedShader31, False, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader31.AddCustomFieldOrEvent(FieldVal33);
FieldVal34 := TSFFloat.CreateEvent(ComposedShader31, 'bias', True);
ComposedShader31.AddCustomFieldOrEvent(FieldVal34);
FieldVal35 := TSFFloat.CreateEvent(ComposedShader31, 'scale', True);
ComposedShader31.AddCustomFieldOrEvent(FieldVal35);
FieldVal36 := TSFFloat.CreateEvent(ComposedShader31, 'power', True);
ComposedShader31.AddCustomFieldOrEvent(FieldVal36);
FieldVal37 := TSFFloat.CreateEvent(ComposedShader31, 'a', True);
ComposedShader31.AddCustomFieldOrEvent(FieldVal37);
FieldVal38 := TSFFloat.CreateEvent(ComposedShader31, 'b', True);
ComposedShader31.AddCustomFieldOrEvent(FieldVal38);
FieldVal39 := TSFFloat.CreateEvent(ComposedShader31, 'c', True);
ComposedShader31.AddCustomFieldOrEvent(FieldVal39);
FieldVal40 := TSFFloat.CreateEvent(ComposedShader31, 'd', True);
ComposedShader31.AddCustomFieldOrEvent(FieldVal40);
FieldVal41 := TSFFloat.CreateEvent(ComposedShader31, 'tdelta', True);
end;

procedure InitallflowersPart2;
begin
ComposedShader31.AddCustomFieldOrEvent(FieldVal41);
FieldVal42 := TSFFloat.CreateEvent(ComposedShader31, 'pdelta', True);
ComposedShader31.AddCustomFieldOrEvent(FieldVal42);
ShaderPart43 := TShaderPartNode.Create;
ShaderPart43.FdType.Value := 'VERTEX';
ShaderPart43.FieldOrEvent('url', True).IsClauseNamesAdd('vertex');
ComposedShader31.Parts := ShaderPart43;
ShaderPart44 := TShaderPartNode.Create;
ShaderPart44.FdType.Value := 'FRAGMENT';
ShaderPart44.FieldOrEvent('url', True).IsClauseNamesAdd('fragment');
ComposedShader31.Parts := ShaderPart44;
Appearance22.AddChildren([ComposedShader31]);
Shape21.Appearance := Appearance22;
Sphere45 := TSphereNode.Create;
Shape21.Geometry := Sphere45;
Transform20.FdChildren.Add(Shape21);
Script46 := TScriptNode.Create;
Script46.X3DName := 'AnimateCastle';
FieldVal47 := TSFVec3f.CreateUndefined(Script46, True, 'translation');
Script46.AddCustomFieldOrEvent(FieldVal47);
FieldVal48 := TSFInt32.Create(Script46, False, 'choice', 0);
Script46.AddCustomFieldOrEvent(FieldVal48);
FieldVal49 := TSFInt32.Create(Script46, False, 'j', 0);
Script46.AddCustomFieldOrEvent(FieldVal49);
FieldVal50 := TSFVec3f.CreateEvent(Script46, 'velocity', False);
Script46.AddCustomFieldOrEvent(FieldVal50);
FieldVal51 := TSFFloat.CreateEvent(Script46, 'set_fraction', True);
Script46.AddCustomFieldOrEvent(FieldVal51);
FieldVal52 := TSFFloat.CreateEvent(Script46, 'a', False);
Script46.AddCustomFieldOrEvent(FieldVal52);
FieldVal53 := TSFFloat.CreateEvent(Script46, 'b', False);
Script46.AddCustomFieldOrEvent(FieldVal53);
FieldVal54 := TSFFloat.CreateEvent(Script46, 'c', False);
Script46.AddCustomFieldOrEvent(FieldVal54);
FieldVal55 := TSFFloat.CreateEvent(Script46, 'd', False);
Script46.AddCustomFieldOrEvent(FieldVal55);
FieldVal56 := TSFFloat.CreateEvent(Script46, 'tdelta', False);
Script46.AddCustomFieldOrEvent(FieldVal56);
FieldVal57 := TSFFloat.CreateEvent(Script46, 'pdelta', False);
Script46.AddCustomFieldOrEvent(FieldVal57);
end;

procedure InitallflowersPart3;
begin
Script46.SetSourceCode('castlescript:' + LineEnding +
  '' + LineEnding +
  '{ CastleScript cannot call user-defined functions, only built-ins,' + LineEnding +
  '  so everything is inlined into the two event handlers. }' + LineEnding +
  '' + LineEnding +
  'function initialize(timestamp)' + LineEnding +
  '  (' + LineEnding +
  '  translation := vector(0.0, 0.0, 0.0);' + LineEnding +
  '  velocity := vector(random() - 0.5, random() - 0.5, random() - 0.5)' + LineEnding +
  '  )' + LineEnding +
  '' + LineEnding +
  'function set_fraction(value, timestamp)' + LineEnding +
  '  (' + LineEnding +
  '  { move, bouncing back to a fresh start when out of the +-10 box }' + LineEnding +
  '  translation := translation + velocity;' + LineEnding +
  '  j := 0;' + LineEnding +
  '  while(j < 3,' + LineEnding +
  '    (' + LineEnding +
  '    if(abs(vector_get(translation, 0)) > 10,' + LineEnding +
  '      (translation := vector(0.0, 0.0, 0.0);' + LineEnding +
  '         velocity := vector(random() - 0.5, random() - 0.5, random() - 0.5)),' + LineEnding +
  '    if(abs(vector_get(translation, 1)) > 10,' + LineEnding +
  '      (translation := vector(0.0, 0.0, 0.0);' + LineEnding +
  '         velocity := vector(random() - 0.5, random() - 0.5, random() - 0.5)),' + LineEnding +
  '    if(abs(vector_get(translation, 2)) > 10,' + LineEnding +
  '      (translation := vector(0.0, 0.0, 0.0);' + LineEnding +
  '         velocity := vector(random() - 0.5, random() - 0.5, random() - 0.5)),' + LineEnding +
  '      velocity := vector(' + LineEnding +
  '        vector_get(velocity, 0) + random() * 0.2 - 0.1,' + LineEnding +
  '        vector_get(velocity, 1) + random() * 0.2 - 0.1,' + LineEnding +
  '        vector_get(velocity, 2) + random() * 0.2 - 0.1))));' + LineEnding +
  '    j := j + 1' + LineEnding +
  '    )' + LineEnding +
  '  );' + LineEnding +
  '' + LineEnding +
  '  { animate the shader parameters }' + LineEnding +
  '  choice := floor(random() * 4);' + LineEnding +
  '  if(choice = 0, a := a + random() * 0.2 - 0.1,' + LineEnding +
  '  if(choice = 1, b := b + random() * 0.2 - 0.1,' + LineEnding +
  '  if(choice = 2, c := c + random() * 2 - 1,' + LineEnding +
  '                 d := d + random() * 2 - 1)));' + LineEnding +
  '  tdelta := tdelta + 0.5;' + LineEnding +
  '  pdelta := pdelta + 0.5;' + LineEnding +
  '  when(a > 1, a := 0.5);' + LineEnding +
  '  when(b > 1, b := 0.5);' + LineEnding +
  '  when(c < 1, c := 4);' + LineEnding +
  '  when(d < 1, d := 4);' + LineEnding +
  '  when(c > 10, c := 4);' + LineEnding +
  '  when(d > 10, d := 4)' + LineEnding +
  '  )');
Transform20.FdChildren.Add(Script46);
Script58 := TScriptNode.Create;
Script58.X3DName := 'Animate';
Script58.DirectOutput := True;
FieldVal59 := TSFVec3f.CreateUndefined(Script58, True, 'translation');
Script58.AddCustomFieldOrEvent(FieldVal59);
FieldVal60 := TSFVec3f.CreateEvent(Script58, 'velocity', False);
Script58.AddCustomFieldOrEvent(FieldVal60);
FieldVal61 := TSFFloat.CreateEvent(Script58, 'set_fraction', True);
Script58.AddCustomFieldOrEvent(FieldVal61);
FieldVal62 := TSFFloat.CreateEvent(Script58, 'a', False);
Script58.AddCustomFieldOrEvent(FieldVal62);
FieldVal63 := TSFFloat.CreateEvent(Script58, 'b', False);
Script58.AddCustomFieldOrEvent(FieldVal63);
FieldVal64 := TSFFloat.CreateEvent(Script58, 'c', False);
Script58.AddCustomFieldOrEvent(FieldVal64);
FieldVal65 := TSFFloat.CreateEvent(Script58, 'd', False);
Script58.AddCustomFieldOrEvent(FieldVal65);
FieldVal66 := TSFFloat.CreateEvent(Script58, 'tdelta', False);
Script58.AddCustomFieldOrEvent(FieldVal66);
FieldVal67 := TSFFloat.CreateEvent(Script58, 'pdelta', False);
Script58.AddCustomFieldOrEvent(FieldVal67);
Script58.SetSourceCode('ecmascript:' + LineEnding +
  '			function initialize() {' + LineEnding +
  '			    translation = new SFVec3f(0, 0, 0);' + LineEnding +
  '			    velocity = new SFVec3f(' + LineEnding +
  '			    	Math.random() - 0.5,' + LineEnding +
  '				Math.random() - 0.5,' + LineEnding +
  '				Math.random() - 0.5);' + LineEnding +
  '			}' + LineEnding +
  '			function set_fraction() {' + LineEnding +
  '			    translation = new SFVec3f(' + LineEnding +
  '			    	translation.x + velocity.x,' + LineEnding +
  '				translation.y + velocity.y,' + LineEnding +
  '				translation.z + velocity.z);' + LineEnding +
  '			    for (var j = 0; j <= 2; j++) {' + LineEnding +
  '				    if (Math.abs(translation.x) > 10) {' + LineEnding +
  '					initialize();' + LineEnding +
  '				    } else if (Math.abs(translation.y) > 10) {' + LineEnding +
  '					initialize();' + LineEnding +
  '				    } else if (Math.abs(translation.z) > 10) {' + LineEnding +
  '					initialize();' + LineEnding +
  '				    } else {' + LineEnding +
  '					velocity.x += Math.random() * 0.2 - 0.1;' + LineEnding +
  '					velocity.y += Math.random() * 0.2 - 0.1;' + LineEnding +
  '					velocity.z += Math.random() * 0.2 - 0.1;' + LineEnding +
  '				    }' + LineEnding +
  '			    }' + LineEnding +
  '			    animate_flowers();' + LineEnding +
  '			}' + LineEnding +
  '' + LineEnding +
  '			function animate_flowers(fraction, eventTime) {' + LineEnding +
  '				var choice = Math.floor(Math.random() * 4);' + LineEnding +
  '				switch (choice) {' + LineEnding +
  '				case 0:' + LineEnding +
  '					a += Math.random() * 0.2 - 0.1;' + LineEnding +
  '					break;' + LineEnding +
  '				case 1:' + LineEnding +
  '					b += Math.random() * 0.2 - 0.1;' + LineEnding +
  '					break;' + LineEnding +
  '				case 2:' + LineEnding +
  '					c += Math.random() * 2 - 1;' + LineEnding +
  '					break;' + LineEnding +
  '				case 3:' + LineEnding +
  '					d += Math.random() * 2 - 1;' + LineEnding +
  '					break;' + LineEnding +
  '				}' + LineEnding +
  '				tdelta += 0.5;' + LineEnding +
  '				pdelta += 0.5;' + LineEnding +
  '				if (a > 1) {' + LineEnding +
  '					a =  0.5;' + LineEnding +
  '				}' + LineEnding +
  '				if (b > 1) {' + LineEnding +
  '					b =  0.5;' + LineEnding +
  '				}' + LineEnding +
  '				if (c < 1) {' + LineEnding +
  '					c =  4;' + LineEnding +
  '				}' + LineEnding +
  '				if (d < 1) {' + LineEnding +
  '					d =  4;' + LineEnding +
  '				}' + LineEnding +
  '				if (c > 10) {' + LineEnding +
  '					c = 4;' + LineEnding +
  '				}' + LineEnding +
  '				if (d > 10) {' + LineEnding +
  '					d = 4;' + LineEnding +
  '				}' + LineEnding +
  '			}');
Transform20.FdChildren.Add(Script58);
TimeSensor68 := TTimeSensorNode.Create;
TimeSensor68.X3DName := 'TourTime';
TimeSensor68.CycleInterval := 5;
TimeSensor68.Loop := True;
Transform20.FdChildren.Add(TimeSensor68);
ProtoDeclare15.Node.AddChildren([Transform20]);
{ ROUTE TourTime.fraction_changed TO Animate.set_fraction }
ProtoBody19.AddRoute(TimeSensor68.EventFraction_changed, FieldVal61);
{ ROUTE Animate.translation_changed TO xform.set_translation }
ProtoBody19.AddRoute(Script58.EventTranslation_changed, Transform20.FdTranslation.EventIn);
{ ROUTE Animate.a TO shader.a }
ProtoBody19.AddRoute(FieldVal62, ComposedShader31.a);
{ ROUTE Animate.b TO shader.b }
ProtoBody19.AddRoute(FieldVal63, ComposedShader31.b);
{ ROUTE Animate.c TO shader.c }
end;

procedure InitallflowersPart4;
begin
ProtoBody19.AddRoute(FieldVal64, ComposedShader31.c);
{ ROUTE Animate.d TO shader.d }
ProtoBody19.AddRoute(FieldVal65, ComposedShader31.d);
{ ROUTE Animate.tdelta TO shader.tdelta }
ProtoBody19.AddRoute(FieldVal66, ComposedShader31.tdelta);
{ ROUTE Animate.pdelta TO shader.pdelta }
ProtoBody19.AddRoute(FieldVal67, ComposedShader31.pdelta);
{ ROUTE TourTime.fraction_changed TO AnimateCastle.set_fraction }
ProtoBody19.AddRoute(TimeSensor68.EventFraction_changed, FieldVal51);
{ ROUTE AnimateCastle.translation_changed TO xform.set_translation }
ProtoBody19.AddRoute(Script46.EventTranslation_changed, Transform20.FdTranslation.EventIn);
{ ROUTE AnimateCastle.a TO shader.a }
ProtoBody19.AddRoute(FieldVal52, ComposedShader31.a);
{ ROUTE AnimateCastle.b TO shader.b }
ProtoBody19.AddRoute(FieldVal53, ComposedShader31.b);
{ ROUTE AnimateCastle.c TO shader.c }
ProtoBody19.AddRoute(FieldVal54, ComposedShader31.c);
{ ROUTE AnimateCastle.d TO shader.d }
ProtoBody19.AddRoute(FieldVal55, ComposedShader31.d);
{ ROUTE AnimateCastle.tdelta TO shader.tdelta }
ProtoBody19.AddRoute(FieldVal56, ComposedShader31.tdelta);
{ ROUTE AnimateCastle.pdelta TO shader.pdelta }
ProtoBody19.AddRoute(FieldVal57, ComposedShader31.pdelta);
X3D0.AddPrototype(ProtoDeclare15);
NavigationInfo85 := TNavigationInfoNode.Create;
Group14.FdChildren.Add(NavigationInfo85);
Background86 := TBackgroundNode.Create;
Background86.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background86.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background86.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background86.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background86.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Background86.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Group14.FdChildren.Add(Background86);
Group87 := TGroupNode.Create;
ProtoInstance88 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance88.Field('vertex') as TMFString).Send(['../shaders/x_ite_flowers_chromatic.vs']);
(ProtoInstance88.Field('fragment') as TMFString).Send(['../shaders/x_ite.fs']);
Group87.FdChildren.Add(ProtoInstance88.Instantiate);
ProtoInstance91 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
end;

procedure InitallflowersPart5;
begin
(ProtoInstance91.Field('vertex') as TMFString).Send(['../shaders/x_ite_flowers_chromatic.vs']);
(ProtoInstance91.Field('fragment') as TMFString).Send(['../shaders/x_ite.fs']);
Group87.FdChildren.Add(ProtoInstance91.Instantiate);
ProtoInstance94 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance94.Field('vertex') as TMFString).Send(['../shaders/x_ite_flowers_chromatic.vs']);
(ProtoInstance94.Field('fragment') as TMFString).Send(['../shaders/x_ite.fs']);
Group87.FdChildren.Add(ProtoInstance94.Instantiate);
Group14.FdChildren.Add(Group87);
Group97 := TGroupNode.Create;
ProtoInstance98 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance98.Field('vertex') as TMFString).Send(['../shaders/x3dom_flowers_chromatic.vs']);
(ProtoInstance98.Field('fragment') as TMFString).Send(['../shaders/common.fs']);
Group97.FdChildren.Add(ProtoInstance98.Instantiate);
ProtoInstance101 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance101.Field('vertex') as TMFString).Send(['../shaders/x3dom_flowers_chromatic.vs']);
(ProtoInstance101.Field('fragment') as TMFString).Send(['../shaders/common.fs']);
Group97.FdChildren.Add(ProtoInstance101.Instantiate);
ProtoInstance104 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance104.Field('vertex') as TMFString).Send(['../shaders/x3dom_flowers_chromatic.vs']);
(ProtoInstance104.Field('fragment') as TMFString).Send(['../shaders/common.fs']);
Group97.FdChildren.Add(ProtoInstance104.Instantiate);
Group14.FdChildren.Add(Group97);
Group107 := TGroupNode.Create;
ProtoInstance108 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance108.Field('vertex') as TMFString).Send(['../shaders/gl_flowers_plain.vs']);
(ProtoInstance108.Field('fragment') as TMFString).Send(['../shaders/plain.fs']);
Group107.FdChildren.Add(ProtoInstance108.Instantiate);
ProtoInstance111 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance111.Field('vertex') as TMFString).Send(['../shaders/gl_flowers_plain.vs']);
(ProtoInstance111.Field('fragment') as TMFString).Send(['../shaders/plain.fs']);
Group107.FdChildren.Add(ProtoInstance111.Instantiate);
ProtoInstance114 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance114.Field('vertex') as TMFString).Send(['../shaders/gl_flowers_plain.vs']);
(ProtoInstance114.Field('fragment') as TMFString).Send(['../shaders/plain.fs']);
Group107.FdChildren.Add(ProtoInstance114.Instantiate);
Group14.FdChildren.Add(Group107);
Group117 := TGroupNode.Create;
ProtoInstance118 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance118.Field('vertex') as TMFString).Send(['../shaders/pc_flowers.vs']);
(ProtoInstance118.Field('fragment') as TMFString).Send(['../shaders/pc_flowers.fs']);
end;

procedure InitallflowersPart6;
begin
Group117.FdChildren.Add(ProtoInstance118.Instantiate);
ProtoInstance121 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance121.Field('vertex') as TMFString).Send(['../shaders/pc_flowers.vs']);
(ProtoInstance121.Field('fragment') as TMFString).Send(['../shaders/pc_flowers.fs']);
Group117.FdChildren.Add(ProtoInstance121.Instantiate);
ProtoInstance124 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance124.Field('vertex') as TMFString).Send(['../shaders/pc_flowers.vs']);
(ProtoInstance124.Field('fragment') as TMFString).Send(['../shaders/pc_flowers.fs']);
Group117.FdChildren.Add(ProtoInstance124.Instantiate);
Group14.FdChildren.Add(Group117);
Group127 := TGroupNode.Create;
ProtoInstance128 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance128.Field('vertex') as TMFString).Send(['../shaders/castle_flowers_chromatic.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs']);
(ProtoInstance128.Field('fragment') as TMFString).Send(['../shaders/castle.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs']);
Group127.FdChildren.Add(ProtoInstance128.Instantiate);
ProtoInstance131 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance131.Field('vertex') as TMFString).Send(['../shaders/castle_flowers_chromatic.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs']);
(ProtoInstance131.Field('fragment') as TMFString).Send(['../shaders/castle.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs']);
Group127.FdChildren.Add(ProtoInstance131.Instantiate);
ProtoInstance134 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance134.Field('vertex') as TMFString).Send(['../shaders/castle_flowers_chromatic.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs']);
(ProtoInstance134.Field('fragment') as TMFString).Send(['../shaders/castle.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs']);
Group127.FdChildren.Add(ProtoInstance134.Instantiate);
Group14.FdChildren.Add(Group127);
X3D0.AddChildren([Group14]);
end;

function Createallflowers: TX3DRootNode;
begin
  InitallflowersPart0;
  InitallflowersPart1;
  InitallflowersPart2;
  InitallflowersPart3;
  InitallflowersPart4;
  InitallflowersPart5;
  InitallflowersPart6;
  Result := X3D0;
end;

begin
end.
