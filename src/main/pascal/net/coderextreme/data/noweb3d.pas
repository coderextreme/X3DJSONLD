unit noweb3d;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createnoweb3d: TX3DRootNode;

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
  FieldVal48: TX3DEvent;
  FieldVal49: TX3DEvent;
  FieldVal50: TX3DEvent;
  FieldVal51: TX3DEvent;
  FieldVal52: TX3DEvent;
  FieldVal53: TX3DEvent;
  FieldVal54: TX3DEvent;
  FieldVal55: TX3DEvent;
  TimeSensor56: TTimeSensorNode;
  NavigationInfo65: TNavigationInfoNode;
  Background66: TBackgroundNode;
  Group67: TGroupNode;
  ProtoInstance68: TX3DPrototypeNode;
  ProtoInstance71: TX3DPrototypeNode;
  ProtoInstance74: TX3DPrototypeNode;
  Group77: TGroupNode;
  ProtoInstance78: TX3DPrototypeNode;
  ProtoInstance81: TX3DPrototypeNode;
  ProtoInstance84: TX3DPrototypeNode;
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

procedure Initnoweb3dPart0;
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

procedure Initnoweb3dPart1;
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

procedure Initnoweb3dPart2;
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
Script46.DirectOutput := True;
FieldVal47 := TSFVec3f.CreateUndefined(Script46, True, 'translation');
Script46.AddCustomFieldOrEvent(FieldVal47);
FieldVal48 := TSFVec3f.CreateEvent(Script46, 'velocity', False);
Script46.AddCustomFieldOrEvent(FieldVal48);
FieldVal49 := TSFFloat.CreateEvent(Script46, 'set_fraction', True);
Script46.AddCustomFieldOrEvent(FieldVal49);
FieldVal50 := TSFFloat.CreateEvent(Script46, 'a', False);
Script46.AddCustomFieldOrEvent(FieldVal50);
FieldVal51 := TSFFloat.CreateEvent(Script46, 'b', False);
Script46.AddCustomFieldOrEvent(FieldVal51);
FieldVal52 := TSFFloat.CreateEvent(Script46, 'c', False);
Script46.AddCustomFieldOrEvent(FieldVal52);
FieldVal53 := TSFFloat.CreateEvent(Script46, 'd', False);
Script46.AddCustomFieldOrEvent(FieldVal53);
FieldVal54 := TSFFloat.CreateEvent(Script46, 'tdelta', False);
Script46.AddCustomFieldOrEvent(FieldVal54);
FieldVal55 := TSFFloat.CreateEvent(Script46, 'pdelta', False);
Script46.AddCustomFieldOrEvent(FieldVal55);
Script46.SetSourceCode('ecmascript:' + LineEnding +
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
Transform20.FdChildren.Add(Script46);
TimeSensor56 := TTimeSensorNode.Create;
end;

procedure Initnoweb3dPart3;
begin
TimeSensor56.X3DName := 'TourTime';
TimeSensor56.CycleInterval := 5;
TimeSensor56.Loop := True;
Transform20.FdChildren.Add(TimeSensor56);
ProtoDeclare15.Node.AddChildren([Transform20]);
{ ROUTE TourTime.fraction_changed TO Animate.set_fraction }
ProtoBody19.AddRoute(TimeSensor56.EventFraction_changed, FieldVal49);
{ ROUTE Animate.translation_changed TO transform.set_translation }
ProtoBody19.AddRoute(Script46.EventTranslation_changed, Transform20.FdTranslation.EventIn);
{ ROUTE Animate.a TO shader.a }
ProtoBody19.AddRoute(FieldVal50, ComposedShader31.a);
{ ROUTE Animate.b TO shader.b }
ProtoBody19.AddRoute(FieldVal51, ComposedShader31.b);
{ ROUTE Animate.c TO shader.c }
ProtoBody19.AddRoute(FieldVal52, ComposedShader31.c);
{ ROUTE Animate.d TO shader.d }
ProtoBody19.AddRoute(FieldVal53, ComposedShader31.d);
{ ROUTE Animate.tdelta TO shader.tdelta }
ProtoBody19.AddRoute(FieldVal54, ComposedShader31.tdelta);
{ ROUTE Animate.pdelta TO shader.pdelta }
ProtoBody19.AddRoute(FieldVal55, ComposedShader31.pdelta);
X3D0.AddPrototype(ProtoDeclare15);
NavigationInfo65 := TNavigationInfoNode.Create;
Group14.FdChildren.Add(NavigationInfo65);
Background66 := TBackgroundNode.Create;
Background66.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background66.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background66.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background66.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background66.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Background66.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Group14.FdChildren.Add(Background66);
Group67 := TGroupNode.Create;
ProtoInstance68 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance68.Field('vertex') as TMFString).Send(['../shaders/x_ite_flowers_chromatic.vs']);
(ProtoInstance68.Field('fragment') as TMFString).Send(['../shaders/x_ite.fs']);
Group67.FdChildren.Add(ProtoInstance68.Instantiate);
ProtoInstance71 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance71.Field('vertex') as TMFString).Send(['../shaders/x_ite_flowers_chromatic.vs']);
(ProtoInstance71.Field('fragment') as TMFString).Send(['../shaders/x_ite.fs']);
end;

