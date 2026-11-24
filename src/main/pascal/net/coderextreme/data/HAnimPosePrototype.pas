unit HAnimPosePrototype;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateHAnimPosePrototype: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group42: TGroupNode;
WorldInfo43: TWorldInfoNode;
Background44: TBackgroundNode;
NavigationInfo45: TNavigationInfoNode;
Group46: TGroupNode;
Inline47: TInlineNode;
IMPORT48: TIMPORTNode;
LoadSensor49: TLoadSensorNode;
Inline50: TInlineNode;
X3DPrototype51: TX3DPrototype;
X3DInterfaceDeclaration52: TX3DInterfaceDeclaration;
SFNode53: TSFNode;
SFString54: TSFString;
MFNode55: TMFNode;
SFString56: TSFString;
SFBool57: TSFBool;
SFInt3258: TSFInt32;
SFTime59: TSFTime;
SFNode60: TSFNode;
SFBool61: TSFBool;
SFBool62: TSFBool;
SFBool63: TSFBool;
SFFloat64: TSFFloat;
SFTime65: TSFTime;
SFBool66: TSFBool;
SFBool67: TSFBool;
X3DPrototype68: TX3DPrototype;
TimeSensor69: TTimeSensorNode;
TimeSensor71: TTimeSensorNode;
Group73: TGroupNode;
Group74: TGroupNode;
Script75: TScriptNode;
SFNode76: TSFNode;
SFString77: TSFString;
SFInt3278: TSFInt32;
SFString79: TSFString;
SFBool80: TSFBool;
SFBool81: TSFBool;
MFNode82: TMFNode;
SFTime83: TSFTime;
SFBool84: TSFBool;
SFFloat85: TSFFloat;
SFTime86: TSFTime;
SFBool87: TSFBool;
SFBool88: TSFBool;
SFInt3289: TSFInt32;
SFInt3290: TSFInt32;
MFNode91: TMFNode;
Viewpoint93: TViewpointNode;
X3DPrototype94: TX3DPrototypeNode;
SFString95: TSFString;
SFBool96: TSFBool;
SFNode97: TSFNode;
HAnimHumanoid98: THAnimHumanoidNode;
SFInt3299: TSFInt32;
SFString100: TSFString;
MFNode101: TMFNode;
HAnimJoint102: THAnimJointNode;
HAnimJoint103: THAnimJointNode;
SFTime104: TSFTime;
X3DPrototype105: TX3DPrototypeNode;
SFString106: TSFString;
SFBool107: TSFBool;
SFNode108: TSFNode;
HAnimHumanoid109: THAnimHumanoidNode;
SFInt32110: TSFInt32;
SFString111: TSFString;
MFNode112: TMFNode;
HAnimJoint113: THAnimJointNode;
HAnimJoint114: THAnimJointNode;
SFTime115: TSFTime;
SFBool116: TSFBool;
X3DPrototype117: TX3DPrototypeNode;
SFString118: TSFString;
SFBool119: TSFBool;
SFNode120: TSFNode;
HAnimHumanoid121: THAnimHumanoidNode;
SFInt32122: TSFInt32;
SFString123: TSFString;
MFNode124: TMFNode;
HAnimJoint125: THAnimJointNode;
HAnimJoint126: THAnimJointNode;
HAnimJoint127: THAnimJointNode;
HAnimJoint128: THAnimJointNode;
HAnimJoint129: THAnimJointNode;
HAnimJoint130: THAnimJointNode;
HAnimJoint131: THAnimJointNode;
HAnimJoint132: THAnimJointNode;
HAnimJoint133: THAnimJointNode;
HAnimJoint134: THAnimJointNode;
HAnimJoint135: THAnimJointNode;
HAnimJoint136: THAnimJointNode;
HAnimJoint137: THAnimJointNode;
HAnimJoint138: THAnimJointNode;
HAnimJoint139: THAnimJointNode;
HAnimJoint140: THAnimJointNode;
SFTime141: TSFTime;
SFBool142: TSFBool;
X3DPrototype143: TX3DPrototypeNode;
SFString144: TSFString;
SFBool145: TSFBool;
SFNode146: TSFNode;
HAnimHumanoid147: THAnimHumanoidNode;
SFInt32148: TSFInt32;
SFString149: TSFString;
MFNode150: TMFNode;
SFTime151: TSFTime;
SFBool152: TSFBool;
X3DPrototype153: TX3DPrototypeNode;
SFString154: TSFString;
SFBool155: TSFBool;
SFString156: TSFString;
SFTime157: TSFTime;
SFBool158: TSFBool;
X3DPrototype159: TX3DPrototypeNode;
SFString160: TSFString;
SFBool161: TSFBool;
SFNode162: TSFNode;
HAnimHumanoid163: THAnimHumanoidNode;
SFInt32164: TSFInt32;
SFString165: TSFString;
MFNode166: TMFNode;
HAnimJoint167: THAnimJointNode;
SFTime168: TSFTime;
SFBool169: TSFBool;
X3DPrototype170: TX3DPrototypeNode;
SFString171: TSFString;
SFBool172: TSFBool;
SFNode173: TSFNode;
HAnimHumanoid174: THAnimHumanoidNode;
SFInt32175: TSFInt32;
SFString176: TSFString;
MFNode177: TMFNode;
HAnimJoint178: THAnimJointNode;
SFTime179: TSFTime;
SFBool180: TSFBool;
Group181: TGroupNode;
Transform182: TTransformNode;
Shape183: TShapeNode;
Text184: TTextNode;
FontStyle185: TFontStyleNode;
Appearance186: TAppearanceNode;
Material187: TMaterialNode;
Transform188: TTransformNode;
Shape189: TShapeNode;
Text190: TTextNode;
FontStyle191: TFontStyleNode;
Appearance192: TAppearanceNode;
Shape193: TShapeNode;
Appearance194: TAppearanceNode;
Material195: TMaterialNode;
Box196: TBoxNode;
TouchSensor197: TTouchSensorNode;
Transform199: TTransformNode;
Shape200: TShapeNode;
Text201: TTextNode;
FontStyle202: TFontStyleNode;
Appearance203: TAppearanceNode;
Shape204: TShapeNode;
Appearance205: TAppearanceNode;
Box206: TBoxNode;
TouchSensor207: TTouchSensorNode;
Transform209: TTransformNode;
Shape210: TShapeNode;
Text211: TTextNode;
FontStyle212: TFontStyleNode;
Appearance213: TAppearanceNode;
Shape214: TShapeNode;
Appearance215: TAppearanceNode;
Box216: TBoxNode;
TouchSensor217: TTouchSensorNode;
Transform219: TTransformNode;
Shape220: TShapeNode;
Text221: TTextNode;
FontStyle222: TFontStyleNode;
Appearance223: TAppearanceNode;
Shape224: TShapeNode;
Appearance225: TAppearanceNode;
Box226: TBoxNode;
TouchSensor227: TTouchSensorNode;
Transform229: TTransformNode;
Shape230: TShapeNode;
Text231: TTextNode;
FontStyle232: TFontStyleNode;
Appearance233: TAppearanceNode;
Shape234: TShapeNode;
Appearance235: TAppearanceNode;
Box236: TBoxNode;
TouchSensor237: TTouchSensorNode;
Transform239: TTransformNode;
Shape240: TShapeNode;
Text241: TTextNode;
FontStyle242: TFontStyleNode;
Appearance243: TAppearanceNode;
Shape244: TShapeNode;
Appearance245: TAppearanceNode;
Box246: TBoxNode;
TouchSensor247: TTouchSensorNode;
Transform249: TTransformNode;
Shape250: TShapeNode;
Text251: TTextNode;
FontStyle252: TFontStyleNode;
Appearance253: TAppearanceNode;
Material254: TMaterialNode;
Shape255: TShapeNode;
Appearance256: TAppearanceNode;
Box257: TBoxNode;
TouchSensor258: TTouchSensorNode;
TimeSensor259: TTimeSensorNode;
ScalarInterpolator260: TScalarInterpolatorNode;
Transform264: TTransformNode;
Shape265: TShapeNode;
Text266: TTextNode;
FontStyle267: TFontStyleNode;
Appearance268: TAppearanceNode;
Shape269: TShapeNode;
Appearance270: TAppearanceNode;
Box271: TBoxNode;
TouchSensor272: TTouchSensorNode;
Group274: TGroupNode;
Transform282: TTransformNode;
Inline283: TInlineNode;
Transform284: TTransformNode;
Shape285: TShapeNode;
Text286: TTextNode;
FontStyle287: TFontStyleNode;
Appearance288: TAppearanceNode;
Material289: TMaterialNode;

