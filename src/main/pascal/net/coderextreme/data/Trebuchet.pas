unit Trebuchet;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateTrebuchet: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group17: TGroupNode;
WorldInfo18: TWorldInfoNode;
Background19: TBackgroundNode;
Sound20: TSoundNode;
AudioClip21: TAudioClipNode;
Shape22: TShapeNode;
Box23: TBoxNode;
Appearance24: TAppearanceNode;
ImageTexture25: TImageTextureNode;
Transform26: TTransformNode;
Shape27: TShapeNode;
Appearance28: TAppearanceNode;
Material29: TMaterialNode;
Text30: TTextNode;
FontStyle31: TFontStyleNode;
Transform32: TTransformNode;
Switch33: TSwitchNode;
Group34: TGroupNode;
Shape35: TShapeNode;
Appearance36: TAppearanceNode;
Text37: TTextNode;
Group38: TGroupNode;
Shape39: TShapeNode;
Appearance40: TAppearanceNode;
Text41: TTextNode;
Group42: TGroupNode;
Shape43: TShapeNode;
Appearance44: TAppearanceNode;
Text45: TTextNode;
Group46: TGroupNode;
Shape47: TShapeNode;
Appearance48: TAppearanceNode;
Text49: TTextNode;
TouchSensor50: TTouchSensorNode;
Transform51: TTransformNode;
Shape52: TShapeNode;
Box53: TBoxNode;
Appearance54: TAppearanceNode;
Material55: TMaterialNode;
Transform56: TTransformNode;
Transform57: TTransformNode;
Billboard58: TBillboardNode;
Shape59: TShapeNode;
Appearance60: TAppearanceNode;
Material61: TMaterialNode;
Text62: TTextNode;
FontStyle63: TFontStyleNode;
Transform64: TTransformNode;
Shape65: TShapeNode;
Box66: TBoxNode;
Appearance67: TAppearanceNode;
Material68: TMaterialNode;
Switch69: TSwitchNode;
Group70: TGroupNode;
Sound71: TSoundNode;
AudioClip72: TAudioClipNode;
Group73: TGroupNode;
Sound74: TSoundNode;
AudioClip75: TAudioClipNode;
TouchSensor76: TTouchSensorNode;
Transform77: TTransformNode;
Switch78: TSwitchNode;
Group79: TGroupNode;
Shape80: TShapeNode;
Appearance81: TAppearanceNode;
Text82: TTextNode;
FontStyle83: TFontStyleNode;
Sound84: TSoundNode;
AudioClip85: TAudioClipNode;
Group86: TGroupNode;
Shape87: TShapeNode;
Appearance88: TAppearanceNode;
Text89: TTextNode;
FontStyle90: TFontStyleNode;
Sound91: TSoundNode;
AudioClip92: TAudioClipNode;
Group93: TGroupNode;
Shape94: TShapeNode;
Appearance95: TAppearanceNode;
Text96: TTextNode;
FontStyle97: TFontStyleNode;
Sound98: TSoundNode;
AudioClip99: TAudioClipNode;
Transform100: TTransformNode;
Transform101: TTransformNode;
Transform102: TTransformNode;
Transform103: TTransformNode;
Transform104: TTransformNode;
Shape105: TShapeNode;
Box106: TBoxNode;
Appearance107: TAppearanceNode;
ImageTexture108: TImageTextureNode;
Transform109: TTransformNode;
Shape110: TShapeNode;
Transform111: TTransformNode;
Shape112: TShapeNode;
Transform113: TTransformNode;
Shape114: TShapeNode;
Transform115: TTransformNode;
Shape116: TShapeNode;
Transform117: TTransformNode;
Transform118: TTransformNode;
Shape119: TShapeNode;
Transform120: TTransformNode;
Shape121: TShapeNode;
Box122: TBoxNode;
Appearance123: TAppearanceNode;
Transform124: TTransformNode;
Transform125: TTransformNode;
Shape126: TShapeNode;
Extrusion127: TExtrusionNode;
Appearance128: TAppearanceNode;
Transform129: TTransformNode;
Transform130: TTransformNode;
Shape131: TShapeNode;
Box132: TBoxNode;
Appearance133: TAppearanceNode;
Transform134: TTransformNode;
Shape135: TShapeNode;
Box136: TBoxNode;
Appearance137: TAppearanceNode;
Transform138: TTransformNode;
Shape139: TShapeNode;
Appearance140: TAppearanceNode;
Material141: TMaterialNode;
Extrusion142: TExtrusionNode;
Transform143: TTransformNode;
Shape144: TShapeNode;
Appearance145: TAppearanceNode;
ImageTexture146: TImageTextureNode;
Sphere147: TSphereNode;
Transform148: TTransformNode;
Shape149: TShapeNode;
Cylinder150: TCylinderNode;
Appearance151: TAppearanceNode;
Material152: TMaterialNode;
Transform153: TTransformNode;
Shape154: TShapeNode;
Transform155: TTransformNode;
Shape156: TShapeNode;
Sphere157: TSphereNode;
Appearance158: TAppearanceNode;
Transform159: TTransformNode;
Transform160: TTransformNode;
Shape161: TShapeNode;
Appearance162: TAppearanceNode;
Extrusion163: TExtrusionNode;
Transform164: TTransformNode;
Transform165: TTransformNode;
Shape166: TShapeNode;
Transform167: TTransformNode;
Shape168: TShapeNode;
Sphere169: TSphereNode;
Appearance170: TAppearanceNode;
Transform171: TTransformNode;
Transform172: TTransformNode;
Transform173: TTransformNode;
Shape174: TShapeNode;
Appearance175: TAppearanceNode;
Extrusion176: TExtrusionNode;
Shape177: TShapeNode;
Appearance178: TAppearanceNode;
Extrusion179: TExtrusionNode;
Transform180: TTransformNode;
Transform181: TTransformNode;
Transform182: TTransformNode;
Transform183: TTransformNode;
Transform184: TTransformNode;
Shape185: TShapeNode;
Appearance186: TAppearanceNode;
Material187: TMaterialNode;
Extrusion188: TExtrusionNode;
Transform189: TTransformNode;
Shape190: TShapeNode;
Transform191: TTransformNode;
Shape192: TShapeNode;
Appearance193: TAppearanceNode;
Sphere194: TSphereNode;
Transform195: TTransformNode;
Shape196: TShapeNode;
Transform197: TTransformNode;
Shape198: TShapeNode;
Transform199: TTransformNode;
Shape200: TShapeNode;
Appearance201: TAppearanceNode;
Sphere202: TSphereNode;
Transform203: TTransformNode;
Shape204: TShapeNode;
Extrusion205: TExtrusionNode;
Appearance206: TAppearanceNode;
TouchSensor207: TTouchSensorNode;
Transform208: TTransformNode;
Switch209: TSwitchNode;
Group210: TGroupNode;
Transform211: TTransformNode;
Shape212: TShapeNode;
Sphere213: TSphereNode;
Appearance214: TAppearanceNode;
Material215: TMaterialNode;
Group216: TGroupNode;
Transform217: TTransformNode;
Inline218: TInlineNode;
Group219: TGroupNode;
Transform220: TTransformNode;
Inline221: TInlineNode;
Transform222: TTransformNode;
Shape223: TShapeNode;
Cylinder224: TCylinderNode;
Appearance225: TAppearanceNode;
Material226: TMaterialNode;
Transform227: TTransformNode;
Transform228: TTransformNode;
Shape229: TShapeNode;
Box230: TBoxNode;
Appearance231: TAppearanceNode;
Transform232: TTransformNode;
Shape233: TShapeNode;
Box234: TBoxNode;
Appearance235: TAppearanceNode;
Transform236: TTransformNode;
Shape237: TShapeNode;
Cylinder238: TCylinderNode;
Appearance239: TAppearanceNode;
Material240: TMaterialNode;
Transform241: TTransformNode;
Shape242: TShapeNode;
Cylinder243: TCylinderNode;
Appearance244: TAppearanceNode;
Material245: TMaterialNode;
Transform246: TTransformNode;
Transform247: TTransformNode;
Shape248: TShapeNode;
Transform249: TTransformNode;
Shape250: TShapeNode;
Cylinder251: TCylinderNode;
Appearance252: TAppearanceNode;
Material253: TMaterialNode;
Transform254: TTransformNode;
Transform255: TTransformNode;
Transform256: TTransformNode;
Transform257: TTransformNode;
Transform258: TTransformNode;
Shape259: TShapeNode;
Transform260: TTransformNode;
Transform261: TTransformNode;
Transform262: TTransformNode;
Transform263: TTransformNode;
Transform264: TTransformNode;
Transform265: TTransformNode;
Transform266: TTransformNode;
Transform267: TTransformNode;
Shape268: TShapeNode;
Transform269: TTransformNode;
Transform270: TTransformNode;
Transform271: TTransformNode;
Shape272: TShapeNode;
Box273: TBoxNode;
Appearance274: TAppearanceNode;
Transform275: TTransformNode;
Shape276: TShapeNode;
Cylinder277: TCylinderNode;
Appearance278: TAppearanceNode;
Shape279: TShapeNode;
Sphere280: TSphereNode;
Appearance281: TAppearanceNode;
Transform282: TTransformNode;
Shape283: TShapeNode;
Sphere284: TSphereNode;
Appearance285: TAppearanceNode;
Transform286: TTransformNode;
Shape287: TShapeNode;
Shape288: TShapeNode;
Transform289: TTransformNode;
Shape290: TShapeNode;
Transform291: TTransformNode;
Shape292: TShapeNode;
Transform293: TTransformNode;
Shape294: TShapeNode;
Shape295: TShapeNode;
Transform296: TTransformNode;
Shape297: TShapeNode;
Transform298: TTransformNode;
Shape299: TShapeNode;
Shape300: TShapeNode;
Transform301: TTransformNode;
Shape302: TShapeNode;
Transform303: TTransformNode;
Transform304: TTransformNode;
Viewpoint305: TViewpointNode;
Transform306: TTransformNode;
Transform307: TTransformNode;
TouchSensor308: TTouchSensorNode;
Switch309: TSwitchNode;
Transform310: TTransformNode;
Shape311: TShapeNode;
Box312: TBoxNode;
Appearance313: TAppearanceNode;
Material314: TMaterialNode;
Transform315: TTransformNode;
TouchSensor316: TTouchSensorNode;
Switch317: TSwitchNode;
Transform318: TTransformNode;
Shape319: TShapeNode;
Box320: TBoxNode;
Appearance321: TAppearanceNode;
Material322: TMaterialNode;
Transform323: TTransformNode;
Switch324: TSwitchNode;
Transform325: TTransformNode;
Viewpoint326: TViewpointNode;
Transform327: TTransformNode;
Transform328: TTransformNode;
Viewpoint329: TViewpointNode;
Transform330: TTransformNode;
Transform331: TTransformNode;
Viewpoint332: TViewpointNode;
Script333: TScriptNode;
SFBool334: TSFBool;
SFInt32335: TSFInt32;
SFFloat336: TSFFloat;
Script337: TScriptNode;
SFBool338: TSFBool;
SFInt32339: TSFInt32;
SFFloat340: TSFFloat;
Script341: TScriptNode;
SFBool342: TSFBool;
SFInt32343: TSFInt32;
Script344: TScriptNode;
SFFloat345: TSFFloat;
SFFloat346: TSFFloat;
SFFloat347: TSFFloat;
SFFloat348: TSFFloat;
SFFloat349: TSFFloat;
SFVec3f350: TSFVec3f;
SFVec3f351: TSFVec3f;
TimeSensor352: TTimeSensorNode;
PositionInterpolator353: TPositionInterpolatorNode;
OrientationInterpolator354: TOrientationInterpolatorNode;
PositionInterpolator355: TPositionInterpolatorNode;
OrientationInterpolator356: TOrientationInterpolatorNode;
PositionInterpolator357: TPositionInterpolatorNode;

