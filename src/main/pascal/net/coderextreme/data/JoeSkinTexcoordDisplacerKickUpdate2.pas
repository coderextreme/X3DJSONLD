unit JoeSkinTexcoordDisplacerKickUpdate2;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

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
Coordinate139: TCoordinateNode;
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
ImageTexture440: TImageTextureNode;
IndexedFaceSet441: TIndexedFaceSetNode;
Coordinate442: TCoordinateNode;
Viewpoint443: TViewpointNode;
PositionInterpolator444: TPositionInterpolatorNode;
OrientationInterpolator445: TOrientationInterpolatorNode;
Group450: TGroupNode;
Transform451: TTransformNode;
Shape452: TShapeNode;
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
IndexedLineSet463: TIndexedLineSetNode;
Transform464: TTransformNode;
Shape465: TShapeNode;
Appearance466: TAppearanceNode;
Material467: TMaterialNode;
IndexedLineSet468: TIndexedLineSetNode;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
{ BS studio translation from .x3dv by Joe using BS Contact }
X3D0.Components['H-Anim'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'JoeSkinTexcoordDisplacerKick.x3d';
{ METHOD .Meta }
X3D0.Meta['info'] := 'Joe No Reservations 20200709 fix hier20161206 20161111 20160720 20121221 20040109 x3d/hanim';
{ METHOD .Meta }
X3D0.Meta['description'] := 'The Joe model is a Humanoid with textured skin.';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Joe Williams';
{ METHOD .Meta }
X3D0.Meta['created'] := '9 January 2014';
{ METHOD .Meta }
X3D0.Meta['translated'] := '12 January 2017';
{ METHOD .Meta }
X3D0.Meta['modified'] := '09 July 2020';
{ METHOD .Meta }
X3D0.Meta['TODO'] := 'Record information about skin coordinates (found in comment at end of scene) as a structured MetadataSet containing MetadataString nodes';
{ METHOD .Meta }
X3D0.Meta['translators'] := 'Roy Walmsley and Don Brutzman';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/JoeSkinTexcoordDisplacerKick.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group15 := TGroupNode.Create;
WorldInfo16 := TWorldInfoNode.Create;
WorldInfo16.SetInfo(['X3D Humanoid V1 LOA3 skeleton','skin from hanim sites, surface features, and some added points','390 points']);
WorldInfo16.Title := 'X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe';
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(WorldInfo16);
NavigationInfo17 := TNavigationInfoNode.Create;
NavigationInfo17.Headlight := False;
NavigationInfo17.Speed := 2.5;
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(NavigationInfo17);
Background18 := TBackgroundNode.Create;
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Background18);
SpotLight19 := TSpotLightNode.Create;
SpotLight19.AmbientIntensity := 0.7;
SpotLight19.BeamWidth := 1.5;
SpotLight19.Color := Vector3(0.8,0.8,1);
SpotLight19.CutOffAngle := 0.6;
SpotLight19.Direction := Vector3(0,0,0);
SpotLight19.Location := Vector3(0,3,3);
SpotLight19.Radius := 10;
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(SpotLight19);
PointLight20 := TPointLightNode.Create;
PointLight20.AmbientIntensity := 0.7;
PointLight20.Color := Vector3(0.8,0.8,1);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part1;
begin

PointLight20.Location := Vector3(0,10,-7);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(PointLight20);
{ External from the Humanoid viewpoints }
Viewpoint21 := TViewpointNode.Create;
Viewpoint21.CenterOfRotation := Vector3(0,0.85,0);
Viewpoint21.Description := 'Scene_Inclined View';
Viewpoint21.Orientation := Vector4(-0.113,0.993,0.0347,0.671);
Viewpoint21.Position := Vector3(1.62,1.05,3.06);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Viewpoint21);
Viewpoint22 := TViewpointNode.Create;
Viewpoint22.CenterOfRotation := Vector3(0,0.8,0);
Viewpoint22.Description := 'Scene_Front View';
Viewpoint22.Position := Vector3(0,0.8,2.58);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Viewpoint22);
Viewpoint23 := TViewpointNode.Create;
Viewpoint23.CenterOfRotation := Vector3(0,0.8,0);
Viewpoint23.Description := 'Scene_Side View';
Viewpoint23.Orientation := Vector4(0,1,0,1.5708);
Viewpoint23.Position := Vector3(2.6,0.5,0);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Viewpoint23);
Viewpoint24 := TViewpointNode.Create;
Viewpoint24.CenterOfRotation := Vector3(0,1.5,0);
Viewpoint24.Description := 'Scene_Back View';
Viewpoint24.Orientation := Vector4(0,1,0,3.14);
Viewpoint24.Position := Vector3(0,2.5,-3);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Viewpoint24);
Viewpoint25 := TViewpointNode.Create;
Viewpoint25.CenterOfRotation := Vector3(0,1.5,0);
Viewpoint25.Description := 'Scene_Top View';
Viewpoint25.Orientation := Vector4(1,0,0,-1.5708);
Viewpoint25.Position := Vector3(0,3.5,0);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Viewpoint25);
Group26 := TGroupNode.Create;
HAnimHumanoid27 := THAnimHumanoidNode.Create;
HAnimHumanoid27.Version := '2.0';
HAnimJoint28 := THAnimJointNode.Create;
HAnimJoint28.Center := Vector3(0,0.875,0);
HAnimSegment29 := THAnimSegmentNode.Create;
HAnimSite30 := THAnimSiteNode.Create;
Transform31 := TTransformNode.Create;
Transform31.Scale := Vector3(0.175,0.175,0.175);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part2;
begin

Viewpoint32 := TViewpointNode.Create;
Viewpoint32.Description := 'Joe_HAnim Root Coordinate Axes View';
{ METHOD .FdChildren.Add }
Transform31.FdChildren.Add(Viewpoint32);
Shape33 := TShapeNode.Create;
IndexedLineSet34 := TIndexedLineSetNode.Create;
IndexedLineSet34.SetColorIndex([0,1,2]);
IndexedLineSet34.ColorPerVertex := False;
IndexedLineSet34.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1]);
Coordinate35 := TCoordinateNode.Create;
Coordinate35.SetPoint([Vector3(0,0,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1)]);
{ METHOD .Coord }
IndexedLineSet34.Coord := Coordinate35;
Color36 := TColorNode.Create;
Color36.SetColor([Vector3(1,0,0),Vector3(0,0.6,0),Vector3(0,0,1)]);
{ METHOD .Color }
IndexedLineSet34.Color := Color36;
{ METHOD .Geometry }
Shape33.Geometry := IndexedLineSet34;
{ METHOD .FdChildren.Add }
Transform31.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
HAnimSite30.FdChildren.Add(Transform31);
{ METHOD .FdChildren.Add }
HAnimSegment29.FdChildren.Add(HAnimSite30);
{ METHOD .FdChildren.Add }
HAnimJoint28.FdChildren.Add(HAnimSegment29);
HAnimJoint37 := THAnimJointNode.Create;
HAnimJoint37.Center := Vector3(0,0.92,0);
HAnimJoint37.SetSkinCoordIndex([17,19,20,21,22,23,26,27,73,82,89,91,93]);
HAnimJoint37.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]);
HAnimJoint38 := THAnimJointNode.Create;
HAnimJoint38.Center := Vector3(0.1,0.92,0);
HAnimJoint38.SetSkinCoordIndex([89,90,94,95,96,97]);
HAnimJoint38.SetSkinCoordWeight([0.65,1,1,1,1,1]);
HAnimJoint39 := THAnimJointNode.Create;
HAnimJoint39.Center := Vector3(0.115,0.466,0);
HAnimJoint39.SetSkinCoordIndex([334,335,336,337,338,339,340,341]);
HAnimJoint39.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimJoint40 := THAnimJointNode.Create;
HAnimJoint40.Center := Vector3(0.115,0.069,0);
HAnimJoint40.SetSkinCoordIndex([342,343,344,345]);
HAnimJoint40.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint41 := THAnimJointNode.Create;
HAnimJoint41.Center := Vector3(0.115,0.031,0.03);
HAnimJoint41.SetSkinCoordIndex([346,347,348,71]);
HAnimJoint41.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint42 := THAnimJointNode.Create;
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part3;
begin

HAnimJoint42.Center := Vector3(0.115,0.037,0.09);
HAnimJoint42.SetSkinCoordIndex([349,350,351,352]);
HAnimJoint42.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint43 := THAnimJointNode.Create;
HAnimJoint43.Center := Vector3(0.115,0.02,0.122);
HAnimJoint43.SetSkinCoordIndex([353,354,355,356,357,358,359,360,361]);
HAnimJoint43.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint42.FdChildren.Add(HAnimJoint43);
{ METHOD .FdChildren.Add }
HAnimJoint41.FdChildren.Add(HAnimJoint42);
{ METHOD .FdChildren.Add }
HAnimJoint40.FdChildren.Add(HAnimJoint41);
{ METHOD .FdChildren.Add }
HAnimJoint39.FdChildren.Add(HAnimJoint40);
{ METHOD .FdChildren.Add }
HAnimJoint38.FdChildren.Add(HAnimJoint39);
{ METHOD .FdChildren.Add }
HAnimJoint37.FdChildren.Add(HAnimJoint38);
HAnimJoint44 := THAnimJointNode.Create;
HAnimJoint44.Center := Vector3(-0.1,0.92,0);
HAnimJoint44.SetSkinCoordIndex([91,92,98,99,100,101,362,363]);
HAnimJoint44.SetSkinCoordWeight([0.65,1,0.8,1,1,1,0.4,0.8]);
HAnimJoint45 := THAnimJointNode.Create;
HAnimJoint45.Center := Vector3(-0.05,0.466,0);
HAnimJoint45.SetSkinCoordIndex([362,363,364,365,366,367,368,369,98]);
HAnimJoint45.SetSkinCoordWeight([0.6,0.2,1,1,1,1,1,1,0.2]);
HAnimJoint46 := THAnimJointNode.Create;
HAnimJoint46.Center := Vector3(-0.115,0.069,0);
HAnimJoint46.SetSkinCoordIndex([370,371,372,373]);
HAnimJoint46.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint47 := THAnimJointNode.Create;
HAnimJoint47.Center := Vector3(-0.1,0.015,-0.01);
HAnimJoint47.SetSkinCoordIndex([374,375,376]);
HAnimJoint47.SetSkinCoordWeight([1,1,1]);
HAnimJoint48 := THAnimJointNode.Create;
HAnimJoint48.Center := Vector3(-0.115,0.037,0.09);
HAnimJoint48.SetSkinCoordIndex([377,378,379,380]);
HAnimJoint48.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint49 := THAnimJointNode.Create;
HAnimJoint49.Center := Vector3(-0.1,0.01,0.14);
HAnimJoint49.SetSkinCoordIndex([381,382,383,384,385,386,387,388,389]);
HAnimJoint49.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint48.FdChildren.Add(HAnimJoint49);
{ METHOD .FdChildren.Add }
HAnimJoint47.FdChildren.Add(HAnimJoint48);
{ METHOD .FdChildren.Add }
HAnimJoint46.FdChildren.Add(HAnimJoint47);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part4;
begin

{ METHOD .FdChildren.Add }
HAnimJoint45.FdChildren.Add(HAnimJoint46);
{ METHOD .FdChildren.Add }
HAnimJoint44.FdChildren.Add(HAnimJoint45);
{ METHOD .FdChildren.Add }
HAnimJoint37.FdChildren.Add(HAnimJoint44);
{ METHOD .FdChildren.Add }
HAnimJoint28.FdChildren.Add(HAnimJoint37);
HAnimJoint50 := THAnimJointNode.Create;
HAnimJoint50.Center := Vector3(0,1.045,-0.095);
HAnimJoint50.SetSkinCoordIndex([28,76]);
HAnimJoint50.SetSkinCoordWeight([1,1]);
HAnimJoint51 := THAnimJointNode.Create;
HAnimJoint51.Center := Vector3(0,1.068,-0.085);
HAnimJoint52 := THAnimJointNode.Create;
HAnimJoint52.Center := Vector3(0,1.092,-0.0725);
HAnimJoint53 := THAnimJointNode.Create;
HAnimJoint53.Center := Vector3(0,1.12,-0.065);
HAnimJoint53.SetSkinCoordIndex([16,18,25,83,84,85,86,87,88]);
HAnimJoint53.SetSkinCoordWeight([1,1,1,1,1,1,0.7,1,0.8]);
HAnimJoint54 := THAnimJointNode.Create;
HAnimJoint54.Center := Vector3(0,1.1459,-0.0625);
HAnimJoint55 := THAnimJointNode.Create;
HAnimJoint55.Center := Vector3(0,1.179,-0.068);
HAnimJoint56 := THAnimJointNode.Create;
HAnimJoint56.Center := Vector3(0,1.2679,-0.081);
HAnimJoint57 := THAnimJointNode.Create;
HAnimJoint57.Center := Vector3(0,1.242,-0.09);
HAnimJoint57.SetSkinCoordIndex([15]);
HAnimJoint57.SetSkinCoordWeight([1]);
HAnimJoint58 := THAnimJointNode.Create;
HAnimJoint58.Center := Vector3(0,1.268,-0.1);
HAnimJoint58.SetSkinCoordIndex([13,14]);
HAnimJoint58.SetSkinCoordWeight([1,1]);
HAnimJoint59 := THAnimJointNode.Create;
HAnimJoint59.Center := Vector3(0,1.294,-0.11);
HAnimJoint60 := THAnimJointNode.Create;
HAnimJoint60.Center := Vector3(0,1.323,-0.1155);
HAnimJoint61 := THAnimJointNode.Create;
HAnimJoint61.Center := Vector3(0,1.352,-0.12);
HAnimJoint62 := THAnimJointNode.Create;
HAnimJoint62.Center := Vector3(0,1.381,-0.1235);
HAnimJoint63 := THAnimJointNode.Create;
HAnimJoint63.Center := Vector3(0,1.41,-0.1235);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part5;
begin

