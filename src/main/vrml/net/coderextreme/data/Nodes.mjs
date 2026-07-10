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

let PointLight49 = browser.currentScene.createNode("PointLight");
browser.currentScene.children[41] = PointLight49;

let SpotLight50 = browser.currentScene.createNode("SpotLight");
SpotLight50.beamWidth = 0.589049;
browser.currentScene.children[42] = SpotLight50;

let Billboard51 = browser.currentScene.createNode("Billboard");
browser.currentScene.children[43] = Billboard51;

let Collision52 = browser.currentScene.createNode("Collision");
browser.currentScene.children[44] = Collision52;

let LOD53 = browser.currentScene.createNode("LOD");
browser.currentScene.children[45] = LOD53;

let NavigationInfo54 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[46] = NavigationInfo54;

let OrthoViewpoint55 = browser.currentScene.createNode("OrthoViewpoint");
browser.currentScene.children[47] = OrthoViewpoint55;

let Viewpoint56 = browser.currentScene.createNode("Viewpoint");
browser.currentScene.children[48] = Viewpoint56;

let ViewpointGroup57 = browser.currentScene.createNode("ViewpointGroup");
browser.currentScene.children[49] = ViewpointGroup57;

let Anchor58 = browser.currentScene.createNode("Anchor");
browser.currentScene.children[50] = Anchor58;

let Inline59 = browser.currentScene.createNode("Inline");
browser.currentScene.children[51] = Inline59;

let LoadSensor60 = browser.currentScene.createNode("LoadSensor");
browser.currentScene.children[52] = LoadSensor60;

let CylinderSensor61 = browser.currentScene.createNode("CylinderSensor");
browser.currentScene.children[53] = CylinderSensor61;

let PlaneSensor62 = browser.currentScene.createNode("PlaneSensor");
browser.currentScene.children[54] = PlaneSensor62;

let SphereSensor63 = browser.currentScene.createNode("SphereSensor");
browser.currentScene.children[55] = SphereSensor63;

let TouchSensor64 = browser.currentScene.createNode("TouchSensor");
browser.currentScene.children[56] = TouchSensor64;

let ClipPlane65 = browser.currentScene.createNode("ClipPlane");
browser.currentScene.children[57] = ClipPlane65;

let Shape66 = browser.currentScene.createNode("Shape");
browser.currentScene.children[58] = Shape66;

let Analyser67 = browser.currentScene.createNode("Analyser");
browser.currentScene.children[59] = Analyser67;

let AudioDestination68 = browser.currentScene.createNode("AudioDestination");
browser.currentScene.children[60] = AudioDestination68;

let BiquadFilter69 = browser.currentScene.createNode("BiquadFilter");
BiquadFilter69.type = "LOWPASS";
browser.currentScene.children[61] = BiquadFilter69;

let BufferAudioSource70 = browser.currentScene.createNode("BufferAudioSource");
browser.currentScene.children[62] = BufferAudioSource70;

let ChannelMerger71 = browser.currentScene.createNode("ChannelMerger");
browser.currentScene.children[63] = ChannelMerger71;

let ChannelSelector72 = browser.currentScene.createNode("ChannelSelector");
browser.currentScene.children[64] = ChannelSelector72;

let ChannelSplitter73 = browser.currentScene.createNode("ChannelSplitter");
browser.currentScene.children[65] = ChannelSplitter73;

let Convolver74 = browser.currentScene.createNode("Convolver");
browser.currentScene.children[66] = Convolver74;

let Delay75 = browser.currentScene.createNode("Delay");
browser.currentScene.children[67] = Delay75;

let DynamicsCompressor76 = browser.currentScene.createNode("DynamicsCompressor");
browser.currentScene.children[68] = DynamicsCompressor76;

let Gain77 = browser.currentScene.createNode("Gain");
browser.currentScene.children[69] = Gain77;

let ListenerPointSource78 = browser.currentScene.createNode("ListenerPointSource");
browser.currentScene.children[70] = ListenerPointSource78;

let MicrophoneSource79 = browser.currentScene.createNode("MicrophoneSource");
browser.currentScene.children[71] = MicrophoneSource79;

let OscillatorSource80 = browser.currentScene.createNode("OscillatorSource");
browser.currentScene.children[72] = OscillatorSource80;

let Sound81 = browser.currentScene.createNode("Sound");
browser.currentScene.children[73] = Sound81;

let SpatialSound82 = browser.currentScene.createNode("SpatialSound");
browser.currentScene.children[74] = SpatialSound82;