procedure InitTrebuchetPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'Trebuchet.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Working model of a 14th century Trebuchet Catapult.';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'LT Joe Roth';
{ METHOD .Meta }
X3D0.Meta['created'] := '20 June 2001';
{ METHOD .Meta }
X3D0.Meta['modified'] := '20 October 2019';
{ METHOD .Meta }
X3D0.Meta['version'] := '7.8';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Trebuchet.x3d';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'http://trebuchet.com';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'http://members.home.net/dimona';
{ METHOD .Meta }
X3D0.Meta['subject'] := 'trebuchet catapult Monty Python';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'Permission granted for use of the VRML chicken I own a copy of Monty Python and the Holy Grail I have requested permission to use for non profit use. No response received. I will use the sound clips under \"Fair Use\" clause of the DMCA';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.web3d.org/WorkingGroups/media/textures/nature/leaves_5.jpg.htm';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'http://www.revemonde.net/UniversalMedia/textures/nature/leaves_5.jpg.htm';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group17 := TGroupNode.Create;
WorldInfo18 := TWorldInfoNode.Create;
WorldInfo18.Title := 'Trebuchet.x3d';
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(WorldInfo18);
Background19 := TBackgroundNode.Create;
Background19.SetBackUrl(['https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_back.jpg']);
Background19.SetBottomUrl(['https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_bottom.jpg']);
Background19.SetFrontUrl(['https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_front.jpg']);
Background19.SetGroundAngle([1.309,1.570796]);
Background19.SetGroundColor([Vector3(0.1,0.1,0),Vector3(0.4,0.25,0.2),Vector3(0.6,0.6,0.6)]);
Background19.SetLeftUrl(['https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_left.jpg']);
Background19.SetRightUrl(['https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_right.jpg']);
Background19.SetSkyAngle([1.309,1.57079]);
Background19.SetSkyColor([Vector3(0,0.2,0.7),Vector3(0,0.5,1),Vector3(1,1,1)]);
Background19.SetTopUrl(['https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_top.jpg']);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Background19);
Sound20 := TSoundNode.Create;
Sound20.MaxBack := 1000;
Sound20.MaxFront := 1000;
AudioClip21 := TAudioClipNode.Create;
AudioClip21.Description := 'HolyGrail';
end;

procedure InitTrebuchetPart1;
begin

AudioClip21.Loop := True;
AudioClip21.SetUrl(['holygral.mp3','http://www.nps.navy.mil/code32/vrml/holygral.mp3']);
{ METHOD .Source }
Sound20.Source := AudioClip21;
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Sound20);
Shape22 := TShapeNode.Create;
Box23 := TBoxNode.Create;
Box23.Size := Vector3(10000,1,10000);
{ METHOD .Geometry }
Shape22.Geometry := Box23;
Appearance24 := TAppearanceNode.Create;
ImageTexture25 := TImageTextureNode.Create;
ImageTexture25.SetUrl(['grass.jpg','https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/grass.jpg']);
{ METHOD .Texture }
Appearance24.Texture := ImageTexture25;
{ METHOD .Appearance }
Shape22.Appearance := Appearance24;
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Shape22);
Transform26 := TTransformNode.Create;
Transform26.Rotation := Vector4(0,1,0,1.57);
Transform26.Scale := Vector3(0.5,0.5,0.5);
Transform26.Translation := Vector3(10.5,6.5,4.5);
Shape27 := TShapeNode.Create;
Appearance28 := TAppearanceNode.Create;
Material29 := TMaterialNode.Create;
Material29.DiffuseColor := Vector3(1,0,0);
Material29.EmissiveColor := Vector3(1,1,0);
{ METHOD .SetMaterial }
Appearance28.Material := Material29;
{ METHOD .Appearance }
Shape27.Appearance := Appearance28;
Text30 := TTextNode.Create;
Text30.SetText(['Click Sling to Select Projectile']);
FontStyle31 := TFontStyleNode.Create;
{ METHOD .FontStyle }
Text30.FontStyle := FontStyle31;
{ METHOD .Geometry }
Shape27.Geometry := Text30;
{ METHOD .FdChildren.Add }
Transform26.FdChildren.Add(Shape27);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Transform26);
Transform32 := TTransformNode.Create;
Transform32.Rotation := Vector4(0,1,0,1.57);
Transform32.Scale := Vector3(0.5,0.5,0.5);
Transform32.Translation := Vector3(11,5.5,6);
Switch33 := TSwitchNode.Create;
Switch33.WhichChoice := 0;
Group34 := TGroupNode.Create;
Shape35 := TShapeNode.Create;
end;

procedure InitTrebuchetPart2;
begin

{ METHOD .Appearance }
Shape35.Appearance := Appearance28;
Text37 := TTextNode.Create;
Text37.SetText(['Click Here to Change Counter Weight (50 lbs)']);
{ METHOD .Geometry }
Shape35.Geometry := Text37;
{ METHOD .FdChildren.Add }
Group34.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
Switch33.FdChildren.Add(Group34);
Group38 := TGroupNode.Create;
Shape39 := TShapeNode.Create;
{ METHOD .Appearance }
Shape39.Appearance := Appearance28;
Text41 := TTextNode.Create;
Text41.SetText(['Click Here to Change Counter Weight (500 lbs)']);
{ METHOD .Geometry }
Shape39.Geometry := Text41;
{ METHOD .FdChildren.Add }
Group38.FdChildren.Add(Shape39);
{ METHOD .FdChildren.Add }
Switch33.FdChildren.Add(Group38);
Group42 := TGroupNode.Create;
Shape43 := TShapeNode.Create;
{ METHOD .Appearance }
Shape43.Appearance := Appearance28;
Text45 := TTextNode.Create;
Text45.SetText(['Click Here to Change Counter Weight (1000 lbs)']);
{ METHOD .Geometry }
Shape43.Geometry := Text45;
{ METHOD .FdChildren.Add }
Group42.FdChildren.Add(Shape43);
{ METHOD .FdChildren.Add }
Switch33.FdChildren.Add(Group42);
Group46 := TGroupNode.Create;
Shape47 := TShapeNode.Create;
{ METHOD .Appearance }
Shape47.Appearance := Appearance28;
Text49 := TTextNode.Create;
Text49.SetText(['Click Here to Change Counter Weight (10000 lbs)']);
{ METHOD .Geometry }
Shape47.Geometry := Text49;
{ METHOD .FdChildren.Add }
Group46.FdChildren.Add(Shape47);
{ METHOD .FdChildren.Add }
Switch33.FdChildren.Add(Group46);
{ METHOD .FdChildren.Add }
Transform32.FdChildren.Add(Switch33);
TouchSensor50 := TTouchSensorNode.Create;
TouchSensor50.Description := 'weight selector';
{ METHOD .FdChildren.Add }
Transform32.FdChildren.Add(TouchSensor50);
Transform51 := TTransformNode.Create;
Transform51.Translation := Vector3(8,0,0);
Shape52 := TShapeNode.Create;
Box53 := TBoxNode.Create;
Box53.Size := Vector3(20,1,1);
{ METHOD .Geometry }
Shape52.Geometry := Box53;
end;

procedure InitTrebuchetPart3;
begin

Appearance54 := TAppearanceNode.Create;
Material55 := TMaterialNode.Create;
Material55.Transparency := 1;
{ METHOD .SetMaterial }
Appearance54.Material := Material55;
{ METHOD .Appearance }
Shape52.Appearance := Appearance54;
{ METHOD .FdChildren.Add }
Transform51.FdChildren.Add(Shape52);
{ METHOD .FdChildren.Add }
Transform32.FdChildren.Add(Transform51);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Transform32);
Transform56 := TTransformNode.Create;
Transform56.Rotation := Vector4(0,1,0,1.57);
Transform56.Translation := Vector3(10,0.5,4.5);
Transform57 := TTransformNode.Create;
Transform57.Translation := Vector3(0,2,5);
Billboard58 := TBillboardNode.Create;
Shape59 := TShapeNode.Create;
Appearance60 := TAppearanceNode.Create;
Material61 := TMaterialNode.Create;
Material61.DiffuseColor := Vector3(1,0,0);
{ METHOD .SetMaterial }
Appearance60.Material := Material61;
{ METHOD .Appearance }
Shape59.Appearance := Appearance60;
Text62 := TTextNode.Create;
Text62.SetText(['LAUNCH']);
FontStyle63 := TFontStyleNode.Create;
{ METHOD .FontStyle }
Text62.FontStyle := FontStyle63;
{ METHOD .Geometry }
Shape59.Geometry := Text62;
{ METHOD .FdChildren.Add }
Billboard58.FdChildren.Add(Shape59);
Transform64 := TTransformNode.Create;
Transform64.Translation := Vector3(2,0.3,0);
Shape65 := TShapeNode.Create;
Box66 := TBoxNode.Create;
Box66.Size := Vector3(5,1,1);
{ METHOD .Geometry }
Shape65.Geometry := Box66;
Appearance67 := TAppearanceNode.Create;
Material68 := TMaterialNode.Create;
Material68.Transparency := 1;
{ METHOD .SetMaterial }
Appearance67.Material := Material68;
{ METHOD .Appearance }
Shape65.Appearance := Appearance67;
{ METHOD .FdChildren.Add }
Transform64.FdChildren.Add(Shape65);
{ METHOD .FdChildren.Add }
Billboard58.FdChildren.Add(Transform64);
Switch69 := TSwitchNode.Create;
end;

procedure InitTrebuchetPart4;
begin

