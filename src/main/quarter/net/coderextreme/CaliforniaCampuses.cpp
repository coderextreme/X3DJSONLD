
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
SoSceneManager0->setProfile(QString("Immersive"));
SoSceneManager0->setVersion(QString("4.0"));
Sohead* Sohead1 = new Sohead();
Socomponent* Socomponent2 = new Socomponent();
Socomponent2->setName(QString("Geospatial"));
Socomponent2->setLevel(1);
Sohead1->addChild(*Socomponent2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("title"));
Someta3->setContent(QString("CaliforniaCampuses.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("Viewpoints and tour of California campuses"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("Don Brutzman, Dale Tourtelotte, Mike Bailey, Don McGregor"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("created"));
Someta6->setContent(QString("4 March 2010"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("modified"));
Someta7->setContent(QString("20 October 2019"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("reference"));
Someta8->setContent(QString("CaliforniaCampuses.kml"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("reference"));
Someta9->setContent(QString("https://www.web3d.org/x3d-earth"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("reference"));
Someta10->setContent(QString("http://x3d-earth.nps.edu"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("reference"));
Someta11->setContent(QString("http://hamming.uc.nps.edu"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("subject"));
Someta12->setContent(QString("X3D Earth"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("identifier"));
Someta13->setContent(QString("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/CaliforniaCampuses.x3d"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("reference"));
Someta14->setContent(QString("http://mmog.ern.nps.edu/California/California.x3d"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("warning"));
Someta15->setContent(QString("under development"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("warning"));
Someta16->setContent(QString("mmog.ern.nps.edu restricted to internal access within NPS firewall only"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("generator"));
Someta17->setContent(QString("KmlToX3dViewpoints.xslt"));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("generator"));
Someta18->setContent(QString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta18);

Someta* Someta19 = new Someta();
Someta19->setName(QString("license"));
Someta19->setContent(QString("https://savage.nps.edu/Savage/license.html"));
Sohead1->addMeta(*Someta19);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode20 = new SoNode();
SoWorldInfo* SoWorldInfo21 = new SoWorldInfo();
SoWorldInfo21->setTitle(QString("CaliforniaCampuses.x3d"));
SoNode20->addChild(*SoWorldInfo21);

SoSwitch* SoSwitch22 = new SoSwitch();
SoSwitch22->setDEF(QString("SwitchGlobes"));
SoSwitch22->setWhichChoice(0);
//Select globe of interest. Warning: may need to keep alternate globes commented out to prevent browser caching.
SoInline* SoInline23 = new SoInline();
SoInline23->setUrl(new QString[]{QString("http://x3d-earth.nps.edu/osmdemo.x3d")}, 1);
SoSwitch22->addChild(*SoInline23);

//<Inline load='false' url='\"http://mmog.ern.nps.edu/California/California.x3d\"'/>
//<Inline load='false' url='\"http://x3d-earth.nps.edu/7_levels_plus/tiles/0/globe.x3d\"'/>
//<Inline load='false' url='\"http://x3d-earth.nps.edu/globe/MBARI1MinuteBathy/world.x3d\"'/>
//<Inline load='false' url='\"http://x3d-earth.nps.edu/globe/SRTM30Plus/world.x3d\"'/>
SoNode20->addChild(*SoSwitch22);

SoNavigationInfo* SoNavigationInfo24 = new SoNavigationInfo();
SoNavigationInfo24->setTransitionType(new QString[]{QString("ANIMATE")}, 1);
SoNode20->addChild(*SoNavigationInfo24);

SoGroup* SoGroup25 = new SoGroup();
SoGroup25->setDEF(QString("PlacemarkGroup"));
SoGeoViewpoint* SoGeoViewpoint26 = new SoGeoViewpoint();
SoGeoViewpoint26->setDEF(QString("View01"));
SoGeoViewpoint26->setDescription(QString("Naval Postgraduate School"));
SoGeoViewpoint26->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint26->setPosition(new double[]{36.595599,-121.877148,250000.0});
SoGroup25->addChild(*SoGeoViewpoint26);

SoGeoViewpoint* SoGeoViewpoint27 = new SoGeoViewpoint();
SoGeoViewpoint27->setDEF(QString("View02"));
SoGeoViewpoint27->setDescription(QString("University of California Davis"));
SoGeoViewpoint27->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint27->setPosition(new double[]{38.53650615157984,-121.7489628616831,250000.0});
SoGroup25->addChild(*SoGeoViewpoint27);

SoGeoViewpoint* SoGeoViewpoint28 = new SoGeoViewpoint();
SoGeoViewpoint28->setDEF(QString("View03"));
SoGeoViewpoint28->setDescription(QString("University of California Berkeley"));
SoGeoViewpoint28->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint28->setPosition(new double[]{37.86963434512325,-122.2593873127355,250000.0});
SoGroup25->addChild(*SoGeoViewpoint28);

SoGeoViewpoint* SoGeoViewpoint29 = new SoGeoViewpoint();
SoGeoViewpoint29->setDEF(QString("View04"));
SoGeoViewpoint29->setDescription(QString("University of California San Francisco"));
SoGeoViewpoint29->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint29->setPosition(new double[]{37.76340647188392,-122.4582475377715,250000.0});
SoGroup25->addChild(*SoGeoViewpoint29);

SoGeoViewpoint* SoGeoViewpoint30 = new SoGeoViewpoint();
SoGeoViewpoint30->setDEF(QString("View05"));
SoGeoViewpoint30->setDescription(QString("University of California Santa Cruz"));
SoGeoViewpoint30->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint30->setPosition(new double[]{36.99628443046043,-122.0534325473795,250000.0});
SoGroup25->addChild(*SoGeoViewpoint30);

SoGeoViewpoint* SoGeoViewpoint31 = new SoGeoViewpoint();
SoGeoViewpoint31->setDEF(QString("View06"));
SoGeoViewpoint31->setDescription(QString("University of California Merced"));
SoGeoViewpoint31->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint31->setPosition(new double[]{37.365508575977,-120.4252597059142,250000.0});
SoGroup25->addChild(*SoGeoViewpoint31);

SoGeoViewpoint* SoGeoViewpoint32 = new SoGeoViewpoint();
SoGeoViewpoint32->setDEF(QString("View07"));
SoGeoViewpoint32->setDescription(QString("University of California Santa Barbara"));
SoGeoViewpoint32->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint32->setPosition(new double[]{34.41124450961521,-119.8479940053906,250000.0});
SoGroup25->addChild(*SoGeoViewpoint32);

SoGeoViewpoint* SoGeoViewpoint33 = new SoGeoViewpoint();
SoGeoViewpoint33->setDEF(QString("View08"));
SoGeoViewpoint33->setDescription(QString("University of California Los Angeles"));
SoGeoViewpoint33->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint33->setPosition(new double[]{34.07224474392262,-118.4408472225642,250000.0});
SoGroup25->addChild(*SoGeoViewpoint33);

SoGeoViewpoint* SoGeoViewpoint34 = new SoGeoViewpoint();
SoGeoViewpoint34->setDEF(QString("View09"));
SoGeoViewpoint34->setDescription(QString("University of California Irvine"));
SoGeoViewpoint34->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint34->setPosition(new double[]{33.64623283675919,-117.8427064139082,250000.0});
SoGroup25->addChild(*SoGeoViewpoint34);

SoGeoViewpoint* SoGeoViewpoint35 = new SoGeoViewpoint();
SoGeoViewpoint35->setDEF(QString("View10"));
SoGeoViewpoint35->setDescription(QString("University of California Riverside"));
SoGeoViewpoint35->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint35->setPosition(new double[]{33.97350567066717,-117.3281649569839,250000.0});
SoGroup25->addChild(*SoGeoViewpoint35);

SoGeoViewpoint* SoGeoViewpoint36 = new SoGeoViewpoint();
SoGeoViewpoint36->setDEF(QString("View11"));
SoGeoViewpoint36->setDescription(QString("University of California San Diego"));
SoGeoViewpoint36->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint36->setPosition(new double[]{32.87612136607509,-117.2367298240259,250000.0});
SoGroup25->addChild(*SoGeoViewpoint36);

SoGeoViewpoint* SoGeoViewpoint37 = new SoGeoViewpoint();
SoGeoViewpoint37->setDEF(QString("View12"));
SoGeoViewpoint37->setDescription(QString("Humboldt State University"));
SoGeoViewpoint37->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint37->setPosition(new double[]{40.87630235623448,-124.0785789217266,250000.0});
SoGroup25->addChild(*SoGeoViewpoint37);

SoGeoViewpoint* SoGeoViewpoint38 = new SoGeoViewpoint();
SoGeoViewpoint38->setDEF(QString("View13"));
SoGeoViewpoint38->setDescription(QString("California State University, Chico"));
SoGeoViewpoint38->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint38->setPosition(new double[]{39.73031527724385,-121.8453722745223,250000.0});
SoGroup25->addChild(*SoGeoViewpoint38);

SoGeoViewpoint* SoGeoViewpoint39 = new SoGeoViewpoint();
SoGeoViewpoint39->setDEF(QString("View14"));
SoGeoViewpoint39->setDescription(QString("California State University Sacramento"));
SoGeoViewpoint39->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint39->setPosition(new double[]{38.5626517618963,-121.4244636520556,250000.0});
SoGroup25->addChild(*SoGeoViewpoint39);

SoGeoViewpoint* SoGeoViewpoint40 = new SoGeoViewpoint();
SoGeoViewpoint40->setDEF(QString("View15"));
SoGeoViewpoint40->setDescription(QString("Sonoma State University"));
SoGeoViewpoint40->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint40->setPosition(new double[]{38.33922929793606,-122.6744333530031,250000.0});
SoGroup25->addChild(*SoGeoViewpoint40);

SoGeoViewpoint* SoGeoViewpoint41 = new SoGeoViewpoint();
SoGeoViewpoint41->setDEF(QString("View16"));
SoGeoViewpoint41->setDescription(QString("California Maritime Academy"));
SoGeoViewpoint41->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint41->setPosition(new double[]{38.06907065059484,-122.2309147135222,250000.0});
SoGroup25->addChild(*SoGeoViewpoint41);

SoGeoViewpoint* SoGeoViewpoint42 = new SoGeoViewpoint();
SoGeoViewpoint42->setDEF(QString("View17"));
SoGeoViewpoint42->setDescription(QString("San Francisco State University"));
SoGeoViewpoint42->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint42->setPosition(new double[]{37.722876,-122.4781512190666,250000.0});
SoGroup25->addChild(*SoGeoViewpoint42);

SoGeoViewpoint* SoGeoViewpoint43 = new SoGeoViewpoint();
SoGeoViewpoint43->setDEF(QString("View18"));
SoGeoViewpoint43->setDescription(QString("California State University, East Bay"));
SoGeoViewpoint43->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint43->setPosition(new double[]{37.65707914139907,-122.0569190659761,250000.0});
SoGroup25->addChild(*SoGeoViewpoint43);

SoGeoViewpoint* SoGeoViewpoint44 = new SoGeoViewpoint();
SoGeoViewpoint44->setDEF(QString("View19"));
SoGeoViewpoint44->setDescription(QString("California State University Stanislaus"));
SoGeoViewpoint44->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint44->setPosition(new double[]{37.52552478005697,-120.8563508560606,250000.0});
SoGroup25->addChild(*SoGeoViewpoint44);

SoGeoViewpoint* SoGeoViewpoint45 = new SoGeoViewpoint();
SoGeoViewpoint45->setDEF(QString("View20"));
SoGeoViewpoint45->setDescription(QString("San Jose State University"));
SoGeoViewpoint45->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint45->setPosition(new double[]{37.33580940527095,-121.8815343755784,250000.0});
SoGroup25->addChild(*SoGeoViewpoint45);

SoGeoViewpoint* SoGeoViewpoint46 = new SoGeoViewpoint();
SoGeoViewpoint46->setDEF(QString("View21"));
SoGeoViewpoint46->setDescription(QString("California State University, Monterey Bay"));
SoGeoViewpoint46->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint46->setPosition(new double[]{36.6538071781493,-121.7984465276711,250000.0});
SoGroup25->addChild(*SoGeoViewpoint46);

SoGeoViewpoint* SoGeoViewpoint47 = new SoGeoViewpoint();
SoGeoViewpoint47->setDEF(QString("View22"));
SoGeoViewpoint47->setDescription(QString("Fresno State University"));
SoGeoViewpoint47->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint47->setPosition(new double[]{36.812166,-119.7451552005852,250000.0});
SoGroup25->addChild(*SoGeoViewpoint47);

SoGeoViewpoint* SoGeoViewpoint48 = new SoGeoViewpoint();
SoGeoViewpoint48->setDEF(QString("View23"));
SoGeoViewpoint48->setDescription(QString("California State University, Bakersfield"));
SoGeoViewpoint48->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint48->setPosition(new double[]{35.350804,-119.1043226128032,250000.0});
SoGroup25->addChild(*SoGeoViewpoint48);

SoGeoViewpoint* SoGeoViewpoint49 = new SoGeoViewpoint();
SoGeoViewpoint49->setDEF(QString("View24"));
SoGeoViewpoint49->setDescription(QString("California Polytechnic State University"));
SoGeoViewpoint49->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint49->setPosition(new double[]{35.30115692599171,-120.6595761796351,250000.0});
SoGroup25->addChild(*SoGeoViewpoint49);

SoGeoViewpoint* SoGeoViewpoint50 = new SoGeoViewpoint();
SoGeoViewpoint50->setDEF(QString("View25"));
SoGeoViewpoint50->setDescription(QString("California State University, Channel Islands"));
SoGeoViewpoint50->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint50->setPosition(new double[]{34.1624126428852,-119.0425264841287,250000.0});
SoGroup25->addChild(*SoGeoViewpoint50);

SoGeoViewpoint* SoGeoViewpoint51 = new SoGeoViewpoint();
SoGeoViewpoint51->setDEF(QString("View26"));
SoGeoViewpoint51->setDescription(QString("California State University, Northridge"));
SoGeoViewpoint51->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint51->setPosition(new double[]{34.23959265263849,-118.5284272400904,250000.0});
SoGroup25->addChild(*SoGeoViewpoint51);

SoGeoViewpoint* SoGeoViewpoint52 = new SoGeoViewpoint();
SoGeoViewpoint52->setDEF(QString("View27"));
SoGeoViewpoint52->setDescription(QString("California State University, Los Angeles"));
SoGeoViewpoint52->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint52->setPosition(new double[]{34.06645996626264,-118.1682050902557,250000.0});
SoGroup25->addChild(*SoGeoViewpoint52);

SoGeoViewpoint* SoGeoViewpoint53 = new SoGeoViewpoint();
SoGeoViewpoint53->setDEF(QString("View28"));
SoGeoViewpoint53->setDescription(QString("California State Polytechnic University, Pomona"));
SoGeoViewpoint53->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint53->setPosition(new double[]{34.05727150000314,-117.8215320234812,250000.0});
SoGroup25->addChild(*SoGeoViewpoint53);

SoGeoViewpoint* SoGeoViewpoint54 = new SoGeoViewpoint();
SoGeoViewpoint54->setDEF(QString("View29"));
SoGeoViewpoint54->setDescription(QString("California State University, San Bernardino"));
SoGeoViewpoint54->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint54->setPosition(new double[]{34.18180116432101,-117.3243676664719,250000.0});
SoGroup25->addChild(*SoGeoViewpoint54);

SoGeoViewpoint* SoGeoViewpoint55 = new SoGeoViewpoint();
SoGeoViewpoint55->setDEF(QString("View30"));
SoGeoViewpoint55->setDescription(QString("California State University, Fullerton"));
SoGeoViewpoint55->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint55->setPosition(new double[]{33.882522,-117.8868367869023,250000.0});
SoGroup25->addChild(*SoGeoViewpoint55);

SoGeoViewpoint* SoGeoViewpoint56 = new SoGeoViewpoint();
SoGeoViewpoint56->setDEF(QString("View31"));
SoGeoViewpoint56->setDescription(QString("California State University Dominguez Hills"));
SoGeoViewpoint56->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint56->setPosition(new double[]{33.86463396857103,-118.2553596272055,250000.0});
SoGroup25->addChild(*SoGeoViewpoint56);

SoGeoViewpoint* SoGeoViewpoint57 = new SoGeoViewpoint();
SoGeoViewpoint57->setDEF(QString("View32"));
SoGeoViewpoint57->setDescription(QString("California State University, Long Beach"));
SoGeoViewpoint57->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint57->setPosition(new double[]{33.78196696470824,-118.112678253688,250000.0});
SoGroup25->addChild(*SoGeoViewpoint57);

SoGeoViewpoint* SoGeoViewpoint58 = new SoGeoViewpoint();
SoGeoViewpoint58->setDEF(QString("View33"));
SoGeoViewpoint58->setDescription(QString("California State University, San Marcos"));
SoGeoViewpoint58->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint58->setPosition(new double[]{33.12837619265174,-117.1600194071002,250000.0});
SoGroup25->addChild(*SoGeoViewpoint58);

SoGeoViewpoint* SoGeoViewpoint59 = new SoGeoViewpoint();
SoGeoViewpoint59->setDEF(QString("View34"));
SoGeoViewpoint59->setDescription(QString("San Diego State University"));
SoGeoViewpoint59->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint59->setPosition(new double[]{32.77593126586385,-117.0722876242553,250000.0});
SoGroup25->addChild(*SoGeoViewpoint59);

SoGeoViewpoint* SoGeoViewpoint60 = new SoGeoViewpoint();
SoGeoViewpoint60->setDEF(QString("View35"));
SoGeoViewpoint60->setDescription(QString("CENIC"));
SoGeoViewpoint60->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGeoViewpoint60->setPosition(new double[]{33.879947,-118.027903,250000.0});
SoGroup25->addChild(*SoGeoViewpoint60);

SoNode20->addChild(*SoGroup25);

//====================
SoExternProtoDeclare* SoExternProtoDeclare61 = new SoExternProtoDeclare();
SoExternProtoDeclare61->setName(QString("CrossHair"));
SoExternProtoDeclare61->setAppinfo(QString("CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point"));
SoExternProtoDeclare61->setUrl(new QString[]{QString("../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair"), QString("https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair"), QString("../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"), QString("https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair")}, 4);
Sofield* Sofield62 = new Sofield();
Sofield62->setName(QString("enabled"));
Sofield62->setAccessType(QString("initializeOnly"));
Sofield62->setAppinfo(QString("whether CrossHair prototype is enabled or not"));
Sofield62->setType(QString("SFBool"));
SoExternProtoDeclare61->addChild(*Sofield62);

Sofield* Sofield63 = new Sofield();
Sofield63->setName(QString("set_enabled"));
Sofield63->setAccessType(QString("inputOnly"));
Sofield63->setAppinfo(QString("control whether enabled/disabled"));
Sofield63->setType(QString("SFBool"));
SoExternProtoDeclare61->addChild(*Sofield63);

Sofield* Sofield64 = new Sofield();
Sofield64->setName(QString("markerColor"));
Sofield64->setAccessType(QString("inputOutput"));
Sofield64->setAppinfo(QString("color of CrossHair marker"));
Sofield64->setType(QString("SFColor"));
SoExternProtoDeclare61->addChild(*Sofield64);

Sofield* Sofield65 = new Sofield();
Sofield65->setName(QString("scale"));
Sofield65->setAccessType(QString("inputOutput"));
Sofield65->setAppinfo(QString("size of CrossHair in meters"));
Sofield65->setType(QString("SFVec3f"));
SoExternProtoDeclare61->addChild(*Sofield65);

Sofield* Sofield66 = new Sofield();
Sofield66->setName(QString("positionOffsetFromCamera"));
Sofield66->setAccessType(QString("inputOutput"));
Sofield66->setAppinfo(QString("distance in front of HUD viewpoint"));
Sofield66->setType(QString("SFVec3f"));
SoExternProtoDeclare61->addChild(*Sofield66);

SoNode20->addChild(*SoExternProtoDeclare61);

SoProtoInstance* SoProtoInstance67 = new SoProtoInstance();
SoProtoInstance67->setName(QString("CrossHair"));
SoProtoInstance67->setDEF(QString("CrossHairInstance"));
SoField* SoField68 = new SoField();
SoField68->setName(QString("enabled"));
SoField68->setValue(QString("true"));
SoProtoInstance67->addChild(*SoField68);

SoField* SoField69 = new SoField();
SoField69->setName(QString("markerColor"));
SoField69->setValue(QString("0.1 0.8 0.1"));
SoProtoInstance67->addChild(*SoField69);

SoField* SoField70 = new SoField();
SoField70->setName(QString("scale"));
SoField70->setValue(QString("0.5 0.5 0.5"));
SoProtoInstance67->addChild(*SoField70);

SoField* SoField71 = new SoField();
SoField71->setName(QString("positionOffsetFromCamera"));
SoField71->setValue(QString("0 0 -5"));
SoProtoInstance67->addChild(*SoField71);

SoNode20->addChild(*SoProtoInstance67);

//====================
SoExternProtoDeclare* SoExternProtoDeclare72 = new SoExternProtoDeclare();
SoExternProtoDeclare72->setName(QString("HeadsUpDisplay"));
SoExternProtoDeclare72->setAppinfo(QString("Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location"));
SoExternProtoDeclare72->setUrl(new QString[]{QString("../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay"), QString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay"), QString("../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"), QString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay")}, 4);
Sofield* Sofield73 = new Sofield();
Sofield73->setName(QString("children"));
Sofield73->setAccessType(QString("inputOutput"));
Sofield73->setAppinfo(QString("X3D content positioned at HUD offset"));
Sofield73->setType(QString("MFNode"));
SoExternProtoDeclare72->addChild(*Sofield73);

Sofield* Sofield74 = new Sofield();
Sofield74->setName(QString("screenOffset"));
Sofield74->setAccessType(QString("inputOutput"));
Sofield74->setAppinfo(QString("offset position for HUD relative to current view location, default 0 0 -5"));
Sofield74->setType(QString("SFVec3f"));
SoExternProtoDeclare72->addChild(*Sofield74);

Sofield* Sofield75 = new Sofield();
Sofield75->setName(QString("position_changed"));
Sofield75->setAccessType(QString("outputOnly"));
Sofield75->setAppinfo(QString("HUD position update (in world coordinates) relative to original location"));
Sofield75->setType(QString("SFVec3f"));
SoExternProtoDeclare72->addChild(*Sofield75);

Sofield* Sofield76 = new Sofield();
Sofield76->setName(QString("orientation_changed"));
Sofield76->setAccessType(QString("outputOnly"));
Sofield76->setAppinfo(QString("HUD orientation update relative to original location"));
Sofield76->setType(QString("SFRotation"));
SoExternProtoDeclare72->addChild(*Sofield76);

SoNode20->addChild(*SoExternProtoDeclare72);

//====================
SoExternProtoDeclare* SoExternProtoDeclare77 = new SoExternProtoDeclare();
SoExternProtoDeclare77->setName(QString("ViewpointSequencer"));
SoExternProtoDeclare77->setAppinfo(QString("Sequentially binds each Viewpoint in a set of Viewpoint USE nodes, creating an automatic tour for a scene"));
SoExternProtoDeclare77->setUrl(new QString[]{QString("../../Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer"), QString("https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer"), QString("../../Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer"), QString("https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer")}, 4);
Sofield* Sofield78 = new Sofield();
Sofield78->setName(QString("viewpoints"));
Sofield78->setAccessType(QString("initializeOnly"));
Sofield78->setAppinfo(QString("Viewpoint USE nodes that are sequentially bound"));
Sofield78->setType(QString("MFNode"));
SoExternProtoDeclare77->addChild(*Sofield78);

Sofield* Sofield79 = new Sofield();
Sofield79->setName(QString("interval"));
Sofield79->setAccessType(QString("inputOutput"));
Sofield79->setAppinfo(QString("number of seconds between viewpoint shifts"));
Sofield79->setType(QString("SFTime"));
SoExternProtoDeclare77->addChild(*Sofield79);

Sofield* Sofield80 = new Sofield();
Sofield80->setName(QString("enabled"));
Sofield80->setAccessType(QString("inputOutput"));
Sofield80->setAppinfo(QString("whether ViewpointSequencer is enabled or not"));
Sofield80->setType(QString("SFBool"));
SoExternProtoDeclare77->addChild(*Sofield80);

Sofield* Sofield81 = new Sofield();
Sofield81->setName(QString("set_enabled"));
Sofield81->setAccessType(QString("inputOnly"));
Sofield81->setAppinfo(QString("whether ViewpointSequencer is enabled or not"));
Sofield81->setType(QString("SFBool"));
SoExternProtoDeclare77->addChild(*Sofield81);

Sofield* Sofield82 = new Sofield();
Sofield82->setName(QString("previous"));
Sofield82->setAccessType(QString("inputOnly"));
Sofield82->setAppinfo(QString("bind previous Viewpoint in list"));
Sofield82->setType(QString("SFBool"));
SoExternProtoDeclare77->addChild(*Sofield82);

Sofield* Sofield83 = new Sofield();
Sofield83->setName(QString("next"));
Sofield83->setAccessType(QString("inputOnly"));
Sofield83->setAppinfo(QString("bind next Viewpoint in list"));
Sofield83->setType(QString("SFBool"));
SoExternProtoDeclare77->addChild(*Sofield83);

Sofield* Sofield84 = new Sofield();
Sofield84->setName(QString("toggleMessage"));
Sofield84->setAccessType(QString("inputOutput"));
Sofield84->setAppinfo(QString("Select message to toggle ViewpointSequencer"));
Sofield84->setType(QString("MFString"));
SoExternProtoDeclare77->addChild(*Sofield84);

Sofield* Sofield85 = new Sofield();
Sofield85->setName(QString("toggleMessageFontSize"));
Sofield85->setAccessType(QString("initializeOnly"));
Sofield85->setAppinfo(QString("Color for toggleMessage text"));
Sofield85->setType(QString("SFFloat"));
SoExternProtoDeclare77->addChild(*Sofield85);

Sofield* Sofield86 = new Sofield();
Sofield86->setName(QString("toggleMessageColor"));
Sofield86->setAccessType(QString("inputOutput"));
Sofield86->setAppinfo(QString("Color for toggleMessage text"));
Sofield86->setType(QString("SFColor"));
SoExternProtoDeclare77->addChild(*Sofield86);

Sofield* Sofield87 = new Sofield();
Sofield87->setName(QString("traceEnabled"));
Sofield87->setAccessType(QString("inputOutput"));
Sofield87->setAppinfo(QString("enable console output"));
Sofield87->setType(QString("SFBool"));
SoExternProtoDeclare77->addChild(*Sofield87);

SoNode20->addChild(*SoExternProtoDeclare77);

SoProtoInstance* SoProtoInstance88 = new SoProtoInstance();
SoProtoInstance88->setName(QString("ViewpointSequencer"));
SoProtoInstance88->setDEF(QString("ViewpointTour"));
SoField* SoField89 = new SoField();
SoField89->setName(QString("interval"));
SoField89->setValue(QString("30"));
SoProtoInstance88->addChild(*SoField89);

SoField* SoField90 = new SoField();
SoField90->setName(QString("enabled"));
SoField90->setValue(QString("true"));
SoProtoInstance88->addChild(*SoField90);

SoField* SoField91 = new SoField();
SoField91->setName(QString("toggleMessage"));
SoField91->setValue(QString("\"ViewpointSequencer tour\""));
SoProtoInstance88->addChild(*SoField91);

SoField* SoField92 = new SoField();
SoField92->setName(QString("viewpoints"));
SoGeoViewpoint* SoGeoViewpoint93 = new SoGeoViewpoint();
SoGeoViewpoint93->setUSE(QString("View01"));
SoField92->addChild(SoGeoViewpoint93);

SoGeoViewpoint* SoGeoViewpoint94 = new SoGeoViewpoint();
SoGeoViewpoint94->setUSE(QString("View02"));
SoField92->addChild(SoGeoViewpoint94);

SoGeoViewpoint* SoGeoViewpoint95 = new SoGeoViewpoint();
SoGeoViewpoint95->setUSE(QString("View03"));
SoField92->addChild(SoGeoViewpoint95);

SoGeoViewpoint* SoGeoViewpoint96 = new SoGeoViewpoint();
SoGeoViewpoint96->setUSE(QString("View04"));
SoField92->addChild(SoGeoViewpoint96);

SoGeoViewpoint* SoGeoViewpoint97 = new SoGeoViewpoint();
SoGeoViewpoint97->setUSE(QString("View05"));
SoField92->addChild(SoGeoViewpoint97);

SoGeoViewpoint* SoGeoViewpoint98 = new SoGeoViewpoint();
SoGeoViewpoint98->setUSE(QString("View06"));
SoField92->addChild(SoGeoViewpoint98);

SoGeoViewpoint* SoGeoViewpoint99 = new SoGeoViewpoint();
SoGeoViewpoint99->setUSE(QString("View07"));
SoField92->addChild(SoGeoViewpoint99);

SoGeoViewpoint* SoGeoViewpoint100 = new SoGeoViewpoint();
SoGeoViewpoint100->setUSE(QString("View08"));
SoField92->addChild(SoGeoViewpoint100);

SoGeoViewpoint* SoGeoViewpoint101 = new SoGeoViewpoint();
SoGeoViewpoint101->setUSE(QString("View09"));
SoField92->addChild(SoGeoViewpoint101);

SoGeoViewpoint* SoGeoViewpoint102 = new SoGeoViewpoint();
SoGeoViewpoint102->setUSE(QString("View10"));
SoField92->addChild(SoGeoViewpoint102);

SoGeoViewpoint* SoGeoViewpoint103 = new SoGeoViewpoint();
SoGeoViewpoint103->setUSE(QString("View11"));
SoField92->addChild(SoGeoViewpoint103);

SoGeoViewpoint* SoGeoViewpoint104 = new SoGeoViewpoint();
SoGeoViewpoint104->setUSE(QString("View12"));
SoField92->addChild(SoGeoViewpoint104);

SoGeoViewpoint* SoGeoViewpoint105 = new SoGeoViewpoint();
SoGeoViewpoint105->setUSE(QString("View13"));
SoField92->addChild(SoGeoViewpoint105);

SoGeoViewpoint* SoGeoViewpoint106 = new SoGeoViewpoint();
SoGeoViewpoint106->setUSE(QString("View14"));
SoField92->addChild(SoGeoViewpoint106);

SoGeoViewpoint* SoGeoViewpoint107 = new SoGeoViewpoint();
SoGeoViewpoint107->setUSE(QString("View15"));
SoField92->addChild(SoGeoViewpoint107);

SoGeoViewpoint* SoGeoViewpoint108 = new SoGeoViewpoint();
SoGeoViewpoint108->setUSE(QString("View16"));
SoField92->addChild(SoGeoViewpoint108);

SoGeoViewpoint* SoGeoViewpoint109 = new SoGeoViewpoint();
SoGeoViewpoint109->setUSE(QString("View17"));
SoField92->addChild(SoGeoViewpoint109);

SoGeoViewpoint* SoGeoViewpoint110 = new SoGeoViewpoint();
SoGeoViewpoint110->setUSE(QString("View18"));
SoField92->addChild(SoGeoViewpoint110);

SoGeoViewpoint* SoGeoViewpoint111 = new SoGeoViewpoint();
SoGeoViewpoint111->setUSE(QString("View19"));
SoField92->addChild(SoGeoViewpoint111);

SoGeoViewpoint* SoGeoViewpoint112 = new SoGeoViewpoint();
SoGeoViewpoint112->setUSE(QString("View20"));
SoField92->addChild(SoGeoViewpoint112);

SoGeoViewpoint* SoGeoViewpoint113 = new SoGeoViewpoint();
SoGeoViewpoint113->setUSE(QString("View21"));
SoField92->addChild(SoGeoViewpoint113);

SoGeoViewpoint* SoGeoViewpoint114 = new SoGeoViewpoint();
SoGeoViewpoint114->setUSE(QString("View22"));
SoField92->addChild(SoGeoViewpoint114);

SoGeoViewpoint* SoGeoViewpoint115 = new SoGeoViewpoint();
SoGeoViewpoint115->setUSE(QString("View23"));
SoField92->addChild(SoGeoViewpoint115);

SoGeoViewpoint* SoGeoViewpoint116 = new SoGeoViewpoint();
SoGeoViewpoint116->setUSE(QString("View24"));
SoField92->addChild(SoGeoViewpoint116);

SoGeoViewpoint* SoGeoViewpoint117 = new SoGeoViewpoint();
SoGeoViewpoint117->setUSE(QString("View25"));
SoField92->addChild(SoGeoViewpoint117);

SoGeoViewpoint* SoGeoViewpoint118 = new SoGeoViewpoint();
SoGeoViewpoint118->setUSE(QString("View26"));
SoField92->addChild(SoGeoViewpoint118);

SoGeoViewpoint* SoGeoViewpoint119 = new SoGeoViewpoint();
SoGeoViewpoint119->setUSE(QString("View27"));
SoField92->addChild(SoGeoViewpoint119);

SoGeoViewpoint* SoGeoViewpoint120 = new SoGeoViewpoint();
SoGeoViewpoint120->setUSE(QString("View28"));
SoField92->addChild(SoGeoViewpoint120);

SoGeoViewpoint* SoGeoViewpoint121 = new SoGeoViewpoint();
SoGeoViewpoint121->setUSE(QString("View29"));
SoField92->addChild(SoGeoViewpoint121);

SoGeoViewpoint* SoGeoViewpoint122 = new SoGeoViewpoint();
SoGeoViewpoint122->setUSE(QString("View30"));
SoField92->addChild(SoGeoViewpoint122);

SoGeoViewpoint* SoGeoViewpoint123 = new SoGeoViewpoint();
SoGeoViewpoint123->setUSE(QString("View31"));
SoField92->addChild(SoGeoViewpoint123);

SoGeoViewpoint* SoGeoViewpoint124 = new SoGeoViewpoint();
SoGeoViewpoint124->setUSE(QString("View32"));
SoField92->addChild(SoGeoViewpoint124);

SoGeoViewpoint* SoGeoViewpoint125 = new SoGeoViewpoint();
SoGeoViewpoint125->setUSE(QString("View33"));
SoField92->addChild(SoGeoViewpoint125);

SoGeoViewpoint* SoGeoViewpoint126 = new SoGeoViewpoint();
SoGeoViewpoint126->setUSE(QString("View34"));
SoField92->addChild(SoGeoViewpoint126);

SoGeoViewpoint* SoGeoViewpoint127 = new SoGeoViewpoint();
SoGeoViewpoint127->setUSE(QString("View35"));
SoField92->addChild(SoGeoViewpoint127);

SoViewpoint* SoViewpoint128 = new SoViewpoint();
SoViewpoint128->setDEF(QString("View4"));
SoViewpoint128->setDescription(QString("View four (-X axis)"));
SoViewpoint128->setOrientation(new float[]{0.0,1.0,0.0,-1.57});
SoViewpoint128->setPosition(new float[]{-10.0,0.0,0.0});
SoField92->addChild(*SoViewpoint128);

SoProtoInstance88->addChild(*SoField92);

//initially enabled is off, scene provides selectable text to activate
SoNode20->addChild(*SoProtoInstance88);

//====================
SoGeoLocation* SoGeoLocation129 = new SoGeoLocation();
SoGeoLocation129->setGeoCoords(new double[]{36.595599,-121.877148,624990.0});
SoBillboard* SoBillboard130 = new SoBillboard();
SoBillboard130->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape131 = new SoShape();
SoText* SoText132 = new SoText();
SoText132->setString(new QString[]{QString("ViewpointSequencer tour")}, 1);
SoFontStyle* SoFontStyle133 = new SoFontStyle();
SoFontStyle133->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText132->setFontStyle(*SoFontStyle133);

SoShape131->setGeometry(*SoText132);

SoVRMLAppearance* SoVRMLAppearance134 = new SoVRMLAppearance();
SoMaterial* SoMaterial135 = new SoMaterial();
SoMaterial135->setAmbientIntensity(0.25);
SoMaterial135->setDiffuseColor(new float[]{0.795918,0.505869,0.093315});
SoMaterial135->setShininess(0.39);
SoMaterial135->setSpecularColor(new float[]{0.923469,0.428866,0.006369});
SoVRMLAppearance134->addChild(*SoMaterial135);

SoShape131->addChild(*SoVRMLAppearance134);

SoBillboard130->addChild(*SoShape131);

SoGeoLocation129->addChildren(SoBillboard130);

SoTouchSensor* SoTouchSensor136 = new SoTouchSensor();
SoTouchSensor136->setDEF(QString("TourTouch"));
SoTouchSensor136->setDescription(QString("Touch text to turn tour on/off"));
SoGeoLocation129->addChildren(*SoTouchSensor136);

SoBooleanToggle* SoBooleanToggle137 = new SoBooleanToggle();
SoBooleanToggle137->setDEF(QString("TourToggle"));
SoGeoLocation129->addChildren(SoBooleanToggle137);

SoROUTE* SoROUTE138 = new SoROUTE();
SoROUTE138->setFromField(QString("isActive"));
SoROUTE138->setFromNode(QString("TourTouch"));
SoROUTE138->setToField(QString("set_boolean"));
SoROUTE138->setToNode(QString("TourToggle"));
SoGeoLocation129->addChildren(*SoROUTE138);

SoROUTE* SoROUTE139 = new SoROUTE();
SoROUTE139->setFromField(QString("toggle"));
SoROUTE139->setFromNode(QString("TourToggle"));
SoROUTE139->setToField(QString("set_enabled"));
SoROUTE139->setToNode(QString("ViewpointTour"));
SoGeoLocation129->addChildren(*SoROUTE139);

SoNode20->addChild(*SoGeoLocation129);

//====================
SoExternProtoDeclare* SoExternProtoDeclare140 = new SoExternProtoDeclare();
SoExternProtoDeclare140->setName(QString("ViewPositionOrientation"));
SoExternProtoDeclare140->setAppinfo(QString("ViewPositionOrientation provides provides console output of local position and orientation as user navigates"));
SoExternProtoDeclare140->setUrl(new QString[]{QString("../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation"), QString("https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation"), QString("../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"), QString("https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation")}, 4);
Sofield* Sofield141 = new Sofield();
Sofield141->setName(QString("enabled"));
Sofield141->setAccessType(QString("inputOutput"));
Sofield141->setAppinfo(QString("Whether or not ViewPositionOrientation sends output to console"));
Sofield141->setType(QString("SFBool"));
SoExternProtoDeclare140->addChild(*Sofield141);

Sofield* Sofield142 = new Sofield();
Sofield142->setName(QString("traceEnabled"));
Sofield142->setAccessType(QString("initializeOnly"));
Sofield142->setAppinfo(QString("Output internal trace messages for debugging this node, intended for developer use only"));
Sofield142->setType(QString("SFBool"));
SoExternProtoDeclare140->addChild(*Sofield142);

Sofield* Sofield143 = new Sofield();
Sofield143->setName(QString("set_traceEnabled"));
Sofield143->setAccessType(QString("inputOnly"));
Sofield143->setAppinfo(QString("Ability to turn output tracing on/off at runtime"));
Sofield143->setType(QString("SFBool"));
SoExternProtoDeclare140->addChild(*Sofield143);

Sofield* Sofield144 = new Sofield();
Sofield144->setName(QString("position_changed"));
Sofield144->setAccessType(QString("outputOnly"));
Sofield144->setAppinfo(QString("Output local position"));
Sofield144->setType(QString("SFVec3f"));
SoExternProtoDeclare140->addChild(*Sofield144);

Sofield* Sofield145 = new Sofield();
Sofield145->setName(QString("orientation_changed"));
Sofield145->setAccessType(QString("outputOnly"));
Sofield145->setAppinfo(QString("Output local orientation"));
Sofield145->setType(QString("SFRotation"));
SoExternProtoDeclare140->addChild(*Sofield145);

Sofield* Sofield146 = new Sofield();
Sofield146->setName(QString("outputViewpointString"));
Sofield146->setAccessType(QString("outputOnly"));
Sofield146->setAppinfo(QString("MFString value of new Viewpoint"));
Sofield146->setType(QString("MFString"));
SoExternProtoDeclare140->addChild(*Sofield146);

SoNode20->addChild(*SoExternProtoDeclare140);

SoProtoInstance* SoProtoInstance147 = new SoProtoInstance();
SoProtoInstance147->setName(QString("ViewPositionOrientation"));
SoProtoInstance147->setDEF(QString("ExampleViewPositionOrientation"));
SoField* SoField148 = new SoField();
SoField148->setName(QString("enabled"));
SoField148->setValue(QString("false"));
SoProtoInstance147->addChild(*SoField148);

SoNode20->addChild(*SoProtoInstance147);

//====================
SoSceneManager0->setSceneGraph(*SoNode20);

return 0;
}
