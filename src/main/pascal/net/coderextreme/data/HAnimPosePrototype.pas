unit HAnimPosePrototype;

interface

uses X3DNodes;

function CreateHAnimPosePrototype: TX3DRootNode;

implementation

uses CastleVectors;

function CreateHAnimPosePrototype: TX3DRootNode;
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
X3DField53: TX3DField;
X3DField54: TX3DField;
X3DField55: TX3DField;
X3DField56: TX3DField;
X3DField57: TX3DField;
X3DField58: TX3DField;
X3DField59: TX3DField;
X3DField60: TX3DField;
X3DField61: TX3DField;
X3DField62: TX3DField;
X3DField63: TX3DField;
X3DField64: TX3DField;
X3DField65: TX3DField;
X3DField66: TX3DField;
X3DField67: TX3DField;
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
X3DField84: TX3DField;
X3DField85: TX3DField;
X3DField86: TX3DField;
X3DField87: TX3DField;
X3DField88: TX3DField;
X3DField89: TX3DField;
X3DField90: TX3DField;
X3DField91: TX3DField;
X3DField92: TX3DField;
X3DField93: TX3DField;
X3DField94: TX3DField;
X3DField95: TX3DField;
X3DField96: TX3DField;
X3DField97: TX3DField;
X3DField98: TX3DField;
X3DField99: TX3DField;
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
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'HAnimPosePrototype.x3d';
X3D0.Meta['description'] := 'Define an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed.';
X3D0.Meta['info'] := 'This model also takes advantage of Inline/IMPORT capabilities (equivalent to USE node) and thus avoids fully copying a large, complex HAnimHumanoid model. Multiple HAnimHumanoid models have been tested satisfactorily, for HAnim version 1 (X3d 3) AND HAnim version 2 (X3D 4).';
X3D0.Meta['created'] := '2 October 2025';
X3D0.Meta['modified'] := '26 April 2026';
X3D0.Meta['creator'] := 'Don Brutzman';
X3D0.Meta['creator'] := 'Joe Williams';
X3D0.Meta['contributor'] := 'Holger Seelig for X_ITE, Sunrize on Windows, scripting guidance, and Inline IMPORT functionality as node-reference equivalent to USE';
X3D0.Meta['reference'] := 'HAnimPosePrototype.console.txt';
X3D0.Meta['MovingImage'] := 'demonstration video https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeDemoVideo.mp4';
X3D0.Meta['Image'] := 'HAnimPoseExampleTouchDown.png';
X3D0.Meta['Image'] := 'HAnimPoseExampleTouchDownFaceLeftAPose.png';
X3D0.Meta['Image'] := 'images/HAnimPoseExampleBoxMan1.png';
X3D0.Meta['Image'] := 'images/HAnimPoseExampleBoxMan2.png';
X3D0.Meta['Image'] := 'images/HAnimPoseExampleJoeKick.png';
X3D0.Meta['Image'] := 'images/HAnimPoseExampleJoeSkeletonSkinSite.png';
X3D0.Meta['Image'] := 'images/HAnimPoseExampleKoreanCharacter01Jin.png';
X3D0.Meta['Image'] := 'images/HAnimPoseExampleKoreanCharacter02Chul.png';
X3D0.Meta['Image'] := 'images/HAnimPoseExampleKoreanCharacter03Hyun.png';
X3D0.Meta['Image'] := 'images/HAnimPoseExampleKoreanCharacter04Young.png';
X3D0.Meta['Image'] := 'images/HAnimPoseExampleKoreanCharacter05Ju.png';
X3D0.Meta['Image'] := 'images/HAnimPoseExampleKoreanCharacter06Ga.png';
X3D0.Meta['Image'] := 'images/HAnimPoseExampleKoreanCharacter07No.png';
X3D0.Meta['Image'] := 'images/HAnimPoseExampleKoreanCharacter08Da.png';
X3D0.Meta['Image'] := 'images/HAnimPoseExampleKoreanCharacter09Ru.png';
X3D0.Meta['Image'] := 'images/HAnimPoseExampleKoreanCharacter10Mi.png';
X3D0.Meta['Image'] := 'images/HAnimPoseExampleKoreanCharacter11Min.png';
X3D0.Meta['Image'] := 'images/HAnimPoseExampleKoreanCharacter12Sun.png';
X3D0.Meta['specificationSection'] := 'HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose';
X3D0.Meta['specificationUrl'] := 'https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose';
X3D0.Meta['specificationSection'] := 'HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures';
X3D0.Meta['specificationUrl'] := 'https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures';
X3D0.Meta['specificationSection'] := 'HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses';
X3D0.Meta['specificationUrl'] := 'https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses';
X3D0.Meta['reference'] := 'Direct scene manipulations with Javascript, https://doc.instantreality.org/tutorial/direct-scene-manipulations-with-javascript';
X3D0.Meta['reference'] := 'earlier version of this prototype: originals/HAnimPosePreliminary.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit';
X3D0.Meta['generator'] := 'Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototype.x3d';
X3D0.Meta['license'] := 'https://www.web3d.org/x3d/content/examples/license.html';
Group42 := TGroupNode.Create;
WorldInfo43 := TWorldInfoNode.Create;
WorldInfo43.SetInfo(['Design to illustrate a potential HAnimPose node']);
WorldInfo43.Title := 'HAnimPosePrototype.x3d';
{ .AddChildren }
Group42.AddChildren([WorldInfo43]);
Background44 := TBackgroundNode.Create;
Background44.SetSkyColor([Vector3(0.8,0.8,1)]);
{ .AddChildren }
Group42.AddChildren([Background44]);
NavigationInfo45 := TNavigationInfoNode.Create;
{ .AddChildren }
Group42.AddChildren([NavigationInfo45]);
Group46 := TGroupNode.Create;
{ Multiple HAnimHumanoid Inline/IMPORT models are available to support testing: Characters/ JinLOA1 JinLOA2 JinLOA3 JinLOA4 ../Skin/JoeKick ../Skin/JoeSkeletonSkinSite ../Skin/BoxMan1 ../Skin/BoxMan2 }
{ Also tested satisfactorily: KoreanCharacter01Jin KoreanCharacter02Chul KoreanCharacter03Hyun KoreanCharacter04Young KoreanCharacter05Ju KoreanCharacter06Ga KoreanCharacter07No KoreanCharacter08Da KoreanCharacter09Ru KoreanCharacter10Mi KoreanCharacter11Min KoreanCharacter12Sun }
Inline47 := TInlineNode.Create;
Inline47.Description := 'remote HAnimHumanoid for IMPORT';
Inline47.SetUrl(['../Skin/BoxMan2.x3d','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/BoxMan2.x3d']);
{ .AddChildren }
Group46.AddChildren([Inline47]);
{ Note that the following importedDEF must match the EXPORT name found in remote file }
IMPORT48 := TIMPORTNode.Create;
IMPORT48.AS := 'HumanoidImported';
IMPORT48.ImportedDEF := 'BoxMan2';
IMPORT48.InlineDEF := 'HumanoidInline';
{ .AddChildren }
Group46.AddChildren([IMPORT48]);
LoadSensor49 := TLoadSensorNode.Create;
LoadSensor49.TimeOut := 2;
Inline50 := Inline47;
{ .AddChildren }
LoadSensor49.AddChildren([Inline50]);
{ .AddChildren }
Group46.AddChildren([LoadSensor49]);
{ .AddChildren }
Group42.AddChildren([Group46]);
X3DPrototype51 := TX3DPrototype.Create;
X3DPrototype51.NameField := 'HAnimPose';
X3DPrototype51.Appinfo := 'Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values.';
X3DInterfaceDeclaration52 := TX3DInterfaceDeclaration.Create(nil);
X3DField53 := TX3DField.Create;
X3DField53.NameField := 'parentHAnimHumanoid';
X3DField53.AccessType := 'inputOutput';
X3DField53.Appinfo := 'HAnimHumanoid for this Pose to act upon';
X3DField53.Type := 'SFNode';
{ HAnimHumanoid initialization node goes here, this field is only used in the prototype implementation }
{ .SetX3DField }
X3DInterfaceDeclaration52.X3DField := X3DField53;
X3DField54 := TX3DField.Create;
X3DField54.NameField := 'name';
X3DField54.AccessType := 'inputOutput';
X3DField54.Appinfo := 'name of this pose';
X3DField54.Type := 'SFString';
X3DField54.Value := 'newPoseName';
{ .AddX3DField }
X3DInterfaceDeclaration52.X3DField := X3DField54;
X3DField55 := TX3DField.Create;
X3DField55.NameField := 'children';
X3DField55.AccessType := 'inputOutput';
X3DField55.Appinfo := 'joint values to apply to HAnimHumanoid';
X3DField55.Type := 'MFNode';
{ initializating Joint nodes (if any) go here }
{ .AddX3DField }
X3DInterfaceDeclaration52.X3DField := X3DField55;
X3DField56 := TX3DField.Create;
X3DField56.NameField := 'description';
X3DField56.AccessType := 'inputOutput';
X3DField56.Appinfo := 'explanation of purpose';
X3DField56.Type := 'SFString';
{ .AddX3DField }
X3DInterfaceDeclaration52.X3DField := X3DField56;
X3DField57 := TX3DField.Create;
X3DField57.NameField := 'enabled';
X3DField57.AccessType := 'inputOutput';
X3DField57.Appinfo := 'default value true';
X3DField57.Type := 'SFBool';
X3DField57.Value := 'true';
{ .AddX3DField }
X3DInterfaceDeclaration52.X3DField := X3DField57;
X3DField58 := TX3DField.Create;
X3DField58.NameField := 'loa';
X3DField58.AccessType := 'initializeOnly';
X3DField58.Appinfo := 'default is no loa';
X3DField58.Type := 'SFInt32';
X3DField58.Value := '-1';
{ .AddX3DField }
X3DInterfaceDeclaration52.X3DField := X3DField58;
X3DField59 := TX3DField.Create;
X3DField59.NameField := 'transitionDuration';
X3DField59.AccessType := 'inputOutput';
X3DField59.Appinfo := 'how many seconds to achieve the pose';
X3DField59.Type := 'SFTime';
X3DField59.Value := '0';
{ .AddX3DField }
X3DInterfaceDeclaration52.X3DField := X3DField59;
X3DField60 := TX3DField.Create;
X3DField60.NameField := 'metadata';
X3DField60.AccessType := 'inputOutput';
X3DField60.Appinfo := 'single Metadata* node';
X3DField60.Type := 'SFNode';
{ .AddX3DField }
X3DInterfaceDeclaration52.X3DField := X3DField60;
X3DField61 := TX3DField.Create;
X3DField61.NameField := 'isActive';
X3DField61.AccessType := 'outputOnly';
X3DField61.Appinfo := 'event indicating when pose transition is active';
X3DField61.Type := 'SFBool';
{ .AddX3DField }
X3DInterfaceDeclaration52.X3DField := X3DField61;
X3DField62 := TX3DField.Create;
X3DField62.NameField := 'commencePose';
X3DField62.AccessType := 'inputOnly';
X3DField62.Appinfo := 'this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1';
X3DField62.Type := 'SFBool';
{ .AddX3DField }
X3DInterfaceDeclaration52.X3DField := X3DField62;
X3DField63 := TX3DField.Create;
X3DField63.NameField := 'resetAllJoints';
X3DField63.AccessType := 'inputOnly';
X3DField63.Appinfo := 'reset the skeleton to I pose with all joints zeroed';
X3DField63.Type := 'SFBool';
{ .AddX3DField }
X3DInterfaceDeclaration52.X3DField := X3DField63;
X3DField64 := TX3DField.Create;
X3DField64.NameField := 'set_fraction';
X3DField64.AccessType := 'inputOnly';
X3DField64.Appinfo := 'allows transition to proceed incrementally from fraction [0..10';
X3DField64.Type := 'SFFloat';
{ .AddX3DField }
X3DInterfaceDeclaration52.X3DField := X3DField64;
X3DField65 := TX3DField.Create;
X3DField65.NameField := 'set_startTime';
X3DField65.AccessType := 'inputOnly';
X3DField65.Appinfo := 'starts the animation clock';
X3DField65.Type := 'SFTime';
{ .AddX3DField }
X3DInterfaceDeclaration52.X3DField := X3DField65;
X3DField66 := TX3DField.Create;
X3DField66.NameField := 'isLoaded';
X3DField66.AccessType := 'inputOnly';
X3DField66.Appinfo := 'possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE';
X3DField66.Type := 'SFBool';
{ .AddX3DField }
X3DInterfaceDeclaration52.X3DField := X3DField66;
X3DField67 := TX3DField.Create;
X3DField67.NameField := 'traceEnabled';
X3DField67.AccessType := 'inputOutput';
X3DField67.Appinfo := 'debug trace to Browser output console this is a local prototype field';
X3DField67.Type := 'SFBool';
X3DField67.Value := 'true';
{ .AddX3DField }
X3DInterfaceDeclaration52.X3DField := X3DField67;
{ .SetX3DInterfaceDeclaration }
X3DPrototype51.X3DInterfaceDeclaration := X3DInterfaceDeclaration52;
X3DPrototype68 := TX3DPrototype.Create;
TimeSensor69 := TTimeSensorNode.Create;
TimeSensor69.Description := 'control timing of pose animation when triggered';
IS70 := TIS.Create;
connect71 := Tconnect.Create;
connect71.NodeField := 'enabled';
connect71.ProtoField := 'enabled';
{ .AddConnect }
IS70.Connect := connect71;
connect72 := Tconnect.Create;
connect72.NodeField := 'cycleInterval';
connect72.ProtoField := 'transitionDuration';
{ .AddConnect }
IS70.Connect := connect72;
connect73 := Tconnect.Create;
connect73.NodeField := 'isActive';
connect73.ProtoField := 'isActive';
{ .AddConnect }
IS70.Connect := connect73;
connect74 := Tconnect.Create;
connect74.NodeField := 'startTime';
connect74.ProtoField := 'set_startTime';
{ .AddConnect }
IS70.Connect := connect74;
connect75 := Tconnect.Create;
connect75.NodeField := 'metadata';
connect75.ProtoField := 'metadata';
{ .AddConnect }
IS70.Connect := connect75;
{ .SetIS }
TimeSensor69.IS := IS70;
{ .SetTimeSensor }
X3DPrototype68.TimeSensor := TimeSensor69;
TimeSensor76 := TTimeSensorNode.Create;
TimeSensor76.Description := 'control timing of skeleton reset to \"A\" pose when triggered';
IS77 := TIS.Create;
connect78 := Tconnect.Create;
connect78.NodeField := 'enabled';
connect78.ProtoField := 'enabled';
{ .AddConnect }
IS77.Connect := connect78;
connect79 := Tconnect.Create;
connect79.NodeField := 'cycleInterval';
connect79.ProtoField := 'transitionDuration';
{ .AddConnect }
IS77.Connect := connect79;
connect80 := Tconnect.Create;
connect80.NodeField := 'startTime';
connect80.ProtoField := 'set_startTime';
{ .AddConnect }
IS77.Connect := connect80;
{ no need to report isActive since that would be duplicative }
{ .SetIS }
TimeSensor76.IS := IS77;
{ .AddTimeSensor }
X3DPrototype68.TimeSensor := TimeSensor76;
Group81 := TGroupNode.Create;
{ interpolators generated by prototype script appear here at runtime }
{ .AddGroup }
X3DPrototype68.AddChildren([Group81]);
Group82 := TGroupNode.Create;
{ interpolators generated by prototype script appear here at runtime }
{ .AddGroup }
X3DPrototype68.AddChildren([Group82]);
Script83 := TScriptNode.Create;
Script83.DirectOutput := True;
Script83.SetUrl(['HAnimPosePrototypeScript.js','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeScript.js']);
X3DField84 := TX3DField.Create;
X3DField84.NameField := 'parentHAnimHumanoid';
X3DField84.AccessType := 'inputOutput';
X3DField84.Appinfo := 'Humanoid for this Pose to act upon';
X3DField84.Type := 'SFNode';
{ initialization node (if any) goes here }
{ .SetX3DField }
Script83.X3DField := X3DField84;
X3DField85 := TX3DField.Create;
X3DField85.NameField := 'name';
X3DField85.AccessType := 'inputOutput';
X3DField85.Appinfo := 'name of this pose';
X3DField85.Type := 'SFString';
{ .AddX3DField }
Script83.X3DField := X3DField85;
X3DField86 := TX3DField.Create;
X3DField86.NameField := 'loa';
X3DField86.AccessType := 'initializeOnly';
X3DField86.Appinfo := 'default is no loa';
X3DField86.Type := 'SFInt32';
{ .AddX3DField }
Script83.X3DField := X3DField86;
X3DField87 := TX3DField.Create;
X3DField87.NameField := 'description';
X3DField87.AccessType := 'inputOutput';
X3DField87.Appinfo := 'explanation of purpose';
X3DField87.Type := 'SFString';
{ .AddX3DField }
Script83.X3DField := X3DField87;
X3DField88 := TX3DField.Create;
X3DField88.NameField := 'enabled';
X3DField88.AccessType := 'inputOutput';
X3DField88.Appinfo := 'default value true';
X3DField88.Type := 'SFBool';
{ .AddX3DField }
Script83.X3DField := X3DField88;
X3DField89 := TX3DField.Create;
X3DField89.NameField := 'resetAllJoints';
X3DField89.AccessType := 'inputOnly';
X3DField89.Appinfo := 'reset the skeleton to I pose with all joints zeroed';
X3DField89.Type := 'SFBool';
{ .AddX3DField }
Script83.X3DField := X3DField89;
X3DField90 := TX3DField.Create;
X3DField90.NameField := 'children';
X3DField90.AccessType := 'inputOutput';
X3DField90.Appinfo := 'joint values to apply to HAnimHumanoid';
X3DField90.Type := 'MFNode';
{ initializating Joint nodes (if any) go here }
{ .AddX3DField }
Script83.X3DField := X3DField90;
X3DField91 := TX3DField.Create;
X3DField91.NameField := 'transitionDuration';
X3DField91.AccessType := 'inputOutput';
X3DField91.Appinfo := 'how many seconds to achieve the pose';
X3DField91.Type := 'SFTime';
{ .AddX3DField }
Script83.X3DField := X3DField91;
X3DField92 := TX3DField.Create;
X3DField92.NameField := 'commencePose';
X3DField92.AccessType := 'inputOnly';
X3DField92.Appinfo := 'this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1';
X3DField92.Type := 'SFBool';
{ .AddX3DField }
Script83.X3DField := X3DField92;
X3DField93 := TX3DField.Create;
X3DField93.NameField := 'set_fraction';
X3DField93.AccessType := 'inputOnly';
X3DField93.Appinfo := 'allows transition to proceed incrementally from fraction [0..10';
X3DField93.Type := 'SFFloat';
{ .AddX3DField }
Script83.X3DField := X3DField93;
X3DField94 := TX3DField.Create;
X3DField94.NameField := 'set_startTime';
X3DField94.AccessType := 'inputOnly';
X3DField94.Appinfo := 'starts the animation clock';
X3DField94.Type := 'SFTime';
{ .AddX3DField }
Script83.X3DField := X3DField94;
X3DField95 := TX3DField.Create;
X3DField95.NameField := 'isLoaded';
X3DField95.AccessType := 'inputOnly';
X3DField95.Appinfo := 'possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE';
X3DField95.Type := 'SFBool';
{ .AddX3DField }
Script83.X3DField := X3DField95;
X3DField96 := TX3DField.Create;
X3DField96.NameField := 'traceEnabled';
X3DField96.AccessType := 'inputOutput';
X3DField96.Appinfo := 'debug trace to Browser output console';
X3DField96.Type := 'SFBool';
{ .AddX3DField }
Script83.X3DField := X3DField96;
X3DField97 := TX3DField.Create;
X3DField97.NameField := 'numberPoseJoints';
X3DField97.AccessType := 'initializeOnly';
X3DField97.Appinfo := 'number of joints found in children field';
X3DField97.Type := 'SFInt32';
X3DField97.Value := '0';
{ .AddX3DField }
Script83.X3DField := X3DField97;
X3DField98 := TX3DField.Create;
X3DField98.NameField := 'numberSkeletonJoints';
X3DField98.AccessType := 'initializeOnly';
X3DField98.Appinfo := 'number of joints found in Humanoid';
X3DField98.Type := 'SFInt32';
X3DField98.Value := '0';
{ .AddX3DField }
Script83.X3DField := X3DField98;
X3DField99 := TX3DField.Create;
X3DField99.NameField := 'jointOrientationInterpolators';
X3DField99.AccessType := 'initializeOnly';
X3DField99.Appinfo := 'OrientationInterpolator node array matching number of children';
X3DField99.Type := 'MFNode';
{ initializating Joint nodes (if any) go here }
{ .AddX3DField }
Script83.X3DField := X3DField99;
IS100 := TIS.Create;
connect101 := Tconnect.Create;
connect101.NodeField := 'parentHAnimHumanoid';
connect101.ProtoField := 'parentHAnimHumanoid';
{ .AddConnect }
IS100.Connect := connect101;
connect102 := Tconnect.Create;
connect102.NodeField := 'name';
connect102.ProtoField := 'name';
{ .AddConnect }
IS100.Connect := connect102;
connect103 := Tconnect.Create;
connect103.NodeField := 'loa';
connect103.ProtoField := 'loa';
{ .AddConnect }
IS100.Connect := connect103;
connect104 := Tconnect.Create;
connect104.NodeField := 'description';
connect104.ProtoField := 'description';
{ .AddConnect }
IS100.Connect := connect104;
connect105 := Tconnect.Create;
connect105.NodeField := 'enabled';
connect105.ProtoField := 'enabled';
{ .AddConnect }
IS100.Connect := connect105;
connect106 := Tconnect.Create;
connect106.NodeField := 'resetAllJoints';
connect106.ProtoField := 'resetAllJoints';
{ .AddConnect }
IS100.Connect := connect106;
connect107 := Tconnect.Create;
connect107.NodeField := 'children';
connect107.ProtoField := 'children';
{ .AddConnect }
IS100.Connect := connect107;
connect108 := Tconnect.Create;
connect108.NodeField := 'transitionDuration';
connect108.ProtoField := 'transitionDuration';
{ .AddConnect }
IS100.Connect := connect108;
connect109 := Tconnect.Create;
connect109.NodeField := 'commencePose';
connect109.ProtoField := 'commencePose';
{ .AddConnect }
IS100.Connect := connect109;
connect110 := Tconnect.Create;
connect110.NodeField := 'set_fraction';
connect110.ProtoField := 'set_fraction';
{ .AddConnect }
IS100.Connect := connect110;
connect111 := Tconnect.Create;
connect111.NodeField := 'set_startTime';
connect111.ProtoField := 'set_startTime';
{ .AddConnect }
IS100.Connect := connect111;
connect112 := Tconnect.Create;
connect112.NodeField := 'isLoaded';
connect112.ProtoField := 'isLoaded';
{ .AddConnect }
IS100.Connect := connect112;
connect113 := Tconnect.Create;
connect113.NodeField := 'traceEnabled';
connect113.ProtoField := 'traceEnabled';
{ .AddConnect }
IS100.Connect := connect113;
{ .SetIS }
Script83.IS := IS100;
{ .AddScript }
X3DPrototype68.Script := Script83;
{ .AddX3DPrototype }
X3DPrototype51.X3DPrototype := X3DPrototype68;
{ .AddX3DPrototype }
Group42.X3DPrototype := X3DPrototype51;
Viewpoint114 := TViewpointNode.Create;
Viewpoint114.Description := 'HAnimPose for HumanoidInline IMPORT model';
Viewpoint114.Position := Vector3(0,1,4);
{ .AddChildren }
Group42.AddChildren([Viewpoint114]);
{ no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc... }
X3DPrototype115 := TX3DPrototypeNode.Create;
X3DPrototype115.NameField := 'HAnimPose';
SFString116 := TSFString.Create(HAnimPose1, false, 'name', 'T');
SFString116.NameField := 'name';
SFString116.Value := 'T';
{ .SetSFString }
X3DPrototype115.SFString := SFString116;
SFBool117 := TSFBool.Create(HAnimPose1, false, 'enabled', True);
SFBool117.NameField := 'enabled';
SFBool117.Value := 'true';
{ .AddSFBool }
X3DPrototype115.SFBool := SFBool117;
SFNode118 := TSFNode.Create;
SFNode118.NameField := 'parentHAnimHumanoid';
{ HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model) }
{ debug test case for incorrect node type: <HAnimJoint DEF="ErrorDiagnosticsTest" USE='HumanoidImported'/> }
HAnimHumanoid119 := HAnimHumanoid119;
{ .AddHAnimHumanoid }
SFNode118.HAnimHumanoid := HAnimHumanoid119;
{ .AddSFNode }
X3DPrototype115.SFNode := SFNode118;
SFInt32120 := TSFInt32.Create(HAnimPose1, false, 'loa', 1);
SFInt32120.NameField := 'loa';
SFInt32120.Value := '1';
{ .AddSFInt32 }
X3DPrototype115.SFInt32 := SFInt32120;
SFString121 := TSFString.Create(HAnimPose1, false, 'description', 'arms stretched outward and level similar to letter T');
SFString121.NameField := 'description';
SFString121.Value := 'arms stretched outward and level similar to letter T';
{ .AddSFString }
X3DPrototype115.SFString := SFString121;
MFNode122 := TMFNode.Create;
MFNode122.NameField := 'children';
HAnimJoint123 := THAnimJointNode.Create;
HAnimJoint123.NameField := 'l_shoulder';
HAnimJoint123.Description := 'left shoulder';
HAnimJoint123.Rotation := Vector4(0,0,1,1.57);
{ .SetHAnimJoint }
MFNode122.HAnimJoint := HAnimJoint123;
HAnimJoint124 := THAnimJointNode.Create;
HAnimJoint124.NameField := 'r_shoulder';
HAnimJoint124.Description := 'right shoulder';
HAnimJoint124.Rotation := Vector4(0,0,-1,1.57);
{ .AddHAnimJoint }
MFNode122.HAnimJoint := HAnimJoint124;
{ test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/ }
{ .AddMFNode }
X3DPrototype115.MFNode := MFNode122;
SFTime125 := TSFTime.Create(HAnimPose1, false, 'transitionDuration', 1.3);
SFTime125.NameField := 'transitionDuration';
SFTime125.Value := '1.3';
{ .AddSFTime }
X3DPrototype115.SFTime := SFTime125;
{ .AddX3DPrototype }
Group42.X3DPrototype := X3DPrototype115;
X3DPrototype126 := TX3DPrototypeNode.Create;
X3DPrototype126.NameField := 'HAnimPose';
SFString127 := TSFString.Create(HAnimPose1, false, 'name', 'A');
SFString127.NameField := 'name';
SFString127.Value := 'A';
{ .SetSFString }
X3DPrototype126.SFString := SFString127;
SFBool128 := TSFBool.Create(HAnimPose1, false, 'enabled', True);
SFBool128.NameField := 'enabled';
SFBool128.Value := 'true';
{ .AddSFBool }
X3DPrototype126.SFBool := SFBool128;
SFNode129 := TSFNode.Create;
SFNode129.NameField := 'parentHAnimHumanoid';
{ HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model) }
HAnimHumanoid130 := HAnimHumanoid119;
{ .AddHAnimHumanoid }
SFNode129.HAnimHumanoid := HAnimHumanoid130;
{ .AddSFNode }
X3DPrototype126.SFNode := SFNode129;
SFInt32131 := TSFInt32.Create(HAnimPose1, false, 'loa', 1);
SFInt32131.NameField := 'loa';
SFInt32131.Value := '1';
{ .AddSFInt32 }
X3DPrototype126.SFInt32 := SFInt32131;
SFString132 := TSFString.Create(HAnimPose1, false, 'description', 'arms stretched outward and downward similar to letter A');
SFString132.NameField := 'description';
SFString132.Value := 'arms stretched outward and downward similar to letter A';
{ .AddSFString }
X3DPrototype126.SFString := SFString132;
MFNode133 := TMFNode.Create;
MFNode133.NameField := 'children';
HAnimJoint134 := THAnimJointNode.Create;
HAnimJoint134.NameField := 'l_shoulder';
HAnimJoint134.Description := 'left shoulder';
HAnimJoint134.Rotation := Vector4(0,0,1,0.5);
{ .SetHAnimJoint }
MFNode133.HAnimJoint := HAnimJoint134;
HAnimJoint135 := THAnimJointNode.Create;
HAnimJoint135.NameField := 'r_shoulder';
HAnimJoint135.Description := 'right shoulder';
HAnimJoint135.Rotation := Vector4(0,0,-1,0.5);
{ .AddHAnimJoint }
MFNode133.HAnimJoint := HAnimJoint135;
{ .AddMFNode }
X3DPrototype126.MFNode := MFNode133;
SFTime136 := TSFTime.Create(HAnimPose1, false, 'transitionDuration', 1.2);
SFTime136.NameField := 'transitionDuration';
SFTime136.Value := '1.2';
{ .AddSFTime }
X3DPrototype126.SFTime := SFTime136;
SFBool137 := TSFBool.Create(HAnimPose1, false, 'traceEnabled', True);
SFBool137.NameField := 'traceEnabled';
SFBool137.Value := 'true';
{ .AddSFBool }
X3DPrototype126.SFBool := SFBool137;
{ .AddX3DPrototype }
Group42.X3DPrototype := X3DPrototype126;
X3DPrototype138 := TX3DPrototypeNode.Create;
X3DPrototype138.NameField := 'HAnimPose';
{ thanks Joe }
SFString139 := TSFString.Create(HAnimPose1, false, 'name', 'TouchDown');
SFString139.NameField := 'name';
SFString139.Value := 'TouchDown';
{ .AddSFString }
X3DPrototype138.SFString := SFString139;
SFBool140 := TSFBool.Create(HAnimPose1, false, 'enabled', True);
SFBool140.NameField := 'enabled';
SFBool140.Value := 'true';
{ .AddSFBool }
X3DPrototype138.SFBool := SFBool140;
SFNode141 := TSFNode.Create;
SFNode141.NameField := 'parentHAnimHumanoid';
{ HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model) }
HAnimHumanoid142 := HAnimHumanoid119;
{ .AddHAnimHumanoid }
SFNode141.HAnimHumanoid := HAnimHumanoid142;
{ .AddSFNode }
X3DPrototype138.SFNode := SFNode141;
SFInt32143 := TSFInt32.Create(HAnimPose1, false, 'loa', 1);
SFInt32143.NameField := 'loa';
SFInt32143.Value := '1';
{ .AddSFInt32 }
X3DPrototype138.SFInt32 := SFInt32143;
SFString144 := TSFString.Create(HAnimPose1, false, 'description', 'arms and legs stretched outward providing a TouchDown gesture');
SFString144.NameField := 'description';
SFString144.Value := 'arms and legs stretched outward providing a TouchDown gesture';
{ .AddSFString }
X3DPrototype138.SFString := SFString144;
MFNode145 := TMFNode.Create;
MFNode145.NameField := 'children';
HAnimJoint146 := THAnimJointNode.Create;
HAnimJoint146.NameField := 'humanoid_root';
HAnimJoint146.Rotation := Vector4(0,1,0,-0.698132);
{ .SetHAnimJoint }
MFNode145.HAnimJoint := HAnimJoint146;
HAnimJoint147 := THAnimJointNode.Create;
HAnimJoint147.NameField := 'l_hip';
HAnimJoint147.Rotation := Vector4(-1,1,1,1);
{ .AddHAnimJoint }
MFNode145.HAnimJoint := HAnimJoint147;
HAnimJoint148 := THAnimJointNode.Create;
HAnimJoint148.NameField := 'l_knee';
HAnimJoint148.Rotation := Vector4(1,0,0,1);
{ .AddHAnimJoint }
MFNode145.HAnimJoint := HAnimJoint148;
HAnimJoint149 := THAnimJointNode.Create;
HAnimJoint149.NameField := 'l_talocrural';
HAnimJoint149.Rotation := Vector4(-0.2,0,0.1,0.225);
{ .AddHAnimJoint }
MFNode145.HAnimJoint := HAnimJoint149;
HAnimJoint150 := THAnimJointNode.Create;
HAnimJoint150.NameField := 'r_hip';
HAnimJoint150.Rotation := Vector4(-1,-1,-1,1);
{ .AddHAnimJoint }
MFNode145.HAnimJoint := HAnimJoint150;
HAnimJoint151 := THAnimJointNode.Create;
HAnimJoint151.NameField := 'r_knee';
HAnimJoint151.Rotation := Vector4(1,0,0,1);
{ .AddHAnimJoint }
MFNode145.HAnimJoint := HAnimJoint151;
HAnimJoint152 := THAnimJointNode.Create;
HAnimJoint152.NameField := 'r_talocrural';
HAnimJoint152.Rotation := Vector4(-0.2,0,0.1,0.25);
{ .AddHAnimJoint }
MFNode145.HAnimJoint := HAnimJoint152;
HAnimJoint153 := THAnimJointNode.Create;
HAnimJoint153.NameField := 'vl5';
HAnimJoint153.Rotation := Vector4(0,0,0.01,0.2);
{ .AddHAnimJoint }
MFNode145.HAnimJoint := HAnimJoint153;
HAnimJoint154 := THAnimJointNode.Create;
HAnimJoint154.NameField := 'vt10';
HAnimJoint154.Rotation := Vector4(0,0,0.01,0.1);
{ .AddHAnimJoint }
MFNode145.HAnimJoint := HAnimJoint154;
HAnimJoint155 := THAnimJointNode.Create;
HAnimJoint155.NameField := 'vc4';
HAnimJoint155.Rotation := Vector4(0,0,-0.01,0.15);
{ .AddHAnimJoint }
MFNode145.HAnimJoint := HAnimJoint155;
HAnimJoint156 := THAnimJointNode.Create;
HAnimJoint156.NameField := 'l_shoulder';
HAnimJoint156.Rotation := Vector4(-1,0.5,1,2);
{ .AddHAnimJoint }
MFNode145.HAnimJoint := HAnimJoint156;
HAnimJoint157 := THAnimJointNode.Create;
HAnimJoint157.NameField := 'l_elbow';
HAnimJoint157.Rotation := Vector4(-1,0,0,1);
{ .AddHAnimJoint }
MFNode145.HAnimJoint := HAnimJoint157;
HAnimJoint158 := THAnimJointNode.Create;
HAnimJoint158.NameField := 'l_radiocarpal';
{ .AddHAnimJoint }
MFNode145.HAnimJoint := HAnimJoint158;
HAnimJoint159 := THAnimJointNode.Create;
HAnimJoint159.NameField := 'r_shoulder';
HAnimJoint159.Rotation := Vector4(-1,-0.5,-1,2.6);
{ .AddHAnimJoint }
MFNode145.HAnimJoint := HAnimJoint159;
HAnimJoint160 := THAnimJointNode.Create;
HAnimJoint160.NameField := 'r_elbow';
HAnimJoint160.Rotation := Vector4(-1,0,0,1);
{ .AddHAnimJoint }
MFNode145.HAnimJoint := HAnimJoint160;
HAnimJoint161 := THAnimJointNode.Create;
HAnimJoint161.NameField := 'r_radiocarpal';
{ .AddHAnimJoint }
MFNode145.HAnimJoint := HAnimJoint161;
{ .AddMFNode }
X3DPrototype138.MFNode := MFNode145;
SFTime162 := TSFTime.Create(HAnimPose1, false, 'transitionDuration', 1.2);
SFTime162.NameField := 'transitionDuration';
SFTime162.Value := '1.2';
{ .AddSFTime }
X3DPrototype138.SFTime := SFTime162;
SFBool163 := TSFBool.Create(HAnimPose1, false, 'traceEnabled', True);
SFBool163.NameField := 'traceEnabled';
SFBool163.Value := 'true';
{ .AddSFBool }
X3DPrototype138.SFBool := SFBool163;
{ .AddX3DPrototype }
Group42.X3DPrototype := X3DPrototype138;
X3DPrototype164 := TX3DPrototypeNode.Create;
X3DPrototype164.NameField := 'HAnimPose';
SFString165 := TSFString.Create(HAnimPose1, false, 'name', 'I');
SFString165.NameField := 'name';
SFString165.Value := 'I';
{ .SetSFString }
X3DPrototype164.SFString := SFString165;
SFBool166 := TSFBool.Create(HAnimPose1, false, 'enabled', True);
SFBool166.NameField := 'enabled';
SFBool166.Value := 'true';
{ .AddSFBool }
X3DPrototype164.SFBool := SFBool166;
SFNode167 := TSFNode.Create;
SFNode167.NameField := 'parentHAnimHumanoid';
{ HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model) }
HAnimHumanoid168 := HAnimHumanoid119;
{ .AddHAnimHumanoid }
SFNode167.HAnimHumanoid := HAnimHumanoid168;
{ .AddSFNode }
X3DPrototype164.SFNode := SFNode167;
SFInt32169 := TSFInt32.Create(HAnimPose1, false, 'loa', 1);
SFInt32169.NameField := 'loa';
SFInt32169.Value := '1';
{ .AddSFInt32 }
X3DPrototype164.SFInt32 := SFInt32169;
SFString170 := TSFString.Create(HAnimPose1, false, 'description', 'arms and legs straight down default binding pose for baseline Humanoid');
SFString170.NameField := 'description';
SFString170.Value := 'arms and legs straight down default binding pose for baseline Humanoid';
{ .AddSFString }
X3DPrototype164.SFString := SFString170;
MFNode171 := TMFNode.Create;
MFNode171.NameField := 'children';
{ not defining any children equals the default "I" pose }
{ .AddMFNode }
X3DPrototype164.MFNode := MFNode171;
SFTime172 := TSFTime.Create(HAnimPose1, false, 'transitionDuration', 1.5);
SFTime172.NameField := 'transitionDuration';
SFTime172.Value := '1.5';
{ .AddSFTime }
X3DPrototype164.SFTime := SFTime172;
SFBool173 := TSFBool.Create(HAnimPose1, false, 'traceEnabled', True);
SFBool173.NameField := 'traceEnabled';
SFBool173.Value := 'true';
{ .AddSFBool }
X3DPrototype164.SFBool := SFBool173;
{ .AddX3DPrototype }
Group42.X3DPrototype := X3DPrototype164;
X3DPrototype174 := TX3DPrototypeNode.Create;
X3DPrototype174.NameField := 'HAnimPose';
SFString175 := TSFString.Create(HAnimPose1, false, 'name', 'H');
SFString175.NameField := 'name';
SFString175.Value := 'H';
{ .SetSFString }
X3DPrototype174.SFString := SFString175;
SFBool176 := TSFBool.Create(HAnimPose1, false, 'enabled', False);
SFBool176.NameField := 'enabled';
SFBool176.Value := 'false';
{ .AddSFBool }
X3DPrototype174.SFBool := SFBool176;
SFString177 := TSFString.Create(HAnimPose1, false, 'description', 'TODO experimental pose not yet implemented');
SFString177.NameField := 'description';
SFString177.Value := 'TODO experimental pose not yet implemented';
{ .AddSFString }
X3DPrototype174.SFString := SFString177;
SFTime178 := TSFTime.Create(HAnimPose1, false, 'transitionDuration', 1.4);
SFTime178.NameField := 'transitionDuration';
SFTime178.Value := '1.4';
{ .AddSFTime }
X3DPrototype174.SFTime := SFTime178;
SFBool179 := TSFBool.Create(HAnimPose1, false, 'traceEnabled', True);
SFBool179.NameField := 'traceEnabled';
SFBool179.Value := 'true';
{ .AddSFBool }
X3DPrototype174.SFBool := SFBool179;
{ <fieldValue name='loa' value='1'/> }
{ .AddX3DPrototype }
Group42.X3DPrototype := X3DPrototype174;
X3DPrototype180 := TX3DPrototypeNode.Create;
X3DPrototype180.NameField := 'HAnimPose';
SFString181 := TSFString.Create(HAnimPose1, false, 'name', 'FaceLeft');
SFString181.NameField := 'name';
SFString181.Value := 'FaceLeft';
{ .SetSFString }
X3DPrototype180.SFString := SFString181;
SFBool182 := TSFBool.Create(HAnimPose1, false, 'enabled', True);
SFBool182.NameField := 'enabled';
SFBool182.Value := 'true';
{ .AddSFBool }
X3DPrototype180.SFBool := SFBool182;
SFNode183 := TSFNode.Create;
SFNode183.NameField := 'parentHAnimHumanoid';
{ HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model) }
HAnimHumanoid184 := HAnimHumanoid119;
{ .AddHAnimHumanoid }
SFNode183.HAnimHumanoid := HAnimHumanoid184;
{ .AddSFNode }
X3DPrototype180.SFNode := SFNode183;
SFInt32185 := TSFInt32.Create(HAnimPose1, false, 'loa', 0);
SFInt32185.NameField := 'loa';
SFInt32185.Value := '0';
{ .AddSFInt32 }
X3DPrototype180.SFInt32 := SFInt32185;
SFString186 := TSFString.Create(HAnimPose1, false, 'description', 'Only modify humanoid_root Joint node to face left');
SFString186.NameField := 'description';
SFString186.Value := 'Only modify humanoid_root Joint node to face left';
{ .AddSFString }
X3DPrototype180.SFString := SFString186;
MFNode187 := TMFNode.Create;
MFNode187.NameField := 'children';
HAnimJoint188 := THAnimJointNode.Create;
HAnimJoint188.NameField := 'humanoid_root';
HAnimJoint188.Description := 'Only rotate the model';
HAnimJoint188.Rotation := Vector4(0,1,0,1.570796);
{ .SetHAnimJoint }
MFNode187.HAnimJoint := HAnimJoint188;
{ .AddMFNode }
X3DPrototype180.MFNode := MFNode187;
SFTime189 := TSFTime.Create(HAnimPose1, false, 'transitionDuration', 1.1);
SFTime189.NameField := 'transitionDuration';
SFTime189.Value := '1.1';
{ .AddSFTime }
X3DPrototype180.SFTime := SFTime189;
SFBool190 := TSFBool.Create(HAnimPose1, false, 'traceEnabled', True);
SFBool190.NameField := 'traceEnabled';
SFBool190.Value := 'true';
{ .AddSFBool }
X3DPrototype180.SFBool := SFBool190;
{ .AddX3DPrototype }
Group42.X3DPrototype := X3DPrototype180;
X3DPrototype191 := TX3DPrototypeNode.Create;
X3DPrototype191.NameField := 'HAnimPose';
SFString192 := TSFString.Create(HAnimPose1, false, 'name', 'FaceRight');
SFString192.NameField := 'name';
SFString192.Value := 'FaceRight';
{ .SetSFString }
X3DPrototype191.SFString := SFString192;
SFBool193 := TSFBool.Create(HAnimPose1, false, 'enabled', True);
SFBool193.NameField := 'enabled';
SFBool193.Value := 'true';
{ .AddSFBool }
X3DPrototype191.SFBool := SFBool193;
SFNode194 := TSFNode.Create;
SFNode194.NameField := 'parentHAnimHumanoid';
{ HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model) }
HAnimHumanoid195 := HAnimHumanoid119;
{ .AddHAnimHumanoid }
SFNode194.HAnimHumanoid := HAnimHumanoid195;
{ .AddSFNode }
X3DPrototype191.SFNode := SFNode194;
SFInt32196 := TSFInt32.Create(HAnimPose1, false, 'loa', 0);
SFInt32196.NameField := 'loa';
SFInt32196.Value := '0';
{ .AddSFInt32 }
X3DPrototype191.SFInt32 := SFInt32196;
SFString197 := TSFString.Create(HAnimPose1, false, 'description', 'Only modify humanoid_root Joint node to face right');
SFString197.NameField := 'description';
SFString197.Value := 'Only modify humanoid_root Joint node to face right';
{ .AddSFString }
X3DPrototype191.SFString := SFString197;
MFNode198 := TMFNode.Create;
MFNode198.NameField := 'children';
HAnimJoint199 := THAnimJointNode.Create;
HAnimJoint199.NameField := 'humanoid_root';
HAnimJoint199.Description := 'Only rotate the model';
HAnimJoint199.Rotation := Vector4(0,1,0,-1.570796);
{ .SetHAnimJoint }
MFNode198.HAnimJoint := HAnimJoint199;
{ .AddMFNode }
X3DPrototype191.MFNode := MFNode198;
SFTime200 := TSFTime.Create(HAnimPose1, false, 'transitionDuration', 1.1);
SFTime200.NameField := 'transitionDuration';
SFTime200.Value := '1.1';
{ .AddSFTime }
X3DPrototype191.SFTime := SFTime200;
SFBool201 := TSFBool.Create(HAnimPose1, false, 'traceEnabled', True);
SFBool201.NameField := 'traceEnabled';
SFBool201.Value := 'true';
{ .AddSFBool }
X3DPrototype191.SFBool := SFBool201;
{ .AddX3DPrototype }
Group42.X3DPrototype := X3DPrototype191;
Group202 := TGroupNode.Create;
Transform203 := TTransformNode.Create;
Transform203.Translation := Vector3(0,2,0);
Shape204 := TShapeNode.Create;
Text205 := TTextNode.Create;
Text205.SetText(['HAnimPosePrototype example implementation']);
FontStyle206 := TFontStyleNode.Create;
FontStyle206.Family := ffSans;
FontStyle206.Justify := fjMiddle;
FontStyle206.JustifyMinor := fjMiddle;
FontStyle206.Size := 0.15;
FontStyle206.Style := fsBold;
{ .SetFontStyle }
Text205.FontStyle := FontStyle206;
{ .SetGeometry }
Shape204.Geometry := Text205;
Appearance207 := TAppearanceNode.Create;
Material208 := TMaterialNode.Create;
Material208.DiffuseColor := Vector3(0.1,0.5,0.3);
{ .SetMaterial }
Appearance207.Material := Material208;
{ .SetAppearance }
Shape204.Appearance := Appearance207;
{ .AddChild }
Transform203.AddChildren([Shape204]);
{ .AddChildren }
Group202.AddChildren([Transform203]);
Transform209 := TTransformNode.Create;
Transform209.Translation := Vector3(-1.5,1.5,0);
Shape210 := TShapeNode.Create;
Text211 := TTextNode.Create;
Text211.SetText(['"T" Pose']);
FontStyle212 := TFontStyleNode.Create;
FontStyle212.Family := ffSans;
FontStyle212.Justify := fjMiddle;
FontStyle212.JustifyMinor := fjMiddle;
FontStyle212.Size := 0.1;
FontStyle212.Style := fsBold;
{ .SetFontStyle }
Text211.FontStyle := FontStyle212;
{ .SetGeometry }
Shape210.Geometry := Text211;
Appearance213 := Appearance207;
{ .SetAppearance }
Shape210.Appearance := Appearance213;
{ .AddChild }
Transform209.AddChildren([Shape210]);
Shape214 := TShapeNode.Create;
Appearance215 := TAppearanceNode.Create;
Material216 := TMaterialNode.Create;
Material216.Transparency := 0.8;
{ .SetMaterial }
Appearance215.Material := Material216;
{ .SetAppearance }
Shape214.Appearance := Appearance215;
Box217 := TBoxNode.Create;
Box217.Size := Vector3(0.45,0.2,0.001);
{ .SetGeometry }
Shape214.Geometry := Box217;
{ .AddChild }
Transform209.AddChildren([Shape214]);
TouchSensor218 := TTouchSensorNode.Create;
TouchSensor218.Description := 'select to move shoulders to \"T\" pose, leave other joints unchanged';
{ .AddChildren }
Transform209.AddChildren([TouchSensor218]);
Transform209.AddRoute(TouchSensor218.FdIsactive, X3DPrototype115.FdCommencepose);
{ .AddX3DRoute }
{ .AddChildren }
Group202.AddChildren([Transform209]);
Transform220 := TTransformNode.Create;
Transform220.Translation := Vector3(-1.5,1,0);
Shape221 := TShapeNode.Create;
Text222 := TTextNode.Create;
Text222.SetText(['"A" Pose']);
FontStyle223 := FontStyle212;
{ .SetFontStyle }
Text222.FontStyle := FontStyle223;
{ .SetGeometry }
Shape221.Geometry := Text222;
Appearance224 := Appearance207;
{ .SetAppearance }
Shape221.Appearance := Appearance224;
{ .AddChild }
Transform220.AddChildren([Shape221]);
Shape225 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
Appearance226 := Appearance215;
{ .SetAppearance }
Shape225.Appearance := Appearance226;
Box227 := TBoxNode.Create;
Box227.Size := Vector3(0.45,0.2,0.001);
{ .SetGeometry }
Shape225.Geometry := Box227;
{ .AddChild }
Transform220.AddChildren([Shape225]);
TouchSensor228 := TTouchSensorNode.Create;
TouchSensor228.Description := 'select to move shoulders to \"A\" pose, leave other joints unchanged';
{ .AddChildren }
Transform220.AddChildren([TouchSensor228]);
Transform220.AddRoute(TouchSensor228.FdIsactive, X3DPrototype126.FdCommencepose);
{ .AddX3DRoute }
{ .AddChildren }
Group202.AddChildren([Transform220]);
Transform230 := TTransformNode.Create;
Transform230.Translation := Vector3(-1.5,0.5,0);
Shape231 := TShapeNode.Create;
Text232 := TTextNode.Create;
Text232.SetText(['TouchDown Pose']);
FontStyle233 := FontStyle212;
{ .SetFontStyle }
Text232.FontStyle := FontStyle233;
{ .SetGeometry }
Shape231.Geometry := Text232;
Appearance234 := Appearance207;
{ .SetAppearance }
Shape231.Appearance := Appearance234;
{ .AddChild }
Transform230.AddChildren([Shape231]);
Shape235 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
Appearance236 := Appearance215;
{ .SetAppearance }
Shape235.Appearance := Appearance236;
Box237 := TBoxNode.Create;
Box237.Size := Vector3(0.85,0.2,0.001);
{ .SetGeometry }
Shape235.Geometry := Box237;
{ .AddChild }
Transform230.AddChildren([Shape235]);
TouchSensor238 := TTouchSensorNode.Create;
TouchSensor238.Description := 'select to transition all joints to TouchDown pose';
{ .AddChildren }
Transform230.AddChildren([TouchSensor238]);
Transform230.AddRoute(TouchSensor238.FdIsactive, X3DPrototype138.FdCommencepose);
{ .AddX3DRoute }
{ .AddChildren }
Group202.AddChildren([Transform230]);
Transform240 := TTransformNode.Create;
Transform240.Translation := Vector3(-1.5,0,0);
Shape241 := TShapeNode.Create;
Text242 := TTextNode.Create;
Text242.SetText(['"I" Pose']);
FontStyle243 := FontStyle212;
{ .SetFontStyle }
Text242.FontStyle := FontStyle243;
{ .SetGeometry }
Shape241.Geometry := Text242;
Appearance244 := Appearance207;
{ .SetAppearance }
Shape241.Appearance := Appearance244;
{ .AddChild }
Transform240.AddChildren([Shape241]);
Shape245 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
Appearance246 := Appearance215;
{ .SetAppearance }
Shape245.Appearance := Appearance246;
Box247 := TBoxNode.Create;
Box247.Size := Vector3(0.45,0.2,0.001);
{ .SetGeometry }
Shape245.Geometry := Box247;
{ .AddChild }
Transform240.AddChildren([Shape245]);
TouchSensor248 := TTouchSensorNode.Create;
TouchSensor248.Description := 'select to transition all joints to \"I\" pose';
{ .AddChildren }
Transform240.AddChildren([TouchSensor248]);
Transform240.AddRoute(TouchSensor248.FdIsactive, X3DPrototype164.FdCommencepose);
{ .AddX3DRoute }
{ .AddChildren }
Group202.AddChildren([Transform240]);
Transform250 := TTransformNode.Create;
Transform250.Translation := Vector3(1.5,1.5,0);
Shape251 := TShapeNode.Create;
Text252 := TTextNode.Create;
Text252.SetText(['Face Left Pose']);
FontStyle253 := FontStyle212;
{ .SetFontStyle }
Text252.FontStyle := FontStyle253;
{ .SetGeometry }
Shape251.Geometry := Text252;
Appearance254 := Appearance207;
{ .SetAppearance }
Shape251.Appearance := Appearance254;
{ .AddChild }
Transform250.AddChildren([Shape251]);
Shape255 := TShapeNode.Create;
Appearance256 := Appearance215;
{ .SetAppearance }
Shape255.Appearance := Appearance256;
Box257 := TBoxNode.Create;
Box257.Size := Vector3(0.9,0.2,0.001);
{ .SetGeometry }
Shape255.Geometry := Box257;
{ .AddChild }
Transform250.AddChildren([Shape255]);
TouchSensor258 := TTouchSensorNode.Create;
TouchSensor258.Description := 'select to rotate body and Face Left, leave other joints unchanged';
{ .AddChildren }
Transform250.AddChildren([TouchSensor258]);
Transform250.AddRoute(TouchSensor258.FdIsactive, X3DPrototype180.FdCommencepose);
{ .AddX3DRoute }
{ .AddChildren }
Group202.AddChildren([Transform250]);
Transform260 := TTransformNode.Create;
Transform260.Translation := Vector3(1.5,1,0);
Shape261 := TShapeNode.Create;
Text262 := TTextNode.Create;
Text262.SetText(['Face Right Pose']);
FontStyle263 := FontStyle212;
{ .SetFontStyle }
Text262.FontStyle := FontStyle263;
{ .SetGeometry }
Shape261.Geometry := Text262;
Appearance264 := Appearance207;
{ .SetAppearance }
Shape261.Appearance := Appearance264;
{ .AddChild }
Transform260.AddChildren([Shape261]);
Shape265 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
Appearance266 := Appearance215;
{ .SetAppearance }
Shape265.Appearance := Appearance266;
Box267 := TBoxNode.Create;
Box267.Size := Vector3(0.9,0.2,0.001);
{ .SetGeometry }
Shape265.Geometry := Box267;
{ .AddChild }
Transform260.AddChildren([Shape265]);
TouchSensor268 := TTouchSensorNode.Create;
TouchSensor268.Description := 'select to rotate body and Face Right, leave other joints unchanged';
{ .AddChildren }
Transform260.AddChildren([TouchSensor268]);
Transform260.AddRoute(TouchSensor268.FdIsactive, X3DPrototype191.FdCommencepose);
{ .AddX3DRoute }
{ .AddChildren }
Group202.AddChildren([Transform260]);
Transform270 := TTransformNode.Create;
Transform270.Translation := Vector3(1.5,0.5,0);
Shape271 := TShapeNode.Create;
Text272 := TTextNode.Create;
Text272.SetText(['Direct animation','to, from "I" Pose']);
FontStyle273 := FontStyle212;
{ .SetFontStyle }
Text272.FontStyle := FontStyle273;
{ .SetGeometry }
Shape271.Geometry := Text272;
Appearance274 := TAppearanceNode.Create;
Material275 := TMaterialNode.Create;
Material275.DiffuseColor := Vector3(0.1,0.2,0.3);
{ .SetMaterial }
Appearance274.Material := Material275;
{ .SetAppearance }
Shape271.Appearance := Appearance274;
{ .AddChild }
Transform270.AddChildren([Shape271]);
Shape276 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
Appearance277 := Appearance215;
{ .SetAppearance }
Shape276.Appearance := Appearance277;
Box278 := TBoxNode.Create;
Box278.Size := Vector3(0.9,0.25,0.001);
{ .SetGeometry }
Shape276.Geometry := Box278;
{ .AddChild }
Transform270.AddChildren([Shape276]);
TouchSensor279 := TTouchSensorNode.Create;
TouchSensor279.Description := 'select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events';
{ .AddChildren }
Transform270.AddChildren([TouchSensor279]);
{ cycleInterval=4 also hard-coded in script execution message }
TimeSensor280 := TTimeSensorNode.Create;
TimeSensor280.CycleInterval := 4;
TimeSensor280.Description := 'directly animate several poses';
{ .AddChildren }
Transform270.AddChildren([TimeSensor280]);
ScalarInterpolator281 := TScalarInterpolatorNode.Create;
ScalarInterpolator281.SetKey([0,0.05,0.45,0.55,0.95,1]);
ScalarInterpolator281.SetKeyValue([0,0,1,1,0,0]);
{ .AddChildren }
Transform270.AddChildren([ScalarInterpolator281]);
Transform270.AddRoute(TouchSensor279.EventTouchtime, TimeSensor280.FdStarttime);
{ .AddX3DRoute }
Transform270.AddRoute(TimeSensor280.EventFraction_changed, ScalarInterpolator281.EventSet_fraction);
{ .AddX3DRoute }
Transform270.AddRoute(ScalarInterpolator281.EventValue_changed, X3DPrototype164.EventSet_fraction);
{ .AddX3DRoute }
{ .AddChildren }
Group202.AddChildren([Transform270]);
Transform285 := TTransformNode.Create;
Transform285.Translation := Vector3(1.5,0,0);
Shape286 := TShapeNode.Create;
Text287 := TTextNode.Create;
Text287.SetText(['Reset All Joints','to Default "I" Pose']);
FontStyle288 := FontStyle212;
{ .SetFontStyle }
Text287.FontStyle := FontStyle288;
{ .SetGeometry }
Shape286.Geometry := Text287;
Appearance289 := Appearance274;
{ .SetAppearance }
Shape286.Appearance := Appearance289;
{ .AddChild }
Transform285.AddChildren([Shape286]);
Shape290 := TShapeNode.Create;
{ Selectable Text transparent Box for easy user selection }
Appearance291 := Appearance215;
{ .SetAppearance }
Shape290.Appearance := Appearance291;
Box292 := TBoxNode.Create;
Box292.Size := Vector3(0.9,0.25,0.001);
{ .SetGeometry }
Shape290.Geometry := Box292;
{ .AddChild }
Transform285.AddChildren([Shape290]);
TouchSensor293 := TTouchSensorNode.Create;
TouchSensor293.Description := 'select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event';
{ .AddChildren }
Transform285.AddChildren([TouchSensor293]);
Transform285.AddRoute(TouchSensor293.FdIsactive, X3DPrototype180.FdResetalljoints);
{ .AddX3DRoute }
{ .AddChildren }
Group202.AddChildren([Transform285]);
{ .AddChildren }
Group42.AddChildren([Group202]);
Group295 := TGroupNode.Create;
Group295.AddRoute(LoadSensor49.FdIsloaded, X3DPrototype126.FdIsloaded);
{ .SetX3DRoute }
Group295.AddRoute(LoadSensor49.FdIsloaded, X3DPrototype174.FdIsloaded);
{ .AddX3DRoute }
Group295.AddRoute(LoadSensor49.FdIsloaded, X3DPrototype164.FdIsloaded);
{ .AddX3DRoute }
Group295.AddRoute(LoadSensor49.FdIsloaded, X3DPrototype115.FdIsloaded);
{ .AddX3DRoute }
Group295.AddRoute(LoadSensor49.FdIsloaded, X3DPrototype180.FdIsloaded);
{ .AddX3DRoute }
Group295.AddRoute(LoadSensor49.FdIsloaded, X3DPrototype191.FdIsloaded);
{ .AddX3DRoute }
Group295.AddRoute(LoadSensor49.FdIsloaded, X3DPrototype138.FdIsloaded);
{ .AddX3DRoute }
{ .AddChildren }
Group42.AddChildren([Group295]);
Transform303 := TTransformNode.Create;
Transform303.Scale := Vector3(0.05,0.05,0.05);
Inline304 := TInlineNode.Create;
Inline304.SetUrl(['../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d','../../../Savage/Tools/Authoring/CoordinateAxes.x3d','https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d','https://www.web3d.org/x3d/content/examples/Savage/Tools/Authoring/CoordinateAxes.x3d','../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl','../../../Savage/Tools/Authoring/CoordinateAxes.wrl','https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl','https://www.web3d.org/x3d/content/examples/Savage/Tools/Authoring/CoordinateAxes.wrl']);
{ .AddChildren }
Transform303.AddChildren([Inline304]);
{ .AddChildren }
Group42.AddChildren([Transform303]);
Transform305 := TTransformNode.Create;
Transform305.Translation := Vector3(0,-0.15,0);
Shape306 := TShapeNode.Create;
Text307 := TTextNode.Create;
Text307.SetText(['humanoid','origin']);
FontStyle308 := TFontStyleNode.Create;
FontStyle308.Family := ffSans;
FontStyle308.Justify := fjMiddle;
FontStyle308.JustifyMinor := fjMiddle;
FontStyle308.Size := 0.05;
FontStyle308.Style := fsBold;
{ .SetFontStyle }
Text307.FontStyle := FontStyle308;
{ .SetGeometry }
Shape306.Geometry := Text307;
Appearance309 := TAppearanceNode.Create;
Material310 := TMaterialNode.Create;
Material310.DiffuseColor := Vector3(0.3,0.3,0.3);
{ .SetMaterial }
Appearance309.Material := Material310;
{ .SetAppearance }
Shape306.Appearance := Appearance309;
{ .AddChild }
Transform305.AddChildren([Shape306]);
{ .AddChildren }
Group42.AddChildren([Transform305]);
{ .AddGroup }
X3D0.AddChildren([Group42]);
Result := X3D0;
end;

begin
end.
