function HAnimPoseExternProtoDeclare: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group20: TGroupNode;
WorldInfo21: TWorldInfoNode;
Background22: TBackgroundNode;
NavigationInfo23: TNavigationInfoNode;
ExternProtoDeclare24: TExternProtoDeclareNode;
field25: TfieldNode;
field26: TfieldNode;
field27: TfieldNode;
field28: TfieldNode;
field29: TfieldNode;
field30: TfieldNode;
field31: TfieldNode;
field32: TfieldNode;
field33: TfieldNode;
field34: TfieldNode;
field35: TfieldNode;
field36: TfieldNode;
field37: TfieldNode;
field38: TfieldNode;
field39: TfieldNode;
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
X3D0.Meta['modified'] := '14 December 2025';
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
ExternProtoDeclare24 := TExternProtoDeclareNode.Create;
ExternProtoDeclare24.NameField := 'HAnimPose';
ExternProtoDeclare24.Appinfo := 'Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values.';
ExternProtoDeclare24.SetUrl(['Filename.x3d#HAnimPose','https://some.address.org/Filename.x3d#HAnimPose']);
field25 := TfieldNode.Create;
field25.NameField := 'parentHAnimHumanoid';
field25.AccessType := 'inputOutput';
field25.Appinfo := 'HAnimHumanoid for this Pose to act upon';
field25.Type := 'SFNode';
{ .AddField }
ExternProtoDeclare24.Field := field25;
field26 := TfieldNode.Create;
field26.NameField := 'name';
field26.AccessType := 'inputOutput';
field26.Appinfo := 'name of this pose';
field26.Type := 'SFString';
{ .AddField }
ExternProtoDeclare24.Field := field26;
field27 := TfieldNode.Create;
field27.NameField := 'children';
field27.AccessType := 'inputOutput';
field27.Appinfo := 'joint values to apply to HAnimHumanoid';
field27.Type := 'MFNode';
{ initializating Joint nodes (if any) go here }
{ .AddField }
ExternProtoDeclare24.Field := field27;
field28 := TfieldNode.Create;
field28.NameField := 'description';
field28.AccessType := 'inputOutput';
field28.Appinfo := 'explanation of purpose';
field28.Type := 'SFString';
{ .AddField }
ExternProtoDeclare24.Field := field28;
field29 := TfieldNode.Create;
field29.NameField := 'enabled';
field29.AccessType := 'inputOutput';
field29.Appinfo := 'default value true';
field29.Type := 'SFBool';
{ .AddField }
ExternProtoDeclare24.Field := field29;
field30 := TfieldNode.Create;
field30.NameField := 'loa';
field30.AccessType := 'initializeOnly';
field30.Appinfo := 'default is no loa';
field30.Type := 'SFInt32';
{ .AddField }
ExternProtoDeclare24.Field := field30;
field31 := TfieldNode.Create;
field31.NameField := 'transitionDuration';
field31.AccessType := 'inputOutput';
field31.Appinfo := 'how many seconds to achieve the pose';
field31.Type := 'SFTime';
{ .AddField }
ExternProtoDeclare24.Field := field31;
field32 := TfieldNode.Create;
field32.NameField := 'metadata';
field32.AccessType := 'inputOutput';
field32.Appinfo := 'single Metadata* node';
field32.Type := 'SFNode';
{ .AddField }
ExternProtoDeclare24.Field := field32;
field33 := TfieldNode.Create;
field33.NameField := 'isActive';
field33.AccessType := 'outputOnly';
field33.Appinfo := 'event indicating when pose transition is active';
field33.Type := 'SFBool';
{ .AddField }
ExternProtoDeclare24.Field := field33;
field34 := TfieldNode.Create;
field34.NameField := 'commencePose';
field34.AccessType := 'inputOnly';
field34.Appinfo := 'this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1';
field34.Type := 'SFBool';
{ .AddField }
ExternProtoDeclare24.Field := field34;
field35 := TfieldNode.Create;
field35.NameField := 'resetAllJoints';
field35.AccessType := 'inputOnly';
field35.Appinfo := 'reset the skeleton to I pose with all joints zeroed';
field35.Type := 'SFBool';
{ .AddField }
ExternProtoDeclare24.Field := field35;
field36 := TfieldNode.Create;
field36.NameField := 'set_fraction';
field36.AccessType := 'inputOnly';
field36.Appinfo := 'allows transition to proceed incrementally from fraction [0..10';
field36.Type := 'SFFloat';
{ .AddField }
ExternProtoDeclare24.Field := field36;
field37 := TfieldNode.Create;
field37.NameField := 'set_startTime';
field37.AccessType := 'inputOnly';
field37.Appinfo := 'starts the animation clock';
field37.Type := 'SFTime';
{ .AddField }
ExternProtoDeclare24.Field := field37;
field38 := TfieldNode.Create;
field38.NameField := 'isLoaded';
field38.AccessType := 'inputOnly';
field38.Appinfo := 'possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE';
field38.Type := 'SFBool';
{ .AddField }
ExternProtoDeclare24.Field := field38;
field39 := TfieldNode.Create;
field39.NameField := 'traceEnabled';
field39.AccessType := 'inputOutput';
field39.Appinfo := 'debug trace to Browser output console this is a local prototype field';
field39.Type := 'SFBool';
{ .AddField }
ExternProtoDeclare24.Field := field39;
{ .AddChildren }
Group20.AddChildren([ExternProtoDeclare24]);
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
FontStyle45.Style := 'BOLD';
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
FontStyle56 := TFontStyleNode.Create;
FontStyle56 := FontStyle45;
{ .SetFontStyle }
Text55.FontStyle := FontStyle56;
{ .SetGeometry }
Shape54.Geometry := Text55;
Appearance57 := TAppearanceNode.Create;
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
Appearance60 := TAppearanceNode.Create;
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
