#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("ViewFrustumExample.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("description"));
meta3.setContent(CString("Display view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, illustrating ProtoInstance reuse of a separately declared prototype."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Don Brutzman"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("translated"));
meta5.setContent(CString("16 August 2008"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("20 October 2019"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("reference"));
meta7.setContent(CString("ViewFrustumPrototype.x3d"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("drawing"));
meta8.setContent(CString("ViewFrustumComputation.png"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("Image"));
meta9.setContent(CString("ViewFrustumOverheadView.png"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("Image"));
meta10.setContent(CString("ViewFrustumObliqueView.png"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("Image"));
meta11.setContent(CString("ViewpointCalculator.png"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("Image"));
meta12.setContent(CString("ViewpointCalculatorComposed.png"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("subject"));
meta13.setContent(CString("view culling frustum"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("identifier"));
meta14.setContent(CString("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumExample.x3d"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("generator"));
meta15.setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("license"));
meta16.setContent(CString("../license.html"));
head1.addMeta(&meta16);

X3D0.setHead(&head1);

Scene& Scene17 =  Scene();
WorldInfo& WorldInfo18 =  WorldInfo();
WorldInfo18.setTitle(CString("ViewFrustumExample.x3d"));
Scene17.addChild(&WorldInfo18);

Viewpoint& Viewpoint19 =  Viewpoint();
Viewpoint19.setDescription(CString("ViewFrustum from above, looking down"));
Viewpoint19.setOrientation(new float[4]{1,0,0,-1.57});
Viewpoint19.setPosition(new float[3]{0,40,0});
Scene17.addChild(&Viewpoint19);

Viewpoint& Viewpoint20 =  Viewpoint();
Viewpoint20.setDescription(CString("ViewFrustum from point of view"));
Scene17.addChild(&Viewpoint20);

Viewpoint& Viewpoint21 =  Viewpoint();
Viewpoint21.setDescription(CString("ViewFrustum behind point of view"));
Viewpoint21.setPosition(new float[3]{0,0,15});
Scene17.addChild(&Viewpoint21);

Viewpoint& Viewpoint22 =  Viewpoint();
Viewpoint22.setDescription(CString("ViewFrustum oblique side view"));
Viewpoint22.setOrientation(new float[4]{0.8005,0.5926,0.0898,-0.3743});
Viewpoint22.setPosition(new float[3]{-5,5,20});
Scene17.addChild(&Viewpoint22);

NavigationInfo& NavigationInfo23 =  NavigationInfo();
NavigationInfo23.setType(new CString[3]{CString("EXAMINE"), CString("FLY"), CString("ANY")}, 3);
Scene17.addChild(&NavigationInfo23);

ExternProtoDeclare& ExternProtoDeclare24 =  ExternProtoDeclare();
ExternProtoDeclare24.setName(CString("ViewFrustum"));
ExternProtoDeclare24.setAppinfo(CString("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes"));
ExternProtoDeclare24.setUrl(new CString[1]{CString("ViewFrustumPrototype.x3d#ViewFrustum")}, 1);
field& field25 =  field();
field25.setName(CString("ViewpointNode"));
field25.setAccessType(CString("initializeOnly"));
field25.setAppinfo(CString("required: insert Viewpoint DEF or USE node for view of interest"));
field25.setType(CString("SFNode"));
ExternProtoDeclare24.addChild(&field25);

field& field26 =  field();
field26.setName(CString("NavigationInfoNode"));
field26.setAccessType(CString("initializeOnly"));
field26.setAppinfo(CString("required: insert NavigationInfo DEF or USE node of interest"));
field26.setType(CString("SFNode"));
ExternProtoDeclare24.addChild(&field26);

field& field27 =  field();
field27.setName(CString("visible"));
field27.setAccessType(CString("inputOutput"));
field27.setAppinfo(CString("whether or not frustum geometry is rendered"));
field27.setType(CString("SFBool"));
ExternProtoDeclare24.addChild(&field27);

field& field28 =  field();
field28.setName(CString("lineColor"));
field28.setAccessType(CString("inputOutput"));
field28.setAppinfo(CString("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9"));
field28.setType(CString("SFColor"));
ExternProtoDeclare24.addChild(&field28);

field& field29 =  field();
field29.setName(CString("frustumColor"));
field29.setAccessType(CString("inputOutput"));
field29.setAppinfo(CString("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8"));
field29.setType(CString("SFColor"));
ExternProtoDeclare24.addChild(&field29);

field& field30 =  field();
field30.setName(CString("transparency"));
field30.setAccessType(CString("inputOutput"));
field30.setAppinfo(CString("transparency of ViewFrustum hull geometry, default value 0.5"));
field30.setType(CString("SFFloat"));
ExternProtoDeclare24.addChild(&field30);

field& field31 =  field();
field31.setName(CString("aspectRatio"));
field31.setAccessType(CString("inputOutput"));
field31.setAppinfo(CString("assumed ratio height/width, default value 0.75"));
field31.setType(CString("SFFloat"));
ExternProtoDeclare24.addChild(&field31);

field& field32 =  field();
field32.setName(CString("trace"));
field32.setAccessType(CString("initializeOnly"));
field32.setAppinfo(CString("debug support, default false"));
field32.setType(CString("SFBool"));
ExternProtoDeclare24.addChild(&field32);

Scene17.addChild(&ExternProtoDeclare24);

//Example use
ProtoInstance& ProtoInstance33 =  ProtoInstance();
ProtoInstance33.setName(CString("ViewFrustum"));
fieldValue& fieldValue34 =  fieldValue();
fieldValue34.setName(CString("ViewpointNode"));
//prefer empty description to prevent entry in player's ViewpointList
Viewpoint& Viewpoint35 =  Viewpoint();
Viewpoint35.setDescription(CString("ViewFrustum ViewpointNode"));
fieldValue34.addChild(&Viewpoint35);

ProtoInstance33.addChild(&fieldValue34);

fieldValue& fieldValue36 =  fieldValue();
fieldValue36.setName(CString("NavigationInfoNode"));
NavigationInfo& NavigationInfo37 =  NavigationInfo();
NavigationInfo37.setVisibilityLimit(15);
fieldValue36.addChild(&NavigationInfo37);

ProtoInstance33.addChild(&fieldValue36);

fieldValue& fieldValue38 =  fieldValue();
fieldValue38.setName(CString("visible"));
fieldValue38.setValue(CString("true"));
ProtoInstance33.addChild(&fieldValue38);

fieldValue& fieldValue39 =  fieldValue();
fieldValue39.setName(CString("lineColor"));
fieldValue39.setValue(CString("0.9 0.9 0.9"));
ProtoInstance33.addChild(&fieldValue39);

fieldValue& fieldValue40 =  fieldValue();
fieldValue40.setName(CString("frustumColor"));
fieldValue40.setValue(CString("0.8 0.8 0.8"));
ProtoInstance33.addChild(&fieldValue40);

fieldValue& fieldValue41 =  fieldValue();
fieldValue41.setName(CString("transparency"));
fieldValue41.setValue(CString("0.75"));
ProtoInstance33.addChild(&fieldValue41);

fieldValue& fieldValue42 =  fieldValue();
fieldValue42.setName(CString("trace"));
fieldValue42.setValue(CString("true"));
ProtoInstance33.addChild(&fieldValue42);

Scene17.addChild(&ProtoInstance33);

//Visualization assists
Inline& Inline43 =  Inline();
Inline43.setDEF(CString("GridXZ"));
Inline43.setUrl(new CString[1]{CString("GridXZ_20x20Fixed.x3d")}, 1);
Scene17.addChild(&Inline43);

Transform& Transform44 =  Transform();
Transform44.setScale(new float[3]{5,5,5});
Inline& Inline45 =  Inline();
Inline45.setDEF(CString("CoordinateAxes"));
Inline45.setUrl(new CString[1]{CString("CoordinateAxes.x3d")}, 1);
Transform44.addChild(&Inline45);

Scene17.addChild(&Transform44);

X3D0.setScene(&Scene17);

}
