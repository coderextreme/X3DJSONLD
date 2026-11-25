unit flowerprotofreewrl;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createflowerprotofreewrl: TX3DRootNode;

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
  Group16: TGroupNode;
  NavigationInfo17: TNavigationInfoNode;
  Viewpoint18: TViewpointNode;
  Background19: TBackgroundNode;
  ProtoDeclare20: TX3DPrototype;
  FieldDecl22: TX3DInterfaceDeclaration;
  FieldVal22: TX3DEvent;
  FieldDecl23: TX3DInterfaceDeclaration;
  FieldVal23: TX3DEvent;
  Transform25: TTransformNode;
  Shape26: TShapeNode;
  Appearance27: TAppearanceNode;
  Material28: TMaterialNode;
  ComposedCubeMapTexture29: TComposedCubeMapTextureNode;
  ImageTexture30: TImageTextureNode;
  ImageTexture31: TImageTextureNode;
  ImageTexture32: TImageTextureNode;
  ImageTexture33: TImageTextureNode;
  ImageTexture34: TImageTextureNode;
  ImageTexture35: TImageTextureNode;
  ComposedShader36: TComposedShaderNode;
  FieldVal37: TSFInt32;
  FieldVal38: TSFVec3f;
  FieldVal39: TSFFloat;
  FieldVal40: TSFFloat;
  FieldVal41: TSFFloat;
  FieldVal42: TSFFloat;
  FieldVal43: TSFFloat;
  FieldVal44: TSFFloat;
  FieldVal45: TSFFloat;
  FieldVal46: TSFFloat;
  FieldVal47: TSFFloat;
  ShaderPart48: TShaderPartNode;
  ShaderPart49: TShaderPartNode;
  Sphere50: TSphereNode;
  Script51: TScriptNode;
  FieldVal52: TSFVec3f;
  FieldVal53: TSFVec3f;
  FieldVal54: TSFFloat;
  FieldVal55: TSFFloat;
  FieldVal56: TSFFloat;
  FieldVal57: TSFFloat;
  FieldVal58: TSFFloat;
  FieldVal59: TSFFloat;
  FieldVal60: TSFFloat;
  TimeSensor61: TTimeSensorNode;
  ProtoInstance70: TX3DPrototypeNode;

procedure InitflowerprotofreewrlPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
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
X3D0.Meta['title'] := 'flowerproto.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := 'A flower proto with configurable shaders';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d';
Group16 := TGroupNode.Create;
NavigationInfo17 := TNavigationInfoNode.Create;
Group16.FdChildren.Add(NavigationInfo17);
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.Description := 'Tour Views';
Viewpoint18.Position := Vector3(0, 0, 50);
Group16.FdChildren.Add(Viewpoint18);
Background19 := TBackgroundNode.Create;
Background19.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background19.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background19.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background19.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background19.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background19.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Group16.FdChildren.Add(Background19);
ProtoDeclare20 := CreateEmptyPrototype('FlowerProto');
ProtoDeclare20.X3DName := 'FlowerProto';
FieldVal22 := TMFString.CreateEvent(nil, 'vertex', True);
FieldDecl22 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl22.FieldOrEvent := FieldVal22;
FieldVal22.ParentInterfaceDeclaration := FieldDecl22;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl22);
end;

