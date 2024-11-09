#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "comment";
meta2.content = "World of Titania";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Thu, 23 Apr 2015 06:07:07 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V0.7.8, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Thu, 23 Apr 2015 06:07:07 GMT";
head1.meta[4] = meta6;

head = head1;

ExternProtoDeclare ExternProtoDeclare8 = createNode("ExternProtoDeclare");
ExternProtoDeclare8.name = "CountDown";
ExternProtoDeclare8.url = new MFString(new java.lang.String["CountDown_proto.x3d"]);
field field9 = createNode("field");
field9.name = "offset";
field9.accessType = "inputOutput";
field9.type = "SFTime";
ExternProtoDeclare8.field = new MFNode();

ExternProtoDeclare8.field[0] = field9;

field field10 = createNode("field");
field10.name = "startTime";
field10.accessType = "inputOutput";
field10.type = "SFTime";
ExternProtoDeclare8.field[1] = field10;

field field11 = createNode("field");
field11.name = "exitTime";
field11.accessType = "outputOnly";
field11.type = "SFTime";
ExternProtoDeclare8.field[2] = field11;

field field12 = createNode("field");
field12.name = "time";
field12.accessType = "outputOnly";
field12.type = "SFTime";
ExternProtoDeclare8.field[3] = field12;

field field13 = createNode("field");
field13.name = "set_time";
field13.accessType = "inputOnly";
field13.type = "SFTime";
ExternProtoDeclare8.field[4] = field13;

children = new MFNode();

children[0] = ExternProtoDeclare8;

ExternProtoDeclare ExternProtoDeclare14 = createNode("ExternProtoDeclare");
ExternProtoDeclare14.name = "Time2MFString";
ExternProtoDeclare14.url = new MFString(new java.lang.String["Time2MFString_proto.x3d"]);
field field15 = createNode("field");
field15.name = "set_time";
field15.accessType = "inputOnly";
field15.type = "SFTime";
ExternProtoDeclare14.field = new MFNode();

ExternProtoDeclare14.field[0] = field15;

field field16 = createNode("field");
field16.name = "string_changed";
field16.accessType = "outputOnly";
field16.type = "MFString";
ExternProtoDeclare14.field[1] = field16;

children[1] = ExternProtoDeclare14;

