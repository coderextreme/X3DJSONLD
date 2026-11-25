unit HAnimPoseExternProtoDeclare;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateHAnimPoseExternProtoDeclare: TX3DRootNode;

implementation

uses CastleVectors;

var
  X3D0: TX3DRootNode;
  Group20: TGroupNode;
  WorldInfo21: TWorldInfoNode;
  Background22: TBackgroundNode;
  NavigationInfo23: TNavigationInfoNode;
  X3DExternalPrototype24: TX3DExternalPrototype;
  FieldVal25: TSFNode;
  FieldVal26: TSFString;
  FieldVal27: TMFNode;
  FieldVal28: TSFString;
  FieldVal29: TSFBool;
  FieldVal30: TSFInt32;
  FieldVal31: TSFTime;
  FieldVal32: TSFNode;
  FieldVal33: TX3DEvent;
  FieldVal34: TX3DEvent;
  FieldVal35: TX3DEvent;
  FieldVal36: TX3DEvent;
  FieldVal37: TX3DEvent;
  FieldVal38: TX3DEvent;
  FieldVal39: TSFBool;
  Viewpoint40: TViewpointNode;
  Transform41: TTransformNode;
  Anchor42: TAnchorNode;
  Shape43: TShapeNode;
  Text44: TTextNode;
  FontStyle45: TFontStyleNode;
  Appearance46: TAppearanceNode;
  Material47: TMaterialNode;
  Shape48: TShapeNode;
  Box49: TBoxNode;
  Appearance50: TAppearanceNode;
  Material51: TMaterialNode;
  Transform52: TTransformNode;
  Anchor53: TAnchorNode;
  Shape54: TShapeNode;
  Text55: TTextNode;
  Shape58: TShapeNode;
  Box59: TBoxNode;

procedure InitHAnimPoseExternProtoDeclarePart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'HAnimPoseExternProtoDeclare.x3d';
X3D0.Meta['description'] := 'Define ExternProtoDeclare for an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed.';
X3D0.Meta['created'] := '1 November 2025';
X3D0.Meta['modified'] := '24 February 2026';
X3D0.Meta['creator'] := 'Don Brutzman';
X3D0.Meta['creator'] := 'Joe Williams';
X3D0.Meta['contributor'] := 'Holger Seelig for X_ITE, Sunrize on Windows, scripting guidance, and Inline IMPORT functionality as node-reference equivalent to USE';
X3D0.Meta['specificationSection'] := 'HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose';
X3D0.Meta['specificationUrl'] := 'https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose';
X3D0.Meta['specificationSection'] := 'HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures';
X3D0.Meta['specificationUrl'] := 'https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures';
X3D0.Meta['specificationSection'] := 'HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses';
X3D0.Meta['specificationUrl'] := 'https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses';
X3D0.Meta['reference'] := 'Direct scene manipulations with Javascript, https://doc.instantreality.org/tutorial/direct-scene-manipulations-with-javascript';
X3D0.Meta['generator'] := 'X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit';
X3D0.Meta['generator'] := 'Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExternProtoDeclare.x3d';
X3D0.Meta['license'] := 'https://www.web3d.org/x3d/content/examples/license.html';
Group20 := TGroupNode.Create;
WorldInfo21 := TWorldInfoNode.Create;
WorldInfo21.X3DName := 'ModelInfo';
WorldInfo21.SetInfo(['Design to illustrate a potential HAnimPose node']);
WorldInfo21.Title := 'HAnimPoseExternProtoDeclare';
Group20.FdChildren.Add(WorldInfo21);
Background22 := TBackgroundNode.Create;
Background22.SetSkyColor([Vector3(0.6, 0.6, 0.8)]);
Group20.FdChildren.Add(Background22);
NavigationInfo23 := TNavigationInfoNode.Create;
Group20.FdChildren.Add(NavigationInfo23);
X3DExternalPrototype24 := TX3DExternalPrototype.Create;
X3DExternalPrototype24.X3DName := 'HAnimPose';
X3DExternalPrototype24.Appinfo := 'Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values.';
X3DExternalPrototype24.Url := '"Filename.x3d#HAnimPose" "https://some.address.org/Filename.x3d#HAnimPose"';
FieldVal25 := TSFNode.CreateUndefined(X3DExternalPrototype24, True, 'parentHAnimHumanoid');
X3DExternalPrototype24.AddCustomFieldOrEvent(FieldVal25);
FieldVal26 := TSFString.CreateUndefined(X3DExternalPrototype24, True, 'name');
end;

