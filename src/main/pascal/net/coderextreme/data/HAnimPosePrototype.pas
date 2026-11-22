unit HAnimPosePrototype;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

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
IS70: TIS;
connect71: Tconnect;
connect72: Tconnect;
connect73: Tconnect;
connect74: Tconnect;
connect75: Tconnect;
TimeSensor76: TTimeSensorNode;
IS77: TIS;
connect78: Tconnect;
connect79: Tconnect;
connect80: Tconnect;
Group81: TGroupNode;
Group82: TGroupNode;
Script83: TScriptNode;
SFNode84: TSFNode;
SFString85: TSFString;
SFInt3286: TSFInt32;
SFString87: TSFString;
SFBool88: TSFBool;
SFBool89: TSFBool;
MFNode90: TMFNode;
SFTime91: TSFTime;
SFBool92: TSFBool;
SFFloat93: TSFFloat;
SFTime94: TSFTime;
SFBool95: TSFBool;
SFBool96: TSFBool;
SFInt3297: TSFInt32;
SFInt3298: TSFInt32;
MFNode99: TMFNode;
IS100: TIS;
connect101: Tconnect;
connect102: Tconnect;
connect103: Tconnect;
connect104: Tconnect;
connect105: Tconnect;
connect106: Tconnect;
connect107: Tconnect;
connect108: Tconnect;
connect109: Tconnect;
connect110: Tconnect;
connect111: Tconnect;
connect112: Tconnect;
connect113: Tconnect;
Viewpoint114: TViewpointNode;
X3DPrototype115: TX3DPrototypeNode;
SFString116: TSFString;
SFBool117: TSFBool;
SFNode118: TSFNode;
HAnimHumanoid119: THAnimHumanoidNode;
SFInt32120: TSFInt32;
SFString121: TSFString;
MFNode122: TMFNode;
HAnimJoint123: THAnimJointNode;
HAnimJoint124: THAnimJointNode;
SFTime125: TSFTime;
X3DPrototype126: TX3DPrototypeNode;
SFString127: TSFString;
SFBool128: TSFBool;
SFNode129: TSFNode;
HAnimHumanoid130: THAnimHumanoidNode;
SFInt32131: TSFInt32;
SFString132: TSFString;
MFNode133: TMFNode;
HAnimJoint134: THAnimJointNode;
HAnimJoint135: THAnimJointNode;
SFTime136: TSFTime;
SFBool137: TSFBool;
X3DPrototype138: TX3DPrototypeNode;
SFString139: TSFString;
SFBool140: TSFBool;
SFNode141: TSFNode;
HAnimHumanoid142: THAnimHumanoidNode;
SFInt32143: TSFInt32;
SFString144: TSFString;
MFNode145: TMFNode;
HAnimJoint146: THAnimJointNode;
HAnimJoint147: THAnimJointNode;
HAnimJoint148: THAnimJointNode;
HAnimJoint149: THAnimJointNode;
HAnimJoint150: THAnimJointNode;
HAnimJoint151: THAnimJointNode;
HAnimJoint152: THAnimJointNode;
HAnimJoint153: THAnimJointNode;
HAnimJoint154: THAnimJointNode;
HAnimJoint155: THAnimJointNode;
HAnimJoint156: THAnimJointNode;
HAnimJoint157: THAnimJointNode;
HAnimJoint158: THAnimJointNode;
HAnimJoint159: THAnimJointNode;
HAnimJoint160: THAnimJointNode;
HAnimJoint161: THAnimJointNode;
SFTime162: TSFTime;
SFBool163: TSFBool;
X3DPrototype164: TX3DPrototypeNode;
SFString165: TSFString;
SFBool166: TSFBool;
SFNode167: TSFNode;
HAnimHumanoid168: THAnimHumanoidNode;
SFInt32169: TSFInt32;
SFString170: TSFString;
MFNode171: TMFNode;
SFTime172: TSFTime;
SFBool173: TSFBool;
X3DPrototype174: TX3DPrototypeNode;
SFString175: TSFString;
SFBool176: TSFBool;
SFString177: TSFString;
SFTime178: TSFTime;
SFBool179: TSFBool;
X3DPrototype180: TX3DPrototypeNode;
SFString181: TSFString;
SFBool182: TSFBool;
SFNode183: TSFNode;
HAnimHumanoid184: THAnimHumanoidNode;
SFInt32185: TSFInt32;
SFString186: TSFString;
MFNode187: TMFNode;
HAnimJoint188: THAnimJointNode;
SFTime189: TSFTime;
SFBool190: TSFBool;
X3DPrototype191: TX3DPrototypeNode;
SFString192: TSFString;
SFBool193: TSFBool;
SFNode194: TSFNode;
HAnimHumanoid195: THAnimHumanoidNode;
SFInt32196: TSFInt32;
SFString197: TSFString;
MFNode198: TMFNode;
HAnimJoint199: THAnimJointNode;
SFTime200: TSFTime;
SFBool201: TSFBool;
Group202: TGroupNode;
Transform203: TTransformNode;
Shape204: TShapeNode;
Text205: TTextNode;
FontStyle206: TFontStyleNode;
Appearance207: TAppearanceNode;
Material208: TMaterialNode;
Transform209: TTransformNode;
Shape210: TShapeNode;
Text211: TTextNode;
FontStyle212: TFontStyleNode;
Appearance213: TAppearanceNode;
Shape214: TShapeNode;
Appearance215: TAppearanceNode;
Material216: TMaterialNode;
Box217: TBoxNode;
TouchSensor218: TTouchSensorNode;
Transform220: TTransformNode;
Shape221: TShapeNode;
Text222: TTextNode;
FontStyle223: TFontStyleNode;
Appearance224: TAppearanceNode;
Shape225: TShapeNode;
Appearance226: TAppearanceNode;
Box227: TBoxNode;
TouchSensor228: TTouchSensorNode;
Transform230: TTransformNode;
Shape231: TShapeNode;
Text232: TTextNode;
FontStyle233: TFontStyleNode;
Appearance234: TAppearanceNode;
Shape235: TShapeNode;
Appearance236: TAppearanceNode;
Box237: TBoxNode;
TouchSensor238: TTouchSensorNode;
Transform240: TTransformNode;
Shape241: TShapeNode;
Text242: TTextNode;
FontStyle243: TFontStyleNode;
Appearance244: TAppearanceNode;
Shape245: TShapeNode;
Appearance246: TAppearanceNode;
Box247: TBoxNode;
TouchSensor248: TTouchSensorNode;
Transform250: TTransformNode;
Shape251: TShapeNode;
Text252: TTextNode;
FontStyle253: TFontStyleNode;
Appearance254: TAppearanceNode;
Shape255: TShapeNode;
Appearance256: TAppearanceNode;
Box257: TBoxNode;
TouchSensor258: TTouchSensorNode;
Transform260: TTransformNode;
Shape261: TShapeNode;
Text262: TTextNode;
FontStyle263: TFontStyleNode;
Appearance264: TAppearanceNode;
Shape265: TShapeNode;
Appearance266: TAppearanceNode;
Box267: TBoxNode;
TouchSensor268: TTouchSensorNode;
Transform270: TTransformNode;
Shape271: TShapeNode;
Text272: TTextNode;
FontStyle273: TFontStyleNode;
Appearance274: TAppearanceNode;
Material275: TMaterialNode;
Shape276: TShapeNode;
Appearance277: TAppearanceNode;
Box278: TBoxNode;
TouchSensor279: TTouchSensorNode;
TimeSensor280: TTimeSensorNode;
ScalarInterpolator281: TScalarInterpolatorNode;
Transform285: TTransformNode;
Shape286: TShapeNode;
Text287: TTextNode;
FontStyle288: TFontStyleNode;
Appearance289: TAppearanceNode;
Shape290: TShapeNode;
Appearance291: TAppearanceNode;
Box292: TBoxNode;
TouchSensor293: TTouchSensorNode;
Group295: TGroupNode;
Transform303: TTransformNode;
Inline304: TInlineNode;
Transform305: TTransformNode;
Shape306: TShapeNode;
Text307: TTextNode;
FontStyle308: TFontStyleNode;
Appearance309: TAppearanceNode;
Material310: TMaterialNode;

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
Group42 := TGroupNode.Create;
WorldInfo43 := TWorldInfoNode.Create;
WorldInfo43.SetInfo(['Design to illustrate a potential HAnimPose node']);
WorldInfo43.Title := 'HAnimPosePrototype.x3d';
{ METHOD .FdChildren.Add }
Group42.FdChildren.Add(WorldInfo43);
Background44 := TBackgroundNode.Create;
Background44.SetSkyColor([Vector3(0.8,0.8,1)]);
{ METHOD .FdChildren.Add }
Group42.FdChildren.Add(Background44);
NavigationInfo45 := TNavigationInfoNode.Create;
{ METHOD .FdChildren.Add }
Group42.FdChildren.Add(NavigationInfo45);
Group46 := TGroupNode.Create;
{ Multiple HAnimHumanoid Inline/IMPORT models are available to support testing: Characters/ JinLOA1 JinLOA2 JinLOA3 JinLOA4 ../Skin/JoeKick ../Skin/JoeSkeletonSkinSite ../Skin/BoxMan1 ../Skin/BoxMan2 }
{ Also tested satisfactorily: KoreanCharacter01Jin KoreanCharacter02Chul KoreanCharacter03Hyun KoreanCharacter04Young KoreanCharacter05Ju KoreanCharacter06Ga KoreanCharacter07No KoreanCharacter08Da KoreanCharacter09Ru KoreanCharacter10Mi KoreanCharacter11Min KoreanCharacter12Sun }
Inline47 := TInlineNode.Create;
Inline47.Description := 'remote HAnimHumanoid for IMPORT';
Inline47.SetUrl(['../Skin/BoxMan2.x3d','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/BoxMan2.x3d']);
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(Inline47);
{ Note that the following importedDEF must match the EXPORT name found in remote file }
IMPORT48 := TIMPORTNode.Create;
IMPORT48.AS := 'HumanoidImported';
IMPORT48.ImportedDEF := 'BoxMan2';
IMPORT48.InlineDEF := 'HumanoidInline';
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(IMPORT48);
LoadSensor49 := TLoadSensorNode.Create;
LoadSensor49.TimeOut := 2;
{ METHOD .FdChildren.Add }
LoadSensor49.FdChildren.Add(Inline47);
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(LoadSensor49);
{ METHOD .FdChildren.Add }
Group42.FdChildren.Add(Group46);
X3DPrototype51 := TX3DPrototype.Create;
X3DPrototype51.Appinfo := 'Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values.';
X3DInterfaceDeclaration52 := TX3DInterfaceDeclaration.Create(nil);
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
end;

