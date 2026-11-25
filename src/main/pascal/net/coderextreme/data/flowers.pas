unit flowers;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createflowers: TX3DRootNode;

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
  Background18: TBackgroundNode;
  ProtoDeclare19: TX3DPrototype;
  Transform21: TTransformNode;
  Shape22: TShapeNode;
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
  FieldVal33: TSFNode;
  FieldVal35: TSFVec3f;
  FieldVal36: TX3DEvent;
  FieldVal37: TX3DEvent;
  FieldVal38: TX3DEvent;
  FieldVal39: TX3DEvent;
  FieldVal40: TX3DEvent;
  FieldVal41: TX3DEvent;
  FieldVal42: TX3DEvent;
  FieldVal43: TX3DEvent;
  FieldVal44: TX3DEvent;
  ShaderPart45: TShaderPartNode;
  ShaderPart46: TShaderPartNode;
  Sphere47: TSphereNode;
  Script48: TScriptNode;
  FieldVal49: TSFVec3f;
  FieldVal50: TSFVec3f;
  FieldVal51: TX3DEvent;
  FieldVal52: TSFFloat;
  FieldVal53: TSFFloat;
  FieldVal54: TSFFloat;
  FieldVal55: TSFFloat;
  FieldVal56: TSFFloat;
  FieldVal57: TSFFloat;
  TimeSensor58: TTimeSensorNode;
  ProtoInstance67: TX3DPrototypeNode;
  ProtoInstance68: TX3DPrototypeNode;
  ProtoInstance69: TX3DPrototypeNode;

procedure InitflowersPart0;
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
X3D0.Meta['title'] := 'flowers.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := '5 or more prismatic flowers';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d';
Group16 := TGroupNode.Create;
NavigationInfo17 := TNavigationInfoNode.Create;
Group16.FdChildren.Add(NavigationInfo17);
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
Background18 := TBackgroundNode.Create;
Background18.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background18.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background18.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background18.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background18.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background18.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Group16.FdChildren.Add(Background18);
ProtoDeclare19 := CreateEmptyPrototype('flower');
ProtoDeclare19.X3DName := 'flower';
Transform21 := TTransformNode.Create;
Transform21.X3DName := 'animate_transform';
Shape22 := TShapeNode.Create;
Appearance23 := TAppearanceNode.Create;
Material24 := TMaterialNode.Create;
Material24.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material24.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance23.Material := Material24;
end;

