unit HAnimPoseExternProtoDeclare;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

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
SFNode25: TSFNode;
SFString26: TSFString;
MFNode27: TMFNode;
SFString28: TSFString;
SFBool29: TSFBool;
SFInt3230: TSFInt32;
SFTime31: TSFTime;
SFNode32: TSFNode;
SFBool33: TSFBool;
SFBool34: TSFBool;
SFBool35: TSFBool;
SFFloat36: TSFFloat;
SFTime37: TSFTime;
SFBool38: TSFBool;
SFBool39: TSFBool;
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
FontStyle56: TFontStyleNode;
Appearance57: TAppearanceNode;
Shape58: TShapeNode;
Box59: TBoxNode;
Appearance60: TAppearanceNode;

procedure InitHAnimPoseExternProtoDeclarePart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'HAnimPoseExternProtoDeclare.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Define ExternProtoDeclare for an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed.';
{ METHOD .Meta }
X3D0.Meta['created'] := '1 November 2025';
{ METHOD .Meta }
X3D0.Meta['modified'] := '24 February 2026';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Don Brutzman';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Joe Williams';
{ METHOD .Meta }
X3D0.Meta['contributor'] := 'Holger Seelig for X_ITE, Sunrize on Windows, scripting guidance, and Inline IMPORT functionality as node-reference equivalent to USE';
{ METHOD .Meta }
X3D0.Meta['specificationSection'] := 'HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose';
{ METHOD .Meta }
X3D0.Meta['specificationUrl'] := 'https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose';
{ METHOD .Meta }
X3D0.Meta['specificationSection'] := 'HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures';
{ METHOD .Meta }
X3D0.Meta['specificationUrl'] := 'https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures';
{ METHOD .Meta }
X3D0.Meta['specificationSection'] := 'HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses';
{ METHOD .Meta }
X3D0.Meta['specificationUrl'] := 'https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'Direct scene manipulations with Javascript, https://doc.instantreality.org/tutorial/direct-scene-manipulations-with-javascript';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExternProtoDeclare.x3d';
{ METHOD .Meta }
X3D0.Meta['license'] := 'https://www.web3d.org/x3d/content/examples/license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group20 := TGroupNode.Create;
WorldInfo21 := TWorldInfoNode.Create;
WorldInfo21.SetInfo(['Design to illustrate a potential HAnimPose node']);
WorldInfo21.Title := 'HAnimPoseExternProtoDeclare';
{ METHOD .FdChildren.Add }
Group20.FdChildren.Add(WorldInfo21);
Background22 := TBackgroundNode.Create;
Background22.SetSkyColor([Vector3(0.6,0.6,0.8)]);
{ METHOD .FdChildren.Add }
Group20.FdChildren.Add(Background22);
NavigationInfo23 := TNavigationInfoNode.Create;
{ METHOD .FdChildren.Add }
Group20.FdChildren.Add(NavigationInfo23);
X3DExternalPrototype24 := TX3DExternalPrototype.Create;
X3DExternalPrototype24.Appinfo := 'Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values.';
X3DExternalPrototype24.Url := '\"Filename.x3d#HAnimPose\" \"https://some.address.org/Filename.x3d#HAnimPose\"';
SFNode25 := TSFNode.CreateUndefined(X3DExternalPrototype24, false, 'parentHAnimHumanoid');
SFNode25.Appinfo := 'HAnimHumanoid for this Pose to act upon';
{ METHOD .AddSFNode }
X3DExternalPrototype24.AddSFNode([SFNode25]);
SFString26 := TSFString.CreateUndefined(X3DExternalPrototype24, false, 'name');
SFString26.Appinfo := 'name of this pose';
end;

procedure InitHAnimPoseExternProtoDeclarePart1;
begin

