unit JoeSkinTexcoordDisplacerKick;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateJoeSkinTexcoordDisplacerKick: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group22: TGroupNode;
WorldInfo23: TWorldInfoNode;
NavigationInfo24: TNavigationInfoNode;
Background25: TBackgroundNode;
SpotLight26: TSpotLightNode;
PointLight27: TPointLightNode;
Viewpoint28: TViewpointNode;
Viewpoint29: TViewpointNode;
Viewpoint30: TViewpointNode;
Viewpoint31: TViewpointNode;
Viewpoint32: TViewpointNode;
Group33: TGroupNode;
HAnimHumanoid34: THAnimHumanoidNode;
HAnimJoint35: THAnimJointNode;
MetadataSet36: TMetadataSetNode;
MetadataString37: TMetadataStringNode;
HAnimSegment38: THAnimSegmentNode;
HAnimSite39: THAnimSiteNode;
Transform40: TTransformNode;
Viewpoint41: TViewpointNode;
Shape42: TShapeNode;
IndexedLineSet43: TIndexedLineSetNode;
Coordinate44: TCoordinateNode;
Color45: TColorNode;
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
HAnimJoint75: THAnimJointNode;
HAnimJoint76: THAnimJointNode;
HAnimJoint77: THAnimJointNode;
HAnimJoint78: THAnimJointNode;
HAnimJoint79: THAnimJointNode;
HAnimJoint80: THAnimJointNode;
HAnimJoint81: THAnimJointNode;
HAnimJoint82: THAnimJointNode;
HAnimJoint83: THAnimJointNode;
HAnimDisplacer84: THAnimDisplacerNode;
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
HAnimJoint131: THAnimJointNode;
HAnimJoint132: THAnimJointNode;
HAnimJoint133: THAnimJointNode;
HAnimJoint134: THAnimJointNode;
HAnimJoint135: THAnimJointNode;
HAnimJoint136: THAnimJointNode;
HAnimJoint137: THAnimJointNode;
HAnimJoint138: THAnimJointNode;
HAnimJoint139: THAnimJointNode;
Shape140: TShapeNode;
Appearance141: TAppearanceNode;
Material142: TMaterialNode;
ImageTexture143: TImageTextureNode;
TextureTransform144: TTextureTransformNode;
IndexedFaceSet145: TIndexedFaceSetNode;
Coordinate146: TCoordinateNode;
TextureCoordinate147: TTextureCoordinateNode;
Coordinate148: TCoordinateNode;
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
HAnimJoint162: THAnimJointNode;
HAnimJoint163: THAnimJointNode;
HAnimJoint164: THAnimJointNode;
HAnimJoint165: THAnimJointNode;
HAnimJoint166: THAnimJointNode;
HAnimJoint167: THAnimJointNode;
HAnimJoint168: THAnimJointNode;
HAnimJoint169: THAnimJointNode;
HAnimJoint170: THAnimJointNode;
HAnimJoint171: THAnimJointNode;
HAnimJoint172: THAnimJointNode;
HAnimJoint173: THAnimJointNode;
HAnimJoint174: THAnimJointNode;
HAnimJoint175: THAnimJointNode;
HAnimJoint176: THAnimJointNode;
HAnimJoint177: THAnimJointNode;
HAnimJoint178: THAnimJointNode;
HAnimJoint179: THAnimJointNode;
HAnimJoint180: THAnimJointNode;
HAnimJoint181: THAnimJointNode;
HAnimJoint182: THAnimJointNode;
HAnimJoint183: THAnimJointNode;
HAnimJoint184: THAnimJointNode;
HAnimJoint185: THAnimJointNode;
HAnimJoint186: THAnimJointNode;
HAnimJoint187: THAnimJointNode;
HAnimJoint188: THAnimJointNode;
HAnimJoint189: THAnimJointNode;
HAnimJoint190: THAnimJointNode;
HAnimJoint191: THAnimJointNode;
HAnimJoint192: THAnimJointNode;
HAnimJoint193: THAnimJointNode;
HAnimJoint194: THAnimJointNode;
HAnimJoint195: THAnimJointNode;
HAnimJoint196: THAnimJointNode;
HAnimJoint197: THAnimJointNode;
HAnimJoint198: THAnimJointNode;
HAnimJoint199: THAnimJointNode;
HAnimJoint200: THAnimJointNode;
HAnimJoint201: THAnimJointNode;
HAnimJoint202: THAnimJointNode;
HAnimJoint203: THAnimJointNode;
HAnimJoint204: THAnimJointNode;
HAnimJoint205: THAnimJointNode;
HAnimJoint206: THAnimJointNode;
HAnimJoint207: THAnimJointNode;
HAnimJoint208: THAnimJointNode;
HAnimJoint209: THAnimJointNode;
HAnimJoint210: THAnimJointNode;
HAnimJoint211: THAnimJointNode;
HAnimJoint212: THAnimJointNode;
HAnimJoint213: THAnimJointNode;
HAnimJoint214: THAnimJointNode;
HAnimJoint215: THAnimJointNode;
HAnimJoint216: THAnimJointNode;
HAnimJoint217: THAnimJointNode;
HAnimJoint218: THAnimJointNode;
HAnimJoint219: THAnimJointNode;
HAnimJoint220: THAnimJointNode;
HAnimJoint221: THAnimJointNode;
HAnimJoint222: THAnimJointNode;
HAnimJoint223: THAnimJointNode;
HAnimJoint224: THAnimJointNode;
HAnimJoint225: THAnimJointNode;
HAnimJoint226: THAnimJointNode;
HAnimJoint227: THAnimJointNode;
HAnimJoint228: THAnimJointNode;
HAnimJoint229: THAnimJointNode;
HAnimJoint230: THAnimJointNode;
HAnimJoint231: THAnimJointNode;
HAnimJoint232: THAnimJointNode;
HAnimJoint233: THAnimJointNode;
HAnimJoint234: THAnimJointNode;
HAnimJoint235: THAnimJointNode;
HAnimJoint236: THAnimJointNode;
HAnimJoint237: THAnimJointNode;
HAnimJoint238: THAnimJointNode;
HAnimJoint239: THAnimJointNode;
HAnimJoint240: THAnimJointNode;
HAnimJoint241: THAnimJointNode;
HAnimJoint242: THAnimJointNode;
HAnimSegment243: THAnimSegmentNode;
HAnimSite244: THAnimSiteNode;
Group245: TGroupNode;
TimeSensor246: TTimeSensorNode;
OrientationInterpolator247: TOrientationInterpolatorNode;
PositionInterpolator248: TPositionInterpolatorNode;
OrientationInterpolator249: TOrientationInterpolatorNode;
OrientationInterpolator250: TOrientationInterpolatorNode;
OrientationInterpolator251: TOrientationInterpolatorNode;
OrientationInterpolator252: TOrientationInterpolatorNode;
OrientationInterpolator253: TOrientationInterpolatorNode;
OrientationInterpolator254: TOrientationInterpolatorNode;
OrientationInterpolator255: TOrientationInterpolatorNode;
OrientationInterpolator256: TOrientationInterpolatorNode;
OrientationInterpolator257: TOrientationInterpolatorNode;
OrientationInterpolator258: TOrientationInterpolatorNode;
OrientationInterpolator259: TOrientationInterpolatorNode;
OrientationInterpolator260: TOrientationInterpolatorNode;
OrientationInterpolator261: TOrientationInterpolatorNode;
OrientationInterpolator262: TOrientationInterpolatorNode;
OrientationInterpolator263: TOrientationInterpolatorNode;
OrientationInterpolator264: TOrientationInterpolatorNode;
OrientationInterpolator265: TOrientationInterpolatorNode;
OrientationInterpolator266: TOrientationInterpolatorNode;
OrientationInterpolator267: TOrientationInterpolatorNode;
OrientationInterpolator268: TOrientationInterpolatorNode;
OrientationInterpolator269: TOrientationInterpolatorNode;
OrientationInterpolator270: TOrientationInterpolatorNode;
OrientationInterpolator271: TOrientationInterpolatorNode;
OrientationInterpolator272: TOrientationInterpolatorNode;
OrientationInterpolator273: TOrientationInterpolatorNode;
OrientationInterpolator274: TOrientationInterpolatorNode;
OrientationInterpolator275: TOrientationInterpolatorNode;
OrientationInterpolator276: TOrientationInterpolatorNode;
OrientationInterpolator277: TOrientationInterpolatorNode;
OrientationInterpolator278: TOrientationInterpolatorNode;
OrientationInterpolator279: TOrientationInterpolatorNode;
OrientationInterpolator280: TOrientationInterpolatorNode;
OrientationInterpolator281: TOrientationInterpolatorNode;
OrientationInterpolator282: TOrientationInterpolatorNode;
OrientationInterpolator283: TOrientationInterpolatorNode;
OrientationInterpolator284: TOrientationInterpolatorNode;
OrientationInterpolator285: TOrientationInterpolatorNode;
OrientationInterpolator286: TOrientationInterpolatorNode;
OrientationInterpolator287: TOrientationInterpolatorNode;
OrientationInterpolator288: TOrientationInterpolatorNode;
OrientationInterpolator289: TOrientationInterpolatorNode;
OrientationInterpolator290: TOrientationInterpolatorNode;
OrientationInterpolator291: TOrientationInterpolatorNode;
OrientationInterpolator292: TOrientationInterpolatorNode;
OrientationInterpolator293: TOrientationInterpolatorNode;
OrientationInterpolator294: TOrientationInterpolatorNode;
OrientationInterpolator295: TOrientationInterpolatorNode;
OrientationInterpolator296: TOrientationInterpolatorNode;
OrientationInterpolator297: TOrientationInterpolatorNode;
OrientationInterpolator298: TOrientationInterpolatorNode;
OrientationInterpolator299: TOrientationInterpolatorNode;
OrientationInterpolator300: TOrientationInterpolatorNode;
OrientationInterpolator301: TOrientationInterpolatorNode;
OrientationInterpolator302: TOrientationInterpolatorNode;
OrientationInterpolator303: TOrientationInterpolatorNode;
OrientationInterpolator304: TOrientationInterpolatorNode;
OrientationInterpolator305: TOrientationInterpolatorNode;
OrientationInterpolator306: TOrientationInterpolatorNode;
OrientationInterpolator307: TOrientationInterpolatorNode;
OrientationInterpolator308: TOrientationInterpolatorNode;
OrientationInterpolator309: TOrientationInterpolatorNode;
OrientationInterpolator310: TOrientationInterpolatorNode;
OrientationInterpolator311: TOrientationInterpolatorNode;
OrientationInterpolator312: TOrientationInterpolatorNode;
OrientationInterpolator313: TOrientationInterpolatorNode;
OrientationInterpolator314: TOrientationInterpolatorNode;
OrientationInterpolator315: TOrientationInterpolatorNode;
OrientationInterpolator316: TOrientationInterpolatorNode;
OrientationInterpolator317: TOrientationInterpolatorNode;
OrientationInterpolator318: TOrientationInterpolatorNode;
OrientationInterpolator319: TOrientationInterpolatorNode;
OrientationInterpolator320: TOrientationInterpolatorNode;
OrientationInterpolator321: TOrientationInterpolatorNode;
OrientationInterpolator322: TOrientationInterpolatorNode;
OrientationInterpolator323: TOrientationInterpolatorNode;
OrientationInterpolator324: TOrientationInterpolatorNode;
OrientationInterpolator325: TOrientationInterpolatorNode;
OrientationInterpolator326: TOrientationInterpolatorNode;
OrientationInterpolator327: TOrientationInterpolatorNode;
OrientationInterpolator328: TOrientationInterpolatorNode;
OrientationInterpolator329: TOrientationInterpolatorNode;
OrientationInterpolator330: TOrientationInterpolatorNode;
OrientationInterpolator331: TOrientationInterpolatorNode;
OrientationInterpolator332: TOrientationInterpolatorNode;
OrientationInterpolator333: TOrientationInterpolatorNode;
OrientationInterpolator334: TOrientationInterpolatorNode;
OrientationInterpolator335: TOrientationInterpolatorNode;
OrientationInterpolator336: TOrientationInterpolatorNode;
OrientationInterpolator337: TOrientationInterpolatorNode;
OrientationInterpolator338: TOrientationInterpolatorNode;
OrientationInterpolator339: TOrientationInterpolatorNode;
OrientationInterpolator340: TOrientationInterpolatorNode;
OrientationInterpolator341: TOrientationInterpolatorNode;
Group532: TGroupNode;
ScalarInterpolator533: TScalarInterpolatorNode;
Group536: TGroupNode;
ScalarInterpolator537: TScalarInterpolatorNode;
Group540: TGroupNode;
Transform541: TTransformNode;
Shape542: TShapeNode;
Appearance543: TAppearanceNode;
Material544: TMaterialNode;
ImageTexture545: TImageTextureNode;
IndexedFaceSet546: TIndexedFaceSetNode;
Coordinate547: TCoordinateNode;
Viewpoint548: TViewpointNode;
PositionInterpolator549: TPositionInterpolatorNode;
OrientationInterpolator550: TOrientationInterpolatorNode;
Group555: TGroupNode;
Transform556: TTransformNode;
Shape557: TShapeNode;
Transform558: TTransformNode;
Shape559: TShapeNode;
Appearance560: TAppearanceNode;
Material561: TMaterialNode;
IndexedLineSet562: TIndexedLineSetNode;
Coordinate563: TCoordinateNode;
Transform564: TTransformNode;
Shape565: TShapeNode;
Appearance566: TAppearanceNode;
Material567: TMaterialNode;
IndexedLineSet568: TIndexedLineSetNode;
Transform569: TTransformNode;
Shape570: TShapeNode;
Appearance571: TAppearanceNode;
Material572: TMaterialNode;
IndexedLineSet573: TIndexedLineSetNode;