procedure InitHAnimPosePrototypePart2;
begin

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
end;

procedure InitHAnimPosePrototypePart3;
begin

SFBool67.Value := 'true';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration52.AddSFBool([SFBool67]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype51.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration52]);
X3DPrototype68 := TX3DPrototype.Create;
TimeSensor69 := TTimeSensorNode.Create;
TimeSensor69.Description := 'control timing of pose animation when triggered';
IS70 := TIS.Create;
connect71 := Tconnect.Create;
connect71.NodeField := 'enabled';
connect71.ProtoField := 'enabled';
{ METHOD .Connect }
IS70.Connect := connect71;
connect72 := Tconnect.Create;
connect72.NodeField := 'cycleInterval';
connect72.ProtoField := 'transitionDuration';
{ METHOD .Connect }
IS70.Connect := connect72;
connect73 := Tconnect.Create;
connect73.NodeField := 'isActive';
connect73.ProtoField := 'isActive';
{ METHOD .Connect }
IS70.Connect := connect73;
connect74 := Tconnect.Create;
connect74.NodeField := 'startTime';
connect74.ProtoField := 'set_startTime';
{ METHOD .Connect }
IS70.Connect := connect74;
connect75 := Tconnect.Create;
connect75.NodeField := 'metadata';
connect75.ProtoField := 'metadata';
{ METHOD .Connect }
IS70.Connect := connect75;
{ METHOD .IS }
TimeSensor69.IS := IS70;
{ METHOD .AddTimeSensor }
X3DPrototype68.AddTimeSensor([TimeSensor69]);
TimeSensor76 := TTimeSensorNode.Create;
TimeSensor76.Description := 'control timing of skeleton reset to \"A\" pose when triggered';
IS77 := TIS.Create;
connect78 := Tconnect.Create;
connect78.NodeField := 'enabled';
connect78.ProtoField := 'enabled';
{ METHOD .Connect }
IS77.Connect := connect78;
connect79 := Tconnect.Create;
connect79.NodeField := 'cycleInterval';
connect79.ProtoField := 'transitionDuration';
{ METHOD .Connect }
IS77.Connect := connect79;
end;

procedure InitHAnimPosePrototypePart4;
begin

connect80 := Tconnect.Create;
connect80.NodeField := 'startTime';
connect80.ProtoField := 'set_startTime';
{ METHOD .Connect }
IS77.Connect := connect80;
{ no need to report isActive since that would be duplicative }
{ METHOD .IS }
TimeSensor76.IS := IS77;
{ METHOD .AddTimeSensor }
X3DPrototype68.AddTimeSensor([TimeSensor76]);
Group81 := TGroupNode.Create;
{ interpolators generated by prototype script appear here at runtime }
{ METHOD .AddGroup }
X3DPrototype68.AddChildren([Group81]);
Group82 := TGroupNode.Create;
{ interpolators generated by prototype script appear here at runtime }
{ METHOD .AddGroup }
X3DPrototype68.AddChildren([Group82]);
Script83 := TScriptNode.Create;
Script83.DirectOutput := True;
Script83.SetUrl(['HAnimPosePrototypeScript.js','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeScript.js']);
SFNode84 := TSFNode.CreateUndefined(Script83, false, 'parentHAnimHumanoid');
SFNode84.Appinfo := 'Humanoid for this Pose to act upon';
{ initialization node (if any) goes here }
{ METHOD .Fd.AddCustomField }
Script83.AddCustomField(SFNode84);
SFString85 := TSFString.CreateUndefined(Script83, false, 'name');
SFString85.Appinfo := 'name of this pose';
{ METHOD .Fd.AddCustomField }
Script83.AddCustomField(SFString85);
SFInt3286 := TSFInt32.CreateUndefined(Script83, false, 'loa');
SFInt3286.Appinfo := 'default is no loa';
{ METHOD .Fd.AddCustomField }
Script83.AddCustomField(SFInt3286);
SFString87 := TSFString.CreateUndefined(Script83, false, 'description');
SFString87.Appinfo := 'explanation of purpose';
{ METHOD .Fd.AddCustomField }
Script83.AddCustomField(SFString87);
SFBool88 := TSFBool.CreateUndefined(Script83, false, 'enabled');
SFBool88.Appinfo := 'default value true';
{ METHOD .Fd.AddCustomField }
Script83.AddCustomField(SFBool88);
SFBool89 := TSFBool.CreateUndefined(Script83, false, 'resetAllJoints');
SFBool89.Appinfo := 'reset the skeleton to I pose with all joints zeroed';
{ METHOD .Fd.AddCustomField }
Script83.AddCustomField(SFBool89);
MFNode90 := TMFNode.CreateUndefined(Script83, false, 'children');
MFNode90.Appinfo := 'joint values to apply to HAnimHumanoid';
{ initializating Joint nodes (if any) go here }
{ METHOD .Fd.AddCustomField }
Script83.AddCustomField(MFNode90);
SFTime91 := TSFTime.CreateUndefined(Script83, false, 'transitionDuration');
SFTime91.Appinfo := 'how many seconds to achieve the pose';
{ METHOD .Fd.AddCustomField }
Script83.AddCustomField(SFTime91);
SFBool92 := TSFBool.CreateUndefined(Script83, false, 'commencePose');
SFBool92.Appinfo := 'this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1';
{ METHOD .Fd.AddCustomField }
Script83.AddCustomField(SFBool92);
end;