HAnimJoint63.SetSkinCoordIndex([81]);
HAnimJoint63.SetSkinCoordWeight([1]);
HAnimJoint64 := THAnimJointNode.Create;
HAnimJoint64.Center := Vector3(0,1.438,-0.12);
HAnimJoint65 := THAnimJointNode.Create;
HAnimJoint65.Center := Vector3(0,1.468,-0.105);
HAnimJoint66 := THAnimJointNode.Create;
HAnimJoint66.Center := Vector3(0,1.497,-0.09);
HAnimJoint66.SetSkinCoordIndex([11,24]);
HAnimJoint66.SetSkinCoordWeight([1,1]);
HAnimJoint67 := THAnimJointNode.Create;
HAnimJoint67.Center := Vector3(0,1.525,-0.072);
HAnimJoint67.SetSkinCoordIndex([74,75]);
HAnimJoint67.SetSkinCoordWeight([1,1]);
HAnimJoint68 := THAnimJointNode.Create;
HAnimJoint68.Center := Vector3(0,1.54,-0.05);
HAnimJoint69 := THAnimJointNode.Create;
HAnimJoint69.Center := Vector3(0,1.552,-0.035);
HAnimJoint70 := THAnimJointNode.Create;
HAnimJoint70.Center := Vector3(0,1.5675,-0.0256);
HAnimJoint71 := THAnimJointNode.Create;
HAnimJoint71.Center := Vector3(0,1.58225,-0.0185);
HAnimJoint72 := THAnimJointNode.Create;
HAnimJoint72.Center := Vector3(0,1.595,-0.0175);
HAnimJoint73 := THAnimJointNode.Create;
HAnimJoint73.Center := Vector3(0,1.61,-0.015);
HAnimJoint74 := THAnimJointNode.Create;
HAnimJoint74.Center := Vector3(0,1.63,-0.01);
HAnimJoint74.SetSkinCoordIndex([0,1,2,3,4,5,6,7,8,9]);
HAnimJoint74.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1]);
HAnimDisplacer75 := THAnimDisplacerNode.Create;
HAnimDisplacer75.SetCoordIndex([0,1,2,3,4,5,6,7,8,9]);
HAnimDisplacer75.SetDisplacements([Vector3(0,0.15,0),Vector3(0,0,0.15),Vector3(-0.1,0,0.15),Vector3(0.1,0,0.05),Vector3(0,-0.02,0.05),Vector3(-0.15,0,0),Vector3(-0.05,0,0),Vector3(0.15,0,0),Vector3(0.05,0,0),Vector3(0,0,-0.15)]);
{ METHOD .Displacers }
HAnimJoint74.Displacers := HAnimDisplacer75;
HAnimJoint76 := THAnimJointNode.Create;
HAnimJoint76.Center := Vector3(0.034,1.659,0.06);
{ METHOD .FdChildren.Add }
HAnimJoint74.FdChildren.Add(HAnimJoint76);
HAnimJoint77 := THAnimJointNode.Create;
HAnimJoint77.Center := Vector3(0.034,1.659,0.06);
{ METHOD .FdChildren.Add }
HAnimJoint74.FdChildren.Add(HAnimJoint77);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part6;
begin

HAnimJoint78 := THAnimJointNode.Create;
HAnimJoint78.Center := Vector3(0.034,1.659,0.06);
{ METHOD .FdChildren.Add }
HAnimJoint74.FdChildren.Add(HAnimJoint78);
HAnimJoint79 := THAnimJointNode.Create;
HAnimJoint79.Center := Vector3(-0.034,1.659,0.06);
{ METHOD .FdChildren.Add }
HAnimJoint74.FdChildren.Add(HAnimJoint79);
HAnimJoint80 := THAnimJointNode.Create;
HAnimJoint80.Center := Vector3(-0.034,1.659,0.06);
{ METHOD .FdChildren.Add }
HAnimJoint74.FdChildren.Add(HAnimJoint80);
HAnimJoint81 := THAnimJointNode.Create;
HAnimJoint81.Center := Vector3(-0.034,1.659,0.06);
{ METHOD .FdChildren.Add }
HAnimJoint74.FdChildren.Add(HAnimJoint81);
HAnimJoint82 := THAnimJointNode.Create;
HAnimJoint82.Center := Vector3(0.034,1.659,0.06);
{ METHOD .FdChildren.Add }
HAnimJoint74.FdChildren.Add(HAnimJoint82);
{ METHOD .FdChildren.Add }
HAnimJoint73.FdChildren.Add(HAnimJoint74);
{ METHOD .FdChildren.Add }
HAnimJoint72.FdChildren.Add(HAnimJoint73);
{ METHOD .FdChildren.Add }
HAnimJoint71.FdChildren.Add(HAnimJoint72);
{ METHOD .FdChildren.Add }
HAnimJoint70.FdChildren.Add(HAnimJoint71);
{ METHOD .FdChildren.Add }
HAnimJoint69.FdChildren.Add(HAnimJoint70);
{ METHOD .FdChildren.Add }
HAnimJoint68.FdChildren.Add(HAnimJoint69);
{ METHOD .FdChildren.Add }
HAnimJoint67.FdChildren.Add(HAnimJoint68);
HAnimJoint83 := THAnimJointNode.Create;
HAnimJoint83.Center := Vector3(0.082,1.4488,-0.0353);
HAnimJoint83.SetSkinCoordIndex([12]);
HAnimJoint83.SetSkinCoordWeight([1]);
HAnimJoint84 := THAnimJointNode.Create;
HAnimJoint84.Center := Vector3(0.0962,1.4269,-0.0424);
HAnimJoint84.SetSkinCoordIndex([79]);
HAnimJoint84.SetSkinCoordWeight([1]);
HAnimJoint85 := THAnimJointNode.Create;
HAnimJoint85.Center := Vector3(0.2,1.44,-0.04);
HAnimJoint85.SetSkinCoordIndex([41,42,44,80,102,103,104,105]);
HAnimJoint85.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimJoint86 := THAnimJointNode.Create;
HAnimJoint86.Center := Vector3(0.2,1.1388,-0.04);
HAnimJoint86.SetSkinCoordIndex([45,46,47,109,110,111,112,113,115,116,117,118]);
HAnimJoint86.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint87 := THAnimJointNode.Create;
HAnimJoint87.Center := Vector3(0.2,0.87,-0.04);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part7;
begin

HAnimJoint87.SetSkinCoordIndex([119,120,121,122,123,124,125,126]);
HAnimJoint87.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimJoint88 := THAnimJointNode.Create;
HAnimJoint88.Center := Vector3(0.1924,0.8472,-0.0534);
HAnimJoint88.SetSkinCoordIndex([127,128]);
HAnimJoint88.SetSkinCoordWeight([1,1]);
HAnimJoint89 := THAnimJointNode.Create;
HAnimJoint89.Center := Vector3(0.1951,0.8226,0.0246);
HAnimJoint89.SetSkinCoordIndex([138,139,140,141,142,143]);
HAnimJoint89.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1]);
HAnimJoint90 := THAnimJointNode.Create;
HAnimJoint90.Center := Vector3(0.1955,0.8159,0.0464);
HAnimJoint90.SetSkinCoordIndex([144,145,146,147,148,149,150,151,152]);
HAnimJoint90.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint89.FdChildren.Add(HAnimJoint90);
{ METHOD .FdChildren.Add }
HAnimJoint88.FdChildren.Add(HAnimJoint89);
{ METHOD .FdChildren.Add }
HAnimJoint87.FdChildren.Add(HAnimJoint88);
HAnimJoint91 := THAnimJointNode.Create;
HAnimJoint91.Center := Vector3(0.1983,0.8024,-0.028);
HAnimJoint91.SetSkinCoordIndex([129,130]);
HAnimJoint91.SetSkinCoordWeight([1,1]);
HAnimJoint92 := THAnimJointNode.Create;
HAnimJoint92.Center := Vector3(0.1983,0.7815,-0.028);
HAnimJoint92.SetSkinCoordIndex([138,139,140,153,154,155,163]);
HAnimJoint92.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint93 := THAnimJointNode.Create;
HAnimJoint93.Center := Vector3(0.2017,0.7363,-0.0248);
HAnimJoint93.SetSkinCoordIndex([166,167,168,169]);
HAnimJoint93.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint94 := THAnimJointNode.Create;
HAnimJoint94.Center := Vector3(0.2028,0.7139,-0.0236);
HAnimJoint94.SetSkinCoordIndex([170,171,172,173,174,175,176,177,178]);
HAnimJoint94.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint93.FdChildren.Add(HAnimJoint94);
{ METHOD .FdChildren.Add }
HAnimJoint92.FdChildren.Add(HAnimJoint93);
{ METHOD .FdChildren.Add }
HAnimJoint91.FdChildren.Add(HAnimJoint92);
{ METHOD .FdChildren.Add }
HAnimJoint87.FdChildren.Add(HAnimJoint91);
HAnimJoint95 := THAnimJointNode.Create;
HAnimJoint95.Center := Vector3(0.1987,0.8029,-0.053);
HAnimJoint95.SetSkinCoordIndex([131,132]);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part8;
begin

HAnimJoint95.SetSkinCoordWeight([1,1]);
HAnimJoint96 := THAnimJointNode.Create;
HAnimJoint96.Center := Vector3(0.1987,0.7818,-0.053);
HAnimJoint96.SetSkinCoordIndex([156,157,163,164]);
HAnimJoint96.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimJoint97 := THAnimJointNode.Create;
HAnimJoint97.Center := Vector3(0.2013,0.7273,-0.0503);
HAnimJoint97.SetSkinCoordIndex([179,180,181,182]);
HAnimJoint97.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint98 := THAnimJointNode.Create;
HAnimJoint98.Center := Vector3(0.2026,0.7011,-0.0494);
HAnimJoint98.SetSkinCoordIndex([183,184,185,186,187,188,189,190,191]);
HAnimJoint98.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint97.FdChildren.Add(HAnimJoint98);
{ METHOD .FdChildren.Add }
HAnimJoint96.FdChildren.Add(HAnimJoint97);
{ METHOD .FdChildren.Add }
HAnimJoint95.FdChildren.Add(HAnimJoint96);
{ METHOD .FdChildren.Add }
HAnimJoint87.FdChildren.Add(HAnimJoint95);
HAnimJoint99 := THAnimJointNode.Create;
HAnimJoint99.Center := Vector3(0.1956,0.8019,-0.0794);
HAnimJoint99.SetSkinCoordIndex([133,134]);
HAnimJoint99.SetSkinCoordWeight([1,1]);
HAnimJoint100 := THAnimJointNode.Create;
HAnimJoint100.Center := Vector3(0.1956,0.7815,-0.0794);
HAnimJoint100.SetSkinCoordIndex([158,159,164,165]);
HAnimJoint100.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimJoint101 := THAnimJointNode.Create;
HAnimJoint101.Center := Vector3(0.1973,0.7287,-0.0777);
HAnimJoint101.SetSkinCoordIndex([192,193,194,195]);
HAnimJoint101.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint102 := THAnimJointNode.Create;
HAnimJoint102.Center := Vector3(0.1983,0.7045,-0.0767);
HAnimJoint102.SetSkinCoordIndex([196,197,198,199,200,201,202,203,204]);
HAnimJoint102.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint101.FdChildren.Add(HAnimJoint102);
{ METHOD .FdChildren.Add }
HAnimJoint100.FdChildren.Add(HAnimJoint101);
{ METHOD .FdChildren.Add }
HAnimJoint99.FdChildren.Add(HAnimJoint100);
{ METHOD .FdChildren.Add }
HAnimJoint87.FdChildren.Add(HAnimJoint99);
HAnimJoint103 := THAnimJointNode.Create;
HAnimJoint103.Center := Vector3(0.1925,0.8066,-0.1036);
HAnimJoint103.SetSkinCoordIndex([135,136,137,165]);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part9;
begin

HAnimJoint103.SetSkinCoordWeight([1,1,1,0.5]);
HAnimJoint104 := THAnimJointNode.Create;
HAnimJoint104.Center := Vector3(0.1925,0.7866,-0.1036);
HAnimJoint104.SetSkinCoordIndex([160,161,162]);
HAnimJoint104.SetSkinCoordWeight([1,1,1]);
HAnimJoint105 := THAnimJointNode.Create;
HAnimJoint105.Center := Vector3(0.1938,0.7452,-0.1024);
HAnimJoint105.SetSkinCoordIndex([205,206,207,208]);
HAnimJoint105.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint106 := THAnimJointNode.Create;
HAnimJoint106.Center := Vector3(0.1948,0.7277,-0.1017);
HAnimJoint106.SetSkinCoordIndex([209,210,211,212,213,214,215,216,217]);
HAnimJoint106.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint105.FdChildren.Add(HAnimJoint106);
{ METHOD .FdChildren.Add }
HAnimJoint104.FdChildren.Add(HAnimJoint105);
{ METHOD .FdChildren.Add }
HAnimJoint103.FdChildren.Add(HAnimJoint104);
{ METHOD .FdChildren.Add }
HAnimJoint87.FdChildren.Add(HAnimJoint103);
{ METHOD .FdChildren.Add }
HAnimJoint86.FdChildren.Add(HAnimJoint87);
{ METHOD .FdChildren.Add }
HAnimJoint85.FdChildren.Add(HAnimJoint86);
{ METHOD .FdChildren.Add }
HAnimJoint84.FdChildren.Add(HAnimJoint85);
{ METHOD .FdChildren.Add }
HAnimJoint83.FdChildren.Add(HAnimJoint84);
{ METHOD .FdChildren.Add }
HAnimJoint67.FdChildren.Add(HAnimJoint83);
HAnimJoint107 := THAnimJointNode.Create;
HAnimJoint107.Center := Vector3(-0.03,1.46,0);
HAnimJoint107.SetSkinCoordIndex([10]);
HAnimJoint107.SetSkinCoordWeight([1]);
HAnimJoint108 := THAnimJointNode.Create;
HAnimJoint108.Center := Vector3(-0.09,1.41,-0.11);
HAnimJoint108.SetSkinCoordIndex([77,29]);
HAnimJoint108.SetSkinCoordWeight([1,0.9]);
HAnimJoint109 := THAnimJointNode.Create;
HAnimJoint109.Center := Vector3(-0.2,1.44,-0.04);
HAnimJoint109.SetSkinCoordIndex([29,30,32,78,218,219,220,221,86,88]);
HAnimJoint109.SetSkinCoordWeight([0.1,1,1,1,1,1,1,1,0.3,0.2]);
HAnimJoint110 := THAnimJointNode.Create;
HAnimJoint110.Center := Vector3(-0.2,1.1388,-0.04);
HAnimJoint110.SetSkinCoordIndex([33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint110.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint111 := THAnimJointNode.Create;
HAnimJoint111.Center := Vector3(-0.2,0.89,-0.04);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part10;
begin

HAnimJoint111.SetSkinCoordIndex([235,236,237,238,239,240,241,242]);
HAnimJoint111.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimJoint112 := THAnimJointNode.Create;
HAnimJoint112.Center := Vector3(-0.2,0.85,0);
HAnimJoint112.SetSkinCoordIndex([243,244]);
HAnimJoint112.SetSkinCoordWeight([1,1]);
HAnimJoint113 := THAnimJointNode.Create;
HAnimJoint113.Center := Vector3(-0.2,0.82,0.03);
HAnimJoint113.SetSkinCoordIndex([254,255,256,257,258,259]);
HAnimJoint113.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1]);
HAnimJoint114 := THAnimJointNode.Create;
HAnimJoint114.Center := Vector3(-0.2,0.8,0.05);
HAnimJoint114.SetSkinCoordIndex([260,261,262,263,264,265,266,267,268]);
HAnimJoint114.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint113.FdChildren.Add(HAnimJoint114);
{ METHOD .FdChildren.Add }
HAnimJoint112.FdChildren.Add(HAnimJoint113);
{ METHOD .FdChildren.Add }
HAnimJoint111.FdChildren.Add(HAnimJoint112);
HAnimJoint115 := THAnimJointNode.Create;
HAnimJoint115.Center := Vector3(-0.2,0.84,-0.015);
HAnimJoint115.SetSkinCoordIndex([245,246]);
HAnimJoint115.SetSkinCoordWeight([1,1]);
HAnimJoint116 := THAnimJointNode.Create;
HAnimJoint116.Center := Vector3(-0.2,0.793,-0.015);
HAnimJoint116.SetSkinCoordIndex([254,255,256,269,270,271,279]);
HAnimJoint116.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint117 := THAnimJointNode.Create;
HAnimJoint117.Center := Vector3(-0.2,0.745,-0.015);
HAnimJoint117.SetSkinCoordIndex([282,283,284,285]);
HAnimJoint117.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint118 := THAnimJointNode.Create;
HAnimJoint118.Center := Vector3(-0.2,0.72,-0.015);
HAnimJoint118.SetSkinCoordIndex([286,287,288,289,290,291,292,293,294]);
HAnimJoint118.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint117.FdChildren.Add(HAnimJoint118);
{ METHOD .FdChildren.Add }
HAnimJoint116.FdChildren.Add(HAnimJoint117);
{ METHOD .FdChildren.Add }
HAnimJoint115.FdChildren.Add(HAnimJoint116);
{ METHOD .FdChildren.Add }
HAnimJoint111.FdChildren.Add(HAnimJoint115);
HAnimJoint119 := THAnimJointNode.Create;
HAnimJoint119.Center := Vector3(-0.2,0.835,-0.04);
HAnimJoint119.SetSkinCoordIndex([247,248]);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part11;
begin