procedure InitJoeSkinTexcoordDisplacerKickPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 3;
X3D0.Components['HAnim'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'JoeSkinTexcoordDisplacerKick.x3d';
{ METHOD .Meta }
X3D0.Meta['info'] := 'Joe No Reservations 20200709 spec root and vc7 hier 20161206 ... 20121221 ... 20040109 x3d/hanim';
{ METHOD .Meta }
X3D0.Meta['description'] := 'This Joe model is a V1 LOA3 Humanoid with textured skin composed mainly of V1 Site locations.';
{ METHOD .Meta }
X3D0.Meta['created'] := '15 January 2004';
{ METHOD .Meta }
X3D0.Meta['translated'] := '12 January 2017';
{ METHOD .Meta }
X3D0.Meta['modified'] := '2 July 2023';
{ METHOD .Meta }
X3D0.Meta['TODO'] := 'move to a different directory once validated working as HAnim 2';
{ METHOD .Meta }
X3D0.Meta['error'] := 'Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Joe D Williams';
{ METHOD .Meta }
X3D0.Meta['translator'] := 'Roy Walmsley';
{ METHOD .Meta }
X3D0.Meta['translator'] := 'Don Brutzman';
{ METHOD .Meta }
X3D0.Meta['info'] := 'Transcoding from .vrml to .x3dv by Joe using BS studio circa 2012';
{ METHOD .Meta }
X3D0.Meta['info'] := 'translated from .x3dv to .xml for web3d archive';
{ METHOD .Meta }
X3D0.Meta['TODO'] := 'Record information relating a certain skin coordinate to a V1 Annex A Site name and location is now found in comment at end of this scene where each # number name string appears in the order of coordinate points in the skin mesh user code. Best organized to provide author data naming important HAnim humanoid skeletonspace to skinspace relations using structured MetadataSet containing MetadataString nodes';
{ METHOD .Meta }
X3D0.Meta['info'] := 'modified to correct root and vc7 hierarchies';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/JoeSkinTexcoordDisplacerKick.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'BS studio translation from .x3dv by Joe using BS Contact';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group22 := TGroupNode.Create;
WorldInfo23 := TWorldInfoNode.Create;
WorldInfo23.SetInfo(['X3D Humanoid V1 LOA3 skeleton','skin from hanim sites, surface features, and some added points','390 points']);
WorldInfo23.Title := 'X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe';
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(WorldInfo23);
NavigationInfo24 := TNavigationInfoNode.Create;
NavigationInfo24.Speed := 2.5;
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(NavigationInfo24);
Background25 := TBackgroundNode.Create;
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(Background25);
SpotLight26 := TSpotLightNode.Create;
SpotLight26.AmbientIntensity := 0.7;
SpotLight26.BeamWidth := 1.5;
SpotLight26.Color := Vector3(0.8,0.8,1);
SpotLight26.CutOffAngle := 0.6;
SpotLight26.Direction := Vector3(0,0,0);
end;

procedure InitJoeSkinTexcoordDisplacerKickPart1;
begin

SpotLight26.Location := Vector3(0,3,3);
SpotLight26.Radius := 10;
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(SpotLight26);
PointLight27 := TPointLightNode.Create;
PointLight27.AmbientIntensity := 0.7;
PointLight27.Color := Vector3(0.8,0.8,1);
PointLight27.Location := Vector3(0,10,-7);
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(PointLight27);
{ External from the Humanoid viewpoints }
Viewpoint28 := TViewpointNode.Create;
Viewpoint28.CenterOfRotation := Vector3(0,0.85,0);
Viewpoint28.Description := 'Scene_Inclined View';
Viewpoint28.Orientation := Vector4(-0.113,0.993,0.0347,0.671);
Viewpoint28.Position := Vector3(1.62,1.05,3.06);
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(Viewpoint28);
Viewpoint29 := TViewpointNode.Create;
Viewpoint29.CenterOfRotation := Vector3(0,0.8,0);
Viewpoint29.Description := 'Scene Front View';
Viewpoint29.Position := Vector3(0,0.8,2.58);
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(Viewpoint29);
Viewpoint30 := TViewpointNode.Create;
Viewpoint30.CenterOfRotation := Vector3(0,0.8,0);
Viewpoint30.Description := 'Scene Side View';
Viewpoint30.Orientation := Vector4(0,1,0,1.5708);
Viewpoint30.Position := Vector3(2.6,0.5,0);
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(Viewpoint30);
Viewpoint31 := TViewpointNode.Create;
Viewpoint31.CenterOfRotation := Vector3(0,1.5,0);
Viewpoint31.Description := 'Scene Back View';
Viewpoint31.Orientation := Vector4(0,1,0,3.14);
Viewpoint31.Position := Vector3(0,2.5,-3);
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(Viewpoint31);
Viewpoint32 := TViewpointNode.Create;
Viewpoint32.CenterOfRotation := Vector3(0,1.5,0);
Viewpoint32.Description := 'Scene Top View';
Viewpoint32.Orientation := Vector4(1,0,0,-1.5708);
Viewpoint32.Position := Vector3(0,3.5,0);
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(Viewpoint32);
Group33 := TGroupNode.Create;
HAnimHumanoid34 := THAnimHumanoidNode.Create;
HAnimHumanoid34.Version := '2.0';
end;

procedure InitJoeSkinTexcoordDisplacerKickPart2;
begin

HAnimJoint35 := THAnimJointNode.Create;
HAnimJoint35.Center := Vector3(0,0.875,0);
MetadataSet36 := TMetadataSetNode.Create;
MetadataSet36.Reference := 'HAnim';
{ TODO experimental }
MetadataString37 := TMetadataStringNode.Create;
MetadataString37.Reference := 'correction options: ignore, warn, average, left, right, largest, smallest';
MetadataString37.SetValue(['ignore']);
{ METHOD .FdValue.Add }
MetadataSet36.FdValue.Add(MetadataString37);
{ METHOD .Metadata }
HAnimJoint35.Metadata := MetadataSet36;
HAnimSegment38 := THAnimSegmentNode.Create;
HAnimSite39 := THAnimSiteNode.Create;
Transform40 := TTransformNode.Create;
Transform40.Scale := Vector3(0.175,0.175,0.175);
Viewpoint41 := TViewpointNode.Create;
Viewpoint41.Description := 'Joe_HAnim Root HAnimSite Coordinate Axes View';
{ METHOD .FdChildren.Add }
Transform40.FdChildren.Add(Viewpoint41);
Shape42 := TShapeNode.Create;
{ RGB lines showing XYZ axes }
IndexedLineSet43 := TIndexedLineSetNode.Create;
IndexedLineSet43.SetColorIndex([0,1,2]);
IndexedLineSet43.ColorPerVertex := False;
IndexedLineSet43.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1]);
Coordinate44 := TCoordinateNode.Create;
Coordinate44.SetPoint([Vector3(0,0,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1)]);
{ METHOD .Coord }
IndexedLineSet43.Coord := Coordinate44;
Color45 := TColorNode.Create;
Color45.SetColor([Vector3(1,0,0),Vector3(0,0.6,0),Vector3(0,0,1)]);
{ METHOD .Color }
IndexedLineSet43.Color := Color45;
{ METHOD .Geometry }
Shape42.Geometry := IndexedLineSet43;
{ METHOD .FdChildren.Add }
Transform40.FdChildren.Add(Shape42);
{ METHOD .FdChildren.Add }
HAnimSite39.FdChildren.Add(Transform40);
{ METHOD .FdChildren.Add }
HAnimSegment38.FdChildren.Add(HAnimSite39);
{ METHOD .FdChildren.Add }
HAnimJoint35.FdChildren.Add(HAnimSegment38);
HAnimJoint46 := THAnimJointNode.Create;
HAnimJoint46.Center := Vector3(0,0.92,0);
HAnimJoint46.SetSkinCoordIndex([17,19,20,21,22,23,26,27,73,82,89,91,93]);
HAnimJoint46.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]);
HAnimJoint47 := THAnimJointNode.Create;
HAnimJoint47.Center := Vector3(0.1,0.92,0);
HAnimJoint47.SetSkinCoordIndex([89,90,94,95,96,97]);
HAnimJoint47.SetSkinCoordWeight([0.65,1,1,1,1,1]);
end;

procedure InitJoeSkinTexcoordDisplacerKickPart3;
begin

HAnimJoint48 := THAnimJointNode.Create;
HAnimJoint48.Center := Vector3(0.115,0.466,0);
HAnimJoint48.SetSkinCoordIndex([334,335,336,337,338,339,340,341]);
HAnimJoint48.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimJoint49 := THAnimJointNode.Create;
HAnimJoint49.Center := Vector3(0.115,0.069,0);
HAnimJoint49.SetSkinCoordIndex([342,343,344,345]);
HAnimJoint49.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint50 := THAnimJointNode.Create;
HAnimJoint50.Center := Vector3(0.115,0.031,0.03);
HAnimJoint50.SetSkinCoordIndex([346,347,348,71]);
HAnimJoint50.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint51 := THAnimJointNode.Create;
HAnimJoint51.Center := Vector3(0.115,0.037,0.09);
HAnimJoint51.SetSkinCoordIndex([349,350,351,352]);
HAnimJoint51.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint52 := THAnimJointNode.Create;
HAnimJoint52.Center := Vector3(0.115,0.02,0.122);
HAnimJoint52.SetSkinCoordIndex([353,354,355,356,357,358,359,360,361]);
HAnimJoint52.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint51.FdChildren.Add(HAnimJoint52);
{ METHOD .FdChildren.Add }
HAnimJoint50.FdChildren.Add(HAnimJoint51);
{ METHOD .FdChildren.Add }
HAnimJoint49.FdChildren.Add(HAnimJoint50);
{ METHOD .FdChildren.Add }
HAnimJoint48.FdChildren.Add(HAnimJoint49);
{ METHOD .FdChildren.Add }
HAnimJoint47.FdChildren.Add(HAnimJoint48);
{ METHOD .FdChildren.Add }
HAnimJoint46.FdChildren.Add(HAnimJoint47);
HAnimJoint53 := THAnimJointNode.Create;
HAnimJoint53.Center := Vector3(-0.1,0.92,0);
HAnimJoint53.SetSkinCoordIndex([91,92,98,99,100,101,362,363]);
HAnimJoint53.SetSkinCoordWeight([0.65,1,0.8,1,1,1,0.4,0.8]);
HAnimJoint54 := THAnimJointNode.Create;
HAnimJoint54.Center := Vector3(-0.05,0.466,0);
HAnimJoint54.SetSkinCoordIndex([362,363,364,365,366,367,368,369,98]);
HAnimJoint54.SetSkinCoordWeight([0.6,0.2,1,1,1,1,1,1,0.2]);
HAnimJoint55 := THAnimJointNode.Create;
HAnimJoint55.Center := Vector3(-0.115,0.069,0);
HAnimJoint55.SetSkinCoordIndex([370,371,372,373]);
HAnimJoint55.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint56 := THAnimJointNode.Create;
HAnimJoint56.Center := Vector3(-0.1,0.015,-0.01);
end;

procedure InitJoeSkinTexcoordDisplacerKickPart4;
begin

HAnimJoint56.SetSkinCoordIndex([374,375,376]);
HAnimJoint56.SetSkinCoordWeight([1,1,1]);
HAnimJoint57 := THAnimJointNode.Create;
HAnimJoint57.Center := Vector3(-0.115,0.037,0.09);
HAnimJoint57.SetSkinCoordIndex([377,378,379,380]);
HAnimJoint57.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint58 := THAnimJointNode.Create;
HAnimJoint58.Center := Vector3(-0.1,0.01,0.14);
HAnimJoint58.SetSkinCoordIndex([381,382,383,384,385,386,387,388,389]);
HAnimJoint58.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
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
HAnimJoint46.FdChildren.Add(HAnimJoint53);
{ METHOD .FdChildren.Add }
HAnimJoint35.FdChildren.Add(HAnimJoint46);
HAnimJoint59 := THAnimJointNode.Create;
HAnimJoint59.Center := Vector3(0,1.045,-0.095);
HAnimJoint59.SetSkinCoordIndex([28,76]);
HAnimJoint59.SetSkinCoordWeight([1,1]);
HAnimJoint60 := THAnimJointNode.Create;
HAnimJoint60.Center := Vector3(0,1.068,-0.085);
HAnimJoint61 := THAnimJointNode.Create;
HAnimJoint61.Center := Vector3(0,1.092,-0.0725);
HAnimJoint62 := THAnimJointNode.Create;
HAnimJoint62.Center := Vector3(0,1.12,-0.065);
HAnimJoint62.SetSkinCoordIndex([16,18,25,83,84,85,86,87,88]);
HAnimJoint62.SetSkinCoordWeight([1,1,1,1,1,1,0.7,1,0.8]);
HAnimJoint63 := THAnimJointNode.Create;
HAnimJoint63.Center := Vector3(0,1.1459,-0.0625);
HAnimJoint64 := THAnimJointNode.Create;
HAnimJoint64.Center := Vector3(0,1.179,-0.068);
HAnimJoint65 := THAnimJointNode.Create;
HAnimJoint65.Center := Vector3(0,1.2679,-0.081);
HAnimJoint66 := THAnimJointNode.Create;
HAnimJoint66.Center := Vector3(0,1.242,-0.09);
HAnimJoint66.SetSkinCoordIndex([15]);
HAnimJoint66.SetSkinCoordWeight([1]);
HAnimJoint67 := THAnimJointNode.Create;
end;

procedure InitJoeSkinTexcoordDisplacerKickPart5;
begin

HAnimJoint67.Center := Vector3(0,1.268,-0.1);
HAnimJoint67.SetSkinCoordIndex([13,14]);
HAnimJoint67.SetSkinCoordWeight([1,1]);
HAnimJoint68 := THAnimJointNode.Create;
HAnimJoint68.Center := Vector3(0,1.294,-0.11);
HAnimJoint69 := THAnimJointNode.Create;
HAnimJoint69.Center := Vector3(0,1.323,-0.1155);
HAnimJoint70 := THAnimJointNode.Create;
HAnimJoint70.Center := Vector3(0,1.352,-0.12);
HAnimJoint71 := THAnimJointNode.Create;
HAnimJoint71.Center := Vector3(0,1.381,-0.1235);
HAnimJoint72 := THAnimJointNode.Create;
HAnimJoint72.Center := Vector3(0,1.41,-0.1235);
HAnimJoint72.SetSkinCoordIndex([81]);
HAnimJoint72.SetSkinCoordWeight([1]);
HAnimJoint73 := THAnimJointNode.Create;
HAnimJoint73.Center := Vector3(0,1.438,-0.12);
HAnimJoint74 := THAnimJointNode.Create;
HAnimJoint74.Center := Vector3(0,1.468,-0.105);
HAnimJoint75 := THAnimJointNode.Create;
HAnimJoint75.Center := Vector3(0,1.497,-0.09);
HAnimJoint75.SetSkinCoordIndex([11,24]);
HAnimJoint75.SetSkinCoordWeight([1,1]);
HAnimJoint76 := THAnimJointNode.Create;
HAnimJoint76.Center := Vector3(0,1.525,-0.072);
HAnimJoint76.SetSkinCoordIndex([74,75]);
HAnimJoint76.SetSkinCoordWeight([1,1]);
HAnimJoint77 := THAnimJointNode.Create;
HAnimJoint77.Center := Vector3(0,1.54,-0.05);
HAnimJoint78 := THAnimJointNode.Create;
HAnimJoint78.Center := Vector3(0,1.552,-0.035);
HAnimJoint79 := THAnimJointNode.Create;
HAnimJoint79.Center := Vector3(0,1.5675,-0.0256);
HAnimJoint80 := THAnimJointNode.Create;
HAnimJoint80.Center := Vector3(0,1.58225,-0.0185);
HAnimJoint81 := THAnimJointNode.Create;
HAnimJoint81.Center := Vector3(0,1.595,-0.0175);
HAnimJoint82 := THAnimJointNode.Create;
HAnimJoint82.Center := Vector3(0,1.61,-0.015);
HAnimJoint83 := THAnimJointNode.Create;
end;

procedure InitJoeSkinTexcoordDisplacerKickPart6;
begin

HAnimJoint83.Center := Vector3(0,1.63,-0.01);
HAnimJoint83.SetSkinCoordIndex([0,1,2,3,4,5,6,7,8,9]);
HAnimJoint83.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1]);
HAnimDisplacer84 := THAnimDisplacerNode.Create;
HAnimDisplacer84.SetCoordIndex([0,1,2,3,4,5,6,7,8,9]);
HAnimDisplacer84.SetDisplacements([Vector3(0,0.15,0),Vector3(0,0,0.15),Vector3(-0.1,0,0.15),Vector3(0.1,0,0.05),Vector3(0,-0.02,0.05),Vector3(-0.15,0,0),Vector3(-0.05,0,0),Vector3(0.15,0,0),Vector3(0.05,0,0),Vector3(0,0,-0.15)]);
{ METHOD .Displacers }
HAnimJoint83.Displacers := HAnimDisplacer84;
HAnimJoint85 := THAnimJointNode.Create;
HAnimJoint85.Center := Vector3(0.034,1.659,0.06);
{ METHOD .FdChildren.Add }
HAnimJoint83.FdChildren.Add(HAnimJoint85);
HAnimJoint86 := THAnimJointNode.Create;
HAnimJoint86.Center := Vector3(0.034,1.659,0.06);
{ METHOD .FdChildren.Add }
HAnimJoint83.FdChildren.Add(HAnimJoint86);
HAnimJoint87 := THAnimJointNode.Create;
HAnimJoint87.Center := Vector3(0.034,1.659,0.06);
{ METHOD .FdChildren.Add }
HAnimJoint83.FdChildren.Add(HAnimJoint87);
HAnimJoint88 := THAnimJointNode.Create;
HAnimJoint88.Center := Vector3(-0.034,1.659,0.06);
{ METHOD .FdChildren.Add }
HAnimJoint83.FdChildren.Add(HAnimJoint88);
HAnimJoint89 := THAnimJointNode.Create;
HAnimJoint89.Center := Vector3(-0.034,1.659,0.06);
{ METHOD .FdChildren.Add }
HAnimJoint83.FdChildren.Add(HAnimJoint89);
HAnimJoint90 := THAnimJointNode.Create;
HAnimJoint90.Center := Vector3(-0.034,1.659,0.06);
{ METHOD .FdChildren.Add }
HAnimJoint83.FdChildren.Add(HAnimJoint90);
HAnimJoint91 := THAnimJointNode.Create;
HAnimJoint91.Center := Vector3(0.034,1.659,0.06);
{ METHOD .FdChildren.Add }
HAnimJoint83.FdChildren.Add(HAnimJoint91);
{ METHOD .FdChildren.Add }
HAnimJoint82.FdChildren.Add(HAnimJoint83);
{ METHOD .FdChildren.Add }
HAnimJoint81.FdChildren.Add(HAnimJoint82);
{ METHOD .FdChildren.Add }
HAnimJoint80.FdChildren.Add(HAnimJoint81);
{ METHOD .FdChildren.Add }
HAnimJoint79.FdChildren.Add(HAnimJoint80);
{ METHOD .FdChildren.Add }
HAnimJoint78.FdChildren.Add(HAnimJoint79);
{ METHOD .FdChildren.Add }
HAnimJoint77.FdChildren.Add(HAnimJoint78);
{ METHOD .FdChildren.Add }
HAnimJoint76.FdChildren.Add(HAnimJoint77);
{ METHOD .FdChildren.Add }
HAnimJoint75.FdChildren.Add(HAnimJoint76);
HAnimJoint92 := THAnimJointNode.Create;
HAnimJoint92.Center := Vector3(0.082,1.4488,-0.0353);
HAnimJoint92.SetSkinCoordIndex([12]);
HAnimJoint92.SetSkinCoordWeight([1]);
end;

procedure InitJoeSkinTexcoordDisplacerKickPart7;
begin

