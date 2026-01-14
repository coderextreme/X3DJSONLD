#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interactive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "TestCycleTimeStart.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "creator";
meta3.content = "Andreas";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Joe D. Williams";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "description";
meta5.content = "Test design patterns for animation control.";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "created";
meta6.content = "10 September 2023";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Mon, 15 Sep 2025 05:20:59 GMT";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "reference";
meta8.content = "https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/TimeSensor/cycletimeIndex.html";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/cycleTimeStart.x3d";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "identifier";
meta10.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/TestCycleTimeStart.x3d";
head1.meta[8] = meta10;

head = head1;

WorldInfo WorldInfo12 = createNode("WorldInfo");
WorldInfo12.title = "TestCycleTimeStart.x3d";
children = new MFNode();

children[0] = WorldInfo12;

Viewpoint Viewpoint13 = createNode("Viewpoint");
Viewpoint13.description = "hello in there";
children[1] = Viewpoint13;

TimeSensor TimeSensor14 = createNode("TimeSensor");
TimeSensor14.DEF = "REDTIME1";
TimeSensor14.loop = True;
TimeSensor14.stopTime = 1757913659.298;
children[2] = TimeSensor14;

TimeSensor TimeSensor15 = createNode("TimeSensor");
TimeSensor15.DEF = "GREENTIME2";
TimeSensor15.cycleInterval = 5;
TimeSensor15.startTime = 1757913659.298;
children[3] = TimeSensor15;

TimeSensor TimeSensor16 = createNode("TimeSensor");
TimeSensor16.DEF = "BLUETIME3";
TimeSensor16.cycleInterval = 10;
children[4] = TimeSensor16;

BooleanFilter BooleanFilter17 = createNode("BooleanFilter");
BooleanFilter17.DEF = "GREENFILTER";
children[5] = BooleanFilter17;

TimeTrigger TimeTrigger18 = createNode("TimeTrigger");
TimeTrigger18.DEF = "BLUETRIGGER";
children[6] = TimeTrigger18;

Transform Transform19 = createNode("Transform");
Transform19.DEF = "REDBALL";
Transform19.translation = new SFVec3f(new float[1.615999,0,0]);
Shape Shape20 = createNode("Shape");
Appearance Appearance21 = createNode("Appearance");
Material Material22 = createNode("Material");
Material22.diffuseColor = new SFColor(new float[1,0,0]);
Appearance21.material = Material22;

Shape20.appearance = Appearance21;

Sphere Sphere23 = createNode("Sphere");
Shape20.geometry = Sphere23;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

children[7] = Transform19;

Transform Transform24 = createNode("Transform");
Transform24.DEF = "GREENBALL";
Shape Shape25 = createNode("Shape");
Appearance Appearance26 = createNode("Appearance");
Material Material27 = createNode("Material");
Material27.diffuseColor = new SFColor(new float[0,1,0]);
Appearance26.material = Material27;

Shape25.appearance = Appearance26;

Sphere Sphere28 = createNode("Sphere");
Shape25.geometry = Sphere28;

Transform24.child = new undefined();

Transform24.child[0] = Shape25;

children[8] = Transform24;

Transform Transform29 = createNode("Transform");
Transform29.DEF = "BLUEBALL";
Shape Shape30 = createNode("Shape");
Appearance Appearance31 = createNode("Appearance");
Material Material32 = createNode("Material");
Material32.diffuseColor = new SFColor(new float[0,0,1]);
Appearance31.material = Material32;

Shape30.appearance = Appearance31;

Sphere Sphere33 = createNode("Sphere");
Shape30.geometry = Sphere33;

Transform29.child = new undefined();

Transform29.child[0] = Shape30;

children[9] = Transform29;

PositionInterpolator PositionInterpolator34 = createNode("PositionInterpolator");
PositionInterpolator34.DEF = "REDINTERP1";
PositionInterpolator34.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
PositionInterpolator34.keyValue = new MFVec3f(new float[0,0,0,2,0,0,0,0,0,-2,0,0,0,0,0]);
children[10] = PositionInterpolator34;