procedure InitHAnimPosePrototypePart5;
begin

SFFloat93 := TSFFloat.CreateUndefined(Script83, false, 'set_fraction');
SFFloat93.Appinfo := 'allows transition to proceed incrementally from fraction [0..10';
{ METHOD .Fd.AddCustomField }
Script83.AddCustomField(SFFloat93);
SFTime94 := TSFTime.CreateUndefined(Script83, false, 'set_startTime');
SFTime94.Appinfo := 'starts the animation clock';
{ METHOD .Fd.AddCustomField }
Script83.AddCustomField(SFTime94);
SFBool95 := TSFBool.CreateUndefined(Script83, false, 'isLoaded');
SFBool95.Appinfo := 'possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE';
{ METHOD .Fd.AddCustomField }
Script83.AddCustomField(SFBool95);
SFBool96 := TSFBool.CreateUndefined(Script83, false, 'traceEnabled');
SFBool96.Appinfo := 'debug trace to Browser output console';
{ METHOD .Fd.AddCustomField }
Script83.AddCustomField(SFBool96);
SFInt3297 := TSFInt32.CreateUndefined(Script83, false, 'numberPoseJoints');
SFInt3297.Appinfo := 'number of joints found in children field';
SFInt3297.Value := '0';
{ METHOD .Fd.AddCustomField }
Script83.AddCustomField(SFInt3297);
SFInt3298 := TSFInt32.CreateUndefined(Script83, false, 'numberSkeletonJoints');
SFInt3298.Appinfo := 'number of joints found in Humanoid';
SFInt3298.Value := '0';
{ METHOD .Fd.AddCustomField }
Script83.AddCustomField(SFInt3298);
MFNode99 := TMFNode.CreateUndefined(Script83, false, 'jointOrientationInterpolators');
MFNode99.Appinfo := 'OrientationInterpolator node array matching number of children';
{ initializating Joint nodes (if any) go here }
{ METHOD .Fd.AddCustomField }
Script83.AddCustomField(MFNode99);
IS100 := TIS.Create;
connect101 := Tconnect.Create;
connect101.NodeField := 'parentHAnimHumanoid';
connect101.ProtoField := 'parentHAnimHumanoid';
{ METHOD .Connect }
IS100.Connect := connect101;
connect102 := Tconnect.Create;
connect102.NodeField := 'name';
connect102.ProtoField := 'name';
{ METHOD .Connect }
IS100.Connect := connect102;
connect103 := Tconnect.Create;
connect103.NodeField := 'loa';
connect103.ProtoField := 'loa';
{ METHOD .Connect }
IS100.Connect := connect103;
connect104 := Tconnect.Create;
connect104.NodeField := 'description';
connect104.ProtoField := 'description';
{ METHOD .Connect }
IS100.Connect := connect104;
end;

procedure InitHAnimPosePrototypePart6;
begin

connect105 := Tconnect.Create;
connect105.NodeField := 'enabled';
connect105.ProtoField := 'enabled';
{ METHOD .Connect }
IS100.Connect := connect105;
connect106 := Tconnect.Create;
connect106.NodeField := 'resetAllJoints';
connect106.ProtoField := 'resetAllJoints';
{ METHOD .Connect }
IS100.Connect := connect106;
connect107 := Tconnect.Create;
connect107.NodeField := 'children';
connect107.ProtoField := 'children';
{ METHOD .Connect }
IS100.Connect := connect107;
connect108 := Tconnect.Create;
connect108.NodeField := 'transitionDuration';
connect108.ProtoField := 'transitionDuration';
{ METHOD .Connect }
IS100.Connect := connect108;
connect109 := Tconnect.Create;
connect109.NodeField := 'commencePose';
connect109.ProtoField := 'commencePose';
{ METHOD .Connect }
IS100.Connect := connect109;
connect110 := Tconnect.Create;
connect110.NodeField := 'set_fraction';
connect110.ProtoField := 'set_fraction';
{ METHOD .Connect }
IS100.Connect := connect110;
connect111 := Tconnect.Create;
connect111.NodeField := 'set_startTime';
connect111.ProtoField := 'set_startTime';
{ METHOD .Connect }
IS100.Connect := connect111;
connect112 := Tconnect.Create;
connect112.NodeField := 'isLoaded';
connect112.ProtoField := 'isLoaded';
{ METHOD .Connect }
IS100.Connect := connect112;
connect113 := Tconnect.Create;
connect113.NodeField := 'traceEnabled';
connect113.ProtoField := 'traceEnabled';
{ METHOD .Connect }
IS100.Connect := connect113;
{ METHOD .Fd.AddCustomField }
Script83.AddCustomField(IS100);
{ METHOD .AddScript }
X3DPrototype68.AddScript([Script83]);
{ METHOD .AddX3DPrototype }
X3DPrototype51.AddX3DPrototype([X3DPrototype68]);
{ METHOD .AddX3DPrototype }
Group42.AddX3DPrototype([X3DPrototype51]);
end;

procedure InitHAnimPosePrototypePart7;
begin

Viewpoint114 := TViewpointNode.Create;
Viewpoint114.Description := 'HAnimPose for HumanoidInline IMPORT model';
Viewpoint114.Position := Vector3(0,1,4);
{ METHOD .FdChildren.Add }
Group42.FdChildren.Add(Viewpoint114);
{ no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc... }
X3DPrototype115 := TX3DPrototypeNode.Create;
SFString116 := TSFString.CreateUndefined(X3DPrototype115, false, 'name');
SFString116.Value := 'T';
{ METHOD .AddSFString }
X3DPrototype115.AddSFString([SFString116]);
SFBool117 := TSFBool.CreateUndefined(X3DPrototype115, false, 'enabled');
SFBool117.Value := 'true';
{ METHOD .AddSFBool }
X3DPrototype115.AddSFBool([SFBool117]);
SFNode118 := TSFNode.CreateUndefined(X3DPrototype115, false, 'parentHAnimHumanoid');
{ HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model) }
{ debug test case for incorrect node type: <HAnimJoint DEF="ErrorDiagnosticsTest" USE='HumanoidImported'/> }
HAnimHumanoid119 := 'HAnimHumanoid119';
{ METHOD .Fd.Value }
SFNode118.Value := HAnimHumanoid119;
{ METHOD .AddSFNode }
X3DPrototype115.AddSFNode([SFNode118]);
SFInt32120 := TSFInt32.CreateUndefined(X3DPrototype115, false, 'loa');
SFInt32120.Value := '1';
{ METHOD .AddSFInt32 }
X3DPrototype115.AddSFInt32([SFInt32120]);
SFString121 := TSFString.CreateUndefined(X3DPrototype115, false, 'description');
SFString121.Value := 'arms stretched outward and level similar to letter T';
{ METHOD .AddSFString }
X3DPrototype115.AddSFString([SFString121]);
MFNode122 := TMFNode.CreateUndefined(X3DPrototype115, false, 'children');
HAnimJoint123 := THAnimJointNode.Create;
HAnimJoint123.Description := 'left shoulder';
HAnimJoint123.Rotation := Vector4(0,0,1,1.57);
{ METHOD .AddHAnimJoint }
MFNode122.AddHAnimJoint([HAnimJoint123]);
HAnimJoint124 := THAnimJointNode.Create;
HAnimJoint124.Description := 'right shoulder';
HAnimJoint124.Rotation := Vector4(0,0,-1,1.57);
{ METHOD .AddHAnimJoint }
MFNode122.AddHAnimJoint([HAnimJoint124]);
{ test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/ }
{ METHOD .AddMFNode }
X3DPrototype115.AddMFNode([MFNode122]);
SFTime125 := TSFTime.CreateUndefined(X3DPrototype115, false, 'transitionDuration');
SFTime125.Value := '1.3';
{ METHOD .AddSFTime }
X3DPrototype115.AddSFTime([SFTime125]);
{ METHOD .AddX3DPrototype }
Group42.AddX3DPrototype([X3DPrototype115]);
X3DPrototype126 := TX3DPrototypeNode.Create;
SFString127 := TSFString.CreateUndefined(X3DPrototype126, false, 'name');
SFString127.Value := 'A';
{ METHOD .AddSFString }
X3DPrototype126.AddSFString([SFString127]);
SFBool128 := TSFBool.CreateUndefined(X3DPrototype126, false, 'enabled');
end;