Switch69.WhichChoice := -1;
Group70 := TGroupNode.Create;
Sound71 := TSoundNode.Create;
Sound71.MaxBack := 1000;
Sound71.MaxFront := 1000;
AudioClip72 := TAudioClipNode.Create;
AudioClip72.Description := 'PigDogSound';
AudioClip72.SetUrl(['pigdog.wav','http://www.nps.navy.mil/code32/vrml/pigdog.wav']);
{ METHOD .Source }
Sound71.Source := AudioClip72;
{ METHOD .FdChildren.Add }
Group70.FdChildren.Add(Sound71);
{ METHOD .FdChildren.Add }
Switch69.FdChildren.Add(Group70);
Group73 := TGroupNode.Create;
Sound74 := TSoundNode.Create;
Sound74.MaxBack := 1000;
Sound74.MaxFront := 1000;
AudioClip75 := TAudioClipNode.Create;
AudioClip75.Description := 'MonkSound';
AudioClip75.SetUrl(['monks.wav','http://www.nps.navy.mil/code32/vrml/monks.wav']);
{ METHOD .Source }
Sound74.Source := AudioClip75;
{ METHOD .FdChildren.Add }
Group73.FdChildren.Add(Sound74);
{ METHOD .FdChildren.Add }
Switch69.FdChildren.Add(Group73);
{ METHOD .FdChildren.Add }
Billboard58.FdChildren.Add(Switch69);
{ METHOD .FdChildren.Add }
Transform57.FdChildren.Add(Billboard58);
TouchSensor76 := TTouchSensorNode.Create;
TouchSensor76.Description := 'launch!';
{ METHOD .FdChildren.Add }
Transform57.FdChildren.Add(TouchSensor76);
{ METHOD .FdChildren.Add }
Transform56.FdChildren.Add(Transform57);
Transform77 := TTransformNode.Create;
Switch78 := TSwitchNode.Create;
Switch78.WhichChoice := 0;
Group79 := TGroupNode.Create;
Shape80 := TShapeNode.Create;
{ METHOD .Appearance }
Shape80.Appearance := Appearance28;
Text82 := TTextNode.Create;
Text82.SetText(['Bowling Ball (10 lbs)']);
FontStyle83 := TFontStyleNode.Create;
FontStyle83.Size := 0.5;
{ METHOD .FontStyle }
Text82.FontStyle := FontStyle83;
{ METHOD .Geometry }
Shape80.Geometry := Text82;
{ METHOD .FdChildren.Add }
Group79.FdChildren.Add(Shape80);
end;

procedure InitTrebuchetPart5;
begin

Sound84 := TSoundNode.Create;
Sound84.MaxBack := 1000;
Sound84.MaxFront := 1000;
Sound84.Priority := 1;
AudioClip85 := TAudioClipNode.Create;
AudioClip85.Description := 'HolyHandGrenadeSound';
AudioClip85.SetUrl(['grenade.wav','http://www.nps.navy.mil/code32/vrml/grenade.wav']);
{ METHOD .Source }
Sound84.Source := AudioClip85;
{ METHOD .FdChildren.Add }
Group79.FdChildren.Add(Sound84);
{ METHOD .FdChildren.Add }
Switch78.FdChildren.Add(Group79);
Group86 := TGroupNode.Create;
Shape87 := TShapeNode.Create;
{ METHOD .Appearance }
Shape87.Appearance := Appearance28;
Text89 := TTextNode.Create;
Text89.SetText(['Cow (1000 lbs)']);
FontStyle90 := TFontStyleNode.Create;
FontStyle90.Size := 0.5;
{ METHOD .FontStyle }
Text89.FontStyle := FontStyle90;
{ METHOD .Geometry }
Shape87.Geometry := Text89;
{ METHOD .FdChildren.Add }
Group86.FdChildren.Add(Shape87);
Sound91 := TSoundNode.Create;
Sound91.MaxBack := 1000;
Sound91.MaxFront := 1000;
AudioClip92 := TAudioClipNode.Create;
AudioClip92.Description := 'CowSound';
AudioClip92.SetUrl(['lavache.wav','http://www.nps.navy.mil/code32/vrml/lavache.wav']);
{ METHOD .Source }
Sound91.Source := AudioClip92;
{ METHOD .FdChildren.Add }
Group86.FdChildren.Add(Sound91);
{ METHOD .FdChildren.Add }
Switch78.FdChildren.Add(Group86);
Group93 := TGroupNode.Create;
Shape94 := TShapeNode.Create;
{ METHOD .Appearance }
Shape94.Appearance := Appearance28;
Text96 := TTextNode.Create;
Text96.SetText(['Chicken (5 lbs)']);
FontStyle97 := TFontStyleNode.Create;
FontStyle97.Size := 0.5;
{ METHOD .FontStyle }
Text96.FontStyle := FontStyle97;
{ METHOD .Geometry }
Shape94.Geometry := Text96;
{ METHOD .FdChildren.Add }
Group93.FdChildren.Add(Shape94);
Sound98 := TSoundNode.Create;
end;

procedure InitTrebuchetPart6;
begin

Sound98.MaxBack := 1000;
Sound98.MaxFront := 1000;
Sound98.Priority := 1;
AudioClip99 := TAudioClipNode.Create;
AudioClip99.Description := 'HamsterSound';
AudioClip99.SetUrl(['hamster.wav','http://www.nps.navy.mil/code32/vrml/hamster.wav']);
{ METHOD .Source }
Sound98.Source := AudioClip99;
{ METHOD .FdChildren.Add }
Group93.FdChildren.Add(Sound98);
{ METHOD .FdChildren.Add }
Switch78.FdChildren.Add(Group93);
{ METHOD .FdChildren.Add }
Transform77.FdChildren.Add(Switch78);
{ METHOD .FdChildren.Add }
Transform56.FdChildren.Add(Transform77);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Transform56);
Transform100 := TTransformNode.Create;
Transform100.Rotation := Vector4(0,1,0,-1.67);
Transform101 := TTransformNode.Create;
Transform101.Translation := Vector3(5,5,15);
Transform102 := TTransformNode.Create;
Transform102.Translation := Vector3(-2.5,-4.5,-2);
{ METHOD .FdChildren.Add }
Transform102.FdChildren.Add(Transform57);
{ METHOD .FdChildren.Add }
Transform101.FdChildren.Add(Transform102);
{ METHOD .FdChildren.Add }
Transform100.FdChildren.Add(Transform101);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Transform100);
Transform104 := TTransformNode.Create;
Transform104.Translation := Vector3(0,3,0);
Shape105 := TShapeNode.Create;
Box106 := TBoxNode.Create;
Box106.Size := Vector3(25,1,1);
{ METHOD .Geometry }
Shape105.Geometry := Box106;
Appearance107 := TAppearanceNode.Create;
ImageTexture108 := TImageTextureNode.Create;
ImageTexture108.SetUrl(['wood.gif','https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/wood.gif']);
{ METHOD .Texture }
Appearance107.Texture := ImageTexture108;
{ METHOD .Appearance }
Shape105.Appearance := Appearance107;
{ METHOD .FdChildren.Add }
Transform104.FdChildren.Add(Shape105);
Transform109 := TTransformNode.Create;
Transform109.Rotation := Vector4(0,0,1,1);
Transform109.Translation := Vector3(-5,10,0);
{ METHOD .FdChildren.Add }
Transform109.FdChildren.Add(Shape105);
{ METHOD .FdChildren.Add }
Transform104.FdChildren.Add(Transform109);
Transform111 := TTransformNode.Create;
end;

procedure InitTrebuchetPart7;
begin

Transform111.Rotation := Vector4(0,0,1,-1);
Transform111.Translation := Vector3(5,10,0);
{ METHOD .FdChildren.Add }
Transform111.FdChildren.Add(Shape105);
{ METHOD .FdChildren.Add }
Transform104.FdChildren.Add(Transform111);
Transform113 := TTransformNode.Create;
Transform113.Rotation := Vector4(0,0,1,1.57);
Transform113.Scale := Vector3(0.9,1,1);
Transform113.Translation := Vector3(0,11,0);
{ METHOD .FdChildren.Add }
Transform113.FdChildren.Add(Shape105);
{ Main Verticle Support }
{ METHOD .FdChildren.Add }
Transform104.FdChildren.Add(Transform113);
Transform115 := TTransformNode.Create;
Transform115.Scale := Vector3(0.4,1,1);
Transform115.Translation := Vector3(0,10,0);
{ METHOD .FdChildren.Add }
Transform115.FdChildren.Add(Shape105);
{ METHOD .FdChildren.Add }
Transform104.FdChildren.Add(Transform115);
Transform117 := TTransformNode.Create;
Transform117.Rotation := Vector4(0,0,1,1.57);
Transform117.Scale := Vector3(0.6,1,1);
Transform117.Translation := Vector3(0,5,10);
Transform118 := TTransformNode.Create;
Transform118.Rotation := Vector4(0,1,0,0.4);
{ METHOD .FdChildren.Add }
Transform118.FdChildren.Add(Shape105);
{ METHOD .FdChildren.Add }
Transform117.FdChildren.Add(Transform118);
{ METHOD .FdChildren.Add }
Transform104.FdChildren.Add(Transform117);
Transform120 := TTransformNode.Create;
Transform120.Translation := Vector3(0,18.2,-0.3);
Shape121 := TShapeNode.Create;
Box122 := TBoxNode.Create;
Box122.Size := Vector3(5,5,0.5);
{ METHOD .Geometry }
Shape121.Geometry := Box122;
{ METHOD .Appearance }
Shape121.Appearance := Appearance107;
{ METHOD .FdChildren.Add }
Transform120.FdChildren.Add(Shape121);
{ METHOD .FdChildren.Add }
Transform104.FdChildren.Add(Transform120);
Transform124 := TTransformNode.Create;
Transform124.Rotation := Vector4(1,0,0,-1.57);
Transform124.Translation := Vector3(0,0.6,2.5);
Transform125 := TTransformNode.Create;
Transform125.Rotation := Vector4(0,0,1,1.57);
Shape126 := TShapeNode.Create;
Extrusion127 := TExtrusionNode.Create;
end;

procedure InitTrebuchetPart8;
begin