procedure InitflowersPart1;
begin
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
{ <ComposedShader DEF='x3dom' language="GLSL"> }
{ <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> }
{ <field name='cube' type='SFNode' accessType="inputOutput"> }
{ <ComposedCubeMapTexture USE="texture"/> }
{ </field> }
{ <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> }
{ <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> }
{ <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> }
{ <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> }
{ <field name='a' type='SFFloat' accessType='inputOutput' value='10'></field> }
{ <field name='b' type='SFFloat' accessType='inputOutput' value='1'></field> }
{ <field name='c' type='SFFloat' accessType='inputOutput' value='20'></field> }
{ <field name='d' type='SFFloat' accessType='inputOutput' value='20'></field> }
{ <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> }
{ <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> }
{ <ShaderPart url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"'></ShaderPart> }
{ <ShaderPart url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"' type='FRAGMENT'></ShaderPart> }
{ </ComposedShader> }
ComposedShader32 := TComposedShaderNode.Create;
end;

procedure InitflowersPart2;
begin
ComposedShader32.X3DName := 'x_ite';
ComposedShader32.Language := 'GLSL';
FieldVal33 := TSFNode.CreateUndefined(ComposedShader32, True, 'cube');
ComposedShader32.AddCustomFieldOrEvent(FieldVal33);
FieldVal33.Value := ComposedCubeMapTexture25;
FieldVal35 := TSFVec3f.Create(ComposedShader32, False, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader32.AddCustomFieldOrEvent(FieldVal35);
FieldVal36 := TSFFloat.CreateEvent(ComposedShader32, 'bias', True);
ComposedShader32.AddCustomFieldOrEvent(FieldVal36);
FieldVal37 := TSFFloat.CreateEvent(ComposedShader32, 'scale', True);
ComposedShader32.AddCustomFieldOrEvent(FieldVal37);
FieldVal38 := TSFFloat.CreateEvent(ComposedShader32, 'power', True);
ComposedShader32.AddCustomFieldOrEvent(FieldVal38);
FieldVal39 := TSFFloat.CreateEvent(ComposedShader32, 'a', True);
ComposedShader32.AddCustomFieldOrEvent(FieldVal39);
FieldVal40 := TSFFloat.CreateEvent(ComposedShader32, 'b', True);
ComposedShader32.AddCustomFieldOrEvent(FieldVal40);
FieldVal41 := TSFFloat.CreateEvent(ComposedShader32, 'c', True);
ComposedShader32.AddCustomFieldOrEvent(FieldVal41);
FieldVal42 := TSFFloat.CreateEvent(ComposedShader32, 'd', True);
ComposedShader32.AddCustomFieldOrEvent(FieldVal42);
FieldVal43 := TSFFloat.CreateEvent(ComposedShader32, 'tdelta', True);
ComposedShader32.AddCustomFieldOrEvent(FieldVal43);
FieldVal44 := TSFFloat.CreateEvent(ComposedShader32, 'pdelta', True);
ComposedShader32.AddCustomFieldOrEvent(FieldVal44);
ShaderPart45 := TShaderPartNode.Create;
ShaderPart45.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs']);
ShaderPart45.FdType.Value := 'VERTEX';
ComposedShader32.Parts := ShaderPart45;
ShaderPart46 := TShaderPartNode.Create;
ShaderPart46.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs']);
ShaderPart46.FdType.Value := 'FRAGMENT';
ComposedShader32.Parts := ShaderPart46;
Appearance23.AddChildren([ComposedShader32]);
Shape22.Appearance := Appearance23;
Sphere47 := TSphereNode.Create;
Shape22.Geometry := Sphere47;
Transform21.FdChildren.Add(Shape22);
ProtoDeclare19.Node.AddChildren([Transform21]);
Script48 := TScriptNode.Create;
end;

procedure InitflowersPart3;
begin
Script48.X3DName := 'Animate';
FieldVal49 := TSFVec3f.Create(Script48, True, 'translation', Vector3(0, 0, 0));
Script48.AddCustomFieldOrEvent(FieldVal49);
FieldVal50 := TSFVec3f.Create(Script48, True, 'velocity', Vector3(0, 0, 0));
Script48.AddCustomFieldOrEvent(FieldVal50);
FieldVal51 := TSFFloat.CreateEvent(Script48, 'set_fraction', True);
Script48.AddCustomFieldOrEvent(FieldVal51);
FieldVal52 := TSFFloat.Create(Script48, True, 'a', 0.5);
Script48.AddCustomFieldOrEvent(FieldVal52);
FieldVal53 := TSFFloat.Create(Script48, True, 'b', 0.5);
Script48.AddCustomFieldOrEvent(FieldVal53);
FieldVal54 := TSFFloat.Create(Script48, True, 'c', 3);
Script48.AddCustomFieldOrEvent(FieldVal54);
FieldVal55 := TSFFloat.Create(Script48, True, 'd', 3);
Script48.AddCustomFieldOrEvent(FieldVal55);
FieldVal56 := TSFFloat.Create(Script48, True, 'tdelta', 0.5);
Script48.AddCustomFieldOrEvent(FieldVal56);
FieldVal57 := TSFFloat.Create(Script48, True, 'pdelta', 0.5);
Script48.AddCustomFieldOrEvent(FieldVal57);
Script48.SetSourceCode('ecmascript:' + LineEnding +
  '' + LineEnding +
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
  '				tdelta = tdelta + 0.5;' + LineEnding +
  '				pdelta = pdelta + 0.5;' + LineEnding +
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
ProtoDeclare19.Node.AddChildren([Script48]);
TimeSensor58 := TTimeSensorNode.Create;
TimeSensor58.X3DName := 'TourTime';
TimeSensor58.CycleInterval := 5;
TimeSensor58.Loop := True;
ProtoDeclare19.Node.AddChildren([TimeSensor58]);
{ ROUTE TourTime.fraction_changed TO Animate.set_fraction }
ProtoBody20.AddRoute(TimeSensor58.EventFraction_changed, FieldVal51);
{ ROUTE Animate.translation_changed TO animate_transform.set_translation }
ProtoBody20.AddRoute(Script48.EventTranslation_changed, Transform21.FdTranslation.EventIn);
{ ROUTE Animate.a TO x_ite.a }
ProtoBody20.AddRoute(FieldVal52, ComposedShader32.a);
{ ROUTE Animate.b TO x_ite.b }
ProtoBody20.AddRoute(FieldVal53, ComposedShader32.b);
{ ROUTE Animate.c TO x_ite.c }
ProtoBody20.AddRoute(FieldVal54, ComposedShader32.c);
{ ROUTE Animate.d TO x_ite.d }
ProtoBody20.AddRoute(FieldVal55, ComposedShader32.d);
{ ROUTE Animate.pdelta TO x_ite.pdelta }
ProtoBody20.AddRoute(FieldVal57, ComposedShader32.pdelta);
end;

procedure InitflowersPart4;
begin
{ ROUTE Animate.tdelta TO x_ite.tdelta }
ProtoBody20.AddRoute(FieldVal56, ComposedShader32.tdelta);
{ <ROUTE fromNode='Animate' fromField='a' toNode='x3dom' toField='a'/> }
{ <ROUTE fromNode='Animate' fromField='b' toNode='x3dom' toField='b'/> }
{ <ROUTE fromNode='Animate' fromField='c' toNode='x3dom' toField='c'/> }
{ <ROUTE fromNode='Animate' fromField='d' toNode='x3dom' toField='d'/> }
{ <ROUTE fromNode='Animate' fromField='pdelta' toNode='x3dom' toField='pdelta'/> }
{ <ROUTE fromNode='Animate' fromField='tdelta' toNode='x3dom' toField='tdelta'/> }
X3D0.AddPrototype(ProtoDeclare19);
ProtoInstance67 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare19);
Group16.FdChildren.Add(ProtoInstance67.Instantiate);
ProtoInstance68 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare19);
Group16.FdChildren.Add(ProtoInstance68.Instantiate);
ProtoInstance69 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare19);
Group16.FdChildren.Add(ProtoInstance69.Instantiate);
X3D0.AddChildren([Group16]);
end;

function Createflowers: TX3DRootNode;
begin
  InitflowersPart0;
  InitflowersPart1;
  InitflowersPart2;
  InitflowersPart3;
  InitflowersPart4;
  Result := X3D0;
end;

begin
end.