procedure InitHAnimPosePrototypePart8;
begin

SFBool128.Value := 'true';
{ METHOD .AddSFBool }
X3DPrototype126.AddSFBool([SFBool128]);
SFNode129 := TSFNode.CreateUndefined(X3DPrototype126, false, 'parentHAnimHumanoid');
{ HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model) }
{ METHOD .Fd.Value }
SFNode129.Value := HAnimHumanoid119;
{ METHOD .AddSFNode }
X3DPrototype126.AddSFNode([SFNode129]);
SFInt32131 := TSFInt32.CreateUndefined(X3DPrototype126, false, 'loa');
SFInt32131.Value := '1';
{ METHOD .AddSFInt32 }
X3DPrototype126.AddSFInt32([SFInt32131]);
SFString132 := TSFString.CreateUndefined(X3DPrototype126, false, 'description');
SFString132.Value := 'arms stretched outward and downward similar to letter A';
{ METHOD .AddSFString }
X3DPrototype126.AddSFString([SFString132]);
MFNode133 := TMFNode.CreateUndefined(X3DPrototype126, false, 'children');
HAnimJoint134 := THAnimJointNode.Create;
HAnimJoint134.Description := 'left shoulder';
HAnimJoint134.Rotation := Vector4(0,0,1,0.5);
{ METHOD .AddHAnimJoint }
MFNode133.AddHAnimJoint([HAnimJoint134]);
HAnimJoint135 := THAnimJointNode.Create;
HAnimJoint135.Description := 'right shoulder';
HAnimJoint135.Rotation := Vector4(0,0,-1,0.5);
{ METHOD .AddHAnimJoint }
MFNode133.AddHAnimJoint([HAnimJoint135]);
{ METHOD .AddMFNode }
X3DPrototype126.AddMFNode([MFNode133]);
SFTime136 := TSFTime.CreateUndefined(X3DPrototype126, false, 'transitionDuration');
SFTime136.Value := '1.2';
{ METHOD .AddSFTime }
X3DPrototype126.AddSFTime([SFTime136]);
SFBool137 := TSFBool.CreateUndefined(X3DPrototype126, false, 'traceEnabled');
SFBool137.Value := 'true';
{ METHOD .AddSFBool }
X3DPrototype126.AddSFBool([SFBool137]);
{ METHOD .AddX3DPrototype }
Group42.AddX3DPrototype([X3DPrototype126]);
X3DPrototype138 := TX3DPrototypeNode.Create;
{ thanks Joe }
SFString139 := TSFString.CreateUndefined(X3DPrototype138, false, 'name');
SFString139.Value := 'TouchDown';
{ METHOD .AddSFString }
X3DPrototype138.AddSFString([SFString139]);
SFBool140 := TSFBool.CreateUndefined(X3DPrototype138, false, 'enabled');
SFBool140.Value := 'true';
{ METHOD .AddSFBool }
X3DPrototype138.AddSFBool([SFBool140]);
SFNode141 := TSFNode.CreateUndefined(X3DPrototype138, false, 'parentHAnimHumanoid');
{ HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model) }
{ METHOD .Fd.Value }
SFNode141.Value := HAnimHumanoid119;
{ METHOD .AddSFNode }
X3DPrototype138.AddSFNode([SFNode141]);
SFInt32143 := TSFInt32.CreateUndefined(X3DPrototype138, false, 'loa');
SFInt32143.Value := '1';
end;

procedure InitHAnimPosePrototypePart9;
begin

{ METHOD .AddSFInt32 }
X3DPrototype138.AddSFInt32([SFInt32143]);
SFString144 := TSFString.CreateUndefined(X3DPrototype138, false, 'description');
SFString144.Value := 'arms and legs stretched outward providing a TouchDown gesture';
{ METHOD .AddSFString }
X3DPrototype138.AddSFString([SFString144]);
MFNode145 := TMFNode.CreateUndefined(X3DPrototype138, false, 'children');
HAnimJoint146 := THAnimJointNode.Create;
HAnimJoint146.Rotation := Vector4(0,1,0,-0.698132);
{ METHOD .AddHAnimJoint }
MFNode145.AddHAnimJoint([HAnimJoint146]);
HAnimJoint147 := THAnimJointNode.Create;
HAnimJoint147.Rotation := Vector4(-1,1,1,1);
{ METHOD .AddHAnimJoint }
MFNode145.AddHAnimJoint([HAnimJoint147]);
HAnimJoint148 := THAnimJointNode.Create;
HAnimJoint148.Rotation := Vector4(1,0,0,1);
{ METHOD .AddHAnimJoint }
MFNode145.AddHAnimJoint([HAnimJoint148]);
HAnimJoint149 := THAnimJointNode.Create;
HAnimJoint149.Rotation := Vector4(-0.2,0,0.1,0.225);
{ METHOD .AddHAnimJoint }
MFNode145.AddHAnimJoint([HAnimJoint149]);
HAnimJoint150 := THAnimJointNode.Create;
HAnimJoint150.Rotation := Vector4(-1,-1,-1,1);
{ METHOD .AddHAnimJoint }
MFNode145.AddHAnimJoint([HAnimJoint150]);
HAnimJoint151 := THAnimJointNode.Create;
HAnimJoint151.Rotation := Vector4(1,0,0,1);
{ METHOD .AddHAnimJoint }
MFNode145.AddHAnimJoint([HAnimJoint151]);
HAnimJoint152 := THAnimJointNode.Create;
HAnimJoint152.Rotation := Vector4(-0.2,0,0.1,0.25);
{ METHOD .AddHAnimJoint }
MFNode145.AddHAnimJoint([HAnimJoint152]);
HAnimJoint153 := THAnimJointNode.Create;
HAnimJoint153.Rotation := Vector4(0,0,0.01,0.2);
{ METHOD .AddHAnimJoint }
MFNode145.AddHAnimJoint([HAnimJoint153]);
HAnimJoint154 := THAnimJointNode.Create;
HAnimJoint154.Rotation := Vector4(0,0,0.01,0.1);
{ METHOD .AddHAnimJoint }
MFNode145.AddHAnimJoint([HAnimJoint154]);
HAnimJoint155 := THAnimJointNode.Create;
HAnimJoint155.Rotation := Vector4(0,0,-0.01,0.15);
{ METHOD .AddHAnimJoint }
MFNode145.AddHAnimJoint([HAnimJoint155]);
HAnimJoint156 := THAnimJointNode.Create;
HAnimJoint156.Rotation := Vector4(-1,0.5,1,2);
{ METHOD .AddHAnimJoint }
MFNode145.AddHAnimJoint([HAnimJoint156]);
HAnimJoint157 := THAnimJointNode.Create;
HAnimJoint157.Rotation := Vector4(-1,0,0,1);
end;