Extrusion127.BeginCap := False;
Extrusion127.SetCrossSection([Vector2(1,-0.38),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,-0.38),Vector2(-1,-1.1),Vector2(1,-1.1),Vector2(1,-0.38)]);
Extrusion127.EndCap := False;
Extrusion127.Solid := False;
Extrusion127.SetSpine([Vector3(0,6,0),Vector3(0,-11,0)]);
{ METHOD .Geometry }
Shape126.Geometry := Extrusion127;
{ METHOD .Appearance }
Shape126.Appearance := Appearance107;
{ METHOD .FdChildren.Add }
Transform125.FdChildren.Add(Shape126);
{ METHOD .FdChildren.Add }
Transform124.FdChildren.Add(Transform125);
{ METHOD .FdChildren.Add }
Transform104.FdChildren.Add(Transform124);
Transform129 := TTransformNode.Create;
Transform129.Center := Vector3(7,0,0);
Transform129.Rotation := Vector4(0,0,1,0.82);
Transform129.Scale := Vector3(0.9,1,1);
Transform129.Translation := Vector3(-7,18,2.5);
Transform130 := TTransformNode.Create;
Shape131 := TShapeNode.Create;
Box132 := TBoxNode.Create;
Box132.Size := Vector3(35,1,1);
{ METHOD .Geometry }
Shape131.Geometry := Box132;
{ METHOD .Appearance }
Shape131.Appearance := Appearance107;
{ METHOD .FdChildren.Add }
Transform130.FdChildren.Add(Shape131);
Transform134 := TTransformNode.Create;
Transform134.Translation := Vector3(7,0,0);
Shape135 := TShapeNode.Create;
Box136 := TBoxNode.Create;
Box136.Size := Vector3(8,2,2);
{ METHOD .Geometry }
Shape135.Geometry := Box136;
{ METHOD .Appearance }
Shape135.Appearance := Appearance107;
{ METHOD .FdChildren.Add }
Transform134.FdChildren.Add(Shape135);
{ METHOD .FdChildren.Add }
Transform130.FdChildren.Add(Transform134);
{ METHOD .FdChildren.Add }
Transform129.FdChildren.Add(Transform130);
Transform138 := TTransformNode.Create;
Transform138.Rotation := Vector4(1,0,0,1.57);
Transform138.Scale := Vector3(0.2,0.2,0.2);
Transform138.Translation := Vector3(-15,-1,0);
Shape139 := TShapeNode.Create;
Appearance140 := TAppearanceNode.Create;
Material141 := TMaterialNode.Create;
Material141.SpecularColor := Vector3(1,1,1);
end;

procedure InitTrebuchetPart9;
begin

{ METHOD .SetMaterial }
Appearance140.Material := Material141;
{ METHOD .Appearance }
Shape139.Appearance := Appearance140;
Extrusion142 := TExtrusionNode.Create;
Extrusion142.BeginCap := False;
Extrusion142.Convex := False;
Extrusion142.CreaseAngle := 1.57;
Extrusion142.SetCrossSection([Vector2(0.9,0),Vector2(0.81,-0.34),Vector2(0.63,-0.63),Vector2(0.34,-0.83),Vector2(0,-0.9),Vector2(-0.34,-0.81),Vector2(-0.63,-0.63),Vector2(-0.81,-0.34),Vector2(-0.9,0),Vector2(-0.81,0.34),Vector2(-0.63,0.63),Vector2(-0.34,0.81),Vector2(0,0.9),Vector2(0.38,0.81),Vector2(0.63,0.63),Vector2(0.81,0.34),Vector2(0.9,0)]);
Extrusion142.EndCap := False;
Extrusion142.SetSpine([Vector3(2,0,0),Vector3(1.85,0,0.77),Vector3(1.41,0,1.41),Vector3(0.77,0,1.85),Vector3(0,0,2),Vector3(-0.77,0,1.85),Vector3(-1.41,0,1.41),Vector3(-1.85,0,0.77),Vector3(-2,0,0),Vector3(-1.85,0,-0.77),Vector3(-1.41,0,-1.41),Vector3(-0.77,0,-1.85),Vector3(0,0,-2),Vector3(0.77,0,-1.85),Vector3(1.41,0,-1.41),Vector3(1.85,0,-0.77),Vector3(2,0,0)]);
{ METHOD .Geometry }
Shape139.Geometry := Extrusion142;
{ METHOD .FdChildren.Add }
Transform138.FdChildren.Add(Shape139);
Transform143 := TTransformNode.Create;
Transform143.Translation := Vector3(1,0,2);
Shape144 := TShapeNode.Create;
Appearance145 := TAppearanceNode.Create;
{ METHOD .Texture }
Appearance145.Texture := ImageTexture108;
{ METHOD .Appearance }
Shape144.Appearance := Appearance145;
Sphere147 := TSphereNode.Create;
Sphere147.Radius := 1.5;
{ METHOD .Geometry }
Shape144.Geometry := Sphere147;
{ METHOD .FdChildren.Add }
Transform143.FdChildren.Add(Shape144);
{ knott }
{ METHOD .FdChildren.Add }
Transform138.FdChildren.Add(Transform143);
{ METHOD .FdChildren.Add }
Transform129.FdChildren.Add(Transform138);
{ The Unicorn }
Transform148 := TTransformNode.Create;
Transform148.Rotation := Vector4(0,0,1,1.2);
Transform148.Scale := Vector3(0.2,0.2,0.2);
Transform148.Translation := Vector3(-18.3,0.3,0);
Shape149 := TShapeNode.Create;
Cylinder150 := TCylinderNode.Create;
Cylinder150.Height := 10;
{ METHOD .Geometry }
Shape149.Geometry := Cylinder150;
Appearance151 := TAppearanceNode.Create;
Material152 := TMaterialNode.Create;
Material152.SpecularColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance151.Material := Material152;
{ METHOD .Appearance }
Shape149.Appearance := Appearance151;
{ METHOD .FdChildren.Add }
Transform148.FdChildren.Add(Shape149);
Transform153 := TTransformNode.Create;
Transform153.Translation := Vector3(0,-2.5,0);
{ The Unicorn }
{ METHOD .FdChildren.Add }
Transform153.FdChildren.Add(Shape139);
end;

procedure InitTrebuchetPart10;
begin

Transform155 := TTransformNode.Create;
Transform155.Translation := Vector3(-2,0,0);
Shape156 := TShapeNode.Create;
Sphere157 := TSphereNode.Create;
Sphere157.Radius := 1.5;
{ METHOD .Geometry }
Shape156.Geometry := Sphere157;
{ METHOD .Appearance }
Shape156.Appearance := Appearance145;
{ METHOD .FdChildren.Add }
Transform155.FdChildren.Add(Shape156);
{ Knott }
{ METHOD .FdChildren.Add }
Transform153.FdChildren.Add(Transform155);
{ METHOD .FdChildren.Add }
Transform148.FdChildren.Add(Transform153);
Transform159 := TTransformNode.Create;
Transform159.Rotation := Vector4(0,0,1,1.2);
Transform159.Translation := Vector3(15,55,-11);
Transform160 := TTransformNode.Create;
Transform160.Scale := Vector3(5,5,5);
Shape161 := TShapeNode.Create;
{ METHOD .Appearance }
Shape161.Appearance := Appearance145;
Extrusion163 := TExtrusionNode.Create;
Extrusion163.BeginCap := False;
Extrusion163.CreaseAngle := 0.76;
Extrusion163.SetCrossSection([Vector2(0.1,0),Vector2(0.092,-0.038),Vector2(0.071,-0.071),Vector2(0.038,-0.092),Vector2(0,-0.1),Vector2(-0.038,-0.092),Vector2(-0.071,-0.071),Vector2(-0.092,-0.038),Vector2(-0.1,0),Vector2(-0.092,0.038),Vector2(-0.071,0.071),Vector2(-0.038,0.092),Vector2(0,0.1),Vector2(0.038,0.092),Vector2(0.071,0.071),Vector2(0.092,0.038),Vector2(0.1,0)]);
Extrusion163.EndCap := False;
Extrusion163.Solid := False;
Extrusion163.SetSpine([Vector3(-15.2,1.4,2.2),Vector3(-12,-0.8,2.2)]);
{ METHOD .Geometry }
Shape161.Geometry := Extrusion163;
{ METHOD .FdChildren.Add }
Transform160.FdChildren.Add(Shape161);
{ METHOD .FdChildren.Add }
Transform159.FdChildren.Add(Transform160);
{ METHOD .FdChildren.Add }
Transform148.FdChildren.Add(Transform159);
{ METHOD .FdChildren.Add }
Transform129.FdChildren.Add(Transform148);
Transform164 := TTransformNode.Create;
Transform164.Rotation := Vector4(1,0,0,-1.7);
Transform164.Translation := Vector3(-17,-4.5,0);
Transform165 := TTransformNode.Create;
Transform165.Scale := Vector3(0.2,0.2,0.2);
{ Knot }
{ METHOD .FdChildren.Add }
Transform165.FdChildren.Add(Shape139);
Transform167 := TTransformNode.Create;
Transform167.Translation := Vector3(-1,0,1.7);
Shape168 := TShapeNode.Create;
Sphere169 := TSphereNode.Create;
Sphere169.Radius := 1.5;
end;

procedure InitTrebuchetPart11;
begin

{ METHOD .Geometry }
Shape168.Geometry := Sphere169;
{ METHOD .Appearance }
Shape168.Appearance := Appearance145;
{ METHOD .FdChildren.Add }
Transform167.FdChildren.Add(Shape168);
{ METHOD .FdChildren.Add }
Transform165.FdChildren.Add(Transform167);
{ METHOD .FdChildren.Add }
Transform164.FdChildren.Add(Transform165);
{ METHOD .FdChildren.Add }
Transform129.FdChildren.Add(Transform164);
Transform171 := TTransformNode.Create;
Transform172 := TTransformNode.Create;
Transform173 := TTransformNode.Create;
Transform173.Rotation := Vector4(0,0,1,-0.82);
Transform173.Translation := Vector3(7,-26,-2.5);
Shape174 := TShapeNode.Create;
{ METHOD .Appearance }
Shape174.Appearance := Appearance145;
Extrusion176 := TExtrusionNode.Create;
Extrusion176.BeginCap := False;
Extrusion176.CreaseAngle := 0.76;
Extrusion176.SetCrossSection([Vector2(0.1,0),Vector2(0.092,-0.038),Vector2(0.071,-0.071),Vector2(0.038,-0.092),Vector2(0,-0.1),Vector2(-0.038,-0.092),Vector2(-0.071,-0.071),Vector2(-0.092,-0.038),Vector2(-0.1,0),Vector2(-0.092,0.038),Vector2(-0.071,0.071),Vector2(-0.038,0.092),Vector2(0,0.1),Vector2(0.038,0.092),Vector2(0.071,0.071),Vector2(0.092,0.038),Vector2(0.1,0)]);
Extrusion176.EndCap := False;
Extrusion176.Solid := False;
Extrusion176.SetSpine([Vector3(-33,0.9,2.5),Vector3(-18.5,1.9,2.55)]);
{ METHOD .Geometry }
Shape174.Geometry := Extrusion176;
{ METHOD .FdChildren.Add }
Transform173.FdChildren.Add(Shape174);
Shape177 := TShapeNode.Create;
{ METHOD .Appearance }
Shape177.Appearance := Appearance145;
Extrusion179 := TExtrusionNode.Create;
Extrusion179.BeginCap := False;
Extrusion179.CreaseAngle := 0.76;
Extrusion179.SetCrossSection([Vector2(0.1,0),Vector2(0.092,-0.038),Vector2(0.071,-0.071),Vector2(0.038,-0.092),Vector2(0,-0.1),Vector2(-0.038,-0.092),Vector2(-0.071,-0.071),Vector2(-0.092,-0.038),Vector2(-0.1,0),Vector2(-0.092,0.038),Vector2(-0.071,0.071),Vector2(-0.038,0.092),Vector2(0,0.1),Vector2(0.038,0.092),Vector2(0.071,0.071),Vector2(0.092,0.038),Vector2(0.1,0)]);
Extrusion179.EndCap := False;
Extrusion179.Solid := False;
Extrusion179.SetSpine([Vector3(-35.7,-0.8,2.5),Vector3(-18.8,-0.8,2.55)]);
{ METHOD .Geometry }
Shape177.Geometry := Extrusion179;
{ METHOD .FdChildren.Add }
Transform173.FdChildren.Add(Shape177);
{ METHOD .FdChildren.Add }
Transform172.FdChildren.Add(Transform173);
{ METHOD .FdChildren.Add }
Transform171.FdChildren.Add(Transform172);
Transform180 := TTransformNode.Create;
Transform180.Rotation := Vector4(0,0,1,-0.82);
Transform180.Translation := Vector3(-4,-15.3,0);
Transform181 := TTransformNode.Create;
Transform182 := TTransformNode.Create;
end;