let StreamAudioDestination83 = browser.currentScene.createNode("StreamAudioDestination");
browser.currentScene.children[75] = StreamAudioDestination83;

let StreamAudioSource84 = browser.currentScene.createNode("StreamAudioSource");
browser.currentScene.children[76] = StreamAudioSource84;

let WaveShaper85 = browser.currentScene.createNode("WaveShaper");
browser.currentScene.children[77] = WaveShaper85;

let TimeSensor86 = browser.currentScene.createNode("TimeSensor");
browser.currentScene.children[78] = TimeSensor86;

let CADAssembly87 = browser.currentScene.createNode("CADAssembly");
browser.currentScene.children[79] = CADAssembly87;

let CADFace88 = browser.currentScene.createNode("CADFace");
browser.currentScene.children[80] = CADFace88;

let CADLayer89 = browser.currentScene.createNode("CADLayer");
browser.currentScene.children[81] = CADLayer89;

let CADPart90 = browser.currentScene.createNode("CADPart");
browser.currentScene.children[82] = CADPart90;

let DISEntityManager91 = browser.currentScene.createNode("DISEntityManager");
browser.currentScene.children[83] = DISEntityManager91;

let DISEntityTypeMapping92 = browser.currentScene.createNode("DISEntityTypeMapping");
browser.currentScene.children[84] = DISEntityTypeMapping92;

let EspduTransform93 = browser.currentScene.createNode("EspduTransform");
browser.currentScene.children[85] = EspduTransform93;

let ReceiverPdu94 = browser.currentScene.createNode("ReceiverPdu");
browser.currentScene.children[86] = ReceiverPdu94;

let SignalPdu95 = browser.currentScene.createNode("SignalPdu");
browser.currentScene.children[87] = SignalPdu95;

let TransmitterPdu96 = browser.currentScene.createNode("TransmitterPdu");
browser.currentScene.children[88] = TransmitterPdu96;

let BooleanFilter97 = browser.currentScene.createNode("BooleanFilter");
browser.currentScene.children[89] = BooleanFilter97;

let BooleanSequencer98 = browser.currentScene.createNode("BooleanSequencer");
browser.currentScene.children[90] = BooleanSequencer98;

let BooleanToggle99 = browser.currentScene.createNode("BooleanToggle");
browser.currentScene.children[91] = BooleanToggle99;

let BooleanTrigger100 = browser.currentScene.createNode("BooleanTrigger");
browser.currentScene.children[92] = BooleanTrigger100;

let IntegerSequencer101 = browser.currentScene.createNode("IntegerSequencer");
browser.currentScene.children[93] = IntegerSequencer101;

let IntegerTrigger102 = browser.currentScene.createNode("IntegerTrigger");
browser.currentScene.children[94] = IntegerTrigger102;

let TimeTrigger103 = browser.currentScene.createNode("TimeTrigger");
browser.currentScene.children[95] = TimeTrigger103;

let KeySensor104 = browser.currentScene.createNode("KeySensor");
KeySensor104.enabled = False;
browser.currentScene.children[96] = KeySensor104;

let StringSensor105 = browser.currentScene.createNode("StringSensor");
browser.currentScene.children[97] = StringSensor105;

let TextureProjector106 = browser.currentScene.createNode("TextureProjector");
TextureProjector106.ambientIntensity = 0;
TextureProjector106.color = new X3D.SFColor([1,1,1]);
TextureProjector106.fieldOfView = 0.7854;
TextureProjector106.intensity = 0.7854;
TextureProjector106.upVector = new X3D.SFVec3f([0,1,0]);
browser.currentScene.children[98] = TextureProjector106;

let TextureProjectorParallel107 = browser.currentScene.createNode("TextureProjectorParallel");
TextureProjectorParallel107.ambientIntensity = 0;
TextureProjectorParallel107.color = new X3D.SFColor([1,1,1]);
TextureProjectorParallel107.intensity = 0.7854;
TextureProjectorParallel107.upVector = new X3D.SFVec3f([0,1,0]);
browser.currentScene.children[99] = TextureProjectorParallel107;

let HAnimHumanoid108 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid108.version = "2.0";
browser.currentScene.children[100] = HAnimHumanoid108;

let HAnimJoint109 = browser.currentScene.createNode("HAnimJoint");
browser.currentScene.children[101] = HAnimJoint109;

let HAnimSegment110 = browser.currentScene.createNode("HAnimSegment");
browser.currentScene.children[102] = HAnimSegment110;

let HAnimSite111 = browser.currentScene.createNode("HAnimSite");
browser.currentScene.children[103] = HAnimSite111;