procedure InitHAnimPosePrototypePart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'HAnimPosePrototype.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Define an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed.';
{ METHOD .Meta }
X3D0.Meta['info'] := 'This model also takes advantage of Inline/IMPORT capabilities (equivalent to USE node) and thus avoids fully copying a large, complex HAnimHumanoid model. Multiple HAnimHumanoid models have been tested satisfactorily, for HAnim version 1 (X3d 3) AND HAnim version 2 (X3D 4).';
{ METHOD .Meta }
X3D0.Meta['created'] := '2 October 2025';
{ METHOD .Meta }
X3D0.Meta['modified'] := '26 April 2026';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Don Brutzman';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Joe Williams';
{ METHOD .Meta }
X3D0.Meta['contributor'] := 'Holger Seelig for X_ITE, Sunrize on Windows, scripting guidance, and Inline IMPORT functionality as node-reference equivalent to USE';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'HAnimPosePrototype.console.txt';
{ METHOD .Meta }
X3D0.Meta['MovingImage'] := 'demonstration video https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeDemoVideo.mp4';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'HAnimPoseExampleTouchDown.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'HAnimPoseExampleTouchDownFaceLeftAPose.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'images/HAnimPoseExampleBoxMan1.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'images/HAnimPoseExampleBoxMan2.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'images/HAnimPoseExampleJoeKick.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'images/HAnimPoseExampleJoeSkeletonSkinSite.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'images/HAnimPoseExampleKoreanCharacter01Jin.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'images/HAnimPoseExampleKoreanCharacter02Chul.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'images/HAnimPoseExampleKoreanCharacter03Hyun.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'images/HAnimPoseExampleKoreanCharacter04Young.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'images/HAnimPoseExampleKoreanCharacter05Ju.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'images/HAnimPoseExampleKoreanCharacter06Ga.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'images/HAnimPoseExampleKoreanCharacter07No.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'images/HAnimPoseExampleKoreanCharacter08Da.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'images/HAnimPoseExampleKoreanCharacter09Ru.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'images/HAnimPoseExampleKoreanCharacter10Mi.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'images/HAnimPoseExampleKoreanCharacter11Min.png';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'images/HAnimPoseExampleKoreanCharacter12Sun.png';
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
X3D0.Meta['reference'] := 'earlier version of this prototype: originals/HAnimPosePreliminary.x3d';
end;

procedure InitHAnimPosePrototypePart1;
begin

{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototype.x3d';
{ METHOD .Meta }
X3D0.Meta['license'] := 'https://www.web3d.org/x3d/content/examples/license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group42 := TGroupNode.Create;;
WorldInfo43 := TWorldInfoNode.Create;;
WorldInfo43.SetInfo(['Design to illustrate a potential HAnimPose node']);
WorldInfo43.Title := 'HAnimPosePrototype.x3d';
{ METHOD .FdChildren.Add }
Group42.FdChildren.Add(WorldInfo43);
Background44 := TBackgroundNode.Create;;
Background44.SetSkyColor([Vector3(0.8,0.8,1)]);
{ METHOD .FdChildren.Add }
Group42.FdChildren.Add(Background44);
NavigationInfo45 := TNavigationInfoNode.Create;;
{ METHOD .FdChildren.Add }
Group42.FdChildren.Add(NavigationInfo45);
Group46 := TGroupNode.Create;;
{ Multiple HAnimHumanoid Inline/IMPORT models are available to support testing: Characters/ JinLOA1 JinLOA2 JinLOA3 JinLOA4 ../Skin/JoeKick ../Skin/JoeSkeletonSkinSite ../Skin/BoxMan1 ../Skin/BoxMan2 }
{ Also tested satisfactorily: KoreanCharacter01Jin KoreanCharacter02Chul KoreanCharacter03Hyun KoreanCharacter04Young KoreanCharacter05Ju KoreanCharacter06Ga KoreanCharacter07No KoreanCharacter08Da KoreanCharacter09Ru KoreanCharacter10Mi KoreanCharacter11Min KoreanCharacter12Sun }
Inline47 := TInlineNode.Create;;
Inline47.Description := 'remote HAnimHumanoid for IMPORT';
Inline47.SetUrl(['../Skin/BoxMan2.x3d','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/BoxMan2.x3d']);
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(Inline47);
{ Note that the following importedDEF must match the EXPORT name found in remote file }
IMPORT48 := TIMPORTNode.Create;;
IMPORT48.AS := 'HumanoidImported';
IMPORT48.ImportedDEF := 'BoxMan2';
IMPORT48.InlineDEF := 'HumanoidInline';
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(IMPORT48);
LoadSensor49 := TLoadSensorNode.Create;;
LoadSensor49.TimeOut := 2;
{ METHOD .FdChildren.Add }
LoadSensor49.FdChildren.Add(Inline47);
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(LoadSensor49);
{ METHOD .FdChildren.Add }
Group42.FdChildren.Add(Group46);
X3DPrototype51 := TX3DPrototype.Create;;
X3DPrototype51.Appinfo := 'Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values.';
end;

procedure InitHAnimPosePrototypePart2;
begin

X3DInterfaceDeclaration52 := TX3DInterfaceDeclaration.Create(nil);;
SFNode53 := TSFNode.CreateUndefined(X3DInterfaceDeclaration52, false, 'parentHAnimHumanoid');
SFNode53.Appinfo := 'HAnimHumanoid for this Pose to act upon';
{ HAnimHumanoid initialization node goes here, this field is only used in the prototype implementation }
{ METHOD .AddSFNode }
X3DInterfaceDeclaration52.AddSFNode([SFNode53]);
SFString54 := TSFString.CreateUndefined(X3DInterfaceDeclaration52, false, 'name');
SFString54.Appinfo := 'name of this pose';
SFString54.Value := 'newPoseName';
{ METHOD .AddSFString }
X3DInterfaceDeclaration52.AddSFString([SFString54]);
MFNode55 := TMFNode.CreateUndefined(X3DInterfaceDeclaration52, false, 'children');
MFNode55.Appinfo := 'joint values to apply to HAnimHumanoid';
{ initializating Joint nodes (if any) go here }
{ METHOD .AddMFNode }
X3DInterfaceDeclaration52.AddMFNode([MFNode55]);
SFString56 := TSFString.CreateUndefined(X3DInterfaceDeclaration52, false, 'description');
SFString56.Appinfo := 'explanation of purpose';
{ METHOD .AddSFString }
X3DInterfaceDeclaration52.AddSFString([SFString56]);
SFBool57 := TSFBool.CreateUndefined(X3DInterfaceDeclaration52, false, 'enabled');
SFBool57.Appinfo := 'default value true';
SFBool57.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration52.AddSFBool([SFBool57]);
SFInt3258 := TSFInt32.CreateUndefined(X3DInterfaceDeclaration52, false, 'loa');
SFInt3258.Appinfo := 'default is no loa';
SFInt3258.Value := '-1';
{ METHOD .AddSFInt32 }
X3DInterfaceDeclaration52.AddSFInt32([SFInt3258]);
SFTime59 := TSFTime.CreateUndefined(X3DInterfaceDeclaration52, false, 'transitionDuration');
SFTime59.Appinfo := 'how many seconds to achieve the pose';
SFTime59.Value := '0';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration52.AddSFTime([SFTime59]);
SFNode60 := TSFNode.CreateUndefined(X3DInterfaceDeclaration52, false, 'metadata');
SFNode60.Appinfo := 'single Metadata* node';
{ METHOD .AddSFNode }
X3DInterfaceDeclaration52.AddSFNode([SFNode60]);
SFBool61 := TSFBool.CreateUndefined(X3DInterfaceDeclaration52, false, 'isActive');
SFBool61.Appinfo := 'event indicating when pose transition is active';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration52.AddSFBool([SFBool61]);
SFBool62 := TSFBool.CreateUndefined(X3DInterfaceDeclaration52, false, 'commencePose');
SFBool62.Appinfo := 'this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration52.AddSFBool([SFBool62]);
SFBool63 := TSFBool.CreateUndefined(X3DInterfaceDeclaration52, false, 'resetAllJoints');
SFBool63.Appinfo := 'reset the skeleton to I pose with all joints zeroed';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration52.AddSFBool([SFBool63]);
SFFloat64 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration52, false, 'set_fraction');
end;

