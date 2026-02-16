const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Full"));
scene.addMetaData("creator", "Holger Seelig");
scene.addMetaData("created", "Tue, 10 Feb 2026 12:09:57 GMT");
scene.addMetaData("modified", "Tue, 10 Feb 2026 12:34:21 GMT");
scene.addMetaData("generator", "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy");
scene.addMetaData("generator", "Sunrize X3D Editor V2.0.2, https://create3000.github.io/sunrize/");
await browser .loadComponents (scene);
let WorldInfo8 = browser.currentScene.createNode("WorldInfo");
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo8;

let Background9 = browser.currentScene.createNode("Background");
browser.currentScene.children[1] = Background9;

let Fog10 = browser.currentScene.createNode("Fog");
browser.currentScene.children[2] = Fog10;

let LocalFog11 = browser.currentScene.createNode("LocalFog");
browser.currentScene.children[3] = LocalFog11;

let TextureBackground12 = browser.currentScene.createNode("TextureBackground");
browser.currentScene.children[4] = TextureBackground12;

let ProximitySensor13 = browser.currentScene.createNode("ProximitySensor");
browser.currentScene.children[5] = ProximitySensor13;

let TransformSensor14 = browser.currentScene.createNode("TransformSensor");
browser.currentScene.children[6] = TransformSensor14;

let VisibilitySensor15 = browser.currentScene.createNode("VisibilitySensor");
browser.currentScene.children[7] = VisibilitySensor15;

let ColorChaser16 = browser.currentScene.createNode("ColorChaser");
browser.currentScene.children[8] = ColorChaser16;

let ColorDamper17 = browser.currentScene.createNode("ColorDamper");
browser.currentScene.children[9] = ColorDamper17;

let CoordinateChaser18 = browser.currentScene.createNode("CoordinateChaser");
browser.currentScene.children[10] = CoordinateChaser18;

let CoordinateDamper19 = browser.currentScene.createNode("CoordinateDamper");
browser.currentScene.children[11] = CoordinateDamper19;

let OrientationChaser20 = browser.currentScene.createNode("OrientationChaser");
browser.currentScene.children[12] = OrientationChaser20;

let OrientationDamper21 = browser.currentScene.createNode("OrientationDamper");
browser.currentScene.children[13] = OrientationDamper21;

let PositionChaser22 = browser.currentScene.createNode("PositionChaser");
browser.currentScene.children[14] = PositionChaser22;

let PositionChaser2D23 = browser.currentScene.createNode("PositionChaser2D");
browser.currentScene.children[15] = PositionChaser2D23;

let PositionDamper24 = browser.currentScene.createNode("PositionDamper");
browser.currentScene.children[16] = PositionDamper24;

let PositionDamper2D25 = browser.currentScene.createNode("PositionDamper2D");
browser.currentScene.children[17] = PositionDamper2D25;

let ScalarChaser26 = browser.currentScene.createNode("ScalarChaser");
browser.currentScene.children[18] = ScalarChaser26;

let ScalarDamper27 = browser.currentScene.createNode("ScalarDamper");
browser.currentScene.children[19] = ScalarDamper27;

let TexCoordChaser2D28 = browser.currentScene.createNode("TexCoordChaser2D");
browser.currentScene.children[20] = TexCoordChaser2D28;

let TexCoordDamper2D29 = browser.currentScene.createNode("TexCoordDamper2D");
browser.currentScene.children[21] = TexCoordDamper2D29;

let Group30 = browser.currentScene.createNode("Group");
browser.currentScene.children[22] = Group30;

let StaticGroup31 = browser.currentScene.createNode("StaticGroup");
browser.currentScene.children[23] = StaticGroup31;

let Switch32 = browser.currentScene.createNode("Switch");
Switch32.whichChoice = -1;
browser.currentScene.children[24] = Switch32;

let Transform33 = browser.currentScene.createNode("Transform");
browser.currentScene.children[25] = Transform33;

let ColorInterpolator34 = browser.currentScene.createNode("ColorInterpolator");
browser.currentScene.children[26] = ColorInterpolator34;