ProtoDeclare ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="HamSeg" ><ProtoInterface><field name="whichChoice_changed" accessType="outputOnly" type="SFInt32"></field>
<field name="initEndTime" accessType="outputOnly" type="SFTime"></field>
<field name="set_touchTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_startTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_cycleTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_whichChoice" accessType="inputOnly" type="SFInt32"></field>
<field name="max" accessType="initializeOnly" type="SFInt32" value="6"></field>
<field name="timer" accessType="initializeOnly" type="SFNode"></field>
<field name="cycles" accessType="initializeOnly" type="SFInt32" value="10"></field>
<field name="whichChoice" accessType="initializeOnly" type="SFInt32"></field>
</ProtoInterface>
<ProtoBody><Script DEF="_swScript1" directOutput="true"><field name="whichChoice_changed" accessType="outputOnly" type="SFInt32"></field>
<field name="initEndTime" accessType="outputOnly" type="SFTime"></field>
<field name="set_touchTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_startTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_cycleTime" accessType="inputOnly" type="SFTime"></field>
<field name="set_whichChoice" accessType="inputOnly" type="SFInt32"></field>
<field name="max" accessType="initializeOnly" type="SFInt32"></field>
<field name="timer" accessType="initializeOnly" type="SFNode"></field>
<field name="cycles" accessType="initializeOnly" type="SFInt32"></field>
<field name="whichChoice" accessType="initializeOnly" type="SFInt32"></field>
<IS><connect nodeField="whichChoice_changed" protoField="whichChoice_changed"></connect>
<connect nodeField="initEndTime" protoField="initEndTime"></connect>
<connect nodeField="set_touchTime" protoField="set_touchTime"></connect>
<connect nodeField="set_startTime" protoField="set_startTime"></connect>
<connect nodeField="set_cycleTime" protoField="set_cycleTime"></connect>
<connect nodeField="set_whichChoice" protoField="set_whichChoice"></connect>
<connect nodeField="max" protoField="max"></connect>
<connect nodeField="timer" protoField="timer"></connect>
<connect nodeField="cycles" protoField="cycles"></connect>
<connect nodeField="whichChoice" protoField="whichChoice"></connect>
</IS>
<![CDATA[vrmlscript:
function initialize()
{
	whichChoice_changed = whichChoice;
}

function set_touchTime(value, time)
{
	if (whichChoice_changed + 1 > max)
		whichChoice_changed = 0;
	else whichChoice_changed++;
}

function set_startTime(value, time)
{
	whichChoice = 0;
	timer.enabled = TRUE;
}

function set_cycleTime(value, time)
{
	c = Math.random() * max;
	whichChoice_changed = c;
	if(whichChoice++ > cycles) {
		timer.enabled = FALSE;
		initEndTime = time;
	}
}

function set_whichChoice(value, time)
{
	whichChoice = value;
	whichChoice_changed = whichChoice;
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare17.name = "HamSeg";
ProtoInterface ProtoInterface18 = createNode("ProtoInterface");
field field19 = createNode("field");
field19.name = "whichChoice_changed";
field19.accessType = "outputOnly";
field19.type = "SFInt32";
ProtoInterface18.field = new MFNode();

ProtoInterface18.field[0] = field19;

field field20 = createNode("field");
field20.name = "initEndTime";
field20.accessType = "outputOnly";
field20.type = "SFTime";
ProtoInterface18.field[1] = field20;

field field21 = createNode("field");
field21.name = "set_touchTime";
field21.accessType = "inputOnly";
field21.type = "SFTime";
ProtoInterface18.field[2] = field21;

field field22 = createNode("field");
field22.name = "set_startTime";
field22.accessType = "inputOnly";
field22.type = "SFTime";
ProtoInterface18.field[3] = field22;

field field23 = createNode("field");
field23.name = "set_cycleTime";
field23.accessType = "inputOnly";
field23.type = "SFTime";
ProtoInterface18.field[4] = field23;

field field24 = createNode("field");
field24.name = "set_whichChoice";
field24.accessType = "inputOnly";
field24.type = "SFInt32";
ProtoInterface18.field[5] = field24;

field field25 = createNode("field");
field25.name = "max";
field25.accessType = "initializeOnly";
field25.type = "SFInt32";
field25.value = "6";
ProtoInterface18.field[6] = field25;

field field26 = createNode("field");
field26.name = "timer";
field26.accessType = "initializeOnly";
field26.type = "SFNode";
ProtoInterface18.field[7] = field26;

field field27 = createNode("field");
field27.name = "cycles";
field27.accessType = "initializeOnly";
field27.type = "SFInt32";
field27.value = "10";
ProtoInterface18.field[8] = field27;

field field28 = createNode("field");
field28.name = "whichChoice";
field28.accessType = "initializeOnly";
field28.type = "SFInt32";
ProtoInterface18.field[9] = field28;

ProtoDeclare17.protoInterface = ProtoInterface18;

ProtoBody ProtoBody29 = createNode("ProtoBody");
Script Script30 = createNode("Script");
Script30.DEF = "_swScript1";
Script30.directOutput = True;
field field31 = createNode("field");
field31.name = "whichChoice_changed";
field31.accessType = "outputOnly";
field31.type = "SFInt32";
Script30.field = new MFNode();

Script30.field[0] = field31;

field field32 = createNode("field");
field32.name = "initEndTime";
field32.accessType = "outputOnly";
field32.type = "SFTime";
Script30.field[1] = field32;

field field33 = createNode("field");
field33.name = "set_touchTime";
field33.accessType = "inputOnly";
field33.type = "SFTime";
Script30.field[2] = field33;

field field34 = createNode("field");
field34.name = "set_startTime";
field34.accessType = "inputOnly";
field34.type = "SFTime";
Script30.field[3] = field34;

field field35 = createNode("field");
field35.name = "set_cycleTime";
field35.accessType = "inputOnly";
field35.type = "SFTime";
Script30.field[4] = field35;

field field36 = createNode("field");
field36.name = "set_whichChoice";
field36.accessType = "inputOnly";
field36.type = "SFInt32";
Script30.field[5] = field36;

field field37 = createNode("field");
field37.name = "max";
field37.accessType = "initializeOnly";
field37.type = "SFInt32";
Script30.field[6] = field37;

field field38 = createNode("field");
field38.name = "timer";
field38.accessType = "initializeOnly";
field38.type = "SFNode";
Script30.field[7] = field38;

field field39 = createNode("field");
field39.name = "cycles";
field39.accessType = "initializeOnly";
field39.type = "SFInt32";
Script30.field[8] = field39;

field field40 = createNode("field");
field40.name = "whichChoice";
field40.accessType = "initializeOnly";
field40.type = "SFInt32";
Script30.field[9] = field40;

IS IS41 = createNode("IS");
connect connect42 = createNode("connect");
connect42.nodeField = "whichChoice_changed";
connect42.protoField = "whichChoice_changed";
IS41.connect = new MFNode();

IS41.connect[0] = connect42;

connect connect43 = createNode("connect");
connect43.nodeField = "initEndTime";
connect43.protoField = "initEndTime";
IS41.connect[1] = connect43;

connect connect44 = createNode("connect");
connect44.nodeField = "set_touchTime";
connect44.protoField = "set_touchTime";
IS41.connect[2] = connect44;

connect connect45 = createNode("connect");
connect45.nodeField = "set_startTime";
connect45.protoField = "set_startTime";
IS41.connect[3] = connect45;

connect connect46 = createNode("connect");
connect46.nodeField = "set_cycleTime";
connect46.protoField = "set_cycleTime";
IS41.connect[4] = connect46;

connect connect47 = createNode("connect");
connect47.nodeField = "set_whichChoice";
connect47.protoField = "set_whichChoice";
IS41.connect[5] = connect47;

connect connect48 = createNode("connect");
connect48.nodeField = "max";
connect48.protoField = "max";
IS41.connect[6] = connect48;

connect connect49 = createNode("connect");
connect49.nodeField = "timer";
connect49.protoField = "timer";
IS41.connect[7] = connect49;

connect connect50 = createNode("connect");
connect50.nodeField = "cycles";
connect50.protoField = "cycles";
IS41.connect[8] = connect50;

connect connect51 = createNode("connect");
connect51.nodeField = "whichChoice";
connect51.protoField = "whichChoice";
IS41.connect[9] = connect51;

Script30.iS = IS41;


Script30.setSourceCode(`vrmlscript:\n"+
"function initialize()\n"+
"{\n"+
"	whichChoice_changed = whichChoice;\n"+
"}\n"+
"\n"+
"function set_touchTime(value, time)\n"+
"{\n"+
"	if (whichChoice_changed + 1 > max)\n"+
"		whichChoice_changed = 0;\n"+
"	else whichChoice_changed++;\n"+
"}\n"+
"\n"+
"function set_startTime(value, time)\n"+
"{\n"+
"	whichChoice = 0;\n"+
"	timer.enabled = TRUE;\n"+
"}\n"+
"\n"+
"function set_cycleTime(value, time)\n"+
"{\n"+
"	c = Math.random() * max;\n"+
"	whichChoice_changed = c;\n"+
"	if(whichChoice++ > cycles) {\n"+
"		timer.enabled = FALSE;\n"+
"		initEndTime = time;\n"+
"	}\n"+
"}\n"+
"\n"+
"function set_whichChoice(value, time)\n"+
"{\n"+
"	whichChoice = value;\n"+
"	whichChoice_changed = whichChoice;\n"+
"}`)
ProtoBody29.children = new MFNode();

ProtoBody29.children[0] = Script30;

ProtoDeclare17.protoBody = ProtoBody29;

children[2] = ProtoDeclare17;

WorldInfo WorldInfo52 = createNode("WorldInfo");
WorldInfo52.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children[3] = WorldInfo52;

TimeSensor TimeSensor53 = createNode("TimeSensor");
TimeSensor53.DEF = "enterWorldTimeSensor";
TimeSensor53.loop = True;
TimeSensor53.startTime = 1;
children[4] = TimeSensor53;

Script Script54 = createNode("Script");
Script54.DEF = "enterWorldScript";
field field55 = createNode("field");
field55.name = "startTime";
field55.accessType = "outputOnly";
field55.type = "SFTime";
Script54.field = new MFNode();

Script54.field[0] = field55;

field field56 = createNode("field");
field56.name = "firstTime";
field56.accessType = "outputOnly";
field56.type = "SFBool";
Script54.field[1] = field56;

field field57 = createNode("field");
field57.name = "triggerIn";
field57.accessType = "inputOnly";
field57.type = "SFTime";
Script54.field[2] = field57;


Script54.setSourceCode(`vrmlscript:function triggerIn(value, time) {\n"+
"\n"+
"         // fire off a single round                                     \n"+
"         startTime = value;                                             \n"+
"         firstTime = FALSE;                                             \n"+
"       }`)
children[5] = Script54;

Transform Transform58 = createNode("Transform");
Transform58.DEF = "env";
NavigationInfo NavigationInfo59 = createNode("NavigationInfo");
NavigationInfo59.DEF = "_NoNameNavInfo1";
NavigationInfo59.type = new MFString(new java.lang.String["NONE"]);
NavigationInfo59.avatarSize = new MFFloat(new float[0.2,1.2,0.6]);
NavigationInfo59.headlight = False;
Transform58.children = new MFNode();

Transform58.children[0] = NavigationInfo59;

Viewpoint Viewpoint60 = createNode("Viewpoint");
Viewpoint60.DEF = "VP1";
Viewpoint60.position = new SFVec3f(new float[0.501496,0.848048,0.716917]);
Viewpoint60.orientation = new SFRotation(new float[-0.838673,0.536602,0.0931962,0.721047]);
Transform58.children[1] = Viewpoint60;

children[6] = Transform58;

TimeSensor TimeSensor61 = createNode("TimeSensor");
TimeSensor61.cycleInterval = 120;
TimeSensor61.loop = True;
children[7] = TimeSensor61;

Transform Transform62 = createNode("Transform");
Transform62.DEF = "Ham_1";
Transform Transform63 = createNode("Transform");
Transform Transform64 = createNode("Transform");
Transform64.DEF = "seg1";
Group Group65 = createNode("Group");
Group Group66 = createNode("Group");
Group66.DEF = "jump";
TimeSensor TimeSensor67 = createNode("TimeSensor");
TimeSensor67.DEF = "Time_1";
TimeSensor67.cycleInterval = 35;
TimeSensor67.loop = True;
Group66.children = new MFNode();

Group66.children[0] = TimeSensor67;

Group65.children = new MFNode();

Group65.children[0] = Group66;

PositionInterpolator PositionInterpolator68 = createNode("PositionInterpolator");
PositionInterpolator68.DEF = "seg1TranslationInterp";
PositionInterpolator68.key = new MFFloat(new float[0,0.002886,0.005772,0.008658,0.011544,0.01443,0.017316,0.020202,0.023088,0.025974,0.02886,0.031746,0.034632,0.037518,0.040404,0.04329,0.046176,0.049062,0.051948,0.054834,0.05772,0.060606,0.063492,0.066378,0.069264,0.07215,0.075036,0.077922,0.080808,0.083694,0.08658,0.089466,0.092352,0.095238,0.098124,0.10101,0.103896,0.106782,0.109668,0.112554,0.11544,0.118326,0.121212,0.124098,0.126984,0.12987,0.132756,0.135642,0.138528,0.141414,0.1443,0.147186,0.150072,0.152958,0.155844,0.15873,0.161616,0.164502,0.167388,0.170274,0.17316,0.176046,0.178932,0.181818,0.184704,0.18759,0.190476,0.193362,0.196248,0.199134,0.20202,0.204906,0.207792,0.210678,0.213564,0.21645,0.219336,0.222222,0.225108,0.227994,0.23088,0.233766,0.236652,0.239538,0.242424,0.24531,0.248196,0.251082,0.253968,0.256854,0.25974,0.262626,0.265512,0.268398,0.271284,0.27417,0.277056,0.279942,0.282828,0.285714,0.288571,0.291428,0.294285,0.297143,0.3,0.302857,0.305714,0.308571,0.311428,0.314285,0.317143,0.32,0.322857,0.325714,0.328571,0.331428,0.334286,0.337143,0.34,0.342857,0.345714,0.348571,0.351428,0.354286,0.357143,0.36,0.362857,0.365714,0.368571,0.371428,0.374286,0.377143,0.38,0.382857,0.385714,0.388571,0.391429,0.394286,0.397143,0.4,0.402857,0.405714,0.408571,0.411429,0.414286,0.417143,0.42,0.422857,0.425714,0.428571,0.431429,0.434286,0.437143,0.44,0.442857,0.445714,0.448571,0.451429,0.454286,0.457143,0.46,0.462857,0.465714,0.468572,0.471429,0.474286,0.477143,0.48,0.482857,0.485714,0.488572,0.491429,0.494286,0.497143,0.5,0.502857,0.505714,0.508572,0.511429,0.514286,0.517143,0.52,0.522857,0.525714,0.528572,0.531429,0.534286,0.537143,0.54,0.542857,0.545714,0.548572,0.551429,0.554286,0.557143,0.56,0.562857,0.565715,0.568572,0.571429,0.574286,0.577143,0.58,0.582857,0.585715,0.588572,0.591429,0.594286,0.597143,0.6,0.602857,0.605715,0.608572,0.611429,0.614286,0.617143,0.62,0.622858,0.625715,0.628572,0.631429,0.634286,0.637143,0.64,0.642858,0.645715,0.648572,0.651429,0.654286,0.657143,0.66,0.662858,0.665715,0.668572,0.671429,0.674286,0.677143,0.68,0.682858,0.685715,0.688572,0.691429,0.694286,0.697143,0.700001,0.702858,0.705715,0.708572,0.711429,0.714286,0.717143,0.720001,0.722858,0.725715,0.728572,0.731429,0.734286,0.737143,0.740001,0.742858,0.745715,0.748572,0.751429,0.754286,0.757143,0.760001,0.762858,0.765715,0.768572,0.771429,0.774286,0.777144,0.780001,0.782858,0.785715,0.788572,0.791429,0.794286,0.797144,0.800001,0.802858,0.805715,0.808572,0.811429,0.814286,0.817144,0.820001,0.822858,0.825715,0.828572,0.831429,0.834287,0.837144,0.840001,0.842858,0.845715,0.848572,0.851429,0.854287,0.857143,0.860058,0.862974,0.865889,0.868805,0.87172,0.874636,0.877551,0.880467,0.883382,0.886297,0.889213,0.892128,0.895044,0.897959,0.900875,0.90379,0.906705,0.909621,0.912536,0.915452,0.918367,0.921283,0.924198,0.927114,0.930029,0.932944,0.93586,0.938775,0.941691,0.944606,0.947522,0.950437,0.953353,0.956268,0.959183,0.962099,0.965014,0.96793,0.970845,0.973761,0.976676,0.979592,0.982507,0.985422,0.988338,0.991253,0.994169,0.997084,1]);
PositionInterpolator68.keyValue = new MFVec3f(new float[0,0,0,0,0.000512952,0,0,0.00103256,0,0,0.00155861,0,0,0.00209091,0,0,0.00262923,0,0,0.00317338,0,0,0.00372314,0,0,0.0042783,0,0,0.00483867,0,0,0.00540403,0,0,0.00597417,0,0,0.00654889,0,0,0.00712797,0,0,0.00771122,0,0,0.00829841,0,0,0.00888935,0,0,0.00948382,0,0,0.0100816,0,0,0.0106825,0,0,0.0112864,0,0,0.0118929,0,0,0.0125019,0,0,0.0131133,0,0,0.0137267,0,0,0.0143419,0,0,0.0149589,0,0,0.0155772,0,0,0.0161969,0,0,0.0168176,0,0,0.0174391,0,0,0.0180612,0,0,0.0186837,0,0,0.0193065,0,0,0.0199292,0,0,0.0205518,0,0,0.0211739,0,0,0.0217954,0,0,0.0224161,0,0,0.0230357,0,0,0.0236541,0,0,0.0242711,0,0,0.0248863,0,0,0.0254997,0,0,0.026111,0,0,0.0267201,0,0,0.0273266,0,0,0.0279304,0,0,0.0285314,0,0,0.0291292,0,0,0.0297236,0,0,0.0303146,0,0,0.0309018,0,0,0.031485,0,0,0.0320641,0,0,0.0326388,0,0,0.0332089,0,0,0.0337743,0,0,0.0343347,0,0,0.0348898,0,0,0.0354396,0,0,0.0359837,0,0,0.0365221,0,0,0.0370544,0,0,0.0375804,0,0,0.0381,0,0,0.038613,0,0,0.0391191,0,0,0.0396181,0,0,0.0401098,0,0,0.0405941,0,0,0.0410706,0,0,0.0415393,0,0,0.0419998,0,0,0.0424521,0,0,0.0428958,0,0,0.0433307,0,0,0.0437568,0,0,0.0441736,0,0,0.0445812,0,0,0.0449791,0,0,0.0453673,0,0,0.0457455,0,0,0.0461135,0,0,0.0464711,0,0,0.0468181,0,0,0.0471543,0,0,0.0474794,0,0,0.0477934,0,0,0.0480959,0,0,0.0483867,0,0,0.0486657,0,0,0.0489326,0,0,0.0491873,0,0,0.0494295,0,0,0.049659,0,0,0.0498756,0,0,0.0500791,0,0,0.0502693,0,0,0.050446,0,0,0.0506135,0,0,0.0507796,0,0,0.0509444,0,0,0.0511078,0,0,0.0512698,0,0,0.0514305,0,0,0.0515898,0,0,0.0517478,0,0,0.0519043,0,0,0.0520594,0,0,0.0522132,0,0,0.0523655,0,0,0.0525165,0,0,0.052666,0,0,0.0528141,0,0,0.0529608,0,0,0.0531061,0,0,0.0532499,0,0,0.0533923,0,0,0.0535333,0,0,0.0536728,0,0,0.0538109,0,0,0.0539475,0,0,0.0540826,0,0,0.0542163,0,0,0.0543485,0,0,0.0544793,0,0,0.0546085,0,0,0.0547363,0,0,0.0548626,0,0,0.0549873,0,0,0.0551106,0,0,0.0552324,0,0,0.0553526,0,0,0.0554714,0,0,0.0555886,0,0,0.0557043,0,0,0.0558184,0,0,0.0559311,0,0,0.0560422,0,0,0.0561517,0,0,0.0562597,0,0,0.0563661,0,0,0.056471,0,0,0.0565743,0,0,0.056676,0,0,0.0567761,0,0,0.0568747,0,0,0.0569717,0,0,0.057067,0,0,0.0571608,0,0,0.057253,0,0,0.0573436,0,0,0.0574326,0,0,0.0575199,0,0,0.0576056,0,0,0.0576897,0,0,0.0577722,0,0,0.057853,0,0,0.0579322,0,0,0.0580097,0,0,0.0580856,0,0,0.0581598,0,0,0.0582324,0,0,0.0583033,0,0,0.0583725,0,0,0.05844,0,0,0.0585059,0,0,0.0585701,0,0,0.0586325,0,0,0.0586933,0,0,0.0587524,0,0,0.0588098,0,0,0.0588654,0,0,0.0589194,0,0,0.0589716,0,0,0.0590221,0,0,0.0590708,0,0,0.0591178,0,0,0.0591631,0,0,0.0592066,0,0,0.0592484,0,0,0.0592884,0,0,0.0593266,0,0,0.0593631,0,0,0.0593978,0,0,0.0594307,0,0,0.0594618,0,0,0.0594912,0,0,0.0595187,0,0,0.0595445,0,0,0.0595684,0,0,0.0595906,0,0,0.0596109,0,0,0.0596294,0,0,0.0596461,0,0,0.0596609,0,0,0.0596739,0,0,0.0596851,0,0,0.0596944,0,0,0.0597019,0,0,0.0597075,0,0,0.0597113,0,0,0.0597132,0,0,0.0597132,0,0,0.0597114,0,0,0.0597077,0,0,0.0597021,0,0,0.0596946,0,0,0.0596852,0,0,0.0596739,0,0,0.0596607,0,0,0.0596456,0,0,0.0596286,0,0,0.0596096,0,0,0.0595888,0,0,0.059566,0,0,0.0595412,0,0,0.0595145,0,0,0.0594859,0,0,0.0594554,0,0,0.0594228,0,0,0.0593883,0,0,0.0593519,0,0,0.0593135,0,0,0.0592731,0,0,0.0592307,0,0,0.0591863,0,0,0.05914,0,0,0.0590916,0,0,0.0590412,0,0,0.0589889,0,0,0.0589345,0,0,0.0588781,0,0,0.0588197,0,0,0.0587593,0,0,0.0586968,0,0,0.0586323,0,0,0.0585658,0,0,0.0584972,0,0,0.0584265,0,0,0.0583538,0,0,0.0582791,0,0,0.0582022,0,0,0.0581233,0,0,0.0580424,0,0,0.0579593,0,0,0.0578742,0,0,0.0577869,0,0,0.0576976,0,0,0.0576062,0,0,0.0575126,0,0,0.057417,0,0,0.0573192,0,0,0.0572193,0,0,0.0571173,0,0,0.0570131,0,0,0.0569068,0,0,0.0567984,0,0,0.0566878,0,0,0.0565751,0,0,0.0564602,0,0,0.0563432,0,0,0.0562239,0,0,0.0561026,0,0,0.055979,0,0,0.0558532,0,0,0.0557253,0,0,0.0555952,0,0,0.0554628,0,0,0.0553283,0,0,0.0551916,0,0,0.0550526,0,0,0.0549114,0,0,0.054768,0,0,0.0546224,0,0,0.0544746,0,0,0.0543245,0,0,0.0541721,0,0,0.0540175,0,0,0.0538607,0,0,0.0537016,0,0,0.0535403,0,0,0.0533766,0,0,0.0532107,0,0,0.0530425,0,0,0.0528721,0,0,0.0526993,0,0,0.0525243,0,0,0.0523469,0,0,0.0521673,0,0,0.0519853,0,0,0.0518011,0,0,0.0516145,0,0,0.0514256,0,0,0.0512343,0,0,0.0510407,0,0,0.0508448,0,0,0.0506466,0,0,0.050446,0,0,0.0502068,0,0,0.0499025,0,0,0.049535,0,0,0.0491065,0,0,0.048619,0,0,0.0480745,0,0,0.0474751,0,0,0.046823,0,0,0.04612,0,0,0.0453684,0,0,0.0445701,0,0,0.0437272,0,0,0.0428417,0,0,0.0419158,0,0,0.0409515,0,0,0.0399508,0,0,0.0389158,0,0,0.0378486,0,0,0.0367511,0,0,0.0356256,0,0,0.0344739,0,0,0.0332983,0,0,0.0321007,0,0,0.0308832,0,0,0.0296479,0,0,0.0283968,0,0,0.027132,0,0,0.0258555,0,0,0.0245694,0,0,0.0232758,0,0,0.0219767,0,0,0.0206741,0,0,0.0193702,0,0,0.0180669,0,0,0.0167664,0,0,0.0154707,0,0,0.0141819,0,0,0.012902,0,0,0.011633,0,0,0.0103771,0,0,0.00913632,0,0,0.00791265,0,0,0.00670821,0,0,0.00552502,0,0,0.00436516,0,0,0.00323068,0,0,0.00212365,0,0,0.00104611,0,0,0,0]);
Group65.children[1] = PositionInterpolator68;

Transform64.children = new MFNode();

Transform64.children[0] = Group65;

Transform Transform69 = createNode("Transform");
Transform69.center = new SFVec3f(new float[0,0.0240789,0]);
TouchSensor TouchSensor70 = createNode("TouchSensor");
TouchSensor70.DEF = "_1";
TouchSensor70.enabled = False;
Transform69.children = new MFNode();

Transform69.children[0] = TouchSensor70;

Transform Transform71 = createNode("Transform");
Switch Switch72 = createNode("Switch");
Switch72.DEF = "_2";
Switch72.whichChoice = 0;
Inline Inline73 = createNode("Inline");
Inline73.DEF = "_3";
Inline73.url = new MFString(new java.lang.String["ham-tottier.x3d"]);
Inline73.bboxSize = new SFVec3f(new float[0.180247,0.0155499,0.175728]);
Inline73.bboxCenter = new SFVec3f(new float[0,-0.00000322983,0]);
Switch72.children = new MFNode();

Switch72.children[0] = Inline73;

Inline Inline74 = createNode("Inline");
Inline74.DEF = "_4";
Inline74.url = new MFString(new java.lang.String["ham-gurke.x3d"]);
Inline74.bboxSize = new SFVec3f(new float[0.147983,0.00474552,0.102927]);
Inline74.bboxCenter = new SFVec3f(new float[0.000954397,-5.3551e-8,-0.000806626]);
Switch72.children[1] = Inline74;

Inline Inline75 = createNode("Inline");
Inline75.DEF = "_5";
Inline75.url = new MFString(new java.lang.String["ham-tomate.x3d"]);
Inline75.bboxSize = new SFVec3f(new float[0.092927,0.00474568,0.15098]);
Inline75.bboxCenter = new SFVec3f(new float[-0.0000782497,-1.37486e-7,0.000793424]);
Switch72.children[2] = Inline75;

Inline Inline76 = createNode("Inline");
Inline76.DEF = "_6";
Inline76.url = new MFString(new java.lang.String["ham-cheese.x3d"]);
Inline76.bboxSize = new SFVec3f(new float[0.182589,0.0268456,0.182589]);
Inline76.bboxCenter = new SFVec3f(new float[0,0.00000380073,0]);
Switch72.children[3] = Inline76;

Inline Inline77 = createNode("Inline");
Inline77.DEF = "_7";
Inline77.url = new MFString(new java.lang.String["ham-zwiebel.x3d"]);
Inline77.bboxSize = new SFVec3f(new float[0.0887386,0.00477273,0.0997977]);
Inline77.bboxCenter = new SFVec3f(new float[-3.72529e-9,0.00000177231,-9.07108e-7]);
Switch72.children[4] = Inline77;

Inline Inline78 = createNode("Inline");
Inline78.DEF = "_8";
Inline78.url = new MFString(new java.lang.String["ham-ketchup.x3d"]);
Inline78.bboxSize = new SFVec3f(new float[0.0757356,0.0134014,0.0757356]);
Inline78.bboxCenter = new SFVec3f(new float[0,0.00000371039,0]);
Switch72.children[5] = Inline78;

Inline Inline79 = createNode("Inline");
Inline79.DEF = "_9";
Inline79.url = new MFString(new java.lang.String["ham-deckel.x3d"]);
Inline79.bboxSize = new SFVec3f(new float[0.205598,0.0672368,0.200442]);
Inline79.bboxCenter = new SFVec3f(new float[0,0.0336184,0]);
Switch72.children[6] = Inline79;

Transform71.children = new MFNode();

Transform71.children[0] = Switch72;

Transform69.children[1] = Transform71;

Transform Transform80 = createNode("Transform");
Transform80.translation = new SFVec3f(new float[0,-0.0596852,0]);
ProtoInstance ProtoInstance81 = createNode("ProtoInstance");
ProtoInstance81.name = "HamSeg";
ProtoInstance81.DEF = "_10";
fieldValue fieldValue82 = createNode("fieldValue");
fieldValue82.name = "timer";
TimeSensor TimeSensor83 = createNode("TimeSensor");
TimeSensor83.DEF = "_11";
TimeSensor83.enabled = False;
TimeSensor83.cycleInterval = 0.1;
TimeSensor83.loop = True;
fieldValue82.children = new MFNode();

fieldValue82.children[0] = TimeSensor83;

ProtoInstance81.fieldValue = new MFNode();

ProtoInstance81.fieldValue[0] = fieldValue82;

Transform80.children = new MFNode();

Transform80.children[0] = ProtoInstance81;

Transform69.children[2] = Transform80;

Transform64.children[1] = Transform69;

Transform63.children = new MFNode();

Transform63.children[0] = Transform64;

Transform Transform84 = createNode("Transform");
Transform84.DEF = "seg2";
Transform84.translation = new SFVec3f(new float[0,0.007,0]);
Group Group85 = createNode("Group");
Group Group86 = createNode("Group");
Group86.USE = "jump";
Group85.children = new MFNode();

Group85.children[0] = Group86;

PositionInterpolator PositionInterpolator87 = createNode("PositionInterpolator");
PositionInterpolator87.DEF = "seg2TranslationInterp";
PositionInterpolator87.key = new MFFloat(new float[0,0.002886,0.005772,0.008658,0.011544,0.01443,0.017316,0.020202,0.023088,0.025974,0.02886,0.031746,0.034632,0.037518,0.040404,0.04329,0.046176,0.049062,0.051948,0.054834,0.05772,0.060606,0.063492,0.066378,0.069264,0.07215,0.075036,0.077922,0.080808,0.083694,0.08658,0.089466,0.092352,0.095238,0.098124,0.10101,0.103896,0.106782,0.109668,0.112554,0.11544,0.118326,0.121212,0.124098,0.126984,0.12987,0.132756,0.135642,0.138528,0.141414,0.1443,0.147186,0.150072,0.152958,0.155844,0.15873,0.161616,0.164502,0.167388,0.170274,0.17316,0.176046,0.178932,0.181818,0.184704,0.18759,0.190476,0.193362,0.196248,0.199134,0.20202,0.204906,0.207792,0.210678,0.213564,0.21645,0.219336,0.222222,0.225108,0.227994,0.23088,0.233766,0.236652,0.239538,0.242424,0.24531,0.248196,0.251082,0.253968,0.256854,0.25974,0.262626,0.265512,0.268398,0.271284,0.27417,0.277056,0.279942,0.282828,0.285714,0.288571,0.291428,0.294285,0.297143,0.3,0.302857,0.305714,0.308571,0.311428,0.314285,0.317143,0.32,0.322857,0.325714,0.328571,0.331428,0.334286,0.337143,0.34,0.342857,0.345714,0.348571,0.351428,0.354286,0.357143,0.36,0.362857,0.365714,0.368571,0.371428,0.374286,0.377143,0.38,0.382857,0.385714,0.388571,0.391429,0.394286,0.397143,0.4,0.402857,0.405714,0.408571,0.411429,0.414286,0.417143,0.42,0.422857,0.425714,0.428571,0.431429,0.434286,0.437143,0.44,0.442857,0.445714,0.448571,0.451429,0.454286,0.457143,0.46,0.462857,0.465714,0.468572,0.471429,0.474286,0.477143,0.48,0.482857,0.485714,0.488572,0.491429,0.494286,0.497143,0.5,0.502857,0.505714,0.508572,0.511429,0.514286,0.517143,0.52,0.522857,0.525714,0.528572,0.531429,0.534286,0.537143,0.54,0.542857,0.545714,0.548572,0.551429,0.554286,0.557143,0.56,0.562857,0.565715,0.568572,0.571429,0.574286,0.577143,0.58,0.582857,0.585715,0.588572,0.591429,0.594286,0.597143,0.6,0.602857,0.605715,0.608572,0.611429,0.614286,0.617143,0.62,0.622858,0.625715,0.628572,0.631429,0.634286,0.637143,0.64,0.642858,0.645715,0.648572,0.651429,0.654286,0.657143,0.66,0.662858,0.665715,0.668572,0.671429,0.674286,0.677143,0.68,0.682858,0.685715,0.688572,0.691429,0.694286,0.697143,0.700001,0.702858,0.705715,0.708572,0.711429,0.714286,0.717143,0.720001,0.722858,0.725715,0.728572,0.731429,0.734286,0.737143,0.740001,0.742858,0.745715,0.748572,0.751429,0.754286,0.757143,0.760001,0.762858,0.765715,0.768572,0.771429,0.774286,0.777144,0.780001,0.782858,0.785715,0.788572,0.791429,0.794286,0.797144,0.800001,0.802858,0.805715,0.808572,0.811429,0.814286,0.817144,0.820001,0.822858,0.825715,0.828572,0.831429,0.834287,0.837144,0.840001,0.842858,0.845715,0.848572,0.851429,0.854287,0.857143,0.860058,0.862974,0.865889,0.868805,0.87172,0.874636,0.877551,0.880467,0.883382,0.886297,0.889213,0.892128,0.895044,0.897959,0.900875,0.90379,0.906705,0.909621,0.912536,0.915452,0.918367,0.921283,0.924198,0.927114,0.930029,0.932944,0.93586,0.938775,0.941691,0.944606,0.947522,0.950437,0.953353,0.956268,0.959183,0.962099,0.965014,0.96793,0.970845,0.973761,0.976676,0.979592,0.982507,0.985422,0.988338,0.991253,0.994169,0.997084,1]);
PositionInterpolator87.keyValue = new MFVec3f(new float[0,0.007,0,0,0.00794603,0,0,0.00890434,0,0,0.00987453,0,0,0.0108562,0,0,0.0118491,0,0,0.0128526,0,0,0.0138665,0,0,0.0148904,0,0,0.0159239,0,0,0.0169666,0,0,0.0180181,0,0,0.019078,0,0,0.020146,0,0,0.0212217,0,0,0.0223047,0,0,0.0233945,0,0,0.0244909,0,0,0.0255934,0,0,0.0267017,0,0,0.0278153,0,0,0.028934,0,0,0.0300572,0,0,0.0311846,0,0,0.0323159,0,0,0.0334506,0,0,0.0345885,0,0,0.0357289,0,0,0.0368717,0,0,0.0380164,0,0,0.0391627,0,0,0.0403101,0,0,0.0414582,0,0,0.0426067,0,0,0.0437553,0,0,0.0449034,0,0,0.0460508,0,0,0.0471971,0,0,0.0483418,0,0,0.0494846,0,0,0.0506251,0,0,0.0517629,0,0,0.0528976,0,0,0.0540289,0,0,0.0551563,0,0,0.0562795,0,0,0.0573982,0,0,0.0585118,0,0,0.0596201,0,0,0.0607226,0,0,0.061819,0,0,0.0629088,0,0,0.0639918,0,0,0.0650674,0,0,0.0661354,0,0,0.0671954,0,0,0.0682469,0,0,0.0692896,0,0,0.0703231,0,0,0.0713469,0,0,0.0723609,0,0,0.0733644,0,0,0.0743573,0,0,0.075339,0,0,0.0763092,0,0,0.0772675,0,0,0.0782135,0,0,0.0791469,0,0,0.0800672,0,0,0.0809741,0,0,0.0818672,0,0,0.0827461,0,0,0.0836105,0,0,0.0844598,0,0,0.0852939,0,0,0.0861122,0,0,0.0869144,0,0,0.0877001,0,0,0.088469,0,0,0.0892205,0,0,0.0899545,0,0,0.0906704,0,0,0.0913679,0,0,0.0920466,0,0,0.0927061,0,0,0.0933461,0,0,0.0939661,0,0,0.0945658,0,0,0.0951448,0,0,0.0957027,0,0,0.0962391,0,0,0.0967537,0,0,0.0972459,0,0,0.0977156,0,0,0.0981623,0,0,0.0985856,0,0,0.098985,0,0,0.0993604,0,0,0.0997111,0,0,0.100037,0,0,0.100346,0,0,0.100652,0,0,0.100956,0,0,0.101258,0,0,0.101556,0,0,0.101853,0,0,0.102147,0,0,0.102438,0,0,0.102727,0,0,0.103013,0,0,0.103296,0,0,0.103577,0,0,0.103856,0,0,0.104131,0,0,0.104405,0,0,0.104675,0,0,0.104943,0,0,0.105208,0,0,0.105471,0,0,0.105731,0,0,0.105988,0,0,0.106243,0,0,0.106495,0,0,0.106744,0,0,0.106991,0,0,0.107234,0,0,0.107475,0,0,0.107714,0,0,0.10795,0,0,0.108182,0,0,0.108413,0,0,0.10864,0,0,0.108864,0,0,0.109086,0,0,0.109305,0,0,0.109521,0,0,0.109735,0,0,0.109945,0,0,0.110153,0,0,0.110358,0,0,0.11056,0,0,0.110759,0,0,0.110955,0,0,0.111149,0,0,0.111339,0,0,0.111527,0,0,0.111712,0,0,0.111893,0,0,0.112072,0,0,0.112248,0,0,0.112421,0,0,0.112591,0,0,0.112758,0,0,0.112922,0,0,0.113083,0,0,0.113241,0,0,0.113397,0,0,0.113549,0,0,0.113698,0,0,0.113844,0,0,0.113987,0,0,0.114127,0,0,0.114264,0,0,0.114397,0,0,0.114528,0,0,0.114656,0,0,0.11478,0,0,0.114902,0,0,0.11502,0,0,0.115135,0,0,0.115247,0,0,0.115356,0,0,0.115462,0,0,0.115565,0,0,0.115664,0,0,0.115761,0,0,0.115854,0,0,0.115944,0,0,0.11603,0,0,0.116114,0,0,0.116194,0,0,0.116271,0,0,0.116345,0,0,0.116415,0,0,0.116483,0,0,0.116547,0,0,0.116607,0,0,0.116665,0,0,0.116719,0,0,0.11677,0,0,0.116817,0,0,0.116861,0,0,0.116902,0,0,0.11694,0,0,0.116974,0,0,0.117005,0,0,0.117032,0,0,0.117056,0,0,0.117077,0,0,0.117094,0,0,0.117108,0,0,0.117118,0,0,0.117125,0,0,0.117128,0,0,0.117128,0,0,0.117125,0,0,0.117118,0,0,0.117108,0,0,0.117094,0,0,0.117077,0,0,0.117056,0,0,0.117032,0,0,0.117004,0,0,0.116972,0,0,0.116937,0,0,0.116899,0,0,0.116857,0,0,0.116811,0,0,0.116762,0,0,0.116709,0,0,0.116653,0,0,0.116593,0,0,0.116529,0,0,0.116462,0,0,0.116391,0,0,0.116317,0,0,0.116238,0,0,0.116157,0,0,0.116071,0,0,0.115982,0,0,0.115889,0,0,0.115793,0,0,0.115692,0,0,0.115588,0,0,0.115481,0,0,0.115369,0,0,0.115254,0,0,0.115135,0,0,0.115012,0,0,0.114886,0,0,0.114755,0,0,0.114621,0,0,0.114483,0,0,0.114342,0,0,0.114196,0,0,0.114047,0,0,0.113894,0,0,0.113737,0,0,0.113576,0,0,0.113411,0,0,0.113242,0,0,0.11307,0,0,0.112893,0,0,0.112713,0,0,0.112529,0,0,0.112341,0,0,0.112149,0,0,0.111953,0,0,0.111753,0,0,0.111549,0,0,0.111341,0,0,0.111129,0,0,0.110913,0,0,0.110693,0,0,0.110469,0,0,0.110241,0,0,0.110009,0,0,0.109774,0,0,0.109534,0,0,0.109289,0,0,0.109041,0,0,0.108789,0,0,0.108533,0,0,0.108273,0,0,0.108008,0,0,0.10774,0,0,0.107467,0,0,0.10719,0,0,0.106909,0,0,0.106624,0,0,0.106335,0,0,0.106041,0,0,0.105744,0,0,0.105442,0,0,0.105136,0,0,0.104826,0,0,0.104511,0,0,0.104193,0,0,0.10387,0,0,0.103543,0,0,0.103212,0,0,0.102876,0,0,0.102536,0,0,0.102192,0,0,0.101844,0,0,0.101491,0,0,0.101134,0,0,0.100773,0,0,0.100407,0,0,0.100037,0,0,0.0995959,0,0,0.0990346,0,0,0.0983569,0,0,0.0975665,0,0,0.0966674,0,0,0.0956632,0,0,0.0945579,0,0,0.0933551,0,0,0.0920586,0,0,0.0906724,0,0,0.0892001,0,0,0.0876455,0,0,0.0860125,0,0,0.0843049,0,0,0.0825264,0,0,0.0806808,0,0,0.078772,0,0,0.0768037,0,0,0.0747797,0,0,0.0727039,0,0,0.0705799,0,0,0.0684117,0,0,0.066203,0,0,0.0639576,0,0,0.0616793,0,0,0.0593719,0,0,0.0570392,0,0,0.054685,0,0,0.0523131,0,0,0.0499273,0,0,0.0475313,0,0,0.045129,0,0,0.0427242,0,0,0.0403206,0,0,0.0379221,0,0,0.0355325,0,0,0.0331555,0,0,0.030795,0,0,0.0284547,0,0,0.0261384,0,0,0.02385,0,0,0.0215932,0,0,0.0193719,0,0,0.0171897,0,0,0.0150506,0,0,0.0129583,0,0,0.0109166,0,0,0.00892934,0,0,0.007,0]);
Group85.children[1] = PositionInterpolator87;

PositionInterpolator PositionInterpolator88 = createNode("PositionInterpolator");
PositionInterpolator88.DEF = "UnnamedSwitchCenterInterp_1";
PositionInterpolator88.key = new MFFloat(new float[0,0.002886,0.005772,0.008658,0.011544,0.01443,0.017316,0.020202,0.023088,0.025974,0.02886,0.031746,0.034632,0.037518,0.040404,0.04329,0.046176,0.049062,0.051948,0.054834,0.05772,0.060606,0.063492,0.066378,0.069264,0.07215,0.075036,0.077922,0.080808,0.083694,0.08658,0.089466,0.092352,0.095238,0.098124,0.10101,0.103896,0.106782,0.109668,0.112554,0.11544,0.118326,0.121212,0.124098,0.126984,0.12987,0.132756,0.135642,0.138528,0.141414,0.1443,0.147186,0.150072,0.152958,0.155844,0.15873,0.161616,0.164502,0.167388,0.170274,0.17316,0.176046,0.178932,0.181818,0.184704,0.18759,0.190476,0.193362,0.196248,0.199134,0.20202,0.204906,0.207792,0.210678,0.213564,0.21645,0.219336,0.222222,0.225108,0.227994,0.23088,0.233766,0.236652,0.239538,0.242424,0.24531,0.248196,0.251082,0.253968,0.256854,0.25974,0.262626,0.265512,0.268398,0.271284,0.27417,0.277056,0.279942,0.282828,0.285714,0.288571,0.291428,0.294285,0.297143,0.3,0.302857,0.305714,0.308571,0.311428,0.314285,0.317143,0.32,0.322857,0.325714,0.328571,0.331428,0.334286,0.337143,0.34,0.342857,0.345714,0.348571,0.351428,0.354286,0.357143,0.36,0.362857,0.365714,0.368571,0.371428,0.374286,0.377143,0.38,0.382857,0.385714,0.388571,0.391429,0.394286,0.397143,0.4,0.402857,0.405714,0.408571,0.411429,0.414286,0.417143,0.42,0.422857,0.425714,0.428571,0.431429,0.434286,0.437143,0.44,0.442857,0.445714,0.448571,0.451429,0.454286,0.457143,0.46,0.462857,0.465714,0.468572,0.471429,0.474286,0.477143,0.48,0.482857,0.485714,0.488572,0.491429,0.494286,0.497143,0.5,0.502857,0.505714,0.508572,0.511429,0.514286,0.517143,0.52,0.522857,0.525714,0.528572,0.531429,0.534286,0.537143,0.54,0.542857,0.545714,0.548572,0.551429,0.554286,0.557143,0.56,0.562857,0.565715,0.568572,0.571429,0.574286,0.577143,0.58,0.582857,0.585715,0.588572,0.591429,0.594286,0.597143,0.6,0.602857,0.605715,0.608572,0.611429,0.614286,0.617143,0.62,0.622858,0.625715,0.628572,0.631429,0.634286,0.637143,0.64,0.642858,0.645715,0.648572,0.651429,0.654286,0.657143,0.66,0.662858,0.665715,0.668572,0.671429,0.674286,0.677143,0.68,0.682858,0.685715,0.688572,0.691429,0.694286,0.697143,0.700001,0.702858,0.705715,0.708572,0.711429,0.714286,0.717143,0.720001,0.722858,0.725715,0.728572,0.731429,0.734286,0.737143,0.740001,0.742858,0.745715,0.748572,0.751429,0.754286,0.757143,0.760001,0.762858,0.765715,0.768572,0.771429,0.774286,0.777144,0.780001,0.782858,0.785715,0.788572,0.791429,0.794286,0.797144,0.800001,0.802858,0.805715,0.808572,0.811429,0.814286,0.817144,0.820001,0.822858,0.825715,0.828572,0.831429,0.834287,0.837144,0.840001,0.842858,0.845715,0.848572,0.851429,0.854287,0.857143]);
PositionInterpolator88.keyValue = new MFVec3f(new float[0,0,0,0,0.000244843,0,0,0.000492862,0,0,0.000743958,0,0,0.000998032,0,0,0.00125498,0,0,0.00151472,0,0,0.00177713,0,0,0.00204212,0,0,0.0023096,0,0,0.00257945,0,0,0.00285159,0,0,0.00312592,0,0,0.00340233,0,0,0.00368072,0,0,0.003961,0,0,0.00424307,0,0,0.00452682,0,0,0.00481216,0,0,0.00509899,0,0,0.00538722,0,0,0.00567673,0,0,0.00596743,0,0,0.00625922,0,0,0.00655201,0,0,0.00684569,0,0,0.00714016,0,0,0.00743533,0,0,0.0077311,0,0,0.00802736,0,0,0.00832402,0,0,0.00862097,0,0,0.00891813,0,0,0.00921538,0,0,0.00951263,0,0,0.00980979,0,0,0.0101067,0,0,0.0104034,0,0,0.0106997,0,0,0.0109954,0,0,0.0112906,0,0,0.0115851,0,0,0.0118788,0,0,0.0121715,0,0,0.0124633,0,0,0.012754,0,0,0.0130435,0,0,0.0133318,0,0,0.0136186,0,0,0.0139039,0,0,0.0141877,0,0,0.0144698,0,0,0.01475,0,0,0.0150284,0,0,0.0153048,0,0,0.0155792,0,0,0.0158513,0,0,0.0161212,0,0,0.0163886,0,0,0.0166536,0,0,0.016916,0,0,0.0171758,0,0,0.0174327,0,0,0.0176868,0,0,0.0179379,0,0,0.0181859,0,0,0.0184308,0,0,0.0186723,0,0,0.0189105,0,0,0.0191452,0,0,0.0193764,0,0,0.0196038,0,0,0.0198275,0,0,0.0200474,0,0,0.0202632,0,0,0.020475,0,0,0.0206826,0,0,0.020886,0,0,0.021085,0,0,0.0212795,0,0,0.0214694,0,0,0.0216547,0,0,0.0218352,0,0,0.0220109,0,0,0.0221816,0,0,0.0223472,0,0,0.0225077,0,0,0.0226629,0,0,0.0228127,0,0,0.0229571,0,0,0.023096,0,0,0.0232291,0,0,0.0233565,0,0,0.0234781,0,0,0.0235937,0,0,0.0237033,0,0,0.0238066,0,0,0.0239038,0,0,0.0239946,0,0,0.0240789,0,0,0.0241584,0,0,0.0242362,0,0,0.0243125,0,0,0.0243872,0,0,0.0244604,0,0,0.024532,0,0,0.0246021,0,0,0.0246707,0,0,0.0247377,0,0,0.0248033,0,0,0.0248673,0,0,0.0249299,0,0,0.0249911,0,0,0.0250508,0,0,0.025109,0,0,0.0251659,0,0,0.0252213,0,0,0.0252753,0,0,0.0253279,0,0,0.0253792,0,0,0.025429,0,0,0.0254776,0,0,0.0255248,0,0,0.0255706,0,0,0.0256152,0,0,0.0256584,0,0,0.0257004,0,0,0.0257411,0,0,0.0257805,0,0,0.0258186,0,0,0.0258555,0,0,0.0258912,0,0,0.0259256,0,0,0.0259589,0,0,0.0259909,0,0,0.0260218,0,0,0.0260515,0,0,0.02608,0,0,0.0261074,0,0,0.0261336,0,0,0.0261588,0,0,0.0261828,0,0,0.0262057,0,0,0.0262275,0,0,0.0262483,0,0,0.0262679,0,0,0.0262866,0,0,0.0263042,0,0,0.0263207,0,0,0.0263363,0,0,0.0263508,0,0,0.0263644,0,0,0.026377,0,0,0.0263886,0,0,0.0263993,0,0,0.026409,0,0,0.0264178,0,0,0.0264256,0,0,0.0264326,0,0,0.0264386,0,0,0.0264438,0,0,0.0264481,0,0,0.0264516,0,0,0.0264542,0,0,0.0264559,0,0,0.0264569,0,0,0.026457,0,0,0.0264564,0,0,0.0264549,0,0,0.0264527,0,0,0.0264497,0,0,0.026446,0,0,0.0264415,0,0,0.0264363,0,0,0.0264304,0,0,0.0264237,0,0,0.0264164,0,0,0.0264084,0,0,0.0263998,0,0,0.0263905,0,0,0.0263805,0,0,0.0263699,0,0,0.0263587,0,0,0.0263469,0,0,0.0263345,0,0,0.0263216,0,0,0.026308,0,0,0.0262939,0,0,0.0262792,0,0,0.0262641,0,0,0.0262484,0,0,0.0262321,0,0,0.0262154,0,0,0.0261982,0,0,0.0261805,0,0,0.0261624,0,0,0.0261438,0,0,0.0261248,0,0,0.0261053,0,0,0.0260855,0,0,0.0260652,0,0,0.0260446,0,0,0.0260235,0,0,0.0260021,0,0,0.0259804,0,0,0.0259583,0,0,0.0259359,0,0,0.0259131,0,0,0.0258901,0,0,0.0258668,0,0,0.0258431,0,0,0.0258193,0,0,0.0257951,0,0,0.0257707,0,0,0.0257461,0,0,0.0257213,0,0,0.0256962,0,0,0.025671,0,0,0.0256455,0,0,0.0256199,0,0,0.0255942,0,0,0.0255683,0,0,0.0255422,0,0,0.0255161,0,0,0.0254898,0,0,0.0254634,0,0,0.0254369,0,0,0.0254104,0,0,0.0253837,0,0,0.0253571,0,0,0.0253304,0,0,0.0253036,0,0,0.0252769,0,0,0.0252501,0,0,0.0252234,0,0,0.0251967,0,0,0.02517,0,0,0.0251433,0,0,0.0251167,0,0,0.0250902,0,0,0.0250638,0,0,0.0250374,0,0,0.0250112,0,0,0.024985,0,0,0.024959,0,0,0.0249332,0,0,0.0249075,0,0,0.0248819,0,0,0.0248565,0,0,0.0248314,0,0,0.0248064,0,0,0.0247816,0,0,0.0247571,0,0,0.0247328,0,0,0.0247087,0,0,0.0246849,0,0,0.0246614,0,0,0.0246382,0,0,0.0246152,0,0,0.0245926,0,0,0.0245703,0,0,0.0245483,0,0,0.0245267,0,0,0.0245054,0,0,0.0244845,0,0,0.0244639,0,0,0.0244438,0,0,0.0244241,0,0,0.0244048,0,0,0.0243859,0,0,0.0243675,0,0,0.0243495,0,0,0.024332,0,0,0.0243149,0,0,0.0242984,0,0,0.0242823,0,0,0.0242668,0,0,0.0242518,0,0,0.0242373,0,0,0.0242234,0,0,0.02421,0,0,0.0241972,0,0,0.024185,0,0,0.0241734,0,0,0.0241624,0,0,0.024152,0,0,0.0241423,0,0,0.0241332,0,0,0.0241248,0,0,0.024117,0,0,0.0241099,0,0,0.0241036,0,0,0.0240979,0,0,0.0240929,0,0,0.0240887,0,0,0.0240852,0,0,0.0240825,0,0,0.0240805,0,0,0.0240793,0,0,0.0240789,0]);
Group85.children[2] = PositionInterpolator88;

Transform84.children = new MFNode();

Transform84.children[0] = Group85;

Transform Transform89 = createNode("Transform");
Transform89.DEF = "_12";
TouchSensor TouchSensor90 = createNode("TouchSensor");
TouchSensor90.DEF = "_13";
TouchSensor90.enabled = False;
Transform89.children = new MFNode();

Transform89.children[0] = TouchSensor90;

Transform Transform91 = createNode("Transform");
Switch Switch92 = createNode("Switch");
Switch92.DEF = "_14";
Switch92.whichChoice = 1;
Inline Inline93 = createNode("Inline");
Inline93.USE = "_3";
Switch92.children = new MFNode();

Switch92.children[0] = Inline93;

Transform Transform94 = createNode("Transform");
Transform94.center = new SFVec3f(new float[1.11759e-8,0,5.02914e-8]);
Inline Inline95 = createNode("Inline");
Inline95.USE = "_4";
Transform94.children = new MFNode();

Transform94.children[0] = Inline95;

Switch92.children[1] = Transform94;

Inline Inline96 = createNode("Inline");
Inline96.USE = "_5";
Switch92.children[2] = Inline96;

Inline Inline97 = createNode("Inline");
Inline97.USE = "_6";
Switch92.children[3] = Inline97;

Inline Inline98 = createNode("Inline");
Inline98.USE = "_7";
Switch92.children[4] = Inline98;

Inline Inline99 = createNode("Inline");
Inline99.USE = "_8";
Switch92.children[5] = Inline99;

Inline Inline100 = createNode("Inline");
Inline100.USE = "_9";
Switch92.children[6] = Inline100;

Transform91.children = new MFNode();

Transform91.children[0] = Switch92;

Transform89.children[1] = Transform91;

Transform Transform101 = createNode("Transform");
Transform101.translation = new SFVec3f(new float[0,-0.007,0]);
ProtoInstance ProtoInstance102 = createNode("ProtoInstance");
ProtoInstance102.name = "HamSeg";
ProtoInstance102.DEF = "_15";
fieldValue fieldValue103 = createNode("fieldValue");
fieldValue103.name = "timer";
TimeSensor TimeSensor104 = createNode("TimeSensor");
TimeSensor104.DEF = "_16";
TimeSensor104.enabled = False;
TimeSensor104.cycleInterval = 0.1;
TimeSensor104.loop = True;
fieldValue103.children = new MFNode();

fieldValue103.children[0] = TimeSensor104;

ProtoInstance102.fieldValue = new MFNode();

ProtoInstance102.fieldValue[0] = fieldValue103;

fieldValue fieldValue105 = createNode("fieldValue");
fieldValue105.name = "whichChoice";
fieldValue105.value = "1";
ProtoInstance102.fieldValue[1] = fieldValue105;

Transform101.children = new MFNode();

Transform101.children[0] = ProtoInstance102;

Transform89.children[2] = Transform101;

Transform84.children[1] = Transform89;

Transform63.children[1] = Transform84;

Transform Transform106 = createNode("Transform");
Transform106.DEF = "seg3";
Transform106.translation = new SFVec3f(new float[0,0.014,0]);
Group Group107 = createNode("Group");
Group Group108 = createNode("Group");
Group108.USE = "jump";
Group107.children = new MFNode();

Group107.children[0] = Group108;

PositionInterpolator PositionInterpolator109 = createNode("PositionInterpolator");
PositionInterpolator109.DEF = "seg3TranslationInterp";
PositionInterpolator109.key = new MFFloat(new float[0,0.002886,0.005772,0.008658,0.011544,0.01443,0.017316,0.020202,0.023088,0.025974,0.02886,0.031746,0.034632,0.037518,0.040404,0.04329,0.046176,0.049062,0.051948,0.054834,0.05772,0.060606,0.063492,0.066378,0.069264,0.07215,0.075036,0.077922,0.080808,0.083694,0.08658,0.089466,0.092352,0.095238,0.098124,0.10101,0.103896,0.106782,0.109668,0.112554,0.11544,0.118326,0.121212,0.124098,0.126984,0.12987,0.132756,0.135642,0.138528,0.141414,0.1443,0.147186,0.150072,0.152958,0.155844,0.15873,0.161616,0.164502,0.167388,0.170274,0.17316,0.176046,0.178932,0.181818,0.184704,0.18759,0.190476,0.193362,0.196248,0.199134,0.20202,0.204906,0.207792,0.210678,0.213564,0.21645,0.219336,0.222222,0.225108,0.227994,0.23088,0.233766,0.236652,0.239538,0.242424,0.24531,0.248196,0.251082,0.253968,0.256854,0.25974,0.262626,0.265512,0.268398,0.271284,0.27417,0.277056,0.279942,0.282828,0.285714,0.288571,0.291428,0.294285,0.297143,0.3,0.302857,0.305714,0.308571,0.311428,0.314285,0.317143,0.32,0.322857,0.325714,0.328571,0.331428,0.334286,0.337143,0.34,0.342857,0.345714,0.348571,0.351428,0.354286,0.357143,0.36,0.362857,0.365714,0.368571,0.371428,0.374286,0.377143,0.38,0.382857,0.385714,0.388571,0.391429,0.394286,0.397143,0.4,0.402857,0.405714,0.408571,0.411429,0.414286,0.417143,0.42,0.422857,0.425714,0.428571,0.431429,0.434286,0.437143,0.44,0.442857,0.445714,0.448571,0.451429,0.454286,0.457143,0.46,0.462857,0.465714,0.468572,0.471429,0.474286,0.477143,0.48,0.482857,0.485714,0.488572,0.491429,0.494286,0.497143,0.5,0.502857,0.505714,0.508572,0.511429,0.514286,0.517143,0.52,0.522857,0.525714,0.528572,0.531429,0.534286,0.537143,0.54,0.542857,0.545714,0.548572,0.551429,0.554286,0.557143,0.56,0.562857,0.565715,0.568572,0.571429,0.574286,0.577143,0.58,0.582857,0.585715,0.588572,0.591429,0.594286,0.597143,0.6,0.602857,0.605715,0.608572,0.611429,0.614286,0.617143,0.62,0.622858,0.625715,0.628572,0.631429,0.634286,0.637143,0.64,0.642858,0.645715,0.648572,0.651429,0.654286,0.657143,0.66,0.662858,0.665715,0.668572,0.671429,0.674286,0.677143,0.68,0.682858,0.685715,0.688572,0.691429,0.694286,0.697143,0.700001,0.702858,0.705715,0.708572,0.711429,0.714286,0.717143,0.720001,0.722858,0.725715,0.728572,0.731429,0.734286,0.737143,0.740001,0.742858,0.745715,0.748572,0.751429,0.754286,0.757143,0.760001,0.762858,0.765715,0.768572,0.771429,0.774286,0.777144,0.780001,0.782858,0.785715,0.788572,0.791429,0.794286,0.797144,0.800001,0.802858,0.805715,0.808572,0.811429,0.814286,0.817144,0.820001,0.822858,0.825715,0.828572,0.831429,0.834287,0.837144,0.840001,0.842858,0.845715,0.848572,0.851429,0.854287,0.857143,0.860058,0.862974,0.865889,0.868805,0.87172,0.874636,0.877551,0.880467,0.883382,0.886297,0.889213,0.892128,0.895044,0.897959,0.900875,0.90379,0.906705,0.909621,0.912536,0.915452,0.918367,0.921283,0.924198,0.927114,0.930029,0.932944,0.93586,0.938775,0.941691,0.944606,0.947522,0.950437,0.953353,0.956268,0.959183,0.962099,0.965014,0.96793,0.970845,0.973761,0.976676,0.979592,0.982507,0.985422,0.988338,0.991253,0.994169,0.997084,1]);
PositionInterpolator109.keyValue = new MFVec3f(new float[0,0.014,0,0,0.0153385,0,0,0.0166943,0,0,0.0180669,0,0,0.0194558,0,0,0.0208605,0,0,0.0222803,0,0,0.0237148,0,0,0.0251634,0,0,0.0266256,0,0,0.0281008,0,0,0.0295884,0,0,0.0310881,0,0,0.0325991,0,0,0.0341209,0,0,0.0356531,0,0,0.037195,0,0,0.0387462,0,0,0.040306,0,0,0.041874,0,0,0.0434496,0,0,0.0450322,0,0,0.0466214,0,0,0.0482165,0,0,0.049817,0,0,0.0514225,0,0,0.0530322,0,0,0.0546458,0,0,0.0562626,0,0,0.0578821,0,0,0.0595038,0,0,0.0611272,0,0,0.0627516,0,0,0.0643765,0,0,0.0660015,0,0,0.0676259,0,0,0.0692492,0,0,0.0708709,0,0,0.0724905,0,0,0.0741073,0,0,0.0757208,0,0,0.0773306,0,0,0.078936,0,0,0.0805366,0,0,0.0821317,0,0,0.0837208,0,0,0.0853035,0,0,0.086879,0,0,0.088447,0,0,0.0900069,0,0,0.091558,0,0,0.0931,0,0,0.0946321,0,0,0.096154,0,0,0.097665,0,0,0.0991646,0,0,0.100652,0,0,0.102127,0,0,0.10359,0,0,0.105038,0,0,0.106473,0,0,0.107893,0,0,0.109297,0,0,0.110686,0,0,0.112059,0,0,0.113415,0,0,0.114753,0,0,0.116074,0,0,0.117376,0,0,0.118659,0,0,0.119922,0,0,0.121166,0,0,0.122389,0,0,0.12359,0,0,0.12477,0,0,0.125928,0,0,0.127063,0,0,0.128175,0,0,0.129263,0,0,0.130326,0,0,0.131364,0,0,0.132377,0,0,0.133364,0,0,0.134324,0,0,0.135257,0,0,0.136163,0,0,0.13704,0,0,0.137888,0,0,0.138707,0,0,0.139497,0,0,0.140256,0,0,0.140984,0,0,0.14168,0,0,0.142345,0,0,0.142977,0,0,0.143576,0,0,0.144141,0,0,0.144672,0,0,0.145168,0,0,0.145629,0,0,0.146066,0,0,0.146499,0,0,0.146929,0,0,0.147356,0,0,0.147779,0,0,0.148198,0,0,0.148614,0,0,0.149026,0,0,0.149434,0,0,0.149839,0,0,0.15024,0,0,0.150638,0,0,0.151032,0,0,0.151422,0,0,0.151808,0,0,0.152191,0,0,0.15257,0,0,0.152945,0,0,0.153317,0,0,0.153685,0,0,0.154049,0,0,0.154409,0,0,0.154765,0,0,0.155118,0,0,0.155467,0,0,0.155812,0,0,0.156153,0,0,0.15649,0,0,0.156824,0,0,0.157153,0,0,0.157479,0,0,0.1578,0,0,0.158118,0,0,0.158432,0,0,0.158742,0,0,0.159048,0,0,0.159349,0,0,0.159647,0,0,0.159941,0,0,0.160231,0,0,0.160517,0,0,0.160799,0,0,0.161076,0,0,0.16135,0,0,0.161619,0,0,0.161885,0,0,0.162146,0,0,0.162403,0,0,0.162656,0,0,0.162905,0,0,0.16315,0,0,0.163391,0,0,0.163627,0,0,0.163859,0,0,0.164087,0,0,0.164311,0,0,0.16453,0,0,0.164745,0,0,0.164956,0,0,0.165163,0,0,0.165365,0,0,0.165563,0,0,0.165757,0,0,0.165946,0,0,0.166131,0,0,0.166312,0,0,0.166488,0,0,0.16666,0,0,0.166827,0,0,0.16699,0,0,0.167149,0,0,0.167303,0,0,0.167453,0,0,0.167598,0,0,0.167739,0,0,0.167875,0,0,0.168007,0,0,0.168134,0,0,0.168256,0,0,0.168375,0,0,0.168488,0,0,0.168597,0,0,0.168701,0,0,0.168801,0,0,0.168896,0,0,0.168987,0,0,0.169073,0,0,0.169154,0,0,0.169231,0,0,0.169303,0,0,0.16937,0,0,0.169432,0,0,0.16949,0,0,0.169543,0,0,0.169591,0,0,0.169635,0,0,0.169674,0,0,0.169707,0,0,0.169737,0,0,0.169761,0,0,0.169781,0,0,0.169795,0,0,0.169805,0,0,0.16981,0,0,0.16981,0,0,0.169805,0,0,0.169796,0,0,0.169781,0,0,0.169761,0,0,0.169737,0,0,0.169707,0,0,0.169673,0,0,0.169634,0,0,0.169589,0,0,0.16954,0,0,0.169485,0,0,0.169426,0,0,0.169361,0,0,0.169292,0,0,0.169217,0,0,0.169137,0,0,0.169052,0,0,0.168962,0,0,0.168867,0,0,0.168767,0,0,0.168662,0,0,0.168551,0,0,0.168435,0,0,0.168314,0,0,0.168188,0,0,0.168057,0,0,0.16792,0,0,0.167778,0,0,0.167631,0,0,0.167479,0,0,0.167321,0,0,0.167158,0,0,0.16699,0,0,0.166816,0,0,0.166637,0,0,0.166453,0,0,0.166263,0,0,0.166068,0,0,0.165867,0,0,0.165662,0,0,0.16545,0,0,0.165234,0,0,0.165011,0,0,0.164784,0,0,0.164551,0,0,0.164312,0,0,0.164068,0,0,0.163818,0,0,0.163563,0,0,0.163303,0,0,0.163036,0,0,0.162765,0,0,0.162487,0,0,0.162204,0,0,0.161916,0,0,0.161622,0,0,0.161322,0,0,0.161016,0,0,0.160705,0,0,0.160389,0,0,0.160066,0,0,0.159738,0,0,0.159404,0,0,0.159065,0,0,0.158719,0,0,0.158368,0,0,0.158012,0,0,0.157649,0,0,0.157281,0,0,0.156907,0,0,0.156527,0,0,0.156141,0,0,0.155749,0,0,0.155352,0,0,0.154948,0,0,0.154539,0,0,0.154124,0,0,0.153703,0,0,0.153276,0,0,0.152843,0,0,0.152404,0,0,0.151959,0,0,0.151509,0,0,0.151052,0,0,0.150589,0,0,0.15012,0,0,0.149646,0,0,0.149165,0,0,0.148678,0,0,0.148185,0,0,0.147686,0,0,0.147181,0,0,0.14667,0,0,0.146152,0,0,0.145629,0,0,0.145005,0,0,0.144211,0,0,0.143252,0,0,0.142134,0,0,0.140862,0,0,0.139441,0,0,0.137877,0,0,0.136175,0,0,0.134341,0,0,0.13238,0,0,0.130297,0,0,0.128097,0,0,0.125787,0,0,0.123371,0,0,0.120855,0,0,0.118244,0,0,0.115543,0,0,0.112758,0,0,0.109895,0,0,0.106958,0,0,0.103953,0,0,0.100885,0,0,0.0977606,0,0,0.0945838,0,0,0.0913605,0,0,0.0880959,0,0,0.0847957,0,0,0.0814649,0,0,0.0781091,0,0,0.0747336,0,0,0.0713438,0,0,0.067945,0,0,0.0645427,0,0,0.0611421,0,0,0.0577487,0,0,0.0543679,0,0,0.0510049,0,0,0.0476652,0,0,0.0443542,0,0,0.0410771,0,0,0.0378395,0,0,0.0346465,0,0,0.0315038,0,0,0.0284165,0,0,0.02539,0,0,0.0224298,0,0,0.0195412,0,0,0.0167296,0,0,0.014,0]);
Group107.children[1] = PositionInterpolator109;

PositionInterpolator PositionInterpolator110 = createNode("PositionInterpolator");
PositionInterpolator110.DEF = "UnnamedSwitchCenterInterp_2";
PositionInterpolator110.key = new MFFloat(new float[0,0.002886,0.005772,0.008658,0.011544,0.01443,0.017316,0.020202,0.023088,0.025974,0.02886,0.031746,0.034632,0.037518,0.040404,0.04329,0.046176,0.049062,0.051948,0.054834,0.05772,0.060606,0.063492,0.066378,0.069264,0.07215,0.075036,0.077922,0.080808,0.083694,0.08658,0.089466,0.092352,0.095238,0.098124,0.10101,0.103896,0.106782,0.109668,0.112554,0.11544,0.118326,0.121212,0.124098,0.126984,0.12987,0.132756,0.135642,0.138528,0.141414,0.1443,0.147186,0.150072,0.152958,0.155844,0.15873,0.161616,0.164502,0.167388,0.170274,0.17316,0.176046,0.178932,0.181818,0.184704,0.18759,0.190476,0.193362,0.196248,0.199134,0.20202,0.204906,0.207792,0.210678,0.213564,0.21645,0.219336,0.222222,0.225108,0.227994,0.23088,0.233766,0.236652,0.239538,0.242424,0.24531,0.248196,0.251082,0.253968,0.256854,0.25974,0.262626,0.265512,0.268398,0.271284,0.27417,0.277056,0.279942,0.282828,0.285714,0.288571,0.291428,0.294285,0.297143,0.3,0.302857,0.305714,0.308571,0.311428,0.314285,0.317143,0.32,0.322857,0.325714,0.328571,0.331428,0.334286,0.337143,0.34,0.342857,0.345714,0.348571,0.351428,0.354286,0.357143,0.36,0.362857,0.365714,0.368571,0.371428,0.374286,0.377143,0.38,0.382857,0.385714,0.388571,0.391429,0.394286,0.397143,0.4,0.402857,0.405714,0.408571,0.411429,0.414286,0.417143,0.42,0.422857,0.425714,0.428571,0.431429,0.434286,0.437143,0.44,0.442857,0.445714,0.448571,0.451429,0.454286,0.457143,0.46,0.462857,0.465714,0.468572,0.471429,0.474286,0.477143,0.48,0.482857,0.485714,0.488572,0.491429,0.494286,0.497143,0.5,0.502857,0.505714,0.508572,0.511429,0.514286,0.517143,0.52,0.522857,0.525714,0.528572,0.531429,0.534286,0.537143,0.54,0.542857,0.545714,0.548572,0.551429,0.554286,0.557143,0.56,0.562857,0.565715,0.568572,0.571429,0.574286,0.577143,0.58,0.582857,0.585715,0.588572,0.591429,0.594286,0.597143,0.6,0.602857,0.605715,0.608572,0.611429,0.614286,0.617143,0.62,0.622858,0.625715,0.628572,0.631429,0.634286,0.637143,0.64,0.642858,0.645715,0.648572,0.651429,0.654286,0.657143,0.66,0.662858,0.665715,0.668572,0.671429,0.674286,0.677143,0.68,0.682858,0.685715,0.688572,0.691429,0.694286,0.697143,0.700001,0.702858,0.705715,0.708572,0.711429,0.714286,0.717143,0.720001,0.722858,0.725715,0.728572,0.731429,0.734286,0.737143,0.740001,0.742858,0.745715,0.748572,0.751429,0.754286,0.757143,0.760001,0.762858,0.765715,0.768572,0.771429,0.774286,0.777144,0.780001,0.782858,0.785715,0.788572,0.791429,0.794286,0.797144,0.800001,0.802858,0.805715,0.808572,0.811429,0.814286,0.817144,0.820001,0.822858,0.825715,0.828572,0.831429,0.834287,0.837144,0.840001,0.842858,0.845715,0.848572,0.851429,0.854287,0.857143]);
PositionInterpolator110.keyValue = new MFVec3f(new float[0,0,0,0,0.000244843,0,0,0.000492862,0,0,0.000743958,0,0,0.000998032,0,0,0.00125498,0,0,0.00151472,0,0,0.00177713,0,0,0.00204212,0,0,0.0023096,0,0,0.00257945,0,0,0.00285159,0,0,0.00312592,0,0,0.00340233,0,0,0.00368072,0,0,0.003961,0,0,0.00424307,0,0,0.00452682,0,0,0.00481216,0,0,0.00509899,0,0,0.00538722,0,0,0.00567673,0,0,0.00596743,0,0,0.00625922,0,0,0.00655201,0,0,0.00684569,0,0,0.00714016,0,0,0.00743533,0,0,0.0077311,0,0,0.00802736,0,0,0.00832402,0,0,0.00862097,0,0,0.00891813,0,0,0.00921538,0,0,0.00951263,0,0,0.00980979,0,0,0.0101067,0,0,0.0104034,0,0,0.0106997,0,0,0.0109954,0,0,0.0112906,0,0,0.0115851,0,0,0.0118788,0,0,0.0121715,0,0,0.0124633,0,0,0.012754,0,0,0.0130435,0,0,0.0133318,0,0,0.0136186,0,0,0.0139039,0,0,0.0141877,0,0,0.0144698,0,0,0.01475,0,0,0.0150284,0,0,0.0153048,0,0,0.0155792,0,0,0.0158513,0,0,0.0161212,0,0,0.0163886,0,0,0.0166536,0,0,0.016916,0,0,0.0171758,0,0,0.0174327,0,0,0.0176868,0,0,0.0179379,0,0,0.0181859,0,0,0.0184308,0,0,0.0186723,0,0,0.0189105,0,0,0.0191452,0,0,0.0193764,0,0,0.0196038,0,0,0.0198275,0,0,0.0200474,0,0,0.0202632,0,0,0.020475,0,0,0.0206826,0,0,0.020886,0,0,0.021085,0,0,0.0212795,0,0,0.0214694,0,0,0.0216547,0,0,0.0218352,0,0,0.0220109,0,0,0.0221816,0,0,0.0223472,0,0,0.0225077,0,0,0.0226629,0,0,0.0228127,0,0,0.0229571,0,0,0.023096,0,0,0.0232291,0,0,0.0233565,0,0,0.0234781,0,0,0.0235937,0,0,0.0237033,0,0,0.0238066,0,0,0.0239038,0,0,0.0239946,0,0,0.0240789,0,0,0.0241584,0,0,0.0242362,0,0,0.0243125,0,0,0.0243872,0,0,0.0244604,0,0,0.024532,0,0,0.0246021,0,0,0.0246707,0,0,0.0247377,0,0,0.0248033,0,0,0.0248673,0,0,0.0249299,0,0,0.0249911,0,0,0.0250508,0,0,0.025109,0,0,0.0251659,0,0,0.0252213,0,0,0.0252753,0,0,0.0253279,0,0,0.0253792,0,0,0.025429,0,0,0.0254776,0,0,0.0255248,0,0,0.0255706,0,0,0.0256152,0,0,0.0256584,0,0,0.0257004,0,0,0.0257411,0,0,0.0257805,0,0,0.0258186,0,0,0.0258555,0,0,0.0258912,0,0,0.0259256,0,0,0.0259589,0,0,0.0259909,0,0,0.0260218,0,0,0.0260515,0,0,0.02608,0,0,0.0261074,0,0,0.0261336,0,0,0.0261588,0,0,0.0261828,0,0,0.0262057,0,0,0.0262275,0,0,0.0262483,0,0,0.0262679,0,0,0.0262866,0,0,0.0263042,0,0,0.0263207,0,0,0.0263363,0,0,0.0263508,0,0,0.0263644,0,0,0.026377,0,0,0.0263886,0,0,0.0263993,0,0,0.026409,0,0,0.0264178,0,0,0.0264256,0,0,0.0264326,0,0,0.0264386,0,0,0.0264438,0,0,0.0264481,0,0,0.0264516,0,0,0.0264542,0,0,0.0264559,0,0,0.0264569,0,0,0.026457,0,0,0.0264564,0,0,0.0264549,0,0,0.0264527,0,0,0.0264497,0,0,0.026446,0,0,0.0264415,0,0,0.0264363,0,0,0.0264304,0,0,0.0264237,0,0,0.0264164,0,0,0.0264084,0,0,0.0263998,0,0,0.0263905,0,0,0.0263805,0,0,0.0263699,0,0,0.0263587,0,0,0.0263469,0,0,0.0263345,0,0,0.0263216,0,0,0.026308,0,0,0.0262939,0,0,0.0262792,0,0,0.0262641,0,0,0.0262484,0,0,0.0262321,0,0,0.0262154,0,0,0.0261982,0,0,0.0261805,0,0,0.0261624,0,0,0.0261438,0,0,0.0261248,0,0,0.0261053,0,0,0.0260855,0,0,0.0260652,0,0,0.0260446,0,0,0.0260235,0,0,0.0260021,0,0,0.0259804,0,0,0.0259583,0,0,0.0259359,0,0,0.0259131,0,0,0.0258901,0,0,0.0258668,0,0,0.0258431,0,0,0.0258193,0,0,0.0257951,0,0,0.0257707,0,0,0.0257461,0,0,0.0257213,0,0,0.0256962,0,0,0.025671,0,0,0.0256455,0,0,0.0256199,0,0,0.0255942,0,0,0.0255683,0,0,0.0255422,0,0,0.0255161,0,0,0.0254898,0,0,0.0254634,0,0,0.0254369,0,0,0.0254104,0,0,0.0253837,0,0,0.0253571,0,0,0.0253304,0,0,0.0253036,0,0,0.0252769,0,0,0.0252501,0,0,0.0252234,0,0,0.0251967,0,0,0.02517,0,0,0.0251433,0,0,0.0251167,0,0,0.0250902,0,0,0.0250638,0,0,0.0250374,0,0,0.0250112,0,0,0.024985,0,0,0.024959,0,0,0.0249332,0,0,0.0249075,0,0,0.0248819,0,0,0.0248565,0,0,0.0248314,0,0,0.0248064,0,0,0.0247816,0,0,0.0247571,0,0,0.0247328,0,0,0.0247087,0,0,0.0246849,0,0,0.0246614,0,0,0.0246382,0,0,0.0246152,0,0,0.0245926,0,0,0.0245703,0,0,0.0245483,0,0,0.0245267,0,0,0.0245054,0,0,0.0244845,0,0,0.0244639,0,0,0.0244438,0,0,0.0244241,0,0,0.0244048,0,0,0.0243859,0,0,0.0243675,0,0,0.0243495,0,0,0.024332,0,0,0.0243149,0,0,0.0242984,0,0,0.0242823,0,0,0.0242668,0,0,0.0242518,0,0,0.0242373,0,0,0.0242234,0,0,0.02421,0,0,0.0241972,0,0,0.024185,0,0,0.0241734,0,0,0.0241624,0,0,0.024152,0,0,0.0241423,0,0,0.0241332,0,0,0.0241248,0,0,0.024117,0,0,0.0241099,0,0,0.0241036,0,0,0.0240979,0,0,0.0240929,0,0,0.0240887,0,0,0.0240852,0,0,0.0240825,0,0,0.0240805,0,0,0.0240793,0,0,0.0240789,0]);
Group107.children[2] = PositionInterpolator110;

Transform106.children = new MFNode();

Transform106.children[0] = Group107;

Transform Transform111 = createNode("Transform");
Transform111.DEF = "_17";
TouchSensor TouchSensor112 = createNode("TouchSensor");
TouchSensor112.DEF = "_18";
TouchSensor112.enabled = False;
Transform111.children = new MFNode();

Transform111.children[0] = TouchSensor112;

Transform Transform113 = createNode("Transform");
Switch Switch114 = createNode("Switch");
Switch114.DEF = "_19";
Switch114.whichChoice = 2;
Inline Inline115 = createNode("Inline");
Inline115.USE = "_3";
Switch114.children = new MFNode();

Switch114.children[0] = Inline115;

Inline Inline116 = createNode("Inline");
Inline116.USE = "_4";
Switch114.children[1] = Inline116;

Transform Transform117 = createNode("Transform");
Transform117.center = new SFVec3f(new float[-2.23517e-8,0,-7.45058e-9]);
Inline Inline118 = createNode("Inline");
Inline118.USE = "_5";
Transform117.children = new MFNode();

Transform117.children[0] = Inline118;

Switch114.children[2] = Transform117;

Inline Inline119 = createNode("Inline");
Inline119.USE = "_6";
Switch114.children[3] = Inline119;

Inline Inline120 = createNode("Inline");
Inline120.USE = "_7";
Switch114.children[4] = Inline120;

Inline Inline121 = createNode("Inline");
Inline121.USE = "_8";
Switch114.children[5] = Inline121;

Inline Inline122 = createNode("Inline");
Inline122.USE = "_9";
Switch114.children[6] = Inline122;

Transform113.children = new MFNode();

Transform113.children[0] = Switch114;

Transform111.children[1] = Transform113;

Transform Transform123 = createNode("Transform");
Transform123.translation = new SFVec3f(new float[0,-0.169737,0]);
ProtoInstance ProtoInstance124 = createNode("ProtoInstance");
ProtoInstance124.name = "HamSeg";
ProtoInstance124.DEF = "_20";
fieldValue fieldValue125 = createNode("fieldValue");
fieldValue125.name = "timer";
TimeSensor TimeSensor126 = createNode("TimeSensor");
TimeSensor126.DEF = "_21";
TimeSensor126.enabled = False;
TimeSensor126.cycleInterval = 0.1;
TimeSensor126.loop = True;
fieldValue125.children = new MFNode();

fieldValue125.children[0] = TimeSensor126;

ProtoInstance124.fieldValue = new MFNode();

ProtoInstance124.fieldValue[0] = fieldValue125;

fieldValue fieldValue127 = createNode("fieldValue");
fieldValue127.name = "whichChoice";
fieldValue127.value = "2";
ProtoInstance124.fieldValue[1] = fieldValue127;

Transform123.children = new MFNode();

Transform123.children[0] = ProtoInstance124;

Transform111.children[2] = Transform123;

Transform106.children[1] = Transform111;

Transform63.children[2] = Transform106;

Transform Transform128 = createNode("Transform");
Transform128.DEF = "seg4";
Transform128.translation = new SFVec3f(new float[0,0.021,0]);
Group Group129 = createNode("Group");
Group Group130 = createNode("Group");
Group130.USE = "jump";
Group129.children = new MFNode();

Group129.children[0] = Group130;

PositionInterpolator PositionInterpolator131 = createNode("PositionInterpolator");
PositionInterpolator131.DEF = "seg4TranslationInterp";
PositionInterpolator131.key = new MFFloat(new float[0,0.002886,0.005772,0.008658,0.011544,0.01443,0.017316,0.020202,0.023088,0.025974,0.02886,0.031746,0.034632,0.037518,0.040404,0.04329,0.046176,0.049062,0.051948,0.054834,0.05772,0.060606,0.063492,0.066378,0.069264,0.07215,0.075036,0.077922,0.080808,0.083694,0.08658,0.089466,0.092352,0.095238,0.098124,0.10101,0.103896,0.106782,0.109668,0.112554,0.11544,0.118326,0.121212,0.124098,0.126984,0.12987,0.132756,0.135642,0.138528,0.141414,0.1443,0.147186,0.150072,0.152958,0.155844,0.15873,0.161616,0.164502,0.167388,0.170274,0.17316,0.176046,0.178932,0.181818,0.184704,0.18759,0.190476,0.193362,0.196248,0.199134,0.20202,0.204906,0.207792,0.210678,0.213564,0.21645,0.219336,0.222222,0.225108,0.227994,0.23088,0.233766,0.236652,0.239538,0.242424,0.24531,0.248196,0.251082,0.253968,0.256854,0.25974,0.262626,0.265512,0.268398,0.271284,0.27417,0.277056,0.279942,0.282828,0.285714,0.288571,0.291428,0.294285,0.297143,0.3,0.302857,0.305714,0.308571,0.311428,0.314285,0.317143,0.32,0.322857,0.325714,0.328571,0.331428,0.334286,0.337143,0.34,0.342857,0.345714,0.348571,0.351428,0.354286,0.357143,0.36,0.362857,0.365714,0.368571,0.371428,0.374286,0.377143,0.38,0.382857,0.385714,0.388571,0.391429,0.394286,0.397143,0.4,0.402857,0.405714,0.408571,0.411429,0.414286,0.417143,0.42,0.422857,0.425714,0.428571,0.431429,0.434286,0.437143,0.44,0.442857,0.445714,0.448571,0.451429,0.454286,0.457143,0.46,0.462857,0.465714,0.468572,0.471429,0.474286,0.477143,0.48,0.482857,0.485714,0.488572,0.491429,0.494286,0.497143,0.5,0.502857,0.505714,0.508572,0.511429,0.514286,0.517143,0.52,0.522857,0.525714,0.528572,0.531429,0.534286,0.537143,0.54,0.542857,0.545714,0.548572,0.551429,0.554286,0.557143,0.56,0.562857,0.565715,0.568572,0.571429,0.574286,0.577143,0.58,0.582857,0.585715,0.588572,0.591429,0.594286,0.597143,0.6,0.602857,0.605715,0.608572,0.611429,0.614286,0.617143,0.62,0.622858,0.625715,0.628572,0.631429,0.634286,0.637143,0.64,0.642858,0.645715,0.648572,0.651429,0.654286,0.657143,0.66,0.662858,0.665715,0.668572,0.671429,0.674286,0.677143,0.68,0.682858,0.685715,0.688572,0.691429,0.694286,0.697143,0.700001,0.702858,0.705715,0.708572,0.711429,0.714286,0.717143,0.720001,0.722858,0.725715,0.728572,0.731429,0.734286,0.737143,0.740001,0.742858,0.745715,0.748572,0.751429,0.754286,0.757143,0.760001,0.762858,0.765715,0.768572,0.771429,0.774286,0.777144,0.780001,0.782858,0.785715,0.788572,0.791429,0.794286,0.797144,0.800001,0.802858,0.805715,0.808572,0.811429,0.814286,0.817144,0.820001,0.822858,0.825715,0.828572,0.831429,0.834287,0.837144,0.840001,0.842858,0.845715,0.848572,0.851429,0.854287,0.857143,0.860058,0.862974,0.865889,0.868805,0.87172,0.874636,0.877551,0.880467,0.883382,0.886297,0.889213,0.892128,0.895044,0.897959,0.900875,0.90379,0.906705,0.909621,0.912536,0.915452,0.918367,0.921283,0.924198,0.927114,0.930029,0.932944,0.93586,0.938775,0.941691,0.944606,0.947522,0.950437,0.953353,0.956268,0.959183,0.962099,0.965014,0.96793,0.970845,0.973761,0.976676,0.979592,0.982507,0.985422,0.988338,0.991253,0.994169,0.997084,1]);
PositionInterpolator131.keyValue = new MFVec3f(new float[0,0.021,0,0,0.0228428,0,0,0.0247095,0,0,0.0265993,0,0,0.0285116,0,0,0.0304455,0,0,0.0324004,0,0,0.0343754,0,0,0.0363699,0,0,0.038383,0,0,0.0404141,0,0,0.0424623,0,0,0.044527,0,0,0.0466073,0,0,0.0487027,0,0,0.0508122,0,0,0.0529351,0,0,0.0550708,0,0,0.0572184,0,0,0.0593772,0,0,0.0615465,0,0,0.0637255,0,0,0.0659134,0,0,0.0681096,0,0,0.0703132,0,0,0.0725236,0,0,0.0747399,0,0,0.0769615,0,0,0.0791875,0,0,0.0814173,0,0,0.0836501,0,0,0.0858851,0,0,0.0881216,0,0,0.0903589,0,0,0.0925961,0,0,0.0948326,0,0,0.0970676,0,0,0.0993004,0,0,0.10153,0,0,0.103756,0,0,0.105978,0,0,0.108194,0,0,0.110405,0,0,0.112608,0,0,0.114804,0,0,0.116992,0,0,0.119171,0,0,0.121341,0,0,0.123499,0,0,0.125647,0,0,0.127783,0,0,0.129906,0,0,0.132015,0,0,0.13411,0,0,0.136191,0,0,0.138255,0,0,0.140304,0,0,0.142335,0,0,0.144348,0,0,0.146342,0,0,0.148317,0,0,0.150272,0,0,0.152206,0,0,0.154118,0,0,0.156008,0,0,0.157875,0,0,0.159718,0,0,0.161536,0,0,0.163329,0,0,0.165095,0,0,0.166835,0,0,0.168547,0,0,0.170231,0,0,0.171885,0,0,0.17351,0,0,0.175104,0,0,0.176666,0,0,0.178197,0,0,0.179694,0,0,0.181158,0,0,0.182588,0,0,0.183983,0,0,0.185341,0,0,0.186663,0,0,0.187948,0,0,0.189195,0,0,0.190402,0,0,0.19157,0,0,0.192698,0,0,0.193785,0,0,0.19483,0,0,0.195832,0,0,0.196791,0,0,0.197706,0,0,0.198576,0,0,0.199401,0,0,0.200179,0,0,0.20091,0,0,0.201593,0,0,0.202228,0,0,0.20283,0,0,0.203426,0,0,0.204018,0,0,0.204606,0,0,0.205188,0,0,0.205765,0,0,0.206337,0,0,0.206905,0,0,0.207467,0,0,0.208024,0,0,0.208577,0,0,0.209124,0,0,0.209666,0,0,0.210203,0,0,0.210736,0,0,0.211263,0,0,0.211784,0,0,0.212301,0,0,0.212813,0,0,0.213319,0,0,0.21382,0,0,0.214316,0,0,0.214807,0,0,0.215293,0,0,0.215773,0,0,0.216248,0,0,0.216718,0,0,0.217182,0,0,0.217641,0,0,0.218095,0,0,0.218543,0,0,0.218986,0,0,0.219423,0,0,0.219855,0,0,0.220282,0,0,0.220703,0,0,0.221118,0,0,0.221529,0,0,0.221933,0,0,0.222332,0,0,0.222726,0,0,0.223114,0,0,0.223496,0,0,0.223873,0,0,0.224244,0,0,0.224609,0,0,0.224969,0,0,0.225323,0,0,0.225672,0,0,0.226014,0,0,0.226351,0,0,0.226682,0,0,0.227008,0,0,0.227327,0,0,0.227641,0,0,0.227949,0,0,0.228251,0,0,0.228547,0,0,0.228838,0,0,0.229122,0,0,0.229401,0,0,0.229673,0,0,0.22994,0,0,0.230201,0,0,0.230455,0,0,0.230704,0,0,0.230947,0,0,0.231183,0,0,0.231414,0,0,0.231638,0,0,0.231857,0,0,0.232069,0,0,0.232275,0,0,0.232475,0,0,0.232669,0,0,0.232856,0,0,0.233038,0,0,0.233213,0,0,0.233382,0,0,0.233544,0,0,0.233701,0,0,0.233851,0,0,0.233994,0,0,0.234132,0,0,0.234263,0,0,0.234387,0,0,0.234506,0,0,0.234617,0,0,0.234723,0,0,0.234822,0,0,0.234914,0,0,0.235,0,0,0.23508,0,0,0.235153,0,0,0.235219,0,0,0.235279,0,0,0.235333,0,0,0.235379,0,0,0.23542,0,0,0.235453,0,0,0.23548,0,0,0.2355,0,0,0.235514,0,0,0.235521,0,0,0.235521,0,0,0.235514,0,0,0.235501,0,0,0.235481,0,0,0.235454,0,0,0.23542,0,0,0.235379,0,0,0.235332,0,0,0.235278,0,0,0.235216,0,0,0.235148,0,0,0.235073,0,0,0.234992,0,0,0.234903,0,0,0.234807,0,0,0.234704,0,0,0.234594,0,0,0.234477,0,0,0.234353,0,0,0.234223,0,0,0.234084,0,0,0.233939,0,0,0.233787,0,0,0.233628,0,0,0.233461,0,0,0.233287,0,0,0.233107,0,0,0.232918,0,0,0.232723,0,0,0.232521,0,0,0.232311,0,0,0.232094,0,0,0.231869,0,0,0.231637,0,0,0.231398,0,0,0.231152,0,0,0.230898,0,0,0.230637,0,0,0.230368,0,0,0.230092,0,0,0.229809,0,0,0.229518,0,0,0.22922,0,0,0.228914,0,0,0.2286,0,0,0.228279,0,0,0.227951,0,0,0.227615,0,0,0.227271,0,0,0.22692,0,0,0.226561,0,0,0.226195,0,0,0.225821,0,0,0.225439,0,0,0.225049,0,0,0.224652,0,0,0.224247,0,0,0.223834,0,0,0.223414,0,0,0.222985,0,0,0.222549,0,0,0.222105,0,0,0.221654,0,0,0.221194,0,0,0.220726,0,0,0.220251,0,0,0.219768,0,0,0.219276,0,0,0.218777,0,0,0.21827,0,0,0.217755,0,0,0.217232,0,0,0.216701,0,0,0.216161,0,0,0.215614,0,0,0.215059,0,0,0.214495,0,0,0.213924,0,0,0.213344,0,0,0.212756,0,0,0.21216,0,0,0.211556,0,0,0.210944,0,0,0.210323,0,0,0.209694,0,0,0.209057,0,0,0.208412,0,0,0.207758,0,0,0.207096,0,0,0.206426,0,0,0.205747,0,0,0.20506,0,0,0.204365,0,0,0.203661,0,0,0.202949,0,0,0.202228,0,0,0.201369,0,0,0.200275,0,0,0.198955,0,0,0.197416,0,0,0.195664,0,0,0.193708,0,0,0.191555,0,0,0.189212,0,0,0.186687,0,0,0.183986,0,0,0.181119,0,0,0.17809,0,0,0.17491,0,0,0.171583,0,0,0.168119,0,0,0.164524,0,0,0.160806,0,0,0.156971,0,0,0.153029,0,0,0.148985,0,0,0.144848,0,0,0.140625,0,0,0.136322,0,0,0.131948,0,0,0.127511,0,0,0.123016,0,0,0.118472,0,0,0.113886,0,0,0.109266,0,0,0.104619,0,0,0.0999514,0,0,0.095272,0,0,0.0905876,0,0,0.0859057,0,0,0.0812336,0,0,0.0765788,0,0,0.0719486,0,0,0.0673505,0,0,0.0627919,0,0,0.05828,0,0,0.0538224,0,0,0.0494263,0,0,0.0450993,0,0,0.0408487,0,0,0.0366819,0,0,0.0326063,0,0,0.0286292,0,0,0.0247582,0,0,0.021,0]);
Group129.children[1] = PositionInterpolator131;

PositionInterpolator PositionInterpolator132 = createNode("PositionInterpolator");
PositionInterpolator132.DEF = "UnnamedSwitchCenterInterp_3";
PositionInterpolator132.key = new MFFloat(new float[0,0.002886,0.005772,0.008658,0.011544,0.01443,0.017316,0.020202,0.023088,0.025974,0.02886,0.031746,0.034632,0.037518,0.040404,0.04329,0.046176,0.049062,0.051948,0.054834,0.05772,0.060606,0.063492,0.066378,0.069264,0.07215,0.075036,0.077922,0.080808,0.083694,0.08658,0.089466,0.092352,0.095238,0.098124,0.10101,0.103896,0.106782,0.109668,0.112554,0.11544,0.118326,0.121212,0.124098,0.126984,0.12987,0.132756,0.135642,0.138528,0.141414,0.1443,0.147186,0.150072,0.152958,0.155844,0.15873,0.161616,0.164502,0.167388,0.170274,0.17316,0.176046,0.178932,0.181818,0.184704,0.18759,0.190476,0.193362,0.196248,0.199134,0.20202,0.204906,0.207792,0.210678,0.213564,0.21645,0.219336,0.222222,0.225108,0.227994,0.23088,0.233766,0.236652,0.239538,0.242424,0.24531,0.248196,0.251082,0.253968,0.256854,0.25974,0.262626,0.265512,0.268398,0.271284,0.27417,0.277056,0.279942,0.282828,0.285714,0.288571,0.291428,0.294285,0.297143,0.3,0.302857,0.305714,0.308571,0.311428,0.314285,0.317143,0.32,0.322857,0.325714,0.328571,0.331428,0.334286,0.337143,0.34,0.342857,0.345714,0.348571,0.351428,0.354286,0.357143,0.36,0.362857,0.365714,0.368571,0.371428,0.374286,0.377143,0.38,0.382857,0.385714,0.388571,0.391429,0.394286,0.397143,0.4,0.402857,0.405714,0.408571,0.411429,0.414286,0.417143,0.42,0.422857,0.425714,0.428571,0.431429,0.434286,0.437143,0.44,0.442857,0.445714,0.448571,0.451429,0.454286,0.457143,0.46,0.462857,0.465714,0.468572,0.471429,0.474286,0.477143,0.48,0.482857,0.485714,0.488572,0.491429,0.494286,0.497143,0.5,0.502857,0.505714,0.508572,0.511429,0.514286,0.517143,0.52,0.522857,0.525714,0.528572,0.531429,0.534286,0.537143,0.54,0.542857,0.545714,0.548572,0.551429,0.554286,0.557143,0.56,0.562857,0.565715,0.568572,0.571429,0.574286,0.577143,0.58,0.582857,0.585715,0.588572,0.591429,0.594286,0.597143,0.6,0.602857,0.605715,0.608572,0.611429,0.614286,0.617143,0.62,0.622858,0.625715,0.628572,0.631429,0.634286,0.637143,0.64,0.642858,0.645715,0.648572,0.651429,0.654286,0.657143,0.66,0.662858,0.665715,0.668572,0.671429,0.674286,0.677143,0.68,0.682858,0.685715,0.688572,0.691429,0.694286,0.697143,0.700001,0.702858,0.705715,0.708572,0.711429,0.714286,0.717143,0.720001,0.722858,0.725715,0.728572,0.731429,0.734286,0.737143,0.740001,0.742858,0.745715,0.748572,0.751429,0.754286,0.757143,0.760001,0.762858,0.765715,0.768572,0.771429,0.774286,0.777144,0.780001,0.782858,0.785715,0.788572,0.791429,0.794286,0.797144,0.800001,0.802858,0.805715,0.808572,0.811429,0.814286,0.817144,0.820001,0.822858,0.825715,0.828572,0.831429,0.834287,0.837144,0.840001,0.842858,0.845715,0.848572,0.851429,0.854287,0.857143]);
PositionInterpolator132.keyValue = new MFVec3f(new float[0,0,0,0,0.000244843,0,0,0.000492862,0,0,0.000743958,0,0,0.000998032,0,0,0.00125498,0,0,0.00151472,0,0,0.00177713,0,0,0.00204212,0,0,0.0023096,0,0,0.00257945,0,0,0.00285159,0,0,0.00312592,0,0,0.00340233,0,0,0.00368072,0,0,0.003961,0,0,0.00424307,0,0,0.00452682,0,0,0.00481216,0,0,0.00509899,0,0,0.00538722,0,0,0.00567673,0,0,0.00596743,0,0,0.00625922,0,0,0.00655201,0,0,0.00684569,0,0,0.00714016,0,0,0.00743533,0,0,0.0077311,0,0,0.00802736,0,0,0.00832402,0,0,0.00862097,0,0,0.00891813,0,0,0.00921538,0,0,0.00951263,0,0,0.00980979,0,0,0.0101067,0,0,0.0104034,0,0,0.0106997,0,0,0.0109954,0,0,0.0112906,0,0,0.0115851,0,0,0.0118788,0,0,0.0121715,0,0,0.0124633,0,0,0.012754,0,0,0.0130435,0,0,0.0133318,0,0,0.0136186,0,0,0.0139039,0,0,0.0141877,0,0,0.0144698,0,0,0.01475,0,0,0.0150284,0,0,0.0153048,0,0,0.0155792,0,0,0.0158513,0,0,0.0161212,0,0,0.0163886,0,0,0.0166536,0,0,0.016916,0,0,0.0171758,0,0,0.0174327,0,0,0.0176868,0,0,0.0179379,0,0,0.0181859,0,0,0.0184308,0,0,0.0186723,0,0,0.0189105,0,0,0.0191452,0,0,0.0193764,0,0,0.0196038,0,0,0.0198275,0,0,0.0200474,0,0,0.0202632,0,0,0.020475,0,0,0.0206826,0,0,0.020886,0,0,0.021085,0,0,0.0212795,0,0,0.0214694,0,0,0.0216547,0,0,0.0218352,0,0,0.0220109,0,0,0.0221816,0,0,0.0223472,0,0,0.0225077,0,0,0.0226629,0,0,0.0228127,0,0,0.0229571,0,0,0.023096,0,0,0.0232291,0,0,0.0233565,0,0,0.0234781,0,0,0.0235937,0,0,0.0237033,0,0,0.0238066,0,0,0.0239038,0,0,0.0239946,0,0,0.0240789,0,0,0.0241584,0,0,0.0242362,0,0,0.0243125,0,0,0.0243872,0,0,0.0244604,0,0,0.024532,0,0,0.0246021,0,0,0.0246707,0,0,0.0247377,0,0,0.0248033,0,0,0.0248673,0,0,0.0249299,0,0,0.0249911,0,0,0.0250508,0,0,0.025109,0,0,0.0251659,0,0,0.0252213,0,0,0.0252753,0,0,0.0253279,0,0,0.0253792,0,0,0.025429,0,0,0.0254776,0,0,0.0255248,0,0,0.0255706,0,0,0.0256152,0,0,0.0256584,0,0,0.0257004,0,0,0.0257411,0,0,0.0257805,0,0,0.0258186,0,0,0.0258555,0,0,0.0258912,0,0,0.0259256,0,0,0.0259589,0,0,0.0259909,0,0,0.0260218,0,0,0.0260515,0,0,0.02608,0,0,0.0261074,0,0,0.0261336,0,0,0.0261588,0,0,0.0261828,0,0,0.0262057,0,0,0.0262275,0,0,0.0262483,0,0,0.0262679,0,0,0.0262866,0,0,0.0263042,0,0,0.0263207,0,0,0.0263363,0,0,0.0263508,0,0,0.0263644,0,0,0.026377,0,0,0.0263886,0,0,0.0263993,0,0,0.026409,0,0,0.0264178,0,0,0.0264256,0,0,0.0264326,0,0,0.0264386,0,0,0.0264438,0,0,0.0264481,0,0,0.0264516,0,0,0.0264542,0,0,0.0264559,0,0,0.0264569,0,0,0.026457,0,0,0.0264564,0,0,0.0264549,0,0,0.0264527,0,0,0.0264497,0,0,0.026446,0,0,0.0264415,0,0,0.0264363,0,0,0.0264304,0,0,0.0264237,0,0,0.0264164,0,0,0.0264084,0,0,0.0263998,0,0,0.0263905,0,0,0.0263805,0,0,0.0263699,0,0,0.0263587,0,0,0.0263469,0,0,0.0263345,0,0,0.0263216,0,0,0.026308,0,0,0.0262939,0,0,0.0262792,0,0,0.0262641,0,0,0.0262484,0,0,0.0262321,0,0,0.0262154,0,0,0.0261982,0,0,0.0261805,0,0,0.0261624,0,0,0.0261438,0,0,0.0261248,0,0,0.0261053,0,0,0.0260855,0,0,0.0260652,0,0,0.0260446,0,0,0.0260235,0,0,0.0260021,0,0,0.0259804,0,0,0.0259583,0,0,0.0259359,0,0,0.0259131,0,0,0.0258901,0,0,0.0258668,0,0,0.0258431,0,0,0.0258193,0,0,0.0257951,0,0,0.0257707,0,0,0.0257461,0,0,0.0257213,0,0,0.0256962,0,0,0.025671,0,0,0.0256455,0,0,0.0256199,0,0,0.0255942,0,0,0.0255683,0,0,0.0255422,0,0,0.0255161,0,0,0.0254898,0,0,0.0254634,0,0,0.0254369,0,0,0.0254104,0,0,0.0253837,0,0,0.0253571,0,0,0.0253304,0,0,0.0253036,0,0,0.0252769,0,0,0.0252501,0,0,0.0252234,0,0,0.0251967,0,0,0.02517,0,0,0.0251433,0,0,0.0251167,0,0,0.0250902,0,0,0.0250638,0,0,0.0250374,0,0,0.0250112,0,0,0.024985,0,0,0.024959,0,0,0.0249332,0,0,0.0249075,0,0,0.0248819,0,0,0.0248565,0,0,0.0248314,0,0,0.0248064,0,0,0.0247816,0,0,0.0247571,0,0,0.0247328,0,0,0.0247087,0,0,0.0246849,0,0,0.0246614,0,0,0.0246382,0,0,0.0246152,0,0,0.0245926,0,0,0.0245703,0,0,0.0245483,0,0,0.0245267,0,0,0.0245054,0,0,0.0244845,0,0,0.0244639,0,0,0.0244438,0,0,0.0244241,0,0,0.0244048,0,0,0.0243859,0,0,0.0243675,0,0,0.0243495,0,0,0.024332,0,0,0.0243149,0,0,0.0242984,0,0,0.0242823,0,0,0.0242668,0,0,0.0242518,0,0,0.0242373,0,0,0.0242234,0,0,0.02421,0,0,0.0241972,0,0,0.024185,0,0,0.0241734,0,0,0.0241624,0,0,0.024152,0,0,0.0241423,0,0,0.0241332,0,0,0.0241248,0,0,0.024117,0,0,0.0241099,0,0,0.0241036,0,0,0.0240979,0,0,0.0240929,0,0,0.0240887,0,0,0.0240852,0,0,0.0240825,0,0,0.0240805,0,0,0.0240793,0,0,0.0240789,0]);
Group129.children[2] = PositionInterpolator132;

Transform128.children = new MFNode();

Transform128.children[0] = Group129;

Transform Transform133 = createNode("Transform");
Transform133.DEF = "_22";
TouchSensor TouchSensor134 = createNode("TouchSensor");
TouchSensor134.DEF = "_23";
TouchSensor134.enabled = False;
Transform133.children = new MFNode();

Transform133.children[0] = TouchSensor134;

Transform Transform135 = createNode("Transform");
Switch Switch136 = createNode("Switch");
Switch136.DEF = "_24";
Switch136.whichChoice = 3;
Inline Inline137 = createNode("Inline");
Inline137.USE = "_3";
Switch136.children = new MFNode();

Switch136.children[0] = Inline137;

Inline Inline138 = createNode("Inline");
Inline138.USE = "_4";
Switch136.children[1] = Inline138;

Inline Inline139 = createNode("Inline");
Inline139.USE = "_5";
Switch136.children[2] = Inline139;

Inline Inline140 = createNode("Inline");
Inline140.USE = "_6";
Switch136.children[3] = Inline140;

Inline Inline141 = createNode("Inline");
Inline141.USE = "_7";
Switch136.children[4] = Inline141;

Inline Inline142 = createNode("Inline");
Inline142.USE = "_8";
Switch136.children[5] = Inline142;

Inline Inline143 = createNode("Inline");
Inline143.USE = "_9";
Switch136.children[6] = Inline143;

Transform135.children = new MFNode();

Transform135.children[0] = Switch136;

Transform133.children[1] = Transform135;

Transform Transform144 = createNode("Transform");
Transform144.translation = new SFVec3f(new float[0,-0.23542,0]);
ProtoInstance ProtoInstance145 = createNode("ProtoInstance");
ProtoInstance145.name = "HamSeg";
ProtoInstance145.DEF = "_25";
fieldValue fieldValue146 = createNode("fieldValue");
fieldValue146.name = "timer";
TimeSensor TimeSensor147 = createNode("TimeSensor");
TimeSensor147.DEF = "_26";
TimeSensor147.enabled = False;
TimeSensor147.cycleInterval = 0.1;
TimeSensor147.loop = True;
fieldValue146.children = new MFNode();

fieldValue146.children[0] = TimeSensor147;

ProtoInstance145.fieldValue = new MFNode();

ProtoInstance145.fieldValue[0] = fieldValue146;

fieldValue fieldValue148 = createNode("fieldValue");
fieldValue148.name = "whichChoice";
fieldValue148.value = "3";
ProtoInstance145.fieldValue[1] = fieldValue148;

Transform144.children = new MFNode();

Transform144.children[0] = ProtoInstance145;

Transform133.children[2] = Transform144;

Transform128.children[1] = Transform133;

Transform63.children[3] = Transform128;

Transform Transform149 = createNode("Transform");
Transform149.DEF = "seg5";
Transform149.translation = new SFVec3f(new float[0,0.028,0]);
Group Group150 = createNode("Group");
Group Group151 = createNode("Group");
Group151.USE = "jump";
Group150.children = new MFNode();

Group150.children[0] = Group151;

PositionInterpolator PositionInterpolator152 = createNode("PositionInterpolator");
PositionInterpolator152.DEF = "seg5TranslationInterp";
PositionInterpolator152.key = new MFFloat(new float[0,0.002886,0.005772,0.008658,0.011544,0.01443,0.017316,0.020202,0.023088,0.025974,0.02886,0.031746,0.034632,0.037518,0.040404,0.04329,0.046176,0.049062,0.051948,0.054834,0.05772,0.060606,0.063492,0.066378,0.069264,0.07215,0.075036,0.077922,0.080808,0.083694,0.08658,0.089466,0.092352,0.095238,0.098124,0.10101,0.103896,0.106782,0.109668,0.112554,0.11544,0.118326,0.121212,0.124098,0.126984,0.12987,0.132756,0.135642,0.138528,0.141414,0.1443,0.147186,0.150072,0.152958,0.155844,0.15873,0.161616,0.164502,0.167388,0.170274,0.17316,0.176046,0.178932,0.181818,0.184704,0.18759,0.190476,0.193362,0.196248,0.199134,0.20202,0.204906,0.207792,0.210678,0.213564,0.21645,0.219336,0.222222,0.225108,0.227994,0.23088,0.233766,0.236652,0.239538,0.242424,0.24531,0.248196,0.251082,0.253968,0.256854,0.25974,0.262626,0.265512,0.268398,0.271284,0.27417,0.277056,0.279942,0.282828,0.285714,0.288571,0.291428,0.294285,0.297143,0.3,0.302857,0.305714,0.308571,0.311428,0.314285,0.317143,0.32,0.322857,0.325714,0.328571,0.331428,0.334286,0.337143,0.34,0.342857,0.345714,0.348571,0.351428,0.354286,0.357143,0.36,0.362857,0.365714,0.368571,0.371428,0.374286,0.377143,0.38,0.382857,0.385714,0.388571,0.391429,0.394286,0.397143,0.4,0.402857,0.405714,0.408571,0.411429,0.414286,0.417143,0.42,0.422857,0.425714,0.428571,0.431429,0.434286,0.437143,0.44,0.442857,0.445714,0.448571,0.451429,0.454286,0.457143,0.46,0.462857,0.465714,0.468572,0.471429,0.474286,0.477143,0.48,0.482857,0.485714,0.488572,0.491429,0.494286,0.497143,0.5,0.502857,0.505714,0.508572,0.511429,0.514286,0.517143,0.52,0.522857,0.525714,0.528572,0.531429,0.534286,0.537143,0.54,0.542857,0.545714,0.548572,0.551429,0.554286,0.557143,0.56,0.562857,0.565715,0.568572,0.571429,0.574286,0.577143,0.58,0.582857,0.585715,0.588572,0.591429,0.594286,0.597143,0.6,0.602857,0.605715,0.608572,0.611429,0.614286,0.617143,0.62,0.622858,0.625715,0.628572,0.631429,0.634286,0.637143,0.64,0.642858,0.645715,0.648572,0.651429,0.654286,0.657143,0.66,0.662858,0.665715,0.668572,0.671429,0.674286,0.677143,0.68,0.682858,0.685715,0.688572,0.691429,0.694286,0.697143,0.700001,0.702858,0.705715,0.708572,0.711429,0.714286,0.717143,0.720001,0.722858,0.725715,0.728572,0.731429,0.734286,0.737143,0.740001,0.742858,0.745715,0.748572,0.751429,0.754286,0.757143,0.760001,0.762858,0.765715,0.768572,0.771429,0.774286,0.777144,0.780001,0.782858,0.785715,0.788572,0.791429,0.794286,0.797144,0.800001,0.802858,0.805715,0.808572,0.811429,0.814286,0.817144,0.820001,0.822858,0.825715,0.828572,0.831429,0.834287,0.837144,0.840001,0.842858,0.845715,0.848572,0.851429,0.854287,0.857143,0.860058,0.862974,0.865889,0.868805,0.87172,0.874636,0.877551,0.880467,0.883382,0.886297,0.889213,0.892128,0.895044,0.897959,0.900875,0.90379,0.906705,0.909621,0.912536,0.915452,0.918367,0.921283,0.924198,0.927114,0.930029,0.932944,0.93586,0.938775,0.941691,0.944606,0.947522,0.950437,0.953353,0.956268,0.959183,0.962099,0.965014,0.96793,0.970845,0.973761,0.976676,0.979592,0.982507,0.985422,0.988338,0.991253,0.994169,0.997084,1]);
PositionInterpolator152.keyValue = new MFVec3f(new float[0,0.028,0,0,0.0303815,0,0,0.0327938,0,0,0.0352361,0,0,0.0377073,0,0,0.0402066,0,0,0.0427329,0,0,0.0452852,0,0,0.0478627,0,0,0.0504643,0,0,0.053089,0,0,0.055736,0,0,0.0584042,0,0,0.0610927,0,0,0.0638005,0,0,0.0665266,0,0,0.0692701,0,0,0.07203,0,0,0.0748054,0,0,0.0775953,0,0,0.0803987,0,0,0.0832146,0,0,0.0860421,0,0,0.0888802,0,0,0.091728,0,0,0.0945845,0,0,0.0974487,0,0,0.10032,0,0,0.103196,0,0,0.106078,0,0,0.108963,0,0,0.111852,0,0,0.114742,0,0,0.117633,0,0,0.120524,0,0,0.123415,0,0,0.126303,0,0,0.129189,0,0,0.13207,0,0,0.134947,0,0,0.137818,0,0,0.140682,0,0,0.143538,0,0,0.146386,0,0,0.149224,0,0,0.152052,0,0,0.154868,0,0,0.157671,0,0,0.160461,0,0,0.163236,0,0,0.165996,0,0,0.16874,0,0,0.171466,0,0,0.174174,0,0,0.176862,0,0,0.17953,0,0,0.182177,0,0,0.184802,0,0,0.187404,0,0,0.189981,0,0,0.192534,0,0,0.19506,0,0,0.197559,0,0,0.20003,0,0,0.202473,0,0,0.204885,0,0,0.207266,0,0,0.209616,0,0,0.211933,0,0,0.214216,0,0,0.216464,0,0,0.218676,0,0,0.220852,0,0,0.22299,0,0,0.22509,0,0,0.22715,0,0,0.229169,0,0,0.231147,0,0,0.233083,0,0,0.234975,0,0,0.236822,0,0,0.238624,0,0,0.24038,0,0,0.242089,0,0,0.243749,0,0,0.24536,0,0,0.246921,0,0,0.24843,0,0,0.249888,0,0,0.251292,0,0,0.252642,0,0,0.253938,0,0,0.255177,0,0,0.256359,0,0,0.257484,0,0,0.258549,0,0,0.259555,0,0,0.2605,0,0,0.261383,0,0,0.262203,0,0,0.262981,0,0,0.263752,0,0,0.264517,0,0,0.265276,0,0,0.266028,0,0,0.266774,0,0,0.267513,0,0,0.268247,0,0,0.268973,0,0,0.269694,0,0,0.270407,0,0,0.271115,0,0,0.271815,0,0,0.27251,0,0,0.273197,0,0,0.273878,0,0,0.274553,0,0,0.275221,0,0,0.275882,0,0,0.276536,0,0,0.277184,0,0,0.277825,0,0,0.278459,0,0,0.279087,0,0,0.279707,0,0,0.280321,0,0,0.280928,0,0,0.281528,0,0,0.282121,0,0,0.282708,0,0,0.283287,0,0,0.283859,0,0,0.284424,0,0,0.284983,0,0,0.285534,0,0,0.286078,0,0,0.286615,0,0,0.287145,0,0,0.287668,0,0,0.288184,0,0,0.288693,0,0,0.289194,0,0,0.289688,0,0,0.290175,0,0,0.290654,0,0,0.291127,0,0,0.291592,0,0,0.292049,0,0,0.292499,0,0,0.292942,0,0,0.293378,0,0,0.293806,0,0,0.294226,0,0,0.294639,0,0,0.295045,0,0,0.295443,0,0,0.295833,0,0,0.296216,0,0,0.296591,0,0,0.296959,0,0,0.297319,0,0,0.297671,0,0,0.298016,0,0,0.298353,0,0,0.298682,0,0,0.299003,0,0,0.299317,0,0,0.299622,0,0,0.29992,0,0,0.30021,0,0,0.300492,0,0,0.300767,0,0,0.301033,0,0,0.301291,0,0,0.301542,0,0,0.301784,0,0,0.302019,0,0,0.302245,0,0,0.302463,0,0,0.302673,0,0,0.302875,0,0,0.303069,0,0,0.303255,0,0,0.303433,0,0,0.303602,0,0,0.303763,0,0,0.303916,0,0,0.30406,0,0,0.304197,0,0,0.304324,0,0,0.304444,0,0,0.304555,0,0,0.304658,0,0,0.304752,0,0,0.304838,0,0,0.304916,0,0,0.304985,0,0,0.305045,0,0,0.305097,0,0,0.30514,0,0,0.305175,0,0,0.305201,0,0,0.305219,0,0,0.305227,0,0,0.305228,0,0,0.305219,0,0,0.305202,0,0,0.305176,0,0,0.305141,0,0,0.305097,0,0,0.305045,0,0,0.304984,0,0,0.304913,0,0,0.304834,0,0,0.304746,0,0,0.30465,0,0,0.304544,0,0,0.304429,0,0,0.304305,0,0,0.304172,0,0,0.30403,0,0,0.303879,0,0,0.303719,0,0,0.30355,0,0,0.303371,0,0,0.303184,0,0,0.302987,0,0,0.302781,0,0,0.302566,0,0,0.302341,0,0,0.302108,0,0,0.301865,0,0,0.301612,0,0,0.30135,0,0,0.301079,0,0,0.300799,0,0,0.300509,0,0,0.300209,0,0,0.2999,0,0,0.299582,0,0,0.299254,0,0,0.298916,0,0,0.298569,0,0,0.298213,0,0,0.297846,0,0,0.29747,0,0,0.297085,0,0,0.296689,0,0,0.296284,0,0,0.29587,0,0,0.295445,0,0,0.295011,0,0,0.294567,0,0,0.294113,0,0,0.293649,0,0,0.293175,0,0,0.292692,0,0,0.292198,0,0,0.291695,0,0,0.291182,0,0,0.290658,0,0,0.290125,0,0,0.289581,0,0,0.289028,0,0,0.288464,0,0,0.287891,0,0,0.287307,0,0,0.286713,0,0,0.286109,0,0,0.285494,0,0,0.28487,0,0,0.284235,0,0,0.28359,0,0,0.282934,0,0,0.282269,0,0,0.281593,0,0,0.280906,0,0,0.280209,0,0,0.279502,0,0,0.278784,0,0,0.278056,0,0,0.277318,0,0,0.276569,0,0,0.275809,0,0,0.275039,0,0,0.274258,0,0,0.273466,0,0,0.272664,0,0,0.271852,0,0,0.271028,0,0,0.270194,0,0,0.26935,0,0,0.268494,0,0,0.267628,0,0,0.266751,0,0,0.265863,0,0,0.264964,0,0,0.264055,0,0,0.263134,0,0,0.262203,0,0,0.261093,0,0,0.25968,0,0,0.257974,0,0,0.255984,0,0,0.253721,0,0,0.251193,0,0,0.24841,0,0,0.245383,0,0,0.242119,0,0,0.238629,0,0,0.234923,0,0,0.23101,0,0,0.226899,0,0,0.2226,0,0,0.218123,0,0,0.213477,0,0,0.208672,0,0,0.203717,0,0,0.198623,0,0,0.193397,0,0,0.18805,0,0,0.182592,0,0,0.177032,0,0,0.17138,0,0,0.165645,0,0,0.159836,0,0,0.153964,0,0,0.148038,0,0,0.142067,0,0,0.136061,0,0,0.13003,0,0,0.123983,0,0,0.117929,0,0,0.111878,0,0,0.105841,0,0,0.0998252,0,0,0.0938415,0,0,0.0878993,0,0,0.0820081,0,0,0.0761773,0,0,0.0704167,0,0,0.0647357,0,0,0.0591439,0,0,0.0536507,0,0,0.0482659,0,0,0.0429989,0,0,0.0378593,0,0,0.0328567,0,0,0.028,0]);
Group150.children[1] = PositionInterpolator152;

PositionInterpolator PositionInterpolator153 = createNode("PositionInterpolator");
PositionInterpolator153.DEF = "UnnamedSwitchCenterInterp_4";
PositionInterpolator153.key = new MFFloat(new float[0,0.002886,0.005772,0.008658,0.011544,0.01443,0.017316,0.020202,0.023088,0.025974,0.02886,0.031746,0.034632,0.037518,0.040404,0.04329,0.046176,0.049062,0.051948,0.054834,0.05772,0.060606,0.063492,0.066378,0.069264,0.07215,0.075036,0.077922,0.080808,0.083694,0.08658,0.089466,0.092352,0.095238,0.098124,0.10101,0.103896,0.106782,0.109668,0.112554,0.11544,0.118326,0.121212,0.124098,0.126984,0.12987,0.132756,0.135642,0.138528,0.141414,0.1443,0.147186,0.150072,0.152958,0.155844,0.15873,0.161616,0.164502,0.167388,0.170274,0.17316,0.176046,0.178932,0.181818,0.184704,0.18759,0.190476,0.193362,0.196248,0.199134,0.20202,0.204906,0.207792,0.210678,0.213564,0.21645,0.219336,0.222222,0.225108,0.227994,0.23088,0.233766,0.236652,0.239538,0.242424,0.24531,0.248196,0.251082,0.253968,0.256854,0.25974,0.262626,0.265512,0.268398,0.271284,0.27417,0.277056,0.279942,0.282828,0.285714,0.288571,0.291428,0.294285,0.297143,0.3,0.302857,0.305714,0.308571,0.311428,0.314285,0.317143,0.32,0.322857,0.325714,0.328571,0.331428,0.334286,0.337143,0.34,0.342857,0.345714,0.348571,0.351428,0.354286,0.357143,0.36,0.362857,0.365714,0.368571,0.371428,0.374286,0.377143,0.38,0.382857,0.385714,0.388571,0.391429,0.394286,0.397143,0.4,0.402857,0.405714,0.408571,0.411429,0.414286,0.417143,0.42,0.422857,0.425714,0.428571,0.431429,0.434286,0.437143,0.44,0.442857,0.445714,0.448571,0.451429,0.454286,0.457143,0.46,0.462857,0.465714,0.468572,0.471429,0.474286,0.477143,0.48,0.482857,0.485714,0.488572,0.491429,0.494286,0.497143,0.5,0.502857,0.505714,0.508572,0.511429,0.514286,0.517143,0.52,0.522857,0.525714,0.528572,0.531429,0.534286,0.537143,0.54,0.542857,0.545714,0.548572,0.551429,0.554286,0.557143,0.56,0.562857,0.565715,0.568572,0.571429,0.574286,0.577143,0.58,0.582857,0.585715,0.588572,0.591429,0.594286,0.597143,0.6,0.602857,0.605715,0.608572,0.611429,0.614286,0.617143,0.62,0.622858,0.625715,0.628572,0.631429,0.634286,0.637143,0.64,0.642858,0.645715,0.648572,0.651429,0.654286,0.657143,0.66,0.662858,0.665715,0.668572,0.671429,0.674286,0.677143,0.68,0.682858,0.685715,0.688572,0.691429,0.694286,0.697143,0.700001,0.702858,0.705715,0.708572,0.711429,0.714286,0.717143,0.720001,0.722858,0.725715,0.728572,0.731429,0.734286,0.737143,0.740001,0.742858,0.745715,0.748572,0.751429,0.754286,0.757143,0.760001,0.762858,0.765715,0.768572,0.771429,0.774286,0.777144,0.780001,0.782858,0.785715,0.788572,0.791429,0.794286,0.797144,0.800001,0.802858,0.805715,0.808572,0.811429,0.814286,0.817144,0.820001,0.822858,0.825715,0.828572,0.831429,0.834287,0.837144,0.840001,0.842858,0.845715,0.848572,0.851429,0.854287,0.857143]);
PositionInterpolator153.keyValue = new MFVec3f(new float[0,0,0,0,0.000244843,0,0,0.000492862,0,0,0.000743958,0,0,0.000998032,0,0,0.00125498,0,0,0.00151472,0,0,0.00177713,0,0,0.00204212,0,0,0.0023096,0,0,0.00257945,0,0,0.00285159,0,0,0.00312592,0,0,0.00340233,0,0,0.00368072,0,0,0.003961,0,0,0.00424307,0,0,0.00452682,0,0,0.00481216,0,0,0.00509899,0,0,0.00538722,0,0,0.00567673,0,0,0.00596743,0,0,0.00625922,0,0,0.00655201,0,0,0.00684569,0,0,0.00714016,0,0,0.00743533,0,0,0.0077311,0,0,0.00802736,0,0,0.00832402,0,0,0.00862097,0,0,0.00891813,0,0,0.00921538,0,0,0.00951263,0,0,0.00980979,0,0,0.0101067,0,0,0.0104034,0,0,0.0106997,0,0,0.0109954,0,0,0.0112906,0,0,0.0115851,0,0,0.0118788,0,0,0.0121715,0,0,0.0124633,0,0,0.012754,0,0,0.0130435,0,0,0.0133318,0,0,0.0136186,0,0,0.0139039,0,0,0.0141877,0,0,0.0144698,0,0,0.01475,0,0,0.0150284,0,0,0.0153048,0,0,0.0155792,0,0,0.0158513,0,0,0.0161212,0,0,0.0163886,0,0,0.0166536,0,0,0.016916,0,0,0.0171758,0,0,0.0174327,0,0,0.0176868,0,0,0.0179379,0,0,0.0181859,0,0,0.0184308,0,0,0.0186723,0,0,0.0189105,0,0,0.0191452,0,0,0.0193764,0,0,0.0196038,0,0,0.0198275,0,0,0.0200474,0,0,0.0202632,0,0,0.020475,0,0,0.0206826,0,0,0.020886,0,0,0.021085,0,0,0.0212795,0,0,0.0214694,0,0,0.0216547,0,0,0.0218352,0,0,0.0220109,0,0,0.0221816,0,0,0.0223472,0,0,0.0225077,0,0,0.0226629,0,0,0.0228127,0,0,0.0229571,0,0,0.023096,0,0,0.0232291,0,0,0.0233565,0,0,0.0234781,0,0,0.0235937,0,0,0.0237033,0,0,0.0238066,0,0,0.0239038,0,0,0.0239946,0,0,0.0240789,0,0,0.0241584,0,0,0.0242362,0,0,0.0243125,0,0,0.0243872,0,0,0.0244604,0,0,0.024532,0,0,0.0246021,0,0,0.0246707,0,0,0.0247377,0,0,0.0248033,0,0,0.0248673,0,0,0.0249299,0,0,0.0249911,0,0,0.0250508,0,0,0.025109,0,0,0.0251659,0,0,0.0252213,0,0,0.0252753,0,0,0.0253279,0,0,0.0253792,0,0,0.025429,0,0,0.0254776,0,0,0.0255248,0,0,0.0255706,0,0,0.0256152,0,0,0.0256584,0,0,0.0257004,0,0,0.0257411,0,0,0.0257805,0,0,0.0258186,0,0,0.0258555,0,0,0.0258912,0,0,0.0259256,0,0,0.0259589,0,0,0.0259909,0,0,0.0260218,0,0,0.0260515,0,0,0.02608,0,0,0.0261074,0,0,0.0261336,0,0,0.0261588,0,0,0.0261828,0,0,0.0262057,0,0,0.0262275,0,0,0.0262483,0,0,0.0262679,0,0,0.0262866,0,0,0.0263042,0,0,0.0263207,0,0,0.0263363,0,0,0.0263508,0,0,0.0263644,0,0,0.026377,0,0,0.0263886,0,0,0.0263993,0,0,0.026409,0,0,0.0264178,0,0,0.0264256,0,0,0.0264326,0,0,0.0264386,0,0,0.0264438,0,0,0.0264481,0,0,0.0264516,0,0,0.0264542,0,0,0.0264559,0,0,0.0264569,0,0,0.026457,0,0,0.0264564,0,0,0.0264549,0,0,0.0264527,0,0,0.0264497,0,0,0.026446,0,0,0.0264415,0,0,0.0264363,0,0,0.0264304,0,0,0.0264237,0,0,0.0264164,0,0,0.0264084,0,0,0.0263998,0,0,0.0263905,0,0,0.0263805,0,0,0.0263699,0,0,0.0263587,0,0,0.0263469,0,0,0.0263345,0,0,0.0263216,0,0,0.026308,0,0,0.0262939,0,0,0.0262792,0,0,0.0262641,0,0,0.0262484,0,0,0.0262321,0,0,0.0262154,0,0,0.0261982,0,0,0.0261805,0,0,0.0261624,0,0,0.0261438,0,0,0.0261248,0,0,0.0261053,0,0,0.0260855,0,0,0.0260652,0,0,0.0260446,0,0,0.0260235,0,0,0.0260021,0,0,0.0259804,0,0,0.0259583,0,0,0.0259359,0,0,0.0259131,0,0,0.0258901,0,0,0.0258668,0,0,0.0258431,0,0,0.0258193,0,0,0.0257951,0,0,0.0257707,0,0,0.0257461,0,0,0.0257213,0,0,0.0256962,0,0,0.025671,0,0,0.0256455,0,0,0.0256199,0,0,0.0255942,0,0,0.0255683,0,0,0.0255422,0,0,0.0255161,0,0,0.0254898,0,0,0.0254634,0,0,0.0254369,0,0,0.0254104,0,0,0.0253837,0,0,0.0253571,0,0,0.0253304,0,0,0.0253036,0,0,0.0252769,0,0,0.0252501,0,0,0.0252234,0,0,0.0251967,0,0,0.02517,0,0,0.0251433,0,0,0.0251167,0,0,0.0250902,0,0,0.0250638,0,0,0.0250374,0,0,0.0250112,0,0,0.024985,0,0,0.024959,0,0,0.0249332,0,0,0.0249075,0,0,0.0248819,0,0,0.0248565,0,0,0.0248314,0,0,0.0248064,0,0,0.0247816,0,0,0.0247571,0,0,0.0247328,0,0,0.0247087,0,0,0.0246849,0,0,0.0246614,0,0,0.0246382,0,0,0.0246152,0,0,0.0245926,0,0,0.0245703,0,0,0.0245483,0,0,0.0245267,0,0,0.0245054,0,0,0.0244845,0,0,0.0244639,0,0,0.0244438,0,0,0.0244241,0,0,0.0244048,0,0,0.0243859,0,0,0.0243675,0,0,0.0243495,0,0,0.024332,0,0,0.0243149,0,0,0.0242984,0,0,0.0242823,0,0,0.0242668,0,0,0.0242518,0,0,0.0242373,0,0,0.0242234,0,0,0.02421,0,0,0.0241972,0,0,0.024185,0,0,0.0241734,0,0,0.0241624,0,0,0.024152,0,0,0.0241423,0,0,0.0241332,0,0,0.0241248,0,0,0.024117,0,0,0.0241099,0,0,0.0241036,0,0,0.0240979,0,0,0.0240929,0,0,0.0240887,0,0,0.0240852,0,0,0.0240825,0,0,0.0240805,0,0,0.0240793,0,0,0.0240789,0]);
Group150.children[2] = PositionInterpolator153;

Transform149.children = new MFNode();

Transform149.children[0] = Group150;

Transform Transform154 = createNode("Transform");
Transform154.DEF = "_27";
TouchSensor TouchSensor155 = createNode("TouchSensor");
TouchSensor155.DEF = "_28";
TouchSensor155.enabled = False;
Transform154.children = new MFNode();

Transform154.children[0] = TouchSensor155;

Transform Transform156 = createNode("Transform");
Switch Switch157 = createNode("Switch");
Switch157.DEF = "_29";
Switch157.whichChoice = 4;
Inline Inline158 = createNode("Inline");
Inline158.USE = "_3";
Switch157.children = new MFNode();

Switch157.children[0] = Inline158;

Inline Inline159 = createNode("Inline");
Inline159.USE = "_4";
Switch157.children[1] = Inline159;

Transform Transform160 = createNode("Transform");
Transform160.center = new SFVec3f(new float[-2.23517e-8,0,-7.45058e-9]);
Inline Inline161 = createNode("Inline");
Inline161.USE = "_5";
Transform160.children = new MFNode();

Transform160.children[0] = Inline161;

Switch157.children[2] = Transform160;

Inline Inline162 = createNode("Inline");
Inline162.USE = "_6";
Switch157.children[3] = Inline162;

Transform Transform163 = createNode("Transform");
Transform163.center = new SFVec3f(new float[-5.96046e-8,-4.51691e-8,-9.49949e-8]);
Inline Inline164 = createNode("Inline");
Inline164.USE = "_7";
Transform163.children = new MFNode();

Transform163.children[0] = Inline164;

Switch157.children[4] = Transform163;

Inline Inline165 = createNode("Inline");
Inline165.USE = "_8";
Switch157.children[5] = Inline165;

Inline Inline166 = createNode("Inline");
Inline166.USE = "_9";
Switch157.children[6] = Inline166;

Transform156.children = new MFNode();

Transform156.children[0] = Switch157;

Transform154.children[1] = Transform156;

Transform Transform167 = createNode("Transform");
Transform167.translation = new SFVec3f(new float[0,-0.305097,0]);
ProtoInstance ProtoInstance168 = createNode("ProtoInstance");
ProtoInstance168.name = "HamSeg";
ProtoInstance168.DEF = "_30";
fieldValue fieldValue169 = createNode("fieldValue");
fieldValue169.name = "timer";
TimeSensor TimeSensor170 = createNode("TimeSensor");
TimeSensor170.DEF = "_31";
TimeSensor170.enabled = False;
TimeSensor170.cycleInterval = 0.1;
TimeSensor170.loop = True;
fieldValue169.children = new MFNode();

fieldValue169.children[0] = TimeSensor170;

ProtoInstance168.fieldValue = new MFNode();

ProtoInstance168.fieldValue[0] = fieldValue169;

fieldValue fieldValue171 = createNode("fieldValue");
fieldValue171.name = "whichChoice";
fieldValue171.value = "4";
ProtoInstance168.fieldValue[1] = fieldValue171;

Transform167.children = new MFNode();

Transform167.children[0] = ProtoInstance168;

Transform154.children[2] = Transform167;

Transform149.children[1] = Transform154;

Transform63.children[4] = Transform149;

Transform Transform172 = createNode("Transform");
Transform172.DEF = "seg6";
Transform172.translation = new SFVec3f(new float[0,0.035,0]);
Group Group173 = createNode("Group");
Group Group174 = createNode("Group");
Group174.USE = "jump";
Group173.children = new MFNode();

Group173.children[0] = Group174;

PositionInterpolator PositionInterpolator175 = createNode("PositionInterpolator");
PositionInterpolator175.DEF = "seg6TranslationInterp";
PositionInterpolator175.key = new MFFloat(new float[0,0.002886,0.005772,0.008658,0.011544,0.01443,0.017316,0.020202,0.023088,0.025974,0.02886,0.031746,0.034632,0.037518,0.040404,0.04329,0.046176,0.049062,0.051948,0.054834,0.05772,0.060606,0.063492,0.066378,0.069264,0.07215,0.075036,0.077922,0.080808,0.083694,0.08658,0.089466,0.092352,0.095238,0.098124,0.10101,0.103896,0.106782,0.109668,0.112554,0.11544,0.118326,0.121212,0.124098,0.126984,0.12987,0.132756,0.135642,0.138528,0.141414,0.1443,0.147186,0.150072,0.152958,0.155844,0.15873,0.161616,0.164502,0.167388,0.170274,0.17316,0.176046,0.178932,0.181818,0.184704,0.18759,0.190476,0.193362,0.196248,0.199134,0.20202,0.204906,0.207792,0.210678,0.213564,0.21645,0.219336,0.222222,0.225108,0.227994,0.23088,0.233766,0.236652,0.239538,0.242424,0.24531,0.248196,0.251082,0.253968,0.256854,0.25974,0.262626,0.265512,0.268398,0.271284,0.27417,0.277056,0.279942,0.282828,0.285714,0.288571,0.291428,0.294285,0.297143,0.3,0.302857,0.305714,0.308571,0.311428,0.314285,0.317143,0.32,0.322857,0.325714,0.328571,0.331428,0.334286,0.337143,0.34,0.342857,0.345714,0.348571,0.351428,0.354286,0.357143,0.36,0.362857,0.365714,0.368571,0.371428,0.374286,0.377143,0.38,0.382857,0.385714,0.388571,0.391429,0.394286,0.397143,0.4,0.402857,0.405714,0.408571,0.411429,0.414286,0.417143,0.42,0.422857,0.425714,0.428571,0.431429,0.434286,0.437143,0.44,0.442857,0.445714,0.448571,0.451429,0.454286,0.457143,0.46,0.462857,0.465714,0.468572,0.471429,0.474286,0.477143,0.48,0.482857,0.485714,0.488572,0.491429,0.494286,0.497143,0.5,0.502857,0.505714,0.508572,0.511429,0.514286,0.517143,0.52,0.522857,0.525714,0.528572,0.531429,0.534286,0.537143,0.54,0.542857,0.545714,0.548572,0.551429,0.554286,0.557143,0.56,0.562857,0.565715,0.568572,0.571429,0.574286,0.577143,0.58,0.582857,0.585715,0.588572,0.591429,0.594286,0.597143,0.6,0.602857,0.605715,0.608572,0.611429,0.614286,0.617143,0.62,0.622858,0.625715,0.628572,0.631429,0.634286,0.637143,0.64,0.642858,0.645715,0.648572,0.651429,0.654286,0.657143,0.66,0.662858,0.665715,0.668572,0.671429,0.674286,0.677143,0.68,0.682858,0.685715,0.688572,0.691429,0.694286,0.697143,0.700001,0.702858,0.705715,0.708572,0.711429,0.714286,0.717143,0.720001,0.722858,0.725715,0.728572,0.731429,0.734286,0.737143,0.740001,0.742858,0.745715,0.748572,0.751429,0.754286,0.757143,0.760001,0.762858,0.765715,0.768572,0.771429,0.774286,0.777144,0.780001,0.782858,0.785715,0.788572,0.791429,0.794286,0.797144,0.800001,0.802858,0.805715,0.808572,0.811429,0.814286,0.817144,0.820001,0.822858,0.825715,0.828572,0.831429,0.834287,0.837144,0.840001,0.842858,0.845715,0.848572,0.851429,0.854287,0.857143,0.860058,0.862974,0.865889,0.868805,0.87172,0.874636,0.877551,0.880467,0.883382,0.886297,0.889213,0.892128,0.895044,0.897959,0.900875,0.90379,0.906705,0.909621,0.912536,0.915452,0.918367,0.921283,0.924198,0.927114,0.930029,0.932944,0.93586,0.938775,0.941691,0.944606,0.947522,0.950437,0.953353,0.956268,0.959183,0.962099,0.965014,0.96793,0.970845,0.973761,0.976676,0.979592,0.982507,0.985422,0.988338,0.991253,0.994169,0.997084,1]);
PositionInterpolator175.keyValue = new MFVec3f(new float[0,0.035,0,0,0.0379126,0,0,0.040863,0,0,0.04385,0,0,0.0468724,0,0,0.0499291,0,0,0.0530188,0,0,0.0561404,0,0,0.0592927,0,0,0.0624745,0,0,0.0656847,0,0,0.068922,0,0,0.0721853,0,0,0.0754734,0,0,0.0787852,0,0,0.0821193,0,0,0.0854747,0,0,0.0888502,0,0,0.0922446,0,0,0.0956567,0,0,0.0990853,0,0,0.102529,0,0,0.105987,0,0,0.109459,0,0,0.112941,0,0,0.116435,0,0,0.119938,0,0,0.123449,0,0,0.126968,0,0,0.130492,0,0,0.134021,0,0,0.137553,0,0,0.141088,0,0,0.144624,0,0,0.148161,0,0,0.151695,0,0,0.155228,0,0,0.158757,0,0,0.162281,0,0,0.1658,0,0,0.169311,0,0,0.172814,0,0,0.176307,0,0,0.17979,0,0,0.183261,0,0,0.18672,0,0,0.190164,0,0,0.193592,0,0,0.197004,0,0,0.200399,0,0,0.203774,0,0,0.20713,0,0,0.210464,0,0,0.213775,0,0,0.217063,0,0,0.220327,0,0,0.223564,0,0,0.226774,0,0,0.229956,0,0,0.233108,0,0,0.23623,0,0,0.23932,0,0,0.242376,0,0,0.245399,0,0,0.248386,0,0,0.251336,0,0,0.254249,0,0,0.257122,0,0,0.259956,0,0,0.262748,0,0,0.265498,0,0,0.268204,0,0,0.270865,0,0,0.27348,0,0,0.276048,0,0,0.278567,0,0,0.281037,0,0,0.283456,0,0,0.285823,0,0,0.288137,0,0,0.290396,0,0,0.2926,0,0,0.294748,0,0,0.296837,0,0,0.298868,0,0,0.300838,0,0,0.302747,0,0,0.304593,0,0,0.306376,0,0,0.308094,0,0,0.309745,0,0,0.311329,0,0,0.312845,0,0,0.314291,0,0,0.315666,0,0,0.316969,0,0,0.318199,0,0,0.319355,0,0,0.320435,0,0,0.321438,0,0,0.322389,0,0,0.323332,0,0,0.324268,0,0,0.325196,0,0,0.326116,0,0,0.327028,0,0,0.327933,0,0,0.328829,0,0,0.329718,0,0,0.330599,0,0,0.331472,0,0,0.332337,0,0,0.333194,0,0,0.334044,0,0,0.334885,0,0,0.335717,0,0,0.336542,0,0,0.337359,0,0,0.338168,0,0,0.338968,0,0,0.33976,0,0,0.340544,0,0,0.34132,0,0,0.342087,0,0,0.342846,0,0,0.343597,0,0,0.344339,0,0,0.345073,0,0,0.345799,0,0,0.346516,0,0,0.347224,0,0,0.347924,0,0,0.348616,0,0,0.349298,0,0,0.349973,0,0,0.350638,0,0,0.351295,0,0,0.351943,0,0,0.352583,0,0,0.353214,0,0,0.353836,0,0,0.354449,0,0,0.355053,0,0,0.355648,0,0,0.356235,0,0,0.356813,0,0,0.357381,0,0,0.357941,0,0,0.358491,0,0,0.359033,0,0,0.359566,0,0,0.360089,0,0,0.360603,0,0,0.361108,0,0,0.361604,0,0,0.362091,0,0,0.362569,0,0,0.363037,0,0,0.363496,0,0,0.363946,0,0,0.364386,0,0,0.364817,0,0,0.365238,0,0,0.36565,0,0,0.366053,0,0,0.366446,0,0,0.366829,0,0,0.367203,0,0,0.367567,0,0,0.367922,0,0,0.368267,0,0,0.368603,0,0,0.368928,0,0,0.369244,0,0,0.369551,0,0,0.369847,0,0,0.370134,0,0,0.370411,0,0,0.370678,0,0,0.370935,0,0,0.371182,0,0,0.371419,0,0,0.371646,0,0,0.371863,0,0,0.37207,0,0,0.372267,0,0,0.372454,0,0,0.372631,0,0,0.372798,0,0,0.372954,0,0,0.3731,0,0,0.373236,0,0,0.373362,0,0,0.373477,0,0,0.373582,0,0,0.373677,0,0,0.373761,0,0,0.373835,0,0,0.373899,0,0,0.373952,0,0,0.373994,0,0,0.374026,0,0,0.374048,0,0,0.374058,0,0,0.374058,0,0,0.374048,0,0,0.374027,0,0,0.373995,0,0,0.373953,0,0,0.373899,0,0,0.373835,0,0,0.37376,0,0,0.373674,0,0,0.373578,0,0,0.37347,0,0,0.373352,0,0,0.373222,0,0,0.373082,0,0,0.37293,0,0,0.372768,0,0,0.372594,0,0,0.372409,0,0,0.372214,0,0,0.372007,0,0,0.371788,0,0,0.371559,0,0,0.371318,0,0,0.371066,0,0,0.370803,0,0,0.370529,0,0,0.370243,0,0,0.369945,0,0,0.369637,0,0,0.369317,0,0,0.368985,0,0,0.368642,0,0,0.368287,0,0,0.367921,0,0,0.367543,0,0,0.367153,0,0,0.366752,0,0,0.36634,0,0,0.365915,0,0,0.365479,0,0,0.365031,0,0,0.364571,0,0,0.364099,0,0,0.363616,0,0,0.363121,0,0,0.362613,0,0,0.362094,0,0,0.361563,0,0,0.36102,0,0,0.360465,0,0,0.359898,0,0,0.359318,0,0,0.358727,0,0,0.358123,0,0,0.357508,0,0,0.35688,0,0,0.35624,0,0,0.355587,0,0,0.354923,0,0,0.354246,0,0,0.353557,0,0,0.352855,0,0,0.352141,0,0,0.351414,0,0,0.350676,0,0,0.349924,0,0,0.34916,0,0,0.348384,0,0,0.347595,0,0,0.346793,0,0,0.345979,0,0,0.345152,0,0,0.344313,0,0,0.34346,0,0,0.342595,0,0,0.341718,0,0,0.340827,0,0,0.339924,0,0,0.339008,0,0,0.338078,0,0,0.337136,0,0,0.336181,0,0,0.335214,0,0,0.334233,0,0,0.333239,0,0,0.332232,0,0,0.331212,0,0,0.330178,0,0,0.329132,0,0,0.328073,0,0,0.327,0,0,0.325914,0,0,0.324815,0,0,0.323703,0,0,0.322577,0,0,0.321438,0,0,0.32008,0,0,0.318352,0,0,0.316265,0,0,0.313832,0,0,0.311064,0,0,0.307972,0,0,0.304569,0,0,0.300866,0,0,0.296875,0,0,0.292607,0,0,0.288074,0,0,0.283288,0,0,0.27826,0,0,0.273003,0,0,0.267527,0,0,0.261845,0,0,0.255968,0,0,0.249908,0,0,0.243677,0,0,0.237286,0,0,0.230747,0,0,0.224072,0,0,0.217272,0,0,0.210358,0,0,0.203344,0,0,0.19624,0,0,0.189058,0,0,0.18181,0,0,0.174508,0,0,0.167162,0,0,0.159786,0,0,0.15239,0,0,0.144986,0,0,0.137586,0,0,0.130202,0,0,0.122845,0,0,0.115526,0,0,0.108259,0,0,0.101054,0,0,0.0939225,0,0,0.0868771,0,0,0.0799289,0,0,0.07309,0,0,0.0663717,0,0,0.0597859,0,0,0.0533442,0,0,0.0470583,0,0,0.0409399,0,0,0.035,0]);
Group173.children[1] = PositionInterpolator175;

PositionInterpolator PositionInterpolator176 = createNode("PositionInterpolator");
PositionInterpolator176.DEF = "UnnamedSwitchCenterInterp_5";
PositionInterpolator176.key = new MFFloat(new float[0,0.002886,0.005772,0.008658,0.011544,0.01443,0.017316,0.020202,0.023088,0.025974,0.02886,0.031746,0.034632,0.037518,0.040404,0.04329,0.046176,0.049062,0.051948,0.054834,0.05772,0.060606,0.063492,0.066378,0.069264,0.07215,0.075036,0.077922,0.080808,0.083694,0.08658,0.089466,0.092352,0.095238,0.098124,0.10101,0.103896,0.106782,0.109668,0.112554,0.11544,0.118326,0.121212,0.124098,0.126984,0.12987,0.132756,0.135642,0.138528,0.141414,0.1443,0.147186,0.150072,0.152958,0.155844,0.15873,0.161616,0.164502,0.167388,0.170274,0.17316,0.176046,0.178932,0.181818,0.184704,0.18759,0.190476,0.193362,0.196248,0.199134,0.20202,0.204906,0.207792,0.210678,0.213564,0.21645,0.219336,0.222222,0.225108,0.227994,0.23088,0.233766,0.236652,0.239538,0.242424,0.24531,0.248196,0.251082,0.253968,0.256854,0.25974,0.262626,0.265512,0.268398,0.271284,0.27417,0.277056,0.279942,0.282828,0.285714,0.288571,0.291428,0.294285,0.297143,0.3,0.302857,0.305714,0.308571,0.311428,0.314285,0.317143,0.32,0.322857,0.325714,0.328571,0.331428,0.334286,0.337143,0.34,0.342857,0.345714,0.348571,0.351428,0.354286,0.357143,0.36,0.362857,0.365714,0.368571,0.371428,0.374286,0.377143,0.38,0.382857,0.385714,0.388571,0.391429,0.394286,0.397143,0.4,0.402857,0.405714,0.408571,0.411429,0.414286,0.417143,0.42,0.422857,0.425714,0.428571,0.431429,0.434286,0.437143,0.44,0.442857,0.445714,0.448571,0.451429,0.454286,0.457143,0.46,0.462857,0.465714,0.468572,0.471429,0.474286,0.477143,0.48,0.482857,0.485714,0.488572,0.491429,0.494286,0.497143,0.5,0.502857,0.505714,0.508572,0.511429,0.514286,0.517143,0.52,0.522857,0.525714,0.528572,0.531429,0.534286,0.537143,0.54,0.542857,0.545714,0.548572,0.551429,0.554286,0.557143,0.56,0.562857,0.565715,0.568572,0.571429,0.574286,0.577143,0.58,0.582857,0.585715,0.588572,0.591429,0.594286,0.597143,0.6,0.602857,0.605715,0.608572,0.611429,0.614286,0.617143,0.62,0.622858,0.625715,0.628572,0.631429,0.634286,0.637143,0.64,0.642858,0.645715,0.648572,0.651429,0.654286,0.657143,0.66,0.662858,0.665715,0.668572,0.671429,0.674286,0.677143,0.68,0.682858,0.685715,0.688572,0.691429,0.694286,0.697143,0.700001,0.702858,0.705715,0.708572,0.711429,0.714286,0.717143,0.720001,0.722858,0.725715,0.728572,0.731429,0.734286,0.737143,0.740001,0.742858,0.745715,0.748572,0.751429,0.754286,0.757143,0.760001,0.762858,0.765715,0.768572,0.771429,0.774286,0.777144,0.780001,0.782858,0.785715,0.788572,0.791429,0.794286,0.797144,0.800001,0.802858,0.805715,0.808572,0.811429,0.814286,0.817144,0.820001,0.822858,0.825715,0.828572,0.831429,0.834287,0.837144,0.840001,0.842858,0.845715,0.848572,0.851429,0.854287,0.857143]);
PositionInterpolator176.keyValue = new MFVec3f(new float[0,0,0,0,0.000244843,0,0,0.000492862,0,0,0.000743958,0,0,0.000998032,0,0,0.00125498,0,0,0.00151472,0,0,0.00177713,0,0,0.00204212,0,0,0.0023096,0,0,0.00257945,0,0,0.00285159,0,0,0.00312592,0,0,0.00340233,0,0,0.00368072,0,0,0.003961,0,0,0.00424307,0,0,0.00452682,0,0,0.00481216,0,0,0.00509899,0,0,0.00538722,0,0,0.00567673,0,0,0.00596743,0,0,0.00625922,0,0,0.00655201,0,0,0.00684569,0,0,0.00714016,0,0,0.00743533,0,0,0.0077311,0,0,0.00802736,0,0,0.00832402,0,0,0.00862097,0,0,0.00891813,0,0,0.00921538,0,0,0.00951263,0,0,0.00980979,0,0,0.0101067,0,0,0.0104034,0,0,0.0106997,0,0,0.0109954,0,0,0.0112906,0,0,0.0115851,0,0,0.0118788,0,0,0.0121715,0,0,0.0124633,0,0,0.012754,0,0,0.0130435,0,0,0.0133318,0,0,0.0136186,0,0,0.0139039,0,0,0.0141877,0,0,0.0144698,0,0,0.01475,0,0,0.0150284,0,0,0.0153048,0,0,0.0155792,0,0,0.0158513,0,0,0.0161212,0,0,0.0163886,0,0,0.0166536,0,0,0.016916,0,0,0.0171758,0,0,0.0174327,0,0,0.0176868,0,0,0.0179379,0,0,0.0181859,0,0,0.0184308,0,0,0.0186723,0,0,0.0189105,0,0,0.0191452,0,0,0.0193764,0,0,0.0196038,0,0,0.0198275,0,0,0.0200474,0,0,0.0202632,0,0,0.020475,0,0,0.0206826,0,0,0.020886,0,0,0.021085,0,0,0.0212795,0,0,0.0214694,0,0,0.0216547,0,0,0.0218352,0,0,0.0220109,0,0,0.0221816,0,0,0.0223472,0,0,0.0225077,0,0,0.0226629,0,0,0.0228127,0,0,0.0229571,0,0,0.023096,0,0,0.0232291,0,0,0.0233565,0,0,0.0234781,0,0,0.0235937,0,0,0.0237033,0,0,0.0238066,0,0,0.0239038,0,0,0.0239946,0,0,0.0240789,0,0,0.0241584,0,0,0.0242362,0,0,0.0243125,0,0,0.0243872,0,0,0.0244604,0,0,0.024532,0,0,0.0246021,0,0,0.0246707,0,0,0.0247377,0,0,0.0248033,0,0,0.0248673,0,0,0.0249299,0,0,0.0249911,0,0,0.0250508,0,0,0.025109,0,0,0.0251659,0,0,0.0252213,0,0,0.0252753,0,0,0.0253279,0,0,0.0253792,0,0,0.025429,0,0,0.0254776,0,0,0.0255248,0,0,0.0255706,0,0,0.0256152,0,0,0.0256584,0,0,0.0257004,0,0,0.0257411,0,0,0.0257805,0,0,0.0258186,0,0,0.0258555,0,0,0.0258912,0,0,0.0259256,0,0,0.0259589,0,0,0.0259909,0,0,0.0260218,0,0,0.0260515,0,0,0.02608,0,0,0.0261074,0,0,0.0261336,0,0,0.0261588,0,0,0.0261828,0,0,0.0262057,0,0,0.0262275,0,0,0.0262483,0,0,0.0262679,0,0,0.0262866,0,0,0.0263042,0,0,0.0263207,0,0,0.0263363,0,0,0.0263508,0,0,0.0263644,0,0,0.026377,0,0,0.0263886,0,0,0.0263993,0,0,0.026409,0,0,0.0264178,0,0,0.0264256,0,0,0.0264326,0,0,0.0264386,0,0,0.0264438,0,0,0.0264481,0,0,0.0264516,0,0,0.0264542,0,0,0.0264559,0,0,0.0264569,0,0,0.026457,0,0,0.0264564,0,0,0.0264549,0,0,0.0264527,0,0,0.0264497,0,0,0.026446,0,0,0.0264415,0,0,0.0264363,0,0,0.0264304,0,0,0.0264237,0,0,0.0264164,0,0,0.0264084,0,0,0.0263998,0,0,0.0263905,0,0,0.0263805,0,0,0.0263699,0,0,0.0263587,0,0,0.0263469,0,0,0.0263345,0,0,0.0263216,0,0,0.026308,0,0,0.0262939,0,0,0.0262792,0,0,0.0262641,0,0,0.0262484,0,0,0.0262321,0,0,0.0262154,0,0,0.0261982,0,0,0.0261805,0,0,0.0261624,0,0,0.0261438,0,0,0.0261248,0,0,0.0261053,0,0,0.0260855,0,0,0.0260652,0,0,0.0260446,0,0,0.0260235,0,0,0.0260021,0,0,0.0259804,0,0,0.0259583,0,0,0.0259359,0,0,0.0259131,0,0,0.0258901,0,0,0.0258668,0,0,0.0258431,0,0,0.0258193,0,0,0.0257951,0,0,0.0257707,0,0,0.0257461,0,0,0.0257213,0,0,0.0256962,0,0,0.025671,0,0,0.0256455,0,0,0.0256199,0,0,0.0255942,0,0,0.0255683,0,0,0.0255422,0,0,0.0255161,0,0,0.0254898,0,0,0.0254634,0,0,0.0254369,0,0,0.0254104,0,0,0.0253837,0,0,0.0253571,0,0,0.0253304,0,0,0.0253036,0,0,0.0252769,0,0,0.0252501,0,0,0.0252234,0,0,0.0251967,0,0,0.02517,0,0,0.0251433,0,0,0.0251167,0,0,0.0250902,0,0,0.0250638,0,0,0.0250374,0,0,0.0250112,0,0,0.024985,0,0,0.024959,0,0,0.0249332,0,0,0.0249075,0,0,0.0248819,0,0,0.0248565,0,0,0.0248314,0,0,0.0248064,0,0,0.0247816,0,0,0.0247571,0,0,0.0247328,0,0,0.0247087,0,0,0.0246849,0,0,0.0246614,0,0,0.0246382,0,0,0.0246152,0,0,0.0245926,0,0,0.0245703,0,0,0.0245483,0,0,0.0245267,0,0,0.0245054,0,0,0.0244845,0,0,0.0244639,0,0,0.0244438,0,0,0.0244241,0,0,0.0244048,0,0,0.0243859,0,0,0.0243675,0,0,0.0243495,0,0,0.024332,0,0,0.0243149,0,0,0.0242984,0,0,0.0242823,0,0,0.0242668,0,0,0.0242518,0,0,0.0242373,0,0,0.0242234,0,0,0.02421,0,0,0.0241972,0,0,0.024185,0,0,0.0241734,0,0,0.0241624,0,0,0.024152,0,0,0.0241423,0,0,0.0241332,0,0,0.0241248,0,0,0.024117,0,0,0.0241099,0,0,0.0241036,0,0,0.0240979,0,0,0.0240929,0,0,0.0240887,0,0,0.0240852,0,0,0.0240825,0,0,0.0240805,0,0,0.0240793,0,0,0.0240789,0]);
Group173.children[2] = PositionInterpolator176;

Transform172.children = new MFNode();

Transform172.children[0] = Group173;

Transform Transform177 = createNode("Transform");
Transform177.DEF = "_32";
TouchSensor TouchSensor178 = createNode("TouchSensor");
TouchSensor178.DEF = "_33";
TouchSensor178.enabled = False;
Transform177.children = new MFNode();

Transform177.children[0] = TouchSensor178;

Transform Transform179 = createNode("Transform");
Switch Switch180 = createNode("Switch");
Switch180.DEF = "_34";
Switch180.whichChoice = 5;
Inline Inline181 = createNode("Inline");
Inline181.USE = "_3";
Switch180.children = new MFNode();

Switch180.children[0] = Inline181;

Inline Inline182 = createNode("Inline");
Inline182.USE = "_4";
Switch180.children[1] = Inline182;

Inline Inline183 = createNode("Inline");
Inline183.USE = "_5";
Switch180.children[2] = Inline183;

Inline Inline184 = createNode("Inline");
Inline184.USE = "_6";
Switch180.children[3] = Inline184;

Inline Inline185 = createNode("Inline");
Inline185.USE = "_7";
Switch180.children[4] = Inline185;

Inline Inline186 = createNode("Inline");
Inline186.USE = "_8";
Switch180.children[5] = Inline186;

Inline Inline187 = createNode("Inline");
Inline187.USE = "_9";
Switch180.children[6] = Inline187;

Transform179.children = new MFNode();

Transform179.children[0] = Switch180;

Transform177.children[1] = Transform179;

Transform Transform188 = createNode("Transform");
Transform188.translation = new SFVec3f(new float[0,-0.373899,0]);
ProtoInstance ProtoInstance189 = createNode("ProtoInstance");
ProtoInstance189.name = "HamSeg";
ProtoInstance189.DEF = "_35";
fieldValue fieldValue190 = createNode("fieldValue");
fieldValue190.name = "timer";
TimeSensor TimeSensor191 = createNode("TimeSensor");
TimeSensor191.DEF = "_36";
TimeSensor191.enabled = False;
TimeSensor191.cycleInterval = 0.1;
TimeSensor191.loop = True;
fieldValue190.children = new MFNode();

fieldValue190.children[0] = TimeSensor191;

ProtoInstance189.fieldValue = new MFNode();

ProtoInstance189.fieldValue[0] = fieldValue190;

fieldValue fieldValue192 = createNode("fieldValue");
fieldValue192.name = "whichChoice";
fieldValue192.value = "5";
ProtoInstance189.fieldValue[1] = fieldValue192;

Transform188.children = new MFNode();

Transform188.children[0] = ProtoInstance189;

Transform177.children[2] = Transform188;

Transform172.children[1] = Transform177;

Transform63.children[5] = Transform172;

Transform Transform193 = createNode("Transform");
Transform193.DEF = "seg7";
Transform193.translation = new SFVec3f(new float[0.0150138,0.042,0.0329654]);
Group Group194 = createNode("Group");
Group Group195 = createNode("Group");
Group195.USE = "jump";
Group194.children = new MFNode();

Group194.children[0] = Group195;

PositionInterpolator PositionInterpolator196 = createNode("PositionInterpolator");
PositionInterpolator196.DEF = "seg7TranslationInterp";
PositionInterpolator196.key = new MFFloat(new float[0,0.002886,0.005772,0.008658,0.011544,0.01443,0.017316,0.020202,0.023088,0.025974,0.02886,0.031746,0.034632,0.037518,0.040404,0.04329,0.046176,0.049062,0.051948,0.054834,0.05772,0.060606,0.063492,0.066378,0.069264,0.07215,0.075036,0.077922,0.080808,0.083694,0.08658,0.089466,0.092352,0.095238,0.098124,0.10101,0.103896,0.106782,0.109668,0.112554,0.11544,0.118326,0.121212,0.124098,0.126984,0.12987,0.132756,0.135642,0.138528,0.141414,0.1443,0.147186,0.150072,0.152958,0.155844,0.15873,0.161616,0.164502,0.167388,0.170274,0.17316,0.176046,0.178932,0.181818,0.184704,0.18759,0.190476,0.193362,0.196248,0.199134,0.20202,0.204906,0.207792,0.210678,0.213564,0.21645,0.219336,0.222222,0.225108,0.227994,0.23088,0.233766,0.236652,0.239538,0.242424,0.24531,0.248196,0.251082,0.253968,0.256854,0.25974,0.262626,0.265512,0.268398,0.271284,0.27417,0.277056,0.279942,0.282828,0.285714,0.288571,0.291428,0.294285,0.297143,0.3,0.302857,0.305714,0.308571,0.311428,0.314285,0.317143,0.32,0.322857,0.325714,0.328571,0.331428,0.334286,0.337143,0.34,0.342857,0.345714,0.348571,0.351428,0.354286,0.357143,0.36,0.362857,0.365714,0.368571,0.371428,0.374286,0.377143,0.38,0.382857,0.385714,0.388571,0.391429,0.394286,0.397143,0.4,0.402857,0.405714,0.408571,0.411429,0.414286,0.417143,0.42,0.422857,0.425714,0.428571,0.431429,0.434286,0.437143,0.44,0.442857,0.445714,0.448571,0.451429,0.454286,0.457143,0.46,0.462857,0.465714,0.468572,0.471429,0.474286,0.477143,0.48,0.482857,0.485714,0.488572,0.491429,0.494286,0.497143,0.5,0.502857,0.505714,0.508572,0.511429,0.514286,0.517143,0.52,0.522857,0.525714,0.528572,0.531429,0.534286,0.537143,0.54,0.542857,0.545714,0.548572,0.551429,0.554286,0.557143,0.56,0.562857,0.565715,0.568572,0.571429,0.574286,0.577143,0.58,0.582857,0.585715,0.588572,0.591429,0.594286,0.597143,0.6,0.602857,0.605715,0.608572,0.611429,0.614286,0.617143,0.62,0.622858,0.625715,0.628572,0.631429,0.634286,0.637143,0.64,0.642858,0.645715,0.648572,0.651429,0.654286,0.657143,0.66,0.662858,0.665715,0.668572,0.671429,0.674286,0.677143,0.68,0.682858,0.685715,0.688572,0.691429,0.694286,0.697143,0.700001,0.702858,0.705715,0.708572,0.711429,0.714286,0.717143,0.720001,0.722858,0.725715,0.728572,0.731429,0.734286,0.737143,0.740001,0.742858,0.745715,0.748572,0.751429,0.754286,0.757143,0.760001,0.762858,0.765715,0.768572,0.771429,0.774286,0.777144,0.780001,0.782858,0.785715,0.788572,0.791429,0.794286,0.797144,0.800001,0.802858,0.805715,0.808572,0.811429,0.814286,0.817144,0.820001,0.822858,0.825715,0.828572,0.831429,0.834287,0.837144,0.840001,0.842858,0.845715,0.848572,0.851429,0.854287,0.857143,0.860058,0.862974,0.865889,0.868805,0.87172,0.874636,0.877551,0.880467,0.883382,0.886297,0.889213,0.892128,0.895044,0.897959,0.900875,0.90379,0.906705,0.909621,0.912536,0.915452,0.918367,0.921283,0.924198,0.927114,0.930029,0.932944,0.93586,0.938775,0.941691,0.944606,0.947522,0.950437,0.953353,0.956268,0.959183,0.962099,0.965014,0.96793,0.970845,0.973761,0.976676,0.979592,0.982507,0.985422,0.988338,0.991253,0.994169,0.997084,1]);
PositionInterpolator196.keyValue = new MFVec3f(new float[0.0150138,0.042,0.0329654,0.0150138,0.0453906,0.0329654,0.0150138,0.0488252,0.0329654,0.0150138,0.0523024,0.0329654,0.0150138,0.0558208,0.0329654,0.0150138,0.0593791,0.0329654,0.0150138,0.0629759,0.0329654,0.0150138,0.0666098,0.0329654,0.0150138,0.0702794,0.0329654,0.0150138,0.0739834,0.0329654,0.0150138,0.0777204,0.0329654,0.0150138,0.081489,0.0329654,0.0150138,0.0852879,0.0329654,0.0150138,0.0891156,0.0329654,0.0150138,0.0929708,0.0329654,0.0150138,0.0968522,0.0329654,0.0150138,0.100758,0.0329654,0.0150138,0.104688,0.0329654,0.0150138,0.108639,0.0329654,0.0150138,0.112611,0.0329654,0.0150138,0.116602,0.0329654,0.0150138,0.120612,0.0329654,0.0150138,0.124637,0.0329654,0.0150138,0.128678,0.0329654,0.0150138,0.132733,0.0329654,0.0150138,0.1368,0.0329654,0.0150138,0.140877,0.0329654,0.0150138,0.144965,0.0329654,0.0150138,0.149061,0.0329654,0.0150138,0.153163,0.0329654,0.0150138,0.157271,0.0329654,0.0150138,0.161384,0.0329654,0.0150138,0.165499,0.0329654,0.0150138,0.169615,0.0329654,0.0150138,0.173732,0.0329654,0.0150138,0.177847,0.0329654,0.0150138,0.181959,0.0329654,0.0150138,0.186067,0.0329654,0.0150138,0.19017,0.0329654,0.0150138,0.194265,0.0329654,0.0150138,0.198353,0.0329654,0.0150138,0.202431,0.0329654,0.0150138,0.206498,0.0329654,0.0150138,0.210552,0.0329654,0.0150138,0.214593,0.0329654,0.0150138,0.218619,0.0329654,0.0150138,0.222628,0.0329654,0.0150138,0.226619,0.0329654,0.0150138,0.230591,0.0329654,0.0150138,0.234543,0.0329654,0.0150138,0.238472,0.0329654,0.0150138,0.242378,0.0329654,0.0150138,0.246259,0.0329654,0.0150138,0.250115,0.0329654,0.0150138,0.253942,0.0329654,0.0150138,0.257741,0.0329654,0.0150138,0.26151,0.0329654,0.0150138,0.265247,0.0329654,0.0150138,0.268951,0.0329654,0.0150138,0.27262,0.0329654,0.0150138,0.276254,0.0329654,0.0150138,0.279851,0.0329654,0.0150138,0.283409,0.0329654,0.0150138,0.286928,0.0329654,0.0150138,0.290405,0.0329654,0.0150138,0.29384,0.0329654,0.0150138,0.29723,0.0329654,0.0150138,0.300575,0.0329654,0.0150138,0.303874,0.0329654,0.0150138,0.307124,0.0329654,0.0150138,0.310325,0.0329654,0.0150138,0.313475,0.0329654,0.0150138,0.316573,0.0329654,0.0150138,0.319617,0.0329654,0.0150138,0.322606,0.0329654,0.0150138,0.325539,0.0329654,0.0150138,0.328414,0.0329654,0.0150138,0.33123,0.0329654,0.0150138,0.333986,0.0329654,0.0150138,0.33668,0.0329654,0.0150138,0.33931,0.0329654,0.0150138,0.341876,0.0329654,0.0150138,0.344376,0.0329654,0.0150138,0.346808,0.0329654,0.0150138,0.349172,0.0329654,0.0150138,0.351466,0.0329654,0.0150138,0.353688,0.0329654,0.0150138,0.355837,0.0329654,0.0150138,0.357912,0.0329654,0.0150138,0.359912,0.0329654,0.0150138,0.361834,0.0329654,0.0150138,0.363678,0.0329654,0.0150138,0.365443,0.0329654,0.0150138,0.367126,0.0329654,0.0150138,0.368727,0.0329654,0.0150138,0.370244,0.0329654,0.0150138,0.371676,0.0329654,0.0150138,0.373021,0.0329654,0.0150138,0.374278,0.0329654,0.0150138,0.375446,0.0329654,0.0150138,0.376553,0.0329654,0.0150138,0.377651,0.0329654,0.0150138,0.37874,0.0329654,0.0150138,0.37982,0.0329654,0.0150138,0.380892,0.0329654,0.0150138,0.381954,0.0329654,0.0150138,0.383007,0.0329654,0.0150138,0.384051,0.0329654,0.0150138,0.385085,0.0329654,0.0150138,0.386111,0.0329654,0.0150138,0.387127,0.0329654,0.0150138,0.388134,0.0329654,0.0150138,0.389132,0.0329654,0.0150138,0.39012,0.0329654,0.0150138,0.391099,0.0329654,0.0150138,0.392069,0.0329654,0.0150138,0.393029,0.0329654,0.0150138,0.39398,0.0329654,0.0150138,0.394921,0.0329654,0.0150138,0.395853,0.0329654,0.0150138,0.396775,0.0329654,0.0150138,0.397688,0.0329654,0.0150138,0.398591,0.0329654,0.0150138,0.399484,0.0329654,0.0150138,0.400368,0.0329654,0.0150138,0.401242,0.0329654,0.0150138,0.402106,0.0329654,0.0150138,0.40296,0.0329654,0.0150138,0.403805,0.0329654,0.0150138,0.404639,0.0329654,0.0150138,0.405464,0.0329654,0.0150138,0.406279,0.0329654,0.0150138,0.407084,0.0329654,0.0150138,0.407879,0.0329654,0.0150138,0.408664,0.0329654,0.0150138,0.409438,0.0329654,0.0150138,0.410203,0.0329654,0.0150138,0.410958,0.0329654,0.0150138,0.411702,0.0329654,0.0150138,0.412436,0.0329654,0.0150138,0.41316,0.0329654,0.0150138,0.413874,0.0329654,0.0150138,0.414578,0.0329654,0.0150138,0.415271,0.0329654,0.0150138,0.415953,0.0329654,0.0150138,0.416626,0.0329654,0.0150138,0.417288,0.0329654,0.0150138,0.417939,0.0329654,0.0150138,0.41858,0.0329654,0.0150138,0.419211,0.0329654,0.0150138,0.419831,0.0329654,0.0150138,0.42044,0.0329654,0.0150138,0.421039,0.0329654,0.0150138,0.421627,0.0329654,0.0150138,0.422204,0.0329654,0.0150138,0.422771,0.0329654,0.0150138,0.423327,0.0329654,0.0150138,0.423872,0.0329654,0.0150138,0.424406,0.0329654,0.0150138,0.424929,0.0329654,0.0150138,0.425442,0.0329654,0.0150138,0.425943,0.0329654,0.0150138,0.426434,0.0329654,0.0150138,0.426914,0.0329654,0.0150138,0.427382,0.0329654,0.0150138,0.42784,0.0329654,0.0150138,0.428286,0.0329654,0.0150138,0.428722,0.0329654,0.0150138,0.429146,0.0329654,0.0150138,0.429559,0.0329654,0.0150138,0.429961,0.0329654,0.0150138,0.430351,0.0329654,0.0150138,0.43073,0.0329654,0.0150138,0.431098,0.0329654,0.0150138,0.431455,0.0329654,0.0150138,0.4318,0.0329654,0.0150138,0.432133,0.0329654,0.0150138,0.432456,0.0329654,0.0150138,0.432766,0.0329654,0.0150138,0.433066,0.0329654,0.0150138,0.433353,0.0329654,0.0150138,0.433629,0.0329654,0.0150138,0.433894,0.0329654,0.0150138,0.434146,0.0329654,0.0150138,0.434388,0.0329654,0.0150138,0.434617,0.0329654,0.0150138,0.434834,0.0329654,0.0150138,0.43504,0.0329654,0.0150138,0.435234,0.0329654,0.0150138,0.435416,0.0329654,0.0150138,0.435587,0.0329654,0.0150138,0.435745,0.0329654,0.0150138,0.435891,0.0329654,0.0150138,0.436025,0.0329654,0.0150138,0.436148,0.0329654,0.0150138,0.436258,0.0329654,0.0150138,0.436356,0.0329654,0.0150138,0.436442,0.0329654,0.0150138,0.436516,0.0329654,0.0150138,0.436578,0.0329654,0.0150138,0.436627,0.0329654,0.0150138,0.436664,0.0329654,0.0150138,0.436689,0.0329654,0.0150138,0.436702,0.0329654,0.0150138,0.436702,0.0329654,0.0150138,0.43669,0.0329654,0.0150138,0.436665,0.0329654,0.0150138,0.436628,0.0329654,0.0150138,0.436579,0.0329654,0.0150138,0.436517,0.0329654,0.0150138,0.436442,0.0329654,0.0150138,0.436355,0.0329654,0.0150138,0.436255,0.0329654,0.0150138,0.436142,0.0329654,0.0150138,0.436017,0.0329654,0.0150138,0.435879,0.0329654,0.0150138,0.435728,0.0329654,0.0150138,0.435565,0.0329654,0.0150138,0.435389,0.0329654,0.0150138,0.4352,0.0329654,0.0150138,0.434997,0.0329654,0.0150138,0.434782,0.0329654,0.0150138,0.434554,0.0329654,0.0150138,0.434314,0.0329654,0.0150138,0.43406,0.0329654,0.0150138,0.433793,0.0329654,0.0150138,0.433512,0.0329654,0.0150138,0.433219,0.0329654,0.0150138,0.432913,0.0329654,0.0150138,0.432593,0.0329654,0.0150138,0.43226,0.0329654,0.0150138,0.431914,0.0329654,0.0150138,0.431555,0.0329654,0.0150138,0.431182,0.0329654,0.0150138,0.430796,0.0329654,0.0150138,0.430396,0.0329654,0.0150138,0.429984,0.0329654,0.0150138,0.429557,0.0329654,0.0150138,0.429117,0.0329654,0.0150138,0.428664,0.0329654,0.0150138,0.428197,0.0329654,0.0150138,0.427716,0.0329654,0.0150138,0.427222,0.0329654,0.0150138,0.426714,0.0329654,0.0150138,0.426193,0.0329654,0.0150138,0.425658,0.0329654,0.0150138,0.425109,0.0329654,0.0150138,0.424546,0.0329654,0.0150138,0.423969,0.0329654,0.0150138,0.423379,0.0329654,0.0150138,0.422774,0.0329654,0.0150138,0.422156,0.0329654,0.0150138,0.421524,0.0329654,0.0150138,0.420878,0.0329654,0.0150138,0.420217,0.0329654,0.0150138,0.419543,0.0329654,0.0150138,0.418854,0.0329654,0.0150138,0.418152,0.0329654,0.0150138,0.417435,0.0329654,0.0150138,0.416704,0.0329654,0.0150138,0.415959,0.0329654,0.0150138,0.4152,0.0329654,0.0150138,0.414426,0.0329654,0.0150138,0.413638,0.0329654,0.0150138,0.412836,0.0329654,0.0150138,0.412019,0.0329654,0.0150138,0.411188,0.0329654,0.0150138,0.410342,0.0329654,0.0150138,0.409482,0.0329654,0.0150138,0.408607,0.0329654,0.0150138,0.407718,0.0329654,0.0150138,0.406814,0.0329654,0.0150138,0.405895,0.0329654,0.0150138,0.404962,0.0329654,0.0150138,0.404014,0.0329654,0.0150138,0.403052,0.0329654,0.0150138,0.402075,0.0329654,0.0150138,0.401082,0.0329654,0.0150138,0.400076,0.0329654,0.0150138,0.399054,0.0329654,0.0150138,0.398017,0.0329654,0.0150138,0.396965,0.0329654,0.0150138,0.395899,0.0329654,0.0150138,0.394817,0.0329654,0.0150138,0.393721,0.0329654,0.0150138,0.392609,0.0329654,0.0150138,0.391482,0.0329654,0.0150138,0.39034,0.0329654,0.0150138,0.389183,0.0329654,0.0150138,0.388011,0.0329654,0.0150138,0.386824,0.0329654,0.0150138,0.385621,0.0329654,0.0150138,0.384403,0.0329654,0.0150138,0.38317,0.0329654,0.0150138,0.381921,0.0329654,0.0150138,0.380657,0.0329654,0.0150138,0.379377,0.0329654,0.0150138,0.378082,0.0329654,0.0150138,0.376772,0.0329654,0.0150138,0.375446,0.0329654,0.0150138,0.373865,0.0329654,0.0150138,0.371853,0.0329654,0.0150138,0.369424,0.0329654,0.0150138,0.366592,0.0329654,0.0150138,0.363369,0.0329654,0.0150138,0.35977,0.0329654,0.0150138,0.355809,0.0329654,0.0150138,0.351498,0.0329654,0.0150138,0.346851,0.0329654,0.0150138,0.341883,0.0329654,0.0150138,0.336606,0.0329654,0.0150138,0.331035,0.0329654,0.0150138,0.325182,0.0329654,0.0150138,0.319062,0.0329654,0.0150138,0.312688,0.0329654,0.0150138,0.306073,0.0329654,0.0150138,0.299232,0.0329654,0.0150138,0.292177,0.0329654,0.0150138,0.284923,0.0329654,0.0150138,0.277484,0.0329654,0.0150138,0.269871,0.0329654,0.0150138,0.2621,0.0329654,0.0150138,0.254184,0.0329654,0.0150138,0.246137,0.0329654,0.0150138,0.237972,0.0329654,0.0150138,0.229702,0.0329654,0.0150138,0.221341,0.0329654,0.0150138,0.212904,0.0329654,0.0150138,0.204403,0.0329654,0.0150138,0.195852,0.0329654,0.0150138,0.187265,0.0329654,0.0150138,0.178655,0.0329654,0.0150138,0.170036,0.0329654,0.0150138,0.161422,0.0329654,0.0150138,0.152825,0.0329654,0.0150138,0.144261,0.0329654,0.0150138,0.135742,0.0329654,0.0150138,0.127282,0.0329654,0.0150138,0.118894,0.0329654,0.0150138,0.110592,0.0329654,0.0150138,0.102391,0.0329654,0.0150138,0.0943023,0.0329654,0.0150138,0.086341,0.0329654,0.0150138,0.0785201,0.0329654,0.0150138,0.0708535,0.0329654,0.0150138,0.0633547,0.0329654,0.0150138,0.0560372,0.0329654,0.0150138,0.0489148,0.0329654,0.0150138,0.042,0.0329654]);
Group194.children[1] = PositionInterpolator196;

Transform193.children = new MFNode();

Transform193.children[0] = Group194;

Transform Transform197 = createNode("Transform");
Transform197.translation = new SFVec3f(new float[-0.0150138,0,-0.0329654]);
Transform197.center = new SFVec3f(new float[0,0.0240789,0]);
TouchSensor TouchSensor198 = createNode("TouchSensor");
TouchSensor198.DEF = "_37";
TouchSensor198.enabled = False;
Transform197.children = new MFNode();

Transform197.children[0] = TouchSensor198;

Transform Transform199 = createNode("Transform");
ProtoInstance ProtoInstance200 = createNode("ProtoInstance");
ProtoInstance200.name = "HamSeg";
ProtoInstance200.DEF = "_38";
fieldValue fieldValue201 = createNode("fieldValue");
fieldValue201.name = "timer";
TimeSensor TimeSensor202 = createNode("TimeSensor");
TimeSensor202.DEF = "_39";
TimeSensor202.enabled = False;
TimeSensor202.cycleInterval = 0.1;
TimeSensor202.loop = True;
fieldValue201.children = new MFNode();

fieldValue201.children[0] = TimeSensor202;

ProtoInstance200.fieldValue = new MFNode();

ProtoInstance200.fieldValue[0] = fieldValue201;

fieldValue fieldValue203 = createNode("fieldValue");
fieldValue203.name = "whichChoice";
fieldValue203.value = "6";
ProtoInstance200.fieldValue[1] = fieldValue203;

Transform199.children = new MFNode();

Transform199.children[0] = ProtoInstance200;

Transform197.children[1] = Transform199;

Transform Transform204 = createNode("Transform");
Transform204.DEF = "Switch";
Transform204.translation = new SFVec3f(new float[0,3.72529e-9,0]);
Transform204.center = new SFVec3f(new float[0,0.0240789,0]);
Switch Switch205 = createNode("Switch");
Switch205.DEF = "_40";
Switch205.whichChoice = 6;
Inline Inline206 = createNode("Inline");
Inline206.USE = "_3";
Switch205.children = new MFNode();

Switch205.children[0] = Inline206;

Inline Inline207 = createNode("Inline");
Inline207.USE = "_4";
Switch205.children[1] = Inline207;

Inline Inline208 = createNode("Inline");
Inline208.USE = "_5";
Switch205.children[2] = Inline208;

Inline Inline209 = createNode("Inline");
Inline209.USE = "_6";
Switch205.children[3] = Inline209;

Inline Inline210 = createNode("Inline");
Inline210.USE = "_7";
Switch205.children[4] = Inline210;

Inline Inline211 = createNode("Inline");
Inline211.USE = "_8";
Switch205.children[5] = Inline211;

Transform Transform212 = createNode("Transform");
Transform212.center = new SFVec3f(new float[0,0.0240789,0]);
Inline Inline213 = createNode("Inline");
Inline213.USE = "_9";
Transform212.children = new MFNode();

Transform212.children[0] = Inline213;

Switch205.children[6] = Transform212;

Transform204.children = new MFNode();

Transform204.children[0] = Switch205;

Transform197.children[2] = Transform204;

Transform193.children[1] = Transform197;

Transform63.children[6] = Transform193;

Transform Transform214 = createNode("Transform");
Transform214.DEF = "boden";
Transform Transform215 = createNode("Transform");
Transform215.DEF = "sesam";
Transform215.translation = new SFVec3f(new float[0,-0.0116022,0]);
Transform215.scale = new SFVec3f(new float[1.03654,0.797771,1.03654]);
Shape Shape216 = createNode("Shape");
Appearance Appearance217 = createNode("Appearance");
ImageTexture ImageTexture218 = createNode("ImageTexture");
ImageTexture218.url = new MFString(new java.lang.String["sesam.jpg"]);
Appearance217.texture = ImageTexture218;

TextureTransform TextureTransform219 = createNode("TextureTransform");
TextureTransform219.DEF = "_41";
Appearance217.textureTransform = TextureTransform219;

Shape216.appearance = Appearance217;

IndexedFaceSet IndexedFaceSet220 = createNode("IndexedFaceSet");
IndexedFaceSet220.solid = False;
IndexedFaceSet220.convex = False;
IndexedFaceSet220.texCoordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,1,4,3,-1,4,5,3,-1,6,7,8,-1,9,10,11,-1,12,13,14,-1,13,15,14,-1,13,16,15,-1,16,17,15,-1,16,18,17,-1,18,19,17,-1,18,20,19,-1,20,21,19,-1,20,22,21,-1,22,23,21,-1,22,24,23,-1,24,25,23,-1,24,26,25,-1,26,27,25,-1,26,28,27,-1,28,29,27,-1,28,30,29,-1,30,31,29,-1,30,32,31,-1,32,33,31,-1,32,0,33,-1,0,2,33,-1,34,35,36,-1,35,37,36,-1,38,34,36,-1,37,39,36,-1,40,38,36,-1,39,41,36,-1,41,42,36,-1,42,43,36,-1,43,44,36,-1,44,45,36,-1,45,46,36,-1,46,47,36,-1,47,48,36,-1,48,40,36,-1,49,0,32,-1,49,50,0,-1,50,1,0,-1,50,51,1,-1,51,4,1,-1,52,53,54,-1,55,56,57,-1,58,59,12,-1,59,13,12,-1,59,60,13,-1,60,16,13,-1,60,61,16,-1,61,18,16,-1,61,62,18,-1,62,20,18,-1,62,63,20,-1,63,22,20,-1,63,64,22,-1,64,24,22,-1,64,65,24,-1,65,26,24,-1,65,66,26,-1,66,28,26,-1,66,67,28,-1,67,30,28,-1,67,68,30,-1,68,32,30,-1,68,49,32,-1]);
IndexedFaceSet220.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,2,-1,1,4,3,-1,4,5,3,-1,4,6,5,-1,6,7,5,-1,6,8,7,-1,8,9,7,-1,8,10,9,-1,10,11,9,-1,10,12,11,-1,12,13,11,-1,12,14,13,-1,14,15,13,-1,14,16,15,-1,16,17,15,-1,16,18,17,-1,18,19,17,-1,18,20,19,-1,20,21,19,-1,20,22,21,-1,22,23,21,-1,22,24,23,-1,24,25,23,-1,24,26,25,-1,26,27,25,-1,26,0,27,-1,0,2,27,-1,2,3,28,-1,3,5,28,-1,27,2,28,-1,5,7,28,-1,25,27,28,-1,7,9,28,-1,9,11,28,-1,11,13,28,-1,13,15,28,-1,15,17,28,-1,17,19,28,-1,19,21,28,-1,21,23,28,-1,23,25,28,-1,29,0,26,-1,29,30,0,-1,30,1,0,-1,30,31,1,-1,31,4,1,-1,31,32,4,-1,32,6,4,-1,32,33,6,-1,33,8,6,-1,33,34,8,-1,34,10,8,-1,34,35,10,-1,35,12,10,-1,35,36,12,-1,36,14,12,-1,36,37,14,-1,37,16,14,-1,37,38,16,-1,38,18,16,-1,38,39,18,-1,39,20,18,-1,39,40,20,-1,40,22,20,-1,40,41,22,-1,41,24,22,-1,41,42,24,-1,42,26,24,-1,42,29,26,-1]);
TextureCoordinate TextureCoordinate221 = createNode("TextureCoordinate");
TextureCoordinate221.point = new MFVec2f(new float[1.38652,0.515583,1.58352,0.515583,1.38652,0.778852,1.58352,0.778852,1.78052,0.515583,1.78052,0.778852,1.78149,0.516991,1.95022,0.522014,1.95439,0.774415,1.77842,0.515325,1.95328,0.776092,1.78037,0.774684,-0.834413,0.515583,-0.583519,0.515583,-0.834413,0.778852,-0.583519,0.778852,-0.386515,0.515583,-0.386515,0.778852,-0.189512,0.515583,-0.189512,0.778852,0.007491,0.515583,0.007491,0.778852,0.204495,0.515583,0.204495,0.778852,0.401498,0.515583,0.401498,0.778852,0.598502,0.515583,0.598502,0.778852,0.795505,0.515583,0.795505,0.778852,0.992509,0.515583,0.992509,0.778852,1.18951,0.515583,1.18951,0.778852,0.949439,0.446689,0.902703,0.582021,0.649603,0.380028,0.803066,0.678787,0.934017,0.299597,0.670262,0.717822,0.859492,0.169876,0.530595,0.691395,0.411728,0.60474,0.337203,0.47502,0.321781,0.327927,0.368517,0.192596,0.468154,0.095829,0.600957,0.056794,0.740624,0.083221,1.38652,0.320624,1.58352,0.320624,1.78052,0.320624,1.94977,0.520284,1.95606,0.327,1.78067,0.503245,1.96409,0.323421,1.78067,0.319842,1.78067,0.506824,-0.834413,0.320624,-0.583519,0.320624,-0.386515,0.320624,-0.189512,0.320624,0.007491,0.320624,0.204495,0.320624,0.401498,0.320624,0.598502,0.320624,0.795505,0.320624,0.992509,0.320624,1.18951,0.320624]);
IndexedFaceSet220.texCoord = TextureCoordinate221;