procedure InitHAnimPosePrototypePart3;
begin

SFFloat64.Appinfo := 'allows transition to proceed incrementally from fraction [0..10';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration52.AddSFFloat([SFFloat64]);
SFTime65 := TSFTime.CreateUndefined(X3DInterfaceDeclaration52, false, 'set_startTime');
SFTime65.Appinfo := 'starts the animation clock';
{ METHOD .AddSFTime }
X3DInterfaceDeclaration52.AddSFTime([SFTime65]);
SFBool66 := TSFBool.CreateUndefined(X3DInterfaceDeclaration52, false, 'isLoaded');
SFBool66.Appinfo := 'possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration52.AddSFBool([SFBool66]);
SFBool67 := TSFBool.CreateUndefined(X3DInterfaceDeclaration52, false, 'traceEnabled');
SFBool67.Appinfo := 'debug trace to Browser output console this is a local prototype field';
SFBool67.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration52.AddSFBool([SFBool67]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype51.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration52]);
X3DPrototype68 := TX3DPrototype.Create;;
TimeSensor69 := TTimeSensorNode.Create;;
TimeSensor69.Description := 'control timing of pose animation when triggered';
{ METHOD .AddTimeSensor }
X3DPrototype68.AddTimeSensor([TimeSensor69]);
TimeSensor71 := TTimeSensorNode.Create;;
TimeSensor71.Description := 'control timing of skeleton reset to \"A\" pose when triggered';
{ METHOD .AddTimeSensor }
X3DPrototype68.AddTimeSensor([TimeSensor71]);
Group73 := TGroupNode.Create;;
{ interpolators generated by prototype script appear here at runtime }
{ METHOD .AddGroup }
X3DPrototype68.AddChildren([Group73]);
Group74 := TGroupNode.Create;;
{ interpolators generated by prototype script appear here at runtime }
{ METHOD .AddGroup }
X3DPrototype68.AddChildren([Group74]);
Script75 := TScriptNode.Create;;
Script75.DirectOutput := True;
Script75.SetUrl(['HAnimPosePrototypeScript.js','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeScript.js']);
SFNode76 := TSFNode.CreateUndefined(Script75, false, 'parentHAnimHumanoid');
SFNode76.Appinfo := 'Humanoid for this Pose to act upon';
{ initialization node (if any) goes here }
{ METHOD .Fd.AddCustomField }
Script75.AddCustomField(SFNode76);
SFString77 := TSFString.CreateUndefined(Script75, false, 'name');
SFString77.Appinfo := 'name of this pose';
{ METHOD .Fd.AddCustomField }
Script75.AddCustomField(SFString77);
SFInt3278 := TSFInt32.CreateUndefined(Script75, false, 'loa');
end;

procedure InitHAnimPosePrototypePart4;
begin

SFInt3278.Appinfo := 'default is no loa';
{ METHOD .Fd.AddCustomField }
Script75.AddCustomField(SFInt3278);
SFString79 := TSFString.CreateUndefined(Script75, false, 'description');
SFString79.Appinfo := 'explanation of purpose';
{ METHOD .Fd.AddCustomField }
Script75.AddCustomField(SFString79);
SFBool80 := TSFBool.CreateUndefined(Script75, false, 'enabled');
SFBool80.Appinfo := 'default value true';
{ METHOD .Fd.AddCustomField }
Script75.AddCustomField(SFBool80);
SFBool81 := TSFBool.CreateUndefined(Script75, false, 'resetAllJoints');
SFBool81.Appinfo := 'reset the skeleton to I pose with all joints zeroed';
{ METHOD .Fd.AddCustomField }
Script75.AddCustomField(SFBool81);
MFNode82 := TMFNode.CreateUndefined(Script75, false, 'children');
MFNode82.Appinfo := 'joint values to apply to HAnimHumanoid';
{ initializating Joint nodes (if any) go here }
{ METHOD .Fd.AddCustomField }
Script75.AddCustomField(MFNode82);
SFTime83 := TSFTime.CreateUndefined(Script75, false, 'transitionDuration');
SFTime83.Appinfo := 'how many seconds to achieve the pose';
{ METHOD .Fd.AddCustomField }
Script75.AddCustomField(SFTime83);
SFBool84 := TSFBool.CreateUndefined(Script75, false, 'commencePose');
SFBool84.Appinfo := 'this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1';
{ METHOD .Fd.AddCustomField }
Script75.AddCustomField(SFBool84);
SFFloat85 := TSFFloat.CreateUndefined(Script75, false, 'set_fraction');
SFFloat85.Appinfo := 'allows transition to proceed incrementally from fraction [0..10';
{ METHOD .Fd.AddCustomField }
Script75.AddCustomField(SFFloat85);
SFTime86 := TSFTime.CreateUndefined(Script75, false, 'set_startTime');
SFTime86.Appinfo := 'starts the animation clock';
{ METHOD .Fd.AddCustomField }
Script75.AddCustomField(SFTime86);
SFBool87 := TSFBool.CreateUndefined(Script75, false, 'isLoaded');
SFBool87.Appinfo := 'possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE';
{ METHOD .Fd.AddCustomField }
Script75.AddCustomField(SFBool87);
SFBool88 := TSFBool.CreateUndefined(Script75, false, 'traceEnabled');
SFBool88.Appinfo := 'debug trace to Browser output console';
{ METHOD .Fd.AddCustomField }
Script75.AddCustomField(SFBool88);
SFInt3289 := TSFInt32.CreateUndefined(Script75, false, 'numberPoseJoints');
SFInt3289.Appinfo := 'number of joints found in children field';
SFInt3289.Value := '0';
{ METHOD .Fd.AddCustomField }
Script75.AddCustomField(SFInt3289);
SFInt3290 := TSFInt32.CreateUndefined(Script75, false, 'numberSkeletonJoints');
SFInt3290.Appinfo := 'number of joints found in Humanoid';
SFInt3290.Value := '0';
{ METHOD .Fd.AddCustomField }
Script75.AddCustomField(SFInt3290);
end;

procedure InitHAnimPosePrototypePart5;
begin

