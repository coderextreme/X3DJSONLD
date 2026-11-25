unit JoeSkinTexcoordDisplacerKickUpdate2;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateJoeSkinTexcoordDisplacerKickUpdate2: TX3DRootNode;

implementation

uses CastleVectors;

var
  X3D0: TX3DRootNode;
  Group15: TGroupNode;
  WorldInfo16: TWorldInfoNode;
  NavigationInfo17: TNavigationInfoNode;
  Background18: TBackgroundNode;
  SpotLight19: TSpotLightNode;
  PointLight20: TPointLightNode;
  Viewpoint21: TViewpointNode;
  Viewpoint22: TViewpointNode;
  Viewpoint23: TViewpointNode;
  Viewpoint24: TViewpointNode;
  Viewpoint25: TViewpointNode;
  Group26: TGroupNode;
  HAnimHumanoid27: THAnimHumanoidNode;
  HAnimJoint28: THAnimJointNode;
  HAnimSegment29: THAnimSegmentNode;
  HAnimSite30: THAnimSiteNode;
  Transform31: TTransformNode;
  Viewpoint32: TViewpointNode;
  Shape33: TShapeNode;
  IndexedLineSet34: TIndexedLineSetNode;
  Coordinate35: TCoordinateNode;
  Color36: TColorNode;
  HAnimJoint37: THAnimJointNode;
  HAnimJoint38: THAnimJointNode;
  HAnimJoint39: THAnimJointNode;
  HAnimJoint40: THAnimJointNode;
  HAnimJoint41: THAnimJointNode;
  HAnimJoint42: THAnimJointNode;
  HAnimJoint43: THAnimJointNode;
  HAnimJoint44: THAnimJointNode;
  HAnimJoint45: THAnimJointNode;
  HAnimJoint46: THAnimJointNode;
  HAnimJoint47: THAnimJointNode;
  HAnimJoint48: THAnimJointNode;
  HAnimJoint49: THAnimJointNode;
  HAnimJoint50: THAnimJointNode;
  HAnimJoint51: THAnimJointNode;
  HAnimJoint52: THAnimJointNode;
  HAnimJoint53: THAnimJointNode;
  HAnimJoint54: THAnimJointNode;
  HAnimJoint55: THAnimJointNode;
  HAnimJoint56: THAnimJointNode;
  HAnimJoint57: THAnimJointNode;
  HAnimJoint58: THAnimJointNode;
  HAnimJoint59: THAnimJointNode;
  HAnimJoint60: THAnimJointNode;
  HAnimJoint61: THAnimJointNode;
  HAnimJoint62: THAnimJointNode;
  HAnimJoint63: THAnimJointNode;
  HAnimJoint64: THAnimJointNode;
  HAnimJoint65: THAnimJointNode;
  HAnimJoint66: THAnimJointNode;
  HAnimJoint67: THAnimJointNode;
  HAnimJoint68: THAnimJointNode;
  HAnimJoint69: THAnimJointNode;
  HAnimJoint70: THAnimJointNode;
  HAnimJoint71: THAnimJointNode;
  HAnimJoint72: THAnimJointNode;
  HAnimJoint73: THAnimJointNode;
  HAnimJoint74: THAnimJointNode;
  HAnimDisplacer75: THAnimDisplacerNode;
  HAnimJoint76: THAnimJointNode;
  HAnimJoint77: THAnimJointNode;
  HAnimJoint78: THAnimJointNode;
  HAnimJoint79: THAnimJointNode;
  HAnimJoint80: THAnimJointNode;
  HAnimJoint81: THAnimJointNode;
  HAnimJoint82: THAnimJointNode;
  HAnimJoint83: THAnimJointNode;
  HAnimJoint84: THAnimJointNode;
  HAnimJoint85: THAnimJointNode;
  HAnimJoint86: THAnimJointNode;
  HAnimJoint87: THAnimJointNode;
  HAnimJoint88: THAnimJointNode;
  HAnimJoint89: THAnimJointNode;
  HAnimJoint90: THAnimJointNode;
  HAnimJoint91: THAnimJointNode;
  HAnimJoint92: THAnimJointNode;
  HAnimJoint93: THAnimJointNode;
  HAnimJoint94: THAnimJointNode;
  HAnimJoint95: THAnimJointNode;
  HAnimJoint96: THAnimJointNode;
  HAnimJoint97: THAnimJointNode;
  HAnimJoint98: THAnimJointNode;
  HAnimJoint99: THAnimJointNode;
  HAnimJoint100: THAnimJointNode;
  HAnimJoint101: THAnimJointNode;
  HAnimJoint102: THAnimJointNode;
  HAnimJoint103: THAnimJointNode;
  HAnimJoint104: THAnimJointNode;
  HAnimJoint105: THAnimJointNode;
  HAnimJoint106: THAnimJointNode;
  HAnimJoint107: THAnimJointNode;
  HAnimJoint108: THAnimJointNode;
  HAnimJoint109: THAnimJointNode;
  HAnimJoint110: THAnimJointNode;
  HAnimJoint111: THAnimJointNode;
  HAnimJoint112: THAnimJointNode;
  HAnimJoint113: THAnimJointNode;
  HAnimJoint114: THAnimJointNode;
  HAnimJoint115: THAnimJointNode;
  HAnimJoint116: THAnimJointNode;
  HAnimJoint117: THAnimJointNode;
  HAnimJoint118: THAnimJointNode;
  HAnimJoint119: THAnimJointNode;
  HAnimJoint120: THAnimJointNode;
  HAnimJoint121: THAnimJointNode;
  HAnimJoint122: THAnimJointNode;
  HAnimJoint123: THAnimJointNode;
  HAnimJoint124: THAnimJointNode;
  HAnimJoint125: THAnimJointNode;
  HAnimJoint126: THAnimJointNode;
  HAnimJoint127: THAnimJointNode;
  HAnimJoint128: THAnimJointNode;
  HAnimJoint129: THAnimJointNode;
  HAnimJoint130: THAnimJointNode;
  Shape131: TShapeNode;
  Appearance132: TAppearanceNode;
  Material133: TMaterialNode;
  ImageTexture134: TImageTextureNode;
  TextureTransform135: TTextureTransformNode;
  IndexedFaceSet136: TIndexedFaceSetNode;
  Coordinate137: TCoordinateNode;
  TextureCoordinate138: TTextureCoordinateNode;
  Group140: TGroupNode;
  TimeSensor141: TTimeSensorNode;
  OrientationInterpolator142: TOrientationInterpolatorNode;
  PositionInterpolator143: TPositionInterpolatorNode;
  OrientationInterpolator144: TOrientationInterpolatorNode;
  OrientationInterpolator145: TOrientationInterpolatorNode;
  OrientationInterpolator146: TOrientationInterpolatorNode;
  OrientationInterpolator147: TOrientationInterpolatorNode;
  OrientationInterpolator148: TOrientationInterpolatorNode;
  OrientationInterpolator149: TOrientationInterpolatorNode;
  OrientationInterpolator150: TOrientationInterpolatorNode;
  OrientationInterpolator151: TOrientationInterpolatorNode;
  OrientationInterpolator152: TOrientationInterpolatorNode;
  OrientationInterpolator153: TOrientationInterpolatorNode;
  OrientationInterpolator154: TOrientationInterpolatorNode;
  OrientationInterpolator155: TOrientationInterpolatorNode;
  OrientationInterpolator156: TOrientationInterpolatorNode;
  OrientationInterpolator157: TOrientationInterpolatorNode;
  OrientationInterpolator158: TOrientationInterpolatorNode;
  OrientationInterpolator159: TOrientationInterpolatorNode;
  OrientationInterpolator160: TOrientationInterpolatorNode;
  OrientationInterpolator161: TOrientationInterpolatorNode;
  OrientationInterpolator162: TOrientationInterpolatorNode;
  OrientationInterpolator163: TOrientationInterpolatorNode;
  OrientationInterpolator164: TOrientationInterpolatorNode;
  OrientationInterpolator165: TOrientationInterpolatorNode;
  OrientationInterpolator166: TOrientationInterpolatorNode;
  OrientationInterpolator167: TOrientationInterpolatorNode;
  OrientationInterpolator168: TOrientationInterpolatorNode;
  OrientationInterpolator169: TOrientationInterpolatorNode;
  OrientationInterpolator170: TOrientationInterpolatorNode;
  OrientationInterpolator171: TOrientationInterpolatorNode;
  OrientationInterpolator172: TOrientationInterpolatorNode;
  OrientationInterpolator173: TOrientationInterpolatorNode;
  OrientationInterpolator174: TOrientationInterpolatorNode;
  OrientationInterpolator175: TOrientationInterpolatorNode;
  OrientationInterpolator176: TOrientationInterpolatorNode;
  OrientationInterpolator177: TOrientationInterpolatorNode;
  OrientationInterpolator178: TOrientationInterpolatorNode;
  OrientationInterpolator179: TOrientationInterpolatorNode;
  OrientationInterpolator180: TOrientationInterpolatorNode;
  OrientationInterpolator181: TOrientationInterpolatorNode;
  OrientationInterpolator182: TOrientationInterpolatorNode;
  OrientationInterpolator183: TOrientationInterpolatorNode;
  OrientationInterpolator184: TOrientationInterpolatorNode;
  OrientationInterpolator185: TOrientationInterpolatorNode;
  OrientationInterpolator186: TOrientationInterpolatorNode;
  OrientationInterpolator187: TOrientationInterpolatorNode;
  OrientationInterpolator188: TOrientationInterpolatorNode;
  OrientationInterpolator189: TOrientationInterpolatorNode;
  OrientationInterpolator190: TOrientationInterpolatorNode;
  OrientationInterpolator191: TOrientationInterpolatorNode;
  OrientationInterpolator192: TOrientationInterpolatorNode;
  OrientationInterpolator193: TOrientationInterpolatorNode;
  OrientationInterpolator194: TOrientationInterpolatorNode;
  OrientationInterpolator195: TOrientationInterpolatorNode;
  OrientationInterpolator196: TOrientationInterpolatorNode;
  OrientationInterpolator197: TOrientationInterpolatorNode;
  OrientationInterpolator198: TOrientationInterpolatorNode;
  OrientationInterpolator199: TOrientationInterpolatorNode;
  OrientationInterpolator200: TOrientationInterpolatorNode;
  OrientationInterpolator201: TOrientationInterpolatorNode;
  OrientationInterpolator202: TOrientationInterpolatorNode;
  OrientationInterpolator203: TOrientationInterpolatorNode;
  OrientationInterpolator204: TOrientationInterpolatorNode;
  OrientationInterpolator205: TOrientationInterpolatorNode;
  OrientationInterpolator206: TOrientationInterpolatorNode;
  OrientationInterpolator207: TOrientationInterpolatorNode;
  OrientationInterpolator208: TOrientationInterpolatorNode;
  OrientationInterpolator209: TOrientationInterpolatorNode;
  OrientationInterpolator210: TOrientationInterpolatorNode;
  OrientationInterpolator211: TOrientationInterpolatorNode;
  OrientationInterpolator212: TOrientationInterpolatorNode;
  OrientationInterpolator213: TOrientationInterpolatorNode;
  OrientationInterpolator214: TOrientationInterpolatorNode;
  OrientationInterpolator215: TOrientationInterpolatorNode;
  OrientationInterpolator216: TOrientationInterpolatorNode;
  OrientationInterpolator217: TOrientationInterpolatorNode;
  OrientationInterpolator218: TOrientationInterpolatorNode;
  OrientationInterpolator219: TOrientationInterpolatorNode;
  OrientationInterpolator220: TOrientationInterpolatorNode;
  OrientationInterpolator221: TOrientationInterpolatorNode;
  OrientationInterpolator222: TOrientationInterpolatorNode;
  OrientationInterpolator223: TOrientationInterpolatorNode;
  OrientationInterpolator224: TOrientationInterpolatorNode;
  OrientationInterpolator225: TOrientationInterpolatorNode;
  OrientationInterpolator226: TOrientationInterpolatorNode;
  OrientationInterpolator227: TOrientationInterpolatorNode;
  OrientationInterpolator228: TOrientationInterpolatorNode;
  OrientationInterpolator229: TOrientationInterpolatorNode;
  OrientationInterpolator230: TOrientationInterpolatorNode;
  OrientationInterpolator231: TOrientationInterpolatorNode;
  OrientationInterpolator232: TOrientationInterpolatorNode;
  OrientationInterpolator233: TOrientationInterpolatorNode;
  OrientationInterpolator234: TOrientationInterpolatorNode;
  OrientationInterpolator235: TOrientationInterpolatorNode;
  OrientationInterpolator236: TOrientationInterpolatorNode;
  Group427: TGroupNode;
  ScalarInterpolator428: TScalarInterpolatorNode;
  Group431: TGroupNode;
  ScalarInterpolator432: TScalarInterpolatorNode;
  Group435: TGroupNode;
  Transform436: TTransformNode;
  Shape437: TShapeNode;
  Appearance438: TAppearanceNode;
  Material439: TMaterialNode;
  IndexedFaceSet441: TIndexedFaceSetNode;
  Coordinate442: TCoordinateNode;
  Viewpoint443: TViewpointNode;
  PositionInterpolator444: TPositionInterpolatorNode;
  OrientationInterpolator445: TOrientationInterpolatorNode;
  Group450: TGroupNode;
  Transform451: TTransformNode;
  Transform453: TTransformNode;
  Shape454: TShapeNode;
  Appearance455: TAppearanceNode;
  Material456: TMaterialNode;
  IndexedLineSet457: TIndexedLineSetNode;
  Coordinate458: TCoordinateNode;
  Transform459: TTransformNode;
  Shape460: TShapeNode;
  Appearance461: TAppearanceNode;
  Material462: TMaterialNode;
  Transform464: TTransformNode;
  Shape465: TShapeNode;
  Appearance466: TAppearanceNode;
  Material467: TMaterialNode;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
{ BS studio translation from .x3dv by Joe using BS Contact }
X3D0.Components['H-Anim'] := 1;
X3D0.Meta['title'] := 'JoeSkinTexcoordDisplacerKick.x3d';
X3D0.Meta['info'] := 'Joe No Reservations 20200709 fix hier20161206 20161111 20160720 20121221 20040109 x3d/hanim';
X3D0.Meta['description'] := 'The Joe model is a Humanoid with textured skin.';
X3D0.Meta['creator'] := 'Joe Williams';
X3D0.Meta['created'] := '9 January 2014';
X3D0.Meta['translated'] := '12 January 2017';
X3D0.Meta['modified'] := '09 July 2020';
X3D0.Meta['TODO'] := 'Record information about skin coordinates (found in comment at end of scene) as a structured MetadataSet containing MetadataString nodes';
X3D0.Meta['translators'] := 'Roy Walmsley and Don Brutzman';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/JoeSkinTexcoordDisplacerKick.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group15 := TGroupNode.Create;
WorldInfo16 := TWorldInfoNode.Create;
WorldInfo16.SetInfo(['X3D Humanoid V1 LOA3 skeleton', 'skin from hanim sites, surface features, and some added points', '390 points']);
WorldInfo16.Title := 'X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe';
Group15.FdChildren.Add(WorldInfo16);
NavigationInfo17 := TNavigationInfoNode.Create;
NavigationInfo17.X3DName := 'Start_NavigationInfo';
NavigationInfo17.Headlight := False;
NavigationInfo17.Speed := 2.5;
Group15.FdChildren.Add(NavigationInfo17);
Background18 := TBackgroundNode.Create;
Background18.X3DName := 'blue_Background';
Group15.FdChildren.Add(Background18);
SpotLight19 := TSpotLightNode.Create;
SpotLight19.X3DName := 'light1';
SpotLight19.AmbientIntensity := 0.7;
SpotLight19.BeamWidth := 1.5;
SpotLight19.Color := Vector3(0.8, 0.8, 1);
SpotLight19.CutOffAngle := 0.6;
SpotLight19.Direction := Vector3(0, 0, 0);
SpotLight19.Location := Vector3(0, 3, 3);
SpotLight19.Radius := 10;
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part1;
begin
Group15.FdChildren.Add(SpotLight19);
PointLight20 := TPointLightNode.Create;
PointLight20.X3DName := 'light2';
PointLight20.AmbientIntensity := 0.7;
PointLight20.Color := Vector3(0.8, 0.8, 1);
PointLight20.Location := Vector3(0, 10, -7);
Group15.FdChildren.Add(PointLight20);
{ External from the Humanoid viewpoints }
Viewpoint21 := TViewpointNode.Create;
Viewpoint21.X3DName := 'Scene_InclinedView';
Viewpoint21.CenterOfRotation := Vector3(0, 0.85, 0);
Viewpoint21.Description := 'Scene_Inclined View';
Viewpoint21.Orientation := Vector4(-0.113, 0.993, 0.0347, 0.671);
Viewpoint21.Position := Vector3(1.62, 1.05, 3.06);
Group15.FdChildren.Add(Viewpoint21);
Viewpoint22 := TViewpointNode.Create;
Viewpoint22.X3DName := 'Scene_IFrontView';
Viewpoint22.CenterOfRotation := Vector3(0, 0.8, 0);
Viewpoint22.Description := 'Scene_Front View';
Viewpoint22.Position := Vector3(0, 0.8, 2.58);
Group15.FdChildren.Add(Viewpoint22);
Viewpoint23 := TViewpointNode.Create;
Viewpoint23.X3DName := 'Scene_ISideView';
Viewpoint23.CenterOfRotation := Vector3(0, 0.8, 0);
Viewpoint23.Description := 'Scene_Side View';
Viewpoint23.Orientation := Vector4(0, 1, 0, 1.5708);
Viewpoint23.Position := Vector3(2.6, 0.5, 0);
Group15.FdChildren.Add(Viewpoint23);
Viewpoint24 := TViewpointNode.Create;
Viewpoint24.X3DName := 'Scene_BackView';
Viewpoint24.CenterOfRotation := Vector3(0, 1.5, 0);
Viewpoint24.Description := 'Scene_Back View';
Viewpoint24.Orientation := Vector4(0, 1, 0, 3.14);
Viewpoint24.Position := Vector3(0, 2.5, -3);
Group15.FdChildren.Add(Viewpoint24);
Viewpoint25 := TViewpointNode.Create;
Viewpoint25.X3DName := 'Scene_TopView';
Viewpoint25.CenterOfRotation := Vector3(0, 1.5, 0);
Viewpoint25.Description := 'Scene_Top View';
Viewpoint25.Orientation := Vector4(1, 0, 0, -1.5708);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part2;
begin
Viewpoint25.Position := Vector3(0, 3.5, 0);
Group15.FdChildren.Add(Viewpoint25);
Group26 := TGroupNode.Create;
Group26.X3DName := 'Joe_Humanoid';
HAnimHumanoid27 := THAnimHumanoidNode.Create;
HAnimHumanoid27.X3DName := 'Human';
HAnimHumanoid27.X3DName := 'Joe_Human';
HAnimHumanoid27.Version := '2.0';
HAnimJoint28 := THAnimJointNode.Create;
HAnimJoint28.X3DName := 'HumanoidRoot';
HAnimJoint28.X3DName := 'Joe_HumanoidRoot';
HAnimJoint28.Center := Vector3(0, 0.875, 0);
HAnimSegment29 := THAnimSegmentNode.Create;
HAnimSegment29.X3DName := 'sacrum';
HAnimSegment29.X3DName := 'Joe_sacrum';
HAnimSite30 := THAnimSiteNode.Create;
HAnimSite30.X3DName := 'RootFront';
HAnimSite30.X3DName := 'Joe_RootFront';
Transform31 := TTransformNode.Create;
Transform31.X3DName := 'hanimcordsys';
Transform31.Scale := Vector3(0.175, 0.175, 0.175);
Viewpoint32 := TViewpointNode.Create;
Viewpoint32.X3DName := 'ViewBodyRootAxes';
Viewpoint32.Description := 'Joe_HAnim Root Coordinate Axes View';
Transform31.FdChildren.Add(Viewpoint32);
Shape33 := TShapeNode.Create;
Shape33.X3DName := 'AxisLinesShape';
IndexedLineSet34 := TIndexedLineSetNode.Create;
IndexedLineSet34.SetColorIndex([0, 1, 2]);
IndexedLineSet34.ColorPerVertex := False;
IndexedLineSet34.SetCoordIndex([0, 1, -1, 0, 2, -1, 0, 3, -1]);
Coordinate35 := TCoordinateNode.Create;
Coordinate35.SetPoint([Vector3(0, 0, 0), Vector3(1, 0, 0), Vector3(0, 1, 0), Vector3(0, 0, 1)]);
IndexedLineSet34.Coord := Coordinate35;
Color36 := TColorNode.Create;
Color36.SetColor([Vector3(1, 0, 0), Vector3(0, 0.6, 0), Vector3(0, 0, 1)]);
IndexedLineSet34.Color := Color36;
Shape33.Geometry := IndexedLineSet34;
Transform31.FdChildren.Add(Shape33);
HAnimSite30.FdChildren.Add(Transform31);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part3;
begin
HAnimSegment29.FdChildren.Add(HAnimSite30);
HAnimJoint28.FdChildren.Add(HAnimSegment29);
HAnimJoint37 := THAnimJointNode.Create;
HAnimJoint37.X3DName := 'sacroiliac';
HAnimJoint37.X3DName := 'Joe_sacroiliac';
HAnimJoint37.Center := Vector3(0, 0.92, 0);
HAnimJoint37.SetSkinCoordIndex([17, 19, 20, 21, 22, 23, 26, 27, 73, 82, 89, 91, 93]);
HAnimJoint37.SetSkinCoordWeight([1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0.35, 0.35, 1]);
HAnimJoint38 := THAnimJointNode.Create;
HAnimJoint38.X3DName := 'l_hip';
HAnimJoint38.X3DName := 'Joe_l_hip';
HAnimJoint38.Center := Vector3(0.1, 0.92, 0);
HAnimJoint38.SetSkinCoordIndex([89, 90, 94, 95, 96, 97]);
HAnimJoint38.SetSkinCoordWeight([0.65, 1, 1, 1, 1, 1]);
HAnimJoint39 := THAnimJointNode.Create;
HAnimJoint39.X3DName := 'l_knee';
HAnimJoint39.X3DName := 'Joe_l_knee';
HAnimJoint39.Center := Vector3(0.115, 0.466, 0);
HAnimJoint39.SetSkinCoordIndex([334, 335, 336, 337, 338, 339, 340, 341]);
HAnimJoint39.SetSkinCoordWeight([1, 1, 1, 1, 1, 1, 1, 1]);
HAnimJoint40 := THAnimJointNode.Create;
HAnimJoint40.X3DName := 'l_ankle';
HAnimJoint40.X3DName := 'Joe_l_ankle';
HAnimJoint40.Center := Vector3(0.115, 0.069, 0);
HAnimJoint40.SetSkinCoordIndex([342, 343, 344, 345]);
HAnimJoint40.SetSkinCoordWeight([1, 1, 1, 1]);
HAnimJoint41 := THAnimJointNode.Create;
HAnimJoint41.X3DName := 'l_subtalar';
HAnimJoint41.X3DName := 'Joe_l_subtalar';
HAnimJoint41.Center := Vector3(0.115, 0.031, 0.03);
HAnimJoint41.SetSkinCoordIndex([346, 347, 348, 71]);
HAnimJoint41.SetSkinCoordWeight([1, 1, 1, 1]);
HAnimJoint42 := THAnimJointNode.Create;
HAnimJoint42.X3DName := 'l_midtarsal';
HAnimJoint42.X3DName := 'Joe_l_midtarsal';
HAnimJoint42.Center := Vector3(0.115, 0.037, 0.09);
HAnimJoint42.SetSkinCoordIndex([349, 350, 351, 352]);
HAnimJoint42.SetSkinCoordWeight([1, 1, 1, 1]);
HAnimJoint43 := THAnimJointNode.Create;
HAnimJoint43.X3DName := 'l_metatarsal';
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part4;
begin
HAnimJoint43.X3DName := 'Joe_l_metatarsal';
HAnimJoint43.Center := Vector3(0.115, 0.02, 0.122);
HAnimJoint43.SetSkinCoordIndex([353, 354, 355, 356, 357, 358, 359, 360, 361]);
HAnimJoint43.SetSkinCoordWeight([1, 1, 1, 1, 1, 1, 1, 1, 1]);
HAnimJoint42.FdChildren.Add(HAnimJoint43);
HAnimJoint41.FdChildren.Add(HAnimJoint42);
HAnimJoint40.FdChildren.Add(HAnimJoint41);
HAnimJoint39.FdChildren.Add(HAnimJoint40);
HAnimJoint38.FdChildren.Add(HAnimJoint39);
HAnimJoint37.FdChildren.Add(HAnimJoint38);
HAnimJoint44 := THAnimJointNode.Create;
HAnimJoint44.X3DName := 'r_hip';
HAnimJoint44.X3DName := 'Joe_r_hip';
HAnimJoint44.Center := Vector3(-0.1, 0.92, 0);
HAnimJoint44.SetSkinCoordIndex([91, 92, 98, 99, 100, 101, 362, 363]);
HAnimJoint44.SetSkinCoordWeight([0.65, 1, 0.8, 1, 1, 1, 0.4, 0.8]);
HAnimJoint45 := THAnimJointNode.Create;
HAnimJoint45.X3DName := 'r_knee';
HAnimJoint45.X3DName := 'Joe_r_knee';
HAnimJoint45.Center := Vector3(-0.05, 0.466, 0);
HAnimJoint45.SetSkinCoordIndex([362, 363, 364, 365, 366, 367, 368, 369, 98]);
HAnimJoint45.SetSkinCoordWeight([0.6, 0.2, 1, 1, 1, 1, 1, 1, 0.2]);
HAnimJoint46 := THAnimJointNode.Create;
HAnimJoint46.X3DName := 'r_ankle';
HAnimJoint46.X3DName := 'Joe_r_ankle';
HAnimJoint46.Center := Vector3(-0.115, 0.069, 0);
HAnimJoint46.SetSkinCoordIndex([370, 371, 372, 373]);
HAnimJoint46.SetSkinCoordWeight([1, 1, 1, 1]);
HAnimJoint47 := THAnimJointNode.Create;
HAnimJoint47.X3DName := 'r_subtalar';
HAnimJoint47.X3DName := 'Joe_r_subtalar';
HAnimJoint47.Center := Vector3(-0.1, 0.015, -0.01);
HAnimJoint47.SetSkinCoordIndex([374, 375, 376]);
HAnimJoint47.SetSkinCoordWeight([1, 1, 1]);
HAnimJoint48 := THAnimJointNode.Create;
HAnimJoint48.X3DName := 'r_midtarsal';
HAnimJoint48.X3DName := 'Joe_r_midtarsal';
HAnimJoint48.Center := Vector3(-0.115, 0.037, 0.09);
HAnimJoint48.SetSkinCoordIndex([377, 378, 379, 380]);
HAnimJoint48.SetSkinCoordWeight([1, 1, 1, 1]);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part5;
begin
HAnimJoint49 := THAnimJointNode.Create;
HAnimJoint49.X3DName := 'r_metatarsal';
HAnimJoint49.X3DName := 'Joe_r_metatarsal';
HAnimJoint49.Center := Vector3(-0.1, 0.01, 0.14);
HAnimJoint49.SetSkinCoordIndex([381, 382, 383, 384, 385, 386, 387, 388, 389]);
HAnimJoint49.SetSkinCoordWeight([1, 1, 1, 1, 1, 1, 1, 1, 1]);
HAnimJoint48.FdChildren.Add(HAnimJoint49);
HAnimJoint47.FdChildren.Add(HAnimJoint48);
HAnimJoint46.FdChildren.Add(HAnimJoint47);
HAnimJoint45.FdChildren.Add(HAnimJoint46);
HAnimJoint44.FdChildren.Add(HAnimJoint45);
HAnimJoint37.FdChildren.Add(HAnimJoint44);
HAnimJoint28.FdChildren.Add(HAnimJoint37);
HAnimJoint50 := THAnimJointNode.Create;
HAnimJoint50.X3DName := 'vl5';
HAnimJoint50.X3DName := 'Joe_vl5';
HAnimJoint50.Center := Vector3(0, 1.045, -0.095);
HAnimJoint50.SetSkinCoordIndex([28, 76]);
HAnimJoint50.SetSkinCoordWeight([1, 1]);
HAnimJoint51 := THAnimJointNode.Create;
HAnimJoint51.X3DName := 'vl4';
HAnimJoint51.X3DName := 'Joe_vl4';
HAnimJoint51.Center := Vector3(0, 1.068, -0.085);
HAnimJoint52 := THAnimJointNode.Create;
HAnimJoint52.X3DName := 'vl3';
HAnimJoint52.X3DName := 'Joe_vl3';
HAnimJoint52.Center := Vector3(0, 1.092, -0.0725);
HAnimJoint53 := THAnimJointNode.Create;
HAnimJoint53.X3DName := 'vl2';
HAnimJoint53.X3DName := 'Joe_vl2';
HAnimJoint53.Center := Vector3(0, 1.12, -0.065);
HAnimJoint53.SetSkinCoordIndex([16, 18, 25, 83, 84, 85, 86, 87, 88]);
HAnimJoint53.SetSkinCoordWeight([1, 1, 1, 1, 1, 1, 0.7, 1, 0.8]);
HAnimJoint54 := THAnimJointNode.Create;
HAnimJoint54.X3DName := 'vl1';
HAnimJoint54.X3DName := 'Joe_vl1';
HAnimJoint54.Center := Vector3(0, 1.1459, -0.0625);
HAnimJoint55 := THAnimJointNode.Create;
HAnimJoint55.X3DName := 'vt12';
HAnimJoint55.X3DName := 'Joe_vt12';
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part6;
begin
HAnimJoint55.Center := Vector3(0, 1.179, -0.068);
HAnimJoint56 := THAnimJointNode.Create;
HAnimJoint56.X3DName := 'vt11';
HAnimJoint56.X3DName := 'Joe_vt11';
HAnimJoint56.Center := Vector3(0, 1.2679, -0.081);
HAnimJoint57 := THAnimJointNode.Create;
HAnimJoint57.X3DName := 'vt10';
HAnimJoint57.X3DName := 'Joe_vt10';
HAnimJoint57.Center := Vector3(0, 1.242, -0.09);
HAnimJoint57.SetSkinCoordIndex([15]);
HAnimJoint57.SetSkinCoordWeight([1]);
HAnimJoint58 := THAnimJointNode.Create;
HAnimJoint58.X3DName := 'vt9';
HAnimJoint58.X3DName := 'Joe_vt9';
HAnimJoint58.Center := Vector3(0, 1.268, -0.1);
HAnimJoint58.SetSkinCoordIndex([13, 14]);
HAnimJoint58.SetSkinCoordWeight([1, 1]);
HAnimJoint59 := THAnimJointNode.Create;
HAnimJoint59.X3DName := 'vt8';
HAnimJoint59.X3DName := 'Joe_vt8';
HAnimJoint59.Center := Vector3(0, 1.294, -0.11);
HAnimJoint60 := THAnimJointNode.Create;
HAnimJoint60.X3DName := 'vt7';
HAnimJoint60.X3DName := 'Joe_vt7';
HAnimJoint60.Center := Vector3(0, 1.323, -0.1155);
HAnimJoint61 := THAnimJointNode.Create;
HAnimJoint61.X3DName := 'vt6';
HAnimJoint61.X3DName := 'Joe_vt6';
HAnimJoint61.Center := Vector3(0, 1.352, -0.12);
HAnimJoint62 := THAnimJointNode.Create;
HAnimJoint62.X3DName := 'vt5';
HAnimJoint62.X3DName := 'Joe_vt5';
HAnimJoint62.Center := Vector3(0, 1.381, -0.1235);
HAnimJoint63 := THAnimJointNode.Create;
HAnimJoint63.X3DName := 'vt4';
HAnimJoint63.X3DName := 'Joe_vt4';
HAnimJoint63.Center := Vector3(0, 1.41, -0.1235);
HAnimJoint63.SetSkinCoordIndex([81]);
HAnimJoint63.SetSkinCoordWeight([1]);
HAnimJoint64 := THAnimJointNode.Create;
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part7;
begin
HAnimJoint64.X3DName := 'vt3';
HAnimJoint64.X3DName := 'Joe_vt3';
HAnimJoint64.Center := Vector3(0, 1.438, -0.12);
HAnimJoint65 := THAnimJointNode.Create;
HAnimJoint65.X3DName := 'vt2';
HAnimJoint65.X3DName := 'Joe_vt2';
HAnimJoint65.Center := Vector3(0, 1.468, -0.105);
HAnimJoint66 := THAnimJointNode.Create;
HAnimJoint66.X3DName := 'vt1';
HAnimJoint66.X3DName := 'Joe_vt1';
HAnimJoint66.Center := Vector3(0, 1.497, -0.09);
HAnimJoint66.SetSkinCoordIndex([11, 24]);
HAnimJoint66.SetSkinCoordWeight([1, 1]);
HAnimJoint67 := THAnimJointNode.Create;
HAnimJoint67.X3DName := 'vc7';
HAnimJoint67.X3DName := 'Joe_vc7';
HAnimJoint67.Center := Vector3(0, 1.525, -0.072);
HAnimJoint67.SetSkinCoordIndex([74, 75]);
HAnimJoint67.SetSkinCoordWeight([1, 1]);
HAnimJoint68 := THAnimJointNode.Create;
HAnimJoint68.X3DName := 'vc6';
HAnimJoint68.X3DName := 'Joe_vc6';
HAnimJoint68.Center := Vector3(0, 1.54, -0.05);
HAnimJoint69 := THAnimJointNode.Create;
HAnimJoint69.X3DName := 'vc5';
HAnimJoint69.X3DName := 'Joe_vc5';
HAnimJoint69.Center := Vector3(0, 1.552, -0.035);
HAnimJoint70 := THAnimJointNode.Create;
HAnimJoint70.X3DName := 'vc4';
HAnimJoint70.X3DName := 'Joe_vc4';
HAnimJoint70.Center := Vector3(0, 1.5675, -0.0256);
HAnimJoint71 := THAnimJointNode.Create;
HAnimJoint71.X3DName := 'vc3';
HAnimJoint71.X3DName := 'Joe_vc3';
HAnimJoint71.Center := Vector3(0, 1.58225, -0.0185);
HAnimJoint72 := THAnimJointNode.Create;
HAnimJoint72.X3DName := 'vc2';
HAnimJoint72.X3DName := 'Joe_vc2';
HAnimJoint72.Center := Vector3(0, 1.595, -0.0175);
HAnimJoint73 := THAnimJointNode.Create;
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part8;
begin
HAnimJoint73.X3DName := 'vc1';
HAnimJoint73.X3DName := 'Joe_vc1';
HAnimJoint73.Center := Vector3(0, 1.61, -0.015);
HAnimJoint74 := THAnimJointNode.Create;
HAnimJoint74.X3DName := 'skullbase';
HAnimJoint74.X3DName := 'Joe_skullbase';
HAnimJoint74.Center := Vector3(0, 1.63, -0.01);
HAnimJoint74.SetSkinCoordIndex([0, 1, 2, 3, 4, 5, 6, 7, 8, 9]);
HAnimJoint74.SetSkinCoordWeight([1, 1, 1, 1, 1, 1, 1, 1, 1, 1]);
HAnimDisplacer75 := THAnimDisplacerNode.Create;
HAnimDisplacer75.X3DName := 'skull_tip_raiser_action';
HAnimDisplacer75.X3DName := 'Joe_skull_tipTest';
HAnimDisplacer75.SetCoordIndex([0, 1, 2, 3, 4, 5, 6, 7, 8, 9]);
HAnimDisplacer75.SetDisplacements([Vector3(0, 0.15, 0), Vector3(0, 0, 0.15), Vector3(-0.1, 0, 0.15), Vector3(0.1, 0, 0.05), Vector3(0, -0.02, 0.05), Vector3(-0.15, 0, 0), Vector3(-0.05, 0, 0), Vector3(0.15, 0, 0), Vector3(0.05, 0, 0), Vector3(0, 0, -0.15)]);
HAnimJoint74.Displacers := HAnimDisplacer75;
HAnimJoint76 := THAnimJointNode.Create;
HAnimJoint76.X3DName := 'l_eyelid_joint';
HAnimJoint76.X3DName := 'Joe_l_eyelid_joint';
HAnimJoint76.Center := Vector3(0.034, 1.659, 0.06);
HAnimJoint74.FdChildren.Add(HAnimJoint76);
HAnimJoint77 := THAnimJointNode.Create;
HAnimJoint77.X3DName := 'l_eyeball_joint';
HAnimJoint77.X3DName := 'Joe_l_eyeball_joint';
HAnimJoint77.Center := Vector3(0.034, 1.659, 0.06);
HAnimJoint74.FdChildren.Add(HAnimJoint77);
HAnimJoint78 := THAnimJointNode.Create;
HAnimJoint78.X3DName := 'l_eyebrow_joint';
HAnimJoint78.X3DName := 'Joe_l_eyebrow_joint';
HAnimJoint78.Center := Vector3(0.034, 1.659, 0.06);
HAnimJoint74.FdChildren.Add(HAnimJoint78);
HAnimJoint79 := THAnimJointNode.Create;
HAnimJoint79.X3DName := 'l_eyelid_joint';
HAnimJoint79.X3DName := 'Joe_r_eyelid_joint';
HAnimJoint79.Center := Vector3(-0.034, 1.659, 0.06);
HAnimJoint74.FdChildren.Add(HAnimJoint79);
HAnimJoint80 := THAnimJointNode.Create;
HAnimJoint80.X3DName := 'l_eyeball_joint';
HAnimJoint80.X3DName := 'Joe_r_eyeball_joint';
HAnimJoint80.Center := Vector3(-0.034, 1.659, 0.06);
HAnimJoint74.FdChildren.Add(HAnimJoint80);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part9;
begin
HAnimJoint81 := THAnimJointNode.Create;
HAnimJoint81.X3DName := 'l_eyebrow_joint';
HAnimJoint81.X3DName := 'Joe_r_eyebrow_joint';
HAnimJoint81.Center := Vector3(-0.034, 1.659, 0.06);
HAnimJoint74.FdChildren.Add(HAnimJoint81);
HAnimJoint82 := THAnimJointNode.Create;
HAnimJoint82.X3DName := 'temporomandibular';
HAnimJoint82.X3DName := 'Joe_temporomandibular';
HAnimJoint82.Center := Vector3(0.034, 1.659, 0.06);
HAnimJoint74.FdChildren.Add(HAnimJoint82);
HAnimJoint73.FdChildren.Add(HAnimJoint74);
HAnimJoint72.FdChildren.Add(HAnimJoint73);
HAnimJoint71.FdChildren.Add(HAnimJoint72);
HAnimJoint70.FdChildren.Add(HAnimJoint71);
HAnimJoint69.FdChildren.Add(HAnimJoint70);
HAnimJoint68.FdChildren.Add(HAnimJoint69);
HAnimJoint67.FdChildren.Add(HAnimJoint68);
HAnimJoint83 := THAnimJointNode.Create;
HAnimJoint83.X3DName := 'l_sternoclavicular';
HAnimJoint83.X3DName := 'Joe_l_sternoclavicular';
HAnimJoint83.Center := Vector3(0.082, 1.4488, -0.0353);
HAnimJoint83.SetSkinCoordIndex([12]);
HAnimJoint83.SetSkinCoordWeight([1]);
HAnimJoint84 := THAnimJointNode.Create;
HAnimJoint84.X3DName := 'l_acromioclavicular';
HAnimJoint84.X3DName := 'Joe_l_acromioclavicular';
HAnimJoint84.Center := Vector3(0.0962, 1.4269, -0.0424);
HAnimJoint84.SetSkinCoordIndex([79]);
HAnimJoint84.SetSkinCoordWeight([1]);
HAnimJoint85 := THAnimJointNode.Create;
HAnimJoint85.X3DName := 'l_shoulder';
HAnimJoint85.X3DName := 'Joe_l_shoulder';
HAnimJoint85.Center := Vector3(0.2, 1.44, -0.04);
HAnimJoint85.SetSkinCoordIndex([41, 42, 44, 80, 102, 103, 104, 105]);
HAnimJoint85.SetSkinCoordWeight([1, 1, 1, 1, 1, 1, 1, 1]);
HAnimJoint86 := THAnimJointNode.Create;
HAnimJoint86.X3DName := 'l_elbow';
HAnimJoint86.X3DName := 'Joe_l_elbow';
HAnimJoint86.Center := Vector3(0.2, 1.1388, -0.04);
HAnimJoint86.SetSkinCoordIndex([45, 46, 47, 109, 110, 111, 112, 113, 115, 116, 117, 118]);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part10;
begin
HAnimJoint86.SetSkinCoordWeight([1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1]);
HAnimJoint87 := THAnimJointNode.Create;
HAnimJoint87.X3DName := 'l_wrist';
HAnimJoint87.X3DName := 'Joe_l_wrist';
HAnimJoint87.Center := Vector3(0.2, 0.87, -0.04);
HAnimJoint87.SetSkinCoordIndex([119, 120, 121, 122, 123, 124, 125, 126]);
HAnimJoint87.SetSkinCoordWeight([1, 1, 1, 1, 1, 1, 1, 1]);
HAnimJoint88 := THAnimJointNode.Create;
HAnimJoint88.X3DName := 'l_thumb1';
HAnimJoint88.X3DName := 'Joe_l_thumb1';
HAnimJoint88.Center := Vector3(0.1924, 0.8472, -0.0534);
HAnimJoint88.SetSkinCoordIndex([127, 128]);
HAnimJoint88.SetSkinCoordWeight([1, 1]);
HAnimJoint89 := THAnimJointNode.Create;
HAnimJoint89.X3DName := 'l_thumb2';
HAnimJoint89.X3DName := 'Joe_l_thumb2';
HAnimJoint89.Center := Vector3(0.1951, 0.8226, 0.0246);
HAnimJoint89.SetSkinCoordIndex([138, 139, 140, 141, 142, 143]);
HAnimJoint89.SetSkinCoordWeight([0.5, 0.5, 0.5, 1, 1, 1]);
HAnimJoint90 := THAnimJointNode.Create;
HAnimJoint90.X3DName := 'l_thumb3';
HAnimJoint90.X3DName := 'Joe_l_thumb3';
HAnimJoint90.Center := Vector3(0.1955, 0.8159, 0.0464);
HAnimJoint90.SetSkinCoordIndex([144, 145, 146, 147, 148, 149, 150, 151, 152]);
HAnimJoint90.SetSkinCoordWeight([1, 1, 1, 1, 1, 1, 1, 1, 1]);
HAnimJoint89.FdChildren.Add(HAnimJoint90);
HAnimJoint88.FdChildren.Add(HAnimJoint89);
HAnimJoint87.FdChildren.Add(HAnimJoint88);
HAnimJoint91 := THAnimJointNode.Create;
HAnimJoint91.X3DName := 'l_index0';
HAnimJoint91.X3DName := 'Joe_l_index0';
HAnimJoint91.Center := Vector3(0.1983, 0.8024, -0.028);
HAnimJoint91.SetSkinCoordIndex([129, 130]);
HAnimJoint91.SetSkinCoordWeight([1, 1]);
HAnimJoint92 := THAnimJointNode.Create;
HAnimJoint92.X3DName := 'l_index1';
HAnimJoint92.X3DName := 'Joe_l_index1';
HAnimJoint92.Center := Vector3(0.1983, 0.7815, -0.028);
HAnimJoint92.SetSkinCoordIndex([138, 139, 140, 153, 154, 155, 163]);
HAnimJoint92.SetSkinCoordWeight([0.5, 0.5, 0.5, 1, 1, 1, 0.5]);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part11;
begin
HAnimJoint93 := THAnimJointNode.Create;
HAnimJoint93.X3DName := 'l_index2';
HAnimJoint93.X3DName := 'Joe_l_index2';
HAnimJoint93.Center := Vector3(0.2017, 0.7363, -0.0248);
HAnimJoint93.SetSkinCoordIndex([166, 167, 168, 169]);
HAnimJoint93.SetSkinCoordWeight([1, 1, 1, 1]);
HAnimJoint94 := THAnimJointNode.Create;
HAnimJoint94.X3DName := 'l_index3';
HAnimJoint94.X3DName := 'Joe_l_index3';
HAnimJoint94.Center := Vector3(0.2028, 0.7139, -0.0236);
HAnimJoint94.SetSkinCoordIndex([170, 171, 172, 173, 174, 175, 176, 177, 178]);
HAnimJoint94.SetSkinCoordWeight([1, 1, 1, 1, 1, 1, 1, 1, 1]);
HAnimJoint93.FdChildren.Add(HAnimJoint94);
HAnimJoint92.FdChildren.Add(HAnimJoint93);
HAnimJoint91.FdChildren.Add(HAnimJoint92);
HAnimJoint87.FdChildren.Add(HAnimJoint91);
HAnimJoint95 := THAnimJointNode.Create;
HAnimJoint95.X3DName := 'l_middle0';
HAnimJoint95.X3DName := 'Joe_l_middle0';
HAnimJoint95.Center := Vector3(0.1987, 0.8029, -0.053);
HAnimJoint95.SetSkinCoordIndex([131, 132]);
HAnimJoint95.SetSkinCoordWeight([1, 1]);
HAnimJoint96 := THAnimJointNode.Create;
HAnimJoint96.X3DName := 'l_middle1';
HAnimJoint96.X3DName := 'Joe_l_middle1';
HAnimJoint96.Center := Vector3(0.1987, 0.7818, -0.053);
HAnimJoint96.SetSkinCoordIndex([156, 157, 163, 164]);
HAnimJoint96.SetSkinCoordWeight([1, 1, 0.5, 0.5]);
HAnimJoint97 := THAnimJointNode.Create;
HAnimJoint97.X3DName := 'l_middle2';
HAnimJoint97.X3DName := 'Joe_l_middle2';
HAnimJoint97.Center := Vector3(0.2013, 0.7273, -0.0503);
HAnimJoint97.SetSkinCoordIndex([179, 180, 181, 182]);
HAnimJoint97.SetSkinCoordWeight([1, 1, 1, 1]);
HAnimJoint98 := THAnimJointNode.Create;
HAnimJoint98.X3DName := 'l_middle3';
HAnimJoint98.X3DName := 'Joe_l_middle3';
HAnimJoint98.Center := Vector3(0.2026, 0.7011, -0.0494);
HAnimJoint98.SetSkinCoordIndex([183, 184, 185, 186, 187, 188, 189, 190, 191]);
HAnimJoint98.SetSkinCoordWeight([1, 1, 1, 1, 1, 1, 1, 1, 1]);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part12;
begin
HAnimJoint97.FdChildren.Add(HAnimJoint98);
HAnimJoint96.FdChildren.Add(HAnimJoint97);
HAnimJoint95.FdChildren.Add(HAnimJoint96);
HAnimJoint87.FdChildren.Add(HAnimJoint95);
HAnimJoint99 := THAnimJointNode.Create;
HAnimJoint99.X3DName := 'l_ring0';
HAnimJoint99.X3DName := 'Joe_l_ring0';
HAnimJoint99.Center := Vector3(0.1956, 0.8019, -0.0794);
HAnimJoint99.SetSkinCoordIndex([133, 134]);
HAnimJoint99.SetSkinCoordWeight([1, 1]);
HAnimJoint100 := THAnimJointNode.Create;
HAnimJoint100.X3DName := 'l_ring1';
HAnimJoint100.X3DName := 'Joe_l_ring1';
HAnimJoint100.Center := Vector3(0.1956, 0.7815, -0.0794);
HAnimJoint100.SetSkinCoordIndex([158, 159, 164, 165]);
HAnimJoint100.SetSkinCoordWeight([1, 1, 0.5, 0.5]);
HAnimJoint101 := THAnimJointNode.Create;
HAnimJoint101.X3DName := 'l_ring2';
HAnimJoint101.X3DName := 'Joe_l_ring2';
HAnimJoint101.Center := Vector3(0.1973, 0.7287, -0.0777);
HAnimJoint101.SetSkinCoordIndex([192, 193, 194, 195]);
HAnimJoint101.SetSkinCoordWeight([1, 1, 1, 1]);
HAnimJoint102 := THAnimJointNode.Create;
HAnimJoint102.X3DName := 'l_ring3';
HAnimJoint102.X3DName := 'Joe_l_ring3';
HAnimJoint102.Center := Vector3(0.1983, 0.7045, -0.0767);
HAnimJoint102.SetSkinCoordIndex([196, 197, 198, 199, 200, 201, 202, 203, 204]);
HAnimJoint102.SetSkinCoordWeight([1, 1, 1, 1, 1, 1, 1, 1, 1]);
HAnimJoint101.FdChildren.Add(HAnimJoint102);
HAnimJoint100.FdChildren.Add(HAnimJoint101);
HAnimJoint99.FdChildren.Add(HAnimJoint100);
HAnimJoint87.FdChildren.Add(HAnimJoint99);
HAnimJoint103 := THAnimJointNode.Create;
HAnimJoint103.X3DName := 'l_pinky0';
HAnimJoint103.X3DName := 'Joe_l_pinky0';
HAnimJoint103.Center := Vector3(0.1925, 0.8066, -0.1036);
HAnimJoint103.SetSkinCoordIndex([135, 136, 137, 165]);
HAnimJoint103.SetSkinCoordWeight([1, 1, 1, 0.5]);
HAnimJoint104 := THAnimJointNode.Create;
HAnimJoint104.X3DName := 'l_pinky1';
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part13;
begin
HAnimJoint104.X3DName := 'Joe_l_pinky1';
HAnimJoint104.Center := Vector3(0.1925, 0.7866, -0.1036);
HAnimJoint104.SetSkinCoordIndex([160, 161, 162]);
HAnimJoint104.SetSkinCoordWeight([1, 1, 1]);
HAnimJoint105 := THAnimJointNode.Create;
HAnimJoint105.X3DName := 'l_pinky2';
HAnimJoint105.X3DName := 'Joe_l_pinky2';
HAnimJoint105.Center := Vector3(0.1938, 0.7452, -0.1024);
HAnimJoint105.SetSkinCoordIndex([205, 206, 207, 208]);
HAnimJoint105.SetSkinCoordWeight([1, 1, 1, 1]);
HAnimJoint106 := THAnimJointNode.Create;
HAnimJoint106.X3DName := 'l_pinky3';
HAnimJoint106.X3DName := 'Joe_l_pinky3';
HAnimJoint106.Center := Vector3(0.1948, 0.7277, -0.1017);
HAnimJoint106.SetSkinCoordIndex([209, 210, 211, 212, 213, 214, 215, 216, 217]);
HAnimJoint106.SetSkinCoordWeight([1, 1, 1, 1, 1, 1, 1, 1, 1]);
HAnimJoint105.FdChildren.Add(HAnimJoint106);
HAnimJoint104.FdChildren.Add(HAnimJoint105);
HAnimJoint103.FdChildren.Add(HAnimJoint104);
HAnimJoint87.FdChildren.Add(HAnimJoint103);
HAnimJoint86.FdChildren.Add(HAnimJoint87);
HAnimJoint85.FdChildren.Add(HAnimJoint86);
HAnimJoint84.FdChildren.Add(HAnimJoint85);
HAnimJoint83.FdChildren.Add(HAnimJoint84);
HAnimJoint67.FdChildren.Add(HAnimJoint83);
HAnimJoint107 := THAnimJointNode.Create;
HAnimJoint107.X3DName := 'r_sternoclavicular';
HAnimJoint107.X3DName := 'Joe_r_sternoclavicular';
HAnimJoint107.Center := Vector3(-0.03, 1.46, 0);
HAnimJoint107.SetSkinCoordIndex([10]);
HAnimJoint107.SetSkinCoordWeight([1]);
HAnimJoint108 := THAnimJointNode.Create;
HAnimJoint108.X3DName := 'r_acromioclavicular';
HAnimJoint108.X3DName := 'Joe_r_acromioclavicular';
HAnimJoint108.Center := Vector3(-0.09, 1.41, -0.11);
HAnimJoint108.SetSkinCoordIndex([77, 29]);
HAnimJoint108.SetSkinCoordWeight([1, 0.9]);
HAnimJoint109 := THAnimJointNode.Create;
HAnimJoint109.X3DName := 'r_shoulder';
HAnimJoint109.X3DName := 'Joe_r_shoulder';
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part14;
begin
HAnimJoint109.Center := Vector3(-0.2, 1.44, -0.04);
HAnimJoint109.SetSkinCoordIndex([29, 30, 32, 78, 218, 219, 220, 221, 86, 88]);
HAnimJoint109.SetSkinCoordWeight([0.1, 1, 1, 1, 1, 1, 1, 1, 0.3, 0.2]);
HAnimJoint110 := THAnimJointNode.Create;
HAnimJoint110.X3DName := 'r_elbow';
HAnimJoint110.X3DName := 'Joe_r_elbow';
HAnimJoint110.Center := Vector3(-0.2, 1.1388, -0.04);
HAnimJoint110.SetSkinCoordIndex([33, 34, 35, 225, 226, 227, 228, 229, 231, 232, 233, 234]);
HAnimJoint110.SetSkinCoordWeight([1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1]);
HAnimJoint111 := THAnimJointNode.Create;
HAnimJoint111.X3DName := 'r_wrist';
HAnimJoint111.X3DName := 'Joe_r_wrist';
HAnimJoint111.Center := Vector3(-0.2, 0.89, -0.04);
HAnimJoint111.SetSkinCoordIndex([235, 236, 237, 238, 239, 240, 241, 242]);
HAnimJoint111.SetSkinCoordWeight([1, 1, 1, 1, 1, 1, 1, 1]);
HAnimJoint112 := THAnimJointNode.Create;
HAnimJoint112.X3DName := 'r_thumb1';
HAnimJoint112.X3DName := 'Joe_r_thumb1';
HAnimJoint112.Center := Vector3(-0.2, 0.85, 0);
HAnimJoint112.SetSkinCoordIndex([243, 244]);
HAnimJoint112.SetSkinCoordWeight([1, 1]);
HAnimJoint113 := THAnimJointNode.Create;
HAnimJoint113.X3DName := 'r_thumb2';
HAnimJoint113.X3DName := 'Joe_r_thumb2';
HAnimJoint113.Center := Vector3(-0.2, 0.82, 0.03);
HAnimJoint113.SetSkinCoordIndex([254, 255, 256, 257, 258, 259]);
HAnimJoint113.SetSkinCoordWeight([0.5, 0.5, 0.5, 1, 1, 1]);
HAnimJoint114 := THAnimJointNode.Create;
HAnimJoint114.X3DName := 'r_thumb3';
HAnimJoint114.X3DName := 'Joe_r_thumb3';
HAnimJoint114.Center := Vector3(-0.2, 0.8, 0.05);
HAnimJoint114.SetSkinCoordIndex([260, 261, 262, 263, 264, 265, 266, 267, 268]);
HAnimJoint114.SetSkinCoordWeight([1, 1, 1, 1, 1, 1, 1, 1, 1]);
HAnimJoint113.FdChildren.Add(HAnimJoint114);
HAnimJoint112.FdChildren.Add(HAnimJoint113);
HAnimJoint111.FdChildren.Add(HAnimJoint112);
HAnimJoint115 := THAnimJointNode.Create;
HAnimJoint115.X3DName := 'r_index0';
HAnimJoint115.X3DName := 'Joe_r_index0';
HAnimJoint115.Center := Vector3(-0.2, 0.84, -0.015);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part15;
begin
HAnimJoint115.SetSkinCoordIndex([245, 246]);
HAnimJoint115.SetSkinCoordWeight([1, 1]);
HAnimJoint116 := THAnimJointNode.Create;
HAnimJoint116.X3DName := 'r_index1';
HAnimJoint116.X3DName := 'Joe_r_index1';
HAnimJoint116.Center := Vector3(-0.2, 0.793, -0.015);
HAnimJoint116.SetSkinCoordIndex([254, 255, 256, 269, 270, 271, 279]);
HAnimJoint116.SetSkinCoordWeight([0.5, 0.5, 0.5, 1, 1, 1, 0.5]);
HAnimJoint117 := THAnimJointNode.Create;
HAnimJoint117.X3DName := 'r_index2';
HAnimJoint117.X3DName := 'Joe_r_index2';
HAnimJoint117.Center := Vector3(-0.2, 0.745, -0.015);
HAnimJoint117.SetSkinCoordIndex([282, 283, 284, 285]);
HAnimJoint117.SetSkinCoordWeight([1, 1, 1, 1]);
HAnimJoint118 := THAnimJointNode.Create;
HAnimJoint118.X3DName := 'r_index3';
HAnimJoint118.X3DName := 'Joe_r_index3';
HAnimJoint118.Center := Vector3(-0.2, 0.72, -0.015);
HAnimJoint118.SetSkinCoordIndex([286, 287, 288, 289, 290, 291, 292, 293, 294]);
HAnimJoint118.SetSkinCoordWeight([1, 1, 1, 1, 1, 1, 1, 1, 1]);
HAnimJoint117.FdChildren.Add(HAnimJoint118);
HAnimJoint116.FdChildren.Add(HAnimJoint117);
HAnimJoint115.FdChildren.Add(HAnimJoint116);
HAnimJoint111.FdChildren.Add(HAnimJoint115);
HAnimJoint119 := THAnimJointNode.Create;
HAnimJoint119.X3DName := 'r_middle0';
HAnimJoint119.X3DName := 'Joe_r_middle0';
HAnimJoint119.Center := Vector3(-0.2, 0.835, -0.04);
HAnimJoint119.SetSkinCoordIndex([247, 248]);
HAnimJoint119.SetSkinCoordWeight([1, 1]);
HAnimJoint120 := THAnimJointNode.Create;
HAnimJoint120.X3DName := 'r_middle1';
HAnimJoint120.X3DName := 'Joe_r_middle1';
HAnimJoint120.Center := Vector3(-0.2, 0.788, -0.04);
HAnimJoint120.SetSkinCoordIndex([272, 273, 279, 280]);
HAnimJoint120.SetSkinCoordWeight([1, 1, 0.5, 0.5]);
HAnimJoint121 := THAnimJointNode.Create;
HAnimJoint121.X3DName := 'r_middle2';
HAnimJoint121.X3DName := 'Joe_r_middle2';
HAnimJoint121.Center := Vector3(-0.2, 0.74, -0.04);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part16;
begin
HAnimJoint121.SetSkinCoordIndex([295, 296, 297, 298]);
HAnimJoint121.SetSkinCoordWeight([1, 1, 1, 1]);
HAnimJoint122 := THAnimJointNode.Create;
HAnimJoint122.X3DName := 'r_middle3';
HAnimJoint122.X3DName := 'Joe_r_middle3';
HAnimJoint122.Center := Vector3(-0.2, 0.7142, -0.04);
HAnimJoint122.SetSkinCoordIndex([299, 300, 301, 302, 303, 304, 305, 306, 307]);
HAnimJoint122.SetSkinCoordWeight([1, 1, 1, 1, 1, 1, 1, 1, 1]);
HAnimJoint121.FdChildren.Add(HAnimJoint122);
HAnimJoint120.FdChildren.Add(HAnimJoint121);
HAnimJoint119.FdChildren.Add(HAnimJoint120);
HAnimJoint111.FdChildren.Add(HAnimJoint119);
HAnimJoint123 := THAnimJointNode.Create;
HAnimJoint123.X3DName := 'r_ring0';
HAnimJoint123.X3DName := 'Joe_r_ring0';
HAnimJoint123.Center := Vector3(-0.2, 0.835, -0.065);
HAnimJoint123.SetSkinCoordIndex([249, 250]);
HAnimJoint123.SetSkinCoordWeight([1, 1]);
HAnimJoint124 := THAnimJointNode.Create;
HAnimJoint124.X3DName := 'r_ring1';
HAnimJoint124.X3DName := 'Joe_r_ring1';
HAnimJoint124.Center := Vector3(-0.2, 0.793, -0.065);
HAnimJoint124.SetSkinCoordIndex([274, 275, 280, 281]);
HAnimJoint124.SetSkinCoordWeight([1, 1, 0.5, 0.5]);
HAnimJoint125 := THAnimJointNode.Create;
HAnimJoint125.X3DName := 'r_ring2';
HAnimJoint125.X3DName := 'Joe_r_ring2';
HAnimJoint125.Center := Vector3(-0.2, 0.74, -0.065);
HAnimJoint125.SetSkinCoordIndex([308, 309, 310, 311]);
HAnimJoint125.SetSkinCoordWeight([1, 1, 1, 1]);
HAnimJoint126 := THAnimJointNode.Create;
HAnimJoint126.X3DName := 'r_ring3';
HAnimJoint126.X3DName := 'Joe_r_ring3';
HAnimJoint126.Center := Vector3(-0.2, 0.7177, -0.065);
HAnimJoint126.SetSkinCoordIndex([312, 313, 314, 315, 316, 317, 318, 319, 320]);
HAnimJoint126.SetSkinCoordWeight([1, 1, 1, 1, 1, 1, 1, 1, 1]);
HAnimJoint125.FdChildren.Add(HAnimJoint126);
HAnimJoint124.FdChildren.Add(HAnimJoint125);
HAnimJoint123.FdChildren.Add(HAnimJoint124);
HAnimJoint111.FdChildren.Add(HAnimJoint123);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part17;
begin
HAnimJoint127 := THAnimJointNode.Create;
HAnimJoint127.X3DName := 'r_pinky0';
HAnimJoint127.X3DName := 'Joe_r_pinky0';
HAnimJoint127.Center := Vector3(-0.2, 0.84, -0.085);
HAnimJoint127.SetSkinCoordIndex([251, 252, 253, 281]);
HAnimJoint127.SetSkinCoordWeight([1, 1, 1, 0.5]);
HAnimJoint128 := THAnimJointNode.Create;
HAnimJoint128.X3DName := 'r_pinky1';
HAnimJoint128.X3DName := 'Joe_r_pinky1';
HAnimJoint128.Center := Vector3(-0.2, 0.79, -0.085);
HAnimJoint128.SetSkinCoordIndex([276, 277, 278]);
HAnimJoint128.SetSkinCoordWeight([1, 1, 1]);
HAnimJoint129 := THAnimJointNode.Create;
HAnimJoint129.X3DName := 'r_pinky2';
HAnimJoint129.X3DName := 'Joe_r_pinky2';
HAnimJoint129.Center := Vector3(-0.2, 0.755, -0.085);
HAnimJoint129.SetSkinCoordIndex([321, 322, 323, 324]);
HAnimJoint129.SetSkinCoordWeight([1, 1, 1, 1]);
HAnimJoint130 := THAnimJointNode.Create;
HAnimJoint130.X3DName := 'r_pinky3';
HAnimJoint130.X3DName := 'Joe_r_pinky3';
HAnimJoint130.Center := Vector3(-0.2, 0.735, -0.09);
HAnimJoint130.SetSkinCoordIndex([325, 326, 327, 328, 329, 330, 331, 332, 333]);
HAnimJoint130.SetSkinCoordWeight([1, 1, 1, 1, 1, 1, 1, 1, 1]);
HAnimJoint129.FdChildren.Add(HAnimJoint130);
HAnimJoint128.FdChildren.Add(HAnimJoint129);
HAnimJoint127.FdChildren.Add(HAnimJoint128);
HAnimJoint111.FdChildren.Add(HAnimJoint127);
HAnimJoint110.FdChildren.Add(HAnimJoint111);
HAnimJoint109.FdChildren.Add(HAnimJoint110);
HAnimJoint108.FdChildren.Add(HAnimJoint109);
HAnimJoint107.FdChildren.Add(HAnimJoint108);
HAnimJoint67.FdChildren.Add(HAnimJoint107);
HAnimJoint66.FdChildren.Add(HAnimJoint67);
HAnimJoint65.FdChildren.Add(HAnimJoint66);
HAnimJoint64.FdChildren.Add(HAnimJoint65);
HAnimJoint63.FdChildren.Add(HAnimJoint64);
HAnimJoint62.FdChildren.Add(HAnimJoint63);
HAnimJoint61.FdChildren.Add(HAnimJoint62);
HAnimJoint60.FdChildren.Add(HAnimJoint61);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part18;
begin
HAnimJoint59.FdChildren.Add(HAnimJoint60);
HAnimJoint58.FdChildren.Add(HAnimJoint59);
HAnimJoint57.FdChildren.Add(HAnimJoint58);
HAnimJoint56.FdChildren.Add(HAnimJoint57);
HAnimJoint55.FdChildren.Add(HAnimJoint56);
HAnimJoint54.FdChildren.Add(HAnimJoint55);
HAnimJoint53.FdChildren.Add(HAnimJoint54);
HAnimJoint52.FdChildren.Add(HAnimJoint53);
HAnimJoint51.FdChildren.Add(HAnimJoint52);
HAnimJoint50.FdChildren.Add(HAnimJoint51);
HAnimJoint28.FdChildren.Add(HAnimJoint50);
HAnimHumanoid27.FdSkeleton.Add(HAnimJoint28);
Shape131 := TShapeNode.Create;
Shape131.X3DName := 'Joe_Shape';
Appearance132 := TAppearanceNode.Create;
Appearance132.X3DName := 'Joe_skin_Appearance';
Material133 := TMaterialNode.Create;
Material133.X3DName := 'Joe_skin_Material';
Material133.DiffuseColor := Vector3(0.3, 0.3, 0.6);
Material133.EmissiveColor := Vector3(0.3, 0.3, 0.6);
Appearance132.Material := Material133;
ImageTexture134 := TImageTextureNode.Create;
ImageTexture134.X3DName := 'JoeSkinImageTexture';
ImageTexture134.SetUrl(['bodytexture28.png']);
Appearance132.Texture := ImageTexture134;
TextureTransform135 := TTextureTransformNode.Create;
TextureTransform135.X3DName := 'kicktextrans';
Appearance132.TextureTransform := TextureTransform135;
Shape131.Appearance := Appearance132;
IndexedFaceSet136 := TIndexedFaceSetNode.Create;
IndexedFaceSet136.X3DName := 'Joe_skin_IndexedFaceSet';
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part19;
begin
IndexedFaceSet136.SetCoordIndex([0, 9, 5, -1, 0, 7, 9, -1, 0, 5, 1, -1, 1, 5, 2, -1, 1, 3, 7, -1, 2, 4, 3, -1, 0, 1, 7, -1, 1, 2, 3, -1, 5, 6, 2, -1, 7, 3, 8, -1, 6, 4, 2, -1, 3, 4, 8, -1, 9, 6, 5, -1, 9, 7, 8, -1, 4, 6, 10, -1, 4, 10, 12, -1, 4, 12, 8, -1, 10, 11, 12, -1, 9, 75, 24, -1, 9, 24, 74, -1, 9, 8, 75, -1, 9, 74, 6, -1, 10, 6, 74, -1, 12, 75, 8, -1, 74, 24, 29, -1, 24, 77, 29, -1, 10, 74, 29, -1, 77, 32, 29, -1, 32, 78, 29, -1, 78, 30, 29, -1, 30, 10, 29, -1, 41, 24, 75, -1, 41, 75, 12, -1, 41, 12, 42, -1, 41, 42, 80, -1, 41, 80, 44, -1, 41, 44, 79, -1, 41, 79, 24, -1, 81, 24, 79, -1, 81, 77, 24, -1, 81, 25, 77, -1, 81, 79, 25, -1, 25, 79, 44, -1, 25, 32, 77, -1, 25, 83, 32, -1, 25, 26, 83, -1, 25, 27, 26, -1, 25, 84, 27, -1, 25, 44, 84, -1, 11, 10, 30, -1, 11, 30, 13, -1, 11, 13, 15, -1, 11, 15, 14, -1, 11, 14, 42, -1, 11, 42, 12, -1, 15, 13, 16, -1, 15, 18, 14, -1, 15, 16, 76, -1, 15, 76, 18, -1, 76, 16, 17, -1, 76, 17, 82, -1, 76, 82, 19, -1, 76, 19, 18, -1, 22, 18, 19, -1, 22, 87, 18, -1, 22, 27, 84, -1, 22, 84, 87, -1, 87, 84, 85, -1, 85, 84, 44, -1, 85, 42, 14, -1, 87, 14, 18, -1, 87, 85, 14, -1, 20, 83, 26, -1, 20, 17, 16, -1, 20, 16, 88, -1, 20, 88, 83, -1, 88, 16, 13, -1, 88, 13, 86, -1, 88, 86, 83, -1, 86, 13, 30, -1, 86, 32, 83, -1, 23, 89, 22, -1, 89, 27, 22, -1, 89, 91, 27, -1, 91, 26, 27, -1, 91, 20, 26, -1, 21, 20, 91, -1, 21, 17, 20, -1, 21, 92, 17, -1, 82, 17, 92, -1, 82, 90, 19, -1, 23, 22, 19, -1, 23, 19, 90, -1, 82, 92, 101, -1, 82, 101, 99, -1, 82, 99, 93, -1, 82, 93, 95, -1, 82, 95, 97, -1, 82, 97, 90, -1, 23, 90, 97, -1, 23, 97, 94, -1, 23, 94, 89, -1, 89, 94, 96, -1, 89, 96, 95, -1, 89, 95, 93, -1, 89, 93, 91, -1, 91, 93, 99, -1, 91, 99, 100, -1, 91, 100, 98, -1, 21, 91, 98, -1, 21, 98, 101, -1, 21, 101, 92, -1, 85, 105, 42, -1, 85, 103, 105, -1, 85, 44, 103, -1, 103, 44, 104, -1, 80, 42, 105, -1, 80, 105, 102, -1, 80, 102, 104, -1, 80, 104, 44, -1, 105, 109, 102, -1, 102, 109, 47, -1, 47, 104, 102, -1, 104, 47, 45, -1, 104, 45, 103, -1, 103, 45, 46, -1, 103, 46, 109, -1, 103, 109, 105, -1, 109, 112, 110, -1, 109, 110, 47, -1, 47, 110, 111, -1, 47, 111, 45, -1, 45, 111, 113, -1, 113, 46, 45, -1, 46, 113, 112, -1, 112, 109, 46, -1, 112, 118, 110, -1, 110, 118, 115, -1, 110, 115, 111, -1, 111, 115, 117, -1, 111, 117, 113, -1, 113, 117, 116, -1, 113, 116, 112, -1, 112, 116, 118, -1, 115, 118, 119, -1, 119, 118, 122, -1, 118, 116, 122, -1, 122, 116, 120, -1, 116, 117, 120, -1, 120, 117, 121, -1, 117, 115, 121, -1, 115, 119, 121, -1, 119, 127, 123, -1, 119, 122, 127, -1, 122, 126, 127, -1, 122, 128, 126, -1, 122, 120, 128, -1, 120, 124, 128, -1, 120, 121, 124, -1, 121, 125, 124, -1, 121, 119, 125, -1, 119, 123, 125, -1, 127, 129, 123, -1, 127, 126, 129, -1, 129, 126, 141, -1, 141, 126, 143, -1, 126, 142, 143, -1, 126, 128, 142, -1, 128, 124, 130, -1, 142, 128, 130, -1, 124, 132, 130, -1, 124, 134, 132, -1, 125, 134, 124, -1, 125, 136, 134, -1, 125, 137, 136, -1, 125, 135, 137, -1, 125, 133, 135, -1, 125, 123, 133, -1, 123, 131, 133, -1, 123, 129, 131, -1, 131, 129, 138, -1, 129, 141, 138, -1, 138, 141, 144, -1, 141, 143, 144, -1, 143, 146, 144, -1, 142, 146, 143, -1, 142, 145, 146, -1, 139, 145, 142, -1, 130, 139, 142, -1, 139, 130, 132, -1, 139, 132, 154, -1, 132, 157, 154, -1, 132, 159, 157, -1, 132, 134, 159, -1, 134, 136, 159, -1, 136, 161, 159, -1, 136, 137, 161, -1, 137, 162, 161, -1, 160, 162, 137, -1, 135, 160, 137, -1, 133, 160, 135, -1, 133, 158, 160, -1, 131, 158, 133, -1, 156, 158, 131, -1, 153, 156, 131, -1, 131, 138, 153, -1, 138, 155, 153, -1, 140, 155, 138, -1, 138, 144, 140, -1, 144, 147, 140, -1, 140, 147, 145, -1, 140, 145, 139, -1, 139, 155, 140, -1, 154, 155, 139, -1, 146, 149, 144, -1, 146, 151, 149, -1, 145, 151, 146, -1, 150, 151, 145, -1, 145, 152, 150, -1, 147, 152, 145, -1, 147, 149, 152, -1, 147, 144, 149, -1, 148, 149, 151, -1, 148, 152, 149, -1, 148, 150, 152, -1, 148, 151, 150, -1, 160, 207, 162, -1, 160, 205, 207, -1, 165, 208, 205, -1, 160, 165, 205, -1, 158, 165, 160, -1, 161, 162, 207, -1, 161, 207, 206, -1, 165, 206, 208, -1, 206, 165, 161, -1, 161, 165, 159, -1, 207, 209, 211, -1, 205, 209, 207, -1, 205, 212, 209, -1, 205, 208, 212, -1, 206, 212, 208, -1, 206, 210, 212, -1, 206, 207, 210, -1, 207, 211, 210, -1, 209, 212, 213, -1, 212, 216, 213, -1, 212, 214, 216, -1, 210, 214, 212, -1, 210, 215, 214, -1, 210, 211, 215, -1, 209, 215, 211, -1, 209, 213, 215, -1, 217, 213, 216, -1, 217, 215, 213, -1, 217, 214, 215, -1, 217, 216, 214, -1, 158, 194, 165, -1, 192, 194, 158, -1, 164, 195, 192, -1, 158, 164, 192, -1, 156, 164, 158, -1, 159, 194, 165, -1, 159, 194, 193, -1, 159, 193, 195, -1, 159, 195, 164, -1, 159, 164, 157, -1, 157, 164, 180, -1, 192, 198, 194, -1, 192, 196, 198, -1, 192, 195, 196, -1, 195, 199, 196, -1, 196, 199, 200, -1, 199, 203, 200, -1, 193, 199, 195, -1, 193, 197, 199, -1, 193, 198, 197, -1, 193, 194, 198, -1, 199, 201, 203, -1, 197, 201, 199, -1, 197, 198, 201, -1, 198, 202, 201, -1, 196, 202, 198, -1, 200, 202, 196, -1, 204, 202, 200, -1, 204, 201, 202, -1, 204, 203, 201, -1, 204, 200, 203, -1, 156, 181, 164, -1, 156, 179, 181, -1, 156, 182, 179, -1, 156, 163, 182, -1, 163, 180, 182, -1, 157, 180, 163, -1, 164, 181, 180, -1, 179, 182, 183, -1, 182, 186, 183, -1, 182, 184, 186, -1, 180, 184, 182, -1, 180, 181, 184, -1, 181, 185, 184, -1, 179, 185, 181, -1, 183, 185, 179, -1, 183, 186, 187, -1, 186, 190, 187, -1, 184, 190, 186, -1, 184, 188, 190, -1, 184, 185, 188, -1, 185, 189, 188, -1, 185, 183, 189, -1, 183, 187, 189, -1, 191, 189, 187, -1, 191, 188, 189, -1, 191, 190, 188, -1, 191, 187, 190, -1, 153, 163, 156, -1, 153, 168, 163, -1, 153, 166, 168, -1, 153, 169, 166, -1, 155, 169, 153, -1, 155, 167, 169, -1, 154, 167, 155, -1, 154, 163, 167, -1, 154, 157, 163, -1, 163, 168, 167, -1, 166, 169, 170, -1, 169, 173, 170, -1, 169, 171, 173, -1, 169, 167, 171, -1, 167, 168, 171, -1, 168, 172, 171, -1, 168, 170, 172, -1, 170, 168, 166, -1, 170, 173, 174, -1, 173, 177, 174, -1, 173, 175, 177, -1, 173, 171, 175, -1, 171, 172, 175, -1, 172, 176, 175, -1, 172, 174, 176, -1, 170, 174, 172, -1, 178, 176, 174, -1, 178, 175, 176, -1, 178, 177, 175, -1, 178, 174, 177, -1, 86, 30, 221, -1, 86, 221, 219, -1, 86, 219, 32, -1, 32, 219, 220, -1, 78, 32, 220, -1, 78, 220, 218, -1, 78, 218, 221, -1, 78, 221, 30, -1, 221, 225, 219, -1, 219, 225, 35, -1, 35, 33, 219, -1, 33, 220, 219, -1, 33, 34, 220, -1, 220, 34, 218, -1, 221, 218, 34, -1, 34, 225, 221, -1, 225, 226, 228, -1, 225, 228, 35, -1, 35, 228, 229, -1, 35, 229, 33, -1, 33, 229, 227, -1, 33, 227, 34, -1, 34, 227, 226, -1, 34, 226, 225, -1, 226, 234, 228, -1, 228, 234, 232, -1, 232, 229, 228, -1, 232, 233, 229, -1, 229, 233, 227, -1, 227, 233, 231, -1, 227, 231, 226, -1, 226, 231, 234, -1, 231, 235, 234, -1, 235, 238, 234, -1, 234, 238, 232, -1, 238, 236, 232, -1, 232, 236, 233, -1, 236, 237, 233, -1, 233, 237, 231, -1, 231, 237, 235, -1, 235, 239, 243, -1, 235, 243, 238, -1, 238, 243, 242, -1, 238, 242, 244, -1, 238, 244, 236, -1, 236, 244, 240, -1, 236, 240, 237, -1, 237, 240, 241, -1, 237, 241, 235, -1, 235, 241, 239, -1, 243, 239, 245, -1, 243, 245, 242, -1, 245, 257, 242, -1, 257, 259, 242, -1, 242, 259, 258, -1, 242, 258, 244, -1, 244, 246, 240, -1, 258, 246, 244, -1, 240, 246, 248, -1, 240, 248, 250, -1, 241, 240, 250, -1, 241, 250, 252, -1, 241, 252, 253, -1, 241, 253, 251, -1, 241, 251, 249, -1, 241, 249, 239, -1, 239, 249, 247, -1, 239, 247, 245, -1, 247, 254, 245, -1, 245, 254, 257, -1, 254, 260, 257, -1, 257, 260, 259, -1, 259, 260, 262, -1, 258, 259, 262, -1, 258, 262, 261, -1, 255, 258, 261, -1, 246, 258, 255, -1, 255, 248, 246, -1, 255, 270, 248, -1, 248, 270, 273, -1, 248, 273, 275, -1, 248, 275, 250, -1, 250, 275, 252, -1, 252, 275, 277, -1, 252, 277, 253, -1, 253, 277, 278, -1, 276, 253, 278, -1, 251, 253, 276, -1, 249, 251, 276, -1, 249, 276, 274, -1, 247, 249, 274, -1, 272, 247, 274, -1, 269, 247, 272, -1, 247, 269, 254, -1, 254, 269, 271, -1, 256, 254, 271, -1, 254, 256, 260, -1, 260, 256, 263, -1, 256, 261, 263, -1, 256, 255, 261, -1, 255, 256, 271, -1, 270, 255, 271, -1, 262, 260, 265, -1, 262, 265, 267, -1, 261, 262, 267, -1, 266, 261, 267, -1, 261, 266, 268, -1, 263, 261, 268, -1, 263, 268, 265, -1, 263, 265, 260, -1, 264, 267, 265, -1, 264, 265, 268, -1, 264, 268, 266, -1, 264, 266, 267, -1, 276, 278, 323, -1, 276, 323, 321, -1, 281, 321, 324, -1, 276, 321, 281, -1, 274, 276, 281, -1, 277, 323, 278, -1, 277, 322, 323, -1, 281, 324, 322, -1, 322, 277, 281, -1, 277, 275, 281, -1, 323, 327, 325, -1, 321, 323, 325, -1, 321, 325, 328, -1, 321, 328, 324, -1, 322, 324, 328, -1, 322, 328, 326, -1, 322, 326, 323, -1, 323, 326, 327, -1, 325, 329, 328, -1, 328, 329, 332, -1, 328, 332, 330, -1, 326, 328, 330, -1, 326, 330, 331, -1, 326, 331, 327, -1, 325, 327, 331, -1, 325, 331, 329, -1, 333, 332, 329, -1, 333, 329, 331, -1, 333, 331, 330, -1, 333, 330, 332, -1, 274, 281, 310, -1, 308, 274, 310, -1, 280, 308, 311, -1, 274, 308, 280, -1, 272, 274, 280, -1, 275, 310, 281, -1, 275, 309, 310, -1, 275, 311, 309, -1, 275, 280, 311, -1, 275, 273, 280, -1, 273, 296, 280, -1, 308, 310, 314, -1, 308, 314, 312, -1, 308, 312, 311, -1, 311, 312, 315, -1, 312, 316, 315, -1, 315, 316, 319, -1, 309, 311, 315, -1, 309, 315, 313, -1, 309, 313, 314, -1, 309, 314, 310, -1, 315, 319, 317, -1, 313, 315, 317, -1, 313, 317, 314, -1, 314, 317, 318, -1, 312, 314, 318, -1, 316, 312, 318, -1, 320, 316, 318, -1, 320, 318, 317, -1, 320, 317, 319, -1, 320, 319, 316, -1, 272, 280, 297, -1, 272, 297, 295, -1, 272, 295, 298, -1, 272, 298, 279, -1, 279, 298, 296, -1, 273, 279, 296, -1, 280, 296, 297, -1, 295, 299, 298, -1, 298, 299, 302, -1, 298, 302, 300, -1, 296, 298, 300, -1, 296, 300, 297, -1, 297, 300, 301, -1, 295, 297, 301, -1, 299, 295, 301, -1, 299, 303, 302, -1, 302, 303, 306, -1, 300, 302, 306, -1, 300, 306, 304, -1, 300, 304, 301, -1, 301, 304, 305, -1, 301, 305, 299, -1, 299, 305, 303, -1, 307, 303, 305, -1, 307, 305, 304, -1, 307, 304, 306, -1, 307, 306, 303, -1, 269, 272, 279, -1, 269, 279, 284, -1, 269, 284, 282, -1, 269, 282, 285, -1, 271, 269, 285, -1, 271, 285, 283, -1, 270, 271, 283, -1, 270, 283, 279, -1, 270, 279, 273, -1, 279, 283, 284, -1, 282, 286, 285, -1, 285, 286, 289, -1, 285, 289, 287, -1, 285, 287, 283, -1, 283, 287, 284, -1, 284, 287, 288, -1, 284, 288, 286, -1, 286, 282, 284, -1, 286, 290, 289, -1, 289, 290, 293, -1, 289, 293, 291, -1, 289, 291, 287, -1, 287, 291, 288, -1, 288, 291, 292, -1, 288, 292, 290, -1, 286, 288, 290, -1, 294, 290, 292, -1, 294, 292, 291, -1, 294, 291, 293, -1, 294, 293, 290, -1, 97, 334, 336, -1, 97, 336, 94, -1, 94, 336, 96, -1, 336, 335, 96, -1, 96, 335, 95, -1, 95, 335, 337, -1, 95, 337, 334, -1, 95, 334, 97, -1, 334, 341, 336, -1, 336, 341, 338, -1, 336, 338, 335, -1, 335, 338, 340, -1, 335, 340, 337, -1, 337, 340, 339, -1, 337, 339, 334, -1, 334, 339, 341, -1, 341, 345, 342, -1, 341, 342, 338, -1, 338, 342, 340, -1, 340, 342, 344, -1, 340, 344, 339, -1, 339, 344, 343, -1, 339, 343, 345, -1, 339, 345, 341, -1, 345, 349, 342, -1, 342, 349, 351, -1, 342, 351, 346, -1, 342, 346, 344, -1, 71, 346, 348, -1, 71, 344, 346, -1, 71, 348, 347, -1, 71, 347, 344, -1, 344, 347, 343, -1, 343, 347, 352, -1, 343, 352, 349, -1, 343, 349, 345, -1, 349, 352, 356, -1, 349, 356, 353, -1, 349, 353, 355, -1, 349, 355, 351, -1, 354, 356, 352, -1, 354, 352, 350, -1, 354, 350, 351, -1, 354, 351, 355, -1, 353, 356, 357, -1, 353, 357, 358, -1, 353, 358, 359, -1, 353, 359, 360, -1, 353, 360, 361, -1, 353, 361, 355, -1, 354, 357, 356, -1, 350, 346, 351, -1, 348, 346, 347, -1, 350, 347, 346, -1, 350, 352, 347, -1, 354, 358, 357, -1, 354, 359, 358, -1, 354, 360, 359, -1, 354, 361, 360, -1, 354, 355, 361, -1, 101, 362, 365, -1, 101, 365, 99, -1, 99, 365, 100, -1, 100, 365, 363, -1, 100, 363, 98, -1, 98, 363, 364, -1, 98, 364, 101, -1, 101, 364, 362, -1, 362, 369, 367, -1, 362, 367, 365, -1, 365, 367, 363, -1, 363, 367, 368, -1, 363, 367, 368, -1, 363, 368, 366, -1, 363, 366, 364, -1, 364, 366, 362, -1, 362, 366, 369, -1, 369, 373, 371, -1, 369, 371, 367, -1, 367, 371, 368, -1, 368, 371, 372, -1, 368, 372, 366, -1, 366, 372, 370, -1, 366, 370, 369, -1, 369, 370, 373, -1, 373, 377, 380, -1, 373, 380, 375, -1, 373, 375, 371, -1, 371, 375, 372, -1, 372, 375, 376, -1, 372, 376, 374, -1, 372, 374, 370, -1, 370, 374, 379, -1, 373, 370, 379, -1, 373, 379, 377, -1, 377, 379, 383, -1, 377, 383, 381, -1, 377, 381, 384, -1, 377, 384, 380, -1, 381, 383, 389, -1, 381, 389, 388, -1, 381, 388, 387, -1, 381, 387, 386, -1, 381, 386, 385, -1, 381, 385, 384, -1, 376, 375, 374, -1, 378, 379, 374, -1, 378, 374, 375, -1, 378, 375, 380, -1, 382, 386, 387, -1, 382, 387, 388, -1, 382, 388, 389, -1, 382, 389, 383, -1, 382, 383, 379, -1, 382, 379, 378, -1, 382, 378, 380, -1, 382, 380, 384, -1, 382, 384, 385, -1, 382, 385, 386, -1]);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part20;
begin
IndexedFaceSet136.CreaseAngle := 3.14;
Coordinate137 := TCoordinateNode.Create;
Coordinate137.X3DName := 'Joe_SkinCoord';
Coordinate137.SetPoint([Vector3(0, 1.77, 0), Vector3(0, 1.665, 0.09), Vector3(-0.033, 1.62, 0.087), Vector3(0.033, 1.62, 0.087), Vector3(0, 1.55, 0.097), Vector3(-0.077, 1.64, -0.01), Vector3(-0.0527, 1.58, 0.015), Vector3(0.077, 1.64, -0.01), Vector3(0.0527, 1.58, 0.015), Vector3(0, 1.625, -0.0925), Vector3(-0.03, 1.46, 0.035), Vector3(0, 1.44, 0.03), Vector3(0.03, 1.46, 0.035), Vector3(-0.1135, 1.318, 0.095), Vector3(0.1135, 1.318, 0.095), Vector3(0, 1.25, 0.113), Vector3(-0.087, 1.19, 0.09), Vector3(-0.0935, 1.03, 0.075), Vector3(0.087, 1.19, 0.09), Vector3(0.0935, 1.03, 0.075), Vector3(-0.1425, 1.065, 0.0033), Vector3(-0.15, 0.9, -0.01), Vector3(0.1425, 1.065, 0.0033), Vector3(0.15, 0.9, -0.01), Vector3(0, 1.53, -0.084), Vector3(0.0049, 1.1908, -0.1113), Vector3(-0.0773, 1.019, -0.12), Vector3(0.0773, 1.019, -0.12), Vector3(0.005, 1.0915, -0.1091), Vector3(-0.178, 1.4825, -0.0625), Vector3(-0.17, 1.38, 0.007), Vector3(-0.1884, 0.8676, -0.036), Vector3(-0.16, 1.38, -0.127), Vector3(-0.2, 1.1388, -0.08), Vector3(-0.244, 1.1388, -0.04), Vector3(-0.165, 1.1388, -0.04), Vector3(-0.23, 1.133, -0.055), Vector3(-0.1977, 0.8169, -0.0177), Vector3(-0.1941, 0.6772, -0.0423), Vector3(-0.2117, 0.8562, -0.0584), Vector3(-0.1929, 0.789, -0.1064), Vector3(0.175, 1.4825, -0.06), Vector3(0.17, 1.38, 0.007), Vector3(0.1901, 0.8645, -0.0415), Vector3(0.16, 1.38, -0.125), Vector3(0.2, 1.1388, -0.08), Vector3(0.165, 1.1388, -0.04), Vector3(0.244, 1.1388, -0.04), Vector3(0.23, 1.133, -0.055), Vector3(0.2009, 0.8139, -0.0237), Vector3(0.2056, 0.6743, -0.0482), Vector3(0.2142, 0.8529, -0.0648), Vector3(0.1929, 0.786, -0.1122), Vector3(-0.1, 0.4913, -0.03), Vector3(-0.17, 0.466, 0), Vector3(-0.05, 0.466, 0), Vector3(-0.165, 0.01, 0.12), Vector3(-0.15, 0.07, 0), Vector3(-0.085, 0.086, 0.0125), Vector3(-0.09, 0.056, 0.0125), Vector3(-0.115, 0.02, 0.122), Vector3(-0.115, 0.04, -0.055), Vector3(-0.11, 0.011, 0.19), Vector3(0.0993, 0.4881, -0.0309), Vector3(0.17, 0.466, 0), Vector3(0.05, 0.4867, 0), Vector3(0.165, 0.01, 0.12), Vector3(0.15, 0.07, 0), Vector3(0.085, 0.086, 0.0125), Vector3(0.09, 0.056, 0.0125), Vector3(0.115, 0.02, 0.122), Vector3(0.115, 0.04, -0.055), Vector3(0.11, 0.011, 0.19), Vector3(0, 0.875, 0), Vector3(-0.0646, 1.5149, -0.038), Vector3(0.0646, 1.5149, -0.038), Vector3(0, 1.07225, 0.09), Vector3(-0.11, 1.427, -0.1375), Vector3(-0.235, 1.42, -0.0625), Vector3(0.11, 1.427, -0.1375), Vector3(0.235, 1.42, -0.0625), Vector3(0, 1.41, -0.145), Vector3(0, 0.925, 0.08), Vector3(-0.087, 1.19, -0.09), Vector3(0.087, 1.19, -0.09), Vector3(0.172, 1.32, -0.03), Vector3(-0.172, 1.32, -0.03), Vector3(0.15, 1.23, -0.015), Vector3(-0.15, 1.23, -0.015), Vector3(0.079, 0.92, -0.14), Vector3(0.1, 0.9, 0.077), Vector3(-0.079, 0.92, -0.14), Vector3(-0.1, 0.9, 0.075), Vector3(0, 0.87, 0), Vector3(0.171, 0.65, 0), Vector3(0.02, 0.65, 0), Vector3(0.1, 0.65, -0.08), Vector3(0.1, 0.65, 0.07), Vector3(-0.171, 0.65, 0), Vector3(-0.02, 0.65, 0), Vector3(-0.1, 0.65, -0.08), Vector3(-0.1, 0.65, 0.07), Vector3(0.25, 1.27, -0.04), Vector3(0.17, 1.27, -0.04), Vector3(0.2, 1.27, -0.09), Vector3(0.2, 1.27, 0.02), Vector3(0.244, 1.1388, -0.04), Vector3(0.165, 1.1388, -0.04), Vector3(0.2, 1.1388, -0.08), Vector3(0.2, 1.1388, -0.013), Vector3(0.225, 1, -0.01), Vector3(0.225, 1, -0.07), Vector3(0.185, 1, -0.01), Vector3(0.185, 1, -0.07), Vector3(0.2, 1.1388, -0.04), Vector3(0.225, 0.92, -0.04), Vector3(0.175, 0.92, -0.04), Vector3(0.2, 0.92, -0.065), Vector3(0.2, 0.92, -0.015), Vector3(0.225, 0.89, -0.04), Vector3(0.175, 0.89, -0.04), Vector3(0.2, 0.89, -0.065), Vector3(0.2, 0.89, -0.015), Vector3(0.218, 0.86, -0.04), Vector3(0.184, 0.86, -0.04), Vector3(0.2, 0.87, -0.07), Vector3(0.2, 0.87, 0), Vector3(0.21, 0.85, 0), Vector3(0.1854, 0.85, 0), Vector3(0.212, 0.84, -0.015), Vector3(0.183, 0.84, -0.015), Vector3(0.213, 0.835, -0.04), Vector3(0.19, 0.835, -0.04), Vector3(0.211, 0.835, -0.065), Vector3(0.192, 0.835, -0.065), Vector3(0.208, 0.84, -0.085), Vector3(0.19, 0.84, -0.085), Vector3(0.2, 0.84, -0.095), Vector3(0.215, 0.82, 0), Vector3(0.193, 0.815, 0.005), Vector3(0.198, 0.8, 0.012), Vector3(0.21, 0.82, 0.03), Vector3(0.19, 0.82, 0.03), Vector3(0.2, 0.835, 0.039), Vector3(0.212, 0.8, 0.05), Vector3(0.188, 0.8, 0.05), Vector3(0.2, 0.807, 0.057), Vector3(0.2, 0.793, 0.035), Vector3(0.2, 0.774, 0.076), Vector3(0.212, 0.78, 0.07), Vector3(0.188, 0.78, 0.07), Vector3(0.2, 0.785, 0.075), Vector3(0.2, 0.77, 0.062), Vector3(0.215, 0.793, -0.015), Vector3(0.187, 0.793, -0.015), Vector3(0.2, 0.793, -0.005), Vector3(0.215, 0.788, -0.04), Vector3(0.187, 0.788, -0.04), Vector3(0.215, 0.793, -0.065), Vector3(0.187, 0.793, -0.065), Vector3(0.21, 0.79, -0.085), Vector3(0.19, 0.79, -0.085), Vector3(0.2, 0.79, -0.095), Vector3(0.19, 0.77, -0.0275), Vector3(0.19, 0.77, -0.0525), Vector3(0.19, 0.78, -0.0775), Vector3(0.212, 0.745, -0.015), Vector3(0.188, 0.745, -0.02), Vector3(0.2, 0.745, -0.0255), Vector3(0.2, 0.745, -0.0045), Vector3(0.211, 0.72, -0.015), Vector3(0.189, 0.72, -0.015), Vector3(0.2, 0.72, -0.0252), Vector3(0.2, 0.72, -0.0048), Vector3(0.21, 0.695, -0.015), Vector3(0.19, 0.695, -0.015), Vector3(0.2, 0.695, -0.025), Vector3(0.2, 0.695, -0.005), Vector3(0.2, 0.685, -0.015), Vector3(0.215, 0.74, -0.04), Vector3(0.185, 0.74, -0.04), Vector3(0.2, 0.74, -0.055), Vector3(0.2, 0.74, -0.025), Vector3(0.21, 0.7142, -0.04), Vector3(0.19, 0.7142, -0.04), Vector3(0.2, 0.7142, -0.053), Vector3(0.2, 0.7142, -0.027), Vector3(0.21, 0.68, -0.04), Vector3(0.19, 0.68, -0.04), Vector3(0.2, 0.68, -0.05), Vector3(0.2, 0.68, -0.03), Vector3(0.2, 0.67, -0.04), Vector3(0.212, 0.74, -0.065), Vector3(0.188, 0.74, -0.065), Vector3(0.2, 0.74, -0.0756), Vector3(0.2, 0.74, -0.0542), Vector3(0.21, 0.7177, -0.065), Vector3(0.19, 0.7177, -0.065), Vector3(0.2, 0.7177, -0.0751), Vector3(0.2, 0.7177, -0.0549), Vector3(0.21, 0.695, -0.065), Vector3(0.19, 0.695, -0.065), Vector3(0.2, 0.695, -0.075), Vector3(0.2, 0.695, -0.055), Vector3(0.2, 0.685, -0.065), Vector3(0.211, 0.755, -0.085), Vector3(0.189, 0.755, -0.085), Vector3(0.2, 0.755, -0.0952), Vector3(0.2, 0.755, -0.0748), Vector3(0.21, 0.735, -0.085), Vector3(0.19, 0.735, -0.085), Vector3(0.2, 0.735, -0.0951), Vector3(0.2, 0.735, -0.0749), Vector3(0.21, 0.72, -0.085), Vector3(0.19, 0.72, -0.085), Vector3(0.2, 0.72, -0.095), Vector3(0.2, 0.72, -0.075), Vector3(0.2, 0.71, -0.085), Vector3(-0.23, 1.23, -0.04), Vector3(-0.16, 1.23, -0.04), Vector3(-0.2, 1.235, -0.105), Vector3(-0.2, 1.255, 0.02), Vector3(-0.244, 1.1388, -0.04), Vector3(-0.165, 1.1388, -0.04), Vector3(-0.2, 1.1388, -0.08), Vector3(-0.2, 1.1388, 0.013), Vector3(-0.225, 1, -0.01), Vector3(-0.225, 1, -0.07), Vector3(-0.185, 1, -0.01), Vector3(-0.185, 1, -0.07), Vector3(-0.2, 1.1388, -0.04), Vector3(-0.225, 0.92, -0.04), Vector3(-0.175, 0.92, -0.04), Vector3(-0.2, 0.92, -0.065), Vector3(-0.2, 0.92, -0.015), Vector3(-0.225, 0.89, -0.04), Vector3(-0.175, 0.89, -0.04), Vector3(-0.2, 0.89, -0.065), Vector3(-0.2, 0.89, -0.015), Vector3(-0.218, 0.86, -0.04), Vector3(-0.184, 0.86, -0.04), Vector3(-0.2, 0.87, -0.07), Vector3(-0.2, 0.87, 0), Vector3(-0.21, 0.85, 0), Vector3(-0.1854, 0.85, 0), Vector3(-0.212, 0.84, -0.015), Vector3(-0.183, 0.84, -0.015), Vector3(-0.213, 0.835, -0.04), Vector3(-0.19, 0.835, -0.04), Vector3(-0.211, 0.835, -0.065), Vector3(-0.192, 0.835, -0.065), Vector3(-0.208, 0.84, -0.085), Vector3(-0.19, 0.84, -0.085), Vector3(-0.2, 0.84, -0.095), Vector3(-0.215, 0.82, 0), Vector3(-0.193, 0.815, 0.005), Vector3(-0.198, 0.8, 0.012), Vector3(-0.21, 0.82, 0.03), Vector3(-0.19, 0.82, 0.03), Vector3(-0.2, 0.835, 0.039), Vector3(-0.212, 0.8, 0.05), Vector3(-0.188, 0.8, 0.05), Vector3(-0.2, 0.807, 0.057), Vector3(-0.2, 0.793, 0.035), Vector3(-0.2, 0.774, 0.076), Vector3(-0.212, 0.78, 0.07), Vector3(-0.188, 0.78, 0.07), Vector3(-0.2, 0.785, 0.075), Vector3(-0.2, 0.77, 0.062), Vector3(-0.215, 0.793, -0.015), Vector3(-0.187, 0.793, -0.015), Vector3(-0.2, 0.793, -0.005), Vector3(-0.215, 0.788, -0.04), Vector3(-0.187, 0.788, -0.04), Vector3(-0.215, 0.793, -0.065), Vector3(-0.187, 0.793, -0.065), Vector3(-0.21, 0.79, -0.085), Vector3(-0.19, 0.79, -0.085), Vector3(-0.2, 0.79, -0.095), Vector3(-0.19, 0.77, -0.0275), Vector3(-0.19, 0.77, -0.0525), Vector3(-0.19, 0.78, -0.0775), Vector3(-0.212, 0.745, -0.015), Vector3(-0.188, 0.745, -0.02), Vector3(-0.2, 0.745, -0.0255), Vector3(-0.2, 0.745, -0.0045), Vector3(-0.211, 0.72, -0.015), Vector3(-0.189, 0.72, -0.015), Vector3(-0.2, 0.72, -0.0252), Vector3(-0.2, 0.72, -0.0048), Vector3(-0.21, 0.695, -0.015), Vector3(-0.19, 0.695, -0.015), Vector3(-0.2, 0.695, -0.025), Vector3(-0.2, 0.695, -0.005), Vector3(-0.2, 0.685, -0.015), Vector3(-0.215, 0.74, -0.04), Vector3(-0.185, 0.74, -0.04), Vector3(-0.2, 0.74, -0.055), Vector3(-0.2, 0.74, -0.025), Vector3(-0.21, 0.7142, -0.04), Vector3(-0.19, 0.7142, -0.04), Vector3(-0.2, 0.7142, -0.053), Vector3(-0.2, 0.7142, -0.027), Vector3(-0.21, 0.68, -0.04), Vector3(-0.19, 0.68, -0.04), Vector3(-0.2, 0.68, -0.05), Vector3(-0.2, 0.68, -0.03), Vector3(-0.2, 0.67, -0.04), Vector3(-0.212, 0.74, -0.065), Vector3(-0.188, 0.74, -0.065), Vector3(-0.2, 0.74, -0.0756), Vector3(-0.2, 0.74, -0.0542), Vector3(-0.21, 0.7177, -0.065), Vector3(-0.19, 0.7177, -0.065), Vector3(-0.2, 0.7177, -0.0751), Vector3(-0.2, 0.7177, -0.0549), Vector3(-0.21, 0.695, -0.065), Vector3(-0.19, 0.695, -0.065), Vector3(-0.2, 0.695, -0.075), Vector3(-0.2, 0.695, -0.055), Vector3(-0.2, 0.685, -0.065), Vector3(-0.211, 0.755, -0.085), Vector3(-0.189, 0.755, -0.085), Vector3(-0.2, 0.755, -0.0952), Vector3(-0.2, 0.755, -0.0748), Vector3(-0.21, 0.735, -0.085), Vector3(-0.19, 0.735, -0.085), Vector3(-0.2, 0.735, -0.0951), Vector3(-0.2, 0.735, -0.0749), Vector3(-0.21, 0.72, -0.085), Vector3(-0.19, 0.72, -0.085), Vector3(-0.2, 0.72, -0.095), Vector3(-0.2, 0.72, -0.075), Vector3(-0.2, 0.71, -0.085), Vector3(0.115, 0.466, 0.06), Vector3(0.115, 0.466, -0.055), Vector3(0.15, 0.466, 0), Vector3(0.05, 0.466, 0), Vector3(0.17, 0.3, 0), Vector3(0.06, 0.3, 0), Vector3(0.1, 0.3, -0.05), Vector3(0.1, 0.3, 0.05), Vector3(0.15, 0.07, 0), Vector3(0.085, 0.086, 0.0125), Vector3(0.115, 0.069, -0.045), Vector3(0.117, 0.0975, 0.0615), Vector3(0.1375, 0.006, -0.03), Vector3(0.095, 0.006, -0.03), Vector3(0.115, 0.015, -0.045), Vector3(0.115, 0.06, 0.1), Vector3(0.115, 0, 0.07), Vector3(0.165, 0, 0.07), Vector3(0.095, 0, 0.07), Vector3(0.115, 0.04, 0.13), Vector3(0.125, 0, 0.12), Vector3(0.165, 0, 0.12), Vector3(0.087, 0, 0.122), Vector3(0.09, 0.012, 0.188), Vector3(0.11, 0.011, 0.19), Vector3(0.128, 0.011, 0.185), Vector3(0.142, 0.011, 0.178), Vector3(0.154, 0.01, 0.168), Vector3(-0.115, 0.466, 0.06), Vector3(-0.115, 0.466, -0.055), Vector3(-0.17, 0.466, 0), Vector3(-0.05, 0.466, 0), Vector3(-0.17, 0.3, 0), Vector3(-0.06, 0.3, 0), Vector3(-0.1, 0.3, -0.05), Vector3(-0.1, 0.3, 0.05), Vector3(-0.15, 0.07, 0), Vector3(-0.085, 0.086, 0.0125), Vector3(-0.115, 0.069, -0.045), Vector3(-0.117, 0.0975, 0.0615), Vector3(-0.1375, 0.006, -0.03), Vector3(-0.095, 0.006, -0.03), Vector3(-0.095, 0.006, -0.03), Vector3(-0.115, 0.06, 0.1), Vector3(-0.115, 0, 0.07), Vector3(-0.165, 0, 0.07), Vector3(-0.095, 0, 0.07), Vector3(-0.115, 0.04, 0.13), Vector3(-0.125, 0, 0.12), Vector3(-0.165, 0, 0.12), Vector3(-0.087, 0, 0.122), Vector3(-0.09, 0.012, 0.188), Vector3(-0.11, 0.011, 0.19), Vector3(-0.128, 0.011, 0.185), Vector3(-0.142, 0.011, 0.178), Vector3(-0.154, 0.01, 0.168)]);
IndexedFaceSet136.Coord := Coordinate137;
TextureCoordinate138 := TTextureCoordinateNode.Create;
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part21;
begin
TextureCoordinate138.SetPoint([Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5), Vector2(0.5, 0), Vector2(0, 0.5), Vector2(0, 0), Vector2(0.5, 0.5)]);
IndexedFaceSet136.TexCoord := TextureCoordinate138;
Shape131.Geometry := IndexedFaceSet136;
HAnimHumanoid27.Skin := Shape131;
HAnimHumanoid27.FdSkinCoord.Set(Coordinate137);
Group26.FdChildren.Add(HAnimHumanoid27);
Group15.FdChildren.Add(Group26);
Group140 := TGroupNode.Create;
TimeSensor141 := TTimeSensorNode.Create;
TimeSensor141.X3DName := 'KickTimer';
TimeSensor141.CycleInterval := 3.73;
TimeSensor141.Loop := True;
Group140.FdChildren.Add(TimeSensor141);
{ Interpolators }
OrientationInterpolator142 := TOrientationInterpolatorNode.Create;
OrientationInterpolator142.X3DName := 'HumanoidRootRotInterp';
OrientationInterpolator142.SetKey([0, 0.1, 0.4, 0.6, 1]);
OrientationInterpolator142.SetKeyValue([Vector4(1, 0, 0, 0.5), Vector4(1, 0, 0, 0.5), Vector4(-1, 0, 0, 0.1), Vector4(-1, 0, 0, 0.5), Vector4(-1, 0, 0, 0.5)]);
Group140.FdChildren.Add(OrientationInterpolator142);
PositionInterpolator143 := TPositionInterpolatorNode.Create;
PositionInterpolator143.X3DName := 'HumanoidRootTransInterp';
PositionInterpolator143.SetKey([0, 0.2, 0.6, 1]);
PositionInterpolator143.SetKeyValue([Vector3(1, 0.3, -1), Vector3(0.4, -0.04, -0.4), Vector3(-0.18, 0.1, 0), Vector3(-0.2, 0.15, 0.15)]);
Group140.FdChildren.Add(PositionInterpolator143);
OrientationInterpolator144 := TOrientationInterpolatorNode.Create;
OrientationInterpolator144.X3DName := 'sacroiliacRotInterp';
OrientationInterpolator144.SetKey([0, 0.5, 1]);
OrientationInterpolator144.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator144);
OrientationInterpolator145 := TOrientationInterpolatorNode.Create;
OrientationInterpolator145.X3DName := 'l_hipRotInterp';
OrientationInterpolator145.SetKey([0, 0.1, 0.3, 0.45, 1]);
OrientationInterpolator145.SetKeyValue([Vector4(-1, 0, 0, 1.5), Vector4(-1, 0, 0, 1), Vector4(0, 0, 1, 0), Vector4(1, 0, 0, 0.5), Vector4(1, 0, 0, 1)]);
Group140.FdChildren.Add(OrientationInterpolator145);
OrientationInterpolator146 := TOrientationInterpolatorNode.Create;
OrientationInterpolator146.X3DName := 'l_kneeRotInterp';
OrientationInterpolator146.SetKey([0, 0.2, 0.35, 0.5, 1]);
OrientationInterpolator146.SetKeyValue([Vector4(1, 0, 0, 1), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0.2), Vector4(1, 0, 1, 0.5), Vector4(1, 0, 0, 1.4)]);
Group140.FdChildren.Add(OrientationInterpolator146);
OrientationInterpolator147 := TOrientationInterpolatorNode.Create;
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part22;
begin
OrientationInterpolator147.X3DName := 'l_ankleRotInterp';
OrientationInterpolator147.SetKey([0, 0.25, 1]);
OrientationInterpolator147.SetKeyValue([Vector4(-1, 0, 0, 1), Vector4(0, 0, 1, 0), Vector4(1, 0, 0, 1)]);
Group140.FdChildren.Add(OrientationInterpolator147);
OrientationInterpolator148 := TOrientationInterpolatorNode.Create;
OrientationInterpolator148.X3DName := 'l_subtalarRotInterp';
OrientationInterpolator148.SetKey([0, 0.5, 1]);
OrientationInterpolator148.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator148);
OrientationInterpolator149 := TOrientationInterpolatorNode.Create;
OrientationInterpolator149.X3DName := 'l_midtarsalRotInterp';
OrientationInterpolator149.SetKey([0, 0.5, 1]);
OrientationInterpolator149.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator149);
OrientationInterpolator150 := TOrientationInterpolatorNode.Create;
OrientationInterpolator150.X3DName := 'l_metatarsalRotInterp';
OrientationInterpolator150.SetKey([0, 0.5, 1]);
OrientationInterpolator150.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator150);
OrientationInterpolator151 := TOrientationInterpolatorNode.Create;
OrientationInterpolator151.X3DName := 'r_hipRotInterp';
OrientationInterpolator151.SetKey([0, 0.25, 0.5, 0.75, 1]);
OrientationInterpolator151.SetKeyValue([Vector4(1, 0, 0, 1), Vector4(1, 0, 0, 1), Vector4(-1, 0, 0, 1), Vector4(-1, 0, 0, 1), Vector4(-1, 0, 0, 1)]);
Group140.FdChildren.Add(OrientationInterpolator151);
OrientationInterpolator152 := TOrientationInterpolatorNode.Create;
OrientationInterpolator152.X3DName := 'r_kneeRotInterp';
OrientationInterpolator152.SetKey([0, 0.25, 0.5, 0.75, 1]);
OrientationInterpolator152.SetKeyValue([Vector4(1, 0, 0, 0.1), Vector4(0, 0, 1, 0), Vector4(1, 0, 0, 1), Vector4(1, 0, 0, 1), Vector4(1, 0, 0, 1.5)]);
Group140.FdChildren.Add(OrientationInterpolator152);
OrientationInterpolator153 := TOrientationInterpolatorNode.Create;
OrientationInterpolator153.X3DName := 'r_ankleRotInterp';
OrientationInterpolator153.SetKey([0, 0.25, 0.5, 0.75, 1]);
OrientationInterpolator153.SetKeyValue([Vector4(-1, 0, 0, 1), Vector4(0, 0, 1, 0), Vector4(1, 0, 0, 1), Vector4(1, 0, 0, 1), Vector4(1, 0, 0, 0.5)]);
Group140.FdChildren.Add(OrientationInterpolator153);
OrientationInterpolator154 := TOrientationInterpolatorNode.Create;
OrientationInterpolator154.X3DName := 'r_subtalarRotInterp';
OrientationInterpolator154.SetKey([0, 0.5, 1]);
OrientationInterpolator154.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator154);
OrientationInterpolator155 := TOrientationInterpolatorNode.Create;
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part23;
begin
OrientationInterpolator155.X3DName := 'r_midtarsalRotInterp';
OrientationInterpolator155.SetKey([0, 0.5, 1]);
OrientationInterpolator155.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator155);
OrientationInterpolator156 := TOrientationInterpolatorNode.Create;
OrientationInterpolator156.X3DName := 'r_metatarsalRotInterp';
OrientationInterpolator156.SetKey([0, 0.5, 1]);
OrientationInterpolator156.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator156);
OrientationInterpolator157 := TOrientationInterpolatorNode.Create;
OrientationInterpolator157.X3DName := 'vl5RotInterp';
OrientationInterpolator157.SetKey([0, 0.5, 1]);
OrientationInterpolator157.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator157);
OrientationInterpolator158 := TOrientationInterpolatorNode.Create;
OrientationInterpolator158.X3DName := 'vl4RotInterp';
OrientationInterpolator158.SetKey([0, 0.5, 1]);
OrientationInterpolator158.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator158);
OrientationInterpolator159 := TOrientationInterpolatorNode.Create;
OrientationInterpolator159.X3DName := 'vl3RotInterp';
OrientationInterpolator159.SetKey([0, 0.5, 1]);
OrientationInterpolator159.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator159);
OrientationInterpolator160 := TOrientationInterpolatorNode.Create;
OrientationInterpolator160.X3DName := 'vl2RotInterp';
OrientationInterpolator160.SetKey([0, 0.5, 1]);
OrientationInterpolator160.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator160);
OrientationInterpolator161 := TOrientationInterpolatorNode.Create;
OrientationInterpolator161.X3DName := 'vl1RotInterp';
OrientationInterpolator161.SetKey([0, 0.5, 1]);
OrientationInterpolator161.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator161);
OrientationInterpolator162 := TOrientationInterpolatorNode.Create;
OrientationInterpolator162.X3DName := 'vt12RotInterp';
OrientationInterpolator162.SetKey([0, 0.5, 1]);
OrientationInterpolator162.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator162);
OrientationInterpolator163 := TOrientationInterpolatorNode.Create;
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part24;
begin
OrientationInterpolator163.X3DName := 'vt11RotInterp';
OrientationInterpolator163.SetKey([0, 0.5, 1]);
OrientationInterpolator163.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator163);
OrientationInterpolator164 := TOrientationInterpolatorNode.Create;
OrientationInterpolator164.X3DName := 'vt10RotInterp';
OrientationInterpolator164.SetKey([0, 0.5, 1]);
OrientationInterpolator164.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator164);
OrientationInterpolator165 := TOrientationInterpolatorNode.Create;
OrientationInterpolator165.X3DName := 'vt9RotInterp';
OrientationInterpolator165.SetKey([0, 0.5, 1]);
OrientationInterpolator165.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator165);
OrientationInterpolator166 := TOrientationInterpolatorNode.Create;
OrientationInterpolator166.X3DName := 'vt8RotInterp';
OrientationInterpolator166.SetKey([0, 0.5, 1]);
OrientationInterpolator166.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator166);
OrientationInterpolator167 := TOrientationInterpolatorNode.Create;
OrientationInterpolator167.X3DName := 'vt7RotInterp';
OrientationInterpolator167.SetKey([0, 0.5, 1]);
OrientationInterpolator167.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator167);
OrientationInterpolator168 := TOrientationInterpolatorNode.Create;
OrientationInterpolator168.X3DName := 'vt6RotInterp';
OrientationInterpolator168.SetKey([0, 0.5, 1]);
OrientationInterpolator168.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator168);
OrientationInterpolator169 := TOrientationInterpolatorNode.Create;
OrientationInterpolator169.X3DName := 'vt5RotInterp';
OrientationInterpolator169.SetKey([0, 0.5, 1]);
OrientationInterpolator169.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator169);
OrientationInterpolator170 := TOrientationInterpolatorNode.Create;
OrientationInterpolator170.X3DName := 'vt4RotInterp';
OrientationInterpolator170.SetKey([0, 0.5, 1]);
OrientationInterpolator170.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator170);
OrientationInterpolator171 := TOrientationInterpolatorNode.Create;
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part25;
begin
OrientationInterpolator171.X3DName := 'vt3RotInterp';
OrientationInterpolator171.SetKey([0, 0.5, 1]);
OrientationInterpolator171.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator171);
OrientationInterpolator172 := TOrientationInterpolatorNode.Create;
OrientationInterpolator172.X3DName := 'vt2RotInterp';
OrientationInterpolator172.SetKey([0, 0.5, 1]);
OrientationInterpolator172.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator172);
OrientationInterpolator173 := TOrientationInterpolatorNode.Create;
OrientationInterpolator173.X3DName := 'vt1RotInterp';
OrientationInterpolator173.SetKey([0, 0.5, 1]);
OrientationInterpolator173.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator173);
OrientationInterpolator174 := TOrientationInterpolatorNode.Create;
OrientationInterpolator174.X3DName := 'vc7RotInterp';
OrientationInterpolator174.SetKey([0, 0.5, 1]);
OrientationInterpolator174.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator174);
OrientationInterpolator175 := TOrientationInterpolatorNode.Create;
OrientationInterpolator175.X3DName := 'vc6RotInterp';
OrientationInterpolator175.SetKey([0, 0.5, 1]);
OrientationInterpolator175.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator175);
OrientationInterpolator176 := TOrientationInterpolatorNode.Create;
OrientationInterpolator176.X3DName := 'vc5RotInterp';
OrientationInterpolator176.SetKey([0, 0.5, 1]);
OrientationInterpolator176.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator176);
OrientationInterpolator177 := TOrientationInterpolatorNode.Create;
OrientationInterpolator177.X3DName := 'vc4RotInterp';
OrientationInterpolator177.SetKey([0, 0.3, 0.4, 1]);
OrientationInterpolator177.SetKeyValue([Vector4(1, 0, 1, 0.25), Vector4(-1, 0, -1, 0.35), Vector4(1, 0, 0, 0.75), Vector4(1, 0, 1, 0.5)]);
Group140.FdChildren.Add(OrientationInterpolator177);
OrientationInterpolator178 := TOrientationInterpolatorNode.Create;
OrientationInterpolator178.X3DName := 'vc3RotInterp';
OrientationInterpolator178.SetKey([0, 0.5, 1]);
OrientationInterpolator178.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator178);
OrientationInterpolator179 := TOrientationInterpolatorNode.Create;
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part26;
begin
OrientationInterpolator179.X3DName := 'vc2RotInterp';
OrientationInterpolator179.SetKey([0, 0.5, 1]);
OrientationInterpolator179.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator179);
OrientationInterpolator180 := TOrientationInterpolatorNode.Create;
OrientationInterpolator180.X3DName := 'vc1RotInterp';
OrientationInterpolator180.SetKey([0, 0.5, 1]);
OrientationInterpolator180.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator180);
OrientationInterpolator181 := TOrientationInterpolatorNode.Create;
OrientationInterpolator181.X3DName := 'skullbaseRotInterp';
OrientationInterpolator181.SetKey([0, 0.2, 0.75, 1]);
OrientationInterpolator181.SetKeyValue([Vector4(0, -1, 0, 0.5), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 1, 0, 0.35)]);
Group140.FdChildren.Add(OrientationInterpolator181);
OrientationInterpolator182 := TOrientationInterpolatorNode.Create;
OrientationInterpolator182.X3DName := 'l_eyelid_jointRotInterp';
OrientationInterpolator182.SetKey([0, 0.5, 1]);
OrientationInterpolator182.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator182);
OrientationInterpolator183 := TOrientationInterpolatorNode.Create;
OrientationInterpolator183.X3DName := 'l_eyeball_jointRotInterp';
OrientationInterpolator183.SetKey([0, 0.5, 1]);
OrientationInterpolator183.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator183);
OrientationInterpolator184 := TOrientationInterpolatorNode.Create;
OrientationInterpolator184.X3DName := 'l_eyebrow_jointRotInterp';
OrientationInterpolator184.SetKey([0, 0.5, 1]);
OrientationInterpolator184.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator184);
OrientationInterpolator185 := TOrientationInterpolatorNode.Create;
OrientationInterpolator185.X3DName := 'r_eyelid_jointRotInterp';
OrientationInterpolator185.SetKey([0, 0.5, 1]);
OrientationInterpolator185.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator185);
OrientationInterpolator186 := TOrientationInterpolatorNode.Create;
OrientationInterpolator186.X3DName := 'r_eyeball_jointRotInterp';
OrientationInterpolator186.SetKey([0, 0.5, 1]);
OrientationInterpolator186.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator186);
OrientationInterpolator187 := TOrientationInterpolatorNode.Create;
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part27;
begin
OrientationInterpolator187.X3DName := 'r_eyebrow_jointRotInterp';
OrientationInterpolator187.SetKey([0, 0.5, 1]);
OrientationInterpolator187.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator187);
OrientationInterpolator188 := TOrientationInterpolatorNode.Create;
OrientationInterpolator188.X3DName := 'temporomandibularRotInterp';
OrientationInterpolator188.SetKey([0, 0.5, 1]);
OrientationInterpolator188.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator188);
OrientationInterpolator189 := TOrientationInterpolatorNode.Create;
OrientationInterpolator189.X3DName := 'l_sternoclavicularRotInterp';
OrientationInterpolator189.SetKey([0, 0.5, 1]);
OrientationInterpolator189.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator189);
OrientationInterpolator190 := TOrientationInterpolatorNode.Create;
OrientationInterpolator190.X3DName := 'l_acromioclavicularRotInterp';
OrientationInterpolator190.SetKey([0, 0.5, 1]);
OrientationInterpolator190.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator190);
OrientationInterpolator191 := TOrientationInterpolatorNode.Create;
OrientationInterpolator191.X3DName := 'l_shoulderRotInterp';
OrientationInterpolator191.SetKey([0, 0.4, 1]);
OrientationInterpolator191.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 1.5), Vector4(-1, 0, 1, 1.75)]);
Group140.FdChildren.Add(OrientationInterpolator191);
OrientationInterpolator192 := TOrientationInterpolatorNode.Create;
OrientationInterpolator192.X3DName := 'l_elbowRotInterp';
OrientationInterpolator192.SetKey([0, 0.5, 1]);
OrientationInterpolator192.SetKeyValue([Vector4(-1, 0, 0, 3), Vector4(-1, 0, 0, 0.75), Vector4(-1, -1, 0, 0.5)]);
Group140.FdChildren.Add(OrientationInterpolator192);
OrientationInterpolator193 := TOrientationInterpolatorNode.Create;
OrientationInterpolator193.X3DName := 'l_wristRotInterp';
OrientationInterpolator193.SetKey([0, 0.4, 0.8, 1]);
OrientationInterpolator193.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 1, 0, 1.3), Vector4(0, -0.5, 1, 1.3), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator193);
OrientationInterpolator194 := TOrientationInterpolatorNode.Create;
OrientationInterpolator194.X3DName := 'l_thumb1RotInterp';
OrientationInterpolator194.SetKey([0, 0.5, 1]);
OrientationInterpolator194.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator194);
OrientationInterpolator195 := TOrientationInterpolatorNode.Create;
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part28;
begin
OrientationInterpolator195.X3DName := 'l_thumb2RotInterp';
OrientationInterpolator195.SetKey([0, 0.5, 1]);
OrientationInterpolator195.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator195);
OrientationInterpolator196 := TOrientationInterpolatorNode.Create;
OrientationInterpolator196.X3DName := 'l_thumb3RotInterp';
OrientationInterpolator196.SetKey([0, 0.5, 1]);
OrientationInterpolator196.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator196);
OrientationInterpolator197 := TOrientationInterpolatorNode.Create;
OrientationInterpolator197.X3DName := 'l_index0RotInterp';
OrientationInterpolator197.SetKey([0, 0.5, 1]);
OrientationInterpolator197.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator197);
OrientationInterpolator198 := TOrientationInterpolatorNode.Create;
OrientationInterpolator198.X3DName := 'l_index1RotInterp';
OrientationInterpolator198.SetKey([0, 0.5, 1]);
OrientationInterpolator198.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator198);
OrientationInterpolator199 := TOrientationInterpolatorNode.Create;
OrientationInterpolator199.X3DName := 'l_index2RotInterp';
OrientationInterpolator199.SetKey([0, 0.5, 1]);
OrientationInterpolator199.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator199);
OrientationInterpolator200 := TOrientationInterpolatorNode.Create;
OrientationInterpolator200.X3DName := 'l_index3RotInterp';
OrientationInterpolator200.SetKey([0, 0.5, 1]);
OrientationInterpolator200.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator200);
OrientationInterpolator201 := TOrientationInterpolatorNode.Create;
OrientationInterpolator201.X3DName := 'l_middle0RotInterp';
OrientationInterpolator201.SetKey([0, 0.5, 1]);
OrientationInterpolator201.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator201);
OrientationInterpolator202 := TOrientationInterpolatorNode.Create;
OrientationInterpolator202.X3DName := 'l_middle1RotInterp';
OrientationInterpolator202.SetKey([0, 0.5, 1]);
OrientationInterpolator202.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator202);
OrientationInterpolator203 := TOrientationInterpolatorNode.Create;
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part29;
begin
OrientationInterpolator203.X3DName := 'l_middle2RotInterp';
OrientationInterpolator203.SetKey([0, 0.5, 1]);
OrientationInterpolator203.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator203);
OrientationInterpolator204 := TOrientationInterpolatorNode.Create;
OrientationInterpolator204.X3DName := 'l_middle3RotInterp';
OrientationInterpolator204.SetKey([0, 0.5, 1]);
OrientationInterpolator204.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator204);
OrientationInterpolator205 := TOrientationInterpolatorNode.Create;
OrientationInterpolator205.X3DName := 'l_ring0RotInterp';
OrientationInterpolator205.SetKey([0, 0.5, 1]);
OrientationInterpolator205.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator205);
OrientationInterpolator206 := TOrientationInterpolatorNode.Create;
OrientationInterpolator206.X3DName := 'l_ring1RotInterp';
OrientationInterpolator206.SetKey([0, 0.5, 1]);
OrientationInterpolator206.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator206);
OrientationInterpolator207 := TOrientationInterpolatorNode.Create;
OrientationInterpolator207.X3DName := 'l_ring2RotInterp';
OrientationInterpolator207.SetKey([0, 0.5, 1]);
OrientationInterpolator207.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator207);
OrientationInterpolator208 := TOrientationInterpolatorNode.Create;
OrientationInterpolator208.X3DName := 'l_ring3RotInterp';
OrientationInterpolator208.SetKey([0, 0.5, 1]);
OrientationInterpolator208.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator208);
OrientationInterpolator209 := TOrientationInterpolatorNode.Create;
OrientationInterpolator209.X3DName := 'l_pinky0RotInterp';
OrientationInterpolator209.SetKey([0, 0.5, 1]);
OrientationInterpolator209.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator209);
OrientationInterpolator210 := TOrientationInterpolatorNode.Create;
OrientationInterpolator210.X3DName := 'l_pinky1RotInterp';
OrientationInterpolator210.SetKey([0, 0.5, 1]);
OrientationInterpolator210.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator210);
OrientationInterpolator211 := TOrientationInterpolatorNode.Create;
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part30;
begin
OrientationInterpolator211.X3DName := 'l_pinky2RotInterp';
OrientationInterpolator211.SetKey([0, 0.5, 1]);
OrientationInterpolator211.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator211);
OrientationInterpolator212 := TOrientationInterpolatorNode.Create;
OrientationInterpolator212.X3DName := 'l_pinky3RotInterp';
OrientationInterpolator212.SetKey([0, 0.5, 1]);
OrientationInterpolator212.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator212);
OrientationInterpolator213 := TOrientationInterpolatorNode.Create;
OrientationInterpolator213.X3DName := 'r_sternoclavicularRotInterp';
OrientationInterpolator213.SetKey([0, 0.5, 1]);
OrientationInterpolator213.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator213);
OrientationInterpolator214 := TOrientationInterpolatorNode.Create;
OrientationInterpolator214.X3DName := 'r_acromioclavicularRotInterp';
OrientationInterpolator214.SetKey([0, 0.5, 1]);
OrientationInterpolator214.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator214);
OrientationInterpolator215 := TOrientationInterpolatorNode.Create;
OrientationInterpolator215.X3DName := 'r_shoulderRotInterp';
OrientationInterpolator215.SetKey([0, 0.5, 1]);
OrientationInterpolator215.SetKeyValue([Vector4(0, 0, -1, 2.5), Vector4(0, 0, -1, 1.5), Vector4(0, 0, -1, 1.75)]);
Group140.FdChildren.Add(OrientationInterpolator215);
OrientationInterpolator216 := TOrientationInterpolatorNode.Create;
OrientationInterpolator216.X3DName := 'r_elbowRotInterp';
OrientationInterpolator216.SetKey([0, 0.5, 1]);
OrientationInterpolator216.SetKeyValue([Vector4(-1, 0, 0, 3), Vector4(-1, 0, 0, 0.75), Vector4(-1, -1, 0, 0.5)]);
Group140.FdChildren.Add(OrientationInterpolator216);
OrientationInterpolator217 := TOrientationInterpolatorNode.Create;
OrientationInterpolator217.X3DName := 'r_wristRotInterp';
OrientationInterpolator217.SetKey([0, 0.5, 0.7, 1]);
OrientationInterpolator217.SetKeyValue([Vector4(0, 1, 0, 0.3), Vector4(0, 0, 1, 0), Vector4(0, 0, -1, 1), Vector4(0, -1, 0, 0.3)]);
Group140.FdChildren.Add(OrientationInterpolator217);
OrientationInterpolator218 := TOrientationInterpolatorNode.Create;
OrientationInterpolator218.X3DName := 'r_thumb1RotInterp';
OrientationInterpolator218.SetKey([0, 0.5, 1]);
OrientationInterpolator218.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator218);
OrientationInterpolator219 := TOrientationInterpolatorNode.Create;
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part31;
begin
OrientationInterpolator219.X3DName := 'r_thumb2RotInterp';
OrientationInterpolator219.SetKey([0, 0.5, 1]);
OrientationInterpolator219.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator219);
OrientationInterpolator220 := TOrientationInterpolatorNode.Create;
OrientationInterpolator220.X3DName := 'r_thumb3RotInterp';
OrientationInterpolator220.SetKey([0, 0.5, 1]);
OrientationInterpolator220.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator220);
OrientationInterpolator221 := TOrientationInterpolatorNode.Create;
OrientationInterpolator221.X3DName := 'r_index0RotInterp';
OrientationInterpolator221.SetKey([0, 0.5, 0.75, 1]);
OrientationInterpolator221.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 1), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator221);
OrientationInterpolator222 := TOrientationInterpolatorNode.Create;
OrientationInterpolator222.X3DName := 'r_index1RotInterp';
OrientationInterpolator222.SetKey([0, 0.5, 0.75, 1]);
OrientationInterpolator222.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 1.5), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator222);
OrientationInterpolator223 := TOrientationInterpolatorNode.Create;
OrientationInterpolator223.X3DName := 'r_index2RotInterp';
OrientationInterpolator223.SetKey([0, 0.5, 0.75, 1]);
OrientationInterpolator223.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 1.5), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator223);
OrientationInterpolator224 := TOrientationInterpolatorNode.Create;
OrientationInterpolator224.X3DName := 'r_index3RotInterp';
OrientationInterpolator224.SetKey([0, 0.5, 0.75, 1]);
OrientationInterpolator224.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 1.5), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator224);
OrientationInterpolator225 := TOrientationInterpolatorNode.Create;
OrientationInterpolator225.X3DName := 'r_middle0RotInterp';
OrientationInterpolator225.SetKey([0, 0.5, 0.75, 1]);
OrientationInterpolator225.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 1), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator225);
OrientationInterpolator226 := TOrientationInterpolatorNode.Create;
OrientationInterpolator226.X3DName := 'r_middle1RotInterp';
OrientationInterpolator226.SetKey([0, 0.5, 0.75, 1]);
OrientationInterpolator226.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 1.5), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator226);
OrientationInterpolator227 := TOrientationInterpolatorNode.Create;
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part32;
begin
OrientationInterpolator227.X3DName := 'r_middle2RotInterp';
OrientationInterpolator227.SetKey([0, 0.5, 0.75, 1]);
OrientationInterpolator227.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 1.5), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator227);
OrientationInterpolator228 := TOrientationInterpolatorNode.Create;
OrientationInterpolator228.X3DName := 'r_middle3RotInterp';
OrientationInterpolator228.SetKey([0, 0.5, 0.75, 1]);
OrientationInterpolator228.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 1.5), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator228);
OrientationInterpolator229 := TOrientationInterpolatorNode.Create;
OrientationInterpolator229.X3DName := 'r_ring0RotInterp';
OrientationInterpolator229.SetKey([0, 0.5, 0.75, 1]);
OrientationInterpolator229.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 1), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator229);
OrientationInterpolator230 := TOrientationInterpolatorNode.Create;
OrientationInterpolator230.X3DName := 'r_ring1RotInterp';
OrientationInterpolator230.SetKey([0, 0.5, 0.75, 1]);
OrientationInterpolator230.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 1.5), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator230);
OrientationInterpolator231 := TOrientationInterpolatorNode.Create;
OrientationInterpolator231.X3DName := 'r_ring2RotInterp';
OrientationInterpolator231.SetKey([0, 0.5, 0.75, 1]);
OrientationInterpolator231.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 1.5), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator231);
OrientationInterpolator232 := TOrientationInterpolatorNode.Create;
OrientationInterpolator232.X3DName := 'r_ring3RotInterp';
OrientationInterpolator232.SetKey([0, 0.5, 0.75, 1]);
OrientationInterpolator232.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 1.5), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator232);
OrientationInterpolator233 := TOrientationInterpolatorNode.Create;
OrientationInterpolator233.X3DName := 'r_pinky0RotInterp';
OrientationInterpolator233.SetKey([0, 0.5, 0.75, 1]);
OrientationInterpolator233.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 1), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator233);
OrientationInterpolator234 := TOrientationInterpolatorNode.Create;
OrientationInterpolator234.X3DName := 'r_pinky1RotInterp';
OrientationInterpolator234.SetKey([0, 0.5, 0.75, 1]);
OrientationInterpolator234.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 1.5), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator234);
OrientationInterpolator235 := TOrientationInterpolatorNode.Create;
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part33;
begin
OrientationInterpolator235.X3DName := 'r_pinky2RotInterp';
OrientationInterpolator235.SetKey([0, 0.5, 0.75, 1]);
OrientationInterpolator235.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 1.5), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator235);
OrientationInterpolator236 := TOrientationInterpolatorNode.Create;
OrientationInterpolator236.X3DName := 'r_pinky3RotInterp';
OrientationInterpolator236.SetKey([0, 0.5, 0.75, 1]);
OrientationInterpolator236.SetKeyValue([Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 1, 1.5), Vector4(0, 0, 1, 0)]);
Group140.FdChildren.Add(OrientationInterpolator236);
Group15.FdChildren.Add(Group140);
{ TimeSensor to Interpolators }
{ ROUTE KickTimer.fraction_changed TO HumanoidRootRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator142.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO HumanoidRootTransInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, PositionInterpolator143.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO sacroiliacRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator144.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_hipRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator145.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_kneeRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator146.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_ankleRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator147.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_subtalarRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator148.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_midtarsalRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator149.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_metatarsalRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator150.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_hipRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator151.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_kneeRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator152.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_ankleRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator153.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_subtalarRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator154.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_midtarsalRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator155.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_metatarsalRotInterp.set_fraction }
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part34;
begin
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator156.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO vl5RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator157.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO vl4RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator158.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO vl3RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator159.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO vl2RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator160.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO vl1RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator161.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO vt12RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator162.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO vt11RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator163.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO vt10RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator164.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO vt9RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator165.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO vt8RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator166.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO vt7RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator167.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO vt6RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator168.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO vt5RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator169.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO vt4RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator170.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO vt3RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator171.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO vt2RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator172.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO vt1RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator173.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO vc7RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator174.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO vc6RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator175.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO vc5RotInterp.set_fraction }
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part35;
begin
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator176.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO vc4RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator177.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO vc3RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator178.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO vc2RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator179.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO vc1RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator180.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO skullbaseRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator181.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_eyelid_jointRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator182.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_eyeball_jointRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator183.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_eyebrow_jointRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator184.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_eyelid_jointRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator185.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_eyeball_jointRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator186.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_eyebrow_jointRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator187.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO temporomandibularRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator188.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_sternoclavicularRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator189.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_acromioclavicularRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator190.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_shoulderRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator191.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_elbowRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator192.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_wristRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator193.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_thumb1RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator194.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_thumb2RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator195.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_thumb3RotInterp.set_fraction }
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part36;
begin
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator196.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_index0RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator197.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_index1RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator198.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_index2RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator199.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_index3RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator200.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_middle0RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator201.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_middle1RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator202.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_middle2RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator203.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_middle3RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator204.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_ring0RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator205.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_ring1RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator206.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_ring2RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator207.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_ring3RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator208.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_pinky0RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator209.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_pinky1RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator210.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_pinky2RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator211.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO l_pinky3RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator212.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_sternoclavicularRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator213.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_acromioclavicularRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator214.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_shoulderRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator215.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_elbowRotInterp.set_fraction }
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part37;
begin
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator216.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_wristRotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator217.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_thumb1RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator218.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_thumb2RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator219.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_thumb3RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator220.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_index0RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator221.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_index1RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator222.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_index2RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator223.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_index3RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator224.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_middle0RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator225.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_middle1RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator226.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_middle2RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator227.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_middle3RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator228.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_ring0RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator229.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_ring1RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator230.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_ring2RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator231.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_ring3RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator232.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_pinky0RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator233.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_pinky1RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator234.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_pinky2RotInterp.set_fraction }
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator235.EventSet_fraction);
{ ROUTE KickTimer.fraction_changed TO r_pinky3RotInterp.set_fraction }
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part38;
begin
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator236.EventSet_fraction);
{ Routes from Interpolators to Joe_ model Joints }
{ ROUTE HumanoidRootRotInterp.value_changed TO Joe_HumanoidRoot.set_rotation }
Group15.AddRoute(OrientationInterpolator142.EventValue_changed, HAnimJoint28.FdRotation.EventIn);
{ ROUTE HumanoidRootTransInterp.value_changed TO Joe_HumanoidRoot.set_translation }
Group15.AddRoute(PositionInterpolator143.EventValue_changed, HAnimJoint28.FdTranslation.EventIn);
{ ROUTE sacroiliacRotInterp.value_changed TO Joe_sacroiliac.set_rotation }
Group15.AddRoute(OrientationInterpolator144.EventValue_changed, HAnimJoint37.FdRotation.EventIn);
{ ROUTE l_hipRotInterp.value_changed TO Joe_l_hip.set_rotation }
Group15.AddRoute(OrientationInterpolator145.EventValue_changed, HAnimJoint38.FdRotation.EventIn);
{ ROUTE l_kneeRotInterp.value_changed TO Joe_l_knee.set_rotation }
Group15.AddRoute(OrientationInterpolator146.EventValue_changed, HAnimJoint39.FdRotation.EventIn);
{ ROUTE l_ankleRotInterp.value_changed TO Joe_l_ankle.set_rotation }
Group15.AddRoute(OrientationInterpolator147.EventValue_changed, HAnimJoint40.FdRotation.EventIn);
{ ROUTE l_subtalarRotInterp.value_changed TO Joe_l_subtalar.set_rotation }
Group15.AddRoute(OrientationInterpolator148.EventValue_changed, HAnimJoint41.FdRotation.EventIn);
{ ROUTE l_midtarsalRotInterp.value_changed TO Joe_l_midtarsal.set_rotation }
Group15.AddRoute(OrientationInterpolator149.EventValue_changed, HAnimJoint42.FdRotation.EventIn);
{ ROUTE l_metatarsalRotInterp.value_changed TO Joe_l_metatarsal.set_rotation }
Group15.AddRoute(OrientationInterpolator150.EventValue_changed, HAnimJoint43.FdRotation.EventIn);
{ ROUTE r_hipRotInterp.value_changed TO Joe_r_hip.set_rotation }
Group15.AddRoute(OrientationInterpolator151.EventValue_changed, HAnimJoint44.FdRotation.EventIn);
{ ROUTE r_kneeRotInterp.value_changed TO Joe_r_knee.set_rotation }
Group15.AddRoute(OrientationInterpolator152.EventValue_changed, HAnimJoint45.FdRotation.EventIn);
{ ROUTE r_ankleRotInterp.value_changed TO Joe_r_ankle.set_rotation }
Group15.AddRoute(OrientationInterpolator153.EventValue_changed, HAnimJoint46.FdRotation.EventIn);
{ ROUTE r_subtalarRotInterp.value_changed TO Joe_r_subtalar.set_rotation }
Group15.AddRoute(OrientationInterpolator154.EventValue_changed, HAnimJoint47.FdRotation.EventIn);
{ ROUTE r_midtarsalRotInterp.value_changed TO Joe_r_midtarsal.set_rotation }
Group15.AddRoute(OrientationInterpolator155.EventValue_changed, HAnimJoint48.FdRotation.EventIn);
{ ROUTE r_metatarsalRotInterp.value_changed TO Joe_r_metatarsal.set_rotation }
Group15.AddRoute(OrientationInterpolator156.EventValue_changed, HAnimJoint49.FdRotation.EventIn);
{ ROUTE vl5RotInterp.value_changed TO Joe_vl5.set_rotation }
Group15.AddRoute(OrientationInterpolator157.EventValue_changed, HAnimJoint50.FdRotation.EventIn);
{ ROUTE vl4RotInterp.value_changed TO Joe_vl4.set_rotation }
Group15.AddRoute(OrientationInterpolator158.EventValue_changed, HAnimJoint51.FdRotation.EventIn);
{ ROUTE vl3RotInterp.value_changed TO Joe_vl3.set_rotation }
Group15.AddRoute(OrientationInterpolator159.EventValue_changed, HAnimJoint52.FdRotation.EventIn);
{ ROUTE vl2RotInterp.value_changed TO Joe_vl2.set_rotation }
Group15.AddRoute(OrientationInterpolator160.EventValue_changed, HAnimJoint53.FdRotation.EventIn);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part39;
begin
{ ROUTE vl1RotInterp.value_changed TO Joe_vl1.set_rotation }
Group15.AddRoute(OrientationInterpolator161.EventValue_changed, HAnimJoint54.FdRotation.EventIn);
{ ROUTE vt12RotInterp.value_changed TO Joe_vt12.set_rotation }
Group15.AddRoute(OrientationInterpolator162.EventValue_changed, HAnimJoint55.FdRotation.EventIn);
{ ROUTE vt11RotInterp.value_changed TO Joe_vt11.set_rotation }
Group15.AddRoute(OrientationInterpolator163.EventValue_changed, HAnimJoint56.FdRotation.EventIn);
{ ROUTE vt10RotInterp.value_changed TO Joe_vt10.set_rotation }
Group15.AddRoute(OrientationInterpolator164.EventValue_changed, HAnimJoint57.FdRotation.EventIn);
{ ROUTE vt9RotInterp.value_changed TO Joe_vt9.set_rotation }
Group15.AddRoute(OrientationInterpolator165.EventValue_changed, HAnimJoint58.FdRotation.EventIn);
{ ROUTE vt8RotInterp.value_changed TO Joe_vt8.set_rotation }
Group15.AddRoute(OrientationInterpolator166.EventValue_changed, HAnimJoint59.FdRotation.EventIn);
{ ROUTE vt7RotInterp.value_changed TO Joe_vt7.set_rotation }
Group15.AddRoute(OrientationInterpolator167.EventValue_changed, HAnimJoint60.FdRotation.EventIn);
{ ROUTE vt6RotInterp.value_changed TO Joe_vt6.set_rotation }
Group15.AddRoute(OrientationInterpolator168.EventValue_changed, HAnimJoint61.FdRotation.EventIn);
{ ROUTE vt5RotInterp.value_changed TO Joe_vt5.set_rotation }
Group15.AddRoute(OrientationInterpolator169.EventValue_changed, HAnimJoint62.FdRotation.EventIn);
{ ROUTE vt4RotInterp.value_changed TO Joe_vt4.set_rotation }
Group15.AddRoute(OrientationInterpolator170.EventValue_changed, HAnimJoint63.FdRotation.EventIn);
{ ROUTE vt3RotInterp.value_changed TO Joe_vt3.set_rotation }
Group15.AddRoute(OrientationInterpolator171.EventValue_changed, HAnimJoint64.FdRotation.EventIn);
{ ROUTE vt2RotInterp.value_changed TO Joe_vt2.set_rotation }
Group15.AddRoute(OrientationInterpolator172.EventValue_changed, HAnimJoint65.FdRotation.EventIn);
{ ROUTE vt1RotInterp.value_changed TO Joe_vt1.set_rotation }
Group15.AddRoute(OrientationInterpolator173.EventValue_changed, HAnimJoint66.FdRotation.EventIn);
{ ROUTE vc7RotInterp.value_changed TO Joe_vc7.set_rotation }
Group15.AddRoute(OrientationInterpolator174.EventValue_changed, HAnimJoint67.FdRotation.EventIn);
{ ROUTE vc6RotInterp.value_changed TO Joe_vc6.set_rotation }
Group15.AddRoute(OrientationInterpolator175.EventValue_changed, HAnimJoint68.FdRotation.EventIn);
{ ROUTE vc5RotInterp.value_changed TO Joe_vc5.set_rotation }
Group15.AddRoute(OrientationInterpolator176.EventValue_changed, HAnimJoint69.FdRotation.EventIn);
{ ROUTE vc4RotInterp.value_changed TO Joe_vc4.set_rotation }
Group15.AddRoute(OrientationInterpolator177.EventValue_changed, HAnimJoint70.FdRotation.EventIn);
{ ROUTE vc3RotInterp.value_changed TO Joe_vc3.set_rotation }
Group15.AddRoute(OrientationInterpolator178.EventValue_changed, HAnimJoint71.FdRotation.EventIn);
{ ROUTE vc2RotInterp.value_changed TO Joe_vc2.set_rotation }
Group15.AddRoute(OrientationInterpolator179.EventValue_changed, HAnimJoint72.FdRotation.EventIn);
{ ROUTE vc1RotInterp.value_changed TO Joe_vc1.set_rotation }
Group15.AddRoute(OrientationInterpolator180.EventValue_changed, HAnimJoint73.FdRotation.EventIn);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part40;
begin
{ ROUTE skullbaseRotInterp.value_changed TO Joe_skullbase.set_rotation }
Group15.AddRoute(OrientationInterpolator181.EventValue_changed, HAnimJoint74.FdRotation.EventIn);
{ ROUTE l_eyelid_jointRotInterp.value_changed TO Joe_l_eyelid_joint.set_rotation }
Group15.AddRoute(OrientationInterpolator182.EventValue_changed, HAnimJoint76.FdRotation.EventIn);
{ ROUTE l_eyeball_jointRotInterp.value_changed TO Joe_l_eyeball_joint.set_rotation }
Group15.AddRoute(OrientationInterpolator183.EventValue_changed, HAnimJoint77.FdRotation.EventIn);
{ ROUTE l_eyebrow_jointRotInterp.value_changed TO Joe_l_eyebrow_joint.set_rotation }
Group15.AddRoute(OrientationInterpolator184.EventValue_changed, HAnimJoint78.FdRotation.EventIn);
{ ROUTE r_eyelid_jointRotInterp.value_changed TO Joe_r_eyelid_joint.set_rotation }
Group15.AddRoute(OrientationInterpolator185.EventValue_changed, HAnimJoint79.FdRotation.EventIn);
{ ROUTE r_eyeball_jointRotInterp.value_changed TO Joe_r_eyeball_joint.set_rotation }
Group15.AddRoute(OrientationInterpolator186.EventValue_changed, HAnimJoint80.FdRotation.EventIn);
{ ROUTE r_eyebrow_jointRotInterp.value_changed TO Joe_r_eyebrow_joint.set_rotation }
Group15.AddRoute(OrientationInterpolator187.EventValue_changed, HAnimJoint81.FdRotation.EventIn);
{ ROUTE temporomandibularRotInterp.value_changed TO Joe_temporomandibular.set_rotation }
Group15.AddRoute(OrientationInterpolator188.EventValue_changed, HAnimJoint82.FdRotation.EventIn);
{ ROUTE l_sternoclavicularRotInterp.value_changed TO Joe_l_sternoclavicular.set_rotation }
Group15.AddRoute(OrientationInterpolator189.EventValue_changed, HAnimJoint83.FdRotation.EventIn);
{ ROUTE l_acromioclavicularRotInterp.value_changed TO Joe_l_acromioclavicular.set_rotation }
Group15.AddRoute(OrientationInterpolator190.EventValue_changed, HAnimJoint84.FdRotation.EventIn);
{ ROUTE l_shoulderRotInterp.value_changed TO Joe_l_shoulder.set_rotation }
Group15.AddRoute(OrientationInterpolator191.EventValue_changed, HAnimJoint85.FdRotation.EventIn);
{ ROUTE l_elbowRotInterp.value_changed TO Joe_l_elbow.set_rotation }
Group15.AddRoute(OrientationInterpolator192.EventValue_changed, HAnimJoint86.FdRotation.EventIn);
{ ROUTE l_wristRotInterp.value_changed TO Joe_l_wrist.set_rotation }
Group15.AddRoute(OrientationInterpolator193.EventValue_changed, HAnimJoint87.FdRotation.EventIn);
{ ROUTE l_thumb1RotInterp.value_changed TO Joe_l_thumb1.set_rotation }
Group15.AddRoute(OrientationInterpolator194.EventValue_changed, HAnimJoint88.FdRotation.EventIn);
{ ROUTE l_thumb2RotInterp.value_changed TO Joe_l_thumb2.set_rotation }
Group15.AddRoute(OrientationInterpolator195.EventValue_changed, HAnimJoint89.FdRotation.EventIn);
{ ROUTE l_thumb3RotInterp.value_changed TO Joe_l_thumb3.set_rotation }
Group15.AddRoute(OrientationInterpolator196.EventValue_changed, HAnimJoint90.FdRotation.EventIn);
{ ROUTE l_index0RotInterp.value_changed TO Joe_l_index0.set_rotation }
Group15.AddRoute(OrientationInterpolator197.EventValue_changed, HAnimJoint91.FdRotation.EventIn);
{ ROUTE l_index1RotInterp.value_changed TO Joe_l_index1.set_rotation }
Group15.AddRoute(OrientationInterpolator198.EventValue_changed, HAnimJoint92.FdRotation.EventIn);
{ ROUTE l_index2RotInterp.value_changed TO Joe_l_index2.set_rotation }
Group15.AddRoute(OrientationInterpolator199.EventValue_changed, HAnimJoint93.FdRotation.EventIn);
{ ROUTE l_index3RotInterp.value_changed TO Joe_l_index3.set_rotation }
Group15.AddRoute(OrientationInterpolator200.EventValue_changed, HAnimJoint94.FdRotation.EventIn);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part41;
begin
{ ROUTE l_middle0RotInterp.value_changed TO Joe_l_middle0.set_rotation }
Group15.AddRoute(OrientationInterpolator201.EventValue_changed, HAnimJoint95.FdRotation.EventIn);
{ ROUTE l_middle1RotInterp.value_changed TO Joe_l_middle1.set_rotation }
Group15.AddRoute(OrientationInterpolator202.EventValue_changed, HAnimJoint96.FdRotation.EventIn);
{ ROUTE l_middle2RotInterp.value_changed TO Joe_l_middle2.set_rotation }
Group15.AddRoute(OrientationInterpolator203.EventValue_changed, HAnimJoint97.FdRotation.EventIn);
{ ROUTE l_middle3RotInterp.value_changed TO Joe_l_middle3.set_rotation }
Group15.AddRoute(OrientationInterpolator204.EventValue_changed, HAnimJoint98.FdRotation.EventIn);
{ ROUTE l_ring0RotInterp.value_changed TO Joe_l_ring0.set_rotation }
Group15.AddRoute(OrientationInterpolator205.EventValue_changed, HAnimJoint99.FdRotation.EventIn);
{ ROUTE l_ring1RotInterp.value_changed TO Joe_l_ring1.set_rotation }
Group15.AddRoute(OrientationInterpolator206.EventValue_changed, HAnimJoint100.FdRotation.EventIn);
{ ROUTE l_ring2RotInterp.value_changed TO Joe_l_ring2.set_rotation }
Group15.AddRoute(OrientationInterpolator207.EventValue_changed, HAnimJoint101.FdRotation.EventIn);
{ ROUTE l_ring3RotInterp.value_changed TO Joe_l_ring3.set_rotation }
Group15.AddRoute(OrientationInterpolator208.EventValue_changed, HAnimJoint102.FdRotation.EventIn);
{ ROUTE l_pinky0RotInterp.value_changed TO Joe_l_pinky0.set_rotation }
Group15.AddRoute(OrientationInterpolator209.EventValue_changed, HAnimJoint103.FdRotation.EventIn);
{ ROUTE l_pinky1RotInterp.value_changed TO Joe_l_pinky1.set_rotation }
Group15.AddRoute(OrientationInterpolator210.EventValue_changed, HAnimJoint104.FdRotation.EventIn);
{ ROUTE l_pinky2RotInterp.value_changed TO Joe_l_pinky2.set_rotation }
Group15.AddRoute(OrientationInterpolator211.EventValue_changed, HAnimJoint105.FdRotation.EventIn);
{ ROUTE l_pinky3RotInterp.value_changed TO Joe_l_pinky3.set_rotation }
Group15.AddRoute(OrientationInterpolator212.EventValue_changed, HAnimJoint106.FdRotation.EventIn);
{ ROUTE r_sternoclavicularRotInterp.value_changed TO Joe_r_sternoclavicular.set_rotation }
Group15.AddRoute(OrientationInterpolator213.EventValue_changed, HAnimJoint107.FdRotation.EventIn);
{ ROUTE r_acromioclavicularRotInterp.value_changed TO Joe_r_acromioclavicular.set_rotation }
Group15.AddRoute(OrientationInterpolator214.EventValue_changed, HAnimJoint108.FdRotation.EventIn);
{ ROUTE r_shoulderRotInterp.value_changed TO Joe_r_shoulder.set_rotation }
Group15.AddRoute(OrientationInterpolator215.EventValue_changed, HAnimJoint109.FdRotation.EventIn);
{ ROUTE r_elbowRotInterp.value_changed TO Joe_r_elbow.set_rotation }
Group15.AddRoute(OrientationInterpolator216.EventValue_changed, HAnimJoint110.FdRotation.EventIn);
{ ROUTE r_wristRotInterp.value_changed TO Joe_r_wrist.set_rotation }
Group15.AddRoute(OrientationInterpolator217.EventValue_changed, HAnimJoint111.FdRotation.EventIn);
{ ROUTE r_thumb1RotInterp.value_changed TO Joe_r_thumb1.set_rotation }
Group15.AddRoute(OrientationInterpolator218.EventValue_changed, HAnimJoint112.FdRotation.EventIn);
{ ROUTE r_thumb2RotInterp.value_changed TO Joe_r_thumb2.set_rotation }
Group15.AddRoute(OrientationInterpolator219.EventValue_changed, HAnimJoint113.FdRotation.EventIn);
{ ROUTE r_thumb3RotInterp.value_changed TO Joe_r_thumb3.set_rotation }
Group15.AddRoute(OrientationInterpolator220.EventValue_changed, HAnimJoint114.FdRotation.EventIn);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part42;
begin
{ ROUTE r_index0RotInterp.value_changed TO Joe_r_index0.set_rotation }
Group15.AddRoute(OrientationInterpolator221.EventValue_changed, HAnimJoint115.FdRotation.EventIn);
{ ROUTE r_index1RotInterp.value_changed TO Joe_r_index1.set_rotation }
Group15.AddRoute(OrientationInterpolator222.EventValue_changed, HAnimJoint116.FdRotation.EventIn);
{ ROUTE r_index2RotInterp.value_changed TO Joe_r_index2.set_rotation }
Group15.AddRoute(OrientationInterpolator223.EventValue_changed, HAnimJoint117.FdRotation.EventIn);
{ ROUTE r_index3RotInterp.value_changed TO Joe_r_index3.set_rotation }
Group15.AddRoute(OrientationInterpolator224.EventValue_changed, HAnimJoint118.FdRotation.EventIn);
{ ROUTE r_middle0RotInterp.value_changed TO Joe_r_middle0.set_rotation }
Group15.AddRoute(OrientationInterpolator225.EventValue_changed, HAnimJoint119.FdRotation.EventIn);
{ ROUTE r_middle1RotInterp.value_changed TO Joe_r_middle1.set_rotation }
Group15.AddRoute(OrientationInterpolator226.EventValue_changed, HAnimJoint120.FdRotation.EventIn);
{ ROUTE r_middle2RotInterp.value_changed TO Joe_r_middle2.set_rotation }
Group15.AddRoute(OrientationInterpolator227.EventValue_changed, HAnimJoint121.FdRotation.EventIn);
{ ROUTE r_middle3RotInterp.value_changed TO Joe_r_middle3.set_rotation }
Group15.AddRoute(OrientationInterpolator228.EventValue_changed, HAnimJoint122.FdRotation.EventIn);
{ ROUTE r_ring0RotInterp.value_changed TO Joe_r_ring0.set_rotation }
Group15.AddRoute(OrientationInterpolator229.EventValue_changed, HAnimJoint123.FdRotation.EventIn);
{ ROUTE r_ring1RotInterp.value_changed TO Joe_r_ring1.set_rotation }
Group15.AddRoute(OrientationInterpolator230.EventValue_changed, HAnimJoint124.FdRotation.EventIn);
{ ROUTE r_ring2RotInterp.value_changed TO Joe_r_ring2.set_rotation }
Group15.AddRoute(OrientationInterpolator231.EventValue_changed, HAnimJoint125.FdRotation.EventIn);
{ ROUTE r_ring3RotInterp.value_changed TO Joe_r_ring3.set_rotation }
Group15.AddRoute(OrientationInterpolator232.EventValue_changed, HAnimJoint126.FdRotation.EventIn);
{ ROUTE r_pinky0RotInterp.value_changed TO Joe_r_pinky0.set_rotation }
Group15.AddRoute(OrientationInterpolator233.EventValue_changed, HAnimJoint127.FdRotation.EventIn);
{ ROUTE r_pinky1RotInterp.value_changed TO Joe_r_pinky1.set_rotation }
Group15.AddRoute(OrientationInterpolator234.EventValue_changed, HAnimJoint128.FdRotation.EventIn);
{ ROUTE r_pinky2RotInterp.value_changed TO Joe_r_pinky2.set_rotation }
Group15.AddRoute(OrientationInterpolator235.EventValue_changed, HAnimJoint129.FdRotation.EventIn);
{ ROUTE r_pinky3RotInterp.value_changed TO Joe_r_pinky3.set_rotation }
Group15.AddRoute(OrientationInterpolator236.EventValue_changed, HAnimJoint130.FdRotation.EventIn);
Group427 := TGroupNode.Create;
Group427.X3DName := 'DisplacersAnimationGroup';
{ TimeSensor DEF='skull_tipTestTimer' cycleInterval='5.73' loop='true' enabled='true'></TimeSensor }
ScalarInterpolator428 := TScalarInterpolatorNode.Create;
ScalarInterpolator428.X3DName := 'skull_tipTest';
ScalarInterpolator428.SetKey([0, 0.1, 0.2, 0.35, 0.6, 0.7, 0.85, 0.88, 0.94, 0.97, 1]);
ScalarInterpolator428.SetKeyValue([0, 0, 0, 0, 0.2, 0.4, 1, 0, 1, 0.4, 0]);
Group427.FdChildren.Add(ScalarInterpolator428);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part43;
begin
{ ROUTE KickTimer.fraction_changed TO skull_tipTest.set_fraction }
Group427.AddRoute(TimeSensor141.EventFraction_changed, ScalarInterpolator428.EventSet_fraction);
{ ROUTE skull_tipTest.value_changed TO Joe_skull_tipTest.weight }
Group427.AddRoute(ScalarInterpolator428.EventValue_changed, HAnimDisplacer75.FWeight);
Group15.FdChildren.Add(Group427);
Group431 := TGroupNode.Create;
Group431.X3DName := 'skintexturetransform_animation';
ScalarInterpolator432 := TScalarInterpolatorNode.Create;
ScalarInterpolator432.X3DName := 'skinTexTransTest';
ScalarInterpolator432.SetKey([0, 0.2, 0.4, 0.5, 0.6, 0.7, 0.8, 1]);
ScalarInterpolator432.SetKeyValue([0, 0, 0, 0, 0, 1, 2, 0]);
Group431.FdChildren.Add(ScalarInterpolator432);
{ ROUTE KickTimer.fraction_changed TO skinTexTransTest.set_fraction }
Group431.AddRoute(TimeSensor141.EventFraction_changed, ScalarInterpolator432.EventSet_fraction);
{ ROUTE skinTexTransTest.value_changed TO kicktextrans.rotation }
Group431.AddRoute(ScalarInterpolator432.EventValue_changed, TextureTransform135.rotation);
Group15.FdChildren.Add(Group431);
Group435 := TGroupNode.Create;
Transform436 := TTransformNode.Create;
Transform436.X3DName := 'SBall';
Transform436.Rotation := Vector4(0.7, 0, 0.7, 0.1);
Transform436.Scale := Vector3(0.23, 0.23, 0.23);
Transform436.Translation := Vector3(-0.916, 0.37, -0.92);
Shape437 := TShapeNode.Create;
Shape437.X3DName := 'ball_Shape';
Appearance438 := TAppearanceNode.Create;
Appearance438.X3DName := 'ball_Appearance';
Material439 := TMaterialNode.Create;
Material439.X3DName := 'ball_Material';
Material439.DiffuseColor := Vector3(0.3, 0.3, 1);
Material439.EmissiveColor := Vector3(0.3, 0.3, 0.33);
Appearance438.Material := Material439;
Appearance438.Texture := ImageTexture134;
Shape437.Appearance := Appearance438;
IndexedFaceSet441 := TIndexedFaceSetNode.Create;
IndexedFaceSet441.X3DName := 'ball_IndexedFaceSet';
IndexedFaceSet441.SetCoordIndex([0, 1, 2, -1, 0, 2, 3, -1, 0, 3, 4, -1, 0, 4, 5, -1, 0, 5, 6, -1, 0, 6, 7, -1, 0, 7, 8, -1, 0, 8, 9, -1, 0, 9, 10, -1, 0, 10, 11, -1, 0, 11, 12, -1, 0, 12, 1, -1, 1, 13, 14, -1, 1, 14, 2, -1, 2, 14, 15, -1, 2, 15, 3, -1, 3, 15, 16, -1, 3, 16, 4, -1, 4, 16, 17, -1, 4, 17, 5, -1, 5, 17, 18, -1, 5, 18, 6, -1, 6, 18, 19, -1, 6, 19, 7, -1, 7, 19, 20, -1, 7, 20, 8, -1, 8, 20, 21, -1, 8, 21, 9, -1, 9, 21, 22, -1, 9, 22, 10, -1, 10, 22, 23, -1, 10, 23, 11, -1, 11, 23, 24, -1, 11, 24, 12, -1, 12, 24, 13, -1, 12, 13, 1, -1, 13, 25, 26, -1, 13, 26, 14, -1, 14, 26, 27, -1, 14, 27, 15, -1, 15, 27, 28, -1, 15, 28, 16, -1, 16, 28, 29, -1, 16, 29, 17, -1, 17, 29, 30, -1, 17, 30, 18, -1, 18, 30, 31, -1, 18, 31, 19, -1, 19, 31, 32, -1, 19, 32, 20, -1, 20, 32, 33, -1, 20, 33, 21, -1, 21, 33, 34, -1, 21, 34, 22, -1, 22, 34, 35, -1, 22, 35, 23, -1, 23, 35, 36, -1, 23, 36, 24, -1, 24, 36, 25, -1, 24, 25, 13, -1, 25, 37, 38, -1, 25, 38, 26, -1, 26, 38, 39, -1, 26, 39, 27, -1, 27, 39, 40, -1, 27, 40, 28, -1, 28, 40, 41, -1, 28, 41, 29, -1, 29, 41, 42, -1, 29, 42, 30, -1, 30, 42, 43, -1, 30, 43, 31, -1, 31, 43, 44, -1, 31, 44, 32, -1, 32, 44, 45, -1, 32, 45, 33, -1, 33, 45, 46, -1, 33, 46, 34, -1, 34, 46, 47, -1, 34, 47, 35, -1, 35, 47, 48, -1, 35, 48, 36, -1, 36, 48, 37, -1, 36, 37, 25, -1, 37, 49, 50, -1, 37, 50, 38, -1, 38, 50, 51, -1, 38, 51, 39, -1, 39, 51, 52, -1, 39, 52, 40, -1, 40, 52, 53, -1, 40, 53, 41, -1, 41, 53, 54, -1, 41, 54, 42, -1, 42, 54, 55, -1, 42, 55, 43, -1, 43, 55, 56, -1, 43, 56, 44, -1, 44, 56, 57, -1, 44, 57, 45, -1, 45, 57, 58, -1, 45, 58, 46, -1, 46, 58, 59, -1, 46, 59, 47, -1, 47, 59, 60, -1, 47, 60, 48, -1, 48, 60, 49, -1, 48, 49, 37, -1, 61, 50, 49, -1, 61, 51, 50, -1, 61, 52, 51, -1, 61, 53, 52, -1, 61, 54, 53, -1, 61, 55, 54, -1, 61, 56, 55, -1, 61, 57, 56, -1, 61, 58, 57, -1, 61, 59, 58, -1, 61, 60, 59, -1, 61, 49, 60, -1]);
Coordinate442 := TCoordinateNode.Create;
Coordinate442.X3DName := 'Ball_Coordinates';
Coordinate442.SetPoint([Vector3(0, 0.4675, 0), Vector3(0, 0.4049, -0.2338), Vector3(-0.1169, 0.4049, -0.2024), Vector3(-0.2024, 0.4049, -0.1169), Vector3(-0.2338, 0.4049, 0), Vector3(-0.2024, 0.4049, 0.1169), Vector3(-0.1169, 0.4049, 0.2024), Vector3(0, 0.4049, 0.2338), Vector3(0.1169, 0.4049, 0.2024), Vector3(0.2024, 0.4049, 0.1169), Vector3(0.2338, 0.4049, 0), Vector3(0.2024, 0.4049, -0.1169), Vector3(0.1169, 0.4049, -0.2024), Vector3(0, 0.2338, -0.4049), Vector3(-0.2024, 0.2338, -0.3506), Vector3(-0.3506, 0.2338, -0.2024), Vector3(-0.4049, 0.2338, 0), Vector3(-0.3506, 0.2338, 0.2024), Vector3(-0.2024, 0.2338, 0.3506), Vector3(0, 0.2338, 0.4049), Vector3(0.2024, 0.2338, 0.3506), Vector3(0.3506, 0.2338, 0.2024), Vector3(0.4049, 0.2338, 0), Vector3(0.3506, 0.2338, -0.2024), Vector3(0.2024, 0.2338, -0.3506), Vector3(0, 0, -0.4675), Vector3(-0.2338, 0, -0.4049), Vector3(-0.4049, 0, -0.2338), Vector3(-0.4675, 0, 0), Vector3(-0.4049, 0, 0.2338), Vector3(-0.2338, 0, 0.4049), Vector3(0, 0, 0.4675), Vector3(0.2338, 0, 0.4049), Vector3(0.4049, 0, 0.2338), Vector3(0.4675, 0, 0), Vector3(0.4049, 0, -0.2338), Vector3(0.2338, 0, -0.4049), Vector3(0, -0.2338, -0.4049), Vector3(-0.2024, -0.2338, -0.3506), Vector3(-0.3506, -0.2338, -0.2024), Vector3(-0.4049, -0.2338, 0), Vector3(-0.3506, -0.2338, 0.2024), Vector3(-0.2024, -0.2338, 0.3506), Vector3(0, -0.2338, 0.4049), Vector3(0.2024, -0.2338, 0.3506), Vector3(0.3506, -0.2338, 0.2024), Vector3(0.4049, -0.2338, 0), Vector3(0.3506, -0.2338, -0.2024), Vector3(0.2024, -0.2338, -0.3506), Vector3(0, -0.4049, -0.2338), Vector3(-0.1169, -0.4049, -0.2024), Vector3(-0.2024, -0.4049, -0.1169), Vector3(-0.2338, -0.4049, 0), Vector3(-0.2024, -0.4049, 0.1169), Vector3(-0.1169, -0.4049, 0.2024), Vector3(0, -0.4049, 0.2338), Vector3(0.1169, -0.4049, 0.2024), Vector3(0.2024, -0.4049, 0.1169), Vector3(0.2338, -0.4049, 0), Vector3(0.2024, -0.4049, -0.1169), Vector3(0.1169, -0.4049, -0.2024), Vector3(0, -0.4675, 0)]);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part44;
begin
IndexedFaceSet441.Coord := Coordinate442;
Shape437.Geometry := IndexedFaceSet441;
Transform436.FdChildren.Add(Shape437);
Viewpoint443 := TViewpointNode.Create;
Viewpoint443.X3DName := 'ballView_1';
Viewpoint443.Description := 'Ball View';
Transform436.FdChildren.Add(Viewpoint443);
Group435.FdChildren.Add(Transform436);
{ Ball Animation interpolators }
PositionInterpolator444 := TPositionInterpolatorNode.Create;
PositionInterpolator444.X3DName := 'ballTransInterp';
PositionInterpolator444.SetKey([0, 0.4, 0.409, 1]);
PositionInterpolator444.SetKeyValue([Vector3(-1, 0.4, -1), Vector3(0, 0.07, 0), Vector3(0.05, 0.06, 0.05), Vector3(2, 4, 10)]);
Group435.FdChildren.Add(PositionInterpolator444);
OrientationInterpolator445 := TOrientationInterpolatorNode.Create;
OrientationInterpolator445.X3DName := 'ballRotInterp';
OrientationInterpolator445.SetKey([0, 0.4, 0.41, 0.71, 1]);
OrientationInterpolator445.SetKeyValue([Vector4(1, 0, 1, 0.25), Vector4(-1, 0, -1, 1.35), Vector4(-1, 1, -1, 3.35), Vector4(-1, 0.2, -1, 3), Vector4(-1, 0.2, -1, 3)]);
Group435.FdChildren.Add(OrientationInterpolator445);
{ Ball Animation Routes }
{ ROUTE KickTimer.fraction_changed TO ballTransInterp.set_fraction }
Group435.AddRoute(TimeSensor141.EventFraction_changed, PositionInterpolator444.EventSet_fraction);
{ ROUTE ballTransInterp.value_changed TO SBall.set_translation }
Group435.AddRoute(PositionInterpolator444.EventValue_changed, Transform436.FdTranslation.EventIn);
{ ROUTE KickTimer.fraction_changed TO ballRotInterp.set_fraction }
Group435.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator445.EventSet_fraction);
{ ROUTE ballRotInterp.value_changed TO SBall.set_rotation }
Group435.AddRoute(OrientationInterpolator445.EventValue_changed, Transform436.FdRotation.EventIn);
Group15.FdChildren.Add(Group435);
Group450 := TGroupNode.Create;
Transform451 := TTransformNode.Create;
Transform451.Scale := Vector3(0.2, 0.2, 0.2);
Transform451.FdChildren.Add(Shape33);
Group450.FdChildren.Add(Transform451);
Transform453 := TTransformNode.Create;
Transform453.X3DName := 'Circle0';
Transform453.Scale := Vector3(1.175, 1, 1.175);
Shape454 := TShapeNode.Create;
Shape454.X3DName := 'circle_Shape';
Appearance455 := TAppearanceNode.Create;
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part45;
begin
Appearance455.X3DName := 'circle0_Appearance';
Material456 := TMaterialNode.Create;
Material456.X3DName := 'circle0_Material';
Material456.AmbientIntensity := 0.9;
Material456.DiffuseColor := Vector3(0.9, 0, 0.7);
Material456.EmissiveColor := Vector3(0.425, 0.486, 1);
Appearance455.Material := Material456;
Shape454.Appearance := Appearance455;
IndexedLineSet457 := TIndexedLineSetNode.Create;
IndexedLineSet457.X3DName := 'Orbit1';
IndexedLineSet457.SetCoordIndex([0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, -1]);
Coordinate458 := TCoordinateNode.Create;
Coordinate458.X3DName := 'circle_Coordinates';
Coordinate458.SetPoint([Vector3(1, 0, 0), Vector3(0.995, 0, -0.105), Vector3(0.979, 0, -0.208), Vector3(0.951, 0, -0.309), Vector3(0.914, 0, -0.407), Vector3(0.866, 0, -0.5), Vector3(0.809, 0, -0.588), Vector3(0.743, 0, -0.669), Vector3(0.669, 0, -0.743), Vector3(0.588, 0, -0.809), Vector3(0.5, 0, -0.866), Vector3(0.407, 0, -0.914), Vector3(0.309, 0, -0.951), Vector3(0.208, 0, -0.978), Vector3(0.105, 0, -0.995), Vector3(0, 0, -1), Vector3(-0.105, 0, -0.994522), Vector3(-0.208, 0, -0.978), Vector3(-0.309, 0, -0.951), Vector3(-0.407, 0, -0.914), Vector3(-0.5, 0, -0.866), Vector3(-0.588, 0, -0.809), Vector3(-0.669, 0, -0.743), Vector3(-0.743, 0, -0.669), Vector3(-0.809, 0, -0.588), Vector3(-0.866, 0, -0.5), Vector3(-0.914, 0, -0.407), Vector3(-0.951, 0, -0.309), Vector3(-0.978, 0, -0.208), Vector3(-0.995, 0, -0.105), Vector3(-1, 0, 0), Vector3(-0.995, 0, 0.105), Vector3(-0.978, 0, 0.208), Vector3(-0.951, 0, 0.309), Vector3(-0.914, 0, 0.407), Vector3(-0.866, 0, 0.5), Vector3(-0.809, 0, 0.588), Vector3(-0.743, 0, 0.669), Vector3(-0.669, 0, 0.743), Vector3(-0.588, 0, 0.809), Vector3(-0.5, 0, 0.866), Vector3(-0.407, 0, 0.914), Vector3(-0.309, 0, 0.951), Vector3(-0.208, 0, 0.978), Vector3(-0.105, 0, 0.995), Vector3(0, 0, 1), Vector3(0.105, 0, 0.995), Vector3(0.208, 0, 0.978), Vector3(0.309, 0, 0.951), Vector3(0.407, 0, 0.914), Vector3(0.5, 0, 0.866), Vector3(0.588, 0, 0.809), Vector3(0.669, 0, 0.743), Vector3(0.743, 0, 0.669), Vector3(0.809, 0, 0.588), Vector3(0.866, 0, 0.5), Vector3(0.914, 0, 0.407), Vector3(0.951, 0, 0.309), Vector3(0.978, 0, 0.208), Vector3(0.995, 0, 0.104), Vector3(1, 0, 0)]);
IndexedLineSet457.Coord := Coordinate458;
Shape454.Geometry := IndexedLineSet457;
Transform453.FdChildren.Add(Shape454);
Group450.FdChildren.Add(Transform453);
Transform459 := TTransformNode.Create;
Transform459.X3DName := 'Circle1';
Transform459.Scale := Vector3(0.5, 1, 0.5);
Shape460 := TShapeNode.Create;
Shape460.X3DName := 'circle1_Shape';
Appearance461 := TAppearanceNode.Create;
Appearance461.X3DName := 'circle1_Appearance';
Material462 := TMaterialNode.Create;
Material462.X3DName := 'circle1_Material';
Material462.DiffuseColor := Vector3(0.9, 0, 0.7);
Material462.EmissiveColor := Vector3(0.424956, 0.483976, 1);
Appearance461.Material := Material462;
Shape460.Appearance := Appearance461;
Shape460.Geometry := IndexedLineSet457;
Transform459.FdChildren.Add(Shape460);
Group450.FdChildren.Add(Transform459);
Transform464 := TTransformNode.Create;
Transform464.X3DName := 'Circle2';
Transform464.Scale := Vector3(0.25, 1, 0.25);
Shape465 := TShapeNode.Create;
Shape465.X3DName := 'circle2_Shape';
Appearance466 := TAppearanceNode.Create;
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part46;
begin
Appearance466.X3DName := 'circle2_Appearance';
Material467 := TMaterialNode.Create;
Material467.X3DName := 'circle2_Material';
Material467.DiffuseColor := Vector3(0.9, 0, 0.7);
Material467.EmissiveColor := Vector3(0.424956, 0.483976, 1);
Appearance466.Material := Material467;
Shape465.Appearance := Appearance466;
Shape465.Geometry := IndexedLineSet457;
Transform464.FdChildren.Add(Shape465);
Group450.FdChildren.Add(Transform464);
Group15.FdChildren.Add(Group450);
X3D0.AddChildren([Group15]);
end;

function CreateJoeSkinTexcoordDisplacerKickUpdate2: TX3DRootNode;
begin
  InitJoeSkinTexcoordDisplacerKickUpdate2Part0;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part1;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part2;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part3;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part4;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part5;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part6;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part7;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part8;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part9;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part10;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part11;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part12;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part13;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part14;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part15;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part16;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part17;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part18;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part19;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part20;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part21;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part22;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part23;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part24;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part25;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part26;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part27;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part28;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part29;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part30;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part31;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part32;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part33;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part34;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part35;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part36;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part37;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part38;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part39;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part40;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part41;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part42;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part43;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part44;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part45;
  InitJoeSkinTexcoordDisplacerKickUpdate2Part46;
  Result := X3D0;
end;

begin
end.