Coordinate Coordinate222 = createNode("Coordinate");
Coordinate222.point = new MFVec3f(new float[0.0862241,-0.0169619,-0.0415229,0.0596691,-0.0169619,-0.0748226,0.0561869,-0.0438268,-0.0270578,0.0388825,-0.0438268,-0.0487568,0.021296,-0.0169619,-0.0933016,0.0138766,-0.0438268,-0.0607988,-0.0212956,-0.0169619,-0.0933017,-0.0138763,-0.0438268,-0.0607989,-0.0596688,-0.0169619,-0.0748229,-0.0388823,-0.0438268,-0.048757,-0.0862239,-0.0169619,-0.0415234,-0.0561868,-0.0438268,-0.027058,-0.0957016,-0.0169619,-2.42621e-7,-0.0623627,-0.0438268,-1.58101e-7,-0.0862241,-0.0169619,0.0415229,-0.0561869,-0.0438268,0.0270578,-0.0596691,-0.0169619,0.0748226,-0.0388825,-0.0438268,0.0487568,-0.021296,-0.0169619,0.0933016,-0.0138766,-0.0438268,0.0607988,0.0212956,-0.0169619,0.0933017,0.0138763,-0.0438268,0.0607989,0.0596688,-0.0169619,0.0748229,0.0388823,-0.0438268,0.048757,0.0862239,-0.0169619,0.0415234,0.0561868,-0.0438268,0.027058,0.0957016,-0.0169619,2.42621e-7,0.0623627,-0.0438268,1.58101e-7,0,-0.0514085,0,0.0909114,0.0145892,-0.0437807,0.0629125,0.0145892,-0.0788904,0.0224536,0.0145892,-0.0983741,-0.0224531,0.0145892,-0.0983742,-0.0629121,0.0145892,-0.0788907,-0.0909112,0.0145892,-0.0437811,-0.100905,0.0145892,-2.55812e-7,-0.0909114,0.0145892,0.0437807,-0.0629125,0.0145892,0.0788904,-0.0224536,0.0145892,0.0983741,0.0224531,0.0145892,0.0983742,0.0629121,0.0145892,0.0788907,0.0909112,0.0145892,0.0437811,0.100905,0.0145892,2.55812e-7]);
IndexedFaceSet220.coord = Coordinate222;

