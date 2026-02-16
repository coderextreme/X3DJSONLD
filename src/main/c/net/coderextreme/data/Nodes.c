#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "4.1";
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

EnvironmentLight EnvironmentLight49 = createNode("EnvironmentLight");
EnvironmentLight49.origin = new SFVec3f(new float[0,0,0]);
EnvironmentLight49.rotation = new SFRotation(new float[0,0,1,0]);
children[41] = EnvironmentLight49;

PointLight PointLight50 = createNode("PointLight");
children[42] = PointLight50;

SpotLight SpotLight51 = createNode("SpotLight");
SpotLight51.beamWidth = 0.589049;
children[43] = SpotLight51;

Billboard Billboard52 = createNode("Billboard");
children[44] = Billboard52;

Collision Collision53 = createNode("Collision");
children[45] = Collision53;

LOD LOD54 = createNode("LOD");
children[46] = LOD54;

NavigationInfo NavigationInfo55 = createNode("NavigationInfo");
children[47] = NavigationInfo55;

OrthoViewpoint OrthoViewpoint56 = createNode("OrthoViewpoint");
children[48] = OrthoViewpoint56;

Viewpoint Viewpoint57 = createNode("Viewpoint");
children[49] = Viewpoint57;

ViewpointGroup ViewpointGroup58 = createNode("ViewpointGroup");
children[50] = ViewpointGroup58;

Anchor Anchor59 = createNode("Anchor");
children[51] = Anchor59;

Inline Inline60 = createNode("Inline");
children[52] = Inline60;

LoadSensor LoadSensor61 = createNode("LoadSensor");
children[53] = LoadSensor61;

CylinderSensor CylinderSensor62 = createNode("CylinderSensor");
children[54] = CylinderSensor62;

PlaneSensor PlaneSensor63 = createNode("PlaneSensor");
children[55] = PlaneSensor63;

SphereSensor SphereSensor64 = createNode("SphereSensor");
children[56] = SphereSensor64;

TouchSensor TouchSensor65 = createNode("TouchSensor");
children[57] = TouchSensor65;

ClipPlane ClipPlane66 = createNode("ClipPlane");
children[58] = ClipPlane66;

Shape Shape67 = createNode("Shape");
children[59] = Shape67;

Analyser Analyser68 = createNode("Analyser");
children[60] = Analyser68;

AudioDestination AudioDestination69 = createNode("AudioDestination");
children[61] = AudioDestination69;

BiquadFilter BiquadFilter70 = createNode("BiquadFilter");
BiquadFilter70.type = "LOWPASS";
children[62] = BiquadFilter70;

BufferAudioSource BufferAudioSource71 = createNode("BufferAudioSource");
children[63] = BufferAudioSource71;

ChannelMerger ChannelMerger72 = createNode("ChannelMerger");
children[64] = ChannelMerger72;

ChannelSelector ChannelSelector73 = createNode("ChannelSelector");
children[65] = ChannelSelector73;

ChannelSplitter ChannelSplitter74 = createNode("ChannelSplitter");
children[66] = ChannelSplitter74;

Convolver Convolver75 = createNode("Convolver");
children[67] = Convolver75;

Delay Delay76 = createNode("Delay");
children[68] = Delay76;

DynamicsCompressor DynamicsCompressor77 = createNode("DynamicsCompressor");
children[69] = DynamicsCompressor77;

Gain Gain78 = createNode("Gain");
children[70] = Gain78;

ListenerPointSource ListenerPointSource79 = createNode("ListenerPointSource");
children[71] = ListenerPointSource79;

MicrophoneSource MicrophoneSource80 = createNode("MicrophoneSource");
children[72] = MicrophoneSource80;

OscillatorSource OscillatorSource81 = createNode("OscillatorSource");
children[73] = OscillatorSource81;

Sound Sound82 = createNode("Sound");
children[74] = Sound82;

SpatialSound SpatialSound83 = createNode("SpatialSound");
children[75] = SpatialSound83;

StreamAudioDestination StreamAudioDestination84 = createNode("StreamAudioDestination");
children[76] = StreamAudioDestination84;