HAnimJoint93 := THAnimJointNode.Create;
HAnimJoint93.Center := Vector3(0.0962,1.4269,-0.0424);
HAnimJoint93.SetSkinCoordIndex([79]);
HAnimJoint93.SetSkinCoordWeight([1]);
HAnimJoint94 := THAnimJointNode.Create;
HAnimJoint94.Center := Vector3(0.2,1.44,-0.04);
HAnimJoint94.SetSkinCoordIndex([41,42,44,80,102,103,104,105]);
HAnimJoint94.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimJoint95 := THAnimJointNode.Create;
HAnimJoint95.Center := Vector3(0.2,1.1388,-0.04);
HAnimJoint95.SetSkinCoordIndex([45,46,47,109,110,111,112,113,115,116,117,118]);
HAnimJoint95.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint96 := THAnimJointNode.Create;
HAnimJoint96.Center := Vector3(0.2,0.87,-0.04);
HAnimJoint96.SetSkinCoordIndex([119,120,121,122,123,124,125,126]);
HAnimJoint96.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimJoint97 := THAnimJointNode.Create;
HAnimJoint97.Center := Vector3(0.1924,0.8472,-0.0534);
HAnimJoint97.SetSkinCoordIndex([127,128]);
HAnimJoint97.SetSkinCoordWeight([1,1]);
HAnimJoint98 := THAnimJointNode.Create;
HAnimJoint98.Center := Vector3(0.1951,0.8226,0.0246);
HAnimJoint98.SetSkinCoordIndex([138,139,140,141,142,143]);
HAnimJoint98.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1]);
HAnimJoint99 := THAnimJointNode.Create;
HAnimJoint99.Center := Vector3(0.1955,0.8159,0.0464);
HAnimJoint99.SetSkinCoordIndex([144,145,146,147,148,149,150,151,152]);
HAnimJoint99.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint98.FdChildren.Add(HAnimJoint99);
{ METHOD .FdChildren.Add }
HAnimJoint97.FdChildren.Add(HAnimJoint98);
{ METHOD .FdChildren.Add }
HAnimJoint96.FdChildren.Add(HAnimJoint97);
HAnimJoint100 := THAnimJointNode.Create;
HAnimJoint100.Center := Vector3(0.1983,0.8024,-0.028);
HAnimJoint100.SetSkinCoordIndex([129,130]);
HAnimJoint100.SetSkinCoordWeight([1,1]);
HAnimJoint101 := THAnimJointNode.Create;
HAnimJoint101.Center := Vector3(0.1983,0.7815,-0.028);
HAnimJoint101.SetSkinCoordIndex([138,139,140,153,154,155,163]);
HAnimJoint101.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint102 := THAnimJointNode.Create;
end;

procedure InitJoeSkinTexcoordDisplacerKickPart8;
begin

HAnimJoint102.Center := Vector3(0.2017,0.7363,-0.0248);
HAnimJoint102.SetSkinCoordIndex([166,167,168,169]);
HAnimJoint102.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint103 := THAnimJointNode.Create;
HAnimJoint103.Center := Vector3(0.2028,0.7139,-0.0236);
HAnimJoint103.SetSkinCoordIndex([170,171,172,173,174,175,176,177,178]);
HAnimJoint103.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint102.FdChildren.Add(HAnimJoint103);
{ METHOD .FdChildren.Add }
HAnimJoint101.FdChildren.Add(HAnimJoint102);
{ METHOD .FdChildren.Add }
HAnimJoint100.FdChildren.Add(HAnimJoint101);
{ METHOD .FdChildren.Add }
HAnimJoint96.FdChildren.Add(HAnimJoint100);
HAnimJoint104 := THAnimJointNode.Create;
HAnimJoint104.Center := Vector3(0.1987,0.8029,-0.053);
HAnimJoint104.SetSkinCoordIndex([131,132]);
HAnimJoint104.SetSkinCoordWeight([1,1]);
HAnimJoint105 := THAnimJointNode.Create;
HAnimJoint105.Center := Vector3(0.1987,0.7818,-0.053);
HAnimJoint105.SetSkinCoordIndex([156,157,163,164]);
HAnimJoint105.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimJoint106 := THAnimJointNode.Create;
HAnimJoint106.Center := Vector3(0.2013,0.7273,-0.0503);
HAnimJoint106.SetSkinCoordIndex([179,180,181,182]);
HAnimJoint106.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint107 := THAnimJointNode.Create;
HAnimJoint107.Center := Vector3(0.2026,0.7011,-0.0494);
HAnimJoint107.SetSkinCoordIndex([183,184,185,186,187,188,189,190,191]);
HAnimJoint107.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint106.FdChildren.Add(HAnimJoint107);
{ METHOD .FdChildren.Add }
HAnimJoint105.FdChildren.Add(HAnimJoint106);
{ METHOD .FdChildren.Add }
HAnimJoint104.FdChildren.Add(HAnimJoint105);
{ METHOD .FdChildren.Add }
HAnimJoint96.FdChildren.Add(HAnimJoint104);
HAnimJoint108 := THAnimJointNode.Create;
HAnimJoint108.Center := Vector3(0.1956,0.8019,-0.0794);
HAnimJoint108.SetSkinCoordIndex([133,134]);
HAnimJoint108.SetSkinCoordWeight([1,1]);
HAnimJoint109 := THAnimJointNode.Create;
HAnimJoint109.Center := Vector3(0.1956,0.7815,-0.0794);
HAnimJoint109.SetSkinCoordIndex([158,159,164,165]);
HAnimJoint109.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimJoint110 := THAnimJointNode.Create;
end;

procedure InitJoeSkinTexcoordDisplacerKickPart9;
begin

HAnimJoint110.Center := Vector3(0.1973,0.7287,-0.0777);
HAnimJoint110.SetSkinCoordIndex([192,193,194,195]);
HAnimJoint110.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint111 := THAnimJointNode.Create;
HAnimJoint111.Center := Vector3(0.1983,0.7045,-0.0767);
HAnimJoint111.SetSkinCoordIndex([196,197,198,199,200,201,202,203,204]);
HAnimJoint111.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint110.FdChildren.Add(HAnimJoint111);
{ METHOD .FdChildren.Add }
HAnimJoint109.FdChildren.Add(HAnimJoint110);
{ METHOD .FdChildren.Add }
HAnimJoint108.FdChildren.Add(HAnimJoint109);
{ METHOD .FdChildren.Add }
HAnimJoint96.FdChildren.Add(HAnimJoint108);
HAnimJoint112 := THAnimJointNode.Create;
HAnimJoint112.Center := Vector3(0.1925,0.8066,-0.1036);
HAnimJoint112.SetSkinCoordIndex([135,136,137,165]);
HAnimJoint112.SetSkinCoordWeight([1,1,1,0.5]);
HAnimJoint113 := THAnimJointNode.Create;
HAnimJoint113.Center := Vector3(0.1925,0.7866,-0.1036);
HAnimJoint113.SetSkinCoordIndex([160,161,162]);
HAnimJoint113.SetSkinCoordWeight([1,1,1]);
HAnimJoint114 := THAnimJointNode.Create;
HAnimJoint114.Center := Vector3(0.1938,0.7452,-0.1024);
HAnimJoint114.SetSkinCoordIndex([205,206,207,208]);
HAnimJoint114.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint115 := THAnimJointNode.Create;
HAnimJoint115.Center := Vector3(0.1948,0.7277,-0.1017);
HAnimJoint115.SetSkinCoordIndex([209,210,211,212,213,214,215,216,217]);
HAnimJoint115.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint114.FdChildren.Add(HAnimJoint115);
{ METHOD .FdChildren.Add }
HAnimJoint113.FdChildren.Add(HAnimJoint114);
{ METHOD .FdChildren.Add }
HAnimJoint112.FdChildren.Add(HAnimJoint113);
{ METHOD .FdChildren.Add }
HAnimJoint96.FdChildren.Add(HAnimJoint112);
{ METHOD .FdChildren.Add }
HAnimJoint95.FdChildren.Add(HAnimJoint96);
{ METHOD .FdChildren.Add }
HAnimJoint94.FdChildren.Add(HAnimJoint95);
{ METHOD .FdChildren.Add }
HAnimJoint93.FdChildren.Add(HAnimJoint94);
{ METHOD .FdChildren.Add }
HAnimJoint92.FdChildren.Add(HAnimJoint93);
{ METHOD .FdChildren.Add }
HAnimJoint75.FdChildren.Add(HAnimJoint92);
HAnimJoint116 := THAnimJointNode.Create;
HAnimJoint116.Center := Vector3(-0.03,1.46,0);
HAnimJoint116.SetSkinCoordIndex([10]);
HAnimJoint116.SetSkinCoordWeight([1]);
end;

procedure InitJoeSkinTexcoordDisplacerKickPart10;
begin

HAnimJoint117 := THAnimJointNode.Create;
HAnimJoint117.Center := Vector3(-0.09,1.41,-0.11);
HAnimJoint117.SetSkinCoordIndex([77,29]);
HAnimJoint117.SetSkinCoordWeight([1,0.9]);
HAnimJoint118 := THAnimJointNode.Create;
HAnimJoint118.Center := Vector3(-0.2,1.44,-0.04);
HAnimJoint118.SetSkinCoordIndex([29,30,32,78,218,219,220,221,86,88]);
HAnimJoint118.SetSkinCoordWeight([0.1,1,1,1,1,1,1,1,0.3,0.2]);
HAnimJoint119 := THAnimJointNode.Create;
HAnimJoint119.Center := Vector3(-0.2,1.1388,-0.04);
HAnimJoint119.SetSkinCoordIndex([33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint119.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint120 := THAnimJointNode.Create;
HAnimJoint120.Center := Vector3(-0.2,0.89,-0.04);
HAnimJoint120.SetSkinCoordIndex([235,236,237,238,239,240,241,242]);
HAnimJoint120.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimJoint121 := THAnimJointNode.Create;
HAnimJoint121.Center := Vector3(-0.2,0.85,0);
HAnimJoint121.SetSkinCoordIndex([243,244]);
HAnimJoint121.SetSkinCoordWeight([1,1]);
HAnimJoint122 := THAnimJointNode.Create;
HAnimJoint122.Center := Vector3(-0.2,0.82,0.03);
HAnimJoint122.SetSkinCoordIndex([254,255,256,257,258,259]);
HAnimJoint122.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1]);
HAnimJoint123 := THAnimJointNode.Create;
HAnimJoint123.Center := Vector3(-0.2,0.8,0.05);
HAnimJoint123.SetSkinCoordIndex([260,261,262,263,264,265,266,267,268]);
HAnimJoint123.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint122.FdChildren.Add(HAnimJoint123);
{ METHOD .FdChildren.Add }
HAnimJoint121.FdChildren.Add(HAnimJoint122);
{ METHOD .FdChildren.Add }
HAnimJoint120.FdChildren.Add(HAnimJoint121);
HAnimJoint124 := THAnimJointNode.Create;
HAnimJoint124.Center := Vector3(-0.2,0.84,-0.015);
HAnimJoint124.SetSkinCoordIndex([245,246]);
HAnimJoint124.SetSkinCoordWeight([1,1]);
HAnimJoint125 := THAnimJointNode.Create;
HAnimJoint125.Center := Vector3(-0.2,0.793,-0.015);
HAnimJoint125.SetSkinCoordIndex([254,255,256,269,270,271,279]);
HAnimJoint125.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint126 := THAnimJointNode.Create;
end;

procedure InitJoeSkinTexcoordDisplacerKickPart11;
begin

HAnimJoint126.Center := Vector3(-0.2,0.745,-0.015);
HAnimJoint126.SetSkinCoordIndex([282,283,284,285]);
HAnimJoint126.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint127 := THAnimJointNode.Create;
HAnimJoint127.Center := Vector3(-0.2,0.72,-0.015);
HAnimJoint127.SetSkinCoordIndex([286,287,288,289,290,291,292,293,294]);
HAnimJoint127.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint126.FdChildren.Add(HAnimJoint127);
{ METHOD .FdChildren.Add }
HAnimJoint125.FdChildren.Add(HAnimJoint126);
{ METHOD .FdChildren.Add }
HAnimJoint124.FdChildren.Add(HAnimJoint125);
{ METHOD .FdChildren.Add }
HAnimJoint120.FdChildren.Add(HAnimJoint124);
HAnimJoint128 := THAnimJointNode.Create;
HAnimJoint128.Center := Vector3(-0.2,0.835,-0.04);
HAnimJoint128.SetSkinCoordIndex([247,248]);
HAnimJoint128.SetSkinCoordWeight([1,1]);
HAnimJoint129 := THAnimJointNode.Create;
HAnimJoint129.Center := Vector3(-0.2,0.788,-0.04);
HAnimJoint129.SetSkinCoordIndex([272,273,279,280]);
HAnimJoint129.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimJoint130 := THAnimJointNode.Create;
HAnimJoint130.Center := Vector3(-0.2,0.74,-0.04);
HAnimJoint130.SetSkinCoordIndex([295,296,297,298]);
HAnimJoint130.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint131 := THAnimJointNode.Create;
HAnimJoint131.Center := Vector3(-0.2,0.7142,-0.04);
HAnimJoint131.SetSkinCoordIndex([299,300,301,302,303,304,305,306,307]);
HAnimJoint131.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint130.FdChildren.Add(HAnimJoint131);
{ METHOD .FdChildren.Add }
HAnimJoint129.FdChildren.Add(HAnimJoint130);
{ METHOD .FdChildren.Add }
HAnimJoint128.FdChildren.Add(HAnimJoint129);
{ METHOD .FdChildren.Add }
HAnimJoint120.FdChildren.Add(HAnimJoint128);
HAnimJoint132 := THAnimJointNode.Create;
HAnimJoint132.Center := Vector3(-0.2,0.835,-0.065);
HAnimJoint132.SetSkinCoordIndex([249,250]);
HAnimJoint132.SetSkinCoordWeight([1,1]);
HAnimJoint133 := THAnimJointNode.Create;
HAnimJoint133.Center := Vector3(-0.2,0.793,-0.065);
HAnimJoint133.SetSkinCoordIndex([274,275,280,281]);
HAnimJoint133.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimJoint134 := THAnimJointNode.Create;
end;

procedure InitJoeSkinTexcoordDisplacerKickPart12;
begin

HAnimJoint134.Center := Vector3(-0.2,0.74,-0.065);
HAnimJoint134.SetSkinCoordIndex([308,309,310,311]);
HAnimJoint134.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint135 := THAnimJointNode.Create;
HAnimJoint135.Center := Vector3(-0.2,0.7177,-0.065);
HAnimJoint135.SetSkinCoordIndex([312,313,314,315,316,317,318,319,320]);
HAnimJoint135.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint134.FdChildren.Add(HAnimJoint135);
{ METHOD .FdChildren.Add }
HAnimJoint133.FdChildren.Add(HAnimJoint134);
{ METHOD .FdChildren.Add }
HAnimJoint132.FdChildren.Add(HAnimJoint133);
{ METHOD .FdChildren.Add }
HAnimJoint120.FdChildren.Add(HAnimJoint132);
HAnimJoint136 := THAnimJointNode.Create;
HAnimJoint136.Center := Vector3(-0.2,0.84,-0.085);
HAnimJoint136.SetSkinCoordIndex([251,252,253,281]);
HAnimJoint136.SetSkinCoordWeight([1,1,1,0.5]);
HAnimJoint137 := THAnimJointNode.Create;
HAnimJoint137.Center := Vector3(-0.2,0.79,-0.085);
HAnimJoint137.SetSkinCoordIndex([276,277,278]);
HAnimJoint137.SetSkinCoordWeight([1,1,1]);
HAnimJoint138 := THAnimJointNode.Create;
HAnimJoint138.Center := Vector3(-0.2,0.755,-0.085);
HAnimJoint138.SetSkinCoordIndex([321,322,323,324]);
HAnimJoint138.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint139 := THAnimJointNode.Create;
HAnimJoint139.Center := Vector3(-0.2,0.735,-0.09);
HAnimJoint139.SetSkinCoordIndex([325,326,327,328,329,330,331,332,333]);
HAnimJoint139.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint138.FdChildren.Add(HAnimJoint139);
{ METHOD .FdChildren.Add }
HAnimJoint137.FdChildren.Add(HAnimJoint138);
{ METHOD .FdChildren.Add }
HAnimJoint136.FdChildren.Add(HAnimJoint137);
{ METHOD .FdChildren.Add }
HAnimJoint120.FdChildren.Add(HAnimJoint136);
{ METHOD .FdChildren.Add }
HAnimJoint119.FdChildren.Add(HAnimJoint120);
{ METHOD .FdChildren.Add }
HAnimJoint118.FdChildren.Add(HAnimJoint119);
{ METHOD .FdChildren.Add }
HAnimJoint117.FdChildren.Add(HAnimJoint118);
{ METHOD .FdChildren.Add }
HAnimJoint116.FdChildren.Add(HAnimJoint117);
{ METHOD .FdChildren.Add }
HAnimJoint75.FdChildren.Add(HAnimJoint116);
{ METHOD .FdChildren.Add }
HAnimJoint74.FdChildren.Add(HAnimJoint75);
{ METHOD .FdChildren.Add }
HAnimJoint73.FdChildren.Add(HAnimJoint74);
{ METHOD .FdChildren.Add }
HAnimJoint72.FdChildren.Add(HAnimJoint73);
{ METHOD .FdChildren.Add }
HAnimJoint71.FdChildren.Add(HAnimJoint72);
end;

procedure InitJoeSkinTexcoordDisplacerKickPart13;
begin