Shape216.geometry = IndexedFaceSet220;

Transform215.child = new undefined();

Transform215.child[0] = Shape216;

Transform214.children = new MFNode();

Transform214.children[0] = Transform215;

Transform Transform223 = createNode("Transform");
Transform223.DEF = "teig";
Transform223.translation = new SFVec3f(new float[0,-0.0116022,0]);
Transform223.scale = new SFVec3f(new float[1.03654,0.797771,1.03654]);
Shape Shape224 = createNode("Shape");
Appearance Appearance225 = createNode("Appearance");
ImageTexture ImageTexture226 = createNode("ImageTexture");
ImageTexture226.url = new MFString(new java.lang.String["bread.jpg"]);
Appearance225.texture = ImageTexture226;

TextureTransform TextureTransform227 = createNode("TextureTransform");
TextureTransform227.USE = "_41";
Appearance225.textureTransform = TextureTransform227;

Shape224.appearance = Appearance225;

IndexedFaceSet IndexedFaceSet228 = createNode("IndexedFaceSet");
IndexedFaceSet228.solid = False;
IndexedFaceSet228.convex = False;
IndexedFaceSet228.coordIndex = new MFInt32(new int[0,1,2,3,-1,4,0,3,5,-1,6,4,5,7,-1,8,9,10,11,-1,9,12,13,10,-1,12,6,7,13,-1]);
TextureCoordinate TextureCoordinate229 = createNode("TextureCoordinate");
TextureCoordinate229.point = new MFVec2f(new float[0.890916,0.188255,0.987464,0.388739,0.987464,0.61126,0.890916,0.811745,0.716942,0.049515,0.716942,0.950484,0.5,0,0.5,1,0.012536,0.38874,0.109084,0.188255,0.109084,0.811745,0.012536,0.611261,0.283058,0.049516,0.283058,0.950485]);
IndexedFaceSet228.texCoord = TextureCoordinate229;

