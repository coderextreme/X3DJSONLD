#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "creator";
meta2.content = "Holger Seelig";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Tue, 10 Feb 2026 12:09:57 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "modified";
meta4.content = "Tue, 10 Feb 2026 12:34:21 GMT";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "generator";
meta6.content = "Sunrize X3D Editor V2.0.2, https://create3000.github.io/sunrize/";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
children = new MFNode();

children[0] = WorldInfo8;

Background Background9 = createNode("Background");
children[1] = Background9;

Fog Fog10 = createNode("Fog");
children[2] = Fog10;

LocalFog LocalFog11 = createNode("LocalFog");
children[3] = LocalFog11;

TextureBackground TextureBackground12 = createNode("TextureBackground");
children[4] = TextureBackground12;

ProximitySensor ProximitySensor13 = createNode("ProximitySensor");
children[5] = ProximitySensor13;

TransformSensor TransformSensor14 = createNode("TransformSensor");
children[6] = TransformSensor14;

VisibilitySensor VisibilitySensor15 = createNode("VisibilitySensor");
children[7] = VisibilitySensor15;

ColorChaser ColorChaser16 = createNode("ColorChaser");
children[8] = ColorChaser16;

ColorDamper ColorDamper17 = createNode("ColorDamper");
children[9] = ColorDamper17;

CoordinateChaser CoordinateChaser18 = createNode("CoordinateChaser");
children[10] = CoordinateChaser18;

CoordinateDamper CoordinateDamper19 = createNode("CoordinateDamper");
children[11] = CoordinateDamper19;

OrientationChaser OrientationChaser20 = createNode("OrientationChaser");
children[12] = OrientationChaser20;

OrientationDamper OrientationDamper21 = createNode("OrientationDamper");
children[13] = OrientationDamper21;

PositionChaser PositionChaser22 = createNode("PositionChaser");
children[14] = PositionChaser22;

PositionChaser2D PositionChaser2D23 = createNode("PositionChaser2D");
children[15] = PositionChaser2D23;

PositionDamper PositionDamper24 = createNode("PositionDamper");
children[16] = PositionDamper24;

PositionDamper2D PositionDamper2D25 = createNode("PositionDamper2D");
children[17] = PositionDamper2D25;

ScalarChaser ScalarChaser26 = createNode("ScalarChaser");
children[18] = ScalarChaser26;

ScalarDamper ScalarDamper27 = createNode("ScalarDamper");
children[19] = ScalarDamper27;

TexCoordChaser2D TexCoordChaser2D28 = createNode("TexCoordChaser2D");
children[20] = TexCoordChaser2D28;

TexCoordDamper2D TexCoordDamper2D29 = createNode("TexCoordDamper2D");
children[21] = TexCoordDamper2D29;

Group Group30 = createNode("Group");
children[22] = Group30;

StaticGroup StaticGroup31 = createNode("StaticGroup");
children[23] = StaticGroup31;

Switch Switch32 = createNode("Switch");
Switch32.whichChoice = -1;
children[24] = Switch32;

Transform Transform33 = createNode("Transform");
children[25] = Transform33;

ColorInterpolator ColorInterpolator34 = createNode("ColorInterpolator");
children[26] = ColorInterpolator34;

CoordinateInterpolator CoordinateInterpolator35 = createNode("CoordinateInterpolator");
children[27] = CoordinateInterpolator35;

CoordinateInterpolator2D CoordinateInterpolator2D36 = createNode("CoordinateInterpolator2D");
children[28] = CoordinateInterpolator2D36;

EaseInEaseOut EaseInEaseOut37 = createNode("EaseInEaseOut");
children[29] = EaseInEaseOut37;

NormalInterpolator NormalInterpolator38 = createNode("NormalInterpolator");
children[30] = NormalInterpolator38;

OrientationInterpolator OrientationInterpolator39 = createNode("OrientationInterpolator");
children[31] = OrientationInterpolator39;

PositionInterpolator PositionInterpolator40 = createNode("PositionInterpolator");
children[32] = PositionInterpolator40;

PositionInterpolator2D PositionInterpolator2D41 = createNode("PositionInterpolator2D");
children[33] = PositionInterpolator2D41;