procedure InitTrebuchetPart12;
begin

Transform182.Rotation := Vector4(0,1,0,-1.57);
Transform182.Scale := Vector3(1,1.3,1);
Transform182.Translation := Vector3(0.5,0,-1);
Transform183 := TTransformNode.Create;
Transform183.Rotation := Vector4(0,0,1,1.57);
Transform184 := TTransformNode.Create;
Transform184.Scale := Vector3(0.3,0.3,0.3);
Shape185 := TShapeNode.Create;
Appearance186 := TAppearanceNode.Create;
Material187 := TMaterialNode.Create;
Material187.Transparency := 0.5;
{ METHOD .SetMaterial }
Appearance186.Material := Material187;
{ METHOD .Appearance }
Shape185.Appearance := Appearance186;
Extrusion188 := TExtrusionNode.Create;
Extrusion188.SetCrossSection([Vector2(0,0),Vector2(0,5),Vector2(0.5,7),Vector2(1,8),Vector2(2,9),Vector2(3,11),Vector2(3.5,11.2),Vector2(4,11),Vector2(5,9),Vector2(6,8),Vector2(6.5,7),Vector2(6.7,5),Vector2(6.7,0),Vector2(0,0)]);
Extrusion188.SetSpine([Vector3(0,0,0),Vector3(0.1,0,0)]);
{ METHOD .Geometry }
Shape185.Geometry := Extrusion188;
{ METHOD .FdChildren.Add }
Transform184.FdChildren.Add(Shape185);
Transform189 := TTransformNode.Create;
Transform189.Scale := Vector3(0.3,0.3,0.3);
Transform189.Translation := Vector3(0,-3.5,11.5);
{ METHOD .FdChildren.Add }
Transform189.FdChildren.Add(Shape139);
Transform191 := TTransformNode.Create;
Transform191.Translation := Vector3(0,0,2);
Shape192 := TShapeNode.Create;
{ METHOD .Appearance }
Shape192.Appearance := Appearance145;
Sphere194 := TSphereNode.Create;
Sphere194.Radius := 1.5;
{ METHOD .Geometry }
Shape192.Geometry := Sphere194;
{ METHOD .FdChildren.Add }
Transform191.FdChildren.Add(Shape192);
{ METHOD .FdChildren.Add }
Transform189.FdChildren.Add(Transform191);
{ METHOD .FdChildren.Add }
Transform184.FdChildren.Add(Transform189);
{ METHOD .FdChildren.Add }
Transform183.FdChildren.Add(Transform184);
Transform195 := TTransformNode.Create;
Transform195.Scale := Vector3(0.3,0.3,0.3);
Transform195.Translation := Vector3(2,0,0);
{ METHOD .FdChildren.Add }
Transform195.FdChildren.Add(Shape185);
Transform197 := TTransformNode.Create;
Transform197.Scale := Vector3(0.3,0.3,0.3);
Transform197.Translation := Vector3(0,-3.5,11.3);
end;

procedure InitTrebuchetPart13;
begin

{ METHOD .FdChildren.Add }
Transform197.FdChildren.Add(Shape139);
Transform199 := TTransformNode.Create;
Transform199.Translation := Vector3(0,0,2);
Shape200 := TShapeNode.Create;
{ METHOD .Appearance }
Shape200.Appearance := Appearance145;
Sphere202 := TSphereNode.Create;
Sphere202.Radius := 1.5;
{ METHOD .Geometry }
Shape200.Geometry := Sphere202;
{ METHOD .FdChildren.Add }
Transform199.FdChildren.Add(Shape200);
{ METHOD .FdChildren.Add }
Transform197.FdChildren.Add(Transform199);
{ METHOD .FdChildren.Add }
Transform195.FdChildren.Add(Transform197);
{ METHOD .FdChildren.Add }
Transform183.FdChildren.Add(Transform195);
Transform203 := TTransformNode.Create;
Transform203.Translation := Vector3(1,-1,0);
Shape204 := TShapeNode.Create;
Extrusion205 := TExtrusionNode.Create;
Extrusion205.BeginCap := False;
Extrusion205.CreaseAngle := 0.785;
Extrusion205.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0)]);
Extrusion205.EndCap := False;
Extrusion205.Solid := False;
Extrusion205.SetSpine([Vector3(0,-1,0),Vector3(0,1,0)]);
{ METHOD .Geometry }
Shape204.Geometry := Extrusion205;
{ METHOD .Appearance }
Shape204.Appearance := Appearance186;
{ METHOD .FdChildren.Add }
Transform203.FdChildren.Add(Shape204);
{ METHOD .FdChildren.Add }
Transform183.FdChildren.Add(Transform203);
{ METHOD .FdChildren.Add }
Transform182.FdChildren.Add(Transform183);
TouchSensor207 := TTouchSensorNode.Create;
TouchSensor207.Description := 'launcher choice';
{ METHOD .FdChildren.Add }
Transform182.FdChildren.Add(TouchSensor207);
{ METHOD .FdChildren.Add }
Transform181.FdChildren.Add(Transform182);
Transform208 := TTransformNode.Create;
Transform208.Scale := Vector3(0.01,0.01,0.01);
Switch209 := TSwitchNode.Create;
Switch209.WhichChoice := 0;
Group210 := TGroupNode.Create;
Transform211 := TTransformNode.Create;
Transform211.Translation := Vector3(0,0.7,0);
Shape212 := TShapeNode.Create;
Sphere213 := TSphereNode.Create;
end;

procedure InitTrebuchetPart14;
begin

Sphere213.Radius := 0.7;
{ METHOD .Geometry }
Shape212.Geometry := Sphere213;
Appearance214 := TAppearanceNode.Create;
Material215 := TMaterialNode.Create;
Material215.DiffuseColor := Vector3(0,0,0);
Material215.SpecularColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance214.Material := Material215;
{ METHOD .Appearance }
Shape212.Appearance := Appearance214;
{ METHOD .FdChildren.Add }
Transform211.FdChildren.Add(Shape212);
{ METHOD .FdChildren.Add }
Group210.FdChildren.Add(Transform211);
{ METHOD .FdChildren.Add }
Switch209.FdChildren.Add(Group210);
Group216 := TGroupNode.Create;
Transform217 := TTransformNode.Create;
Inline218 := TInlineNode.Create;
Inline218.SetUrl(['cow.wrl','http://www.uoguelph.ca/~dchiu/cow.wrl']);
{ METHOD .FdChildren.Add }
Transform217.FdChildren.Add(Inline218);
{ METHOD .FdChildren.Add }
Group216.FdChildren.Add(Transform217);
{ METHOD .FdChildren.Add }
Switch209.FdChildren.Add(Group216);
Group219 := TGroupNode.Create;
Transform220 := TTransformNode.Create;
Transform220.Rotation := Vector4(0,1,0,1.57);
Transform220.Scale := Vector3(0.4,0.4,0.4);
Transform220.Translation := Vector3(0,0.7,0);
Inline221 := TInlineNode.Create;
Inline221.SetUrl(['vrml_ginger.wrl','http://home.inreach.com/ntamura/vrml/vrml_ginger.wrl']);
{ METHOD .FdChildren.Add }
Transform220.FdChildren.Add(Inline221);
{ METHOD .FdChildren.Add }
Group219.FdChildren.Add(Transform220);
{ METHOD .FdChildren.Add }
Switch209.FdChildren.Add(Group219);
{ METHOD .FdChildren.Add }
Transform208.FdChildren.Add(Switch209);
{ METHOD .FdChildren.Add }
Transform181.FdChildren.Add(Transform208);
{ METHOD .FdChildren.Add }
Transform180.FdChildren.Add(Transform181);
{ METHOD .FdChildren.Add }
Transform171.FdChildren.Add(Transform180);
{ METHOD .FdChildren.Add }
Transform129.FdChildren.Add(Transform171);
{ METHOD .FdChildren.Add }
Transform104.FdChildren.Add(Transform129);
Transform222 := TTransformNode.Create;
Transform222.Rotation := Vector4(1,0,0,1.57);
Transform222.Translation := Vector3(0,18,2.5);
Shape223 := TShapeNode.Create;
Cylinder224 := TCylinderNode.Create;
Cylinder224.Height := 8;
end;

procedure InitTrebuchetPart15;
begin

Cylinder224.Radius := 0.4;
{ METHOD .Geometry }
Shape223.Geometry := Cylinder224;
Appearance225 := TAppearanceNode.Create;
Material226 := TMaterialNode.Create;
Material226.DiffuseColor := Vector3(0,0,0);
Material226.SpecularColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance225.Material := Material226;
{ METHOD .Appearance }
Shape223.Appearance := Appearance225;
{ METHOD .FdChildren.Add }
Transform222.FdChildren.Add(Shape223);
{ Top Pivot }
{ METHOD .FdChildren.Add }
Transform104.FdChildren.Add(Transform222);
Transform227 := TTransformNode.Create;
Transform228 := TTransformNode.Create;
Transform228.Translation := Vector3(4,18,1.8);
Shape229 := TShapeNode.Create;
Box230 := TBoxNode.Create;
Box230.Size := Vector3(1,10,0.5);
{ METHOD .Geometry }
Shape229.Geometry := Box230;
{ METHOD .Appearance }
Shape229.Appearance := Appearance107;
{ METHOD .FdChildren.Add }
Transform228.FdChildren.Add(Shape229);
{ METHOD .FdChildren.Add }
Transform227.FdChildren.Add(Transform228);
Transform232 := TTransformNode.Create;
Transform232.Translation := Vector3(4,18,3.2);
Shape233 := TShapeNode.Create;
Box234 := TBoxNode.Create;
Box234.Size := Vector3(1,10,0.5);
{ METHOD .Geometry }
Shape233.Geometry := Box234;
{ METHOD .Appearance }
Shape233.Appearance := Appearance107;
{ METHOD .FdChildren.Add }
Transform232.FdChildren.Add(Shape233);
{ METHOD .FdChildren.Add }
Transform227.FdChildren.Add(Transform232);
Transform236 := TTransformNode.Create;
Transform236.Translation := Vector3(4,14,2.5);
{ CounterWeight }
Shape237 := TShapeNode.Create;
Cylinder238 := TCylinderNode.Create;
Cylinder238.Height := 4;
Cylinder238.Radius := 1.5;
{ METHOD .Geometry }
Shape237.Geometry := Cylinder238;
Appearance239 := TAppearanceNode.Create;
Material240 := TMaterialNode.Create;
Material240.DiffuseColor := Vector3(0,0,0);
Material240.SpecularColor := Vector3(1,1,1);
end;