MFNode91 := TMFNode.CreateUndefined(Script75, false, 'jointOrientationInterpolators');
MFNode91.Appinfo := 'OrientationInterpolator node array matching number of children';
{ initializating Joint nodes (if any) go here }
{ METHOD .Fd.AddCustomField }
Script75.AddCustomField(MFNode91);
{ METHOD .AddScript }
X3DPrototype68.AddScript([Script75]);
{ METHOD .AddX3DPrototype }
X3DPrototype51.AddX3DPrototype([X3DPrototype68]);
{ METHOD .AddX3DPrototype }
Group42.AddX3DPrototype([X3DPrototype51]);
Viewpoint93 := TViewpointNode.Create;;
Viewpoint93.Description := 'HAnimPose for HumanoidInline IMPORT model';
Viewpoint93.Position := Vector3(0,1,4);
{ METHOD .FdChildren.Add }
Group42.FdChildren.Add(Viewpoint93);
{ no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc... }
X3DPrototype94 := TX3DPrototypeNode;
SFString95 := TSFString.CreateUndefined(X3DPrototype94, false, 'name');
SFString95.Value := 'T';
{ METHOD .AddSFString }
X3DPrototype94.AddSFString([SFString95]);
SFBool96 := TSFBool.CreateUndefined(X3DPrototype94, false, 'enabled');
SFBool96.Value := 'true';
{ METHOD .AddSFBool }
X3DPrototype94.AddSFBool([SFBool96]);
SFNode97 := TSFNode.CreateUndefined(X3DPrototype94, false, 'parentHAnimHumanoid');
{ HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model) }
{ debug test case for incorrect node type: <HAnimJoint DEF="ErrorDiagnosticsTest" USE='HumanoidImported'/> }
HAnimHumanoid98 := 'HAnimHumanoid98';
{ METHOD .Fd.Value }
SFNode97.Value := HAnimHumanoid98;
{ METHOD .AddSFNode }
X3DPrototype94.AddSFNode([SFNode97]);
SFInt3299 := TSFInt32.CreateUndefined(X3DPrototype94, false, 'loa');
SFInt3299.Value := '1';
{ METHOD .AddSFInt32 }
X3DPrototype94.AddSFInt32([SFInt3299]);
SFString100 := TSFString.CreateUndefined(X3DPrototype94, false, 'description');
SFString100.Value := 'arms stretched outward and level similar to letter T';
{ METHOD .AddSFString }
X3DPrototype94.AddSFString([SFString100]);
MFNode101 := TMFNode.CreateUndefined(X3DPrototype94, false, 'children');
HAnimJoint102 := THAnimJointNode.Create;;
HAnimJoint102.Description := 'left shoulder';
HAnimJoint102.Rotation := Vector4(0,0,1,1.57);
{ METHOD .AddHAnimJoint }
MFNode101.AddHAnimJoint([HAnimJoint102]);
HAnimJoint103 := THAnimJointNode.Create;;
HAnimJoint103.Description := 'right shoulder';
HAnimJoint103.Rotation := Vector4(0,0,-1,1.57);
{ METHOD .AddHAnimJoint }
MFNode101.AddHAnimJoint([HAnimJoint103]);
{ test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/ }
{ METHOD .AddMFNode }
X3DPrototype94.AddMFNode([MFNode101]);
end;

procedure InitHAnimPosePrototypePart6;
begin

SFTime104 := TSFTime.CreateUndefined(X3DPrototype94, false, 'transitionDuration');
SFTime104.Value := '1.3';
{ METHOD .AddSFTime }
X3DPrototype94.AddSFTime([SFTime104]);
{ METHOD .AddX3DPrototype }
Group42.AddX3DPrototype([X3DPrototype94]);
X3DPrototype105 := TX3DPrototypeNode;
SFString106 := TSFString.CreateUndefined(X3DPrototype105, false, 'name');
SFString106.Value := 'A';
{ METHOD .AddSFString }
X3DPrototype105.AddSFString([SFString106]);
SFBool107 := TSFBool.CreateUndefined(X3DPrototype105, false, 'enabled');
SFBool107.Value := 'true';
{ METHOD .AddSFBool }
X3DPrototype105.AddSFBool([SFBool107]);
SFNode108 := TSFNode.CreateUndefined(X3DPrototype105, false, 'parentHAnimHumanoid');
{ HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model) }
{ METHOD .Fd.Value }
SFNode108.Value := HAnimHumanoid98;
{ METHOD .AddSFNode }
X3DPrototype105.AddSFNode([SFNode108]);
SFInt32110 := TSFInt32.CreateUndefined(X3DPrototype105, false, 'loa');
SFInt32110.Value := '1';
{ METHOD .AddSFInt32 }
X3DPrototype105.AddSFInt32([SFInt32110]);
SFString111 := TSFString.CreateUndefined(X3DPrototype105, false, 'description');
SFString111.Value := 'arms stretched outward and downward similar to letter A';
{ METHOD .AddSFString }
X3DPrototype105.AddSFString([SFString111]);
MFNode112 := TMFNode.CreateUndefined(X3DPrototype105, false, 'children');
HAnimJoint113 := THAnimJointNode.Create;;
HAnimJoint113.Description := 'left shoulder';
HAnimJoint113.Rotation := Vector4(0,0,1,0.5);
{ METHOD .AddHAnimJoint }
MFNode112.AddHAnimJoint([HAnimJoint113]);
HAnimJoint114 := THAnimJointNode.Create;;
HAnimJoint114.Description := 'right shoulder';
HAnimJoint114.Rotation := Vector4(0,0,-1,0.5);
{ METHOD .AddHAnimJoint }
MFNode112.AddHAnimJoint([HAnimJoint114]);
{ METHOD .AddMFNode }
X3DPrototype105.AddMFNode([MFNode112]);
SFTime115 := TSFTime.CreateUndefined(X3DPrototype105, false, 'transitionDuration');
SFTime115.Value := '1.2';
{ METHOD .AddSFTime }
X3DPrototype105.AddSFTime([SFTime115]);
SFBool116 := TSFBool.CreateUndefined(X3DPrototype105, false, 'traceEnabled');
SFBool116.Value := 'true';
{ METHOD .AddSFBool }
X3DPrototype105.AddSFBool([SFBool116]);
{ METHOD .AddX3DPrototype }
Group42.AddX3DPrototype([X3DPrototype105]);
X3DPrototype117 := TX3DPrototypeNode;
end;

procedure InitHAnimPosePrototypePart7;
begin

{ thanks Joe }
SFString118 := TSFString.CreateUndefined(X3DPrototype117, false, 'name');
SFString118.Value := 'TouchDown';
{ METHOD .AddSFString }
X3DPrototype117.AddSFString([SFString118]);
SFBool119 := TSFBool.CreateUndefined(X3DPrototype117, false, 'enabled');
SFBool119.Value := 'true';
{ METHOD .AddSFBool }
X3DPrototype117.AddSFBool([SFBool119]);
SFNode120 := TSFNode.CreateUndefined(X3DPrototype117, false, 'parentHAnimHumanoid');
{ HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model) }
{ METHOD .Fd.Value }
SFNode120.Value := HAnimHumanoid98;
{ METHOD .AddSFNode }
X3DPrototype117.AddSFNode([SFNode120]);
SFInt32122 := TSFInt32.CreateUndefined(X3DPrototype117, false, 'loa');
SFInt32122.Value := '1';
{ METHOD .AddSFInt32 }
X3DPrototype117.AddSFInt32([SFInt32122]);
SFString123 := TSFString.CreateUndefined(X3DPrototype117, false, 'description');
SFString123.Value := 'arms and legs stretched outward providing a TouchDown gesture';
{ METHOD .AddSFString }
X3DPrototype117.AddSFString([SFString123]);
MFNode124 := TMFNode.CreateUndefined(X3DPrototype117, false, 'children');
HAnimJoint125 := THAnimJointNode.Create;;
HAnimJoint125.Rotation := Vector4(0,1,0,-0.698132);
{ METHOD .AddHAnimJoint }
MFNode124.AddHAnimJoint([HAnimJoint125]);
HAnimJoint126 := THAnimJointNode.Create;;
HAnimJoint126.Rotation := Vector4(-1,1,1,1);
{ METHOD .AddHAnimJoint }
MFNode124.AddHAnimJoint([HAnimJoint126]);
HAnimJoint127 := THAnimJointNode.Create;;
HAnimJoint127.Rotation := Vector4(1,0,0,1);
{ METHOD .AddHAnimJoint }
MFNode124.AddHAnimJoint([HAnimJoint127]);
HAnimJoint128 := THAnimJointNode.Create;;
HAnimJoint128.Rotation := Vector4(-0.2,0,0.1,0.225);
{ METHOD .AddHAnimJoint }
MFNode124.AddHAnimJoint([HAnimJoint128]);
HAnimJoint129 := THAnimJointNode.Create;;
HAnimJoint129.Rotation := Vector4(-1,-1,-1,1);
{ METHOD .AddHAnimJoint }
MFNode124.AddHAnimJoint([HAnimJoint129]);
HAnimJoint130 := THAnimJointNode.Create;;
HAnimJoint130.Rotation := Vector4(1,0,0,1);
{ METHOD .AddHAnimJoint }
MFNode124.AddHAnimJoint([HAnimJoint130]);
end;