ScalarInterpolator ScalarInterpolator42 = createNode("ScalarInterpolator");
children[34] = ScalarInterpolator42;

SplinePositionInterpolator SplinePositionInterpolator43 = createNode("SplinePositionInterpolator");
children[35] = SplinePositionInterpolator43;

SplinePositionInterpolator2D SplinePositionInterpolator2D44 = createNode("SplinePositionInterpolator2D");
children[36] = SplinePositionInterpolator2D44;

SplineScalarInterpolator SplineScalarInterpolator45 = createNode("SplineScalarInterpolator");
children[37] = SplineScalarInterpolator45;

SquadOrientationInterpolator SquadOrientationInterpolator46 = createNode("SquadOrientationInterpolator");
children[38] = SquadOrientationInterpolator46;

LayerSet LayerSet47 = createNode("LayerSet");
layerSet[39] = LayerSet47;

DirectionalLight DirectionalLight48 = createNode("DirectionalLight");
children[40] = DirectionalLight48;

PointLight PointLight49 = createNode("PointLight");
children[41] = PointLight49;

SpotLight SpotLight50 = createNode("SpotLight");
SpotLight50.beamWidth = 0.589049;
children[42] = SpotLight50;

Billboard Billboard51 = createNode("Billboard");
children[43] = Billboard51;

Collision Collision52 = createNode("Collision");
children[44] = Collision52;

LOD LOD53 = createNode("LOD");
children[45] = LOD53;

NavigationInfo NavigationInfo54 = createNode("NavigationInfo");
children[46] = NavigationInfo54;

OrthoViewpoint OrthoViewpoint55 = createNode("OrthoViewpoint");
children[47] = OrthoViewpoint55;

Viewpoint Viewpoint56 = createNode("Viewpoint");
children[48] = Viewpoint56;

ViewpointGroup ViewpointGroup57 = createNode("ViewpointGroup");
children[49] = ViewpointGroup57;

Anchor Anchor58 = createNode("Anchor");
children[50] = Anchor58;

Inline Inline59 = createNode("Inline");
children[51] = Inline59;

LoadSensor LoadSensor60 = createNode("LoadSensor");
children[52] = LoadSensor60;

CylinderSensor CylinderSensor61 = createNode("CylinderSensor");
children[53] = CylinderSensor61;

PlaneSensor PlaneSensor62 = createNode("PlaneSensor");
children[54] = PlaneSensor62;

SphereSensor SphereSensor63 = createNode("SphereSensor");
children[55] = SphereSensor63;

TouchSensor TouchSensor64 = createNode("TouchSensor");
children[56] = TouchSensor64;

ClipPlane ClipPlane65 = createNode("ClipPlane");
children[57] = ClipPlane65;

Shape Shape66 = createNode("Shape");
children[58] = Shape66;

Analyser Analyser67 = createNode("Analyser");
children[59] = Analyser67;

AudioDestination AudioDestination68 = createNode("AudioDestination");
children[60] = AudioDestination68;

BiquadFilter BiquadFilter69 = createNode("BiquadFilter");
BiquadFilter69.type = "LOWPASS";
children[61] = BiquadFilter69;

BufferAudioSource BufferAudioSource70 = createNode("BufferAudioSource");
children[62] = BufferAudioSource70;

ChannelMerger ChannelMerger71 = createNode("ChannelMerger");
children[63] = ChannelMerger71;

ChannelSelector ChannelSelector72 = createNode("ChannelSelector");
children[64] = ChannelSelector72;

ChannelSplitter ChannelSplitter73 = createNode("ChannelSplitter");
children[65] = ChannelSplitter73;

Convolver Convolver74 = createNode("Convolver");
children[66] = Convolver74;

Delay Delay75 = createNode("Delay");
children[67] = Delay75;

DynamicsCompressor DynamicsCompressor76 = createNode("DynamicsCompressor");
children[68] = DynamicsCompressor76;

Gain Gain77 = createNode("Gain");
children[69] = Gain77;

ListenerPointSource ListenerPointSource78 = createNode("ListenerPointSource");
children[70] = ListenerPointSource78;