procedure InitflowerprotofreewrlPart1;
begin
FieldVal23 := TMFString.CreateEvent(nil, 'fragment', True);
FieldDecl23 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl23.FieldOrEvent := FieldVal23;
FieldVal23.ParentInterfaceDeclaration := FieldDecl23;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl23);
Transform25 := TTransformNode.Create;
Transform25.X3DName := 'transform';
Shape26 := TShapeNode.Create;
Appearance27 := TAppearanceNode.Create;
Material28 := TMaterialNode.Create;
Material28.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material28.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance27.Material := Material28;
ComposedCubeMapTexture29 := TComposedCubeMapTextureNode.Create;
ComposedCubeMapTexture29.X3DName := 'texture';
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
ComposedCubeMapTexture29.FdBackTexture.Set(ImageTexture30);
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
ComposedCubeMapTexture29.FdBottomTexture.Set(ImageTexture31);
ImageTexture32 := TImageTextureNode.Create;
ImageTexture32.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
ComposedCubeMapTexture29.FdFrontTexture.Set(ImageTexture32);
ImageTexture33 := TImageTextureNode.Create;
ImageTexture33.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
ComposedCubeMapTexture29.FdLeftTexture.Set(ImageTexture33);
ImageTexture34 := TImageTextureNode.Create;
ImageTexture34.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
ComposedCubeMapTexture29.FdRightTexture.Set(ImageTexture34);
ImageTexture35 := TImageTextureNode.Create;
ImageTexture35.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
ComposedCubeMapTexture29.FdTopTexture.Set(ImageTexture35);
Appearance27.Texture := ComposedCubeMapTexture29;
ComposedShader36 := TComposedShaderNode.Create;
ComposedShader36.X3DName := 'shader';
ComposedShader36.Language := 'GLSL';
FieldVal37 := TSFInt32.Create(ComposedShader36, True, 'fw_textureCoordGenType', 0);
ComposedShader36.AddCustomFieldOrEvent(FieldVal37);
FieldVal38 := TSFVec3f.Create(ComposedShader36, False, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
end;

procedure InitflowerprotofreewrlPart2;
begin
ComposedShader36.AddCustomFieldOrEvent(FieldVal38);
FieldVal39 := TSFFloat.Create(ComposedShader36, True, 'bias', 0.5);
ComposedShader36.AddCustomFieldOrEvent(FieldVal39);
FieldVal40 := TSFFloat.Create(ComposedShader36, True, 'scale', 0.5);
ComposedShader36.AddCustomFieldOrEvent(FieldVal40);
FieldVal41 := TSFFloat.Create(ComposedShader36, True, 'power', 2);
ComposedShader36.AddCustomFieldOrEvent(FieldVal41);
FieldVal42 := TSFFloat.Create(ComposedShader36, True, 'a', 5);
ComposedShader36.AddCustomFieldOrEvent(FieldVal42);
FieldVal43 := TSFFloat.Create(ComposedShader36, True, 'b', 5);
ComposedShader36.AddCustomFieldOrEvent(FieldVal43);
FieldVal44 := TSFFloat.Create(ComposedShader36, True, 'c', 20);
ComposedShader36.AddCustomFieldOrEvent(FieldVal44);
FieldVal45 := TSFFloat.Create(ComposedShader36, True, 'd', 20);
ComposedShader36.AddCustomFieldOrEvent(FieldVal45);
FieldVal46 := TSFFloat.Create(ComposedShader36, True, 'tdelta', 0);
ComposedShader36.AddCustomFieldOrEvent(FieldVal46);
FieldVal47 := TSFFloat.Create(ComposedShader36, True, 'pdelta', 0);
ComposedShader36.AddCustomFieldOrEvent(FieldVal47);
{ <field name='cube' type='SFNode' accessType="inputOutput"> }
{ <ComposedCubeMapTexture USE="texture"/> }
{ </field> }
ShaderPart48 := TShaderPartNode.Create;
ShaderPart48.FdType.Value := 'VERTEX';
ShaderPart48.FieldOrEvent('url', True).IsClauseNamesAdd('vertex');
ComposedShader36.Parts := ShaderPart48;
ShaderPart49 := TShaderPartNode.Create;
ShaderPart49.FdType.Value := 'FRAGMENT';
ShaderPart49.FieldOrEvent('url', True).IsClauseNamesAdd('fragment');
ComposedShader36.Parts := ShaderPart49;
Appearance27.AddChildren([ComposedShader36]);
Shape26.Appearance := Appearance27;
Sphere50 := TSphereNode.Create;
Sphere50.Radius := 5;
Shape26.Geometry := Sphere50;
Transform25.FdChildren.Add(Shape26);
Script51 := TScriptNode.Create;
Script51.X3DName := 'Animate';
Script51.DirectOutput := True;
FieldVal52 := TSFVec3f.Create(Script51, True, 'translation', Vector3(0, 0, 0));
end;

procedure InitflowerprotofreewrlPart3;
begin
Script51.AddCustomFieldOrEvent(FieldVal52);
FieldVal53 := TSFVec3f.Create(Script51, True, 'velocity', Vector3(0, 0, 0));
Script51.AddCustomFieldOrEvent(FieldVal53);
FieldVal54 := TSFFloat.CreateUndefined(Script51, True, 'set_fraction');
Script51.AddCustomFieldOrEvent(FieldVal54);
FieldVal55 := TSFFloat.Create(Script51, True, 'a', 0.5);
Script51.AddCustomFieldOrEvent(FieldVal55);
FieldVal56 := TSFFloat.Create(Script51, True, 'b', 0.5);
Script51.AddCustomFieldOrEvent(FieldVal56);
FieldVal57 := TSFFloat.Create(Script51, True, 'c', 3);
Script51.AddCustomFieldOrEvent(FieldVal57);
FieldVal58 := TSFFloat.Create(Script51, True, 'd', 3);
Script51.AddCustomFieldOrEvent(FieldVal58);
FieldVal59 := TSFFloat.Create(Script51, True, 'tdelta', 0.5);
Script51.AddCustomFieldOrEvent(FieldVal59);
FieldVal60 := TSFFloat.Create(Script51, True, 'pdelta', 0.5);
Script51.AddCustomFieldOrEvent(FieldVal60);
Script51.SetSourceCode('ecmascript:' + LineEnding +
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
Transform25.FdChildren.Add(Script51);
TimeSensor61 := TTimeSensorNode.Create;
TimeSensor61.X3DName := 'TourTime';
TimeSensor61.CycleInterval := 5;
TimeSensor61.Loop := True;
Transform25.FdChildren.Add(TimeSensor61);
{ ROUTE TourTime.fraction_changed TO Animate.set_fraction }
Transform25.AddRoute(TimeSensor61.EventFraction_changed, FieldVal54);
{ ROUTE Animate.translation_changed TO transform.set_translation }
Transform25.AddRoute(Script51.EventTranslation_changed, Transform25.FdTranslation.EventIn);
{ ROUTE Animate.a TO shader.a }
Transform25.AddRoute(FieldVal55, ComposedShader36.a);
{ ROUTE Animate.b TO shader.b }
Transform25.AddRoute(FieldVal56, ComposedShader36.b);
{ ROUTE Animate.c TO shader.c }
Transform25.AddRoute(FieldVal57, ComposedShader36.c);
{ ROUTE Animate.d TO shader.d }
Transform25.AddRoute(FieldVal58, ComposedShader36.d);
{ ROUTE Animate.tdelta TO shader.tdelta }
Transform25.AddRoute(FieldVal59, ComposedShader36.tdelta);
{ ROUTE Animate.pdelta TO shader.pdelta }
Transform25.AddRoute(FieldVal60, ComposedShader36.pdelta);
end;

procedure InitflowerprotofreewrlPart4;
begin
ProtoDeclare20.Node.AddChildren([Transform25]);
X3D0.AddPrototype(ProtoDeclare20);
ProtoInstance70 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare20);
(ProtoInstance70.Field('vertex') as TMFString).Send(['../shaders/freewrl_flowers_chromatic.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs']);
(ProtoInstance70.Field('fragment') as TMFString).Send(['../shaders/freewrl.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs']);
Group16.FdChildren.Add(ProtoInstance70.Instantiate);
X3D0.AddChildren([Group16]);
end;

function Createflowerprotofreewrl: TX3DRootNode;
begin
  InitflowerprotofreewrlPart0;
  InitflowerprotofreewrlPart1;
  InitflowerprotofreewrlPart2;
  InitflowerprotofreewrlPart3;
  InitflowerprotofreewrlPart4;
  Result := X3D0;
end;

begin
end.