Coordinate Coordinate230 = createNode("Coordinate");
Coordinate230.point = new MFVec3f(new float[-0.0909112,0.0145892,-0.0437811,-0.0629121,0.0145892,-0.0788907,-0.0224531,0.0145892,-0.0983742,0.0224536,0.0145892,-0.0983741,-0.100905,0.0145892,-2.55812e-7,0.0629125,0.0145892,-0.0788904,-0.0909114,0.0145892,0.0437807,0.0909114,0.0145892,-0.0437807,0.0224531,0.0145892,0.0983742,-0.0224536,0.0145892,0.0983741,0.0909112,0.0145892,0.0437811,0.0629121,0.0145892,0.0788907,-0.0629125,0.0145892,0.0788904,0.100905,0.0145892,2.55812e-7]);
IndexedFaceSet228.coord = Coordinate230;

Shape224.geometry = IndexedFaceSet228;

Transform223.child = new undefined();

Transform223.child[0] = Shape224;

Transform214.children[1] = Transform223;

Transform63.children[7] = Transform214;

Transform62.children = new MFNode();

Transform62.children[0] = Transform63;

Transform Transform231 = createNode("Transform");
Transform231.DEF = "Ham";
Script Script232 = createNode("Script");
Script232.DEF = "_hamScript1";
Script232.directOutput = True;
field field233 = createNode("field");
field233.name = "whichChoice1_changed";
field233.accessType = "outputOnly";
field233.type = "SFInt32";
Script232.field = new MFNode();