{ METHOD .FdChildren.Add }
HAnimJoint70.FdChildren.Add(HAnimJoint71);
{ METHOD .FdChildren.Add }
HAnimJoint69.FdChildren.Add(HAnimJoint70);
{ METHOD .FdChildren.Add }
HAnimJoint68.FdChildren.Add(HAnimJoint69);
{ METHOD .FdChildren.Add }
HAnimJoint67.FdChildren.Add(HAnimJoint68);
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
HAnimJoint35.FdChildren.Add(HAnimJoint59);
{ METHOD .FdSkeleton.Add }
HAnimHumanoid34.FdSkeleton.Add(HAnimJoint35);
Shape140 := TShapeNode.Create;
Appearance141 := TAppearanceNode.Create;
Material142 := TMaterialNode.Create;
Material142.DiffuseColor := Vector3(0.3,0.3,0.6);
Material142.EmissiveColor := Vector3(0.3,0.3,0.6);
{ METHOD .SetMaterial }
Appearance141.Material := Material142;
ImageTexture143 := TImageTextureNode.Create;
ImageTexture143.SetUrl(['JoeBodyTexture29.png','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/JoeBodyTexture29.png']);
{ METHOD .Texture }
Appearance141.Texture := ImageTexture143;
TextureTransform144 := TTextureTransformNode.Create;
{ METHOD .TextureTransform }
Appearance141.TextureTransform := TextureTransform144;
{ METHOD .Appearance }
Shape140.Appearance := Appearance141;
IndexedFaceSet145 := TIndexedFaceSetNode.Create;
IndexedFaceSet145.SetCoordIndex([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet145.CreaseAngle := 3.14;
Coordinate146 := TCoordinateNode.Create;
Coordinate146.SetPoint([Vector3(0,1.77,0),Vector3(0,1.665,0.09),Vector3(-0.033,1.62,0.087),Vector3(0.033,1.62,0.087),Vector3(0,1.55,0.097),Vector3(-0.077,1.64,-0.01),Vector3(-0.0527,1.58,0.015),Vector3(0.077,1.64,-0.01),Vector3(0.0527,1.58,0.015),Vector3(0,1.625,-0.0925),Vector3(-0.03,1.46,0.035),Vector3(0,1.44,0.03),Vector3(0.03,1.46,0.035),Vector3(-0.1135,1.318,0.095),Vector3(0.1135,1.318,0.095),Vector3(0,1.25,0.113),Vector3(-0.087,1.19,0.09),Vector3(-0.0935,1.03,0.075),Vector3(0.087,1.19,0.09),Vector3(0.0935,1.03,0.075),Vector3(-0.1425,1.065,0.0033),Vector3(-0.15,0.9,-0.01),Vector3(0.1425,1.065,0.0033),Vector3(0.15,0.9,-0.01),Vector3(0,1.53,-0.084),Vector3(0.0049,1.1908,-0.1113),Vector3(-0.0773,1.019,-0.12),Vector3(0.0773,1.019,-0.12),Vector3(0.005,1.0915,-0.1091),Vector3(-0.178,1.4825,-0.0625),Vector3(-0.17,1.38,0.007),Vector3(-0.1884,0.8676,-0.036),Vector3(-0.16,1.38,-0.127),Vector3(-0.2,1.1388,-0.08),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.23,1.133,-0.055),Vector3(-0.1977,0.8169,-0.0177),Vector3(-0.1941,0.6772,-0.0423),Vector3(-0.2117,0.8562,-0.0584),Vector3(-0.1929,0.789,-0.1064),Vector3(0.175,1.4825,-0.06),Vector3(0.17,1.38,0.007),Vector3(0.1901,0.8645,-0.0415),Vector3(0.16,1.38,-0.125),Vector3(0.2,1.1388,-0.08),Vector3(0.165,1.1388,-0.04),Vector3(0.244,1.1388,-0.04),Vector3(0.23,1.133,-0.055),Vector3(0.2009,0.8139,-0.0237),Vector3(0.2056,0.6743,-0.0482),Vector3(0.2142,0.8529,-0.0648),Vector3(0.1929,0.786,-0.1122),Vector3(-0.1,0.4913,-0.03),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.165,0.01,0.12),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.09,0.056,0.0125),Vector3(-0.115,0.02,0.122),Vector3(-0.115,0.04,-0.055),Vector3(-0.11,0.011,0.19),Vector3(0.0993,0.4881,-0.0309),Vector3(0.17,0.466,0),Vector3(0.05,0.4867,0),Vector3(0.165,0.01,0.12),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.09,0.056,0.0125),Vector3(0.115,0.02,0.122),Vector3(0.115,0.04,-0.055),Vector3(0.11,0.011,0.19),Vector3(0,0.875,0),Vector3(-0.0646,1.5149,-0.038),Vector3(0.0646,1.5149,-0.038),Vector3(0,1.07225,0.09),Vector3(-0.11,1.427,-0.1375),Vector3(-0.235,1.42,-0.0625),Vector3(0.11,1.427,-0.1375),Vector3(0.235,1.42,-0.0625),Vector3(0,1.41,-0.145),Vector3(0,0.925,0.08),Vector3(-0.087,1.19,-0.09),Vector3(0.087,1.19,-0.09),Vector3(0.172,1.32,-0.03),Vector3(-0.172,1.32,-0.03),Vector3(0.15,1.23,-0.015),Vector3(-0.15,1.23,-0.015),Vector3(0.079,0.92,-0.14),Vector3(0.1,0.9,0.077),Vector3(-0.079,0.92,-0.14),Vector3(-0.1,0.9,0.075),Vector3(0,0.87,0),Vector3(0.171,0.65,0),Vector3(0.02,0.65,0),Vector3(0.1,0.65,-0.08),Vector3(0.1,0.65,0.07),Vector3(-0.171,0.65,0),Vector3(-0.02,0.65,0),Vector3(-0.1,0.65,-0.08),Vector3(-0.1,0.65,0.07),Vector3(0.25,1.27,-0.04),Vector3(0.17,1.27,-0.04),Vector3(0.2,1.27,-0.09),Vector3(0.2,1.27,0.02),Vector3(0.244,1.1388,-0.04),Vector3(0.165,1.1388,-0.04),Vector3(0.2,1.1388,-0.08),Vector3(0.2,1.1388,-0.013),Vector3(0.225,1,-0.01),Vector3(0.225,1,-0.07),Vector3(0.185,1,-0.01),Vector3(0.185,1,-0.07),Vector3(0.2,1.1388,-0.04),Vector3(0.225,0.92,-0.04),Vector3(0.175,0.92,-0.04),Vector3(0.2,0.92,-0.065),Vector3(0.2,0.92,-0.015),Vector3(0.225,0.89,-0.04),Vector3(0.175,0.89,-0.04),Vector3(0.2,0.89,-0.065),Vector3(0.2,0.89,-0.015),Vector3(0.218,0.86,-0.04),Vector3(0.184,0.86,-0.04),Vector3(0.2,0.87,-0.07),Vector3(0.2,0.87,0),Vector3(0.21,0.85,0),Vector3(0.1854,0.85,0),Vector3(0.212,0.84,-0.015),Vector3(0.183,0.84,-0.015),Vector3(0.213,0.835,-0.04),Vector3(0.19,0.835,-0.04),Vector3(0.211,0.835,-0.065),Vector3(0.192,0.835,-0.065),Vector3(0.208,0.84,-0.085),Vector3(0.19,0.84,-0.085),Vector3(0.2,0.84,-0.095),Vector3(0.215,0.82,0),Vector3(0.193,0.815,0.005),Vector3(0.198,0.8,0.012),Vector3(0.21,0.82,0.03),Vector3(0.19,0.82,0.03),Vector3(0.2,0.835,0.039),Vector3(0.212,0.8,0.05),Vector3(0.188,0.8,0.05),Vector3(0.2,0.807,0.057),Vector3(0.2,0.793,0.035),Vector3(0.2,0.774,0.076),Vector3(0.212,0.78,0.07),Vector3(0.188,0.78,0.07),Vector3(0.2,0.785,0.075),Vector3(0.2,0.77,0.062),Vector3(0.215,0.793,-0.015),Vector3(0.187,0.793,-0.015),Vector3(0.2,0.793,-0.005),Vector3(0.215,0.788,-0.04),Vector3(0.187,0.788,-0.04),Vector3(0.215,0.793,-0.065),Vector3(0.187,0.793,-0.065),Vector3(0.21,0.79,-0.085),Vector3(0.19,0.79,-0.085),Vector3(0.2,0.79,-0.095),Vector3(0.19,0.77,-0.0275),Vector3(0.19,0.77,-0.0525),Vector3(0.19,0.78,-0.0775),Vector3(0.212,0.745,-0.015),Vector3(0.188,0.745,-0.02),Vector3(0.2,0.745,-0.0255),Vector3(0.2,0.745,-0.0045),Vector3(0.211,0.72,-0.015),Vector3(0.189,0.72,-0.015),Vector3(0.2,0.72,-0.0252),Vector3(0.2,0.72,-0.0048),Vector3(0.21,0.695,-0.015),Vector3(0.19,0.695,-0.015),Vector3(0.2,0.695,-0.025),Vector3(0.2,0.695,-0.005),Vector3(0.2,0.685,-0.015),Vector3(0.215,0.74,-0.04),Vector3(0.185,0.74,-0.04),Vector3(0.2,0.74,-0.055),Vector3(0.2,0.74,-0.025),Vector3(0.21,0.7142,-0.04),Vector3(0.19,0.7142,-0.04),Vector3(0.2,0.7142,-0.053),Vector3(0.2,0.7142,-0.027),Vector3(0.21,0.68,-0.04),Vector3(0.19,0.68,-0.04),Vector3(0.2,0.68,-0.05),Vector3(0.2,0.68,-0.03),Vector3(0.2,0.67,-0.04),Vector3(0.212,0.74,-0.065),Vector3(0.188,0.74,-0.065),Vector3(0.2,0.74,-0.0756),Vector3(0.2,0.74,-0.0542),Vector3(0.21,0.7177,-0.065),Vector3(0.19,0.7177,-0.065),Vector3(0.2,0.7177,-0.0751),Vector3(0.2,0.7177,-0.0549),Vector3(0.21,0.695,-0.065),Vector3(0.19,0.695,-0.065),Vector3(0.2,0.695,-0.075),Vector3(0.2,0.695,-0.055),Vector3(0.2,0.685,-0.065),Vector3(0.211,0.755,-0.085),Vector3(0.189,0.755,-0.085),Vector3(0.2,0.755,-0.0952),Vector3(0.2,0.755,-0.0748),Vector3(0.21,0.735,-0.085),Vector3(0.19,0.735,-0.085),Vector3(0.2,0.735,-0.0951),Vector3(0.2,0.735,-0.0749),Vector3(0.21,0.72,-0.085),Vector3(0.19,0.72,-0.085),Vector3(0.2,0.72,-0.095),Vector3(0.2,0.72,-0.075),Vector3(0.2,0.71,-0.085),Vector3(-0.23,1.23,-0.04),Vector3(-0.16,1.23,-0.04),Vector3(-0.2,1.235,-0.105),Vector3(-0.2,1.255,0.02),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.2,1.1388,-0.08),Vector3(-0.2,1.1388,0.013),Vector3(-0.225,1,-0.01),Vector3(-0.225,1,-0.07),Vector3(-0.185,1,-0.01),Vector3(-0.185,1,-0.07),Vector3(-0.2,1.1388,-0.04),Vector3(-0.225,0.92,-0.04),Vector3(-0.175,0.92,-0.04),Vector3(-0.2,0.92,-0.065),Vector3(-0.2,0.92,-0.015),Vector3(-0.225,0.89,-0.04),Vector3(-0.175,0.89,-0.04),Vector3(-0.2,0.89,-0.065),Vector3(-0.2,0.89,-0.015),Vector3(-0.218,0.86,-0.04),Vector3(-0.184,0.86,-0.04),Vector3(-0.2,0.87,-0.07),Vector3(-0.2,0.87,0),Vector3(-0.21,0.85,0),Vector3(-0.1854,0.85,0),Vector3(-0.212,0.84,-0.015),Vector3(-0.183,0.84,-0.015),Vector3(-0.213,0.835,-0.04),Vector3(-0.19,0.835,-0.04),Vector3(-0.211,0.835,-0.065),Vector3(-0.192,0.835,-0.065),Vector3(-0.208,0.84,-0.085),Vector3(-0.19,0.84,-0.085),Vector3(-0.2,0.84,-0.095),Vector3(-0.215,0.82,0),Vector3(-0.193,0.815,0.005),Vector3(-0.198,0.8,0.012),Vector3(-0.21,0.82,0.03),Vector3(-0.19,0.82,0.03),Vector3(-0.2,0.835,0.039),Vector3(-0.212,0.8,0.05),Vector3(-0.188,0.8,0.05),Vector3(-0.2,0.807,0.057),Vector3(-0.2,0.793,0.035),Vector3(-0.2,0.774,0.076),Vector3(-0.212,0.78,0.07),Vector3(-0.188,0.78,0.07),Vector3(-0.2,0.785,0.075),Vector3(-0.2,0.77,0.062),Vector3(-0.215,0.793,-0.015),Vector3(-0.187,0.793,-0.015),Vector3(-0.2,0.793,-0.005),Vector3(-0.215,0.788,-0.04),Vector3(-0.187,0.788,-0.04),Vector3(-0.215,0.793,-0.065),Vector3(-0.187,0.793,-0.065),Vector3(-0.21,0.79,-0.085),Vector3(-0.19,0.79,-0.085),Vector3(-0.2,0.79,-0.095),Vector3(-0.19,0.77,-0.0275),Vector3(-0.19,0.77,-0.0525),Vector3(-0.19,0.78,-0.0775),Vector3(-0.212,0.745,-0.015),Vector3(-0.188,0.745,-0.02),Vector3(-0.2,0.745,-0.0255),Vector3(-0.2,0.745,-0.0045),Vector3(-0.211,0.72,-0.015),Vector3(-0.189,0.72,-0.015),Vector3(-0.2,0.72,-0.0252),Vector3(-0.2,0.72,-0.0048),Vector3(-0.21,0.695,-0.015),Vector3(-0.19,0.695,-0.015),Vector3(-0.2,0.695,-0.025),Vector3(-0.2,0.695,-0.005),Vector3(-0.2,0.685,-0.015),Vector3(-0.215,0.74,-0.04),Vector3(-0.185,0.74,-0.04),Vector3(-0.2,0.74,-0.055),Vector3(-0.2,0.74,-0.025),Vector3(-0.21,0.7142,-0.04),Vector3(-0.19,0.7142,-0.04),Vector3(-0.2,0.7142,-0.053),Vector3(-0.2,0.7142,-0.027),Vector3(-0.21,0.68,-0.04),Vector3(-0.19,0.68,-0.04),Vector3(-0.2,0.68,-0.05),Vector3(-0.2,0.68,-0.03),Vector3(-0.2,0.67,-0.04),Vector3(-0.212,0.74,-0.065),Vector3(-0.188,0.74,-0.065),Vector3(-0.2,0.74,-0.0756),Vector3(-0.2,0.74,-0.0542),Vector3(-0.21,0.7177,-0.065),Vector3(-0.19,0.7177,-0.065),Vector3(-0.2,0.7177,-0.0751),Vector3(-0.2,0.7177,-0.0549),Vector3(-0.21,0.695,-0.065),Vector3(-0.19,0.695,-0.065),Vector3(-0.2,0.695,-0.075),Vector3(-0.2,0.695,-0.055),Vector3(-0.2,0.685,-0.065),Vector3(-0.211,0.755,-0.085),Vector3(-0.189,0.755,-0.085),Vector3(-0.2,0.755,-0.0952),Vector3(-0.2,0.755,-0.0748),Vector3(-0.21,0.735,-0.085),Vector3(-0.19,0.735,-0.085),Vector3(-0.2,0.735,-0.0951),Vector3(-0.2,0.735,-0.0749),Vector3(-0.21,0.72,-0.085),Vector3(-0.19,0.72,-0.085),Vector3(-0.2,0.72,-0.095),Vector3(-0.2,0.72,-0.075),Vector3(-0.2,0.71,-0.085),Vector3(0.115,0.466,0.06),Vector3(0.115,0.466,-0.055),Vector3(0.15,0.466,0),Vector3(0.05,0.466,0),Vector3(0.17,0.3,0),Vector3(0.06,0.3,0),Vector3(0.1,0.3,-0.05),Vector3(0.1,0.3,0.05),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.115,0.069,-0.045),Vector3(0.117,0.0975,0.0615),Vector3(0.1375,0.006,-0.03),Vector3(0.095,0.006,-0.03),Vector3(0.115,0.015,-0.045),Vector3(0.115,0.06,0.1),Vector3(0.115,0,0.07),Vector3(0.165,0,0.07),Vector3(0.095,0,0.07),Vector3(0.115,0.04,0.13),Vector3(0.125,0,0.12),Vector3(0.165,0,0.12),Vector3(0.087,0,0.122),Vector3(0.09,0.012,0.188),Vector3(0.11,0.011,0.19),Vector3(0.128,0.011,0.185),Vector3(0.142,0.011,0.178),Vector3(0.154,0.01,0.168),Vector3(-0.115,0.466,0.06),Vector3(-0.115,0.466,-0.055),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.17,0.3,0),Vector3(-0.06,0.3,0),Vector3(-0.1,0.3,-0.05),Vector3(-0.1,0.3,0.05),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.115,0.069,-0.045),Vector3(-0.117,0.0975,0.0615),Vector3(-0.1375,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.115,0.06,0.1),Vector3(-0.115,0,0.07),Vector3(-0.165,0,0.07),Vector3(-0.095,0,0.07),Vector3(-0.115,0.04,0.13),Vector3(-0.125,0,0.12),Vector3(-0.165,0,0.12),Vector3(-0.087,0,0.122),Vector3(-0.09,0.012,0.188),Vector3(-0.11,0.011,0.19),Vector3(-0.128,0.011,0.185),Vector3(-0.142,0.011,0.178),Vector3(-0.154,0.01,0.168)]);
end;

procedure InitJoeSkinTexcoordDisplacerKickPart14;
begin