procedure InitHAnimPosePrototypePart8;
begin

HAnimJoint131 := THAnimJointNode.Create;;
HAnimJoint131.Rotation := Vector4(-0.2,0,0.1,0.25);
{ METHOD .AddHAnimJoint }
MFNode124.AddHAnimJoint([HAnimJoint131]);
HAnimJoint132 := THAnimJointNode.Create;;
HAnimJoint132.Rotation := Vector4(0,0,0.01,0.2);
{ METHOD .AddHAnimJoint }
MFNode124.AddHAnimJoint([HAnimJoint132]);
HAnimJoint133 := THAnimJointNode.Create;;
HAnimJoint133.Rotation := Vector4(0,0,0.01,0.1);
{ METHOD .AddHAnimJoint }
MFNode124.AddHAnimJoint([HAnimJoint133]);
HAnimJoint134 := THAnimJointNode.Create;;
HAnimJoint134.Rotation := Vector4(0,0,-0.01,0.15);
{ METHOD .AddHAnimJoint }
MFNode124.AddHAnimJoint([HAnimJoint134]);
HAnimJoint135 := THAnimJointNode.Create;;
HAnimJoint135.Rotation := Vector4(-1,0.5,1,2);
{ METHOD .AddHAnimJoint }
MFNode124.AddHAnimJoint([HAnimJoint135]);
HAnimJoint136 := THAnimJointNode.Create;;
HAnimJoint136.Rotation := Vector4(-1,0,0,1);
{ METHOD .AddHAnimJoint }
MFNode124.AddHAnimJoint([HAnimJoint136]);
HAnimJoint137 := THAnimJointNode.Create;;
{ METHOD .AddHAnimJoint }
MFNode124.AddHAnimJoint([HAnimJoint137]);
HAnimJoint138 := THAnimJointNode.Create;;
HAnimJoint138.Rotation := Vector4(-1,-0.5,-1,2.6);
{ METHOD .AddHAnimJoint }
MFNode124.AddHAnimJoint([HAnimJoint138]);
HAnimJoint139 := THAnimJointNode.Create;;
HAnimJoint139.Rotation := Vector4(-1,0,0,1);
{ METHOD .AddHAnimJoint }
MFNode124.AddHAnimJoint([HAnimJoint139]);
HAnimJoint140 := THAnimJointNode.Create;;
{ METHOD .AddHAnimJoint }
MFNode124.AddHAnimJoint([HAnimJoint140]);
{ METHOD .AddMFNode }
X3DPrototype117.AddMFNode([MFNode124]);
SFTime141 := TSFTime.CreateUndefined(X3DPrototype117, false, 'transitionDuration');
end;

procedure InitHAnimPosePrototypePart9;
begin

SFTime141.Value := '1.2';
{ METHOD .AddSFTime }
X3DPrototype117.AddSFTime([SFTime141]);
SFBool142 := TSFBool.CreateUndefined(X3DPrototype117, false, 'traceEnabled');
SFBool142.Value := 'true';
{ METHOD .AddSFBool }
X3DPrototype117.AddSFBool([SFBool142]);
{ METHOD .AddX3DPrototype }
Group42.AddX3DPrototype([X3DPrototype117]);
X3DPrototype143 := TX3DPrototypeNode;
SFString144 := TSFString.CreateUndefined(X3DPrototype143, false, 'name');
SFString144.Value := 'I';
{ METHOD .AddSFString }
X3DPrototype143.AddSFString([SFString144]);
SFBool145 := TSFBool.CreateUndefined(X3DPrototype143, false, 'enabled');
SFBool145.Value := 'true';
{ METHOD .AddSFBool }
X3DPrototype143.AddSFBool([SFBool145]);
SFNode146 := TSFNode.CreateUndefined(X3DPrototype143, false, 'parentHAnimHumanoid');
{ HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model) }
{ METHOD .Fd.Value }
SFNode146.Value := HAnimHumanoid98;
{ METHOD .AddSFNode }
X3DPrototype143.AddSFNode([SFNode146]);
SFInt32148 := TSFInt32.CreateUndefined(X3DPrototype143, false, 'loa');
SFInt32148.Value := '1';
{ METHOD .AddSFInt32 }
X3DPrototype143.AddSFInt32([SFInt32148]);
SFString149 := TSFString.CreateUndefined(X3DPrototype143, false, 'description');
SFString149.Value := 'arms and legs straight down default binding pose for baseline Humanoid';
{ METHOD .AddSFString }
X3DPrototype143.AddSFString([SFString149]);
MFNode150 := TMFNode.CreateUndefined(X3DPrototype143, false, 'children');
{ not defining any children equals the default "I" pose }
{ METHOD .AddMFNode }
X3DPrototype143.AddMFNode([MFNode150]);
SFTime151 := TSFTime.CreateUndefined(X3DPrototype143, false, 'transitionDuration');
SFTime151.Value := '1.5';
{ METHOD .AddSFTime }
X3DPrototype143.AddSFTime([SFTime151]);
SFBool152 := TSFBool.CreateUndefined(X3DPrototype143, false, 'traceEnabled');
SFBool152.Value := 'true';
{ METHOD .AddSFBool }
X3DPrototype143.AddSFBool([SFBool152]);
{ METHOD .AddX3DPrototype }
Group42.AddX3DPrototype([X3DPrototype143]);
X3DPrototype153 := TX3DPrototypeNode;
SFString154 := TSFString.CreateUndefined(X3DPrototype153, false, 'name');
SFString154.Value := 'H';
{ METHOD .AddSFString }
X3DPrototype153.AddSFString([SFString154]);
SFBool155 := TSFBool.CreateUndefined(X3DPrototype153, false, 'enabled');
SFBool155.Value := 'false';
{ METHOD .AddSFBool }
X3DPrototype153.AddSFBool([SFBool155]);
SFString156 := TSFString.CreateUndefined(X3DPrototype153, false, 'description');
SFString156.Value := 'TODO experimental pose not yet implemented';
end;

procedure InitHAnimPosePrototypePart10;
begin

{ METHOD .AddSFString }
X3DPrototype153.AddSFString([SFString156]);
SFTime157 := TSFTime.CreateUndefined(X3DPrototype153, false, 'transitionDuration');
SFTime157.Value := '1.4';
{ METHOD .AddSFTime }
X3DPrototype153.AddSFTime([SFTime157]);
SFBool158 := TSFBool.CreateUndefined(X3DPrototype153, false, 'traceEnabled');
SFBool158.Value := 'true';
{ METHOD .AddSFBool }
X3DPrototype153.AddSFBool([SFBool158]);
{ <fieldValue name='loa' value='1'/> }
{ METHOD .AddX3DPrototype }
Group42.AddX3DPrototype([X3DPrototype153]);
X3DPrototype159 := TX3DPrototypeNode;
SFString160 := TSFString.CreateUndefined(X3DPrototype159, false, 'name');
SFString160.Value := 'FaceLeft';
{ METHOD .AddSFString }
X3DPrototype159.AddSFString([SFString160]);
SFBool161 := TSFBool.CreateUndefined(X3DPrototype159, false, 'enabled');
SFBool161.Value := 'true';
{ METHOD .AddSFBool }
X3DPrototype159.AddSFBool([SFBool161]);
SFNode162 := TSFNode.CreateUndefined(X3DPrototype159, false, 'parentHAnimHumanoid');
{ HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model) }
{ METHOD .Fd.Value }
SFNode162.Value := HAnimHumanoid98;
{ METHOD .AddSFNode }
X3DPrototype159.AddSFNode([SFNode162]);
SFInt32164 := TSFInt32.CreateUndefined(X3DPrototype159, false, 'loa');
SFInt32164.Value := '0';
{ METHOD .AddSFInt32 }
X3DPrototype159.AddSFInt32([SFInt32164]);
SFString165 := TSFString.CreateUndefined(X3DPrototype159, false, 'description');
SFString165.Value := 'Only modify humanoid_root Joint node to face left';
{ METHOD .AddSFString }
X3DPrototype159.AddSFString([SFString165]);
MFNode166 := TMFNode.CreateUndefined(X3DPrototype159, false, 'children');
HAnimJoint167 := THAnimJointNode.Create;;
HAnimJoint167.Description := 'Only rotate the model';
HAnimJoint167.Rotation := Vector4(0,1,0,1.570796);
{ METHOD .AddHAnimJoint }
MFNode166.AddHAnimJoint([HAnimJoint167]);
{ METHOD .AddMFNode }
X3DPrototype159.AddMFNode([MFNode166]);
SFTime168 := TSFTime.CreateUndefined(X3DPrototype159, false, 'transitionDuration');
SFTime168.Value := '1.1';
{ METHOD .AddSFTime }
X3DPrototype159.AddSFTime([SFTime168]);
SFBool169 := TSFBool.CreateUndefined(X3DPrototype159, false, 'traceEnabled');
SFBool169.Value := 'true';
{ METHOD .AddSFBool }
X3DPrototype159.AddSFBool([SFBool169]);
{ METHOD .AddX3DPrototype }
Group42.AddX3DPrototype([X3DPrototype159]);
X3DPrototype170 := TX3DPrototypeNode;
SFString171 := TSFString.CreateUndefined(X3DPrototype170, false, 'name');
end;

