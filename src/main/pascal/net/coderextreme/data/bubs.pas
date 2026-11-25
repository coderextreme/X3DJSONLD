unit bubs;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createbubs: TX3DRootNode;

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
  Group8: TGroupNode;
  NavigationInfo9: TNavigationInfoNode;
  Viewpoint10: TViewpointNode;
  Background11: TBackgroundNode;
  ProtoDeclare12: TX3DPrototype;
  Transform14: TTransformNode;
  Shape15: TShapeNode;
  Sphere16: TSphereNode;
  Appearance17: TAppearanceNode;
  Material18: TMaterialNode;
  Script19: TScriptNode;
  FieldVal20: TSFVec3f;
  FieldVal21: TSFVec3f;
  FieldVal22: TSFVec3f;
  FieldVal23: TSFVec3f;
  FieldVal24: TX3DEvent;
  TimeSensor25: TTimeSensorNode;
  ProtoInstance29: TX3DPrototypeNode;
  ProtoInstance30: TX3DPrototypeNode;
  ProtoInstance31: TX3DPrototypeNode;
  ProtoInstance32: TX3DPrototypeNode;

procedure InitbubsPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Meta['title'] := 'bubs.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := 'Tour around a prismatic sphere';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/bubs.x3d';
Group8 := TGroupNode.Create;
NavigationInfo9 := TNavigationInfoNode.Create;
NavigationInfo9.SetType(['EXAMINE']);
Group8.FdChildren.Add(NavigationInfo9);
Viewpoint10 := TViewpointNode.Create;
Viewpoint10.Position := Vector3(0, 0, 4);
Viewpoint10.Orientation := Vector4(1, 0, 0, 0);
Viewpoint10.Description := 'Bubbles in action';
Group8.FdChildren.Add(Viewpoint10);
Background11 := TBackgroundNode.Create;
Background11.SetBackUrl(['../resources/images/BK.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png']);
Background11.SetBottomUrl(['../resources/images/BT.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png']);
Background11.SetFrontUrl(['../resources/images/FR.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png']);
Background11.SetLeftUrl(['../resources/images/LF.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png']);
Background11.SetRightUrl(['../resources/images/RT.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png']);
Background11.SetTopUrl(['../resources/images/TP.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png']);
Group8.FdChildren.Add(Background11);
ProtoDeclare12 := CreateEmptyPrototype('Bubble');
ProtoDeclare12.X3DName := 'Bubble';
Transform14 := TTransformNode.Create;
Transform14.X3DName := 'body_trans';
Shape15 := TShapeNode.Create;
Sphere16 := TSphereNode.Create;
Sphere16.Radius := 0.25;
Shape15.Geometry := Sphere16;
Appearance17 := TAppearanceNode.Create;
Material18 := TMaterialNode.Create;
Material18.DiffuseColor := Vector3(1, 0, 0);
Material18.Transparency := 0.2;
Appearance17.Material := Material18;
end;

procedure InitbubsPart1;
begin
Shape15.Appearance := Appearance17;
Transform14.FdChildren.Add(Shape15);
Script19 := TScriptNode.Create;
Script19.X3DName := 'bounce1';
FieldVal20 := TSFVec3f.Create(Script19, True, 'scale', Vector3(1, 1, 1));
Script19.AddCustomFieldOrEvent(FieldVal20);
FieldVal21 := TSFVec3f.Create(Script19, True, 'translation', Vector3(0, 0, 0));
Script19.AddCustomFieldOrEvent(FieldVal21);
FieldVal22 := TSFVec3f.Create(Script19, True, 'velocity', Vector3(0, 0, 0));
Script19.AddCustomFieldOrEvent(FieldVal22);
FieldVal23 := TSFVec3f.Create(Script19, True, 'scalvel', Vector3(0, 0, 0));
Script19.AddCustomFieldOrEvent(FieldVal23);
FieldVal24 := TSFFloat.CreateEvent(Script19, 'set_fraction', True);
Script19.AddCustomFieldOrEvent(FieldVal24);
Script19.SetSourceCode('ecmascript:' + LineEnding +
  'function initialize() {' + LineEnding +
  '    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);' + LineEnding +
  '' + LineEnding +
  '    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);' + LineEnding +
  '}' + LineEnding +
  '' + LineEnding +
  'function set_fraction(value) {' + LineEnding +
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
Transform14.FdChildren.Add(Script19);
TimeSensor25 := TTimeSensorNode.Create;
TimeSensor25.X3DName := 'bubbleClock';
TimeSensor25.CycleInterval := 10;
TimeSensor25.Loop := True;
Transform14.FdChildren.Add(TimeSensor25);
{ ROUTE bounce1.translation_changed TO body_trans.set_translation }
Transform14.AddRoute(Script19.EventTranslation_changed, Transform14.FdTranslation.EventIn);
{ ROUTE bounce1.scale_changed TO body_trans.set_scale }
Transform14.AddRoute(Script19.EventScale_changed, Transform14.scale);
{ ROUTE bubbleClock.fraction_changed TO bounce1.set_fraction }
Transform14.AddRoute(TimeSensor25.EventFraction_changed, FieldVal24);
ProtoDeclare12.Node.AddChildren([Transform14]);
X3D0.AddPrototype(ProtoDeclare12);
ProtoInstance29 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare12);
ProtoInstance29.X3DName := 'bubbleA';
Group8.FdChildren.Add(ProtoInstance29.Instantiate);
ProtoInstance30 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare12);
ProtoInstance30.X3DName := 'bubbleB';
Group8.FdChildren.Add(ProtoInstance30.Instantiate);
ProtoInstance31 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare12);
ProtoInstance31.X3DName := 'bubbleC';
Group8.FdChildren.Add(ProtoInstance31.Instantiate);
ProtoInstance32 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare12);
ProtoInstance32.X3DName := 'bubbleD';
end;

procedure InitbubsPart2;
begin
Group8.FdChildren.Add(ProtoInstance32.Instantiate);
X3D0.AddChildren([Group8]);
end;

function Createbubs: TX3DRootNode;
begin
  InitbubsPart0;
  InitbubsPart1;
  InitbubsPart2;
  Result := X3D0;
end;

begin
end.