Script232.field[0] = field233;

field field234 = createNode("field");
field234.name = "whichChoice2_changed";
field234.accessType = "outputOnly";
field234.type = "SFInt32";
Script232.field[1] = field234;

field field235 = createNode("field");
field235.name = "whichChoice3_changed";
field235.accessType = "outputOnly";
field235.type = "SFInt32";
Script232.field[2] = field235;

field field236 = createNode("field");
field236.name = "whichChoice4_changed";
field236.accessType = "outputOnly";
field236.type = "SFInt32";
Script232.field[3] = field236;

field field237 = createNode("field");
field237.name = "whichChoice5_changed";
field237.accessType = "outputOnly";
field237.type = "SFInt32";
Script232.field[4] = field237;

field field238 = createNode("field");
field238.name = "whichChoice6_changed";
field238.accessType = "outputOnly";
field238.type = "SFInt32";
Script232.field[5] = field238;

field field239 = createNode("field");
field239.name = "whichChoice7_changed";
field239.accessType = "outputOnly";
field239.type = "SFInt32";
Script232.field[6] = field239;

field field240 = createNode("field");
field240.name = "enabled_changed";
field240.accessType = "outputOnly";
field240.type = "SFBool";
Script232.field[7] = field240;

field field241 = createNode("field");
field241.name = "initTime_changed";
field241.accessType = "outputOnly";
field241.type = "SFTime";
Script232.field[8] = field241;

field field242 = createNode("field");
field242.name = "set_whichChoice1";
field242.accessType = "inputOnly";
field242.type = "SFInt32";
Script232.field[9] = field242;

field field243 = createNode("field");
field243.name = "set_whichChoice2";
field243.accessType = "inputOnly";
field243.type = "SFInt32";
Script232.field[10] = field243;

field field244 = createNode("field");
field244.name = "set_whichChoice3";
field244.accessType = "inputOnly";
field244.type = "SFInt32";
Script232.field[11] = field244;

field field245 = createNode("field");
field245.name = "set_whichChoice4";
field245.accessType = "inputOnly";
field245.type = "SFInt32";
Script232.field[12] = field245;

field field246 = createNode("field");
field246.name = "set_whichChoice5";
field246.accessType = "inputOnly";
field246.type = "SFInt32";
Script232.field[13] = field246;

field field247 = createNode("field");
field247.name = "set_whichChoice6";
field247.accessType = "inputOnly";
field247.type = "SFInt32";
Script232.field[14] = field247;

field field248 = createNode("field");
field248.name = "set_whichChoice7";
field248.accessType = "inputOnly";
field248.type = "SFInt32";
Script232.field[15] = field248;

field field249 = createNode("field");
field249.name = "set_startTime";
field249.accessType = "inputOnly";
field249.type = "SFTime";
Script232.field[16] = field249;

field field250 = createNode("field");
field250.name = "set_initTime";
field250.accessType = "inputOnly";
field250.type = "SFTime";
Script232.field[17] = field250;

field field251 = createNode("field");
field251.name = "gameOver";
field251.accessType = "inputOnly";
field251.type = "SFTime";
Script232.field[18] = field251;

field field252 = createNode("field");
field252.name = "whichChoice";
field252.accessType = "initializeOnly";
field252.type = "MFInt32";
field252.value = "0 1 2 3 4 5 6";
Script232.field[19] = field252;

field field253 = createNode("field");
field253.name = "choice";
field253.accessType = "initializeOnly";
field253.type = "MFInt32";
field253.value = "0 0 0 0 0 0 0";
Script232.field[20] = field253;

field field254 = createNode("field");
field254.name = "level";
field254.accessType = "initializeOnly";
field254.type = "MFInt32";
field254.value = "0 1 2 3 4 5 6";
Script232.field[21] = field254;

field field255 = createNode("field");
field255.name = "l";
field255.accessType = "initializeOnly";
field255.type = "SFInt32";
Script232.field[22] = field255;

field field256 = createNode("field");
field256.name = "countDown";
field256.accessType = "initializeOnly";
field256.type = "SFNode";
ProtoInstance ProtoInstance257 = createNode("ProtoInstance");
ProtoInstance257.name = "CountDown";
ProtoInstance257.DEF = "_42";
fieldValue fieldValue258 = createNode("fieldValue");
fieldValue258.name = "startTime";
fieldValue258.value = "120";
ProtoInstance257.fieldValue = new MFNode();