{ METHOD .Coord }
IndexedFaceSet145.Coord := Coordinate146;
TextureCoordinate147 := TTextureCoordinateNode.Create;
TextureCoordinate147.SetPoint([Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5),Vector2(0,0),Vector2(0.5,0.5)]);
{ METHOD .TexCoord }
IndexedFaceSet145.TexCoord := TextureCoordinate147;
{ METHOD .Geometry }
Shape140.Geometry := IndexedFaceSet145;
{ METHOD .SetSkin }
HAnimHumanoid34.Skin := Shape140;
{ METHOD .FdSkinCoord.Set }
HAnimHumanoid34.FdSkinCoord.Set(Coordinate146);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint35);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint46);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint59);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint60);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint61);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint62);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint63);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint64);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint65);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint66);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint67);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint68);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint69);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint70);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint71);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint72);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint73);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint74);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint75);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint76);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint77);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint78);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint79);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint80);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint81);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint82);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint83);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint91);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint93);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint117);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint49);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint55);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint95);
end;

procedure InitJoeSkinTexcoordDisplacerKickPart15;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint119);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint86);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint89);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint87);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint90);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint85);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint88);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint47);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint53);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint100);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint124);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint101);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint125);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint102);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint126);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint103);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint127);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint48);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint54);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint52);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint58);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint104);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint128);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint105);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint129);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint106);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint130);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint107);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint131);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint51);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint57);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint112);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint136);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint113);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint137);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint114);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint138);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint115);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint139);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint108);
end;

procedure InitJoeSkinTexcoordDisplacerKickPart16;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint132);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint109);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint133);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint110);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint134);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint111);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint135);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint94);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint118);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint92);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint116);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint50);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint56);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint97);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint121);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint98);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint122);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint99);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint123);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint96);
{ METHOD .FdJoints.Add }
HAnimHumanoid34.FdJoints.Add(HAnimJoint120);
{ METHOD .FdSegments.Add }
HAnimHumanoid34.FdSegments.Add(HAnimSegment38);
{ METHOD .SetSites }
HAnimHumanoid34.Sites := HAnimSite39;
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(HAnimHumanoid34);
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(Group33);
Group245 := TGroupNode.Create;
TimeSensor246 := TTimeSensorNode.Create;
TimeSensor246.CycleInterval := 3.73;
TimeSensor246.Loop := True;
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(TimeSensor246);
{ Interpolators }
OrientationInterpolator247 := TOrientationInterpolatorNode.Create;
OrientationInterpolator247.SetKey([0,0.1,0.4,0.6,1]);
OrientationInterpolator247.SetKeyValue([Vector4(1,0,0,0.5),Vector4(1,0,0,0.5),Vector4(-1,0,0,0.1),Vector4(-1,0,0,0.5),Vector4(-1,0,0,0.5)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator247);
PositionInterpolator248 := TPositionInterpolatorNode.Create;
PositionInterpolator248.SetKey([0,0.2,0.6,1]);
PositionInterpolator248.SetKeyValue([Vector3(1,0.3,-1),Vector3(0.4,-0.04,-0.4),Vector3(-0.18,0.1,0),Vector3(-0.2,0.15,0.15)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(PositionInterpolator248);
OrientationInterpolator249 := TOrientationInterpolatorNode.Create;
OrientationInterpolator249.SetKey([0,0.5,1]);
end;

procedure InitJoeSkinTexcoordDisplacerKickPart17;
begin

OrientationInterpolator249.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator249);
OrientationInterpolator250 := TOrientationInterpolatorNode.Create;
OrientationInterpolator250.SetKey([0,0.1,0.3,0.45,1]);
OrientationInterpolator250.SetKeyValue([Vector4(-1,0,0,1.5),Vector4(-1,0,0,1),Vector4(0,0,1,0),Vector4(1,0,0,0.5),Vector4(1,0,0,1)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator250);
OrientationInterpolator251 := TOrientationInterpolatorNode.Create;
OrientationInterpolator251.SetKey([0,0.2,0.35,0.5,1]);
OrientationInterpolator251.SetKeyValue([Vector4(1,0,0,1),Vector4(0,0,1,0),Vector4(0,0,1,0.2),Vector4(1,0,1,0.5),Vector4(1,0,0,1.4)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator251);
OrientationInterpolator252 := TOrientationInterpolatorNode.Create;
OrientationInterpolator252.SetKey([0,0.25,1]);
OrientationInterpolator252.SetKeyValue([Vector4(-1,0,0,1),Vector4(0,0,1,0),Vector4(1,0,0,1)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator252);
OrientationInterpolator253 := TOrientationInterpolatorNode.Create;
OrientationInterpolator253.SetKey([0,0.5,1]);
OrientationInterpolator253.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator253);
OrientationInterpolator254 := TOrientationInterpolatorNode.Create;
OrientationInterpolator254.SetKey([0,0.5,1]);
OrientationInterpolator254.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator254);
OrientationInterpolator255 := TOrientationInterpolatorNode.Create;
OrientationInterpolator255.SetKey([0,0.5,1]);
OrientationInterpolator255.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator255);
OrientationInterpolator256 := TOrientationInterpolatorNode.Create;
OrientationInterpolator256.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator256.SetKeyValue([Vector4(1,0,0,1),Vector4(1,0,0,1),Vector4(-1,0,0,1),Vector4(-1,0,0,1),Vector4(-1,0,0,1)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator256);
OrientationInterpolator257 := TOrientationInterpolatorNode.Create;
OrientationInterpolator257.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator257.SetKeyValue([Vector4(1,0,0,0.1),Vector4(0,0,1,0),Vector4(1,0,0,1),Vector4(1,0,0,1),Vector4(1,0,0,1.5)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator257);
OrientationInterpolator258 := TOrientationInterpolatorNode.Create;
OrientationInterpolator258.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator258.SetKeyValue([Vector4(-1,0,0,1),Vector4(0,0,1,0),Vector4(1,0,0,1),Vector4(1,0,0,1),Vector4(1,0,0,0.5)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator258);
OrientationInterpolator259 := TOrientationInterpolatorNode.Create;
OrientationInterpolator259.SetKey([0,0.5,1]);
end;

procedure InitJoeSkinTexcoordDisplacerKickPart18;
begin

OrientationInterpolator259.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator259);
OrientationInterpolator260 := TOrientationInterpolatorNode.Create;
OrientationInterpolator260.SetKey([0,0.5,1]);
OrientationInterpolator260.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator260);
OrientationInterpolator261 := TOrientationInterpolatorNode.Create;
OrientationInterpolator261.SetKey([0,0.5,1]);
OrientationInterpolator261.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator261);
OrientationInterpolator262 := TOrientationInterpolatorNode.Create;
OrientationInterpolator262.SetKey([0,0.5,1]);
OrientationInterpolator262.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator262);
OrientationInterpolator263 := TOrientationInterpolatorNode.Create;
OrientationInterpolator263.SetKey([0,0.5,1]);
OrientationInterpolator263.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator263);
OrientationInterpolator264 := TOrientationInterpolatorNode.Create;
OrientationInterpolator264.SetKey([0,0.5,1]);
OrientationInterpolator264.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator264);
OrientationInterpolator265 := TOrientationInterpolatorNode.Create;
OrientationInterpolator265.SetKey([0,0.5,1]);
OrientationInterpolator265.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator265);
OrientationInterpolator266 := TOrientationInterpolatorNode.Create;
OrientationInterpolator266.SetKey([0,0.5,1]);
OrientationInterpolator266.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator266);
OrientationInterpolator267 := TOrientationInterpolatorNode.Create;
OrientationInterpolator267.SetKey([0,0.5,1]);
OrientationInterpolator267.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator267);
OrientationInterpolator268 := TOrientationInterpolatorNode.Create;
OrientationInterpolator268.SetKey([0,0.5,1]);
OrientationInterpolator268.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator268);
OrientationInterpolator269 := TOrientationInterpolatorNode.Create;
OrientationInterpolator269.SetKey([0,0.5,1]);
end;

procedure InitJoeSkinTexcoordDisplacerKickPart19;
begin

OrientationInterpolator269.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator269);
OrientationInterpolator270 := TOrientationInterpolatorNode.Create;
OrientationInterpolator270.SetKey([0,0.5,1]);
OrientationInterpolator270.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator270);
OrientationInterpolator271 := TOrientationInterpolatorNode.Create;
OrientationInterpolator271.SetKey([0,0.5,1]);
OrientationInterpolator271.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator271);
OrientationInterpolator272 := TOrientationInterpolatorNode.Create;
OrientationInterpolator272.SetKey([0,0.5,1]);
OrientationInterpolator272.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator272);
OrientationInterpolator273 := TOrientationInterpolatorNode.Create;
OrientationInterpolator273.SetKey([0,0.5,1]);
OrientationInterpolator273.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator273);
OrientationInterpolator274 := TOrientationInterpolatorNode.Create;
OrientationInterpolator274.SetKey([0,0.5,1]);
OrientationInterpolator274.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator274);
OrientationInterpolator275 := TOrientationInterpolatorNode.Create;
OrientationInterpolator275.SetKey([0,0.5,1]);
OrientationInterpolator275.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator275);
OrientationInterpolator276 := TOrientationInterpolatorNode.Create;
OrientationInterpolator276.SetKey([0,0.5,1]);
OrientationInterpolator276.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator276);
OrientationInterpolator277 := TOrientationInterpolatorNode.Create;
OrientationInterpolator277.SetKey([0,0.5,1]);
OrientationInterpolator277.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator277);
OrientationInterpolator278 := TOrientationInterpolatorNode.Create;
OrientationInterpolator278.SetKey([0,0.5,1]);
OrientationInterpolator278.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator278);
OrientationInterpolator279 := TOrientationInterpolatorNode.Create;
OrientationInterpolator279.SetKey([0,0.5,1]);
end;

procedure InitJoeSkinTexcoordDisplacerKickPart20;
begin

OrientationInterpolator279.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator279);
OrientationInterpolator280 := TOrientationInterpolatorNode.Create;
OrientationInterpolator280.SetKey([0,0.5,1]);
OrientationInterpolator280.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator280);
OrientationInterpolator281 := TOrientationInterpolatorNode.Create;
OrientationInterpolator281.SetKey([0,0.5,1]);
OrientationInterpolator281.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator281);
OrientationInterpolator282 := TOrientationInterpolatorNode.Create;
OrientationInterpolator282.SetKey([0,0.3,0.4,1]);
OrientationInterpolator282.SetKeyValue([Vector4(1,0,1,0.25),Vector4(-1,0,-1,0.35),Vector4(1,0,0,0.75),Vector4(1,0,1,0.5)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator282);
OrientationInterpolator283 := TOrientationInterpolatorNode.Create;
OrientationInterpolator283.SetKey([0,0.5,1]);
OrientationInterpolator283.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator283);
OrientationInterpolator284 := TOrientationInterpolatorNode.Create;
OrientationInterpolator284.SetKey([0,0.5,1]);
OrientationInterpolator284.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator284);
OrientationInterpolator285 := TOrientationInterpolatorNode.Create;
OrientationInterpolator285.SetKey([0,0.5,1]);
OrientationInterpolator285.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator285);
OrientationInterpolator286 := TOrientationInterpolatorNode.Create;
OrientationInterpolator286.SetKey([0,0.2,0.75,1]);
OrientationInterpolator286.SetKeyValue([Vector4(0,-1,0,0.5),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,1,0,0.35)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator286);
OrientationInterpolator287 := TOrientationInterpolatorNode.Create;
OrientationInterpolator287.SetKey([0,0.5,1]);
OrientationInterpolator287.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator287);
OrientationInterpolator288 := TOrientationInterpolatorNode.Create;
OrientationInterpolator288.SetKey([0,0.5,1]);
OrientationInterpolator288.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator288);
OrientationInterpolator289 := TOrientationInterpolatorNode.Create;
OrientationInterpolator289.SetKey([0,0.5,1]);
end;

procedure InitJoeSkinTexcoordDisplacerKickPart21;
begin

OrientationInterpolator289.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator289);
OrientationInterpolator290 := TOrientationInterpolatorNode.Create;
OrientationInterpolator290.SetKey([0,0.5,1]);
OrientationInterpolator290.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator290);
OrientationInterpolator291 := TOrientationInterpolatorNode.Create;
OrientationInterpolator291.SetKey([0,0.5,1]);
OrientationInterpolator291.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator291);
OrientationInterpolator292 := TOrientationInterpolatorNode.Create;
OrientationInterpolator292.SetKey([0,0.5,1]);
OrientationInterpolator292.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator292);
OrientationInterpolator293 := TOrientationInterpolatorNode.Create;
OrientationInterpolator293.SetKey([0,0.5,1]);
OrientationInterpolator293.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator293);
OrientationInterpolator294 := TOrientationInterpolatorNode.Create;
OrientationInterpolator294.SetKey([0,0.5,1]);
OrientationInterpolator294.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator294);
OrientationInterpolator295 := TOrientationInterpolatorNode.Create;
OrientationInterpolator295.SetKey([0,0.5,1]);
OrientationInterpolator295.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator295);
OrientationInterpolator296 := TOrientationInterpolatorNode.Create;
OrientationInterpolator296.SetKey([0,0.4,1]);
OrientationInterpolator296.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(-1,0,1,1.75)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator296);
OrientationInterpolator297 := TOrientationInterpolatorNode.Create;
OrientationInterpolator297.SetKey([0,0.5,1]);
OrientationInterpolator297.SetKeyValue([Vector4(-1,0,0,3),Vector4(-1,0,0,0.75),Vector4(-1,-1,0,0.5)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator297);
OrientationInterpolator298 := TOrientationInterpolatorNode.Create;
OrientationInterpolator298.SetKey([0,0.4,0.8,1]);
OrientationInterpolator298.SetKeyValue([Vector4(0,0,1,0),Vector4(0,1,0,1.3),Vector4(0,-0.5,1,1.3),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator298);
OrientationInterpolator299 := TOrientationInterpolatorNode.Create;
OrientationInterpolator299.SetKey([0,0.5,1]);
end;

procedure InitJoeSkinTexcoordDisplacerKickPart22;
begin

OrientationInterpolator299.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator299);
OrientationInterpolator300 := TOrientationInterpolatorNode.Create;
OrientationInterpolator300.SetKey([0,0.5,1]);
OrientationInterpolator300.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator300);
OrientationInterpolator301 := TOrientationInterpolatorNode.Create;
OrientationInterpolator301.SetKey([0,0.5,1]);
OrientationInterpolator301.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator301);
OrientationInterpolator302 := TOrientationInterpolatorNode.Create;
OrientationInterpolator302.SetKey([0,0.5,1]);
OrientationInterpolator302.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator302);
OrientationInterpolator303 := TOrientationInterpolatorNode.Create;
OrientationInterpolator303.SetKey([0,0.5,1]);
OrientationInterpolator303.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator303);
OrientationInterpolator304 := TOrientationInterpolatorNode.Create;
OrientationInterpolator304.SetKey([0,0.5,1]);
OrientationInterpolator304.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator304);
OrientationInterpolator305 := TOrientationInterpolatorNode.Create;
OrientationInterpolator305.SetKey([0,0.5,1]);
OrientationInterpolator305.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator305);
OrientationInterpolator306 := TOrientationInterpolatorNode.Create;
OrientationInterpolator306.SetKey([0,0.5,1]);
OrientationInterpolator306.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator306);
OrientationInterpolator307 := TOrientationInterpolatorNode.Create;
OrientationInterpolator307.SetKey([0,0.5,1]);
OrientationInterpolator307.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator307);
OrientationInterpolator308 := TOrientationInterpolatorNode.Create;
OrientationInterpolator308.SetKey([0,0.5,1]);
OrientationInterpolator308.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator308);
OrientationInterpolator309 := TOrientationInterpolatorNode.Create;
OrientationInterpolator309.SetKey([0,0.5,1]);
end;

procedure InitJoeSkinTexcoordDisplacerKickPart23;
begin

OrientationInterpolator309.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator309);
OrientationInterpolator310 := TOrientationInterpolatorNode.Create;
OrientationInterpolator310.SetKey([0,0.5,1]);
OrientationInterpolator310.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator310);
OrientationInterpolator311 := TOrientationInterpolatorNode.Create;
OrientationInterpolator311.SetKey([0,0.5,1]);
OrientationInterpolator311.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator311);
OrientationInterpolator312 := TOrientationInterpolatorNode.Create;
OrientationInterpolator312.SetKey([0,0.5,1]);
OrientationInterpolator312.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator312);
OrientationInterpolator313 := TOrientationInterpolatorNode.Create;
OrientationInterpolator313.SetKey([0,0.5,1]);
OrientationInterpolator313.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator313);
OrientationInterpolator314 := TOrientationInterpolatorNode.Create;
OrientationInterpolator314.SetKey([0,0.5,1]);
OrientationInterpolator314.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator314);
OrientationInterpolator315 := TOrientationInterpolatorNode.Create;
OrientationInterpolator315.SetKey([0,0.5,1]);
OrientationInterpolator315.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator315);
OrientationInterpolator316 := TOrientationInterpolatorNode.Create;
OrientationInterpolator316.SetKey([0,0.5,1]);
OrientationInterpolator316.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator316);
OrientationInterpolator317 := TOrientationInterpolatorNode.Create;
OrientationInterpolator317.SetKey([0,0.5,1]);
OrientationInterpolator317.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator317);
OrientationInterpolator318 := TOrientationInterpolatorNode.Create;
OrientationInterpolator318.SetKey([0,0.5,1]);
OrientationInterpolator318.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator318);
OrientationInterpolator319 := TOrientationInterpolatorNode.Create;
OrientationInterpolator319.SetKey([0,0.5,1]);
end;

