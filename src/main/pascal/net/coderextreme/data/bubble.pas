unit bubble;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createbubble: TX3DRootNode;

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
  Group7: TGroupNode;
  NavigationInfo8: TNavigationInfoNode;
  Viewpoint9: TViewpointNode;
  ProtoDeclare10: TX3DPrototype;
  Transform12: TTransformNode;
  Shape13: TShapeNode;
  Sphere14: TSphereNode;
  Appearance15: TAppearanceNode;
  Material16: TMaterialNode;
  Script17: TScriptNode;
  FieldVal18: TSFVec3f;
  FieldVal19: TSFVec3f;
  FieldVal20: TSFVec3f;
  FieldVal21: TSFVec3f;
  FieldVal22: TX3DEvent;
  TimeSensor23: TTimeSensorNode;
  ProtoInstance27: TX3DPrototypeNode;

procedure InitbubblePart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'bubble.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := 'Tour around a prismatic sphere';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/bubble.x3d';
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
NavigationInfo8.SetType(['EXAMINE']);
Group7.FdChildren.Add(NavigationInfo8);
Viewpoint9 := TViewpointNode.Create;
Viewpoint9.Position := Vector3(0, 0, 4);
Viewpoint9.Orientation := Vector4(1, 0, 0, 0);
Viewpoint9.Description := 'Bubble in action';
Group7.FdChildren.Add(Viewpoint9);
ProtoDeclare10 := CreateEmptyPrototype('Bubble');
ProtoDeclare10.X3DName := 'Bubble';
Transform12 := TTransformNode.Create;
Transform12.X3DName := 'transform';
Shape13 := TShapeNode.Create;
Sphere14 := TSphereNode.Create;
Sphere14.Radius := 0.25;
Shape13.Geometry := Sphere14;
Appearance15 := TAppearanceNode.Create;
Material16 := TMaterialNode.Create;
Material16.DiffuseColor := Vector3(1, 0, 0);
Material16.Transparency := 0.2;
Appearance15.Material := Material16;
Shape13.Appearance := Appearance15;
Transform12.FdChildren.Add(Shape13);
Script17 := TScriptNode.Create;
Script17.X3DName := 'bounce';
FieldVal18 := TSFVec3f.Create(Script17, True, 'scale', Vector3(1, 1, 1));
Script17.AddCustomFieldOrEvent(FieldVal18);
FieldVal19 := TSFVec3f.Create(Script17, True, 'translation', Vector3(0, 0, 0));
Script17.AddCustomFieldOrEvent(FieldVal19);
FieldVal20 := TSFVec3f.Create(Script17, True, 'velocity', Vector3(0, 0, 0));
end;

procedure InitbubblePart1;
begin
Script17.AddCustomFieldOrEvent(FieldVal20);
FieldVal21 := TSFVec3f.Create(Script17, True, 'scalvel', Vector3(0, 0, 0));
Script17.AddCustomFieldOrEvent(FieldVal21);
FieldVal22 := TSFFloat.CreateEvent(Script17, 'set_fraction', True);
Script17.AddCustomFieldOrEvent(FieldVal22);
Script17.SetSourceCode('ecmascript:' + LineEnding +
  'function initialize() {' + LineEnding +
  '    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);' + LineEnding +
  '' + LineEnding +
  '    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);' + LineEnding +
  '}' + LineEnding +
  '' + LineEnding +
  'function set_fraction(value) {' + LineEnding +
  '	translation = new SFVec3f(' + LineEnding +
  '		translation.x + velocity.x,' + LineEnding +
  '		translation.y + velocity.y,' + LineEnding +
  '		translation.z + velocity.z);' + LineEnding +
  '	scale = new SFVec3f(' + LineEnding +
  '		scale.x + scalvel.x,' + LineEnding +
  '		scale.y + scalvel.y,' + LineEnding +
  '		scale.z + scalvel.z);' + LineEnding +
  '        // if you get to far away or too big, explode' + LineEnding +
  '        if ( Math.abs(translation.x) > 256) {' + LineEnding +
  '		translation.x = 0;' + LineEnding +
  '		initialize();' + LineEnding +
  '	}' + LineEnding +
  '        if ( Math.abs(translation.y) > 256) {' + LineEnding +
  '		translation.y = 0;' + LineEnding +
  '		initialize();' + LineEnding +
  '	}' + LineEnding +
  '        if ( Math.abs(translation.z) > 256) {' + LineEnding +
  '		translation.z = 0;' + LineEnding +
  '		initialize();' + LineEnding +
  '	}' + LineEnding +
  '	if (Math.abs(scale.x) > 20) {' + LineEnding +
  '		scale.x = scale.x/2;' + LineEnding +
  '		translation.x = 0;' + LineEnding +
  '		initialize();' + LineEnding +
  '	}' + LineEnding +
  '	if (Math.abs(scale.y) > 20) {' + LineEnding +
  '		scale.y = scale.y/2;' + LineEnding +
  '		translation.y = 0;' + LineEnding +
  '		initialize();' + LineEnding +
  '	}' + LineEnding +
  '	if (Math.abs(scale.z) > 20) {' + LineEnding +
  '		scale.z = scale.z/2;' + LineEnding +
  '		translation.z = 0;' + LineEnding +
  '		initialize();' + LineEnding +
  '	}' + LineEnding +
  '}');
Transform12.FdChildren.Add(Script17);
TimeSensor23 := TTimeSensorNode.Create;
TimeSensor23.X3DName := 'bubbleClock';
TimeSensor23.CycleInterval := 10;
TimeSensor23.Loop := True;
Transform12.FdChildren.Add(TimeSensor23);
{ ROUTE bounce.translation_changed TO transform.set_translation }
Transform12.AddRoute(Script17.EventTranslation_changed, Transform12.FdTranslation.EventIn);
{ ROUTE bounce.scale_changed TO transform.set_scale }
Transform12.AddRoute(Script17.EventScale_changed, Transform12.scale);
{ ROUTE bubbleClock.fraction_changed TO bounce.set_fraction }
Transform12.AddRoute(TimeSensor23.EventFraction_changed, FieldVal22);
ProtoDeclare10.Node.AddChildren([Transform12]);
X3D0.AddPrototype(ProtoDeclare10);
ProtoInstance27 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare10);
ProtoInstance27.X3DName := 'bubbleA';
Group7.FdChildren.Add(ProtoInstance27.Instantiate);
X3D0.AddChildren([Group7]);
end;

function Createbubble: TX3DRootNode;
begin
  InitbubblePart0;
  InitbubblePart1;
  Result := X3D0;
end;

begin
end.