procedure InitTrebuchetPart16;
begin

{ METHOD .SetMaterial }
Appearance239.Material := Material240;
{ METHOD .Appearance }
Shape237.Appearance := Appearance239;
{ METHOD .FdChildren.Add }
Transform236.FdChildren.Add(Shape237);
{ METHOD .FdChildren.Add }
Transform227.FdChildren.Add(Transform236);
Transform241 := TTransformNode.Create;
Transform241.Rotation := Vector4(1,0,0,1.57);
Transform241.Translation := Vector3(4,22,2.5);
Shape242 := TShapeNode.Create;
Cylinder243 := TCylinderNode.Create;
Cylinder243.Height := 2.5;
Cylinder243.Radius := 0.3;
{ METHOD .Geometry }
Shape242.Geometry := Cylinder243;
Appearance244 := TAppearanceNode.Create;
Material245 := TMaterialNode.Create;
Material245.DiffuseColor := Vector3(0,0,0);
Material245.SpecularColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance244.Material := Material245;
{ METHOD .Appearance }
Shape242.Appearance := Appearance244;
{ METHOD .FdChildren.Add }
Transform241.FdChildren.Add(Shape242);
{ METHOD .FdChildren.Add }
Transform227.FdChildren.Add(Transform241);
{ METHOD .FdChildren.Add }
Transform104.FdChildren.Add(Transform227);
Transform246 := TTransformNode.Create;
Transform246.Rotation := Vector4(0,0,1,1.57);
Transform246.Scale := Vector3(0.2,0.2,0.2);
Transform246.Translation := Vector3(-11.5,-1,2);
Transform247 := TTransformNode.Create;
Transform247.Rotation := Vector4(1,0,0,1.57);
{ METHOD .FdChildren.Add }
Transform247.FdChildren.Add(Shape139);
Transform249 := TTransformNode.Create;
Transform249.Rotation := Vector4(1,0,0,-1.57);
Transform249.Translation := Vector3(0,0,7);
Shape250 := TShapeNode.Create;
Cylinder251 := TCylinderNode.Create;
Cylinder251.Height := 10;
Cylinder251.Radius := 0.7;
{ METHOD .Geometry }
Shape250.Geometry := Cylinder251;
Appearance252 := TAppearanceNode.Create;
Material253 := TMaterialNode.Create;
Material253.SpecularColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance252.Material := Material253;
end;

procedure InitTrebuchetPart17;
begin

{ METHOD .Appearance }
Shape250.Appearance := Appearance252;
{ METHOD .FdChildren.Add }
Transform249.FdChildren.Add(Shape250);
{ METHOD .FdChildren.Add }
Transform247.FdChildren.Add(Transform249);
{ METHOD .FdChildren.Add }
Transform246.FdChildren.Add(Transform247);
Transform254 := TTransformNode.Create;
Transform254.Translation := Vector3(0,0,7);
{ METHOD .FdChildren.Add }
Transform254.FdChildren.Add(Transform247);
{ METHOD .FdChildren.Add }
Transform246.FdChildren.Add(Transform254);
{ Release Pin }
Transform256 := TTransformNode.Create;
Transform256.Rotation := Vector4(1,0,0,-1.57);
Transform256.Translation := Vector3(0,0,-3);
{ METHOD .FdChildren.Add }
Transform256.FdChildren.Add(Transform247);
{ METHOD .FdChildren.Add }
Transform246.FdChildren.Add(Transform256);
{ METHOD .FdChildren.Add }
Transform104.FdChildren.Add(Transform246);
Transform258 := TTransformNode.Create;
Transform258.Translation := Vector3(0,0,5);
{ METHOD .FdChildren.Add }
Transform258.FdChildren.Add(Shape105);
{ METHOD .FdChildren.Add }
Transform258.FdChildren.Add(Transform109);
{ METHOD .FdChildren.Add }
Transform258.FdChildren.Add(Transform111);
{ METHOD .FdChildren.Add }
Transform258.FdChildren.Add(Transform113);
{ METHOD .FdChildren.Add }
Transform258.FdChildren.Add(Transform115);
Transform264 := TTransformNode.Create;
Transform264.Rotation := Vector4(0,1,0,1.57);
Transform264.Scale := Vector3(0.6,1,1);
Transform264.Translation := Vector3(0,-11,-2.5);
{ METHOD .FdChildren.Add }
Transform264.FdChildren.Add(Transform115);
{ METHOD .FdChildren.Add }
Transform258.FdChildren.Add(Transform264);
Transform266 := TTransformNode.Create;
Transform266.Rotation := Vector4(0,0,1,-1.57);
Transform266.Scale := Vector3(0.6,1,1);
Transform266.Translation := Vector3(0,5,-10);
Transform267 := TTransformNode.Create;
Transform267.Rotation := Vector4(0,1,0,0.4);
{ METHOD .FdChildren.Add }
Transform267.FdChildren.Add(Shape105);
{ METHOD .FdChildren.Add }
Transform266.FdChildren.Add(Transform267);
{ METHOD .FdChildren.Add }
Transform258.FdChildren.Add(Transform266);
Transform269 := TTransformNode.Create;
Transform269.Translation := Vector3(0,0,0.6);
{ METHOD .FdChildren.Add }
Transform269.FdChildren.Add(Transform120);
{ METHOD .FdChildren.Add }
Transform258.FdChildren.Add(Transform269);
end;

procedure InitTrebuchetPart18;
begin

{ METHOD .FdChildren.Add }
Transform104.FdChildren.Add(Transform258);
Transform271 := TTransformNode.Create;
Transform271.Translation := Vector3(10,-1,2.5);
Shape272 := TShapeNode.Create;
Box273 := TBoxNode.Create;
Box273.Size := Vector3(1,1,8);
{ METHOD .Geometry }
Shape272.Geometry := Box273;
{ METHOD .Appearance }
Shape272.Appearance := Appearance107;
{ METHOD .FdChildren.Add }
Transform271.FdChildren.Add(Shape272);
Transform275 := TTransformNode.Create;
Transform275.Rotation := Vector4(1,0,0,1.57);
Transform275.Translation := Vector3(0,0,4.5);
Shape276 := TShapeNode.Create;
Cylinder277 := TCylinderNode.Create;
Cylinder277.Radius := 2;
{ METHOD .Geometry }
Shape276.Geometry := Cylinder277;
{ METHOD .Appearance }
Shape276.Appearance := Appearance107;
{ METHOD .FdChildren.Add }
Transform275.FdChildren.Add(Shape276);
Shape279 := TShapeNode.Create;
Sphere280 := TSphereNode.Create;
Sphere280.Radius := 1.5;
{ METHOD .Geometry }
Shape279.Geometry := Sphere280;
{ METHOD .Appearance }
Shape279.Appearance := Appearance214;
{ METHOD .FdChildren.Add }
Transform275.FdChildren.Add(Shape279);
Transform282 := TTransformNode.Create;
Transform282.Translation := Vector3(0,0.55,0);
Shape283 := TShapeNode.Create;
Sphere284 := TSphereNode.Create;
Sphere284.Radius := 1.5;
{ METHOD .Geometry }
Shape283.Geometry := Sphere284;
{ METHOD .Appearance }
Shape283.Appearance := Appearance214;
{ METHOD .FdChildren.Add }
Transform282.FdChildren.Add(Shape283);
{ METHOD .FdChildren.Add }
Transform275.FdChildren.Add(Transform282);
{ METHOD .FdChildren.Add }
Transform271.FdChildren.Add(Transform275);
Transform286 := TTransformNode.Create;
Transform286.Rotation := Vector4(1,0,0,1.57);
Transform286.Translation := Vector3(0,0,-4.5);
{ METHOD .FdChildren.Add }
Transform286.FdChildren.Add(Shape276);
{ METHOD .FdChildren.Add }
Transform286.FdChildren.Add(Shape279);
Transform289 := TTransformNode.Create;
end;

procedure InitTrebuchetPart19;
begin

Transform289.Translation := Vector3(0,-0.55,0);
{ METHOD .FdChildren.Add }
Transform289.FdChildren.Add(Shape283);
{ METHOD .FdChildren.Add }
Transform286.FdChildren.Add(Transform289);
{ METHOD .FdChildren.Add }
Transform271.FdChildren.Add(Transform286);
{ METHOD .FdChildren.Add }
Transform104.FdChildren.Add(Transform271);
Transform291 := TTransformNode.Create;
Transform291.Translation := Vector3(-10,-1,2.5);
{ METHOD .FdChildren.Add }
Transform291.FdChildren.Add(Shape272);
Transform293 := TTransformNode.Create;
Transform293.Rotation := Vector4(1,0,0,1.57);
Transform293.Translation := Vector3(0,0,4.5);
{ METHOD .FdChildren.Add }
Transform293.FdChildren.Add(Shape276);
{ METHOD .FdChildren.Add }
Transform293.FdChildren.Add(Shape279);
Transform296 := TTransformNode.Create;
Transform296.Translation := Vector3(0,0.55,0);
{ METHOD .FdChildren.Add }
Transform296.FdChildren.Add(Shape283);
{ METHOD .FdChildren.Add }
Transform293.FdChildren.Add(Transform296);
{ METHOD .FdChildren.Add }
Transform291.FdChildren.Add(Transform293);
Transform298 := TTransformNode.Create;
Transform298.Rotation := Vector4(1,0,0,1.57);
Transform298.Translation := Vector3(0,0,-4.5);
{ METHOD .FdChildren.Add }
Transform298.FdChildren.Add(Shape276);
{ METHOD .FdChildren.Add }
Transform298.FdChildren.Add(Shape279);
Transform301 := TTransformNode.Create;
Transform301.Translation := Vector3(0,-0.55,0);
{ METHOD .FdChildren.Add }
Transform301.FdChildren.Add(Shape283);
{ METHOD .FdChildren.Add }
Transform298.FdChildren.Add(Transform301);
{ METHOD .FdChildren.Add }
Transform291.FdChildren.Add(Transform298);
Transform303 := TTransformNode.Create;
Transform303.Rotation := Vector4(0,1,0,-0.6);
Transform303.Translation := Vector3(0,100,400);
Transform304 := TTransformNode.Create;
Transform304.Translation := Vector3(1,3,0);
Viewpoint305 := TViewpointNode.Create;
Viewpoint305.Description := 'Side';
{ METHOD .FdChildren.Add }
Transform304.FdChildren.Add(Viewpoint305);
{ METHOD .FdChildren.Add }
Transform303.FdChildren.Add(Transform304);
{ METHOD .FdChildren.Add }
Transform303.FdChildren.Add(Transform57);
Transform307 := TTransformNode.Create;
{ METHOD .FdChildren.Add }
Transform307.FdChildren.Add(TouchSensor207);
end;

