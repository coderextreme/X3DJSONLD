unit bubs2;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createbubs2: TX3DRootNode;

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
  Group10: TGroupNode;
  NavigationInfo11: TNavigationInfoNode;
  Viewpoint12: TViewpointNode;
  Background13: TBackgroundNode;
  ProtoDeclare14: TX3DPrototype;
  Transform16: TTransformNode;
  Shape17: TShapeNode;
  Sphere18: TSphereNode;
  Appearance19: TAppearanceNode;
  Material20: TMaterialNode;
  Script21: TScriptNode;
  FieldVal22: TSFVec3f;
  FieldVal23: TSFVec3f;
  FieldVal24: TSFVec3f;
  FieldVal25: TSFVec3f;
  FieldVal26: TX3DEvent;
  TimeSensor27: TTimeSensorNode;
  ProtoInstance31: TX3DPrototypeNode;
  ProtoInstance32: TX3DPrototypeNode;
  ProtoInstance33: TX3DPrototypeNode;
  ProtoInstance34: TX3DPrototypeNode;

procedure Initbubs2Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Meta['title'] := 'bubs2.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := 'Tour around a prismatic sphere';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d';
X3D0.Meta['translated'] := '13 March 2016';
X3D0.Meta['generator'] := 'X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html';
Group10 := TGroupNode.Create;
NavigationInfo11 := TNavigationInfoNode.Create;
NavigationInfo11.SetType(['EXAMINE']);
Group10.FdChildren.Add(NavigationInfo11);
Viewpoint12 := TViewpointNode.Create;
Viewpoint12.Position := Vector3(0, 0, 4);
Viewpoint12.Orientation := Vector4(1, 0, 0, 0);
Viewpoint12.Description := 'Bubbles in action';
Group10.FdChildren.Add(Viewpoint12);
Background13 := TBackgroundNode.Create;
Background13.SetBackUrl(['../resources/images/BK.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png']);
Background13.SetBottomUrl(['../resources/images/BT.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png']);
Background13.SetFrontUrl(['../resources/images/FR.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png']);
Background13.SetLeftUrl(['../resources/images/LF.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png']);
Background13.SetRightUrl(['../resources/images/RT.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png']);
Background13.SetTopUrl(['../resources/images/TP.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png']);
Group10.FdChildren.Add(Background13);
ProtoDeclare14 := CreateEmptyPrototype('Bubble');
ProtoDeclare14.X3DName := 'Bubble';
Transform16 := TTransformNode.Create;
Transform16.X3DName := 'body_trans';
Shape17 := TShapeNode.Create;
Sphere18 := TSphereNode.Create;
Sphere18.Radius := 0.25;
Shape17.Geometry := Sphere18;
Appearance19 := TAppearanceNode.Create;
Material20 := TMaterialNode.Create;
Material20.DiffuseColor := Vector3(1, 0, 0);
end;