let CoordinateInterpolator35 = browser.currentScene.createNode("CoordinateInterpolator");
browser.currentScene.children[27] = CoordinateInterpolator35;

let CoordinateInterpolator2D36 = browser.currentScene.createNode("CoordinateInterpolator2D");
browser.currentScene.children[28] = CoordinateInterpolator2D36;

let EaseInEaseOut37 = browser.currentScene.createNode("EaseInEaseOut");
browser.currentScene.children[29] = EaseInEaseOut37;

let NormalInterpolator38 = browser.currentScene.createNode("NormalInterpolator");
browser.currentScene.children[30] = NormalInterpolator38;

let OrientationInterpolator39 = browser.currentScene.createNode("OrientationInterpolator");
browser.currentScene.children[31] = OrientationInterpolator39;

let PositionInterpolator40 = browser.currentScene.createNode("PositionInterpolator");
browser.currentScene.children[32] = PositionInterpolator40;

let PositionInterpolator2D41 = browser.currentScene.createNode("PositionInterpolator2D");
browser.currentScene.children[33] = PositionInterpolator2D41;

let ScalarInterpolator42 = browser.currentScene.createNode("ScalarInterpolator");
browser.currentScene.children[34] = ScalarInterpolator42;

let SplinePositionInterpolator43 = browser.currentScene.createNode("SplinePositionInterpolator");
browser.currentScene.children[35] = SplinePositionInterpolator43;

let SplinePositionInterpolator2D44 = browser.currentScene.createNode("SplinePositionInterpolator2D");
browser.currentScene.children[36] = SplinePositionInterpolator2D44;

let SplineScalarInterpolator45 = browser.currentScene.createNode("SplineScalarInterpolator");
browser.currentScene.children[37] = SplineScalarInterpolator45;

let SquadOrientationInterpolator46 = browser.currentScene.createNode("SquadOrientationInterpolator");
browser.currentScene.children[38] = SquadOrientationInterpolator46;

let LayerSet47 = browser.currentScene.createNode("LayerSet");
browser.currentScene.layerSet[39] = LayerSet47;

let DirectionalLight48 = browser.currentScene.createNode("DirectionalLight");
browser.currentScene.children[40] = DirectionalLight48;

let EnvironmentLight49 = browser.currentScene.createNode("EnvironmentLight");
EnvironmentLight49.origin = new X3D.SFVec3f([0,0,0]);
EnvironmentLight49.rotation = new X3D.SFRotation([0,0,1,0]);
browser.currentScene.children[41] = EnvironmentLight49;

let PointLight50 = browser.currentScene.createNode("PointLight");
browser.currentScene.children[42] = PointLight50;

let SpotLight51 = browser.currentScene.createNode("SpotLight");
SpotLight51.beamWidth = 0.589049;
browser.currentScene.children[43] = SpotLight51;

let Billboard52 = browser.currentScene.createNode("Billboard");
browser.currentScene.children[44] = Billboard52;

let Collision53 = browser.currentScene.createNode("Collision");
browser.currentScene.children[45] = Collision53;

let LOD54 = browser.currentScene.createNode("LOD");
browser.currentScene.children[46] = LOD54;

let NavigationInfo55 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[47] = NavigationInfo55;

let OrthoViewpoint56 = browser.currentScene.createNode("OrthoViewpoint");
browser.currentScene.children[48] = OrthoViewpoint56;

let Viewpoint57 = browser.currentScene.createNode("Viewpoint");
browser.currentScene.children[49] = Viewpoint57;

let ViewpointGroup58 = browser.currentScene.createNode("ViewpointGroup");
browser.currentScene.children[50] = ViewpointGroup58;

let Anchor59 = browser.currentScene.createNode("Anchor");
browser.currentScene.children[51] = Anchor59;

let Inline60 = browser.currentScene.createNode("Inline");
browser.currentScene.children[52] = Inline60;

let LoadSensor61 = browser.currentScene.createNode("LoadSensor");
browser.currentScene.children[53] = LoadSensor61;

let CylinderSensor62 = browser.currentScene.createNode("CylinderSensor");
browser.currentScene.children[54] = CylinderSensor62;