HAnimJoint119.SetSkinCoordWeight([1,1]);
HAnimJoint120 := THAnimJointNode.Create;
HAnimJoint120.Center := Vector3(-0.2,0.788,-0.04);
HAnimJoint120.SetSkinCoordIndex([272,273,279,280]);
HAnimJoint120.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimJoint121 := THAnimJointNode.Create;
HAnimJoint121.Center := Vector3(-0.2,0.74,-0.04);
HAnimJoint121.SetSkinCoordIndex([295,296,297,298]);
HAnimJoint121.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint122 := THAnimJointNode.Create;
HAnimJoint122.Center := Vector3(-0.2,0.7142,-0.04);
HAnimJoint122.SetSkinCoordIndex([299,300,301,302,303,304,305,306,307]);
HAnimJoint122.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint121.FdChildren.Add(HAnimJoint122);
{ METHOD .FdChildren.Add }
HAnimJoint120.FdChildren.Add(HAnimJoint121);
{ METHOD .FdChildren.Add }
HAnimJoint119.FdChildren.Add(HAnimJoint120);
{ METHOD .FdChildren.Add }
HAnimJoint111.FdChildren.Add(HAnimJoint119);
HAnimJoint123 := THAnimJointNode.Create;
HAnimJoint123.Center := Vector3(-0.2,0.835,-0.065);
HAnimJoint123.SetSkinCoordIndex([249,250]);
HAnimJoint123.SetSkinCoordWeight([1,1]);
HAnimJoint124 := THAnimJointNode.Create;
HAnimJoint124.Center := Vector3(-0.2,0.793,-0.065);
HAnimJoint124.SetSkinCoordIndex([274,275,280,281]);
HAnimJoint124.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimJoint125 := THAnimJointNode.Create;
HAnimJoint125.Center := Vector3(-0.2,0.74,-0.065);
HAnimJoint125.SetSkinCoordIndex([308,309,310,311]);
HAnimJoint125.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint126 := THAnimJointNode.Create;
HAnimJoint126.Center := Vector3(-0.2,0.7177,-0.065);
HAnimJoint126.SetSkinCoordIndex([312,313,314,315,316,317,318,319,320]);
HAnimJoint126.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint125.FdChildren.Add(HAnimJoint126);
{ METHOD .FdChildren.Add }
HAnimJoint124.FdChildren.Add(HAnimJoint125);
{ METHOD .FdChildren.Add }
HAnimJoint123.FdChildren.Add(HAnimJoint124);
{ METHOD .FdChildren.Add }
HAnimJoint111.FdChildren.Add(HAnimJoint123);
HAnimJoint127 := THAnimJointNode.Create;
HAnimJoint127.Center := Vector3(-0.2,0.84,-0.085);
HAnimJoint127.SetSkinCoordIndex([251,252,253,281]);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part12;
begin

HAnimJoint127.SetSkinCoordWeight([1,1,1,0.5]);
HAnimJoint128 := THAnimJointNode.Create;
HAnimJoint128.Center := Vector3(-0.2,0.79,-0.085);
HAnimJoint128.SetSkinCoordIndex([276,277,278]);
HAnimJoint128.SetSkinCoordWeight([1,1,1]);
HAnimJoint129 := THAnimJointNode.Create;
HAnimJoint129.Center := Vector3(-0.2,0.755,-0.085);
HAnimJoint129.SetSkinCoordIndex([321,322,323,324]);
HAnimJoint129.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint130 := THAnimJointNode.Create;
HAnimJoint130.Center := Vector3(-0.2,0.735,-0.09);
HAnimJoint130.SetSkinCoordIndex([325,326,327,328,329,330,331,332,333]);
HAnimJoint130.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint129.FdChildren.Add(HAnimJoint130);
{ METHOD .FdChildren.Add }
HAnimJoint128.FdChildren.Add(HAnimJoint129);
{ METHOD .FdChildren.Add }
HAnimJoint127.FdChildren.Add(HAnimJoint128);
{ METHOD .FdChildren.Add }
HAnimJoint111.FdChildren.Add(HAnimJoint127);
{ METHOD .FdChildren.Add }
HAnimJoint110.FdChildren.Add(HAnimJoint111);
{ METHOD .FdChildren.Add }
HAnimJoint109.FdChildren.Add(HAnimJoint110);
{ METHOD .FdChildren.Add }
HAnimJoint108.FdChildren.Add(HAnimJoint109);
{ METHOD .FdChildren.Add }
HAnimJoint107.FdChildren.Add(HAnimJoint108);
{ METHOD .FdChildren.Add }
HAnimJoint67.FdChildren.Add(HAnimJoint107);
{ METHOD .FdChildren.Add }
HAnimJoint66.FdChildren.Add(HAnimJoint67);
{ METHOD .FdChildren.Add }
HAnimJoint65.FdChildren.Add(HAnimJoint66);
{ METHOD .FdChildren.Add }
HAnimJoint64.FdChildren.Add(HAnimJoint65);
{ METHOD .FdChildren.Add }
HAnimJoint63.FdChildren.Add(HAnimJoint64);
{ METHOD .FdChildren.Add }
HAnimJoint62.FdChildren.Add(HAnimJoint63);
{ METHOD .FdChildren.Add }
HAnimJoint61.FdChildren.Add(HAnimJoint62);
{ METHOD .FdChildren.Add }
HAnimJoint60.FdChildren.Add(HAnimJoint61);
{ METHOD .FdChildren.Add }
HAnimJoint59.FdChildren.Add(HAnimJoint60);
{ METHOD .FdChildren.Add }
HAnimJoint58.FdChildren.Add(HAnimJoint59);
{ METHOD .FdChildren.Add }
HAnimJoint57.FdChildren.Add(HAnimJoint58);
{ METHOD .FdChildren.Add }
HAnimJoint56.FdChildren.Add(HAnimJoint57);
{ METHOD .FdChildren.Add }
HAnimJoint55.FdChildren.Add(HAnimJoint56);
{ METHOD .FdChildren.Add }
HAnimJoint54.FdChildren.Add(HAnimJoint55);
{ METHOD .FdChildren.Add }
HAnimJoint53.FdChildren.Add(HAnimJoint54);
{ METHOD .FdChildren.Add }
HAnimJoint52.FdChildren.Add(HAnimJoint53);
{ METHOD .FdChildren.Add }
HAnimJoint51.FdChildren.Add(HAnimJoint52);
{ METHOD .FdChildren.Add }
HAnimJoint50.FdChildren.Add(HAnimJoint51);
{ METHOD .FdChildren.Add }
HAnimJoint28.FdChildren.Add(HAnimJoint50);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part13;
begin