ProtoInstance257.fieldValue[0] = fieldValue258;

field256.children = new MFNode();

field256.children[0] = ProtoInstance257;

Script232.field[23] = field256;


Script232.setSourceCode(`vrmlscript:\n"+
"function initialize()\n"+
"{\n"+
"	enabled_changed = FALSE;\n"+
"	countDown.set_startTime = 120;\n"+
"	l = 0;\n"+
"}\n"+
"\n"+
"function set_initTime(value, time)\n"+
"{\n"+
"	countDown.set_startTime = 120;\n"+
"	initTime_changed = time;\n"+
"}\n"+
"\n"+
"function set_startTime(value, time)\n"+
"{\n"+
"	choice = new MFInt32(0, 0, 0, 0, 0, 0, 0);\n"+
"	enabled_changed = TRUE;\n"+
"}\n"+
"\n"+
"function gameOver(value, time)\n"+
"{\n"+
"	enabled_changed = FALSE;\n"+
"}\n"+
"\n"+
"function set_whichChoice1(value, time)\n"+
"{\n"+
"	whichChoice[0] = value;\n"+
"	choice[0] = (value == level[0 + l]);\n"+
"}\n"+
"\n"+
"function set_whichChoice2(value, time)\n"+
"{\n"+
"	whichChoice[1] = value;\n"+
"	choice[1] = (value == level[1 + l]);\n"+
"}\n"+
"\n"+
"function set_whichChoice3(value, time)\n"+
"{\n"+
"	whichChoice[2] = value;\n"+
"	choice[2] = (value == level[2 + l]);\n"+
"}\n"+
"\n"+
"function set_whichChoice4(value, time)\n"+
"{\n"+
"	whichChoice[3] = value;\n"+
"	choice[3] = (value == level[3 + l]);\n"+
"}\n"+
"\n"+
"function set_whichChoice5(value, time)\n"+
"{\n"+
"	whichChoice[4] = value;\n"+
"	choice[4] = (value == level[4 + l]);\n"+
"}\n"+
"\n"+
"function set_whichChoice6(value, time)\n"+
"{\n"+
"	whichChoice[5] = value;\n"+
"	choice[5] = (value == level[5 + l]);\n"+
"}\n"+
"\n"+
"function set_whichChoice7(value, time)\n"+
"{\n"+
"	whichChoice[6] = value;\n"+
"	choice[6] = (value == level[6 + l]);\n"+
"}\n"+
"\n"+
"function eventsProcessed() {\n"+
"	if (enabled_changed\n"+
"	 && choice[0]\n"+
"	 && choice[1]\n"+
"	 && choice[2]\n"+
"	 && choice[3]\n"+
"	 && choice[4]\n"+
"	 && choice[5]\n"+
"	 && choice[6]) {\n"+
"		enabled_changed = FALSE;\n"+
"	}\n"+
"}`)
Transform231.children = new MFNode();

Transform231.children[0] = Script232;

Transform Transform259 = createNode("Transform");
ProtoInstance ProtoInstance260 = createNode("ProtoInstance");
ProtoInstance260.USE = "_42";
Transform259.children = new MFNode();

Transform259.children[0] = ProtoInstance260;

Transform231.children[1] = Transform259;

Transform62.children[1] = Transform231;

children[8] = Transform62;

Transform Transform261 = createNode("Transform");
Transform261.translation = new SFVec3f(new float[0,0,-0.459672]);
Transform261.scale = new SFVec3f(new float[6.6625,6.66251,6.6625]);
ProximitySensor ProximitySensor262 = createNode("ProximitySensor");
ProximitySensor262.size = new SFVec3f(new float[1,1,1]);
Transform261.children = new MFNode();

Transform261.children[0] = ProximitySensor262;

children[9] = Transform261;

Transform Transform263 = createNode("Transform");
Transform263.DEF = "Start";
Transform263.translation = new SFVec3f(new float[0.542512,0.108429,-0.320894]);
Transform263.rotation = new SFRotation(new float[0,-1,0,0.396593]);
Transform263.scale = new SFVec3f(new float[0.338847,0.628092,0.0127777]);
TouchSensor TouchSensor264 = createNode("TouchSensor");
TouchSensor264.DEF = "_43";
Transform263.children = new MFNode();

Transform263.children[0] = TouchSensor264;

Transform Transform265 = createNode("Transform");
Script Script266 = createNode("Script");
Script266.DEF = "_startScript1";
field field267 = createNode("field");
field267.name = "enabled_changed";
field267.accessType = "outputOnly";
field267.type = "SFBool";
Script266.field = new MFNode();

Script266.field[0] = field267;

field field268 = createNode("field");
field268.name = "touchTime";
field268.accessType = "inputOnly";
field268.type = "SFTime";
Script266.field[1] = field268;

field field269 = createNode("field");
field269.name = "set_isActive";
field269.accessType = "inputOnly";
field269.type = "SFBool";
Script266.field[2] = field269;


Script266.setSourceCode(`vrmlscript:\n"+
"function touchTime(value, time)\n"+
"{\n"+
"	enabled_changed = FALSE;\n"+
"}\n"+
"\n"+
"function set_isActive(value, time)\n"+
"{\n"+
"	if (!value) enabled_changed = TRUE;\n"+
"}`)
Transform265.children = new MFNode();

Transform265.children[0] = Script266;

Transform263.children[1] = Transform265;

Transform Transform270 = createNode("Transform");
Transform270.translation = new SFVec3f(new float[-1.11097,-0.172632,39.5648]);
Transform270.rotation = new SFRotation(new float[0,1,0,0.396587]);
Transform270.scale = new SFVec3f(new float[2.95117,1.59212,78.2613]);
Transform270.scaleOrientation = new SFRotation(new float[0,-1,0,0.396593]);
Transform Transform271 = createNode("Transform");
Transform271.translation = new SFVec3f(new float[-0.260422,-0.000106432,3.68655e-8]);
Transform271.rotation = new SFRotation(new float[-1.41567e-7,0.00000157708,-1,0.179044]);
Transform271.scale = new SFVec3f(new float[0.999999,0.999999,0.999997]);
Transform271.scaleOrientation = new SFRotation(new float[-1.14302e-7,2.51346e-7,1,0.491397]);
Transform271.center = new SFVec3f(new float[0.130211,0.0369848,2.27391e-8]);
Shape Shape272 = createNode("Shape");
Appearance Appearance273 = createNode("Appearance");
ImageTexture ImageTexture274 = createNode("ImageTexture");
ImageTexture274.DEF = "_44";
ImageTexture274.url = new MFString(new java.lang.String["schachtel.png"]);
Appearance273.texture = ImageTexture274;

TextureTransform TextureTransform275 = createNode("TextureTransform");
TextureTransform275.scale = new SFVec2f(new float[17.6626,1]);
Appearance273.textureTransform = TextureTransform275;

Shape272.appearance = Appearance273;

IndexedFaceSet IndexedFaceSet276 = createNode("IndexedFaceSet");
IndexedFaceSet276.solid = False;
IndexedFaceSet276.creaseAngle = 0.5;
IndexedFaceSet276.colorIndex = new MFInt32(new int[6,0,0,6,-1,6,0,0,6,-1,2,2,2,2,-1,1,1,2,2,1,-1,1,2,2,1,-1,2,2,1,1,-1,1,1,2,2,1,-1,3,5,0,-1,3,0,0,-1,5,3,0,-1,0,0,3,-1,5,4,0,-1,0,0,4,-1,4,5,0,-1,4,0,0,-1,0,0,0,0,-1,0,0,0,0,-1]);
IndexedFaceSet276.texCoordIndex = new MFInt32(new int[31,26,27,28,-1,34,35,36,37,-1,4,5,6,7,-1,10,16,17,18,19,-1,28,29,30,31,-1,32,33,34,37,-1,13,23,20,21,24,-1,8,16,10,-1,8,15,16,-1,19,8,10,-1,19,14,8,-1,24,11,13,-1,39,25,40,-1,11,23,13,-1,40,22,38,-1,9,12,3,2,-1,9,0,1,12,-1]);
IndexedFaceSet276.coordIndex = new MFInt32(new int[6,7,1,0,-1,2,3,5,4,-1,8,10,11,9,-1,13,2,8,9,0,-1,0,9,11,6,-1,10,8,2,4,-1,15,6,11,10,4,-1,12,2,13,-1,12,3,2,-1,0,12,13,-1,0,1,12,-1,4,14,15,-1,4,5,14,-1,14,6,15,-1,14,7,6,-1,12,14,5,3,-1,12,1,7,14,-1]);
Color Color277 = createNode("Color");
Color277.color = new MFColor(new float[1,0.788543,0.595808,1,0.98362,0.80312,0.417112,0.41028,0.334991,0.55615,0.276699,0.10971,0.71123,0.353855,0.140302,0.395722,0.312044,0.235774,0.86631,0.631408,0.466192]);
IndexedFaceSet276.color = Color277;

TextureCoordinate TextureCoordinate278 = createNode("TextureCoordinate");
TextureCoordinate278.point = new MFVec2f(new float[0,1,0,0,1,1,1,0,1,1,1,0,0,0,0,1,0.5,0,0.5,1,0.5,0.330716,0.5,0,0.5,0,0.5,0.330716,0.116626,0,0.883374,0,1,0.330716,0.871362,0.0051813,0.128638,0.0051813,0,0.330716,0.128638,0.0051813,0.871362,0.0051813,0.116626,0,0,0.330716,1,0.330716,0.883374,0,0.883374,0,0.116626,0,0,0.330716,0.128638,0.0051813,0.871362,0.0051813,1,0.330716,0.871362,0.0051813,0.128638,0.0051813,0,0.330716,0.116626,0,0.883374,0,1,0.330716,0,0.330716,1,0.330716,0.5,0]);
IndexedFaceSet276.texCoord = TextureCoordinate278;

Coordinate Coordinate279 = createNode("Coordinate");
Coordinate279.point = new MFVec3f(new float[-0.130421,0.0369099,0.130421,-0.1,-0.0493546,0.1,0.130421,0.0369099,0.130421,0.1,-0.0493546,0.1,0.130421,0.0369099,-0.130421,0.1,-0.0493546,-0.1,-0.130421,0.0369099,-0.130421,-0.1,-0.0493546,-0.1,0.0968668,-0.0480031,0.0968668,-0.0968668,-0.0480031,0.0968668,0.0968668,-0.0480031,-0.0968668,-0.0968668,-0.0480031,-0.0968668,0,-0.0493546,0.1,1.49012e-8,0.0369099,0.130421,0,-0.0493546,-0.1,-1.49012e-8,0.0369099,-0.130421]);
IndexedFaceSet276.coord = Coordinate279;

Shape272.geometry = IndexedFaceSet276;

Transform271.child = new undefined();

Transform271.child[0] = Shape272;

Transform270.children = new MFNode();

Transform270.children[0] = Transform271;

Transform Transform280 = createNode("Transform");
Transform280.DEF = "schachtel";
Shape Shape281 = createNode("Shape");
Appearance Appearance282 = createNode("Appearance");
ImageTexture ImageTexture283 = createNode("ImageTexture");
ImageTexture283.USE = "_44";
Appearance282.texture = ImageTexture283;

TextureTransform TextureTransform284 = createNode("TextureTransform");
TextureTransform284.scale = new SFVec2f(new float[17.6626,1]);
Appearance282.textureTransform = TextureTransform284;

Shape281.appearance = Appearance282;

IndexedFaceSet IndexedFaceSet285 = createNode("IndexedFaceSet");
IndexedFaceSet285.solid = False;
IndexedFaceSet285.creaseAngle = 0.5;
IndexedFaceSet285.colorIndex = new MFInt32(new int[0,3,4,0,-1,0,5,4,0,-1,2,2,2,2,-1,1,1,2,2,1,-1,1,2,2,1,-1,2,2,1,1,-1,1,1,2,2,1,-1,3,6,0,-1,3,3,0,-1,6,3,0,-1,0,3,3,-1,6,5,0,-1,0,5,5,-1,5,6,0,-1,5,5,0,-1,7,7,7,7,-1,7,7,7,7,-1]);
IndexedFaceSet285.texCoordIndex = new MFInt32(new int[31,26,27,28,-1,34,35,36,37,-1,4,5,6,7,-1,10,16,17,18,19,-1,28,29,30,31,-1,32,33,34,37,-1,13,23,20,21,24,-1,8,16,10,-1,8,15,16,-1,19,8,10,-1,19,14,8,-1,24,11,13,-1,39,25,40,-1,11,23,13,-1,40,22,38,-1,9,12,3,2,-1,9,0,1,12,-1]);
IndexedFaceSet285.coordIndex = new MFInt32(new int[6,7,1,0,-1,2,3,5,4,-1,8,10,11,9,-1,13,2,8,9,0,-1,0,9,11,6,-1,10,8,2,4,-1,15,6,11,10,4,-1,12,2,13,-1,12,3,2,-1,0,12,13,-1,0,1,12,-1,4,14,15,-1,4,5,14,-1,14,6,15,-1,14,7,6,-1,12,14,5,3,-1,12,1,7,14,-1]);
Color Color286 = createNode("Color");
Color286.color = new MFColor(new float[1,0.788543,0.595808,1,0.98362,0.80312,0.417112,0.41028,0.334991,0.55615,0.276699,0.10971,0.513369,0.285496,0.18082,0.71123,0.353855,0.140302,0.395722,0.312044,0.235774,0.224599,0.177106,0.133818]);
IndexedFaceSet285.color = Color286;

TextureCoordinate TextureCoordinate287 = createNode("TextureCoordinate");
TextureCoordinate287.point = new MFVec2f(new float[0,1,0,0,1,1,1,0,1,1,1,0,0,0,0,1,0.5,0,0.5,1,0.5,0.330716,0.5,0,0.5,0,0.5,0.330716,0.116626,0,0.883374,0,1,0.330716,0.871362,0.0051813,0.128638,0.0051813,0,0.330716,0.128638,0.0051813,0.871362,0.0051813,0.116626,0,0,0.330716,1,0.330716,0.883374,0,0.883374,0,0.116626,0,0,0.330716,0.128638,0.0051813,0.871362,0.0051813,1,0.330716,0.871362,0.0051813,0.128638,0.0051813,0,0.330716,0.116626,0,0.883374,0,1,0.330716,0,0.330716,1,0.330716,0.5,0]);
IndexedFaceSet285.texCoord = TextureCoordinate287;

Coordinate Coordinate288 = createNode("Coordinate");
Coordinate288.point = new MFVec3f(new float[-0.130421,0.0369099,0.130421,-0.1,-0.0493546,0.1,0.130421,0.0369099,0.130421,0.1,-0.0493546,0.1,0.130421,0.0369099,-0.130421,0.1,-0.0493546,-0.1,-0.130421,0.0369099,-0.130421,-0.1,-0.0493546,-0.1,0.0968668,-0.0480031,0.0968668,-0.0968668,-0.0480031,0.0968668,0.0968668,-0.0480031,-0.0968668,-0.0968668,-0.0480031,-0.0968668,0,-0.0493546,0.1,1.49012e-8,0.0369099,0.130421,0,-0.0493546,-0.1,-1.49012e-8,0.0369099,-0.130421]);
IndexedFaceSet285.coord = Coordinate288;

Shape281.geometry = IndexedFaceSet285;

Transform280.child = new undefined();

Transform280.child[0] = Shape281;

Transform270.children[1] = Transform280;

Transform263.children[2] = Transform270;

children[10] = Transform263;

Transform Transform289 = createNode("Transform");
Transform289.DEF = "_45";
Transform289.translation = new SFVec3f(new float[-0.675162,0.333213,-0.0145988]);
Group Group290 = createNode("Group");
Group Group291 = createNode("Group");
Group291.DEF = "UnnamedAnimation1";
TimeSensor TimeSensor292 = createNode("TimeSensor");
TimeSensor292.DEF = "Time_2";
TimeSensor292.cycleInterval = 10;
TimeSensor292.stopTime = 1;
Group291.children = new MFNode();

Group291.children[0] = TimeSensor292;

Group290.children = new MFNode();

Group290.children[0] = Group291;

PositionInterpolator PositionInterpolator293 = createNode("PositionInterpolator");
PositionInterpolator293.DEF = "UnnamedShapeTranslationInterp";
PositionInterpolator293.key = new MFFloat(new float[0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.839999,0.849999,0.859999,0.869999,0.879999,0.889999,0.899999,0.909999,0.919999,0.929999,0.939999,0.949999,0.959999,0.969999,0.979999,0.989999,1]);
PositionInterpolator293.keyValue = new MFVec3f(new float[-0.675162,0.333213,-0.0145988,-0.659679,0.335113,-0.0299462,-0.644196,0.337013,-0.0452936,-0.628714,0.338913,-0.060641,-0.613231,0.340813,-0.0759884,-0.597748,0.342713,-0.0913359,-0.582265,0.344613,-0.106683,-0.566782,0.346513,-0.122031,-0.5513,0.348413,-0.137378,-0.535817,0.350313,-0.152725,-0.520334,0.352213,-0.168073,-0.504851,0.354113,-0.18342,-0.489368,0.356013,-0.198768,-0.473885,0.357913,-0.214115,-0.458403,0.359813,-0.229463,-0.44292,0.361713,-0.24481,-0.427437,0.363613,-0.260157,-0.411954,0.365514,-0.275505,-0.396471,0.367414,-0.290852,-0.380989,0.369314,-0.3062,-0.365506,0.371214,-0.321547,-0.350023,0.373114,-0.336894,-0.33454,0.375014,-0.352242,-0.319057,0.376914,-0.367589,-0.303575,0.378814,-0.382937,-0.288092,0.380714,-0.398284,-0.272609,0.382614,-0.413632,-0.257126,0.384514,-0.428979,-0.241643,0.386414,-0.444326,-0.226161,0.388314,-0.459674,-0.210678,0.390214,-0.475021,-0.195195,0.392114,-0.490369,-0.179712,0.394014,-0.505716,-0.164229,0.395914,-0.521063,-0.148747,0.397814,-0.536411,-0.133264,0.399714,-0.551758,-0.117781,0.401614,-0.567106,-0.102298,0.403514,-0.582453,-0.0868154,0.405414,-0.5978,-0.0713326,0.407314,-0.613148,-0.0558498,0.409214,-0.628495,-0.040367,0.411114,-0.643843,-0.0248842,0.413014,-0.65919,-0.00940141,0.414914,-0.674537,0.00608136,0.416814,-0.689885,0.0215642,0.418714,-0.705232,0.037047,0.420614,-0.72058,0.0525298,0.422514,-0.735927,0.0680126,0.424414,-0.751274,0.0834954,0.426314,-0.766622,0.0989782,0.428214,-0.781969,0.114461,0.430115,-0.797317,0.129944,0.432015,-0.812664,0.145427,0.433915,-0.828011,0.160909,0.435815,-0.843359,0.176392,0.437715,-0.858706,0.191875,0.439615,-0.874053,0.207358,0.441515,-0.889401,0.222841,0.443415,-0.904748,0.238323,0.445315,-0.920096,0.253806,0.447215,-0.935443,0.269289,0.449115,-0.95079,0.284772,0.451015,-0.966138,0.300255,0.452915,-0.981485,0.315737,0.454815,-0.996833,0.33122,0.456715,-1.01218,0.346703,0.458615,-1.02753,0.362186,0.460515,-1.04287,0.377669,0.462415,-1.05822,0.393151,0.464315,-1.07357,0.408634,0.466215,-1.08892,0.424117,0.468115,-1.10426,0.4396,0.470015,-1.11961,0.455083,0.471915,-1.13496,0.470565,0.473815,-1.15031,0.486048,0.475715,-1.16565,0.501531,0.477615,-1.181,0.517014,0.479515,-1.19635,0.532496,0.481415,-1.2117,0.547979,0.483315,-1.22704,0.563462,0.485215,-1.24239,0.578945,0.487115,-1.25774,0.594428,0.489015,-1.27309,0.609911,0.490915,-1.28843,0.625393,0.492815,-1.30378,0.640876,0.494716,-1.31913,0.656359,0.496616,-1.33448,0.671842,0.498516,-1.34982,0.687324,0.500416,-1.36517,0.702807,0.502316,-1.38052,0.71829,0.504216,-1.39587,0.733773,0.506116,-1.41121,0.749256,0.508016,-1.42656,0.764738,0.509916,-1.44191,0.780221,0.511816,-1.45725,0.795704,0.513716,-1.4726,0.811187,0.515616,-1.48795,0.826669,0.517516,-1.5033,0.842152,0.519416,-1.51864,0.857635,0.521316,-1.53399,0.873119,0.523216,-1.54934]);
Group290.children[1] = PositionInterpolator293;

OrientationInterpolator OrientationInterpolator294 = createNode("OrientationInterpolator");
OrientationInterpolator294.DEF = "UnnamedShapeRotationInterp";
OrientationInterpolator294.key = new MFFloat(new float[0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.61,0.62,0.63,0.64,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.839999,0.849999,0.859999,0.869999,0.879999,0.889999,0.899999,0.909999,0.919999,0.929999,0.939999,0.949999,0.959999,0.969999,0.979999,0.989999,1]);
OrientationInterpolator294.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,0.00396682,0,1,0,0.00828641,0,1,0,0.0127515,0,1,0,0.0174283,0,1,0,0.0223547,0,1,0,0.0274831,0,1,0,0.0328062,0,1,0,0.0383423,0,1,0,0.0440654,0,1,0,0.0499876,0,1,0,0.0560926,0,1,0,0.0623803,0,1,0,0.0688493,0,1,0,0.0754909,0,1,0,0.0822982,0,1,0,0.0892735,0,1,0,0.096405,0,1,0,0.103693,0,1,0,0.11113,0,1,0,0.118713,0,1,0,0.126436,0,1,0,0.134295,0,1,0,0.142287,0,1,0,0.150404,0,1,0,0.158642,0,1,0,0.166998,0,1,0,0.175467,0,1,0,0.184043,0,1,0,0.192721,0,1,0,0.2015,0,1,0,0.21037,0,1,0,0.219329,0,1,0,0.228377,0,1,0,0.237499,0,1,0,0.246701,0,1,0,0.255971,0,1,0,0.265306,0,1,0,0.274702,0,1,0,0.284153,0,1,0,0.293659,0,1,0,0.30321,0,1,0,0.312803,0,1,0,0.322433,0,1,0,0.332097,0,1,0,0.341788,0,1,0,0.351503,0,1,0,0.361236,0,1,0,0.370984,0,1,0,0.380742,0,1,0,0.390503,0,1,0,0.400265,0,1,0,0.410021,0,1,0,0.41977,0,1,0,0.429504,0,1,0,0.439219,0,1,0,0.44891,0,1,0,0.458574,0,1,0,0.468204,0,1,0,0.477797,0,1,0,0.487348,0,1,0,0.496852,0,1,0,0.506305,0,1,0,0.515701,0,1,0,0.525036,0,1,0,0.534306,0,1,0,0.543506,0,1,0,0.55263,0,1,0,0.561675,0,1,0,0.570636,0,1,0,0.579507,0,1,0,0.588285,0,1,0,0.596964,0,1,0,0.60554,0,1,0,0.614009,0,1,0,0.622365,0,1,0,0.630603,0,1,0,0.63872,0,1,0,0.646711,0,1,0,0.65457,0,1,0,0.662293,0,1,0,0.669876,0,1,0,0.677314,0,1,0,0.684602,0,1,0,0.691734,0,1,0,0.698708,0,1,0,0.705518,0,1,0,0.712159,0,1,0,0.718626,0,1,0,0.724916,0,1,0,0.731022,0,1,0,0.736941,0,1,0,0.742669,0,1,0,0.748199,0,1,0,0.753528,0,1,0,0.75865,0,1,0,0.763562,0,1,0,0.768258,0,1,0,0.772734,0,1,0,0.776985,0,1,0,0.781007]);
Group290.children[2] = OrientationInterpolator294;

Transform289.children = new MFNode();

Transform289.children[0] = Group290;

Shape Shape295 = createNode("Shape");
Appearance Appearance296 = createNode("Appearance");
Material Material297 = createNode("Material");
Material297.transparency = 1;
Appearance296.material = Material297;

Shape295.appearance = Appearance296;

Sphere Sphere298 = createNode("Sphere");
Sphere298.radius = 0.1;
Shape295.geometry = Sphere298;

Transform289.child[1] = Shape295;

children[11] = Transform289;

Transform Transform299 = createNode("Transform");
Transform299.DEF = "CountDown";
Transform299.translation = new SFVec3f(new float[0.00833526,-0.00948841,-0.343501]);
Transform299.scale = new SFVec3f(new float[0.519235,0.519235,0.519232]);
Transform Transform300 = createNode("Transform");
ProtoInstance ProtoInstance301 = createNode("ProtoInstance");
ProtoInstance301.name = "Time2MFString";
ProtoInstance301.DEF = "_46";
Transform300.children = new MFNode();

Transform300.children[0] = ProtoInstance301;

Transform299.children = new MFNode();

Transform299.children[0] = Transform300;

Transform Transform302 = createNode("Transform");
Transform302.DEF = "Text";
Transform Transform303 = createNode("Transform");
Transform303.translation = new SFVec3f(new float[0.639952,0.0880508,-0.129051]);
Transform303.rotation = new SFRotation(new float[0,-1,0,0.396598]);
Transform303.scale = new SFVec3f(new float[0.00482908,0.00483075,0.00482914]);
Shape Shape304 = createNode("Shape");
Appearance Appearance305 = createNode("Appearance");
Material Material306 = createNode("Material");
Material306.ambientIntensity = 0;
Material306.diffuseColor = new SFColor(new float[0,0,0]);
Material306.emissiveColor = new SFColor(new float[1,0.948679,0]);
Material306.shininess = 0;
Appearance305.material = Material306;

Shape304.appearance = Appearance305;

Text Text307 = createNode("Text");
Text307.DEF = "_47";
Text307.string = new MFString(new java.lang.String["00.00.0000"]);
Text307.length = new MFFloat(new float[0]);
FontStyle FontStyle308 = createNode("FontStyle");
FontStyle308.family = new MFString(new java.lang.String["SANS"]);
FontStyle308.size = 32;
Text307.fontStyle = FontStyle308;

Shape304.geometry = Text307;

Transform303.child = new undefined();

Transform303.child[0] = Shape304;

Transform302.children = new MFNode();

Transform302.children[0] = Transform303;

Transform299.children[1] = Transform302;

children[12] = Transform299;

Transform Transform309 = createNode("Transform");
Transform309.DEF = "wall";
Transform309.translation = new SFVec3f(new float[-0.0332103,0.298023,-0.517569]);
Transform309.rotation = new SFRotation(new float[0,1,0,1.5708]);
Transform309.scale = new SFVec3f(new float[0.995101,3.44686,7.4658]);
Shape Shape310 = createNode("Shape");
Appearance Appearance311 = createNode("Appearance");
ImageTexture ImageTexture312 = createNode("ImageTexture");
ImageTexture312.url = new MFString(new java.lang.String["mcdo-gamebg.jpg"]);
Appearance311.texture = ImageTexture312;

Shape310.appearance = Appearance311;

IndexedFaceSet IndexedFaceSet313 = createNode("IndexedFaceSet");
IndexedFaceSet313.creaseAngle = 0.5;
IndexedFaceSet313.texCoordIndex = new MFInt32(new int[0,1,3,2,-1,0,1,3,2,-1,4,11,9,6,-1,11,3,2,9,-1,0,1,13,15,-1,13,4,6,15,-1,16,23,21,18,-1,23,3,2,21,-1,0,1,25,27,-1,25,16,18,27,-1,7,8,26,19,-1,8,1,3,26,-1,0,14,20,2,-1,14,7,19,20,-1,0,10,24,2,-1,10,5,17,24,-1,5,12,22,17,-1,12,1,3,22,-1]);
IndexedFaceSet313.coordIndex = new MFInt32(new int[0,1,3,2,-1,4,5,7,6,-1,8,11,10,9,-1,11,1,0,10,-1,6,7,12,13,-1,12,8,9,13,-1,14,17,16,15,-1,17,5,4,16,-1,2,3,18,19,-1,18,14,15,19,-1,9,10,19,15,-1,10,0,2,19,-1,6,13,16,4,-1,13,9,15,16,-1,1,11,18,3,-1,11,8,14,18,-1,8,12,17,14,-1,12,7,5,17,-1]);
TextureCoordinate TextureCoordinate314 = createNode("TextureCoordinate");
TextureCoordinate314.point = new MFVec2f(new float[0,1,0,0,1,1,1,0,0.5,0,0,0.5,0.5,1,0,0.5,0,0.25,0.75,1,0,0.75,0.75,0,0,0.25,0.25,0,0,0.75,0.25,1,0.5,0,1,0.5,0.5,1,1,0.5,1,0.75,0.75,1,1,0.25,0.75,0,1,0.75,0.25,0,1,0.25,0.25,1]);
IndexedFaceSet313.texCoord = TextureCoordinate314;

Coordinate Coordinate315 = createNode("Coordinate");
Coordinate315.point = new MFVec3f(new float[-0.2571,0.083921,0.1,-0.2571,-0.1,0.1,-0.213168,0.083921,0.1,-0.213168,-0.1,0.1,-0.213168,0.083921,-0.1,-0.213168,-0.1,-0.1,-0.2571,0.083921,-0.1,-0.2571,-0.1,-0.1,-0.1,-0.1,0,-0.1,0.083921,0,-0.1,0.083921,0.05,-0.1,-0.1,0.05,-0.1,-0.1,-0.05,-0.1,0.083921,-0.05,-0.0560677,-0.1,0,-0.0560677,0.083921,0,-0.0560677,0.083921,-0.05,-0.0560677,-0.1,-0.05,-0.0560677,-0.1,0.05,-0.0560677,0.083921,0.05]);
IndexedFaceSet313.coord = Coordinate315;

Shape310.geometry = IndexedFaceSet313;

Transform309.child = new undefined();

Transform309.child[0] = Shape310;

children[13] = Transform309;

Transform Transform316 = createNode("Transform");
Transform316.translation = new SFVec3f(new float[-0.196236,0.278834,-0.40384]);
Transform316.scale = new SFVec3f(new float[0.00229198,0.00229198,0.00229197]);
Shape Shape317 = createNode("Shape");
Appearance Appearance318 = createNode("Appearance");
Material Material319 = createNode("Material");
Material319.ambientIntensity = 0;
Material319.diffuseColor = new SFColor(new float[0,0,0]);
Material319.shininess = 0;
Appearance318.material = Material319;

Shape317.appearance = Appearance318;

Text Text320 = createNode("Text");
Text320.string = new MFString(new java.lang.String["Try to make a ..."]);
Text320.length = new MFFloat(new float[0]);
FontStyle FontStyle321 = createNode("FontStyle");
FontStyle321.family = new MFString(new java.lang.String["SANS"]);
FontStyle321.size = 24;
Text320.fontStyle = FontStyle321;

Shape317.geometry = Text320;

Transform316.child = new undefined();

Transform316.child[0] = Shape317;

children[14] = Transform316;

Transform Transform322 = createNode("Transform");
Transform322.translation = new SFVec3f(new float[-0.33698,0.202612,-0.403483]);
Transform322.scale = new SFVec3f(new float[0.00229198,0.00229198,0.00229197]);
Shape Shape323 = createNode("Shape");
Appearance Appearance324 = createNode("Appearance");
Material Material325 = createNode("Material");
Material325.ambientIntensity = 0;
Material325.diffuseColor = new SFColor(new float[0,0,0]);
Material325.emissiveColor = new SFColor(new float[0.970624,1,0]);
Material325.shininess = 0;
Appearance324.material = Material325;

Shape323.appearance = Appearance324;

Text Text326 = createNode("Text");
Text326.string = new MFString(new java.lang.String["Double Cheese!!"]);
Text326.length = new MFFloat(new float[0]);
FontStyle FontStyle327 = createNode("FontStyle");
FontStyle327.family = new MFString(new java.lang.String["SANS"]);
FontStyle327.style = "BOLD";
FontStyle327.size = 36;
Text326.fontStyle = FontStyle327;

Shape323.geometry = Text326;

Transform322.child = new undefined();

Transform322.child[0] = Shape323;

children[15] = Transform322;

Transform Transform328 = createNode("Transform");
Transform328.translation = new SFVec3f(new float[-0.340403,0.197661,-0.407789]);
Transform328.scale = new SFVec3f(new float[0.00229198,0.00229198,0.00229197]);
Shape Shape329 = createNode("Shape");
Appearance Appearance330 = createNode("Appearance");
Material Material331 = createNode("Material");
Material331.ambientIntensity = 0;
Material331.diffuseColor = new SFColor(new float[0,0,0]);
Material331.shininess = 0;
Appearance330.material = Material331;

Shape329.appearance = Appearance330;

Text Text332 = createNode("Text");
Text332.string = new MFString(new java.lang.String["Double Cheese!!"]);
Text332.length = new MFFloat(new float[0]);
FontStyle FontStyle333 = createNode("FontStyle");
FontStyle333.family = new MFString(new java.lang.String["SANS"]);
FontStyle333.style = "BOLD";
FontStyle333.size = 36;
Text332.fontStyle = FontStyle333;

Shape329.geometry = Text332;

Transform328.child = new undefined();

Transform328.child[0] = Shape329;

children[16] = Transform328;

Transform Transform334 = createNode("Transform");
Transform334.translation = new SFVec3f(new float[0.402111,0.112231,-0.376213]);
Transform334.rotation = new SFRotation(new float[0,-1,0,0.396595]);
Transform334.scale = new SFVec3f(new float[0.00229198,0.00229198,0.00229197]);
Shape Shape335 = createNode("Shape");
Appearance Appearance336 = createNode("Appearance");
Material Material337 = createNode("Material");
Material337.ambientIntensity = 0;
Material337.diffuseColor = new SFColor(new float[0,0,0]);
Material337.emissiveColor = new SFColor(new float[1,0.593642,0]);
Material337.shininess = 0;
Appearance336.material = Material337;