let PlaneSensor63 = browser.currentScene.createNode("PlaneSensor");
browser.currentScene.children[55] = PlaneSensor63;

let SphereSensor64 = browser.currentScene.createNode("SphereSensor");
browser.currentScene.children[56] = SphereSensor64;

let TouchSensor65 = browser.currentScene.createNode("TouchSensor");
browser.currentScene.children[57] = TouchSensor65;

let ClipPlane66 = browser.currentScene.createNode("ClipPlane");
browser.currentScene.children[58] = ClipPlane66;

let Shape67 = browser.currentScene.createNode("Shape");
browser.currentScene.children[59] = Shape67;

let Analyser68 = browser.currentScene.createNode("Analyser");
browser.currentScene.children[60] = Analyser68;

let AudioDestination69 = browser.currentScene.createNode("AudioDestination");
browser.currentScene.children[61] = AudioDestination69;

let BiquadFilter70 = browser.currentScene.createNode("BiquadFilter");
BiquadFilter70.type = "LOWPASS";
browser.currentScene.children[62] = BiquadFilter70;

let BufferAudioSource71 = browser.currentScene.createNode("BufferAudioSource");
browser.currentScene.children[63] = BufferAudioSource71;

let ChannelMerger72 = browser.currentScene.createNode("ChannelMerger");
browser.currentScene.children[64] = ChannelMerger72;

let ChannelSelector73 = browser.currentScene.createNode("ChannelSelector");
browser.currentScene.children[65] = ChannelSelector73;

let ChannelSplitter74 = browser.currentScene.createNode("ChannelSplitter");
browser.currentScene.children[66] = ChannelSplitter74;

let Convolver75 = browser.currentScene.createNode("Convolver");
browser.currentScene.children[67] = Convolver75;

let Delay76 = browser.currentScene.createNode("Delay");
browser.currentScene.children[68] = Delay76;

let DynamicsCompressor77 = browser.currentScene.createNode("DynamicsCompressor");
browser.currentScene.children[69] = DynamicsCompressor77;

let Gain78 = browser.currentScene.createNode("Gain");
browser.currentScene.children[70] = Gain78;

let ListenerPointSource79 = browser.currentScene.createNode("ListenerPointSource");
browser.currentScene.children[71] = ListenerPointSource79;

let MicrophoneSource80 = browser.currentScene.createNode("MicrophoneSource");
browser.currentScene.children[72] = MicrophoneSource80;

let OscillatorSource81 = browser.currentScene.createNode("OscillatorSource");
browser.currentScene.children[73] = OscillatorSource81;

let Sound82 = browser.currentScene.createNode("Sound");
browser.currentScene.children[74] = Sound82;

let SpatialSound83 = browser.currentScene.createNode("SpatialSound");
browser.currentScene.children[75] = SpatialSound83;

let StreamAudioDestination84 = browser.currentScene.createNode("StreamAudioDestination");
browser.currentScene.children[76] = StreamAudioDestination84;

let StreamAudioSource85 = browser.currentScene.createNode("StreamAudioSource");
browser.currentScene.children[77] = StreamAudioSource85;

let WaveShaper86 = browser.currentScene.createNode("WaveShaper");
browser.currentScene.children[78] = WaveShaper86;

let TimeSensor87 = browser.currentScene.createNode("TimeSensor");
browser.currentScene.children[79] = TimeSensor87;

let CADAssembly88 = browser.currentScene.createNode("CADAssembly");
browser.currentScene.children[80] = CADAssembly88;

let CADFace89 = browser.currentScene.createNode("CADFace");
browser.currentScene.children[81] = CADFace89;

let CADLayer90 = browser.currentScene.createNode("CADLayer");
browser.currentScene.children[82] = CADLayer90;

let CADPart91 = browser.currentScene.createNode("CADPart");
browser.currentScene.children[83] = CADPart91;

let DISEntityManager92 = browser.currentScene.createNode("DISEntityManager");
browser.currentScene.children[84] = DISEntityManager92;

let DISEntityTypeMapping93 = browser.currentScene.createNode("DISEntityTypeMapping");
browser.currentScene.children[85] = DISEntityTypeMapping93;

