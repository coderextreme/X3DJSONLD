function JoeKick: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group16: TGroupNode;
WorldInfo17: TWorldInfoNode;
NavigationInfo18: TNavigationInfoNode;
Background19: TBackgroundNode;
SpotLight20: TSpotLightNode;
PointLight21: TPointLightNode;
Viewpoint22: TViewpointNode;
Viewpoint23: TViewpointNode;
Viewpoint24: TViewpointNode;
Viewpoint25: TViewpointNode;
Viewpoint26: TViewpointNode;
Group27: TGroupNode;
HAnimHumanoid28: THAnimHumanoidNode;
MetadataSet29: TMetadataSetNode;
MetadataString30: TMetadataStringNode;
HAnimJoint31: THAnimJointNode;
HAnimSegment32: THAnimSegmentNode;
HAnimSite33: THAnimSiteNode;
Transform34: TTransformNode;
Viewpoint35: TViewpointNode;
Shape36: TShapeNode;
IndexedLineSet37: TIndexedLineSetNode;
Color38: TColorNode;
Coordinate39: TCoordinateNode;
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
HAnimJoint75: THAnimJointNode;
HAnimJoint76: THAnimJointNode;
HAnimJoint77: THAnimJointNode;
HAnimDisplacer78: THAnimDisplacerNode;
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
HAnimJoint141: THAnimJointNode;
HAnimJoint142: THAnimJointNode;
HAnimJoint143: THAnimJointNode;
HAnimJoint144: THAnimJointNode;
HAnimJoint145: THAnimJointNode;
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
HAnimSegment228: THAnimSegmentNode;
HAnimSite229: THAnimSiteNode;
Coordinate230: TCoordinateNode;
Shape231: TShapeNode;
Appearance232: TAppearanceNode;
Material233: TMaterialNode;
ImageTexture234: TImageTextureNode;
TextureTransform235: TTextureTransformNode;
IndexedFaceSet236: TIndexedFaceSetNode;
TextureCoordinate237: TTextureCoordinateNode;
Coordinate238: TCoordinateNode;
Group239: TGroupNode;
TimeSensor240: TTimeSensorNode;
OrientationInterpolator241: TOrientationInterpolatorNode;
PositionInterpolator242: TPositionInterpolatorNode;
OrientationInterpolator243: TOrientationInterpolatorNode;
OrientationInterpolator244: TOrientationInterpolatorNode;
OrientationInterpolator245: TOrientationInterpolatorNode;
OrientationInterpolator246: TOrientationInterpolatorNode;
OrientationInterpolator247: TOrientationInterpolatorNode;
OrientationInterpolator248: TOrientationInterpolatorNode;
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
Group336: TGroupNode;
ScalarInterpolator337: TScalarInterpolatorNode;
Group338: TGroupNode;
ScalarInterpolator339: TScalarInterpolatorNode;
Group340: TGroupNode;
Transform341: TTransformNode;
Shape342: TShapeNode;
Appearance343: TAppearanceNode;
Material344: TMaterialNode;
ImageTexture345: TImageTextureNode;
IndexedFaceSet346: TIndexedFaceSetNode;
Coordinate347: TCoordinateNode;
Viewpoint348: TViewpointNode;
PositionInterpolator349: TPositionInterpolatorNode;
OrientationInterpolator350: TOrientationInterpolatorNode;
Group351: TGroupNode;
Transform352: TTransformNode;
Shape353: TShapeNode;
Transform354: TTransformNode;
Shape355: TShapeNode;
Appearance356: TAppearanceNode;
Material357: TMaterialNode;
IndexedLineSet358: TIndexedLineSetNode;
Coordinate359: TCoordinateNode;
Transform360: TTransformNode;
Shape361: TShapeNode;
Appearance362: TAppearanceNode;
Material363: TMaterialNode;
IndexedLineSet364: TIndexedLineSetNode;
Transform365: TTransformNode;
Shape366: TShapeNode;
Appearance367: TAppearanceNode;
Material368: TMaterialNode;
IndexedLineSet369: TIndexedLineSetNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'JoeKick.x3d';
X3D0.Meta['description'] := 'This Joe model is a HAnim version 2 LOA-3 Humanoid with textured skin based on the original HAnim Specification and data from CAESAR models.';
X3D0.Meta['creator'] := 'Joe D. Williams';
X3D0.Meta['created'] := '9 January 2004';
X3D0.Meta['translated'] := '12 January 2017';
X3D0.Meta['modified'] := 'Mon, 15 Sep 2025 05:20:39 GMT';
X3D0.Meta['TODO'] := 'Record information about skin coordinates (found in comment at end of scene) as a structured MetadataSet containing MetadataString nodes';
X3D0.Meta['translator'] := 'Roy Walmsley';
X3D0.Meta['translator'] := 'Don Brutzman';
X3D0.Meta['translator'] := 'John Carlson';
X3D0.Meta['reference'] := '../Characters/JoeSkinTexcoordDisplacerKick.x3d';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeKick.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit';
Group16 := TGroupNode.Create;
WorldInfo17 := TWorldInfoNode.Create;
WorldInfo17.Title := 'X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe';
WorldInfo17.SetInfo(['X3D Humanoid LOA3 skeleton','skin from hanim sites, surface features, and some added points','390 points']);
{ .AddChildren }
Group16.AddChildren([WorldInfo17]);
NavigationInfo18 := TNavigationInfoNode.Create;
NavigationInfo18.Speed := 2.5;
{ .AddChildren }
Group16.AddChildren([NavigationInfo18]);
Background19 := TBackgroundNode.Create;
{ .AddChildren }
Group16.AddChildren([Background19]);
SpotLight20 := TSpotLightNode.Create;
SpotLight20.Color := Vector3(0.8,0.8,1);
SpotLight20.AmbientIntensity := 0.7;
SpotLight20.Location := Vector3(0,3,3);
SpotLight20.Direction := Vector3(0,0,0);
SpotLight20.Radius := 10;
SpotLight20.BeamWidth := 1.5;
SpotLight20.CutOffAngle := 0.6;
{ .AddChildren }
Group16.AddChildren([SpotLight20]);
PointLight21 := TPointLightNode.Create;
PointLight21.Color := Vector3(0.8,0.8,1);
PointLight21.AmbientIntensity := 0.7;
PointLight21.Location := Vector3(0,10,-7);
{ .AddChildren }
Group16.AddChildren([PointLight21]);
Viewpoint22 := TViewpointNode.Create;
Viewpoint22.Description := 'Scene_Inclined View';
Viewpoint22.Position := Vector3(1.62,1.05,3.06);
Viewpoint22.Orientation := Vector4(-0.113,0.993,0.0347,0.671);
Viewpoint22.CenterOfRotation := Vector3(0,0.85,0);
{ .AddChildren }
Group16.AddChildren([Viewpoint22]);
Viewpoint23 := TViewpointNode.Create;
Viewpoint23.Description := 'Scene_Front View';
Viewpoint23.Position := Vector3(0,0.8,2.58);
Viewpoint23.CenterOfRotation := Vector3(0,0.8,0);
{ .AddChildren }
Group16.AddChildren([Viewpoint23]);
Viewpoint24 := TViewpointNode.Create;
Viewpoint24.Description := 'Scene_Side View';
Viewpoint24.Position := Vector3(2.6,0.8,0);
Viewpoint24.Orientation := Vector4(0,1,0,1.5708);
Viewpoint24.CenterOfRotation := Vector3(0,0.8,0);
{ .AddChildren }
Group16.AddChildren([Viewpoint24]);
Viewpoint25 := TViewpointNode.Create;
Viewpoint25.Description := 'Scene_Back View';
Viewpoint25.Position := Vector3(0,1.5,-3);
Viewpoint25.Orientation := Vector4(0,1,0,3.14);
Viewpoint25.CenterOfRotation := Vector3(0,1.5,0);
{ .AddChildren }
Group16.AddChildren([Viewpoint25]);
Viewpoint26 := TViewpointNode.Create;
Viewpoint26.Description := 'Scene_Top View';
Viewpoint26.Position := Vector3(0,3.5,0);
Viewpoint26.Orientation := Vector4(1,0,0,-1.5708);
Viewpoint26.CenterOfRotation := Vector3(0,1.5,0);
{ .AddChildren }
Group16.AddChildren([Viewpoint26]);
Group27 := TGroupNode.Create;
HAnimHumanoid28 := THAnimHumanoidNode.Create;
HAnimHumanoid28.NameField := 'Kick';
HAnimHumanoid28.Loa := 4;
MetadataSet29 := TMetadataSetNode.Create;
MetadataSet29.NameField := 'warnings';
MetadataSet29.Reference := 'HAnim';
MetadataString30 := TMetadataStringNode.Create;
MetadataString30.NameField := 'SymmetricalLeftRight';
MetadataString30.Reference := 'correction options: ignore, warn, average, left, right, largest, smallest';
MetadataString30.SetValue(['ignore']);
{ .SetValue }
MetadataSet29.Value := MetadataString30;
{ .SetMetadata }
HAnimHumanoid28.Metadata := MetadataSet29;
HAnimJoint31 := THAnimJointNode.Create;
HAnimJoint31.NameField := 'humanoid_root';
HAnimJoint31.Translation := Vector3(-0.1962198,0.1405496,0.1216488);
HAnimJoint31.Rotation := Vector4(-0.999999999999999,0,0,0.5);
HAnimJoint31.Center := Vector3(0,0.875,0);
HAnimSegment32 := THAnimSegmentNode.Create;
HAnimSegment32.NameField := 'sacrum';
HAnimSite33 := THAnimSiteNode.Create;
HAnimSite33.NameField := 'RootFront_view';
Transform34 := TTransformNode.Create;
Transform34.Scale := Vector3(0.175,0.175,0.175);
Viewpoint35 := TViewpointNode.Create;
Viewpoint35.Description := 'Joe_HAnim Root HAnimSite Coordinate Axes View';
{ .AddChildren }
Transform34.AddChildren([Viewpoint35]);
Shape36 := TShapeNode.Create;
IndexedLineSet37 := TIndexedLineSetNode.Create;
IndexedLineSet37.ColorPerVertex := False;
IndexedLineSet37.SetColorIndex([0,1,2]);
IndexedLineSet37.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1]);
Color38 := TColorNode.Create;
Color38.SetColor([Vector3(1,0,0),Vector3(0,0.6,0),Vector3(0,0,1)]);
{ .SetColor }
IndexedLineSet37.Color := Color38;
Coordinate39 := TCoordinateNode.Create;
Coordinate39.SetPoint([Vector3(0,0,0),Vector3(1,0,0),Vector3(0,1,0),Vector3(0,0,1)]);
{ .SetCoord }
IndexedLineSet37.Coord := Coordinate39;
{ .SetGeometry }
Shape36.Geometry := IndexedLineSet37;
{ .AddChild }
Transform34.AddChildren([Shape36]);
{ .AddChildren }
HAnimSite33.AddChildren([Transform34]);
{ .AddChildren }
HAnimSegment32.AddChildren([HAnimSite33]);
{ .AddChildren }
HAnimJoint31.AddChildren([HAnimSegment32]);
HAnimJoint40 := THAnimJointNode.Create;
HAnimJoint40.NameField := 'sacroiliac';
HAnimJoint40.Center := Vector3(0,0.92,0);
HAnimJoint40.SetSkinCoordIndex([17,19,20,21,22,23,26,27,73,82,89,91,93]);
HAnimJoint40.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]);
HAnimJoint41 := THAnimJointNode.Create;
HAnimJoint41.NameField := 'l_hip';
HAnimJoint41.Rotation := Vector4(1,0,0,0.931269831413142);
HAnimJoint41.Center := Vector3(0.1,0.92,0);
HAnimJoint41.SetSkinCoordIndex([89,90,94,95,96,97]);
HAnimJoint41.SetSkinCoordWeight([0.65,1,1,1,1,1]);
HAnimJoint42 := THAnimJointNode.Create;
HAnimJoint42.NameField := 'l_knee';
HAnimJoint42.Rotation := Vector4(0.998863602232125,0,0.0476602993681761,1.24505714055853);
HAnimJoint42.Center := Vector3(0.115,0.466,0);
HAnimJoint42.SetSkinCoordIndex([334,335,336,337,338,339,340,341]);
HAnimJoint42.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimJoint43 := THAnimJointNode.Create;
HAnimJoint43.NameField := 'l_talocrural';
HAnimJoint43.Rotation := Vector4(1,0,0,0.899195750554403);
HAnimJoint43.Center := Vector3(0.115,0.069,0);
HAnimJoint43.SetSkinCoordIndex([342,343,344,345]);
HAnimJoint43.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint44 := THAnimJointNode.Create;
HAnimJoint44.NameField := 'l_tarsometatarsal_2';
HAnimJoint44.Center := Vector3(0.115,0.031,0.03);
HAnimJoint44.SetSkinCoordIndex([346,347,348,71]);
HAnimJoint44.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint45 := THAnimJointNode.Create;
HAnimJoint45.NameField := 'l_metatarsophalangeal_2';
HAnimJoint45.Center := Vector3(0.115,0.037,0.09);
HAnimJoint45.SetSkinCoordIndex([349,350,351,352]);
HAnimJoint45.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint46 := THAnimJointNode.Create;
HAnimJoint46.NameField := 'l_tarsal_distal_interphalangeal_2';
HAnimJoint46.Center := Vector3(0.115,0.02,0.122);
HAnimJoint46.SetSkinCoordIndex([353,354,355,356,357,358,359,360,361]);
HAnimJoint46.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ .AddChildren }
HAnimJoint45.AddChildren([HAnimJoint46]);
{ .AddChildren }
HAnimJoint44.AddChildren([HAnimJoint45]);
{ .AddChildren }
HAnimJoint43.AddChildren([HAnimJoint44]);
{ .AddChildren }
HAnimJoint42.AddChildren([HAnimJoint43]);
{ .AddChildren }
HAnimJoint41.AddChildren([HAnimJoint42]);
{ .AddChildren }
HAnimJoint40.AddChildren([HAnimJoint41]);
HAnimJoint47 := THAnimJointNode.Create;
HAnimJoint47.NameField := 'r_hip';
HAnimJoint47.Rotation := Vector4(-1,0,0,1);
HAnimJoint47.Center := Vector3(-0.1,0.92,0);
HAnimJoint47.SetSkinCoordIndex([91,92,98,99,100,101,362,363]);
HAnimJoint47.SetSkinCoordWeight([0.65,1,0.8,1,1,1,0.4,0.8]);
HAnimJoint48 := THAnimJointNode.Create;
HAnimJoint48.NameField := 'r_knee';
HAnimJoint48.Rotation := Vector4(1,0,0,1.3487936258316);
HAnimJoint48.Center := Vector3(-0.05,0.466,0);
HAnimJoint48.SetSkinCoordIndex([362,363,364,365,366,367,368,369,98]);
HAnimJoint48.SetSkinCoordWeight([0.6,0.2,1,1,1,1,1,1,0.2]);
HAnimJoint49 := THAnimJointNode.Create;
HAnimJoint49.NameField := 'r_talocrural';
HAnimJoint49.Rotation := Vector4(1,0,0,0.651206374168395);
HAnimJoint49.Center := Vector3(-0.115,0.069,0);
HAnimJoint49.SetSkinCoordIndex([370,371,372,373]);
HAnimJoint49.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint50 := THAnimJointNode.Create;
HAnimJoint50.NameField := 'r_tarsometatarsal_2';
HAnimJoint50.Center := Vector3(-0.1,0.015,-0.01);
HAnimJoint50.SetSkinCoordIndex([374,375,376]);
HAnimJoint50.SetSkinCoordWeight([1,1,1]);
HAnimJoint51 := THAnimJointNode.Create;
HAnimJoint51.NameField := 'r_metatarsophalangeal_2';
HAnimJoint51.Center := Vector3(-0.115,0.037,0.09);
HAnimJoint51.SetSkinCoordIndex([377,378,379,380]);
HAnimJoint51.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint52 := THAnimJointNode.Create;
HAnimJoint52.NameField := 'r_tarsal_distal_interphalangeal_2';
HAnimJoint52.Center := Vector3(-0.1,0.01,0.14);
HAnimJoint52.SetSkinCoordIndex([381,382,383,384,385,386,387,388,389]);
HAnimJoint52.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ .AddChildren }
HAnimJoint51.AddChildren([HAnimJoint52]);
{ .AddChildren }
HAnimJoint50.AddChildren([HAnimJoint51]);
{ .AddChildren }
HAnimJoint49.AddChildren([HAnimJoint50]);
{ .AddChildren }
HAnimJoint48.AddChildren([HAnimJoint49]);
{ .AddChildren }
HAnimJoint47.AddChildren([HAnimJoint48]);
{ .AddChildren }
HAnimJoint40.AddChildren([HAnimJoint47]);
{ .AddChildren }
HAnimJoint31.AddChildren([HAnimJoint40]);
HAnimJoint53 := THAnimJointNode.Create;
HAnimJoint53.NameField := 'vl5';
HAnimJoint53.Center := Vector3(0,1.045,-0.095);
HAnimJoint53.SetSkinCoordIndex([28,76]);
HAnimJoint53.SetSkinCoordWeight([1,1]);
HAnimJoint54 := THAnimJointNode.Create;
HAnimJoint54.NameField := 'vl4';
HAnimJoint54.Center := Vector3(0,1.068,-0.085);
HAnimJoint55 := THAnimJointNode.Create;
HAnimJoint55.NameField := 'vl3';
HAnimJoint55.Center := Vector3(0,1.092,-0.0725);
HAnimJoint56 := THAnimJointNode.Create;
HAnimJoint56.NameField := 'vl2';
HAnimJoint56.Center := Vector3(0,1.12,-0.065);
HAnimJoint56.SetSkinCoordIndex([16,18,25,83,84,85,86,87,88]);
HAnimJoint56.SetSkinCoordWeight([1,1,1,1,1,1,0.7,1,0.8]);
HAnimJoint57 := THAnimJointNode.Create;
HAnimJoint57.NameField := 'vl1';
HAnimJoint57.Center := Vector3(0,1.1459,-0.0625);
HAnimJoint58 := THAnimJointNode.Create;
HAnimJoint58.NameField := 'vt12';
HAnimJoint58.Center := Vector3(0,1.179,-0.068);
HAnimJoint59 := THAnimJointNode.Create;
HAnimJoint59.NameField := 'vt11';
HAnimJoint59.Center := Vector3(0,1.2679,-0.081);
HAnimJoint60 := THAnimJointNode.Create;
HAnimJoint60.NameField := 'vt10';
HAnimJoint60.Center := Vector3(0,1.242,-0.09);
HAnimJoint60.SetSkinCoordIndex([15]);
HAnimJoint60.SetSkinCoordWeight([1]);
HAnimJoint61 := THAnimJointNode.Create;
HAnimJoint61.NameField := 'vt9';
HAnimJoint61.Center := Vector3(0,1.268,-0.1);
HAnimJoint61.SetSkinCoordIndex([13,14]);
HAnimJoint61.SetSkinCoordWeight([1,1]);
HAnimJoint62 := THAnimJointNode.Create;
HAnimJoint62.NameField := 'vt8';
HAnimJoint62.Center := Vector3(0,1.294,-0.11);
HAnimJoint63 := THAnimJointNode.Create;
HAnimJoint63.NameField := 'vt7';
HAnimJoint63.Center := Vector3(0,1.323,-0.1155);
HAnimJoint64 := THAnimJointNode.Create;
HAnimJoint64.NameField := 'vt6';
HAnimJoint64.Center := Vector3(0,1.352,-0.12);
HAnimJoint65 := THAnimJointNode.Create;
HAnimJoint65.NameField := 'vt5';
HAnimJoint65.Center := Vector3(0,1.381,-0.1235);
HAnimJoint66 := THAnimJointNode.Create;
HAnimJoint66.NameField := 'vt4';
HAnimJoint66.Center := Vector3(0,1.41,-0.1235);
HAnimJoint66.SetSkinCoordIndex([81]);
HAnimJoint66.SetSkinCoordWeight([1]);
HAnimJoint67 := THAnimJointNode.Create;
HAnimJoint67.NameField := 'vt3';
HAnimJoint67.Center := Vector3(0,1.438,-0.12);
HAnimJoint68 := THAnimJointNode.Create;
HAnimJoint68.NameField := 'vt2';
HAnimJoint68.Center := Vector3(0,1.468,-0.105);
HAnimJoint69 := THAnimJointNode.Create;
HAnimJoint69.NameField := 'vt1';
HAnimJoint69.Center := Vector3(0,1.497,-0.09);
HAnimJoint69.SetSkinCoordIndex([11,24]);
HAnimJoint69.SetSkinCoordWeight([1,1]);
HAnimJoint70 := THAnimJointNode.Create;
HAnimJoint70.NameField := 'vc7';
HAnimJoint70.Center := Vector3(0,1.525,-0.072);
HAnimJoint70.SetSkinCoordIndex([74,75]);
HAnimJoint70.SetSkinCoordWeight([1,1]);
HAnimJoint71 := THAnimJointNode.Create;
HAnimJoint71.NameField := 'vc6';
HAnimJoint71.Center := Vector3(0,1.54,-0.05);
HAnimJoint72 := THAnimJointNode.Create;
HAnimJoint72.NameField := 'vc5';
HAnimJoint72.Center := Vector3(0,1.552,-0.035);
HAnimJoint73 := THAnimJointNode.Create;
HAnimJoint73.NameField := 'vc4';
HAnimJoint73.Rotation := Vector4(0.79363313197937,0,0.608396623778117,0.509491241300095);
HAnimJoint73.Center := Vector3(0,1.5675,-0.0256);
HAnimJoint74 := THAnimJointNode.Create;
HAnimJoint74.NameField := 'vc3';
HAnimJoint74.Center := Vector3(0,1.58225,-0.0185);
HAnimJoint75 := THAnimJointNode.Create;
HAnimJoint75.NameField := 'vc2';
HAnimJoint75.Center := Vector3(0,1.595,-0.0175);
HAnimJoint76 := THAnimJointNode.Create;
HAnimJoint76.NameField := 'vc1';
HAnimJoint76.Center := Vector3(0,1.61,-0.015);
HAnimJoint77 := THAnimJointNode.Create;
HAnimJoint77.NameField := 'skullbase';
HAnimJoint77.Rotation := Vector4(0,0.999999999999988,0,0.244155538082126);
HAnimJoint77.Center := Vector3(0,1.63,-0.01);
HAnimJoint77.SetSkinCoordIndex([0,1,2,3,4,5,6,7,8,9]);
HAnimJoint77.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1]);
HAnimDisplacer78 := THAnimDisplacerNode.Create;
HAnimDisplacer78.NameField := 'skull_tip_raiser_action';
HAnimDisplacer78.Weight := 0.7399469;
HAnimDisplacer78.SetCoordIndex([0,1,2,3,4,5,6,7,8,9]);
HAnimDisplacer78.SetDisplacements([Vector3(0,0.15,0),Vector3(0,0,0.15),Vector3(-0.1,0,0.15),Vector3(0.1,0,0.05),Vector3(0,-0.02,0.05),Vector3(-0.15,0,0),Vector3(-0.05,0,0),Vector3(0.15,0,0),Vector3(0.05,0,0),Vector3(0,0,-0.15)]);
{ .AddDisplacers }
HAnimJoint77.SetDisplacers([HAnimDisplacer78]);
HAnimJoint79 := THAnimJointNode.Create;
HAnimJoint79.NameField := 'l_eyelid_joint';
HAnimJoint79.Center := Vector3(0.034,1.659,0.06);
{ .AddChildren }
HAnimJoint77.AddChildren([HAnimJoint79]);
HAnimJoint80 := THAnimJointNode.Create;
HAnimJoint80.NameField := 'l_eyeball_joint';
HAnimJoint80.Center := Vector3(0.034,1.659,0.06);
{ .AddChildren }
HAnimJoint77.AddChildren([HAnimJoint80]);
HAnimJoint81 := THAnimJointNode.Create;
HAnimJoint81.NameField := 'l_eyebrow_joint';
HAnimJoint81.Center := Vector3(0.034,1.659,0.06);
{ .AddChildren }
HAnimJoint77.AddChildren([HAnimJoint81]);
HAnimJoint82 := THAnimJointNode.Create;
HAnimJoint82.NameField := 'r_eyelid_joint';
HAnimJoint82.Center := Vector3(-0.034,1.659,0.06);
{ .AddChildren }
HAnimJoint77.AddChildren([HAnimJoint82]);
HAnimJoint83 := THAnimJointNode.Create;
HAnimJoint83.NameField := 'r_eyeball_joint';
HAnimJoint83.Center := Vector3(-0.034,1.659,0.06);
{ .AddChildren }
HAnimJoint77.AddChildren([HAnimJoint83]);
HAnimJoint84 := THAnimJointNode.Create;
HAnimJoint84.NameField := 'r_eyebrow_joint';
HAnimJoint84.Center := Vector3(-0.034,1.659,0.06);
{ .AddChildren }
HAnimJoint77.AddChildren([HAnimJoint84]);
HAnimJoint85 := THAnimJointNode.Create;
HAnimJoint85.NameField := 'temporomandibular';
HAnimJoint85.Center := Vector3(0.034,1.659,0.06);
{ .AddChildren }
HAnimJoint77.AddChildren([HAnimJoint85]);
{ .AddChildren }
HAnimJoint76.AddChildren([HAnimJoint77]);
{ .AddChildren }
HAnimJoint75.AddChildren([HAnimJoint76]);
{ .AddChildren }
HAnimJoint74.AddChildren([HAnimJoint75]);
{ .AddChildren }
HAnimJoint73.AddChildren([HAnimJoint74]);
{ .AddChildren }
HAnimJoint72.AddChildren([HAnimJoint73]);
{ .AddChildren }
HAnimJoint71.AddChildren([HAnimJoint72]);
{ .AddChildren }
HAnimJoint70.AddChildren([HAnimJoint71]);
{ .AddChildren }
HAnimJoint69.AddChildren([HAnimJoint70]);
HAnimJoint86 := THAnimJointNode.Create;
HAnimJoint86.NameField := 'l_acromioclavicular';
HAnimJoint86.Center := Vector3(0.082,1.4488,-0.0353);
HAnimJoint86.SetSkinCoordIndex([12]);
HAnimJoint86.SetSkinCoordWeight([1]);
HAnimJoint87 := THAnimJointNode.Create;
HAnimJoint87.NameField := 'l_sternoclavicular';
HAnimJoint87.Center := Vector3(0.0962,1.4269,-0.0424);
HAnimJoint87.SetSkinCoordIndex([79]);
HAnimJoint87.SetSkinCoordWeight([1]);
HAnimJoint88 := THAnimJointNode.Create;
HAnimJoint88.NameField := 'l_shoulder';
HAnimJoint88.Rotation := Vector4(-0.643733224193946,0,0.765249982730394,1.6862643538567);
HAnimJoint88.Center := Vector3(0.2,1.44,-0.04);
HAnimJoint88.SetSkinCoordIndex([41,42,44,80,102,103,104,105]);
HAnimJoint88.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimJoint89 := THAnimJointNode.Create;
HAnimJoint89.NameField := 'l_elbow';
HAnimJoint89.Rotation := Vector4(-0.80893714343502,-0.587895141986384,0,0.512375525586369);
HAnimJoint89.Center := Vector3(0.2,1.1388,-0.04);
HAnimJoint89.SetSkinCoordIndex([45,46,47,109,110,111,112,113,115,116,117,118]);
HAnimJoint89.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint90 := THAnimJointNode.Create;
HAnimJoint90.NameField := 'l_radiocarpal';
HAnimJoint90.Rotation := Vector4(0,-0.447213595499958,0.894427190999917,0.491420745338246);
HAnimJoint90.Center := Vector3(0.2,0.87,-0.04);
HAnimJoint90.SetSkinCoordIndex([119,120,121,122,123,124,125,126]);
HAnimJoint90.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimJoint91 := THAnimJointNode.Create;
HAnimJoint91.NameField := 'l_carpometacarpal_1';
HAnimJoint91.Center := Vector3(0.1924,0.8472,-0.0534);
HAnimJoint91.SetSkinCoordIndex([127,128]);
HAnimJoint91.SetSkinCoordWeight([1,1]);
HAnimJoint92 := THAnimJointNode.Create;
HAnimJoint92.NameField := 'l_metacarpophalangeal_1';
HAnimJoint92.Center := Vector3(0.1951,0.8226,0.0246);
HAnimJoint92.SetSkinCoordIndex([138,139,140,141,142,143]);
HAnimJoint92.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1]);
HAnimJoint93 := THAnimJointNode.Create;
HAnimJoint93.NameField := 'l_carpal_interphalangeal_1';
HAnimJoint93.Center := Vector3(0.1955,0.8159,0.0464);
HAnimJoint93.SetSkinCoordIndex([144,145,146,147,148,149,150,151,152]);
HAnimJoint93.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ .AddChildren }
HAnimJoint92.AddChildren([HAnimJoint93]);
{ .AddChildren }
HAnimJoint91.AddChildren([HAnimJoint92]);
{ .AddChildren }
HAnimJoint90.AddChildren([HAnimJoint91]);
HAnimJoint94 := THAnimJointNode.Create;
HAnimJoint94.NameField := 'l_carpometacarpal_2';
HAnimJoint94.Center := Vector3(0.1983,0.8024,-0.028);
HAnimJoint94.SetSkinCoordIndex([129,130]);
HAnimJoint94.SetSkinCoordWeight([1,1]);
HAnimJoint95 := THAnimJointNode.Create;
HAnimJoint95.NameField := 'l_metacarpophalangeal_2';
HAnimJoint95.Center := Vector3(0.1983,0.7815,-0.028);
HAnimJoint95.SetSkinCoordIndex([138,139,140,153,154,155,163]);
HAnimJoint95.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint96 := THAnimJointNode.Create;
HAnimJoint96.NameField := 'l_carpal_proximal_interphalangeal_2';
HAnimJoint96.Center := Vector3(0.2017,0.7363,-0.0248);
HAnimJoint96.SetSkinCoordIndex([166,167,168,169]);
HAnimJoint96.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint97 := THAnimJointNode.Create;
HAnimJoint97.NameField := 'l_carpal_distal_interphalangeal_2';
HAnimJoint97.Center := Vector3(0.2028,0.7139,-0.0236);
HAnimJoint97.SetSkinCoordIndex([170,171,172,173,174,175,176,177,178]);
HAnimJoint97.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ .AddChildren }
HAnimJoint96.AddChildren([HAnimJoint97]);
{ .AddChildren }
HAnimJoint95.AddChildren([HAnimJoint96]);
{ .AddChildren }
HAnimJoint94.AddChildren([HAnimJoint95]);
{ .AddChildren }
HAnimJoint90.AddChildren([HAnimJoint94]);
HAnimJoint98 := THAnimJointNode.Create;
HAnimJoint98.NameField := 'l_carpometacarpal_3';
HAnimJoint98.Center := Vector3(0.1987,0.8029,-0.053);
HAnimJoint98.SetSkinCoordIndex([131,132]);
HAnimJoint98.SetSkinCoordWeight([1,1]);
HAnimJoint99 := THAnimJointNode.Create;
HAnimJoint99.NameField := 'l_metacarpophalangeal_3';
HAnimJoint99.Center := Vector3(0.1987,0.7818,-0.053);
HAnimJoint99.SetSkinCoordIndex([156,157,163,164]);
HAnimJoint99.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimJoint100 := THAnimJointNode.Create;
HAnimJoint100.NameField := 'l_carpal_proximal_interphalangeal_3';
HAnimJoint100.Center := Vector3(0.2013,0.7273,-0.0503);
HAnimJoint100.SetSkinCoordIndex([179,180,181,182]);
HAnimJoint100.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint101 := THAnimJointNode.Create;
HAnimJoint101.NameField := 'l_carpal_distal_interphalangeal_3';
HAnimJoint101.Center := Vector3(0.2026,0.7011,-0.0494);
HAnimJoint101.SetSkinCoordIndex([183,184,185,186,187,188,189,190,191]);
HAnimJoint101.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ .AddChildren }
HAnimJoint100.AddChildren([HAnimJoint101]);
{ .AddChildren }
HAnimJoint99.AddChildren([HAnimJoint100]);
{ .AddChildren }
HAnimJoint98.AddChildren([HAnimJoint99]);
{ .AddChildren }
HAnimJoint90.AddChildren([HAnimJoint98]);
HAnimJoint102 := THAnimJointNode.Create;
HAnimJoint102.NameField := 'l_carpometacarpal_4';
HAnimJoint102.Center := Vector3(0.1956,0.8019,-0.0794);
HAnimJoint102.SetSkinCoordIndex([133,134]);
HAnimJoint102.SetSkinCoordWeight([1,1]);
HAnimJoint103 := THAnimJointNode.Create;
HAnimJoint103.NameField := 'l_metacarpophalangeal_4';
HAnimJoint103.Center := Vector3(0.1956,0.7815,-0.0794);
HAnimJoint103.SetSkinCoordIndex([158,159,164,165]);
HAnimJoint103.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimJoint104 := THAnimJointNode.Create;
HAnimJoint104.NameField := 'l_carpal_proximal_interphalangeal_4';
HAnimJoint104.Center := Vector3(0.1973,0.7287,-0.0777);
HAnimJoint104.SetSkinCoordIndex([192,193,194,195]);
HAnimJoint104.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint105 := THAnimJointNode.Create;
HAnimJoint105.NameField := 'l_carpal_distal_interphalangeal_4';
HAnimJoint105.Center := Vector3(0.1983,0.7045,-0.0767);
HAnimJoint105.SetSkinCoordIndex([196,197,198,199,200,201,202,203,204]);
HAnimJoint105.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ .AddChildren }
HAnimJoint104.AddChildren([HAnimJoint105]);
{ .AddChildren }
HAnimJoint103.AddChildren([HAnimJoint104]);
{ .AddChildren }
HAnimJoint102.AddChildren([HAnimJoint103]);
{ .AddChildren }
HAnimJoint90.AddChildren([HAnimJoint102]);
HAnimJoint106 := THAnimJointNode.Create;
HAnimJoint106.NameField := 'l_carpometacarpal_5';
HAnimJoint106.Center := Vector3(0.1925,0.8066,-0.1036);
HAnimJoint106.SetSkinCoordIndex([135,136,137,165]);
HAnimJoint106.SetSkinCoordWeight([1,1,1,0.5]);
HAnimJoint107 := THAnimJointNode.Create;
HAnimJoint107.NameField := 'l_metacarpophalangeal_5';
HAnimJoint107.Center := Vector3(0.1925,0.7866,-0.1036);
HAnimJoint107.SetSkinCoordIndex([160,161,162]);
HAnimJoint107.SetSkinCoordWeight([1,1,1]);
HAnimJoint108 := THAnimJointNode.Create;
HAnimJoint108.NameField := 'l_carpal_proximal_interphalangeal_5';
HAnimJoint108.Center := Vector3(0.1938,0.7452,-0.1024);
HAnimJoint108.SetSkinCoordIndex([205,206,207,208]);
HAnimJoint108.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint109 := THAnimJointNode.Create;
HAnimJoint109.NameField := 'l_carpal_distal_interphalangeal_5';
HAnimJoint109.Center := Vector3(0.1948,0.7277,-0.1017);
HAnimJoint109.SetSkinCoordIndex([209,210,211,212,213,214,215,216,217]);
HAnimJoint109.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ .AddChildren }
HAnimJoint108.AddChildren([HAnimJoint109]);
{ .AddChildren }
HAnimJoint107.AddChildren([HAnimJoint108]);
{ .AddChildren }
HAnimJoint106.AddChildren([HAnimJoint107]);
{ .AddChildren }
HAnimJoint90.AddChildren([HAnimJoint106]);
{ .AddChildren }
HAnimJoint89.AddChildren([HAnimJoint90]);
{ .AddChildren }
HAnimJoint88.AddChildren([HAnimJoint89]);
{ .AddChildren }
HAnimJoint87.AddChildren([HAnimJoint88]);
{ .AddChildren }
HAnimJoint86.AddChildren([HAnimJoint87]);
{ .AddChildren }
HAnimJoint69.AddChildren([HAnimJoint86]);
HAnimJoint110 := THAnimJointNode.Create;
HAnimJoint110.NameField := 'r_sternoclavicular';
HAnimJoint110.Center := Vector3(-0.03,1.46,0);
HAnimJoint110.SetSkinCoordIndex([10]);
HAnimJoint110.SetSkinCoordWeight([1]);
HAnimJoint111 := THAnimJointNode.Create;
HAnimJoint111.NameField := 'r_acromioclavicular';
HAnimJoint111.Center := Vector3(-0.09,1.41,-0.11);
HAnimJoint111.SetSkinCoordIndex([77,29]);
HAnimJoint111.SetSkinCoordWeight([1,0.9]);
HAnimJoint112 := THAnimJointNode.Create;
HAnimJoint112.NameField := 'r_shoulder';
HAnimJoint112.Rotation := Vector4(0,0,-1,1.7121984064579);
HAnimJoint112.Center := Vector3(-0.2,1.44,-0.04);
HAnimJoint112.SetSkinCoordIndex([29,30,32,78,218,219,220,221,86,88]);
HAnimJoint112.SetSkinCoordWeight([0.1,1,1,1,1,1,1,1,0.3,0.2]);
HAnimJoint113 := THAnimJointNode.Create;
HAnimJoint113.NameField := 'r_elbow';
HAnimJoint113.Rotation := Vector4(-0.80893714343502,-0.587895141986384,0,0.512375525586369);
HAnimJoint113.Center := Vector3(-0.2,1.1388,-0.04);
HAnimJoint113.SetSkinCoordIndex([33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint113.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint114 := THAnimJointNode.Create;
HAnimJoint114.NameField := 'r_radiocarpal';
HAnimJoint114.Rotation := Vector4(0,-0.670839596599646,-0.741602478174135,0.341691938879626);
HAnimJoint114.Center := Vector3(-0.2,0.89,-0.04);
HAnimJoint114.SetSkinCoordIndex([235,236,237,238,239,240,241,242]);
HAnimJoint114.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimJoint115 := THAnimJointNode.Create;
HAnimJoint115.NameField := 'r_carpometacarpal_1';
HAnimJoint115.Center := Vector3(-0.2,0.85,0);
HAnimJoint115.SetSkinCoordIndex([243,244]);
HAnimJoint115.SetSkinCoordWeight([1,1]);
HAnimJoint116 := THAnimJointNode.Create;
HAnimJoint116.NameField := 'r_metacarpophalangeal_1';
HAnimJoint116.Center := Vector3(-0.2,0.82,0.03);
HAnimJoint116.SetSkinCoordIndex([254,255,256,257,258,259]);
HAnimJoint116.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1]);
HAnimJoint117 := THAnimJointNode.Create;
HAnimJoint117.NameField := 'r_carpal_interphalangeal_1';
HAnimJoint117.Center := Vector3(-0.2,0.8,0.05);
HAnimJoint117.SetSkinCoordIndex([260,261,262,263,264,265,266,267,268]);
HAnimJoint117.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ .AddChildren }
HAnimJoint116.AddChildren([HAnimJoint117]);
{ .AddChildren }
HAnimJoint115.AddChildren([HAnimJoint116]);
{ .AddChildren }
HAnimJoint114.AddChildren([HAnimJoint115]);
HAnimJoint118 := THAnimJointNode.Create;
HAnimJoint118.NameField := 'r_carpometacarpal_2';
HAnimJoint118.Rotation := Vector4(0,0,1,0.302412748336791);
HAnimJoint118.Center := Vector3(-0.2,0.84,-0.015);
HAnimJoint118.SetSkinCoordIndex([245,246]);
HAnimJoint118.SetSkinCoordWeight([1,1]);
HAnimJoint119 := THAnimJointNode.Create;
HAnimJoint119.NameField := 'r_metacarpophalangeal_2';
HAnimJoint119.Rotation := Vector4(0,0,1,0.453619122505188);
HAnimJoint119.Center := Vector3(-0.2,0.793,-0.015);
HAnimJoint119.SetSkinCoordIndex([254,255,256,269,270,271,279]);
HAnimJoint119.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint120 := THAnimJointNode.Create;
HAnimJoint120.NameField := 'r_carpal_proximal_interphalangeal_2';
HAnimJoint120.Rotation := Vector4(0,0,1,0.453619122505188);
HAnimJoint120.Center := Vector3(-0.2,0.745,-0.015);
HAnimJoint120.SetSkinCoordIndex([282,283,284,285]);
HAnimJoint120.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint121 := THAnimJointNode.Create;
HAnimJoint121.NameField := 'r_carpal_distal_interphalangeal_2';
HAnimJoint121.Rotation := Vector4(0,0,1,0.453619122505188);
HAnimJoint121.Center := Vector3(-0.2,0.72,-0.015);
HAnimJoint121.SetSkinCoordIndex([286,287,288,289,290,291,292,293,294]);
HAnimJoint121.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ .AddChildren }
HAnimJoint120.AddChildren([HAnimJoint121]);
{ .AddChildren }
HAnimJoint119.AddChildren([HAnimJoint120]);
{ .AddChildren }
HAnimJoint118.AddChildren([HAnimJoint119]);
{ .AddChildren }
HAnimJoint114.AddChildren([HAnimJoint118]);
HAnimJoint122 := THAnimJointNode.Create;
HAnimJoint122.NameField := 'r_carpometacarpal_3';
HAnimJoint122.Rotation := Vector4(0,0,1,0.302412748336791);
HAnimJoint122.Center := Vector3(-0.2,0.835,-0.04);
HAnimJoint122.SetSkinCoordIndex([247,248]);
HAnimJoint122.SetSkinCoordWeight([1,1]);
HAnimJoint123 := THAnimJointNode.Create;
HAnimJoint123.NameField := 'r_metacarpophalangeal_3';
HAnimJoint123.Rotation := Vector4(0,0,1,0.453619122505188);
HAnimJoint123.Center := Vector3(-0.2,0.788,-0.04);
HAnimJoint123.SetSkinCoordIndex([272,273,279,280]);
HAnimJoint123.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimJoint124 := THAnimJointNode.Create;
HAnimJoint124.NameField := 'r_carpal_proximal_interphalangeal_3';
HAnimJoint124.Rotation := Vector4(0,0,1,0.453619122505188);
HAnimJoint124.Center := Vector3(-0.2,0.74,-0.04);
HAnimJoint124.SetSkinCoordIndex([295,296,297,298]);
HAnimJoint124.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint125 := THAnimJointNode.Create;
HAnimJoint125.NameField := 'r_carpal_distal_interphalangeal_3';
HAnimJoint125.Rotation := Vector4(0,0,1,0.453619122505188);
HAnimJoint125.Center := Vector3(-0.2,0.7142,-0.04);
HAnimJoint125.SetSkinCoordIndex([299,300,301,302,303,304,305,306,307]);
HAnimJoint125.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ .AddChildren }
HAnimJoint124.AddChildren([HAnimJoint125]);
{ .AddChildren }
HAnimJoint123.AddChildren([HAnimJoint124]);
{ .AddChildren }
HAnimJoint122.AddChildren([HAnimJoint123]);
{ .AddChildren }
HAnimJoint114.AddChildren([HAnimJoint122]);
HAnimJoint126 := THAnimJointNode.Create;
HAnimJoint126.NameField := 'r_carpometacarpal_4';
HAnimJoint126.Rotation := Vector4(0,0,1,0.302412748336791);
HAnimJoint126.Center := Vector3(-0.2,0.835,-0.065);
HAnimJoint126.SetSkinCoordIndex([249,250]);
HAnimJoint126.SetSkinCoordWeight([1,1]);
HAnimJoint127 := THAnimJointNode.Create;
HAnimJoint127.NameField := 'r_metacarpophalangeal_4';
HAnimJoint127.Rotation := Vector4(0,0,1,0.453619122505188);
HAnimJoint127.Center := Vector3(-0.2,0.793,-0.065);
HAnimJoint127.SetSkinCoordIndex([274,275,280,281]);
HAnimJoint127.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimJoint128 := THAnimJointNode.Create;
HAnimJoint128.NameField := 'r_carpal_proximal_interphalangeal_4';
HAnimJoint128.Rotation := Vector4(0,0,1,0.453619122505188);
HAnimJoint128.Center := Vector3(-0.2,0.74,-0.065);
HAnimJoint128.SetSkinCoordIndex([308,309,310,311]);
HAnimJoint128.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint129 := THAnimJointNode.Create;
HAnimJoint129.NameField := 'r_carpal_distal_interphalangeal_4';
HAnimJoint129.Rotation := Vector4(0,0,1,0.453619122505188);
HAnimJoint129.Center := Vector3(-0.2,0.7177,-0.065);
HAnimJoint129.SetSkinCoordIndex([312,313,314,315,316,317,318,319,320]);
HAnimJoint129.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ .AddChildren }
HAnimJoint128.AddChildren([HAnimJoint129]);
{ .AddChildren }
HAnimJoint127.AddChildren([HAnimJoint128]);
{ .AddChildren }
HAnimJoint126.AddChildren([HAnimJoint127]);
{ .AddChildren }
HAnimJoint114.AddChildren([HAnimJoint126]);
HAnimJoint130 := THAnimJointNode.Create;
HAnimJoint130.NameField := 'r_carpometacarpal_5';
HAnimJoint130.Rotation := Vector4(0,0,1,0.302412748336791);
HAnimJoint130.Center := Vector3(-0.2,0.84,-0.085);
HAnimJoint130.SetSkinCoordIndex([251,252,253,281]);
HAnimJoint130.SetSkinCoordWeight([1,1,1,0.5]);
HAnimJoint131 := THAnimJointNode.Create;
HAnimJoint131.NameField := 'r_metacarpophalangeal_5';
HAnimJoint131.Rotation := Vector4(0,0,1,0.453619122505188);
HAnimJoint131.Center := Vector3(-0.2,0.79,-0.085);
HAnimJoint131.SetSkinCoordIndex([276,277,278]);
HAnimJoint131.SetSkinCoordWeight([1,1,1]);
HAnimJoint132 := THAnimJointNode.Create;
HAnimJoint132.NameField := 'r_carpal_proximal_interphalangeal_5';
HAnimJoint132.Rotation := Vector4(0,0,1,0.453619122505188);
HAnimJoint132.Center := Vector3(-0.2,0.755,-0.085);
HAnimJoint132.SetSkinCoordIndex([321,322,323,324]);
HAnimJoint132.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint133 := THAnimJointNode.Create;
HAnimJoint133.NameField := 'r_carpal_distal_interphalangeal_5';
HAnimJoint133.Rotation := Vector4(0,0,1,0.453619122505188);
HAnimJoint133.Center := Vector3(-0.2,0.735,-0.09);
HAnimJoint133.SetSkinCoordIndex([325,326,327,328,329,330,331,332,333]);
HAnimJoint133.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ .AddChildren }
HAnimJoint132.AddChildren([HAnimJoint133]);
{ .AddChildren }
HAnimJoint131.AddChildren([HAnimJoint132]);
{ .AddChildren }
HAnimJoint130.AddChildren([HAnimJoint131]);
{ .AddChildren }
HAnimJoint114.AddChildren([HAnimJoint130]);
{ .AddChildren }
HAnimJoint113.AddChildren([HAnimJoint114]);
{ .AddChildren }
HAnimJoint112.AddChildren([HAnimJoint113]);
{ .AddChildren }
HAnimJoint111.AddChildren([HAnimJoint112]);
{ .AddChildren }
HAnimJoint110.AddChildren([HAnimJoint111]);
{ .AddChildren }
HAnimJoint69.AddChildren([HAnimJoint110]);
{ .AddChildren }
HAnimJoint68.AddChildren([HAnimJoint69]);
{ .AddChildren }
HAnimJoint67.AddChildren([HAnimJoint68]);
{ .AddChildren }
HAnimJoint66.AddChildren([HAnimJoint67]);
{ .AddChildren }
HAnimJoint65.AddChildren([HAnimJoint66]);
{ .AddChildren }
HAnimJoint64.AddChildren([HAnimJoint65]);
{ .AddChildren }
HAnimJoint63.AddChildren([HAnimJoint64]);
{ .AddChildren }
HAnimJoint62.AddChildren([HAnimJoint63]);
{ .AddChildren }
HAnimJoint61.AddChildren([HAnimJoint62]);
{ .AddChildren }
HAnimJoint60.AddChildren([HAnimJoint61]);
{ .AddChildren }
HAnimJoint59.AddChildren([HAnimJoint60]);
{ .AddChildren }
HAnimJoint58.AddChildren([HAnimJoint59]);
{ .AddChildren }
HAnimJoint57.AddChildren([HAnimJoint58]);
{ .AddChildren }
HAnimJoint56.AddChildren([HAnimJoint57]);
{ .AddChildren }
HAnimJoint55.AddChildren([HAnimJoint56]);
{ .AddChildren }
HAnimJoint54.AddChildren([HAnimJoint55]);
{ .AddChildren }
HAnimJoint53.AddChildren([HAnimJoint54]);
{ .AddChildren }
HAnimJoint31.AddChildren([HAnimJoint53]);
{ .AddSkeleton }
HAnimHumanoid28.SetSkeleton([HAnimJoint31]);
HAnimJoint134 := THAnimJointNode.Create;
HAnimJoint134 := HAnimJoint31;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint134;
HAnimJoint135 := THAnimJointNode.Create;
HAnimJoint135 := HAnimJoint40;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint135;
HAnimJoint136 := THAnimJointNode.Create;
HAnimJoint136 := HAnimJoint77;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint136;
HAnimJoint137 := THAnimJointNode.Create;
HAnimJoint137 := HAnimJoint85;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint137;
HAnimJoint138 := THAnimJointNode.Create;
HAnimJoint138 := HAnimJoint76;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint138;
HAnimJoint139 := THAnimJointNode.Create;
HAnimJoint139 := HAnimJoint75;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint139;
HAnimJoint140 := THAnimJointNode.Create;
HAnimJoint140 := HAnimJoint74;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint140;
HAnimJoint141 := THAnimJointNode.Create;
HAnimJoint141 := HAnimJoint73;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint141;
HAnimJoint142 := THAnimJointNode.Create;
HAnimJoint142 := HAnimJoint72;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint142;
HAnimJoint143 := THAnimJointNode.Create;
HAnimJoint143 := HAnimJoint71;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint143;
HAnimJoint144 := THAnimJointNode.Create;
HAnimJoint144 := HAnimJoint70;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint144;
HAnimJoint145 := THAnimJointNode.Create;
HAnimJoint145 := HAnimJoint57;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint145;
HAnimJoint146 := THAnimJointNode.Create;
HAnimJoint146 := HAnimJoint56;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint146;
HAnimJoint147 := THAnimJointNode.Create;
HAnimJoint147 := HAnimJoint55;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint147;
HAnimJoint148 := THAnimJointNode.Create;
HAnimJoint148 := HAnimJoint54;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint148;
HAnimJoint149 := THAnimJointNode.Create;
HAnimJoint149 := HAnimJoint53;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint149;
HAnimJoint150 := THAnimJointNode.Create;
HAnimJoint150 := HAnimJoint69;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint150;
HAnimJoint151 := THAnimJointNode.Create;
HAnimJoint151 := HAnimJoint60;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint151;
HAnimJoint152 := THAnimJointNode.Create;
HAnimJoint152 := HAnimJoint59;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint152;
HAnimJoint153 := THAnimJointNode.Create;
HAnimJoint153 := HAnimJoint58;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint153;
HAnimJoint154 := THAnimJointNode.Create;
HAnimJoint154 := HAnimJoint68;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint154;
HAnimJoint155 := THAnimJointNode.Create;
HAnimJoint155 := HAnimJoint67;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint155;
HAnimJoint156 := THAnimJointNode.Create;
HAnimJoint156 := HAnimJoint66;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint156;
HAnimJoint157 := THAnimJointNode.Create;
HAnimJoint157 := HAnimJoint65;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint157;
HAnimJoint158 := THAnimJointNode.Create;
HAnimJoint158 := HAnimJoint64;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint158;
HAnimJoint159 := THAnimJointNode.Create;
HAnimJoint159 := HAnimJoint63;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint159;
HAnimJoint160 := THAnimJointNode.Create;
HAnimJoint160 := HAnimJoint62;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint160;
HAnimJoint161 := THAnimJointNode.Create;
HAnimJoint161 := HAnimJoint61;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint161;
HAnimJoint162 := THAnimJointNode.Create;
HAnimJoint162 := HAnimJoint86;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint162;
HAnimJoint163 := THAnimJointNode.Create;
HAnimJoint163 := HAnimJoint111;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint163;
HAnimJoint164 := THAnimJointNode.Create;
HAnimJoint164 := HAnimJoint97;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint164;
HAnimJoint165 := THAnimJointNode.Create;
HAnimJoint165 := HAnimJoint121;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint165;
HAnimJoint166 := THAnimJointNode.Create;
HAnimJoint166 := HAnimJoint101;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint166;
HAnimJoint167 := THAnimJointNode.Create;
HAnimJoint167 := HAnimJoint125;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint167;
HAnimJoint168 := THAnimJointNode.Create;
HAnimJoint168 := HAnimJoint105;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint168;
HAnimJoint169 := THAnimJointNode.Create;
HAnimJoint169 := HAnimJoint129;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint169;
HAnimJoint170 := THAnimJointNode.Create;
HAnimJoint170 := HAnimJoint109;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint170;
HAnimJoint171 := THAnimJointNode.Create;
HAnimJoint171 := HAnimJoint133;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint171;
HAnimJoint172 := THAnimJointNode.Create;
HAnimJoint172 := HAnimJoint93;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint172;
HAnimJoint173 := THAnimJointNode.Create;
HAnimJoint173 := HAnimJoint117;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint173;
HAnimJoint174 := THAnimJointNode.Create;
HAnimJoint174 := HAnimJoint96;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint174;
HAnimJoint175 := THAnimJointNode.Create;
HAnimJoint175 := HAnimJoint120;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint175;
HAnimJoint176 := THAnimJointNode.Create;
HAnimJoint176 := HAnimJoint100;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint176;
HAnimJoint177 := THAnimJointNode.Create;
HAnimJoint177 := HAnimJoint124;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint177;
HAnimJoint178 := THAnimJointNode.Create;
HAnimJoint178 := HAnimJoint104;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint178;
HAnimJoint179 := THAnimJointNode.Create;
HAnimJoint179 := HAnimJoint128;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint179;
HAnimJoint180 := THAnimJointNode.Create;
HAnimJoint180 := HAnimJoint108;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint180;
HAnimJoint181 := THAnimJointNode.Create;
HAnimJoint181 := HAnimJoint132;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint181;
HAnimJoint182 := THAnimJointNode.Create;
HAnimJoint182 := HAnimJoint91;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint182;
HAnimJoint183 := THAnimJointNode.Create;
HAnimJoint183 := HAnimJoint115;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint183;
HAnimJoint184 := THAnimJointNode.Create;
HAnimJoint184 := HAnimJoint94;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint184;
HAnimJoint185 := THAnimJointNode.Create;
HAnimJoint185 := HAnimJoint118;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint185;
HAnimJoint186 := THAnimJointNode.Create;
HAnimJoint186 := HAnimJoint98;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint186;
HAnimJoint187 := THAnimJointNode.Create;
HAnimJoint187 := HAnimJoint122;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint187;
HAnimJoint188 := THAnimJointNode.Create;
HAnimJoint188 := HAnimJoint102;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint188;
HAnimJoint189 := THAnimJointNode.Create;
HAnimJoint189 := HAnimJoint126;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint189;
HAnimJoint190 := THAnimJointNode.Create;
HAnimJoint190 := HAnimJoint106;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint190;
HAnimJoint191 := THAnimJointNode.Create;
HAnimJoint191 := HAnimJoint130;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint191;
HAnimJoint192 := THAnimJointNode.Create;
HAnimJoint192 := HAnimJoint89;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint192;
HAnimJoint193 := THAnimJointNode.Create;
HAnimJoint193 := HAnimJoint113;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint193;
HAnimJoint194 := THAnimJointNode.Create;
HAnimJoint194 := HAnimJoint80;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint194;
HAnimJoint195 := THAnimJointNode.Create;
HAnimJoint195 := HAnimJoint83;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint195;
HAnimJoint196 := THAnimJointNode.Create;
HAnimJoint196 := HAnimJoint81;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint196;
HAnimJoint197 := THAnimJointNode.Create;
HAnimJoint197 := HAnimJoint84;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint197;
HAnimJoint198 := THAnimJointNode.Create;
HAnimJoint198 := HAnimJoint79;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint198;
HAnimJoint199 := THAnimJointNode.Create;
HAnimJoint199 := HAnimJoint82;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint199;
HAnimJoint200 := THAnimJointNode.Create;
HAnimJoint200 := HAnimJoint41;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint200;
HAnimJoint201 := THAnimJointNode.Create;
HAnimJoint201 := HAnimJoint47;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint201;
HAnimJoint202 := THAnimJointNode.Create;
HAnimJoint202 := HAnimJoint42;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint202;
HAnimJoint203 := THAnimJointNode.Create;
HAnimJoint203 := HAnimJoint48;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint203;
HAnimJoint204 := THAnimJointNode.Create;
HAnimJoint204 := HAnimJoint92;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint204;
HAnimJoint205 := THAnimJointNode.Create;
HAnimJoint205 := HAnimJoint116;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint205;
HAnimJoint206 := THAnimJointNode.Create;
HAnimJoint206 := HAnimJoint95;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint206;
HAnimJoint207 := THAnimJointNode.Create;
HAnimJoint207 := HAnimJoint119;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint207;
HAnimJoint208 := THAnimJointNode.Create;
HAnimJoint208 := HAnimJoint99;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint208;
HAnimJoint209 := THAnimJointNode.Create;
HAnimJoint209 := HAnimJoint123;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint209;
HAnimJoint210 := THAnimJointNode.Create;
HAnimJoint210 := HAnimJoint103;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint210;
HAnimJoint211 := THAnimJointNode.Create;
HAnimJoint211 := HAnimJoint127;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint211;
HAnimJoint212 := THAnimJointNode.Create;
HAnimJoint212 := HAnimJoint107;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint212;
HAnimJoint213 := THAnimJointNode.Create;
HAnimJoint213 := HAnimJoint131;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint213;
HAnimJoint214 := THAnimJointNode.Create;
HAnimJoint214 := HAnimJoint45;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint214;
HAnimJoint215 := THAnimJointNode.Create;
HAnimJoint215 := HAnimJoint51;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint215;
HAnimJoint216 := THAnimJointNode.Create;
HAnimJoint216 := HAnimJoint90;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint216;
HAnimJoint217 := THAnimJointNode.Create;
HAnimJoint217 := HAnimJoint114;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint217;
HAnimJoint218 := THAnimJointNode.Create;
HAnimJoint218 := HAnimJoint88;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint218;
HAnimJoint219 := THAnimJointNode.Create;
HAnimJoint219 := HAnimJoint112;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint219;
HAnimJoint220 := THAnimJointNode.Create;
HAnimJoint220 := HAnimJoint87;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint220;
HAnimJoint221 := THAnimJointNode.Create;
HAnimJoint221 := HAnimJoint110;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint221;
HAnimJoint222 := THAnimJointNode.Create;
HAnimJoint222 := HAnimJoint43;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint222;
HAnimJoint223 := THAnimJointNode.Create;
HAnimJoint223 := HAnimJoint49;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint223;
HAnimJoint224 := THAnimJointNode.Create;
HAnimJoint224 := HAnimJoint46;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint224;
HAnimJoint225 := THAnimJointNode.Create;
HAnimJoint225 := HAnimJoint52;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint225;
HAnimJoint226 := THAnimJointNode.Create;
HAnimJoint226 := HAnimJoint44;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint226;
HAnimJoint227 := THAnimJointNode.Create;
HAnimJoint227 := HAnimJoint50;
{ .AddJoints }
HAnimHumanoid28.Joints := HAnimJoint227;
HAnimSegment228 := THAnimSegmentNode.Create;
HAnimSegment228 := HAnimSegment32;
{ .AddSegments }
HAnimHumanoid28.Segments := HAnimSegment228;
HAnimSite229 := THAnimSiteNode.Create;
HAnimSite229 := HAnimSite33;
{ .AddSites }
HAnimHumanoid28.Sites := HAnimSite229;
Coordinate230 := TCoordinateNode.Create;
Coordinate230.SetPoint([Vector3(0,1.77,0),Vector3(0,1.665,0.09),Vector3(-0.033,1.62,0.087),Vector3(0.033,1.62,0.087),Vector3(0,1.55,0.097),Vector3(-0.077,1.64,-0.01),Vector3(-0.0527,1.58,0.015),Vector3(0.077,1.64,-0.01),Vector3(0.0527,1.58,0.015),Vector3(0,1.625,-0.0925),Vector3(-0.03,1.46,0.035),Vector3(0,1.44,0.03),Vector3(0.03,1.46,0.035),Vector3(-0.1135,1.318,0.095),Vector3(0.1135,1.318,0.095),Vector3(0,1.25,0.113),Vector3(-0.087,1.19,0.09),Vector3(-0.0935,1.03,0.075),Vector3(0.087,1.19,0.09),Vector3(0.0935,1.03,0.075),Vector3(-0.1425,1.065,0.0033),Vector3(-0.15,0.9,-0.01),Vector3(0.1425,1.065,0.0033),Vector3(0.15,0.9,-0.01),Vector3(0,1.53,-0.084),Vector3(0.0049,1.1908,-0.1113),Vector3(-0.0773,1.019,-0.12),Vector3(0.0773,1.019,-0.12),Vector3(0.005,1.0915,-0.1091),Vector3(-0.178,1.4825,-0.0625),Vector3(-0.17,1.38,0.007),Vector3(-0.1884,0.8676,-0.036),Vector3(-0.16,1.38,-0.127),Vector3(-0.2,1.1388,-0.08),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.23,1.133,-0.055),Vector3(-0.1977,0.8169,-0.0177),Vector3(-0.1941,0.6772,-0.0423),Vector3(-0.2117,0.8562,-0.0584),Vector3(-0.1929,0.789,-0.1064),Vector3(0.175,1.4825,-0.06),Vector3(0.17,1.38,0.007),Vector3(0.1901,0.8645,-0.0415),Vector3(0.16,1.38,-0.125),Vector3(0.2,1.1388,-0.08),Vector3(0.165,1.1388,-0.04),Vector3(0.244,1.1388,-0.04),Vector3(0.23,1.133,-0.055),Vector3(0.2009,0.8139,-0.0237),Vector3(0.2056,0.6743,-0.0482),Vector3(0.2142,0.8529,-0.0648),Vector3(0.1929,0.786,-0.1122),Vector3(-0.1,0.4913,-0.03),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.165,0.01,0.12),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.09,0.056,0.0125),Vector3(-0.115,0.02,0.122),Vector3(-0.115,0.04,-0.055),Vector3(-0.11,0.011,0.19),Vector3(0.0993,0.4881,-0.0309),Vector3(0.17,0.466,0),Vector3(0.05,0.4867,0),Vector3(0.165,0.01,0.12),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.09,0.056,0.0125),Vector3(0.115,0.02,0.122),Vector3(0.115,0.04,-0.055),Vector3(0.11,0.011,0.19),Vector3(0,0.875,0),Vector3(-0.0646,1.5149,-0.038),Vector3(0.0646,1.5149,-0.038),Vector3(0,1.07225,0.09),Vector3(-0.11,1.427,-0.1375),Vector3(-0.235,1.42,-0.0625),Vector3(0.11,1.427,-0.1375),Vector3(0.235,1.42,-0.0625),Vector3(0,1.41,-0.145),Vector3(0,0.925,0.08),Vector3(-0.087,1.19,-0.09),Vector3(0.087,1.19,-0.09),Vector3(0.172,1.32,-0.03),Vector3(-0.172,1.32,-0.03),Vector3(0.15,1.23,-0.015),Vector3(-0.15,1.23,-0.015),Vector3(0.079,0.92,-0.14),Vector3(0.1,0.9,0.077),Vector3(-0.079,0.92,-0.14),Vector3(-0.1,0.9,0.075),Vector3(0,0.87,0),Vector3(0.171,0.65,0),Vector3(0.02,0.65,0),Vector3(0.1,0.65,-0.08),Vector3(0.1,0.65,0.07),Vector3(-0.171,0.65,0),Vector3(-0.02,0.65,0),Vector3(-0.1,0.65,-0.08),Vector3(-0.1,0.65,0.07),Vector3(0.25,1.27,-0.04),Vector3(0.17,1.27,-0.04),Vector3(0.2,1.27,-0.09),Vector3(0.2,1.27,0.02),Vector3(0.244,1.1388,-0.04),Vector3(0.165,1.1388,-0.04),Vector3(0.2,1.1388,-0.08),Vector3(0.2,1.1388,-0.013),Vector3(0.225,1,-0.01),Vector3(0.225,1,-0.07),Vector3(0.185,1,-0.01),Vector3(0.185,1,-0.07),Vector3(0.2,1.1388,-0.04),Vector3(0.225,0.92,-0.04),Vector3(0.175,0.92,-0.04),Vector3(0.2,0.92,-0.065),Vector3(0.2,0.92,-0.015),Vector3(0.225,0.89,-0.04),Vector3(0.175,0.89,-0.04),Vector3(0.2,0.89,-0.065),Vector3(0.2,0.89,-0.015),Vector3(0.218,0.86,-0.04),Vector3(0.184,0.86,-0.04),Vector3(0.2,0.87,-0.07),Vector3(0.2,0.87,0),Vector3(0.21,0.85,0),Vector3(0.1854,0.85,0),Vector3(0.212,0.84,-0.015),Vector3(0.183,0.84,-0.015),Vector3(0.213,0.835,-0.04),Vector3(0.19,0.835,-0.04),Vector3(0.211,0.835,-0.065),Vector3(0.192,0.835,-0.065),Vector3(0.208,0.84,-0.085),Vector3(0.19,0.84,-0.085),Vector3(0.2,0.84,-0.095),Vector3(0.215,0.82,0),Vector3(0.193,0.815,0.005),Vector3(0.198,0.8,0.012),Vector3(0.21,0.82,0.03),Vector3(0.19,0.82,0.03),Vector3(0.2,0.835,0.039),Vector3(0.212,0.8,0.05),Vector3(0.188,0.8,0.05),Vector3(0.2,0.807,0.057),Vector3(0.2,0.793,0.035),Vector3(0.2,0.774,0.076),Vector3(0.212,0.78,0.07),Vector3(0.188,0.78,0.07),Vector3(0.2,0.785,0.075),Vector3(0.2,0.77,0.062),Vector3(0.215,0.793,-0.015),Vector3(0.187,0.793,-0.015),Vector3(0.2,0.793,-0.005),Vector3(0.215,0.788,-0.04),Vector3(0.187,0.788,-0.04),Vector3(0.215,0.793,-0.065),Vector3(0.187,0.793,-0.065),Vector3(0.21,0.79,-0.085),Vector3(0.19,0.79,-0.085),Vector3(0.2,0.79,-0.095),Vector3(0.19,0.77,-0.0275),Vector3(0.19,0.77,-0.0525),Vector3(0.19,0.78,-0.0775),Vector3(0.212,0.745,-0.015),Vector3(0.188,0.745,-0.02),Vector3(0.2,0.745,-0.0255),Vector3(0.2,0.745,-0.0045),Vector3(0.211,0.72,-0.015),Vector3(0.189,0.72,-0.015),Vector3(0.2,0.72,-0.0252),Vector3(0.2,0.72,-0.0048),Vector3(0.21,0.695,-0.015),Vector3(0.19,0.695,-0.015),Vector3(0.2,0.695,-0.025),Vector3(0.2,0.695,-0.005),Vector3(0.2,0.685,-0.015),Vector3(0.215,0.74,-0.04),Vector3(0.185,0.74,-0.04),Vector3(0.2,0.74,-0.055),Vector3(0.2,0.74,-0.025),Vector3(0.21,0.7142,-0.04),Vector3(0.19,0.7142,-0.04),Vector3(0.2,0.7142,-0.053),Vector3(0.2,0.7142,-0.027),Vector3(0.21,0.68,-0.04),Vector3(0.19,0.68,-0.04),Vector3(0.2,0.68,-0.05),Vector3(0.2,0.68,-0.03),Vector3(0.2,0.67,-0.04),Vector3(0.212,0.74,-0.065),Vector3(0.188,0.74,-0.065),Vector3(0.2,0.74,-0.0756),Vector3(0.2,0.74,-0.0542),Vector3(0.21,0.7177,-0.065),Vector3(0.19,0.7177,-0.065),Vector3(0.2,0.7177,-0.0751),Vector3(0.2,0.7177,-0.0549),Vector3(0.21,0.695,-0.065),Vector3(0.19,0.695,-0.065),Vector3(0.2,0.695,-0.075),Vector3(0.2,0.695,-0.055),Vector3(0.2,0.685,-0.065),Vector3(0.211,0.755,-0.085),Vector3(0.189,0.755,-0.085),Vector3(0.2,0.755,-0.0952),Vector3(0.2,0.755,-0.0748),Vector3(0.21,0.735,-0.085),Vector3(0.19,0.735,-0.085),Vector3(0.2,0.735,-0.0951),Vector3(0.2,0.735,-0.0749),Vector3(0.21,0.72,-0.085),Vector3(0.19,0.72,-0.085),Vector3(0.2,0.72,-0.095),Vector3(0.2,0.72,-0.075),Vector3(0.2,0.71,-0.085),Vector3(-0.23,1.23,-0.04),Vector3(-0.16,1.23,-0.04),Vector3(-0.2,1.235,-0.105),Vector3(-0.2,1.255,0.02),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.2,1.1388,-0.08),Vector3(-0.2,1.1388,0.013),Vector3(-0.225,1,-0.01),Vector3(-0.225,1,-0.07),Vector3(-0.185,1,-0.01),Vector3(-0.185,1,-0.07),Vector3(-0.2,1.1388,-0.04),Vector3(-0.225,0.92,-0.04),Vector3(-0.175,0.92,-0.04),Vector3(-0.2,0.92,-0.065),Vector3(-0.2,0.92,-0.015),Vector3(-0.225,0.89,-0.04),Vector3(-0.175,0.89,-0.04),Vector3(-0.2,0.89,-0.065),Vector3(-0.2,0.89,-0.015),Vector3(-0.218,0.86,-0.04),Vector3(-0.184,0.86,-0.04),Vector3(-0.2,0.87,-0.07),Vector3(-0.2,0.87,0),Vector3(-0.21,0.85,0),Vector3(-0.1854,0.85,0),Vector3(-0.212,0.84,-0.015),Vector3(-0.183,0.84,-0.015),Vector3(-0.213,0.835,-0.04),Vector3(-0.19,0.835,-0.04),Vector3(-0.211,0.835,-0.065),Vector3(-0.192,0.835,-0.065),Vector3(-0.208,0.84,-0.085),Vector3(-0.19,0.84,-0.085),Vector3(-0.2,0.84,-0.095),Vector3(-0.215,0.82,0),Vector3(-0.193,0.815,0.005),Vector3(-0.198,0.8,0.012),Vector3(-0.21,0.82,0.03),Vector3(-0.19,0.82,0.03),Vector3(-0.2,0.835,0.039),Vector3(-0.212,0.8,0.05),Vector3(-0.188,0.8,0.05),Vector3(-0.2,0.807,0.057),Vector3(-0.2,0.793,0.035),Vector3(-0.2,0.774,0.076),Vector3(-0.212,0.78,0.07),Vector3(-0.188,0.78,0.07),Vector3(-0.2,0.785,0.075),Vector3(-0.2,0.77,0.062),Vector3(-0.215,0.793,-0.015),Vector3(-0.187,0.793,-0.015),Vector3(-0.2,0.793,-0.005),Vector3(-0.215,0.788,-0.04),Vector3(-0.187,0.788,-0.04),Vector3(-0.215,0.793,-0.065),Vector3(-0.187,0.793,-0.065),Vector3(-0.21,0.79,-0.085),Vector3(-0.19,0.79,-0.085),Vector3(-0.2,0.79,-0.095),Vector3(-0.19,0.77,-0.0275),Vector3(-0.19,0.77,-0.0525),Vector3(-0.19,0.78,-0.0775),Vector3(-0.212,0.745,-0.015),Vector3(-0.188,0.745,-0.02),Vector3(-0.2,0.745,-0.0255),Vector3(-0.2,0.745,-0.0045),Vector3(-0.211,0.72,-0.015),Vector3(-0.189,0.72,-0.015),Vector3(-0.2,0.72,-0.0252),Vector3(-0.2,0.72,-0.0048),Vector3(-0.21,0.695,-0.015),Vector3(-0.19,0.695,-0.015),Vector3(-0.2,0.695,-0.025),Vector3(-0.2,0.695,-0.005),Vector3(-0.2,0.685,-0.015),Vector3(-0.215,0.74,-0.04),Vector3(-0.185,0.74,-0.04),Vector3(-0.2,0.74,-0.055),Vector3(-0.2,0.74,-0.025),Vector3(-0.21,0.7142,-0.04),Vector3(-0.19,0.7142,-0.04),Vector3(-0.2,0.7142,-0.053),Vector3(-0.2,0.7142,-0.027),Vector3(-0.21,0.68,-0.04),Vector3(-0.19,0.68,-0.04),Vector3(-0.2,0.68,-0.05),Vector3(-0.2,0.68,-0.03),Vector3(-0.2,0.67,-0.04),Vector3(-0.212,0.74,-0.065),Vector3(-0.188,0.74,-0.065),Vector3(-0.2,0.74,-0.0756),Vector3(-0.2,0.74,-0.0542),Vector3(-0.21,0.7177,-0.065),Vector3(-0.19,0.7177,-0.065),Vector3(-0.2,0.7177,-0.0751),Vector3(-0.2,0.7177,-0.0549),Vector3(-0.21,0.695,-0.065),Vector3(-0.19,0.695,-0.065),Vector3(-0.2,0.695,-0.075),Vector3(-0.2,0.695,-0.055),Vector3(-0.2,0.685,-0.065),Vector3(-0.211,0.755,-0.085),Vector3(-0.189,0.755,-0.085),Vector3(-0.2,0.755,-0.0952),Vector3(-0.2,0.755,-0.0748),Vector3(-0.21,0.735,-0.085),Vector3(-0.19,0.735,-0.085),Vector3(-0.2,0.735,-0.0951),Vector3(-0.2,0.735,-0.0749),Vector3(-0.21,0.72,-0.085),Vector3(-0.19,0.72,-0.085),Vector3(-0.2,0.72,-0.095),Vector3(-0.2,0.72,-0.075),Vector3(-0.2,0.71,-0.085),Vector3(0.115,0.466,0.06),Vector3(0.115,0.466,-0.055),Vector3(0.15,0.466,0),Vector3(0.05,0.466,0),Vector3(0.17,0.3,0),Vector3(0.06,0.3,0),Vector3(0.1,0.3,-0.05),Vector3(0.1,0.3,0.05),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.115,0.069,-0.045),Vector3(0.117,0.0975,0.0615),Vector3(0.1375,0.006,-0.03),Vector3(0.095,0.006,-0.03),Vector3(0.115,0.015,-0.045),Vector3(0.115,0.06,0.1),Vector3(0.115,0,0.07),Vector3(0.165,0,0.07),Vector3(0.095,0,0.07),Vector3(0.115,0.04,0.13),Vector3(0.125,0,0.12),Vector3(0.165,0,0.12),Vector3(0.087,0,0.122),Vector3(0.09,0.012,0.188),Vector3(0.11,0.011,0.19),Vector3(0.128,0.011,0.185),Vector3(0.142,0.011,0.178),Vector3(0.154,0.01,0.168),Vector3(-0.115,0.466,0.06),Vector3(-0.115,0.466,-0.055),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.17,0.3,0),Vector3(-0.06,0.3,0),Vector3(-0.1,0.3,-0.05),Vector3(-0.1,0.3,0.05),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.115,0.069,-0.045),Vector3(-0.117,0.0975,0.0615),Vector3(-0.1375,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.115,0.06,0.1),Vector3(-0.115,0,0.07),Vector3(-0.165,0,0.07),Vector3(-0.095,0,0.07),Vector3(-0.115,0.04,0.13),Vector3(-0.125,0,0.12),Vector3(-0.165,0,0.12),Vector3(-0.087,0,0.122),Vector3(-0.09,0.012,0.188),Vector3(-0.11,0.011,0.19),Vector3(-0.128,0.011,0.185),Vector3(-0.142,0.011,0.178),Vector3(-0.154,0.01,0.168)]);
{ .SetSkinCoord }
HAnimHumanoid28.SetSkinCoord(Coordinate230);
Shape231 := TShapeNode.Create;
Appearance232 := TAppearanceNode.Create;
Material233 := TMaterialNode.Create;
Material233.DiffuseColor := Vector3(0.3,0.3,0.6);
Material233.EmissiveColor := Vector3(0.3,0.3,0.6);
{ .SetMaterial }
Appearance232.Material := Material233;
ImageTexture234 := TImageTextureNode.Create;
ImageTexture234.SetUrl(['JoeBodyTexture29.png','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png']);
{ .SetTexture }
Appearance232.Texture := ImageTexture234;
TextureTransform235 := TTextureTransformNode.Create;
TextureTransform235.Rotation := 0.7560319;
{ .SetTextureTransform }
Appearance232.TextureTransform := TextureTransform235;
{ .SetAppearance }
Shape231.Appearance := Appearance232;
IndexedFaceSet236 := TIndexedFaceSetNode.Create;
IndexedFaceSet236.CreaseAngle := 3.14;
IndexedFaceSet236.SetCoordIndex([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
TextureCoordinate237 := TTextureCoordinateNode.Create;
TextureCoordinate237.SetPoint([Vector2(0,0),Vector2(0.5,0.5),Vector2(0.5,0),Vector2(0,0.5)]);
{ .SetTexCoord }
IndexedFaceSet236.TexCoord := TextureCoordinate237;
Coordinate238 := TCoordinateNode.Create;
Coordinate238 := Coordinate230;
{ .SetCoord }
IndexedFaceSet236.Coord := Coordinate238;
{ .SetGeometry }
Shape231.Geometry := IndexedFaceSet236;
{ .SetSkin }
HAnimHumanoid28.SetSkin([Shape231]);
{ .AddChildren }
Group27.AddChildren([HAnimHumanoid28]);
{ .AddChildren }
Group16.AddChildren([Group27]);
Group239 := TGroupNode.Create;
TimeSensor240 := TTimeSensorNode.Create;
TimeSensor240.CycleInterval := 3.73;
TimeSensor240.Loop := True;
{ .AddChildren }
Group239.AddChildren([TimeSensor240]);
OrientationInterpolator241 := TOrientationInterpolatorNode.Create;
OrientationInterpolator241.SetKey([0,0.1,0.4,0.6,1]);
OrientationInterpolator241.SetKeyValue([Vector4(1,0,0,0.5),Vector4(1,0,0,0.5),Vector4(-1,0,0,0.1),Vector4(-1,0,0,0.5),Vector4(-1,0,0,0.5)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator241]);
PositionInterpolator242 := TPositionInterpolatorNode.Create;
PositionInterpolator242.SetKey([0,0.2,0.6,1]);
PositionInterpolator242.SetKeyValue([Vector3(1,0.3,-1),Vector3(0.4,-0.04,-0.4),Vector3(-0.18,0.1,0),Vector3(-0.2,0.15,0.15)]);
{ .AddChildren }
Group239.AddChildren([PositionInterpolator242]);
OrientationInterpolator243 := TOrientationInterpolatorNode.Create;
OrientationInterpolator243.SetKey([0,0.5,1]);
OrientationInterpolator243.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator243]);
OrientationInterpolator244 := TOrientationInterpolatorNode.Create;
OrientationInterpolator244.SetKey([0,0.1,0.3,0.45,1]);
OrientationInterpolator244.SetKeyValue([Vector4(-1,0,0,1.5),Vector4(-1,0,0,1),Vector4(0,0,1,0),Vector4(1,0,0,0.5),Vector4(1,0,0,1)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator244]);
OrientationInterpolator245 := TOrientationInterpolatorNode.Create;
OrientationInterpolator245.SetKey([0,0.2,0.35,0.5,1]);
OrientationInterpolator245.SetKeyValue([Vector4(1,0,0,1),Vector4(0,0,1,0),Vector4(0,0,1,0.2),Vector4(1,0,1,0.5),Vector4(1,0,0,1.4)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator245]);
OrientationInterpolator246 := TOrientationInterpolatorNode.Create;
OrientationInterpolator246.SetKey([0,0.25,1]);
OrientationInterpolator246.SetKeyValue([Vector4(-1,0,0,1),Vector4(0,0,1,0),Vector4(1,0,0,1)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator246]);
OrientationInterpolator247 := TOrientationInterpolatorNode.Create;
OrientationInterpolator247.SetKey([0,0.5,1]);
OrientationInterpolator247.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator247]);
OrientationInterpolator248 := TOrientationInterpolatorNode.Create;
OrientationInterpolator248.SetKey([0,0.5,1]);
OrientationInterpolator248.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator248]);
OrientationInterpolator249 := TOrientationInterpolatorNode.Create;
OrientationInterpolator249.SetKey([0,0.5,1]);
OrientationInterpolator249.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator249]);
OrientationInterpolator250 := TOrientationInterpolatorNode.Create;
OrientationInterpolator250.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator250.SetKeyValue([Vector4(1,0,0,1),Vector4(1,0,0,1),Vector4(-1,0,0,1),Vector4(-1,0,0,1),Vector4(-1,0,0,1)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator250]);
OrientationInterpolator251 := TOrientationInterpolatorNode.Create;
OrientationInterpolator251.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator251.SetKeyValue([Vector4(1,0,0,0.1),Vector4(0,0,1,0),Vector4(1,0,0,1),Vector4(1,0,0,1),Vector4(1,0,0,1.5)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator251]);
OrientationInterpolator252 := TOrientationInterpolatorNode.Create;
OrientationInterpolator252.SetKey([0,0.25,0.5,0.75,1]);
OrientationInterpolator252.SetKeyValue([Vector4(-1,0,0,1),Vector4(0,0,1,0),Vector4(1,0,0,1),Vector4(1,0,0,1),Vector4(1,0,0,0.5)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator252]);
OrientationInterpolator253 := TOrientationInterpolatorNode.Create;
OrientationInterpolator253.SetKey([0,0.5,1]);
OrientationInterpolator253.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator253]);
OrientationInterpolator254 := TOrientationInterpolatorNode.Create;
OrientationInterpolator254.SetKey([0,0.5,1]);
OrientationInterpolator254.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator254]);
OrientationInterpolator255 := TOrientationInterpolatorNode.Create;
OrientationInterpolator255.SetKey([0,0.5,1]);
OrientationInterpolator255.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator255]);
OrientationInterpolator256 := TOrientationInterpolatorNode.Create;
OrientationInterpolator256.SetKey([0,0.5,1]);
OrientationInterpolator256.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator256]);
OrientationInterpolator257 := TOrientationInterpolatorNode.Create;
OrientationInterpolator257.SetKey([0,0.5,1]);
OrientationInterpolator257.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator257]);
OrientationInterpolator258 := TOrientationInterpolatorNode.Create;
OrientationInterpolator258.SetKey([0,0.5,1]);
OrientationInterpolator258.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator258]);
OrientationInterpolator259 := TOrientationInterpolatorNode.Create;
OrientationInterpolator259.SetKey([0,0.5,1]);
OrientationInterpolator259.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator259]);
OrientationInterpolator260 := TOrientationInterpolatorNode.Create;
OrientationInterpolator260.SetKey([0,0.5,1]);
OrientationInterpolator260.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator260]);
OrientationInterpolator261 := TOrientationInterpolatorNode.Create;
OrientationInterpolator261.SetKey([0,0.5,1]);
OrientationInterpolator261.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator261]);
OrientationInterpolator262 := TOrientationInterpolatorNode.Create;
OrientationInterpolator262.SetKey([0,0.5,1]);
OrientationInterpolator262.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator262]);
OrientationInterpolator263 := TOrientationInterpolatorNode.Create;
OrientationInterpolator263.SetKey([0,0.5,1]);
OrientationInterpolator263.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator263]);
OrientationInterpolator264 := TOrientationInterpolatorNode.Create;
OrientationInterpolator264.SetKey([0,0.5,1]);
OrientationInterpolator264.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator264]);
OrientationInterpolator265 := TOrientationInterpolatorNode.Create;
OrientationInterpolator265.SetKey([0,0.5,1]);
OrientationInterpolator265.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator265]);
OrientationInterpolator266 := TOrientationInterpolatorNode.Create;
OrientationInterpolator266.SetKey([0,0.5,1]);
OrientationInterpolator266.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator266]);
OrientationInterpolator267 := TOrientationInterpolatorNode.Create;
OrientationInterpolator267.SetKey([0,0.5,1]);
OrientationInterpolator267.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator267]);
OrientationInterpolator268 := TOrientationInterpolatorNode.Create;
OrientationInterpolator268.SetKey([0,0.5,1]);
OrientationInterpolator268.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator268]);
OrientationInterpolator269 := TOrientationInterpolatorNode.Create;
OrientationInterpolator269.SetKey([0,0.5,1]);
OrientationInterpolator269.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator269]);
OrientationInterpolator270 := TOrientationInterpolatorNode.Create;
OrientationInterpolator270.SetKey([0,0.5,1]);
OrientationInterpolator270.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator270]);
OrientationInterpolator271 := TOrientationInterpolatorNode.Create;
OrientationInterpolator271.SetKey([0,0.5,1]);
OrientationInterpolator271.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator271]);
OrientationInterpolator272 := TOrientationInterpolatorNode.Create;
OrientationInterpolator272.SetKey([0,0.5,1]);
OrientationInterpolator272.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator272]);
OrientationInterpolator273 := TOrientationInterpolatorNode.Create;
OrientationInterpolator273.SetKey([0,0.5,1]);
OrientationInterpolator273.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator273]);
OrientationInterpolator274 := TOrientationInterpolatorNode.Create;
OrientationInterpolator274.SetKey([0,0.5,1]);
OrientationInterpolator274.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator274]);
OrientationInterpolator275 := TOrientationInterpolatorNode.Create;
OrientationInterpolator275.SetKey([0,0.5,1]);
OrientationInterpolator275.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator275]);
OrientationInterpolator276 := TOrientationInterpolatorNode.Create;
OrientationInterpolator276.SetKey([0,0.3,0.4,1]);
OrientationInterpolator276.SetKeyValue([Vector4(1,0,1,0.25),Vector4(-1,0,-1,0.35),Vector4(1,0,0,0.75),Vector4(1,0,1,0.5)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator276]);
OrientationInterpolator277 := TOrientationInterpolatorNode.Create;
OrientationInterpolator277.SetKey([0,0.5,1]);
OrientationInterpolator277.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator277]);
OrientationInterpolator278 := TOrientationInterpolatorNode.Create;
OrientationInterpolator278.SetKey([0,0.5,1]);
OrientationInterpolator278.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator278]);
OrientationInterpolator279 := TOrientationInterpolatorNode.Create;
OrientationInterpolator279.SetKey([0,0.5,1]);
OrientationInterpolator279.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator279]);
OrientationInterpolator280 := TOrientationInterpolatorNode.Create;
OrientationInterpolator280.SetKey([0,0.2,0.75,1]);
OrientationInterpolator280.SetKeyValue([Vector4(0,-1,0,0.5),Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,1,0,0.35)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator280]);
OrientationInterpolator281 := TOrientationInterpolatorNode.Create;
OrientationInterpolator281.SetKey([0,0.5,1]);
OrientationInterpolator281.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator281]);
OrientationInterpolator282 := TOrientationInterpolatorNode.Create;
OrientationInterpolator282.SetKey([0,0.5,1]);
OrientationInterpolator282.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator282]);
OrientationInterpolator283 := TOrientationInterpolatorNode.Create;
OrientationInterpolator283.SetKey([0,0.5,1]);
OrientationInterpolator283.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator283]);
OrientationInterpolator284 := TOrientationInterpolatorNode.Create;
OrientationInterpolator284.SetKey([0,0.5,1]);
OrientationInterpolator284.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator284]);
OrientationInterpolator285 := TOrientationInterpolatorNode.Create;
OrientationInterpolator285.SetKey([0,0.5,1]);
OrientationInterpolator285.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator285]);
OrientationInterpolator286 := TOrientationInterpolatorNode.Create;
OrientationInterpolator286.SetKey([0,0.5,1]);
OrientationInterpolator286.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator286]);
OrientationInterpolator287 := TOrientationInterpolatorNode.Create;
OrientationInterpolator287.SetKey([0,0.5,1]);
OrientationInterpolator287.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator287]);
OrientationInterpolator288 := TOrientationInterpolatorNode.Create;
OrientationInterpolator288.SetKey([0,0.5,1]);
OrientationInterpolator288.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator288]);
OrientationInterpolator289 := TOrientationInterpolatorNode.Create;
OrientationInterpolator289.SetKey([0,0.5,1]);
OrientationInterpolator289.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator289]);
OrientationInterpolator290 := TOrientationInterpolatorNode.Create;
OrientationInterpolator290.SetKey([0,0.4,1]);
OrientationInterpolator290.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(-1,0,1,1.75)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator290]);
OrientationInterpolator291 := TOrientationInterpolatorNode.Create;
OrientationInterpolator291.SetKey([0,0.5,1]);
OrientationInterpolator291.SetKeyValue([Vector4(-1,0,0,3),Vector4(-1,0,0,0.75),Vector4(-1,-1,0,0.5)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator291]);
OrientationInterpolator292 := TOrientationInterpolatorNode.Create;
OrientationInterpolator292.SetKey([0,0.4,0.8,1]);
OrientationInterpolator292.SetKeyValue([Vector4(0,0,1,0),Vector4(0,1,0,1.3),Vector4(0,-0.5,1,1.3),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator292]);
OrientationInterpolator293 := TOrientationInterpolatorNode.Create;
OrientationInterpolator293.SetKey([0,0.5,1]);
OrientationInterpolator293.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator293]);
OrientationInterpolator294 := TOrientationInterpolatorNode.Create;
OrientationInterpolator294.SetKey([0,0.5,1]);
OrientationInterpolator294.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator294]);
OrientationInterpolator295 := TOrientationInterpolatorNode.Create;
OrientationInterpolator295.SetKey([0,0.5,1]);
OrientationInterpolator295.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator295]);
OrientationInterpolator296 := TOrientationInterpolatorNode.Create;
OrientationInterpolator296.SetKey([0,0.5,1]);
OrientationInterpolator296.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator296]);
OrientationInterpolator297 := TOrientationInterpolatorNode.Create;
OrientationInterpolator297.SetKey([0,0.5,1]);
OrientationInterpolator297.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator297]);
OrientationInterpolator298 := TOrientationInterpolatorNode.Create;
OrientationInterpolator298.SetKey([0,0.5,1]);
OrientationInterpolator298.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator298]);
OrientationInterpolator299 := TOrientationInterpolatorNode.Create;
OrientationInterpolator299.SetKey([0,0.5,1]);
OrientationInterpolator299.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator299]);
OrientationInterpolator300 := TOrientationInterpolatorNode.Create;
OrientationInterpolator300.SetKey([0,0.5,1]);
OrientationInterpolator300.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator300]);
OrientationInterpolator301 := TOrientationInterpolatorNode.Create;
OrientationInterpolator301.SetKey([0,0.5,1]);
OrientationInterpolator301.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator301]);
OrientationInterpolator302 := TOrientationInterpolatorNode.Create;
OrientationInterpolator302.SetKey([0,0.5,1]);
OrientationInterpolator302.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator302]);
OrientationInterpolator303 := TOrientationInterpolatorNode.Create;
OrientationInterpolator303.SetKey([0,0.5,1]);
OrientationInterpolator303.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator303]);
OrientationInterpolator304 := TOrientationInterpolatorNode.Create;
OrientationInterpolator304.SetKey([0,0.5,1]);
OrientationInterpolator304.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator304]);
OrientationInterpolator305 := TOrientationInterpolatorNode.Create;
OrientationInterpolator305.SetKey([0,0.5,1]);
OrientationInterpolator305.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator305]);
OrientationInterpolator306 := TOrientationInterpolatorNode.Create;
OrientationInterpolator306.SetKey([0,0.5,1]);
OrientationInterpolator306.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator306]);
OrientationInterpolator307 := TOrientationInterpolatorNode.Create;
OrientationInterpolator307.SetKey([0,0.5,1]);
OrientationInterpolator307.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator307]);
OrientationInterpolator308 := TOrientationInterpolatorNode.Create;
OrientationInterpolator308.SetKey([0,0.5,1]);
OrientationInterpolator308.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator308]);
OrientationInterpolator309 := TOrientationInterpolatorNode.Create;
OrientationInterpolator309.SetKey([0,0.5,1]);
OrientationInterpolator309.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator309]);
OrientationInterpolator310 := TOrientationInterpolatorNode.Create;
OrientationInterpolator310.SetKey([0,0.5,1]);
OrientationInterpolator310.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator310]);
OrientationInterpolator311 := TOrientationInterpolatorNode.Create;
OrientationInterpolator311.SetKey([0,0.5,1]);
OrientationInterpolator311.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator311]);
OrientationInterpolator312 := TOrientationInterpolatorNode.Create;
OrientationInterpolator312.SetKey([0,0.5,1]);
OrientationInterpolator312.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator312]);
OrientationInterpolator313 := TOrientationInterpolatorNode.Create;
OrientationInterpolator313.SetKey([0,0.5,1]);
OrientationInterpolator313.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator313]);
OrientationInterpolator314 := TOrientationInterpolatorNode.Create;
OrientationInterpolator314.SetKey([0,0.5,1]);
OrientationInterpolator314.SetKeyValue([Vector4(0,0,-1,2.5),Vector4(0,0,-1,1.5),Vector4(0,0,-1,1.75)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator314]);
OrientationInterpolator315 := TOrientationInterpolatorNode.Create;
OrientationInterpolator315.SetKey([0,0.5,1]);
OrientationInterpolator315.SetKeyValue([Vector4(-1,0,0,3),Vector4(-1,0,0,0.75),Vector4(-1,-1,0,0.5)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator315]);
OrientationInterpolator316 := TOrientationInterpolatorNode.Create;
OrientationInterpolator316.SetKey([0,0.5,0.7,1]);
OrientationInterpolator316.SetKeyValue([Vector4(0,1,0,0.3),Vector4(0,0,1,0),Vector4(0,0,-1,1),Vector4(0,-1,0,0.3)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator316]);
OrientationInterpolator317 := TOrientationInterpolatorNode.Create;
OrientationInterpolator317.SetKey([0,0.5,1]);
OrientationInterpolator317.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator317]);
OrientationInterpolator318 := TOrientationInterpolatorNode.Create;
OrientationInterpolator318.SetKey([0,0.5,1]);
OrientationInterpolator318.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator318]);
OrientationInterpolator319 := TOrientationInterpolatorNode.Create;
OrientationInterpolator319.SetKey([0,0.5,1]);
OrientationInterpolator319.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator319]);
OrientationInterpolator320 := TOrientationInterpolatorNode.Create;
OrientationInterpolator320.SetKey([0,0.5,0.75,1]);
OrientationInterpolator320.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator320]);
OrientationInterpolator321 := TOrientationInterpolatorNode.Create;
OrientationInterpolator321.SetKey([0,0.5,0.75,1]);
OrientationInterpolator321.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator321]);
OrientationInterpolator322 := TOrientationInterpolatorNode.Create;
OrientationInterpolator322.SetKey([0,0.5,0.75,1]);
OrientationInterpolator322.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator322]);
OrientationInterpolator323 := TOrientationInterpolatorNode.Create;
OrientationInterpolator323.SetKey([0,0.5,0.75,1]);
OrientationInterpolator323.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator323]);
OrientationInterpolator324 := TOrientationInterpolatorNode.Create;
OrientationInterpolator324.SetKey([0,0.5,0.75,1]);
OrientationInterpolator324.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator324]);
OrientationInterpolator325 := TOrientationInterpolatorNode.Create;
OrientationInterpolator325.SetKey([0,0.5,0.75,1]);
OrientationInterpolator325.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator325]);
OrientationInterpolator326 := TOrientationInterpolatorNode.Create;
OrientationInterpolator326.SetKey([0,0.5,0.75,1]);
OrientationInterpolator326.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator326]);
OrientationInterpolator327 := TOrientationInterpolatorNode.Create;
OrientationInterpolator327.SetKey([0,0.5,0.75,1]);
OrientationInterpolator327.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator327]);
OrientationInterpolator328 := TOrientationInterpolatorNode.Create;
OrientationInterpolator328.SetKey([0,0.5,0.75,1]);
OrientationInterpolator328.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator328]);
OrientationInterpolator329 := TOrientationInterpolatorNode.Create;
OrientationInterpolator329.SetKey([0,0.5,0.75,1]);
OrientationInterpolator329.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator329]);
OrientationInterpolator330 := TOrientationInterpolatorNode.Create;
OrientationInterpolator330.SetKey([0,0.5,0.75,1]);
OrientationInterpolator330.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator330]);
OrientationInterpolator331 := TOrientationInterpolatorNode.Create;
OrientationInterpolator331.SetKey([0,0.5,0.75,1]);
OrientationInterpolator331.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator331]);
OrientationInterpolator332 := TOrientationInterpolatorNode.Create;
OrientationInterpolator332.SetKey([0,0.5,0.75,1]);
OrientationInterpolator332.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator332]);
OrientationInterpolator333 := TOrientationInterpolatorNode.Create;
OrientationInterpolator333.SetKey([0,0.5,0.75,1]);
OrientationInterpolator333.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator333]);
OrientationInterpolator334 := TOrientationInterpolatorNode.Create;
OrientationInterpolator334.SetKey([0,0.5,0.75,1]);
OrientationInterpolator334.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator334]);
OrientationInterpolator335 := TOrientationInterpolatorNode.Create;
OrientationInterpolator335.SetKey([0,0.5,0.75,1]);
OrientationInterpolator335.SetKeyValue([Vector4(0,0,1,0),Vector4(0,0,1,0),Vector4(0,0,1,1.5),Vector4(0,0,1,0)]);
{ .AddChildren }
Group239.AddChildren([OrientationInterpolator335]);
{ .AddChildren }
Group16.AddChildren([Group239]);
Group336 := TGroupNode.Create;
ScalarInterpolator337 := TScalarInterpolatorNode.Create;
ScalarInterpolator337.SetKey([0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1]);
ScalarInterpolator337.SetKeyValue([0,0,0,0,0.2,0.4,1,0,1,0.4,0]);
{ .AddChildren }
Group336.AddChildren([ScalarInterpolator337]);
{ .AddChildren }
Group16.AddChildren([Group336]);
Group338 := TGroupNode.Create;
ScalarInterpolator339 := TScalarInterpolatorNode.Create;
ScalarInterpolator339.SetKey([0,0.2,0.4,0.5,0.6,0.7,0.8,1]);
ScalarInterpolator339.SetKeyValue([0,0,0,0,0,1,2,0]);
{ .AddChildren }
Group338.AddChildren([ScalarInterpolator339]);
{ .AddChildren }
Group16.AddChildren([Group338]);
Group340 := TGroupNode.Create;
Transform341 := TTransformNode.Create;
Transform341.Translation := Vector3(1.750548,3.495979,8.727154);
Transform341.Rotation := Vector4(-0.700140042014005,0.140028008402801,-0.700140042014005,3);
Transform341.Scale := Vector3(0.23,0.23,0.23);
Shape342 := TShapeNode.Create;
Appearance343 := TAppearanceNode.Create;
Material344 := TMaterialNode.Create;
Material344.DiffuseColor := Vector3(0.3,0.3,1);
Material344.EmissiveColor := Vector3(0.3,0.3,0.33);
{ .SetMaterial }
Appearance343.Material := Material344;
ImageTexture345 := TImageTextureNode.Create;
ImageTexture345 := ImageTexture234;
{ .SetTexture }
Appearance343.Texture := ImageTexture345;
{ .SetAppearance }
Shape342.Appearance := Appearance343;
IndexedFaceSet346 := TIndexedFaceSetNode.Create;
IndexedFaceSet346.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
Coordinate347 := TCoordinateNode.Create;
Coordinate347.SetPoint([Vector3(0,0.4675,0),Vector3(0,0.4049,-0.2338),Vector3(-0.1169,0.4049,-0.2024),Vector3(-0.2024,0.4049,-0.1169),Vector3(-0.2338,0.4049,0),Vector3(-0.2024,0.4049,0.1169),Vector3(-0.1169,0.4049,0.2024),Vector3(0,0.4049,0.2338),Vector3(0.1169,0.4049,0.2024),Vector3(0.2024,0.4049,0.1169),Vector3(0.2338,0.4049,0),Vector3(0.2024,0.4049,-0.1169),Vector3(0.1169,0.4049,-0.2024),Vector3(0,0.2338,-0.4049),Vector3(-0.2024,0.2338,-0.3506),Vector3(-0.3506,0.2338,-0.2024),Vector3(-0.4049,0.2338,0),Vector3(-0.3506,0.2338,0.2024),Vector3(-0.2024,0.2338,0.3506),Vector3(0,0.2338,0.4049),Vector3(0.2024,0.2338,0.3506),Vector3(0.3506,0.2338,0.2024),Vector3(0.4049,0.2338,0),Vector3(0.3506,0.2338,-0.2024),Vector3(0.2024,0.2338,-0.3506),Vector3(0,0,-0.4675),Vector3(-0.2338,0,-0.4049),Vector3(-0.4049,0,-0.2338),Vector3(-0.4675,0,0),Vector3(-0.4049,0,0.2338),Vector3(-0.2338,0,0.4049),Vector3(0,0,0.4675),Vector3(0.2338,0,0.4049),Vector3(0.4049,0,0.2338),Vector3(0.4675,0,0),Vector3(0.4049,0,-0.2338),Vector3(0.2338,0,-0.4049),Vector3(0,-0.2338,-0.4049),Vector3(-0.2024,-0.2338,-0.3506),Vector3(-0.3506,-0.2338,-0.2024),Vector3(-0.4049,-0.2338,0),Vector3(-0.3506,-0.2338,0.2024),Vector3(-0.2024,-0.2338,0.3506),Vector3(0,-0.2338,0.4049),Vector3(0.2024,-0.2338,0.3506),Vector3(0.3506,-0.2338,0.2024),Vector3(0.4049,-0.2338,0),Vector3(0.3506,-0.2338,-0.2024),Vector3(0.2024,-0.2338,-0.3506),Vector3(0,-0.4049,-0.2338),Vector3(-0.1169,-0.4049,-0.2024),Vector3(-0.2024,-0.4049,-0.1169),Vector3(-0.2338,-0.4049,0),Vector3(-0.2024,-0.4049,0.1169),Vector3(-0.1169,-0.4049,0.2024),Vector3(0,-0.4049,0.2338),Vector3(0.1169,-0.4049,0.2024),Vector3(0.2024,-0.4049,0.1169),Vector3(0.2338,-0.4049,0),Vector3(0.2024,-0.4049,-0.1169),Vector3(0.1169,-0.4049,-0.2024),Vector3(0,-0.4675,0)]);
{ .SetCoord }
IndexedFaceSet346.Coord := Coordinate347;
{ .SetGeometry }
Shape342.Geometry := IndexedFaceSet346;
{ .AddChild }
Transform341.AddChildren([Shape342]);
Viewpoint348 := TViewpointNode.Create;
Viewpoint348.Description := 'Ball View';
{ .AddChildren }
Transform341.AddChildren([Viewpoint348]);
{ .AddChildren }
Group340.AddChildren([Transform341]);
PositionInterpolator349 := TPositionInterpolatorNode.Create;
PositionInterpolator349.SetKey([0,0.4,0.409,1]);
PositionInterpolator349.SetKeyValue([Vector3(-1,0.4,-1),Vector3(0,0.07,0),Vector3(0.05,0.06,0.05),Vector3(2,4,10)]);
{ .AddChildren }
Group340.AddChildren([PositionInterpolator349]);
OrientationInterpolator350 := TOrientationInterpolatorNode.Create;
OrientationInterpolator350.SetKey([0,0.4,0.41,0.71,1]);
OrientationInterpolator350.SetKeyValue([Vector4(1,0,1,0.25),Vector4(-1,0,-1,1.35),Vector4(-1,1,-1,3.35),Vector4(-1,0.2,-1,3),Vector4(-1,0.2,-1,3)]);
{ .AddChildren }
Group340.AddChildren([OrientationInterpolator350]);
{ .AddChildren }
Group16.AddChildren([Group340]);
Group351 := TGroupNode.Create;
Transform352 := TTransformNode.Create;
Transform352.Scale := Vector3(0.2,0.2,0.2);
Shape353 := TShapeNode.Create;
Shape353 := Shape36;
{ .AddChild }
Transform352.AddChildren([Shape353]);
{ .AddChildren }
Group351.AddChildren([Transform352]);
Transform354 := TTransformNode.Create;
Transform354.Scale := Vector3(1.175,1,1.175);
Shape355 := TShapeNode.Create;
Appearance356 := TAppearanceNode.Create;
Material357 := TMaterialNode.Create;
Material357.AmbientIntensity := 0.9;
Material357.DiffuseColor := Vector3(0.9,0,0.7);
Material357.EmissiveColor := Vector3(0.425,0.486,1);
{ .SetMaterial }
Appearance356.Material := Material357;
{ .SetAppearance }
Shape355.Appearance := Appearance356;
IndexedLineSet358 := TIndexedLineSetNode.Create;
IndexedLineSet358.SetCoordIndex([0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]);
Coordinate359 := TCoordinateNode.Create;
Coordinate359.SetPoint([Vector3(1,0,0),Vector3(0.995,0,-0.105),Vector3(0.979,0,-0.208),Vector3(0.951,0,-0.309),Vector3(0.914,0,-0.407),Vector3(0.866,0,-0.5),Vector3(0.809,0,-0.588),Vector3(0.743,0,-0.669),Vector3(0.669,0,-0.743),Vector3(0.588,0,-0.809),Vector3(0.5,0,-0.866),Vector3(0.407,0,-0.914),Vector3(0.309,0,-0.951),Vector3(0.208,0,-0.978),Vector3(0.105,0,-0.995),Vector3(0,0,-1),Vector3(-0.105,0,-0.994522),Vector3(-0.208,0,-0.978),Vector3(-0.309,0,-0.951),Vector3(-0.407,0,-0.914),Vector3(-0.5,0,-0.866),Vector3(-0.588,0,-0.809),Vector3(-0.669,0,-0.743),Vector3(-0.743,0,-0.669),Vector3(-0.809,0,-0.588),Vector3(-0.866,0,-0.5),Vector3(-0.914,0,-0.407),Vector3(-0.951,0,-0.309),Vector3(-0.978,0,-0.208),Vector3(-0.995,0,-0.105),Vector3(-1,0,0),Vector3(-0.995,0,0.105),Vector3(-0.978,0,0.208),Vector3(-0.951,0,0.309),Vector3(-0.914,0,0.407),Vector3(-0.866,0,0.5),Vector3(-0.809,0,0.588),Vector3(-0.743,0,0.669),Vector3(-0.669,0,0.743),Vector3(-0.588,0,0.809),Vector3(-0.5,0,0.866),Vector3(-0.407,0,0.914),Vector3(-0.309,0,0.951),Vector3(-0.208,0,0.978),Vector3(-0.105,0,0.995),Vector3(0,0,1),Vector3(0.105,0,0.995),Vector3(0.208,0,0.978),Vector3(0.309,0,0.951),Vector3(0.407,0,0.914),Vector3(0.5,0,0.866),Vector3(0.588,0,0.809),Vector3(0.669,0,0.743),Vector3(0.743,0,0.669),Vector3(0.809,0,0.588),Vector3(0.866,0,0.5),Vector3(0.914,0,0.407),Vector3(0.951,0,0.309),Vector3(0.978,0,0.208),Vector3(0.995,0,0.104),Vector3(1,0,0)]);
{ .SetCoord }
IndexedLineSet358.Coord := Coordinate359;
{ .SetGeometry }
Shape355.Geometry := IndexedLineSet358;
{ .AddChild }
Transform354.AddChildren([Shape355]);
{ .AddChildren }
Group351.AddChildren([Transform354]);
Transform360 := TTransformNode.Create;
Transform360.Scale := Vector3(0.5,1,0.5);
Shape361 := TShapeNode.Create;
Appearance362 := TAppearanceNode.Create;
Material363 := TMaterialNode.Create;
Material363.DiffuseColor := Vector3(0.9,0,0.7);
Material363.EmissiveColor := Vector3(0.424956,0.483976,1);
{ .SetMaterial }
Appearance362.Material := Material363;
{ .SetAppearance }
Shape361.Appearance := Appearance362;
IndexedLineSet364 := TIndexedLineSetNode.Create;
IndexedLineSet364 := IndexedLineSet358;
{ .SetGeometry }
Shape361.Geometry := IndexedLineSet364;
{ .AddChild }
Transform360.AddChildren([Shape361]);
{ .AddChildren }
Group351.AddChildren([Transform360]);
Transform365 := TTransformNode.Create;
Transform365.Scale := Vector3(0.25,1,0.25);
Shape366 := TShapeNode.Create;
Appearance367 := TAppearanceNode.Create;
Material368 := TMaterialNode.Create;
Material368.DiffuseColor := Vector3(0.9,0,0.7);
Material368.EmissiveColor := Vector3(0.424956,0.483976,1);
{ .SetMaterial }
Appearance367.Material := Material368;
{ .SetAppearance }
Shape366.Appearance := Appearance367;
IndexedLineSet369 := TIndexedLineSetNode.Create;
IndexedLineSet369 := IndexedLineSet358;
{ .SetGeometry }
Shape366.Geometry := IndexedLineSet369;
{ .AddChild }
Transform365.AddChildren([Shape366]);
{ .AddChildren }
Group351.AddChildren([Transform365]);
{ .AddChildren }
Group16.AddChildren([Group351]);
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator241.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, PositionInterpolator242.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator243.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator244.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator245.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator246.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator247.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator248.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator249.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator250.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator251.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator252.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator253.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator254.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator255.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator256.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator257.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator258.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator259.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator260.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator261.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator262.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator263.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator264.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator265.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator266.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator267.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator268.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator269.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator270.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator271.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator272.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator273.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator274.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator275.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator276.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator277.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator278.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator279.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator280.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator281.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator282.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator283.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator284.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator285.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator286.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator287.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator288.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator289.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator290.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator291.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator292.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator293.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator294.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator295.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator296.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator297.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator298.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator299.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator300.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator301.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator302.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator303.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator304.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator305.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator306.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator307.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator308.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator309.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator310.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator311.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator312.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator313.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator314.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator315.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator316.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator317.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator318.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator319.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator320.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator321.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator322.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator323.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator324.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator325.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator326.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator327.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator328.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator329.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator330.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator331.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator332.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator333.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator334.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator335.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator241.EventValue_changed, HAnimJoint31.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(PositionInterpolator242.EventValue_changed, HAnimJoint31.FdTranslation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator243.EventValue_changed, HAnimJoint40.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator244.EventValue_changed, HAnimJoint41.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator245.EventValue_changed, HAnimJoint42.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator246.EventValue_changed, HAnimJoint43.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator247.EventValue_changed, HAnimJoint44.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator248.EventValue_changed, HAnimJoint45.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator249.EventValue_changed, HAnimJoint46.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator250.EventValue_changed, HAnimJoint47.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator251.EventValue_changed, HAnimJoint48.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator252.EventValue_changed, HAnimJoint49.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator253.EventValue_changed, HAnimJoint50.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator254.EventValue_changed, HAnimJoint51.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator255.EventValue_changed, HAnimJoint52.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator256.EventValue_changed, HAnimJoint53.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator257.EventValue_changed, HAnimJoint54.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator258.EventValue_changed, HAnimJoint55.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator259.EventValue_changed, HAnimJoint56.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator260.EventValue_changed, HAnimJoint57.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator261.EventValue_changed, HAnimJoint58.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator262.EventValue_changed, HAnimJoint59.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator263.EventValue_changed, HAnimJoint60.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator264.EventValue_changed, HAnimJoint61.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator265.EventValue_changed, HAnimJoint62.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator266.EventValue_changed, HAnimJoint63.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator267.EventValue_changed, HAnimJoint64.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator268.EventValue_changed, HAnimJoint65.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator269.EventValue_changed, HAnimJoint66.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator270.EventValue_changed, HAnimJoint67.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator271.EventValue_changed, HAnimJoint68.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator272.EventValue_changed, HAnimJoint69.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator273.EventValue_changed, HAnimJoint70.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator274.EventValue_changed, HAnimJoint71.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator275.EventValue_changed, HAnimJoint72.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator276.EventValue_changed, HAnimJoint73.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator277.EventValue_changed, HAnimJoint74.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator278.EventValue_changed, HAnimJoint75.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator279.EventValue_changed, HAnimJoint76.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator280.EventValue_changed, HAnimJoint77.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator281.EventValue_changed, HAnimJoint79.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator282.EventValue_changed, HAnimJoint80.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator283.EventValue_changed, HAnimJoint81.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator284.EventValue_changed, HAnimJoint82.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator285.EventValue_changed, HAnimJoint83.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator286.EventValue_changed, HAnimJoint84.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator287.EventValue_changed, HAnimJoint85.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator288.EventValue_changed, HAnimJoint87.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator289.EventValue_changed, HAnimJoint86.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator290.EventValue_changed, HAnimJoint88.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator291.EventValue_changed, HAnimJoint89.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator292.EventValue_changed, HAnimJoint90.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator293.EventValue_changed, HAnimJoint91.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator294.EventValue_changed, HAnimJoint92.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator295.EventValue_changed, HAnimJoint93.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator296.EventValue_changed, HAnimJoint94.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator297.EventValue_changed, HAnimJoint95.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator298.EventValue_changed, HAnimJoint96.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator299.EventValue_changed, HAnimJoint97.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator300.EventValue_changed, HAnimJoint98.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator301.EventValue_changed, HAnimJoint99.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator302.EventValue_changed, HAnimJoint100.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator303.EventValue_changed, HAnimJoint101.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator304.EventValue_changed, HAnimJoint102.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator305.EventValue_changed, HAnimJoint103.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator306.EventValue_changed, HAnimJoint104.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator307.EventValue_changed, HAnimJoint105.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator308.EventValue_changed, HAnimJoint106.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator309.EventValue_changed, HAnimJoint107.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator310.EventValue_changed, HAnimJoint108.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator311.EventValue_changed, HAnimJoint109.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator312.EventValue_changed, HAnimJoint110.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator313.EventValue_changed, HAnimJoint111.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator314.EventValue_changed, HAnimJoint112.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator315.EventValue_changed, HAnimJoint113.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator316.EventValue_changed, HAnimJoint114.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator317.EventValue_changed, HAnimJoint115.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator318.EventValue_changed, HAnimJoint116.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator319.EventValue_changed, HAnimJoint117.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator320.EventValue_changed, HAnimJoint118.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator321.EventValue_changed, HAnimJoint119.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator322.EventValue_changed, HAnimJoint120.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator323.EventValue_changed, HAnimJoint121.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator324.EventValue_changed, HAnimJoint122.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator325.EventValue_changed, HAnimJoint123.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator326.EventValue_changed, HAnimJoint124.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator327.EventValue_changed, HAnimJoint125.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator328.EventValue_changed, HAnimJoint126.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator329.EventValue_changed, HAnimJoint127.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator330.EventValue_changed, HAnimJoint128.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator331.EventValue_changed, HAnimJoint129.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator332.EventValue_changed, HAnimJoint130.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator333.EventValue_changed, HAnimJoint131.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator334.EventValue_changed, HAnimJoint132.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator335.EventValue_changed, HAnimJoint133.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, ScalarInterpolator337.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(ScalarInterpolator337.EventValue_changed, HAnimDisplacer78.EventSet_weight);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, ScalarInterpolator339.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(ScalarInterpolator339.EventValue_changed, TextureTransform235.FdRotation);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, PositionInterpolator349.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(PositionInterpolator349.EventValue_changed, Transform341.FdTranslation);
{ .AddX3DRoute }
Group16.AddRoute(TimeSensor240.EventFraction_changed, OrientationInterpolator350.EventSet_fraction);
{ .AddX3DRoute }
Group16.AddRoute(OrientationInterpolator350.EventValue_changed, Transform341.FdRotation);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group16]);
Result := X3D0;
end;