MicrophoneSource MicrophoneSource79 = createNode("MicrophoneSource");
children[71] = MicrophoneSource79;

OscillatorSource OscillatorSource80 = createNode("OscillatorSource");
children[72] = OscillatorSource80;

Sound Sound81 = createNode("Sound");
children[73] = Sound81;

SpatialSound SpatialSound82 = createNode("SpatialSound");
children[74] = SpatialSound82;

StreamAudioDestination StreamAudioDestination83 = createNode("StreamAudioDestination");
children[75] = StreamAudioDestination83;

StreamAudioSource StreamAudioSource84 = createNode("StreamAudioSource");
children[76] = StreamAudioSource84;

WaveShaper WaveShaper85 = createNode("WaveShaper");
children[77] = WaveShaper85;

TimeSensor TimeSensor86 = createNode("TimeSensor");
children[78] = TimeSensor86;

CADAssembly CADAssembly87 = createNode("CADAssembly");
children[79] = CADAssembly87;

CADFace CADFace88 = createNode("CADFace");
children[80] = CADFace88;

CADLayer CADLayer89 = createNode("CADLayer");
children[81] = CADLayer89;

CADPart CADPart90 = createNode("CADPart");
children[82] = CADPart90;

DISEntityManager DISEntityManager91 = createNode("DISEntityManager");
children[83] = DISEntityManager91;

DISEntityTypeMapping DISEntityTypeMapping92 = createNode("DISEntityTypeMapping");
children[84] = DISEntityTypeMapping92;

EspduTransform EspduTransform93 = createNode("EspduTransform");
children[85] = EspduTransform93;

ReceiverPdu ReceiverPdu94 = createNode("ReceiverPdu");
children[86] = ReceiverPdu94;

SignalPdu SignalPdu95 = createNode("SignalPdu");
children[87] = SignalPdu95;

TransmitterPdu TransmitterPdu96 = createNode("TransmitterPdu");
children[88] = TransmitterPdu96;

BooleanFilter BooleanFilter97 = createNode("BooleanFilter");
children[89] = BooleanFilter97;

BooleanSequencer BooleanSequencer98 = createNode("BooleanSequencer");
children[90] = BooleanSequencer98;

BooleanToggle BooleanToggle99 = createNode("BooleanToggle");
children[91] = BooleanToggle99;

BooleanTrigger BooleanTrigger100 = createNode("BooleanTrigger");
children[92] = BooleanTrigger100;

IntegerSequencer IntegerSequencer101 = createNode("IntegerSequencer");
children[93] = IntegerSequencer101;

IntegerTrigger IntegerTrigger102 = createNode("IntegerTrigger");
children[94] = IntegerTrigger102;

TimeTrigger TimeTrigger103 = createNode("TimeTrigger");
children[95] = TimeTrigger103;

KeySensor KeySensor104 = createNode("KeySensor");
KeySensor104.enabled = False;
children[96] = KeySensor104;

StringSensor StringSensor105 = createNode("StringSensor");
children[97] = StringSensor105;

TextureProjector TextureProjector106 = createNode("TextureProjector");
TextureProjector106.ambientIntensity = 0;
TextureProjector106.color = new SFColor(new float[1,1,1]);
TextureProjector106.fieldOfView = 0.7854;
TextureProjector106.intensity = 0.7854;
TextureProjector106.upVector = new SFVec3f(new float[0,1,0]);
children[98] = TextureProjector106;

TextureProjectorParallel TextureProjectorParallel107 = createNode("TextureProjectorParallel");
TextureProjectorParallel107.ambientIntensity = 0;
TextureProjectorParallel107.color = new SFColor(new float[1,1,1]);
TextureProjectorParallel107.intensity = 0.7854;
TextureProjectorParallel107.upVector = new SFVec3f(new float[0,1,0]);
children[99] = TextureProjectorParallel107;

HAnimHumanoid HAnimHumanoid108 = createNode("HAnimHumanoid");
HAnimHumanoid108.version = "2.0";
children[100] = HAnimHumanoid108;

HAnimJoint HAnimJoint109 = createNode("HAnimJoint");
children[101] = HAnimJoint109;