let EspduTransform94 = browser.currentScene.createNode("EspduTransform");
browser.currentScene.children[86] = EspduTransform94;

let ReceiverPdu95 = browser.currentScene.createNode("ReceiverPdu");
browser.currentScene.children[87] = ReceiverPdu95;

let SignalPdu96 = browser.currentScene.createNode("SignalPdu");
browser.currentScene.children[88] = SignalPdu96;

let TransmitterPdu97 = browser.currentScene.createNode("TransmitterPdu");
browser.currentScene.children[89] = TransmitterPdu97;

let BooleanFilter98 = browser.currentScene.createNode("BooleanFilter");
browser.currentScene.children[90] = BooleanFilter98;

let BooleanSequencer99 = browser.currentScene.createNode("BooleanSequencer");
browser.currentScene.children[91] = BooleanSequencer99;

let BooleanToggle100 = browser.currentScene.createNode("BooleanToggle");
browser.currentScene.children[92] = BooleanToggle100;

let BooleanTrigger101 = browser.currentScene.createNode("BooleanTrigger");
browser.currentScene.children[93] = BooleanTrigger101;

let IntegerSequencer102 = browser.currentScene.createNode("IntegerSequencer");
browser.currentScene.children[94] = IntegerSequencer102;

let IntegerTrigger103 = browser.currentScene.createNode("IntegerTrigger");
browser.currentScene.children[95] = IntegerTrigger103;

let TimeTrigger104 = browser.currentScene.createNode("TimeTrigger");
browser.currentScene.children[96] = TimeTrigger104;

let KeySensor105 = browser.currentScene.createNode("KeySensor");
KeySensor105.enabled = False;
browser.currentScene.children[97] = KeySensor105;

let StringSensor106 = browser.currentScene.createNode("StringSensor");
browser.currentScene.children[98] = StringSensor106;

let TextureProjector107 = browser.currentScene.createNode("TextureProjector");
TextureProjector107.ambientIntensity = 0;
TextureProjector107.color = new X3D.SFColor([1,1,1]);
TextureProjector107.fieldOfView = 0.7854;
TextureProjector107.intensity = 0.7854;
TextureProjector107.upVector = new X3D.SFVec3f([0,1,0]);
browser.currentScene.children[99] = TextureProjector107;

let TextureProjectorParallel108 = browser.currentScene.createNode("TextureProjectorParallel");
TextureProjectorParallel108.ambientIntensity = 0;
TextureProjectorParallel108.color = new X3D.SFColor([1,1,1]);
TextureProjectorParallel108.intensity = 0.7854;
TextureProjectorParallel108.upVector = new X3D.SFVec3f([0,1,0]);
browser.currentScene.children[100] = TextureProjectorParallel108;

let HAnimHumanoid109 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid109.version = "2.0";
browser.currentScene.children[101] = HAnimHumanoid109;

let HAnimJoint110 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint110.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint110.llimit = new X3D.MFFloat([0,0,0]);
browser.currentScene.children[102] = HAnimJoint110;

let HAnimPose111 = browser.currentScene.createNode("HAnimPose");
HAnimPose111.loa = -1;
HAnimPose111.transitionDuration = 0;
browser.currentScene.children[103] = HAnimPose111;

let HAnimSegment112 = browser.currentScene.createNode("HAnimSegment");
browser.currentScene.children[104] = HAnimSegment112;

let HAnimSite113 = browser.currentScene.createNode("HAnimSite");
browser.currentScene.children[105] = HAnimSite113;

let ParticleSystem114 = browser.currentScene.createNode("ParticleSystem");
browser.currentScene.children[106] = ParticleSystem114;

let Script115 = browser.currentScene.createNode("Script");
browser.currentScene.children[107] = Script115;

let FontLibrary116 = browser.currentScene.createNode("FontLibrary");
browser.currentScene.children[108] = FontLibrary116;

let CollidableOffset117 = browser.currentScene.createNode("CollidableOffset");
browser.currentScene.children[109] = CollidableOffset117;

let CollidableShape118 = browser.currentScene.createNode("CollidableShape");
browser.currentScene.children[110] = CollidableShape118;