StreamAudioSource StreamAudioSource85 = createNode("StreamAudioSource");
children[77] = StreamAudioSource85;

WaveShaper WaveShaper86 = createNode("WaveShaper");
children[78] = WaveShaper86;

TimeSensor TimeSensor87 = createNode("TimeSensor");
children[79] = TimeSensor87;

CADAssembly CADAssembly88 = createNode("CADAssembly");
children[80] = CADAssembly88;

CADFace CADFace89 = createNode("CADFace");
children[81] = CADFace89;

CADLayer CADLayer90 = createNode("CADLayer");
children[82] = CADLayer90;

CADPart CADPart91 = createNode("CADPart");
children[83] = CADPart91;

DISEntityManager DISEntityManager92 = createNode("DISEntityManager");
children[84] = DISEntityManager92;

DISEntityTypeMapping DISEntityTypeMapping93 = createNode("DISEntityTypeMapping");
children[85] = DISEntityTypeMapping93;

EspduTransform EspduTransform94 = createNode("EspduTransform");
children[86] = EspduTransform94;

ReceiverPdu ReceiverPdu95 = createNode("ReceiverPdu");
children[87] = ReceiverPdu95;

SignalPdu SignalPdu96 = createNode("SignalPdu");
children[88] = SignalPdu96;

TransmitterPdu TransmitterPdu97 = createNode("TransmitterPdu");
children[89] = TransmitterPdu97;

BooleanFilter BooleanFilter98 = createNode("BooleanFilter");
children[90] = BooleanFilter98;

BooleanSequencer BooleanSequencer99 = createNode("BooleanSequencer");
children[91] = BooleanSequencer99;

BooleanToggle BooleanToggle100 = createNode("BooleanToggle");
children[92] = BooleanToggle100;

BooleanTrigger BooleanTrigger101 = createNode("BooleanTrigger");
children[93] = BooleanTrigger101;

IntegerSequencer IntegerSequencer102 = createNode("IntegerSequencer");
children[94] = IntegerSequencer102;

IntegerTrigger IntegerTrigger103 = createNode("IntegerTrigger");
children[95] = IntegerTrigger103;

TimeTrigger TimeTrigger104 = createNode("TimeTrigger");
children[96] = TimeTrigger104;

KeySensor KeySensor105 = createNode("KeySensor");
KeySensor105.enabled = False;
children[97] = KeySensor105;

StringSensor StringSensor106 = createNode("StringSensor");
children[98] = StringSensor106;

TextureProjector TextureProjector107 = createNode("TextureProjector");
TextureProjector107.ambientIntensity = 0;
TextureProjector107.color = new SFColor(new float[1,1,1]);
TextureProjector107.fieldOfView = 0.7854;
TextureProjector107.intensity = 0.7854;
TextureProjector107.upVector = new SFVec3f(new float[0,1,0]);
children[99] = TextureProjector107;

TextureProjectorParallel TextureProjectorParallel108 = createNode("TextureProjectorParallel");
TextureProjectorParallel108.ambientIntensity = 0;
TextureProjectorParallel108.color = new SFColor(new float[1,1,1]);
TextureProjectorParallel108.intensity = 0.7854;
TextureProjectorParallel108.upVector = new SFVec3f(new float[0,1,0]);
children[100] = TextureProjectorParallel108;

HAnimHumanoid HAnimHumanoid109 = createNode("HAnimHumanoid");
HAnimHumanoid109.version = "2.0";
children[101] = HAnimHumanoid109;

HAnimJoint HAnimJoint110 = createNode("HAnimJoint");
HAnimJoint110.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint110.llimit = new MFFloat(new float[0,0,0]);
children[102] = HAnimJoint110;

HAnimPose HAnimPose111 = createNode("HAnimPose");
HAnimPose111.loa = -1;
HAnimPose111.transitionDuration = 0;
children[103] = HAnimPose111;

HAnimSegment HAnimSegment112 = createNode("HAnimSegment");
children[104] = HAnimSegment112;