{ METHOD .AddSFString }
X3DExternalPrototype24.AddSFString([SFString26]);
MFNode27 := TMFNode.CreateUndefined(X3DExternalPrototype24, false, 'children');
MFNode27.Appinfo := 'joint values to apply to HAnimHumanoid';
{ initializating Joint nodes (if any) go here }
{ METHOD .AddMFNode }
X3DExternalPrototype24.AddMFNode([MFNode27]);
SFString28 := TSFString.CreateUndefined(X3DExternalPrototype24, false, 'description');
SFString28.Appinfo := 'explanation of purpose';
{ METHOD .AddSFString }
X3DExternalPrototype24.AddSFString([SFString28]);
SFBool29 := TSFBool.CreateUndefined(X3DExternalPrototype24, false, 'enabled');
SFBool29.Appinfo := 'default value true';
{ METHOD .AddSFBool }
X3DExternalPrototype24.AddSFBool([SFBool29]);
SFInt3230 := TSFInt32.CreateUndefined(X3DExternalPrototype24, false, 'loa');
SFInt3230.Appinfo := 'default is no loa';
{ METHOD .AddSFInt32 }
X3DExternalPrototype24.AddSFInt32([SFInt3230]);
SFTime31 := TSFTime.CreateUndefined(X3DExternalPrototype24, false, 'transitionDuration');
SFTime31.Appinfo := 'how many seconds to achieve the pose';
{ METHOD .AddSFTime }
X3DExternalPrototype24.AddSFTime([SFTime31]);
SFNode32 := TSFNode.CreateUndefined(X3DExternalPrototype24, false, 'metadata');
SFNode32.Appinfo := 'single Metadata* node';
{ METHOD .AddSFNode }
X3DExternalPrototype24.AddSFNode([SFNode32]);
SFBool33 := TSFBool.CreateUndefined(X3DExternalPrototype24, false, 'isActive');
SFBool33.Appinfo := 'event indicating when pose transition is active';
{ METHOD .AddSFBool }
X3DExternalPrototype24.AddSFBool([SFBool33]);
SFBool34 := TSFBool.CreateUndefined(X3DExternalPrototype24, false, 'commencePose');
SFBool34.Appinfo := 'this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1';
{ METHOD .AddSFBool }
X3DExternalPrototype24.AddSFBool([SFBool34]);
SFBool35 := TSFBool.CreateUndefined(X3DExternalPrototype24, false, 'resetAllJoints');
SFBool35.Appinfo := 'reset the skeleton to I pose with all joints zeroed';
{ METHOD .AddSFBool }
X3DExternalPrototype24.AddSFBool([SFBool35]);
SFFloat36 := TSFFloat.CreateUndefined(X3DExternalPrototype24, false, 'set_fraction');
SFFloat36.Appinfo := 'allows transition to proceed incrementally from fraction [0..10';
{ METHOD .AddSFFloat }
X3DExternalPrototype24.AddSFFloat([SFFloat36]);
SFTime37 := TSFTime.CreateUndefined(X3DExternalPrototype24, false, 'set_startTime');
SFTime37.Appinfo := 'starts the animation clock';
{ METHOD .AddSFTime }
X3DExternalPrototype24.AddSFTime([SFTime37]);
SFBool38 := TSFBool.CreateUndefined(X3DExternalPrototype24, false, 'isLoaded');
SFBool38.Appinfo := 'possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE';
{ METHOD .AddSFBool }
X3DExternalPrototype24.AddSFBool([SFBool38]);
SFBool39 := TSFBool.CreateUndefined(X3DExternalPrototype24, false, 'traceEnabled');
SFBool39.Appinfo := 'debug trace to Browser output console this is a local prototype field';
{ METHOD .AddSFBool }
X3DExternalPrototype24.AddSFBool([SFBool39]);
end;

procedure InitHAnimPoseExternProtoDeclarePart2;
begin