let CollisionSensor119 = browser.currentScene.createNode("CollisionSensor");
browser.currentScene.children[111] = CollisionSensor119;

let CollisionSpace120 = browser.currentScene.createNode("CollisionSpace");
browser.currentScene.children[112] = CollisionSpace120;

let RigidBodyCollection121 = browser.currentScene.createNode("RigidBodyCollection");
browser.currentScene.children[113] = RigidBodyCollection121;

let IsoSurfaceVolumeData122 = browser.currentScene.createNode("IsoSurfaceVolumeData");
browser.currentScene.children[114] = IsoSurfaceVolumeData122;

let SegmentedVolumeData123 = browser.currentScene.createNode("SegmentedVolumeData");
browser.currentScene.children[115] = SegmentedVolumeData123;

let VolumeData124 = browser.currentScene.createNode("VolumeData");
browser.currentScene.children[116] = VolumeData124;

let GeoLOD125 = browser.currentScene.createNode("GeoLOD");
browser.currentScene.children[117] = GeoLOD125;

let GeoLocation126 = browser.currentScene.createNode("GeoLocation");
browser.currentScene.children[118] = GeoLocation126;

let GeoMetadata127 = browser.currentScene.createNode("GeoMetadata");
browser.currentScene.children[119] = GeoMetadata127;

let GeoPositionInterpolator128 = browser.currentScene.createNode("GeoPositionInterpolator");
browser.currentScene.children[120] = GeoPositionInterpolator128;

let GeoProximitySensor129 = browser.currentScene.createNode("GeoProximitySensor");
browser.currentScene.children[121] = GeoProximitySensor129;

let GeoTouchSensor130 = browser.currentScene.createNode("GeoTouchSensor");
browser.currentScene.children[122] = GeoTouchSensor130;

let GeoTransform131 = browser.currentScene.createNode("GeoTransform");
browser.currentScene.children[123] = GeoTransform131;

let GeoViewpoint132 = browser.currentScene.createNode("GeoViewpoint");
browser.currentScene.children[124] = GeoViewpoint132;

let ContourPolyline2D133 = browser.currentScene.createNode("ContourPolyline2D");
browser.currentScene.children[125] = ContourPolyline2D133;

let NurbsCurve2D134 = browser.currentScene.createNode("NurbsCurve2D");
browser.currentScene.children[126] = NurbsCurve2D134;

let NurbsOrientationInterpolator135 = browser.currentScene.createNode("NurbsOrientationInterpolator");
browser.currentScene.children[127] = NurbsOrientationInterpolator135;

let NurbsPositionInterpolator136 = browser.currentScene.createNode("NurbsPositionInterpolator");
browser.currentScene.children[128] = NurbsPositionInterpolator136;

let NurbsSet137 = browser.currentScene.createNode("NurbsSet");
browser.currentScene.children[129] = NurbsSet137;

let NurbsSurfaceInterpolator138 = browser.currentScene.createNode("NurbsSurfaceInterpolator");
browser.currentScene.children[130] = NurbsSurfaceInterpolator138;

let LayoutGroup139 = browser.currentScene.createNode("LayoutGroup");
browser.currentScene.children[131] = LayoutGroup139;

let ScreenGroup140 = browser.currentScene.createNode("ScreenGroup");
browser.currentScene.children[132] = ScreenGroup140;

let LinePickSensor141 = browser.currentScene.createNode("LinePickSensor");
browser.currentScene.children[133] = LinePickSensor141;

let PickableGroup142 = browser.currentScene.createNode("PickableGroup");
browser.currentScene.children[134] = PickableGroup142;

let PointPickSensor143 = browser.currentScene.createNode("PointPickSensor");
browser.currentScene.children[135] = PointPickSensor143;

let PrimitivePickSensor144 = browser.currentScene.createNode("PrimitivePickSensor");
browser.currentScene.children[136] = PrimitivePickSensor144;

let VolumePickSensor145 = browser.currentScene.createNode("VolumePickSensor");
browser.currentScene.children[137] = VolumePickSensor145;

}
main ();