procedure InitHAnimPosePrototypePart10;
begin

{ METHOD .AddHAnimJoint }
MFNode145.AddHAnimJoint([HAnimJoint157]);
HAnimJoint158 := THAnimJointNode.Create;
{ METHOD .AddHAnimJoint }
MFNode145.AddHAnimJoint([HAnimJoint158]);
HAnimJoint159 := THAnimJointNode.Create;
HAnimJoint159.Rotation := Vector4(-1,-0.5,-1,2.6);
{ METHOD .AddHAnimJoint }
MFNode145.AddHAnimJoint([HAnimJoint159]);
HAnimJoint160 := THAnimJointNode.Create;
HAnimJoint160.Rotation := Vector4(-1,0,0,1);
{ METHOD .AddHAnimJoint }
MFNode145.AddHAnimJoint([HAnimJoint160]);
HAnimJoint161 := THAnimJointNode.Create;
{ METHOD .AddHAnimJoint }
MFNode145.AddHAnimJoint([HAnimJoint161]);
{ METHOD .AddMFNode }
X3DPrototype138.AddMFNode([MFNode145]);
SFTime162 := TSFTime.CreateUndefined(X3DPrototype138, false, 'transitionDuration');
SFTime162.Value := '1.2';
{ METHOD .AddSFTime }
X3DPrototype138.AddSFTime([SFTime162]);
SFBool163 := TSFBool.CreateUndefined(X3DPrototype138, false, 'traceEnabled');
SFBool163.Value := 'true';
{ METHOD .AddSFBool }
X3DPrototype138.AddSFBool([SFBool163]);
{ METHOD .AddX3DPrototype }
Group42.AddX3DPrototype([X3DPrototype138]);
X3DPrototype164 := TX3DPrototypeNode.Create;
SFString165 := TSFString.CreateUndefined(X3DPrototype164, false, 'name');
SFString165.Value := 'I';
{ METHOD .AddSFString }
X3DPrototype164.AddSFString([SFString165]);
SFBool166 := TSFBool.CreateUndefined(X3DPrototype164, false, 'enabled');
SFBool166.Value := 'true';
{ METHOD .AddSFBool }
X3DPrototype164.AddSFBool([SFBool166]);
SFNode167 := TSFNode.CreateUndefined(X3DPrototype164, false, 'parentHAnimHumanoid');
{ HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model) }
{ METHOD .Fd.Value }
SFNode167.Value := HAnimHumanoid119;
{ METHOD .AddSFNode }
X3DPrototype164.AddSFNode([SFNode167]);
SFInt32169 := TSFInt32.CreateUndefined(X3DPrototype164, false, 'loa');
SFInt32169.Value := '1';
{ METHOD .AddSFInt32 }
X3DPrototype164.AddSFInt32([SFInt32169]);
SFString170 := TSFString.CreateUndefined(X3DPrototype164, false, 'description');
SFString170.Value := 'arms and legs straight down default binding pose for baseline Humanoid';
{ METHOD .AddSFString }
X3DPrototype164.AddSFString([SFString170]);
MFNode171 := TMFNode.CreateUndefined(X3DPrototype164, false, 'children');
{ not defining any children equals the default "I" pose }
{ METHOD .AddMFNode }
X3DPrototype164.AddMFNode([MFNode171]);
SFTime172 := TSFTime.CreateUndefined(X3DPrototype164, false, 'transitionDuration');
SFTime172.Value := '1.5';
{ METHOD .AddSFTime }
X3DPrototype164.AddSFTime([SFTime172]);
end;

procedure InitHAnimPosePrototypePart11;
begin

SFBool173 := TSFBool.CreateUndefined(X3DPrototype164, false, 'traceEnabled');
SFBool173.Value := 'true';
{ METHOD .AddSFBool }
X3DPrototype164.AddSFBool([SFBool173]);
{ METHOD .AddX3DPrototype }
Group42.AddX3DPrototype([X3DPrototype164]);
X3DPrototype174 := TX3DPrototypeNode.Create;
SFString175 := TSFString.CreateUndefined(X3DPrototype174, false, 'name');
SFString175.Value := 'H';
{ METHOD .AddSFString }
X3DPrototype174.AddSFString([SFString175]);
SFBool176 := TSFBool.CreateUndefined(X3DPrototype174, false, 'enabled');
SFBool176.Value := 'false';
{ METHOD .AddSFBool }
X3DPrototype174.AddSFBool([SFBool176]);
SFString177 := TSFString.CreateUndefined(X3DPrototype174, false, 'description');
SFString177.Value := 'TODO experimental pose not yet implemented';
{ METHOD .AddSFString }
X3DPrototype174.AddSFString([SFString177]);
SFTime178 := TSFTime.CreateUndefined(X3DPrototype174, false, 'transitionDuration');
SFTime178.Value := '1.4';
{ METHOD .AddSFTime }
X3DPrototype174.AddSFTime([SFTime178]);
SFBool179 := TSFBool.CreateUndefined(X3DPrototype174, false, 'traceEnabled');
SFBool179.Value := 'true';
{ METHOD .AddSFBool }
X3DPrototype174.AddSFBool([SFBool179]);
{ <fieldValue name='loa' value='1'/> }
{ METHOD .AddX3DPrototype }
Group42.AddX3DPrototype([X3DPrototype174]);
X3DPrototype180 := TX3DPrototypeNode.Create;
SFString181 := TSFString.CreateUndefined(X3DPrototype180, false, 'name');
SFString181.Value := 'FaceLeft';
{ METHOD .AddSFString }
X3DPrototype180.AddSFString([SFString181]);
SFBool182 := TSFBool.CreateUndefined(X3DPrototype180, false, 'enabled');
SFBool182.Value := 'true';
{ METHOD .AddSFBool }
X3DPrototype180.AddSFBool([SFBool182]);
SFNode183 := TSFNode.CreateUndefined(X3DPrototype180, false, 'parentHAnimHumanoid');
{ HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model) }
{ METHOD .Fd.Value }
SFNode183.Value := HAnimHumanoid119;
{ METHOD .AddSFNode }
X3DPrototype180.AddSFNode([SFNode183]);
SFInt32185 := TSFInt32.CreateUndefined(X3DPrototype180, false, 'loa');
SFInt32185.Value := '0';
{ METHOD .AddSFInt32 }
X3DPrototype180.AddSFInt32([SFInt32185]);
SFString186 := TSFString.CreateUndefined(X3DPrototype180, false, 'description');
SFString186.Value := 'Only modify humanoid_root Joint node to face left';
{ METHOD .AddSFString }
X3DPrototype180.AddSFString([SFString186]);
MFNode187 := TMFNode.CreateUndefined(X3DPrototype180, false, 'children');
HAnimJoint188 := THAnimJointNode.Create;
HAnimJoint188.Description := 'Only rotate the model';
end;

procedure InitHAnimPosePrototypePart12;
begin