let ParticleSystem112 = browser.currentScene.createNode("ParticleSystem");
browser.currentScene.children[104] = ParticleSystem112;

let Script113 = browser.currentScene.createNode("Script");
browser.currentScene.children[105] = Script113;

let CollidableOffset114 = browser.currentScene.createNode("CollidableOffset");
browser.currentScene.children[106] = CollidableOffset114;

let CollidableShape115 = browser.currentScene.createNode("CollidableShape");
browser.currentScene.children[107] = CollidableShape115;

let CollisionSensor116 = browser.currentScene.createNode("CollisionSensor");
browser.currentScene.children[108] = CollisionSensor116;

let CollisionSpace117 = browser.currentScene.createNode("CollisionSpace");
browser.currentScene.children[109] = CollisionSpace117;

let RigidBodyCollection118 = browser.currentScene.createNode("RigidBodyCollection");
browser.currentScene.children[110] = RigidBodyCollection118;

let IsoSurfaceVolumeData119 = browser.currentScene.createNode("IsoSurfaceVolumeData");
browser.currentScene.children[111] = IsoSurfaceVolumeData119;

let SegmentedVolumeData120 = browser.currentScene.createNode("SegmentedVolumeData");
browser.currentScene.children[112] = SegmentedVolumeData120;

let VolumeData121 = browser.currentScene.createNode("VolumeData");
browser.currentScene.children[113] = VolumeData121;

let GeoLOD122 = browser.currentScene.createNode("GeoLOD");
browser.currentScene.children[114] = GeoLOD122;

let GeoLocation123 = browser.currentScene.createNode("GeoLocation");
browser.currentScene.children[115] = GeoLocation123;

let GeoMetadata124 = browser.currentScene.createNode("GeoMetadata");
browser.currentScene.children[116] = GeoMetadata124;

let GeoPositionInterpolator125 = browser.currentScene.createNode("GeoPositionInterpolator");
browser.currentScene.children[117] = GeoPositionInterpolator125;

let GeoProximitySensor126 = browser.currentScene.createNode("GeoProximitySensor");
browser.currentScene.children[118] = GeoProximitySensor126;

let GeoTouchSensor127 = browser.currentScene.createNode("GeoTouchSensor");
browser.currentScene.children[119] = GeoTouchSensor127;

let GeoTransform128 = browser.currentScene.createNode("GeoTransform");
browser.currentScene.children[120] = GeoTransform128;

let GeoViewpoint129 = browser.currentScene.createNode("GeoViewpoint");
browser.currentScene.children[121] = GeoViewpoint129;

let ContourPolyline2D130 = browser.currentScene.createNode("ContourPolyline2D");
browser.currentScene.children[122] = ContourPolyline2D130;

let NurbsCurve2D131 = browser.currentScene.createNode("NurbsCurve2D");
browser.currentScene.children[123] = NurbsCurve2D131;

let NurbsOrientationInterpolator132 = browser.currentScene.createNode("NurbsOrientationInterpolator");
browser.currentScene.children[124] = NurbsOrientationInterpolator132;

let NurbsPositionInterpolator133 = browser.currentScene.createNode("NurbsPositionInterpolator");
browser.currentScene.children[125] = NurbsPositionInterpolator133;

let NurbsSet134 = browser.currentScene.createNode("NurbsSet");
browser.currentScene.children[126] = NurbsSet134;

let NurbsSurfaceInterpolator135 = browser.currentScene.createNode("NurbsSurfaceInterpolator");
browser.currentScene.children[127] = NurbsSurfaceInterpolator135;

let LayoutGroup136 = browser.currentScene.createNode("LayoutGroup");
browser.currentScene.children[128] = LayoutGroup136;

let ScreenGroup137 = browser.currentScene.createNode("ScreenGroup");
browser.currentScene.children[129] = ScreenGroup137;

let LinePickSensor138 = browser.currentScene.createNode("LinePickSensor");
browser.currentScene.children[130] = LinePickSensor138;

let PickableGroup139 = browser.currentScene.createNode("PickableGroup");
browser.currentScene.children[131] = PickableGroup139;

let PointPickSensor140 = browser.currentScene.createNode("PointPickSensor");
browser.currentScene.children[132] = PointPickSensor140;

let PrimitivePickSensor141 = browser.currentScene.createNode("PrimitivePickSensor");
browser.currentScene.children[133] = PrimitivePickSensor141;

let VolumePickSensor142 = browser.currentScene.createNode("VolumePickSensor");
browser.currentScene.children[134] = VolumePickSensor142;

}
main ();
