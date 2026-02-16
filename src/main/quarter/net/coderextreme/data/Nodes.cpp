
#include <Inventor/nodes/SoCone.h>
#include <Inventor/nodes/SoBaseColor.h>
#include <Inventor/nodes/SoSeparator.h>
#include <Inventor/nodes/SoShape.h>
#include <Inventor/nodes/SoTransform.h>
#include <Inventor/nodes/SoSphere.h>
#include <Inventor/nodes/SoMaterial.h>
#include <Inventor/misc/SoProtoInstance.h>
#include <Inventor/VRMLnodes/SoVRMLAppearance.h>
#include <Quarter/Quarter.h>
#include <Quarter/QuarterWidget.h>
#include <QApplication>
#include <QMainWindow>

using namespace SIM::Coin3D::Quarter;
int main(int argc, char ** argv) 
{

  QApplication app(argc, argv);
  Quarter::init();

  SoSeparator * root = new SoSeparator;
  root->ref();

  SoBaseColor * col = new SoBaseColor;
  col->rgb = SbColor(1, 1, 0);
  root->addChild(col);

  root->addChild(new SoCone);

  QMainWindow * mainwin = new QMainWindow();

  QuarterWidget * viewer = new QuarterWidget(mainwin);
  viewer->setNavigationModeFile();
  mainwin->setCentralWidget(viewer);
  viewer->setSceneGraph(root);

  mainwin->show();
  app.exec();
  root->unref();
  delete viewer;

  Quarter::clean();
SoSceneManager* SoSceneManager0 = new SoSceneManager();
SoSceneManager0->setProfile(QString("Full"));
SoSceneManager0->setVersion(QString("4.1"));
Sohead* Sohead1 = new Sohead();
Someta* Someta2 = new Someta();
Someta2->setName(QString("creator"));
Someta2->setContent(QString("Holger Seelig"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("created"));
Someta3->setContent(QString("Tue, 10 Feb 2026 12:09:57 GMT"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("modified"));
Someta4->setContent(QString("Tue, 10 Feb 2026 12:34:21 GMT"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("generator"));
Someta5->setContent(QString("x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("generator"));
Someta6->setContent(QString("Sunrize X3D Editor V2.0.2, https://create3000.github.io/sunrize/"));
Sohead1->addMeta(*Someta6);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode7 = new SoNode();
SoWorldInfo* SoWorldInfo8 = new SoWorldInfo();
SoNode7->addChild(*SoWorldInfo8);

SoBackground* SoBackground9 = new SoBackground();
SoNode7->addChild(*SoBackground9);

SoFog* SoFog10 = new SoFog();
SoNode7->addChild(*SoFog10);

SoLocalFog* SoLocalFog11 = new SoLocalFog();
SoNode7->addChild(*SoLocalFog11);

SoTextureBackground* SoTextureBackground12 = new SoTextureBackground();
SoNode7->addChild(*SoTextureBackground12);

SoProximitySensor* SoProximitySensor13 = new SoProximitySensor();
SoNode7->addChild(*SoProximitySensor13);

SoTransformSensor* SoTransformSensor14 = new SoTransformSensor();
SoNode7->addChild(*SoTransformSensor14);

SoVisibilitySensor* SoVisibilitySensor15 = new SoVisibilitySensor();
SoNode7->addChild(*SoVisibilitySensor15);

SoColorChaser* SoColorChaser16 = new SoColorChaser();
SoNode7->addChild(*SoColorChaser16);

SoColorDamper* SoColorDamper17 = new SoColorDamper();
SoNode7->addChild(*SoColorDamper17);

SoCoordinateChaser* SoCoordinateChaser18 = new SoCoordinateChaser();
SoNode7->addChild(*SoCoordinateChaser18);

SoCoordinateDamper* SoCoordinateDamper19 = new SoCoordinateDamper();
SoNode7->addChild(*SoCoordinateDamper19);

SoOrientationChaser* SoOrientationChaser20 = new SoOrientationChaser();
SoNode7->addChild(*SoOrientationChaser20);

SoOrientationDamper* SoOrientationDamper21 = new SoOrientationDamper();
SoNode7->addChild(*SoOrientationDamper21);

SoPositionChaser* SoPositionChaser22 = new SoPositionChaser();
SoNode7->addChild(*SoPositionChaser22);

SoPositionChaser2D* SoPositionChaser2D23 = new SoPositionChaser2D();
SoNode7->addChild(*SoPositionChaser2D23);

SoPositionDamper* SoPositionDamper24 = new SoPositionDamper();
SoNode7->addChild(*SoPositionDamper24);

SoPositionDamper2D* SoPositionDamper2D25 = new SoPositionDamper2D();
SoNode7->addChild(*SoPositionDamper2D25);

SoScalarChaser* SoScalarChaser26 = new SoScalarChaser();
SoNode7->addChild(*SoScalarChaser26);

SoScalarDamper* SoScalarDamper27 = new SoScalarDamper();
SoNode7->addChild(*SoScalarDamper27);

SoTexCoordChaser2D* SoTexCoordChaser2D28 = new SoTexCoordChaser2D();
SoNode7->addChild(*SoTexCoordChaser2D28);

SoTexCoordDamper2D* SoTexCoordDamper2D29 = new SoTexCoordDamper2D();
SoNode7->addChild(*SoTexCoordDamper2D29);

SoGroup* SoGroup30 = new SoGroup();
SoNode7->addChild(*SoGroup30);

SoStaticGroup* SoStaticGroup31 = new SoStaticGroup();
SoNode7->addChild(*SoStaticGroup31);

SoSwitch* SoSwitch32 = new SoSwitch();
SoSwitch32->setWhichChoice(-1);
SoNode7->addChild(*SoSwitch32);

SoTransform* SoTransform33 = new SoTransform();
SoNode7->addChild(*SoTransform33);

SoColorInterpolator* SoColorInterpolator34 = new SoColorInterpolator();
SoNode7->addChild(*SoColorInterpolator34);

SoCoordinateInterpolator* SoCoordinateInterpolator35 = new SoCoordinateInterpolator();
SoNode7->addChild(*SoCoordinateInterpolator35);

SoCoordinateInterpolator2D* SoCoordinateInterpolator2D36 = new SoCoordinateInterpolator2D();
SoNode7->addChild(*SoCoordinateInterpolator2D36);

SoEaseInEaseOut* SoEaseInEaseOut37 = new SoEaseInEaseOut();
SoNode7->addChild(*SoEaseInEaseOut37);

SoNormalInterpolator* SoNormalInterpolator38 = new SoNormalInterpolator();
SoNode7->addChild(*SoNormalInterpolator38);

SoOrientationInterpolator* SoOrientationInterpolator39 = new SoOrientationInterpolator();
SoNode7->addChild(*SoOrientationInterpolator39);

SoPositionInterpolator* SoPositionInterpolator40 = new SoPositionInterpolator();
SoNode7->addChild(*SoPositionInterpolator40);

SoPositionInterpolator2D* SoPositionInterpolator2D41 = new SoPositionInterpolator2D();
SoNode7->addChild(*SoPositionInterpolator2D41);

SoScalarInterpolator* SoScalarInterpolator42 = new SoScalarInterpolator();
SoNode7->addChild(*SoScalarInterpolator42);

SoSplinePositionInterpolator* SoSplinePositionInterpolator43 = new SoSplinePositionInterpolator();
SoNode7->addChild(*SoSplinePositionInterpolator43);

SoSplinePositionInterpolator2D* SoSplinePositionInterpolator2D44 = new SoSplinePositionInterpolator2D();
SoNode7->addChild(*SoSplinePositionInterpolator2D44);

SoSplineScalarInterpolator* SoSplineScalarInterpolator45 = new SoSplineScalarInterpolator();
SoNode7->addChild(*SoSplineScalarInterpolator45);

SoSquadOrientationInterpolator* SoSquadOrientationInterpolator46 = new SoSquadOrientationInterpolator();
SoNode7->addChild(*SoSquadOrientationInterpolator46);

SoLayerSet* SoLayerSet47 = new SoLayerSet();
SoNode7->addChild(*SoLayerSet47);

SoDirectionalLight* SoDirectionalLight48 = new SoDirectionalLight();
SoNode7->addChild(*SoDirectionalLight48);

SoEnvironmentLight* SoEnvironmentLight49 = new SoEnvironmentLight();
SoEnvironmentLight49->setOrigin(new float[]{0.0,0.0,0.0});
SoEnvironmentLight49->setRotation(new float[]{0.0,0.0,1.0,0.0});
SoNode7->addChild(*SoEnvironmentLight49);

SoPointLight* SoPointLight50 = new SoPointLight();
SoNode7->addChild(*SoPointLight50);

SoSpotLight* SoSpotLight51 = new SoSpotLight();
SoSpotLight51->setBeamWidth(0.589049);
SoNode7->addChild(*SoSpotLight51);

SoBillboard* SoBillboard52 = new SoBillboard();
SoNode7->addChild(*SoBillboard52);

SoCollision* SoCollision53 = new SoCollision();
SoNode7->addChild(*SoCollision53);

SoLOD* SoLOD54 = new SoLOD();
SoNode7->addChild(*SoLOD54);

SoNavigationInfo* SoNavigationInfo55 = new SoNavigationInfo();
SoNode7->addChild(*SoNavigationInfo55);

SoOrthoViewpoint* SoOrthoViewpoint56 = new SoOrthoViewpoint();
SoNode7->addChild(*SoOrthoViewpoint56);

SoViewpoint* SoViewpoint57 = new SoViewpoint();
SoNode7->addChild(*SoViewpoint57);

SoViewpointGroup* SoViewpointGroup58 = new SoViewpointGroup();
SoNode7->addChild(*SoViewpointGroup58);

SoAnchor* SoAnchor59 = new SoAnchor();
SoNode7->addChild(*SoAnchor59);

SoInline* SoInline60 = new SoInline();
SoNode7->addChild(*SoInline60);

SoLoadSensor* SoLoadSensor61 = new SoLoadSensor();
SoNode7->addChild(*SoLoadSensor61);

SoCylinderSensor* SoCylinderSensor62 = new SoCylinderSensor();
SoNode7->addChild(*SoCylinderSensor62);

SoPlaneSensor* SoPlaneSensor63 = new SoPlaneSensor();
SoNode7->addChild(*SoPlaneSensor63);

SoSphereSensor* SoSphereSensor64 = new SoSphereSensor();
SoNode7->addChild(*SoSphereSensor64);

SoTouchSensor* SoTouchSensor65 = new SoTouchSensor();
SoNode7->addChild(*SoTouchSensor65);

SoClipPlane* SoClipPlane66 = new SoClipPlane();
SoNode7->addChild(*SoClipPlane66);

SoShape* SoShape67 = new SoShape();
SoNode7->addChild(*SoShape67);

SoAnalyser* SoAnalyser68 = new SoAnalyser();
SoNode7->addChild(*SoAnalyser68);

SoAudioDestination* SoAudioDestination69 = new SoAudioDestination();
SoNode7->addChild(*SoAudioDestination69);

SoBiquadFilter* SoBiquadFilter70 = new SoBiquadFilter();
SoBiquadFilter70->setType(QString("LOWPASS"));
SoNode7->addChild(*SoBiquadFilter70);

SoBufferAudioSource* SoBufferAudioSource71 = new SoBufferAudioSource();
SoNode7->addChild(*SoBufferAudioSource71);

SoChannelMerger* SoChannelMerger72 = new SoChannelMerger();
SoNode7->addChild(*SoChannelMerger72);

SoChannelSelector* SoChannelSelector73 = new SoChannelSelector();
SoNode7->addChild(*SoChannelSelector73);

SoChannelSplitter* SoChannelSplitter74 = new SoChannelSplitter();
SoNode7->addChild(*SoChannelSplitter74);

SoConvolver* SoConvolver75 = new SoConvolver();
SoNode7->addChild(*SoConvolver75);

SoDelay* SoDelay76 = new SoDelay();
SoNode7->addChild(*SoDelay76);

SoDynamicsCompressor* SoDynamicsCompressor77 = new SoDynamicsCompressor();
SoNode7->addChild(*SoDynamicsCompressor77);

SoGain* SoGain78 = new SoGain();
SoNode7->addChild(*SoGain78);

SoListenerPointSource* SoListenerPointSource79 = new SoListenerPointSource();
SoNode7->addChild(*SoListenerPointSource79);

SoMicrophoneSource* SoMicrophoneSource80 = new SoMicrophoneSource();
SoNode7->addChild(*SoMicrophoneSource80);

SoOscillatorSource* SoOscillatorSource81 = new SoOscillatorSource();
SoNode7->addChild(*SoOscillatorSource81);

SoSound* SoSound82 = new SoSound();
SoNode7->addChild(*SoSound82);

SoSpatialSound* SoSpatialSound83 = new SoSpatialSound();
SoNode7->addChild(*SoSpatialSound83);

SoStreamAudioDestination* SoStreamAudioDestination84 = new SoStreamAudioDestination();
SoNode7->addChild(*SoStreamAudioDestination84);

SoStreamAudioSource* SoStreamAudioSource85 = new SoStreamAudioSource();
SoNode7->addChild(*SoStreamAudioSource85);

SoWaveShaper* SoWaveShaper86 = new SoWaveShaper();
SoNode7->addChild(*SoWaveShaper86);

SoTimeSensor* SoTimeSensor87 = new SoTimeSensor();
SoNode7->addChild(*SoTimeSensor87);

SoCADAssembly* SoCADAssembly88 = new SoCADAssembly();
SoNode7->X3DBaseNode::addChild(static_cast<X3DGroupingNode*>(*SoCADAssembly88));

SoCADFace* SoCADFace89 = new SoCADFace();
SoNode7->addChild(*SoCADFace89);

SoCADLayer* SoCADLayer90 = new SoCADLayer();
SoNode7->addChild(*SoCADLayer90);

SoCADPart* SoCADPart91 = new SoCADPart();
SoNode7->X3DBaseNode::addChild(static_cast<X3DGroupingNode*>(*SoCADPart91));

SoDISEntityManager* SoDISEntityManager92 = new SoDISEntityManager();
SoNode7->addChild(*SoDISEntityManager92);

SoDISEntityTypeMapping* SoDISEntityTypeMapping93 = new SoDISEntityTypeMapping();
SoNode7->addChild(*SoDISEntityTypeMapping93);

SoEspduTransform* SoEspduTransform94 = new SoEspduTransform();
SoNode7->addChild(*SoEspduTransform94);

SoReceiverPdu* SoReceiverPdu95 = new SoReceiverPdu();
SoNode7->addChild(*SoReceiverPdu95);

SoSignalPdu* SoSignalPdu96 = new SoSignalPdu();
SoNode7->addChild(*SoSignalPdu96);

SoTransmitterPdu* SoTransmitterPdu97 = new SoTransmitterPdu();
SoNode7->addChild(*SoTransmitterPdu97);

SoBooleanFilter* SoBooleanFilter98 = new SoBooleanFilter();
SoNode7->addChild(*SoBooleanFilter98);

SoBooleanSequencer* SoBooleanSequencer99 = new SoBooleanSequencer();
SoNode7->addChild(*SoBooleanSequencer99);

SoBooleanToggle* SoBooleanToggle100 = new SoBooleanToggle();
SoNode7->addChild(*SoBooleanToggle100);

SoBooleanTrigger* SoBooleanTrigger101 = new SoBooleanTrigger();
SoNode7->addChild(*SoBooleanTrigger101);

SoIntegerSequencer* SoIntegerSequencer102 = new SoIntegerSequencer();
SoNode7->addChild(*SoIntegerSequencer102);

SoIntegerTrigger* SoIntegerTrigger103 = new SoIntegerTrigger();
SoNode7->addChild(*SoIntegerTrigger103);

SoTimeTrigger* SoTimeTrigger104 = new SoTimeTrigger();
SoNode7->addChild(*SoTimeTrigger104);

SoKeySensor* SoKeySensor105 = new SoKeySensor();
SoKeySensor105->setEnabled(false);
SoNode7->addChild(*SoKeySensor105);

SoStringSensor* SoStringSensor106 = new SoStringSensor();
SoNode7->addChild(*SoStringSensor106);

SoTextureProjector* SoTextureProjector107 = new SoTextureProjector();
SoTextureProjector107->setAmbientIntensity(0);
SoTextureProjector107->setColor(new float[]{1.0,1.0,1.0});
SoTextureProjector107->setFieldOfView(0.7854);
SoTextureProjector107->setIntensity(0.7854);
SoTextureProjector107->setUpVector(new float[]{0.0,1.0,0.0});
SoNode7->addChild(*SoTextureProjector107);

SoTextureProjectorParallel* SoTextureProjectorParallel108 = new SoTextureProjectorParallel();
SoTextureProjectorParallel108->setAmbientIntensity(0);
SoTextureProjectorParallel108->setColor(new float[]{1.0,1.0,1.0});
SoTextureProjectorParallel108->setIntensity(0.7854);
SoTextureProjectorParallel108->setUpVector(new float[]{0.0,1.0,0.0});
SoNode7->addChild(*SoTextureProjectorParallel108);

SoHAnimHumanoid* SoHAnimHumanoid109 = new SoHAnimHumanoid();
SoHAnimHumanoid109->setVersion(QString("2.0"));
SoNode7->addChild(*SoHAnimHumanoid109);

SoHAnimJoint* SoHAnimJoint110 = new SoHAnimJoint();
SoHAnimJoint110->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint110->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoNode7->addChild(*SoHAnimJoint110);

SoHAnimPose* SoHAnimPose111 = new SoHAnimPose();
SoHAnimPose111->setLoa(-1);
SoHAnimPose111->setTransitionDuration(0);
SoNode7->addChild(*SoHAnimPose111);

SoHAnimSegment* SoHAnimSegment112 = new SoHAnimSegment();
SoNode7->addChild(*SoHAnimSegment112);

SoHAnimSite* SoHAnimSite113 = new SoHAnimSite();
SoNode7->addChild(*SoHAnimSite113);

SoParticleSystem* SoParticleSystem114 = new SoParticleSystem();
SoNode7->addChild(*SoParticleSystem114);

SoScript* SoScript115 = new SoScript();
SoNode7->addChild(*SoScript115);

SoFontLibrary* SoFontLibrary116 = new SoFontLibrary();
SoNode7->addChild(*SoFontLibrary116);

SoCollidableOffset* SoCollidableOffset117 = new SoCollidableOffset();
SoNode7->addChild(*SoCollidableOffset117);

SoCollidableShape* SoCollidableShape118 = new SoCollidableShape();
SoNode7->addChild(*SoCollidableShape118);

SoCollisionSensor* SoCollisionSensor119 = new SoCollisionSensor();
SoNode7->addChild(*SoCollisionSensor119);

SoCollisionSpace* SoCollisionSpace120 = new SoCollisionSpace();
SoNode7->addChild(*SoCollisionSpace120);

SoRigidBodyCollection* SoRigidBodyCollection121 = new SoRigidBodyCollection();
SoNode7->addChild(*SoRigidBodyCollection121);

SoIsoSurfaceVolumeData* SoIsoSurfaceVolumeData122 = new SoIsoSurfaceVolumeData();
SoNode7->addChild(*SoIsoSurfaceVolumeData122);

SoSegmentedVolumeData* SoSegmentedVolumeData123 = new SoSegmentedVolumeData();
SoNode7->addChild(*SoSegmentedVolumeData123);

SoVolumeData* SoVolumeData124 = new SoVolumeData();
SoNode7->addChild(*SoVolumeData124);

SoGeoLOD* SoGeoLOD125 = new SoGeoLOD();
SoNode7->addChild(*SoGeoLOD125);

SoGeoLocation* SoGeoLocation126 = new SoGeoLocation();
SoNode7->addChild(*SoGeoLocation126);

SoGeoMetadata* SoGeoMetadata127 = new SoGeoMetadata();
SoNode7->addChild(*SoGeoMetadata127);

SoGeoPositionInterpolator* SoGeoPositionInterpolator128 = new SoGeoPositionInterpolator();
SoNode7->addChild(*SoGeoPositionInterpolator128);

SoGeoProximitySensor* SoGeoProximitySensor129 = new SoGeoProximitySensor();
SoNode7->addChild(*SoGeoProximitySensor129);

SoGeoTouchSensor* SoGeoTouchSensor130 = new SoGeoTouchSensor();
SoNode7->addChild(*SoGeoTouchSensor130);

SoGeoTransform* SoGeoTransform131 = new SoGeoTransform();
SoNode7->addChild(*SoGeoTransform131);

SoGeoViewpoint* SoGeoViewpoint132 = new SoGeoViewpoint();
SoNode7->addChild(*SoGeoViewpoint132);

SoContourPolyline2D* SoContourPolyline2D133 = new SoContourPolyline2D();
SoNode7->addChild(*SoContourPolyline2D133);

SoNurbsCurve2D* SoNurbsCurve2D134 = new SoNurbsCurve2D();
SoNode7->addChild(*SoNurbsCurve2D134);

SoNurbsOrientationInterpolator* SoNurbsOrientationInterpolator135 = new SoNurbsOrientationInterpolator();
SoNode7->addChild(*SoNurbsOrientationInterpolator135);

SoNurbsPositionInterpolator* SoNurbsPositionInterpolator136 = new SoNurbsPositionInterpolator();
SoNode7->addChild(*SoNurbsPositionInterpolator136);

SoNurbsSet* SoNurbsSet137 = new SoNurbsSet();
SoNode7->addChild(*SoNurbsSet137);

SoNurbsSurfaceInterpolator* SoNurbsSurfaceInterpolator138 = new SoNurbsSurfaceInterpolator();
SoNode7->addChild(*SoNurbsSurfaceInterpolator138);

SoLayoutGroup* SoLayoutGroup139 = new SoLayoutGroup();
SoNode7->addChild(*SoLayoutGroup139);

SoScreenGroup* SoScreenGroup140 = new SoScreenGroup();
SoNode7->addChild(*SoScreenGroup140);

SoLinePickSensor* SoLinePickSensor141 = new SoLinePickSensor();
SoNode7->addChild(*SoLinePickSensor141);

SoPickableGroup* SoPickableGroup142 = new SoPickableGroup();
SoNode7->addChild(*SoPickableGroup142);

SoPointPickSensor* SoPointPickSensor143 = new SoPointPickSensor();
SoNode7->addChild(*SoPointPickSensor143);

SoPrimitivePickSensor* SoPrimitivePickSensor144 = new SoPrimitivePickSensor();
SoNode7->addChild(*SoPrimitivePickSensor144);

SoVolumePickSensor* SoVolumePickSensor145 = new SoVolumePickSensor();
SoNode7->addChild(*SoVolumePickSensor145);

SoSceneManager0->setSceneGraph(*SoNode7);

return 0;
}