procedure InitTrebuchetPart20;
begin

{ METHOD .FdChildren.Add }
Transform307.FdChildren.Add(Switch78);
Transform310 := TTransformNode.Create;
Transform310.Translation := Vector3(2.5,0,0);
Shape311 := TShapeNode.Create;
Box312 := TBoxNode.Create;
Box312.Size := Vector3(5,0.5,0.5);
{ METHOD .Geometry }
Shape311.Geometry := Box312;
Appearance313 := TAppearanceNode.Create;
Material314 := TMaterialNode.Create;
Material314.Transparency := 1;
{ METHOD .SetMaterial }
Appearance313.Material := Material314;
{ METHOD .Appearance }
Shape311.Appearance := Appearance313;
{ METHOD .FdChildren.Add }
Transform310.FdChildren.Add(Shape311);
{ METHOD .FdChildren.Add }
Transform307.FdChildren.Add(Transform310);
{ METHOD .FdChildren.Add }
Transform303.FdChildren.Add(Transform307);
Transform315 := TTransformNode.Create;
Transform315.Scale := Vector3(0.5,0.5,0.5);
Transform315.Translation := Vector3(0,-1,0);
{ METHOD .FdChildren.Add }
Transform315.FdChildren.Add(TouchSensor50);
{ METHOD .FdChildren.Add }
Transform315.FdChildren.Add(Switch33);
Transform318 := TTransformNode.Create;
Transform318.Translation := Vector3(8,0,0);
Shape319 := TShapeNode.Create;
Box320 := TBoxNode.Create;
Box320.Size := Vector3(17,1,0.5);
{ METHOD .Geometry }
Shape319.Geometry := Box320;
Appearance321 := TAppearanceNode.Create;
Material322 := TMaterialNode.Create;
Material322.Transparency := 1;
{ METHOD .SetMaterial }
Appearance321.Material := Material322;
{ METHOD .Appearance }
Shape319.Appearance := Appearance321;
{ METHOD .FdChildren.Add }
Transform318.FdChildren.Add(Shape319);
{ METHOD .FdChildren.Add }
Transform315.FdChildren.Add(Transform318);
{ METHOD .FdChildren.Add }
Transform303.FdChildren.Add(Transform315);
{ METHOD .FdChildren.Add }
Transform291.FdChildren.Add(Transform303);
Transform323 := TTransformNode.Create;
Transform323.Translation := Vector3(14.25,1.25,0);
{ METHOD .FdChildren.Add }
Transform323.FdChildren.Add(Switch209);
Transform325 := TTransformNode.Create;
Transform325.Rotation := Vector4(0,1,0,1.57);
end;

procedure InitTrebuchetPart21;
begin

Transform325.Translation := Vector3(0,1,0);
Viewpoint326 := TViewpointNode.Create;
Viewpoint326.Description := 'Projectile Cam';
Viewpoint326.Position := Vector3(0,0,15);
{ METHOD .FdChildren.Add }
Transform325.FdChildren.Add(Viewpoint326);
{ METHOD .FdChildren.Add }
Transform323.FdChildren.Add(Transform325);
{ METHOD .FdChildren.Add }
Transform291.FdChildren.Add(Transform323);
Transform327 := TTransformNode.Create;
Transform327.Translation := Vector3(20,2,0);
Transform328 := TTransformNode.Create;
Transform328.Rotation := Vector4(0,1,0,1.57);
Viewpoint329 := TViewpointNode.Create;
Viewpoint329.Description := 'Fore';
{ METHOD .FdChildren.Add }
Transform328.FdChildren.Add(Viewpoint329);
{ METHOD .FdChildren.Add }
Transform327.FdChildren.Add(Transform328);
{ METHOD .FdChildren.Add }
Transform291.FdChildren.Add(Transform327);
Transform330 := TTransformNode.Create;
Transform330.Translation := Vector3(-8,4,0);
Transform331 := TTransformNode.Create;
Transform331.Rotation := Vector4(0,1,0,-1.57);
Viewpoint332 := TViewpointNode.Create;
Viewpoint332.Description := 'Aft';
{ METHOD .FdChildren.Add }
Transform331.FdChildren.Add(Viewpoint332);
{ METHOD .FdChildren.Add }
Transform330.FdChildren.Add(Transform331);
{ METHOD .FdChildren.Add }
Transform291.FdChildren.Add(Transform330);
Script333 := TScriptNode.Create;
SFBool334 := TSFBool.CreateUndefined(Script333, false, 'set_boolean');
{ METHOD .Fd.AddCustomField }
Script333.AddCustomField(SFBool334);
SFInt32335 := TSFInt32.CreateUndefined(Script333, false, 'whichchoice');
{ METHOD .Fd.AddCustomField }
Script333.AddCustomField(SFInt32335);
SFFloat336 := TSFFloat.CreateUndefined(Script333, false, 'CounterWeight');
{ METHOD .Fd.AddCustomField }
Script333.AddCustomField(SFFloat336);

Script333.SetSourceCode('''ecmascript:\n"+
"\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	whichchoice =0;\n"+
"	CounterWeight=100;\n"+
"}\n"+
"\n"+
"function set_boolean ( boolean_input, eventTime)\n"+
"{\n"+
"\n"+
"	if ( boolean_input== false ) { return; } // ignore the unclick\n"+
"        whichchoice = whichchoice +1;\n"+
"	if (whichchoice == 0)CounterWeight=50.00;\n"+
"	if (whichchoice == 1)CounterWeight=500.00;\n"+
"	if (whichchoice == 2)CounterWeight=1000.00;\n"+
"	if (whichchoice == 3)CounterWeight=10000.00;\n"+
"        if ( whichchoice ==4 ) { whichchoice = 0; CounterWeight=50; }\n"+
"\n"+
"\n"+
"        Browser.println ('CounterWeight ='+CounterWeight);\n"+
"}''');
{ METHOD .FdChildren.Add }
Transform291.FdChildren.Add(Script333);
Script337 := TScriptNode.Create;
SFBool338 := TSFBool.CreateUndefined(Script337, false, 'set_boolean');
{ METHOD .Fd.AddCustomField }
Script337.AddCustomField(SFBool338);
SFInt32339 := TSFInt32.CreateUndefined(Script337, false, 'whichchoice');
{ METHOD .Fd.AddCustomField }
Script337.AddCustomField(SFInt32339);
SFFloat340 := TSFFloat.CreateUndefined(Script337, false, 'ProjectileWeight');
{ METHOD .Fd.AddCustomField }
Script337.AddCustomField(SFFloat340);

Script337.SetSourceCode('''ecmascript:\n"+
"\n"+
"function set_boolean (boolean_input, eventTime)\n"+
"{\n"+
"	if ( boolean_input== false ) { return; } // ignore unclick\n"+
"        whichchoice = whichchoice +1;\n"+
"        if (whichchoice == 0)ProjectileWeight=10.00;\n"+
"        if (whichchoice == 1)ProjectileWeight=1000.00;\n"+
"	if (whichchoice == 2)ProjectileWeight=5;\n"+
"\n"+
"	if ( whichchoice ==3 ) { whichchoice = 0; ProjectileWeight=10.00; }\n"+
"	Browser.println ('Projectile Weight'+ProjectileWeight);\n"+
"}''');
{ METHOD .FdChildren.Add }
Transform291.FdChildren.Add(Script337);
Script341 := TScriptNode.Create;
SFBool342 := TSFBool.CreateUndefined(Script341, false, 'set_boolean');
{ METHOD .Fd.AddCustomField }
Script341.AddCustomField(SFBool342);
SFInt32343 := TSFInt32.CreateUndefined(Script341, false, 'whichchoice');
{ METHOD .Fd.AddCustomField }
Script341.AddCustomField(SFInt32343);

