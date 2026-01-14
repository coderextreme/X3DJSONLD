function UniversityWisconsionExample1: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group14: TGroupNode;
WorldInfo15: TWorldInfoNode;
NavigationInfo16: TNavigationInfoNode;
Group17: TGroupNode;
MetadataSet18: TMetadataSetNode;
MetadataString19: TMetadataStringNode;
MetadataString20: TMetadataStringNode;
MetadataString21: TMetadataStringNode;
MetadataString22: TMetadataStringNode;
MetadataString23: TMetadataStringNode;
MetadataString24: TMetadataStringNode;
MetadataString25: TMetadataStringNode;
MetadataString26: TMetadataStringNode;
MetadataString27: TMetadataStringNode;
MetadataString28: TMetadataStringNode;
MetadataString29: TMetadataStringNode;
MetadataString30: TMetadataStringNode;
MetadataString31: TMetadataStringNode;
MetadataString32: TMetadataStringNode;
MetadataString33: TMetadataStringNode;
MetadataString34: TMetadataStringNode;
MetadataString35: TMetadataStringNode;
MetadataString36: TMetadataStringNode;
MetadataString37: TMetadataStringNode;
MetadataString38: TMetadataStringNode;
MetadataString39: TMetadataStringNode;
MetadataString40: TMetadataStringNode;
MetadataString41: TMetadataStringNode;
Transform42: TTransformNode;
Viewpoint43: TViewpointNode;
Viewpoint44: TViewpointNode;
Viewpoint45: TViewpointNode;
HAnimHumanoid46: THAnimHumanoidNode;
MetadataSet47: TMetadataSetNode;
MetadataString48: TMetadataStringNode;
MetadataString49: TMetadataStringNode;
MetadataString50: TMetadataStringNode;
MetadataString51: TMetadataStringNode;
MetadataString52: TMetadataStringNode;
HAnimJoint53: THAnimJointNode;
HAnimSegment54: THAnimSegmentNode;
Switch55: TSwitchNode;
Group56: TGroupNode;
TouchSensor57: TTouchSensorNode;
Shape58: TShapeNode;
Appearance59: TAppearanceNode;
Material60: TMaterialNode;
Sphere61: TSphereNode;
Shape62: TShapeNode;
Appearance63: TAppearanceNode;
Material64: TMaterialNode;
Sphere65: TSphereNode;
Shape66: TShapeNode;
LineSet67: TLineSetNode;
ColorRGBA68: TColorRGBANode;
Coordinate69: TCoordinateNode;
Shape70: TShapeNode;
Appearance71: TAppearanceNode;
Material72: TMaterialNode;
IndexedFaceSet73: TIndexedFaceSetNode;
Coordinate74: TCoordinateNode;
Shape75: TShapeNode;
LineSet76: TLineSetNode;
ColorRGBA77: TColorRGBANode;
Coordinate78: TCoordinateNode;
Shape79: TShapeNode;
LineSet80: TLineSetNode;
ColorRGBA81: TColorRGBANode;
Coordinate82: TCoordinateNode;
Shape83: TShapeNode;
LineSet84: TLineSetNode;
ColorRGBA85: TColorRGBANode;
Coordinate86: TCoordinateNode;
Shape87: TShapeNode;
LineSet88: TLineSetNode;
ColorRGBA89: TColorRGBANode;
Coordinate90: TCoordinateNode;
HAnimJoint91: THAnimJointNode;
HAnimSegment92: THAnimSegmentNode;
Transform93: TTransformNode;
TouchSensor94: TTouchSensorNode;
Shape95: TShapeNode;
Shape96: TShapeNode;
LineSet97: TLineSetNode;
ColorRGBA98: TColorRGBANode;
Coordinate99: TCoordinateNode;
Shape100: TShapeNode;
LineSet101: TLineSetNode;
ColorRGBA102: TColorRGBANode;
Coordinate103: TCoordinateNode;
Shape104: TShapeNode;
LineSet105: TLineSetNode;
ColorRGBA106: TColorRGBANode;
Coordinate107: TCoordinateNode;
HAnimJoint108: THAnimJointNode;
HAnimSegment109: THAnimSegmentNode;
Transform110: TTransformNode;
TouchSensor111: TTouchSensorNode;
Shape112: TShapeNode;
Shape113: TShapeNode;
LineSet114: TLineSetNode;
ColorRGBA115: TColorRGBANode;
Coordinate116: TCoordinateNode;
HAnimJoint117: THAnimJointNode;
HAnimSegment118: THAnimSegmentNode;
Transform119: TTransformNode;
HAnimSite120: THAnimSiteNode;
TouchSensor121: TTouchSensorNode;
Shape122: TShapeNode;
Shape123: TShapeNode;
LineSet124: TLineSetNode;
ColorRGBA125: TColorRGBANode;
Coordinate126: TCoordinateNode;
TouchSensor127: TTouchSensorNode;
Shape128: TShapeNode;
HAnimJoint129: THAnimJointNode;
HAnimSegment130: THAnimSegmentNode;
Transform131: TTransformNode;
TouchSensor132: TTouchSensorNode;
Shape133: TShapeNode;
Shape134: TShapeNode;
LineSet135: TLineSetNode;
ColorRGBA136: TColorRGBANode;
Coordinate137: TCoordinateNode;
HAnimJoint138: THAnimJointNode;
HAnimSegment139: THAnimSegmentNode;
Transform140: TTransformNode;
TouchSensor141: TTouchSensorNode;
Shape142: TShapeNode;
Shape143: TShapeNode;
LineSet144: TLineSetNode;
ColorRGBA145: TColorRGBANode;
Coordinate146: TCoordinateNode;
HAnimJoint147: THAnimJointNode;
HAnimSegment148: THAnimSegmentNode;
Transform149: TTransformNode;
TouchSensor150: TTouchSensorNode;
Shape151: TShapeNode;
Shape152: TShapeNode;
LineSet153: TLineSetNode;
ColorRGBA154: TColorRGBANode;
Coordinate155: TCoordinateNode;
HAnimJoint156: THAnimJointNode;
HAnimSegment157: THAnimSegmentNode;
Transform158: TTransformNode;
HAnimSite159: THAnimSiteNode;
TouchSensor160: TTouchSensorNode;
Shape161: TShapeNode;
Shape162: TShapeNode;
LineSet163: TLineSetNode;
ColorRGBA164: TColorRGBANode;
Coordinate165: TCoordinateNode;
TouchSensor166: TTouchSensorNode;
Shape167: TShapeNode;
HAnimJoint168: THAnimJointNode;
HAnimSegment169: THAnimSegmentNode;
Transform170: TTransformNode;
TouchSensor171: TTouchSensorNode;
Shape172: TShapeNode;
Shape173: TShapeNode;
LineSet174: TLineSetNode;
ColorRGBA175: TColorRGBANode;
Coordinate176: TCoordinateNode;
HAnimJoint177: THAnimJointNode;
HAnimSegment178: THAnimSegmentNode;
Transform179: TTransformNode;
TouchSensor180: TTouchSensorNode;
Shape181: TShapeNode;
Shape182: TShapeNode;
LineSet183: TLineSetNode;
ColorRGBA184: TColorRGBANode;
Coordinate185: TCoordinateNode;
HAnimJoint186: THAnimJointNode;
HAnimSegment187: THAnimSegmentNode;
Transform188: TTransformNode;
TouchSensor189: TTouchSensorNode;
Shape190: TShapeNode;
Shape191: TShapeNode;
LineSet192: TLineSetNode;
ColorRGBA193: TColorRGBANode;
Coordinate194: TCoordinateNode;
HAnimJoint195: THAnimJointNode;
HAnimSegment196: THAnimSegmentNode;
Transform197: TTransformNode;
HAnimSite198: THAnimSiteNode;
TouchSensor199: TTouchSensorNode;
Shape200: TShapeNode;
Shape201: TShapeNode;
LineSet202: TLineSetNode;
ColorRGBA203: TColorRGBANode;
Coordinate204: TCoordinateNode;
TouchSensor205: TTouchSensorNode;
Shape206: TShapeNode;
HAnimJoint207: THAnimJointNode;
HAnimSegment208: THAnimSegmentNode;
Transform209: TTransformNode;
TouchSensor210: TTouchSensorNode;
Shape211: TShapeNode;
Shape212: TShapeNode;
LineSet213: TLineSetNode;
ColorRGBA214: TColorRGBANode;
Coordinate215: TCoordinateNode;
HAnimJoint216: THAnimJointNode;
HAnimSegment217: THAnimSegmentNode;
Transform218: TTransformNode;
TouchSensor219: TTouchSensorNode;
Shape220: TShapeNode;
Shape221: TShapeNode;
LineSet222: TLineSetNode;
ColorRGBA223: TColorRGBANode;
Coordinate224: TCoordinateNode;
HAnimJoint225: THAnimJointNode;
HAnimSegment226: THAnimSegmentNode;
Transform227: TTransformNode;
HAnimSite228: THAnimSiteNode;
TouchSensor229: TTouchSensorNode;
Shape230: TShapeNode;
Shape231: TShapeNode;
LineSet232: TLineSetNode;
ColorRGBA233: TColorRGBANode;
Coordinate234: TCoordinateNode;
TouchSensor235: TTouchSensorNode;
Shape236: TShapeNode;
HAnimJoint237: THAnimJointNode;
HAnimSegment238: THAnimSegmentNode;
Transform239: TTransformNode;
TouchSensor240: TTouchSensorNode;
Shape241: TShapeNode;
Shape242: TShapeNode;
LineSet243: TLineSetNode;
ColorRGBA244: TColorRGBANode;
Coordinate245: TCoordinateNode;
HAnimJoint246: THAnimJointNode;
HAnimSegment247: THAnimSegmentNode;
Transform248: TTransformNode;
TouchSensor249: TTouchSensorNode;
Shape250: TShapeNode;
Shape251: TShapeNode;
LineSet252: TLineSetNode;
ColorRGBA253: TColorRGBANode;
Coordinate254: TCoordinateNode;
HAnimJoint255: THAnimJointNode;
HAnimSegment256: THAnimSegmentNode;
Transform257: TTransformNode;
HAnimSite258: THAnimSiteNode;
TouchSensor259: TTouchSensorNode;
Shape260: TShapeNode;
Shape261: TShapeNode;
LineSet262: TLineSetNode;
ColorRGBA263: TColorRGBANode;
Coordinate264: TCoordinateNode;
TouchSensor265: TTouchSensorNode;
Shape266: TShapeNode;
HAnimJoint267: THAnimJointNode;
HAnimJoint268: THAnimJointNode;
HAnimJoint269: THAnimJointNode;
HAnimJoint270: THAnimJointNode;
HAnimJoint271: THAnimJointNode;
HAnimJoint272: THAnimJointNode;
HAnimJoint273: THAnimJointNode;
HAnimJoint274: THAnimJointNode;
HAnimJoint275: THAnimJointNode;
HAnimJoint276: THAnimJointNode;
HAnimJoint277: THAnimJointNode;
HAnimJoint278: THAnimJointNode;
HAnimJoint279: THAnimJointNode;
HAnimJoint280: THAnimJointNode;
HAnimJoint281: THAnimJointNode;
HAnimJoint282: THAnimJointNode;
HAnimJoint283: THAnimJointNode;
HAnimJoint284: THAnimJointNode;
HAnimSegment285: THAnimSegmentNode;
HAnimSegment286: THAnimSegmentNode;
HAnimSegment287: THAnimSegmentNode;
HAnimSegment288: THAnimSegmentNode;
HAnimSegment289: THAnimSegmentNode;
HAnimSegment290: THAnimSegmentNode;
HAnimSegment291: THAnimSegmentNode;
HAnimSegment292: THAnimSegmentNode;
HAnimSegment293: THAnimSegmentNode;
HAnimSegment294: THAnimSegmentNode;
HAnimSegment295: THAnimSegmentNode;
HAnimSegment296: THAnimSegmentNode;
HAnimSegment297: THAnimSegmentNode;
HAnimSegment298: THAnimSegmentNode;
HAnimSegment299: THAnimSegmentNode;
HAnimSegment300: THAnimSegmentNode;
HAnimSegment301: THAnimSegmentNode;
HAnimSegment302: THAnimSegmentNode;
HAnimSite303: THAnimSiteNode;
Viewpoint304: TViewpointNode;
HAnimSite305: THAnimSiteNode;
HAnimSite306: THAnimSiteNode;
HAnimSite307: THAnimSiteNode;
HAnimSite308: THAnimSiteNode;
HAnimSite309: THAnimSiteNode;
HAnimSite310: THAnimSiteNode;
Group311: TGroupNode;
TimeSensor312: TTimeSensorNode;
TimeSensor313: TTimeSensorNode;
ScalarInterpolator314: TScalarInterpolatorNode;
PositionInterpolator315: TPositionInterpolatorNode;
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
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 3;
X3D0.Meta['title'] := 'BvhUniversityWisconsionExample1.x3d';
X3D0.Meta['description'] := 'BVH file conversion: *enter description here, short-sentence summaries preferred*';
X3D0.Meta['creator'] := '*enter name of original author here*';
X3D0.Meta['created'] := '*enter date of initial version here*';
X3D0.Meta['translated'] := '2 September 2023';
X3D0.Meta['modified'] := 'Mon, 15 Sep 2025 05:21:02 GMT';
X3D0.Meta['reference'] := 'BvhUniversityWIsconsionExample1.bvh';
X3D0.Meta['reference'] := 'https://TODO/UniversityWIsconsionExample1.bvh';
X3D0.Meta['reference'] := 'https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#MOCAP';
X3D0.Meta['generator'] := 'Java BVH to X3D Converter, org.web3d.x3d.hanim.bvh package';
X3D0.Meta['generator'] := 'X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit';
Group14 := TGroupNode.Create;
WorldInfo15 := TWorldInfoNode.Create;
WorldInfo15.Title := 'BvhUniversityWisconsionExample1.x3d';
{ .AddChildren }
Group14.AddChildren([WorldInfo15]);
NavigationInfo16 := TNavigationInfoNode.Create;
{ .AddChildren }
Group14.AddChildren([NavigationInfo16]);
Group17 := TGroupNode.Create;
MetadataSet18 := TMetadataSetNode.Create;
MetadataSet18.NameField := 'BvhToHAnimNameConversionTable';
MetadataString19 := TMetadataStringNode.Create;
MetadataString19.NameField := 'ROOT_Hips';
MetadataString19.Reference := 'ROOT';
MetadataString19.SetValue(['humanoid_root','sacrum']);
{ .SetValue }
MetadataSet18.Value := MetadataString19;
MetadataString20 := TMetadataStringNode.Create;
MetadataString20.NameField := 'Chest';
MetadataString20.Reference := 'JOINT';
MetadataString20.SetValue(['vl5','l5']);
{ .SetValue }
MetadataSet18.Value := MetadataString20;
MetadataString21 := TMetadataStringNode.Create;
MetadataString21.NameField := 'Neck';
MetadataString21.Reference := 'JOINT';
MetadataString21.SetValue(['Neck','vl5_to_Neck']);
{ .SetValue }
MetadataSet18.Value := MetadataString21;
MetadataString22 := TMetadataStringNode.Create;
MetadataString22.NameField := 'Head';
MetadataString22.Reference := 'JOINT';
MetadataString22.SetValue(['skullbase','skull']);
{ .SetValue }
MetadataSet18.Value := MetadataString22;
MetadataString23 := TMetadataStringNode.Create;
MetadataString23.NameField := 'HeadSite';
MetadataString23.Reference := 'Site';
MetadataString23.SetValue(['skullbase_tip']);
{ .SetValue }
MetadataSet18.Value := MetadataString23;
MetadataString24 := TMetadataStringNode.Create;
MetadataString24.NameField := 'LeftCollar';
MetadataString24.Reference := 'JOINT';
MetadataString24.SetValue(['LeftCollar','vl5_to_LeftCollar']);
{ .SetValue }
MetadataSet18.Value := MetadataString24;
MetadataString25 := TMetadataStringNode.Create;
MetadataString25.NameField := 'LeftUpArm';
MetadataString25.Reference := 'JOINT';
MetadataString25.SetValue(['LeftUpArm','LeftCollar_to_LeftUpArm']);
{ .SetValue }
MetadataSet18.Value := MetadataString25;
MetadataString26 := TMetadataStringNode.Create;
MetadataString26.NameField := 'LeftLowArm';
MetadataString26.Reference := 'JOINT';
MetadataString26.SetValue(['LeftLowArm','LeftUpArm_to_LeftLowArm']);
{ .SetValue }
MetadataSet18.Value := MetadataString26;
MetadataString27 := TMetadataStringNode.Create;
MetadataString27.NameField := 'LeftHand';
MetadataString27.Reference := 'JOINT';
MetadataString27.SetValue(['LeftHand','LeftLowArm_to_LeftHand']);
{ .SetValue }
MetadataSet18.Value := MetadataString27;
MetadataString28 := TMetadataStringNode.Create;
MetadataString28.NameField := 'LeftHandSite';
MetadataString28.Reference := 'Site';
MetadataString28.SetValue(['LeftHand_tip']);
{ .SetValue }
MetadataSet18.Value := MetadataString28;
MetadataString29 := TMetadataStringNode.Create;
MetadataString29.NameField := 'RightCollar';
MetadataString29.Reference := 'JOINT';
MetadataString29.SetValue(['RightCollar','vl5_to_RightCollar']);
{ .SetValue }
MetadataSet18.Value := MetadataString29;
MetadataString30 := TMetadataStringNode.Create;
MetadataString30.NameField := 'RightUpArm';
MetadataString30.Reference := 'JOINT';
MetadataString30.SetValue(['RightUpArm','RightCollar_to_RightUpArm']);
{ .SetValue }
MetadataSet18.Value := MetadataString30;
MetadataString31 := TMetadataStringNode.Create;
MetadataString31.NameField := 'RightLowArm';
MetadataString31.Reference := 'JOINT';
MetadataString31.SetValue(['RightLowArm','RightUpArm_to_RightLowArm']);
{ .SetValue }
MetadataSet18.Value := MetadataString31;
MetadataString32 := TMetadataStringNode.Create;
MetadataString32.NameField := 'RightHand';
MetadataString32.Reference := 'JOINT';
MetadataString32.SetValue(['RightHand','RightLowArm_to_RightHand']);
{ .SetValue }
MetadataSet18.Value := MetadataString32;
MetadataString33 := TMetadataStringNode.Create;
MetadataString33.NameField := 'RightHandSite';
MetadataString33.Reference := 'Site';
MetadataString33.SetValue(['RightHand_tip']);
{ .SetValue }
MetadataSet18.Value := MetadataString33;
MetadataString34 := TMetadataStringNode.Create;
MetadataString34.NameField := 'LeftUpLeg';
MetadataString34.Reference := 'JOINT';
MetadataString34.SetValue(['LeftUpLeg','humanoid_root_to_LeftUpLeg']);
{ .SetValue }
MetadataSet18.Value := MetadataString34;
MetadataString35 := TMetadataStringNode.Create;
MetadataString35.NameField := 'LeftLowLeg';
MetadataString35.Reference := 'JOINT';
MetadataString35.SetValue(['LeftLowLeg','LeftUpLeg_to_LeftLowLeg']);
{ .SetValue }
MetadataSet18.Value := MetadataString35;
MetadataString36 := TMetadataStringNode.Create;
MetadataString36.NameField := 'LeftFoot';
MetadataString36.Reference := 'JOINT';
MetadataString36.SetValue(['LeftFoot','LeftLowLeg_to_LeftFoot']);
{ .SetValue }
MetadataSet18.Value := MetadataString36;
MetadataString37 := TMetadataStringNode.Create;
MetadataString37.NameField := 'LeftFootSite';
MetadataString37.Reference := 'Site';
MetadataString37.SetValue(['LeftFoot_tip']);
{ .SetValue }
MetadataSet18.Value := MetadataString37;
MetadataString38 := TMetadataStringNode.Create;
MetadataString38.NameField := 'RightUpLeg';
MetadataString38.Reference := 'JOINT';
MetadataString38.SetValue(['RightUpLeg','humanoid_root_to_RightUpLeg']);
{ .SetValue }
MetadataSet18.Value := MetadataString38;
MetadataString39 := TMetadataStringNode.Create;
MetadataString39.NameField := 'RightLowLeg';
MetadataString39.Reference := 'JOINT';
MetadataString39.SetValue(['RightLowLeg','RightUpLeg_to_RightLowLeg']);
{ .SetValue }
MetadataSet18.Value := MetadataString39;
MetadataString40 := TMetadataStringNode.Create;
MetadataString40.NameField := 'RightFoot';
MetadataString40.Reference := 'JOINT';
MetadataString40.SetValue(['RightFoot','RightLowLeg_to_RightFoot']);
{ .SetValue }
MetadataSet18.Value := MetadataString40;
MetadataString41 := TMetadataStringNode.Create;
MetadataString41.NameField := 'RightFootSite';
MetadataString41.Reference := 'Site';
MetadataString41.SetValue(['RightFoot_tip']);
{ .SetValue }
MetadataSet18.Value := MetadataString41;
{ .SetMetadata }
Group17.Metadata := MetadataSet18;
{ .AddChildren }
Group14.AddChildren([Group17]);
Transform42 := TTransformNode.Create;
Transform42.Translation := Vector3(0,1.244,0);
Viewpoint43 := TViewpointNode.Create;
Viewpoint43.Description := 'BvhUniversityWisconsionExample1 model BVH to X3D conversion, from 8m';
Viewpoint43.Position := Vector3(0,0,8);
{ .AddChildren }
Transform42.AddChildren([Viewpoint43]);
Viewpoint44 := TViewpointNode.Create;
Viewpoint44.Description := 'BvhUniversityWisconsionExample1 initial motion position';
Viewpoint44.Position := Vector3(0.803,3.501,16.836);
{ .AddChildren }
Transform42.AddChildren([Viewpoint44]);
Viewpoint45 := TViewpointNode.Create;
Viewpoint45.Description := 'BvhUniversityWisconsionExample1 final motion position';
Viewpoint45.Position := Vector3(0.781,3.51,16.647);
{ .AddChildren }
Transform42.AddChildren([Viewpoint45]);
{ .AddChildren }
Group14.AddChildren([Transform42]);
HAnimHumanoid46 := THAnimHumanoidNode.Create;
HAnimHumanoid46.NameField := 'ROOT_Hips';
MetadataSet47 := TMetadataSetNode.Create;
MetadataSet47.NameField := 'HAnimHumanoid.info';
MetadataSet47.Reference := 'https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid';
MetadataString48 := TMetadataStringNode.Create;
MetadataString48.NameField := 'authorEmail';
MetadataString48.SetValue(['*TODO*']);
{ .SetValue }
MetadataSet47.Value := MetadataString48;
MetadataString49 := TMetadataStringNode.Create;
MetadataString49.NameField := 'authorName';
MetadataString49.SetValue(['*TODO*']);
{ .SetValue }
MetadataSet47.Value := MetadataString49;
MetadataString50 := TMetadataStringNode.Create;
MetadataString50.NameField := 'copyright';
MetadataString50.SetValue(['Copyright (c) 2023']);
{ .SetValue }
MetadataSet47.Value := MetadataString50;
MetadataString51 := TMetadataStringNode.Create;
MetadataString51.NameField := 'humanoidVersion';
MetadataString51.SetValue(['*TODO*']);
{ .SetValue }
MetadataSet47.Value := MetadataString51;
MetadataString52 := TMetadataStringNode.Create;
MetadataString52.NameField := 'usageDescription';
MetadataString52.SetValue(['*TODO*']);
{ .SetValue }
MetadataSet47.Value := MetadataString52;
{ .SetMetadata }
HAnimHumanoid46.Metadata := MetadataSet47;
HAnimJoint53 := THAnimJointNode.Create;
HAnimJoint53.NameField := 'humanoid_root';
HAnimJoint53.Translation := Vector3(0.7849403,3.508388,8.680851);
HAnimJoint53.Rotation := Vector4(-0.0184530858032817,-0.992698784706892,-0.119199859336308,2.9151883640198);
HAnimJoint53.Scale := Vector3(0.1,0.1,0.1);
HAnimSegment54 := THAnimSegmentNode.Create;
HAnimSegment54.NameField := 'sacrum';
Switch55 := TSwitchNode.Create;
Switch55.WhichChoice := 0;
Group56 := TGroupNode.Create;
TouchSensor57 := TTouchSensorNode.Create;
TouchSensor57.Description := 'HAnimHumanoid ROOT ROOT_Hips, HAnimSegment sacrum';
{ .AddChildren }
Group56.AddChildren([TouchSensor57]);
Shape58 := TShapeNode.Create;
Appearance59 := TAppearanceNode.Create;
Material60 := TMaterialNode.Create;
Material60.DiffuseColor := Vector3(0.8,0,0);
Material60.Transparency := 0.3;
{ .SetMaterial }
Appearance59.Material := Material60;
{ .SetAppearance }
Shape58.Appearance := Appearance59;
Sphere61 := TSphereNode.Create;
Sphere61.Radius := 0.254;
{ .SetGeometry }
Shape58.Geometry := Sphere61;
{ .AddChildren }
Group56.AddChildren([Shape58]);
{ .AddChildren }
Switch55.AddChildren([Group56]);
Shape62 := TShapeNode.Create;
Appearance63 := TAppearanceNode.Create;
Material64 := TMaterialNode.Create;
Material64.DiffuseColor := Vector3(0,0,0.8);
Material64.Transparency := 0.3;
{ .SetMaterial }
Appearance63.Material := Material64;
{ .SetAppearance }
Shape62.Appearance := Appearance63;
Sphere65 := TSphereNode.Create;
Sphere65 := Sphere61;
{ .SetGeometry }
Shape62.Geometry := Sphere65;
{ .AddChildren }
Switch55.AddChildren([Shape62]);
Shape66 := TShapeNode.Create;
LineSet67 := TLineSetNode.Create;
LineSet67.SetVertexCount([2]);
ColorRGBA68 := TColorRGBANode.Create;
ColorRGBA68.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ .SetColor }
LineSet67.Color := ColorRGBA68;
Coordinate69 := TCoordinateNode.Create;
Coordinate69.SetPoint([Vector3(0,0,0),Vector3(0,0,0)]);
{ .SetCoord }
LineSet67.Coord := Coordinate69;
{ .SetGeometry }
Shape66.Geometry := LineSet67;
{ .AddChildren }
Switch55.AddChildren([Shape66]);
Shape70 := TShapeNode.Create;
Appearance71 := TAppearanceNode.Create;
Material72 := TMaterialNode.Create;
Material72.DiffuseColor := Vector3(1,0.5,0);
Material72.Transparency := 0.3;
{ .SetMaterial }
Appearance71.Material := Material72;
{ .SetAppearance }
Shape70.Appearance := Appearance71;
IndexedFaceSet73 := TIndexedFaceSetNode.Create;
IndexedFaceSet73.Solid := False;
IndexedFaceSet73.CreaseAngle := 0.5;
IndexedFaceSet73.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
Coordinate74 := TCoordinateNode.Create;
Coordinate74.SetPoint([Vector3(0,0.254,0),Vector3(-0.254,0,0),Vector3(0,0,0.254),Vector3(0.254,0,0),Vector3(0,0,-0.254),Vector3(0,-0.254,0)]);
{ .SetCoord }
IndexedFaceSet73.Coord := Coordinate74;
{ .SetGeometry }
Shape70.Geometry := IndexedFaceSet73;
{ .AddChildren }
Switch55.AddChildren([Shape70]);
Shape75 := TShapeNode.Create;
LineSet76 := TLineSetNode.Create;
LineSet76.SetVertexCount([2]);
ColorRGBA77 := TColorRGBANode.Create;
ColorRGBA77.SetColor([Vector4(1,0.5,0,1),Vector4(1,0.5,0,0.1)]);
{ .SetColor }
LineSet76.Color := ColorRGBA77;
Coordinate78 := TCoordinateNode.Create;
Coordinate78.SetPoint([Vector3(0,0,0),Vector3(0,0,0)]);
{ .SetCoord }
LineSet76.Coord := Coordinate78;
{ .SetGeometry }
Shape75.Geometry := LineSet76;
{ .AddChildren }
Switch55.AddChildren([Shape75]);
{ .AddChildren }
HAnimSegment54.AddChildren([Switch55]);
Shape79 := TShapeNode.Create;
LineSet80 := TLineSetNode.Create;
LineSet80.SetVertexCount([2]);
ColorRGBA81 := TColorRGBANode.Create;
ColorRGBA81 := ColorRGBA68;
{ .SetColor }
LineSet80.Color := ColorRGBA81;
Coordinate82 := TCoordinateNode.Create;
Coordinate82.SetPoint([Vector3(0,0,0),Vector3(0,5.21,0)]);
{ .SetCoord }
LineSet80.Coord := Coordinate82;
{ .SetGeometry }
Shape79.Geometry := LineSet80;
{ .AddChildren }
HAnimSegment54.AddChildren([Shape79]);
Shape83 := TShapeNode.Create;
LineSet84 := TLineSetNode.Create;
LineSet84.SetVertexCount([2]);
ColorRGBA85 := TColorRGBANode.Create;
ColorRGBA85 := ColorRGBA68;
{ .SetColor }
LineSet84.Color := ColorRGBA85;
Coordinate86 := TCoordinateNode.Create;
Coordinate86.SetPoint([Vector3(0,0,0),Vector3(3.91,0,0)]);
{ .SetCoord }
LineSet84.Coord := Coordinate86;
{ .SetGeometry }
Shape83.Geometry := LineSet84;
{ .AddChildren }
HAnimSegment54.AddChildren([Shape83]);
Shape87 := TShapeNode.Create;
LineSet88 := TLineSetNode.Create;
LineSet88.SetVertexCount([2]);
ColorRGBA89 := TColorRGBANode.Create;
ColorRGBA89 := ColorRGBA68;
{ .SetColor }
LineSet88.Color := ColorRGBA89;
Coordinate90 := TCoordinateNode.Create;
Coordinate90.SetPoint([Vector3(0,0,0),Vector3(-3.91,0,0)]);
{ .SetCoord }
LineSet88.Coord := Coordinate90;
{ .SetGeometry }
Shape87.Geometry := LineSet88;
{ .AddChildren }
HAnimSegment54.AddChildren([Shape87]);
{ .AddChildren }
HAnimJoint53.AddChildren([HAnimSegment54]);
HAnimJoint91 := THAnimJointNode.Create;
HAnimJoint91.NameField := 'vl5';
HAnimJoint91.Rotation := Vector4(0.929559139694865,-0.360437334785587,0.0774902155269029,0.820797255601436);
HAnimJoint91.Center := Vector3(0,5.21,0);
HAnimSegment92 := THAnimSegmentNode.Create;
HAnimSegment92.NameField := 'l5';
Transform93 := TTransformNode.Create;
Transform93.Translation := Vector3(0,5.21,0);
TouchSensor94 := TTouchSensorNode.Create;
TouchSensor94.Description := 'HAnimJoint Chest vl5, HAnimSegment l5';
{ .AddChildren }
Transform93.AddChildren([TouchSensor94]);
Shape95 := TShapeNode.Create;
Shape95 := Shape62;
{ .AddChild }
Transform93.AddChildren([Shape95]);
Shape96 := TShapeNode.Create;
LineSet97 := TLineSetNode.Create;
LineSet97.SetVertexCount([2]);
ColorRGBA98 := TColorRGBANode.Create;
ColorRGBA98 := ColorRGBA68;
{ .SetColor }
LineSet97.Color := ColorRGBA98;
Coordinate99 := TCoordinateNode.Create;
Coordinate99.SetPoint([Vector3(0,0,0),Vector3(0,18.65,0)]);
{ .SetCoord }
LineSet97.Coord := Coordinate99;
{ .SetGeometry }
Shape96.Geometry := LineSet97;
{ .AddChild }
Transform93.AddChildren([Shape96]);
Shape100 := TShapeNode.Create;
LineSet101 := TLineSetNode.Create;
LineSet101.SetVertexCount([2]);
ColorRGBA102 := TColorRGBANode.Create;
ColorRGBA102 := ColorRGBA68;
{ .SetColor }
LineSet101.Color := ColorRGBA102;
Coordinate103 := TCoordinateNode.Create;
Coordinate103.SetPoint([Vector3(0,0,0),Vector3(1.12,16.23,1.87)]);
{ .SetCoord }
LineSet101.Coord := Coordinate103;
{ .SetGeometry }
Shape100.Geometry := LineSet101;
{ .AddChild }
Transform93.AddChildren([Shape100]);
Shape104 := TShapeNode.Create;
LineSet105 := TLineSetNode.Create;
LineSet105.SetVertexCount([2]);
ColorRGBA106 := TColorRGBANode.Create;
ColorRGBA106 := ColorRGBA68;
{ .SetColor }
LineSet105.Color := ColorRGBA106;
Coordinate107 := TCoordinateNode.Create;
Coordinate107.SetPoint([Vector3(0,0,0),Vector3(-1.12,16.23,1.87)]);
{ .SetCoord }
LineSet105.Coord := Coordinate107;
{ .SetGeometry }
Shape104.Geometry := LineSet105;
{ .AddChild }
Transform93.AddChildren([Shape104]);
{ .AddChildren }
HAnimSegment92.AddChildren([Transform93]);
{ .AddChildren }
HAnimJoint91.AddChildren([HAnimSegment92]);
HAnimJoint108 := THAnimJointNode.Create;
HAnimJoint108.NameField := 'Neck';
HAnimJoint108.Rotation := Vector4(0.983970484111271,0.0663053900569327,0.16554661472597,0.772979753553571);
HAnimJoint108.Center := Vector3(0,23.86,0);
HAnimSegment109 := THAnimSegmentNode.Create;
HAnimSegment109.NameField := 'vl5_to_Neck';
Transform110 := TTransformNode.Create;
Transform110.Translation := Vector3(0,23.86,0);
TouchSensor111 := TTouchSensorNode.Create;
TouchSensor111.Description := 'HAnimJoint Neck Neck, HAnimSegment vl5_to_Neck';
{ .AddChildren }
Transform110.AddChildren([TouchSensor111]);
Shape112 := TShapeNode.Create;
Shape112 := Shape62;
{ .AddChild }
Transform110.AddChildren([Shape112]);
Shape113 := TShapeNode.Create;
LineSet114 := TLineSetNode.Create;
LineSet114.SetVertexCount([2]);
ColorRGBA115 := TColorRGBANode.Create;
ColorRGBA115 := ColorRGBA68;
{ .SetColor }
LineSet114.Color := ColorRGBA115;
Coordinate116 := TCoordinateNode.Create;
Coordinate116.SetPoint([Vector3(0,0,0),Vector3(0,5.45,0)]);
{ .SetCoord }
LineSet114.Coord := Coordinate116;
{ .SetGeometry }
Shape113.Geometry := LineSet114;
{ .AddChild }
Transform110.AddChildren([Shape113]);
{ .AddChildren }
HAnimSegment109.AddChildren([Transform110]);
{ .AddChildren }
HAnimJoint108.AddChildren([HAnimSegment109]);
HAnimJoint117 := THAnimJointNode.Create;
HAnimJoint117.NameField := 'skullbase';
HAnimJoint117.Rotation := Vector4(-0.979126474330309,0.150183590569867,-0.136953409556093,0.734508385229556);
HAnimJoint117.Center := Vector3(0,29.31,0);
HAnimSegment118 := THAnimSegmentNode.Create;
HAnimSegment118.NameField := 'skull';
Transform119 := TTransformNode.Create;
Transform119.Translation := Vector3(0,29.31,0);
HAnimSite120 := THAnimSiteNode.Create;
HAnimSite120.NameField := 'skull_tip';
HAnimSite120.Translation := Vector3(0,3.87,0);
TouchSensor121 := TTouchSensorNode.Create;
TouchSensor121.Description := 'HAnimSite skull_tip';
{ .AddChildren }
HAnimSite120.AddChildren([TouchSensor121]);
Shape122 := TShapeNode.Create;
Shape122 := Shape70;
{ .AddChildren }
HAnimSite120.AddChildren([Shape122]);
Shape123 := TShapeNode.Create;
LineSet124 := TLineSetNode.Create;
LineSet124.SetVertexCount([2]);
ColorRGBA125 := TColorRGBANode.Create;
ColorRGBA125 := ColorRGBA77;
{ .SetColor }
LineSet124.Color := ColorRGBA125;
Coordinate126 := TCoordinateNode.Create;
Coordinate126.SetPoint([Vector3(0,-3.87,0),Vector3(0,0,0)]);
{ .SetCoord }
LineSet124.Coord := Coordinate126;
{ .SetGeometry }
Shape123.Geometry := LineSet124;
{ .AddChildren }
HAnimSite120.AddChildren([Shape123]);
{ .AddChildren }
Transform119.AddChildren([HAnimSite120]);
TouchSensor127 := TTouchSensorNode.Create;
TouchSensor127.Description := 'HAnimJoint Head skullbase, HAnimSegment skull';
{ .AddChildren }
Transform119.AddChildren([TouchSensor127]);
Shape128 := TShapeNode.Create;
Shape128 := Shape62;
{ .AddChild }
Transform119.AddChildren([Shape128]);
{ .AddChildren }
HAnimSegment118.AddChildren([Transform119]);
{ .AddChildren }
HAnimJoint117.AddChildren([HAnimSegment118]);
{ .AddChildren }
HAnimJoint108.AddChildren([HAnimJoint117]);
{ .AddChildren }
HAnimJoint91.AddChildren([HAnimJoint108]);
HAnimJoint129 := THAnimJointNode.Create;
HAnimJoint129.NameField := 'LeftCollar';
HAnimJoint129.Rotation := Vector4(-0.0400336310146056,0.285571817840178,0.957520780580368,0.318543581718216);
HAnimJoint129.Center := Vector3(1.12,21.44,1.87);
HAnimSegment130 := THAnimSegmentNode.Create;
HAnimSegment130.NameField := 'vl5_to_LeftCollar';
Transform131 := TTransformNode.Create;
Transform131.Translation := Vector3(1.12,21.44,1.87);
TouchSensor132 := TTouchSensorNode.Create;
TouchSensor132.Description := 'HAnimJoint LeftCollar LeftCollar, HAnimSegment vl5_to_LeftCollar';
{ .AddChildren }
Transform131.AddChildren([TouchSensor132]);
Shape133 := TShapeNode.Create;
Shape133 := Shape62;
{ .AddChild }
Transform131.AddChildren([Shape133]);
Shape134 := TShapeNode.Create;
LineSet135 := TLineSetNode.Create;
LineSet135.SetVertexCount([2]);
ColorRGBA136 := TColorRGBANode.Create;
ColorRGBA136 := ColorRGBA68;
{ .SetColor }
LineSet135.Color := ColorRGBA136;
Coordinate137 := TCoordinateNode.Create;
Coordinate137.SetPoint([Vector3(0,0,0),Vector3(5.54,0,0)]);
{ .SetCoord }
LineSet135.Coord := Coordinate137;
{ .SetGeometry }
Shape134.Geometry := LineSet135;
{ .AddChild }
Transform131.AddChildren([Shape134]);
{ .AddChildren }
HAnimSegment130.AddChildren([Transform131]);
{ .AddChildren }
HAnimJoint129.AddChildren([HAnimSegment130]);
HAnimJoint138 := THAnimJointNode.Create;
HAnimJoint138.NameField := 'LeftUpArm';
HAnimJoint138.Rotation := Vector4(-0.027309899849048,-0.170484979510911,0.984981746598077,1.66813504770243);
HAnimJoint138.Center := Vector3(6.66,21.44,1.87);
HAnimSegment139 := THAnimSegmentNode.Create;
HAnimSegment139.NameField := 'LeftCollar_to_LeftUpArm';
Transform140 := TTransformNode.Create;
Transform140.Translation := Vector3(6.66,21.44,1.87);
TouchSensor141 := TTouchSensorNode.Create;
TouchSensor141.Description := 'HAnimJoint LeftUpArm LeftUpArm, HAnimSegment LeftCollar_to_LeftUpArm';
{ .AddChildren }
Transform140.AddChildren([TouchSensor141]);
Shape142 := TShapeNode.Create;
Shape142 := Shape62;
{ .AddChild }
Transform140.AddChildren([Shape142]);
Shape143 := TShapeNode.Create;
LineSet144 := TLineSetNode.Create;
LineSet144.SetVertexCount([2]);
ColorRGBA145 := TColorRGBANode.Create;
ColorRGBA145 := ColorRGBA68;
{ .SetColor }
LineSet144.Color := ColorRGBA145;
Coordinate146 := TCoordinateNode.Create;
Coordinate146.SetPoint([Vector3(0,0,0),Vector3(0,-11.96,0)]);
{ .SetCoord }
LineSet144.Coord := Coordinate146;
{ .SetGeometry }
Shape143.Geometry := LineSet144;
{ .AddChild }
Transform140.AddChildren([Shape143]);
{ .AddChildren }
HAnimSegment139.AddChildren([Transform140]);
{ .AddChildren }
HAnimJoint138.AddChildren([HAnimSegment139]);
HAnimJoint147 := THAnimJointNode.Create;
HAnimJoint147.NameField := 'LeftLowArm';
HAnimJoint147.Rotation := Vector4(-0.998249192144246,0.0587758586859541,-0.00662939055192083,1.65994762916941);
HAnimJoint147.Center := Vector3(6.66,9.48,1.87);
HAnimSegment148 := THAnimSegmentNode.Create;
HAnimSegment148.NameField := 'LeftUpArm_to_LeftLowArm';
Transform149 := TTransformNode.Create;
Transform149.Translation := Vector3(6.66,9.48,1.87);
TouchSensor150 := TTouchSensorNode.Create;
TouchSensor150.Description := 'HAnimJoint LeftLowArm LeftLowArm, HAnimSegment LeftUpArm_to_LeftLowArm';
{ .AddChildren }
Transform149.AddChildren([TouchSensor150]);
Shape151 := TShapeNode.Create;
Shape151 := Shape62;
{ .AddChild }
Transform149.AddChildren([Shape151]);
Shape152 := TShapeNode.Create;
LineSet153 := TLineSetNode.Create;
LineSet153.SetVertexCount([2]);
ColorRGBA154 := TColorRGBANode.Create;
ColorRGBA154 := ColorRGBA68;
{ .SetColor }
LineSet153.Color := ColorRGBA154;
Coordinate155 := TCoordinateNode.Create;
Coordinate155.SetPoint([Vector3(0,0,0),Vector3(0,-9.93,0)]);
{ .SetCoord }
LineSet153.Coord := Coordinate155;
{ .SetGeometry }
Shape152.Geometry := LineSet153;
{ .AddChild }
Transform149.AddChildren([Shape152]);
{ .AddChildren }
HAnimSegment148.AddChildren([Transform149]);
{ .AddChildren }
HAnimJoint147.AddChildren([HAnimSegment148]);
HAnimJoint156 := THAnimJointNode.Create;
HAnimJoint156.NameField := 'LeftHand';
HAnimJoint156.Rotation := Vector4(0.404520441533964,0.00251538810905742,0.914525497293667,0.0133189030390886);
HAnimJoint156.Center := Vector3(6.66,-0.45,1.87);
HAnimSegment157 := THAnimSegmentNode.Create;
HAnimSegment157.NameField := 'LeftLowArm_to_LeftHand';
Transform158 := TTransformNode.Create;
Transform158.Translation := Vector3(6.66,-0.45,1.87);
HAnimSite159 := THAnimSiteNode.Create;
HAnimSite159.NameField := 'LeftLowArm_to_LeftHand_tip';
HAnimSite159.Translation := Vector3(0,-7,0);
TouchSensor160 := TTouchSensorNode.Create;
TouchSensor160.Description := 'HAnimSite LeftLowArm_to_LeftHand_tip';
{ .AddChildren }
HAnimSite159.AddChildren([TouchSensor160]);
Shape161 := TShapeNode.Create;
Shape161 := Shape70;
{ .AddChildren }
HAnimSite159.AddChildren([Shape161]);
Shape162 := TShapeNode.Create;
LineSet163 := TLineSetNode.Create;
LineSet163.SetVertexCount([2]);
ColorRGBA164 := TColorRGBANode.Create;
ColorRGBA164 := ColorRGBA77;
{ .SetColor }
LineSet163.Color := ColorRGBA164;
Coordinate165 := TCoordinateNode.Create;
Coordinate165.SetPoint([Vector3(0,7,0),Vector3(0,0,0)]);
{ .SetCoord }
LineSet163.Coord := Coordinate165;
{ .SetGeometry }
Shape162.Geometry := LineSet163;
{ .AddChildren }
HAnimSite159.AddChildren([Shape162]);
{ .AddChildren }
Transform158.AddChildren([HAnimSite159]);
TouchSensor166 := TTouchSensorNode.Create;
TouchSensor166.Description := 'HAnimJoint LeftHand LeftHand, HAnimSegment LeftLowArm_to_LeftHand';
{ .AddChildren }
Transform158.AddChildren([TouchSensor166]);
Shape167 := TShapeNode.Create;
Shape167 := Shape62;
{ .AddChild }
Transform158.AddChildren([Shape167]);
{ .AddChildren }
HAnimSegment157.AddChildren([Transform158]);
{ .AddChildren }
HAnimJoint156.AddChildren([HAnimSegment157]);
{ .AddChildren }
HAnimJoint147.AddChildren([HAnimJoint156]);
{ .AddChildren }
HAnimJoint138.AddChildren([HAnimJoint147]);
{ .AddChildren }
HAnimJoint129.AddChildren([HAnimJoint138]);
{ .AddChildren }
HAnimJoint91.AddChildren([HAnimJoint129]);
HAnimJoint168 := THAnimJointNode.Create;
HAnimJoint168.NameField := 'RightCollar';
HAnimJoint168.Rotation := Vector4(-0.0717927567877157,-0.898736438505571,-0.432572091304025,0.383573753513759);
HAnimJoint168.Center := Vector3(-1.12,21.44,1.87);
HAnimSegment169 := THAnimSegmentNode.Create;
HAnimSegment169.NameField := 'vl5_to_RightCollar';
Transform170 := TTransformNode.Create;
Transform170.Translation := Vector3(-1.12,21.44,1.87);
TouchSensor171 := TTouchSensorNode.Create;
TouchSensor171.Description := 'HAnimJoint RightCollar RightCollar, HAnimSegment vl5_to_RightCollar';
{ .AddChildren }
Transform170.AddChildren([TouchSensor171]);
Shape172 := TShapeNode.Create;
Shape172 := Shape62;
{ .AddChild }
Transform170.AddChildren([Shape172]);
Shape173 := TShapeNode.Create;
LineSet174 := TLineSetNode.Create;
LineSet174.SetVertexCount([2]);
ColorRGBA175 := TColorRGBANode.Create;
ColorRGBA175 := ColorRGBA68;
{ .SetColor }
LineSet174.Color := ColorRGBA175;
Coordinate176 := TCoordinateNode.Create;
Coordinate176.SetPoint([Vector3(0,0,0),Vector3(-6.07,0,0)]);
{ .SetCoord }
LineSet174.Coord := Coordinate176;
{ .SetGeometry }
Shape173.Geometry := LineSet174;
{ .AddChild }
Transform170.AddChildren([Shape173]);
{ .AddChildren }
HAnimSegment169.AddChildren([Transform170]);
{ .AddChildren }
HAnimJoint168.AddChildren([HAnimSegment169]);
HAnimJoint177 := THAnimJointNode.Create;
HAnimJoint177.NameField := 'RightUpArm';
HAnimJoint177.Rotation := Vector4(-0.750052184733347,-0.545300751513553,-0.374257679380781,1.93524054510947);
HAnimJoint177.Center := Vector3(-7.19,21.44,1.87);
HAnimSegment178 := THAnimSegmentNode.Create;
HAnimSegment178.NameField := 'RightCollar_to_RightUpArm';
Transform179 := TTransformNode.Create;
Transform179.Translation := Vector3(-7.19,21.44,1.87);
TouchSensor180 := TTouchSensorNode.Create;
TouchSensor180.Description := 'HAnimJoint RightUpArm RightUpArm, HAnimSegment RightCollar_to_RightUpArm';
{ .AddChildren }
Transform179.AddChildren([TouchSensor180]);
Shape181 := TShapeNode.Create;
Shape181 := Shape62;
{ .AddChild }
Transform179.AddChildren([Shape181]);
Shape182 := TShapeNode.Create;
LineSet183 := TLineSetNode.Create;
LineSet183.SetVertexCount([2]);
ColorRGBA184 := TColorRGBANode.Create;
ColorRGBA184 := ColorRGBA68;
{ .SetColor }
LineSet183.Color := ColorRGBA184;
Coordinate185 := TCoordinateNode.Create;
Coordinate185.SetPoint([Vector3(0,0,0),Vector3(0,-11.82,0)]);
{ .SetCoord }
LineSet183.Coord := Coordinate185;
{ .SetGeometry }
Shape182.Geometry := LineSet183;
{ .AddChild }
Transform179.AddChildren([Shape182]);
{ .AddChildren }
HAnimSegment178.AddChildren([Transform179]);
{ .AddChildren }
HAnimJoint177.AddChildren([HAnimSegment178]);
HAnimJoint186 := THAnimJointNode.Create;
HAnimJoint186.NameField := 'RightLowArm';
HAnimJoint186.Rotation := Vector4(-0.942326628906139,0.260683574441484,0.209915693722034,1.36514284873355);
HAnimJoint186.Center := Vector3(-7.19,9.62,1.87);
HAnimSegment187 := THAnimSegmentNode.Create;
HAnimSegment187.NameField := 'RightUpArm_to_RightLowArm';
Transform188 := TTransformNode.Create;
Transform188.Translation := Vector3(-7.19,9.62,1.87);
TouchSensor189 := TTouchSensorNode.Create;
TouchSensor189.Description := 'HAnimJoint RightLowArm RightLowArm, HAnimSegment RightUpArm_to_RightLowArm';
{ .AddChildren }
Transform188.AddChildren([TouchSensor189]);
Shape190 := TShapeNode.Create;
Shape190 := Shape62;
{ .AddChild }
Transform188.AddChildren([Shape190]);
Shape191 := TShapeNode.Create;
LineSet192 := TLineSetNode.Create;
LineSet192.SetVertexCount([2]);
ColorRGBA193 := TColorRGBANode.Create;
ColorRGBA193 := ColorRGBA68;
{ .SetColor }
LineSet192.Color := ColorRGBA193;
Coordinate194 := TCoordinateNode.Create;
Coordinate194.SetPoint([Vector3(0,0,0),Vector3(0,-10.65,0)]);
{ .SetCoord }
LineSet192.Coord := Coordinate194;
{ .SetGeometry }
Shape191.Geometry := LineSet192;
{ .AddChild }
Transform188.AddChildren([Shape191]);
{ .AddChildren }
HAnimSegment187.AddChildren([Transform188]);
{ .AddChildren }
HAnimJoint186.AddChildren([HAnimSegment187]);
HAnimJoint195 := THAnimJointNode.Create;
HAnimJoint195.NameField := 'RightHand';
HAnimJoint195.Rotation := Vector4(0.487401172792782,0.00827736333346378,-0.87313892480885,0.0323338299925714);
HAnimJoint195.Center := Vector3(-7.19,-1.03,1.87);
HAnimSegment196 := THAnimSegmentNode.Create;
HAnimSegment196.NameField := 'RightLowArm_to_RightHand';
Transform197 := TTransformNode.Create;
Transform197.Translation := Vector3(-7.19,-1.03,1.87);
HAnimSite198 := THAnimSiteNode.Create;
HAnimSite198.NameField := 'RightLowArm_to_RightHand_tip';
HAnimSite198.Translation := Vector3(0,-7,0);
TouchSensor199 := TTouchSensorNode.Create;
TouchSensor199.Description := 'HAnimSite RightLowArm_to_RightHand_tip';
{ .AddChildren }
HAnimSite198.AddChildren([TouchSensor199]);
Shape200 := TShapeNode.Create;
Shape200 := Shape70;
{ .AddChildren }
HAnimSite198.AddChildren([Shape200]);
Shape201 := TShapeNode.Create;
LineSet202 := TLineSetNode.Create;
LineSet202.SetVertexCount([2]);
ColorRGBA203 := TColorRGBANode.Create;
ColorRGBA203 := ColorRGBA77;
{ .SetColor }
LineSet202.Color := ColorRGBA203;
Coordinate204 := TCoordinateNode.Create;
Coordinate204.SetPoint([Vector3(0,7,0),Vector3(0,0,0)]);
{ .SetCoord }
LineSet202.Coord := Coordinate204;
{ .SetGeometry }
Shape201.Geometry := LineSet202;
{ .AddChildren }
HAnimSite198.AddChildren([Shape201]);
{ .AddChildren }
Transform197.AddChildren([HAnimSite198]);
TouchSensor205 := TTouchSensorNode.Create;
TouchSensor205.Description := 'HAnimJoint RightHand RightHand, HAnimSegment RightLowArm_to_RightHand';
{ .AddChildren }
Transform197.AddChildren([TouchSensor205]);
Shape206 := TShapeNode.Create;
Shape206 := Shape62;
{ .AddChild }
Transform197.AddChildren([Shape206]);
{ .AddChildren }
HAnimSegment196.AddChildren([Transform197]);
{ .AddChildren }
HAnimJoint195.AddChildren([HAnimSegment196]);
{ .AddChildren }
HAnimJoint186.AddChildren([HAnimJoint195]);
{ .AddChildren }
HAnimJoint177.AddChildren([HAnimJoint186]);
{ .AddChildren }
HAnimJoint168.AddChildren([HAnimJoint177]);
{ .AddChildren }
HAnimJoint91.AddChildren([HAnimJoint168]);
{ .AddChildren }
HAnimJoint53.AddChildren([HAnimJoint91]);
HAnimJoint207 := THAnimJointNode.Create;
HAnimJoint207.NameField := 'LeftUpLeg';
HAnimJoint207.Rotation := Vector4(0.798274116909833,-0.0905296906431976,0.595451769150005,0.374616063385567);
HAnimJoint207.Center := Vector3(3.91,0,0);
HAnimSegment208 := THAnimSegmentNode.Create;
HAnimSegment208.NameField := 'humanoid_root_to_LeftUpLeg';
Transform209 := TTransformNode.Create;
Transform209.Translation := Vector3(3.91,0,0);
TouchSensor210 := TTouchSensorNode.Create;
TouchSensor210.Description := 'HAnimJoint LeftUpLeg LeftUpLeg, HAnimSegment humanoid_root_to_LeftUpLeg';
{ .AddChildren }
Transform209.AddChildren([TouchSensor210]);
Shape211 := TShapeNode.Create;
Shape211 := Shape62;
{ .AddChild }
Transform209.AddChildren([Shape211]);
Shape212 := TShapeNode.Create;
LineSet213 := TLineSetNode.Create;
LineSet213.SetVertexCount([2]);
ColorRGBA214 := TColorRGBANode.Create;
ColorRGBA214 := ColorRGBA68;
{ .SetColor }
LineSet213.Color := ColorRGBA214;
Coordinate215 := TCoordinateNode.Create;
Coordinate215.SetPoint([Vector3(0,0,0),Vector3(0,-18.34,0)]);
{ .SetCoord }
LineSet213.Coord := Coordinate215;
{ .SetGeometry }
Shape212.Geometry := LineSet213;
{ .AddChild }
Transform209.AddChildren([Shape212]);
{ .AddChildren }
HAnimSegment208.AddChildren([Transform209]);
{ .AddChildren }
HAnimJoint207.AddChildren([HAnimSegment208]);
HAnimJoint216 := THAnimJointNode.Create;
HAnimJoint216.NameField := 'LeftLowLeg';
HAnimJoint216.Rotation := Vector4(0.969171949455709,0.159020234805176,0.188197495495361,1.02828103886506);
HAnimJoint216.Center := Vector3(3.91,-18.34,0);
HAnimSegment217 := THAnimSegmentNode.Create;
HAnimSegment217.NameField := 'LeftUpLeg_to_LeftLowLeg';
Transform218 := TTransformNode.Create;
Transform218.Translation := Vector3(3.91,-18.34,0);
TouchSensor219 := TTouchSensorNode.Create;
TouchSensor219.Description := 'HAnimJoint LeftLowLeg LeftLowLeg, HAnimSegment LeftUpLeg_to_LeftLowLeg';
{ .AddChildren }
Transform218.AddChildren([TouchSensor219]);
Shape220 := TShapeNode.Create;
Shape220 := Shape62;
{ .AddChild }
Transform218.AddChildren([Shape220]);
Shape221 := TShapeNode.Create;
LineSet222 := TLineSetNode.Create;
LineSet222.SetVertexCount([2]);
ColorRGBA223 := TColorRGBANode.Create;
ColorRGBA223 := ColorRGBA68;
{ .SetColor }
LineSet222.Color := ColorRGBA223;
Coordinate224 := TCoordinateNode.Create;
Coordinate224.SetPoint([Vector3(0,0,0),Vector3(0,-17.37,0)]);
{ .SetCoord }
LineSet222.Coord := Coordinate224;
{ .SetGeometry }
Shape221.Geometry := LineSet222;
{ .AddChild }
Transform218.AddChildren([Shape221]);
{ .AddChildren }
HAnimSegment217.AddChildren([Transform218]);
{ .AddChildren }
HAnimJoint216.AddChildren([HAnimSegment217]);
HAnimJoint225 := THAnimJointNode.Create;
HAnimJoint225.NameField := 'LeftFoot';
HAnimJoint225.Rotation := Vector4(1.00000000000036,0,0,0.0199134632110525);
HAnimJoint225.Center := Vector3(3.91,-35.71,0);
HAnimSegment226 := THAnimSegmentNode.Create;
HAnimSegment226.NameField := 'LeftLowLeg_to_LeftFoot';
Transform227 := TTransformNode.Create;
Transform227.Translation := Vector3(3.91,-35.71,0);
HAnimSite228 := THAnimSiteNode.Create;
HAnimSite228.NameField := 'LeftLowLeg_to_LeftFoot_tip';
HAnimSite228.Translation := Vector3(0,-3.46,0);
TouchSensor229 := TTouchSensorNode.Create;
TouchSensor229.Description := 'HAnimSite LeftLowLeg_to_LeftFoot_tip';
{ .AddChildren }
HAnimSite228.AddChildren([TouchSensor229]);
Shape230 := TShapeNode.Create;
Shape230 := Shape70;
{ .AddChildren }
HAnimSite228.AddChildren([Shape230]);
Shape231 := TShapeNode.Create;
LineSet232 := TLineSetNode.Create;
LineSet232.SetVertexCount([2]);
ColorRGBA233 := TColorRGBANode.Create;
ColorRGBA233 := ColorRGBA77;
{ .SetColor }
LineSet232.Color := ColorRGBA233;
Coordinate234 := TCoordinateNode.Create;
Coordinate234.SetPoint([Vector3(0,3.46,0),Vector3(0,0,0)]);
{ .SetCoord }
LineSet232.Coord := Coordinate234;
{ .SetGeometry }
Shape231.Geometry := LineSet232;
{ .AddChildren }
HAnimSite228.AddChildren([Shape231]);
{ .AddChildren }
Transform227.AddChildren([HAnimSite228]);
TouchSensor235 := TTouchSensorNode.Create;
TouchSensor235.Description := 'HAnimJoint LeftFoot LeftFoot, HAnimSegment LeftLowLeg_to_LeftFoot';
{ .AddChildren }
Transform227.AddChildren([TouchSensor235]);
Shape236 := TShapeNode.Create;
Shape236 := Shape62;
{ .AddChild }
Transform227.AddChildren([Shape236]);
{ .AddChildren }
HAnimSegment226.AddChildren([Transform227]);
{ .AddChildren }
HAnimJoint225.AddChildren([HAnimSegment226]);
{ .AddChildren }
HAnimJoint216.AddChildren([HAnimJoint225]);
{ .AddChildren }
HAnimJoint207.AddChildren([HAnimJoint216]);
{ .AddChildren }
HAnimJoint53.AddChildren([HAnimJoint207]);
HAnimJoint237 := THAnimJointNode.Create;
HAnimJoint237.NameField := 'RightUpLeg';
HAnimJoint237.Rotation := Vector4(-0.529026768997627,-0.0781104813974245,-0.845002621522441,0.345959390966261);
HAnimJoint237.Center := Vector3(-3.91,0,0);
HAnimSegment238 := THAnimSegmentNode.Create;
HAnimSegment238.NameField := 'humanoid_root_to_RightUpLeg';
Transform239 := TTransformNode.Create;
Transform239.Translation := Vector3(-3.91,0,0);
TouchSensor240 := TTouchSensorNode.Create;
TouchSensor240.Description := 'HAnimJoint RightUpLeg RightUpLeg, HAnimSegment humanoid_root_to_RightUpLeg';
{ .AddChildren }
Transform239.AddChildren([TouchSensor240]);
Shape241 := TShapeNode.Create;
Shape241 := Shape62;
{ .AddChild }
Transform239.AddChildren([Shape241]);
Shape242 := TShapeNode.Create;
LineSet243 := TLineSetNode.Create;
LineSet243.SetVertexCount([2]);
ColorRGBA244 := TColorRGBANode.Create;
ColorRGBA244 := ColorRGBA68;
{ .SetColor }
LineSet243.Color := ColorRGBA244;
Coordinate245 := TCoordinateNode.Create;
Coordinate245.SetPoint([Vector3(0,0,0),Vector3(0,-17.63,0)]);
{ .SetCoord }
LineSet243.Coord := Coordinate245;
{ .SetGeometry }
Shape242.Geometry := LineSet243;
{ .AddChild }
Transform239.AddChildren([Shape242]);
{ .AddChildren }
HAnimSegment238.AddChildren([Transform239]);
{ .AddChildren }
HAnimJoint237.AddChildren([HAnimSegment238]);
HAnimJoint246 := THAnimJointNode.Create;
HAnimJoint246.NameField := 'RightLowLeg';
HAnimJoint246.Rotation := Vector4(0.978057447453843,-0.194999101930461,0.073341527979632,0.971415273794883);
HAnimJoint246.Center := Vector3(-3.91,-17.63,0);
HAnimSegment247 := THAnimSegmentNode.Create;
HAnimSegment247.NameField := 'RightUpLeg_to_RightLowLeg';
Transform248 := TTransformNode.Create;
Transform248.Translation := Vector3(-3.91,-17.63,0);
TouchSensor249 := TTouchSensorNode.Create;
TouchSensor249.Description := 'HAnimJoint RightLowLeg RightLowLeg, HAnimSegment RightUpLeg_to_RightLowLeg';
{ .AddChildren }
Transform248.AddChildren([TouchSensor249]);
Shape250 := TShapeNode.Create;
Shape250 := Shape62;
{ .AddChild }
Transform248.AddChildren([Shape250]);
Shape251 := TShapeNode.Create;
LineSet252 := TLineSetNode.Create;
LineSet252.SetVertexCount([2]);
ColorRGBA253 := TColorRGBANode.Create;
ColorRGBA253 := ColorRGBA68;
{ .SetColor }
LineSet252.Color := ColorRGBA253;
Coordinate254 := TCoordinateNode.Create;
Coordinate254.SetPoint([Vector3(0,0,0),Vector3(0,-17.14,0)]);
{ .SetCoord }
LineSet252.Coord := Coordinate254;
{ .SetGeometry }
Shape251.Geometry := LineSet252;
{ .AddChild }
Transform248.AddChildren([Shape251]);
{ .AddChildren }
HAnimSegment247.AddChildren([Transform248]);
{ .AddChildren }
HAnimJoint246.AddChildren([HAnimSegment247]);
HAnimJoint255 := THAnimJointNode.Create;
HAnimJoint255.NameField := 'RightFoot';
HAnimJoint255.Rotation := Vector4(-1,0,0,0.446403006744384);
HAnimJoint255.Center := Vector3(-3.91,-34.77,0);
HAnimSegment256 := THAnimSegmentNode.Create;
HAnimSegment256.NameField := 'RightLowLeg_to_RightFoot';
Transform257 := TTransformNode.Create;
Transform257.Translation := Vector3(-3.91,-34.77,0);
HAnimSite258 := THAnimSiteNode.Create;
HAnimSite258.NameField := 'RightLowLeg_to_RightFoot_tip';
HAnimSite258.Translation := Vector3(0,-3.75,0);
TouchSensor259 := TTouchSensorNode.Create;
TouchSensor259.Description := 'HAnimSite RightLowLeg_to_RightFoot_tip';
{ .AddChildren }
HAnimSite258.AddChildren([TouchSensor259]);
Shape260 := TShapeNode.Create;
Shape260 := Shape70;
{ .AddChildren }
HAnimSite258.AddChildren([Shape260]);
Shape261 := TShapeNode.Create;
LineSet262 := TLineSetNode.Create;
LineSet262.SetVertexCount([2]);
ColorRGBA263 := TColorRGBANode.Create;
ColorRGBA263 := ColorRGBA77;
{ .SetColor }
LineSet262.Color := ColorRGBA263;
Coordinate264 := TCoordinateNode.Create;
Coordinate264.SetPoint([Vector3(0,3.75,0),Vector3(0,0,0)]);
{ .SetCoord }
LineSet262.Coord := Coordinate264;
{ .SetGeometry }
Shape261.Geometry := LineSet262;
{ .AddChildren }
HAnimSite258.AddChildren([Shape261]);
{ .AddChildren }
Transform257.AddChildren([HAnimSite258]);
TouchSensor265 := TTouchSensorNode.Create;
TouchSensor265.Description := 'HAnimJoint RightFoot RightFoot, HAnimSegment RightLowLeg_to_RightFoot';
{ .AddChildren }
Transform257.AddChildren([TouchSensor265]);
Shape266 := TShapeNode.Create;
Shape266 := Shape62;
{ .AddChild }
Transform257.AddChildren([Shape266]);
{ .AddChildren }
HAnimSegment256.AddChildren([Transform257]);
{ .AddChildren }
HAnimJoint255.AddChildren([HAnimSegment256]);
{ .AddChildren }
HAnimJoint246.AddChildren([HAnimJoint255]);
{ .AddChildren }
HAnimJoint237.AddChildren([HAnimJoint246]);
{ .AddChildren }
HAnimJoint53.AddChildren([HAnimJoint237]);
{ .AddSkeleton }
HAnimHumanoid46.SetSkeleton([HAnimJoint53]);
HAnimJoint267 := THAnimJointNode.Create;
HAnimJoint267 := HAnimJoint53;
{ .AddJoints }
HAnimHumanoid46.Joints := HAnimJoint267;
HAnimJoint268 := THAnimJointNode.Create;
HAnimJoint268 := HAnimJoint91;
{ .AddJoints }
HAnimHumanoid46.Joints := HAnimJoint268;
HAnimJoint269 := THAnimJointNode.Create;
HAnimJoint269 := HAnimJoint108;
{ .AddJoints }
HAnimHumanoid46.Joints := HAnimJoint269;
HAnimJoint270 := THAnimJointNode.Create;
HAnimJoint270 := HAnimJoint117;
{ .AddJoints }
HAnimHumanoid46.Joints := HAnimJoint270;
HAnimJoint271 := THAnimJointNode.Create;
HAnimJoint271 := HAnimJoint129;
{ .AddJoints }
HAnimHumanoid46.Joints := HAnimJoint271;
HAnimJoint272 := THAnimJointNode.Create;
HAnimJoint272 := HAnimJoint138;
{ .AddJoints }
HAnimHumanoid46.Joints := HAnimJoint272;
HAnimJoint273 := THAnimJointNode.Create;
HAnimJoint273 := HAnimJoint147;
{ .AddJoints }
HAnimHumanoid46.Joints := HAnimJoint273;
HAnimJoint274 := THAnimJointNode.Create;
HAnimJoint274 := HAnimJoint156;
{ .AddJoints }
HAnimHumanoid46.Joints := HAnimJoint274;
HAnimJoint275 := THAnimJointNode.Create;
HAnimJoint275 := HAnimJoint168;
{ .AddJoints }
HAnimHumanoid46.Joints := HAnimJoint275;
HAnimJoint276 := THAnimJointNode.Create;
HAnimJoint276 := HAnimJoint177;
{ .AddJoints }
HAnimHumanoid46.Joints := HAnimJoint276;
HAnimJoint277 := THAnimJointNode.Create;
HAnimJoint277 := HAnimJoint186;
{ .AddJoints }
HAnimHumanoid46.Joints := HAnimJoint277;
HAnimJoint278 := THAnimJointNode.Create;
HAnimJoint278 := HAnimJoint195;
{ .AddJoints }
HAnimHumanoid46.Joints := HAnimJoint278;
HAnimJoint279 := THAnimJointNode.Create;
HAnimJoint279 := HAnimJoint207;
{ .AddJoints }
HAnimHumanoid46.Joints := HAnimJoint279;
HAnimJoint280 := THAnimJointNode.Create;
HAnimJoint280 := HAnimJoint216;
{ .AddJoints }
HAnimHumanoid46.Joints := HAnimJoint280;
HAnimJoint281 := THAnimJointNode.Create;
HAnimJoint281 := HAnimJoint225;
{ .AddJoints }
HAnimHumanoid46.Joints := HAnimJoint281;
HAnimJoint282 := THAnimJointNode.Create;
HAnimJoint282 := HAnimJoint237;
{ .AddJoints }
HAnimHumanoid46.Joints := HAnimJoint282;
HAnimJoint283 := THAnimJointNode.Create;
HAnimJoint283 := HAnimJoint246;
{ .AddJoints }
HAnimHumanoid46.Joints := HAnimJoint283;
HAnimJoint284 := THAnimJointNode.Create;
HAnimJoint284 := HAnimJoint255;
{ .AddJoints }
HAnimHumanoid46.Joints := HAnimJoint284;
HAnimSegment285 := THAnimSegmentNode.Create;
HAnimSegment285 := HAnimSegment54;
{ .AddSegments }
HAnimHumanoid46.Segments := HAnimSegment285;
HAnimSegment286 := THAnimSegmentNode.Create;
HAnimSegment286 := HAnimSegment92;
{ .AddSegments }
HAnimHumanoid46.Segments := HAnimSegment286;
HAnimSegment287 := THAnimSegmentNode.Create;
HAnimSegment287 := HAnimSegment109;
{ .AddSegments }
HAnimHumanoid46.Segments := HAnimSegment287;
HAnimSegment288 := THAnimSegmentNode.Create;
HAnimSegment288 := HAnimSegment118;
{ .AddSegments }
HAnimHumanoid46.Segments := HAnimSegment288;
HAnimSegment289 := THAnimSegmentNode.Create;
HAnimSegment289 := HAnimSegment130;
{ .AddSegments }
HAnimHumanoid46.Segments := HAnimSegment289;
HAnimSegment290 := THAnimSegmentNode.Create;
HAnimSegment290 := HAnimSegment139;
{ .AddSegments }
HAnimHumanoid46.Segments := HAnimSegment290;
HAnimSegment291 := THAnimSegmentNode.Create;
HAnimSegment291 := HAnimSegment148;
{ .AddSegments }
HAnimHumanoid46.Segments := HAnimSegment291;
HAnimSegment292 := THAnimSegmentNode.Create;
HAnimSegment292 := HAnimSegment157;
{ .AddSegments }
HAnimHumanoid46.Segments := HAnimSegment292;
HAnimSegment293 := THAnimSegmentNode.Create;
HAnimSegment293 := HAnimSegment169;
{ .AddSegments }
HAnimHumanoid46.Segments := HAnimSegment293;
HAnimSegment294 := THAnimSegmentNode.Create;
HAnimSegment294 := HAnimSegment178;
{ .AddSegments }
HAnimHumanoid46.Segments := HAnimSegment294;
HAnimSegment295 := THAnimSegmentNode.Create;
HAnimSegment295 := HAnimSegment187;
{ .AddSegments }
HAnimHumanoid46.Segments := HAnimSegment295;
HAnimSegment296 := THAnimSegmentNode.Create;
HAnimSegment296 := HAnimSegment196;
{ .AddSegments }
HAnimHumanoid46.Segments := HAnimSegment296;
HAnimSegment297 := THAnimSegmentNode.Create;
HAnimSegment297 := HAnimSegment208;
{ .AddSegments }
HAnimHumanoid46.Segments := HAnimSegment297;
HAnimSegment298 := THAnimSegmentNode.Create;
HAnimSegment298 := HAnimSegment217;
{ .AddSegments }
HAnimHumanoid46.Segments := HAnimSegment298;
HAnimSegment299 := THAnimSegmentNode.Create;
HAnimSegment299 := HAnimSegment226;
{ .AddSegments }
HAnimHumanoid46.Segments := HAnimSegment299;
HAnimSegment300 := THAnimSegmentNode.Create;
HAnimSegment300 := HAnimSegment238;
{ .AddSegments }
HAnimHumanoid46.Segments := HAnimSegment300;
HAnimSegment301 := THAnimSegmentNode.Create;
HAnimSegment301 := HAnimSegment247;
{ .AddSegments }
HAnimHumanoid46.Segments := HAnimSegment301;
HAnimSegment302 := THAnimSegmentNode.Create;
HAnimSegment302 := HAnimSegment256;
{ .AddSegments }
HAnimHumanoid46.Segments := HAnimSegment302;
HAnimSite303 := THAnimSiteNode.Create;
HAnimSite303.NameField := 'humanoid_root_view';
Viewpoint304 := TViewpointNode.Create;
Viewpoint304.Description := 'BvhUniversityWisconsionExample1 front view towards HAnimHumanoid center';
Viewpoint304.Position := Vector3(0,0,80);
{ .AddChildren }
HAnimSite303.AddChildren([Viewpoint304]);
{ .AddViewpoints }
HAnimHumanoid46.Viewpoints := HAnimSite303;
HAnimSite305 := THAnimSiteNode.Create;
HAnimSite305 := HAnimSite120;
{ .AddSites }
HAnimHumanoid46.Sites := HAnimSite305;
HAnimSite306 := THAnimSiteNode.Create;
HAnimSite306 := HAnimSite159;
{ .AddSites }
HAnimHumanoid46.Sites := HAnimSite306;
HAnimSite307 := THAnimSiteNode.Create;
HAnimSite307 := HAnimSite198;
{ .AddSites }
HAnimHumanoid46.Sites := HAnimSite307;
HAnimSite308 := THAnimSiteNode.Create;
HAnimSite308 := HAnimSite228;
{ .AddSites }
HAnimHumanoid46.Sites := HAnimSite308;
HAnimSite309 := THAnimSiteNode.Create;
HAnimSite309 := HAnimSite258;
{ .AddSites }
HAnimHumanoid46.Sites := HAnimSite309;
HAnimSite310 := THAnimSiteNode.Create;
HAnimSite310 := HAnimSite303;
{ .AddSites }
HAnimHumanoid46.Sites := HAnimSite310;
{ .AddChildren }
Group14.AddChildren([HAnimHumanoid46]);
Group311 := TGroupNode.Create;
TimeSensor312 := TTimeSensorNode.Create;
TimeSensor312.CycleInterval := 0.067;
TimeSensor312.Loop := True;
{ .AddChildren }
Group311.AddChildren([TimeSensor312]);
TimeSensor313 := TTimeSensorNode.Create;
TimeSensor313.Enabled := False;
TimeSensor313.CycleInterval := 2;
TimeSensor313.Loop := True;
{ .AddChildren }
Group311.AddChildren([TimeSensor313]);
ScalarInterpolator314 := TScalarInterpolatorNode.Create;
ScalarInterpolator314.SetKey([0,1,1]);
ScalarInterpolator314.SetKeyValue([0,0,1]);
{ .AddChildren }
Group311.AddChildren([ScalarInterpolator314]);
PositionInterpolator315 := TPositionInterpolatorNode.Create;
PositionInterpolator315.SetKey([0,1]);
PositionInterpolator315.SetKeyValue([Vector3(0.803,3.501,8.836),Vector3(0.781,3.51,8.647)]);
{ .AddChildren }
Group311.AddChildren([PositionInterpolator315]);
OrientationInterpolator316 := TOrientationInterpolatorNode.Create;
OrientationInterpolator316.SetKey([0,1]);
OrientationInterpolator316.SetKeyValue([Vector4(-0.0118,-0.9911,-0.1325,2.8785),Vector4(-0.0199,-0.993,-0.1163,2.9232)]);
{ .AddChildren }
Group311.AddChildren([OrientationInterpolator316]);
OrientationInterpolator317 := TOrientationInterpolatorNode.Create;
OrientationInterpolator317.SetKey([0,1]);
OrientationInterpolator317.SetKeyValue([Vector4(0.9093,-0.4082,0.0806,0.8073),Vector4(0.9336,-0.3501,0.0768,0.824)]);
{ .AddChildren }
Group311.AddChildren([OrientationInterpolator317]);
OrientationInterpolator318 := TOrientationInterpolatorNode.Create;
OrientationInterpolator318.SetKey([0,1]);
OrientationInterpolator318.SetKeyValue([Vector4(0.9834,0.0677,0.1685,0.7761),Vector4(0.9841,0.066,0.1649,0.7723)]);
{ .AddChildren }
Group311.AddChildren([OrientationInterpolator318]);
OrientationInterpolator319 := TOrientationInterpolatorNode.Create;
OrientationInterpolator319.SetKey([0,1]);
OrientationInterpolator319.SetKeyValue([Vector4(-0.9778,0.1629,-0.1317,0.736),Vector4(-0.9794,0.1474,-0.1381,0.7342)]);
{ .AddChildren }
Group311.AddChildren([OrientationInterpolator319]);
OrientationInterpolator320 := TOrientationInterpolatorNode.Create;
OrientationInterpolator320.SetKey([0,1]);
OrientationInterpolator320.SetKeyValue([Vector4(-0.0626,0.7102,0.7012,0.2502),Vector4(-0.0355,0.2109,0.9769,0.3411)]);
{ .AddChildren }
Group311.AddChildren([OrientationInterpolator320]);
OrientationInterpolator321 := TOrientationInterpolatorNode.Create;
OrientationInterpolator321.SetKey([0,1]);
OrientationInterpolator321.SetKeyValue([Vector4(-0.1561,-0.2157,0.9639,1.7536),Vector4(0.0022,-0.1597,0.9872,1.6521)]);
{ .AddChildren }
Group311.AddChildren([OrientationInterpolator321]);
OrientationInterpolator322 := TOrientationInterpolatorNode.Create;
OrientationInterpolator322.SetKey([0,1]);
OrientationInterpolator322.SetKeyValue([Vector4(-0.9933,-0.0526,-0.103,1.6066),Vector4(-0.9965,0.0822,0.0138,1.6744)]);
{ .AddChildren }
Group311.AddChildren([OrientationInterpolator322]);
OrientationInterpolator323 := TOrientationInterpolatorNode.Create;
OrientationInterpolator323.SetKey([0,1]);
OrientationInterpolator323.SetKeyValue([Vector4(0.0434,0.0003,0.9991,0.0121),Vector4(0.4673,0.0029,0.8841,0.0138)]);
{ .AddChildren }
Group311.AddChildren([OrientationInterpolator323]);
OrientationInterpolator324 := TOrientationInterpolatorNode.Create;
OrientationInterpolator324.SetKey([0,1]);
OrientationInterpolator324.SetKeyValue([Vector4(-0.0734,-0.5964,-0.7993,0.3057),Vector4(-0.07,-0.9291,-0.3633,0.4091)]);
{ .AddChildren }
Group311.AddChildren([OrientationInterpolator324]);
OrientationInterpolator325 := TOrientationInterpolatorNode.Create;
OrientationInterpolator325.SetKey([0,1]);
OrientationInterpolator325.SetKeyValue([Vector4(-0.6801,-0.6074,-0.4106,2.0536),Vector4(-0.765,-0.5303,-0.3654,1.9107)]);
{ .AddChildren }
Group311.AddChildren([OrientationInterpolator325]);
OrientationInterpolator326 := TOrientationInterpolatorNode.Create;
OrientationInterpolator326.SetKey([0,1]);
OrientationInterpolator326.SetKeyValue([Vector4(-0.9378,0.2739,0.2135,1.4058),Vector4(-0.9433,0.2577,0.2091,1.3563)]);
{ .AddChildren }
Group311.AddChildren([OrientationInterpolator326]);
OrientationInterpolator327 := TOrientationInterpolatorNode.Create;
OrientationInterpolator327.SetKey([0,1]);
OrientationInterpolator327.SetKeyValue([Vector4(0.4025,0.0061,-0.9154,0.0299),Vector4(0.5037,0.0087,-0.8638,0.0329)]);
{ .AddChildren }
Group311.AddChildren([OrientationInterpolator327]);
OrientationInterpolator328 := TOrientationInterpolatorNode.Create;
OrientationInterpolator328.SetKey([0,1]);
OrientationInterpolator328.SetKeyValue([Vector4(0.8595,-0.1039,0.5004,0.4748),Vector4(0.7784,-0.0864,0.6217,0.3536)]);
{ .AddChildren }
Group311.AddChildren([OrientationInterpolator328]);
OrientationInterpolator329 := TOrientationInterpolatorNode.Create;
OrientationInterpolator329.SetKey([0,1]);
OrientationInterpolator329.SetKeyValue([Vector4(0.9184,0.2378,0.3162,0.9291),Vector4(0.9762,0.1432,0.1627,1.0525)]);
{ .AddChildren }
Group311.AddChildren([OrientationInterpolator329]);
OrientationInterpolator330 := TOrientationInterpolatorNode.Create;
OrientationInterpolator330.SetKey([0,1]);
OrientationInterpolator330.SetKeyValue([Vector4(-1,0,0,0.0199),Vector4(1,0,0,0.0286)]);
{ .AddChildren }
Group311.AddChildren([OrientationInterpolator330]);
OrientationInterpolator331 := TOrientationInterpolatorNode.Create;
OrientationInterpolator331.SetKey([0,1]);
OrientationInterpolator331.SetKeyValue([Vector4(-0.5548,-0.0795,-0.8282,0.3423),Vector4(-0.5234,-0.0778,-0.8485,0.3468)]);
{ .AddChildren }
Group311.AddChildren([OrientationInterpolator331]);
OrientationInterpolator332 := TOrientationInterpolatorNode.Create;
OrientationInterpolator332.SetKey([0,1]);
OrientationInterpolator332.SetKeyValue([Vector4(0.9694,-0.234,0.0739,0.9755),Vector4(0.9797,-0.1864,0.0732,0.9707)]);
{ .AddChildren }
Group311.AddChildren([OrientationInterpolator332]);
OrientationInterpolator333 := TOrientationInterpolatorNode.Create;
OrientationInterpolator333.SetKey([0,1]);
OrientationInterpolator333.SetKeyValue([Vector4(-1,0,0,0.418),Vector4(-1,0,0,0.4526)]);
{ .AddChildren }
Group311.AddChildren([OrientationInterpolator333]);
{ .AddChildren }
Group14.AddChildren([Group311]);
Group14.AddRoute(TimeSensor313.EventFraction_changed, ScalarInterpolator314.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(TimeSensor312.EventFraction_changed, PositionInterpolator315.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(ScalarInterpolator314.EventValue_changed, PositionInterpolator315.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(PositionInterpolator315.EventValue_changed, HAnimJoint53.FdTranslation);
{ .AddX3DRoute }
Group14.AddRoute(TimeSensor312.EventFraction_changed, OrientationInterpolator316.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(ScalarInterpolator314.EventValue_changed, OrientationInterpolator316.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(OrientationInterpolator316.EventValue_changed, HAnimJoint53.FdRotation);
{ .AddX3DRoute }
Group14.AddRoute(TimeSensor312.EventFraction_changed, OrientationInterpolator317.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(ScalarInterpolator314.EventValue_changed, OrientationInterpolator317.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(OrientationInterpolator317.EventValue_changed, HAnimJoint91.FdRotation);
{ .AddX3DRoute }
Group14.AddRoute(TimeSensor312.EventFraction_changed, OrientationInterpolator318.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(ScalarInterpolator314.EventValue_changed, OrientationInterpolator318.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(OrientationInterpolator318.EventValue_changed, HAnimJoint108.FdRotation);
{ .AddX3DRoute }
Group14.AddRoute(TimeSensor312.EventFraction_changed, OrientationInterpolator319.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(ScalarInterpolator314.EventValue_changed, OrientationInterpolator319.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(OrientationInterpolator319.EventValue_changed, HAnimJoint117.FdRotation);
{ .AddX3DRoute }
Group14.AddRoute(TimeSensor312.EventFraction_changed, OrientationInterpolator320.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(ScalarInterpolator314.EventValue_changed, OrientationInterpolator320.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(OrientationInterpolator320.EventValue_changed, HAnimJoint129.FdRotation);
{ .AddX3DRoute }
Group14.AddRoute(TimeSensor312.EventFraction_changed, OrientationInterpolator321.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(ScalarInterpolator314.EventValue_changed, OrientationInterpolator321.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(OrientationInterpolator321.EventValue_changed, HAnimJoint138.FdRotation);
{ .AddX3DRoute }
Group14.AddRoute(TimeSensor312.EventFraction_changed, OrientationInterpolator322.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(ScalarInterpolator314.EventValue_changed, OrientationInterpolator322.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(OrientationInterpolator322.EventValue_changed, HAnimJoint147.FdRotation);
{ .AddX3DRoute }
Group14.AddRoute(TimeSensor312.EventFraction_changed, OrientationInterpolator323.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(ScalarInterpolator314.EventValue_changed, OrientationInterpolator323.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(OrientationInterpolator323.EventValue_changed, HAnimJoint156.FdRotation);
{ .AddX3DRoute }
Group14.AddRoute(TimeSensor312.EventFraction_changed, OrientationInterpolator324.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(ScalarInterpolator314.EventValue_changed, OrientationInterpolator324.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(OrientationInterpolator324.EventValue_changed, HAnimJoint168.FdRotation);
{ .AddX3DRoute }
Group14.AddRoute(TimeSensor312.EventFraction_changed, OrientationInterpolator325.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(ScalarInterpolator314.EventValue_changed, OrientationInterpolator325.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(OrientationInterpolator325.EventValue_changed, HAnimJoint177.FdRotation);
{ .AddX3DRoute }
Group14.AddRoute(TimeSensor312.EventFraction_changed, OrientationInterpolator326.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(ScalarInterpolator314.EventValue_changed, OrientationInterpolator326.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(OrientationInterpolator326.EventValue_changed, HAnimJoint186.FdRotation);
{ .AddX3DRoute }
Group14.AddRoute(TimeSensor312.EventFraction_changed, OrientationInterpolator327.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(ScalarInterpolator314.EventValue_changed, OrientationInterpolator327.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(OrientationInterpolator327.EventValue_changed, HAnimJoint195.FdRotation);
{ .AddX3DRoute }
Group14.AddRoute(TimeSensor312.EventFraction_changed, OrientationInterpolator328.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(ScalarInterpolator314.EventValue_changed, OrientationInterpolator328.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(OrientationInterpolator328.EventValue_changed, HAnimJoint207.FdRotation);
{ .AddX3DRoute }
Group14.AddRoute(TimeSensor312.EventFraction_changed, OrientationInterpolator329.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(ScalarInterpolator314.EventValue_changed, OrientationInterpolator329.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(OrientationInterpolator329.EventValue_changed, HAnimJoint216.FdRotation);
{ .AddX3DRoute }
Group14.AddRoute(TimeSensor312.EventFraction_changed, OrientationInterpolator330.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(ScalarInterpolator314.EventValue_changed, OrientationInterpolator330.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(OrientationInterpolator330.EventValue_changed, HAnimJoint225.FdRotation);
{ .AddX3DRoute }
Group14.AddRoute(TimeSensor312.EventFraction_changed, OrientationInterpolator331.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(ScalarInterpolator314.EventValue_changed, OrientationInterpolator331.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(OrientationInterpolator331.EventValue_changed, HAnimJoint237.FdRotation);
{ .AddX3DRoute }
Group14.AddRoute(TimeSensor312.EventFraction_changed, OrientationInterpolator332.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(ScalarInterpolator314.EventValue_changed, OrientationInterpolator332.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(OrientationInterpolator332.EventValue_changed, HAnimJoint246.FdRotation);
{ .AddX3DRoute }
Group14.AddRoute(TimeSensor312.EventFraction_changed, OrientationInterpolator333.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(ScalarInterpolator314.EventValue_changed, OrientationInterpolator333.EventSet_fraction);
{ .AddX3DRoute }
Group14.AddRoute(OrientationInterpolator333.EventValue_changed, HAnimJoint255.FdRotation);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group14]);
Result := X3D0;
end;