Shape335.appearance = Appearance336;

Text Text338 = createNode("Text");
Text338.string = new MFString(new java.lang.String["Your Time:"]);
Text338.length = new MFFloat(new float[0]);
FontStyle FontStyle339 = createNode("FontStyle");
FontStyle339.family = new MFString(new java.lang.String["SANS"]);
FontStyle339.size = 24;
Text338.fontStyle = FontStyle339;

Shape335.geometry = Text338;

Transform334.child = new undefined();

Transform334.child[0] = Shape335;

children[17] = Transform334;

Transform Transform340 = createNode("Transform");
Transform340.translation = new SFVec3f(new float[-0.0687079,0.243796,-0.402365]);
Transform340.rotation = new SFRotation(new float[0,0,-1,0.473312]);
Transform340.scale = new SFVec3f(new float[0.324685,0.324685,0.324687]);
Shape Shape341 = createNode("Shape");
Appearance Appearance342 = createNode("Appearance");
ImageTexture ImageTexture343 = createNode("ImageTexture");
ImageTexture343.url = new MFString(new java.lang.String["light10.png"]);
Appearance342.texture = ImageTexture343;

Shape341.appearance = Appearance342;

IndexedFaceSet IndexedFaceSet344 = createNode("IndexedFaceSet");
IndexedFaceSet344.solid = False;
IndexedFaceSet344.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate345 = createNode("TextureCoordinate");
TextureCoordinate345.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet344.texCoord = TextureCoordinate345;

Coordinate Coordinate346 = createNode("Coordinate");
Coordinate346.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet344.coord = Coordinate346;

Shape341.geometry = IndexedFaceSet344;

Transform340.child = new undefined();

Transform340.child[0] = Shape341;

children[18] = Transform340;

Transform Transform347 = createNode("Transform");
Transform347.translation = new SFVec3f(new float[-0.0832266,0.286534,-0.512485]);
Transform347.rotation = new SFRotation(new float[0,1,0,1.5708]);
Transform347.scale = new SFVec3f(new float[1,3.46383,10.7113]);
Shape Shape348 = createNode("Shape");
Appearance Appearance349 = createNode("Appearance");
ImageTexture ImageTexture350 = createNode("ImageTexture");
ImageTexture350.url = new MFString(new java.lang.String["screen-ti.png"]);
Appearance349.texture = ImageTexture350;

Shape348.appearance = Appearance349;

IndexedFaceSet IndexedFaceSet351 = createNode("IndexedFaceSet");
IndexedFaceSet351.creaseAngle = 0.5;
IndexedFaceSet351.texCoordIndex = new MFInt32(new int[0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1]);
IndexedFaceSet351.coordIndex = new MFInt32(new int[0,1,2,3,-1,0,4,5,1,-1,3,6,4,0,-1,1,5,7,2,-1,5,4,6,7,-1,2,7,6,3,-1]);
TextureCoordinate TextureCoordinate352 = createNode("TextureCoordinate");
TextureCoordinate352.point = new MFVec2f(new float[0,1,0,0,1,0,1,1]);
IndexedFaceSet351.texCoord = TextureCoordinate352;

Coordinate Coordinate353 = createNode("Coordinate");
Coordinate353.point = new MFVec3f(new float[-0.20809,-0.0969703,-0.0424187,-0.816703,-0.0969703,-0.042419,-0.816705,-0.0969703,0.052112,-0.208092,-0.0969703,0.0521123,-0.20809,-0.103093,-0.0424187,-0.816703,-0.103093,-0.042419,-0.208092,-0.103093,0.0521123,-0.816705,-0.103093,0.052112]);
IndexedFaceSet351.coord = Coordinate353;

Shape348.geometry = IndexedFaceSet351;

Transform347.child = new undefined();

Transform347.child[0] = Shape348;

children[19] = Transform347;

Transform Transform354 = createNode("Transform");
Transform354.translation = new SFVec3f(new float[-0.341186,0.129881,-0.40384]);
Transform354.scale = new SFVec3f(new float[0.00229198,0.00229198,0.00229197]);
Shape Shape355 = createNode("Shape");
Appearance Appearance356 = createNode("Appearance");
Material Material357 = createNode("Material");
Material357.ambientIntensity = 0;
Material357.diffuseColor = new SFColor(new float[0,0,0]);
Material357.shininess = 0;
Appearance356.material = Material357;

Shape355.appearance = Appearance356;

Text Text358 = createNode("Text");
Text358.string = new MFString(new java.lang.String["Click the lunchbox to start!"]);
Text358.length = new MFFloat(new float[0]);
FontStyle FontStyle359 = createNode("FontStyle");
FontStyle359.family = new MFString(new java.lang.String["SANS"]);
FontStyle359.size = 24;
Text358.fontStyle = FontStyle359;

Shape355.geometry = Text358;

Transform354.child = new undefined();

Transform354.child[0] = Shape355;

children[20] = Transform354;

Transform Transform360 = createNode("Transform");
Transform360.translation = new SFVec3f(new float[0.549948,0.0697712,-0.32854]);
Transform360.rotation = new SFRotation(new float[0,-1,0,0.396596]);
Transform360.scale = new SFVec3f(new float[0.652067,0.398789,0.303624]);
Shape Shape361 = createNode("Shape");
Appearance Appearance362 = createNode("Appearance");
ImageTexture ImageTexture363 = createNode("ImageTexture");
ImageTexture363.url = new MFString(new java.lang.String["shadow.png"]);
Appearance362.texture = ImageTexture363;

Shape361.appearance = Appearance362;

IndexedFaceSet IndexedFaceSet364 = createNode("IndexedFaceSet");
IndexedFaceSet364.solid = False;
IndexedFaceSet364.coordIndex = new MFInt32(new int[3,1,0,2,-1]);
TextureCoordinate TextureCoordinate365 = createNode("TextureCoordinate");
TextureCoordinate365.point = new MFVec2f(new float[0.142293,1,0.778075,1,0.142293,0.210153,0.778075,0.210153]);
IndexedFaceSet364.texCoord = TextureCoordinate365;

Coordinate Coordinate366 = createNode("Coordinate");
Coordinate366.point = new MFVec3f(new float[-0.357707,0.5,0,0.278075,0.5,0,-0.357707,-0.289847,0,0.278075,-0.289847,0]);
IndexedFaceSet364.coord = Coordinate366;

Shape361.geometry = IndexedFaceSet364;

Transform360.child = new undefined();

Transform360.child[0] = Shape361;

children[21] = Transform360;

Transform Transform367 = createNode("Transform");
Transform367.translation = new SFVec3f(new float[-0.315984,0.0143082,-0.408126]);
Transform367.scale = new SFVec3f(new float[0.00229198,0.00229198,0.00229197]);
Shape Shape368 = createNode("Shape");
Appearance Appearance369 = createNode("Appearance");
Material Material370 = createNode("Material");
Material370.ambientIntensity = 0;
Material370.diffuseColor = new SFColor(new float[0,0,0]);
Material370.emissiveColor = new SFColor(new float[1,0.536596,0]);
Material370.shininess = 0;
Appearance369.material = Material370;

Shape368.appearance = Appearance369;

Text Text371 = createNode("Text");
Text371.string = new MFString(new java.lang.String["WIN $1000!"]);
Text371.length = new MFFloat(new float[0]);
FontStyle FontStyle372 = createNode("FontStyle");
FontStyle372.family = new MFString(new java.lang.String["SANS"]);
FontStyle372.style = "BOLD";
FontStyle372.size = 48;
Text371.fontStyle = FontStyle372;

Shape368.geometry = Text371;

Transform367.child = new undefined();

Transform367.child[0] = Shape368;

children[22] = Transform367;

Transform Transform373 = createNode("Transform");
Transform373.translation = new SFVec3f(new float[-0.325598,0.00423908,-0.41315]);
Transform373.scale = new SFVec3f(new float[0.00229198,0.00229198,0.00229197]);
Shape Shape374 = createNode("Shape");
Appearance Appearance375 = createNode("Appearance");
Material Material376 = createNode("Material");
Material376.ambientIntensity = 0;
Material376.diffuseColor = new SFColor(new float[0,0,0]);
Material376.shininess = 0;
Appearance375.material = Material376;

Shape374.appearance = Appearance375;

Text Text377 = createNode("Text");
Text377.string = new MFString(new java.lang.String["WIN $1000!"]);
Text377.length = new MFFloat(new float[0]);
FontStyle FontStyle378 = createNode("FontStyle");
FontStyle378.family = new MFString(new java.lang.String["SANS"]);
FontStyle378.style = "BOLD";
FontStyle378.size = 48;
Text377.fontStyle = FontStyle378;

Shape374.geometry = Text377;

Transform373.child = new undefined();

Transform373.child[0] = Shape374;

children[23] = Transform373;

ROUTE ROUTE379 = createNode("ROUTE");
ROUTE379.fromNode = "enterWorldScript";
ROUTE379.fromField = "firstTime";
ROUTE379.toNode = "enterWorldTimeSensor";
ROUTE379.toField = "set_enabled";
children[24] = ROUTE379;

ROUTE ROUTE380 = createNode("ROUTE");
ROUTE380.fromNode = "enterWorldTimeSensor";
ROUTE380.fromField = "time";
ROUTE380.toNode = "enterWorldScript";
ROUTE380.toField = "triggerIn";
children[25] = ROUTE380;

ROUTE ROUTE381 = createNode("ROUTE");
ROUTE381.fromNode = "VP1";
ROUTE381.fromField = "isBound";
ROUTE381.toNode = "_NoNameNavInfo1";
ROUTE381.toField = "set_bind";
children[26] = ROUTE381;

ROUTE ROUTE382 = createNode("ROUTE");
ROUTE382.fromNode = "enterWorldScript";
ROUTE382.fromField = "startTime";
ROUTE382.toNode = "Time_1";
ROUTE382.toField = "set_startTime";
children[27] = ROUTE382;

ROUTE ROUTE383 = createNode("ROUTE");
ROUTE383.fromNode = "Time_1";
ROUTE383.fromField = "fraction_changed";
ROUTE383.toNode = "seg1TranslationInterp";
ROUTE383.toField = "set_fraction";
children[28] = ROUTE383;

ROUTE ROUTE384 = createNode("ROUTE");
ROUTE384.fromNode = "_hamScript1";
ROUTE384.fromField = "enabled_changed";
ROUTE384.toNode = "_1";
ROUTE384.toField = "set_enabled";
children[29] = ROUTE384;

ROUTE ROUTE385 = createNode("ROUTE");
ROUTE385.fromNode = "_10";
ROUTE385.fromField = "whichChoice_changed";
ROUTE385.toNode = "_2";
ROUTE385.toField = "set_whichChoice";
children[30] = ROUTE385;

ROUTE ROUTE386 = createNode("ROUTE");
ROUTE386.fromNode = "_1";
ROUTE386.fromField = "touchTime";
ROUTE386.toNode = "_10";
ROUTE386.toField = "set_touchTime";
children[31] = ROUTE386;

ROUTE ROUTE387 = createNode("ROUTE");
ROUTE387.fromNode = "_hamScript1";
ROUTE387.fromField = "initTime_changed";
ROUTE387.toNode = "_10";
ROUTE387.toField = "set_startTime";
children[32] = ROUTE387;

ROUTE ROUTE388 = createNode("ROUTE");
ROUTE388.fromNode = "_11";
ROUTE388.fromField = "cycleTime";
ROUTE388.toNode = "_10";
ROUTE388.toField = "set_cycleTime";
children[33] = ROUTE388;

ROUTE ROUTE389 = createNode("ROUTE");
ROUTE389.fromNode = "_hamScript1";
ROUTE389.fromField = "whichChoice1_changed";
ROUTE389.toNode = "_10";
ROUTE389.toField = "set_whichChoice";
children[34] = ROUTE389;

ROUTE ROUTE390 = createNode("ROUTE");
ROUTE390.fromNode = "seg1TranslationInterp";
ROUTE390.fromField = "value_changed";
ROUTE390.toNode = "seg1";
ROUTE390.toField = "set_translation";
children[35] = ROUTE390;

ROUTE ROUTE391 = createNode("ROUTE");
ROUTE391.fromNode = "Time_1";
ROUTE391.fromField = "fraction_changed";
ROUTE391.toNode = "seg2TranslationInterp";
ROUTE391.toField = "set_fraction";
children[36] = ROUTE391;

ROUTE ROUTE392 = createNode("ROUTE");
ROUTE392.fromNode = "Time_1";
ROUTE392.fromField = "fraction_changed";
ROUTE392.toNode = "UnnamedSwitchCenterInterp_1";
ROUTE392.toField = "set_fraction";
children[37] = ROUTE392;

ROUTE ROUTE393 = createNode("ROUTE");
ROUTE393.fromNode = "_hamScript1";
ROUTE393.fromField = "enabled_changed";
ROUTE393.toNode = "_13";
ROUTE393.toField = "set_enabled";
children[38] = ROUTE393;

ROUTE ROUTE394 = createNode("ROUTE");
ROUTE394.fromNode = "_15";
ROUTE394.fromField = "whichChoice_changed";
ROUTE394.toNode = "_14";
ROUTE394.toField = "set_whichChoice";
children[39] = ROUTE394;

ROUTE ROUTE395 = createNode("ROUTE");
ROUTE395.fromNode = "_13";
ROUTE395.fromField = "touchTime";
ROUTE395.toNode = "_15";
ROUTE395.toField = "set_touchTime";
children[40] = ROUTE395;

ROUTE ROUTE396 = createNode("ROUTE");
ROUTE396.fromNode = "_10";
ROUTE396.fromField = "initEndTime";
ROUTE396.toNode = "_15";
ROUTE396.toField = "set_startTime";
children[41] = ROUTE396;

ROUTE ROUTE397 = createNode("ROUTE");
ROUTE397.fromNode = "_16";
ROUTE397.fromField = "cycleTime";
ROUTE397.toNode = "_15";
ROUTE397.toField = "set_cycleTime";
children[42] = ROUTE397;

ROUTE ROUTE398 = createNode("ROUTE");
ROUTE398.fromNode = "_hamScript1";
ROUTE398.fromField = "whichChoice2_changed";
ROUTE398.toNode = "_15";
ROUTE398.toField = "set_whichChoice";
children[43] = ROUTE398;

ROUTE ROUTE399 = createNode("ROUTE");
ROUTE399.fromNode = "UnnamedSwitchCenterInterp_1";
ROUTE399.fromField = "value_changed";
ROUTE399.toNode = "_12";
ROUTE399.toField = "set_center";
children[44] = ROUTE399;

ROUTE ROUTE400 = createNode("ROUTE");
ROUTE400.fromNode = "seg2TranslationInterp";
ROUTE400.fromField = "value_changed";
ROUTE400.toNode = "seg2";
ROUTE400.toField = "set_translation";
children[45] = ROUTE400;

ROUTE ROUTE401 = createNode("ROUTE");
ROUTE401.fromNode = "Time_1";
ROUTE401.fromField = "fraction_changed";
ROUTE401.toNode = "seg3TranslationInterp";
ROUTE401.toField = "set_fraction";
children[46] = ROUTE401;

ROUTE ROUTE402 = createNode("ROUTE");
ROUTE402.fromNode = "Time_1";
ROUTE402.fromField = "fraction_changed";
ROUTE402.toNode = "UnnamedSwitchCenterInterp_2";
ROUTE402.toField = "set_fraction";
children[47] = ROUTE402;

ROUTE ROUTE403 = createNode("ROUTE");
ROUTE403.fromNode = "_hamScript1";
ROUTE403.fromField = "enabled_changed";
ROUTE403.toNode = "_18";
ROUTE403.toField = "set_enabled";
children[48] = ROUTE403;

ROUTE ROUTE404 = createNode("ROUTE");
ROUTE404.fromNode = "_20";
ROUTE404.fromField = "whichChoice_changed";
ROUTE404.toNode = "_19";
ROUTE404.toField = "set_whichChoice";
children[49] = ROUTE404;

ROUTE ROUTE405 = createNode("ROUTE");
ROUTE405.fromNode = "_18";
ROUTE405.fromField = "touchTime";
ROUTE405.toNode = "_20";
ROUTE405.toField = "set_touchTime";
children[50] = ROUTE405;

ROUTE ROUTE406 = createNode("ROUTE");
ROUTE406.fromNode = "_15";
ROUTE406.fromField = "initEndTime";
ROUTE406.toNode = "_20";
ROUTE406.toField = "set_startTime";
children[51] = ROUTE406;

ROUTE ROUTE407 = createNode("ROUTE");
ROUTE407.fromNode = "_21";
ROUTE407.fromField = "cycleTime";
ROUTE407.toNode = "_20";
ROUTE407.toField = "set_cycleTime";
children[52] = ROUTE407;

ROUTE ROUTE408 = createNode("ROUTE");
ROUTE408.fromNode = "_hamScript1";
ROUTE408.fromField = "whichChoice3_changed";
ROUTE408.toNode = "_20";
ROUTE408.toField = "set_whichChoice";
children[53] = ROUTE408;

ROUTE ROUTE409 = createNode("ROUTE");
ROUTE409.fromNode = "UnnamedSwitchCenterInterp_2";
ROUTE409.fromField = "value_changed";
ROUTE409.toNode = "_17";
ROUTE409.toField = "set_center";
children[54] = ROUTE409;

ROUTE ROUTE410 = createNode("ROUTE");
ROUTE410.fromNode = "seg3TranslationInterp";
ROUTE410.fromField = "value_changed";
ROUTE410.toNode = "seg3";
ROUTE410.toField = "set_translation";
children[55] = ROUTE410;

ROUTE ROUTE411 = createNode("ROUTE");
ROUTE411.fromNode = "Time_1";
ROUTE411.fromField = "fraction_changed";
ROUTE411.toNode = "seg4TranslationInterp";
ROUTE411.toField = "set_fraction";
children[56] = ROUTE411;

ROUTE ROUTE412 = createNode("ROUTE");
ROUTE412.fromNode = "Time_1";
ROUTE412.fromField = "fraction_changed";
ROUTE412.toNode = "UnnamedSwitchCenterInterp_3";
ROUTE412.toField = "set_fraction";
children[57] = ROUTE412;

ROUTE ROUTE413 = createNode("ROUTE");
ROUTE413.fromNode = "_hamScript1";
ROUTE413.fromField = "enabled_changed";
ROUTE413.toNode = "_23";
ROUTE413.toField = "set_enabled";
children[58] = ROUTE413;

ROUTE ROUTE414 = createNode("ROUTE");
ROUTE414.fromNode = "_25";
ROUTE414.fromField = "whichChoice_changed";
ROUTE414.toNode = "_24";
ROUTE414.toField = "set_whichChoice";
children[59] = ROUTE414;

ROUTE ROUTE415 = createNode("ROUTE");
ROUTE415.fromNode = "_23";
ROUTE415.fromField = "touchTime";
ROUTE415.toNode = "_25";
ROUTE415.toField = "set_touchTime";
children[60] = ROUTE415;

ROUTE ROUTE416 = createNode("ROUTE");
ROUTE416.fromNode = "_20";
ROUTE416.fromField = "initEndTime";
ROUTE416.toNode = "_25";
ROUTE416.toField = "set_startTime";
children[61] = ROUTE416;

ROUTE ROUTE417 = createNode("ROUTE");
ROUTE417.fromNode = "_26";
ROUTE417.fromField = "cycleTime";
ROUTE417.toNode = "_25";
ROUTE417.toField = "set_cycleTime";
children[62] = ROUTE417;

ROUTE ROUTE418 = createNode("ROUTE");
ROUTE418.fromNode = "_hamScript1";
ROUTE418.fromField = "whichChoice4_changed";
ROUTE418.toNode = "_25";
ROUTE418.toField = "set_whichChoice";
children[63] = ROUTE418;

ROUTE ROUTE419 = createNode("ROUTE");
ROUTE419.fromNode = "UnnamedSwitchCenterInterp_3";
ROUTE419.fromField = "value_changed";
ROUTE419.toNode = "_22";
ROUTE419.toField = "set_center";
children[64] = ROUTE419;

ROUTE ROUTE420 = createNode("ROUTE");
ROUTE420.fromNode = "seg4TranslationInterp";
ROUTE420.fromField = "value_changed";
ROUTE420.toNode = "seg4";
ROUTE420.toField = "set_translation";
children[65] = ROUTE420;

ROUTE ROUTE421 = createNode("ROUTE");
ROUTE421.fromNode = "Time_1";
ROUTE421.fromField = "fraction_changed";
ROUTE421.toNode = "seg5TranslationInterp";
ROUTE421.toField = "set_fraction";
children[66] = ROUTE421;

ROUTE ROUTE422 = createNode("ROUTE");
ROUTE422.fromNode = "Time_1";
ROUTE422.fromField = "fraction_changed";
ROUTE422.toNode = "UnnamedSwitchCenterInterp_4";
ROUTE422.toField = "set_fraction";
children[67] = ROUTE422;

ROUTE ROUTE423 = createNode("ROUTE");
ROUTE423.fromNode = "_hamScript1";
ROUTE423.fromField = "enabled_changed";
ROUTE423.toNode = "_28";
ROUTE423.toField = "set_enabled";
children[68] = ROUTE423;

ROUTE ROUTE424 = createNode("ROUTE");
ROUTE424.fromNode = "_30";
ROUTE424.fromField = "whichChoice_changed";
ROUTE424.toNode = "_29";
ROUTE424.toField = "set_whichChoice";
children[69] = ROUTE424;

ROUTE ROUTE425 = createNode("ROUTE");
ROUTE425.fromNode = "_28";
ROUTE425.fromField = "touchTime";
ROUTE425.toNode = "_30";
ROUTE425.toField = "set_touchTime";
children[70] = ROUTE425;

ROUTE ROUTE426 = createNode("ROUTE");
ROUTE426.fromNode = "_25";
ROUTE426.fromField = "initEndTime";
ROUTE426.toNode = "_30";
ROUTE426.toField = "set_startTime";
children[71] = ROUTE426;

ROUTE ROUTE427 = createNode("ROUTE");
ROUTE427.fromNode = "_31";
ROUTE427.fromField = "cycleTime";
ROUTE427.toNode = "_30";
ROUTE427.toField = "set_cycleTime";
children[72] = ROUTE427;

ROUTE ROUTE428 = createNode("ROUTE");
ROUTE428.fromNode = "_hamScript1";
ROUTE428.fromField = "whichChoice5_changed";
ROUTE428.toNode = "_30";
ROUTE428.toField = "set_whichChoice";
children[73] = ROUTE428;

ROUTE ROUTE429 = createNode("ROUTE");
ROUTE429.fromNode = "UnnamedSwitchCenterInterp_4";
ROUTE429.fromField = "value_changed";
ROUTE429.toNode = "_27";
ROUTE429.toField = "set_center";
children[74] = ROUTE429;

ROUTE ROUTE430 = createNode("ROUTE");
ROUTE430.fromNode = "seg5TranslationInterp";
ROUTE430.fromField = "value_changed";
ROUTE430.toNode = "seg5";
ROUTE430.toField = "set_translation";
children[75] = ROUTE430;

ROUTE ROUTE431 = createNode("ROUTE");
ROUTE431.fromNode = "Time_1";
ROUTE431.fromField = "fraction_changed";
ROUTE431.toNode = "seg6TranslationInterp";
ROUTE431.toField = "set_fraction";
children[76] = ROUTE431;

ROUTE ROUTE432 = createNode("ROUTE");
ROUTE432.fromNode = "Time_1";
ROUTE432.fromField = "fraction_changed";
ROUTE432.toNode = "UnnamedSwitchCenterInterp_5";
ROUTE432.toField = "set_fraction";
children[77] = ROUTE432;

ROUTE ROUTE433 = createNode("ROUTE");
ROUTE433.fromNode = "_hamScript1";
ROUTE433.fromField = "enabled_changed";
ROUTE433.toNode = "_33";
ROUTE433.toField = "set_enabled";
children[78] = ROUTE433;

ROUTE ROUTE434 = createNode("ROUTE");
ROUTE434.fromNode = "_35";
ROUTE434.fromField = "whichChoice_changed";
ROUTE434.toNode = "_34";
ROUTE434.toField = "set_whichChoice";
children[79] = ROUTE434;

ROUTE ROUTE435 = createNode("ROUTE");
ROUTE435.fromNode = "_33";
ROUTE435.fromField = "touchTime";
ROUTE435.toNode = "_35";
ROUTE435.toField = "set_touchTime";
children[80] = ROUTE435;

ROUTE ROUTE436 = createNode("ROUTE");
ROUTE436.fromNode = "_30";
ROUTE436.fromField = "initEndTime";
ROUTE436.toNode = "_35";
ROUTE436.toField = "set_startTime";
children[81] = ROUTE436;

ROUTE ROUTE437 = createNode("ROUTE");
ROUTE437.fromNode = "_36";
ROUTE437.fromField = "cycleTime";
ROUTE437.toNode = "_35";
ROUTE437.toField = "set_cycleTime";
children[82] = ROUTE437;

ROUTE ROUTE438 = createNode("ROUTE");
ROUTE438.fromNode = "_hamScript1";
ROUTE438.fromField = "whichChoice6_changed";
ROUTE438.toNode = "_35";
ROUTE438.toField = "set_whichChoice";
children[83] = ROUTE438;

ROUTE ROUTE439 = createNode("ROUTE");
ROUTE439.fromNode = "UnnamedSwitchCenterInterp_5";
ROUTE439.fromField = "value_changed";
ROUTE439.toNode = "_32";
ROUTE439.toField = "set_center";
children[84] = ROUTE439;

ROUTE ROUTE440 = createNode("ROUTE");
ROUTE440.fromNode = "seg6TranslationInterp";
ROUTE440.fromField = "value_changed";
ROUTE440.toNode = "seg6";
ROUTE440.toField = "set_translation";
children[85] = ROUTE440;

ROUTE ROUTE441 = createNode("ROUTE");
ROUTE441.fromNode = "Time_1";
ROUTE441.fromField = "fraction_changed";
ROUTE441.toNode = "seg7TranslationInterp";
ROUTE441.toField = "set_fraction";
children[86] = ROUTE441;

ROUTE ROUTE442 = createNode("ROUTE");
ROUTE442.fromNode = "_hamScript1";
ROUTE442.fromField = "enabled_changed";
ROUTE442.toNode = "_37";
ROUTE442.toField = "set_enabled";
children[87] = ROUTE442;

ROUTE ROUTE443 = createNode("ROUTE");
ROUTE443.fromNode = "_37";
ROUTE443.fromField = "touchTime";
ROUTE443.toNode = "_38";
ROUTE443.toField = "set_touchTime";
children[88] = ROUTE443;

ROUTE ROUTE444 = createNode("ROUTE");
ROUTE444.fromNode = "_35";
ROUTE444.fromField = "initEndTime";
ROUTE444.toNode = "_38";
ROUTE444.toField = "set_startTime";
children[89] = ROUTE444;

ROUTE ROUTE445 = createNode("ROUTE");
ROUTE445.fromNode = "_39";
ROUTE445.fromField = "cycleTime";
ROUTE445.toNode = "_38";
ROUTE445.toField = "set_cycleTime";
children[90] = ROUTE445;

ROUTE ROUTE446 = createNode("ROUTE");
ROUTE446.fromNode = "_hamScript1";
ROUTE446.fromField = "whichChoice7_changed";
ROUTE446.toNode = "_38";
ROUTE446.toField = "set_whichChoice";
children[91] = ROUTE446;

ROUTE ROUTE447 = createNode("ROUTE");
ROUTE447.fromNode = "_38";
ROUTE447.fromField = "whichChoice_changed";
ROUTE447.toNode = "_40";
ROUTE447.toField = "set_whichChoice";
children[92] = ROUTE447;

ROUTE ROUTE448 = createNode("ROUTE");
ROUTE448.fromNode = "seg7TranslationInterp";
ROUTE448.fromField = "value_changed";
ROUTE448.toNode = "seg7";
ROUTE448.toField = "set_translation";
children[93] = ROUTE448;

ROUTE ROUTE449 = createNode("ROUTE");
ROUTE449.fromNode = "_2";
ROUTE449.fromField = "whichChoice_changed";
ROUTE449.toNode = "_hamScript1";
ROUTE449.toField = "set_whichChoice1";
children[94] = ROUTE449;

ROUTE ROUTE450 = createNode("ROUTE");
ROUTE450.fromNode = "_14";
ROUTE450.fromField = "whichChoice_changed";
ROUTE450.toNode = "_hamScript1";
ROUTE450.toField = "set_whichChoice2";
children[95] = ROUTE450;

ROUTE ROUTE451 = createNode("ROUTE");
ROUTE451.fromNode = "_19";
ROUTE451.fromField = "whichChoice_changed";
ROUTE451.toNode = "_hamScript1";
ROUTE451.toField = "set_whichChoice3";
children[96] = ROUTE451;

ROUTE ROUTE452 = createNode("ROUTE");
ROUTE452.fromNode = "_24";
ROUTE452.fromField = "whichChoice_changed";
ROUTE452.toNode = "_hamScript1";
ROUTE452.toField = "set_whichChoice4";
children[97] = ROUTE452;

ROUTE ROUTE453 = createNode("ROUTE");
ROUTE453.fromNode = "_29";
ROUTE453.fromField = "whichChoice_changed";
ROUTE453.toNode = "_hamScript1";
ROUTE453.toField = "set_whichChoice5";
children[98] = ROUTE453;

ROUTE ROUTE454 = createNode("ROUTE");
ROUTE454.fromNode = "_34";
ROUTE454.fromField = "whichChoice_changed";
ROUTE454.toNode = "_hamScript1";
ROUTE454.toField = "set_whichChoice6";
children[99] = ROUTE454;

ROUTE ROUTE455 = createNode("ROUTE");
ROUTE455.fromNode = "_40";
ROUTE455.fromField = "whichChoice_changed";
ROUTE455.toNode = "_hamScript1";
ROUTE455.toField = "set_whichChoice7";
children[100] = ROUTE455;

ROUTE ROUTE456 = createNode("ROUTE");
ROUTE456.fromNode = "_38";
ROUTE456.fromField = "initEndTime";
ROUTE456.toNode = "_hamScript1";
ROUTE456.toField = "set_startTime";
children[101] = ROUTE456;

ROUTE ROUTE457 = createNode("ROUTE");
ROUTE457.fromNode = "_43";
ROUTE457.fromField = "touchTime";
ROUTE457.toNode = "_hamScript1";
ROUTE457.toField = "set_initTime";
children[102] = ROUTE457;

ROUTE ROUTE458 = createNode("ROUTE");
ROUTE458.fromNode = "_42";
ROUTE458.fromField = "exitTime";
ROUTE458.toNode = "_hamScript1";
ROUTE458.toField = "gameOver";
children[103] = ROUTE458;

ROUTE ROUTE459 = createNode("ROUTE");
ROUTE459.fromNode = "_startScript1";
ROUTE459.fromField = "enabled_changed";
ROUTE459.toNode = "_43";
ROUTE459.toField = "set_enabled";
children[104] = ROUTE459;

ROUTE ROUTE460 = createNode("ROUTE");
ROUTE460.fromNode = "_43";
ROUTE460.fromField = "touchTime";
ROUTE460.toNode = "_startScript1";
ROUTE460.toField = "touchTime";
children[105] = ROUTE460;

ROUTE ROUTE461 = createNode("ROUTE");
ROUTE461.fromNode = "_hamScript1";
ROUTE461.fromField = "enabled_changed";
ROUTE461.toNode = "_startScript1";
ROUTE461.toField = "set_isActive";
children[106] = ROUTE461;

ROUTE ROUTE462 = createNode("ROUTE");
ROUTE462.fromNode = "_42";
ROUTE462.fromField = "exitTime";
ROUTE462.toNode = "Time_2";
ROUTE462.toField = "set_startTime";
children[107] = ROUTE462;

ROUTE ROUTE463 = createNode("ROUTE");
ROUTE463.fromNode = "Time_2";
ROUTE463.fromField = "fraction_changed";
ROUTE463.toNode = "UnnamedShapeTranslationInterp";
ROUTE463.toField = "set_fraction";
children[108] = ROUTE463;

ROUTE ROUTE464 = createNode("ROUTE");
ROUTE464.fromNode = "Time_2";
ROUTE464.fromField = "fraction_changed";
ROUTE464.toNode = "UnnamedShapeRotationInterp";
ROUTE464.toField = "set_fraction";
children[109] = ROUTE464;

ROUTE ROUTE465 = createNode("ROUTE");
ROUTE465.fromNode = "UnnamedShapeTranslationInterp";
ROUTE465.fromField = "value_changed";
ROUTE465.toNode = "_45";
ROUTE465.toField = "set_translation";
children[110] = ROUTE465;

ROUTE ROUTE466 = createNode("ROUTE");
ROUTE466.fromNode = "UnnamedShapeRotationInterp";
ROUTE466.fromField = "value_changed";
ROUTE466.toNode = "_45";
ROUTE466.toField = "set_rotation";
children[111] = ROUTE466;

ROUTE ROUTE467 = createNode("ROUTE");
ROUTE467.fromNode = "_42";
ROUTE467.fromField = "time";
ROUTE467.toNode = "_46";
ROUTE467.toField = "set_time";
children[112] = ROUTE467;

ROUTE ROUTE468 = createNode("ROUTE");
ROUTE468.fromNode = "_46";
ROUTE468.fromField = "string_changed";
ROUTE468.toNode = "_47";
ROUTE468.toField = "set_string";
children[113] = ROUTE468;

}