HAnimJoint188.Rotation := Vector4(0,1,0,1.570796);
{ METHOD .AddHAnimJoint }
MFNode187.AddHAnimJoint([HAnimJoint188]);
{ METHOD .AddMFNode }
X3DPrototype180.AddMFNode([MFNode187]);
SFTime189 := TSFTime.CreateUndefined(X3DPrototype180, false, 'transitionDuration');
SFTime189.Value := '1.1';
{ METHOD .AddSFTime }
X3DPrototype180.AddSFTime([SFTime189]);
SFBool190 := TSFBool.CreateUndefined(X3DPrototype180, false, 'traceEnabled');
SFBool190.Value := 'true';
{ METHOD .AddSFBool }
X3DPrototype180.AddSFBool([SFBool190]);
{ METHOD .AddX3DPrototype }
Group42.AddX3DPrototype([X3DPrototype180]);
X3DPrototype191 := TX3DPrototypeNode.Create;
SFString192 := TSFString.CreateUndefined(X3DPrototype191, false, 'name');
SFString192.Value := 'FaceRight';
{ METHOD .AddSFString }
X3DPrototype191.AddSFString([SFString192]);
SFBool193 := TSFBool.CreateUndefined(X3DPrototype191, false, 'enabled');
SFBool193.Value := 'true';
{ METHOD .AddSFBool }
X3DPrototype191.AddSFBool([SFBool193]);
SFNode194 := TSFNode.CreateUndefined(X3DPrototype191, false, 'parentHAnimHumanoid');
{ HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model) }
{ METHOD .Fd.Value }
SFNode194.Value := HAnimHumanoid119;
{ METHOD .AddSFNode }
X3DPrototype191.AddSFNode([SFNode194]);
SFInt32196 := TSFInt32.CreateUndefined(X3DPrototype191, false, 'loa');
SFInt32196.Value := '0';
{ METHOD .AddSFInt32 }
X3DPrototype191.AddSFInt32([SFInt32196]);
SFString197 := TSFString.CreateUndefined(X3DPrototype191, false, 'description');
SFString197.Value := 'Only modify humanoid_root Joint node to face right';
{ METHOD .AddSFString }
X3DPrototype191.AddSFString([SFString197]);
MFNode198 := TMFNode.CreateUndefined(X3DPrototype191, false, 'children');
HAnimJoint199 := THAnimJointNode.Create;
HAnimJoint199.Description := 'Only rotate the model';
HAnimJoint199.Rotation := Vector4(0,1,0,-1.570796);
{ METHOD .AddHAnimJoint }
MFNode198.AddHAnimJoint([HAnimJoint199]);
{ METHOD .AddMFNode }
X3DPrototype191.AddMFNode([MFNode198]);
SFTime200 := TSFTime.CreateUndefined(X3DPrototype191, false, 'transitionDuration');
SFTime200.Value := '1.1';
{ METHOD .AddSFTime }
X3DPrototype191.AddSFTime([SFTime200]);
SFBool201 := TSFBool.CreateUndefined(X3DPrototype191, false, 'traceEnabled');
SFBool201.Value := 'true';
{ METHOD .AddSFBool }
X3DPrototype191.AddSFBool([SFBool201]);
{ METHOD .AddX3DPrototype }
Group42.AddX3DPrototype([X3DPrototype191]);
Group202 := TGroupNode.Create;
end;

procedure InitHAnimPosePrototypePart13;
begin

Transform203 := TTransformNode.Create;
Transform203.Translation := Vector3(0,2,0);
Shape204 := TShapeNode.Create;
Text205 := TTextNode.Create;
Text205.SetText(['HAnimPosePrototype example implementation']);
FontStyle206 := TFontStyleNode.Create;
FontStyle206.Family := ffSANS;
FontStyle206.Justify := fjMIDDLE;
FontStyle206.JustifyMinor := fjMIDDLE;
FontStyle206.Size := 0.15;
FontStyle206.Style := fsBOLD;
{ METHOD .FontStyle }
Text205.FontStyle := FontStyle206;
{ METHOD .Geometry }
Shape204.Geometry := Text205;
Appearance207 := TAppearanceNode.Create;
Material208 := TMaterialNode.Create;
Material208.DiffuseColor := Vector3(0.1,0.5,0.3);
{ METHOD .SetMaterial }
Appearance207.Material := Material208;
{ METHOD .Appearance }
Shape204.Appearance := Appearance207;
{ METHOD .FdChildren.Add }
Transform203.FdChildren.Add(Shape204);
{ METHOD .FdChildren.Add }
Group202.FdChildren.Add(Transform203);
Transform209 := TTransformNode.Create;
Transform209.Translation := Vector3(-1.5,1.5,0);
Shape210 := TShapeNode.Create;
Text211 := TTextNode.Create;
Text211.SetText(['"T" Pose']);
FontStyle212 := TFontStyleNode.Create;
FontStyle212.Family := ffSANS;
FontStyle212.Justify := fjMIDDLE;
FontStyle212.JustifyMinor := fjMIDDLE;
FontStyle212.Size := 0.1;
FontStyle212.Style := fsBOLD;
{ METHOD .FontStyle }
Text211.FontStyle := FontStyle212;
{ METHOD .Geometry }
Shape210.Geometry := Text211;
{ METHOD .Appearance }
Shape210.Appearance := Appearance207;
{ METHOD .FdChildren.Add }
Transform209.FdChildren.Add(Shape210);
Shape214 := TShapeNode.Create;
Appearance215 := TAppearanceNode.Create;
Material216 := TMaterialNode.Create;
Material216.Transparency := 0.8;
{ METHOD .SetMaterial }
Appearance215.Material := Material216;
end;

procedure InitHAnimPosePrototypePart14;
begin