procedure Initbubs2Part1;
begin
Material20.Transparency := 0.2;
Appearance19.Material := Material20;
Shape17.Appearance := Appearance19;
Transform16.FdChildren.Add(Shape17);
Script21 := TScriptNode.Create;
Script21.X3DName := 'bounce';
FieldVal22 := TSFVec3f.Create(Script21, True, 'scale', Vector3(1, 1, 1));
Script21.AddCustomFieldOrEvent(FieldVal22);
FieldVal23 := TSFVec3f.Create(Script21, True, 'translation', Vector3(0, 0, 0));
Script21.AddCustomFieldOrEvent(FieldVal23);
FieldVal24 := TSFVec3f.Create(Script21, True, 'velocity', Vector3(0, 0, 0));
Script21.AddCustomFieldOrEvent(FieldVal24);
FieldVal25 := TSFVec3f.Create(Script21, True, 'scalvel', Vector3(0, 0, 0));
Script21.AddCustomFieldOrEvent(FieldVal25);
FieldVal26 := TSFFloat.CreateEvent(Script21, 'set_fraction', True);
Script21.AddCustomFieldOrEvent(FieldVal26);
Script21.SetSourceCode('ecmascript:' + LineEnding +
  'function initialize() {' + LineEnding +
  '    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);' + LineEnding +
  '' + LineEnding +
  '    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);' + LineEnding +
  '}' + LineEnding +
  '' + LineEnding +
  'function set_fraction(value) {' + LineEnding +
  '    if (typeof translation === ''undefined'') {\n		translation = new SFVec3f(0, 0, 0);\n    }\n    if (typeof velocity === ''undefined'') {\n		velocity = new SFVec3f(0, 0, 0);\n    }\n    if (typeof scalvel === ''undefined'') {\n		scalvel = new SFVec3f(0, 0, 0);\n    }\n    if (typeof scale === ''undefined'') {' + LineEnding +
  '		scale = new SFVec3f(1, 1, 1);' + LineEnding +
  '    }' + LineEnding +
  '    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);' + LineEnding +
  '    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);' + LineEnding +
  '    // if you get to far away or too big, explode' + LineEnding +
  '    if ( Math.abs(translation.x) > 256) {' + LineEnding +
  '	translation.x = 0;' + LineEnding +
  '	initialize();' + LineEnding +
  '    }' + LineEnding +
  '    if ( Math.abs(translation.y) > 256) {' + LineEnding +
  '	translation.y = 0;' + LineEnding +
  '	initialize();' + LineEnding +
  '    }' + LineEnding +
  '    if ( Math.abs(translation.z) > 256) {' + LineEnding +
  '	translation.z = 0;' + LineEnding +
  '	initialize();' + LineEnding +
  '    }' + LineEnding +
  '    if (Math.abs(scale.x) > 20) {' + LineEnding +
  '	scale.x = scale.x/20;' + LineEnding +
  '	translation.x = 0;' + LineEnding +
  '	initialize();' + LineEnding +
  '    }' + LineEnding +
  '    if (Math.abs(scale.y) > 20) {' + LineEnding +
  '	scale.y = scale.y/20;' + LineEnding +
  '	translation.y = 0;' + LineEnding +
  '	initialize();' + LineEnding +
  '    }' + LineEnding +
  '    if (Math.abs(scale.z) > 20) {' + LineEnding +
  '	scale.z = scale.z/20;' + LineEnding +
  '	translation.z = 0;' + LineEnding +
  '	initialize();' + LineEnding +
  '    }' + LineEnding +
  '}');
Transform16.FdChildren.Add(Script21);
TimeSensor27 := TTimeSensorNode.Create;
TimeSensor27.X3DName := 'bubbleClock';
TimeSensor27.CycleInterval := 10;
TimeSensor27.Loop := True;
Transform16.FdChildren.Add(TimeSensor27);
{ ROUTE bounce.translation_changed TO body_trans.set_translation }
Transform16.AddRoute(Script21.EventTranslation_changed, Transform16.FdTranslation.EventIn);
{ ROUTE bounce.scale_changed TO body_trans.set_scale }
Transform16.AddRoute(Script21.EventScale_changed, Transform16.scale);
{ ROUTE bubbleClock.fraction_changed TO bounce.set_fraction }
Transform16.AddRoute(TimeSensor27.EventFraction_changed, FieldVal26);
ProtoDeclare14.Node.AddChildren([Transform16]);
X3D0.AddPrototype(ProtoDeclare14);
ProtoInstance31 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare14);
ProtoInstance31.X3DName := 'bubbleA';
Group10.FdChildren.Add(ProtoInstance31.Instantiate);
ProtoInstance32 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare14);
ProtoInstance32.X3DName := 'bubbleB';
Group10.FdChildren.Add(ProtoInstance32.Instantiate);
ProtoInstance33 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare14);
ProtoInstance33.X3DName := 'bubbleC';
Group10.FdChildren.Add(ProtoInstance33.Instantiate);
end;

procedure Initbubs2Part2;
begin
ProtoInstance34 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare14);
ProtoInstance34.X3DName := 'bubbleD';
Group10.FdChildren.Add(ProtoInstance34.Instantiate);
X3D0.AddChildren([Group10]);
end;

function Createbubs2: TX3DRootNode;
begin
  Initbubs2Part0;
  Initbubs2Part1;
  Initbubs2Part2;
  Result := X3D0;
end;

begin
end.