{ METHOD .AddX3DExternalPrototype }
Group20.AddX3DExternalPrototype([X3DExternalPrototype24]);
Viewpoint40 := TViewpointNode.Create;
Viewpoint40.Description := 'HAnimPoseExternProtoDeclare description';
Viewpoint40.Position := Vector3(0,1,4);
{ METHOD .FdChildren.Add }
Group20.FdChildren.Add(Viewpoint40);
Transform41 := TTransformNode.Create;
Transform41.Translation := Vector3(0,1.5,0);
Anchor42 := TAnchorNode.Create;
Anchor42.Description := 'go to HAnimPoseExternProtoDeclareIndex page';
Anchor42.SetParameter(['target=_blank']);
Anchor42.SetUrl(['https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExternProtoDeclareIndex.html']);
Shape43 := TShapeNode.Create;
Text44 := TTextNode.Create;
Text44.SetText(['Utility scene','HAnimPoseExternProtoDeclare.x3d']);
FontStyle45 := TFontStyleNode.Create;
FontStyle45.Family := ffSANS;
FontStyle45.Justify := fjMIDDLE;
FontStyle45.JustifyMinor := fjMIDDLE;
FontStyle45.Size := 0.15;
FontStyle45.Style := fsBOLD;
{ METHOD .FontStyle }
Text44.FontStyle := FontStyle45;
{ METHOD .Geometry }
Shape43.Geometry := Text44;
Appearance46 := TAppearanceNode.Create;
Material47 := TMaterialNode.Create;
Material47.DiffuseColor := Vector3(0.1,0.3,0.5);
{ METHOD .SetMaterial }
Appearance46.Material := Material47;
{ METHOD .Appearance }
Shape43.Appearance := Appearance46;
{ METHOD .FdChildren.Add }
Anchor42.FdChildren.Add(Shape43);
Shape48 := TShapeNode.Create;
Box49 := TBoxNode.Create;
Box49.Size := Vector3(3.5,0.5,0.001);
{ METHOD .Geometry }
Shape48.Geometry := Box49;
Appearance50 := TAppearanceNode.Create;
Material51 := TMaterialNode.Create;
Material51.Transparency := 1;
{ METHOD .SetMaterial }
Appearance50.Material := Material51;
{ METHOD .Appearance }
Shape48.Appearance := Appearance50;
{ METHOD .FdChildren.Add }
Anchor42.FdChildren.Add(Shape48);
{ METHOD .FdChildren.Add }
Transform41.FdChildren.Add(Anchor42);
{ METHOD .FdChildren.Add }
Group20.FdChildren.Add(Transform41);
end;

procedure InitHAnimPoseExternProtoDeclarePart3;
begin

Transform52 := TTransformNode.Create;
Transform52.Translation := Vector3(0,0.5,0);
Anchor53 := TAnchorNode.Create;
Anchor53.Description := 'go to HAnimPosePrototypeIndex page';
Anchor53.SetParameter(['target=_blank']);
Anchor53.SetUrl(['https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeIndex.html']);
Shape54 := TShapeNode.Create;
Text55 := TTextNode.Create;
Text55.SetText(['This model supports','HAnimPosePrototype.x3d']);
{ METHOD .FontStyle }
Text55.FontStyle := FontStyle45;
{ METHOD .Geometry }
Shape54.Geometry := Text55;
{ METHOD .Appearance }
Shape54.Appearance := Appearance46;
{ METHOD .FdChildren.Add }
Anchor53.FdChildren.Add(Shape54);
{ METHOD .FdChildren.Add }
Transform52.FdChildren.Add(Anchor53);
Shape58 := TShapeNode.Create;
Box59 := TBoxNode.Create;
Box59.Size := Vector3(2.6,0.5,0.001);
{ METHOD .Geometry }
Shape58.Geometry := Box59;
{ METHOD .Appearance }
Shape58.Appearance := Appearance50;
{ METHOD .FdChildren.Add }
Transform52.FdChildren.Add(Shape58);
{ METHOD .FdChildren.Add }
Group20.FdChildren.Add(Transform52);
{ METHOD .AddGroup }
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