{ METHOD .Appearance }
Shape214.Appearance := Appearance215;
Box217 := TBoxNode.Create;
Box217.Size := Vector3(0.45,0.2,0.001);
{ METHOD .Geometry }
Shape214.Geometry := Box217;
{ METHOD .FdChildren.Add }
Transform209.FdChildren.Add(Shape214);
TouchSensor218 := TTouchSensorNode.Create;
TouchSensor218.Description := 'select to move shoulders to \"T\" pose, leave other joints unchanged';
{ METHOD .FdChildren.Add }
Transform209.FdChildren.Add(TouchSensor218);
{ Original "T_PoseTouchSensor.EventIsActive TO T_Pose.commencePose }
{ Sample T_PoseTouchSensor.EventIsActive TO T_Pose.commencePose}
Transform209.AddRoute(TouchSensor218.EventIsActive, X3DPrototype115.set_commencePose);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group202.FdChildren.Add(Transform209);
Transform220 := TTransformNode.Create;
Transform220.Translation := Vector3(-1.5,1,0);
Shape221 := TShapeNode.Create;
Text222 := TTextNode.Create;
Text222.SetText(['"A" Pose']);
{ METHOD .FontStyle }
Text222.FontStyle := FontStyle212;
{ METHOD .Geometry }
Shape221.Geometry := Text222;
{ METHOD .Appearance }
Shape221.Appearance := Appearance207;
{ METHOD .FdChildren.Add }
Transform220.FdChildren.Add(Shape221);
Shape225 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
{ METHOD .Appearance }
Shape225.Appearance := Appearance215;
Box227 := TBoxNode.Create;
Box227.Size := Vector3(0.45,0.2,0.001);
{ METHOD .Geometry }
Shape225.Geometry := Box227;
{ METHOD .FdChildren.Add }
Transform220.FdChildren.Add(Shape225);
TouchSensor228 := TTouchSensorNode.Create;
TouchSensor228.Description := 'select to move shoulders to \"A\" pose, leave other joints unchanged';
{ METHOD .FdChildren.Add }
Transform220.FdChildren.Add(TouchSensor228);
{ Original "A_PoseTouchSensor.EventIsActive TO A_Pose.commencePose }
{ Sample A_PoseTouchSensor.EventIsActive TO A_Pose.commencePose}
Transform220.AddRoute(TouchSensor228.EventIsActive, X3DPrototype126.set_commencePose);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group202.FdChildren.Add(Transform220);
Transform230 := TTransformNode.Create;
Transform230.Translation := Vector3(-1.5,0.5,0);
Shape231 := TShapeNode.Create;
Text232 := TTextNode.Create;
Text232.SetText(['TouchDown Pose']);
{ METHOD .FontStyle }
Text232.FontStyle := FontStyle212;
{ METHOD .Geometry }
Shape231.Geometry := Text232;
{ METHOD .Appearance }
Shape231.Appearance := Appearance207;
{ METHOD .FdChildren.Add }
Transform230.FdChildren.Add(Shape231);
Shape235 := TShapeNode.Create;
end;

procedure InitHAnimPosePrototypePart15;
begin

{ Selectable Text transparent Box for easy user selection }
{ METHOD .Appearance }
Shape235.Appearance := Appearance215;
Box237 := TBoxNode.Create;
Box237.Size := Vector3(0.85,0.2,0.001);
{ METHOD .Geometry }
Shape235.Geometry := Box237;
{ METHOD .FdChildren.Add }
Transform230.FdChildren.Add(Shape235);
TouchSensor238 := TTouchSensorNode.Create;
TouchSensor238.Description := 'select to transition all joints to TouchDown pose';
{ METHOD .FdChildren.Add }
Transform230.FdChildren.Add(TouchSensor238);
{ Original "TouchDown_PoseTouchSensor.EventIsActive TO TouchDown_Pose.commencePose }
{ Sample TouchDown_PoseTouchSensor.EventIsActive TO TouchDown_Pose.commencePose}
Transform230.AddRoute(TouchSensor238.EventIsActive, X3DPrototype138.set_commencePose);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group202.FdChildren.Add(Transform230);
Transform240 := TTransformNode.Create;
Transform240.Translation := Vector3(-1.5,0,0);
Shape241 := TShapeNode.Create;
Text242 := TTextNode.Create;
Text242.SetText(['"I" Pose']);
{ METHOD .FontStyle }
Text242.FontStyle := FontStyle212;
{ METHOD .Geometry }
Shape241.Geometry := Text242;
{ METHOD .Appearance }
Shape241.Appearance := Appearance207;
{ METHOD .FdChildren.Add }
Transform240.FdChildren.Add(Shape241);
Shape245 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
{ METHOD .Appearance }
Shape245.Appearance := Appearance215;
Box247 := TBoxNode.Create;
Box247.Size := Vector3(0.45,0.2,0.001);
{ METHOD .Geometry }
Shape245.Geometry := Box247;
{ METHOD .FdChildren.Add }
Transform240.FdChildren.Add(Shape245);
TouchSensor248 := TTouchSensorNode.Create;
TouchSensor248.Description := 'select to transition all joints to \"I\" pose';
{ METHOD .FdChildren.Add }
Transform240.FdChildren.Add(TouchSensor248);
{ Original "I_PoseTouchSensor.EventIsActive TO I_Pose.commencePose }
{ Sample I_PoseTouchSensor.EventIsActive TO I_Pose.commencePose}
Transform240.AddRoute(TouchSensor248.EventIsActive, X3DPrototype164.set_commencePose);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group202.FdChildren.Add(Transform240);
Transform250 := TTransformNode.Create;
Transform250.Translation := Vector3(1.5,1.5,0);
Shape251 := TShapeNode.Create;
Text252 := TTextNode.Create;
Text252.SetText(['Face Left Pose']);
{ METHOD .FontStyle }
Text252.FontStyle := FontStyle212;
{ METHOD .Geometry }
Shape251.Geometry := Text252;
{ METHOD .Appearance }
Shape251.Appearance := Appearance207;
{ METHOD .FdChildren.Add }
Transform250.FdChildren.Add(Shape251);
Shape255 := TShapeNode.Create;
end;

procedure InitHAnimPosePrototypePart16;
begin

{ METHOD .Appearance }
Shape255.Appearance := Appearance215;
Box257 := TBoxNode.Create;
Box257.Size := Vector3(0.9,0.2,0.001);
{ METHOD .Geometry }
Shape255.Geometry := Box257;
{ METHOD .FdChildren.Add }
Transform250.FdChildren.Add(Shape255);
TouchSensor258 := TTouchSensorNode.Create;
TouchSensor258.Description := 'select to rotate body and Face Left, leave other joints unchanged';
{ METHOD .FdChildren.Add }
Transform250.FdChildren.Add(TouchSensor258);
{ Original "FaceLeftTouchSensor.EventIsActive TO FaceLeft_Pose.commencePose }
{ Sample FaceLeftTouchSensor.EventIsActive TO FaceLeft_Pose.commencePose}
Transform250.AddRoute(TouchSensor258.EventIsActive, X3DPrototype180.set_commencePose);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group202.FdChildren.Add(Transform250);
Transform260 := TTransformNode.Create;
Transform260.Translation := Vector3(1.5,1,0);
Shape261 := TShapeNode.Create;
Text262 := TTextNode.Create;
Text262.SetText(['Face Right Pose']);
{ METHOD .FontStyle }
Text262.FontStyle := FontStyle212;
{ METHOD .Geometry }
Shape261.Geometry := Text262;
{ METHOD .Appearance }
Shape261.Appearance := Appearance207;
{ METHOD .FdChildren.Add }
Transform260.FdChildren.Add(Shape261);
Shape265 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
{ METHOD .Appearance }
Shape265.Appearance := Appearance215;
Box267 := TBoxNode.Create;
Box267.Size := Vector3(0.9,0.2,0.001);
{ METHOD .Geometry }
Shape265.Geometry := Box267;
{ METHOD .FdChildren.Add }
Transform260.FdChildren.Add(Shape265);
TouchSensor268 := TTouchSensorNode.Create;
TouchSensor268.Description := 'select to rotate body and Face Right, leave other joints unchanged';
{ METHOD .FdChildren.Add }
Transform260.FdChildren.Add(TouchSensor268);
{ Original "FaceRightTouchSensor.EventIsActive TO FaceRight_Pose.commencePose }
{ Sample FaceRightTouchSensor.EventIsActive TO FaceRight_Pose.commencePose}
Transform260.AddRoute(TouchSensor268.EventIsActive, X3DPrototype191.set_commencePose);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group202.FdChildren.Add(Transform260);
Transform270 := TTransformNode.Create;
Transform270.Translation := Vector3(1.5,0.5,0);
Shape271 := TShapeNode.Create;
Text272 := TTextNode.Create;
Text272.SetText(['Direct animation','to, from "I" Pose']);
{ METHOD .FontStyle }
Text272.FontStyle := FontStyle212;
{ METHOD .Geometry }
Shape271.Geometry := Text272;
Appearance274 := TAppearanceNode.Create;
Material275 := TMaterialNode.Create;
Material275.DiffuseColor := Vector3(0.1,0.2,0.3);
end;

procedure InitHAnimPosePrototypePart17;
begin

{ METHOD .SetMaterial }
Appearance274.Material := Material275;
{ METHOD .Appearance }
Shape271.Appearance := Appearance274;
{ METHOD .FdChildren.Add }
Transform270.FdChildren.Add(Shape271);
Shape276 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
{ METHOD .Appearance }
Shape276.Appearance := Appearance215;
Box278 := TBoxNode.Create;
Box278.Size := Vector3(0.9,0.25,0.001);
{ METHOD .Geometry }
Shape276.Geometry := Box278;
{ METHOD .FdChildren.Add }
Transform270.FdChildren.Add(Shape276);
TouchSensor279 := TTouchSensorNode.Create;
TouchSensor279.Description := 'select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events';
{ METHOD .FdChildren.Add }
Transform270.FdChildren.Add(TouchSensor279);
{ cycleInterval=4 also hard-coded in script execution message }
TimeSensor280 := TTimeSensorNode.Create;
TimeSensor280.CycleInterval := 4;
TimeSensor280.Description := 'directly animate several poses';
{ METHOD .FdChildren.Add }
Transform270.FdChildren.Add(TimeSensor280);
ScalarInterpolator281 := TScalarInterpolatorNode.Create;
ScalarInterpolator281.SetKey([0,0.05,0.45,0.55,0.95,1]);
ScalarInterpolator281.SetKeyValue([0,0,1,1,0,0]);
{ METHOD .FdChildren.Add }
Transform270.FdChildren.Add(ScalarInterpolator281);
{ Original "AnimatePosesTouchSensor.EventTouchTime TO AnimatePosesClock.startTime }
{ Sample AnimatePosesTouchSensor.EventTouchTime TO AnimatePosesClock.startTime}
Transform270.AddRoute(TouchSensor279.EventTouchTime, TimeSensor280.set_startTime);
{ METHOD .AddX3DROUTE }
{ Original "AnimatePosesClock.EventFraction_changed TO AnimatePosesLoopInterpolator.EventSet_fraction }
{ Sample AnimatePosesClock.EventFraction_changed TO AnimatePosesLoopInterpolator.EventSet_fraction}
Transform270.AddRoute(TimeSensor280.EventFraction_changed, ScalarInterpolator281.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "AnimatePosesLoopInterpolator.EventValue_changed TO I_Pose.EventSet_fraction }
{ Sample AnimatePosesLoopInterpolator.EventValue_changed TO I_Pose.EventSet_fraction}
Transform270.AddRoute(ScalarInterpolator281.EventValue_changed, X3DPrototype164.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group202.FdChildren.Add(Transform270);
Transform285 := TTransformNode.Create;
Transform285.Translation := Vector3(1.5,0,0);
Shape286 := TShapeNode.Create;
Text287 := TTextNode.Create;
Text287.SetText(['Reset All Joints','to Default "I" Pose']);
{ METHOD .FontStyle }
Text287.FontStyle := FontStyle212;
{ METHOD .Geometry }
Shape286.Geometry := Text287;
{ METHOD .Appearance }
Shape286.Appearance := Appearance274;
{ METHOD .FdChildren.Add }
Transform285.FdChildren.Add(Shape286);
Shape290 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
{ METHOD .Appearance }
Shape290.Appearance := Appearance215;
Box292 := TBoxNode.Create;
Box292.Size := Vector3(0.9,0.25,0.001);
{ METHOD .Geometry }
Shape290.Geometry := Box292;
{ METHOD .FdChildren.Add }
Transform285.FdChildren.Add(Shape290);
TouchSensor293 := TTouchSensorNode.Create;
end;

procedure InitHAnimPosePrototypePart18;
begin

TouchSensor293.Description := 'select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event';
{ METHOD .FdChildren.Add }
Transform285.FdChildren.Add(TouchSensor293);
{ Original "ResetPoseTouchSensor.EventIsActive TO FaceLeft_Pose.resetAllJoints }
{ Sample ResetPoseTouchSensor.EventIsActive TO FaceLeft_Pose.resetAllJoints}
Transform285.AddRoute(TouchSensor293.EventIsActive, X3DPrototype180.set_resetAllJoints);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group202.FdChildren.Add(Transform285);
{ METHOD .FdChildren.Add }
Group42.FdChildren.Add(Group202);
Group295 := TGroupNode.Create;
{ Original "HumanoidInlineLoadSensor.EventIsLoaded TO A_Pose.isLoaded }
{ Sample HumanoidInlineLoadSensor.EventIsLoaded TO A_Pose.isLoaded}
Group295.AddRoute(LoadSensor49.EventIsLoaded, X3DPrototype126.set_isLoaded);
{ METHOD .AddX3DROUTE }
{ Original "HumanoidInlineLoadSensor.EventIsLoaded TO H_Pose.isLoaded }
{ Sample HumanoidInlineLoadSensor.EventIsLoaded TO H_Pose.isLoaded}
Group295.AddRoute(LoadSensor49.EventIsLoaded, X3DPrototype174.set_isLoaded);
{ METHOD .AddX3DROUTE }
{ Original "HumanoidInlineLoadSensor.EventIsLoaded TO I_Pose.isLoaded }
{ Sample HumanoidInlineLoadSensor.EventIsLoaded TO I_Pose.isLoaded}
Group295.AddRoute(LoadSensor49.EventIsLoaded, X3DPrototype164.set_isLoaded);
{ METHOD .AddX3DROUTE }
{ Original "HumanoidInlineLoadSensor.EventIsLoaded TO T_Pose.isLoaded }
{ Sample HumanoidInlineLoadSensor.EventIsLoaded TO T_Pose.isLoaded}
Group295.AddRoute(LoadSensor49.EventIsLoaded, X3DPrototype115.set_isLoaded);
{ METHOD .AddX3DROUTE }
{ Original "HumanoidInlineLoadSensor.EventIsLoaded TO FaceLeft_Pose.isLoaded }
{ Sample HumanoidInlineLoadSensor.EventIsLoaded TO FaceLeft_Pose.isLoaded}
Group295.AddRoute(LoadSensor49.EventIsLoaded, X3DPrototype180.set_isLoaded);
{ METHOD .AddX3DROUTE }
{ Original "HumanoidInlineLoadSensor.EventIsLoaded TO FaceRight_Pose.isLoaded }
{ Sample HumanoidInlineLoadSensor.EventIsLoaded TO FaceRight_Pose.isLoaded}
Group295.AddRoute(LoadSensor49.EventIsLoaded, X3DPrototype191.set_isLoaded);
{ METHOD .AddX3DROUTE }
{ Original "HumanoidInlineLoadSensor.EventIsLoaded TO TouchDown_Pose.isLoaded }
{ Sample HumanoidInlineLoadSensor.EventIsLoaded TO TouchDown_Pose.isLoaded}
Group295.AddRoute(LoadSensor49.EventIsLoaded, X3DPrototype138.set_isLoaded);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group42.FdChildren.Add(Group295);
Transform303 := TTransformNode.Create;
Transform303.Scale := Vector3(0.05,0.05,0.05);
Inline304 := TInlineNode.Create;
Inline304.SetUrl(['../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d','../../../Savage/Tools/Authoring/CoordinateAxes.x3d','https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d','https://www.web3d.org/x3d/content/examples/Savage/Tools/Authoring/CoordinateAxes.x3d','../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl','../../../Savage/Tools/Authoring/CoordinateAxes.wrl','https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl','https://www.web3d.org/x3d/content/examples/Savage/Tools/Authoring/CoordinateAxes.wrl']);
{ METHOD .FdChildren.Add }
Transform303.FdChildren.Add(Inline304);
{ METHOD .FdChildren.Add }
Group42.FdChildren.Add(Transform303);
Transform305 := TTransformNode.Create;
Transform305.Translation := Vector3(0,-0.15,0);
Shape306 := TShapeNode.Create;
Text307 := TTextNode.Create;
Text307.SetText(['humanoid','origin']);
FontStyle308 := TFontStyleNode.Create;
FontStyle308.Family := ffSANS;
FontStyle308.Justify := fjMIDDLE;
FontStyle308.JustifyMinor := fjMIDDLE;
FontStyle308.Size := 0.05;
FontStyle308.Style := fsBOLD;
{ METHOD .FontStyle }
Text307.FontStyle := FontStyle308;
{ METHOD .Geometry }
Shape306.Geometry := Text307;
Appearance309 := TAppearanceNode.Create;
Material310 := TMaterialNode.Create;
Material310.DiffuseColor := Vector3(0.3,0.3,0.3);
{ METHOD .SetMaterial }
Appearance309.Material := Material310;
{ METHOD .Appearance }
Shape306.Appearance := Appearance309;
{ METHOD .FdChildren.Add }
Transform305.FdChildren.Add(Shape306);
{ METHOD .FdChildren.Add }
Group42.FdChildren.Add(Transform305);
end;

procedure InitHAnimPosePrototypePart19;
begin

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
