unit cgeflowers;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createcgeflowers: TX3DRootNode;

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
  TimeSensor58: TTimeSensorNode;
  NavigationInfo67: TNavigationInfoNode;
  Background68: TBackgroundNode;
  Group69: TGroupNode;
  ProtoInstance70: TX3DPrototypeNode;
  ProtoInstance73: TX3DPrototypeNode;
  ProtoInstance76: TX3DPrototypeNode;
  Group79: TGroupNode;
  ProtoInstance80: TX3DPrototypeNode;
  ProtoInstance83: TX3DPrototypeNode;
  ProtoInstance86: TX3DPrototypeNode;
  Group89: TGroupNode;
  ProtoInstance90: TX3DPrototypeNode;
  ProtoInstance93: TX3DPrototypeNode;
  ProtoInstance96: TX3DPrototypeNode;
  Group99: TGroupNode;
  ProtoInstance100: TX3DPrototypeNode;
  ProtoInstance103: TX3DPrototypeNode;
  ProtoInstance106: TX3DPrototypeNode;
  Group109: TGroupNode;
  ProtoInstance110: TX3DPrototypeNode;
  ProtoInstance113: TX3DPrototypeNode;
  ProtoInstance116: TX3DPrototypeNode;

procedure InitcgeflowersPart0;
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
Transform20.X3DName := 'transform';
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

procedure InitcgeflowersPart1;
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

procedure InitcgeflowersPart2;
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
Script46.X3DName := 'Animate';
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

procedure InitcgeflowersPart3;
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
TimeSensor58 := TTimeSensorNode.Create;
TimeSensor58.X3DName := 'TourTime';
TimeSensor58.CycleInterval := 5;
TimeSensor58.Loop := True;
Transform20.FdChildren.Add(TimeSensor58);
ProtoDeclare15.Node.AddChildren([Transform20]);
{ ROUTE TourTime.fraction_changed TO Animate.set_fraction }
ProtoBody19.AddRoute(TimeSensor58.EventFraction_changed, FieldVal51);
{ ROUTE Animate.translation_changed TO transform.set_translation }
ProtoBody19.AddRoute(Script46.EventTranslation_changed, Transform20.FdTranslation.EventIn);
{ ROUTE Animate.a TO shader.a }
ProtoBody19.AddRoute(FieldVal52, ComposedShader31.a);
{ ROUTE Animate.b TO shader.b }
ProtoBody19.AddRoute(FieldVal53, ComposedShader31.b);
{ ROUTE Animate.c TO shader.c }
ProtoBody19.AddRoute(FieldVal54, ComposedShader31.c);
{ ROUTE Animate.d TO shader.d }
ProtoBody19.AddRoute(FieldVal55, ComposedShader31.d);
{ ROUTE Animate.tdelta TO shader.tdelta }
ProtoBody19.AddRoute(FieldVal56, ComposedShader31.tdelta);
{ ROUTE Animate.pdelta TO shader.pdelta }
ProtoBody19.AddRoute(FieldVal57, ComposedShader31.pdelta);
X3D0.AddPrototype(ProtoDeclare15);
NavigationInfo67 := TNavigationInfoNode.Create;
Group14.FdChildren.Add(NavigationInfo67);
Background68 := TBackgroundNode.Create;
Background68.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background68.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background68.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background68.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background68.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Background68.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Group14.FdChildren.Add(Background68);
Group69 := TGroupNode.Create;
ProtoInstance70 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance70.Field('vertex') as TMFString).Send(['../shaders/x_ite_flowers_chromatic.vs']);
(ProtoInstance70.Field('fragment') as TMFString).Send(['../shaders/x_ite.fs']);
Group69.FdChildren.Add(ProtoInstance70.Instantiate);
end;