procedure InitHAnimPosePrototypePart11;
begin

SFString171.Value := 'FaceRight';
{ METHOD .AddSFString }
X3DPrototype170.AddSFString([SFString171]);
SFBool172 := TSFBool.CreateUndefined(X3DPrototype170, false, 'enabled');
SFBool172.Value := 'true';
{ METHOD .AddSFBool }
X3DPrototype170.AddSFBool([SFBool172]);
SFNode173 := TSFNode.CreateUndefined(X3DPrototype170, false, 'parentHAnimHumanoid');
{ HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model) }
{ METHOD .Fd.Value }
SFNode173.Value := HAnimHumanoid98;
{ METHOD .AddSFNode }
X3DPrototype170.AddSFNode([SFNode173]);
SFInt32175 := TSFInt32.CreateUndefined(X3DPrototype170, false, 'loa');
SFInt32175.Value := '0';
{ METHOD .AddSFInt32 }
X3DPrototype170.AddSFInt32([SFInt32175]);
SFString176 := TSFString.CreateUndefined(X3DPrototype170, false, 'description');
SFString176.Value := 'Only modify humanoid_root Joint node to face right';
{ METHOD .AddSFString }
X3DPrototype170.AddSFString([SFString176]);
MFNode177 := TMFNode.CreateUndefined(X3DPrototype170, false, 'children');
HAnimJoint178 := THAnimJointNode.Create;;
HAnimJoint178.Description := 'Only rotate the model';
HAnimJoint178.Rotation := Vector4(0,1,0,-1.570796);
{ METHOD .AddHAnimJoint }
MFNode177.AddHAnimJoint([HAnimJoint178]);
{ METHOD .AddMFNode }
X3DPrototype170.AddMFNode([MFNode177]);
SFTime179 := TSFTime.CreateUndefined(X3DPrototype170, false, 'transitionDuration');
SFTime179.Value := '1.1';
{ METHOD .AddSFTime }
X3DPrototype170.AddSFTime([SFTime179]);
SFBool180 := TSFBool.CreateUndefined(X3DPrototype170, false, 'traceEnabled');
SFBool180.Value := 'true';
{ METHOD .AddSFBool }
X3DPrototype170.AddSFBool([SFBool180]);
{ METHOD .AddX3DPrototype }
Group42.AddX3DPrototype([X3DPrototype170]);
Group181 := TGroupNode.Create;;
Transform182 := TTransformNode.Create;;
Transform182.Translation := Vector3(0,2,0);
Shape183 := TShapeNode.Create;;
Text184 := TTextNode.Create;;
Text184.SetText(['HAnimPosePrototype example implementation']);
FontStyle185 := TFontStyleNode.Create;;
end;

procedure InitHAnimPosePrototypePart12;
begin

FontStyle185.Family := ffSANS;
FontStyle185.Justify := fjMIDDLE;
FontStyle185.JustifyMinor := fjMIDDLE;
FontStyle185.Size := 0.15;
FontStyle185.Style := fsBOLD;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text184.FontStyle := FontStyle185;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape183.Geometry := Text184;
Appearance186 := TAppearanceNode.Create;;
Material187 := TMaterialNode.Create;;
Material187.DiffuseColor := Vector3(0.1,0.5,0.3);
{ METHOD .SetMaterial }
Appearance186.Material := Material187;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape183.Appearance := Appearance186;
{ METHOD .FdChildren.Add }
Transform182.FdChildren.Add(Shape183);
{ METHOD .FdChildren.Add }
Group181.FdChildren.Add(Transform182);
Transform188 := TTransformNode.Create;;
Transform188.Translation := Vector3(-1.5,1.5,0);
Shape189 := TShapeNode.Create;;
Text190 := TTextNode.Create;;
Text190.SetText(['"T" Pose']);
FontStyle191 := TFontStyleNode.Create;;
FontStyle191.Family := ffSANS;
FontStyle191.Justify := fjMIDDLE;
FontStyle191.JustifyMinor := fjMIDDLE;
FontStyle191.Size := 0.1;
FontStyle191.Style := fsBOLD;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text190.FontStyle := FontStyle191;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape189.Geometry := Text190;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape189.Appearance := Appearance186;
{ METHOD .FdChildren.Add }
Transform188.FdChildren.Add(Shape189);
Shape193 := TShapeNode.Create;;
Appearance194 := TAppearanceNode.Create;;
Material195 := TMaterialNode.Create;
end;