procedure Initnoweb3dPart4;
begin
Group67.FdChildren.Add(ProtoInstance71.Instantiate);
ProtoInstance74 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance74.Field('vertex') as TMFString).Send(['../shaders/x_ite_flowers_chromatic.vs']);
(ProtoInstance74.Field('fragment') as TMFString).Send(['../shaders/x_ite.fs']);
Group67.FdChildren.Add(ProtoInstance74.Instantiate);
Group14.FdChildren.Add(Group67);
Group77 := TGroupNode.Create;
ProtoInstance78 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance78.Field('vertex') as TMFString).Send(['../shaders/x3dom_flowers_chromatic.vs']);
(ProtoInstance78.Field('fragment') as TMFString).Send(['../shaders/common.fs']);
Group77.FdChildren.Add(ProtoInstance78.Instantiate);
ProtoInstance81 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance81.Field('vertex') as TMFString).Send(['../shaders/x3dom_flowers_chromatic.vs']);
(ProtoInstance81.Field('fragment') as TMFString).Send(['../shaders/common.fs']);
Group77.FdChildren.Add(ProtoInstance81.Instantiate);
ProtoInstance84 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance84.Field('vertex') as TMFString).Send(['../shaders/x3dom_flowers_chromatic.vs']);
(ProtoInstance84.Field('fragment') as TMFString).Send(['../shaders/common.fs']);
Group77.FdChildren.Add(ProtoInstance84.Instantiate);
Group14.FdChildren.Add(Group77);
Group87 := TGroupNode.Create;
ProtoInstance88 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance88.Field('vertex') as TMFString).Send(['../shaders/gl_flowers_plain.vs']);
(ProtoInstance88.Field('fragment') as TMFString).Send(['../shaders/plain.fs']);
Group87.FdChildren.Add(ProtoInstance88.Instantiate);
ProtoInstance91 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance91.Field('vertex') as TMFString).Send(['../shaders/gl_flowers_plain.vs']);
(ProtoInstance91.Field('fragment') as TMFString).Send(['../shaders/plain.fs']);
Group87.FdChildren.Add(ProtoInstance91.Instantiate);
ProtoInstance94 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance94.Field('vertex') as TMFString).Send(['../shaders/gl_flowers_plain.vs']);
(ProtoInstance94.Field('fragment') as TMFString).Send(['../shaders/plain.fs']);
Group87.FdChildren.Add(ProtoInstance94.Instantiate);
Group14.FdChildren.Add(Group87);
Group97 := TGroupNode.Create;
ProtoInstance98 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance98.Field('vertex') as TMFString).Send(['../shaders/pc_flowers.vs']);
(ProtoInstance98.Field('fragment') as TMFString).Send(['../shaders/pc_flowers.fs']);
Group97.FdChildren.Add(ProtoInstance98.Instantiate);
ProtoInstance101 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
end;

procedure Initnoweb3dPart5;
begin
(ProtoInstance101.Field('vertex') as TMFString).Send(['../shaders/pc_flowers.vs']);
(ProtoInstance101.Field('fragment') as TMFString).Send(['../shaders/pc_flowers.fs']);
Group97.FdChildren.Add(ProtoInstance101.Instantiate);
ProtoInstance104 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance104.Field('vertex') as TMFString).Send(['../shaders/pc_flowers.vs']);
(ProtoInstance104.Field('fragment') as TMFString).Send(['../shaders/pc_flowers.fs']);
Group97.FdChildren.Add(ProtoInstance104.Instantiate);
Group14.FdChildren.Add(Group97);
Group107 := TGroupNode.Create;
ProtoInstance108 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance108.Field('vertex') as TMFString).Send(['../shaders/castle_flowers_chromatic.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs']);
(ProtoInstance108.Field('fragment') as TMFString).Send(['../shaders/castle.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs']);
Group107.FdChildren.Add(ProtoInstance108.Instantiate);
ProtoInstance111 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance111.Field('vertex') as TMFString).Send(['../shaders/castle_flowers_chromatic.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs']);
(ProtoInstance111.Field('fragment') as TMFString).Send(['../shaders/castle.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs']);
Group107.FdChildren.Add(ProtoInstance111.Instantiate);
ProtoInstance114 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
(ProtoInstance114.Field('vertex') as TMFString).Send(['../shaders/castle_flowers_chromatic.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs']);
(ProtoInstance114.Field('fragment') as TMFString).Send(['../shaders/castle.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs']);
Group107.FdChildren.Add(ProtoInstance114.Instantiate);
Group14.FdChildren.Add(Group107);
X3D0.AddChildren([Group14]);
end;

function Createnoweb3d: TX3DRootNode;
begin
  Initnoweb3dPart0;
  Initnoweb3dPart1;
  Initnoweb3dPart2;
  Initnoweb3dPart3;
  Initnoweb3dPart4;
  Initnoweb3dPart5;
  Result := X3D0;
end;

begin
end.