procedure InitcgeflowersPart4;
begin
ProtoInstance73 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance73.Field('vertex') as TMFString).Send(['../shaders/x_ite_flowers_chromatic.vs']);
(ProtoInstance73.Field('fragment') as TMFString).Send(['../shaders/x_ite.fs']);
Group69.FdChildren.Add(ProtoInstance73.Instantiate);
ProtoInstance76 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance76.Field('vertex') as TMFString).Send(['../shaders/x_ite_flowers_chromatic.vs']);
(ProtoInstance76.Field('fragment') as TMFString).Send(['../shaders/x_ite.fs']);
Group69.FdChildren.Add(ProtoInstance76.Instantiate);
Group14.FdChildren.Add(Group69);
Group79 := TGroupNode.Create;
ProtoInstance80 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance80.Field('vertex') as TMFString).Send(['../shaders/x3dom_flowers_chromatic.vs']);
(ProtoInstance80.Field('fragment') as TMFString).Send(['../shaders/common.fs']);
Group79.FdChildren.Add(ProtoInstance80.Instantiate);
ProtoInstance83 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance83.Field('vertex') as TMFString).Send(['../shaders/x3dom_flowers_chromatic.vs']);
(ProtoInstance83.Field('fragment') as TMFString).Send(['../shaders/common.fs']);
Group79.FdChildren.Add(ProtoInstance83.Instantiate);
ProtoInstance86 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance86.Field('vertex') as TMFString).Send(['../shaders/x3dom_flowers_chromatic.vs']);
(ProtoInstance86.Field('fragment') as TMFString).Send(['../shaders/common.fs']);
Group79.FdChildren.Add(ProtoInstance86.Instantiate);
Group14.FdChildren.Add(Group79);
Group89 := TGroupNode.Create;
ProtoInstance90 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance90.Field('vertex') as TMFString).Send(['../shaders/gl_flowers_plain.vs']);
(ProtoInstance90.Field('fragment') as TMFString).Send(['../shaders/plain.fs']);
Group89.FdChildren.Add(ProtoInstance90.Instantiate);
ProtoInstance93 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance93.Field('vertex') as TMFString).Send(['../shaders/gl_flowers_plain.vs']);
(ProtoInstance93.Field('fragment') as TMFString).Send(['../shaders/plain.fs']);
Group89.FdChildren.Add(ProtoInstance93.Instantiate);
ProtoInstance96 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance96.Field('vertex') as TMFString).Send(['../shaders/gl_flowers_plain.vs']);
(ProtoInstance96.Field('fragment') as TMFString).Send(['../shaders/plain.fs']);
Group89.FdChildren.Add(ProtoInstance96.Instantiate);
Group14.FdChildren.Add(Group89);
Group99 := TGroupNode.Create;
ProtoInstance100 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance100.Field('vertex') as TMFString).Send(['../shaders/pc_flowers.vs']);
end;

procedure InitcgeflowersPart5;
begin
(ProtoInstance100.Field('fragment') as TMFString).Send(['../shaders/pc_flowers.fs']);
Group99.FdChildren.Add(ProtoInstance100.Instantiate);
ProtoInstance103 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance103.Field('vertex') as TMFString).Send(['../shaders/pc_flowers.vs']);
(ProtoInstance103.Field('fragment') as TMFString).Send(['../shaders/pc_flowers.fs']);
Group99.FdChildren.Add(ProtoInstance103.Instantiate);
ProtoInstance106 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance106.Field('vertex') as TMFString).Send(['../shaders/pc_flowers.vs']);
(ProtoInstance106.Field('fragment') as TMFString).Send(['../shaders/pc_flowers.fs']);
Group99.FdChildren.Add(ProtoInstance106.Instantiate);
Group14.FdChildren.Add(Group99);
Group109 := TGroupNode.Create;
ProtoInstance110 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance110.Field('vertex') as TMFString).Send(['../shaders/castle_flowers_chromatic.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs']);
(ProtoInstance110.Field('fragment') as TMFString).Send(['../shaders/castle.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs']);
Group109.FdChildren.Add(ProtoInstance110.Instantiate);
ProtoInstance113 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance113.Field('vertex') as TMFString).Send(['../shaders/castle_flowers_chromatic.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs']);
(ProtoInstance113.Field('fragment') as TMFString).Send(['../shaders/castle.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs']);
Group109.FdChildren.Add(ProtoInstance113.Instantiate);
ProtoInstance116 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance116.Field('vertex') as TMFString).Send(['../shaders/castle_flowers_chromatic.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs']);
(ProtoInstance116.Field('fragment') as TMFString).Send(['../shaders/castle.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs']);
Group109.FdChildren.Add(ProtoInstance116.Instantiate);
Group14.FdChildren.Add(Group109);
X3D0.AddChildren([Group14]);
end;

function Createcgeflowers: TX3DRootNode;
begin
  InitcgeflowersPart0;
  InitcgeflowersPart1;
  InitcgeflowersPart2;
  InitcgeflowersPart3;
  InitcgeflowersPart4;
  InitcgeflowersPart5;
  Result := X3D0;
end;

begin
end.
