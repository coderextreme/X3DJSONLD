unit HAnimPoseExternProtoDeclare;

interface

uses X3DNodes;

function CreateHAnimPoseExternProtoDeclare: TX3DRootNode;

implementation

uses CastleVectors;

function CreateHAnimPoseExternProtoDeclare: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group20: TGroupNode;
WorldInfo21: TWorldInfoNode;
Background22: TBackgroundNode;
NavigationInfo23: TNavigationInfoNode;
X3DExternalPrototype24: TX3DExternalPrototype;
X3DField25: TX3DField;
X3DField26: TX3DField;
X3DField27: TX3DField;
X3DField28: TX3DField;
X3DField29: TX3DField;
X3DField30: TX3DField;
X3DField31: TX3DField;
X3DField32: TX3DField;
X3DField33: TX3DField;
X3DField34: TX3DField;
X3DField35: TX3DField;
X3DField36: TX3DField;
X3DField37: TX3DField;
X3DField38: TX3DField;
X3DField39: TX3DField;
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
WorldInfo21.SetInfo(['Design to illustrate a potential HAnimPose node']);
WorldInfo21.Title := 'HAnimPoseExternProtoDeclare';
{ .AddChildren }
Group20.AddChildren([WorldInfo21]);
Background22 := TBackgroundNode.Create;
Background22.SetSkyColor([Vector3(0.6,0.6,0.8)]);
{ .AddChildren }
Group20.AddChildren([Background22]);
NavigationInfo23 := TNavigationInfoNode.Create;
{ .AddChildren }
Group20.AddChildren([NavigationInfo23]);
X3DExternalPrototype24 := TX3DExternalPrototype.Create;
X3DExternalPrototype24.NameField := 'HAnimPose';
X3DExternalPrototype24.Appinfo := 'Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values.';
X3DExternalPrototype24.Url := '\"Filename.x3d#HAnimPose\" \"https://some.address.org/Filename.x3d#HAnimPose\"';
X3DField25 := TX3DField.Create;
X3DField25.NameField := 'parentHAnimHumanoid';
X3DField25.AccessType := 'inputOutput';
X3DField25.Appinfo := 'HAnimHumanoid for this Pose to act upon';
X3DField25.Type := 'SFNode';
{ .SetX3DField }
X3DExternalPrototype24.X3DField := X3DField25;
X3DField26 := TX3DField.Create;
X3DField26.NameField := 'name';
X3DField26.AccessType := 'inputOutput';
X3DField26.Appinfo := 'name of this pose';
X3DField26.Type := 'SFString';
{ .AddX3DField }
X3DExternalPrototype24.X3DField := X3DField26;
X3DField27 := TX3DField.Create;
X3DField27.NameField := 'children';
X3DField27.AccessType := 'inputOutput';
X3DField27.Appinfo := 'joint values to apply to HAnimHumanoid';
X3DField27.Type := 'MFNode';
{ initializating Joint nodes (if any) go here }
{ .AddX3DField }
X3DExternalPrototype24.X3DField := X3DField27;
X3DField28 := TX3DField.Create;
X3DField28.NameField := 'description';
X3DField28.AccessType := 'inputOutput';
X3DField28.Appinfo := 'explanation of purpose';
X3DField28.Type := 'SFString';
{ .AddX3DField }
X3DExternalPrototype24.X3DField := X3DField28;
X3DField29 := TX3DField.Create;
X3DField29.NameField := 'enabled';
X3DField29.AccessType := 'inputOutput';
X3DField29.Appinfo := 'default value true';
X3DField29.Type := 'SFBool';
{ .AddX3DField }
X3DExternalPrototype24.X3DField := X3DField29;
X3DField30 := TX3DField.Create;
X3DField30.NameField := 'loa';
X3DField30.AccessType := 'initializeOnly';
X3DField30.Appinfo := 'default is no loa';
X3DField30.Type := 'SFInt32';
{ .AddX3DField }
X3DExternalPrototype24.X3DField := X3DField30;
X3DField31 := TX3DField.Create;
X3DField31.NameField := 'transitionDuration';
X3DField31.AccessType := 'inputOutput';
X3DField31.Appinfo := 'how many seconds to achieve the pose';
X3DField31.Type := 'SFTime';
{ .AddX3DField }
X3DExternalPrototype24.X3DField := X3DField31;
X3DField32 := TX3DField.Create;
X3DField32.NameField := 'metadata';
X3DField32.AccessType := 'inputOutput';
X3DField32.Appinfo := 'single Metadata* node';
X3DField32.Type := 'SFNode';
{ .AddX3DField }
X3DExternalPrototype24.X3DField := X3DField32;
X3DField33 := TX3DField.Create;
X3DField33.NameField := 'isActive';
X3DField33.AccessType := 'outputOnly';
X3DField33.Appinfo := 'event indicating when pose transition is active';
X3DField33.Type := 'SFBool';
{ .AddX3DField }
X3DExternalPrototype24.X3DField := X3DField33;
X3DField34 := TX3DField.Create;
X3DField34.NameField := 'commencePose';
X3DField34.AccessType := 'inputOnly';
X3DField34.Appinfo := 'this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1';
X3DField34.Type := 'SFBool';
{ .AddX3DField }
X3DExternalPrototype24.X3DField := X3DField34;
X3DField35 := TX3DField.Create;
X3DField35.NameField := 'resetAllJoints';
X3DField35.AccessType := 'inputOnly';
X3DField35.Appinfo := 'reset the skeleton to I pose with all joints zeroed';
X3DField35.Type := 'SFBool';
{ .AddX3DField }
X3DExternalPrototype24.X3DField := X3DField35;
X3DField36 := TX3DField.Create;
X3DField36.NameField := 'set_fraction';
X3DField36.AccessType := 'inputOnly';
X3DField36.Appinfo := 'allows transition to proceed incrementally from fraction [0..10';
X3DField36.Type := 'SFFloat';
{ .AddX3DField }
X3DExternalPrototype24.X3DField := X3DField36;
X3DField37 := TX3DField.Create;
X3DField37.NameField := 'set_startTime';
X3DField37.AccessType := 'inputOnly';
X3DField37.Appinfo := 'starts the animation clock';
X3DField37.Type := 'SFTime';
{ .AddX3DField }
X3DExternalPrototype24.X3DField := X3DField37;
X3DField38 := TX3DField.Create;
X3DField38.NameField := 'isLoaded';
X3DField38.AccessType := 'inputOnly';
X3DField38.Appinfo := 'possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE';
X3DField38.Type := 'SFBool';
{ .AddX3DField }
X3DExternalPrototype24.X3DField := X3DField38;
X3DField39 := TX3DField.Create;
X3DField39.NameField := 'traceEnabled';
X3DField39.AccessType := 'inputOutput';
X3DField39.Appinfo := 'debug trace to Browser output console this is a local prototype field';
X3DField39.Type := 'SFBool';
{ .AddX3DField }
X3DExternalPrototype24.X3DField := X3DField39;
{ .AddX3DExternalPrototype }
Group20.X3DExternalPrototype := X3DExternalPrototype24;
Viewpoint40 := TViewpointNode.Create;
Viewpoint40.Description := 'HAnimPoseExternProtoDeclare description';
Viewpoint40.Position := Vector3(0,1,4);
{ .AddChildren }
Group20.AddChildren([Viewpoint40]);
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
FontStyle45.Family := ffSans;
FontStyle45.Justify := fjMiddle;
FontStyle45.JustifyMinor := fjMiddle;
FontStyle45.Size := 0.15;
FontStyle45.Style := fsBold;
{ .SetFontStyle }
Text44.FontStyle := FontStyle45;
{ .SetGeometry }
Shape43.Geometry := Text44;
Appearance46 := TAppearanceNode.Create;
Material47 := TMaterialNode.Create;
Material47.DiffuseColor := Vector3(0.1,0.3,0.5);
{ .SetMaterial }
Appearance46.Material := Material47;
{ .SetAppearance }
Shape43.Appearance := Appearance46;
{ .AddChildren }
Anchor42.AddChildren([Shape43]);
Shape48 := TShapeNode.Create;
Box49 := TBoxNode.Create;
Box49.Size := Vector3(3.5,0.5,0.001);
{ .SetGeometry }
Shape48.Geometry := Box49;
Appearance50 := TAppearanceNode.Create;
Material51 := TMaterialNode.Create;
Material51.Transparency := 1;
{ .SetMaterial }
Appearance50.Material := Material51;
{ .SetAppearance }
Shape48.Appearance := Appearance50;
{ .AddChildren }
Anchor42.AddChildren([Shape48]);
{ .AddChildren }
Transform41.AddChildren([Anchor42]);
{ .AddChildren }
Group20.AddChildren([Transform41]);
Transform52 := TTransformNode.Create;
Transform52.Translation := Vector3(0,0.5,0);
Anchor53 := TAnchorNode.Create;
Anchor53.Description := 'go to HAnimPosePrototypeIndex page';
Anchor53.SetParameter(['target=_blank']);
Anchor53.SetUrl(['https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeIndex.html']);
Shape54 := TShapeNode.Create;
Text55 := TTextNode.Create;
Text55.SetText(['This model supports','HAnimPosePrototype.x3d']);
FontStyle56 := FontStyle45;
{ .SetFontStyle }
Text55.FontStyle := FontStyle56;
{ .SetGeometry }
Shape54.Geometry := Text55;
Appearance57 := Appearance46;
{ .SetAppearance }
Shape54.Appearance := Appearance57;
{ .AddChildren }
Anchor53.AddChildren([Shape54]);
{ .AddChildren }
Transform52.AddChildren([Anchor53]);
Shape58 := TShapeNode.Create;
Box59 := TBoxNode.Create;
Box59.Size := Vector3(2.6,0.5,0.001);
{ .SetGeometry }
Shape58.Geometry := Box59;
Appearance60 := Appearance50;
{ .SetAppearance }
Shape58.Appearance := Appearance60;
{ .AddChild }
Transform52.AddChildren([Shape58]);
{ .AddChildren }
Group20.AddChildren([Transform52]);
{ .AddGroup }
X3D0.AddChildren([Group20]);
Result := X3D0;
end;

begin
end.