Script341.SetSourceCode('''ecmascript:\n"+
"\n"+
"function set_boolean (boolean_input, eventTime)\n"+
"{\n"+
"	if ( boolean_input== false ) { return; } // ignore unclick\n"+
"\n"+
"        whichchoice = whichchoice +1;\n"+
"\n"+
"        if ( whichchoice ==2 )  whichchoice = 0;\n"+
"\n"+
"\n"+
"}''');
{ METHOD .FdChildren.Add }
Transform291.FdChildren.Add(Script341);
Script344 := TScriptNode.Create;
SFFloat345 := TSFFloat.CreateUndefined(Script344, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script344.AddCustomField(SFFloat345);
SFFloat346 := TSFFloat.CreateUndefined(Script344, false, 'set_MassCounterWeight');
{ METHOD .Fd.AddCustomField }
Script344.AddCustomField(SFFloat346);
SFFloat347 := TSFFloat.CreateUndefined(Script344, false, 'set_MassProjectileWeight');
{ METHOD .Fd.AddCustomField }
Script344.AddCustomField(SFFloat347);
SFFloat348 := TSFFloat.CreateUndefined(Script344, false, 'MassCounterWeight');
SFFloat348.Value := '1';
{ METHOD .Fd.AddCustomField }
Script344.AddCustomField(SFFloat348);
SFFloat349 := TSFFloat.CreateUndefined(Script344, false, 'MassProjectileWeight');
SFFloat349.Value := '1';
{ METHOD .Fd.AddCustomField }
Script344.AddCustomField(SFFloat349);
SFVec3f350 := TSFVec3f.CreateUndefined(Script344, false, 'transparent');
{ METHOD .Fd.AddCustomField }
Script344.AddCustomField(SFVec3f350);
SFVec3f351 := TSFVec3f.CreateUndefined(Script344, false, 'value_changed');
{ METHOD .Fd.AddCustomField }
Script344.AddCustomField(SFVec3f351);

Script344.SetSourceCode('''ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	MassCounterWeight=100;\n"+
"	MassProjectileWeight=10;\n"+
"	Browser.println ('MassCounterWeight =' + MassCounterWeight);\\n	Browser.println ('MassProjectileWeight =' + MassProjectileWeight);\\n}\\n\\nfunction set_MassProjectileWeight (value, timestamp)\\n{\\n	MassProjectileWeight = value;\\n	Browser.println ('new MassProjectileWeight =' + MassProjectileWeight);\\n}\\nfunction set_MassCounterWeight (value2, timestamp)\\n{\\n	MassCounterWeight = value2;\\n	Browser.println ('new MassCounterWeight =' + MassCounterWeight);\\n}\\n\\n\\nfunction set_fraction ( fraction, eventTime )\\n{\\n	var TrebuchetHeight=45;\\n	var Height =25;\\n      	var x = (2*(MassCounterWeight/MassProjectileWeight)*Height*fraction)-.5*TrebuchetHeight;\\n	// start at TrebuchetHeight and keep along z axis (z=zero)\\n	var y =  (MassCounterWeight/MassProjectileWeight)*Height*Math.sin(fraction*3.14);\\n        var z = 0;\\n        transparent = new SFVec3f (1,1,1);\\n     if (y <1.5*TrebuchetHeight  )if (x<TrebuchetHeight)\\n		{\\n		x=x-10;\\n		y=y+1;\\n		transparent = new SFVec3f(.01, .01, .01);\\n			}\\n\\n	value_changed = new SFVec3f (x, y, z);\\n	Browser.println ('x=' + value_changed[0] + ' y=' + value_changed[1] + ' z=' + value_changed[2]);\n"+
"}''');
{ METHOD .FdChildren.Add }
Transform291.FdChildren.Add(Script344);
{ METHOD .FdChildren.Add }
Transform104.FdChildren.Add(Transform291);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Transform104);
TimeSensor352 := TTimeSensorNode.Create;
TimeSensor352.CycleInterval := 10;
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(TimeSensor352);
PositionInterpolator353 := TPositionInterpolatorNode.Create;
PositionInterpolator353.SetKey([0,0.1,0.2,0.2,0.3,0.9]);
PositionInterpolator353.SetKeyValue([Vector3(1.4,1.6,0),Vector3(1,-8,0),Vector3(-3.5,-12,0),Vector3(-3.5,-12,0),Vector3(1.2,-8,0),Vector3(1.4,1.6,0)]);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(PositionInterpolator353);
OrientationInterpolator354 := TOrientationInterpolatorNode.Create;
OrientationInterpolator354.SetKey([0,0.1,0.2,0.2,0.3,0.9]);
OrientationInterpolator354.SetKeyValue([Vector4(0,0,1,0.82),Vector4(0,0,1,-0.77),Vector4(0,0,1,-1.57),Vector4(0,0,1,-1.57),Vector4(0,0,1,-0.77),Vector4(0,0,1,0.82)]);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(OrientationInterpolator354);
PositionInterpolator355 := TPositionInterpolatorNode.Create;
PositionInterpolator355.SetKey([0,0.01,0.95,1]);
PositionInterpolator355.SetKeyValue([Vector3(0,0,-3),Vector3(0,0,-10),Vector3(0,0,-10),Vector3(0,0,-3)]);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(PositionInterpolator355);
OrientationInterpolator356 := TOrientationInterpolatorNode.Create;
OrientationInterpolator356.SetKey([0,0.7,1]);
OrientationInterpolator356.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,-3.14),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(OrientationInterpolator356);
PositionInterpolator357 := TPositionInterpolatorNode.Create;
PositionInterpolator357.SetKey([0,0.2,0.98,0.99]);
PositionInterpolator357.SetKeyValue([Vector3(1,1,1),Vector3(0.01,0.01,0.01),Vector3(0.01,0.01,0.01),Vector3(1,1,1)]);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(PositionInterpolator357);
{ Original "clock.EventFraction_changed TO invisiable.EventSet_fraction }
{ Sample clock.EventFraction_changed TO invisiable.EventSet_fraction}
Group17.AddRoute(TimeSensor352.EventFraction_changed, PositionInterpolator357.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "invisiable.EventValue_changed TO projectiletransform.scale }
{ Sample invisiable.EventValue_changed TO projectiletransform.scale}
Group17.AddRoute(PositionInterpolator357.EventValue_changed, Transform208.scale);
{ METHOD .AddX3DROUTE }
{ Original "WeightScript.CounterWeight TO Mover.EventSet_MassCounterWeight }
{ Sample WeightScript.CounterWeight TO Mover.EventSet_MassCounterWeight}
Group17.AddRoute(WeightScript.[object Object], Script344.EventSet_MassCounterWeight);
{ METHOD .AddX3DROUTE }
{ Original "LauncheeScript.ProjectileWeight TO Mover.EventSet_MassProjectileWeight }
{ Sample LauncheeScript.ProjectileWeight TO Mover.EventSet_MassProjectileWeight}
Group17.AddRoute(LauncheeScript.[object Object], Script344.EventSet_MassProjectileWeight);
{ METHOD .AddX3DROUTE }
{ Original "clock.EventFraction_changed TO Mover.EventSet_fraction }
{ Sample clock.EventFraction_changed TO Mover.EventSet_fraction}
Group17.AddRoute(TimeSensor352.EventFraction_changed, Script344.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Mover.EventValue_changed TO ProjectileTransform.FdTranslation.EventIn }
{ Sample Mover.EventValue_changed TO ProjectileTransform.FdTranslation.EventIn}
Group17.AddRoute(Script344.EventValue_changed, Transform323.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "Mover.transparent TO ProjectileTransform.scale }
{ Sample Mover.transparent TO ProjectileTransform.scale}
Group17.AddRoute(Mover.[object Object], Transform323.scale);
{ METHOD .AddX3DROUTE }
{ Original "Launch.EventTouchTime TO clock.FdStartTime.EventIn }
{ Sample Launch.EventTouchTime TO clock.FdStartTime.EventIn}
Group17.AddRoute(TouchSensor76.EventTouchTime, TimeSensor352.FdStartTime.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "Launch.EventIsActive TO PigdogMonkScript.EventSet_boolean }
{ Sample Launch.EventIsActive TO PigdogMonkScript.EventSet_boolean}
Group17.AddRoute(TouchSensor76.EventIsActive, Script341.EventSet_boolean);
{ METHOD .AddX3DROUTE }
{ Original "Launch.EventTouchTime TO PigDogSound.FdStartTime.EventIn }
{ Sample Launch.EventTouchTime TO PigDogSound.FdStartTime.EventIn}
Group17.AddRoute(TouchSensor76.EventTouchTime, AudioClip72.FdStartTime.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "Launch.EventTouchTime TO MonkSound.FdStartTime.EventIn }
{ Sample Launch.EventTouchTime TO MonkSound.FdStartTime.EventIn}
Group17.AddRoute(TouchSensor76.EventTouchTime, AudioClip75.FdStartTime.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "PigdogMonkScript.whichchoice TO PigdogMonk.whichChoice }
{ Sample PigdogMonkScript.whichchoice TO PigdogMonk.whichChoice}
Group17.AddRoute(PigdogMonkScript.[object Object], Switch69.whichChoice);
{ METHOD .AddX3DROUTE }
{ Original "LauncheeChoice.EventTouchTime TO HolyHandGrenadeSound.FdStartTime.EventIn }
{ Sample LauncheeChoice.EventTouchTime TO HolyHandGrenadeSound.FdStartTime.EventIn}
Group17.AddRoute(TouchSensor207.EventTouchTime, AudioClip85.FdStartTime.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "LauncheeChoice.EventTouchTime TO CowSound.FdStartTime.EventIn }
{ Sample LauncheeChoice.EventTouchTime TO CowSound.FdStartTime.EventIn}
Group17.AddRoute(TouchSensor207.EventTouchTime, AudioClip92.FdStartTime.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "LauncheeChoice.EventTouchTime TO HamsterSound.FdStartTime.EventIn }
{ Sample LauncheeChoice.EventTouchTime TO HamsterSound.FdStartTime.EventIn}
Group17.AddRoute(TouchSensor207.EventTouchTime, AudioClip99.FdStartTime.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "LauncheeChoice.EventIsActive TO LauncheeScript.EventSet_boolean }
{ Sample LauncheeChoice.EventIsActive TO LauncheeScript.EventSet_boolean}
Group17.AddRoute(TouchSensor207.EventIsActive, Script337.EventSet_boolean);
{ METHOD .AddX3DROUTE }
{ Original "LauncheeScript.whichchoice TO projectile.whichChoice }
{ Sample LauncheeScript.whichchoice TO projectile.whichChoice}
Group17.AddRoute(LauncheeScript.[object Object], Switch209.whichChoice);
{ METHOD .AddX3DROUTE }
{ Original "LauncheeScript.whichchoice TO projectilename.whichChoice }
{ Sample LauncheeScript.whichchoice TO projectilename.whichChoice}
Group17.AddRoute(LauncheeScript.[object Object], Switch78.whichChoice);
{ METHOD .AddX3DROUTE }
{ Original "weightselector.EventIsActive TO WeightScript.EventSet_boolean }
{ Sample weightselector.EventIsActive TO WeightScript.EventSet_boolean}
Group17.AddRoute(TouchSensor50.EventIsActive, Script333.EventSet_boolean);
{ METHOD .AddX3DROUTE }
{ Original "WeightScript.whichchoice TO Weight.whichChoice }
{ Sample WeightScript.whichchoice TO Weight.whichChoice}
Group17.AddRoute(WeightScript.[object Object], Switch33.whichChoice);
{ METHOD .AddX3DROUTE }
{ Original "clock.EventFraction_changed TO flingerangles.EventSet_fraction }
{ Sample clock.EventFraction_changed TO flingerangles.EventSet_fraction}
Group17.AddRoute(TimeSensor352.EventFraction_changed, OrientationInterpolator354.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "flingerangles.EventValue_changed TO flinger.FdRotation.EventIn }
{ Sample flingerangles.EventValue_changed TO flinger.FdRotation.EventIn}
Group17.AddRoute(OrientationInterpolator354.EventValue_changed, Transform129.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "clock.EventFraction_changed TO verticalweightpath.EventSet_fraction }
{ Sample clock.EventFraction_changed TO verticalweightpath.EventSet_fraction}
Group17.AddRoute(TimeSensor352.EventFraction_changed, PositionInterpolator353.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "verticalweightpath.EventValue_changed TO verticalweight.FdTranslation.EventIn }
{ Sample verticalweightpath.EventValue_changed TO verticalweight.FdTranslation.EventIn}
Group17.AddRoute(PositionInterpolator353.EventValue_changed, Transform227.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "clock.EventFraction_changed TO pinpath.EventSet_fraction }
{ Sample clock.EventFraction_changed TO pinpath.EventSet_fraction}
Group17.AddRoute(TimeSensor352.EventFraction_changed, PositionInterpolator355.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "pinpath.EventValue_changed TO Pin.FdTranslation.EventIn }
{ Sample pinpath.EventValue_changed TO Pin.FdTranslation.EventIn}
Group17.AddRoute(PositionInterpolator355.EventValue_changed, Transform256.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3D0.AddChildren([Group17]);
end;

function CreateTrebuchet: TX3DRootNode;
begin
InitTrebuchetPart0;
InitTrebuchetPart1;
InitTrebuchetPart2;
InitTrebuchetPart3;
InitTrebuchetPart4;
InitTrebuchetPart5;
InitTrebuchetPart6;
InitTrebuchetPart7;
InitTrebuchetPart8;
InitTrebuchetPart9;
InitTrebuchetPart10;
InitTrebuchetPart11;
InitTrebuchetPart12;
InitTrebuchetPart13;
InitTrebuchetPart14;
InitTrebuchetPart15;
InitTrebuchetPart16;
InitTrebuchetPart17;
InitTrebuchetPart18;
InitTrebuchetPart19;
InitTrebuchetPart20;
InitTrebuchetPart21;
Result := X3D0;
end;

begin
end.