{ METHOD .FdSkeleton.Add }
HAnimHumanoid27.FdSkeleton.Add(HAnimJoint28);
Shape131 := TShapeNode.Create;
Appearance132 := TAppearanceNode.Create;
Material133 := TMaterialNode.Create;
Material133.DiffuseColor := Vector3(0.3,0.3,0.6);
Material133.EmissiveColor := Vector3(0.3,0.3,0.6);
{ METHOD .SetMaterial }
Appearance132.Material := Material133;
ImageTexture134 := TImageTextureNode.Create;
ImageTexture134.SetUrl(['bodytexture28.png']);
{ METHOD .Texture }
Appearance132.Texture := ImageTexture134;
TextureTransform135 := TTextureTransformNode.Create;
{ METHOD .TextureTransform }
Appearance132.TextureTransform := TextureTransform135;
{ METHOD .Appearance }
Shape131.Appearance := Appearance132;
IndexedFaceSet136 := TIndexedFaceSetNode.Create;
IndexedFaceSet136.SetCoordIndex([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet136.CreaseAngle := 3.14;
Coordinate137 := TCoordinateNode.Create;
Coordinate137.SetPoint([Vector3(0,1.77,0),Vector3(0,1.665,0.09),Vector3(-0.033,1.62,0.087),Vector3(0.033,1.62,0.087),Vector3(0,1.55,0.097),Vector3(-0.077,1.64,-0.01),Vector3(-0.0527,1.58,0.015),Vector3(0.077,1.64,-0.01),Vector3(0.0527,1.58,0.015),Vector3(0,1.625,-0.0925),Vector3(-0.03,1.46,0.035),Vector3(0,1.44,0.03),Vector3(0.03,1.46,0.035),Vector3(-0.1135,1.318,0.095),Vector3(0.1135,1.318,0.095),Vector3(0,1.25,0.113),Vector3(-0.087,1.19,0.09),Vector3(-0.0935,1.03,0.075),Vector3(0.087,1.19,0.09),Vector3(0.0935,1.03,0.075),Vector3(-0.1425,1.065,0.0033),Vector3(-0.15,0.9,-0.01),Vector3(0.1425,1.065,0.0033),Vector3(0.15,0.9,-0.01),Vector3(0,1.53,-0.084),Vector3(0.0049,1.1908,-0.1113),Vector3(-0.0773,1.019,-0.12),Vector3(0.0773,1.019,-0.12),Vector3(0.005,1.0915,-0.1091),Vector3(-0.178,1.4825,-0.0625),Vector3(-0.17,1.38,0.007),Vector3(-0.1884,0.8676,-0.036),Vector3(-0.16,1.38,-0.127),Vector3(-0.2,1.1388,-0.08),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.23,1.133,-0.055),Vector3(-0.1977,0.8169,-0.0177),Vector3(-0.1941,0.6772,-0.0423),Vector3(-0.2117,0.8562,-0.0584),Vector3(-0.1929,0.789,-0.1064),Vector3(0.175,1.4825,-0.06),Vector3(0.17,1.38,0.007),Vector3(0.1901,0.8645,-0.0415),Vector3(0.16,1.38,-0.125),Vector3(0.2,1.1388,-0.08),Vector3(0.165,1.1388,-0.04),Vector3(0.244,1.1388,-0.04),Vector3(0.23,1.133,-0.055),Vector3(0.2009,0.8139,-0.0237),Vector3(0.2056,0.6743,-0.0482),Vector3(0.2142,0.8529,-0.0648),Vector3(0.1929,0.786,-0.1122),Vector3(-0.1,0.4913,-0.03),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.165,0.01,0.12),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.09,0.056,0.0125),Vector3(-0.115,0.02,0.122),Vector3(-0.115,0.04,-0.055),Vector3(-0.11,0.011,0.19),Vector3(0.0993,0.4881,-0.0309),Vector3(0.17,0.466,0),Vector3(0.05,0.4867,0),Vector3(0.165,0.01,0.12),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.09,0.056,0.0125),Vector3(0.115,0.02,0.122),Vector3(0.115,0.04,-0.055),Vector3(0.11,0.011,0.19),Vector3(0,0.875,0),Vector3(-0.0646,1.5149,-0.038),Vector3(0.0646,1.5149,-0.038),Vector3(0,1.07225,0.09),Vector3(-0.11,1.427,-0.1375),Vector3(-0.235,1.42,-0.0625),Vector3(0.11,1.427,-0.1375),Vector3(0.235,1.42,-0.0625),Vector3(0,1.41,-0.145),Vector3(0,0.925,0.08),Vector3(-0.087,1.19,-0.09),Vector3(0.087,1.19,-0.09),Vector3(0.172,1.32,-0.03),Vector3(-0.172,1.32,-0.03),Vector3(0.15,1.23,-0.015),Vector3(-0.15,1.23,-0.015),Vector3(0.079,0.92,-0.14),Vector3(0.1,0.9,0.077),Vector3(-0.079,0.92,-0.14),Vector3(-0.1,0.9,0.075),Vector3(0,0.87,0),Vector3(0.171,0.65,0),Vector3(0.02,0.65,0),Vector3(0.1,0.65,-0.08),Vector3(0.1,0.65,0.07),Vector3(-0.171,0.65,0),Vector3(-0.02,0.65,0),Vector3(-0.1,0.65,-0.08),Vector3(-0.1,0.65,0.07),Vector3(0.25,1.27,-0.04),Vector3(0.17,1.27,-0.04),Vector3(0.2,1.27,-0.09),Vector3(0.2,1.27,0.02),Vector3(0.244,1.1388,-0.04),Vector3(0.165,1.1388,-0.04),Vector3(0.2,1.1388,-0.08),Vector3(0.2,1.1388,-0.013),Vector3(0.225,1,-0.01),Vector3(0.225,1,-0.07),Vector3(0.185,1,-0.01),Vector3(0.185,1,-0.07),Vector3(0.2,1.1388,-0.04),Vector3(0.225,0.92,-0.04),Vector3(0.175,0.92,-0.04),Vector3(0.2,0.92,-0.065),Vector3(0.2,0.92,-0.015),Vector3(0.225,0.89,-0.04),Vector3(0.175,0.89,-0.04),Vector3(0.2,0.89,-0.065),Vector3(0.2,0.89,-0.015),Vector3(0.218,0.86,-0.04),Vector3(0.184,0.86,-0.04),Vector3(0.2,0.87,-0.07),Vector3(0.2,0.87,0),Vector3(0.21,0.85,0),Vector3(0.1854,0.85,0),Vector3(0.212,0.84,-0.015),Vector3(0.183,0.84,-0.015),Vector3(0.213,0.835,-0.04),Vector3(0.19,0.835,-0.04),Vector3(0.211,0.835,-0.065),Vector3(0.192,0.835,-0.065),Vector3(0.208,0.84,-0.085),Vector3(0.19,0.84,-0.085),Vector3(0.2,0.84,-0.095),Vector3(0.215,0.82,0),Vector3(0.193,0.815,0.005),Vector3(0.198,0.8,0.012),Vector3(0.21,0.82,0.03),Vector3(0.19,0.82,0.03),Vector3(0.2,0.835,0.039),Vector3(0.212,0.8,0.05),Vector3(0.188,0.8,0.05),Vector3(0.2,0.807,0.057),Vector3(0.2,0.793,0.035),Vector3(0.2,0.774,0.076),Vector3(0.212,0.78,0.07),Vector3(0.188,0.78,0.07),Vector3(0.2,0.785,0.075),Vector3(0.2,0.77,0.062),Vector3(0.215,0.793,-0.015),Vector3(0.187,0.793,-0.015),Vector3(0.2,0.793,-0.005),Vector3(0.215,0.788,-0.04),Vector3(0.187,0.788,-0.04),Vector3(0.215,0.793,-0.065),Vector3(0.187,0.793,-0.065),Vector3(0.21,0.79,-0.085),Vector3(0.19,0.79,-0.085),Vector3(0.2,0.79,-0.095),Vector3(0.19,0.77,-0.0275),Vector3(0.19,0.77,-0.0525),Vector3(0.19,0.78,-0.0775),Vector3(0.212,0.745,-0.015),Vector3(0.188,0.745,-0.02),Vector3(0.2,0.745,-0.0255),Vector3(0.2,0.745,-0.0045),Vector3(0.211,0.72,-0.015),Vector3(0.189,0.72,-0.015),Vector3(0.2,0.72,-0.0252),Vector3(0.2,0.72,-0.0048),Vector3(0.21,0.695,-0.015),Vector3(0.19,0.695,-0.015),Vector3(0.2,0.695,-0.025),Vector3(0.2,0.695,-0.005),Vector3(0.2,0.685,-0.015),Vector3(0.215,0.74,-0.04),Vector3(0.185,0.74,-0.04),Vector3(0.2,0.74,-0.055),Vector3(0.2,0.74,-0.025),Vector3(0.21,0.7142,-0.04),Vector3(0.19,0.7142,-0.04),Vector3(0.2,0.7142,-0.053),Vector3(0.2,0.7142,-0.027),Vector3(0.21,0.68,-0.04),Vector3(0.19,0.68,-0.04),Vector3(0.2,0.68,-0.05),Vector3(0.2,0.68,-0.03),Vector3(0.2,0.67,-0.04),Vector3(0.212,0.74,-0.065),Vector3(0.188,0.74,-0.065),Vector3(0.2,0.74,-0.0756),Vector3(0.2,0.74,-0.0542),Vector3(0.21,0.7177,-0.065),Vector3(0.19,0.7177,-0.065),Vector3(0.2,0.7177,-0.0751),Vector3(0.2,0.7177,-0.0549),Vector3(0.21,0.695,-0.065),Vector3(0.19,0.695,-0.065),Vector3(0.2,0.695,-0.075),Vector3(0.2,0.695,-0.055),Vector3(0.2,0.685,-0.065),Vector3(0.211,0.755,-0.085),Vector3(0.189,0.755,-0.085),Vector3(0.2,0.755,-0.0952),Vector3(0.2,0.755,-0.0748),Vector3(0.21,0.735,-0.085),Vector3(0.19,0.735,-0.085),Vector3(0.2,0.735,-0.0951),Vector3(0.2,0.735,-0.0749),Vector3(0.21,0.72,-0.085),Vector3(0.19,0.72,-0.085),Vector3(0.2,0.72,-0.095),Vector3(0.2,0.72,-0.075),Vector3(0.2,0.71,-0.085),Vector3(-0.23,1.23,-0.04),Vector3(-0.16,1.23,-0.04),Vector3(-0.2,1.235,-0.105),Vector3(-0.2,1.255,0.02),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.2,1.1388,-0.08),Vector3(-0.2,1.1388,0.013),Vector3(-0.225,1,-0.01),Vector3(-0.225,1,-0.07),Vector3(-0.185,1,-0.01),Vector3(-0.185,1,-0.07),Vector3(-0.2,1.1388,-0.04),Vector3(-0.225,0.92,-0.04),Vector3(-0.175,0.92,-0.04),Vector3(-0.2,0.92,-0.065),Vector3(-0.2,0.92,-0.015),Vector3(-0.225,0.89,-0.04),Vector3(-0.175,0.89,-0.04),Vector3(-0.2,0.89,-0.065),Vector3(-0.2,0.89,-0.015),Vector3(-0.218,0.86,-0.04),Vector3(-0.184,0.86,-0.04),Vector3(-0.2,0.87,-0.07),Vector3(-0.2,0.87,0),Vector3(-0.21,0.85,0),Vector3(-0.1854,0.85,0),Vector3(-0.212,0.84,-0.015),Vector3(-0.183,0.84,-0.015),Vector3(-0.213,0.835,-0.04),Vector3(-0.19,0.835,-0.04),Vector3(-0.211,0.835,-0.065),Vector3(-0.192,0.835,-0.065),Vector3(-0.208,0.84,-0.085),Vector3(-0.19,0.84,-0.085),Vector3(-0.2,0.84,-0.095),Vector3(-0.215,0.82,0),Vector3(-0.193,0.815,0.005),Vector3(-0.198,0.8,0.012),Vector3(-0.21,0.82,0.03),Vector3(-0.19,0.82,0.03),Vector3(-0.2,0.835,0.039),Vector3(-0.212,0.8,0.05),Vector3(-0.188,0.8,0.05),Vector3(-0.2,0.807,0.057),Vector3(-0.2,0.793,0.035),Vector3(-0.2,0.774,0.076),Vector3(-0.212,0.78,0.07),Vector3(-0.188,0.78,0.07),Vector3(-0.2,0.785,0.075),Vector3(-0.2,0.77,0.062),Vector3(-0.215,0.793,-0.015),Vector3(-0.187,0.793,-0.015),Vector3(-0.2,0.793,-0.005),Vector3(-0.215,0.788,-0.04),Vector3(-0.187,0.788,-0.04),Vector3(-0.215,0.793,-0.065),Vector3(-0.187,0.793,-0.065),Vector3(-0.21,0.79,-0.085),Vector3(-0.19,0.79,-0.085),Vector3(-0.2,0.79,-0.095),Vector3(-0.19,0.77,-0.0275),Vector3(-0.19,0.77,-0.0525),Vector3(-0.19,0.78,-0.0775),Vector3(-0.212,0.745,-0.015),Vector3(-0.188,0.745,-0.02),Vector3(-0.2,0.745,-0.0255),Vector3(-0.2,0.745,-0.0045),Vector3(-0.211,0.72,-0.015),Vector3(-0.189,0.72,-0.015),Vector3(-0.2,0.72,-0.0252),Vector3(-0.2,0.72,-0.0048),Vector3(-0.21,0.695,-0.015),Vector3(-0.19,0.695,-0.015),Vector3(-0.2,0.695,-0.025),Vector3(-0.2,0.695,-0.005),Vector3(-0.2,0.685,-0.015),Vector3(-0.215,0.74,-0.04),Vector3(-0.185,0.74,-0.04),Vector3(-0.2,0.74,-0.055),Vector3(-0.2,0.74,-0.025),Vector3(-0.21,0.7142,-0.04),Vector3(-0.19,0.7142,-0.04),Vector3(-0.2,0.7142,-0.053),Vector3(-0.2,0.7142,-0.027),Vector3(-0.21,0.68,-0.04),Vector3(-0.19,0.68,-0.04),Vector3(-0.2,0.68,-0.05),Vector3(-0.2,0.68,-0.03),Vector3(-0.2,0.67,-0.04),Vector3(-0.212,0.74,-0.065),Vector3(-0.188,0.74,-0.065),Vector3(-0.2,0.74,-0.0756),Vector3(-0.2,0.74,-0.0542),Vector3(-0.21,0.7177,-0.065),Vector3(-0.19,0.7177,-0.065),Vector3(-0.2,0.7177,-0.0751),Vector3(-0.2,0.7177,-0.0549),Vector3(-0.21,0.695,-0.065),Vector3(-0.19,0.695,-0.065),Vector3(-0.2,0.695,-0.075),Vector3(-0.2,0.695,-0.055),Vector3(-0.2,0.685,-0.065),Vector3(-0.211,0.755,-0.085),Vector3(-0.189,0.755,-0.085),Vector3(-0.2,0.755,-0.0952),Vector3(-0.2,0.755,-0.0748),Vector3(-0.21,0.735,-0.085),Vector3(-0.19,0.735,-0.085),Vector3(-0.2,0.735,-0.0951),Vector3(-0.2,0.735,-0.0749),Vector3(-0.21,0.72,-0.085),Vector3(-0.19,0.72,-0.085),Vector3(-0.2,0.72,-0.095),Vector3(-0.2,0.72,-0.075),Vector3(-0.2,0.71,-0.085),Vector3(0.115,0.466,0.06),Vector3(0.115,0.466,-0.055),Vector3(0.15,0.466,0),Vector3(0.05,0.466,0),Vector3(0.17,0.3,0),Vector3(0.06,0.3,0),Vector3(0.1,0.3,-0.05),Vector3(0.1,0.3,0.05),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.115,0.069,-0.045),Vector3(0.117,0.0975,0.0615),Vector3(0.1375,0.006,-0.03),Vector3(0.095,0.006,-0.03),Vector3(0.115,0.015,-0.045),Vector3(0.115,0.06,0.1),Vector3(0.115,0,0.07),Vector3(0.165,0,0.07),Vector3(0.095,0,0.07),Vector3(0.115,0.04,0.13),Vector3(0.125,0,0.12),Vector3(0.165,0,0.12),Vector3(0.087,0,0.122),Vector3(0.09,0.012,0.188),Vector3(0.11,0.011,0.19),Vector3(0.128,0.011,0.185),Vector3(0.142,0.011,0.178),Vector3(0.154,0.01,0.168),Vector3(-0.115,0.466,0.06),Vector3(-0.115,0.466,-0.055),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.17,0.3,0),Vector3(-0.06,0.3,0),Vector3(-0.1,0.3,-0.05),Vector3(-0.1,0.3,0.05),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.115,0.069,-0.045),Vector3(-0.117,0.0975,0.0615),Vector3(-0.1375,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.115,0.06,0.1),Vector3(-0.115,0,0.07),Vector3(-0.165,0,0.07),Vector3(-0.095,0,0.07),Vector3(-0.115,0.04,0.13),Vector3(-0.125,0,0.12),Vector3(-0.165,0,0.12),Vector3(-0.087,0,0.122),Vector3(-0.09,0.012,0.188),Vector3(-0.11,0.011,0.19),Vector3(-0.128,0.011,0.185),Vector3(-0.142,0.011,0.178),Vector3(-0.154,0.01,0.168)]);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part14;
begin