procedure InitHAnimPoseExternProtoDeclarePart1;
begin
X3DExternalPrototype24.AddCustomFieldOrEvent(FieldVal26);
FieldVal27 := TMFNode.CreateUndefined(X3DExternalPrototype24, True, 'children');
X3DExternalPrototype24.AddCustomFieldOrEvent(FieldVal27);
FieldVal28 := TSFString.CreateUndefined(X3DExternalPrototype24, True, 'description');
X3DExternalPrototype24.AddCustomFieldOrEvent(FieldVal28);
FieldVal29 := TSFBool.CreateUndefined(X3DExternalPrototype24, True, 'enabled');
X3DExternalPrototype24.AddCustomFieldOrEvent(FieldVal29);
FieldVal30 := TSFInt32.CreateUndefined(X3DExternalPrototype24, False, 'loa');
X3DExternalPrototype24.AddCustomFieldOrEvent(FieldVal30);
FieldVal31 := TSFTime.CreateUndefined(X3DExternalPrototype24, True, 'transitionDuration');
X3DExternalPrototype24.AddCustomFieldOrEvent(FieldVal31);
FieldVal32 := TSFNode.CreateUndefined(X3DExternalPrototype24, True, 'metadata');
X3DExternalPrototype24.AddCustomFieldOrEvent(FieldVal32);
FieldVal33 := TSFBool.CreateEvent(X3DExternalPrototype24, 'isActive', False);
X3DExternalPrototype24.AddCustomFieldOrEvent(FieldVal33);
FieldVal34 := TSFBool.CreateEvent(X3DExternalPrototype24, 'commencePose', True);
X3DExternalPrototype24.AddCustomFieldOrEvent(FieldVal34);
FieldVal35 := TSFBool.CreateEvent(X3DExternalPrototype24, 'resetAllJoints', True);
X3DExternalPrototype24.AddCustomFieldOrEvent(FieldVal35);
FieldVal36 := TSFFloat.CreateEvent(X3DExternalPrototype24, 'set_fraction', True);
X3DExternalPrototype24.AddCustomFieldOrEvent(FieldVal36);
FieldVal37 := TSFTime.CreateEvent(X3DExternalPrototype24, 'set_startTime', True);
X3DExternalPrototype24.AddCustomFieldOrEvent(FieldVal37);
FieldVal38 := TSFBool.CreateEvent(X3DExternalPrototype24, 'isLoaded', True);
X3DExternalPrototype24.AddCustomFieldOrEvent(FieldVal38);
FieldVal39 := TSFBool.CreateUndefined(X3DExternalPrototype24, True, 'traceEnabled');
X3DExternalPrototype24.AddCustomFieldOrEvent(FieldVal39);
Group20.AddX3DExternalPrototype([X3DExternalPrototype24]);
Viewpoint40 := TViewpointNode.Create;
Viewpoint40.Description := 'HAnimPoseExternProtoDeclare description';
Viewpoint40.Position := Vector3(0, 1, 4);
Group20.FdChildren.Add(Viewpoint40);
Transform41 := TTransformNode.Create;
Transform41.X3DName := 'DisplayHeader1';
Transform41.Translation := Vector3(0, 1.5, 0);
Anchor42 := TAnchorNode.Create;
Anchor42.Description := 'go to HAnimPoseExternProtoDeclareIndex page';
Anchor42.SetParameter(['target=_blank']);
Anchor42.SetUrl(['https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExternProtoDeclareIndex.html']);
Shape43 := TShapeNode.Create;
end;

procedure InitHAnimPoseExternProtoDeclarePart2;
begin
Text44 := TTextNode.Create;
Text44.SetText(['Utility scene', 'HAnimPoseExternProtoDeclare.x3d']);
FontStyle45 := TFontStyleNode.Create;
FontStyle45.X3DName := 'HeaderFont';
FontStyle45.Family := ffSans;
FontStyle45.Justify := fjMiddle;
FontStyle45.JustifyMinor := fjMiddle;
FontStyle45.Size := 0.15;
FontStyle45.Style := fsBold;
Text44.FontStyle := FontStyle45;
Shape43.Geometry := Text44;
Appearance46 := TAppearanceNode.Create;
Appearance46.X3DName := 'PoseTextAppearance';
Material47 := TMaterialNode.Create;
Material47.DiffuseColor := Vector3(0.1, 0.3, 0.5);
Appearance46.Material := Material47;
Shape43.Appearance := Appearance46;
Anchor42.FdChildren.Add(Shape43);
Shape48 := TShapeNode.Create;
Box49 := TBoxNode.Create;
Box49.Size := Vector3(3.5, 0.5, 0.001);
Shape48.Geometry := Box49;
Appearance50 := TAppearanceNode.Create;
Appearance50.X3DName := 'TransparentAppearance';
Material51 := TMaterialNode.Create;
Material51.Transparency := 1;
Appearance50.Material := Material51;
Shape48.Appearance := Appearance50;
Anchor42.FdChildren.Add(Shape48);
Transform41.FdChildren.Add(Anchor42);
Group20.FdChildren.Add(Transform41);
Transform52 := TTransformNode.Create;
Transform52.X3DName := 'DisplayHeader2';
Transform52.Translation := Vector3(0, 0.5, 0);
Anchor53 := TAnchorNode.Create;
Anchor53.Description := 'go to HAnimPosePrototypeIndex page';
Anchor53.SetParameter(['target=_blank']);
Anchor53.SetUrl(['https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeIndex.html']);
Shape54 := TShapeNode.Create;
Text55 := TTextNode.Create;
end;

procedure InitHAnimPoseExternProtoDeclarePart3;
begin
Text55.SetText(['This model supports', 'HAnimPosePrototype.x3d']);
Text55.FontStyle := FontStyle45;
Shape54.Geometry := Text55;
Shape54.Appearance := Appearance46;
Anchor53.FdChildren.Add(Shape54);
Transform52.FdChildren.Add(Anchor53);
Shape58 := TShapeNode.Create;
Box59 := TBoxNode.Create;
Box59.Size := Vector3(2.6, 0.5, 0.001);
Shape58.Geometry := Box59;
Shape58.Appearance := Appearance50;
Transform52.FdChildren.Add(Shape58);
Group20.FdChildren.Add(Transform52);
X3D0.AddChildren([Group20]);
end;

function CreateHAnimPoseExternProtoDeclare: TX3DRootNode;
begin
  InitHAnimPoseExternProtoDeclarePart0;
  InitHAnimPoseExternProtoDeclarePart1;
  InitHAnimPoseExternProtoDeclarePart2;
  InitHAnimPoseExternProtoDeclarePart3;
  Result := X3D0;
end;

begin
end.