procedure InitHAnimPosePrototypePart13;
begin
;
Material195.Transparency := 0.8;
{ METHOD .SetMaterial }
Appearance194.Material := Material195;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape193.Appearance := Appearance194;
Box196 := TBoxNode.Create;;
Box196.Size := Vector3(0.45,0.2,0.001);
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape193.Geometry := Box196;
{ METHOD .FdChildren.Add }
Transform188.FdChildren.Add(Shape193);
TouchSensor197 := TTouchSensorNode.Create;;
TouchSensor197.Description := 'select to move shoulders to \"T\" pose, leave other joints unchanged';
{ METHOD .FdChildren.Add }
Transform188.FdChildren.Add(TouchSensor197);
{ Original "T_PoseTouchSensor.EventIsActive TO T_Pose.commencePose }
{ Sample T_PoseTouchSensor.EventIsActive TO T_Pose.commencePose}
Transform188.AddRoute(TouchSensor197.EventIsActive, X3DPrototype94.commencePose);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group181.FdChildren.Add(Transform188);
Transform199 := TTransformNode.Create;;
Transform199.Translation := Vector3(-1.5,1,0);
Shape200 := TShapeNode.Create;;
Text201 := TTextNode.Create;;
Text201.SetText(['"A" Pose']);
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text201.FontStyle := FontStyle191;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape200.Geometry := Text201;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape200.Appearance := Appearance186;
{ METHOD .FdChildren.Add }
Transform199.FdChildren.Add(Shape200);
Shape204 := TShapeNode.Create;;
{ Selectable Text transparent Box for easy user selection }
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape204.Appearance := Appearance194;
Box206 := TBoxNode.Create;;
Box206.Size := Vector3(0.45,0.2,0.001);
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape204.Geometry := Box206;
{ METHOD .FdChildren.Add }
Transform199.FdChildren.Add(Shape204);
TouchSensor207 := TTouchSensorNode.Create;;
TouchSensor207.Description := 'select to move shoulders to \"A\" pose, leave other joints unchanged';
{ METHOD .FdChildren.Add }
Transform199.FdChildren.Add(TouchSensor207);
{ Original "A_PoseTouchSensor.EventIsActive TO A_Pose.commencePose }
{ Sample A_PoseTouchSensor.EventIsActive TO A_Pose.commencePose}
Transform199.AddRoute(TouchSensor207.EventIsActive, X3DPrototype105.commencePose);
end;

procedure InitHAnimPosePrototypePart14;
begin

{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group181.FdChildren.Add(Transform199);
Transform209 := TTransformNode.Create;;
Transform209.Translation := Vector3(-1.5,0.5,0);
Shape210 := TShapeNode.Create;;
Text211 := TTextNode.Create;;
Text211.SetText(['TouchDown Pose']);
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text211.FontStyle := FontStyle191;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape210.Geometry := Text211;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape210.Appearance := Appearance186;
{ METHOD .FdChildren.Add }
Transform209.FdChildren.Add(Shape210);
Shape214 := TShapeNode.Create;;
{ Selectable Text transparent Box for easy user selection }
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape214.Appearance := Appearance194;
Box216 := TBoxNode.Create;;
Box216.Size := Vector3(0.85,0.2,0.001);
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape214.Geometry := Box216;
{ METHOD .FdChildren.Add }
Transform209.FdChildren.Add(Shape214);
TouchSensor217 := TTouchSensorNode.Create;;
TouchSensor217.Description := 'select to transition all joints to TouchDown pose';
{ METHOD .FdChildren.Add }
Transform209.FdChildren.Add(TouchSensor217);
{ Original "TouchDown_PoseTouchSensor.EventIsActive TO TouchDown_Pose.commencePose }
{ Sample TouchDown_PoseTouchSensor.EventIsActive TO TouchDown_Pose.commencePose}
Transform209.AddRoute(TouchSensor217.EventIsActive, X3DPrototype117.commencePose);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group181.FdChildren.Add(Transform209);
Transform219 := TTransformNode.Create;;
Transform219.Translation := Vector3(-1.5,0,0);
Shape220 := TShapeNode.Create;;
Text221 := TTextNode.Create;;
Text221.SetText(['"I" Pose']);
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text221.FontStyle := FontStyle191;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape220.Geometry := Text221;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape220.Appearance := Appearance186;
{ METHOD .FdChildren.Add }
Transform219.FdChildren.Add(Shape220);
Shape224 := TShapeNode.Create;
end;

procedure InitHAnimPosePrototypePart15;
begin
;
{ Selectable Text transparent Box for easy user selection }
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape224.Appearance := Appearance194;
Box226 := TBoxNode.Create;;
Box226.Size := Vector3(0.45,0.2,0.001);
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape224.Geometry := Box226;
{ METHOD .FdChildren.Add }
Transform219.FdChildren.Add(Shape224);
TouchSensor227 := TTouchSensorNode.Create;;
TouchSensor227.Description := 'select to transition all joints to \"I\" pose';
{ METHOD .FdChildren.Add }
Transform219.FdChildren.Add(TouchSensor227);
{ Original "I_PoseTouchSensor.EventIsActive TO I_Pose.commencePose }
{ Sample I_PoseTouchSensor.EventIsActive TO I_Pose.commencePose}
Transform219.AddRoute(TouchSensor227.EventIsActive, X3DPrototype143.commencePose);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group181.FdChildren.Add(Transform219);
Transform229 := TTransformNode.Create;;
Transform229.Translation := Vector3(1.5,1.5,0);
Shape230 := TShapeNode.Create;;
Text231 := TTextNode.Create;;
Text231.SetText(['Face Left Pose']);
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text231.FontStyle := FontStyle191;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape230.Geometry := Text231;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape230.Appearance := Appearance186;
{ METHOD .FdChildren.Add }
Transform229.FdChildren.Add(Shape230);
Shape234 := TShapeNode.Create;;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape234.Appearance := Appearance194;
Box236 := TBoxNode.Create;;
Box236.Size := Vector3(0.9,0.2,0.001);
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape234.Geometry := Box236;
{ METHOD .FdChildren.Add }
Transform229.FdChildren.Add(Shape234);
TouchSensor237 := TTouchSensorNode.Create;;
TouchSensor237.Description := 'select to rotate body and Face Left, leave other joints unchanged';
{ METHOD .FdChildren.Add }
Transform229.FdChildren.Add(TouchSensor237);
{ Original "FaceLeftTouchSensor.EventIsActive TO FaceLeft_Pose.commencePose }
{ Sample FaceLeftTouchSensor.EventIsActive TO FaceLeft_Pose.commencePose}
Transform229.AddRoute(TouchSensor237.EventIsActive, X3DPrototype159.commencePose);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group181.FdChildren.Add(Transform229);
Transform239 := TTransformNode.Create;
end;

procedure InitHAnimPosePrototypePart16;
begin
;
Transform239.Translation := Vector3(1.5,1,0);
Shape240 := TShapeNode.Create;;
Text241 := TTextNode.Create;;
Text241.SetText(['Face Right Pose']);
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text241.FontStyle := FontStyle191;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape240.Geometry := Text241;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape240.Appearance := Appearance186;
{ METHOD .FdChildren.Add }
Transform239.FdChildren.Add(Shape240);
Shape244 := TShapeNode.Create;;
{ Selectable Text transparent Box for easy user selection }
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape244.Appearance := Appearance194;
Box246 := TBoxNode.Create;;
Box246.Size := Vector3(0.9,0.2,0.001);
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape244.Geometry := Box246;
{ METHOD .FdChildren.Add }
Transform239.FdChildren.Add(Shape244);
TouchSensor247 := TTouchSensorNode.Create;;
TouchSensor247.Description := 'select to rotate body and Face Right, leave other joints unchanged';
{ METHOD .FdChildren.Add }
Transform239.FdChildren.Add(TouchSensor247);
{ Original "FaceRightTouchSensor.EventIsActive TO FaceRight_Pose.commencePose }
{ Sample FaceRightTouchSensor.EventIsActive TO FaceRight_Pose.commencePose}
Transform239.AddRoute(TouchSensor247.EventIsActive, X3DPrototype170.commencePose);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group181.FdChildren.Add(Transform239);
Transform249 := TTransformNode.Create;;
Transform249.Translation := Vector3(1.5,0.5,0);
Shape250 := TShapeNode.Create;;
Text251 := TTextNode.Create;;
Text251.SetText(['Direct animation','to, from "I" Pose']);
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text251.FontStyle := FontStyle191;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape250.Geometry := Text251;
Appearance253 := TAppearanceNode.Create;;
Material254 := TMaterialNode.Create;;
Material254.DiffuseColor := Vector3(0.1,0.2,0.3);
end;

procedure InitHAnimPosePrototypePart17;
begin

{ METHOD .SetMaterial }
Appearance253.Material := Material254;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape250.Appearance := Appearance253;
{ METHOD .FdChildren.Add }
Transform249.FdChildren.Add(Shape250);
Shape255 := TShapeNode.Create;;
{ Selectable Text transparent Box for easy user selection }
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape255.Appearance := Appearance194;
Box257 := TBoxNode.Create;;
Box257.Size := Vector3(0.9,0.25,0.001);
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape255.Geometry := Box257;
{ METHOD .FdChildren.Add }
Transform249.FdChildren.Add(Shape255);
TouchSensor258 := TTouchSensorNode.Create;;
TouchSensor258.Description := 'select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events';
{ METHOD .FdChildren.Add }
Transform249.FdChildren.Add(TouchSensor258);
{ cycleInterval=4 also hard-coded in script execution message }
TimeSensor259 := TTimeSensorNode.Create;;
TimeSensor259.CycleInterval := 4;
TimeSensor259.Description := 'directly animate several poses';
{ METHOD .FdChildren.Add }
Transform249.FdChildren.Add(TimeSensor259);
ScalarInterpolator260 := TScalarInterpolatorNode.Create;;
ScalarInterpolator260.SetKey([0,0.05,0.45,0.55,0.95,1]);
ScalarInterpolator260.SetKeyValue([0,0,1,1,0,0]);
{ METHOD .FdChildren.Add }
Transform249.FdChildren.Add(ScalarInterpolator260);
{ Original "AnimatePosesTouchSensor.EventTouchTime TO AnimatePosesClock.FdStartTime.EventIn }
{ Sample AnimatePosesTouchSensor.EventTouchTime TO AnimatePosesClock.FdStartTime.EventIn}
Transform249.AddRoute(TouchSensor258.EventTouchTime, TimeSensor259.FdStartTime.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "AnimatePosesClock.EventFraction_changed TO AnimatePosesLoopInterpolator.EventSet_fraction }
{ Sample AnimatePosesClock.EventFraction_changed TO AnimatePosesLoopInterpolator.EventSet_fraction}
Transform249.AddRoute(TimeSensor259.EventFraction_changed, ScalarInterpolator260.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "AnimatePosesLoopInterpolator.EventValue_changed TO I_Pose.EventSet_fraction }
{ Sample AnimatePosesLoopInterpolator.EventValue_changed TO I_Pose.EventSet_fraction}
Transform249.AddRoute(ScalarInterpolator260.EventValue_changed, X3DPrototype143.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group181.FdChildren.Add(Transform249);
Transform264 := TTransformNode.Create;;
Transform264.Translation := Vector3(1.5,0,0);
Shape265 := TShapeNode.Create;;
Text266 := TTextNode.Create;;
Text266.SetText(['Reset All Joints','to Default "I" Pose']);
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text266.FontStyle := FontStyle191;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape265.Geometry := Text266;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape265.Appearance := Appearance253;
end;

procedure InitHAnimPosePrototypePart18;
begin

{ METHOD .FdChildren.Add }
Transform264.FdChildren.Add(Shape265);
Shape269 := TShapeNode.Create;;
{ Selectable Text transparent Box for easy user selection }
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape269.Appearance := Appearance194;
Box271 := TBoxNode.Create;;
Box271.Size := Vector3(0.9,0.25,0.001);
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape269.Geometry := Box271;
{ METHOD .FdChildren.Add }
Transform264.FdChildren.Add(Shape269);
TouchSensor272 := TTouchSensorNode.Create;;
TouchSensor272.Description := 'select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event';
{ METHOD .FdChildren.Add }
Transform264.FdChildren.Add(TouchSensor272);
{ Original "ResetPoseTouchSensor.EventIsActive TO FaceLeft_Pose.resetAllJoints }
{ Sample ResetPoseTouchSensor.EventIsActive TO FaceLeft_Pose.resetAllJoints}
Transform264.AddRoute(TouchSensor272.EventIsActive, X3DPrototype159.resetAllJoints);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group181.FdChildren.Add(Transform264);
{ METHOD .FdChildren.Add }
Group42.FdChildren.Add(Group181);
Group274 := TGroupNode.Create;;
{ Original "HumanoidInlineLoadSensor.EventIsLoaded TO A_Pose.isLoaded }
{ Sample HumanoidInlineLoadSensor.EventIsLoaded TO A_Pose.isLoaded}
Group274.AddRoute(LoadSensor49.EventIsLoaded, X3DPrototype105.isLoaded);
{ METHOD .AddX3DROUTE }
{ Original "HumanoidInlineLoadSensor.EventIsLoaded TO H_Pose.isLoaded }
{ Sample HumanoidInlineLoadSensor.EventIsLoaded TO H_Pose.isLoaded}
Group274.AddRoute(LoadSensor49.EventIsLoaded, X3DPrototype153.isLoaded);
{ METHOD .AddX3DROUTE }
{ Original "HumanoidInlineLoadSensor.EventIsLoaded TO I_Pose.isLoaded }
{ Sample HumanoidInlineLoadSensor.EventIsLoaded TO I_Pose.isLoaded}
Group274.AddRoute(LoadSensor49.EventIsLoaded, X3DPrototype143.isLoaded);
{ METHOD .AddX3DROUTE }
{ Original "HumanoidInlineLoadSensor.EventIsLoaded TO T_Pose.isLoaded }
{ Sample HumanoidInlineLoadSensor.EventIsLoaded TO T_Pose.isLoaded}
Group274.AddRoute(LoadSensor49.EventIsLoaded, X3DPrototype94.isLoaded);
{ METHOD .AddX3DROUTE }
{ Original "HumanoidInlineLoadSensor.EventIsLoaded TO FaceLeft_Pose.isLoaded }
{ Sample HumanoidInlineLoadSensor.EventIsLoaded TO FaceLeft_Pose.isLoaded}
Group274.AddRoute(LoadSensor49.EventIsLoaded, X3DPrototype159.isLoaded);
{ METHOD .AddX3DROUTE }
{ Original "HumanoidInlineLoadSensor.EventIsLoaded TO FaceRight_Pose.isLoaded }
{ Sample HumanoidInlineLoadSensor.EventIsLoaded TO FaceRight_Pose.isLoaded}
Group274.AddRoute(LoadSensor49.EventIsLoaded, X3DPrototype170.isLoaded);
{ METHOD .AddX3DROUTE }
{ Original "HumanoidInlineLoadSensor.EventIsLoaded TO TouchDown_Pose.isLoaded }
{ Sample HumanoidInlineLoadSensor.EventIsLoaded TO TouchDown_Pose.isLoaded}
Group274.AddRoute(LoadSensor49.EventIsLoaded, X3DPrototype117.isLoaded);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group42.FdChildren.Add(Group274);
Transform282 := TTransformNode.Create;;
Transform282.Scale := Vector3(0.05,0.05,0.05);
Inline283 := TInlineNode.Create;;
Inline283.SetUrl(['../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d','../../../Savage/Tools/Authoring/CoordinateAxes.x3d','https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d','https://www.web3d.org/x3d/content/examples/Savage/Tools/Authoring/CoordinateAxes.x3d','../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl','../../../Savage/Tools/Authoring/CoordinateAxes.wrl','https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl','https://www.web3d.org/x3d/content/examples/Savage/Tools/Authoring/CoordinateAxes.wrl']);
{ METHOD .FdChildren.Add }
Transform282.FdChildren.Add(Inline283);
{ METHOD .FdChildren.Add }
Group42.FdChildren.Add(Transform282);
Transform284 := TTransformNode.Create;;
Transform284.Translation := Vector3(0,-0.15,0);
Shape285 := TShapeNode.Create;;
Text286 := TTextNode.Create;
end;

procedure InitHAnimPosePrototypePart19;
begin
;
Text286.SetText(['humanoid','origin']);
FontStyle287 := TFontStyleNode.Create;;
FontStyle287.Family := ffSANS;
FontStyle287.Justify := fjMIDDLE;
FontStyle287.JustifyMinor := fjMIDDLE;
FontStyle287.Size := 0.05;
FontStyle287.Style := fsBOLD;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text286.FontStyle := FontStyle287;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape285.Geometry := Text286;
Appearance288 := TAppearanceNode.Create;;
Material289 := TMaterialNode.Create;;
Material289.DiffuseColor := Vector3(0.3,0.3,0.3);
{ METHOD .SetMaterial }
Appearance288.Material := Material289;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape285.Appearance := Appearance288;
{ METHOD .FdChildren.Add }
Transform284.FdChildren.Add(Shape285);
{ METHOD .FdChildren.Add }
Group42.FdChildren.Add(Transform284);
{ METHOD .AddGroup }
X3D0.AddChildren([Group42]);
end;

function CreateHAnimPosePrototype: TX3DRootNode;
begin
InitHAnimPosePrototypePart0;
InitHAnimPosePrototypePart1;
InitHAnimPosePrototypePart2;
InitHAnimPosePrototypePart3;
InitHAnimPosePrototypePart4;
InitHAnimPosePrototypePart5;
InitHAnimPosePrototypePart6;
InitHAnimPosePrototypePart7;
InitHAnimPosePrototypePart8;
InitHAnimPosePrototypePart9;
InitHAnimPosePrototypePart10;
InitHAnimPosePrototypePart11;
InitHAnimPosePrototypePart12;
InitHAnimPosePrototypePart13;
InitHAnimPosePrototypePart14;
InitHAnimPosePrototypePart15;
InitHAnimPosePrototypePart16;
InitHAnimPosePrototypePart17;
InitHAnimPosePrototypePart18;
InitHAnimPosePrototypePart19;
Result := X3D0;
end;

begin
end.