HAnimSegment HAnimSegment110 = createNode("HAnimSegment");
children[102] = HAnimSegment110;

HAnimSite HAnimSite111 = createNode("HAnimSite");
children[103] = HAnimSite111;

ParticleSystem ParticleSystem112 = createNode("ParticleSystem");
children[104] = ParticleSystem112;

Script Script113 = createNode("Script");
children[105] = Script113;

CollidableOffset CollidableOffset114 = createNode("CollidableOffset");
children[106] = CollidableOffset114;

CollidableShape CollidableShape115 = createNode("CollidableShape");
children[107] = CollidableShape115;

CollisionSensor CollisionSensor116 = createNode("CollisionSensor");
children[108] = CollisionSensor116;

CollisionSpace CollisionSpace117 = createNode("CollisionSpace");
children[109] = CollisionSpace117;

RigidBodyCollection RigidBodyCollection118 = createNode("RigidBodyCollection");
children[110] = RigidBodyCollection118;

IsoSurfaceVolumeData IsoSurfaceVolumeData119 = createNode("IsoSurfaceVolumeData");
children[111] = IsoSurfaceVolumeData119;

SegmentedVolumeData SegmentedVolumeData120 = createNode("SegmentedVolumeData");
children[112] = SegmentedVolumeData120;

VolumeData VolumeData121 = createNode("VolumeData");
children[113] = VolumeData121;

GeoLOD GeoLOD122 = createNode("GeoLOD");
children[114] = GeoLOD122;

GeoLocation GeoLocation123 = createNode("GeoLocation");
children[115] = GeoLocation123;

GeoMetadata GeoMetadata124 = createNode("GeoMetadata");
children[116] = GeoMetadata124;

GeoPositionInterpolator GeoPositionInterpolator125 = createNode("GeoPositionInterpolator");
children[117] = GeoPositionInterpolator125;

GeoProximitySensor GeoProximitySensor126 = createNode("GeoProximitySensor");
children[118] = GeoProximitySensor126;

GeoTouchSensor GeoTouchSensor127 = createNode("GeoTouchSensor");
children[119] = GeoTouchSensor127;

GeoTransform GeoTransform128 = createNode("GeoTransform");
children[120] = GeoTransform128;

GeoViewpoint GeoViewpoint129 = createNode("GeoViewpoint");
children[121] = GeoViewpoint129;

ContourPolyline2D ContourPolyline2D130 = createNode("ContourPolyline2D");
children[122] = ContourPolyline2D130;

NurbsCurve2D NurbsCurve2D131 = createNode("NurbsCurve2D");
children[123] = NurbsCurve2D131;

NurbsOrientationInterpolator NurbsOrientationInterpolator132 = createNode("NurbsOrientationInterpolator");
children[124] = NurbsOrientationInterpolator132;

NurbsPositionInterpolator NurbsPositionInterpolator133 = createNode("NurbsPositionInterpolator");
children[125] = NurbsPositionInterpolator133;

NurbsSet NurbsSet134 = createNode("NurbsSet");
children[126] = NurbsSet134;

NurbsSurfaceInterpolator NurbsSurfaceInterpolator135 = createNode("NurbsSurfaceInterpolator");
children[127] = NurbsSurfaceInterpolator135;

LayoutGroup LayoutGroup136 = createNode("LayoutGroup");
children[128] = LayoutGroup136;

ScreenGroup ScreenGroup137 = createNode("ScreenGroup");
children[129] = ScreenGroup137;

LinePickSensor LinePickSensor138 = createNode("LinePickSensor");
children[130] = LinePickSensor138;

PickableGroup PickableGroup139 = createNode("PickableGroup");
children[131] = PickableGroup139;

PointPickSensor PointPickSensor140 = createNode("PointPickSensor");
children[132] = PointPickSensor140;

PrimitivePickSensor PrimitivePickSensor141 = createNode("PrimitivePickSensor");
children[133] = PrimitivePickSensor141;

VolumePickSensor VolumePickSensor142 = createNode("VolumePickSensor");
children[134] = VolumePickSensor142;

}