{ METHOD .Coord }
IndexedFaceSet136.Coord := Coordinate137;
TextureCoordinate138 := TTextureCoordinateNode.Create;
TextureCoordinate138.SetPoint([Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5)]);
{ METHOD .TexCoord }
IndexedFaceSet136.TexCoord := TextureCoordinate138;
{ METHOD .Geometry }
Shape131.Geometry := IndexedFaceSet136;
{ METHOD .SetSkin }
HAnimHumanoid27.Skin := Shape131;
{ METHOD .FdSkinCoord.Set }
HAnimHumanoid27.FdSkinCoord.Set(Coordinate137);
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(HAnimHumanoid27);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Group26);
Group140 := TGroupNode.Create;
TimeSensor141 := TTimeSensorNode.Create;
TimeSensor141.CycleInterval := 3.73;
TimeSensor141.Loop := True;
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(TimeSensor141);
{ Interpolators }
OrientationInterpolator142 := TOrientationInterpolatorNode.Create;
OrientationInterpolator142.SetKey([0,0.1,0.4,0.6,1]);
OrientationInterpolator142.SetKeyValue([Vector4(1,0,0,0.5),Vector4(1,0,0,0.5),Vector4(-1,0,0,0.1),Vector4(-1,0,0,0.5),Vector4(-1,0,0,0.5)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator142);
PositionInterpolator143 := TPositionInterpolatorNode.Create;
PositionInterpolator143.SetKey([0,0.2,0.6,1]);
PositionInterpolator143.SetKeyValue([Vector3(1,0.3,-1),Vector3(0.4,-0.04,-0.4),Vector3(-0.18,0.1,0),Vector3(-0.2,0.15,0.15)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(PositionInterpolator143);
OrientationInterpolator144 := TOrientationInterpolatorNode.Create;
OrientationInterpolator144.SetKey([0,0.5,1]);
OrientationInterpolator144.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator144);
OrientationInterpolator145 := TOrientationInterpolatorNode.Create;
OrientationInterpolator145.SetKey([0,0.1,0.3,0.45,1]);
OrientationInterpolator145.SetKeyValue([Vector4(-1,0,0,1.5),Vector4(-1,0,0,1),Vector4(0,0,1,0),Vector4(1,0,0,0.5),Vector4(1,0,0,1)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator145);
OrientationInterpolator146 := TOrientationInterpolatorNode.Create;
OrientationInterpolator146.SetKey([0,0.2,0.35,0.5,1]);
OrientationInterpolator146.SetKeyValue([Vector4(1,0,0,1),Vector4(0,0,1,0),Vector4(0,0,1,0.2),Vector4(1,0,1,0.5),Vector4(1,0,0,1.4)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator146);
OrientationInterpolator147 := TOrientationInterpolatorNode.Create;
OrientationInterpolator147.SetKey([0,0.25,1]);
OrientationInterpolator147.SetKeyValue([Vector4(-1,0,0,1),Vector4(0,0,1,0),Vector4(1,0,0,1)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator147);
OrientationInterpolator148 := TOrientationInterpolatorNode.Create;
OrientationInterpolator148.SetKey([0,0.5,1]);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part15;
begin

OrientationInterpolator148.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator148);
OrientationInterpolator149 := TOrientationInterpolatorNode.Create;
OrientationInterpolator149.SetKey([0,0.5,1]);
OrientationInterpolator149.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator149);
OrientationInterpolator150 := TOrientationInterpolatorNode.Create;
OrientationInterpolator150.SetKey([0,0.5,1]);
OrientationInterpolator150.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator150);
OrientationInterpolator151 := TOrientationInterpolatorNode.Create;
OrientationInterpolator151.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator151.SetKeyValue([Vector4(1,0,0,1),Vector4(1,0,0,1),Vector4(-1,0,0,1),Vector4(-1,0,0,1),Vector4(-1,0,0,1)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator151);
OrientationInterpolator152 := TOrientationInterpolatorNode.Create;
OrientationInterpolator152.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator152.SetKeyValue([Vector4(1,0,0,0.1),Vector4(0,0,1,0),Vector4(1,0,0,1),Vector4(1,0,0,1),Vector4(1,0,0,1.5)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator152);
OrientationInterpolator153 := TOrientationInterpolatorNode.Create;
OrientationInterpolator153.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator153.SetKeyValue([Vector4(-1,0,0,1),Vector4(0,0,1,0),Vector4(1,0,0,1),Vector4(1,0,0,1),Vector4(1,0,0,0.5)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator153);
OrientationInterpolator154 := TOrientationInterpolatorNode.Create;
OrientationInterpolator154.SetKey([0,0.5,1]);
OrientationInterpolator154.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator154);
OrientationInterpolator155 := TOrientationInterpolatorNode.Create;
OrientationInterpolator155.SetKey([0,0.5,1]);
OrientationInterpolator155.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator155);
OrientationInterpolator156 := TOrientationInterpolatorNode.Create;
OrientationInterpolator156.SetKey([0,0.5,1]);
OrientationInterpolator156.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator156);
OrientationInterpolator157 := TOrientationInterpolatorNode.Create;
OrientationInterpolator157.SetKey([0,0.5,1]);
OrientationInterpolator157.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator157);
OrientationInterpolator158 := TOrientationInterpolatorNode.Create;
OrientationInterpolator158.SetKey([0,0.5,1]);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part16;
begin

OrientationInterpolator158.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator158);
OrientationInterpolator159 := TOrientationInterpolatorNode.Create;
OrientationInterpolator159.SetKey([0,0.5,1]);
OrientationInterpolator159.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator159);
OrientationInterpolator160 := TOrientationInterpolatorNode.Create;
OrientationInterpolator160.SetKey([0,0.5,1]);
OrientationInterpolator160.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator160);
OrientationInterpolator161 := TOrientationInterpolatorNode.Create;
OrientationInterpolator161.SetKey([0,0.5,1]);
OrientationInterpolator161.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator161);
OrientationInterpolator162 := TOrientationInterpolatorNode.Create;
OrientationInterpolator162.SetKey([0,0.5,1]);
OrientationInterpolator162.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator162);
OrientationInterpolator163 := TOrientationInterpolatorNode.Create;
OrientationInterpolator163.SetKey([0,0.5,1]);
OrientationInterpolator163.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator163);
OrientationInterpolator164 := TOrientationInterpolatorNode.Create;
OrientationInterpolator164.SetKey([0,0.5,1]);
OrientationInterpolator164.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator164);
OrientationInterpolator165 := TOrientationInterpolatorNode.Create;
OrientationInterpolator165.SetKey([0,0.5,1]);
OrientationInterpolator165.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator165);
OrientationInterpolator166 := TOrientationInterpolatorNode.Create;
OrientationInterpolator166.SetKey([0,0.5,1]);
OrientationInterpolator166.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator166);
OrientationInterpolator167 := TOrientationInterpolatorNode.Create;
OrientationInterpolator167.SetKey([0,0.5,1]);
OrientationInterpolator167.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator167);
OrientationInterpolator168 := TOrientationInterpolatorNode.Create;
OrientationInterpolator168.SetKey([0,0.5,1]);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part17;
begin

OrientationInterpolator168.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator168);
OrientationInterpolator169 := TOrientationInterpolatorNode.Create;
OrientationInterpolator169.SetKey([0,0.5,1]);
OrientationInterpolator169.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator169);
OrientationInterpolator170 := TOrientationInterpolatorNode.Create;
OrientationInterpolator170.SetKey([0,0.5,1]);
OrientationInterpolator170.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator170);
OrientationInterpolator171 := TOrientationInterpolatorNode.Create;
OrientationInterpolator171.SetKey([0,0.5,1]);
OrientationInterpolator171.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator171);
OrientationInterpolator172 := TOrientationInterpolatorNode.Create;
OrientationInterpolator172.SetKey([0,0.5,1]);
OrientationInterpolator172.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator172);
OrientationInterpolator173 := TOrientationInterpolatorNode.Create;
OrientationInterpolator173.SetKey([0,0.5,1]);
OrientationInterpolator173.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator173);
OrientationInterpolator174 := TOrientationInterpolatorNode.Create;
OrientationInterpolator174.SetKey([0,0.5,1]);
OrientationInterpolator174.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator174);
OrientationInterpolator175 := TOrientationInterpolatorNode.Create;
OrientationInterpolator175.SetKey([0,0.5,1]);
OrientationInterpolator175.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator175);
OrientationInterpolator176 := TOrientationInterpolatorNode.Create;
OrientationInterpolator176.SetKey([0,0.5,1]);
OrientationInterpolator176.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator176);
OrientationInterpolator177 := TOrientationInterpolatorNode.Create;
OrientationInterpolator177.SetKey([0,0.3,0.4,1]);
OrientationInterpolator177.SetKeyValue([Vector4(1,0,1,0.25),Vector4(-1,0,-1,0.35),Vector4(1,0,0,0.75),Vector4(1,0,1,0.5)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator177);
OrientationInterpolator178 := TOrientationInterpolatorNode.Create;
OrientationInterpolator178.SetKey([0,0.5,1]);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part18;
begin

OrientationInterpolator178.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator178);
OrientationInterpolator179 := TOrientationInterpolatorNode.Create;
OrientationInterpolator179.SetKey([0,0.5,1]);
OrientationInterpolator179.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator179);
OrientationInterpolator180 := TOrientationInterpolatorNode.Create;
OrientationInterpolator180.SetKey([0,0.5,1]);
OrientationInterpolator180.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator180);
OrientationInterpolator181 := TOrientationInterpolatorNode.Create;
OrientationInterpolator181.SetKey([0,0.2,0.75,1]);
OrientationInterpolator181.SetKeyValue([Vector4(0,-1,0,0.5),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,1,0,0.35)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator181);
OrientationInterpolator182 := TOrientationInterpolatorNode.Create;
OrientationInterpolator182.SetKey([0,0.5,1]);
OrientationInterpolator182.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator182);
OrientationInterpolator183 := TOrientationInterpolatorNode.Create;
OrientationInterpolator183.SetKey([0,0.5,1]);
OrientationInterpolator183.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator183);
OrientationInterpolator184 := TOrientationInterpolatorNode.Create;
OrientationInterpolator184.SetKey([0,0.5,1]);
OrientationInterpolator184.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator184);
OrientationInterpolator185 := TOrientationInterpolatorNode.Create;
OrientationInterpolator185.SetKey([0,0.5,1]);
OrientationInterpolator185.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator185);
OrientationInterpolator186 := TOrientationInterpolatorNode.Create;
OrientationInterpolator186.SetKey([0,0.5,1]);
OrientationInterpolator186.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator186);
OrientationInterpolator187 := TOrientationInterpolatorNode.Create;
OrientationInterpolator187.SetKey([0,0.5,1]);
OrientationInterpolator187.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator187);
OrientationInterpolator188 := TOrientationInterpolatorNode.Create;
OrientationInterpolator188.SetKey([0,0.5,1]);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part19;
begin

OrientationInterpolator188.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator188);
OrientationInterpolator189 := TOrientationInterpolatorNode.Create;
OrientationInterpolator189.SetKey([0,0.5,1]);
OrientationInterpolator189.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator189);
OrientationInterpolator190 := TOrientationInterpolatorNode.Create;
OrientationInterpolator190.SetKey([0,0.5,1]);
OrientationInterpolator190.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator190);
OrientationInterpolator191 := TOrientationInterpolatorNode.Create;
OrientationInterpolator191.SetKey([0,0.4,1]);
OrientationInterpolator191.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(-1,0,1,1.75)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator191);
OrientationInterpolator192 := TOrientationInterpolatorNode.Create;
OrientationInterpolator192.SetKey([0,0.5,1]);
OrientationInterpolator192.SetKeyValue([Vector4(-1,0,0,3),Vector4(-1,0,0,0.75),Vector4(-1,-1,0,0.5)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator192);
OrientationInterpolator193 := TOrientationInterpolatorNode.Create;
OrientationInterpolator193.SetKey([0,0.4,0.8,1]);
OrientationInterpolator193.SetKeyValue([Vector4(0,0,1,0),Vector4(0,1,0,1.3),Vector4(0,-0.5,1,1.3),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator193);
OrientationInterpolator194 := TOrientationInterpolatorNode.Create;
OrientationInterpolator194.SetKey([0,0.5,1]);
OrientationInterpolator194.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator194);
OrientationInterpolator195 := TOrientationInterpolatorNode.Create;
OrientationInterpolator195.SetKey([0,0.5,1]);
OrientationInterpolator195.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator195);
OrientationInterpolator196 := TOrientationInterpolatorNode.Create;
OrientationInterpolator196.SetKey([0,0.5,1]);
OrientationInterpolator196.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator196);
OrientationInterpolator197 := TOrientationInterpolatorNode.Create;
OrientationInterpolator197.SetKey([0,0.5,1]);
OrientationInterpolator197.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator197);
OrientationInterpolator198 := TOrientationInterpolatorNode.Create;
OrientationInterpolator198.SetKey([0,0.5,1]);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part20;
begin

OrientationInterpolator198.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator198);
OrientationInterpolator199 := TOrientationInterpolatorNode.Create;
OrientationInterpolator199.SetKey([0,0.5,1]);
OrientationInterpolator199.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator199);
OrientationInterpolator200 := TOrientationInterpolatorNode.Create;
OrientationInterpolator200.SetKey([0,0.5,1]);
OrientationInterpolator200.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator200);
OrientationInterpolator201 := TOrientationInterpolatorNode.Create;
OrientationInterpolator201.SetKey([0,0.5,1]);
OrientationInterpolator201.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator201);
OrientationInterpolator202 := TOrientationInterpolatorNode.Create;
OrientationInterpolator202.SetKey([0,0.5,1]);
OrientationInterpolator202.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator202);
OrientationInterpolator203 := TOrientationInterpolatorNode.Create;
OrientationInterpolator203.SetKey([0,0.5,1]);
OrientationInterpolator203.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator203);
OrientationInterpolator204 := TOrientationInterpolatorNode.Create;
OrientationInterpolator204.SetKey([0,0.5,1]);
OrientationInterpolator204.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator204);
OrientationInterpolator205 := TOrientationInterpolatorNode.Create;
OrientationInterpolator205.SetKey([0,0.5,1]);
OrientationInterpolator205.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator205);
OrientationInterpolator206 := TOrientationInterpolatorNode.Create;
OrientationInterpolator206.SetKey([0,0.5,1]);
OrientationInterpolator206.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator206);
OrientationInterpolator207 := TOrientationInterpolatorNode.Create;
OrientationInterpolator207.SetKey([0,0.5,1]);
OrientationInterpolator207.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator207);
OrientationInterpolator208 := TOrientationInterpolatorNode.Create;
OrientationInterpolator208.SetKey([0,0.5,1]);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part21;
begin

OrientationInterpolator208.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator208);
OrientationInterpolator209 := TOrientationInterpolatorNode.Create;
OrientationInterpolator209.SetKey([0,0.5,1]);
OrientationInterpolator209.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator209);
OrientationInterpolator210 := TOrientationInterpolatorNode.Create;
OrientationInterpolator210.SetKey([0,0.5,1]);
OrientationInterpolator210.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator210);
OrientationInterpolator211 := TOrientationInterpolatorNode.Create;
OrientationInterpolator211.SetKey([0,0.5,1]);
OrientationInterpolator211.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator211);
OrientationInterpolator212 := TOrientationInterpolatorNode.Create;
OrientationInterpolator212.SetKey([0,0.5,1]);
OrientationInterpolator212.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator212);
OrientationInterpolator213 := TOrientationInterpolatorNode.Create;
OrientationInterpolator213.SetKey([0,0.5,1]);
OrientationInterpolator213.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator213);
OrientationInterpolator214 := TOrientationInterpolatorNode.Create;
OrientationInterpolator214.SetKey([0,0.5,1]);
OrientationInterpolator214.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator214);
OrientationInterpolator215 := TOrientationInterpolatorNode.Create;
OrientationInterpolator215.SetKey([0,0.5,1]);
OrientationInterpolator215.SetKeyValue([Vector4(0,0,-1,2.5),Vector4(0,0,-1,1.5),Vector4(0,0,-1,1.75)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator215);
OrientationInterpolator216 := TOrientationInterpolatorNode.Create;
OrientationInterpolator216.SetKey([0,0.5,1]);
OrientationInterpolator216.SetKeyValue([Vector4(-1,0,0,3),Vector4(-1,0,0,0.75),Vector4(-1,-1,0,0.5)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator216);
OrientationInterpolator217 := TOrientationInterpolatorNode.Create;
OrientationInterpolator217.SetKey([0,0.5,0.7,1]);
OrientationInterpolator217.SetKeyValue([Vector4(0,1,0,0.3),Vector4(0,0,1,0),Vector4(0,0,-1,1),Vector4(0,-1,0,0.3)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator217);
OrientationInterpolator218 := TOrientationInterpolatorNode.Create;
OrientationInterpolator218.SetKey([0,0.5,1]);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part22;
begin

OrientationInterpolator218.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator218);
OrientationInterpolator219 := TOrientationInterpolatorNode.Create;
OrientationInterpolator219.SetKey([0,0.5,1]);
OrientationInterpolator219.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator219);
OrientationInterpolator220 := TOrientationInterpolatorNode.Create;
OrientationInterpolator220.SetKey([0,0.5,1]);
OrientationInterpolator220.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator220);
OrientationInterpolator221 := TOrientationInterpolatorNode.Create;
OrientationInterpolator221.SetKey([0,0.5,0.75,1]);
OrientationInterpolator221.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator221);
OrientationInterpolator222 := TOrientationInterpolatorNode.Create;
OrientationInterpolator222.SetKey([0,0.5,0.75,1]);
OrientationInterpolator222.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator222);
OrientationInterpolator223 := TOrientationInterpolatorNode.Create;
OrientationInterpolator223.SetKey([0,0.5,0.75,1]);
OrientationInterpolator223.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator223);
OrientationInterpolator224 := TOrientationInterpolatorNode.Create;
OrientationInterpolator224.SetKey([0,0.5,0.75,1]);
OrientationInterpolator224.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator224);
OrientationInterpolator225 := TOrientationInterpolatorNode.Create;
OrientationInterpolator225.SetKey([0,0.5,0.75,1]);
OrientationInterpolator225.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator225);
OrientationInterpolator226 := TOrientationInterpolatorNode.Create;
OrientationInterpolator226.SetKey([0,0.5,0.75,1]);
OrientationInterpolator226.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator226);
OrientationInterpolator227 := TOrientationInterpolatorNode.Create;
OrientationInterpolator227.SetKey([0,0.5,0.75,1]);
OrientationInterpolator227.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator227);
OrientationInterpolator228 := TOrientationInterpolatorNode.Create;
OrientationInterpolator228.SetKey([0,0.5,0.75,1]);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part23;
begin