procedure InitJoeSkinTexcoordDisplacerKickPart24;
begin

OrientationInterpolator319.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator319);
OrientationInterpolator320 := TOrientationInterpolatorNode.Create;
OrientationInterpolator320.SetKey([0,0.5,1]);
OrientationInterpolator320.SetKeyValue([Vector4(0,0,-1,2.5),Vector4(0,0,-1,1.5),Vector4(0,0,-1,1.75)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator320);
OrientationInterpolator321 := TOrientationInterpolatorNode.Create;
OrientationInterpolator321.SetKey([0,0.5,1]);
OrientationInterpolator321.SetKeyValue([Vector4(-1,0,0,3),Vector4(-1,0,0,0.75),Vector4(-1,-1,0,0.5)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator321);
OrientationInterpolator322 := TOrientationInterpolatorNode.Create;
OrientationInterpolator322.SetKey([0,0.5,0.7,1]);
OrientationInterpolator322.SetKeyValue([Vector4(0,1,0,0.3),Vector4(0,0,1,0),Vector4(0,0,-1,1),Vector4(0,-1,0,0.3)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator322);
OrientationInterpolator323 := TOrientationInterpolatorNode.Create;
OrientationInterpolator323.SetKey([0,0.5,1]);
OrientationInterpolator323.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator323);
OrientationInterpolator324 := TOrientationInterpolatorNode.Create;
OrientationInterpolator324.SetKey([0,0.5,1]);
OrientationInterpolator324.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator324);
OrientationInterpolator325 := TOrientationInterpolatorNode.Create;
OrientationInterpolator325.SetKey([0,0.5,1]);
OrientationInterpolator325.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator325);
OrientationInterpolator326 := TOrientationInterpolatorNode.Create;
OrientationInterpolator326.SetKey([0,0.5,0.75,1]);
OrientationInterpolator326.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator326);
OrientationInterpolator327 := TOrientationInterpolatorNode.Create;
OrientationInterpolator327.SetKey([0,0.5,0.75,1]);
OrientationInterpolator327.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator327);
OrientationInterpolator328 := TOrientationInterpolatorNode.Create;
OrientationInterpolator328.SetKey([0,0.5,0.75,1]);
OrientationInterpolator328.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator328);
OrientationInterpolator329 := TOrientationInterpolatorNode.Create;
OrientationInterpolator329.SetKey([0,0.5,0.75,1]);
end;

procedure InitJoeSkinTexcoordDisplacerKickPart25;
begin

OrientationInterpolator329.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator329);
OrientationInterpolator330 := TOrientationInterpolatorNode.Create;
OrientationInterpolator330.SetKey([0,0.5,0.75,1]);
OrientationInterpolator330.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator330);
OrientationInterpolator331 := TOrientationInterpolatorNode.Create;
OrientationInterpolator331.SetKey([0,0.5,0.75,1]);
OrientationInterpolator331.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator331);
OrientationInterpolator332 := TOrientationInterpolatorNode.Create;
OrientationInterpolator332.SetKey([0,0.5,0.75,1]);
OrientationInterpolator332.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator332);
OrientationInterpolator333 := TOrientationInterpolatorNode.Create;
OrientationInterpolator333.SetKey([0,0.5,0.75,1]);
OrientationInterpolator333.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator333);
OrientationInterpolator334 := TOrientationInterpolatorNode.Create;
OrientationInterpolator334.SetKey([0,0.5,0.75,1]);
OrientationInterpolator334.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator334);
OrientationInterpolator335 := TOrientationInterpolatorNode.Create;
OrientationInterpolator335.SetKey([0,0.5,0.75,1]);
OrientationInterpolator335.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator335);
OrientationInterpolator336 := TOrientationInterpolatorNode.Create;
OrientationInterpolator336.SetKey([0,0.5,0.75,1]);
OrientationInterpolator336.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator336);
OrientationInterpolator337 := TOrientationInterpolatorNode.Create;
OrientationInterpolator337.SetKey([0,0.5,0.75,1]);
OrientationInterpolator337.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator337);
OrientationInterpolator338 := TOrientationInterpolatorNode.Create;
OrientationInterpolator338.SetKey([0,0.5,0.75,1]);
OrientationInterpolator338.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator338);
OrientationInterpolator339 := TOrientationInterpolatorNode.Create;
OrientationInterpolator339.SetKey([0,0.5,0.75,1]);
end;

procedure InitJoeSkinTexcoordDisplacerKickPart26;
begin

