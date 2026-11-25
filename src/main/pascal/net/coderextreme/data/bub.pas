unit bub;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createbub: TX3DRootNode;

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
  Group15: TGroupNode;
  NavigationInfo16: TNavigationInfoNode;
  Background17: TBackgroundNode;
  Viewpoint18: TViewpointNode;
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
  FieldVal33: TSFInt32;
  FieldVal34: TSFVec3f;
  FieldVal35: TSFFloat;
  FieldVal36: TSFFloat;
  FieldVal37: TSFFloat;
  ShaderPart38: TShaderPartNode;
  ShaderPart39: TShaderPartNode;
  ComposedShader40: TComposedShaderNode;
  FieldVal41: TSFNode;
  FieldVal43: TSFVec3f;
  FieldVal44: TSFFloat;
  FieldVal45: TSFFloat;
  FieldVal46: TSFFloat;
  ShaderPart47: TShaderPartNode;
  ShaderPart48: TShaderPartNode;
  Sphere49: TSphereNode;
  Script50: TScriptNode;
  FieldVal51: TSFVec3f;
  FieldVal52: TSFVec3f;
  FieldVal53: TX3DEvent;
  TimeSensor54: TTimeSensorNode;
  ProtoInstance57: TX3DPrototypeNode;
  ProtoInstance58: TX3DPrototypeNode;
  ProtoInstance59: TX3DPrototypeNode;

procedure InitbubPart0;
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
X3D0.Meta['title'] := 'bub.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := '3 prismatic spheres';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/bub.x3d';
Group15 := TGroupNode.Create;
NavigationInfo16 := TNavigationInfoNode.Create;
Group15.FdChildren.Add(NavigationInfo16);
Background17 := TBackgroundNode.Create;
Background17.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background17.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background17.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background17.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background17.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background17.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Group15.FdChildren.Add(Background17);
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.Position := Vector3(0, 0, 20);
Viewpoint18.Description := 'Look at the bubbles flying';
Group15.FdChildren.Add(Viewpoint18);
ProtoDeclare19 := CreateEmptyPrototype('Bubble');
ProtoDeclare19.X3DName := 'Bubble';
Transform21 := TTransformNode.Create;
Transform21.X3DName := 'transform';
Shape22 := TShapeNode.Create;
Shape22.X3DName := 'myShape';
Appearance23 := TAppearanceNode.Create;
end;

procedure InitbubPart1;
begin
Material24 := TMaterialNode.Create;
Material24.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material24.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance23.Material := Material24;
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
{ <ComposedShader DEF='gl' language="GLSL"> }
{ <field name='cube' type='SFInt32' accessType="inputOutput" value='0'/> }
{ <field name='chromaticDispertion' type='SFVec3f' accessType="inputOutput" value='0.98 1.0 1.033'/> }
{ <field name='bias' type='SFFloat' accessType="inputOutput" value='0.5'/> }
{ <field name='scale' type='SFFloat' accessType="inputOutput" value='0.5'/> }
{ <field name='power' type='SFFloat' accessType="inputOutput" value='2.0'/> }
{ <ShaderPart url='"../shaders/gl.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs"'></ShaderPart> }
{ <ShaderPart url='"../shaders/pc_bubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"' type='FRAGMENT'></ShaderPart> }
{ </ComposedShader> }
{ <ComposedShader DEF='freewrl' language="GLSL"> }
{ <field name='fw_textureCoodGenType' type='SFInt32' accessType="inputOutput" value='0'/> }
{ <field name='chromaticDispertion' type='SFVec3f' accessType="inputOutput" value='0.98 1.0 1.033'/> }
{ <field name='bias' type='SFFloat' accessType="inputOutput" value='0.5'/> }
{ <field name='scale' type='SFFloat' accessType="inputOutput" value='0.5'/> }
{ <field name='power' type='SFFloat' accessType="inputOutput" value='2.0'/> }
end;