OrientationInterpolator228.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator228);
OrientationInterpolator229 := TOrientationInterpolatorNode.Create;
OrientationInterpolator229.SetKey([0,0.5,0.75,1]);
OrientationInterpolator229.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator229);
OrientationInterpolator230 := TOrientationInterpolatorNode.Create;
OrientationInterpolator230.SetKey([0,0.5,0.75,1]);
OrientationInterpolator230.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator230);
OrientationInterpolator231 := TOrientationInterpolatorNode.Create;
OrientationInterpolator231.SetKey([0,0.5,0.75,1]);
OrientationInterpolator231.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator231);
OrientationInterpolator232 := TOrientationInterpolatorNode.Create;
OrientationInterpolator232.SetKey([0,0.5,0.75,1]);
OrientationInterpolator232.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator232);
OrientationInterpolator233 := TOrientationInterpolatorNode.Create;
OrientationInterpolator233.SetKey([0,0.5,0.75,1]);
OrientationInterpolator233.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator233);
OrientationInterpolator234 := TOrientationInterpolatorNode.Create;
OrientationInterpolator234.SetKey([0,0.5,0.75,1]);
OrientationInterpolator234.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator234);
OrientationInterpolator235 := TOrientationInterpolatorNode.Create;
OrientationInterpolator235.SetKey([0,0.5,0.75,1]);
OrientationInterpolator235.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator235);
OrientationInterpolator236 := TOrientationInterpolatorNode.Create;
OrientationInterpolator236.SetKey([0,0.5,0.75,1]);
OrientationInterpolator236.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(OrientationInterpolator236);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Group140);
{ TimeSensor to Interpolators }
{ Original "KickTimer.EventFraction_changed TO HumanoidRootRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO HumanoidRootRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator142.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO HumanoidRootTransInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO HumanoidRootTransInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, PositionInterpolator143.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO sacroiliacRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO sacroiliacRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator144.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_hipRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_hipRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator145.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_kneeRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_kneeRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator146.set_EventSet_fraction);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part24;
begin

{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_ankleRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_ankleRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator147.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_subtalarRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_subtalarRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator148.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_midtarsalRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_midtarsalRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator149.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_metatarsalRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_metatarsalRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator150.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_hipRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_hipRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator151.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_kneeRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_kneeRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator152.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_ankleRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_ankleRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator153.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_subtalarRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_subtalarRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator154.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_midtarsalRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_midtarsalRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator155.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_metatarsalRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_metatarsalRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator156.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vl5RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vl5RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator157.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vl4RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vl4RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator158.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vl3RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vl3RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator159.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vl2RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vl2RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator160.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vl1RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vl1RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator161.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vt12RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vt12RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator162.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vt11RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vt11RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator163.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vt10RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vt10RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator164.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vt9RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vt9RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator165.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vt8RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vt8RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator166.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vt7RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vt7RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator167.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vt6RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vt6RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator168.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vt5RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vt5RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator169.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vt4RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vt4RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator170.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vt3RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vt3RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator171.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vt2RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vt2RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator172.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vt1RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vt1RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator173.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vc7RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vc7RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator174.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vc6RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vc6RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator175.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vc5RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vc5RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator176.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vc4RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vc4RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator177.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vc3RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vc3RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator178.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vc2RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vc2RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator179.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vc1RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vc1RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator180.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO skullbaseRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO skullbaseRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator181.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_eyelid_jointRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_eyelid_jointRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator182.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_eyeball_jointRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_eyeball_jointRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator183.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_eyebrow_jointRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_eyebrow_jointRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator184.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_eyelid_jointRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_eyelid_jointRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator185.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_eyeball_jointRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_eyeball_jointRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator186.set_EventSet_fraction);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part25;
begin

{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_eyebrow_jointRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_eyebrow_jointRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator187.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO temporomandibularRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO temporomandibularRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator188.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_sternoclavicularRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_sternoclavicularRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator189.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_acromioclavicularRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_acromioclavicularRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator190.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_shoulderRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_shoulderRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator191.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_elbowRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_elbowRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator192.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_wristRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_wristRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator193.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_thumb1RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_thumb1RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator194.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_thumb2RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_thumb2RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator195.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_thumb3RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_thumb3RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator196.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_index0RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_index0RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator197.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_index1RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_index1RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator198.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_index2RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_index2RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator199.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_index3RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_index3RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator200.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_middle0RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_middle0RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator201.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_middle1RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_middle1RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator202.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_middle2RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_middle2RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator203.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_middle3RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_middle3RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator204.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_ring0RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_ring0RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator205.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_ring1RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_ring1RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator206.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_ring2RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_ring2RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator207.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_ring3RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_ring3RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator208.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_pinky0RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_pinky0RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator209.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_pinky1RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_pinky1RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator210.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_pinky2RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_pinky2RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator211.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_pinky3RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_pinky3RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator212.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_sternoclavicularRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_sternoclavicularRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator213.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_acromioclavicularRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_acromioclavicularRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator214.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_shoulderRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_shoulderRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator215.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_elbowRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_elbowRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator216.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_wristRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_wristRotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator217.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_thumb1RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_thumb1RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator218.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_thumb2RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_thumb2RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator219.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_thumb3RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_thumb3RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator220.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_index0RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_index0RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator221.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_index1RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_index1RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator222.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_index2RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_index2RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator223.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_index3RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_index3RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator224.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_middle0RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_middle0RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator225.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_middle1RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_middle1RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator226.set_EventSet_fraction);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part26;
begin

{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_middle2RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_middle2RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator227.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_middle3RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_middle3RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator228.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_ring0RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_ring0RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator229.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_ring1RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_ring1RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator230.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_ring2RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_ring2RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator231.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_ring3RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_ring3RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator232.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_pinky0RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_pinky0RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator233.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_pinky1RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_pinky1RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator234.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_pinky2RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_pinky2RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator235.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_pinky3RotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_pinky3RotInterp.EventSet_fraction}
Group15.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator236.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Routes from Interpolators to Joe_ model Joints }
{ Original "HumanoidRootRotInterp.EventValue_changed TO Joe_HumanoidRoot.EventSet_rotation }
{ Sample HumanoidRootRotInterp.EventValue_changed TO Joe_HumanoidRoot.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator142.EventValue_changed, HAnimJoint28.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "HumanoidRootTransInterp.EventValue_changed TO Joe_HumanoidRoot.EventSet_translation }
{ Sample HumanoidRootTransInterp.EventValue_changed TO Joe_HumanoidRoot.EventSet_translation}
Group15.AddRoute(PositionInterpolator143.EventValue_changed, HAnimJoint28.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ Original "sacroiliacRotInterp.EventValue_changed TO Joe_sacroiliac.EventSet_rotation }
{ Sample sacroiliacRotInterp.EventValue_changed TO Joe_sacroiliac.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator144.EventValue_changed, HAnimJoint37.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_hipRotInterp.EventValue_changed TO Joe_l_hip.EventSet_rotation }
{ Sample l_hipRotInterp.EventValue_changed TO Joe_l_hip.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator145.EventValue_changed, HAnimJoint38.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_kneeRotInterp.EventValue_changed TO Joe_l_knee.EventSet_rotation }
{ Sample l_kneeRotInterp.EventValue_changed TO Joe_l_knee.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator146.EventValue_changed, HAnimJoint39.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_ankleRotInterp.EventValue_changed TO Joe_l_ankle.EventSet_rotation }
{ Sample l_ankleRotInterp.EventValue_changed TO Joe_l_ankle.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator147.EventValue_changed, HAnimJoint40.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_subtalarRotInterp.EventValue_changed TO Joe_l_subtalar.EventSet_rotation }
{ Sample l_subtalarRotInterp.EventValue_changed TO Joe_l_subtalar.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator148.EventValue_changed, HAnimJoint41.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_midtarsalRotInterp.EventValue_changed TO Joe_l_midtarsal.EventSet_rotation }
{ Sample l_midtarsalRotInterp.EventValue_changed TO Joe_l_midtarsal.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator149.EventValue_changed, HAnimJoint42.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_metatarsalRotInterp.EventValue_changed TO Joe_l_metatarsal.EventSet_rotation }
{ Sample l_metatarsalRotInterp.EventValue_changed TO Joe_l_metatarsal.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator150.EventValue_changed, HAnimJoint43.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_hipRotInterp.EventValue_changed TO Joe_r_hip.EventSet_rotation }
{ Sample r_hipRotInterp.EventValue_changed TO Joe_r_hip.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator151.EventValue_changed, HAnimJoint44.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_kneeRotInterp.EventValue_changed TO Joe_r_knee.EventSet_rotation }
{ Sample r_kneeRotInterp.EventValue_changed TO Joe_r_knee.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator152.EventValue_changed, HAnimJoint45.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_ankleRotInterp.EventValue_changed TO Joe_r_ankle.EventSet_rotation }
{ Sample r_ankleRotInterp.EventValue_changed TO Joe_r_ankle.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator153.EventValue_changed, HAnimJoint46.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_subtalarRotInterp.EventValue_changed TO Joe_r_subtalar.EventSet_rotation }
{ Sample r_subtalarRotInterp.EventValue_changed TO Joe_r_subtalar.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator154.EventValue_changed, HAnimJoint47.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_midtarsalRotInterp.EventValue_changed TO Joe_r_midtarsal.EventSet_rotation }
{ Sample r_midtarsalRotInterp.EventValue_changed TO Joe_r_midtarsal.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator155.EventValue_changed, HAnimJoint48.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_metatarsalRotInterp.EventValue_changed TO Joe_r_metatarsal.EventSet_rotation }
{ Sample r_metatarsalRotInterp.EventValue_changed TO Joe_r_metatarsal.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator156.EventValue_changed, HAnimJoint49.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "vl5RotInterp.EventValue_changed TO Joe_vl5.EventSet_rotation }
{ Sample vl5RotInterp.EventValue_changed TO Joe_vl5.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator157.EventValue_changed, HAnimJoint50.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "vl4RotInterp.EventValue_changed TO Joe_vl4.EventSet_rotation }
{ Sample vl4RotInterp.EventValue_changed TO Joe_vl4.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator158.EventValue_changed, HAnimJoint51.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "vl3RotInterp.EventValue_changed TO Joe_vl3.EventSet_rotation }
{ Sample vl3RotInterp.EventValue_changed TO Joe_vl3.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator159.EventValue_changed, HAnimJoint52.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "vl2RotInterp.EventValue_changed TO Joe_vl2.EventSet_rotation }
{ Sample vl2RotInterp.EventValue_changed TO Joe_vl2.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator160.EventValue_changed, HAnimJoint53.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "vl1RotInterp.EventValue_changed TO Joe_vl1.EventSet_rotation }
{ Sample vl1RotInterp.EventValue_changed TO Joe_vl1.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator161.EventValue_changed, HAnimJoint54.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "vt12RotInterp.EventValue_changed TO Joe_vt12.EventSet_rotation }
{ Sample vt12RotInterp.EventValue_changed TO Joe_vt12.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator162.EventValue_changed, HAnimJoint55.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "vt11RotInterp.EventValue_changed TO Joe_vt11.EventSet_rotation }
{ Sample vt11RotInterp.EventValue_changed TO Joe_vt11.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator163.EventValue_changed, HAnimJoint56.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "vt10RotInterp.EventValue_changed TO Joe_vt10.EventSet_rotation }
{ Sample vt10RotInterp.EventValue_changed TO Joe_vt10.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator164.EventValue_changed, HAnimJoint57.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "vt9RotInterp.EventValue_changed TO Joe_vt9.EventSet_rotation }
{ Sample vt9RotInterp.EventValue_changed TO Joe_vt9.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator165.EventValue_changed, HAnimJoint58.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "vt8RotInterp.EventValue_changed TO Joe_vt8.EventSet_rotation }
{ Sample vt8RotInterp.EventValue_changed TO Joe_vt8.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator166.EventValue_changed, HAnimJoint59.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "vt7RotInterp.EventValue_changed TO Joe_vt7.EventSet_rotation }
{ Sample vt7RotInterp.EventValue_changed TO Joe_vt7.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator167.EventValue_changed, HAnimJoint60.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "vt6RotInterp.EventValue_changed TO Joe_vt6.EventSet_rotation }
{ Sample vt6RotInterp.EventValue_changed TO Joe_vt6.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator168.EventValue_changed, HAnimJoint61.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "vt5RotInterp.EventValue_changed TO Joe_vt5.EventSet_rotation }
{ Sample vt5RotInterp.EventValue_changed TO Joe_vt5.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator169.EventValue_changed, HAnimJoint62.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "vt4RotInterp.EventValue_changed TO Joe_vt4.EventSet_rotation }
{ Sample vt4RotInterp.EventValue_changed TO Joe_vt4.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator170.EventValue_changed, HAnimJoint63.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "vt3RotInterp.EventValue_changed TO Joe_vt3.EventSet_rotation }
{ Sample vt3RotInterp.EventValue_changed TO Joe_vt3.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator171.EventValue_changed, HAnimJoint64.set_EventSet_rotation);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part27;
begin

{ METHOD .AddX3DROUTE }
{ Original "vt2RotInterp.EventValue_changed TO Joe_vt2.EventSet_rotation }
{ Sample vt2RotInterp.EventValue_changed TO Joe_vt2.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator172.EventValue_changed, HAnimJoint65.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "vt1RotInterp.EventValue_changed TO Joe_vt1.EventSet_rotation }
{ Sample vt1RotInterp.EventValue_changed TO Joe_vt1.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator173.EventValue_changed, HAnimJoint66.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "vc7RotInterp.EventValue_changed TO Joe_vc7.EventSet_rotation }
{ Sample vc7RotInterp.EventValue_changed TO Joe_vc7.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator174.EventValue_changed, HAnimJoint67.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "vc6RotInterp.EventValue_changed TO Joe_vc6.EventSet_rotation }
{ Sample vc6RotInterp.EventValue_changed TO Joe_vc6.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator175.EventValue_changed, HAnimJoint68.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "vc5RotInterp.EventValue_changed TO Joe_vc5.EventSet_rotation }
{ Sample vc5RotInterp.EventValue_changed TO Joe_vc5.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator176.EventValue_changed, HAnimJoint69.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "vc4RotInterp.EventValue_changed TO Joe_vc4.EventSet_rotation }
{ Sample vc4RotInterp.EventValue_changed TO Joe_vc4.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator177.EventValue_changed, HAnimJoint70.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "vc3RotInterp.EventValue_changed TO Joe_vc3.EventSet_rotation }
{ Sample vc3RotInterp.EventValue_changed TO Joe_vc3.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator178.EventValue_changed, HAnimJoint71.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "vc2RotInterp.EventValue_changed TO Joe_vc2.EventSet_rotation }
{ Sample vc2RotInterp.EventValue_changed TO Joe_vc2.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator179.EventValue_changed, HAnimJoint72.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "vc1RotInterp.EventValue_changed TO Joe_vc1.EventSet_rotation }
{ Sample vc1RotInterp.EventValue_changed TO Joe_vc1.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator180.EventValue_changed, HAnimJoint73.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "skullbaseRotInterp.EventValue_changed TO Joe_skullbase.EventSet_rotation }
{ Sample skullbaseRotInterp.EventValue_changed TO Joe_skullbase.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator181.EventValue_changed, HAnimJoint74.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_eyelid_jointRotInterp.EventValue_changed TO Joe_l_eyelid_joint.EventSet_rotation }
{ Sample l_eyelid_jointRotInterp.EventValue_changed TO Joe_l_eyelid_joint.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator182.EventValue_changed, HAnimJoint76.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_eyeball_jointRotInterp.EventValue_changed TO Joe_l_eyeball_joint.EventSet_rotation }
{ Sample l_eyeball_jointRotInterp.EventValue_changed TO Joe_l_eyeball_joint.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator183.EventValue_changed, HAnimJoint77.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_eyebrow_jointRotInterp.EventValue_changed TO Joe_l_eyebrow_joint.EventSet_rotation }
{ Sample l_eyebrow_jointRotInterp.EventValue_changed TO Joe_l_eyebrow_joint.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator184.EventValue_changed, HAnimJoint78.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_eyelid_jointRotInterp.EventValue_changed TO Joe_r_eyelid_joint.EventSet_rotation }
{ Sample r_eyelid_jointRotInterp.EventValue_changed TO Joe_r_eyelid_joint.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator185.EventValue_changed, HAnimJoint79.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_eyeball_jointRotInterp.EventValue_changed TO Joe_r_eyeball_joint.EventSet_rotation }
{ Sample r_eyeball_jointRotInterp.EventValue_changed TO Joe_r_eyeball_joint.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator186.EventValue_changed, HAnimJoint80.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_eyebrow_jointRotInterp.EventValue_changed TO Joe_r_eyebrow_joint.EventSet_rotation }
{ Sample r_eyebrow_jointRotInterp.EventValue_changed TO Joe_r_eyebrow_joint.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator187.EventValue_changed, HAnimJoint81.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "temporomandibularRotInterp.EventValue_changed TO Joe_temporomandibular.EventSet_rotation }
{ Sample temporomandibularRotInterp.EventValue_changed TO Joe_temporomandibular.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator188.EventValue_changed, HAnimJoint82.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_sternoclavicularRotInterp.EventValue_changed TO Joe_l_sternoclavicular.EventSet_rotation }
{ Sample l_sternoclavicularRotInterp.EventValue_changed TO Joe_l_sternoclavicular.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator189.EventValue_changed, HAnimJoint83.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_acromioclavicularRotInterp.EventValue_changed TO Joe_l_acromioclavicular.EventSet_rotation }
{ Sample l_acromioclavicularRotInterp.EventValue_changed TO Joe_l_acromioclavicular.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator190.EventValue_changed, HAnimJoint84.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_shoulderRotInterp.EventValue_changed TO Joe_l_shoulder.EventSet_rotation }
{ Sample l_shoulderRotInterp.EventValue_changed TO Joe_l_shoulder.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator191.EventValue_changed, HAnimJoint85.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_elbowRotInterp.EventValue_changed TO Joe_l_elbow.EventSet_rotation }
{ Sample l_elbowRotInterp.EventValue_changed TO Joe_l_elbow.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator192.EventValue_changed, HAnimJoint86.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_wristRotInterp.EventValue_changed TO Joe_l_wrist.EventSet_rotation }
{ Sample l_wristRotInterp.EventValue_changed TO Joe_l_wrist.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator193.EventValue_changed, HAnimJoint87.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_thumb1RotInterp.EventValue_changed TO Joe_l_thumb1.EventSet_rotation }
{ Sample l_thumb1RotInterp.EventValue_changed TO Joe_l_thumb1.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator194.EventValue_changed, HAnimJoint88.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_thumb2RotInterp.EventValue_changed TO Joe_l_thumb2.EventSet_rotation }
{ Sample l_thumb2RotInterp.EventValue_changed TO Joe_l_thumb2.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator195.EventValue_changed, HAnimJoint89.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_thumb3RotInterp.EventValue_changed TO Joe_l_thumb3.EventSet_rotation }
{ Sample l_thumb3RotInterp.EventValue_changed TO Joe_l_thumb3.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator196.EventValue_changed, HAnimJoint90.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_index0RotInterp.EventValue_changed TO Joe_l_index0.EventSet_rotation }
{ Sample l_index0RotInterp.EventValue_changed TO Joe_l_index0.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator197.EventValue_changed, HAnimJoint91.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_index1RotInterp.EventValue_changed TO Joe_l_index1.EventSet_rotation }
{ Sample l_index1RotInterp.EventValue_changed TO Joe_l_index1.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator198.EventValue_changed, HAnimJoint92.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_index2RotInterp.EventValue_changed TO Joe_l_index2.EventSet_rotation }
{ Sample l_index2RotInterp.EventValue_changed TO Joe_l_index2.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator199.EventValue_changed, HAnimJoint93.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_index3RotInterp.EventValue_changed TO Joe_l_index3.EventSet_rotation }
{ Sample l_index3RotInterp.EventValue_changed TO Joe_l_index3.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator200.EventValue_changed, HAnimJoint94.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_middle0RotInterp.EventValue_changed TO Joe_l_middle0.EventSet_rotation }
{ Sample l_middle0RotInterp.EventValue_changed TO Joe_l_middle0.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator201.EventValue_changed, HAnimJoint95.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_middle1RotInterp.EventValue_changed TO Joe_l_middle1.EventSet_rotation }
{ Sample l_middle1RotInterp.EventValue_changed TO Joe_l_middle1.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator202.EventValue_changed, HAnimJoint96.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_middle2RotInterp.EventValue_changed TO Joe_l_middle2.EventSet_rotation }
{ Sample l_middle2RotInterp.EventValue_changed TO Joe_l_middle2.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator203.EventValue_changed, HAnimJoint97.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_middle3RotInterp.EventValue_changed TO Joe_l_middle3.EventSet_rotation }
{ Sample l_middle3RotInterp.EventValue_changed TO Joe_l_middle3.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator204.EventValue_changed, HAnimJoint98.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_ring0RotInterp.EventValue_changed TO Joe_l_ring0.EventSet_rotation }
{ Sample l_ring0RotInterp.EventValue_changed TO Joe_l_ring0.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator205.EventValue_changed, HAnimJoint99.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_ring1RotInterp.EventValue_changed TO Joe_l_ring1.EventSet_rotation }
{ Sample l_ring1RotInterp.EventValue_changed TO Joe_l_ring1.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator206.EventValue_changed, HAnimJoint100.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_ring2RotInterp.EventValue_changed TO Joe_l_ring2.EventSet_rotation }
{ Sample l_ring2RotInterp.EventValue_changed TO Joe_l_ring2.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator207.EventValue_changed, HAnimJoint101.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_ring3RotInterp.EventValue_changed TO Joe_l_ring3.EventSet_rotation }
{ Sample l_ring3RotInterp.EventValue_changed TO Joe_l_ring3.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator208.EventValue_changed, HAnimJoint102.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_pinky0RotInterp.EventValue_changed TO Joe_l_pinky0.EventSet_rotation }
{ Sample l_pinky0RotInterp.EventValue_changed TO Joe_l_pinky0.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator209.EventValue_changed, HAnimJoint103.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_pinky1RotInterp.EventValue_changed TO Joe_l_pinky1.EventSet_rotation }
{ Sample l_pinky1RotInterp.EventValue_changed TO Joe_l_pinky1.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator210.EventValue_changed, HAnimJoint104.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "l_pinky2RotInterp.EventValue_changed TO Joe_l_pinky2.EventSet_rotation }
{ Sample l_pinky2RotInterp.EventValue_changed TO Joe_l_pinky2.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator211.EventValue_changed, HAnimJoint105.set_EventSet_rotation);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part28;
begin

{ METHOD .AddX3DROUTE }
{ Original "l_pinky3RotInterp.EventValue_changed TO Joe_l_pinky3.EventSet_rotation }
{ Sample l_pinky3RotInterp.EventValue_changed TO Joe_l_pinky3.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator212.EventValue_changed, HAnimJoint106.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_sternoclavicularRotInterp.EventValue_changed TO Joe_r_sternoclavicular.EventSet_rotation }
{ Sample r_sternoclavicularRotInterp.EventValue_changed TO Joe_r_sternoclavicular.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator213.EventValue_changed, HAnimJoint107.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_acromioclavicularRotInterp.EventValue_changed TO Joe_r_acromioclavicular.EventSet_rotation }
{ Sample r_acromioclavicularRotInterp.EventValue_changed TO Joe_r_acromioclavicular.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator214.EventValue_changed, HAnimJoint108.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_shoulderRotInterp.EventValue_changed TO Joe_r_shoulder.EventSet_rotation }
{ Sample r_shoulderRotInterp.EventValue_changed TO Joe_r_shoulder.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator215.EventValue_changed, HAnimJoint109.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_elbowRotInterp.EventValue_changed TO Joe_r_elbow.EventSet_rotation }
{ Sample r_elbowRotInterp.EventValue_changed TO Joe_r_elbow.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator216.EventValue_changed, HAnimJoint110.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_wristRotInterp.EventValue_changed TO Joe_r_wrist.EventSet_rotation }
{ Sample r_wristRotInterp.EventValue_changed TO Joe_r_wrist.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator217.EventValue_changed, HAnimJoint111.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_thumb1RotInterp.EventValue_changed TO Joe_r_thumb1.EventSet_rotation }
{ Sample r_thumb1RotInterp.EventValue_changed TO Joe_r_thumb1.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator218.EventValue_changed, HAnimJoint112.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_thumb2RotInterp.EventValue_changed TO Joe_r_thumb2.EventSet_rotation }
{ Sample r_thumb2RotInterp.EventValue_changed TO Joe_r_thumb2.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator219.EventValue_changed, HAnimJoint113.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_thumb3RotInterp.EventValue_changed TO Joe_r_thumb3.EventSet_rotation }
{ Sample r_thumb3RotInterp.EventValue_changed TO Joe_r_thumb3.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator220.EventValue_changed, HAnimJoint114.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_index0RotInterp.EventValue_changed TO Joe_r_index0.EventSet_rotation }
{ Sample r_index0RotInterp.EventValue_changed TO Joe_r_index0.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator221.EventValue_changed, HAnimJoint115.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_index1RotInterp.EventValue_changed TO Joe_r_index1.EventSet_rotation }
{ Sample r_index1RotInterp.EventValue_changed TO Joe_r_index1.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator222.EventValue_changed, HAnimJoint116.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_index2RotInterp.EventValue_changed TO Joe_r_index2.EventSet_rotation }
{ Sample r_index2RotInterp.EventValue_changed TO Joe_r_index2.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator223.EventValue_changed, HAnimJoint117.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_index3RotInterp.EventValue_changed TO Joe_r_index3.EventSet_rotation }
{ Sample r_index3RotInterp.EventValue_changed TO Joe_r_index3.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator224.EventValue_changed, HAnimJoint118.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_middle0RotInterp.EventValue_changed TO Joe_r_middle0.EventSet_rotation }
{ Sample r_middle0RotInterp.EventValue_changed TO Joe_r_middle0.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator225.EventValue_changed, HAnimJoint119.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_middle1RotInterp.EventValue_changed TO Joe_r_middle1.EventSet_rotation }
{ Sample r_middle1RotInterp.EventValue_changed TO Joe_r_middle1.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator226.EventValue_changed, HAnimJoint120.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_middle2RotInterp.EventValue_changed TO Joe_r_middle2.EventSet_rotation }
{ Sample r_middle2RotInterp.EventValue_changed TO Joe_r_middle2.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator227.EventValue_changed, HAnimJoint121.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_middle3RotInterp.EventValue_changed TO Joe_r_middle3.EventSet_rotation }
{ Sample r_middle3RotInterp.EventValue_changed TO Joe_r_middle3.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator228.EventValue_changed, HAnimJoint122.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_ring0RotInterp.EventValue_changed TO Joe_r_ring0.EventSet_rotation }
{ Sample r_ring0RotInterp.EventValue_changed TO Joe_r_ring0.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator229.EventValue_changed, HAnimJoint123.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_ring1RotInterp.EventValue_changed TO Joe_r_ring1.EventSet_rotation }
{ Sample r_ring1RotInterp.EventValue_changed TO Joe_r_ring1.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator230.EventValue_changed, HAnimJoint124.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_ring2RotInterp.EventValue_changed TO Joe_r_ring2.EventSet_rotation }
{ Sample r_ring2RotInterp.EventValue_changed TO Joe_r_ring2.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator231.EventValue_changed, HAnimJoint125.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_ring3RotInterp.EventValue_changed TO Joe_r_ring3.EventSet_rotation }
{ Sample r_ring3RotInterp.EventValue_changed TO Joe_r_ring3.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator232.EventValue_changed, HAnimJoint126.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_pinky0RotInterp.EventValue_changed TO Joe_r_pinky0.EventSet_rotation }
{ Sample r_pinky0RotInterp.EventValue_changed TO Joe_r_pinky0.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator233.EventValue_changed, HAnimJoint127.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_pinky1RotInterp.EventValue_changed TO Joe_r_pinky1.EventSet_rotation }
{ Sample r_pinky1RotInterp.EventValue_changed TO Joe_r_pinky1.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator234.EventValue_changed, HAnimJoint128.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_pinky2RotInterp.EventValue_changed TO Joe_r_pinky2.EventSet_rotation }
{ Sample r_pinky2RotInterp.EventValue_changed TO Joe_r_pinky2.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator235.EventValue_changed, HAnimJoint129.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ Original "r_pinky3RotInterp.EventValue_changed TO Joe_r_pinky3.EventSet_rotation }
{ Sample r_pinky3RotInterp.EventValue_changed TO Joe_r_pinky3.EventSet_rotation}
Group15.AddRoute(OrientationInterpolator236.EventValue_changed, HAnimJoint130.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
Group427 := TGroupNode.Create;
{ TimeSensor DEF='skull_tipTestTimer' cycleInterval='5.73' loop='true' enabled='true'></TimeSensor }
ScalarInterpolator428 := TScalarInterpolatorNode.Create;
ScalarInterpolator428.SetKey([0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1]);
ScalarInterpolator428.SetKeyValue([0,0,0,0,0.2,0.4,1,0,1,0.4,0]);
{ METHOD .FdChildren.Add }
Group427.FdChildren.Add(ScalarInterpolator428);
{ Original "KickTimer.EventFraction_changed TO skull_tipTest.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO skull_tipTest.EventSet_fraction}
Group427.AddRoute(TimeSensor141.EventFraction_changed, ScalarInterpolator428.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "skull_tipTest.EventValue_changed TO Joe_skull_tipTest.FWeight }
{ Sample skull_tipTest.EventValue_changed TO Joe_skull_tipTest.FWeight}
Group427.AddRoute(ScalarInterpolator428.EventValue_changed, HAnimDisplacer75.set_FWeight);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Group427);
Group431 := TGroupNode.Create;
ScalarInterpolator432 := TScalarInterpolatorNode.Create;
ScalarInterpolator432.SetKey([0,0.2,0.4,0.5,0.6,0.7,0.8,1]);
ScalarInterpolator432.SetKeyValue([0,0,0,0,0,1,2,0]);
{ METHOD .FdChildren.Add }
Group431.FdChildren.Add(ScalarInterpolator432);
{ Original "KickTimer.EventFraction_changed TO skinTexTransTest.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO skinTexTransTest.EventSet_fraction}
Group431.AddRoute(TimeSensor141.EventFraction_changed, ScalarInterpolator432.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "skinTexTransTest.EventValue_changed TO kicktextrans.rotation }
{ Sample skinTexTransTest.EventValue_changed TO kicktextrans.rotation}
Group431.AddRoute(ScalarInterpolator432.EventValue_changed, TextureTransform135.set_rotation);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part29;
begin

{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Group431);
Group435 := TGroupNode.Create;
Transform436 := TTransformNode.Create;
Transform436.Rotation := Vector4(0.7,0,0.7,0.1);
Transform436.Scale := Vector3(0.23,0.23,0.23);
Transform436.Translation := Vector3(-0.916,0.37,-0.92);
Shape437 := TShapeNode.Create;
Appearance438 := TAppearanceNode.Create;
Material439 := TMaterialNode.Create;
Material439.DiffuseColor := Vector3(0.3,0.3,1);
Material439.EmissiveColor := Vector3(0.3,0.3,0.33);
{ METHOD .SetMaterial }
Appearance438.Material := Material439;
{ METHOD .Texture }
Appearance438.Texture := ImageTexture134;
{ METHOD .Appearance }
Shape437.Appearance := Appearance438;
IndexedFaceSet441 := TIndexedFaceSetNode.Create;
IndexedFaceSet441.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
Coordinate442 := TCoordinateNode.Create;
Coordinate442.SetPoint([Vector3(0,0.4675,0),Vector3(0,0.4049,-0.2338),Vector3(-0.1169,0.4049,-0.2024),Vector3(-0.2024,0.4049,-0.1169),Vector3(-0.2338,0.4049,0),Vector3(-0.2024,0.4049,0.1169),Vector3(-0.1169,0.4049,0.2024),Vector3(0,0.4049,0.2338),Vector3(0.1169,0.4049,0.2024),Vector3(0.2024,0.4049,0.1169),Vector3(0.2338,0.4049,0),Vector3(0.2024,0.4049,-0.1169),Vector3(0.1169,0.4049,-0.2024),Vector3(0,0.2338,-0.4049),Vector3(-0.2024,0.2338,-0.3506),Vector3(-0.3506,0.2338,-0.2024),Vector3(-0.4049,0.2338,0),Vector3(-0.3506,0.2338,0.2024),Vector3(-0.2024,0.2338,0.3506),Vector3(0,0.2338,0.4049),Vector3(0.2024,0.2338,0.3506),Vector3(0.3506,0.2338,0.2024),Vector3(0.4049,0.2338,0),Vector3(0.3506,0.2338,-0.2024),Vector3(0.2024,0.2338,-0.3506),Vector3(0,0,-0.4675),Vector3(-0.2338,0,-0.4049),Vector3(-0.4049,0,-0.2338),Vector3(-0.4675,0,0),Vector3(-0.4049,0,0.2338),Vector3(-0.2338,0,0.4049),Vector3(0,0,0.4675),Vector3(0.2338,0,0.4049),Vector3(0.4049,0,0.2338),Vector3(0.4675,0,0),Vector3(0.4049,0,-0.2338),Vector3(0.2338,0,-0.4049),Vector3(0,-0.2338,-0.4049),Vector3(-0.2024,-0.2338,-0.3506),Vector3(-0.3506,-0.2338,-0.2024),Vector3(-0.4049,-0.2338,0),Vector3(-0.3506,-0.2338,0.2024),Vector3(-0.2024,-0.2338,0.3506),Vector3(0,-0.2338,0.4049),Vector3(0.2024,-0.2338,0.3506),Vector3(0.3506,-0.2338,0.2024),Vector3(0.4049,-0.2338,0),Vector3(0.3506,-0.2338,-0.2024),Vector3(0.2024,-0.2338,-0.3506),Vector3(0,-0.4049,-0.2338),Vector3(-0.1169,-0.4049,-0.2024),Vector3(-0.2024,-0.4049,-0.1169),Vector3(-0.2338,-0.4049,0),Vector3(-0.2024,-0.4049,0.1169),Vector3(-0.1169,-0.4049,0.2024),Vector3(0,-0.4049,0.2338),Vector3(0.1169,-0.4049,0.2024),Vector3(0.2024,-0.4049,0.1169),Vector3(0.2338,-0.4049,0),Vector3(0.2024,-0.4049,-0.1169),Vector3(0.1169,-0.4049,-0.2024),Vector3(0,-0.4675,0)]);
{ METHOD .Coord }
IndexedFaceSet441.Coord := Coordinate442;
{ METHOD .Geometry }
Shape437.Geometry := IndexedFaceSet441;
{ METHOD .FdChildren.Add }
Transform436.FdChildren.Add(Shape437);
Viewpoint443 := TViewpointNode.Create;
Viewpoint443.Description := 'Ball View';
{ METHOD .FdChildren.Add }
Transform436.FdChildren.Add(Viewpoint443);
{ METHOD .FdChildren.Add }
Group435.FdChildren.Add(Transform436);
{ Ball Animation interpolators }
PositionInterpolator444 := TPositionInterpolatorNode.Create;
PositionInterpolator444.SetKey([0,0.4,0.409,1]);
PositionInterpolator444.SetKeyValue([Vector3(-1,0.4,-1),Vector3(0,0.07,0),Vector3(0.05,0.06,0.05),Vector3(2,4,10)]);
{ METHOD .FdChildren.Add }
Group435.FdChildren.Add(PositionInterpolator444);
OrientationInterpolator445 := TOrientationInterpolatorNode.Create;
OrientationInterpolator445.SetKey([0,0.4,0.41,0.71,1]);
OrientationInterpolator445.SetKeyValue([Vector4(1,0,1,0.25),Vector4(-1,0,-1,1.35),Vector4(-1,1,-1,3.35),Vector4(-1,0.2,-1,3),Vector4(-1,0.2,-1,3)]);
{ METHOD .FdChildren.Add }
Group435.FdChildren.Add(OrientationInterpolator445);
{ Ball Animation Routes }
{ Original "KickTimer.EventFraction_changed TO ballTransInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO ballTransInterp.EventSet_fraction}
Group435.AddRoute(TimeSensor141.EventFraction_changed, PositionInterpolator444.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "ballTransInterp.EventValue_changed TO SBall.EventSet_translation }
{ Sample ballTransInterp.EventValue_changed TO SBall.EventSet_translation}
Group435.AddRoute(PositionInterpolator444.EventValue_changed, Transform436.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO ballRotInterp.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO ballRotInterp.EventSet_fraction}
Group435.AddRoute(TimeSensor141.EventFraction_changed, OrientationInterpolator445.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "ballRotInterp.EventValue_changed TO SBall.EventSet_rotation }
{ Sample ballRotInterp.EventValue_changed TO SBall.EventSet_rotation}
Group435.AddRoute(OrientationInterpolator445.EventValue_changed, Transform436.set_EventSet_rotation);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Group435);
Group450 := TGroupNode.Create;
Transform451 := TTransformNode.Create;
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part30;
begin

Transform451.Scale := Vector3(0.2,0.2,0.2);
{ METHOD .FdChildren.Add }
Transform451.FdChildren.Add(Shape33);
{ METHOD .FdChildren.Add }
Group450.FdChildren.Add(Transform451);
Transform453 := TTransformNode.Create;
Transform453.Scale := Vector3(1.175,1,1.175);
Shape454 := TShapeNode.Create;
Appearance455 := TAppearanceNode.Create;
Material456 := TMaterialNode.Create;
Material456.AmbientIntensity := 0.9;
Material456.DiffuseColor := Vector3(0.9,0,0.7);
Material456.EmissiveColor := Vector3(0.425,0.486,1);
{ METHOD .SetMaterial }
Appearance455.Material := Material456;
{ METHOD .Appearance }
Shape454.Appearance := Appearance455;
IndexedLineSet457 := TIndexedLineSetNode.Create;
IndexedLineSet457.SetCoordIndex([0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]);
Coordinate458 := TCoordinateNode.Create;
Coordinate458.SetPoint([Vector3(1,0,0),Vector3(0.995,0,-0.105),Vector3(0.979,0,-0.208),Vector3(0.951,0,-0.309),Vector3(0.914,0,-0.407),Vector3(0.866,0,-0.5),Vector3(0.809,0,-0.588),Vector3(0.743,0,-0.669),Vector3(0.669,0,-0.743),Vector3(0.588,0,-0.809),Vector3(0.5,0,-0.866),Vector3(0.407,0,-0.914),Vector3(0.309,0,-0.951),Vector3(0.208,0,-0.978),Vector3(0.105,0,-0.995),Vector3(0,0,-1),Vector3(-0.105,0,-0.994522),Vector3(-0.208,0,-0.978),Vector3(-0.309,0,-0.951),Vector3(-0.407,0,-0.914),Vector3(-0.5,0,-0.866),Vector3(-0.588,0,-0.809),Vector3(-0.669,0,-0.743),Vector3(-0.743,0,-0.669),Vector3(-0.809,0,-0.588),Vector3(-0.866,0,-0.5),Vector3(-0.914,0,-0.407),Vector3(-0.951,0,-0.309),Vector3(-0.978,0,-0.208),Vector3(-0.995,0,-0.105),Vector3(-1,0,0),Vector3(-0.995,0,0.105),Vector3(-0.978,0,0.208),Vector3(-0.951,0,0.309),Vector3(-0.914,0,0.407),Vector3(-0.866,0,0.5),Vector3(-0.809,0,0.588),Vector3(-0.743,0,0.669),Vector3(-0.669,0,0.743),Vector3(-0.588,0,0.809),Vector3(-0.5,0,0.866),Vector3(-0.407,0,0.914),Vector3(-0.309,0,0.951),Vector3(-0.208,0,0.978),Vector3(-0.105,0,0.995),Vector3(0,0,1),Vector3(0.105,0,0.995),Vector3(0.208,0,0.978),Vector3(0.309,0,0.951),Vector3(0.407,0,0.914),Vector3(0.5,0,0.866),Vector3(0.588,0,0.809),Vector3(0.669,0,0.743),Vector3(0.743,0,0.669),Vector3(0.809,0,0.588),Vector3(0.866,0,0.5),Vector3(0.914,0,0.407),Vector3(0.951,0,0.309),Vector3(0.978,0,0.208),Vector3(0.995,0,0.104),Vector3(1,0,0)]);
{ METHOD .Coord }
IndexedLineSet457.Coord := Coordinate458;
{ METHOD .Geometry }
Shape454.Geometry := IndexedLineSet457;
{ METHOD .FdChildren.Add }
Transform453.FdChildren.Add(Shape454);
{ METHOD .FdChildren.Add }
Group450.FdChildren.Add(Transform453);
Transform459 := TTransformNode.Create;
Transform459.Scale := Vector3(0.5,1,0.5);
Shape460 := TShapeNode.Create;
Appearance461 := TAppearanceNode.Create;
Material462 := TMaterialNode.Create;
Material462.DiffuseColor := Vector3(0.9,0,0.7);
Material462.EmissiveColor := Vector3(0.424956,0.483976,1);
{ METHOD .SetMaterial }
Appearance461.Material := Material462;
{ METHOD .Appearance }
Shape460.Appearance := Appearance461;
{ METHOD .Geometry }
Shape460.Geometry := IndexedLineSet457;
{ METHOD .FdChildren.Add }
Transform459.FdChildren.Add(Shape460);
{ METHOD .FdChildren.Add }
Group450.FdChildren.Add(Transform459);
Transform464 := TTransformNode.Create;
Transform464.Scale := Vector3(0.25,1,0.25);
Shape465 := TShapeNode.Create;
Appearance466 := TAppearanceNode.Create;
Material467 := TMaterialNode.Create;
Material467.DiffuseColor := Vector3(0.9,0,0.7);
Material467.EmissiveColor := Vector3(0.424956,0.483976,1);
end;

procedure InitJoeSkinTexcoordDisplacerKickUpdate2Part31;
begin

{ METHOD .SetMaterial }
Appearance466.Material := Material467;
{ METHOD .Appearance }
Shape465.Appearance := Appearance466;
{ METHOD .Geometry }
Shape465.Geometry := IndexedLineSet457;
{ METHOD .FdChildren.Add }
Transform464.FdChildren.Add(Shape465);
{ METHOD .FdChildren.Add }
Group450.FdChildren.Add(Transform464);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Group450);
{ METHOD .AddGroup }
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
Result := X3D0;
end;

begin
end.