PositionInterpolator PositionInterpolator35 = createNode("PositionInterpolator");
PositionInterpolator35.DEF = "GREENINTERP2";
PositionInterpolator35.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
PositionInterpolator35.keyValue = new MFVec3f(new float[0,0,0,0,2,0,0,0,0,0,-2,0,0,0,0]);
children[11] = PositionInterpolator35;

PositionInterpolator PositionInterpolator36 = createNode("PositionInterpolator");
PositionInterpolator36.DEF = "BLUEINTERP3";
PositionInterpolator36.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
PositionInterpolator36.keyValue = new MFVec3f(new float[0,0,0,0,-2,0,0,0,0,0,2,0,0,0,0]);
children[12] = PositionInterpolator36;

ROUTE ROUTE37 = createNode("ROUTE");
ROUTE37.fromNode = "REDTIME1";
ROUTE37.fromField = "cycleTime";
ROUTE37.toNode = "REDTIME1";
ROUTE37.toField = "set_stopTime";
children[13] = ROUTE37;

ROUTE ROUTE38 = createNode("ROUTE");
ROUTE38.fromNode = "REDTIME1";
ROUTE38.fromField = "stopTime_changed";
ROUTE38.toNode = "GREENTIME2";
ROUTE38.toField = "set_startTime";
children[14] = ROUTE38;

ROUTE ROUTE39 = createNode("ROUTE");
ROUTE39.fromNode = "GREENTIME2";
ROUTE39.fromField = "isActive";
ROUTE39.toNode = "GREENFILTER";
ROUTE39.toField = "set_boolean";
children[15] = ROUTE39;

ROUTE ROUTE40 = createNode("ROUTE");
ROUTE40.fromNode = "GREENFILTER";
ROUTE40.fromField = "inputFalse";
ROUTE40.toNode = "BLUETRIGGER";
ROUTE40.toField = "set_boolean";
children[16] = ROUTE40;

ROUTE ROUTE41 = createNode("ROUTE");
ROUTE41.fromNode = "BLUETRIGGER";
ROUTE41.fromField = "triggerTime";
ROUTE41.toNode = "BLUETIME3";
ROUTE41.toField = "set_startTime";
children[17] = ROUTE41;

ROUTE ROUTE42 = createNode("ROUTE");
ROUTE42.fromNode = "REDTIME1";
ROUTE42.fromField = "fraction_changed";
ROUTE42.toNode = "REDINTERP1";
ROUTE42.toField = "set_fraction";
children[18] = ROUTE42;

ROUTE ROUTE43 = createNode("ROUTE");
ROUTE43.fromNode = "REDINTERP1";
ROUTE43.fromField = "value_changed";
ROUTE43.toNode = "REDBALL";
ROUTE43.toField = "set_translation";
children[19] = ROUTE43;

ROUTE ROUTE44 = createNode("ROUTE");
ROUTE44.fromNode = "GREENTIME2";
ROUTE44.fromField = "fraction_changed";
ROUTE44.toNode = "GREENINTERP2";
ROUTE44.toField = "set_fraction";
children[20] = ROUTE44;

ROUTE ROUTE45 = createNode("ROUTE");
ROUTE45.fromNode = "GREENINTERP2";
ROUTE45.fromField = "value_changed";
ROUTE45.toNode = "GREENBALL";
ROUTE45.toField = "set_translation";
children[21] = ROUTE45;

ROUTE ROUTE46 = createNode("ROUTE");
ROUTE46.fromNode = "BLUETIME3";
ROUTE46.fromField = "fraction_changed";
ROUTE46.toNode = "BLUEINTERP3";
ROUTE46.toField = "set_fraction";
children[22] = ROUTE46;

ROUTE ROUTE47 = createNode("ROUTE");
ROUTE47.fromNode = "BLUEINTERP3";
ROUTE47.fromField = "value_changed";
ROUTE47.toNode = "BLUEBALL";
ROUTE47.toField = "set_translation";
children[23] = ROUTE47;

}
