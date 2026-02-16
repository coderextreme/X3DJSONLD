#ifndef WIN32
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#define WINGDIAPI
#define APIENTRY
#endif
#define FALSE false
#define TRUE true
#define BOOL bool
#define False false
#define True true
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Full"));
X3D0.setVersion(CString("4.1"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("creator"));
meta2.setContent(CString("Holger Seelig"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("Tue, 10 Feb 2026 12:09:57 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("modified"));
meta4.setContent(CString("Tue, 10 Feb 2026 12:34:21 GMT"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("generator"));
meta6.setContent(CString("Sunrize X3D Editor V2.0.2, https://create3000.github.io/sunrize/"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
Scene7.addChild(&WorldInfo8);

Background& Background9 =  Background();
Scene7.addChild(&Background9);

Fog& Fog10 =  Fog();
Scene7.addChild(&Fog10);

LocalFog& LocalFog11 =  LocalFog();
Scene7.addChild(&LocalFog11);

TextureBackground& TextureBackground12 =  TextureBackground();
Scene7.addChild(&TextureBackground12);

ProximitySensor& ProximitySensor13 =  ProximitySensor();
Scene7.addChild(&ProximitySensor13);

TransformSensor& TransformSensor14 =  TransformSensor();
Scene7.addChild(&TransformSensor14);

VisibilitySensor& VisibilitySensor15 =  VisibilitySensor();
Scene7.addChild(&VisibilitySensor15);

ColorChaser& ColorChaser16 =  ColorChaser();
Scene7.addChild(&ColorChaser16);

ColorDamper& ColorDamper17 =  ColorDamper();
Scene7.addChild(&ColorDamper17);

CoordinateChaser& CoordinateChaser18 =  CoordinateChaser();
Scene7.addChild(&CoordinateChaser18);

CoordinateDamper& CoordinateDamper19 =  CoordinateDamper();
Scene7.addChild(&CoordinateDamper19);

OrientationChaser& OrientationChaser20 =  OrientationChaser();
Scene7.addChild(&OrientationChaser20);

OrientationDamper& OrientationDamper21 =  OrientationDamper();
Scene7.addChild(&OrientationDamper21);

PositionChaser& PositionChaser22 =  PositionChaser();
Scene7.addChild(&PositionChaser22);

PositionChaser2D& PositionChaser2D23 =  PositionChaser2D();
Scene7.addChild(&PositionChaser2D23);

PositionDamper& PositionDamper24 =  PositionDamper();
Scene7.addChild(&PositionDamper24);

PositionDamper2D& PositionDamper2D25 =  PositionDamper2D();
Scene7.addChild(&PositionDamper2D25);

ScalarChaser& ScalarChaser26 =  ScalarChaser();
Scene7.addChild(&ScalarChaser26);

ScalarDamper& ScalarDamper27 =  ScalarDamper();
Scene7.addChild(&ScalarDamper27);

TexCoordChaser2D& TexCoordChaser2D28 =  TexCoordChaser2D();
Scene7.addChild(&TexCoordChaser2D28);

TexCoordDamper2D& TexCoordDamper2D29 =  TexCoordDamper2D();
Scene7.addChild(&TexCoordDamper2D29);

Group& Group30 =  Group();
Scene7.addChild(&Group30);

StaticGroup& StaticGroup31 =  StaticGroup();
Scene7.addChild(&StaticGroup31);

Switch& Switch32 =  Switch();
Switch32.setWhichChoice(-1);
Scene7.addChild(&Switch32);

Transform& Transform33 =  Transform();
Scene7.addChild(&Transform33);

ColorInterpolator& ColorInterpolator34 =  ColorInterpolator();
Scene7.addChild(&ColorInterpolator34);

CoordinateInterpolator& CoordinateInterpolator35 =  CoordinateInterpolator();
Scene7.addChild(&CoordinateInterpolator35);

CoordinateInterpolator2D& CoordinateInterpolator2D36 =  CoordinateInterpolator2D();
Scene7.addChild(&CoordinateInterpolator2D36);

EaseInEaseOut& EaseInEaseOut37 =  EaseInEaseOut();
Scene7.addChild(&EaseInEaseOut37);

NormalInterpolator& NormalInterpolator38 =  NormalInterpolator();
Scene7.addChild(&NormalInterpolator38);

OrientationInterpolator& OrientationInterpolator39 =  OrientationInterpolator();
Scene7.addChild(&OrientationInterpolator39);

PositionInterpolator& PositionInterpolator40 =  PositionInterpolator();
Scene7.addChild(&PositionInterpolator40);

PositionInterpolator2D& PositionInterpolator2D41 =  PositionInterpolator2D();
Scene7.addChild(&PositionInterpolator2D41);

ScalarInterpolator& ScalarInterpolator42 =  ScalarInterpolator();
Scene7.addChild(&ScalarInterpolator42);

SplinePositionInterpolator& SplinePositionInterpolator43 =  SplinePositionInterpolator();
Scene7.addChild(&SplinePositionInterpolator43);

SplinePositionInterpolator2D& SplinePositionInterpolator2D44 =  SplinePositionInterpolator2D();
Scene7.addChild(&SplinePositionInterpolator2D44);

SplineScalarInterpolator& SplineScalarInterpolator45 =  SplineScalarInterpolator();
Scene7.addChild(&SplineScalarInterpolator45);

SquadOrientationInterpolator& SquadOrientationInterpolator46 =  SquadOrientationInterpolator();
Scene7.addChild(&SquadOrientationInterpolator46);

LayerSet& LayerSet47 =  LayerSet();
Scene7.addChild(&LayerSet47);

DirectionalLight& DirectionalLight48 =  DirectionalLight();
Scene7.addChild(&DirectionalLight48);

EnvironmentLight& EnvironmentLight49 =  EnvironmentLight();
EnvironmentLight49.setOrigin(new float[]{0,0,0});
EnvironmentLight49.setRotation(new float[]{0,0,1,0});
Scene7.addChild(&EnvironmentLight49);

PointLight& PointLight50 =  PointLight();
Scene7.addChild(&PointLight50);

SpotLight& SpotLight51 =  SpotLight();
SpotLight51.setBeamWidth(0.589049);
Scene7.addChild(&SpotLight51);

Billboard& Billboard52 =  Billboard();
Scene7.addChild(&Billboard52);

Collision& Collision53 =  Collision();
Scene7.addChild(&Collision53);

LOD& LOD54 =  LOD();
Scene7.addChild(&LOD54);

NavigationInfo& NavigationInfo55 =  NavigationInfo();
Scene7.addChild(&NavigationInfo55);

OrthoViewpoint& OrthoViewpoint56 =  OrthoViewpoint();
Scene7.addChild(&OrthoViewpoint56);

Viewpoint& Viewpoint57 =  Viewpoint();
Scene7.addChild(&Viewpoint57);

ViewpointGroup& ViewpointGroup58 =  ViewpointGroup();
Scene7.addChild(&ViewpointGroup58);

Anchor& Anchor59 =  Anchor();
Scene7.addChild(&Anchor59);

Inline& Inline60 =  Inline();
Scene7.addChild(&Inline60);

LoadSensor& LoadSensor61 =  LoadSensor();
Scene7.addChild(&LoadSensor61);

CylinderSensor& CylinderSensor62 =  CylinderSensor();
Scene7.addChild(&CylinderSensor62);

PlaneSensor& PlaneSensor63 =  PlaneSensor();
Scene7.addChild(&PlaneSensor63);

SphereSensor& SphereSensor64 =  SphereSensor();
Scene7.addChild(&SphereSensor64);

TouchSensor& TouchSensor65 =  TouchSensor();
Scene7.addChild(&TouchSensor65);

ClipPlane& ClipPlane66 =  ClipPlane();
Scene7.addChild(&ClipPlane66);

Shape& Shape67 =  Shape();
Scene7.addChild(&Shape67);

Analyser& Analyser68 =  Analyser();
Scene7.addChild(&Analyser68);

AudioDestination& AudioDestination69 =  AudioDestination();
Scene7.addChild(&AudioDestination69);

BiquadFilter& BiquadFilter70 =  BiquadFilter();
BiquadFilter70.setType(CString("LOWPASS"));
Scene7.addChild(&BiquadFilter70);

BufferAudioSource& BufferAudioSource71 =  BufferAudioSource();
Scene7.addChild(&BufferAudioSource71);

ChannelMerger& ChannelMerger72 =  ChannelMerger();
Scene7.addChild(&ChannelMerger72);

ChannelSelector& ChannelSelector73 =  ChannelSelector();
Scene7.addChild(&ChannelSelector73);

ChannelSplitter& ChannelSplitter74 =  ChannelSplitter();
Scene7.addChild(&ChannelSplitter74);

Convolver& Convolver75 =  Convolver();
Scene7.addChild(&Convolver75);

Delay& Delay76 =  Delay();
Scene7.addChild(&Delay76);

DynamicsCompressor& DynamicsCompressor77 =  DynamicsCompressor();
Scene7.addChild(&DynamicsCompressor77);

Gain& Gain78 =  Gain();
Scene7.addChild(&Gain78);

ListenerPointSource& ListenerPointSource79 =  ListenerPointSource();
Scene7.addChild(&ListenerPointSource79);

MicrophoneSource& MicrophoneSource80 =  MicrophoneSource();
Scene7.addChild(&MicrophoneSource80);

OscillatorSource& OscillatorSource81 =  OscillatorSource();
Scene7.addChild(&OscillatorSource81);

Sound& Sound82 =  Sound();
Scene7.addChild(&Sound82);

SpatialSound& SpatialSound83 =  SpatialSound();
Scene7.addChild(&SpatialSound83);

StreamAudioDestination& StreamAudioDestination84 =  StreamAudioDestination();
Scene7.addChild(&StreamAudioDestination84);

StreamAudioSource& StreamAudioSource85 =  StreamAudioSource();
Scene7.addChild(&StreamAudioSource85);

WaveShaper& WaveShaper86 =  WaveShaper();
Scene7.addChild(&WaveShaper86);

TimeSensor& TimeSensor87 =  TimeSensor();
Scene7.addChild(&TimeSensor87);

CADAssembly& CADAssembly88 =  CADAssembly();
Scene7.X3DBaseNode::addChild(static_cast<X3DGroupingNode*>(&CADAssembly88));

CADFace& CADFace89 =  CADFace();
Scene7.addChild(&CADFace89);

CADLayer& CADLayer90 =  CADLayer();
Scene7.addChild(&CADLayer90);

CADPart& CADPart91 =  CADPart();
Scene7.X3DBaseNode::addChild(static_cast<X3DGroupingNode*>(&CADPart91));

DISEntityManager& DISEntityManager92 =  DISEntityManager();
Scene7.addChild(&DISEntityManager92);

DISEntityTypeMapping& DISEntityTypeMapping93 =  DISEntityTypeMapping();
Scene7.addChild(&DISEntityTypeMapping93);

EspduTransform& EspduTransform94 =  EspduTransform();
Scene7.addChild(&EspduTransform94);

ReceiverPdu& ReceiverPdu95 =  ReceiverPdu();
Scene7.addChild(&ReceiverPdu95);

SignalPdu& SignalPdu96 =  SignalPdu();
Scene7.addChild(&SignalPdu96);

TransmitterPdu& TransmitterPdu97 =  TransmitterPdu();
Scene7.addChild(&TransmitterPdu97);

BooleanFilter& BooleanFilter98 =  BooleanFilter();
Scene7.addChild(&BooleanFilter98);

CBooleanSequencer& BooleanSequencer99 =  CBooleanSequencer();
Scene7.addChild(&BooleanSequencer99);

BooleanToggle& BooleanToggle100 =  BooleanToggle();
Scene7.addChild(&BooleanToggle100);

BooleanTrigger& BooleanTrigger101 =  BooleanTrigger();
Scene7.addChild(&BooleanTrigger101);

IntegerSequencer& IntegerSequencer102 =  IntegerSequencer();
Scene7.addChild(&IntegerSequencer102);

IntegerTrigger& IntegerTrigger103 =  IntegerTrigger();
Scene7.addChild(&IntegerTrigger103);

TimeTrigger& TimeTrigger104 =  TimeTrigger();
Scene7.addChild(&TimeTrigger104);

KeySensor& KeySensor105 =  KeySensor();
KeySensor105.setEnabled(False);
Scene7.addChild(&KeySensor105);

StringSensor& StringSensor106 =  StringSensor();
Scene7.addChild(&StringSensor106);

TextureProjector& TextureProjector107 =  TextureProjector();
TextureProjector107.setAmbientIntensity(0);
TextureProjector107.setColor(new float[]{1,1,1});
TextureProjector107.setFieldOfView(0.7854);
TextureProjector107.setIntensity(0.7854);
TextureProjector107.setUpVector(new float[]{0,1,0});
Scene7.addChild(&TextureProjector107);

TextureProjectorParallel& TextureProjectorParallel108 =  TextureProjectorParallel();
TextureProjectorParallel108.setAmbientIntensity(0);
TextureProjectorParallel108.setColor(new float[]{1,1,1});
TextureProjectorParallel108.setIntensity(0.7854);
TextureProjectorParallel108.setUpVector(new float[]{0,1,0});
Scene7.addChild(&TextureProjectorParallel108);

HAnimHumanoid& HAnimHumanoid109 =  HAnimHumanoid();
HAnimHumanoid109.setVersion(CString("2.0"));
Scene7.addChild(&HAnimHumanoid109);

HAnimJoint& HAnimJoint110 =  HAnimJoint();
HAnimJoint110.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint110.setLlimit(new float[]{0,0,0}, 3);
Scene7.addChild(&HAnimJoint110);

HAnimPose& HAnimPose111 =  HAnimPose();
HAnimPose111.setLoa(-1);
HAnimPose111.setTransitionDuration(0);
Scene7.addChild(&HAnimPose111);

HAnimSegment& HAnimSegment112 =  HAnimSegment();
Scene7.addChild(&HAnimSegment112);

HAnimSite& HAnimSite113 =  HAnimSite();
Scene7.addChild(&HAnimSite113);

ParticleSystem& ParticleSystem114 =  ParticleSystem();
Scene7.addChild(&ParticleSystem114);

Script& Script115 =  Script();
Scene7.addChild(&Script115);

FontLibrary& FontLibrary116 =  FontLibrary();
Scene7.addChild(&FontLibrary116);

CollidableOffset& CollidableOffset117 =  CollidableOffset();
Scene7.addChild(&CollidableOffset117);

CollidableShape& CollidableShape118 =  CollidableShape();
Scene7.addChild(&CollidableShape118);

CollisionSensor& CollisionSensor119 =  CollisionSensor();
Scene7.addChild(&CollisionSensor119);

CollisionSpace& CollisionSpace120 =  CollisionSpace();
Scene7.addChild(&CollisionSpace120);

RigidBodyCollection& RigidBodyCollection121 =  RigidBodyCollection();
Scene7.addChild(&RigidBodyCollection121);

IsoSurfaceVolumeData& IsoSurfaceVolumeData122 =  IsoSurfaceVolumeData();
Scene7.addChild(&IsoSurfaceVolumeData122);

SegmentedVolumeData& SegmentedVolumeData123 =  SegmentedVolumeData();
Scene7.addChild(&SegmentedVolumeData123);

VolumeData& VolumeData124 =  VolumeData();
Scene7.addChild(&VolumeData124);

GeoLOD& GeoLOD125 =  GeoLOD();
Scene7.addChild(&GeoLOD125);

GeoLocation& GeoLocation126 =  GeoLocation();
Scene7.addChild(&GeoLocation126);

GeoMetadata& GeoMetadata127 =  GeoMetadata();
Scene7.addChild(&GeoMetadata127);

GeoPositionInterpolator& GeoPositionInterpolator128 =  GeoPositionInterpolator();
Scene7.addChild(&GeoPositionInterpolator128);

GeoProximitySensor& GeoProximitySensor129 =  GeoProximitySensor();
Scene7.addChild(&GeoProximitySensor129);

GeoTouchSensor& GeoTouchSensor130 =  GeoTouchSensor();
Scene7.addChild(&GeoTouchSensor130);

GeoTransform& GeoTransform131 =  GeoTransform();
Scene7.addChild(&GeoTransform131);

GeoViewpoint& GeoViewpoint132 =  GeoViewpoint();
Scene7.addChild(&GeoViewpoint132);

ContourPolyline2D& ContourPolyline2D133 =  ContourPolyline2D();
Scene7.addChild(&ContourPolyline2D133);

NurbsCurve2D& NurbsCurve2D134 =  NurbsCurve2D();
Scene7.addChild(&NurbsCurve2D134);

NurbsOrientationInterpolator& NurbsOrientationInterpolator135 =  NurbsOrientationInterpolator();
Scene7.addChild(&NurbsOrientationInterpolator135);

NurbsPositionInterpolator& NurbsPositionInterpolator136 =  NurbsPositionInterpolator();
Scene7.addChild(&NurbsPositionInterpolator136);

NurbsSet& NurbsSet137 =  NurbsSet();
Scene7.addChild(&NurbsSet137);

NurbsSurfaceInterpolator& NurbsSurfaceInterpolator138 =  NurbsSurfaceInterpolator();
Scene7.addChild(&NurbsSurfaceInterpolator138);

LayoutGroup& LayoutGroup139 =  LayoutGroup();
Scene7.addChild(&LayoutGroup139);

ScreenGroup& ScreenGroup140 =  ScreenGroup();
Scene7.addChild(&ScreenGroup140);

LinePickSensor& LinePickSensor141 =  LinePickSensor();
Scene7.addChild(&LinePickSensor141);

PickableGroup& PickableGroup142 =  PickableGroup();
Scene7.addChild(&PickableGroup142);

PointPickSensor& PointPickSensor143 =  PointPickSensor();
Scene7.addChild(&PointPickSensor143);

PrimitivePickSensor& PrimitivePickSensor144 =  PrimitivePickSensor();
Scene7.addChild(&PrimitivePickSensor144);

VolumePickSensor& VolumePickSensor145 =  VolumePickSensor();
Scene7.addChild(&VolumePickSensor145);

X3D0.setScene(&Scene7);

}