OrientationInterpolator339.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator339);
OrientationInterpolator340 := TOrientationInterpolatorNode.Create;
OrientationInterpolator340.SetKey([0,0.5,0.75,1]);
OrientationInterpolator340.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator340);
OrientationInterpolator341 := TOrientationInterpolatorNode.Create;
OrientationInterpolator341.SetKey([0,0.5,0.75,1]);
OrientationInterpolator341.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ METHOD .FdChildren.Add }
Group245.FdChildren.Add(OrientationInterpolator341);
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(Group245);
{ TimeSensor to Interpolators }
{ Original "KickTimer.EventFraction_changed TO HumanoidRoot_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO HumanoidRoot_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator247.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO HumanoidRoot_TranslationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO HumanoidRoot_TranslationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, PositionInterpolator248.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO sacroiliac_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO sacroiliac_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator249.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_hip_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_hip_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator250.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_knee_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_knee_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator251.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_ankle_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_ankle_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator252.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_subtalar_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_subtalar_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator253.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_midtarsal_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_midtarsal_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator254.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_metatarsal_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_metatarsal_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator255.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_hip_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_hip_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator256.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_knee_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_knee_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator257.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_ankle_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_ankle_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator258.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_subtalar_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_subtalar_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator259.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_midtarsal_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_midtarsal_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator260.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_metatarsal_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_metatarsal_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator261.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vl5_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vl5_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator262.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vl4_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vl4_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator263.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vl3_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vl3_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator264.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vl2_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vl2_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator265.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vl1_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vl1_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator266.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vt12_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vt12_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator267.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vt11_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vt11_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator268.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vt10_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vt10_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator269.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vt9_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vt9_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator270.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vt8_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vt8_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator271.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vt7_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vt7_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator272.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vt6_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vt6_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator273.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vt5_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vt5_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator274.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vt4_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vt4_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator275.EventSet_fraction);
end;

procedure InitJoeSkinTexcoordDisplacerKickPart27;
begin

{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vt3_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vt3_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator276.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vt2_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vt2_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator277.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vt1_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vt1_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator278.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vc7_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vc7_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator279.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vc6_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vc6_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator280.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vc5_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vc5_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator281.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vc4_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vc4_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator282.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vc3_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vc3_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator283.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vc2_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vc2_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator284.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO vc1_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO vc1_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator285.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO skullbase_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO skullbase_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator286.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_eyelid_joint_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_eyelid_joint_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator287.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_eyeball_joint_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_eyeball_joint_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator288.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_eyebrow_joint_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_eyebrow_joint_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator289.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_eyelid_joint_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_eyelid_joint_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator290.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_eyeball_joint_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_eyeball_joint_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator291.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_eyebrow_joint_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_eyebrow_joint_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator292.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO temporomandibular_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO temporomandibular_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator293.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_sternoclavicular_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_sternoclavicular_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator294.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_acromioclavicular_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_acromioclavicular_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator295.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_shoulder_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_shoulder_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator296.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_elbow_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_elbow_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator297.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_wrist_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_wrist_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator298.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_thumb1_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_thumb1_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator299.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_thumb2_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_thumb2_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator300.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_thumb3_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_thumb3_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator301.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_index0_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_index0_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator302.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_index1_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_index1_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator303.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_index2_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_index2_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator304.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_index3_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_index3_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator305.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_middle0_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_middle0_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator306.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_middle1_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_middle1_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator307.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_middle2_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_middle2_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator308.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_middle3_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_middle3_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator309.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_ring0_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_ring0_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator310.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_ring1_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_ring1_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator311.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_ring2_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_ring2_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator312.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_ring3_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_ring3_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator313.EventSet_fraction);
end;

procedure InitJoeSkinTexcoordDisplacerKickPart28;
begin

{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_pinky0_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_pinky0_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator314.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_pinky1_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_pinky1_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator315.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_pinky2_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_pinky2_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator316.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO l_pinky3_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO l_pinky3_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator317.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_sternoclavicular_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_sternoclavicular_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator318.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_acromioclavicular_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_acromioclavicular_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator319.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_shoulder_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_shoulder_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator320.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_elbow_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_elbow_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator321.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_wrist_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_wrist_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator322.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_thumb1_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_thumb1_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator323.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_thumb2_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_thumb2_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator324.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_thumb3_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_thumb3_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator325.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_index0_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_index0_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator326.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_index1_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_index1_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator327.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_index2_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_index2_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator328.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_index3_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_index3_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator329.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_middle0_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_middle0_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator330.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_middle1_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_middle1_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator331.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_middle2_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_middle2_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator332.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_middle3_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_middle3_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator333.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_ring0_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_ring0_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator334.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_ring1_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_ring1_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator335.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_ring2_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_ring2_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator336.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_ring3_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_ring3_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator337.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_pinky0_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_pinky0_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator338.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_pinky1_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_pinky1_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator339.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_pinky2_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_pinky2_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator340.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO r_pinky3_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO r_pinky3_RotationInterpolator.EventSet_fraction}
Group22.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator341.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Routes from Interpolators to Joe_ model Joints }
{ Original "HumanoidRoot_RotationInterpolator.EventValue_changed TO Joe_HumanoidRoot.FdRotation.EventIn }
{ Sample HumanoidRoot_RotationInterpolator.EventValue_changed TO Joe_HumanoidRoot.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator247.EventValue_changed, HAnimJoint35.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "HumanoidRoot_TranslationInterpolator.EventValue_changed TO Joe_HumanoidRoot.FdTranslation.EventIn }
{ Sample HumanoidRoot_TranslationInterpolator.EventValue_changed TO Joe_HumanoidRoot.FdTranslation.EventIn}
Group22.AddRoute(PositionInterpolator248.EventValue_changed, HAnimJoint35.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "sacroiliac_RotationInterpolator.EventValue_changed TO Joe_sacroiliac.FdRotation.EventIn }
{ Sample sacroiliac_RotationInterpolator.EventValue_changed TO Joe_sacroiliac.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator249.EventValue_changed, HAnimJoint46.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_hip_RotationInterpolator.EventValue_changed TO Joe_l_hip.FdRotation.EventIn }
{ Sample l_hip_RotationInterpolator.EventValue_changed TO Joe_l_hip.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator250.EventValue_changed, HAnimJoint47.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_knee_RotationInterpolator.EventValue_changed TO Joe_l_knee.FdRotation.EventIn }
{ Sample l_knee_RotationInterpolator.EventValue_changed TO Joe_l_knee.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator251.EventValue_changed, HAnimJoint48.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_ankle_RotationInterpolator.EventValue_changed TO Joe_l_ankle.FdRotation.EventIn }
{ Sample l_ankle_RotationInterpolator.EventValue_changed TO Joe_l_ankle.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator252.EventValue_changed, HAnimJoint49.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_subtalar_RotationInterpolator.EventValue_changed TO Joe_l_subtalar.FdRotation.EventIn }
{ Sample l_subtalar_RotationInterpolator.EventValue_changed TO Joe_l_subtalar.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator253.EventValue_changed, HAnimJoint50.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_midtarsal_RotationInterpolator.EventValue_changed TO Joe_l_midtarsal.FdRotation.EventIn }
{ Sample l_midtarsal_RotationInterpolator.EventValue_changed TO Joe_l_midtarsal.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator254.EventValue_changed, HAnimJoint51.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_metatarsal_RotationInterpolator.EventValue_changed TO Joe_l_metatarsal.FdRotation.EventIn }
{ Sample l_metatarsal_RotationInterpolator.EventValue_changed TO Joe_l_metatarsal.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator255.EventValue_changed, HAnimJoint52.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_hip_RotationInterpolator.EventValue_changed TO Joe_r_hip.FdRotation.EventIn }
{ Sample r_hip_RotationInterpolator.EventValue_changed TO Joe_r_hip.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator256.EventValue_changed, HAnimJoint53.FdRotation.EventIn);
end;

procedure InitJoeSkinTexcoordDisplacerKickPart29;
begin

{ METHOD .AddX3DROUTE }
{ Original "r_knee_RotationInterpolator.EventValue_changed TO Joe_r_knee.FdRotation.EventIn }
{ Sample r_knee_RotationInterpolator.EventValue_changed TO Joe_r_knee.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator257.EventValue_changed, HAnimJoint54.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_ankle_RotationInterpolator.EventValue_changed TO Joe_r_ankle.FdRotation.EventIn }
{ Sample r_ankle_RotationInterpolator.EventValue_changed TO Joe_r_ankle.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator258.EventValue_changed, HAnimJoint55.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_subtalar_RotationInterpolator.EventValue_changed TO Joe_r_subtalar.FdRotation.EventIn }
{ Sample r_subtalar_RotationInterpolator.EventValue_changed TO Joe_r_subtalar.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator259.EventValue_changed, HAnimJoint56.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_midtarsal_RotationInterpolator.EventValue_changed TO Joe_r_midtarsal.FdRotation.EventIn }
{ Sample r_midtarsal_RotationInterpolator.EventValue_changed TO Joe_r_midtarsal.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator260.EventValue_changed, HAnimJoint57.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_metatarsal_RotationInterpolator.EventValue_changed TO Joe_r_metatarsal.FdRotation.EventIn }
{ Sample r_metatarsal_RotationInterpolator.EventValue_changed TO Joe_r_metatarsal.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator261.EventValue_changed, HAnimJoint58.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "vl5_RotationInterpolator.EventValue_changed TO Joe_vl5.FdRotation.EventIn }
{ Sample vl5_RotationInterpolator.EventValue_changed TO Joe_vl5.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator262.EventValue_changed, HAnimJoint59.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "vl4_RotationInterpolator.EventValue_changed TO Joe_vl4.FdRotation.EventIn }
{ Sample vl4_RotationInterpolator.EventValue_changed TO Joe_vl4.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator263.EventValue_changed, HAnimJoint60.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "vl3_RotationInterpolator.EventValue_changed TO Joe_vl3.FdRotation.EventIn }
{ Sample vl3_RotationInterpolator.EventValue_changed TO Joe_vl3.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator264.EventValue_changed, HAnimJoint61.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "vl2_RotationInterpolator.EventValue_changed TO Joe_vl2.FdRotation.EventIn }
{ Sample vl2_RotationInterpolator.EventValue_changed TO Joe_vl2.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator265.EventValue_changed, HAnimJoint62.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "vl1_RotationInterpolator.EventValue_changed TO Joe_vl1.FdRotation.EventIn }
{ Sample vl1_RotationInterpolator.EventValue_changed TO Joe_vl1.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator266.EventValue_changed, HAnimJoint63.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "vt12_RotationInterpolator.EventValue_changed TO Joe_vt12.FdRotation.EventIn }
{ Sample vt12_RotationInterpolator.EventValue_changed TO Joe_vt12.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator267.EventValue_changed, HAnimJoint64.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "vt11_RotationInterpolator.EventValue_changed TO Joe_vt11.FdRotation.EventIn }
{ Sample vt11_RotationInterpolator.EventValue_changed TO Joe_vt11.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator268.EventValue_changed, HAnimJoint65.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "vt10_RotationInterpolator.EventValue_changed TO Joe_vt10.FdRotation.EventIn }
{ Sample vt10_RotationInterpolator.EventValue_changed TO Joe_vt10.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator269.EventValue_changed, HAnimJoint66.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "vt9_RotationInterpolator.EventValue_changed TO Joe_vt9.FdRotation.EventIn }
{ Sample vt9_RotationInterpolator.EventValue_changed TO Joe_vt9.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator270.EventValue_changed, HAnimJoint67.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "vt8_RotationInterpolator.EventValue_changed TO Joe_vt8.FdRotation.EventIn }
{ Sample vt8_RotationInterpolator.EventValue_changed TO Joe_vt8.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator271.EventValue_changed, HAnimJoint68.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "vt7_RotationInterpolator.EventValue_changed TO Joe_vt7.FdRotation.EventIn }
{ Sample vt7_RotationInterpolator.EventValue_changed TO Joe_vt7.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator272.EventValue_changed, HAnimJoint69.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "vt6_RotationInterpolator.EventValue_changed TO Joe_vt6.FdRotation.EventIn }
{ Sample vt6_RotationInterpolator.EventValue_changed TO Joe_vt6.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator273.EventValue_changed, HAnimJoint70.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "vt5_RotationInterpolator.EventValue_changed TO Joe_vt5.FdRotation.EventIn }
{ Sample vt5_RotationInterpolator.EventValue_changed TO Joe_vt5.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator274.EventValue_changed, HAnimJoint71.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "vt4_RotationInterpolator.EventValue_changed TO Joe_vt4.FdRotation.EventIn }
{ Sample vt4_RotationInterpolator.EventValue_changed TO Joe_vt4.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator275.EventValue_changed, HAnimJoint72.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "vt3_RotationInterpolator.EventValue_changed TO Joe_vt3.FdRotation.EventIn }
{ Sample vt3_RotationInterpolator.EventValue_changed TO Joe_vt3.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator276.EventValue_changed, HAnimJoint73.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "vt2_RotationInterpolator.EventValue_changed TO Joe_vt2.FdRotation.EventIn }
{ Sample vt2_RotationInterpolator.EventValue_changed TO Joe_vt2.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator277.EventValue_changed, HAnimJoint74.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "vt1_RotationInterpolator.EventValue_changed TO Joe_vt1.FdRotation.EventIn }
{ Sample vt1_RotationInterpolator.EventValue_changed TO Joe_vt1.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator278.EventValue_changed, HAnimJoint75.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "vc7_RotationInterpolator.EventValue_changed TO Joe_vc7.FdRotation.EventIn }
{ Sample vc7_RotationInterpolator.EventValue_changed TO Joe_vc7.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator279.EventValue_changed, HAnimJoint76.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "vc6_RotationInterpolator.EventValue_changed TO Joe_vc6.FdRotation.EventIn }
{ Sample vc6_RotationInterpolator.EventValue_changed TO Joe_vc6.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator280.EventValue_changed, HAnimJoint77.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "vc5_RotationInterpolator.EventValue_changed TO Joe_vc5.FdRotation.EventIn }
{ Sample vc5_RotationInterpolator.EventValue_changed TO Joe_vc5.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator281.EventValue_changed, HAnimJoint78.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "vc4_RotationInterpolator.EventValue_changed TO Joe_vc4.FdRotation.EventIn }
{ Sample vc4_RotationInterpolator.EventValue_changed TO Joe_vc4.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator282.EventValue_changed, HAnimJoint79.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "vc3_RotationInterpolator.EventValue_changed TO Joe_vc3.FdRotation.EventIn }
{ Sample vc3_RotationInterpolator.EventValue_changed TO Joe_vc3.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator283.EventValue_changed, HAnimJoint80.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "vc2_RotationInterpolator.EventValue_changed TO Joe_vc2.FdRotation.EventIn }
{ Sample vc2_RotationInterpolator.EventValue_changed TO Joe_vc2.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator284.EventValue_changed, HAnimJoint81.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "vc1_RotationInterpolator.EventValue_changed TO Joe_vc1.FdRotation.EventIn }
{ Sample vc1_RotationInterpolator.EventValue_changed TO Joe_vc1.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator285.EventValue_changed, HAnimJoint82.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "skullbase_RotationInterpolator.EventValue_changed TO Joe_skullbase.FdRotation.EventIn }
{ Sample skullbase_RotationInterpolator.EventValue_changed TO Joe_skullbase.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator286.EventValue_changed, HAnimJoint83.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_eyelid_joint_RotationInterpolator.EventValue_changed TO Joe_l_eyelid_joint.FdRotation.EventIn }
{ Sample l_eyelid_joint_RotationInterpolator.EventValue_changed TO Joe_l_eyelid_joint.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator287.EventValue_changed, HAnimJoint85.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_eyeball_joint_RotationInterpolator.EventValue_changed TO Joe_l_eyeball_joint.FdRotation.EventIn }
{ Sample l_eyeball_joint_RotationInterpolator.EventValue_changed TO Joe_l_eyeball_joint.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator288.EventValue_changed, HAnimJoint86.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_eyebrow_joint_RotationInterpolator.EventValue_changed TO Joe_l_eyebrow_joint.FdRotation.EventIn }
{ Sample l_eyebrow_joint_RotationInterpolator.EventValue_changed TO Joe_l_eyebrow_joint.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator289.EventValue_changed, HAnimJoint87.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_eyelid_joint_RotationInterpolator.EventValue_changed TO Joe_r_eyelid_joint.FdRotation.EventIn }
{ Sample r_eyelid_joint_RotationInterpolator.EventValue_changed TO Joe_r_eyelid_joint.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator290.EventValue_changed, HAnimJoint88.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_eyeball_joint_RotationInterpolator.EventValue_changed TO Joe_r_eyeball_joint.FdRotation.EventIn }
{ Sample r_eyeball_joint_RotationInterpolator.EventValue_changed TO Joe_r_eyeball_joint.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator291.EventValue_changed, HAnimJoint89.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_eyebrow_joint_RotationInterpolator.EventValue_changed TO Joe_r_eyebrow_joint.FdRotation.EventIn }
{ Sample r_eyebrow_joint_RotationInterpolator.EventValue_changed TO Joe_r_eyebrow_joint.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator292.EventValue_changed, HAnimJoint90.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "temporomandibular_RotationInterpolator.EventValue_changed TO Joe_temporomandibular.FdRotation.EventIn }
{ Sample temporomandibular_RotationInterpolator.EventValue_changed TO Joe_temporomandibular.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator293.EventValue_changed, HAnimJoint91.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_sternoclavicular_RotationInterpolator.EventValue_changed TO Joe_l_sternoclavicular.FdRotation.EventIn }
{ Sample l_sternoclavicular_RotationInterpolator.EventValue_changed TO Joe_l_sternoclavicular.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator294.EventValue_changed, HAnimJoint92.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_acromioclavicular_RotationInterpolator.EventValue_changed TO Joe_l_acromioclavicular.FdRotation.EventIn }
{ Sample l_acromioclavicular_RotationInterpolator.EventValue_changed TO Joe_l_acromioclavicular.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator295.EventValue_changed, HAnimJoint93.FdRotation.EventIn);
end;

procedure InitJoeSkinTexcoordDisplacerKickPart30;
begin

{ METHOD .AddX3DROUTE }
{ Original "l_shoulder_RotationInterpolator.EventValue_changed TO Joe_l_shoulder.FdRotation.EventIn }
{ Sample l_shoulder_RotationInterpolator.EventValue_changed TO Joe_l_shoulder.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator296.EventValue_changed, HAnimJoint94.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_elbow_RotationInterpolator.EventValue_changed TO Joe_l_elbow.FdRotation.EventIn }
{ Sample l_elbow_RotationInterpolator.EventValue_changed TO Joe_l_elbow.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator297.EventValue_changed, HAnimJoint95.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_wrist_RotationInterpolator.EventValue_changed TO Joe_l_wrist.FdRotation.EventIn }
{ Sample l_wrist_RotationInterpolator.EventValue_changed TO Joe_l_wrist.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator298.EventValue_changed, HAnimJoint96.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_thumb1_RotationInterpolator.EventValue_changed TO Joe_l_thumb1.FdRotation.EventIn }
{ Sample l_thumb1_RotationInterpolator.EventValue_changed TO Joe_l_thumb1.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator299.EventValue_changed, HAnimJoint97.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_thumb2_RotationInterpolator.EventValue_changed TO Joe_l_thumb2.FdRotation.EventIn }
{ Sample l_thumb2_RotationInterpolator.EventValue_changed TO Joe_l_thumb2.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator300.EventValue_changed, HAnimJoint98.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_thumb3_RotationInterpolator.EventValue_changed TO Joe_l_thumb3.FdRotation.EventIn }
{ Sample l_thumb3_RotationInterpolator.EventValue_changed TO Joe_l_thumb3.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator301.EventValue_changed, HAnimJoint99.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_index0_RotationInterpolator.EventValue_changed TO Joe_l_index0.FdRotation.EventIn }
{ Sample l_index0_RotationInterpolator.EventValue_changed TO Joe_l_index0.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator302.EventValue_changed, HAnimJoint100.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_index1_RotationInterpolator.EventValue_changed TO Joe_l_index1.FdRotation.EventIn }
{ Sample l_index1_RotationInterpolator.EventValue_changed TO Joe_l_index1.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator303.EventValue_changed, HAnimJoint101.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_index2_RotationInterpolator.EventValue_changed TO Joe_l_index2.FdRotation.EventIn }
{ Sample l_index2_RotationInterpolator.EventValue_changed TO Joe_l_index2.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator304.EventValue_changed, HAnimJoint102.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_index3_RotationInterpolator.EventValue_changed TO Joe_l_index3.FdRotation.EventIn }
{ Sample l_index3_RotationInterpolator.EventValue_changed TO Joe_l_index3.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator305.EventValue_changed, HAnimJoint103.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_middle0_RotationInterpolator.EventValue_changed TO Joe_l_middle0.FdRotation.EventIn }
{ Sample l_middle0_RotationInterpolator.EventValue_changed TO Joe_l_middle0.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator306.EventValue_changed, HAnimJoint104.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_middle1_RotationInterpolator.EventValue_changed TO Joe_l_middle1.FdRotation.EventIn }
{ Sample l_middle1_RotationInterpolator.EventValue_changed TO Joe_l_middle1.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator307.EventValue_changed, HAnimJoint105.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_middle2_RotationInterpolator.EventValue_changed TO Joe_l_middle2.FdRotation.EventIn }
{ Sample l_middle2_RotationInterpolator.EventValue_changed TO Joe_l_middle2.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator308.EventValue_changed, HAnimJoint106.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_middle3_RotationInterpolator.EventValue_changed TO Joe_l_middle3.FdRotation.EventIn }
{ Sample l_middle3_RotationInterpolator.EventValue_changed TO Joe_l_middle3.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator309.EventValue_changed, HAnimJoint107.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_ring0_RotationInterpolator.EventValue_changed TO Joe_l_ring0.FdRotation.EventIn }
{ Sample l_ring0_RotationInterpolator.EventValue_changed TO Joe_l_ring0.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator310.EventValue_changed, HAnimJoint108.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_ring1_RotationInterpolator.EventValue_changed TO Joe_l_ring1.FdRotation.EventIn }
{ Sample l_ring1_RotationInterpolator.EventValue_changed TO Joe_l_ring1.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator311.EventValue_changed, HAnimJoint109.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_ring2_RotationInterpolator.EventValue_changed TO Joe_l_ring2.FdRotation.EventIn }
{ Sample l_ring2_RotationInterpolator.EventValue_changed TO Joe_l_ring2.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator312.EventValue_changed, HAnimJoint110.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_ring3_RotationInterpolator.EventValue_changed TO Joe_l_ring3.FdRotation.EventIn }
{ Sample l_ring3_RotationInterpolator.EventValue_changed TO Joe_l_ring3.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator313.EventValue_changed, HAnimJoint111.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_pinky0_RotationInterpolator.EventValue_changed TO Joe_l_pinky0.FdRotation.EventIn }
{ Sample l_pinky0_RotationInterpolator.EventValue_changed TO Joe_l_pinky0.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator314.EventValue_changed, HAnimJoint112.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_pinky1_RotationInterpolator.EventValue_changed TO Joe_l_pinky1.FdRotation.EventIn }
{ Sample l_pinky1_RotationInterpolator.EventValue_changed TO Joe_l_pinky1.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator315.EventValue_changed, HAnimJoint113.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_pinky2_RotationInterpolator.EventValue_changed TO Joe_l_pinky2.FdRotation.EventIn }
{ Sample l_pinky2_RotationInterpolator.EventValue_changed TO Joe_l_pinky2.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator316.EventValue_changed, HAnimJoint114.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "l_pinky3_RotationInterpolator.EventValue_changed TO Joe_l_pinky3.FdRotation.EventIn }
{ Sample l_pinky3_RotationInterpolator.EventValue_changed TO Joe_l_pinky3.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator317.EventValue_changed, HAnimJoint115.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_sternoclavicular_RotationInterpolator.EventValue_changed TO Joe_r_sternoclavicular.FdRotation.EventIn }
{ Sample r_sternoclavicular_RotationInterpolator.EventValue_changed TO Joe_r_sternoclavicular.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator318.EventValue_changed, HAnimJoint116.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_acromioclavicular_RotationInterpolator.EventValue_changed TO Joe_r_acromioclavicular.FdRotation.EventIn }
{ Sample r_acromioclavicular_RotationInterpolator.EventValue_changed TO Joe_r_acromioclavicular.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator319.EventValue_changed, HAnimJoint117.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_shoulder_RotationInterpolator.EventValue_changed TO Joe_r_shoulder.FdRotation.EventIn }
{ Sample r_shoulder_RotationInterpolator.EventValue_changed TO Joe_r_shoulder.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator320.EventValue_changed, HAnimJoint118.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_elbow_RotationInterpolator.EventValue_changed TO Joe_r_elbow.FdRotation.EventIn }
{ Sample r_elbow_RotationInterpolator.EventValue_changed TO Joe_r_elbow.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator321.EventValue_changed, HAnimJoint119.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_wrist_RotationInterpolator.EventValue_changed TO Joe_r_wrist.FdRotation.EventIn }
{ Sample r_wrist_RotationInterpolator.EventValue_changed TO Joe_r_wrist.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator322.EventValue_changed, HAnimJoint120.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_thumb1_RotationInterpolator.EventValue_changed TO Joe_r_thumb1.FdRotation.EventIn }
{ Sample r_thumb1_RotationInterpolator.EventValue_changed TO Joe_r_thumb1.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator323.EventValue_changed, HAnimJoint121.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_thumb2_RotationInterpolator.EventValue_changed TO Joe_r_thumb2.FdRotation.EventIn }
{ Sample r_thumb2_RotationInterpolator.EventValue_changed TO Joe_r_thumb2.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator324.EventValue_changed, HAnimJoint122.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_thumb3_RotationInterpolator.EventValue_changed TO Joe_r_thumb3.FdRotation.EventIn }
{ Sample r_thumb3_RotationInterpolator.EventValue_changed TO Joe_r_thumb3.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator325.EventValue_changed, HAnimJoint123.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_index0_RotationInterpolator.EventValue_changed TO Joe_r_index0.FdRotation.EventIn }
{ Sample r_index0_RotationInterpolator.EventValue_changed TO Joe_r_index0.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator326.EventValue_changed, HAnimJoint124.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_index1_RotationInterpolator.EventValue_changed TO Joe_r_index1.FdRotation.EventIn }
{ Sample r_index1_RotationInterpolator.EventValue_changed TO Joe_r_index1.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator327.EventValue_changed, HAnimJoint125.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_index2_RotationInterpolator.EventValue_changed TO Joe_r_index2.FdRotation.EventIn }
{ Sample r_index2_RotationInterpolator.EventValue_changed TO Joe_r_index2.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator328.EventValue_changed, HAnimJoint126.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_index3_RotationInterpolator.EventValue_changed TO Joe_r_index3.FdRotation.EventIn }
{ Sample r_index3_RotationInterpolator.EventValue_changed TO Joe_r_index3.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator329.EventValue_changed, HAnimJoint127.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_middle0_RotationInterpolator.EventValue_changed TO Joe_r_middle0.FdRotation.EventIn }
{ Sample r_middle0_RotationInterpolator.EventValue_changed TO Joe_r_middle0.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator330.EventValue_changed, HAnimJoint128.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_middle1_RotationInterpolator.EventValue_changed TO Joe_r_middle1.FdRotation.EventIn }
{ Sample r_middle1_RotationInterpolator.EventValue_changed TO Joe_r_middle1.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator331.EventValue_changed, HAnimJoint129.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_middle2_RotationInterpolator.EventValue_changed TO Joe_r_middle2.FdRotation.EventIn }
{ Sample r_middle2_RotationInterpolator.EventValue_changed TO Joe_r_middle2.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator332.EventValue_changed, HAnimJoint130.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_middle3_RotationInterpolator.EventValue_changed TO Joe_r_middle3.FdRotation.EventIn }
{ Sample r_middle3_RotationInterpolator.EventValue_changed TO Joe_r_middle3.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator333.EventValue_changed, HAnimJoint131.FdRotation.EventIn);
end;

procedure InitJoeSkinTexcoordDisplacerKickPart31;
begin

{ METHOD .AddX3DROUTE }
{ Original "r_ring0_RotationInterpolator.EventValue_changed TO Joe_r_ring0.FdRotation.EventIn }
{ Sample r_ring0_RotationInterpolator.EventValue_changed TO Joe_r_ring0.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator334.EventValue_changed, HAnimJoint132.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_ring1_RotationInterpolator.EventValue_changed TO Joe_r_ring1.FdRotation.EventIn }
{ Sample r_ring1_RotationInterpolator.EventValue_changed TO Joe_r_ring1.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator335.EventValue_changed, HAnimJoint133.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_ring2_RotationInterpolator.EventValue_changed TO Joe_r_ring2.FdRotation.EventIn }
{ Sample r_ring2_RotationInterpolator.EventValue_changed TO Joe_r_ring2.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator336.EventValue_changed, HAnimJoint134.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_ring3_RotationInterpolator.EventValue_changed TO Joe_r_ring3.FdRotation.EventIn }
{ Sample r_ring3_RotationInterpolator.EventValue_changed TO Joe_r_ring3.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator337.EventValue_changed, HAnimJoint135.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_pinky0_RotationInterpolator.EventValue_changed TO Joe_r_pinky0.FdRotation.EventIn }
{ Sample r_pinky0_RotationInterpolator.EventValue_changed TO Joe_r_pinky0.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator338.EventValue_changed, HAnimJoint136.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_pinky1_RotationInterpolator.EventValue_changed TO Joe_r_pinky1.FdRotation.EventIn }
{ Sample r_pinky1_RotationInterpolator.EventValue_changed TO Joe_r_pinky1.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator339.EventValue_changed, HAnimJoint137.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_pinky2_RotationInterpolator.EventValue_changed TO Joe_r_pinky2.FdRotation.EventIn }
{ Sample r_pinky2_RotationInterpolator.EventValue_changed TO Joe_r_pinky2.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator340.EventValue_changed, HAnimJoint138.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "r_pinky3_RotationInterpolator.EventValue_changed TO Joe_r_pinky3.FdRotation.EventIn }
{ Sample r_pinky3_RotationInterpolator.EventValue_changed TO Joe_r_pinky3.FdRotation.EventIn}
Group22.AddRoute(OrientationInterpolator341.EventValue_changed, HAnimJoint139.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
Group532 := TGroupNode.Create;
{ TimeSensor DEF='skull_tipInterpolatorTimer' cycleInterval='5.73' loop='true' enabled='true'></TimeSensor }
ScalarInterpolator533 := TScalarInterpolatorNode.Create;
ScalarInterpolator533.SetKey([0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1]);
ScalarInterpolator533.SetKeyValue([0,0,0,0,0.2,0.4,1,0,1,0.4,0]);
{ METHOD .FdChildren.Add }
Group532.FdChildren.Add(ScalarInterpolator533);
{ Original "KickTimer.EventFraction_changed TO skull_tipInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO skull_tipInterpolator.EventSet_fraction}
Group532.AddRoute(TimeSensor246.EventFraction_changed, ScalarInterpolator533.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "skull_tipInterpolator.EventValue_changed TO Joe_skull_tip_raiser_action.FWeight }
{ Sample skull_tipInterpolator.EventValue_changed TO Joe_skull_tip_raiser_action.FWeight}
Group532.AddRoute(ScalarInterpolator533.EventValue_changed, HAnimDisplacer84.FWeight);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(Group532);
Group536 := TGroupNode.Create;
ScalarInterpolator537 := TScalarInterpolatorNode.Create;
ScalarInterpolator537.SetKey([0,0.2,0.4,0.5,0.6,0.7,0.8,1]);
ScalarInterpolator537.SetKeyValue([0,0,0,0,0,1,2,0]);
{ METHOD .FdChildren.Add }
Group536.FdChildren.Add(ScalarInterpolator537);
{ Original "KickTimer.EventFraction_changed TO SkinTextureTransformInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO SkinTextureTransformInterpolator.EventSet_fraction}
Group536.AddRoute(TimeSensor246.EventFraction_changed, ScalarInterpolator537.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "SkinTextureTransformInterpolator.EventValue_changed TO KickTextureTransform.rotation }
{ Sample SkinTextureTransformInterpolator.EventValue_changed TO KickTextureTransform.rotation}
Group536.AddRoute(ScalarInterpolator537.EventValue_changed, TextureTransform144.rotation);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(Group536);
Group540 := TGroupNode.Create;
Transform541 := TTransformNode.Create;
Transform541.Rotation := Vector4(0.7,0,0.7,0.1);
Transform541.Scale := Vector3(0.23,0.23,0.23);
Transform541.Translation := Vector3(-0.916,0.37,-0.92);
Shape542 := TShapeNode.Create;
Appearance543 := TAppearanceNode.Create;
Material544 := TMaterialNode.Create;
Material544.DiffuseColor := Vector3(0.3,0.3,1);
Material544.EmissiveColor := Vector3(0.3,0.3,0.33);
{ METHOD .SetMaterial }
Appearance543.Material := Material544;
{ METHOD .Texture }
Appearance543.Texture := ImageTexture143;
{ METHOD .Appearance }
Shape542.Appearance := Appearance543;
IndexedFaceSet546 := TIndexedFaceSetNode.Create;
IndexedFaceSet546.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
Coordinate547 := TCoordinateNode.Create;
end;

procedure InitJoeSkinTexcoordDisplacerKickPart32;
begin

Coordinate547.SetPoint([Vector3(0,0.4675,0),Vector3(0,0.4049,-0.2338),Vector3(-0.1169,0.4049,-0.2024),Vector3(-0.2024,0.4049,-0.1169),Vector3(-0.2338,0.4049,0),Vector3(-0.2024,0.4049,0.1169),Vector3(-0.1169,0.4049,0.2024),Vector3(0,0.4049,0.2338),Vector3(0.1169,0.4049,0.2024),Vector3(0.2024,0.4049,0.1169),Vector3(0.2338,0.4049,0),Vector3(0.2024,0.4049,-0.1169),Vector3(0.1169,0.4049,-0.2024),Vector3(0,0.2338,-0.4049),Vector3(-0.2024,0.2338,-0.3506),Vector3(-0.3506,0.2338,-0.2024),Vector3(-0.4049,0.2338,0),Vector3(-0.3506,0.2338,0.2024),Vector3(-0.2024,0.2338,0.3506),Vector3(0,0.2338,0.4049),Vector3(0.2024,0.2338,0.3506),Vector3(0.3506,0.2338,0.2024),Vector3(0.4049,0.2338,0),Vector3(0.3506,0.2338,-0.2024),Vector3(0.2024,0.2338,-0.3506),Vector3(0,0,-0.4675),Vector3(-0.2338,0,-0.4049),Vector3(-0.4049,0,-0.2338),Vector3(-0.4675,0,0),Vector3(-0.4049,0,0.2338),Vector3(-0.2338,0,0.4049),Vector3(0,0,0.4675),Vector3(0.2338,0,0.4049),Vector3(0.4049,0,0.2338),Vector3(0.4675,0,0),Vector3(0.4049,0,-0.2338),Vector3(0.2338,0,-0.4049),Vector3(0,-0.2338,-0.4049),Vector3(-0.2024,-0.2338,-0.3506),Vector3(-0.3506,-0.2338,-0.2024),Vector3(-0.4049,-0.2338,0),Vector3(-0.3506,-0.2338,0.2024),Vector3(-0.2024,-0.2338,0.3506),Vector3(0,-0.2338,0.4049),Vector3(0.2024,-0.2338,0.3506),Vector3(0.3506,-0.2338,0.2024),Vector3(0.4049,-0.2338,0),Vector3(0.3506,-0.2338,-0.2024),Vector3(0.2024,-0.2338,-0.3506),Vector3(0,-0.4049,-0.2338),Vector3(-0.1169,-0.4049,-0.2024),Vector3(-0.2024,-0.4049,-0.1169),Vector3(-0.2338,-0.4049,0),Vector3(-0.2024,-0.4049,0.1169),Vector3(-0.1169,-0.4049,0.2024),Vector3(0,-0.4049,0.2338),Vector3(0.1169,-0.4049,0.2024),Vector3(0.2024,-0.4049,0.1169),Vector3(0.2338,-0.4049,0),Vector3(0.2024,-0.4049,-0.1169),Vector3(0.1169,-0.4049,-0.2024),Vector3(0,-0.4675,0)]);
{ METHOD .Coord }
IndexedFaceSet546.Coord := Coordinate547;
{ METHOD .Geometry }
Shape542.Geometry := IndexedFaceSet546;
{ METHOD .FdChildren.Add }
Transform541.FdChildren.Add(Shape542);
Viewpoint548 := TViewpointNode.Create;
Viewpoint548.Description := 'Ball View';
{ METHOD .FdChildren.Add }
Transform541.FdChildren.Add(Viewpoint548);
{ METHOD .FdChildren.Add }
Group540.FdChildren.Add(Transform541);
{ Ball Animation interpolators }
PositionInterpolator549 := TPositionInterpolatorNode.Create;
PositionInterpolator549.SetKey([0,0.4,0.409,1]);
PositionInterpolator549.SetKeyValue([Vector3(-1,0.4,-1),Vector3(0,0.07,0),Vector3(0.05,0.06,0.05),Vector3(2,4,10)]);
{ METHOD .FdChildren.Add }
Group540.FdChildren.Add(PositionInterpolator549);
OrientationInterpolator550 := TOrientationInterpolatorNode.Create;
OrientationInterpolator550.SetKey([0,0.4,0.41,0.71,1]);
OrientationInterpolator550.SetKeyValue([Vector4(1,0,1,0.25),Vector4(-1,0,-1,1.35),Vector4(-1,1,-1,3.35),Vector4(-1,0.2,-1,3),Vector4(-1,0.2,-1,3)]);
{ METHOD .FdChildren.Add }
Group540.FdChildren.Add(OrientationInterpolator550);
{ Ball Animation Routes }
{ Original "KickTimer.EventFraction_changed TO ball_TranslationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO ball_TranslationInterpolator.EventSet_fraction}
Group540.AddRoute(TimeSensor246.EventFraction_changed, PositionInterpolator549.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "ball_TranslationInterpolator.EventValue_changed TO SBall.FdTranslation.EventIn }
{ Sample ball_TranslationInterpolator.EventValue_changed TO SBall.FdTranslation.EventIn}
Group540.AddRoute(PositionInterpolator549.EventValue_changed, Transform541.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "KickTimer.EventFraction_changed TO ball_RotationInterpolator.EventSet_fraction }
{ Sample KickTimer.EventFraction_changed TO ball_RotationInterpolator.EventSet_fraction}
Group540.AddRoute(TimeSensor246.EventFraction_changed, OrientationInterpolator550.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "ball_RotationInterpolator.EventValue_changed TO SBall.FdRotation.EventIn }
{ Sample ball_RotationInterpolator.EventValue_changed TO SBall.FdRotation.EventIn}
Group540.AddRoute(OrientationInterpolator550.EventValue_changed, Transform541.FdRotation.EventIn);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(Group540);
Group555 := TGroupNode.Create;
Transform556 := TTransformNode.Create;
Transform556.Scale := Vector3(0.2,0.2,0.2);
{ METHOD .FdChildren.Add }
Transform556.FdChildren.Add(Shape42);
{ METHOD .FdChildren.Add }
Group555.FdChildren.Add(Transform556);
Transform558 := TTransformNode.Create;
Transform558.Scale := Vector3(1.175,1,1.175);
Shape559 := TShapeNode.Create;
Appearance560 := TAppearanceNode.Create;
Material561 := TMaterialNode.Create;
Material561.AmbientIntensity := 0.9;
Material561.DiffuseColor := Vector3(0.9,0,0.7);
Material561.EmissiveColor := Vector3(0.425,0.486,1);
{ METHOD .SetMaterial }
Appearance560.Material := Material561;
{ METHOD .Appearance }
Shape559.Appearance := Appearance560;
IndexedLineSet562 := TIndexedLineSetNode.Create;
IndexedLineSet562.SetCoordIndex([0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]);
Coordinate563 := TCoordinateNode.Create;
Coordinate563.SetPoint([Vector3(1,0,0),Vector3(0.995,0,-0.105),Vector3(0.979,0,-0.208),Vector3(0.951,0,-0.309),Vector3(0.914,0,-0.407),Vector3(0.866,0,-0.5),Vector3(0.809,0,-0.588),Vector3(0.743,0,-0.669),Vector3(0.669,0,-0.743),Vector3(0.588,0,-0.809),Vector3(0.5,0,-0.866),Vector3(0.407,0,-0.914),Vector3(0.309,0,-0.951),Vector3(0.208,0,-0.978),Vector3(0.105,0,-0.995),Vector3(0,0,-1),Vector3(-0.105,0,-0.994522),Vector3(-0.208,0,-0.978),Vector3(-0.309,0,-0.951),Vector3(-0.407,0,-0.914),Vector3(-0.5,0,-0.866),Vector3(-0.588,0,-0.809),Vector3(-0.669,0,-0.743),Vector3(-0.743,0,-0.669),Vector3(-0.809,0,-0.588),Vector3(-0.866,0,-0.5),Vector3(-0.914,0,-0.407),Vector3(-0.951,0,-0.309),Vector3(-0.978,0,-0.208),Vector3(-0.995,0,-0.105),Vector3(-1,0,0),Vector3(-0.995,0,0.105),Vector3(-0.978,0,0.208),Vector3(-0.951,0,0.309),Vector3(-0.914,0,0.407),Vector3(-0.866,0,0.5),Vector3(-0.809,0,0.588),Vector3(-0.743,0,0.669),Vector3(-0.669,0,0.743),Vector3(-0.588,0,0.809),Vector3(-0.5,0,0.866),Vector3(-0.407,0,0.914),Vector3(-0.309,0,0.951),Vector3(-0.208,0,0.978),Vector3(-0.105,0,0.995),Vector3(0,0,1),Vector3(0.105,0,0.995),Vector3(0.208,0,0.978),Vector3(0.309,0,0.951),Vector3(0.407,0,0.914),Vector3(0.5,0,0.866),Vector3(0.588,0,0.809),Vector3(0.669,0,0.743),Vector3(0.743,0,0.669),Vector3(0.809,0,0.588),Vector3(0.866,0,0.5),Vector3(0.914,0,0.407),Vector3(0.951,0,0.309),Vector3(0.978,0,0.208),Vector3(0.995,0,0.104),Vector3(1,0,0)]);
end;

procedure InitJoeSkinTexcoordDisplacerKickPart33;
begin

{ METHOD .Coord }
IndexedLineSet562.Coord := Coordinate563;
{ METHOD .Geometry }
Shape559.Geometry := IndexedLineSet562;
{ METHOD .FdChildren.Add }
Transform558.FdChildren.Add(Shape559);
{ METHOD .FdChildren.Add }
Group555.FdChildren.Add(Transform558);
Transform564 := TTransformNode.Create;
Transform564.Scale := Vector3(0.5,1,0.5);
Shape565 := TShapeNode.Create;
Appearance566 := TAppearanceNode.Create;
Material567 := TMaterialNode.Create;
Material567.DiffuseColor := Vector3(0.9,0,0.7);
Material567.EmissiveColor := Vector3(0.424956,0.483976,1);
{ METHOD .SetMaterial }
Appearance566.Material := Material567;
{ METHOD .Appearance }
Shape565.Appearance := Appearance566;
{ METHOD .Geometry }
Shape565.Geometry := IndexedLineSet562;
{ METHOD .FdChildren.Add }
Transform564.FdChildren.Add(Shape565);
{ METHOD .FdChildren.Add }
Group555.FdChildren.Add(Transform564);
Transform569 := TTransformNode.Create;
Transform569.Scale := Vector3(0.25,1,0.25);
Shape570 := TShapeNode.Create;
Appearance571 := TAppearanceNode.Create;
Material572 := TMaterialNode.Create;
Material572.DiffuseColor := Vector3(0.9,0,0.7);
Material572.EmissiveColor := Vector3(0.424956,0.483976,1);
{ METHOD .SetMaterial }
Appearance571.Material := Material572;
{ METHOD .Appearance }
Shape570.Appearance := Appearance571;
{ METHOD .Geometry }
Shape570.Geometry := IndexedLineSet562;
{ METHOD .FdChildren.Add }
Transform569.FdChildren.Add(Shape570);
{ METHOD .FdChildren.Add }
Group555.FdChildren.Add(Transform569);
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(Group555);
{ METHOD .AddGroup }
X3D0.AddChildren([Group22]);
end;

function CreateJoeSkinTexcoordDisplacerKick: TX3DRootNode;
begin
InitJoeSkinTexcoordDisplacerKickPart0;
InitJoeSkinTexcoordDisplacerKickPart1;
InitJoeSkinTexcoordDisplacerKickPart2;
InitJoeSkinTexcoordDisplacerKickPart3;
InitJoeSkinTexcoordDisplacerKickPart4;
InitJoeSkinTexcoordDisplacerKickPart5;
InitJoeSkinTexcoordDisplacerKickPart6;
InitJoeSkinTexcoordDisplacerKickPart7;
InitJoeSkinTexcoordDisplacerKickPart8;
InitJoeSkinTexcoordDisplacerKickPart9;
InitJoeSkinTexcoordDisplacerKickPart10;
InitJoeSkinTexcoordDisplacerKickPart11;
InitJoeSkinTexcoordDisplacerKickPart12;
InitJoeSkinTexcoordDisplacerKickPart13;
InitJoeSkinTexcoordDisplacerKickPart14;
InitJoeSkinTexcoordDisplacerKickPart15;
InitJoeSkinTexcoordDisplacerKickPart16;
InitJoeSkinTexcoordDisplacerKickPart17;
InitJoeSkinTexcoordDisplacerKickPart18;
InitJoeSkinTexcoordDisplacerKickPart19;
InitJoeSkinTexcoordDisplacerKickPart20;
InitJoeSkinTexcoordDisplacerKickPart21;
InitJoeSkinTexcoordDisplacerKickPart22;
InitJoeSkinTexcoordDisplacerKickPart23;
InitJoeSkinTexcoordDisplacerKickPart24;
InitJoeSkinTexcoordDisplacerKickPart25;
InitJoeSkinTexcoordDisplacerKickPart26;
InitJoeSkinTexcoordDisplacerKickPart27;
InitJoeSkinTexcoordDisplacerKickPart28;
InitJoeSkinTexcoordDisplacerKickPart29;
InitJoeSkinTexcoordDisplacerKickPart30;
InitJoeSkinTexcoordDisplacerKickPart31;
InitJoeSkinTexcoordDisplacerKickPart32;
InitJoeSkinTexcoordDisplacerKickPart33;
Result := X3D0;
end;

begin
end.