procedure InitbubPart2;
begin
{ <ShaderPart url='"../shaders/freewrl.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs"'></ShaderPart> }
{ <ShaderPart url='"../shaders/pc_bubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"' type='FRAGMENT'></ShaderPart> }
{ </ComposedShader> }
{ <ComposedShader DEF='instant' language="GLSL"> }
{ <field name='cube' type='SFInt32' accessType="inputOutput" value='0'/> }
{ <field name='chromaticDispertion' type='SFVec3f' accessType="inputOutput" value='0.98 1.0 1.033'/> }
{ <field name='bias' type='SFFloat' accessType="inputOutput" value='0.5'/> }
{ <field name='scale' type='SFFloat' accessType="inputOutput" value='0.5'/> }
{ <field name='power' type='SFFloat' accessType="inputOutput" value='2.0'/> }
{ <ShaderPart url='"../shaders/instant.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs"'></ShaderPart> }
{ <ShaderPart url='"../shaders/pc_bubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"' type='FRAGMENT'></ShaderPart> }
{ </ComposedShader> }
ComposedShader32 := TComposedShaderNode.Create;
ComposedShader32.X3DName := 'x3dom';
ComposedShader32.Language := 'GLSL';
FieldVal33 := TSFInt32.Create(ComposedShader32, True, 'cube', 0);
ComposedShader32.AddCustomFieldOrEvent(FieldVal33);
FieldVal34 := TSFVec3f.Create(ComposedShader32, True, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader32.AddCustomFieldOrEvent(FieldVal34);
FieldVal35 := TSFFloat.Create(ComposedShader32, True, 'bias', 0.5);
ComposedShader32.AddCustomFieldOrEvent(FieldVal35);
FieldVal36 := TSFFloat.Create(ComposedShader32, True, 'scale', 0.5);
ComposedShader32.AddCustomFieldOrEvent(FieldVal36);
FieldVal37 := TSFFloat.Create(ComposedShader32, True, 'power', 2);
ComposedShader32.AddCustomFieldOrEvent(FieldVal37);
ShaderPart38 := TShaderPartNode.Create;
ShaderPart38.SetUrl(['../shaders/x3dom.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs']);
ShaderPart38.FdType.Value := 'VERTEX';
ComposedShader32.Parts := ShaderPart38;
ShaderPart39 := TShaderPartNode.Create;
ShaderPart39.SetUrl(['../shaders/pc_bubbles.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs']);
ShaderPart39.FdType.Value := 'FRAGMENT';
ComposedShader32.Parts := ShaderPart39;
Appearance23.AddChildren([ComposedShader32]);
ComposedShader40 := TComposedShaderNode.Create;
ComposedShader40.X3DName := 'x_ite';
ComposedShader40.Language := 'GLSL';
FieldVal41 := TSFNode.CreateUndefined(ComposedShader40, True, 'cube');
ComposedShader40.AddCustomFieldOrEvent(FieldVal41);
FieldVal41.Value := ComposedCubeMapTexture25;
end;

procedure InitbubPart3;
begin
FieldVal43 := TSFVec3f.Create(ComposedShader40, True, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader40.AddCustomFieldOrEvent(FieldVal43);
FieldVal44 := TSFFloat.Create(ComposedShader40, True, 'bias', 0.5);
ComposedShader40.AddCustomFieldOrEvent(FieldVal44);
FieldVal45 := TSFFloat.Create(ComposedShader40, True, 'scale', 0.5);
ComposedShader40.AddCustomFieldOrEvent(FieldVal45);
FieldVal46 := TSFFloat.Create(ComposedShader40, True, 'power', 2);
ComposedShader40.AddCustomFieldOrEvent(FieldVal46);
ShaderPart47 := TShaderPartNode.Create;
ShaderPart47.SetUrl(['../shaders/x_ite.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs']);
ShaderPart47.FdType.Value := 'VERTEX';
ComposedShader40.Parts := ShaderPart47;
ShaderPart48 := TShaderPartNode.Create;
ShaderPart48.SetUrl(['../shaders/x_itebubbles.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs']);
ShaderPart48.FdType.Value := 'FRAGMENT';
ComposedShader40.Parts := ShaderPart48;
Appearance23.AddChildren([ComposedShader40]);
Shape22.Appearance := Appearance23;
Sphere49 := TSphereNode.Create;
Shape22.Geometry := Sphere49;
Transform21.FdChildren.Add(Shape22);
ProtoDeclare19.Node.AddChildren([Transform21]);
Script50 := TScriptNode.Create;
Script50.X3DName := 'Bounce';
FieldVal51 := TSFVec3f.Create(Script50, True, 'translation', Vector3(0, 0, 0));
Script50.AddCustomFieldOrEvent(FieldVal51);
FieldVal52 := TSFVec3f.Create(Script50, True, 'velocity', Vector3(0, 0, 0));
Script50.AddCustomFieldOrEvent(FieldVal52);
FieldVal53 := TSFTime.CreateEvent(Script50, 'set_fraction', True);
Script50.AddCustomFieldOrEvent(FieldVal53);
Script50.SetSourceCode('ecmascript:' + LineEnding +
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
  '			    if (Math.abs(translation.x) > 10) {' + LineEnding +
  '				initialize();' + LineEnding +
  '			    } else if (Math.abs(translation.y) > 10) {' + LineEnding +
  '				initialize();' + LineEnding +
  '			    } else if (Math.abs(translation.z) > 10) {' + LineEnding +
  '				initialize();' + LineEnding +
  '			    } else {' + LineEnding +
  '				velocity.x += Math.random() * 0.2 - 0.1;' + LineEnding +
  '				velocity.y += Math.random() * 0.2 - 0.1;' + LineEnding +
  '				velocity.z += Math.random() * 0.2 - 0.1;' + LineEnding +
  '			    }' + LineEnding +
  '			}');
ProtoDeclare19.Node.AddChildren([Script50]);
TimeSensor54 := TTimeSensorNode.Create;
TimeSensor54.X3DName := 'TourTime';
TimeSensor54.CycleInterval := 0.15;
TimeSensor54.Loop := True;
ProtoDeclare19.Node.AddChildren([TimeSensor54]);
{ ROUTE TourTime.cycleTime TO Bounce.set_fraction }
ProtoBody20.AddRoute(TimeSensor54.EventCycleTime, FieldVal53);
{ ROUTE Bounce.translation_changed TO transform.set_translation }
end;

procedure InitbubPart4;
begin
ProtoBody20.AddRoute(Script50.EventTranslation_changed, Transform21.FdTranslation.EventIn);
X3D0.AddPrototype(ProtoDeclare19);
ProtoInstance57 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare19);
Group15.FdChildren.Add(ProtoInstance57.Instantiate);
ProtoInstance58 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare19);
Group15.FdChildren.Add(ProtoInstance58.Instantiate);
ProtoInstance59 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare19);
Group15.FdChildren.Add(ProtoInstance59.Instantiate);
X3D0.AddChildren([Group15]);
end;

function Createbub: TX3DRootNode;
begin
  InitbubPart0;
  InitbubPart1;
  InitbubPart2;
  InitbubPart3;
  InitbubPart4;
  Result := X3D0;
end;

begin
end.