HAnimSite HAnimSite113 = createNode("HAnimSite");
children[105] = HAnimSite113;

ParticleSystem ParticleSystem114 = createNode("ParticleSystem");
children[106] = ParticleSystem114;

Script Script115 = createNode("Script");
children[107] = Script115;

FontLibrary FontLibrary116 = createNode("FontLibrary");
children[108] = FontLibrary116;

CollidableOffset CollidableOffset117 = createNode("CollidableOffset");
children[109] = CollidableOffset117;

CollidableShape CollidableShape118 = createNode("CollidableShape");
children[110] = CollidableShape118;

CollisionSensor CollisionSensor119 = createNode("CollisionSensor");
children[111] = CollisionSensor119;

CollisionSpace CollisionSpace120 = createNode("CollisionSpace");
children[112] = CollisionSpace120;

RigidBodyCollection RigidBodyCollection121 = createNode("RigidBodyCollection");
children[113] = RigidBodyCollection121;

IsoSurfaceVolumeData IsoSurfaceVolumeData122 = createNode("IsoSurfaceVolumeData");
children[114] = IsoSurfaceVolumeData122;

SegmentedVolumeData SegmentedVolumeData123 = createNode("SegmentedVolumeData");
children[115] = SegmentedVolumeData123;

VolumeData VolumeData124 = createNode("VolumeData");
children[116] = VolumeData124;

GeoLOD GeoLOD125 = createNode("GeoLOD");
children[117] = GeoLOD125;

GeoLocation GeoLocation126 = createNode("GeoLocation");
children[118] = GeoLocation126;

GeoMetadata GeoMetadata127 = createNode("GeoMetadata");
children[119] = GeoMetadata127;

GeoPositionInterpolator GeoPositionInterpolator128 = createNode("GeoPositionInterpolator");
children[120] = GeoPositionInterpolator128;

GeoProximitySensor GeoProximitySensor129 = createNode("GeoProximitySensor");
children[121] = GeoProximitySensor129;

GeoTouchSensor GeoTouchSensor130 = createNode("GeoTouchSensor");
children[122] = GeoTouchSensor130;

GeoTransform GeoTransform131 = createNode("GeoTransform");
children[123] = GeoTransform131;

GeoViewpoint GeoViewpoint132 = createNode("GeoViewpoint");
children[124] = GeoViewpoint132;

ContourPolyline2D ContourPolyline2D133 = createNode("ContourPolyline2D");
children[125] = ContourPolyline2D133;

NurbsCurve2D NurbsCurve2D134 = createNode("NurbsCurve2D");
children[126] = NurbsCurve2D134;

NurbsOrientationInterpolator NurbsOrientationInterpolator135 = createNode("NurbsOrientationInterpolator");
children[127] = NurbsOrientationInterpolator135;

NurbsPositionInterpolator NurbsPositionInterpolator136 = createNode("NurbsPositionInterpolator");
children[128] = NurbsPositionInterpolator136;

NurbsSet NurbsSet137 = createNode("NurbsSet");
children[129] = NurbsSet137;

NurbsSurfaceInterpolator NurbsSurfaceInterpolator138 = createNode("NurbsSurfaceInterpolator");
children[130] = NurbsSurfaceInterpolator138;

LayoutGroup LayoutGroup139 = createNode("LayoutGroup");
children[131] = LayoutGroup139;

ScreenGroup ScreenGroup140 = createNode("ScreenGroup");
children[132] = ScreenGroup140;

LinePickSensor LinePickSensor141 = createNode("LinePickSensor");
children[133] = LinePickSensor141;

PickableGroup PickableGroup142 = createNode("PickableGroup");
children[134] = PickableGroup142;

PointPickSensor PointPickSensor143 = createNode("PointPickSensor");
children[135] = PointPickSensor143;

PrimitivePickSensor PrimitivePickSensor144 = createNode("PrimitivePickSensor");
children[136] = PrimitivePickSensor144;

VolumePickSensor VolumePickSensor145 = createNode("VolumePickSensor");
children[137] = VolumePickSensor145;

}
