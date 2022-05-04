/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Concretes.h"
int main(int argc, char ** argv) {
CX3DScene m_pScene;
CBrowser browser = X3D.getBrowser();
CX3D* X3D0 = new CX3D();
CGroup* group = (CGroup*)(m_pScene.createNode("Group"));
group->addChildren(X3D0);
X3D0->setProfile("Immersive");
X3D0->setVersion("3.3");
Chead* head1 = new Chead();
Ccomponent* component2 = new Ccomponent();
component2->setName("H-Anim");
component2->setLevel(1);
head1->addComponent(*component2);

Cmeta* meta3 = new Cmeta();
meta3->setName("title");
meta3->setContent("HAnimBehaviorPrototypes.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("Prototypes for HAnimBehavior node, which collects OrientationInterpolators for aggregate animation of an HAnim humanoid model, and HAnimBodyBehaviorChooser, which selects one body and enables/disables multiple aggregated behaviors.");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("creator");
meta5->setContent("Don Brutzman, Jeff Weekley, MV4205 Advanced X3D Authoring class, and Keith Victor");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("created");
meta6->setContent("2 May 2006");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("modified");
meta7->setContent("4 July 2020");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("reference");
meta8->setContent("Web3D2007BlendedBehaviorsChangeableBodies.pdf");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("reference");
meta9->setContent("https://www.web3d.org/files/specifications/19774/V1.0");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-X3DAbstractSpecification_Revision1_to_Part1/Part01/components/hanim.html");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("reference");
meta11->setContent("InterchangableActorsViaDynamicRoutingPrototypes.x3d");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("reference");
meta12->setContent("ApaydinThesis.pdf");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("subject");
meta13->setContent("X3D HAnim humanoid animation behaviors");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("warning");
meta14->setContent("under development. should joint translations be exposed? upgrade to HAnim v2.2");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("identifier");
meta15->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypes.x3d");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("generator");
meta16->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("license");
meta17->setContent("../license.html");
head1->addMeta(*meta17);

X3D0->setHead(*head1);

CScene* Scene18 = new CScene();
CWorldInfo* WorldInfo19 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo19->setTitle("HAnimBehaviorPrototypes.x3d");
group->addChildren(*WorldInfo19);

CProtoDeclare ProtoDeclare20 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="HAnimBehavior" appinfo="The HAnimBehavior node models a single humanoid behavior either for an entire body or simply parts of a body. It collects a TimeSensor clock with a single PositionInterpolator and multiple OrientationInterpolator nodes to provide a single humanoid behavior." documentation="https://www.web3d.org/files/specifications/19774/V1.0/" ><ProtoInterface><!--supported Level of Articulation (LOA)--><!--shared common input for single TimeSensor animating all interpolators, since different Behaviors may have different cycleInterval durations--><!--TODO: add other X3D 3.0 TimeSensor fields (pause etc.)--><!--Not supported: animated translation of individual joints--><!--pass in key/keyValue array pairs for single PositionInterpolator--><!--pass in key/keyValue array pairs and expose named output for each OrientationInterpolator, joint by joint--><field name="supportedLOA" accessType="inputOutput" appinfo="Supported Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3." type="SFInt32" value="-1"></field>
<field name="enabled" accessType="inputOutput" appinfo="is this behavior enabled?" type="SFBool" value="true"></field>
<field name="cycleInterval" accessType="inputOutput" appinfo="how long do these interpolators take to execute?" type="SFTime" value="1"></field>
<field name="loop" accessType="inputOutput" appinfo="whether or not this behavior loops (e.g. walking) or is single shot (e.g. shake hands)." type="SFBool" value="false"></field>
<field name="startTime" accessType="inputOutput" appinfo="when time now &gt;= startTime isActive becomes true and TimeSensor becomes active" type="SFTime" value="0"></field>
<field name="stopTime" accessType="inputOutput" appinfo="when stopTime becomes &lt;= time now isActive becomes false and TimeSensor becomes inactive" type="SFTime" value="0"></field>
<field name="pauseTime" accessType="inputOutput" appinfo="when time now &gt;= pauseTime isPaused becomes true and TimeSensor becomes paused" type="SFTime" value="0"></field>
<field name="resumeTime" accessType="inputOutput" appinfo="when resumeTime becomes &lt;= time now isPaused becomes false and TimeSensor becomes inactive" type="SFTime" value="0"></field>
<field name="cycleTime" accessType="outputOnly" appinfo="cycleTime sends a time outputOnly at startTime and also at the beginning of each new cycle" type="SFTime"></field>
<field name="isActive" accessType="outputOnly" appinfo="isActive true/false events are sent when TimeSensor starts/stops running" type="SFBool"></field>
<field name="isPaused" accessType="outputOnly" appinfo="isPaused true/false events are sent when TimeSensor is paused/resumed" type="SFBool"></field>
<field name="elapsedTime" accessType="outputOnly" appinfo="current elapsed time since TimeSensor activated/running cumulative in seconds and not counting any paused time" type="SFBool"></field>
<field name="time" accessType="outputOnly" appinfo="continuously sends the absolute time (since January 1 1970)" type="SFBool"></field>
<field name="fraction_changed" accessType="outputOnly" appinfo="fraction_changed continuously sends value in range [0 1] showing time progress in the current cycle." type="SFFloat"></field>
<field name="HumanoidRoot_translation_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="HumanoidRoot_translation_keyValue" accessType="inputOutput" type="MFVec3f"><!--no default value--></field>
<field name="HumanoidRoot_translation_changed" accessType="outputOnly" type="SFVec3f"></field>
<field name="HumanoidRoot_rotation_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="HumanoidRoot_rotation_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="HumanoidRoot_rotation_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="c1_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="c1_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="c1_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="c2_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="c2_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="c2_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="c3_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="c3_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="c3_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="c4_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="c4_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="c4_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="c5_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="c5_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="c5_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="c6_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="c6_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="c6_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="c7_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="c7_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="c7_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="jaw_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="jaw_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="jaw_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l1_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l1_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l1_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l2_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l2_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l2_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l3_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l3_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l3_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l4_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l4_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l4_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l5_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l5_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l5_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_acromioclavicular_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_acromioclavicular_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_acromioclavicular_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_ankle_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_ankle_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_ankle_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_calf_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_calf_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_calf_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_clavicle_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_clavicle_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_clavicle_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_elbow_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_elbow_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_elbow_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_eyeball_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_eyeball_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_eyeball_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_eyeball_joint_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_eyeball_joint_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_eyeball_joint_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_eyebrow_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_eyebrow_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_eyebrow_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_eyebrow_joint_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_eyebrow_joint_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_eyebrow_joint_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_eyelid_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_eyelid_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_eyelid_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_eyelid_joint_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_eyelid_joint_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_eyelid_joint_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_forearm_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_forearm_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_forearm_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_forefoot_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_forefoot_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_forefoot_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_hand_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_hand_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_hand_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_hindfoot_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_hindfoot_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_hindfoot_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_hip_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_hip_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_hip_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_index0_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_index0_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_index0_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_index1_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_index1_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_index1_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_index2_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_index2_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_index2_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_index3_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_index3_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_index3_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_index_distal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_index_distal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_index_distal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_index_metacarpal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_index_metacarpal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_index_metacarpal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_index_middle_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_index_middle_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_index_middle_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_index_proximal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_index_proximal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_index_proximal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_knee_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_knee_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_knee_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_metatarsal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_metatarsal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_metatarsal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_middistal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_middistal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_middistal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_middle0_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_middle0_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_middle0_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_middle1_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_middle1_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_middle1_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_middle2_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_middle2_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_middle2_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_middle3_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_middle3_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_middle3_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_middle_distal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_middle_distal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_middle_distal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_middle_metacarpal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_middle_metacarpal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_middle_metacarpal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_middle_middle_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_middle_middle_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_middle_middle_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_middle_proximal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_middle_proximal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_middle_proximal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_midproximal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_midproximal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_midproximal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_midtarsal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_midtarsal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_midtarsal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_pinky0_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_pinky0_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_pinky0_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_pinky1_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_pinky1_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_pinky1_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_pinky2_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_pinky2_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_pinky2_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_pinky3_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_pinky3_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_pinky3_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_pinky_distal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_pinky_distal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_pinky_distal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_pinky_metacarpal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_pinky_metacarpal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_pinky_metacarpal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_pinky_middle_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_pinky_middle_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_pinky_middle_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_pinky_proximal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_pinky_proximal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_pinky_proximal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_ring0_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_ring0_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_ring0_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_ring1_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_ring1_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_ring1_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_ring2_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_ring2_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_ring2_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_ring3_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_ring3_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_ring3_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_ring_distal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_ring_distal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_ring_distal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_ring_metacarpal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_ring_metacarpal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_ring_metacarpal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_ring_middle_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_ring_middle_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_ring_middle_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_ring_proximal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_ring_proximal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_ring_proximal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_scapula_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_scapula_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_scapula_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_shoulder_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_shoulder_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_shoulder_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_sternoclavicular_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_sternoclavicular_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_sternoclavicular_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_subtalar_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_subtalar_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_subtalar_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_thigh_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_thigh_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_thigh_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_thumb1_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_thumb1_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_thumb1_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_thumb2_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_thumb2_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_thumb2_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_thumb3_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_thumb3_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_thumb3_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_thumb_distal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_thumb_distal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_thumb_distal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_thumb_metacarpal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_thumb_metacarpal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_thumb_metacarpal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_thumb_proximal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_thumb_proximal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_thumb_proximal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_upperarm_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_upperarm_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_upperarm_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_wrist_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="l_wrist_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="l_wrist_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="pelvis_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="pelvis_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="pelvis_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_acromioclavicular_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_acromioclavicular_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_acromioclavicular_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_ankle_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_ankle_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_ankle_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_calf_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_calf_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_calf_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_clavicle_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_clavicle_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_clavicle_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_elbow_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_elbow_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_elbow_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_eyeball_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_eyeball_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_eyeball_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_eyeball_joint_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_eyeball_joint_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_eyeball_joint_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_eyebrow_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_eyebrow_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_eyebrow_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_eyebrow_joint_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_eyebrow_joint_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_eyebrow_joint_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_eyelid_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_eyelid_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_eyelid_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_eyelid_joint_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_eyelid_joint_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_eyelid_joint_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_forearm_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_forearm_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_forearm_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_forefoot_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_forefoot_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_forefoot_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_hand_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_hand_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_hand_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_hindfoot_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_hindfoot_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_hindfoot_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_hip_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_hip_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_hip_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_index0_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_index0_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_index0_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_index1_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_index1_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_index1_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_index2_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_index2_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_index2_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_index3_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_index3_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_index3_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_index_distal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_index_distal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_index_distal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_index_metacarpal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_index_metacarpal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_index_metacarpal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_index_middle_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_index_middle_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_index_middle_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_index_proximal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_index_proximal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_index_proximal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_knee_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_knee_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_knee_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_metatarsal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_metatarsal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_metatarsal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_middistal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_middistal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_middistal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_middle0_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_middle0_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_middle0_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_middle1_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_middle1_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_middle1_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_middle2_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_middle2_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_middle2_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_middle3_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_middle3_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_middle3_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_middle_distal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_middle_distal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_middle_distal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_middle_metacarpal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_middle_metacarpal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_middle_metacarpal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_middle_middle_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_middle_middle_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_middle_middle_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_middle_proximal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_middle_proximal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_middle_proximal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_midproximal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_midproximal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_midproximal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_midtarsal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_midtarsal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_midtarsal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_pinky0_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_pinky0_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_pinky0_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_pinky1_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_pinky1_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_pinky1_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_pinky2_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_pinky2_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_pinky2_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_pinky3_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_pinky3_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_pinky3_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_pinky_distal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_pinky_distal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_pinky_distal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_pinky_metacarpal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_pinky_metacarpal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_pinky_metacarpal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_pinky_middle_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_pinky_middle_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_pinky_middle_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_pinky_proximal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_pinky_proximal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_pinky_proximal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_ring0_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_ring0_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_ring0_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_ring1_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_ring1_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_ring1_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_ring2_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_ring2_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_ring2_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_ring3_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_ring3_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_ring3_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_ring_distal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_ring_distal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_ring_distal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_ring_metacarpal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_ring_metacarpal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_ring_metacarpal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_ring_middle_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_ring_middle_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_ring_middle_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_ring_proximal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_ring_proximal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_ring_proximal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_scapula_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_scapula_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_scapula_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_shoulder_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_shoulder_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_shoulder_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_sternoclavicular_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_sternoclavicular_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_sternoclavicular_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_subtalar_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_subtalar_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_subtalar_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_thigh_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_thigh_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_thigh_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_thumb1_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_thumb1_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_thumb1_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_thumb2_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_thumb2_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_thumb2_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_thumb3_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_thumb3_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_thumb3_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_thumb_distal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_thumb_distal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_thumb_distal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_thumb_metacarpal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_thumb_metacarpal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_thumb_metacarpal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_thumb_proximal_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_thumb_proximal_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_thumb_proximal_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_upperarm_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_upperarm_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_upperarm_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_wrist_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="r_wrist_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="r_wrist_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="sacroiliac_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="sacroiliac_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="sacroiliac_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="sacrum_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="sacrum_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="sacrum_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="skull_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="skull_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="skull_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="skullbase_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="skullbase_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="skullbase_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="t10_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="t10_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="t10_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="t11_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="t11_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="t11_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="t12_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="t12_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="t12_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="t1_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="t1_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="t1_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="t2_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="t2_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="t2_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="t3_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="t3_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="t3_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="t4_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="t4_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="t4_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="t5_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="t5_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="t5_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="t6_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="t6_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="t6_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="t7_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="t7_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="t7_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="t8_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="t8_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="t8_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="t9_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="t9_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="t9_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="temporomandibular_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="temporomandibular_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="temporomandibular_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="vc1_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="vc1_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="vc1_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="vc2_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="vc2_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="vc2_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="vc3_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="vc3_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="vc3_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="vc4_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="vc4_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="vc4_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="vc5_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="vc5_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="vc5_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="vc6_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="vc6_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="vc6_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="vc7_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="vc7_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="vc7_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="vl1_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="vl1_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="vl1_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="vl2_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="vl2_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="vl2_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="vl3_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="vl3_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="vl3_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="vl4_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="vl4_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="vl4_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="vl5_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="vl5_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="vl5_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="vt10_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="vt10_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="vt10_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="vt11_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="vt11_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="vt11_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="vt12_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="vt12_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="vt12_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="vt1_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="vt1_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="vt1_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="vt2_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="vt2_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="vt2_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="vt3_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="vt3_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="vt3_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="vt4_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="vt4_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="vt4_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="vt5_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="vt5_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="vt5_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="vt6_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="vt6_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="vt6_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="vt7_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="vt7_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="vt7_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="vt8_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="vt8_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="vt8_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="vt9_key" accessType="inputOutput" type="MFFloat"><!--no default value--></field>
<field name="vt9_keyValue" accessType="inputOutput" type="MFRotation"><!--no default value--></field>
<field name="vt9_changed" accessType="outputOnly" type="SFRotation"></field>
</ProtoInterface>
<ProtoBody><!--design alternative: move TimeSensor out of the prototype, instead expose set_fraction globally to all interpolators--><TimeSensor DEF="BehaviorClock"><IS><connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="cycleInterval" protoField="cycleInterval"></connect>
<connect nodeField="loop" protoField="loop"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
<connect nodeField="pauseTime" protoField="pauseTime"></connect>
<connect nodeField="resumeTime" protoField="resumeTime"></connect>
<connect nodeField="cycleTime" protoField="cycleTime"></connect>
<connect nodeField="isActive" protoField="isActive"></connect>
<connect nodeField="isPaused" protoField="isPaused"></connect>
<connect nodeField="elapsedTime" protoField="elapsedTime"></connect>
<connect nodeField="time" protoField="time"></connect>
<connect nodeField="fraction_changed" protoField="fraction_changed"></connect>
</IS>
</TimeSensor>
<!--note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless--><Switch DEF="SupportedLoaHolder1" whichChoice="-1"><IS><connect nodeField="whichChoice" protoField="supportedLOA"></connect>
</IS>
</Switch>
<PositionInterpolator DEF="HumanoidRootPI"><IS><connect nodeField="key" protoField="HumanoidRoot_translation_key"></connect>
<connect nodeField="keyValue" protoField="HumanoidRoot_translation_keyValue"></connect>
<connect nodeField="value_changed" protoField="HumanoidRoot_translation_changed"></connect>
</IS>
</PositionInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="HumanoidRootPI"></ROUTE>
<OrientationInterpolator DEF="HumanoidRootOI"><IS><connect nodeField="key" protoField="HumanoidRoot_rotation_key"></connect>
<connect nodeField="keyValue" protoField="HumanoidRoot_rotation_keyValue"></connect>
<connect nodeField="value_changed" protoField="HumanoidRoot_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="HumanoidRootOI"></ROUTE>
<OrientationInterpolator DEF="c1_OI"><IS><connect nodeField="key" protoField="c1_key"></connect>
<connect nodeField="keyValue" protoField="c1_keyValue"></connect>
<connect nodeField="value_changed" protoField="c1_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="c1_OI"></ROUTE>
<OrientationInterpolator DEF="c2_OI"><IS><connect nodeField="key" protoField="c2_key"></connect>
<connect nodeField="keyValue" protoField="c2_keyValue"></connect>
<connect nodeField="value_changed" protoField="c2_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="c2_OI"></ROUTE>
<OrientationInterpolator DEF="c3_OI"><IS><connect nodeField="key" protoField="c3_key"></connect>
<connect nodeField="keyValue" protoField="c3_keyValue"></connect>
<connect nodeField="value_changed" protoField="c3_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="c3_OI"></ROUTE>
<OrientationInterpolator DEF="c4_OI"><IS><connect nodeField="key" protoField="c4_key"></connect>
<connect nodeField="keyValue" protoField="c4_keyValue"></connect>
<connect nodeField="value_changed" protoField="c4_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="c4_OI"></ROUTE>
<OrientationInterpolator DEF="c5_OI"><IS><connect nodeField="key" protoField="c5_key"></connect>
<connect nodeField="keyValue" protoField="c5_keyValue"></connect>
<connect nodeField="value_changed" protoField="c5_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="c5_OI"></ROUTE>
<OrientationInterpolator DEF="c6_OI"><IS><connect nodeField="key" protoField="c6_key"></connect>
<connect nodeField="keyValue" protoField="c6_keyValue"></connect>
<connect nodeField="value_changed" protoField="c6_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="c6_OI"></ROUTE>
<OrientationInterpolator DEF="c7_OI"><IS><connect nodeField="key" protoField="c7_key"></connect>
<connect nodeField="keyValue" protoField="c7_keyValue"></connect>
<connect nodeField="value_changed" protoField="c7_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="c7_OI"></ROUTE>
<OrientationInterpolator DEF="jaw_OI"><IS><connect nodeField="key" protoField="jaw_key"></connect>
<connect nodeField="keyValue" protoField="jaw_keyValue"></connect>
<connect nodeField="value_changed" protoField="jaw_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="jaw_OI"></ROUTE>
<OrientationInterpolator DEF="l1_OI"><IS><connect nodeField="key" protoField="l1_key"></connect>
<connect nodeField="keyValue" protoField="l1_keyValue"></connect>
<connect nodeField="value_changed" protoField="l1_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l1_OI"></ROUTE>
<OrientationInterpolator DEF="l2_OI"><IS><connect nodeField="key" protoField="l2_key"></connect>
<connect nodeField="keyValue" protoField="l2_keyValue"></connect>
<connect nodeField="value_changed" protoField="l2_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l2_OI"></ROUTE>
<OrientationInterpolator DEF="l3_OI"><IS><connect nodeField="key" protoField="l3_key"></connect>
<connect nodeField="keyValue" protoField="l3_keyValue"></connect>
<connect nodeField="value_changed" protoField="l3_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l3_OI"></ROUTE>
<OrientationInterpolator DEF="l4_OI"><IS><connect nodeField="key" protoField="l4_key"></connect>
<connect nodeField="keyValue" protoField="l4_keyValue"></connect>
<connect nodeField="value_changed" protoField="l4_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l4_OI"></ROUTE>
<OrientationInterpolator DEF="l5_OI"><IS><connect nodeField="key" protoField="l5_key"></connect>
<connect nodeField="keyValue" protoField="l5_keyValue"></connect>
<connect nodeField="value_changed" protoField="l5_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l5_OI"></ROUTE>
<OrientationInterpolator DEF="l_acromioclavicular_OI"><IS><connect nodeField="key" protoField="l_acromioclavicular_key"></connect>
<connect nodeField="keyValue" protoField="l_acromioclavicular_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_acromioclavicular_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_acromioclavicular_OI"></ROUTE>
<OrientationInterpolator DEF="l_ankle_OI"><IS><connect nodeField="key" protoField="l_ankle_key"></connect>
<connect nodeField="keyValue" protoField="l_ankle_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_ankle_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_ankle_OI"></ROUTE>
<OrientationInterpolator DEF="l_calf_OI"><IS><connect nodeField="key" protoField="l_calf_key"></connect>
<connect nodeField="keyValue" protoField="l_calf_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_calf_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_calf_OI"></ROUTE>
<OrientationInterpolator DEF="l_clavicle_OI"><IS><connect nodeField="key" protoField="l_clavicle_key"></connect>
<connect nodeField="keyValue" protoField="l_clavicle_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_clavicle_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_clavicle_OI"></ROUTE>
<OrientationInterpolator DEF="l_elbow_OI"><IS><connect nodeField="key" protoField="l_elbow_key"></connect>
<connect nodeField="keyValue" protoField="l_elbow_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_elbow_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_elbow_OI"></ROUTE>
<OrientationInterpolator DEF="l_eyeball_OI"><IS><connect nodeField="key" protoField="l_eyeball_key"></connect>
<connect nodeField="keyValue" protoField="l_eyeball_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_eyeball_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_eyeball_OI"></ROUTE>
<OrientationInterpolator DEF="l_eyeball_joint_OI"><IS><connect nodeField="key" protoField="l_eyeball_joint_key"></connect>
<connect nodeField="keyValue" protoField="l_eyeball_joint_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_eyeball_joint_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_eyeball_joint_OI"></ROUTE>
<OrientationInterpolator DEF="l_eyebrow_OI"><IS><connect nodeField="key" protoField="l_eyebrow_key"></connect>
<connect nodeField="keyValue" protoField="l_eyebrow_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_eyebrow_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_eyebrow_OI"></ROUTE>
<OrientationInterpolator DEF="l_eyebrow_joint_OI"><IS><connect nodeField="key" protoField="l_eyebrow_joint_key"></connect>
<connect nodeField="keyValue" protoField="l_eyebrow_joint_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_eyebrow_joint_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_eyebrow_joint_OI"></ROUTE>
<OrientationInterpolator DEF="l_eyelid_OI"><IS><connect nodeField="key" protoField="l_eyelid_key"></connect>
<connect nodeField="keyValue" protoField="l_eyelid_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_eyelid_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_eyelid_OI"></ROUTE>
<OrientationInterpolator DEF="l_eyelid_joint_OI"><IS><connect nodeField="key" protoField="l_eyelid_joint_key"></connect>
<connect nodeField="keyValue" protoField="l_eyelid_joint_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_eyelid_joint_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_eyelid_joint_OI"></ROUTE>
<OrientationInterpolator DEF="l_forearm_OI"><IS><connect nodeField="key" protoField="l_forearm_key"></connect>
<connect nodeField="keyValue" protoField="l_forearm_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_forearm_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_forearm_OI"></ROUTE>
<OrientationInterpolator DEF="l_forefoot_OI"><IS><connect nodeField="key" protoField="l_forefoot_key"></connect>
<connect nodeField="keyValue" protoField="l_forefoot_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_forefoot_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_forefoot_OI"></ROUTE>
<OrientationInterpolator DEF="l_hand_OI"><IS><connect nodeField="key" protoField="l_hand_key"></connect>
<connect nodeField="keyValue" protoField="l_hand_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_hand_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_hand_OI"></ROUTE>
<OrientationInterpolator DEF="l_hindfoot_OI"><IS><connect nodeField="key" protoField="l_hindfoot_key"></connect>
<connect nodeField="keyValue" protoField="l_hindfoot_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_hindfoot_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_hindfoot_OI"></ROUTE>
<OrientationInterpolator DEF="l_hip_OI"><IS><connect nodeField="key" protoField="l_hip_key"></connect>
<connect nodeField="keyValue" protoField="l_hip_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_hip_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_hip_OI"></ROUTE>
<OrientationInterpolator DEF="l_index0_OI"><IS><connect nodeField="key" protoField="l_index0_key"></connect>
<connect nodeField="keyValue" protoField="l_index0_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_index0_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_index0_OI"></ROUTE>
<OrientationInterpolator DEF="l_index1_OI"><IS><connect nodeField="key" protoField="l_index1_key"></connect>
<connect nodeField="keyValue" protoField="l_index1_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_index1_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_index1_OI"></ROUTE>
<OrientationInterpolator DEF="l_index2_OI"><IS><connect nodeField="key" protoField="l_index2_key"></connect>
<connect nodeField="keyValue" protoField="l_index2_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_index2_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_index2_OI"></ROUTE>
<OrientationInterpolator DEF="l_index3_OI"><IS><connect nodeField="key" protoField="l_index3_key"></connect>
<connect nodeField="keyValue" protoField="l_index3_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_index3_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_index3_OI"></ROUTE>
<OrientationInterpolator DEF="l_index_distal_OI"><IS><connect nodeField="key" protoField="l_index_distal_key"></connect>
<connect nodeField="keyValue" protoField="l_index_distal_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_index_distal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_index_distal_OI"></ROUTE>
<OrientationInterpolator DEF="l_index_metacarpal_OI"><IS><connect nodeField="key" protoField="l_index_metacarpal_key"></connect>
<connect nodeField="keyValue" protoField="l_index_metacarpal_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_index_metacarpal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_index_metacarpal_OI"></ROUTE>
<OrientationInterpolator DEF="l_index_middle_OI"><IS><connect nodeField="key" protoField="l_index_middle_key"></connect>
<connect nodeField="keyValue" protoField="l_index_middle_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_index_middle_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_index_middle_OI"></ROUTE>
<OrientationInterpolator DEF="l_index_proximal_OI"><IS><connect nodeField="key" protoField="l_index_proximal_key"></connect>
<connect nodeField="keyValue" protoField="l_index_proximal_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_index_proximal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_index_proximal_OI"></ROUTE>
<OrientationInterpolator DEF="l_knee_OI"><IS><connect nodeField="key" protoField="l_knee_key"></connect>
<connect nodeField="keyValue" protoField="l_knee_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_knee_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_knee_OI"></ROUTE>
<OrientationInterpolator DEF="l_metatarsal_OI"><IS><connect nodeField="key" protoField="l_metatarsal_key"></connect>
<connect nodeField="keyValue" protoField="l_metatarsal_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_metatarsal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_metatarsal_OI"></ROUTE>
<OrientationInterpolator DEF="l_middistal_OI"><IS><connect nodeField="key" protoField="l_middistal_key"></connect>
<connect nodeField="keyValue" protoField="l_middistal_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_middistal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_middistal_OI"></ROUTE>
<OrientationInterpolator DEF="l_middle0_OI"><IS><connect nodeField="key" protoField="l_middle0_key"></connect>
<connect nodeField="keyValue" protoField="l_middle0_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_middle0_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_middle0_OI"></ROUTE>
<OrientationInterpolator DEF="l_middle1_OI"><IS><connect nodeField="key" protoField="l_middle1_key"></connect>
<connect nodeField="keyValue" protoField="l_middle1_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_middle1_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_middle1_OI"></ROUTE>
<OrientationInterpolator DEF="l_middle2_OI"><IS><connect nodeField="key" protoField="l_middle2_key"></connect>
<connect nodeField="keyValue" protoField="l_middle2_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_middle2_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_middle2_OI"></ROUTE>
<OrientationInterpolator DEF="l_middle3_OI"><IS><connect nodeField="key" protoField="l_middle3_key"></connect>
<connect nodeField="keyValue" protoField="l_middle3_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_middle3_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_middle3_OI"></ROUTE>
<OrientationInterpolator DEF="l_middle_distal_OI"><IS><connect nodeField="key" protoField="l_middle_distal_key"></connect>
<connect nodeField="keyValue" protoField="l_middle_distal_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_middle_distal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_middle_distal_OI"></ROUTE>
<OrientationInterpolator DEF="l_middle_metacarpal_OI"><IS><connect nodeField="key" protoField="l_middle_metacarpal_key"></connect>
<connect nodeField="keyValue" protoField="l_middle_metacarpal_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_middle_metacarpal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_middle_metacarpal_OI"></ROUTE>
<OrientationInterpolator DEF="l_middle_middle_OI"><IS><connect nodeField="key" protoField="l_middle_middle_key"></connect>
<connect nodeField="keyValue" protoField="l_middle_middle_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_middle_middle_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_middle_middle_OI"></ROUTE>
<OrientationInterpolator DEF="l_middle_proximal_OI"><IS><connect nodeField="key" protoField="l_middle_proximal_key"></connect>
<connect nodeField="keyValue" protoField="l_middle_proximal_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_middle_proximal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_middle_proximal_OI"></ROUTE>
<OrientationInterpolator DEF="l_midproximal_OI"><IS><connect nodeField="key" protoField="l_midproximal_key"></connect>
<connect nodeField="keyValue" protoField="l_midproximal_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_midproximal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_midproximal_OI"></ROUTE>
<OrientationInterpolator DEF="l_midtarsal_OI"><IS><connect nodeField="key" protoField="l_midtarsal_key"></connect>
<connect nodeField="keyValue" protoField="l_midtarsal_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_midtarsal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_midtarsal_OI"></ROUTE>
<OrientationInterpolator DEF="l_pinky0_OI"><IS><connect nodeField="key" protoField="l_pinky0_key"></connect>
<connect nodeField="keyValue" protoField="l_pinky0_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_pinky0_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_pinky0_OI"></ROUTE>
<OrientationInterpolator DEF="l_pinky1_OI"><IS><connect nodeField="key" protoField="l_pinky1_key"></connect>
<connect nodeField="keyValue" protoField="l_pinky1_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_pinky1_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_pinky1_OI"></ROUTE>
<OrientationInterpolator DEF="l_pinky2_OI"><IS><connect nodeField="key" protoField="l_pinky2_key"></connect>
<connect nodeField="keyValue" protoField="l_pinky2_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_pinky2_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_pinky2_OI"></ROUTE>
<OrientationInterpolator DEF="l_pinky3_OI"><IS><connect nodeField="key" protoField="l_pinky3_key"></connect>
<connect nodeField="keyValue" protoField="l_pinky3_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_pinky3_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_pinky3_OI"></ROUTE>
<OrientationInterpolator DEF="l_pinky_distal_OI"><IS><connect nodeField="key" protoField="l_pinky_distal_key"></connect>
<connect nodeField="keyValue" protoField="l_pinky_distal_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_pinky_distal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_pinky_distal_OI"></ROUTE>
<OrientationInterpolator DEF="l_pinky_metacarpal_OI"><IS><connect nodeField="key" protoField="l_pinky_metacarpal_key"></connect>
<connect nodeField="keyValue" protoField="l_pinky_metacarpal_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_pinky_metacarpal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_pinky_metacarpal_OI"></ROUTE>
<OrientationInterpolator DEF="l_pinky_middle_OI"><IS><connect nodeField="key" protoField="l_pinky_middle_key"></connect>
<connect nodeField="keyValue" protoField="l_pinky_middle_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_pinky_middle_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_pinky_middle_OI"></ROUTE>
<OrientationInterpolator DEF="l_pinky_proximal_OI"><IS><connect nodeField="key" protoField="l_pinky_proximal_key"></connect>
<connect nodeField="keyValue" protoField="l_pinky_proximal_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_pinky_proximal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_pinky_proximal_OI"></ROUTE>
<OrientationInterpolator DEF="l_ring0_OI"><IS><connect nodeField="key" protoField="l_ring0_key"></connect>
<connect nodeField="keyValue" protoField="l_ring0_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_ring0_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_ring0_OI"></ROUTE>
<OrientationInterpolator DEF="l_ring1_OI"><IS><connect nodeField="key" protoField="l_ring1_key"></connect>
<connect nodeField="keyValue" protoField="l_ring1_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_ring1_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_ring1_OI"></ROUTE>
<OrientationInterpolator DEF="l_ring2_OI"><IS><connect nodeField="key" protoField="l_ring2_key"></connect>
<connect nodeField="keyValue" protoField="l_ring2_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_ring2_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_ring2_OI"></ROUTE>
<OrientationInterpolator DEF="l_ring3_OI"><IS><connect nodeField="key" protoField="l_ring3_key"></connect>
<connect nodeField="keyValue" protoField="l_ring3_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_ring3_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_ring3_OI"></ROUTE>
<OrientationInterpolator DEF="l_ring_distal_OI"><IS><connect nodeField="key" protoField="l_ring_distal_key"></connect>
<connect nodeField="keyValue" protoField="l_ring_distal_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_ring_distal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_ring_distal_OI"></ROUTE>
<OrientationInterpolator DEF="l_ring_metacarpal_OI"><IS><connect nodeField="key" protoField="l_ring_metacarpal_key"></connect>
<connect nodeField="keyValue" protoField="l_ring_metacarpal_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_ring_metacarpal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_ring_metacarpal_OI"></ROUTE>
<OrientationInterpolator DEF="l_ring_middle_OI"><IS><connect nodeField="key" protoField="l_ring_middle_key"></connect>
<connect nodeField="keyValue" protoField="l_ring_middle_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_ring_middle_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_ring_middle_OI"></ROUTE>
<OrientationInterpolator DEF="l_ring_proximal_OI"><IS><connect nodeField="key" protoField="l_ring_proximal_key"></connect>
<connect nodeField="keyValue" protoField="l_ring_proximal_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_ring_proximal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_ring_proximal_OI"></ROUTE>
<OrientationInterpolator DEF="l_scapula_OI"><IS><connect nodeField="key" protoField="l_scapula_key"></connect>
<connect nodeField="keyValue" protoField="l_scapula_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_scapula_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_scapula_OI"></ROUTE>
<OrientationInterpolator DEF="l_shoulder_OI"><IS><connect nodeField="key" protoField="l_shoulder_key"></connect>
<connect nodeField="keyValue" protoField="l_shoulder_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_shoulder_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_shoulder_OI"></ROUTE>
<OrientationInterpolator DEF="l_sternoclavicular_OI"><IS><connect nodeField="key" protoField="l_sternoclavicular_key"></connect>
<connect nodeField="keyValue" protoField="l_sternoclavicular_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_sternoclavicular_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_sternoclavicular_OI"></ROUTE>
<OrientationInterpolator DEF="l_subtalar_OI"><IS><connect nodeField="key" protoField="l_subtalar_key"></connect>
<connect nodeField="keyValue" protoField="l_subtalar_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_subtalar_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_subtalar_OI"></ROUTE>
<OrientationInterpolator DEF="l_thigh_OI"><IS><connect nodeField="key" protoField="l_thigh_key"></connect>
<connect nodeField="keyValue" protoField="l_thigh_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_thigh_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_thigh_OI"></ROUTE>
<OrientationInterpolator DEF="l_thumb1_OI"><IS><connect nodeField="key" protoField="l_thumb1_key"></connect>
<connect nodeField="keyValue" protoField="l_thumb1_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_thumb1_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_thumb1_OI"></ROUTE>
<OrientationInterpolator DEF="l_thumb2_OI"><IS><connect nodeField="key" protoField="l_thumb2_key"></connect>
<connect nodeField="keyValue" protoField="l_thumb2_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_thumb2_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_thumb2_OI"></ROUTE>
<OrientationInterpolator DEF="l_thumb3_OI"><IS><connect nodeField="key" protoField="l_thumb3_key"></connect>
<connect nodeField="keyValue" protoField="l_thumb3_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_thumb3_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_thumb3_OI"></ROUTE>
<OrientationInterpolator DEF="l_thumb_distal_OI"><IS><connect nodeField="key" protoField="l_thumb_distal_key"></connect>
<connect nodeField="keyValue" protoField="l_thumb_distal_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_thumb_distal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_thumb_distal_OI"></ROUTE>
<OrientationInterpolator DEF="l_thumb_metacarpal_OI"><IS><connect nodeField="key" protoField="l_thumb_metacarpal_key"></connect>
<connect nodeField="keyValue" protoField="l_thumb_metacarpal_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_thumb_metacarpal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_thumb_metacarpal_OI"></ROUTE>
<OrientationInterpolator DEF="l_thumb_proximal_OI"><IS><connect nodeField="key" protoField="l_thumb_proximal_key"></connect>
<connect nodeField="keyValue" protoField="l_thumb_proximal_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_thumb_proximal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_thumb_proximal_OI"></ROUTE>
<OrientationInterpolator DEF="l_upperarm_OI"><IS><connect nodeField="key" protoField="l_upperarm_key"></connect>
<connect nodeField="keyValue" protoField="l_upperarm_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_upperarm_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_upperarm_OI"></ROUTE>
<OrientationInterpolator DEF="l_wrist_OI"><IS><connect nodeField="key" protoField="l_wrist_key"></connect>
<connect nodeField="keyValue" protoField="l_wrist_keyValue"></connect>
<connect nodeField="value_changed" protoField="l_wrist_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="l_wrist_OI"></ROUTE>
<OrientationInterpolator DEF="pelvis_OI"><IS><connect nodeField="key" protoField="pelvis_key"></connect>
<connect nodeField="keyValue" protoField="pelvis_keyValue"></connect>
<connect nodeField="value_changed" protoField="pelvis_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="pelvis_OI"></ROUTE>
<OrientationInterpolator DEF="r_acromioclavicular_OI"><IS><connect nodeField="key" protoField="r_acromioclavicular_key"></connect>
<connect nodeField="keyValue" protoField="r_acromioclavicular_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_acromioclavicular_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_acromioclavicular_OI"></ROUTE>
<OrientationInterpolator DEF="r_ankle_OI"><IS><connect nodeField="key" protoField="r_ankle_key"></connect>
<connect nodeField="keyValue" protoField="r_ankle_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_ankle_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_ankle_OI"></ROUTE>
<OrientationInterpolator DEF="r_calf_OI"><IS><connect nodeField="key" protoField="r_calf_key"></connect>
<connect nodeField="keyValue" protoField="r_calf_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_calf_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_calf_OI"></ROUTE>
<OrientationInterpolator DEF="r_clavicle_OI"><IS><connect nodeField="key" protoField="r_clavicle_key"></connect>
<connect nodeField="keyValue" protoField="r_clavicle_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_clavicle_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_clavicle_OI"></ROUTE>
<OrientationInterpolator DEF="r_elbow_OI"><IS><connect nodeField="key" protoField="r_elbow_key"></connect>
<connect nodeField="keyValue" protoField="r_elbow_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_elbow_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_elbow_OI"></ROUTE>
<OrientationInterpolator DEF="r_eyeball_OI"><IS><connect nodeField="key" protoField="r_eyeball_key"></connect>
<connect nodeField="keyValue" protoField="r_eyeball_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_eyeball_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_eyeball_OI"></ROUTE>
<OrientationInterpolator DEF="r_eyeball_joint_OI"><IS><connect nodeField="key" protoField="r_eyeball_joint_key"></connect>
<connect nodeField="keyValue" protoField="r_eyeball_joint_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_eyeball_joint_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_eyeball_joint_OI"></ROUTE>
<OrientationInterpolator DEF="r_eyebrow_OI"><IS><connect nodeField="key" protoField="r_eyebrow_key"></connect>
<connect nodeField="keyValue" protoField="r_eyebrow_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_eyebrow_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_eyebrow_OI"></ROUTE>
<OrientationInterpolator DEF="r_eyebrow_joint_OI"><IS><connect nodeField="key" protoField="r_eyebrow_joint_key"></connect>
<connect nodeField="keyValue" protoField="r_eyebrow_joint_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_eyebrow_joint_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_eyebrow_joint_OI"></ROUTE>
<OrientationInterpolator DEF="r_eyelid_OI"><IS><connect nodeField="key" protoField="r_eyelid_key"></connect>
<connect nodeField="keyValue" protoField="r_eyelid_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_eyelid_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_eyelid_OI"></ROUTE>
<OrientationInterpolator DEF="r_eyelid_joint_OI"><IS><connect nodeField="key" protoField="r_eyelid_joint_key"></connect>
<connect nodeField="keyValue" protoField="r_eyelid_joint_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_eyelid_joint_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_eyelid_joint_OI"></ROUTE>
<OrientationInterpolator DEF="r_forearm_OI"><IS><connect nodeField="key" protoField="r_forearm_key"></connect>
<connect nodeField="keyValue" protoField="r_forearm_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_forearm_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_forearm_OI"></ROUTE>
<OrientationInterpolator DEF="r_forefoot_OI"><IS><connect nodeField="key" protoField="r_forefoot_key"></connect>
<connect nodeField="keyValue" protoField="r_forefoot_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_forefoot_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_forefoot_OI"></ROUTE>
<OrientationInterpolator DEF="r_hand_OI"><IS><connect nodeField="key" protoField="r_hand_key"></connect>
<connect nodeField="keyValue" protoField="r_hand_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_hand_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_hand_OI"></ROUTE>
<OrientationInterpolator DEF="r_hindfoot_OI"><IS><connect nodeField="key" protoField="r_hindfoot_key"></connect>
<connect nodeField="keyValue" protoField="r_hindfoot_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_hindfoot_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_hindfoot_OI"></ROUTE>
<OrientationInterpolator DEF="r_hip_OI"><IS><connect nodeField="key" protoField="r_hip_key"></connect>
<connect nodeField="keyValue" protoField="r_hip_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_hip_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_hip_OI"></ROUTE>
<OrientationInterpolator DEF="r_index0_OI"><IS><connect nodeField="key" protoField="r_index0_key"></connect>
<connect nodeField="keyValue" protoField="r_index0_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_index0_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_index0_OI"></ROUTE>
<OrientationInterpolator DEF="r_index1_OI"><IS><connect nodeField="key" protoField="r_index1_key"></connect>
<connect nodeField="keyValue" protoField="r_index1_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_index1_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_index1_OI"></ROUTE>
<OrientationInterpolator DEF="r_index2_OI"><IS><connect nodeField="key" protoField="r_index2_key"></connect>
<connect nodeField="keyValue" protoField="r_index2_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_index2_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_index2_OI"></ROUTE>
<OrientationInterpolator DEF="r_index3_OI"><IS><connect nodeField="key" protoField="r_index3_key"></connect>
<connect nodeField="keyValue" protoField="r_index3_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_index3_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_index3_OI"></ROUTE>
<OrientationInterpolator DEF="r_index_distal_OI"><IS><connect nodeField="key" protoField="r_index_distal_key"></connect>
<connect nodeField="keyValue" protoField="r_index_distal_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_index_distal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_index_distal_OI"></ROUTE>
<OrientationInterpolator DEF="r_index_metacarpal_OI"><IS><connect nodeField="key" protoField="r_index_metacarpal_key"></connect>
<connect nodeField="keyValue" protoField="r_index_metacarpal_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_index_metacarpal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_index_metacarpal_OI"></ROUTE>
<OrientationInterpolator DEF="r_index_middle_OI"><IS><connect nodeField="key" protoField="r_index_middle_key"></connect>
<connect nodeField="keyValue" protoField="r_index_middle_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_index_middle_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_index_middle_OI"></ROUTE>
<OrientationInterpolator DEF="r_index_proximal_OI"><IS><connect nodeField="key" protoField="r_index_proximal_key"></connect>
<connect nodeField="keyValue" protoField="r_index_proximal_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_index_proximal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_index_proximal_OI"></ROUTE>
<OrientationInterpolator DEF="r_knee_OI"><IS><connect nodeField="key" protoField="r_knee_key"></connect>
<connect nodeField="keyValue" protoField="r_knee_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_knee_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_knee_OI"></ROUTE>
<OrientationInterpolator DEF="r_metatarsal_OI"><IS><connect nodeField="key" protoField="r_metatarsal_key"></connect>
<connect nodeField="keyValue" protoField="r_metatarsal_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_metatarsal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_metatarsal_OI"></ROUTE>
<OrientationInterpolator DEF="r_middistal_OI"><IS><connect nodeField="key" protoField="r_middistal_key"></connect>
<connect nodeField="keyValue" protoField="r_middistal_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_middistal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_middistal_OI"></ROUTE>
<OrientationInterpolator DEF="r_middle0_OI"><IS><connect nodeField="key" protoField="r_middle0_key"></connect>
<connect nodeField="keyValue" protoField="r_middle0_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_middle0_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_middle0_OI"></ROUTE>
<OrientationInterpolator DEF="r_middle1_OI"><IS><connect nodeField="key" protoField="r_middle1_key"></connect>
<connect nodeField="keyValue" protoField="r_middle1_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_middle1_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_middle1_OI"></ROUTE>
<OrientationInterpolator DEF="r_middle2_OI"><IS><connect nodeField="key" protoField="r_middle2_key"></connect>
<connect nodeField="keyValue" protoField="r_middle2_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_middle2_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_middle2_OI"></ROUTE>
<OrientationInterpolator DEF="r_middle3_OI"><IS><connect nodeField="key" protoField="r_middle3_key"></connect>
<connect nodeField="keyValue" protoField="r_middle3_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_middle3_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_middle3_OI"></ROUTE>
<OrientationInterpolator DEF="r_middle_distal_OI"><IS><connect nodeField="key" protoField="r_middle_distal_key"></connect>
<connect nodeField="keyValue" protoField="r_middle_distal_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_middle_distal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_middle_distal_OI"></ROUTE>
<OrientationInterpolator DEF="r_middle_metacarpal_OI"><IS><connect nodeField="key" protoField="r_middle_metacarpal_key"></connect>
<connect nodeField="keyValue" protoField="r_middle_metacarpal_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_middle_metacarpal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_middle_metacarpal_OI"></ROUTE>
<OrientationInterpolator DEF="r_middle_middle_OI"><IS><connect nodeField="key" protoField="r_middle_middle_key"></connect>
<connect nodeField="keyValue" protoField="r_middle_middle_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_middle_middle_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_middle_middle_OI"></ROUTE>
<OrientationInterpolator DEF="r_middle_proximal_OI"><IS><connect nodeField="key" protoField="r_middle_proximal_key"></connect>
<connect nodeField="keyValue" protoField="r_middle_proximal_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_middle_proximal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_middle_proximal_OI"></ROUTE>
<OrientationInterpolator DEF="r_midproximal_OI"><IS><connect nodeField="key" protoField="r_midproximal_key"></connect>
<connect nodeField="keyValue" protoField="r_midproximal_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_midproximal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_midproximal_OI"></ROUTE>
<OrientationInterpolator DEF="r_midtarsal_OI"><IS><connect nodeField="key" protoField="r_midtarsal_key"></connect>
<connect nodeField="keyValue" protoField="r_midtarsal_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_midtarsal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_midtarsal_OI"></ROUTE>
<OrientationInterpolator DEF="r_pinky0_OI"><IS><connect nodeField="key" protoField="r_pinky0_key"></connect>
<connect nodeField="keyValue" protoField="r_pinky0_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_pinky0_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_pinky0_OI"></ROUTE>
<OrientationInterpolator DEF="r_pinky1_OI"><IS><connect nodeField="key" protoField="r_pinky1_key"></connect>
<connect nodeField="keyValue" protoField="r_pinky1_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_pinky1_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_pinky1_OI"></ROUTE>
<OrientationInterpolator DEF="r_pinky2_OI"><IS><connect nodeField="key" protoField="r_pinky2_key"></connect>
<connect nodeField="keyValue" protoField="r_pinky2_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_pinky2_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_pinky2_OI"></ROUTE>
<OrientationInterpolator DEF="r_pinky3_OI"><IS><connect nodeField="key" protoField="r_pinky3_key"></connect>
<connect nodeField="keyValue" protoField="r_pinky3_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_pinky3_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_pinky3_OI"></ROUTE>
<OrientationInterpolator DEF="r_pinky_distal_OI"><IS><connect nodeField="key" protoField="r_pinky_distal_key"></connect>
<connect nodeField="keyValue" protoField="r_pinky_distal_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_pinky_distal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_pinky_distal_OI"></ROUTE>
<OrientationInterpolator DEF="r_pinky_metacarpal_OI"><IS><connect nodeField="key" protoField="r_pinky_metacarpal_key"></connect>
<connect nodeField="keyValue" protoField="r_pinky_metacarpal_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_pinky_metacarpal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_pinky_metacarpal_OI"></ROUTE>
<OrientationInterpolator DEF="r_pinky_middle_OI"><IS><connect nodeField="key" protoField="r_pinky_middle_key"></connect>
<connect nodeField="keyValue" protoField="r_pinky_middle_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_pinky_middle_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_pinky_middle_OI"></ROUTE>
<OrientationInterpolator DEF="r_pinky_proximal_OI"><IS><connect nodeField="key" protoField="r_pinky_proximal_key"></connect>
<connect nodeField="keyValue" protoField="r_pinky_proximal_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_pinky_proximal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_pinky_proximal_OI"></ROUTE>
<OrientationInterpolator DEF="r_ring0_OI"><IS><connect nodeField="key" protoField="r_ring0_key"></connect>
<connect nodeField="keyValue" protoField="r_ring0_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_ring0_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_ring0_OI"></ROUTE>
<OrientationInterpolator DEF="r_ring1_OI"><IS><connect nodeField="key" protoField="r_ring1_key"></connect>
<connect nodeField="keyValue" protoField="r_ring1_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_ring1_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_ring1_OI"></ROUTE>
<OrientationInterpolator DEF="r_ring2_OI"><IS><connect nodeField="key" protoField="r_ring2_key"></connect>
<connect nodeField="keyValue" protoField="r_ring2_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_ring2_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_ring2_OI"></ROUTE>
<OrientationInterpolator DEF="r_ring3_OI"><IS><connect nodeField="key" protoField="r_ring3_key"></connect>
<connect nodeField="keyValue" protoField="r_ring3_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_ring3_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_ring3_OI"></ROUTE>
<OrientationInterpolator DEF="r_ring_distal_OI"><IS><connect nodeField="key" protoField="r_ring_distal_key"></connect>
<connect nodeField="keyValue" protoField="r_ring_distal_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_ring_distal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_ring_distal_OI"></ROUTE>
<OrientationInterpolator DEF="r_ring_metacarpal_OI"><IS><connect nodeField="key" protoField="r_ring_metacarpal_key"></connect>
<connect nodeField="keyValue" protoField="r_ring_metacarpal_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_ring_metacarpal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_ring_metacarpal_OI"></ROUTE>
<OrientationInterpolator DEF="r_ring_middle_OI"><IS><connect nodeField="key" protoField="r_ring_middle_key"></connect>
<connect nodeField="keyValue" protoField="r_ring_middle_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_ring_middle_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_ring_middle_OI"></ROUTE>
<OrientationInterpolator DEF="r_ring_proximal_OI"><IS><connect nodeField="key" protoField="r_ring_proximal_key"></connect>
<connect nodeField="keyValue" protoField="r_ring_proximal_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_ring_proximal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_ring_proximal_OI"></ROUTE>
<OrientationInterpolator DEF="r_scapula_OI"><IS><connect nodeField="key" protoField="r_scapula_key"></connect>
<connect nodeField="keyValue" protoField="r_scapula_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_scapula_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_scapula_OI"></ROUTE>
<OrientationInterpolator DEF="r_shoulder_OI"><IS><connect nodeField="key" protoField="r_shoulder_key"></connect>
<connect nodeField="keyValue" protoField="r_shoulder_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_shoulder_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_shoulder_OI"></ROUTE>
<OrientationInterpolator DEF="r_sternoclavicular_OI"><IS><connect nodeField="key" protoField="r_sternoclavicular_key"></connect>
<connect nodeField="keyValue" protoField="r_sternoclavicular_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_sternoclavicular_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_sternoclavicular_OI"></ROUTE>
<OrientationInterpolator DEF="r_subtalar_OI"><IS><connect nodeField="key" protoField="r_subtalar_key"></connect>
<connect nodeField="keyValue" protoField="r_subtalar_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_subtalar_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_subtalar_OI"></ROUTE>
<OrientationInterpolator DEF="r_thigh_OI"><IS><connect nodeField="key" protoField="r_thigh_key"></connect>
<connect nodeField="keyValue" protoField="r_thigh_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_thigh_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_thigh_OI"></ROUTE>
<OrientationInterpolator DEF="r_thumb1_OI"><IS><connect nodeField="key" protoField="r_thumb1_key"></connect>
<connect nodeField="keyValue" protoField="r_thumb1_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_thumb1_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_thumb1_OI"></ROUTE>
<OrientationInterpolator DEF="r_thumb2_OI"><IS><connect nodeField="key" protoField="r_thumb2_key"></connect>
<connect nodeField="keyValue" protoField="r_thumb2_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_thumb2_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_thumb2_OI"></ROUTE>
<OrientationInterpolator DEF="r_thumb3_OI"><IS><connect nodeField="key" protoField="r_thumb3_key"></connect>
<connect nodeField="keyValue" protoField="r_thumb3_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_thumb3_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_thumb3_OI"></ROUTE>
<OrientationInterpolator DEF="r_thumb_distal_OI"><IS><connect nodeField="key" protoField="r_thumb_distal_key"></connect>
<connect nodeField="keyValue" protoField="r_thumb_distal_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_thumb_distal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_thumb_distal_OI"></ROUTE>
<OrientationInterpolator DEF="r_thumb_metacarpal_OI"><IS><connect nodeField="key" protoField="r_thumb_metacarpal_key"></connect>
<connect nodeField="keyValue" protoField="r_thumb_metacarpal_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_thumb_metacarpal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_thumb_metacarpal_OI"></ROUTE>
<OrientationInterpolator DEF="r_thumb_proximal_OI"><IS><connect nodeField="key" protoField="r_thumb_proximal_key"></connect>
<connect nodeField="keyValue" protoField="r_thumb_proximal_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_thumb_proximal_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_thumb_proximal_OI"></ROUTE>
<OrientationInterpolator DEF="r_upperarm_OI"><IS><connect nodeField="key" protoField="r_upperarm_key"></connect>
<connect nodeField="keyValue" protoField="r_upperarm_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_upperarm_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_upperarm_OI"></ROUTE>
<OrientationInterpolator DEF="r_wrist_OI"><IS><connect nodeField="key" protoField="r_wrist_key"></connect>
<connect nodeField="keyValue" protoField="r_wrist_keyValue"></connect>
<connect nodeField="value_changed" protoField="r_wrist_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="r_wrist_OI"></ROUTE>
<OrientationInterpolator DEF="sacroiliac_OI"><IS><connect nodeField="key" protoField="sacroiliac_key"></connect>
<connect nodeField="keyValue" protoField="sacroiliac_keyValue"></connect>
<connect nodeField="value_changed" protoField="sacroiliac_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="sacroiliac_OI"></ROUTE>
<OrientationInterpolator DEF="sacrum_OI"><IS><connect nodeField="key" protoField="sacrum_key"></connect>
<connect nodeField="keyValue" protoField="sacrum_keyValue"></connect>
<connect nodeField="value_changed" protoField="sacrum_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="sacrum_OI"></ROUTE>
<OrientationInterpolator DEF="skull_OI"><IS><connect nodeField="key" protoField="skull_key"></connect>
<connect nodeField="keyValue" protoField="skull_keyValue"></connect>
<connect nodeField="value_changed" protoField="skull_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="skull_OI"></ROUTE>
<OrientationInterpolator DEF="skullbase_OI"><IS><connect nodeField="key" protoField="skullbase_key"></connect>
<connect nodeField="keyValue" protoField="skullbase_keyValue"></connect>
<connect nodeField="value_changed" protoField="skullbase_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="skullbase_OI"></ROUTE>
<OrientationInterpolator DEF="t1_OI"><IS><connect nodeField="key" protoField="t1_key"></connect>
<connect nodeField="keyValue" protoField="t1_keyValue"></connect>
<connect nodeField="value_changed" protoField="t1_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="t1_OI"></ROUTE>
<OrientationInterpolator DEF="t2_OI"><IS><connect nodeField="key" protoField="t2_key"></connect>
<connect nodeField="keyValue" protoField="t2_keyValue"></connect>
<connect nodeField="value_changed" protoField="t2_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="t2_OI"></ROUTE>
<OrientationInterpolator DEF="t3_OI"><IS><connect nodeField="key" protoField="t3_key"></connect>
<connect nodeField="keyValue" protoField="t3_keyValue"></connect>
<connect nodeField="value_changed" protoField="t3_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="t3_OI"></ROUTE>
<OrientationInterpolator DEF="t4_OI"><IS><connect nodeField="key" protoField="t4_key"></connect>
<connect nodeField="keyValue" protoField="t4_keyValue"></connect>
<connect nodeField="value_changed" protoField="t4_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="t4_OI"></ROUTE>
<OrientationInterpolator DEF="t5_OI"><IS><connect nodeField="key" protoField="t5_key"></connect>
<connect nodeField="keyValue" protoField="t5_keyValue"></connect>
<connect nodeField="value_changed" protoField="t5_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="t5_OI"></ROUTE>
<OrientationInterpolator DEF="t6_OI"><IS><connect nodeField="key" protoField="t6_key"></connect>
<connect nodeField="keyValue" protoField="t6_keyValue"></connect>
<connect nodeField="value_changed" protoField="t6_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="t6_OI"></ROUTE>
<OrientationInterpolator DEF="t7_OI"><IS><connect nodeField="key" protoField="t7_key"></connect>
<connect nodeField="keyValue" protoField="t7_keyValue"></connect>
<connect nodeField="value_changed" protoField="t7_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="t7_OI"></ROUTE>
<OrientationInterpolator DEF="t8_OI"><IS><connect nodeField="key" protoField="t8_key"></connect>
<connect nodeField="keyValue" protoField="t8_keyValue"></connect>
<connect nodeField="value_changed" protoField="t8_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="t8_OI"></ROUTE>
<OrientationInterpolator DEF="t9_OI"><IS><connect nodeField="key" protoField="t9_key"></connect>
<connect nodeField="keyValue" protoField="t9_keyValue"></connect>
<connect nodeField="value_changed" protoField="t9_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="t9_OI"></ROUTE>
<OrientationInterpolator DEF="t10_OI"><IS><connect nodeField="key" protoField="t10_key"></connect>
<connect nodeField="keyValue" protoField="t10_keyValue"></connect>
<connect nodeField="value_changed" protoField="t10_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="t10_OI"></ROUTE>
<OrientationInterpolator DEF="t11_OI"><IS><connect nodeField="key" protoField="t11_key"></connect>
<connect nodeField="keyValue" protoField="t11_keyValue"></connect>
<connect nodeField="value_changed" protoField="t11_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="t11_OI"></ROUTE>
<OrientationInterpolator DEF="t12_OI"><IS><connect nodeField="key" protoField="t12_key"></connect>
<connect nodeField="keyValue" protoField="t12_keyValue"></connect>
<connect nodeField="value_changed" protoField="t12_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="t12_OI"></ROUTE>
<OrientationInterpolator DEF="temporomandibular_OI"><IS><connect nodeField="key" protoField="temporomandibular_key"></connect>
<connect nodeField="keyValue" protoField="temporomandibular_keyValue"></connect>
<connect nodeField="value_changed" protoField="temporomandibular_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="temporomandibular_OI"></ROUTE>
<OrientationInterpolator DEF="vc1_OI"><IS><connect nodeField="key" protoField="vc1_key"></connect>
<connect nodeField="keyValue" protoField="vc1_keyValue"></connect>
<connect nodeField="value_changed" protoField="vc1_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="vc1_OI"></ROUTE>
<OrientationInterpolator DEF="vc2_OI"><IS><connect nodeField="key" protoField="vc2_key"></connect>
<connect nodeField="keyValue" protoField="vc2_keyValue"></connect>
<connect nodeField="value_changed" protoField="vc2_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="vc2_OI"></ROUTE>
<OrientationInterpolator DEF="vc3_OI"><IS><connect nodeField="key" protoField="vc3_key"></connect>
<connect nodeField="keyValue" protoField="vc3_keyValue"></connect>
<connect nodeField="value_changed" protoField="vc3_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="vc3_OI"></ROUTE>
<OrientationInterpolator DEF="vc4_OI"><IS><connect nodeField="key" protoField="vc4_key"></connect>
<connect nodeField="keyValue" protoField="vc4_keyValue"></connect>
<connect nodeField="value_changed" protoField="vc4_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="vc4_OI"></ROUTE>
<OrientationInterpolator DEF="vc5_OI"><IS><connect nodeField="key" protoField="vc5_key"></connect>
<connect nodeField="keyValue" protoField="vc5_keyValue"></connect>
<connect nodeField="value_changed" protoField="vc5_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="vc5_OI"></ROUTE>
<OrientationInterpolator DEF="vc6_OI"><IS><connect nodeField="key" protoField="vc6_key"></connect>
<connect nodeField="keyValue" protoField="vc6_keyValue"></connect>
<connect nodeField="value_changed" protoField="vc6_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="vc6_OI"></ROUTE>
<OrientationInterpolator DEF="vc7_OI"><IS><connect nodeField="key" protoField="vc7_key"></connect>
<connect nodeField="keyValue" protoField="vc7_keyValue"></connect>
<connect nodeField="value_changed" protoField="vc7_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="vc7_OI"></ROUTE>
<OrientationInterpolator DEF="vl1_OI"><IS><connect nodeField="key" protoField="vl1_key"></connect>
<connect nodeField="keyValue" protoField="vl1_keyValue"></connect>
<connect nodeField="value_changed" protoField="vl1_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="vl1_OI"></ROUTE>
<OrientationInterpolator DEF="vl2_OI"><IS><connect nodeField="key" protoField="vl2_key"></connect>
<connect nodeField="keyValue" protoField="vl2_keyValue"></connect>
<connect nodeField="value_changed" protoField="vl2_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="vl2_OI"></ROUTE>
<OrientationInterpolator DEF="vl3_OI"><IS><connect nodeField="key" protoField="vl3_key"></connect>
<connect nodeField="keyValue" protoField="vl3_keyValue"></connect>
<connect nodeField="value_changed" protoField="vl3_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="vl3_OI"></ROUTE>
<OrientationInterpolator DEF="vl4_OI"><IS><connect nodeField="key" protoField="vl4_key"></connect>
<connect nodeField="keyValue" protoField="vl4_keyValue"></connect>
<connect nodeField="value_changed" protoField="vl4_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="vl4_OI"></ROUTE>
<OrientationInterpolator DEF="vl5_OI"><IS><connect nodeField="key" protoField="vl5_key"></connect>
<connect nodeField="keyValue" protoField="vl5_keyValue"></connect>
<connect nodeField="value_changed" protoField="vl5_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="vl5_OI"></ROUTE>
<OrientationInterpolator DEF="vt1_OI"><IS><connect nodeField="key" protoField="vt1_key"></connect>
<connect nodeField="keyValue" protoField="vt1_keyValue"></connect>
<connect nodeField="value_changed" protoField="vt1_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="vt1_OI"></ROUTE>
<OrientationInterpolator DEF="vt2_OI"><IS><connect nodeField="key" protoField="vt2_key"></connect>
<connect nodeField="keyValue" protoField="vt2_keyValue"></connect>
<connect nodeField="value_changed" protoField="vt2_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="vt2_OI"></ROUTE>
<OrientationInterpolator DEF="vt3_OI"><IS><connect nodeField="key" protoField="vt3_key"></connect>
<connect nodeField="keyValue" protoField="vt3_keyValue"></connect>
<connect nodeField="value_changed" protoField="vt3_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="vt3_OI"></ROUTE>
<OrientationInterpolator DEF="vt4_OI"><IS><connect nodeField="key" protoField="vt4_key"></connect>
<connect nodeField="keyValue" protoField="vt4_keyValue"></connect>
<connect nodeField="value_changed" protoField="vt4_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="vt4_OI"></ROUTE>
<OrientationInterpolator DEF="vt5_OI"><IS><connect nodeField="key" protoField="vt5_key"></connect>
<connect nodeField="keyValue" protoField="vt5_keyValue"></connect>
<connect nodeField="value_changed" protoField="vt5_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="vt5_OI"></ROUTE>
<OrientationInterpolator DEF="vt6_OI"><IS><connect nodeField="key" protoField="vt6_key"></connect>
<connect nodeField="keyValue" protoField="vt6_keyValue"></connect>
<connect nodeField="value_changed" protoField="vt6_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="vt6_OI"></ROUTE>
<OrientationInterpolator DEF="vt7_OI"><IS><connect nodeField="key" protoField="vt7_key"></connect>
<connect nodeField="keyValue" protoField="vt7_keyValue"></connect>
<connect nodeField="value_changed" protoField="vt7_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="vt7_OI"></ROUTE>
<OrientationInterpolator DEF="vt8_OI"><IS><connect nodeField="key" protoField="vt8_key"></connect>
<connect nodeField="keyValue" protoField="vt8_keyValue"></connect>
<connect nodeField="value_changed" protoField="vt8_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="vt8_OI"></ROUTE>
<OrientationInterpolator DEF="vt9_OI"><IS><connect nodeField="key" protoField="vt9_key"></connect>
<connect nodeField="keyValue" protoField="vt9_keyValue"></connect>
<connect nodeField="value_changed" protoField="vt9_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="vt9_OI"></ROUTE>
<OrientationInterpolator DEF="vt10_OI"><IS><connect nodeField="key" protoField="vt10_key"></connect>
<connect nodeField="keyValue" protoField="vt10_keyValue"></connect>
<connect nodeField="value_changed" protoField="vt10_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="vt10_OI"></ROUTE>
<OrientationInterpolator DEF="vt11_OI"><IS><connect nodeField="key" protoField="vt11_key"></connect>
<connect nodeField="keyValue" protoField="vt11_keyValue"></connect>
<connect nodeField="value_changed" protoField="vt11_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="vt11_OI"></ROUTE>
<OrientationInterpolator DEF="vt12_OI"><IS><connect nodeField="key" protoField="vt12_key"></connect>
<connect nodeField="keyValue" protoField="vt12_keyValue"></connect>
<connect nodeField="value_changed" protoField="vt12_changed"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="BehaviorClock" toField="set_fraction" toNode="vt12_OI"></ROUTE>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare20->setName("HAnimBehavior");
ProtoDeclare20->setAppinfo("The HAnimBehavior node models a single humanoid behavior either for an entire body or simply parts of a body. It collects a TimeSensor clock with a single PositionInterpolator and multiple OrientationInterpolator nodes to provide a single humanoid behavior.");
ProtoDeclare20->setDocumentation("https://www.web3d.org/files/specifications/19774/V1.0/");
CProtoInterface* ProtoInterface21 = new CProtoInterface();
//supported Level of Articulation (LOA)
//shared common input for single TimeSensor animating all interpolators, since different Behaviors may have different cycleInterval durations
//TODO: add other X3D 3.0 TimeSensor fields (pause etc.)
//Not supported: animated translation of individual joints
//pass in key/keyValue array pairs for single PositionInterpolator
//pass in key/keyValue array pairs and expose named output for each OrientationInterpolator, joint by joint
Cfield* field22 = new Cfield();
field22->setName("supportedLOA");
field22->setAccessType("inputOutput");
field22->setAppinfo("Supported Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3.");
field22->setType("SFInt32");
field22->setValue("-1");
ProtoInterface21->addField(*field22);

Cfield* field23 = new Cfield();
field23->setName("enabled");
field23->setAccessType("inputOutput");
field23->setAppinfo("is this behavior enabled?");
field23->setType("SFBool");
field23->setValue("true");
ProtoInterface21->addField(*field23);

Cfield* field24 = new Cfield();
field24->setName("cycleInterval");
field24->setAccessType("inputOutput");
field24->setAppinfo("how long do these interpolators take to execute?");
field24->setType("SFTime");
field24->setValue("1");
ProtoInterface21->addField(*field24);

Cfield* field25 = new Cfield();
field25->setName("loop");
field25->setAccessType("inputOutput");
field25->setAppinfo("whether or not this behavior loops (e.g. walking) or is single shot (e.g. shake hands).");
field25->setType("SFBool");
field25->setValue("false");
ProtoInterface21->addField(*field25);

Cfield* field26 = new Cfield();
field26->setName("startTime");
field26->setAccessType("inputOutput");
field26->setAppinfo("when time now >= startTime isActive becomes true and TimeSensor becomes active");
field26->setType("SFTime");
field26->setValue("0");
ProtoInterface21->addField(*field26);

Cfield* field27 = new Cfield();
field27->setName("stopTime");
field27->setAccessType("inputOutput");
field27->setAppinfo("when stopTime becomes <= time now isActive becomes false and TimeSensor becomes inactive");
field27->setType("SFTime");
field27->setValue("0");
ProtoInterface21->addField(*field27);

Cfield* field28 = new Cfield();
field28->setName("pauseTime");
field28->setAccessType("inputOutput");
field28->setAppinfo("when time now >= pauseTime isPaused becomes true and TimeSensor becomes paused");
field28->setType("SFTime");
field28->setValue("0");
ProtoInterface21->addField(*field28);

Cfield* field29 = new Cfield();
field29->setName("resumeTime");
field29->setAccessType("inputOutput");
field29->setAppinfo("when resumeTime becomes <= time now isPaused becomes false and TimeSensor becomes inactive");
field29->setType("SFTime");
field29->setValue("0");
ProtoInterface21->addField(*field29);

Cfield* field30 = new Cfield();
field30->setName("cycleTime");
field30->setAccessType("outputOnly");
field30->setAppinfo("cycleTime sends a time outputOnly at startTime and also at the beginning of each new cycle");
field30->setType("SFTime");
ProtoInterface21->addField(*field30);

Cfield* field31 = new Cfield();
field31->setName("isActive");
field31->setAccessType("outputOnly");
field31->setAppinfo("isActive true/false events are sent when TimeSensor starts/stops running");
field31->setType("SFBool");
ProtoInterface21->addField(*field31);

Cfield* field32 = new Cfield();
field32->setName("isPaused");
field32->setAccessType("outputOnly");
field32->setAppinfo("isPaused true/false events are sent when TimeSensor is paused/resumed");
field32->setType("SFBool");
ProtoInterface21->addField(*field32);

Cfield* field33 = new Cfield();
field33->setName("elapsedTime");
field33->setAccessType("outputOnly");
field33->setAppinfo("current elapsed time since TimeSensor activated/running cumulative in seconds and not counting any paused time");
field33->setType("SFBool");
ProtoInterface21->addField(*field33);

Cfield* field34 = new Cfield();
field34->setName("time");
field34->setAccessType("outputOnly");
field34->setAppinfo("continuously sends the absolute time (since January 1 1970)");
field34->setType("SFBool");
ProtoInterface21->addField(*field34);

Cfield* field35 = new Cfield();
field35->setName("fraction_changed");
field35->setAccessType("outputOnly");
field35->setAppinfo("fraction_changed continuously sends value in range [0 1] showing time progress in the current cycle.");
field35->setType("SFFloat");
ProtoInterface21->addField(*field35);

Cfield* field36 = new Cfield();
field36->setName("HumanoidRoot_translation_key");
field36->setAccessType("inputOutput");
field36->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field36);

Cfield* field37 = new Cfield();
field37->setName("HumanoidRoot_translation_keyValue");
field37->setAccessType("inputOutput");
field37->setType("MFVec3f");
//no default value
ProtoInterface21->addField(*field37);

Cfield* field38 = new Cfield();
field38->setName("HumanoidRoot_translation_changed");
field38->setAccessType("outputOnly");
field38->setType("SFVec3f");
ProtoInterface21->addField(*field38);

Cfield* field39 = new Cfield();
field39->setName("HumanoidRoot_rotation_key");
field39->setAccessType("inputOutput");
field39->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field39);

Cfield* field40 = new Cfield();
field40->setName("HumanoidRoot_rotation_keyValue");
field40->setAccessType("inputOutput");
field40->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field40);

Cfield* field41 = new Cfield();
field41->setName("HumanoidRoot_rotation_changed");
field41->setAccessType("outputOnly");
field41->setType("SFRotation");
ProtoInterface21->addField(*field41);

Cfield* field42 = new Cfield();
field42->setName("c1_key");
field42->setAccessType("inputOutput");
field42->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field42);

Cfield* field43 = new Cfield();
field43->setName("c1_keyValue");
field43->setAccessType("inputOutput");
field43->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field43);

Cfield* field44 = new Cfield();
field44->setName("c1_changed");
field44->setAccessType("outputOnly");
field44->setType("SFRotation");
ProtoInterface21->addField(*field44);

Cfield* field45 = new Cfield();
field45->setName("c2_key");
field45->setAccessType("inputOutput");
field45->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field45);

Cfield* field46 = new Cfield();
field46->setName("c2_keyValue");
field46->setAccessType("inputOutput");
field46->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field46);

Cfield* field47 = new Cfield();
field47->setName("c2_changed");
field47->setAccessType("outputOnly");
field47->setType("SFRotation");
ProtoInterface21->addField(*field47);

Cfield* field48 = new Cfield();
field48->setName("c3_key");
field48->setAccessType("inputOutput");
field48->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field48);

Cfield* field49 = new Cfield();
field49->setName("c3_keyValue");
field49->setAccessType("inputOutput");
field49->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field49);

Cfield* field50 = new Cfield();
field50->setName("c3_changed");
field50->setAccessType("outputOnly");
field50->setType("SFRotation");
ProtoInterface21->addField(*field50);

Cfield* field51 = new Cfield();
field51->setName("c4_key");
field51->setAccessType("inputOutput");
field51->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field51);

Cfield* field52 = new Cfield();
field52->setName("c4_keyValue");
field52->setAccessType("inputOutput");
field52->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field52);

Cfield* field53 = new Cfield();
field53->setName("c4_changed");
field53->setAccessType("outputOnly");
field53->setType("SFRotation");
ProtoInterface21->addField(*field53);

Cfield* field54 = new Cfield();
field54->setName("c5_key");
field54->setAccessType("inputOutput");
field54->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field54);

Cfield* field55 = new Cfield();
field55->setName("c5_keyValue");
field55->setAccessType("inputOutput");
field55->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field55);

Cfield* field56 = new Cfield();
field56->setName("c5_changed");
field56->setAccessType("outputOnly");
field56->setType("SFRotation");
ProtoInterface21->addField(*field56);

Cfield* field57 = new Cfield();
field57->setName("c6_key");
field57->setAccessType("inputOutput");
field57->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field57);

Cfield* field58 = new Cfield();
field58->setName("c6_keyValue");
field58->setAccessType("inputOutput");
field58->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field58);

Cfield* field59 = new Cfield();
field59->setName("c6_changed");
field59->setAccessType("outputOnly");
field59->setType("SFRotation");
ProtoInterface21->addField(*field59);

Cfield* field60 = new Cfield();
field60->setName("c7_key");
field60->setAccessType("inputOutput");
field60->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field60);

Cfield* field61 = new Cfield();
field61->setName("c7_keyValue");
field61->setAccessType("inputOutput");
field61->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field61);

Cfield* field62 = new Cfield();
field62->setName("c7_changed");
field62->setAccessType("outputOnly");
field62->setType("SFRotation");
ProtoInterface21->addField(*field62);

Cfield* field63 = new Cfield();
field63->setName("jaw_key");
field63->setAccessType("inputOutput");
field63->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field63);

Cfield* field64 = new Cfield();
field64->setName("jaw_keyValue");
field64->setAccessType("inputOutput");
field64->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field64);

Cfield* field65 = new Cfield();
field65->setName("jaw_changed");
field65->setAccessType("outputOnly");
field65->setType("SFRotation");
ProtoInterface21->addField(*field65);

Cfield* field66 = new Cfield();
field66->setName("l1_key");
field66->setAccessType("inputOutput");
field66->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field66);

Cfield* field67 = new Cfield();
field67->setName("l1_keyValue");
field67->setAccessType("inputOutput");
field67->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field67);

Cfield* field68 = new Cfield();
field68->setName("l1_changed");
field68->setAccessType("outputOnly");
field68->setType("SFRotation");
ProtoInterface21->addField(*field68);

Cfield* field69 = new Cfield();
field69->setName("l2_key");
field69->setAccessType("inputOutput");
field69->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field69);

Cfield* field70 = new Cfield();
field70->setName("l2_keyValue");
field70->setAccessType("inputOutput");
field70->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field70);

Cfield* field71 = new Cfield();
field71->setName("l2_changed");
field71->setAccessType("outputOnly");
field71->setType("SFRotation");
ProtoInterface21->addField(*field71);

Cfield* field72 = new Cfield();
field72->setName("l3_key");
field72->setAccessType("inputOutput");
field72->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field72);

Cfield* field73 = new Cfield();
field73->setName("l3_keyValue");
field73->setAccessType("inputOutput");
field73->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field73);

Cfield* field74 = new Cfield();
field74->setName("l3_changed");
field74->setAccessType("outputOnly");
field74->setType("SFRotation");
ProtoInterface21->addField(*field74);

Cfield* field75 = new Cfield();
field75->setName("l4_key");
field75->setAccessType("inputOutput");
field75->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field75);

Cfield* field76 = new Cfield();
field76->setName("l4_keyValue");
field76->setAccessType("inputOutput");
field76->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field76);

Cfield* field77 = new Cfield();
field77->setName("l4_changed");
field77->setAccessType("outputOnly");
field77->setType("SFRotation");
ProtoInterface21->addField(*field77);

Cfield* field78 = new Cfield();
field78->setName("l5_key");
field78->setAccessType("inputOutput");
field78->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field78);

Cfield* field79 = new Cfield();
field79->setName("l5_keyValue");
field79->setAccessType("inputOutput");
field79->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field79);

Cfield* field80 = new Cfield();
field80->setName("l5_changed");
field80->setAccessType("outputOnly");
field80->setType("SFRotation");
ProtoInterface21->addField(*field80);

Cfield* field81 = new Cfield();
field81->setName("l_acromioclavicular_key");
field81->setAccessType("inputOutput");
field81->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field81);

Cfield* field82 = new Cfield();
field82->setName("l_acromioclavicular_keyValue");
field82->setAccessType("inputOutput");
field82->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field82);

Cfield* field83 = new Cfield();
field83->setName("l_acromioclavicular_changed");
field83->setAccessType("outputOnly");
field83->setType("SFRotation");
ProtoInterface21->addField(*field83);

Cfield* field84 = new Cfield();
field84->setName("l_ankle_key");
field84->setAccessType("inputOutput");
field84->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field84);

Cfield* field85 = new Cfield();
field85->setName("l_ankle_keyValue");
field85->setAccessType("inputOutput");
field85->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field85);

Cfield* field86 = new Cfield();
field86->setName("l_ankle_changed");
field86->setAccessType("outputOnly");
field86->setType("SFRotation");
ProtoInterface21->addField(*field86);

Cfield* field87 = new Cfield();
field87->setName("l_calf_key");
field87->setAccessType("inputOutput");
field87->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field87);

Cfield* field88 = new Cfield();
field88->setName("l_calf_keyValue");
field88->setAccessType("inputOutput");
field88->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field88);

Cfield* field89 = new Cfield();
field89->setName("l_calf_changed");
field89->setAccessType("outputOnly");
field89->setType("SFRotation");
ProtoInterface21->addField(*field89);

Cfield* field90 = new Cfield();
field90->setName("l_clavicle_key");
field90->setAccessType("inputOutput");
field90->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field90);

Cfield* field91 = new Cfield();
field91->setName("l_clavicle_keyValue");
field91->setAccessType("inputOutput");
field91->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field91);

Cfield* field92 = new Cfield();
field92->setName("l_clavicle_changed");
field92->setAccessType("outputOnly");
field92->setType("SFRotation");
ProtoInterface21->addField(*field92);

Cfield* field93 = new Cfield();
field93->setName("l_elbow_key");
field93->setAccessType("inputOutput");
field93->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field93);

Cfield* field94 = new Cfield();
field94->setName("l_elbow_keyValue");
field94->setAccessType("inputOutput");
field94->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field94);

Cfield* field95 = new Cfield();
field95->setName("l_elbow_changed");
field95->setAccessType("outputOnly");
field95->setType("SFRotation");
ProtoInterface21->addField(*field95);

Cfield* field96 = new Cfield();
field96->setName("l_eyeball_key");
field96->setAccessType("inputOutput");
field96->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field96);

Cfield* field97 = new Cfield();
field97->setName("l_eyeball_keyValue");
field97->setAccessType("inputOutput");
field97->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field97);

Cfield* field98 = new Cfield();
field98->setName("l_eyeball_changed");
field98->setAccessType("outputOnly");
field98->setType("SFRotation");
ProtoInterface21->addField(*field98);

Cfield* field99 = new Cfield();
field99->setName("l_eyeball_joint_key");
field99->setAccessType("inputOutput");
field99->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field99);

Cfield* field100 = new Cfield();
field100->setName("l_eyeball_joint_keyValue");
field100->setAccessType("inputOutput");
field100->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field100);

Cfield* field101 = new Cfield();
field101->setName("l_eyeball_joint_changed");
field101->setAccessType("outputOnly");
field101->setType("SFRotation");
ProtoInterface21->addField(*field101);

Cfield* field102 = new Cfield();
field102->setName("l_eyebrow_key");
field102->setAccessType("inputOutput");
field102->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field102);

Cfield* field103 = new Cfield();
field103->setName("l_eyebrow_keyValue");
field103->setAccessType("inputOutput");
field103->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field103);

Cfield* field104 = new Cfield();
field104->setName("l_eyebrow_changed");
field104->setAccessType("outputOnly");
field104->setType("SFRotation");
ProtoInterface21->addField(*field104);

Cfield* field105 = new Cfield();
field105->setName("l_eyebrow_joint_key");
field105->setAccessType("inputOutput");
field105->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field105);

Cfield* field106 = new Cfield();
field106->setName("l_eyebrow_joint_keyValue");
field106->setAccessType("inputOutput");
field106->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field106);

Cfield* field107 = new Cfield();
field107->setName("l_eyebrow_joint_changed");
field107->setAccessType("outputOnly");
field107->setType("SFRotation");
ProtoInterface21->addField(*field107);

Cfield* field108 = new Cfield();
field108->setName("l_eyelid_key");
field108->setAccessType("inputOutput");
field108->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field108);

Cfield* field109 = new Cfield();
field109->setName("l_eyelid_keyValue");
field109->setAccessType("inputOutput");
field109->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field109);

Cfield* field110 = new Cfield();
field110->setName("l_eyelid_changed");
field110->setAccessType("outputOnly");
field110->setType("SFRotation");
ProtoInterface21->addField(*field110);

Cfield* field111 = new Cfield();
field111->setName("l_eyelid_joint_key");
field111->setAccessType("inputOutput");
field111->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field111);

Cfield* field112 = new Cfield();
field112->setName("l_eyelid_joint_keyValue");
field112->setAccessType("inputOutput");
field112->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field112);

Cfield* field113 = new Cfield();
field113->setName("l_eyelid_joint_changed");
field113->setAccessType("outputOnly");
field113->setType("SFRotation");
ProtoInterface21->addField(*field113);

Cfield* field114 = new Cfield();
field114->setName("l_forearm_key");
field114->setAccessType("inputOutput");
field114->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field114);

Cfield* field115 = new Cfield();
field115->setName("l_forearm_keyValue");
field115->setAccessType("inputOutput");
field115->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field115);

Cfield* field116 = new Cfield();
field116->setName("l_forearm_changed");
field116->setAccessType("outputOnly");
field116->setType("SFRotation");
ProtoInterface21->addField(*field116);

Cfield* field117 = new Cfield();
field117->setName("l_forefoot_key");
field117->setAccessType("inputOutput");
field117->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field117);

Cfield* field118 = new Cfield();
field118->setName("l_forefoot_keyValue");
field118->setAccessType("inputOutput");
field118->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field118);

Cfield* field119 = new Cfield();
field119->setName("l_forefoot_changed");
field119->setAccessType("outputOnly");
field119->setType("SFRotation");
ProtoInterface21->addField(*field119);

Cfield* field120 = new Cfield();
field120->setName("l_hand_key");
field120->setAccessType("inputOutput");
field120->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field120);

Cfield* field121 = new Cfield();
field121->setName("l_hand_keyValue");
field121->setAccessType("inputOutput");
field121->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field121);

Cfield* field122 = new Cfield();
field122->setName("l_hand_changed");
field122->setAccessType("outputOnly");
field122->setType("SFRotation");
ProtoInterface21->addField(*field122);

Cfield* field123 = new Cfield();
field123->setName("l_hindfoot_key");
field123->setAccessType("inputOutput");
field123->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field123);

Cfield* field124 = new Cfield();
field124->setName("l_hindfoot_keyValue");
field124->setAccessType("inputOutput");
field124->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field124);

Cfield* field125 = new Cfield();
field125->setName("l_hindfoot_changed");
field125->setAccessType("outputOnly");
field125->setType("SFRotation");
ProtoInterface21->addField(*field125);

Cfield* field126 = new Cfield();
field126->setName("l_hip_key");
field126->setAccessType("inputOutput");
field126->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field126);

Cfield* field127 = new Cfield();
field127->setName("l_hip_keyValue");
field127->setAccessType("inputOutput");
field127->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field127);

Cfield* field128 = new Cfield();
field128->setName("l_hip_changed");
field128->setAccessType("outputOnly");
field128->setType("SFRotation");
ProtoInterface21->addField(*field128);

Cfield* field129 = new Cfield();
field129->setName("l_index0_key");
field129->setAccessType("inputOutput");
field129->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field129);

Cfield* field130 = new Cfield();
field130->setName("l_index0_keyValue");
field130->setAccessType("inputOutput");
field130->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field130);

Cfield* field131 = new Cfield();
field131->setName("l_index0_changed");
field131->setAccessType("outputOnly");
field131->setType("SFRotation");
ProtoInterface21->addField(*field131);

Cfield* field132 = new Cfield();
field132->setName("l_index1_key");
field132->setAccessType("inputOutput");
field132->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field132);

Cfield* field133 = new Cfield();
field133->setName("l_index1_keyValue");
field133->setAccessType("inputOutput");
field133->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field133);

Cfield* field134 = new Cfield();
field134->setName("l_index1_changed");
field134->setAccessType("outputOnly");
field134->setType("SFRotation");
ProtoInterface21->addField(*field134);

Cfield* field135 = new Cfield();
field135->setName("l_index2_key");
field135->setAccessType("inputOutput");
field135->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field135);

Cfield* field136 = new Cfield();
field136->setName("l_index2_keyValue");
field136->setAccessType("inputOutput");
field136->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field136);

Cfield* field137 = new Cfield();
field137->setName("l_index2_changed");
field137->setAccessType("outputOnly");
field137->setType("SFRotation");
ProtoInterface21->addField(*field137);

Cfield* field138 = new Cfield();
field138->setName("l_index3_key");
field138->setAccessType("inputOutput");
field138->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field138);

Cfield* field139 = new Cfield();
field139->setName("l_index3_keyValue");
field139->setAccessType("inputOutput");
field139->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field139);

Cfield* field140 = new Cfield();
field140->setName("l_index3_changed");
field140->setAccessType("outputOnly");
field140->setType("SFRotation");
ProtoInterface21->addField(*field140);

Cfield* field141 = new Cfield();
field141->setName("l_index_distal_key");
field141->setAccessType("inputOutput");
field141->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field141);

Cfield* field142 = new Cfield();
field142->setName("l_index_distal_keyValue");
field142->setAccessType("inputOutput");
field142->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field142);

Cfield* field143 = new Cfield();
field143->setName("l_index_distal_changed");
field143->setAccessType("outputOnly");
field143->setType("SFRotation");
ProtoInterface21->addField(*field143);

Cfield* field144 = new Cfield();
field144->setName("l_index_metacarpal_key");
field144->setAccessType("inputOutput");
field144->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field144);

Cfield* field145 = new Cfield();
field145->setName("l_index_metacarpal_keyValue");
field145->setAccessType("inputOutput");
field145->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field145);

Cfield* field146 = new Cfield();
field146->setName("l_index_metacarpal_changed");
field146->setAccessType("outputOnly");
field146->setType("SFRotation");
ProtoInterface21->addField(*field146);

Cfield* field147 = new Cfield();
field147->setName("l_index_middle_key");
field147->setAccessType("inputOutput");
field147->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field147);

Cfield* field148 = new Cfield();
field148->setName("l_index_middle_keyValue");
field148->setAccessType("inputOutput");
field148->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field148);

Cfield* field149 = new Cfield();
field149->setName("l_index_middle_changed");
field149->setAccessType("outputOnly");
field149->setType("SFRotation");
ProtoInterface21->addField(*field149);

Cfield* field150 = new Cfield();
field150->setName("l_index_proximal_key");
field150->setAccessType("inputOutput");
field150->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field150);

Cfield* field151 = new Cfield();
field151->setName("l_index_proximal_keyValue");
field151->setAccessType("inputOutput");
field151->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field151);

Cfield* field152 = new Cfield();
field152->setName("l_index_proximal_changed");
field152->setAccessType("outputOnly");
field152->setType("SFRotation");
ProtoInterface21->addField(*field152);

Cfield* field153 = new Cfield();
field153->setName("l_knee_key");
field153->setAccessType("inputOutput");
field153->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field153);

Cfield* field154 = new Cfield();
field154->setName("l_knee_keyValue");
field154->setAccessType("inputOutput");
field154->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field154);

Cfield* field155 = new Cfield();
field155->setName("l_knee_changed");
field155->setAccessType("outputOnly");
field155->setType("SFRotation");
ProtoInterface21->addField(*field155);

Cfield* field156 = new Cfield();
field156->setName("l_metatarsal_key");
field156->setAccessType("inputOutput");
field156->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field156);

Cfield* field157 = new Cfield();
field157->setName("l_metatarsal_keyValue");
field157->setAccessType("inputOutput");
field157->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field157);

Cfield* field158 = new Cfield();
field158->setName("l_metatarsal_changed");
field158->setAccessType("outputOnly");
field158->setType("SFRotation");
ProtoInterface21->addField(*field158);

Cfield* field159 = new Cfield();
field159->setName("l_middistal_key");
field159->setAccessType("inputOutput");
field159->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field159);

Cfield* field160 = new Cfield();
field160->setName("l_middistal_keyValue");
field160->setAccessType("inputOutput");
field160->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field160);

Cfield* field161 = new Cfield();
field161->setName("l_middistal_changed");
field161->setAccessType("outputOnly");
field161->setType("SFRotation");
ProtoInterface21->addField(*field161);

Cfield* field162 = new Cfield();
field162->setName("l_middle0_key");
field162->setAccessType("inputOutput");
field162->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field162);

Cfield* field163 = new Cfield();
field163->setName("l_middle0_keyValue");
field163->setAccessType("inputOutput");
field163->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field163);

Cfield* field164 = new Cfield();
field164->setName("l_middle0_changed");
field164->setAccessType("outputOnly");
field164->setType("SFRotation");
ProtoInterface21->addField(*field164);

Cfield* field165 = new Cfield();
field165->setName("l_middle1_key");
field165->setAccessType("inputOutput");
field165->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field165);

Cfield* field166 = new Cfield();
field166->setName("l_middle1_keyValue");
field166->setAccessType("inputOutput");
field166->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field166);

Cfield* field167 = new Cfield();
field167->setName("l_middle1_changed");
field167->setAccessType("outputOnly");
field167->setType("SFRotation");
ProtoInterface21->addField(*field167);

Cfield* field168 = new Cfield();
field168->setName("l_middle2_key");
field168->setAccessType("inputOutput");
field168->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field168);

Cfield* field169 = new Cfield();
field169->setName("l_middle2_keyValue");
field169->setAccessType("inputOutput");
field169->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field169);

Cfield* field170 = new Cfield();
field170->setName("l_middle2_changed");
field170->setAccessType("outputOnly");
field170->setType("SFRotation");
ProtoInterface21->addField(*field170);

Cfield* field171 = new Cfield();
field171->setName("l_middle3_key");
field171->setAccessType("inputOutput");
field171->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field171);

Cfield* field172 = new Cfield();
field172->setName("l_middle3_keyValue");
field172->setAccessType("inputOutput");
field172->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field172);

Cfield* field173 = new Cfield();
field173->setName("l_middle3_changed");
field173->setAccessType("outputOnly");
field173->setType("SFRotation");
ProtoInterface21->addField(*field173);

Cfield* field174 = new Cfield();
field174->setName("l_middle_distal_key");
field174->setAccessType("inputOutput");
field174->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field174);

Cfield* field175 = new Cfield();
field175->setName("l_middle_distal_keyValue");
field175->setAccessType("inputOutput");
field175->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field175);

Cfield* field176 = new Cfield();
field176->setName("l_middle_distal_changed");
field176->setAccessType("outputOnly");
field176->setType("SFRotation");
ProtoInterface21->addField(*field176);

Cfield* field177 = new Cfield();
field177->setName("l_middle_metacarpal_key");
field177->setAccessType("inputOutput");
field177->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field177);

Cfield* field178 = new Cfield();
field178->setName("l_middle_metacarpal_keyValue");
field178->setAccessType("inputOutput");
field178->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field178);

Cfield* field179 = new Cfield();
field179->setName("l_middle_metacarpal_changed");
field179->setAccessType("outputOnly");
field179->setType("SFRotation");
ProtoInterface21->addField(*field179);

Cfield* field180 = new Cfield();
field180->setName("l_middle_middle_key");
field180->setAccessType("inputOutput");
field180->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field180);

Cfield* field181 = new Cfield();
field181->setName("l_middle_middle_keyValue");
field181->setAccessType("inputOutput");
field181->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field181);

Cfield* field182 = new Cfield();
field182->setName("l_middle_middle_changed");
field182->setAccessType("outputOnly");
field182->setType("SFRotation");
ProtoInterface21->addField(*field182);

Cfield* field183 = new Cfield();
field183->setName("l_middle_proximal_key");
field183->setAccessType("inputOutput");
field183->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field183);

Cfield* field184 = new Cfield();
field184->setName("l_middle_proximal_keyValue");
field184->setAccessType("inputOutput");
field184->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field184);

Cfield* field185 = new Cfield();
field185->setName("l_middle_proximal_changed");
field185->setAccessType("outputOnly");
field185->setType("SFRotation");
ProtoInterface21->addField(*field185);

Cfield* field186 = new Cfield();
field186->setName("l_midproximal_key");
field186->setAccessType("inputOutput");
field186->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field186);

Cfield* field187 = new Cfield();
field187->setName("l_midproximal_keyValue");
field187->setAccessType("inputOutput");
field187->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field187);

Cfield* field188 = new Cfield();
field188->setName("l_midproximal_changed");
field188->setAccessType("outputOnly");
field188->setType("SFRotation");
ProtoInterface21->addField(*field188);

Cfield* field189 = new Cfield();
field189->setName("l_midtarsal_key");
field189->setAccessType("inputOutput");
field189->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field189);

Cfield* field190 = new Cfield();
field190->setName("l_midtarsal_keyValue");
field190->setAccessType("inputOutput");
field190->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field190);

Cfield* field191 = new Cfield();
field191->setName("l_midtarsal_changed");
field191->setAccessType("outputOnly");
field191->setType("SFRotation");
ProtoInterface21->addField(*field191);

Cfield* field192 = new Cfield();
field192->setName("l_pinky0_key");
field192->setAccessType("inputOutput");
field192->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field192);

Cfield* field193 = new Cfield();
field193->setName("l_pinky0_keyValue");
field193->setAccessType("inputOutput");
field193->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field193);

Cfield* field194 = new Cfield();
field194->setName("l_pinky0_changed");
field194->setAccessType("outputOnly");
field194->setType("SFRotation");
ProtoInterface21->addField(*field194);

Cfield* field195 = new Cfield();
field195->setName("l_pinky1_key");
field195->setAccessType("inputOutput");
field195->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field195);

Cfield* field196 = new Cfield();
field196->setName("l_pinky1_keyValue");
field196->setAccessType("inputOutput");
field196->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field196);

Cfield* field197 = new Cfield();
field197->setName("l_pinky1_changed");
field197->setAccessType("outputOnly");
field197->setType("SFRotation");
ProtoInterface21->addField(*field197);

Cfield* field198 = new Cfield();
field198->setName("l_pinky2_key");
field198->setAccessType("inputOutput");
field198->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field198);

Cfield* field199 = new Cfield();
field199->setName("l_pinky2_keyValue");
field199->setAccessType("inputOutput");
field199->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field199);

Cfield* field200 = new Cfield();
field200->setName("l_pinky2_changed");
field200->setAccessType("outputOnly");
field200->setType("SFRotation");
ProtoInterface21->addField(*field200);

Cfield* field201 = new Cfield();
field201->setName("l_pinky3_key");
field201->setAccessType("inputOutput");
field201->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field201);

Cfield* field202 = new Cfield();
field202->setName("l_pinky3_keyValue");
field202->setAccessType("inputOutput");
field202->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field202);

Cfield* field203 = new Cfield();
field203->setName("l_pinky3_changed");
field203->setAccessType("outputOnly");
field203->setType("SFRotation");
ProtoInterface21->addField(*field203);

Cfield* field204 = new Cfield();
field204->setName("l_pinky_distal_key");
field204->setAccessType("inputOutput");
field204->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field204);

Cfield* field205 = new Cfield();
field205->setName("l_pinky_distal_keyValue");
field205->setAccessType("inputOutput");
field205->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field205);

Cfield* field206 = new Cfield();
field206->setName("l_pinky_distal_changed");
field206->setAccessType("outputOnly");
field206->setType("SFRotation");
ProtoInterface21->addField(*field206);

Cfield* field207 = new Cfield();
field207->setName("l_pinky_metacarpal_key");
field207->setAccessType("inputOutput");
field207->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field207);

Cfield* field208 = new Cfield();
field208->setName("l_pinky_metacarpal_keyValue");
field208->setAccessType("inputOutput");
field208->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field208);

Cfield* field209 = new Cfield();
field209->setName("l_pinky_metacarpal_changed");
field209->setAccessType("outputOnly");
field209->setType("SFRotation");
ProtoInterface21->addField(*field209);

Cfield* field210 = new Cfield();
field210->setName("l_pinky_middle_key");
field210->setAccessType("inputOutput");
field210->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field210);

Cfield* field211 = new Cfield();
field211->setName("l_pinky_middle_keyValue");
field211->setAccessType("inputOutput");
field211->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field211);

Cfield* field212 = new Cfield();
field212->setName("l_pinky_middle_changed");
field212->setAccessType("outputOnly");
field212->setType("SFRotation");
ProtoInterface21->addField(*field212);

Cfield* field213 = new Cfield();
field213->setName("l_pinky_proximal_key");
field213->setAccessType("inputOutput");
field213->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field213);

Cfield* field214 = new Cfield();
field214->setName("l_pinky_proximal_keyValue");
field214->setAccessType("inputOutput");
field214->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field214);

Cfield* field215 = new Cfield();
field215->setName("l_pinky_proximal_changed");
field215->setAccessType("outputOnly");
field215->setType("SFRotation");
ProtoInterface21->addField(*field215);

Cfield* field216 = new Cfield();
field216->setName("l_ring0_key");
field216->setAccessType("inputOutput");
field216->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field216);

Cfield* field217 = new Cfield();
field217->setName("l_ring0_keyValue");
field217->setAccessType("inputOutput");
field217->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field217);

Cfield* field218 = new Cfield();
field218->setName("l_ring0_changed");
field218->setAccessType("outputOnly");
field218->setType("SFRotation");
ProtoInterface21->addField(*field218);

Cfield* field219 = new Cfield();
field219->setName("l_ring1_key");
field219->setAccessType("inputOutput");
field219->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field219);

Cfield* field220 = new Cfield();
field220->setName("l_ring1_keyValue");
field220->setAccessType("inputOutput");
field220->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field220);

Cfield* field221 = new Cfield();
field221->setName("l_ring1_changed");
field221->setAccessType("outputOnly");
field221->setType("SFRotation");
ProtoInterface21->addField(*field221);

Cfield* field222 = new Cfield();
field222->setName("l_ring2_key");
field222->setAccessType("inputOutput");
field222->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field222);

Cfield* field223 = new Cfield();
field223->setName("l_ring2_keyValue");
field223->setAccessType("inputOutput");
field223->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field223);

Cfield* field224 = new Cfield();
field224->setName("l_ring2_changed");
field224->setAccessType("outputOnly");
field224->setType("SFRotation");
ProtoInterface21->addField(*field224);

Cfield* field225 = new Cfield();
field225->setName("l_ring3_key");
field225->setAccessType("inputOutput");
field225->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field225);

Cfield* field226 = new Cfield();
field226->setName("l_ring3_keyValue");
field226->setAccessType("inputOutput");
field226->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field226);

Cfield* field227 = new Cfield();
field227->setName("l_ring3_changed");
field227->setAccessType("outputOnly");
field227->setType("SFRotation");
ProtoInterface21->addField(*field227);

Cfield* field228 = new Cfield();
field228->setName("l_ring_distal_key");
field228->setAccessType("inputOutput");
field228->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field228);

Cfield* field229 = new Cfield();
field229->setName("l_ring_distal_keyValue");
field229->setAccessType("inputOutput");
field229->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field229);

Cfield* field230 = new Cfield();
field230->setName("l_ring_distal_changed");
field230->setAccessType("outputOnly");
field230->setType("SFRotation");
ProtoInterface21->addField(*field230);

Cfield* field231 = new Cfield();
field231->setName("l_ring_metacarpal_key");
field231->setAccessType("inputOutput");
field231->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field231);

Cfield* field232 = new Cfield();
field232->setName("l_ring_metacarpal_keyValue");
field232->setAccessType("inputOutput");
field232->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field232);

Cfield* field233 = new Cfield();
field233->setName("l_ring_metacarpal_changed");
field233->setAccessType("outputOnly");
field233->setType("SFRotation");
ProtoInterface21->addField(*field233);

Cfield* field234 = new Cfield();
field234->setName("l_ring_middle_key");
field234->setAccessType("inputOutput");
field234->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field234);

Cfield* field235 = new Cfield();
field235->setName("l_ring_middle_keyValue");
field235->setAccessType("inputOutput");
field235->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field235);

Cfield* field236 = new Cfield();
field236->setName("l_ring_middle_changed");
field236->setAccessType("outputOnly");
field236->setType("SFRotation");
ProtoInterface21->addField(*field236);

Cfield* field237 = new Cfield();
field237->setName("l_ring_proximal_key");
field237->setAccessType("inputOutput");
field237->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field237);

Cfield* field238 = new Cfield();
field238->setName("l_ring_proximal_keyValue");
field238->setAccessType("inputOutput");
field238->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field238);

Cfield* field239 = new Cfield();
field239->setName("l_ring_proximal_changed");
field239->setAccessType("outputOnly");
field239->setType("SFRotation");
ProtoInterface21->addField(*field239);

Cfield* field240 = new Cfield();
field240->setName("l_scapula_key");
field240->setAccessType("inputOutput");
field240->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field240);

Cfield* field241 = new Cfield();
field241->setName("l_scapula_keyValue");
field241->setAccessType("inputOutput");
field241->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field241);

Cfield* field242 = new Cfield();
field242->setName("l_scapula_changed");
field242->setAccessType("outputOnly");
field242->setType("SFRotation");
ProtoInterface21->addField(*field242);

Cfield* field243 = new Cfield();
field243->setName("l_shoulder_key");
field243->setAccessType("inputOutput");
field243->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field243);

Cfield* field244 = new Cfield();
field244->setName("l_shoulder_keyValue");
field244->setAccessType("inputOutput");
field244->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field244);

Cfield* field245 = new Cfield();
field245->setName("l_shoulder_changed");
field245->setAccessType("outputOnly");
field245->setType("SFRotation");
ProtoInterface21->addField(*field245);

Cfield* field246 = new Cfield();
field246->setName("l_sternoclavicular_key");
field246->setAccessType("inputOutput");
field246->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field246);

Cfield* field247 = new Cfield();
field247->setName("l_sternoclavicular_keyValue");
field247->setAccessType("inputOutput");
field247->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field247);

Cfield* field248 = new Cfield();
field248->setName("l_sternoclavicular_changed");
field248->setAccessType("outputOnly");
field248->setType("SFRotation");
ProtoInterface21->addField(*field248);

Cfield* field249 = new Cfield();
field249->setName("l_subtalar_key");
field249->setAccessType("inputOutput");
field249->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field249);

Cfield* field250 = new Cfield();
field250->setName("l_subtalar_keyValue");
field250->setAccessType("inputOutput");
field250->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field250);

Cfield* field251 = new Cfield();
field251->setName("l_subtalar_changed");
field251->setAccessType("outputOnly");
field251->setType("SFRotation");
ProtoInterface21->addField(*field251);

Cfield* field252 = new Cfield();
field252->setName("l_thigh_key");
field252->setAccessType("inputOutput");
field252->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field252);

Cfield* field253 = new Cfield();
field253->setName("l_thigh_keyValue");
field253->setAccessType("inputOutput");
field253->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field253);

Cfield* field254 = new Cfield();
field254->setName("l_thigh_changed");
field254->setAccessType("outputOnly");
field254->setType("SFRotation");
ProtoInterface21->addField(*field254);

Cfield* field255 = new Cfield();
field255->setName("l_thumb1_key");
field255->setAccessType("inputOutput");
field255->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field255);

Cfield* field256 = new Cfield();
field256->setName("l_thumb1_keyValue");
field256->setAccessType("inputOutput");
field256->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field256);

Cfield* field257 = new Cfield();
field257->setName("l_thumb1_changed");
field257->setAccessType("outputOnly");
field257->setType("SFRotation");
ProtoInterface21->addField(*field257);

Cfield* field258 = new Cfield();
field258->setName("l_thumb2_key");
field258->setAccessType("inputOutput");
field258->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field258);

Cfield* field259 = new Cfield();
field259->setName("l_thumb2_keyValue");
field259->setAccessType("inputOutput");
field259->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field259);

Cfield* field260 = new Cfield();
field260->setName("l_thumb2_changed");
field260->setAccessType("outputOnly");
field260->setType("SFRotation");
ProtoInterface21->addField(*field260);

Cfield* field261 = new Cfield();
field261->setName("l_thumb3_key");
field261->setAccessType("inputOutput");
field261->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field261);

Cfield* field262 = new Cfield();
field262->setName("l_thumb3_keyValue");
field262->setAccessType("inputOutput");
field262->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field262);

Cfield* field263 = new Cfield();
field263->setName("l_thumb3_changed");
field263->setAccessType("outputOnly");
field263->setType("SFRotation");
ProtoInterface21->addField(*field263);

Cfield* field264 = new Cfield();
field264->setName("l_thumb_distal_key");
field264->setAccessType("inputOutput");
field264->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field264);

Cfield* field265 = new Cfield();
field265->setName("l_thumb_distal_keyValue");
field265->setAccessType("inputOutput");
field265->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field265);

Cfield* field266 = new Cfield();
field266->setName("l_thumb_distal_changed");
field266->setAccessType("outputOnly");
field266->setType("SFRotation");
ProtoInterface21->addField(*field266);

Cfield* field267 = new Cfield();
field267->setName("l_thumb_metacarpal_key");
field267->setAccessType("inputOutput");
field267->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field267);

Cfield* field268 = new Cfield();
field268->setName("l_thumb_metacarpal_keyValue");
field268->setAccessType("inputOutput");
field268->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field268);

Cfield* field269 = new Cfield();
field269->setName("l_thumb_metacarpal_changed");
field269->setAccessType("outputOnly");
field269->setType("SFRotation");
ProtoInterface21->addField(*field269);

Cfield* field270 = new Cfield();
field270->setName("l_thumb_proximal_key");
field270->setAccessType("inputOutput");
field270->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field270);

Cfield* field271 = new Cfield();
field271->setName("l_thumb_proximal_keyValue");
field271->setAccessType("inputOutput");
field271->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field271);

Cfield* field272 = new Cfield();
field272->setName("l_thumb_proximal_changed");
field272->setAccessType("outputOnly");
field272->setType("SFRotation");
ProtoInterface21->addField(*field272);

Cfield* field273 = new Cfield();
field273->setName("l_upperarm_key");
field273->setAccessType("inputOutput");
field273->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field273);

Cfield* field274 = new Cfield();
field274->setName("l_upperarm_keyValue");
field274->setAccessType("inputOutput");
field274->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field274);

Cfield* field275 = new Cfield();
field275->setName("l_upperarm_changed");
field275->setAccessType("outputOnly");
field275->setType("SFRotation");
ProtoInterface21->addField(*field275);

Cfield* field276 = new Cfield();
field276->setName("l_wrist_key");
field276->setAccessType("inputOutput");
field276->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field276);

Cfield* field277 = new Cfield();
field277->setName("l_wrist_keyValue");
field277->setAccessType("inputOutput");
field277->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field277);

Cfield* field278 = new Cfield();
field278->setName("l_wrist_changed");
field278->setAccessType("outputOnly");
field278->setType("SFRotation");
ProtoInterface21->addField(*field278);

Cfield* field279 = new Cfield();
field279->setName("pelvis_key");
field279->setAccessType("inputOutput");
field279->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field279);

Cfield* field280 = new Cfield();
field280->setName("pelvis_keyValue");
field280->setAccessType("inputOutput");
field280->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field280);

Cfield* field281 = new Cfield();
field281->setName("pelvis_changed");
field281->setAccessType("outputOnly");
field281->setType("SFRotation");
ProtoInterface21->addField(*field281);

Cfield* field282 = new Cfield();
field282->setName("r_acromioclavicular_key");
field282->setAccessType("inputOutput");
field282->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field282);

Cfield* field283 = new Cfield();
field283->setName("r_acromioclavicular_keyValue");
field283->setAccessType("inputOutput");
field283->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field283);

Cfield* field284 = new Cfield();
field284->setName("r_acromioclavicular_changed");
field284->setAccessType("outputOnly");
field284->setType("SFRotation");
ProtoInterface21->addField(*field284);

Cfield* field285 = new Cfield();
field285->setName("r_ankle_key");
field285->setAccessType("inputOutput");
field285->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field285);

Cfield* field286 = new Cfield();
field286->setName("r_ankle_keyValue");
field286->setAccessType("inputOutput");
field286->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field286);

Cfield* field287 = new Cfield();
field287->setName("r_ankle_changed");
field287->setAccessType("outputOnly");
field287->setType("SFRotation");
ProtoInterface21->addField(*field287);

Cfield* field288 = new Cfield();
field288->setName("r_calf_key");
field288->setAccessType("inputOutput");
field288->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field288);

Cfield* field289 = new Cfield();
field289->setName("r_calf_keyValue");
field289->setAccessType("inputOutput");
field289->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field289);

Cfield* field290 = new Cfield();
field290->setName("r_calf_changed");
field290->setAccessType("outputOnly");
field290->setType("SFRotation");
ProtoInterface21->addField(*field290);

Cfield* field291 = new Cfield();
field291->setName("r_clavicle_key");
field291->setAccessType("inputOutput");
field291->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field291);

Cfield* field292 = new Cfield();
field292->setName("r_clavicle_keyValue");
field292->setAccessType("inputOutput");
field292->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field292);

Cfield* field293 = new Cfield();
field293->setName("r_clavicle_changed");
field293->setAccessType("outputOnly");
field293->setType("SFRotation");
ProtoInterface21->addField(*field293);

Cfield* field294 = new Cfield();
field294->setName("r_elbow_key");
field294->setAccessType("inputOutput");
field294->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field294);

Cfield* field295 = new Cfield();
field295->setName("r_elbow_keyValue");
field295->setAccessType("inputOutput");
field295->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field295);

Cfield* field296 = new Cfield();
field296->setName("r_elbow_changed");
field296->setAccessType("outputOnly");
field296->setType("SFRotation");
ProtoInterface21->addField(*field296);

Cfield* field297 = new Cfield();
field297->setName("r_eyeball_key");
field297->setAccessType("inputOutput");
field297->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field297);

Cfield* field298 = new Cfield();
field298->setName("r_eyeball_keyValue");
field298->setAccessType("inputOutput");
field298->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field298);

Cfield* field299 = new Cfield();
field299->setName("r_eyeball_changed");
field299->setAccessType("outputOnly");
field299->setType("SFRotation");
ProtoInterface21->addField(*field299);

Cfield* field300 = new Cfield();
field300->setName("r_eyeball_joint_key");
field300->setAccessType("inputOutput");
field300->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field300);

Cfield* field301 = new Cfield();
field301->setName("r_eyeball_joint_keyValue");
field301->setAccessType("inputOutput");
field301->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field301);

Cfield* field302 = new Cfield();
field302->setName("r_eyeball_joint_changed");
field302->setAccessType("outputOnly");
field302->setType("SFRotation");
ProtoInterface21->addField(*field302);

Cfield* field303 = new Cfield();
field303->setName("r_eyebrow_key");
field303->setAccessType("inputOutput");
field303->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field303);

Cfield* field304 = new Cfield();
field304->setName("r_eyebrow_keyValue");
field304->setAccessType("inputOutput");
field304->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field304);

Cfield* field305 = new Cfield();
field305->setName("r_eyebrow_changed");
field305->setAccessType("outputOnly");
field305->setType("SFRotation");
ProtoInterface21->addField(*field305);

Cfield* field306 = new Cfield();
field306->setName("r_eyebrow_joint_key");
field306->setAccessType("inputOutput");
field306->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field306);

Cfield* field307 = new Cfield();
field307->setName("r_eyebrow_joint_keyValue");
field307->setAccessType("inputOutput");
field307->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field307);

Cfield* field308 = new Cfield();
field308->setName("r_eyebrow_joint_changed");
field308->setAccessType("outputOnly");
field308->setType("SFRotation");
ProtoInterface21->addField(*field308);

Cfield* field309 = new Cfield();
field309->setName("r_eyelid_key");
field309->setAccessType("inputOutput");
field309->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field309);

Cfield* field310 = new Cfield();
field310->setName("r_eyelid_keyValue");
field310->setAccessType("inputOutput");
field310->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field310);

Cfield* field311 = new Cfield();
field311->setName("r_eyelid_changed");
field311->setAccessType("outputOnly");
field311->setType("SFRotation");
ProtoInterface21->addField(*field311);

Cfield* field312 = new Cfield();
field312->setName("r_eyelid_joint_key");
field312->setAccessType("inputOutput");
field312->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field312);

Cfield* field313 = new Cfield();
field313->setName("r_eyelid_joint_keyValue");
field313->setAccessType("inputOutput");
field313->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field313);

Cfield* field314 = new Cfield();
field314->setName("r_eyelid_joint_changed");
field314->setAccessType("outputOnly");
field314->setType("SFRotation");
ProtoInterface21->addField(*field314);

Cfield* field315 = new Cfield();
field315->setName("r_forearm_key");
field315->setAccessType("inputOutput");
field315->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field315);

Cfield* field316 = new Cfield();
field316->setName("r_forearm_keyValue");
field316->setAccessType("inputOutput");
field316->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field316);

Cfield* field317 = new Cfield();
field317->setName("r_forearm_changed");
field317->setAccessType("outputOnly");
field317->setType("SFRotation");
ProtoInterface21->addField(*field317);

Cfield* field318 = new Cfield();
field318->setName("r_forefoot_key");
field318->setAccessType("inputOutput");
field318->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field318);

Cfield* field319 = new Cfield();
field319->setName("r_forefoot_keyValue");
field319->setAccessType("inputOutput");
field319->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field319);

Cfield* field320 = new Cfield();
field320->setName("r_forefoot_changed");
field320->setAccessType("outputOnly");
field320->setType("SFRotation");
ProtoInterface21->addField(*field320);

Cfield* field321 = new Cfield();
field321->setName("r_hand_key");
field321->setAccessType("inputOutput");
field321->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field321);

Cfield* field322 = new Cfield();
field322->setName("r_hand_keyValue");
field322->setAccessType("inputOutput");
field322->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field322);

Cfield* field323 = new Cfield();
field323->setName("r_hand_changed");
field323->setAccessType("outputOnly");
field323->setType("SFRotation");
ProtoInterface21->addField(*field323);

Cfield* field324 = new Cfield();
field324->setName("r_hindfoot_key");
field324->setAccessType("inputOutput");
field324->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field324);

Cfield* field325 = new Cfield();
field325->setName("r_hindfoot_keyValue");
field325->setAccessType("inputOutput");
field325->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field325);

Cfield* field326 = new Cfield();
field326->setName("r_hindfoot_changed");
field326->setAccessType("outputOnly");
field326->setType("SFRotation");
ProtoInterface21->addField(*field326);

Cfield* field327 = new Cfield();
field327->setName("r_hip_key");
field327->setAccessType("inputOutput");
field327->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field327);

Cfield* field328 = new Cfield();
field328->setName("r_hip_keyValue");
field328->setAccessType("inputOutput");
field328->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field328);

Cfield* field329 = new Cfield();
field329->setName("r_hip_changed");
field329->setAccessType("outputOnly");
field329->setType("SFRotation");
ProtoInterface21->addField(*field329);

Cfield* field330 = new Cfield();
field330->setName("r_index0_key");
field330->setAccessType("inputOutput");
field330->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field330);

Cfield* field331 = new Cfield();
field331->setName("r_index0_keyValue");
field331->setAccessType("inputOutput");
field331->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field331);

Cfield* field332 = new Cfield();
field332->setName("r_index0_changed");
field332->setAccessType("outputOnly");
field332->setType("SFRotation");
ProtoInterface21->addField(*field332);

Cfield* field333 = new Cfield();
field333->setName("r_index1_key");
field333->setAccessType("inputOutput");
field333->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field333);

Cfield* field334 = new Cfield();
field334->setName("r_index1_keyValue");
field334->setAccessType("inputOutput");
field334->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field334);

Cfield* field335 = new Cfield();
field335->setName("r_index1_changed");
field335->setAccessType("outputOnly");
field335->setType("SFRotation");
ProtoInterface21->addField(*field335);

Cfield* field336 = new Cfield();
field336->setName("r_index2_key");
field336->setAccessType("inputOutput");
field336->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field336);

Cfield* field337 = new Cfield();
field337->setName("r_index2_keyValue");
field337->setAccessType("inputOutput");
field337->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field337);

Cfield* field338 = new Cfield();
field338->setName("r_index2_changed");
field338->setAccessType("outputOnly");
field338->setType("SFRotation");
ProtoInterface21->addField(*field338);

Cfield* field339 = new Cfield();
field339->setName("r_index3_key");
field339->setAccessType("inputOutput");
field339->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field339);

Cfield* field340 = new Cfield();
field340->setName("r_index3_keyValue");
field340->setAccessType("inputOutput");
field340->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field340);

Cfield* field341 = new Cfield();
field341->setName("r_index3_changed");
field341->setAccessType("outputOnly");
field341->setType("SFRotation");
ProtoInterface21->addField(*field341);

Cfield* field342 = new Cfield();
field342->setName("r_index_distal_key");
field342->setAccessType("inputOutput");
field342->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field342);

Cfield* field343 = new Cfield();
field343->setName("r_index_distal_keyValue");
field343->setAccessType("inputOutput");
field343->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field343);

Cfield* field344 = new Cfield();
field344->setName("r_index_distal_changed");
field344->setAccessType("outputOnly");
field344->setType("SFRotation");
ProtoInterface21->addField(*field344);

Cfield* field345 = new Cfield();
field345->setName("r_index_metacarpal_key");
field345->setAccessType("inputOutput");
field345->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field345);

Cfield* field346 = new Cfield();
field346->setName("r_index_metacarpal_keyValue");
field346->setAccessType("inputOutput");
field346->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field346);

Cfield* field347 = new Cfield();
field347->setName("r_index_metacarpal_changed");
field347->setAccessType("outputOnly");
field347->setType("SFRotation");
ProtoInterface21->addField(*field347);

Cfield* field348 = new Cfield();
field348->setName("r_index_middle_key");
field348->setAccessType("inputOutput");
field348->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field348);

Cfield* field349 = new Cfield();
field349->setName("r_index_middle_keyValue");
field349->setAccessType("inputOutput");
field349->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field349);

Cfield* field350 = new Cfield();
field350->setName("r_index_middle_changed");
field350->setAccessType("outputOnly");
field350->setType("SFRotation");
ProtoInterface21->addField(*field350);

Cfield* field351 = new Cfield();
field351->setName("r_index_proximal_key");
field351->setAccessType("inputOutput");
field351->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field351);

Cfield* field352 = new Cfield();
field352->setName("r_index_proximal_keyValue");
field352->setAccessType("inputOutput");
field352->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field352);

Cfield* field353 = new Cfield();
field353->setName("r_index_proximal_changed");
field353->setAccessType("outputOnly");
field353->setType("SFRotation");
ProtoInterface21->addField(*field353);

Cfield* field354 = new Cfield();
field354->setName("r_knee_key");
field354->setAccessType("inputOutput");
field354->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field354);

Cfield* field355 = new Cfield();
field355->setName("r_knee_keyValue");
field355->setAccessType("inputOutput");
field355->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field355);

Cfield* field356 = new Cfield();
field356->setName("r_knee_changed");
field356->setAccessType("outputOnly");
field356->setType("SFRotation");
ProtoInterface21->addField(*field356);

Cfield* field357 = new Cfield();
field357->setName("r_metatarsal_key");
field357->setAccessType("inputOutput");
field357->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field357);

Cfield* field358 = new Cfield();
field358->setName("r_metatarsal_keyValue");
field358->setAccessType("inputOutput");
field358->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field358);

Cfield* field359 = new Cfield();
field359->setName("r_metatarsal_changed");
field359->setAccessType("outputOnly");
field359->setType("SFRotation");
ProtoInterface21->addField(*field359);

Cfield* field360 = new Cfield();
field360->setName("r_middistal_key");
field360->setAccessType("inputOutput");
field360->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field360);

Cfield* field361 = new Cfield();
field361->setName("r_middistal_keyValue");
field361->setAccessType("inputOutput");
field361->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field361);

Cfield* field362 = new Cfield();
field362->setName("r_middistal_changed");
field362->setAccessType("outputOnly");
field362->setType("SFRotation");
ProtoInterface21->addField(*field362);

Cfield* field363 = new Cfield();
field363->setName("r_middle0_key");
field363->setAccessType("inputOutput");
field363->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field363);

Cfield* field364 = new Cfield();
field364->setName("r_middle0_keyValue");
field364->setAccessType("inputOutput");
field364->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field364);

Cfield* field365 = new Cfield();
field365->setName("r_middle0_changed");
field365->setAccessType("outputOnly");
field365->setType("SFRotation");
ProtoInterface21->addField(*field365);

Cfield* field366 = new Cfield();
field366->setName("r_middle1_key");
field366->setAccessType("inputOutput");
field366->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field366);

Cfield* field367 = new Cfield();
field367->setName("r_middle1_keyValue");
field367->setAccessType("inputOutput");
field367->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field367);

Cfield* field368 = new Cfield();
field368->setName("r_middle1_changed");
field368->setAccessType("outputOnly");
field368->setType("SFRotation");
ProtoInterface21->addField(*field368);

Cfield* field369 = new Cfield();
field369->setName("r_middle2_key");
field369->setAccessType("inputOutput");
field369->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field369);

Cfield* field370 = new Cfield();
field370->setName("r_middle2_keyValue");
field370->setAccessType("inputOutput");
field370->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field370);

Cfield* field371 = new Cfield();
field371->setName("r_middle2_changed");
field371->setAccessType("outputOnly");
field371->setType("SFRotation");
ProtoInterface21->addField(*field371);

Cfield* field372 = new Cfield();
field372->setName("r_middle3_key");
field372->setAccessType("inputOutput");
field372->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field372);

Cfield* field373 = new Cfield();
field373->setName("r_middle3_keyValue");
field373->setAccessType("inputOutput");
field373->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field373);

Cfield* field374 = new Cfield();
field374->setName("r_middle3_changed");
field374->setAccessType("outputOnly");
field374->setType("SFRotation");
ProtoInterface21->addField(*field374);

Cfield* field375 = new Cfield();
field375->setName("r_middle_distal_key");
field375->setAccessType("inputOutput");
field375->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field375);

Cfield* field376 = new Cfield();
field376->setName("r_middle_distal_keyValue");
field376->setAccessType("inputOutput");
field376->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field376);

Cfield* field377 = new Cfield();
field377->setName("r_middle_distal_changed");
field377->setAccessType("outputOnly");
field377->setType("SFRotation");
ProtoInterface21->addField(*field377);

Cfield* field378 = new Cfield();
field378->setName("r_middle_metacarpal_key");
field378->setAccessType("inputOutput");
field378->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field378);

Cfield* field379 = new Cfield();
field379->setName("r_middle_metacarpal_keyValue");
field379->setAccessType("inputOutput");
field379->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field379);

Cfield* field380 = new Cfield();
field380->setName("r_middle_metacarpal_changed");
field380->setAccessType("outputOnly");
field380->setType("SFRotation");
ProtoInterface21->addField(*field380);

Cfield* field381 = new Cfield();
field381->setName("r_middle_middle_key");
field381->setAccessType("inputOutput");
field381->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field381);

Cfield* field382 = new Cfield();
field382->setName("r_middle_middle_keyValue");
field382->setAccessType("inputOutput");
field382->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field382);

Cfield* field383 = new Cfield();
field383->setName("r_middle_middle_changed");
field383->setAccessType("outputOnly");
field383->setType("SFRotation");
ProtoInterface21->addField(*field383);

Cfield* field384 = new Cfield();
field384->setName("r_middle_proximal_key");
field384->setAccessType("inputOutput");
field384->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field384);

Cfield* field385 = new Cfield();
field385->setName("r_middle_proximal_keyValue");
field385->setAccessType("inputOutput");
field385->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field385);

Cfield* field386 = new Cfield();
field386->setName("r_middle_proximal_changed");
field386->setAccessType("outputOnly");
field386->setType("SFRotation");
ProtoInterface21->addField(*field386);

Cfield* field387 = new Cfield();
field387->setName("r_midproximal_key");
field387->setAccessType("inputOutput");
field387->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field387);

Cfield* field388 = new Cfield();
field388->setName("r_midproximal_keyValue");
field388->setAccessType("inputOutput");
field388->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field388);

Cfield* field389 = new Cfield();
field389->setName("r_midproximal_changed");
field389->setAccessType("outputOnly");
field389->setType("SFRotation");
ProtoInterface21->addField(*field389);

Cfield* field390 = new Cfield();
field390->setName("r_midtarsal_key");
field390->setAccessType("inputOutput");
field390->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field390);

Cfield* field391 = new Cfield();
field391->setName("r_midtarsal_keyValue");
field391->setAccessType("inputOutput");
field391->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field391);

Cfield* field392 = new Cfield();
field392->setName("r_midtarsal_changed");
field392->setAccessType("outputOnly");
field392->setType("SFRotation");
ProtoInterface21->addField(*field392);

Cfield* field393 = new Cfield();
field393->setName("r_pinky0_key");
field393->setAccessType("inputOutput");
field393->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field393);

Cfield* field394 = new Cfield();
field394->setName("r_pinky0_keyValue");
field394->setAccessType("inputOutput");
field394->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field394);

Cfield* field395 = new Cfield();
field395->setName("r_pinky0_changed");
field395->setAccessType("outputOnly");
field395->setType("SFRotation");
ProtoInterface21->addField(*field395);

Cfield* field396 = new Cfield();
field396->setName("r_pinky1_key");
field396->setAccessType("inputOutput");
field396->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field396);

Cfield* field397 = new Cfield();
field397->setName("r_pinky1_keyValue");
field397->setAccessType("inputOutput");
field397->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field397);

Cfield* field398 = new Cfield();
field398->setName("r_pinky1_changed");
field398->setAccessType("outputOnly");
field398->setType("SFRotation");
ProtoInterface21->addField(*field398);

Cfield* field399 = new Cfield();
field399->setName("r_pinky2_key");
field399->setAccessType("inputOutput");
field399->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field399);

Cfield* field400 = new Cfield();
field400->setName("r_pinky2_keyValue");
field400->setAccessType("inputOutput");
field400->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field400);

Cfield* field401 = new Cfield();
field401->setName("r_pinky2_changed");
field401->setAccessType("outputOnly");
field401->setType("SFRotation");
ProtoInterface21->addField(*field401);

Cfield* field402 = new Cfield();
field402->setName("r_pinky3_key");
field402->setAccessType("inputOutput");
field402->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field402);

Cfield* field403 = new Cfield();
field403->setName("r_pinky3_keyValue");
field403->setAccessType("inputOutput");
field403->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field403);

Cfield* field404 = new Cfield();
field404->setName("r_pinky3_changed");
field404->setAccessType("outputOnly");
field404->setType("SFRotation");
ProtoInterface21->addField(*field404);

Cfield* field405 = new Cfield();
field405->setName("r_pinky_distal_key");
field405->setAccessType("inputOutput");
field405->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field405);

Cfield* field406 = new Cfield();
field406->setName("r_pinky_distal_keyValue");
field406->setAccessType("inputOutput");
field406->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field406);

Cfield* field407 = new Cfield();
field407->setName("r_pinky_distal_changed");
field407->setAccessType("outputOnly");
field407->setType("SFRotation");
ProtoInterface21->addField(*field407);

Cfield* field408 = new Cfield();
field408->setName("r_pinky_metacarpal_key");
field408->setAccessType("inputOutput");
field408->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field408);

Cfield* field409 = new Cfield();
field409->setName("r_pinky_metacarpal_keyValue");
field409->setAccessType("inputOutput");
field409->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field409);

Cfield* field410 = new Cfield();
field410->setName("r_pinky_metacarpal_changed");
field410->setAccessType("outputOnly");
field410->setType("SFRotation");
ProtoInterface21->addField(*field410);

Cfield* field411 = new Cfield();
field411->setName("r_pinky_middle_key");
field411->setAccessType("inputOutput");
field411->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field411);

Cfield* field412 = new Cfield();
field412->setName("r_pinky_middle_keyValue");
field412->setAccessType("inputOutput");
field412->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field412);

Cfield* field413 = new Cfield();
field413->setName("r_pinky_middle_changed");
field413->setAccessType("outputOnly");
field413->setType("SFRotation");
ProtoInterface21->addField(*field413);

Cfield* field414 = new Cfield();
field414->setName("r_pinky_proximal_key");
field414->setAccessType("inputOutput");
field414->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field414);

Cfield* field415 = new Cfield();
field415->setName("r_pinky_proximal_keyValue");
field415->setAccessType("inputOutput");
field415->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field415);

Cfield* field416 = new Cfield();
field416->setName("r_pinky_proximal_changed");
field416->setAccessType("outputOnly");
field416->setType("SFRotation");
ProtoInterface21->addField(*field416);

Cfield* field417 = new Cfield();
field417->setName("r_ring0_key");
field417->setAccessType("inputOutput");
field417->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field417);

Cfield* field418 = new Cfield();
field418->setName("r_ring0_keyValue");
field418->setAccessType("inputOutput");
field418->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field418);

Cfield* field419 = new Cfield();
field419->setName("r_ring0_changed");
field419->setAccessType("outputOnly");
field419->setType("SFRotation");
ProtoInterface21->addField(*field419);

Cfield* field420 = new Cfield();
field420->setName("r_ring1_key");
field420->setAccessType("inputOutput");
field420->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field420);

Cfield* field421 = new Cfield();
field421->setName("r_ring1_keyValue");
field421->setAccessType("inputOutput");
field421->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field421);

Cfield* field422 = new Cfield();
field422->setName("r_ring1_changed");
field422->setAccessType("outputOnly");
field422->setType("SFRotation");
ProtoInterface21->addField(*field422);

Cfield* field423 = new Cfield();
field423->setName("r_ring2_key");
field423->setAccessType("inputOutput");
field423->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field423);

Cfield* field424 = new Cfield();
field424->setName("r_ring2_keyValue");
field424->setAccessType("inputOutput");
field424->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field424);

Cfield* field425 = new Cfield();
field425->setName("r_ring2_changed");
field425->setAccessType("outputOnly");
field425->setType("SFRotation");
ProtoInterface21->addField(*field425);

Cfield* field426 = new Cfield();
field426->setName("r_ring3_key");
field426->setAccessType("inputOutput");
field426->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field426);

Cfield* field427 = new Cfield();
field427->setName("r_ring3_keyValue");
field427->setAccessType("inputOutput");
field427->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field427);

Cfield* field428 = new Cfield();
field428->setName("r_ring3_changed");
field428->setAccessType("outputOnly");
field428->setType("SFRotation");
ProtoInterface21->addField(*field428);

Cfield* field429 = new Cfield();
field429->setName("r_ring_distal_key");
field429->setAccessType("inputOutput");
field429->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field429);

Cfield* field430 = new Cfield();
field430->setName("r_ring_distal_keyValue");
field430->setAccessType("inputOutput");
field430->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field430);

Cfield* field431 = new Cfield();
field431->setName("r_ring_distal_changed");
field431->setAccessType("outputOnly");
field431->setType("SFRotation");
ProtoInterface21->addField(*field431);

Cfield* field432 = new Cfield();
field432->setName("r_ring_metacarpal_key");
field432->setAccessType("inputOutput");
field432->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field432);

Cfield* field433 = new Cfield();
field433->setName("r_ring_metacarpal_keyValue");
field433->setAccessType("inputOutput");
field433->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field433);

Cfield* field434 = new Cfield();
field434->setName("r_ring_metacarpal_changed");
field434->setAccessType("outputOnly");
field434->setType("SFRotation");
ProtoInterface21->addField(*field434);

Cfield* field435 = new Cfield();
field435->setName("r_ring_middle_key");
field435->setAccessType("inputOutput");
field435->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field435);

Cfield* field436 = new Cfield();
field436->setName("r_ring_middle_keyValue");
field436->setAccessType("inputOutput");
field436->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field436);

Cfield* field437 = new Cfield();
field437->setName("r_ring_middle_changed");
field437->setAccessType("outputOnly");
field437->setType("SFRotation");
ProtoInterface21->addField(*field437);

Cfield* field438 = new Cfield();
field438->setName("r_ring_proximal_key");
field438->setAccessType("inputOutput");
field438->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field438);

Cfield* field439 = new Cfield();
field439->setName("r_ring_proximal_keyValue");
field439->setAccessType("inputOutput");
field439->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field439);

Cfield* field440 = new Cfield();
field440->setName("r_ring_proximal_changed");
field440->setAccessType("outputOnly");
field440->setType("SFRotation");
ProtoInterface21->addField(*field440);

Cfield* field441 = new Cfield();
field441->setName("r_scapula_key");
field441->setAccessType("inputOutput");
field441->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field441);

Cfield* field442 = new Cfield();
field442->setName("r_scapula_keyValue");
field442->setAccessType("inputOutput");
field442->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field442);

Cfield* field443 = new Cfield();
field443->setName("r_scapula_changed");
field443->setAccessType("outputOnly");
field443->setType("SFRotation");
ProtoInterface21->addField(*field443);

Cfield* field444 = new Cfield();
field444->setName("r_shoulder_key");
field444->setAccessType("inputOutput");
field444->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field444);

Cfield* field445 = new Cfield();
field445->setName("r_shoulder_keyValue");
field445->setAccessType("inputOutput");
field445->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field445);

Cfield* field446 = new Cfield();
field446->setName("r_shoulder_changed");
field446->setAccessType("outputOnly");
field446->setType("SFRotation");
ProtoInterface21->addField(*field446);

Cfield* field447 = new Cfield();
field447->setName("r_sternoclavicular_key");
field447->setAccessType("inputOutput");
field447->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field447);

Cfield* field448 = new Cfield();
field448->setName("r_sternoclavicular_keyValue");
field448->setAccessType("inputOutput");
field448->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field448);

Cfield* field449 = new Cfield();
field449->setName("r_sternoclavicular_changed");
field449->setAccessType("outputOnly");
field449->setType("SFRotation");
ProtoInterface21->addField(*field449);

Cfield* field450 = new Cfield();
field450->setName("r_subtalar_key");
field450->setAccessType("inputOutput");
field450->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field450);

Cfield* field451 = new Cfield();
field451->setName("r_subtalar_keyValue");
field451->setAccessType("inputOutput");
field451->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field451);

Cfield* field452 = new Cfield();
field452->setName("r_subtalar_changed");
field452->setAccessType("outputOnly");
field452->setType("SFRotation");
ProtoInterface21->addField(*field452);

Cfield* field453 = new Cfield();
field453->setName("r_thigh_key");
field453->setAccessType("inputOutput");
field453->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field453);

Cfield* field454 = new Cfield();
field454->setName("r_thigh_keyValue");
field454->setAccessType("inputOutput");
field454->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field454);

Cfield* field455 = new Cfield();
field455->setName("r_thigh_changed");
field455->setAccessType("outputOnly");
field455->setType("SFRotation");
ProtoInterface21->addField(*field455);

Cfield* field456 = new Cfield();
field456->setName("r_thumb1_key");
field456->setAccessType("inputOutput");
field456->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field456);

Cfield* field457 = new Cfield();
field457->setName("r_thumb1_keyValue");
field457->setAccessType("inputOutput");
field457->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field457);

Cfield* field458 = new Cfield();
field458->setName("r_thumb1_changed");
field458->setAccessType("outputOnly");
field458->setType("SFRotation");
ProtoInterface21->addField(*field458);

Cfield* field459 = new Cfield();
field459->setName("r_thumb2_key");
field459->setAccessType("inputOutput");
field459->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field459);

Cfield* field460 = new Cfield();
field460->setName("r_thumb2_keyValue");
field460->setAccessType("inputOutput");
field460->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field460);

Cfield* field461 = new Cfield();
field461->setName("r_thumb2_changed");
field461->setAccessType("outputOnly");
field461->setType("SFRotation");
ProtoInterface21->addField(*field461);

Cfield* field462 = new Cfield();
field462->setName("r_thumb3_key");
field462->setAccessType("inputOutput");
field462->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field462);

Cfield* field463 = new Cfield();
field463->setName("r_thumb3_keyValue");
field463->setAccessType("inputOutput");
field463->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field463);

Cfield* field464 = new Cfield();
field464->setName("r_thumb3_changed");
field464->setAccessType("outputOnly");
field464->setType("SFRotation");
ProtoInterface21->addField(*field464);

Cfield* field465 = new Cfield();
field465->setName("r_thumb_distal_key");
field465->setAccessType("inputOutput");
field465->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field465);

Cfield* field466 = new Cfield();
field466->setName("r_thumb_distal_keyValue");
field466->setAccessType("inputOutput");
field466->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field466);

Cfield* field467 = new Cfield();
field467->setName("r_thumb_distal_changed");
field467->setAccessType("outputOnly");
field467->setType("SFRotation");
ProtoInterface21->addField(*field467);

Cfield* field468 = new Cfield();
field468->setName("r_thumb_metacarpal_key");
field468->setAccessType("inputOutput");
field468->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field468);

Cfield* field469 = new Cfield();
field469->setName("r_thumb_metacarpal_keyValue");
field469->setAccessType("inputOutput");
field469->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field469);

Cfield* field470 = new Cfield();
field470->setName("r_thumb_metacarpal_changed");
field470->setAccessType("outputOnly");
field470->setType("SFRotation");
ProtoInterface21->addField(*field470);

Cfield* field471 = new Cfield();
field471->setName("r_thumb_proximal_key");
field471->setAccessType("inputOutput");
field471->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field471);

Cfield* field472 = new Cfield();
field472->setName("r_thumb_proximal_keyValue");
field472->setAccessType("inputOutput");
field472->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field472);

Cfield* field473 = new Cfield();
field473->setName("r_thumb_proximal_changed");
field473->setAccessType("outputOnly");
field473->setType("SFRotation");
ProtoInterface21->addField(*field473);

Cfield* field474 = new Cfield();
field474->setName("r_upperarm_key");
field474->setAccessType("inputOutput");
field474->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field474);

Cfield* field475 = new Cfield();
field475->setName("r_upperarm_keyValue");
field475->setAccessType("inputOutput");
field475->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field475);

Cfield* field476 = new Cfield();
field476->setName("r_upperarm_changed");
field476->setAccessType("outputOnly");
field476->setType("SFRotation");
ProtoInterface21->addField(*field476);

Cfield* field477 = new Cfield();
field477->setName("r_wrist_key");
field477->setAccessType("inputOutput");
field477->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field477);

Cfield* field478 = new Cfield();
field478->setName("r_wrist_keyValue");
field478->setAccessType("inputOutput");
field478->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field478);

Cfield* field479 = new Cfield();
field479->setName("r_wrist_changed");
field479->setAccessType("outputOnly");
field479->setType("SFRotation");
ProtoInterface21->addField(*field479);

Cfield* field480 = new Cfield();
field480->setName("sacroiliac_key");
field480->setAccessType("inputOutput");
field480->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field480);

Cfield* field481 = new Cfield();
field481->setName("sacroiliac_keyValue");
field481->setAccessType("inputOutput");
field481->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field481);

Cfield* field482 = new Cfield();
field482->setName("sacroiliac_changed");
field482->setAccessType("outputOnly");
field482->setType("SFRotation");
ProtoInterface21->addField(*field482);

Cfield* field483 = new Cfield();
field483->setName("sacrum_key");
field483->setAccessType("inputOutput");
field483->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field483);

Cfield* field484 = new Cfield();
field484->setName("sacrum_keyValue");
field484->setAccessType("inputOutput");
field484->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field484);

Cfield* field485 = new Cfield();
field485->setName("sacrum_changed");
field485->setAccessType("outputOnly");
field485->setType("SFRotation");
ProtoInterface21->addField(*field485);

Cfield* field486 = new Cfield();
field486->setName("skull_key");
field486->setAccessType("inputOutput");
field486->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field486);

Cfield* field487 = new Cfield();
field487->setName("skull_keyValue");
field487->setAccessType("inputOutput");
field487->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field487);

Cfield* field488 = new Cfield();
field488->setName("skull_changed");
field488->setAccessType("outputOnly");
field488->setType("SFRotation");
ProtoInterface21->addField(*field488);

Cfield* field489 = new Cfield();
field489->setName("skullbase_key");
field489->setAccessType("inputOutput");
field489->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field489);

Cfield* field490 = new Cfield();
field490->setName("skullbase_keyValue");
field490->setAccessType("inputOutput");
field490->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field490);

Cfield* field491 = new Cfield();
field491->setName("skullbase_changed");
field491->setAccessType("outputOnly");
field491->setType("SFRotation");
ProtoInterface21->addField(*field491);

Cfield* field492 = new Cfield();
field492->setName("t10_key");
field492->setAccessType("inputOutput");
field492->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field492);

Cfield* field493 = new Cfield();
field493->setName("t10_keyValue");
field493->setAccessType("inputOutput");
field493->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field493);

Cfield* field494 = new Cfield();
field494->setName("t10_changed");
field494->setAccessType("outputOnly");
field494->setType("SFRotation");
ProtoInterface21->addField(*field494);

Cfield* field495 = new Cfield();
field495->setName("t11_key");
field495->setAccessType("inputOutput");
field495->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field495);

Cfield* field496 = new Cfield();
field496->setName("t11_keyValue");
field496->setAccessType("inputOutput");
field496->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field496);

Cfield* field497 = new Cfield();
field497->setName("t11_changed");
field497->setAccessType("outputOnly");
field497->setType("SFRotation");
ProtoInterface21->addField(*field497);

Cfield* field498 = new Cfield();
field498->setName("t12_key");
field498->setAccessType("inputOutput");
field498->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field498);

Cfield* field499 = new Cfield();
field499->setName("t12_keyValue");
field499->setAccessType("inputOutput");
field499->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field499);

Cfield* field500 = new Cfield();
field500->setName("t12_changed");
field500->setAccessType("outputOnly");
field500->setType("SFRotation");
ProtoInterface21->addField(*field500);

Cfield* field501 = new Cfield();
field501->setName("t1_key");
field501->setAccessType("inputOutput");
field501->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field501);

Cfield* field502 = new Cfield();
field502->setName("t1_keyValue");
field502->setAccessType("inputOutput");
field502->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field502);

Cfield* field503 = new Cfield();
field503->setName("t1_changed");
field503->setAccessType("outputOnly");
field503->setType("SFRotation");
ProtoInterface21->addField(*field503);

Cfield* field504 = new Cfield();
field504->setName("t2_key");
field504->setAccessType("inputOutput");
field504->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field504);

Cfield* field505 = new Cfield();
field505->setName("t2_keyValue");
field505->setAccessType("inputOutput");
field505->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field505);

Cfield* field506 = new Cfield();
field506->setName("t2_changed");
field506->setAccessType("outputOnly");
field506->setType("SFRotation");
ProtoInterface21->addField(*field506);

Cfield* field507 = new Cfield();
field507->setName("t3_key");
field507->setAccessType("inputOutput");
field507->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field507);

Cfield* field508 = new Cfield();
field508->setName("t3_keyValue");
field508->setAccessType("inputOutput");
field508->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field508);

Cfield* field509 = new Cfield();
field509->setName("t3_changed");
field509->setAccessType("outputOnly");
field509->setType("SFRotation");
ProtoInterface21->addField(*field509);

Cfield* field510 = new Cfield();
field510->setName("t4_key");
field510->setAccessType("inputOutput");
field510->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field510);

Cfield* field511 = new Cfield();
field511->setName("t4_keyValue");
field511->setAccessType("inputOutput");
field511->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field511);

Cfield* field512 = new Cfield();
field512->setName("t4_changed");
field512->setAccessType("outputOnly");
field512->setType("SFRotation");
ProtoInterface21->addField(*field512);

Cfield* field513 = new Cfield();
field513->setName("t5_key");
field513->setAccessType("inputOutput");
field513->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field513);

Cfield* field514 = new Cfield();
field514->setName("t5_keyValue");
field514->setAccessType("inputOutput");
field514->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field514);

Cfield* field515 = new Cfield();
field515->setName("t5_changed");
field515->setAccessType("outputOnly");
field515->setType("SFRotation");
ProtoInterface21->addField(*field515);

Cfield* field516 = new Cfield();
field516->setName("t6_key");
field516->setAccessType("inputOutput");
field516->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field516);

Cfield* field517 = new Cfield();
field517->setName("t6_keyValue");
field517->setAccessType("inputOutput");
field517->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field517);

Cfield* field518 = new Cfield();
field518->setName("t6_changed");
field518->setAccessType("outputOnly");
field518->setType("SFRotation");
ProtoInterface21->addField(*field518);

Cfield* field519 = new Cfield();
field519->setName("t7_key");
field519->setAccessType("inputOutput");
field519->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field519);

Cfield* field520 = new Cfield();
field520->setName("t7_keyValue");
field520->setAccessType("inputOutput");
field520->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field520);

Cfield* field521 = new Cfield();
field521->setName("t7_changed");
field521->setAccessType("outputOnly");
field521->setType("SFRotation");
ProtoInterface21->addField(*field521);

Cfield* field522 = new Cfield();
field522->setName("t8_key");
field522->setAccessType("inputOutput");
field522->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field522);

Cfield* field523 = new Cfield();
field523->setName("t8_keyValue");
field523->setAccessType("inputOutput");
field523->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field523);

Cfield* field524 = new Cfield();
field524->setName("t8_changed");
field524->setAccessType("outputOnly");
field524->setType("SFRotation");
ProtoInterface21->addField(*field524);

Cfield* field525 = new Cfield();
field525->setName("t9_key");
field525->setAccessType("inputOutput");
field525->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field525);

Cfield* field526 = new Cfield();
field526->setName("t9_keyValue");
field526->setAccessType("inputOutput");
field526->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field526);

Cfield* field527 = new Cfield();
field527->setName("t9_changed");
field527->setAccessType("outputOnly");
field527->setType("SFRotation");
ProtoInterface21->addField(*field527);

Cfield* field528 = new Cfield();
field528->setName("temporomandibular_key");
field528->setAccessType("inputOutput");
field528->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field528);

Cfield* field529 = new Cfield();
field529->setName("temporomandibular_keyValue");
field529->setAccessType("inputOutput");
field529->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field529);

Cfield* field530 = new Cfield();
field530->setName("temporomandibular_changed");
field530->setAccessType("outputOnly");
field530->setType("SFRotation");
ProtoInterface21->addField(*field530);

Cfield* field531 = new Cfield();
field531->setName("vc1_key");
field531->setAccessType("inputOutput");
field531->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field531);

Cfield* field532 = new Cfield();
field532->setName("vc1_keyValue");
field532->setAccessType("inputOutput");
field532->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field532);

Cfield* field533 = new Cfield();
field533->setName("vc1_changed");
field533->setAccessType("outputOnly");
field533->setType("SFRotation");
ProtoInterface21->addField(*field533);

Cfield* field534 = new Cfield();
field534->setName("vc2_key");
field534->setAccessType("inputOutput");
field534->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field534);

Cfield* field535 = new Cfield();
field535->setName("vc2_keyValue");
field535->setAccessType("inputOutput");
field535->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field535);

Cfield* field536 = new Cfield();
field536->setName("vc2_changed");
field536->setAccessType("outputOnly");
field536->setType("SFRotation");
ProtoInterface21->addField(*field536);

Cfield* field537 = new Cfield();
field537->setName("vc3_key");
field537->setAccessType("inputOutput");
field537->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field537);

Cfield* field538 = new Cfield();
field538->setName("vc3_keyValue");
field538->setAccessType("inputOutput");
field538->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field538);

Cfield* field539 = new Cfield();
field539->setName("vc3_changed");
field539->setAccessType("outputOnly");
field539->setType("SFRotation");
ProtoInterface21->addField(*field539);

Cfield* field540 = new Cfield();
field540->setName("vc4_key");
field540->setAccessType("inputOutput");
field540->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field540);

Cfield* field541 = new Cfield();
field541->setName("vc4_keyValue");
field541->setAccessType("inputOutput");
field541->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field541);

Cfield* field542 = new Cfield();
field542->setName("vc4_changed");
field542->setAccessType("outputOnly");
field542->setType("SFRotation");
ProtoInterface21->addField(*field542);

Cfield* field543 = new Cfield();
field543->setName("vc5_key");
field543->setAccessType("inputOutput");
field543->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field543);

Cfield* field544 = new Cfield();
field544->setName("vc5_keyValue");
field544->setAccessType("inputOutput");
field544->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field544);

Cfield* field545 = new Cfield();
field545->setName("vc5_changed");
field545->setAccessType("outputOnly");
field545->setType("SFRotation");
ProtoInterface21->addField(*field545);

Cfield* field546 = new Cfield();
field546->setName("vc6_key");
field546->setAccessType("inputOutput");
field546->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field546);

Cfield* field547 = new Cfield();
field547->setName("vc6_keyValue");
field547->setAccessType("inputOutput");
field547->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field547);

Cfield* field548 = new Cfield();
field548->setName("vc6_changed");
field548->setAccessType("outputOnly");
field548->setType("SFRotation");
ProtoInterface21->addField(*field548);

Cfield* field549 = new Cfield();
field549->setName("vc7_key");
field549->setAccessType("inputOutput");
field549->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field549);

Cfield* field550 = new Cfield();
field550->setName("vc7_keyValue");
field550->setAccessType("inputOutput");
field550->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field550);

Cfield* field551 = new Cfield();
field551->setName("vc7_changed");
field551->setAccessType("outputOnly");
field551->setType("SFRotation");
ProtoInterface21->addField(*field551);

Cfield* field552 = new Cfield();
field552->setName("vl1_key");
field552->setAccessType("inputOutput");
field552->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field552);

Cfield* field553 = new Cfield();
field553->setName("vl1_keyValue");
field553->setAccessType("inputOutput");
field553->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field553);

Cfield* field554 = new Cfield();
field554->setName("vl1_changed");
field554->setAccessType("outputOnly");
field554->setType("SFRotation");
ProtoInterface21->addField(*field554);

Cfield* field555 = new Cfield();
field555->setName("vl2_key");
field555->setAccessType("inputOutput");
field555->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field555);

Cfield* field556 = new Cfield();
field556->setName("vl2_keyValue");
field556->setAccessType("inputOutput");
field556->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field556);

Cfield* field557 = new Cfield();
field557->setName("vl2_changed");
field557->setAccessType("outputOnly");
field557->setType("SFRotation");
ProtoInterface21->addField(*field557);

Cfield* field558 = new Cfield();
field558->setName("vl3_key");
field558->setAccessType("inputOutput");
field558->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field558);

Cfield* field559 = new Cfield();
field559->setName("vl3_keyValue");
field559->setAccessType("inputOutput");
field559->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field559);

Cfield* field560 = new Cfield();
field560->setName("vl3_changed");
field560->setAccessType("outputOnly");
field560->setType("SFRotation");
ProtoInterface21->addField(*field560);

Cfield* field561 = new Cfield();
field561->setName("vl4_key");
field561->setAccessType("inputOutput");
field561->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field561);

Cfield* field562 = new Cfield();
field562->setName("vl4_keyValue");
field562->setAccessType("inputOutput");
field562->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field562);

Cfield* field563 = new Cfield();
field563->setName("vl4_changed");
field563->setAccessType("outputOnly");
field563->setType("SFRotation");
ProtoInterface21->addField(*field563);

Cfield* field564 = new Cfield();
field564->setName("vl5_key");
field564->setAccessType("inputOutput");
field564->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field564);

Cfield* field565 = new Cfield();
field565->setName("vl5_keyValue");
field565->setAccessType("inputOutput");
field565->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field565);

Cfield* field566 = new Cfield();
field566->setName("vl5_changed");
field566->setAccessType("outputOnly");
field566->setType("SFRotation");
ProtoInterface21->addField(*field566);

Cfield* field567 = new Cfield();
field567->setName("vt10_key");
field567->setAccessType("inputOutput");
field567->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field567);

Cfield* field568 = new Cfield();
field568->setName("vt10_keyValue");
field568->setAccessType("inputOutput");
field568->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field568);

Cfield* field569 = new Cfield();
field569->setName("vt10_changed");
field569->setAccessType("outputOnly");
field569->setType("SFRotation");
ProtoInterface21->addField(*field569);

Cfield* field570 = new Cfield();
field570->setName("vt11_key");
field570->setAccessType("inputOutput");
field570->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field570);

Cfield* field571 = new Cfield();
field571->setName("vt11_keyValue");
field571->setAccessType("inputOutput");
field571->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field571);

Cfield* field572 = new Cfield();
field572->setName("vt11_changed");
field572->setAccessType("outputOnly");
field572->setType("SFRotation");
ProtoInterface21->addField(*field572);

Cfield* field573 = new Cfield();
field573->setName("vt12_key");
field573->setAccessType("inputOutput");
field573->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field573);

Cfield* field574 = new Cfield();
field574->setName("vt12_keyValue");
field574->setAccessType("inputOutput");
field574->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field574);

Cfield* field575 = new Cfield();
field575->setName("vt12_changed");
field575->setAccessType("outputOnly");
field575->setType("SFRotation");
ProtoInterface21->addField(*field575);

Cfield* field576 = new Cfield();
field576->setName("vt1_key");
field576->setAccessType("inputOutput");
field576->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field576);

Cfield* field577 = new Cfield();
field577->setName("vt1_keyValue");
field577->setAccessType("inputOutput");
field577->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field577);

Cfield* field578 = new Cfield();
field578->setName("vt1_changed");
field578->setAccessType("outputOnly");
field578->setType("SFRotation");
ProtoInterface21->addField(*field578);

Cfield* field579 = new Cfield();
field579->setName("vt2_key");
field579->setAccessType("inputOutput");
field579->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field579);

Cfield* field580 = new Cfield();
field580->setName("vt2_keyValue");
field580->setAccessType("inputOutput");
field580->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field580);

Cfield* field581 = new Cfield();
field581->setName("vt2_changed");
field581->setAccessType("outputOnly");
field581->setType("SFRotation");
ProtoInterface21->addField(*field581);

Cfield* field582 = new Cfield();
field582->setName("vt3_key");
field582->setAccessType("inputOutput");
field582->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field582);

Cfield* field583 = new Cfield();
field583->setName("vt3_keyValue");
field583->setAccessType("inputOutput");
field583->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field583);

Cfield* field584 = new Cfield();
field584->setName("vt3_changed");
field584->setAccessType("outputOnly");
field584->setType("SFRotation");
ProtoInterface21->addField(*field584);

Cfield* field585 = new Cfield();
field585->setName("vt4_key");
field585->setAccessType("inputOutput");
field585->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field585);

Cfield* field586 = new Cfield();
field586->setName("vt4_keyValue");
field586->setAccessType("inputOutput");
field586->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field586);

Cfield* field587 = new Cfield();
field587->setName("vt4_changed");
field587->setAccessType("outputOnly");
field587->setType("SFRotation");
ProtoInterface21->addField(*field587);

Cfield* field588 = new Cfield();
field588->setName("vt5_key");
field588->setAccessType("inputOutput");
field588->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field588);

Cfield* field589 = new Cfield();
field589->setName("vt5_keyValue");
field589->setAccessType("inputOutput");
field589->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field589);

Cfield* field590 = new Cfield();
field590->setName("vt5_changed");
field590->setAccessType("outputOnly");
field590->setType("SFRotation");
ProtoInterface21->addField(*field590);

Cfield* field591 = new Cfield();
field591->setName("vt6_key");
field591->setAccessType("inputOutput");
field591->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field591);

Cfield* field592 = new Cfield();
field592->setName("vt6_keyValue");
field592->setAccessType("inputOutput");
field592->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field592);

Cfield* field593 = new Cfield();
field593->setName("vt6_changed");
field593->setAccessType("outputOnly");
field593->setType("SFRotation");
ProtoInterface21->addField(*field593);

Cfield* field594 = new Cfield();
field594->setName("vt7_key");
field594->setAccessType("inputOutput");
field594->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field594);

Cfield* field595 = new Cfield();
field595->setName("vt7_keyValue");
field595->setAccessType("inputOutput");
field595->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field595);

Cfield* field596 = new Cfield();
field596->setName("vt7_changed");
field596->setAccessType("outputOnly");
field596->setType("SFRotation");
ProtoInterface21->addField(*field596);

Cfield* field597 = new Cfield();
field597->setName("vt8_key");
field597->setAccessType("inputOutput");
field597->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field597);

Cfield* field598 = new Cfield();
field598->setName("vt8_keyValue");
field598->setAccessType("inputOutput");
field598->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field598);

Cfield* field599 = new Cfield();
field599->setName("vt8_changed");
field599->setAccessType("outputOnly");
field599->setType("SFRotation");
ProtoInterface21->addField(*field599);

Cfield* field600 = new Cfield();
field600->setName("vt9_key");
field600->setAccessType("inputOutput");
field600->setType("MFFloat");
//no default value
ProtoInterface21->addField(*field600);

Cfield* field601 = new Cfield();
field601->setName("vt9_keyValue");
field601->setAccessType("inputOutput");
field601->setType("MFRotation");
//no default value
ProtoInterface21->addField(*field601);

Cfield* field602 = new Cfield();
field602->setName("vt9_changed");
field602->setAccessType("outputOnly");
field602->setType("SFRotation");
ProtoInterface21->addField(*field602);

ProtoDeclare20->setProtoInterface(*ProtoInterface21);

CProtoBody* ProtoBody603 = new CProtoBody();
//design alternative: move TimeSensor out of the prototype, instead expose set_fraction globally to all interpolators
CTimeSensor* TimeSensor604 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor604->setDEF("BehaviorClock");
CIS* IS605 = new CIS();
Cconnect* connect606 = new Cconnect();
connect606->setNodeField("enabled");
connect606->setProtoField("enabled");
IS605->addConnect(*connect606);

Cconnect* connect607 = new Cconnect();
connect607->setNodeField("cycleInterval");
connect607->setProtoField("cycleInterval");
IS605->addConnect(*connect607);

Cconnect* connect608 = new Cconnect();
connect608->setNodeField("loop");
connect608->setProtoField("loop");
IS605->addConnect(*connect608);

Cconnect* connect609 = new Cconnect();
connect609->setNodeField("startTime");
connect609->setProtoField("startTime");
IS605->addConnect(*connect609);

Cconnect* connect610 = new Cconnect();
connect610->setNodeField("stopTime");
connect610->setProtoField("stopTime");
IS605->addConnect(*connect610);

Cconnect* connect611 = new Cconnect();
connect611->setNodeField("pauseTime");
connect611->setProtoField("pauseTime");
IS605->addConnect(*connect611);

Cconnect* connect612 = new Cconnect();
connect612->setNodeField("resumeTime");
connect612->setProtoField("resumeTime");
IS605->addConnect(*connect612);

Cconnect* connect613 = new Cconnect();
connect613->setNodeField("cycleTime");
connect613->setProtoField("cycleTime");
IS605->addConnect(*connect613);

Cconnect* connect614 = new Cconnect();
connect614->setNodeField("isActive");
connect614->setProtoField("isActive");
IS605->addConnect(*connect614);

Cconnect* connect615 = new Cconnect();
connect615->setNodeField("isPaused");
connect615->setProtoField("isPaused");
IS605->addConnect(*connect615);

Cconnect* connect616 = new Cconnect();
connect616->setNodeField("elapsedTime");
connect616->setProtoField("elapsedTime");
IS605->addConnect(*connect616);

Cconnect* connect617 = new Cconnect();
connect617->setNodeField("time");
connect617->setProtoField("time");
IS605->addConnect(*connect617);

Cconnect* connect618 = new Cconnect();
connect618->setNodeField("fraction_changed");
connect618->setProtoField("fraction_changed");
IS605->addConnect(*connect618);

TimeSensor604->setIS(*IS605);

ProtoBody603->addChildren(*TimeSensor604);

//note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless
CSwitch* Switch619 = (CSwitch *)(m_pScene.createNode("Switch"));
Switch619->setDEF("SupportedLoaHolder1");
Switch619->setWhichChoice(-1);
CIS* IS620 = new CIS();
Cconnect* connect621 = new Cconnect();
connect621->setNodeField("whichChoice");
connect621->setProtoField("supportedLOA");
IS620->addConnect(*connect621);

Switch619->setIS(*IS620);

ProtoBody603->addChildren(*Switch619);

CPositionInterpolator* PositionInterpolator622 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator622->setDEF("HumanoidRootPI");
CIS* IS623 = new CIS();
Cconnect* connect624 = new Cconnect();
connect624->setNodeField("key");
connect624->setProtoField("HumanoidRoot_translation_key");
IS623->addConnect(*connect624);

Cconnect* connect625 = new Cconnect();
connect625->setNodeField("keyValue");
connect625->setProtoField("HumanoidRoot_translation_keyValue");
IS623->addConnect(*connect625);

Cconnect* connect626 = new Cconnect();
connect626->setNodeField("value_changed");
connect626->setProtoField("HumanoidRoot_translation_changed");
IS623->addConnect(*connect626);

PositionInterpolator622->setIS(*IS623);

ProtoBody603->addChildren(*PositionInterpolator622);

CROUTE* ROUTE627 = new CROUTE();
ROUTE627->setFromField("fraction_changed");
ROUTE627->setFromNode("BehaviorClock");
ROUTE627->setToField("set_fraction");
ROUTE627->setToNode("HumanoidRootPI");
ProtoBody603->addChildren(*ROUTE627);

COrientationInterpolator* OrientationInterpolator628 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator628->setDEF("HumanoidRootOI");
CIS* IS629 = new CIS();
Cconnect* connect630 = new Cconnect();
connect630->setNodeField("key");
connect630->setProtoField("HumanoidRoot_rotation_key");
IS629->addConnect(*connect630);

Cconnect* connect631 = new Cconnect();
connect631->setNodeField("keyValue");
connect631->setProtoField("HumanoidRoot_rotation_keyValue");
IS629->addConnect(*connect631);

Cconnect* connect632 = new Cconnect();
connect632->setNodeField("value_changed");
connect632->setProtoField("HumanoidRoot_rotation_changed");
IS629->addConnect(*connect632);

OrientationInterpolator628->setIS(*IS629);

ProtoBody603->addChildren(*OrientationInterpolator628);

CROUTE* ROUTE633 = new CROUTE();
ROUTE633->setFromField("fraction_changed");
ROUTE633->setFromNode("BehaviorClock");
ROUTE633->setToField("set_fraction");
ROUTE633->setToNode("HumanoidRootOI");
ProtoBody603->addChildren(*ROUTE633);

COrientationInterpolator* OrientationInterpolator634 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator634->setDEF("c1_OI");
CIS* IS635 = new CIS();
Cconnect* connect636 = new Cconnect();
connect636->setNodeField("key");
connect636->setProtoField("c1_key");
IS635->addConnect(*connect636);

Cconnect* connect637 = new Cconnect();
connect637->setNodeField("keyValue");
connect637->setProtoField("c1_keyValue");
IS635->addConnect(*connect637);

Cconnect* connect638 = new Cconnect();
connect638->setNodeField("value_changed");
connect638->setProtoField("c1_changed");
IS635->addConnect(*connect638);

OrientationInterpolator634->setIS(*IS635);

ProtoBody603->addChildren(*OrientationInterpolator634);

CROUTE* ROUTE639 = new CROUTE();
ROUTE639->setFromField("fraction_changed");
ROUTE639->setFromNode("BehaviorClock");
ROUTE639->setToField("set_fraction");
ROUTE639->setToNode("c1_OI");
ProtoBody603->addChildren(*ROUTE639);

COrientationInterpolator* OrientationInterpolator640 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator640->setDEF("c2_OI");
CIS* IS641 = new CIS();
Cconnect* connect642 = new Cconnect();
connect642->setNodeField("key");
connect642->setProtoField("c2_key");
IS641->addConnect(*connect642);

Cconnect* connect643 = new Cconnect();
connect643->setNodeField("keyValue");
connect643->setProtoField("c2_keyValue");
IS641->addConnect(*connect643);

Cconnect* connect644 = new Cconnect();
connect644->setNodeField("value_changed");
connect644->setProtoField("c2_changed");
IS641->addConnect(*connect644);

OrientationInterpolator640->setIS(*IS641);

ProtoBody603->addChildren(*OrientationInterpolator640);

CROUTE* ROUTE645 = new CROUTE();
ROUTE645->setFromField("fraction_changed");
ROUTE645->setFromNode("BehaviorClock");
ROUTE645->setToField("set_fraction");
ROUTE645->setToNode("c2_OI");
ProtoBody603->addChildren(*ROUTE645);

COrientationInterpolator* OrientationInterpolator646 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator646->setDEF("c3_OI");
CIS* IS647 = new CIS();
Cconnect* connect648 = new Cconnect();
connect648->setNodeField("key");
connect648->setProtoField("c3_key");
IS647->addConnect(*connect648);

Cconnect* connect649 = new Cconnect();
connect649->setNodeField("keyValue");
connect649->setProtoField("c3_keyValue");
IS647->addConnect(*connect649);

Cconnect* connect650 = new Cconnect();
connect650->setNodeField("value_changed");
connect650->setProtoField("c3_changed");
IS647->addConnect(*connect650);

OrientationInterpolator646->setIS(*IS647);

ProtoBody603->addChildren(*OrientationInterpolator646);

CROUTE* ROUTE651 = new CROUTE();
ROUTE651->setFromField("fraction_changed");
ROUTE651->setFromNode("BehaviorClock");
ROUTE651->setToField("set_fraction");
ROUTE651->setToNode("c3_OI");
ProtoBody603->addChildren(*ROUTE651);

COrientationInterpolator* OrientationInterpolator652 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator652->setDEF("c4_OI");
CIS* IS653 = new CIS();
Cconnect* connect654 = new Cconnect();
connect654->setNodeField("key");
connect654->setProtoField("c4_key");
IS653->addConnect(*connect654);

Cconnect* connect655 = new Cconnect();
connect655->setNodeField("keyValue");
connect655->setProtoField("c4_keyValue");
IS653->addConnect(*connect655);

Cconnect* connect656 = new Cconnect();
connect656->setNodeField("value_changed");
connect656->setProtoField("c4_changed");
IS653->addConnect(*connect656);

OrientationInterpolator652->setIS(*IS653);

ProtoBody603->addChildren(*OrientationInterpolator652);

CROUTE* ROUTE657 = new CROUTE();
ROUTE657->setFromField("fraction_changed");
ROUTE657->setFromNode("BehaviorClock");
ROUTE657->setToField("set_fraction");
ROUTE657->setToNode("c4_OI");
ProtoBody603->addChildren(*ROUTE657);

COrientationInterpolator* OrientationInterpolator658 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator658->setDEF("c5_OI");
CIS* IS659 = new CIS();
Cconnect* connect660 = new Cconnect();
connect660->setNodeField("key");
connect660->setProtoField("c5_key");
IS659->addConnect(*connect660);

Cconnect* connect661 = new Cconnect();
connect661->setNodeField("keyValue");
connect661->setProtoField("c5_keyValue");
IS659->addConnect(*connect661);

Cconnect* connect662 = new Cconnect();
connect662->setNodeField("value_changed");
connect662->setProtoField("c5_changed");
IS659->addConnect(*connect662);

OrientationInterpolator658->setIS(*IS659);

ProtoBody603->addChildren(*OrientationInterpolator658);

CROUTE* ROUTE663 = new CROUTE();
ROUTE663->setFromField("fraction_changed");
ROUTE663->setFromNode("BehaviorClock");
ROUTE663->setToField("set_fraction");
ROUTE663->setToNode("c5_OI");
ProtoBody603->addChildren(*ROUTE663);

COrientationInterpolator* OrientationInterpolator664 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator664->setDEF("c6_OI");
CIS* IS665 = new CIS();
Cconnect* connect666 = new Cconnect();
connect666->setNodeField("key");
connect666->setProtoField("c6_key");
IS665->addConnect(*connect666);

Cconnect* connect667 = new Cconnect();
connect667->setNodeField("keyValue");
connect667->setProtoField("c6_keyValue");
IS665->addConnect(*connect667);

Cconnect* connect668 = new Cconnect();
connect668->setNodeField("value_changed");
connect668->setProtoField("c6_changed");
IS665->addConnect(*connect668);

OrientationInterpolator664->setIS(*IS665);

ProtoBody603->addChildren(*OrientationInterpolator664);

CROUTE* ROUTE669 = new CROUTE();
ROUTE669->setFromField("fraction_changed");
ROUTE669->setFromNode("BehaviorClock");
ROUTE669->setToField("set_fraction");
ROUTE669->setToNode("c6_OI");
ProtoBody603->addChildren(*ROUTE669);

COrientationInterpolator* OrientationInterpolator670 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator670->setDEF("c7_OI");
CIS* IS671 = new CIS();
Cconnect* connect672 = new Cconnect();
connect672->setNodeField("key");
connect672->setProtoField("c7_key");
IS671->addConnect(*connect672);

Cconnect* connect673 = new Cconnect();
connect673->setNodeField("keyValue");
connect673->setProtoField("c7_keyValue");
IS671->addConnect(*connect673);

Cconnect* connect674 = new Cconnect();
connect674->setNodeField("value_changed");
connect674->setProtoField("c7_changed");
IS671->addConnect(*connect674);

OrientationInterpolator670->setIS(*IS671);

ProtoBody603->addChildren(*OrientationInterpolator670);

CROUTE* ROUTE675 = new CROUTE();
ROUTE675->setFromField("fraction_changed");
ROUTE675->setFromNode("BehaviorClock");
ROUTE675->setToField("set_fraction");
ROUTE675->setToNode("c7_OI");
ProtoBody603->addChildren(*ROUTE675);

COrientationInterpolator* OrientationInterpolator676 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator676->setDEF("jaw_OI");
CIS* IS677 = new CIS();
Cconnect* connect678 = new Cconnect();
connect678->setNodeField("key");
connect678->setProtoField("jaw_key");
IS677->addConnect(*connect678);

Cconnect* connect679 = new Cconnect();
connect679->setNodeField("keyValue");
connect679->setProtoField("jaw_keyValue");
IS677->addConnect(*connect679);

Cconnect* connect680 = new Cconnect();
connect680->setNodeField("value_changed");
connect680->setProtoField("jaw_changed");
IS677->addConnect(*connect680);

OrientationInterpolator676->setIS(*IS677);

ProtoBody603->addChildren(*OrientationInterpolator676);

CROUTE* ROUTE681 = new CROUTE();
ROUTE681->setFromField("fraction_changed");
ROUTE681->setFromNode("BehaviorClock");
ROUTE681->setToField("set_fraction");
ROUTE681->setToNode("jaw_OI");
ProtoBody603->addChildren(*ROUTE681);

COrientationInterpolator* OrientationInterpolator682 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator682->setDEF("l1_OI");
CIS* IS683 = new CIS();
Cconnect* connect684 = new Cconnect();
connect684->setNodeField("key");
connect684->setProtoField("l1_key");
IS683->addConnect(*connect684);

Cconnect* connect685 = new Cconnect();
connect685->setNodeField("keyValue");
connect685->setProtoField("l1_keyValue");
IS683->addConnect(*connect685);

Cconnect* connect686 = new Cconnect();
connect686->setNodeField("value_changed");
connect686->setProtoField("l1_changed");
IS683->addConnect(*connect686);

OrientationInterpolator682->setIS(*IS683);

ProtoBody603->addChildren(*OrientationInterpolator682);

CROUTE* ROUTE687 = new CROUTE();
ROUTE687->setFromField("fraction_changed");
ROUTE687->setFromNode("BehaviorClock");
ROUTE687->setToField("set_fraction");
ROUTE687->setToNode("l1_OI");
ProtoBody603->addChildren(*ROUTE687);

COrientationInterpolator* OrientationInterpolator688 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator688->setDEF("l2_OI");
CIS* IS689 = new CIS();
Cconnect* connect690 = new Cconnect();
connect690->setNodeField("key");
connect690->setProtoField("l2_key");
IS689->addConnect(*connect690);

Cconnect* connect691 = new Cconnect();
connect691->setNodeField("keyValue");
connect691->setProtoField("l2_keyValue");
IS689->addConnect(*connect691);

Cconnect* connect692 = new Cconnect();
connect692->setNodeField("value_changed");
connect692->setProtoField("l2_changed");
IS689->addConnect(*connect692);

OrientationInterpolator688->setIS(*IS689);

ProtoBody603->addChildren(*OrientationInterpolator688);

CROUTE* ROUTE693 = new CROUTE();
ROUTE693->setFromField("fraction_changed");
ROUTE693->setFromNode("BehaviorClock");
ROUTE693->setToField("set_fraction");
ROUTE693->setToNode("l2_OI");
ProtoBody603->addChildren(*ROUTE693);

COrientationInterpolator* OrientationInterpolator694 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator694->setDEF("l3_OI");
CIS* IS695 = new CIS();
Cconnect* connect696 = new Cconnect();
connect696->setNodeField("key");
connect696->setProtoField("l3_key");
IS695->addConnect(*connect696);

Cconnect* connect697 = new Cconnect();
connect697->setNodeField("keyValue");
connect697->setProtoField("l3_keyValue");
IS695->addConnect(*connect697);

Cconnect* connect698 = new Cconnect();
connect698->setNodeField("value_changed");
connect698->setProtoField("l3_changed");
IS695->addConnect(*connect698);

OrientationInterpolator694->setIS(*IS695);

ProtoBody603->addChildren(*OrientationInterpolator694);

CROUTE* ROUTE699 = new CROUTE();
ROUTE699->setFromField("fraction_changed");
ROUTE699->setFromNode("BehaviorClock");
ROUTE699->setToField("set_fraction");
ROUTE699->setToNode("l3_OI");
ProtoBody603->addChildren(*ROUTE699);

COrientationInterpolator* OrientationInterpolator700 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator700->setDEF("l4_OI");
CIS* IS701 = new CIS();
Cconnect* connect702 = new Cconnect();
connect702->setNodeField("key");
connect702->setProtoField("l4_key");
IS701->addConnect(*connect702);

Cconnect* connect703 = new Cconnect();
connect703->setNodeField("keyValue");
connect703->setProtoField("l4_keyValue");
IS701->addConnect(*connect703);

Cconnect* connect704 = new Cconnect();
connect704->setNodeField("value_changed");
connect704->setProtoField("l4_changed");
IS701->addConnect(*connect704);

OrientationInterpolator700->setIS(*IS701);

ProtoBody603->addChildren(*OrientationInterpolator700);

CROUTE* ROUTE705 = new CROUTE();
ROUTE705->setFromField("fraction_changed");
ROUTE705->setFromNode("BehaviorClock");
ROUTE705->setToField("set_fraction");
ROUTE705->setToNode("l4_OI");
ProtoBody603->addChildren(*ROUTE705);

COrientationInterpolator* OrientationInterpolator706 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator706->setDEF("l5_OI");
CIS* IS707 = new CIS();
Cconnect* connect708 = new Cconnect();
connect708->setNodeField("key");
connect708->setProtoField("l5_key");
IS707->addConnect(*connect708);

Cconnect* connect709 = new Cconnect();
connect709->setNodeField("keyValue");
connect709->setProtoField("l5_keyValue");
IS707->addConnect(*connect709);

Cconnect* connect710 = new Cconnect();
connect710->setNodeField("value_changed");
connect710->setProtoField("l5_changed");
IS707->addConnect(*connect710);

OrientationInterpolator706->setIS(*IS707);

ProtoBody603->addChildren(*OrientationInterpolator706);

CROUTE* ROUTE711 = new CROUTE();
ROUTE711->setFromField("fraction_changed");
ROUTE711->setFromNode("BehaviorClock");
ROUTE711->setToField("set_fraction");
ROUTE711->setToNode("l5_OI");
ProtoBody603->addChildren(*ROUTE711);

COrientationInterpolator* OrientationInterpolator712 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator712->setDEF("l_acromioclavicular_OI");
CIS* IS713 = new CIS();
Cconnect* connect714 = new Cconnect();
connect714->setNodeField("key");
connect714->setProtoField("l_acromioclavicular_key");
IS713->addConnect(*connect714);

Cconnect* connect715 = new Cconnect();
connect715->setNodeField("keyValue");
connect715->setProtoField("l_acromioclavicular_keyValue");
IS713->addConnect(*connect715);

Cconnect* connect716 = new Cconnect();
connect716->setNodeField("value_changed");
connect716->setProtoField("l_acromioclavicular_changed");
IS713->addConnect(*connect716);

OrientationInterpolator712->setIS(*IS713);

ProtoBody603->addChildren(*OrientationInterpolator712);

CROUTE* ROUTE717 = new CROUTE();
ROUTE717->setFromField("fraction_changed");
ROUTE717->setFromNode("BehaviorClock");
ROUTE717->setToField("set_fraction");
ROUTE717->setToNode("l_acromioclavicular_OI");
ProtoBody603->addChildren(*ROUTE717);

COrientationInterpolator* OrientationInterpolator718 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator718->setDEF("l_ankle_OI");
CIS* IS719 = new CIS();
Cconnect* connect720 = new Cconnect();
connect720->setNodeField("key");
connect720->setProtoField("l_ankle_key");
IS719->addConnect(*connect720);

Cconnect* connect721 = new Cconnect();
connect721->setNodeField("keyValue");
connect721->setProtoField("l_ankle_keyValue");
IS719->addConnect(*connect721);

Cconnect* connect722 = new Cconnect();
connect722->setNodeField("value_changed");
connect722->setProtoField("l_ankle_changed");
IS719->addConnect(*connect722);

OrientationInterpolator718->setIS(*IS719);

ProtoBody603->addChildren(*OrientationInterpolator718);

CROUTE* ROUTE723 = new CROUTE();
ROUTE723->setFromField("fraction_changed");
ROUTE723->setFromNode("BehaviorClock");
ROUTE723->setToField("set_fraction");
ROUTE723->setToNode("l_ankle_OI");
ProtoBody603->addChildren(*ROUTE723);

COrientationInterpolator* OrientationInterpolator724 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator724->setDEF("l_calf_OI");
CIS* IS725 = new CIS();
Cconnect* connect726 = new Cconnect();
connect726->setNodeField("key");
connect726->setProtoField("l_calf_key");
IS725->addConnect(*connect726);

Cconnect* connect727 = new Cconnect();
connect727->setNodeField("keyValue");
connect727->setProtoField("l_calf_keyValue");
IS725->addConnect(*connect727);

Cconnect* connect728 = new Cconnect();
connect728->setNodeField("value_changed");
connect728->setProtoField("l_calf_changed");
IS725->addConnect(*connect728);

OrientationInterpolator724->setIS(*IS725);

ProtoBody603->addChildren(*OrientationInterpolator724);

CROUTE* ROUTE729 = new CROUTE();
ROUTE729->setFromField("fraction_changed");
ROUTE729->setFromNode("BehaviorClock");
ROUTE729->setToField("set_fraction");
ROUTE729->setToNode("l_calf_OI");
ProtoBody603->addChildren(*ROUTE729);

COrientationInterpolator* OrientationInterpolator730 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator730->setDEF("l_clavicle_OI");
CIS* IS731 = new CIS();
Cconnect* connect732 = new Cconnect();
connect732->setNodeField("key");
connect732->setProtoField("l_clavicle_key");
IS731->addConnect(*connect732);

Cconnect* connect733 = new Cconnect();
connect733->setNodeField("keyValue");
connect733->setProtoField("l_clavicle_keyValue");
IS731->addConnect(*connect733);

Cconnect* connect734 = new Cconnect();
connect734->setNodeField("value_changed");
connect734->setProtoField("l_clavicle_changed");
IS731->addConnect(*connect734);

OrientationInterpolator730->setIS(*IS731);

ProtoBody603->addChildren(*OrientationInterpolator730);

CROUTE* ROUTE735 = new CROUTE();
ROUTE735->setFromField("fraction_changed");
ROUTE735->setFromNode("BehaviorClock");
ROUTE735->setToField("set_fraction");
ROUTE735->setToNode("l_clavicle_OI");
ProtoBody603->addChildren(*ROUTE735);

COrientationInterpolator* OrientationInterpolator736 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator736->setDEF("l_elbow_OI");
CIS* IS737 = new CIS();
Cconnect* connect738 = new Cconnect();
connect738->setNodeField("key");
connect738->setProtoField("l_elbow_key");
IS737->addConnect(*connect738);

Cconnect* connect739 = new Cconnect();
connect739->setNodeField("keyValue");
connect739->setProtoField("l_elbow_keyValue");
IS737->addConnect(*connect739);

Cconnect* connect740 = new Cconnect();
connect740->setNodeField("value_changed");
connect740->setProtoField("l_elbow_changed");
IS737->addConnect(*connect740);

OrientationInterpolator736->setIS(*IS737);

ProtoBody603->addChildren(*OrientationInterpolator736);

CROUTE* ROUTE741 = new CROUTE();
ROUTE741->setFromField("fraction_changed");
ROUTE741->setFromNode("BehaviorClock");
ROUTE741->setToField("set_fraction");
ROUTE741->setToNode("l_elbow_OI");
ProtoBody603->addChildren(*ROUTE741);

COrientationInterpolator* OrientationInterpolator742 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator742->setDEF("l_eyeball_OI");
CIS* IS743 = new CIS();
Cconnect* connect744 = new Cconnect();
connect744->setNodeField("key");
connect744->setProtoField("l_eyeball_key");
IS743->addConnect(*connect744);

Cconnect* connect745 = new Cconnect();
connect745->setNodeField("keyValue");
connect745->setProtoField("l_eyeball_keyValue");
IS743->addConnect(*connect745);

Cconnect* connect746 = new Cconnect();
connect746->setNodeField("value_changed");
connect746->setProtoField("l_eyeball_changed");
IS743->addConnect(*connect746);

OrientationInterpolator742->setIS(*IS743);

ProtoBody603->addChildren(*OrientationInterpolator742);

CROUTE* ROUTE747 = new CROUTE();
ROUTE747->setFromField("fraction_changed");
ROUTE747->setFromNode("BehaviorClock");
ROUTE747->setToField("set_fraction");
ROUTE747->setToNode("l_eyeball_OI");
ProtoBody603->addChildren(*ROUTE747);

COrientationInterpolator* OrientationInterpolator748 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator748->setDEF("l_eyeball_joint_OI");
CIS* IS749 = new CIS();
Cconnect* connect750 = new Cconnect();
connect750->setNodeField("key");
connect750->setProtoField("l_eyeball_joint_key");
IS749->addConnect(*connect750);

Cconnect* connect751 = new Cconnect();
connect751->setNodeField("keyValue");
connect751->setProtoField("l_eyeball_joint_keyValue");
IS749->addConnect(*connect751);

Cconnect* connect752 = new Cconnect();
connect752->setNodeField("value_changed");
connect752->setProtoField("l_eyeball_joint_changed");
IS749->addConnect(*connect752);

OrientationInterpolator748->setIS(*IS749);

ProtoBody603->addChildren(*OrientationInterpolator748);

CROUTE* ROUTE753 = new CROUTE();
ROUTE753->setFromField("fraction_changed");
ROUTE753->setFromNode("BehaviorClock");
ROUTE753->setToField("set_fraction");
ROUTE753->setToNode("l_eyeball_joint_OI");
ProtoBody603->addChildren(*ROUTE753);

COrientationInterpolator* OrientationInterpolator754 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator754->setDEF("l_eyebrow_OI");
CIS* IS755 = new CIS();
Cconnect* connect756 = new Cconnect();
connect756->setNodeField("key");
connect756->setProtoField("l_eyebrow_key");
IS755->addConnect(*connect756);

Cconnect* connect757 = new Cconnect();
connect757->setNodeField("keyValue");
connect757->setProtoField("l_eyebrow_keyValue");
IS755->addConnect(*connect757);

Cconnect* connect758 = new Cconnect();
connect758->setNodeField("value_changed");
connect758->setProtoField("l_eyebrow_changed");
IS755->addConnect(*connect758);

OrientationInterpolator754->setIS(*IS755);

ProtoBody603->addChildren(*OrientationInterpolator754);

CROUTE* ROUTE759 = new CROUTE();
ROUTE759->setFromField("fraction_changed");
ROUTE759->setFromNode("BehaviorClock");
ROUTE759->setToField("set_fraction");
ROUTE759->setToNode("l_eyebrow_OI");
ProtoBody603->addChildren(*ROUTE759);

COrientationInterpolator* OrientationInterpolator760 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator760->setDEF("l_eyebrow_joint_OI");
CIS* IS761 = new CIS();
Cconnect* connect762 = new Cconnect();
connect762->setNodeField("key");
connect762->setProtoField("l_eyebrow_joint_key");
IS761->addConnect(*connect762);

Cconnect* connect763 = new Cconnect();
connect763->setNodeField("keyValue");
connect763->setProtoField("l_eyebrow_joint_keyValue");
IS761->addConnect(*connect763);

Cconnect* connect764 = new Cconnect();
connect764->setNodeField("value_changed");
connect764->setProtoField("l_eyebrow_joint_changed");
IS761->addConnect(*connect764);

OrientationInterpolator760->setIS(*IS761);

ProtoBody603->addChildren(*OrientationInterpolator760);

CROUTE* ROUTE765 = new CROUTE();
ROUTE765->setFromField("fraction_changed");
ROUTE765->setFromNode("BehaviorClock");
ROUTE765->setToField("set_fraction");
ROUTE765->setToNode("l_eyebrow_joint_OI");
ProtoBody603->addChildren(*ROUTE765);

COrientationInterpolator* OrientationInterpolator766 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator766->setDEF("l_eyelid_OI");
CIS* IS767 = new CIS();
Cconnect* connect768 = new Cconnect();
connect768->setNodeField("key");
connect768->setProtoField("l_eyelid_key");
IS767->addConnect(*connect768);

Cconnect* connect769 = new Cconnect();
connect769->setNodeField("keyValue");
connect769->setProtoField("l_eyelid_keyValue");
IS767->addConnect(*connect769);

Cconnect* connect770 = new Cconnect();
connect770->setNodeField("value_changed");
connect770->setProtoField("l_eyelid_changed");
IS767->addConnect(*connect770);

OrientationInterpolator766->setIS(*IS767);

ProtoBody603->addChildren(*OrientationInterpolator766);

CROUTE* ROUTE771 = new CROUTE();
ROUTE771->setFromField("fraction_changed");
ROUTE771->setFromNode("BehaviorClock");
ROUTE771->setToField("set_fraction");
ROUTE771->setToNode("l_eyelid_OI");
ProtoBody603->addChildren(*ROUTE771);

COrientationInterpolator* OrientationInterpolator772 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator772->setDEF("l_eyelid_joint_OI");
CIS* IS773 = new CIS();
Cconnect* connect774 = new Cconnect();
connect774->setNodeField("key");
connect774->setProtoField("l_eyelid_joint_key");
IS773->addConnect(*connect774);

Cconnect* connect775 = new Cconnect();
connect775->setNodeField("keyValue");
connect775->setProtoField("l_eyelid_joint_keyValue");
IS773->addConnect(*connect775);

Cconnect* connect776 = new Cconnect();
connect776->setNodeField("value_changed");
connect776->setProtoField("l_eyelid_joint_changed");
IS773->addConnect(*connect776);

OrientationInterpolator772->setIS(*IS773);

ProtoBody603->addChildren(*OrientationInterpolator772);

CROUTE* ROUTE777 = new CROUTE();
ROUTE777->setFromField("fraction_changed");
ROUTE777->setFromNode("BehaviorClock");
ROUTE777->setToField("set_fraction");
ROUTE777->setToNode("l_eyelid_joint_OI");
ProtoBody603->addChildren(*ROUTE777);

COrientationInterpolator* OrientationInterpolator778 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator778->setDEF("l_forearm_OI");
CIS* IS779 = new CIS();
Cconnect* connect780 = new Cconnect();
connect780->setNodeField("key");
connect780->setProtoField("l_forearm_key");
IS779->addConnect(*connect780);

Cconnect* connect781 = new Cconnect();
connect781->setNodeField("keyValue");
connect781->setProtoField("l_forearm_keyValue");
IS779->addConnect(*connect781);

Cconnect* connect782 = new Cconnect();
connect782->setNodeField("value_changed");
connect782->setProtoField("l_forearm_changed");
IS779->addConnect(*connect782);

OrientationInterpolator778->setIS(*IS779);

ProtoBody603->addChildren(*OrientationInterpolator778);

CROUTE* ROUTE783 = new CROUTE();
ROUTE783->setFromField("fraction_changed");
ROUTE783->setFromNode("BehaviorClock");
ROUTE783->setToField("set_fraction");
ROUTE783->setToNode("l_forearm_OI");
ProtoBody603->addChildren(*ROUTE783);

COrientationInterpolator* OrientationInterpolator784 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator784->setDEF("l_forefoot_OI");
CIS* IS785 = new CIS();
Cconnect* connect786 = new Cconnect();
connect786->setNodeField("key");
connect786->setProtoField("l_forefoot_key");
IS785->addConnect(*connect786);

Cconnect* connect787 = new Cconnect();
connect787->setNodeField("keyValue");
connect787->setProtoField("l_forefoot_keyValue");
IS785->addConnect(*connect787);

Cconnect* connect788 = new Cconnect();
connect788->setNodeField("value_changed");
connect788->setProtoField("l_forefoot_changed");
IS785->addConnect(*connect788);

OrientationInterpolator784->setIS(*IS785);

ProtoBody603->addChildren(*OrientationInterpolator784);

CROUTE* ROUTE789 = new CROUTE();
ROUTE789->setFromField("fraction_changed");
ROUTE789->setFromNode("BehaviorClock");
ROUTE789->setToField("set_fraction");
ROUTE789->setToNode("l_forefoot_OI");
ProtoBody603->addChildren(*ROUTE789);

COrientationInterpolator* OrientationInterpolator790 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator790->setDEF("l_hand_OI");
CIS* IS791 = new CIS();
Cconnect* connect792 = new Cconnect();
connect792->setNodeField("key");
connect792->setProtoField("l_hand_key");
IS791->addConnect(*connect792);

Cconnect* connect793 = new Cconnect();
connect793->setNodeField("keyValue");
connect793->setProtoField("l_hand_keyValue");
IS791->addConnect(*connect793);

Cconnect* connect794 = new Cconnect();
connect794->setNodeField("value_changed");
connect794->setProtoField("l_hand_changed");
IS791->addConnect(*connect794);

OrientationInterpolator790->setIS(*IS791);

ProtoBody603->addChildren(*OrientationInterpolator790);

CROUTE* ROUTE795 = new CROUTE();
ROUTE795->setFromField("fraction_changed");
ROUTE795->setFromNode("BehaviorClock");
ROUTE795->setToField("set_fraction");
ROUTE795->setToNode("l_hand_OI");
ProtoBody603->addChildren(*ROUTE795);

COrientationInterpolator* OrientationInterpolator796 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator796->setDEF("l_hindfoot_OI");
CIS* IS797 = new CIS();
Cconnect* connect798 = new Cconnect();
connect798->setNodeField("key");
connect798->setProtoField("l_hindfoot_key");
IS797->addConnect(*connect798);

Cconnect* connect799 = new Cconnect();
connect799->setNodeField("keyValue");
connect799->setProtoField("l_hindfoot_keyValue");
IS797->addConnect(*connect799);

Cconnect* connect800 = new Cconnect();
connect800->setNodeField("value_changed");
connect800->setProtoField("l_hindfoot_changed");
IS797->addConnect(*connect800);

OrientationInterpolator796->setIS(*IS797);

ProtoBody603->addChildren(*OrientationInterpolator796);

CROUTE* ROUTE801 = new CROUTE();
ROUTE801->setFromField("fraction_changed");
ROUTE801->setFromNode("BehaviorClock");
ROUTE801->setToField("set_fraction");
ROUTE801->setToNode("l_hindfoot_OI");
ProtoBody603->addChildren(*ROUTE801);

COrientationInterpolator* OrientationInterpolator802 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator802->setDEF("l_hip_OI");
CIS* IS803 = new CIS();
Cconnect* connect804 = new Cconnect();
connect804->setNodeField("key");
connect804->setProtoField("l_hip_key");
IS803->addConnect(*connect804);

Cconnect* connect805 = new Cconnect();
connect805->setNodeField("keyValue");
connect805->setProtoField("l_hip_keyValue");
IS803->addConnect(*connect805);

Cconnect* connect806 = new Cconnect();
connect806->setNodeField("value_changed");
connect806->setProtoField("l_hip_changed");
IS803->addConnect(*connect806);

OrientationInterpolator802->setIS(*IS803);

ProtoBody603->addChildren(*OrientationInterpolator802);

CROUTE* ROUTE807 = new CROUTE();
ROUTE807->setFromField("fraction_changed");
ROUTE807->setFromNode("BehaviorClock");
ROUTE807->setToField("set_fraction");
ROUTE807->setToNode("l_hip_OI");
ProtoBody603->addChildren(*ROUTE807);

COrientationInterpolator* OrientationInterpolator808 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator808->setDEF("l_index0_OI");
CIS* IS809 = new CIS();
Cconnect* connect810 = new Cconnect();
connect810->setNodeField("key");
connect810->setProtoField("l_index0_key");
IS809->addConnect(*connect810);

Cconnect* connect811 = new Cconnect();
connect811->setNodeField("keyValue");
connect811->setProtoField("l_index0_keyValue");
IS809->addConnect(*connect811);

Cconnect* connect812 = new Cconnect();
connect812->setNodeField("value_changed");
connect812->setProtoField("l_index0_changed");
IS809->addConnect(*connect812);

OrientationInterpolator808->setIS(*IS809);

ProtoBody603->addChildren(*OrientationInterpolator808);

CROUTE* ROUTE813 = new CROUTE();
ROUTE813->setFromField("fraction_changed");
ROUTE813->setFromNode("BehaviorClock");
ROUTE813->setToField("set_fraction");
ROUTE813->setToNode("l_index0_OI");
ProtoBody603->addChildren(*ROUTE813);

COrientationInterpolator* OrientationInterpolator814 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator814->setDEF("l_index1_OI");
CIS* IS815 = new CIS();
Cconnect* connect816 = new Cconnect();
connect816->setNodeField("key");
connect816->setProtoField("l_index1_key");
IS815->addConnect(*connect816);

Cconnect* connect817 = new Cconnect();
connect817->setNodeField("keyValue");
connect817->setProtoField("l_index1_keyValue");
IS815->addConnect(*connect817);

Cconnect* connect818 = new Cconnect();
connect818->setNodeField("value_changed");
connect818->setProtoField("l_index1_changed");
IS815->addConnect(*connect818);

OrientationInterpolator814->setIS(*IS815);

ProtoBody603->addChildren(*OrientationInterpolator814);

CROUTE* ROUTE819 = new CROUTE();
ROUTE819->setFromField("fraction_changed");
ROUTE819->setFromNode("BehaviorClock");
ROUTE819->setToField("set_fraction");
ROUTE819->setToNode("l_index1_OI");
ProtoBody603->addChildren(*ROUTE819);

COrientationInterpolator* OrientationInterpolator820 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator820->setDEF("l_index2_OI");
CIS* IS821 = new CIS();
Cconnect* connect822 = new Cconnect();
connect822->setNodeField("key");
connect822->setProtoField("l_index2_key");
IS821->addConnect(*connect822);

Cconnect* connect823 = new Cconnect();
connect823->setNodeField("keyValue");
connect823->setProtoField("l_index2_keyValue");
IS821->addConnect(*connect823);

Cconnect* connect824 = new Cconnect();
connect824->setNodeField("value_changed");
connect824->setProtoField("l_index2_changed");
IS821->addConnect(*connect824);

OrientationInterpolator820->setIS(*IS821);

ProtoBody603->addChildren(*OrientationInterpolator820);

CROUTE* ROUTE825 = new CROUTE();
ROUTE825->setFromField("fraction_changed");
ROUTE825->setFromNode("BehaviorClock");
ROUTE825->setToField("set_fraction");
ROUTE825->setToNode("l_index2_OI");
ProtoBody603->addChildren(*ROUTE825);

COrientationInterpolator* OrientationInterpolator826 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator826->setDEF("l_index3_OI");
CIS* IS827 = new CIS();
Cconnect* connect828 = new Cconnect();
connect828->setNodeField("key");
connect828->setProtoField("l_index3_key");
IS827->addConnect(*connect828);

Cconnect* connect829 = new Cconnect();
connect829->setNodeField("keyValue");
connect829->setProtoField("l_index3_keyValue");
IS827->addConnect(*connect829);

Cconnect* connect830 = new Cconnect();
connect830->setNodeField("value_changed");
connect830->setProtoField("l_index3_changed");
IS827->addConnect(*connect830);

OrientationInterpolator826->setIS(*IS827);

ProtoBody603->addChildren(*OrientationInterpolator826);

CROUTE* ROUTE831 = new CROUTE();
ROUTE831->setFromField("fraction_changed");
ROUTE831->setFromNode("BehaviorClock");
ROUTE831->setToField("set_fraction");
ROUTE831->setToNode("l_index3_OI");
ProtoBody603->addChildren(*ROUTE831);

COrientationInterpolator* OrientationInterpolator832 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator832->setDEF("l_index_distal_OI");
CIS* IS833 = new CIS();
Cconnect* connect834 = new Cconnect();
connect834->setNodeField("key");
connect834->setProtoField("l_index_distal_key");
IS833->addConnect(*connect834);

Cconnect* connect835 = new Cconnect();
connect835->setNodeField("keyValue");
connect835->setProtoField("l_index_distal_keyValue");
IS833->addConnect(*connect835);

Cconnect* connect836 = new Cconnect();
connect836->setNodeField("value_changed");
connect836->setProtoField("l_index_distal_changed");
IS833->addConnect(*connect836);

OrientationInterpolator832->setIS(*IS833);

ProtoBody603->addChildren(*OrientationInterpolator832);

CROUTE* ROUTE837 = new CROUTE();
ROUTE837->setFromField("fraction_changed");
ROUTE837->setFromNode("BehaviorClock");
ROUTE837->setToField("set_fraction");
ROUTE837->setToNode("l_index_distal_OI");
ProtoBody603->addChildren(*ROUTE837);

COrientationInterpolator* OrientationInterpolator838 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator838->setDEF("l_index_metacarpal_OI");
CIS* IS839 = new CIS();
Cconnect* connect840 = new Cconnect();
connect840->setNodeField("key");
connect840->setProtoField("l_index_metacarpal_key");
IS839->addConnect(*connect840);

Cconnect* connect841 = new Cconnect();
connect841->setNodeField("keyValue");
connect841->setProtoField("l_index_metacarpal_keyValue");
IS839->addConnect(*connect841);

Cconnect* connect842 = new Cconnect();
connect842->setNodeField("value_changed");
connect842->setProtoField("l_index_metacarpal_changed");
IS839->addConnect(*connect842);

OrientationInterpolator838->setIS(*IS839);

ProtoBody603->addChildren(*OrientationInterpolator838);

CROUTE* ROUTE843 = new CROUTE();
ROUTE843->setFromField("fraction_changed");
ROUTE843->setFromNode("BehaviorClock");
ROUTE843->setToField("set_fraction");
ROUTE843->setToNode("l_index_metacarpal_OI");
ProtoBody603->addChildren(*ROUTE843);

COrientationInterpolator* OrientationInterpolator844 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator844->setDEF("l_index_middle_OI");
CIS* IS845 = new CIS();
Cconnect* connect846 = new Cconnect();
connect846->setNodeField("key");
connect846->setProtoField("l_index_middle_key");
IS845->addConnect(*connect846);

Cconnect* connect847 = new Cconnect();
connect847->setNodeField("keyValue");
connect847->setProtoField("l_index_middle_keyValue");
IS845->addConnect(*connect847);

Cconnect* connect848 = new Cconnect();
connect848->setNodeField("value_changed");
connect848->setProtoField("l_index_middle_changed");
IS845->addConnect(*connect848);

OrientationInterpolator844->setIS(*IS845);

ProtoBody603->addChildren(*OrientationInterpolator844);

CROUTE* ROUTE849 = new CROUTE();
ROUTE849->setFromField("fraction_changed");
ROUTE849->setFromNode("BehaviorClock");
ROUTE849->setToField("set_fraction");
ROUTE849->setToNode("l_index_middle_OI");
ProtoBody603->addChildren(*ROUTE849);

COrientationInterpolator* OrientationInterpolator850 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator850->setDEF("l_index_proximal_OI");
CIS* IS851 = new CIS();
Cconnect* connect852 = new Cconnect();
connect852->setNodeField("key");
connect852->setProtoField("l_index_proximal_key");
IS851->addConnect(*connect852);

Cconnect* connect853 = new Cconnect();
connect853->setNodeField("keyValue");
connect853->setProtoField("l_index_proximal_keyValue");
IS851->addConnect(*connect853);

Cconnect* connect854 = new Cconnect();
connect854->setNodeField("value_changed");
connect854->setProtoField("l_index_proximal_changed");
IS851->addConnect(*connect854);

OrientationInterpolator850->setIS(*IS851);

ProtoBody603->addChildren(*OrientationInterpolator850);

CROUTE* ROUTE855 = new CROUTE();
ROUTE855->setFromField("fraction_changed");
ROUTE855->setFromNode("BehaviorClock");
ROUTE855->setToField("set_fraction");
ROUTE855->setToNode("l_index_proximal_OI");
ProtoBody603->addChildren(*ROUTE855);

COrientationInterpolator* OrientationInterpolator856 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator856->setDEF("l_knee_OI");
CIS* IS857 = new CIS();
Cconnect* connect858 = new Cconnect();
connect858->setNodeField("key");
connect858->setProtoField("l_knee_key");
IS857->addConnect(*connect858);

Cconnect* connect859 = new Cconnect();
connect859->setNodeField("keyValue");
connect859->setProtoField("l_knee_keyValue");
IS857->addConnect(*connect859);

Cconnect* connect860 = new Cconnect();
connect860->setNodeField("value_changed");
connect860->setProtoField("l_knee_changed");
IS857->addConnect(*connect860);

OrientationInterpolator856->setIS(*IS857);

ProtoBody603->addChildren(*OrientationInterpolator856);

CROUTE* ROUTE861 = new CROUTE();
ROUTE861->setFromField("fraction_changed");
ROUTE861->setFromNode("BehaviorClock");
ROUTE861->setToField("set_fraction");
ROUTE861->setToNode("l_knee_OI");
ProtoBody603->addChildren(*ROUTE861);

COrientationInterpolator* OrientationInterpolator862 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator862->setDEF("l_metatarsal_OI");
CIS* IS863 = new CIS();
Cconnect* connect864 = new Cconnect();
connect864->setNodeField("key");
connect864->setProtoField("l_metatarsal_key");
IS863->addConnect(*connect864);

Cconnect* connect865 = new Cconnect();
connect865->setNodeField("keyValue");
connect865->setProtoField("l_metatarsal_keyValue");
IS863->addConnect(*connect865);

Cconnect* connect866 = new Cconnect();
connect866->setNodeField("value_changed");
connect866->setProtoField("l_metatarsal_changed");
IS863->addConnect(*connect866);

OrientationInterpolator862->setIS(*IS863);

ProtoBody603->addChildren(*OrientationInterpolator862);

CROUTE* ROUTE867 = new CROUTE();
ROUTE867->setFromField("fraction_changed");
ROUTE867->setFromNode("BehaviorClock");
ROUTE867->setToField("set_fraction");
ROUTE867->setToNode("l_metatarsal_OI");
ProtoBody603->addChildren(*ROUTE867);

COrientationInterpolator* OrientationInterpolator868 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator868->setDEF("l_middistal_OI");
CIS* IS869 = new CIS();
Cconnect* connect870 = new Cconnect();
connect870->setNodeField("key");
connect870->setProtoField("l_middistal_key");
IS869->addConnect(*connect870);

Cconnect* connect871 = new Cconnect();
connect871->setNodeField("keyValue");
connect871->setProtoField("l_middistal_keyValue");
IS869->addConnect(*connect871);

Cconnect* connect872 = new Cconnect();
connect872->setNodeField("value_changed");
connect872->setProtoField("l_middistal_changed");
IS869->addConnect(*connect872);

OrientationInterpolator868->setIS(*IS869);

ProtoBody603->addChildren(*OrientationInterpolator868);

CROUTE* ROUTE873 = new CROUTE();
ROUTE873->setFromField("fraction_changed");
ROUTE873->setFromNode("BehaviorClock");
ROUTE873->setToField("set_fraction");
ROUTE873->setToNode("l_middistal_OI");
ProtoBody603->addChildren(*ROUTE873);

COrientationInterpolator* OrientationInterpolator874 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator874->setDEF("l_middle0_OI");
CIS* IS875 = new CIS();
Cconnect* connect876 = new Cconnect();
connect876->setNodeField("key");
connect876->setProtoField("l_middle0_key");
IS875->addConnect(*connect876);

Cconnect* connect877 = new Cconnect();
connect877->setNodeField("keyValue");
connect877->setProtoField("l_middle0_keyValue");
IS875->addConnect(*connect877);

Cconnect* connect878 = new Cconnect();
connect878->setNodeField("value_changed");
connect878->setProtoField("l_middle0_changed");
IS875->addConnect(*connect878);

OrientationInterpolator874->setIS(*IS875);

ProtoBody603->addChildren(*OrientationInterpolator874);

CROUTE* ROUTE879 = new CROUTE();
ROUTE879->setFromField("fraction_changed");
ROUTE879->setFromNode("BehaviorClock");
ROUTE879->setToField("set_fraction");
ROUTE879->setToNode("l_middle0_OI");
ProtoBody603->addChildren(*ROUTE879);

COrientationInterpolator* OrientationInterpolator880 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator880->setDEF("l_middle1_OI");
CIS* IS881 = new CIS();
Cconnect* connect882 = new Cconnect();
connect882->setNodeField("key");
connect882->setProtoField("l_middle1_key");
IS881->addConnect(*connect882);

Cconnect* connect883 = new Cconnect();
connect883->setNodeField("keyValue");
connect883->setProtoField("l_middle1_keyValue");
IS881->addConnect(*connect883);

Cconnect* connect884 = new Cconnect();
connect884->setNodeField("value_changed");
connect884->setProtoField("l_middle1_changed");
IS881->addConnect(*connect884);

OrientationInterpolator880->setIS(*IS881);

ProtoBody603->addChildren(*OrientationInterpolator880);

CROUTE* ROUTE885 = new CROUTE();
ROUTE885->setFromField("fraction_changed");
ROUTE885->setFromNode("BehaviorClock");
ROUTE885->setToField("set_fraction");
ROUTE885->setToNode("l_middle1_OI");
ProtoBody603->addChildren(*ROUTE885);

COrientationInterpolator* OrientationInterpolator886 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator886->setDEF("l_middle2_OI");
CIS* IS887 = new CIS();
Cconnect* connect888 = new Cconnect();
connect888->setNodeField("key");
connect888->setProtoField("l_middle2_key");
IS887->addConnect(*connect888);

Cconnect* connect889 = new Cconnect();
connect889->setNodeField("keyValue");
connect889->setProtoField("l_middle2_keyValue");
IS887->addConnect(*connect889);

Cconnect* connect890 = new Cconnect();
connect890->setNodeField("value_changed");
connect890->setProtoField("l_middle2_changed");
IS887->addConnect(*connect890);

OrientationInterpolator886->setIS(*IS887);

ProtoBody603->addChildren(*OrientationInterpolator886);

CROUTE* ROUTE891 = new CROUTE();
ROUTE891->setFromField("fraction_changed");
ROUTE891->setFromNode("BehaviorClock");
ROUTE891->setToField("set_fraction");
ROUTE891->setToNode("l_middle2_OI");
ProtoBody603->addChildren(*ROUTE891);

COrientationInterpolator* OrientationInterpolator892 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator892->setDEF("l_middle3_OI");
CIS* IS893 = new CIS();
Cconnect* connect894 = new Cconnect();
connect894->setNodeField("key");
connect894->setProtoField("l_middle3_key");
IS893->addConnect(*connect894);

Cconnect* connect895 = new Cconnect();
connect895->setNodeField("keyValue");
connect895->setProtoField("l_middle3_keyValue");
IS893->addConnect(*connect895);

Cconnect* connect896 = new Cconnect();
connect896->setNodeField("value_changed");
connect896->setProtoField("l_middle3_changed");
IS893->addConnect(*connect896);

OrientationInterpolator892->setIS(*IS893);

ProtoBody603->addChildren(*OrientationInterpolator892);

CROUTE* ROUTE897 = new CROUTE();
ROUTE897->setFromField("fraction_changed");
ROUTE897->setFromNode("BehaviorClock");
ROUTE897->setToField("set_fraction");
ROUTE897->setToNode("l_middle3_OI");
ProtoBody603->addChildren(*ROUTE897);

COrientationInterpolator* OrientationInterpolator898 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator898->setDEF("l_middle_distal_OI");
CIS* IS899 = new CIS();
Cconnect* connect900 = new Cconnect();
connect900->setNodeField("key");
connect900->setProtoField("l_middle_distal_key");
IS899->addConnect(*connect900);

Cconnect* connect901 = new Cconnect();
connect901->setNodeField("keyValue");
connect901->setProtoField("l_middle_distal_keyValue");
IS899->addConnect(*connect901);

Cconnect* connect902 = new Cconnect();
connect902->setNodeField("value_changed");
connect902->setProtoField("l_middle_distal_changed");
IS899->addConnect(*connect902);

OrientationInterpolator898->setIS(*IS899);

ProtoBody603->addChildren(*OrientationInterpolator898);

CROUTE* ROUTE903 = new CROUTE();
ROUTE903->setFromField("fraction_changed");
ROUTE903->setFromNode("BehaviorClock");
ROUTE903->setToField("set_fraction");
ROUTE903->setToNode("l_middle_distal_OI");
ProtoBody603->addChildren(*ROUTE903);

COrientationInterpolator* OrientationInterpolator904 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator904->setDEF("l_middle_metacarpal_OI");
CIS* IS905 = new CIS();
Cconnect* connect906 = new Cconnect();
connect906->setNodeField("key");
connect906->setProtoField("l_middle_metacarpal_key");
IS905->addConnect(*connect906);

Cconnect* connect907 = new Cconnect();
connect907->setNodeField("keyValue");
connect907->setProtoField("l_middle_metacarpal_keyValue");
IS905->addConnect(*connect907);

Cconnect* connect908 = new Cconnect();
connect908->setNodeField("value_changed");
connect908->setProtoField("l_middle_metacarpal_changed");
IS905->addConnect(*connect908);

OrientationInterpolator904->setIS(*IS905);

ProtoBody603->addChildren(*OrientationInterpolator904);

CROUTE* ROUTE909 = new CROUTE();
ROUTE909->setFromField("fraction_changed");
ROUTE909->setFromNode("BehaviorClock");
ROUTE909->setToField("set_fraction");
ROUTE909->setToNode("l_middle_metacarpal_OI");
ProtoBody603->addChildren(*ROUTE909);

COrientationInterpolator* OrientationInterpolator910 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator910->setDEF("l_middle_middle_OI");
CIS* IS911 = new CIS();
Cconnect* connect912 = new Cconnect();
connect912->setNodeField("key");
connect912->setProtoField("l_middle_middle_key");
IS911->addConnect(*connect912);

Cconnect* connect913 = new Cconnect();
connect913->setNodeField("keyValue");
connect913->setProtoField("l_middle_middle_keyValue");
IS911->addConnect(*connect913);

Cconnect* connect914 = new Cconnect();
connect914->setNodeField("value_changed");
connect914->setProtoField("l_middle_middle_changed");
IS911->addConnect(*connect914);

OrientationInterpolator910->setIS(*IS911);

ProtoBody603->addChildren(*OrientationInterpolator910);

CROUTE* ROUTE915 = new CROUTE();
ROUTE915->setFromField("fraction_changed");
ROUTE915->setFromNode("BehaviorClock");
ROUTE915->setToField("set_fraction");
ROUTE915->setToNode("l_middle_middle_OI");
ProtoBody603->addChildren(*ROUTE915);

COrientationInterpolator* OrientationInterpolator916 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator916->setDEF("l_middle_proximal_OI");
CIS* IS917 = new CIS();
Cconnect* connect918 = new Cconnect();
connect918->setNodeField("key");
connect918->setProtoField("l_middle_proximal_key");
IS917->addConnect(*connect918);

Cconnect* connect919 = new Cconnect();
connect919->setNodeField("keyValue");
connect919->setProtoField("l_middle_proximal_keyValue");
IS917->addConnect(*connect919);

Cconnect* connect920 = new Cconnect();
connect920->setNodeField("value_changed");
connect920->setProtoField("l_middle_proximal_changed");
IS917->addConnect(*connect920);

OrientationInterpolator916->setIS(*IS917);

ProtoBody603->addChildren(*OrientationInterpolator916);

CROUTE* ROUTE921 = new CROUTE();
ROUTE921->setFromField("fraction_changed");
ROUTE921->setFromNode("BehaviorClock");
ROUTE921->setToField("set_fraction");
ROUTE921->setToNode("l_middle_proximal_OI");
ProtoBody603->addChildren(*ROUTE921);

COrientationInterpolator* OrientationInterpolator922 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator922->setDEF("l_midproximal_OI");
CIS* IS923 = new CIS();
Cconnect* connect924 = new Cconnect();
connect924->setNodeField("key");
connect924->setProtoField("l_midproximal_key");
IS923->addConnect(*connect924);

Cconnect* connect925 = new Cconnect();
connect925->setNodeField("keyValue");
connect925->setProtoField("l_midproximal_keyValue");
IS923->addConnect(*connect925);

Cconnect* connect926 = new Cconnect();
connect926->setNodeField("value_changed");
connect926->setProtoField("l_midproximal_changed");
IS923->addConnect(*connect926);

OrientationInterpolator922->setIS(*IS923);

ProtoBody603->addChildren(*OrientationInterpolator922);

CROUTE* ROUTE927 = new CROUTE();
ROUTE927->setFromField("fraction_changed");
ROUTE927->setFromNode("BehaviorClock");
ROUTE927->setToField("set_fraction");
ROUTE927->setToNode("l_midproximal_OI");
ProtoBody603->addChildren(*ROUTE927);

COrientationInterpolator* OrientationInterpolator928 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator928->setDEF("l_midtarsal_OI");
CIS* IS929 = new CIS();
Cconnect* connect930 = new Cconnect();
connect930->setNodeField("key");
connect930->setProtoField("l_midtarsal_key");
IS929->addConnect(*connect930);

Cconnect* connect931 = new Cconnect();
connect931->setNodeField("keyValue");
connect931->setProtoField("l_midtarsal_keyValue");
IS929->addConnect(*connect931);

Cconnect* connect932 = new Cconnect();
connect932->setNodeField("value_changed");
connect932->setProtoField("l_midtarsal_changed");
IS929->addConnect(*connect932);

OrientationInterpolator928->setIS(*IS929);

ProtoBody603->addChildren(*OrientationInterpolator928);

CROUTE* ROUTE933 = new CROUTE();
ROUTE933->setFromField("fraction_changed");
ROUTE933->setFromNode("BehaviorClock");
ROUTE933->setToField("set_fraction");
ROUTE933->setToNode("l_midtarsal_OI");
ProtoBody603->addChildren(*ROUTE933);

COrientationInterpolator* OrientationInterpolator934 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator934->setDEF("l_pinky0_OI");
CIS* IS935 = new CIS();
Cconnect* connect936 = new Cconnect();
connect936->setNodeField("key");
connect936->setProtoField("l_pinky0_key");
IS935->addConnect(*connect936);

Cconnect* connect937 = new Cconnect();
connect937->setNodeField("keyValue");
connect937->setProtoField("l_pinky0_keyValue");
IS935->addConnect(*connect937);

Cconnect* connect938 = new Cconnect();
connect938->setNodeField("value_changed");
connect938->setProtoField("l_pinky0_changed");
IS935->addConnect(*connect938);

OrientationInterpolator934->setIS(*IS935);

ProtoBody603->addChildren(*OrientationInterpolator934);

CROUTE* ROUTE939 = new CROUTE();
ROUTE939->setFromField("fraction_changed");
ROUTE939->setFromNode("BehaviorClock");
ROUTE939->setToField("set_fraction");
ROUTE939->setToNode("l_pinky0_OI");
ProtoBody603->addChildren(*ROUTE939);

COrientationInterpolator* OrientationInterpolator940 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator940->setDEF("l_pinky1_OI");
CIS* IS941 = new CIS();
Cconnect* connect942 = new Cconnect();
connect942->setNodeField("key");
connect942->setProtoField("l_pinky1_key");
IS941->addConnect(*connect942);

Cconnect* connect943 = new Cconnect();
connect943->setNodeField("keyValue");
connect943->setProtoField("l_pinky1_keyValue");
IS941->addConnect(*connect943);

Cconnect* connect944 = new Cconnect();
connect944->setNodeField("value_changed");
connect944->setProtoField("l_pinky1_changed");
IS941->addConnect(*connect944);

OrientationInterpolator940->setIS(*IS941);

ProtoBody603->addChildren(*OrientationInterpolator940);

CROUTE* ROUTE945 = new CROUTE();
ROUTE945->setFromField("fraction_changed");
ROUTE945->setFromNode("BehaviorClock");
ROUTE945->setToField("set_fraction");
ROUTE945->setToNode("l_pinky1_OI");
ProtoBody603->addChildren(*ROUTE945);

COrientationInterpolator* OrientationInterpolator946 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator946->setDEF("l_pinky2_OI");
CIS* IS947 = new CIS();
Cconnect* connect948 = new Cconnect();
connect948->setNodeField("key");
connect948->setProtoField("l_pinky2_key");
IS947->addConnect(*connect948);

Cconnect* connect949 = new Cconnect();
connect949->setNodeField("keyValue");
connect949->setProtoField("l_pinky2_keyValue");
IS947->addConnect(*connect949);

Cconnect* connect950 = new Cconnect();
connect950->setNodeField("value_changed");
connect950->setProtoField("l_pinky2_changed");
IS947->addConnect(*connect950);

OrientationInterpolator946->setIS(*IS947);

ProtoBody603->addChildren(*OrientationInterpolator946);

CROUTE* ROUTE951 = new CROUTE();
ROUTE951->setFromField("fraction_changed");
ROUTE951->setFromNode("BehaviorClock");
ROUTE951->setToField("set_fraction");
ROUTE951->setToNode("l_pinky2_OI");
ProtoBody603->addChildren(*ROUTE951);

COrientationInterpolator* OrientationInterpolator952 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator952->setDEF("l_pinky3_OI");
CIS* IS953 = new CIS();
Cconnect* connect954 = new Cconnect();
connect954->setNodeField("key");
connect954->setProtoField("l_pinky3_key");
IS953->addConnect(*connect954);

Cconnect* connect955 = new Cconnect();
connect955->setNodeField("keyValue");
connect955->setProtoField("l_pinky3_keyValue");
IS953->addConnect(*connect955);

Cconnect* connect956 = new Cconnect();
connect956->setNodeField("value_changed");
connect956->setProtoField("l_pinky3_changed");
IS953->addConnect(*connect956);

OrientationInterpolator952->setIS(*IS953);

ProtoBody603->addChildren(*OrientationInterpolator952);

CROUTE* ROUTE957 = new CROUTE();
ROUTE957->setFromField("fraction_changed");
ROUTE957->setFromNode("BehaviorClock");
ROUTE957->setToField("set_fraction");
ROUTE957->setToNode("l_pinky3_OI");
ProtoBody603->addChildren(*ROUTE957);

COrientationInterpolator* OrientationInterpolator958 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator958->setDEF("l_pinky_distal_OI");
CIS* IS959 = new CIS();
Cconnect* connect960 = new Cconnect();
connect960->setNodeField("key");
connect960->setProtoField("l_pinky_distal_key");
IS959->addConnect(*connect960);

Cconnect* connect961 = new Cconnect();
connect961->setNodeField("keyValue");
connect961->setProtoField("l_pinky_distal_keyValue");
IS959->addConnect(*connect961);

Cconnect* connect962 = new Cconnect();
connect962->setNodeField("value_changed");
connect962->setProtoField("l_pinky_distal_changed");
IS959->addConnect(*connect962);

OrientationInterpolator958->setIS(*IS959);

ProtoBody603->addChildren(*OrientationInterpolator958);

CROUTE* ROUTE963 = new CROUTE();
ROUTE963->setFromField("fraction_changed");
ROUTE963->setFromNode("BehaviorClock");
ROUTE963->setToField("set_fraction");
ROUTE963->setToNode("l_pinky_distal_OI");
ProtoBody603->addChildren(*ROUTE963);

COrientationInterpolator* OrientationInterpolator964 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator964->setDEF("l_pinky_metacarpal_OI");
CIS* IS965 = new CIS();
Cconnect* connect966 = new Cconnect();
connect966->setNodeField("key");
connect966->setProtoField("l_pinky_metacarpal_key");
IS965->addConnect(*connect966);

Cconnect* connect967 = new Cconnect();
connect967->setNodeField("keyValue");
connect967->setProtoField("l_pinky_metacarpal_keyValue");
IS965->addConnect(*connect967);

Cconnect* connect968 = new Cconnect();
connect968->setNodeField("value_changed");
connect968->setProtoField("l_pinky_metacarpal_changed");
IS965->addConnect(*connect968);

OrientationInterpolator964->setIS(*IS965);

ProtoBody603->addChildren(*OrientationInterpolator964);

CROUTE* ROUTE969 = new CROUTE();
ROUTE969->setFromField("fraction_changed");
ROUTE969->setFromNode("BehaviorClock");
ROUTE969->setToField("set_fraction");
ROUTE969->setToNode("l_pinky_metacarpal_OI");
ProtoBody603->addChildren(*ROUTE969);

COrientationInterpolator* OrientationInterpolator970 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator970->setDEF("l_pinky_middle_OI");
CIS* IS971 = new CIS();
Cconnect* connect972 = new Cconnect();
connect972->setNodeField("key");
connect972->setProtoField("l_pinky_middle_key");
IS971->addConnect(*connect972);

Cconnect* connect973 = new Cconnect();
connect973->setNodeField("keyValue");
connect973->setProtoField("l_pinky_middle_keyValue");
IS971->addConnect(*connect973);

Cconnect* connect974 = new Cconnect();
connect974->setNodeField("value_changed");
connect974->setProtoField("l_pinky_middle_changed");
IS971->addConnect(*connect974);

OrientationInterpolator970->setIS(*IS971);

ProtoBody603->addChildren(*OrientationInterpolator970);

CROUTE* ROUTE975 = new CROUTE();
ROUTE975->setFromField("fraction_changed");
ROUTE975->setFromNode("BehaviorClock");
ROUTE975->setToField("set_fraction");
ROUTE975->setToNode("l_pinky_middle_OI");
ProtoBody603->addChildren(*ROUTE975);

COrientationInterpolator* OrientationInterpolator976 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator976->setDEF("l_pinky_proximal_OI");
CIS* IS977 = new CIS();
Cconnect* connect978 = new Cconnect();
connect978->setNodeField("key");
connect978->setProtoField("l_pinky_proximal_key");
IS977->addConnect(*connect978);

Cconnect* connect979 = new Cconnect();
connect979->setNodeField("keyValue");
connect979->setProtoField("l_pinky_proximal_keyValue");
IS977->addConnect(*connect979);

Cconnect* connect980 = new Cconnect();
connect980->setNodeField("value_changed");
connect980->setProtoField("l_pinky_proximal_changed");
IS977->addConnect(*connect980);

OrientationInterpolator976->setIS(*IS977);

ProtoBody603->addChildren(*OrientationInterpolator976);

CROUTE* ROUTE981 = new CROUTE();
ROUTE981->setFromField("fraction_changed");
ROUTE981->setFromNode("BehaviorClock");
ROUTE981->setToField("set_fraction");
ROUTE981->setToNode("l_pinky_proximal_OI");
ProtoBody603->addChildren(*ROUTE981);

COrientationInterpolator* OrientationInterpolator982 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator982->setDEF("l_ring0_OI");
CIS* IS983 = new CIS();
Cconnect* connect984 = new Cconnect();
connect984->setNodeField("key");
connect984->setProtoField("l_ring0_key");
IS983->addConnect(*connect984);

Cconnect* connect985 = new Cconnect();
connect985->setNodeField("keyValue");
connect985->setProtoField("l_ring0_keyValue");
IS983->addConnect(*connect985);

Cconnect* connect986 = new Cconnect();
connect986->setNodeField("value_changed");
connect986->setProtoField("l_ring0_changed");
IS983->addConnect(*connect986);

OrientationInterpolator982->setIS(*IS983);

ProtoBody603->addChildren(*OrientationInterpolator982);

CROUTE* ROUTE987 = new CROUTE();
ROUTE987->setFromField("fraction_changed");
ROUTE987->setFromNode("BehaviorClock");
ROUTE987->setToField("set_fraction");
ROUTE987->setToNode("l_ring0_OI");
ProtoBody603->addChildren(*ROUTE987);

COrientationInterpolator* OrientationInterpolator988 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator988->setDEF("l_ring1_OI");
CIS* IS989 = new CIS();
Cconnect* connect990 = new Cconnect();
connect990->setNodeField("key");
connect990->setProtoField("l_ring1_key");
IS989->addConnect(*connect990);

Cconnect* connect991 = new Cconnect();
connect991->setNodeField("keyValue");
connect991->setProtoField("l_ring1_keyValue");
IS989->addConnect(*connect991);

Cconnect* connect992 = new Cconnect();
connect992->setNodeField("value_changed");
connect992->setProtoField("l_ring1_changed");
IS989->addConnect(*connect992);

OrientationInterpolator988->setIS(*IS989);

ProtoBody603->addChildren(*OrientationInterpolator988);

CROUTE* ROUTE993 = new CROUTE();
ROUTE993->setFromField("fraction_changed");
ROUTE993->setFromNode("BehaviorClock");
ROUTE993->setToField("set_fraction");
ROUTE993->setToNode("l_ring1_OI");
ProtoBody603->addChildren(*ROUTE993);

COrientationInterpolator* OrientationInterpolator994 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator994->setDEF("l_ring2_OI");
CIS* IS995 = new CIS();
Cconnect* connect996 = new Cconnect();
connect996->setNodeField("key");
connect996->setProtoField("l_ring2_key");
IS995->addConnect(*connect996);

Cconnect* connect997 = new Cconnect();
connect997->setNodeField("keyValue");
connect997->setProtoField("l_ring2_keyValue");
IS995->addConnect(*connect997);

Cconnect* connect998 = new Cconnect();
connect998->setNodeField("value_changed");
connect998->setProtoField("l_ring2_changed");
IS995->addConnect(*connect998);

OrientationInterpolator994->setIS(*IS995);

ProtoBody603->addChildren(*OrientationInterpolator994);

CROUTE* ROUTE999 = new CROUTE();
ROUTE999->setFromField("fraction_changed");
ROUTE999->setFromNode("BehaviorClock");
ROUTE999->setToField("set_fraction");
ROUTE999->setToNode("l_ring2_OI");
ProtoBody603->addChildren(*ROUTE999);

COrientationInterpolator* OrientationInterpolator1000 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1000->setDEF("l_ring3_OI");
CIS* IS1001 = new CIS();
Cconnect* connect1002 = new Cconnect();
connect1002->setNodeField("key");
connect1002->setProtoField("l_ring3_key");
IS1001->addConnect(*connect1002);

Cconnect* connect1003 = new Cconnect();
connect1003->setNodeField("keyValue");
connect1003->setProtoField("l_ring3_keyValue");
IS1001->addConnect(*connect1003);

Cconnect* connect1004 = new Cconnect();
connect1004->setNodeField("value_changed");
connect1004->setProtoField("l_ring3_changed");
IS1001->addConnect(*connect1004);

OrientationInterpolator1000->setIS(*IS1001);

ProtoBody603->addChildren(*OrientationInterpolator1000);

CROUTE* ROUTE1005 = new CROUTE();
ROUTE1005->setFromField("fraction_changed");
ROUTE1005->setFromNode("BehaviorClock");
ROUTE1005->setToField("set_fraction");
ROUTE1005->setToNode("l_ring3_OI");
ProtoBody603->addChildren(*ROUTE1005);

COrientationInterpolator* OrientationInterpolator1006 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1006->setDEF("l_ring_distal_OI");
CIS* IS1007 = new CIS();
Cconnect* connect1008 = new Cconnect();
connect1008->setNodeField("key");
connect1008->setProtoField("l_ring_distal_key");
IS1007->addConnect(*connect1008);

Cconnect* connect1009 = new Cconnect();
connect1009->setNodeField("keyValue");
connect1009->setProtoField("l_ring_distal_keyValue");
IS1007->addConnect(*connect1009);

Cconnect* connect1010 = new Cconnect();
connect1010->setNodeField("value_changed");
connect1010->setProtoField("l_ring_distal_changed");
IS1007->addConnect(*connect1010);

OrientationInterpolator1006->setIS(*IS1007);

ProtoBody603->addChildren(*OrientationInterpolator1006);

CROUTE* ROUTE1011 = new CROUTE();
ROUTE1011->setFromField("fraction_changed");
ROUTE1011->setFromNode("BehaviorClock");
ROUTE1011->setToField("set_fraction");
ROUTE1011->setToNode("l_ring_distal_OI");
ProtoBody603->addChildren(*ROUTE1011);

COrientationInterpolator* OrientationInterpolator1012 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1012->setDEF("l_ring_metacarpal_OI");
CIS* IS1013 = new CIS();
Cconnect* connect1014 = new Cconnect();
connect1014->setNodeField("key");
connect1014->setProtoField("l_ring_metacarpal_key");
IS1013->addConnect(*connect1014);

Cconnect* connect1015 = new Cconnect();
connect1015->setNodeField("keyValue");
connect1015->setProtoField("l_ring_metacarpal_keyValue");
IS1013->addConnect(*connect1015);

Cconnect* connect1016 = new Cconnect();
connect1016->setNodeField("value_changed");
connect1016->setProtoField("l_ring_metacarpal_changed");
IS1013->addConnect(*connect1016);

OrientationInterpolator1012->setIS(*IS1013);

ProtoBody603->addChildren(*OrientationInterpolator1012);

CROUTE* ROUTE1017 = new CROUTE();
ROUTE1017->setFromField("fraction_changed");
ROUTE1017->setFromNode("BehaviorClock");
ROUTE1017->setToField("set_fraction");
ROUTE1017->setToNode("l_ring_metacarpal_OI");
ProtoBody603->addChildren(*ROUTE1017);

COrientationInterpolator* OrientationInterpolator1018 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1018->setDEF("l_ring_middle_OI");
CIS* IS1019 = new CIS();
Cconnect* connect1020 = new Cconnect();
connect1020->setNodeField("key");
connect1020->setProtoField("l_ring_middle_key");
IS1019->addConnect(*connect1020);

Cconnect* connect1021 = new Cconnect();
connect1021->setNodeField("keyValue");
connect1021->setProtoField("l_ring_middle_keyValue");
IS1019->addConnect(*connect1021);

Cconnect* connect1022 = new Cconnect();
connect1022->setNodeField("value_changed");
connect1022->setProtoField("l_ring_middle_changed");
IS1019->addConnect(*connect1022);

OrientationInterpolator1018->setIS(*IS1019);

ProtoBody603->addChildren(*OrientationInterpolator1018);

CROUTE* ROUTE1023 = new CROUTE();
ROUTE1023->setFromField("fraction_changed");
ROUTE1023->setFromNode("BehaviorClock");
ROUTE1023->setToField("set_fraction");
ROUTE1023->setToNode("l_ring_middle_OI");
ProtoBody603->addChildren(*ROUTE1023);

COrientationInterpolator* OrientationInterpolator1024 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1024->setDEF("l_ring_proximal_OI");
CIS* IS1025 = new CIS();
Cconnect* connect1026 = new Cconnect();
connect1026->setNodeField("key");
connect1026->setProtoField("l_ring_proximal_key");
IS1025->addConnect(*connect1026);

Cconnect* connect1027 = new Cconnect();
connect1027->setNodeField("keyValue");
connect1027->setProtoField("l_ring_proximal_keyValue");
IS1025->addConnect(*connect1027);

Cconnect* connect1028 = new Cconnect();
connect1028->setNodeField("value_changed");
connect1028->setProtoField("l_ring_proximal_changed");
IS1025->addConnect(*connect1028);

OrientationInterpolator1024->setIS(*IS1025);

ProtoBody603->addChildren(*OrientationInterpolator1024);

CROUTE* ROUTE1029 = new CROUTE();
ROUTE1029->setFromField("fraction_changed");
ROUTE1029->setFromNode("BehaviorClock");
ROUTE1029->setToField("set_fraction");
ROUTE1029->setToNode("l_ring_proximal_OI");
ProtoBody603->addChildren(*ROUTE1029);

COrientationInterpolator* OrientationInterpolator1030 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1030->setDEF("l_scapula_OI");
CIS* IS1031 = new CIS();
Cconnect* connect1032 = new Cconnect();
connect1032->setNodeField("key");
connect1032->setProtoField("l_scapula_key");
IS1031->addConnect(*connect1032);

Cconnect* connect1033 = new Cconnect();
connect1033->setNodeField("keyValue");
connect1033->setProtoField("l_scapula_keyValue");
IS1031->addConnect(*connect1033);

Cconnect* connect1034 = new Cconnect();
connect1034->setNodeField("value_changed");
connect1034->setProtoField("l_scapula_changed");
IS1031->addConnect(*connect1034);

OrientationInterpolator1030->setIS(*IS1031);

ProtoBody603->addChildren(*OrientationInterpolator1030);

CROUTE* ROUTE1035 = new CROUTE();
ROUTE1035->setFromField("fraction_changed");
ROUTE1035->setFromNode("BehaviorClock");
ROUTE1035->setToField("set_fraction");
ROUTE1035->setToNode("l_scapula_OI");
ProtoBody603->addChildren(*ROUTE1035);

COrientationInterpolator* OrientationInterpolator1036 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1036->setDEF("l_shoulder_OI");
CIS* IS1037 = new CIS();
Cconnect* connect1038 = new Cconnect();
connect1038->setNodeField("key");
connect1038->setProtoField("l_shoulder_key");
IS1037->addConnect(*connect1038);

Cconnect* connect1039 = new Cconnect();
connect1039->setNodeField("keyValue");
connect1039->setProtoField("l_shoulder_keyValue");
IS1037->addConnect(*connect1039);

Cconnect* connect1040 = new Cconnect();
connect1040->setNodeField("value_changed");
connect1040->setProtoField("l_shoulder_changed");
IS1037->addConnect(*connect1040);

OrientationInterpolator1036->setIS(*IS1037);

ProtoBody603->addChildren(*OrientationInterpolator1036);

CROUTE* ROUTE1041 = new CROUTE();
ROUTE1041->setFromField("fraction_changed");
ROUTE1041->setFromNode("BehaviorClock");
ROUTE1041->setToField("set_fraction");
ROUTE1041->setToNode("l_shoulder_OI");
ProtoBody603->addChildren(*ROUTE1041);

COrientationInterpolator* OrientationInterpolator1042 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1042->setDEF("l_sternoclavicular_OI");
CIS* IS1043 = new CIS();
Cconnect* connect1044 = new Cconnect();
connect1044->setNodeField("key");
connect1044->setProtoField("l_sternoclavicular_key");
IS1043->addConnect(*connect1044);

Cconnect* connect1045 = new Cconnect();
connect1045->setNodeField("keyValue");
connect1045->setProtoField("l_sternoclavicular_keyValue");
IS1043->addConnect(*connect1045);

Cconnect* connect1046 = new Cconnect();
connect1046->setNodeField("value_changed");
connect1046->setProtoField("l_sternoclavicular_changed");
IS1043->addConnect(*connect1046);

OrientationInterpolator1042->setIS(*IS1043);

ProtoBody603->addChildren(*OrientationInterpolator1042);

CROUTE* ROUTE1047 = new CROUTE();
ROUTE1047->setFromField("fraction_changed");
ROUTE1047->setFromNode("BehaviorClock");
ROUTE1047->setToField("set_fraction");
ROUTE1047->setToNode("l_sternoclavicular_OI");
ProtoBody603->addChildren(*ROUTE1047);

COrientationInterpolator* OrientationInterpolator1048 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1048->setDEF("l_subtalar_OI");
CIS* IS1049 = new CIS();
Cconnect* connect1050 = new Cconnect();
connect1050->setNodeField("key");
connect1050->setProtoField("l_subtalar_key");
IS1049->addConnect(*connect1050);

Cconnect* connect1051 = new Cconnect();
connect1051->setNodeField("keyValue");
connect1051->setProtoField("l_subtalar_keyValue");
IS1049->addConnect(*connect1051);

Cconnect* connect1052 = new Cconnect();
connect1052->setNodeField("value_changed");
connect1052->setProtoField("l_subtalar_changed");
IS1049->addConnect(*connect1052);

OrientationInterpolator1048->setIS(*IS1049);

ProtoBody603->addChildren(*OrientationInterpolator1048);

CROUTE* ROUTE1053 = new CROUTE();
ROUTE1053->setFromField("fraction_changed");
ROUTE1053->setFromNode("BehaviorClock");
ROUTE1053->setToField("set_fraction");
ROUTE1053->setToNode("l_subtalar_OI");
ProtoBody603->addChildren(*ROUTE1053);

COrientationInterpolator* OrientationInterpolator1054 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1054->setDEF("l_thigh_OI");
CIS* IS1055 = new CIS();
Cconnect* connect1056 = new Cconnect();
connect1056->setNodeField("key");
connect1056->setProtoField("l_thigh_key");
IS1055->addConnect(*connect1056);

Cconnect* connect1057 = new Cconnect();
connect1057->setNodeField("keyValue");
connect1057->setProtoField("l_thigh_keyValue");
IS1055->addConnect(*connect1057);

Cconnect* connect1058 = new Cconnect();
connect1058->setNodeField("value_changed");
connect1058->setProtoField("l_thigh_changed");
IS1055->addConnect(*connect1058);

OrientationInterpolator1054->setIS(*IS1055);

ProtoBody603->addChildren(*OrientationInterpolator1054);

CROUTE* ROUTE1059 = new CROUTE();
ROUTE1059->setFromField("fraction_changed");
ROUTE1059->setFromNode("BehaviorClock");
ROUTE1059->setToField("set_fraction");
ROUTE1059->setToNode("l_thigh_OI");
ProtoBody603->addChildren(*ROUTE1059);

COrientationInterpolator* OrientationInterpolator1060 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1060->setDEF("l_thumb1_OI");
CIS* IS1061 = new CIS();
Cconnect* connect1062 = new Cconnect();
connect1062->setNodeField("key");
connect1062->setProtoField("l_thumb1_key");
IS1061->addConnect(*connect1062);

Cconnect* connect1063 = new Cconnect();
connect1063->setNodeField("keyValue");
connect1063->setProtoField("l_thumb1_keyValue");
IS1061->addConnect(*connect1063);

Cconnect* connect1064 = new Cconnect();
connect1064->setNodeField("value_changed");
connect1064->setProtoField("l_thumb1_changed");
IS1061->addConnect(*connect1064);

OrientationInterpolator1060->setIS(*IS1061);

ProtoBody603->addChildren(*OrientationInterpolator1060);

CROUTE* ROUTE1065 = new CROUTE();
ROUTE1065->setFromField("fraction_changed");
ROUTE1065->setFromNode("BehaviorClock");
ROUTE1065->setToField("set_fraction");
ROUTE1065->setToNode("l_thumb1_OI");
ProtoBody603->addChildren(*ROUTE1065);

COrientationInterpolator* OrientationInterpolator1066 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1066->setDEF("l_thumb2_OI");
CIS* IS1067 = new CIS();
Cconnect* connect1068 = new Cconnect();
connect1068->setNodeField("key");
connect1068->setProtoField("l_thumb2_key");
IS1067->addConnect(*connect1068);

Cconnect* connect1069 = new Cconnect();
connect1069->setNodeField("keyValue");
connect1069->setProtoField("l_thumb2_keyValue");
IS1067->addConnect(*connect1069);

Cconnect* connect1070 = new Cconnect();
connect1070->setNodeField("value_changed");
connect1070->setProtoField("l_thumb2_changed");
IS1067->addConnect(*connect1070);

OrientationInterpolator1066->setIS(*IS1067);

ProtoBody603->addChildren(*OrientationInterpolator1066);

CROUTE* ROUTE1071 = new CROUTE();
ROUTE1071->setFromField("fraction_changed");
ROUTE1071->setFromNode("BehaviorClock");
ROUTE1071->setToField("set_fraction");
ROUTE1071->setToNode("l_thumb2_OI");
ProtoBody603->addChildren(*ROUTE1071);

COrientationInterpolator* OrientationInterpolator1072 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1072->setDEF("l_thumb3_OI");
CIS* IS1073 = new CIS();
Cconnect* connect1074 = new Cconnect();
connect1074->setNodeField("key");
connect1074->setProtoField("l_thumb3_key");
IS1073->addConnect(*connect1074);

Cconnect* connect1075 = new Cconnect();
connect1075->setNodeField("keyValue");
connect1075->setProtoField("l_thumb3_keyValue");
IS1073->addConnect(*connect1075);

Cconnect* connect1076 = new Cconnect();
connect1076->setNodeField("value_changed");
connect1076->setProtoField("l_thumb3_changed");
IS1073->addConnect(*connect1076);

OrientationInterpolator1072->setIS(*IS1073);

ProtoBody603->addChildren(*OrientationInterpolator1072);

CROUTE* ROUTE1077 = new CROUTE();
ROUTE1077->setFromField("fraction_changed");
ROUTE1077->setFromNode("BehaviorClock");
ROUTE1077->setToField("set_fraction");
ROUTE1077->setToNode("l_thumb3_OI");
ProtoBody603->addChildren(*ROUTE1077);

COrientationInterpolator* OrientationInterpolator1078 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1078->setDEF("l_thumb_distal_OI");
CIS* IS1079 = new CIS();
Cconnect* connect1080 = new Cconnect();
connect1080->setNodeField("key");
connect1080->setProtoField("l_thumb_distal_key");
IS1079->addConnect(*connect1080);

Cconnect* connect1081 = new Cconnect();
connect1081->setNodeField("keyValue");
connect1081->setProtoField("l_thumb_distal_keyValue");
IS1079->addConnect(*connect1081);

Cconnect* connect1082 = new Cconnect();
connect1082->setNodeField("value_changed");
connect1082->setProtoField("l_thumb_distal_changed");
IS1079->addConnect(*connect1082);

OrientationInterpolator1078->setIS(*IS1079);

ProtoBody603->addChildren(*OrientationInterpolator1078);

CROUTE* ROUTE1083 = new CROUTE();
ROUTE1083->setFromField("fraction_changed");
ROUTE1083->setFromNode("BehaviorClock");
ROUTE1083->setToField("set_fraction");
ROUTE1083->setToNode("l_thumb_distal_OI");
ProtoBody603->addChildren(*ROUTE1083);

COrientationInterpolator* OrientationInterpolator1084 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1084->setDEF("l_thumb_metacarpal_OI");
CIS* IS1085 = new CIS();
Cconnect* connect1086 = new Cconnect();
connect1086->setNodeField("key");
connect1086->setProtoField("l_thumb_metacarpal_key");
IS1085->addConnect(*connect1086);

Cconnect* connect1087 = new Cconnect();
connect1087->setNodeField("keyValue");
connect1087->setProtoField("l_thumb_metacarpal_keyValue");
IS1085->addConnect(*connect1087);

Cconnect* connect1088 = new Cconnect();
connect1088->setNodeField("value_changed");
connect1088->setProtoField("l_thumb_metacarpal_changed");
IS1085->addConnect(*connect1088);

OrientationInterpolator1084->setIS(*IS1085);

ProtoBody603->addChildren(*OrientationInterpolator1084);

CROUTE* ROUTE1089 = new CROUTE();
ROUTE1089->setFromField("fraction_changed");
ROUTE1089->setFromNode("BehaviorClock");
ROUTE1089->setToField("set_fraction");
ROUTE1089->setToNode("l_thumb_metacarpal_OI");
ProtoBody603->addChildren(*ROUTE1089);

COrientationInterpolator* OrientationInterpolator1090 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1090->setDEF("l_thumb_proximal_OI");
CIS* IS1091 = new CIS();
Cconnect* connect1092 = new Cconnect();
connect1092->setNodeField("key");
connect1092->setProtoField("l_thumb_proximal_key");
IS1091->addConnect(*connect1092);

Cconnect* connect1093 = new Cconnect();
connect1093->setNodeField("keyValue");
connect1093->setProtoField("l_thumb_proximal_keyValue");
IS1091->addConnect(*connect1093);

Cconnect* connect1094 = new Cconnect();
connect1094->setNodeField("value_changed");
connect1094->setProtoField("l_thumb_proximal_changed");
IS1091->addConnect(*connect1094);

OrientationInterpolator1090->setIS(*IS1091);

ProtoBody603->addChildren(*OrientationInterpolator1090);

CROUTE* ROUTE1095 = new CROUTE();
ROUTE1095->setFromField("fraction_changed");
ROUTE1095->setFromNode("BehaviorClock");
ROUTE1095->setToField("set_fraction");
ROUTE1095->setToNode("l_thumb_proximal_OI");
ProtoBody603->addChildren(*ROUTE1095);

COrientationInterpolator* OrientationInterpolator1096 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1096->setDEF("l_upperarm_OI");
CIS* IS1097 = new CIS();
Cconnect* connect1098 = new Cconnect();
connect1098->setNodeField("key");
connect1098->setProtoField("l_upperarm_key");
IS1097->addConnect(*connect1098);

Cconnect* connect1099 = new Cconnect();
connect1099->setNodeField("keyValue");
connect1099->setProtoField("l_upperarm_keyValue");
IS1097->addConnect(*connect1099);

Cconnect* connect1100 = new Cconnect();
connect1100->setNodeField("value_changed");
connect1100->setProtoField("l_upperarm_changed");
IS1097->addConnect(*connect1100);

OrientationInterpolator1096->setIS(*IS1097);

ProtoBody603->addChildren(*OrientationInterpolator1096);

CROUTE* ROUTE1101 = new CROUTE();
ROUTE1101->setFromField("fraction_changed");
ROUTE1101->setFromNode("BehaviorClock");
ROUTE1101->setToField("set_fraction");
ROUTE1101->setToNode("l_upperarm_OI");
ProtoBody603->addChildren(*ROUTE1101);

COrientationInterpolator* OrientationInterpolator1102 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1102->setDEF("l_wrist_OI");
CIS* IS1103 = new CIS();
Cconnect* connect1104 = new Cconnect();
connect1104->setNodeField("key");
connect1104->setProtoField("l_wrist_key");
IS1103->addConnect(*connect1104);

Cconnect* connect1105 = new Cconnect();
connect1105->setNodeField("keyValue");
connect1105->setProtoField("l_wrist_keyValue");
IS1103->addConnect(*connect1105);

Cconnect* connect1106 = new Cconnect();
connect1106->setNodeField("value_changed");
connect1106->setProtoField("l_wrist_changed");
IS1103->addConnect(*connect1106);

OrientationInterpolator1102->setIS(*IS1103);

ProtoBody603->addChildren(*OrientationInterpolator1102);

CROUTE* ROUTE1107 = new CROUTE();
ROUTE1107->setFromField("fraction_changed");
ROUTE1107->setFromNode("BehaviorClock");
ROUTE1107->setToField("set_fraction");
ROUTE1107->setToNode("l_wrist_OI");
ProtoBody603->addChildren(*ROUTE1107);

COrientationInterpolator* OrientationInterpolator1108 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1108->setDEF("pelvis_OI");
CIS* IS1109 = new CIS();
Cconnect* connect1110 = new Cconnect();
connect1110->setNodeField("key");
connect1110->setProtoField("pelvis_key");
IS1109->addConnect(*connect1110);

Cconnect* connect1111 = new Cconnect();
connect1111->setNodeField("keyValue");
connect1111->setProtoField("pelvis_keyValue");
IS1109->addConnect(*connect1111);

Cconnect* connect1112 = new Cconnect();
connect1112->setNodeField("value_changed");
connect1112->setProtoField("pelvis_changed");
IS1109->addConnect(*connect1112);

OrientationInterpolator1108->setIS(*IS1109);

ProtoBody603->addChildren(*OrientationInterpolator1108);

CROUTE* ROUTE1113 = new CROUTE();
ROUTE1113->setFromField("fraction_changed");
ROUTE1113->setFromNode("BehaviorClock");
ROUTE1113->setToField("set_fraction");
ROUTE1113->setToNode("pelvis_OI");
ProtoBody603->addChildren(*ROUTE1113);

COrientationInterpolator* OrientationInterpolator1114 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1114->setDEF("r_acromioclavicular_OI");
CIS* IS1115 = new CIS();
Cconnect* connect1116 = new Cconnect();
connect1116->setNodeField("key");
connect1116->setProtoField("r_acromioclavicular_key");
IS1115->addConnect(*connect1116);

Cconnect* connect1117 = new Cconnect();
connect1117->setNodeField("keyValue");
connect1117->setProtoField("r_acromioclavicular_keyValue");
IS1115->addConnect(*connect1117);

Cconnect* connect1118 = new Cconnect();
connect1118->setNodeField("value_changed");
connect1118->setProtoField("r_acromioclavicular_changed");
IS1115->addConnect(*connect1118);

OrientationInterpolator1114->setIS(*IS1115);

ProtoBody603->addChildren(*OrientationInterpolator1114);

CROUTE* ROUTE1119 = new CROUTE();
ROUTE1119->setFromField("fraction_changed");
ROUTE1119->setFromNode("BehaviorClock");
ROUTE1119->setToField("set_fraction");
ROUTE1119->setToNode("r_acromioclavicular_OI");
ProtoBody603->addChildren(*ROUTE1119);

COrientationInterpolator* OrientationInterpolator1120 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1120->setDEF("r_ankle_OI");
CIS* IS1121 = new CIS();
Cconnect* connect1122 = new Cconnect();
connect1122->setNodeField("key");
connect1122->setProtoField("r_ankle_key");
IS1121->addConnect(*connect1122);

Cconnect* connect1123 = new Cconnect();
connect1123->setNodeField("keyValue");
connect1123->setProtoField("r_ankle_keyValue");
IS1121->addConnect(*connect1123);

Cconnect* connect1124 = new Cconnect();
connect1124->setNodeField("value_changed");
connect1124->setProtoField("r_ankle_changed");
IS1121->addConnect(*connect1124);

OrientationInterpolator1120->setIS(*IS1121);

ProtoBody603->addChildren(*OrientationInterpolator1120);

CROUTE* ROUTE1125 = new CROUTE();
ROUTE1125->setFromField("fraction_changed");
ROUTE1125->setFromNode("BehaviorClock");
ROUTE1125->setToField("set_fraction");
ROUTE1125->setToNode("r_ankle_OI");
ProtoBody603->addChildren(*ROUTE1125);

COrientationInterpolator* OrientationInterpolator1126 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1126->setDEF("r_calf_OI");
CIS* IS1127 = new CIS();
Cconnect* connect1128 = new Cconnect();
connect1128->setNodeField("key");
connect1128->setProtoField("r_calf_key");
IS1127->addConnect(*connect1128);

Cconnect* connect1129 = new Cconnect();
connect1129->setNodeField("keyValue");
connect1129->setProtoField("r_calf_keyValue");
IS1127->addConnect(*connect1129);

Cconnect* connect1130 = new Cconnect();
connect1130->setNodeField("value_changed");
connect1130->setProtoField("r_calf_changed");
IS1127->addConnect(*connect1130);

OrientationInterpolator1126->setIS(*IS1127);

ProtoBody603->addChildren(*OrientationInterpolator1126);

CROUTE* ROUTE1131 = new CROUTE();
ROUTE1131->setFromField("fraction_changed");
ROUTE1131->setFromNode("BehaviorClock");
ROUTE1131->setToField("set_fraction");
ROUTE1131->setToNode("r_calf_OI");
ProtoBody603->addChildren(*ROUTE1131);

COrientationInterpolator* OrientationInterpolator1132 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1132->setDEF("r_clavicle_OI");
CIS* IS1133 = new CIS();
Cconnect* connect1134 = new Cconnect();
connect1134->setNodeField("key");
connect1134->setProtoField("r_clavicle_key");
IS1133->addConnect(*connect1134);

Cconnect* connect1135 = new Cconnect();
connect1135->setNodeField("keyValue");
connect1135->setProtoField("r_clavicle_keyValue");
IS1133->addConnect(*connect1135);

Cconnect* connect1136 = new Cconnect();
connect1136->setNodeField("value_changed");
connect1136->setProtoField("r_clavicle_changed");
IS1133->addConnect(*connect1136);

OrientationInterpolator1132->setIS(*IS1133);

ProtoBody603->addChildren(*OrientationInterpolator1132);

CROUTE* ROUTE1137 = new CROUTE();
ROUTE1137->setFromField("fraction_changed");
ROUTE1137->setFromNode("BehaviorClock");
ROUTE1137->setToField("set_fraction");
ROUTE1137->setToNode("r_clavicle_OI");
ProtoBody603->addChildren(*ROUTE1137);

COrientationInterpolator* OrientationInterpolator1138 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1138->setDEF("r_elbow_OI");
CIS* IS1139 = new CIS();
Cconnect* connect1140 = new Cconnect();
connect1140->setNodeField("key");
connect1140->setProtoField("r_elbow_key");
IS1139->addConnect(*connect1140);

Cconnect* connect1141 = new Cconnect();
connect1141->setNodeField("keyValue");
connect1141->setProtoField("r_elbow_keyValue");
IS1139->addConnect(*connect1141);

Cconnect* connect1142 = new Cconnect();
connect1142->setNodeField("value_changed");
connect1142->setProtoField("r_elbow_changed");
IS1139->addConnect(*connect1142);

OrientationInterpolator1138->setIS(*IS1139);

ProtoBody603->addChildren(*OrientationInterpolator1138);

CROUTE* ROUTE1143 = new CROUTE();
ROUTE1143->setFromField("fraction_changed");
ROUTE1143->setFromNode("BehaviorClock");
ROUTE1143->setToField("set_fraction");
ROUTE1143->setToNode("r_elbow_OI");
ProtoBody603->addChildren(*ROUTE1143);

COrientationInterpolator* OrientationInterpolator1144 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1144->setDEF("r_eyeball_OI");
CIS* IS1145 = new CIS();
Cconnect* connect1146 = new Cconnect();
connect1146->setNodeField("key");
connect1146->setProtoField("r_eyeball_key");
IS1145->addConnect(*connect1146);

Cconnect* connect1147 = new Cconnect();
connect1147->setNodeField("keyValue");
connect1147->setProtoField("r_eyeball_keyValue");
IS1145->addConnect(*connect1147);

Cconnect* connect1148 = new Cconnect();
connect1148->setNodeField("value_changed");
connect1148->setProtoField("r_eyeball_changed");
IS1145->addConnect(*connect1148);

OrientationInterpolator1144->setIS(*IS1145);

ProtoBody603->addChildren(*OrientationInterpolator1144);

CROUTE* ROUTE1149 = new CROUTE();
ROUTE1149->setFromField("fraction_changed");
ROUTE1149->setFromNode("BehaviorClock");
ROUTE1149->setToField("set_fraction");
ROUTE1149->setToNode("r_eyeball_OI");
ProtoBody603->addChildren(*ROUTE1149);

COrientationInterpolator* OrientationInterpolator1150 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1150->setDEF("r_eyeball_joint_OI");
CIS* IS1151 = new CIS();
Cconnect* connect1152 = new Cconnect();
connect1152->setNodeField("key");
connect1152->setProtoField("r_eyeball_joint_key");
IS1151->addConnect(*connect1152);

Cconnect* connect1153 = new Cconnect();
connect1153->setNodeField("keyValue");
connect1153->setProtoField("r_eyeball_joint_keyValue");
IS1151->addConnect(*connect1153);

Cconnect* connect1154 = new Cconnect();
connect1154->setNodeField("value_changed");
connect1154->setProtoField("r_eyeball_joint_changed");
IS1151->addConnect(*connect1154);

OrientationInterpolator1150->setIS(*IS1151);

ProtoBody603->addChildren(*OrientationInterpolator1150);

CROUTE* ROUTE1155 = new CROUTE();
ROUTE1155->setFromField("fraction_changed");
ROUTE1155->setFromNode("BehaviorClock");
ROUTE1155->setToField("set_fraction");
ROUTE1155->setToNode("r_eyeball_joint_OI");
ProtoBody603->addChildren(*ROUTE1155);

COrientationInterpolator* OrientationInterpolator1156 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1156->setDEF("r_eyebrow_OI");
CIS* IS1157 = new CIS();
Cconnect* connect1158 = new Cconnect();
connect1158->setNodeField("key");
connect1158->setProtoField("r_eyebrow_key");
IS1157->addConnect(*connect1158);

Cconnect* connect1159 = new Cconnect();
connect1159->setNodeField("keyValue");
connect1159->setProtoField("r_eyebrow_keyValue");
IS1157->addConnect(*connect1159);

Cconnect* connect1160 = new Cconnect();
connect1160->setNodeField("value_changed");
connect1160->setProtoField("r_eyebrow_changed");
IS1157->addConnect(*connect1160);

OrientationInterpolator1156->setIS(*IS1157);

ProtoBody603->addChildren(*OrientationInterpolator1156);

CROUTE* ROUTE1161 = new CROUTE();
ROUTE1161->setFromField("fraction_changed");
ROUTE1161->setFromNode("BehaviorClock");
ROUTE1161->setToField("set_fraction");
ROUTE1161->setToNode("r_eyebrow_OI");
ProtoBody603->addChildren(*ROUTE1161);

COrientationInterpolator* OrientationInterpolator1162 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1162->setDEF("r_eyebrow_joint_OI");
CIS* IS1163 = new CIS();
Cconnect* connect1164 = new Cconnect();
connect1164->setNodeField("key");
connect1164->setProtoField("r_eyebrow_joint_key");
IS1163->addConnect(*connect1164);

Cconnect* connect1165 = new Cconnect();
connect1165->setNodeField("keyValue");
connect1165->setProtoField("r_eyebrow_joint_keyValue");
IS1163->addConnect(*connect1165);

Cconnect* connect1166 = new Cconnect();
connect1166->setNodeField("value_changed");
connect1166->setProtoField("r_eyebrow_joint_changed");
IS1163->addConnect(*connect1166);

OrientationInterpolator1162->setIS(*IS1163);

ProtoBody603->addChildren(*OrientationInterpolator1162);

CROUTE* ROUTE1167 = new CROUTE();
ROUTE1167->setFromField("fraction_changed");
ROUTE1167->setFromNode("BehaviorClock");
ROUTE1167->setToField("set_fraction");
ROUTE1167->setToNode("r_eyebrow_joint_OI");
ProtoBody603->addChildren(*ROUTE1167);

COrientationInterpolator* OrientationInterpolator1168 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1168->setDEF("r_eyelid_OI");
CIS* IS1169 = new CIS();
Cconnect* connect1170 = new Cconnect();
connect1170->setNodeField("key");
connect1170->setProtoField("r_eyelid_key");
IS1169->addConnect(*connect1170);

Cconnect* connect1171 = new Cconnect();
connect1171->setNodeField("keyValue");
connect1171->setProtoField("r_eyelid_keyValue");
IS1169->addConnect(*connect1171);

Cconnect* connect1172 = new Cconnect();
connect1172->setNodeField("value_changed");
connect1172->setProtoField("r_eyelid_changed");
IS1169->addConnect(*connect1172);

OrientationInterpolator1168->setIS(*IS1169);

ProtoBody603->addChildren(*OrientationInterpolator1168);

CROUTE* ROUTE1173 = new CROUTE();
ROUTE1173->setFromField("fraction_changed");
ROUTE1173->setFromNode("BehaviorClock");
ROUTE1173->setToField("set_fraction");
ROUTE1173->setToNode("r_eyelid_OI");
ProtoBody603->addChildren(*ROUTE1173);

COrientationInterpolator* OrientationInterpolator1174 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1174->setDEF("r_eyelid_joint_OI");
CIS* IS1175 = new CIS();
Cconnect* connect1176 = new Cconnect();
connect1176->setNodeField("key");
connect1176->setProtoField("r_eyelid_joint_key");
IS1175->addConnect(*connect1176);

Cconnect* connect1177 = new Cconnect();
connect1177->setNodeField("keyValue");
connect1177->setProtoField("r_eyelid_joint_keyValue");
IS1175->addConnect(*connect1177);

Cconnect* connect1178 = new Cconnect();
connect1178->setNodeField("value_changed");
connect1178->setProtoField("r_eyelid_joint_changed");
IS1175->addConnect(*connect1178);

OrientationInterpolator1174->setIS(*IS1175);

ProtoBody603->addChildren(*OrientationInterpolator1174);

CROUTE* ROUTE1179 = new CROUTE();
ROUTE1179->setFromField("fraction_changed");
ROUTE1179->setFromNode("BehaviorClock");
ROUTE1179->setToField("set_fraction");
ROUTE1179->setToNode("r_eyelid_joint_OI");
ProtoBody603->addChildren(*ROUTE1179);

COrientationInterpolator* OrientationInterpolator1180 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1180->setDEF("r_forearm_OI");
CIS* IS1181 = new CIS();
Cconnect* connect1182 = new Cconnect();
connect1182->setNodeField("key");
connect1182->setProtoField("r_forearm_key");
IS1181->addConnect(*connect1182);

Cconnect* connect1183 = new Cconnect();
connect1183->setNodeField("keyValue");
connect1183->setProtoField("r_forearm_keyValue");
IS1181->addConnect(*connect1183);

Cconnect* connect1184 = new Cconnect();
connect1184->setNodeField("value_changed");
connect1184->setProtoField("r_forearm_changed");
IS1181->addConnect(*connect1184);

OrientationInterpolator1180->setIS(*IS1181);

ProtoBody603->addChildren(*OrientationInterpolator1180);

CROUTE* ROUTE1185 = new CROUTE();
ROUTE1185->setFromField("fraction_changed");
ROUTE1185->setFromNode("BehaviorClock");
ROUTE1185->setToField("set_fraction");
ROUTE1185->setToNode("r_forearm_OI");
ProtoBody603->addChildren(*ROUTE1185);

COrientationInterpolator* OrientationInterpolator1186 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1186->setDEF("r_forefoot_OI");
CIS* IS1187 = new CIS();
Cconnect* connect1188 = new Cconnect();
connect1188->setNodeField("key");
connect1188->setProtoField("r_forefoot_key");
IS1187->addConnect(*connect1188);

Cconnect* connect1189 = new Cconnect();
connect1189->setNodeField("keyValue");
connect1189->setProtoField("r_forefoot_keyValue");
IS1187->addConnect(*connect1189);

Cconnect* connect1190 = new Cconnect();
connect1190->setNodeField("value_changed");
connect1190->setProtoField("r_forefoot_changed");
IS1187->addConnect(*connect1190);

OrientationInterpolator1186->setIS(*IS1187);

ProtoBody603->addChildren(*OrientationInterpolator1186);

CROUTE* ROUTE1191 = new CROUTE();
ROUTE1191->setFromField("fraction_changed");
ROUTE1191->setFromNode("BehaviorClock");
ROUTE1191->setToField("set_fraction");
ROUTE1191->setToNode("r_forefoot_OI");
ProtoBody603->addChildren(*ROUTE1191);

COrientationInterpolator* OrientationInterpolator1192 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1192->setDEF("r_hand_OI");
CIS* IS1193 = new CIS();
Cconnect* connect1194 = new Cconnect();
connect1194->setNodeField("key");
connect1194->setProtoField("r_hand_key");
IS1193->addConnect(*connect1194);

Cconnect* connect1195 = new Cconnect();
connect1195->setNodeField("keyValue");
connect1195->setProtoField("r_hand_keyValue");
IS1193->addConnect(*connect1195);

Cconnect* connect1196 = new Cconnect();
connect1196->setNodeField("value_changed");
connect1196->setProtoField("r_hand_changed");
IS1193->addConnect(*connect1196);

OrientationInterpolator1192->setIS(*IS1193);

ProtoBody603->addChildren(*OrientationInterpolator1192);

CROUTE* ROUTE1197 = new CROUTE();
ROUTE1197->setFromField("fraction_changed");
ROUTE1197->setFromNode("BehaviorClock");
ROUTE1197->setToField("set_fraction");
ROUTE1197->setToNode("r_hand_OI");
ProtoBody603->addChildren(*ROUTE1197);

COrientationInterpolator* OrientationInterpolator1198 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1198->setDEF("r_hindfoot_OI");
CIS* IS1199 = new CIS();
Cconnect* connect1200 = new Cconnect();
connect1200->setNodeField("key");
connect1200->setProtoField("r_hindfoot_key");
IS1199->addConnect(*connect1200);

Cconnect* connect1201 = new Cconnect();
connect1201->setNodeField("keyValue");
connect1201->setProtoField("r_hindfoot_keyValue");
IS1199->addConnect(*connect1201);

Cconnect* connect1202 = new Cconnect();
connect1202->setNodeField("value_changed");
connect1202->setProtoField("r_hindfoot_changed");
IS1199->addConnect(*connect1202);

OrientationInterpolator1198->setIS(*IS1199);

ProtoBody603->addChildren(*OrientationInterpolator1198);

CROUTE* ROUTE1203 = new CROUTE();
ROUTE1203->setFromField("fraction_changed");
ROUTE1203->setFromNode("BehaviorClock");
ROUTE1203->setToField("set_fraction");
ROUTE1203->setToNode("r_hindfoot_OI");
ProtoBody603->addChildren(*ROUTE1203);

COrientationInterpolator* OrientationInterpolator1204 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1204->setDEF("r_hip_OI");
CIS* IS1205 = new CIS();
Cconnect* connect1206 = new Cconnect();
connect1206->setNodeField("key");
connect1206->setProtoField("r_hip_key");
IS1205->addConnect(*connect1206);

Cconnect* connect1207 = new Cconnect();
connect1207->setNodeField("keyValue");
connect1207->setProtoField("r_hip_keyValue");
IS1205->addConnect(*connect1207);

Cconnect* connect1208 = new Cconnect();
connect1208->setNodeField("value_changed");
connect1208->setProtoField("r_hip_changed");
IS1205->addConnect(*connect1208);

OrientationInterpolator1204->setIS(*IS1205);

ProtoBody603->addChildren(*OrientationInterpolator1204);

CROUTE* ROUTE1209 = new CROUTE();
ROUTE1209->setFromField("fraction_changed");
ROUTE1209->setFromNode("BehaviorClock");
ROUTE1209->setToField("set_fraction");
ROUTE1209->setToNode("r_hip_OI");
ProtoBody603->addChildren(*ROUTE1209);

COrientationInterpolator* OrientationInterpolator1210 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1210->setDEF("r_index0_OI");
CIS* IS1211 = new CIS();
Cconnect* connect1212 = new Cconnect();
connect1212->setNodeField("key");
connect1212->setProtoField("r_index0_key");
IS1211->addConnect(*connect1212);

Cconnect* connect1213 = new Cconnect();
connect1213->setNodeField("keyValue");
connect1213->setProtoField("r_index0_keyValue");
IS1211->addConnect(*connect1213);

Cconnect* connect1214 = new Cconnect();
connect1214->setNodeField("value_changed");
connect1214->setProtoField("r_index0_changed");
IS1211->addConnect(*connect1214);

OrientationInterpolator1210->setIS(*IS1211);

ProtoBody603->addChildren(*OrientationInterpolator1210);

CROUTE* ROUTE1215 = new CROUTE();
ROUTE1215->setFromField("fraction_changed");
ROUTE1215->setFromNode("BehaviorClock");
ROUTE1215->setToField("set_fraction");
ROUTE1215->setToNode("r_index0_OI");
ProtoBody603->addChildren(*ROUTE1215);

COrientationInterpolator* OrientationInterpolator1216 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1216->setDEF("r_index1_OI");
CIS* IS1217 = new CIS();
Cconnect* connect1218 = new Cconnect();
connect1218->setNodeField("key");
connect1218->setProtoField("r_index1_key");
IS1217->addConnect(*connect1218);

Cconnect* connect1219 = new Cconnect();
connect1219->setNodeField("keyValue");
connect1219->setProtoField("r_index1_keyValue");
IS1217->addConnect(*connect1219);

Cconnect* connect1220 = new Cconnect();
connect1220->setNodeField("value_changed");
connect1220->setProtoField("r_index1_changed");
IS1217->addConnect(*connect1220);

OrientationInterpolator1216->setIS(*IS1217);

ProtoBody603->addChildren(*OrientationInterpolator1216);

CROUTE* ROUTE1221 = new CROUTE();
ROUTE1221->setFromField("fraction_changed");
ROUTE1221->setFromNode("BehaviorClock");
ROUTE1221->setToField("set_fraction");
ROUTE1221->setToNode("r_index1_OI");
ProtoBody603->addChildren(*ROUTE1221);

COrientationInterpolator* OrientationInterpolator1222 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1222->setDEF("r_index2_OI");
CIS* IS1223 = new CIS();
Cconnect* connect1224 = new Cconnect();
connect1224->setNodeField("key");
connect1224->setProtoField("r_index2_key");
IS1223->addConnect(*connect1224);

Cconnect* connect1225 = new Cconnect();
connect1225->setNodeField("keyValue");
connect1225->setProtoField("r_index2_keyValue");
IS1223->addConnect(*connect1225);

Cconnect* connect1226 = new Cconnect();
connect1226->setNodeField("value_changed");
connect1226->setProtoField("r_index2_changed");
IS1223->addConnect(*connect1226);

OrientationInterpolator1222->setIS(*IS1223);

ProtoBody603->addChildren(*OrientationInterpolator1222);

CROUTE* ROUTE1227 = new CROUTE();
ROUTE1227->setFromField("fraction_changed");
ROUTE1227->setFromNode("BehaviorClock");
ROUTE1227->setToField("set_fraction");
ROUTE1227->setToNode("r_index2_OI");
ProtoBody603->addChildren(*ROUTE1227);

COrientationInterpolator* OrientationInterpolator1228 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1228->setDEF("r_index3_OI");
CIS* IS1229 = new CIS();
Cconnect* connect1230 = new Cconnect();
connect1230->setNodeField("key");
connect1230->setProtoField("r_index3_key");
IS1229->addConnect(*connect1230);

Cconnect* connect1231 = new Cconnect();
connect1231->setNodeField("keyValue");
connect1231->setProtoField("r_index3_keyValue");
IS1229->addConnect(*connect1231);

Cconnect* connect1232 = new Cconnect();
connect1232->setNodeField("value_changed");
connect1232->setProtoField("r_index3_changed");
IS1229->addConnect(*connect1232);

OrientationInterpolator1228->setIS(*IS1229);

ProtoBody603->addChildren(*OrientationInterpolator1228);

CROUTE* ROUTE1233 = new CROUTE();
ROUTE1233->setFromField("fraction_changed");
ROUTE1233->setFromNode("BehaviorClock");
ROUTE1233->setToField("set_fraction");
ROUTE1233->setToNode("r_index3_OI");
ProtoBody603->addChildren(*ROUTE1233);

COrientationInterpolator* OrientationInterpolator1234 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1234->setDEF("r_index_distal_OI");
CIS* IS1235 = new CIS();
Cconnect* connect1236 = new Cconnect();
connect1236->setNodeField("key");
connect1236->setProtoField("r_index_distal_key");
IS1235->addConnect(*connect1236);

Cconnect* connect1237 = new Cconnect();
connect1237->setNodeField("keyValue");
connect1237->setProtoField("r_index_distal_keyValue");
IS1235->addConnect(*connect1237);

Cconnect* connect1238 = new Cconnect();
connect1238->setNodeField("value_changed");
connect1238->setProtoField("r_index_distal_changed");
IS1235->addConnect(*connect1238);

OrientationInterpolator1234->setIS(*IS1235);

ProtoBody603->addChildren(*OrientationInterpolator1234);

CROUTE* ROUTE1239 = new CROUTE();
ROUTE1239->setFromField("fraction_changed");
ROUTE1239->setFromNode("BehaviorClock");
ROUTE1239->setToField("set_fraction");
ROUTE1239->setToNode("r_index_distal_OI");
ProtoBody603->addChildren(*ROUTE1239);

COrientationInterpolator* OrientationInterpolator1240 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1240->setDEF("r_index_metacarpal_OI");
CIS* IS1241 = new CIS();
Cconnect* connect1242 = new Cconnect();
connect1242->setNodeField("key");
connect1242->setProtoField("r_index_metacarpal_key");
IS1241->addConnect(*connect1242);

Cconnect* connect1243 = new Cconnect();
connect1243->setNodeField("keyValue");
connect1243->setProtoField("r_index_metacarpal_keyValue");
IS1241->addConnect(*connect1243);

Cconnect* connect1244 = new Cconnect();
connect1244->setNodeField("value_changed");
connect1244->setProtoField("r_index_metacarpal_changed");
IS1241->addConnect(*connect1244);

OrientationInterpolator1240->setIS(*IS1241);

ProtoBody603->addChildren(*OrientationInterpolator1240);

CROUTE* ROUTE1245 = new CROUTE();
ROUTE1245->setFromField("fraction_changed");
ROUTE1245->setFromNode("BehaviorClock");
ROUTE1245->setToField("set_fraction");
ROUTE1245->setToNode("r_index_metacarpal_OI");
ProtoBody603->addChildren(*ROUTE1245);

COrientationInterpolator* OrientationInterpolator1246 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1246->setDEF("r_index_middle_OI");
CIS* IS1247 = new CIS();
Cconnect* connect1248 = new Cconnect();
connect1248->setNodeField("key");
connect1248->setProtoField("r_index_middle_key");
IS1247->addConnect(*connect1248);

Cconnect* connect1249 = new Cconnect();
connect1249->setNodeField("keyValue");
connect1249->setProtoField("r_index_middle_keyValue");
IS1247->addConnect(*connect1249);

Cconnect* connect1250 = new Cconnect();
connect1250->setNodeField("value_changed");
connect1250->setProtoField("r_index_middle_changed");
IS1247->addConnect(*connect1250);

OrientationInterpolator1246->setIS(*IS1247);

ProtoBody603->addChildren(*OrientationInterpolator1246);

CROUTE* ROUTE1251 = new CROUTE();
ROUTE1251->setFromField("fraction_changed");
ROUTE1251->setFromNode("BehaviorClock");
ROUTE1251->setToField("set_fraction");
ROUTE1251->setToNode("r_index_middle_OI");
ProtoBody603->addChildren(*ROUTE1251);

COrientationInterpolator* OrientationInterpolator1252 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1252->setDEF("r_index_proximal_OI");
CIS* IS1253 = new CIS();
Cconnect* connect1254 = new Cconnect();
connect1254->setNodeField("key");
connect1254->setProtoField("r_index_proximal_key");
IS1253->addConnect(*connect1254);

Cconnect* connect1255 = new Cconnect();
connect1255->setNodeField("keyValue");
connect1255->setProtoField("r_index_proximal_keyValue");
IS1253->addConnect(*connect1255);

Cconnect* connect1256 = new Cconnect();
connect1256->setNodeField("value_changed");
connect1256->setProtoField("r_index_proximal_changed");
IS1253->addConnect(*connect1256);

OrientationInterpolator1252->setIS(*IS1253);

ProtoBody603->addChildren(*OrientationInterpolator1252);

CROUTE* ROUTE1257 = new CROUTE();
ROUTE1257->setFromField("fraction_changed");
ROUTE1257->setFromNode("BehaviorClock");
ROUTE1257->setToField("set_fraction");
ROUTE1257->setToNode("r_index_proximal_OI");
ProtoBody603->addChildren(*ROUTE1257);

COrientationInterpolator* OrientationInterpolator1258 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1258->setDEF("r_knee_OI");
CIS* IS1259 = new CIS();
Cconnect* connect1260 = new Cconnect();
connect1260->setNodeField("key");
connect1260->setProtoField("r_knee_key");
IS1259->addConnect(*connect1260);

Cconnect* connect1261 = new Cconnect();
connect1261->setNodeField("keyValue");
connect1261->setProtoField("r_knee_keyValue");
IS1259->addConnect(*connect1261);

Cconnect* connect1262 = new Cconnect();
connect1262->setNodeField("value_changed");
connect1262->setProtoField("r_knee_changed");
IS1259->addConnect(*connect1262);

OrientationInterpolator1258->setIS(*IS1259);

ProtoBody603->addChildren(*OrientationInterpolator1258);

CROUTE* ROUTE1263 = new CROUTE();
ROUTE1263->setFromField("fraction_changed");
ROUTE1263->setFromNode("BehaviorClock");
ROUTE1263->setToField("set_fraction");
ROUTE1263->setToNode("r_knee_OI");
ProtoBody603->addChildren(*ROUTE1263);

COrientationInterpolator* OrientationInterpolator1264 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1264->setDEF("r_metatarsal_OI");
CIS* IS1265 = new CIS();
Cconnect* connect1266 = new Cconnect();
connect1266->setNodeField("key");
connect1266->setProtoField("r_metatarsal_key");
IS1265->addConnect(*connect1266);

Cconnect* connect1267 = new Cconnect();
connect1267->setNodeField("keyValue");
connect1267->setProtoField("r_metatarsal_keyValue");
IS1265->addConnect(*connect1267);

Cconnect* connect1268 = new Cconnect();
connect1268->setNodeField("value_changed");
connect1268->setProtoField("r_metatarsal_changed");
IS1265->addConnect(*connect1268);

OrientationInterpolator1264->setIS(*IS1265);

ProtoBody603->addChildren(*OrientationInterpolator1264);

CROUTE* ROUTE1269 = new CROUTE();
ROUTE1269->setFromField("fraction_changed");
ROUTE1269->setFromNode("BehaviorClock");
ROUTE1269->setToField("set_fraction");
ROUTE1269->setToNode("r_metatarsal_OI");
ProtoBody603->addChildren(*ROUTE1269);

COrientationInterpolator* OrientationInterpolator1270 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1270->setDEF("r_middistal_OI");
CIS* IS1271 = new CIS();
Cconnect* connect1272 = new Cconnect();
connect1272->setNodeField("key");
connect1272->setProtoField("r_middistal_key");
IS1271->addConnect(*connect1272);

Cconnect* connect1273 = new Cconnect();
connect1273->setNodeField("keyValue");
connect1273->setProtoField("r_middistal_keyValue");
IS1271->addConnect(*connect1273);

Cconnect* connect1274 = new Cconnect();
connect1274->setNodeField("value_changed");
connect1274->setProtoField("r_middistal_changed");
IS1271->addConnect(*connect1274);

OrientationInterpolator1270->setIS(*IS1271);

ProtoBody603->addChildren(*OrientationInterpolator1270);

CROUTE* ROUTE1275 = new CROUTE();
ROUTE1275->setFromField("fraction_changed");
ROUTE1275->setFromNode("BehaviorClock");
ROUTE1275->setToField("set_fraction");
ROUTE1275->setToNode("r_middistal_OI");
ProtoBody603->addChildren(*ROUTE1275);

COrientationInterpolator* OrientationInterpolator1276 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1276->setDEF("r_middle0_OI");
CIS* IS1277 = new CIS();
Cconnect* connect1278 = new Cconnect();
connect1278->setNodeField("key");
connect1278->setProtoField("r_middle0_key");
IS1277->addConnect(*connect1278);

Cconnect* connect1279 = new Cconnect();
connect1279->setNodeField("keyValue");
connect1279->setProtoField("r_middle0_keyValue");
IS1277->addConnect(*connect1279);

Cconnect* connect1280 = new Cconnect();
connect1280->setNodeField("value_changed");
connect1280->setProtoField("r_middle0_changed");
IS1277->addConnect(*connect1280);

OrientationInterpolator1276->setIS(*IS1277);

ProtoBody603->addChildren(*OrientationInterpolator1276);

CROUTE* ROUTE1281 = new CROUTE();
ROUTE1281->setFromField("fraction_changed");
ROUTE1281->setFromNode("BehaviorClock");
ROUTE1281->setToField("set_fraction");
ROUTE1281->setToNode("r_middle0_OI");
ProtoBody603->addChildren(*ROUTE1281);

COrientationInterpolator* OrientationInterpolator1282 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1282->setDEF("r_middle1_OI");
CIS* IS1283 = new CIS();
Cconnect* connect1284 = new Cconnect();
connect1284->setNodeField("key");
connect1284->setProtoField("r_middle1_key");
IS1283->addConnect(*connect1284);

Cconnect* connect1285 = new Cconnect();
connect1285->setNodeField("keyValue");
connect1285->setProtoField("r_middle1_keyValue");
IS1283->addConnect(*connect1285);

Cconnect* connect1286 = new Cconnect();
connect1286->setNodeField("value_changed");
connect1286->setProtoField("r_middle1_changed");
IS1283->addConnect(*connect1286);

OrientationInterpolator1282->setIS(*IS1283);

ProtoBody603->addChildren(*OrientationInterpolator1282);

CROUTE* ROUTE1287 = new CROUTE();
ROUTE1287->setFromField("fraction_changed");
ROUTE1287->setFromNode("BehaviorClock");
ROUTE1287->setToField("set_fraction");
ROUTE1287->setToNode("r_middle1_OI");
ProtoBody603->addChildren(*ROUTE1287);

COrientationInterpolator* OrientationInterpolator1288 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1288->setDEF("r_middle2_OI");
CIS* IS1289 = new CIS();
Cconnect* connect1290 = new Cconnect();
connect1290->setNodeField("key");
connect1290->setProtoField("r_middle2_key");
IS1289->addConnect(*connect1290);

Cconnect* connect1291 = new Cconnect();
connect1291->setNodeField("keyValue");
connect1291->setProtoField("r_middle2_keyValue");
IS1289->addConnect(*connect1291);

Cconnect* connect1292 = new Cconnect();
connect1292->setNodeField("value_changed");
connect1292->setProtoField("r_middle2_changed");
IS1289->addConnect(*connect1292);

OrientationInterpolator1288->setIS(*IS1289);

ProtoBody603->addChildren(*OrientationInterpolator1288);

CROUTE* ROUTE1293 = new CROUTE();
ROUTE1293->setFromField("fraction_changed");
ROUTE1293->setFromNode("BehaviorClock");
ROUTE1293->setToField("set_fraction");
ROUTE1293->setToNode("r_middle2_OI");
ProtoBody603->addChildren(*ROUTE1293);

COrientationInterpolator* OrientationInterpolator1294 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1294->setDEF("r_middle3_OI");
CIS* IS1295 = new CIS();
Cconnect* connect1296 = new Cconnect();
connect1296->setNodeField("key");
connect1296->setProtoField("r_middle3_key");
IS1295->addConnect(*connect1296);

Cconnect* connect1297 = new Cconnect();
connect1297->setNodeField("keyValue");
connect1297->setProtoField("r_middle3_keyValue");
IS1295->addConnect(*connect1297);

Cconnect* connect1298 = new Cconnect();
connect1298->setNodeField("value_changed");
connect1298->setProtoField("r_middle3_changed");
IS1295->addConnect(*connect1298);

OrientationInterpolator1294->setIS(*IS1295);

ProtoBody603->addChildren(*OrientationInterpolator1294);

CROUTE* ROUTE1299 = new CROUTE();
ROUTE1299->setFromField("fraction_changed");
ROUTE1299->setFromNode("BehaviorClock");
ROUTE1299->setToField("set_fraction");
ROUTE1299->setToNode("r_middle3_OI");
ProtoBody603->addChildren(*ROUTE1299);

COrientationInterpolator* OrientationInterpolator1300 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1300->setDEF("r_middle_distal_OI");
CIS* IS1301 = new CIS();
Cconnect* connect1302 = new Cconnect();
connect1302->setNodeField("key");
connect1302->setProtoField("r_middle_distal_key");
IS1301->addConnect(*connect1302);

Cconnect* connect1303 = new Cconnect();
connect1303->setNodeField("keyValue");
connect1303->setProtoField("r_middle_distal_keyValue");
IS1301->addConnect(*connect1303);

Cconnect* connect1304 = new Cconnect();
connect1304->setNodeField("value_changed");
connect1304->setProtoField("r_middle_distal_changed");
IS1301->addConnect(*connect1304);

OrientationInterpolator1300->setIS(*IS1301);

ProtoBody603->addChildren(*OrientationInterpolator1300);

CROUTE* ROUTE1305 = new CROUTE();
ROUTE1305->setFromField("fraction_changed");
ROUTE1305->setFromNode("BehaviorClock");
ROUTE1305->setToField("set_fraction");
ROUTE1305->setToNode("r_middle_distal_OI");
ProtoBody603->addChildren(*ROUTE1305);

COrientationInterpolator* OrientationInterpolator1306 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1306->setDEF("r_middle_metacarpal_OI");
CIS* IS1307 = new CIS();
Cconnect* connect1308 = new Cconnect();
connect1308->setNodeField("key");
connect1308->setProtoField("r_middle_metacarpal_key");
IS1307->addConnect(*connect1308);

Cconnect* connect1309 = new Cconnect();
connect1309->setNodeField("keyValue");
connect1309->setProtoField("r_middle_metacarpal_keyValue");
IS1307->addConnect(*connect1309);

Cconnect* connect1310 = new Cconnect();
connect1310->setNodeField("value_changed");
connect1310->setProtoField("r_middle_metacarpal_changed");
IS1307->addConnect(*connect1310);

OrientationInterpolator1306->setIS(*IS1307);

ProtoBody603->addChildren(*OrientationInterpolator1306);

CROUTE* ROUTE1311 = new CROUTE();
ROUTE1311->setFromField("fraction_changed");
ROUTE1311->setFromNode("BehaviorClock");
ROUTE1311->setToField("set_fraction");
ROUTE1311->setToNode("r_middle_metacarpal_OI");
ProtoBody603->addChildren(*ROUTE1311);

COrientationInterpolator* OrientationInterpolator1312 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1312->setDEF("r_middle_middle_OI");
CIS* IS1313 = new CIS();
Cconnect* connect1314 = new Cconnect();
connect1314->setNodeField("key");
connect1314->setProtoField("r_middle_middle_key");
IS1313->addConnect(*connect1314);

Cconnect* connect1315 = new Cconnect();
connect1315->setNodeField("keyValue");
connect1315->setProtoField("r_middle_middle_keyValue");
IS1313->addConnect(*connect1315);

Cconnect* connect1316 = new Cconnect();
connect1316->setNodeField("value_changed");
connect1316->setProtoField("r_middle_middle_changed");
IS1313->addConnect(*connect1316);

OrientationInterpolator1312->setIS(*IS1313);

ProtoBody603->addChildren(*OrientationInterpolator1312);

CROUTE* ROUTE1317 = new CROUTE();
ROUTE1317->setFromField("fraction_changed");
ROUTE1317->setFromNode("BehaviorClock");
ROUTE1317->setToField("set_fraction");
ROUTE1317->setToNode("r_middle_middle_OI");
ProtoBody603->addChildren(*ROUTE1317);

COrientationInterpolator* OrientationInterpolator1318 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1318->setDEF("r_middle_proximal_OI");
CIS* IS1319 = new CIS();
Cconnect* connect1320 = new Cconnect();
connect1320->setNodeField("key");
connect1320->setProtoField("r_middle_proximal_key");
IS1319->addConnect(*connect1320);

Cconnect* connect1321 = new Cconnect();
connect1321->setNodeField("keyValue");
connect1321->setProtoField("r_middle_proximal_keyValue");
IS1319->addConnect(*connect1321);

Cconnect* connect1322 = new Cconnect();
connect1322->setNodeField("value_changed");
connect1322->setProtoField("r_middle_proximal_changed");
IS1319->addConnect(*connect1322);

OrientationInterpolator1318->setIS(*IS1319);

ProtoBody603->addChildren(*OrientationInterpolator1318);

CROUTE* ROUTE1323 = new CROUTE();
ROUTE1323->setFromField("fraction_changed");
ROUTE1323->setFromNode("BehaviorClock");
ROUTE1323->setToField("set_fraction");
ROUTE1323->setToNode("r_middle_proximal_OI");
ProtoBody603->addChildren(*ROUTE1323);

COrientationInterpolator* OrientationInterpolator1324 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1324->setDEF("r_midproximal_OI");
CIS* IS1325 = new CIS();
Cconnect* connect1326 = new Cconnect();
connect1326->setNodeField("key");
connect1326->setProtoField("r_midproximal_key");
IS1325->addConnect(*connect1326);

Cconnect* connect1327 = new Cconnect();
connect1327->setNodeField("keyValue");
connect1327->setProtoField("r_midproximal_keyValue");
IS1325->addConnect(*connect1327);

Cconnect* connect1328 = new Cconnect();
connect1328->setNodeField("value_changed");
connect1328->setProtoField("r_midproximal_changed");
IS1325->addConnect(*connect1328);

OrientationInterpolator1324->setIS(*IS1325);

ProtoBody603->addChildren(*OrientationInterpolator1324);

CROUTE* ROUTE1329 = new CROUTE();
ROUTE1329->setFromField("fraction_changed");
ROUTE1329->setFromNode("BehaviorClock");
ROUTE1329->setToField("set_fraction");
ROUTE1329->setToNode("r_midproximal_OI");
ProtoBody603->addChildren(*ROUTE1329);

COrientationInterpolator* OrientationInterpolator1330 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1330->setDEF("r_midtarsal_OI");
CIS* IS1331 = new CIS();
Cconnect* connect1332 = new Cconnect();
connect1332->setNodeField("key");
connect1332->setProtoField("r_midtarsal_key");
IS1331->addConnect(*connect1332);

Cconnect* connect1333 = new Cconnect();
connect1333->setNodeField("keyValue");
connect1333->setProtoField("r_midtarsal_keyValue");
IS1331->addConnect(*connect1333);

Cconnect* connect1334 = new Cconnect();
connect1334->setNodeField("value_changed");
connect1334->setProtoField("r_midtarsal_changed");
IS1331->addConnect(*connect1334);

OrientationInterpolator1330->setIS(*IS1331);

ProtoBody603->addChildren(*OrientationInterpolator1330);

CROUTE* ROUTE1335 = new CROUTE();
ROUTE1335->setFromField("fraction_changed");
ROUTE1335->setFromNode("BehaviorClock");
ROUTE1335->setToField("set_fraction");
ROUTE1335->setToNode("r_midtarsal_OI");
ProtoBody603->addChildren(*ROUTE1335);

COrientationInterpolator* OrientationInterpolator1336 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1336->setDEF("r_pinky0_OI");
CIS* IS1337 = new CIS();
Cconnect* connect1338 = new Cconnect();
connect1338->setNodeField("key");
connect1338->setProtoField("r_pinky0_key");
IS1337->addConnect(*connect1338);

Cconnect* connect1339 = new Cconnect();
connect1339->setNodeField("keyValue");
connect1339->setProtoField("r_pinky0_keyValue");
IS1337->addConnect(*connect1339);

Cconnect* connect1340 = new Cconnect();
connect1340->setNodeField("value_changed");
connect1340->setProtoField("r_pinky0_changed");
IS1337->addConnect(*connect1340);

OrientationInterpolator1336->setIS(*IS1337);

ProtoBody603->addChildren(*OrientationInterpolator1336);

CROUTE* ROUTE1341 = new CROUTE();
ROUTE1341->setFromField("fraction_changed");
ROUTE1341->setFromNode("BehaviorClock");
ROUTE1341->setToField("set_fraction");
ROUTE1341->setToNode("r_pinky0_OI");
ProtoBody603->addChildren(*ROUTE1341);

COrientationInterpolator* OrientationInterpolator1342 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1342->setDEF("r_pinky1_OI");
CIS* IS1343 = new CIS();
Cconnect* connect1344 = new Cconnect();
connect1344->setNodeField("key");
connect1344->setProtoField("r_pinky1_key");
IS1343->addConnect(*connect1344);

Cconnect* connect1345 = new Cconnect();
connect1345->setNodeField("keyValue");
connect1345->setProtoField("r_pinky1_keyValue");
IS1343->addConnect(*connect1345);

Cconnect* connect1346 = new Cconnect();
connect1346->setNodeField("value_changed");
connect1346->setProtoField("r_pinky1_changed");
IS1343->addConnect(*connect1346);

OrientationInterpolator1342->setIS(*IS1343);

ProtoBody603->addChildren(*OrientationInterpolator1342);

CROUTE* ROUTE1347 = new CROUTE();
ROUTE1347->setFromField("fraction_changed");
ROUTE1347->setFromNode("BehaviorClock");
ROUTE1347->setToField("set_fraction");
ROUTE1347->setToNode("r_pinky1_OI");
ProtoBody603->addChildren(*ROUTE1347);

COrientationInterpolator* OrientationInterpolator1348 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1348->setDEF("r_pinky2_OI");
CIS* IS1349 = new CIS();
Cconnect* connect1350 = new Cconnect();
connect1350->setNodeField("key");
connect1350->setProtoField("r_pinky2_key");
IS1349->addConnect(*connect1350);

Cconnect* connect1351 = new Cconnect();
connect1351->setNodeField("keyValue");
connect1351->setProtoField("r_pinky2_keyValue");
IS1349->addConnect(*connect1351);

Cconnect* connect1352 = new Cconnect();
connect1352->setNodeField("value_changed");
connect1352->setProtoField("r_pinky2_changed");
IS1349->addConnect(*connect1352);

OrientationInterpolator1348->setIS(*IS1349);

ProtoBody603->addChildren(*OrientationInterpolator1348);

CROUTE* ROUTE1353 = new CROUTE();
ROUTE1353->setFromField("fraction_changed");
ROUTE1353->setFromNode("BehaviorClock");
ROUTE1353->setToField("set_fraction");
ROUTE1353->setToNode("r_pinky2_OI");
ProtoBody603->addChildren(*ROUTE1353);

COrientationInterpolator* OrientationInterpolator1354 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1354->setDEF("r_pinky3_OI");
CIS* IS1355 = new CIS();
Cconnect* connect1356 = new Cconnect();
connect1356->setNodeField("key");
connect1356->setProtoField("r_pinky3_key");
IS1355->addConnect(*connect1356);

Cconnect* connect1357 = new Cconnect();
connect1357->setNodeField("keyValue");
connect1357->setProtoField("r_pinky3_keyValue");
IS1355->addConnect(*connect1357);

Cconnect* connect1358 = new Cconnect();
connect1358->setNodeField("value_changed");
connect1358->setProtoField("r_pinky3_changed");
IS1355->addConnect(*connect1358);

OrientationInterpolator1354->setIS(*IS1355);

ProtoBody603->addChildren(*OrientationInterpolator1354);

CROUTE* ROUTE1359 = new CROUTE();
ROUTE1359->setFromField("fraction_changed");
ROUTE1359->setFromNode("BehaviorClock");
ROUTE1359->setToField("set_fraction");
ROUTE1359->setToNode("r_pinky3_OI");
ProtoBody603->addChildren(*ROUTE1359);

COrientationInterpolator* OrientationInterpolator1360 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1360->setDEF("r_pinky_distal_OI");
CIS* IS1361 = new CIS();
Cconnect* connect1362 = new Cconnect();
connect1362->setNodeField("key");
connect1362->setProtoField("r_pinky_distal_key");
IS1361->addConnect(*connect1362);

Cconnect* connect1363 = new Cconnect();
connect1363->setNodeField("keyValue");
connect1363->setProtoField("r_pinky_distal_keyValue");
IS1361->addConnect(*connect1363);

Cconnect* connect1364 = new Cconnect();
connect1364->setNodeField("value_changed");
connect1364->setProtoField("r_pinky_distal_changed");
IS1361->addConnect(*connect1364);

OrientationInterpolator1360->setIS(*IS1361);

ProtoBody603->addChildren(*OrientationInterpolator1360);

CROUTE* ROUTE1365 = new CROUTE();
ROUTE1365->setFromField("fraction_changed");
ROUTE1365->setFromNode("BehaviorClock");
ROUTE1365->setToField("set_fraction");
ROUTE1365->setToNode("r_pinky_distal_OI");
ProtoBody603->addChildren(*ROUTE1365);

COrientationInterpolator* OrientationInterpolator1366 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1366->setDEF("r_pinky_metacarpal_OI");
CIS* IS1367 = new CIS();
Cconnect* connect1368 = new Cconnect();
connect1368->setNodeField("key");
connect1368->setProtoField("r_pinky_metacarpal_key");
IS1367->addConnect(*connect1368);

Cconnect* connect1369 = new Cconnect();
connect1369->setNodeField("keyValue");
connect1369->setProtoField("r_pinky_metacarpal_keyValue");
IS1367->addConnect(*connect1369);

Cconnect* connect1370 = new Cconnect();
connect1370->setNodeField("value_changed");
connect1370->setProtoField("r_pinky_metacarpal_changed");
IS1367->addConnect(*connect1370);

OrientationInterpolator1366->setIS(*IS1367);

ProtoBody603->addChildren(*OrientationInterpolator1366);

CROUTE* ROUTE1371 = new CROUTE();
ROUTE1371->setFromField("fraction_changed");
ROUTE1371->setFromNode("BehaviorClock");
ROUTE1371->setToField("set_fraction");
ROUTE1371->setToNode("r_pinky_metacarpal_OI");
ProtoBody603->addChildren(*ROUTE1371);

COrientationInterpolator* OrientationInterpolator1372 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1372->setDEF("r_pinky_middle_OI");
CIS* IS1373 = new CIS();
Cconnect* connect1374 = new Cconnect();
connect1374->setNodeField("key");
connect1374->setProtoField("r_pinky_middle_key");
IS1373->addConnect(*connect1374);

Cconnect* connect1375 = new Cconnect();
connect1375->setNodeField("keyValue");
connect1375->setProtoField("r_pinky_middle_keyValue");
IS1373->addConnect(*connect1375);

Cconnect* connect1376 = new Cconnect();
connect1376->setNodeField("value_changed");
connect1376->setProtoField("r_pinky_middle_changed");
IS1373->addConnect(*connect1376);

OrientationInterpolator1372->setIS(*IS1373);

ProtoBody603->addChildren(*OrientationInterpolator1372);

CROUTE* ROUTE1377 = new CROUTE();
ROUTE1377->setFromField("fraction_changed");
ROUTE1377->setFromNode("BehaviorClock");
ROUTE1377->setToField("set_fraction");
ROUTE1377->setToNode("r_pinky_middle_OI");
ProtoBody603->addChildren(*ROUTE1377);

COrientationInterpolator* OrientationInterpolator1378 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1378->setDEF("r_pinky_proximal_OI");
CIS* IS1379 = new CIS();
Cconnect* connect1380 = new Cconnect();
connect1380->setNodeField("key");
connect1380->setProtoField("r_pinky_proximal_key");
IS1379->addConnect(*connect1380);

Cconnect* connect1381 = new Cconnect();
connect1381->setNodeField("keyValue");
connect1381->setProtoField("r_pinky_proximal_keyValue");
IS1379->addConnect(*connect1381);

Cconnect* connect1382 = new Cconnect();
connect1382->setNodeField("value_changed");
connect1382->setProtoField("r_pinky_proximal_changed");
IS1379->addConnect(*connect1382);

OrientationInterpolator1378->setIS(*IS1379);

ProtoBody603->addChildren(*OrientationInterpolator1378);

CROUTE* ROUTE1383 = new CROUTE();
ROUTE1383->setFromField("fraction_changed");
ROUTE1383->setFromNode("BehaviorClock");
ROUTE1383->setToField("set_fraction");
ROUTE1383->setToNode("r_pinky_proximal_OI");
ProtoBody603->addChildren(*ROUTE1383);

COrientationInterpolator* OrientationInterpolator1384 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1384->setDEF("r_ring0_OI");
CIS* IS1385 = new CIS();
Cconnect* connect1386 = new Cconnect();
connect1386->setNodeField("key");
connect1386->setProtoField("r_ring0_key");
IS1385->addConnect(*connect1386);

Cconnect* connect1387 = new Cconnect();
connect1387->setNodeField("keyValue");
connect1387->setProtoField("r_ring0_keyValue");
IS1385->addConnect(*connect1387);

Cconnect* connect1388 = new Cconnect();
connect1388->setNodeField("value_changed");
connect1388->setProtoField("r_ring0_changed");
IS1385->addConnect(*connect1388);

OrientationInterpolator1384->setIS(*IS1385);

ProtoBody603->addChildren(*OrientationInterpolator1384);

CROUTE* ROUTE1389 = new CROUTE();
ROUTE1389->setFromField("fraction_changed");
ROUTE1389->setFromNode("BehaviorClock");
ROUTE1389->setToField("set_fraction");
ROUTE1389->setToNode("r_ring0_OI");
ProtoBody603->addChildren(*ROUTE1389);

COrientationInterpolator* OrientationInterpolator1390 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1390->setDEF("r_ring1_OI");
CIS* IS1391 = new CIS();
Cconnect* connect1392 = new Cconnect();
connect1392->setNodeField("key");
connect1392->setProtoField("r_ring1_key");
IS1391->addConnect(*connect1392);

Cconnect* connect1393 = new Cconnect();
connect1393->setNodeField("keyValue");
connect1393->setProtoField("r_ring1_keyValue");
IS1391->addConnect(*connect1393);

Cconnect* connect1394 = new Cconnect();
connect1394->setNodeField("value_changed");
connect1394->setProtoField("r_ring1_changed");
IS1391->addConnect(*connect1394);

OrientationInterpolator1390->setIS(*IS1391);

ProtoBody603->addChildren(*OrientationInterpolator1390);

CROUTE* ROUTE1395 = new CROUTE();
ROUTE1395->setFromField("fraction_changed");
ROUTE1395->setFromNode("BehaviorClock");
ROUTE1395->setToField("set_fraction");
ROUTE1395->setToNode("r_ring1_OI");
ProtoBody603->addChildren(*ROUTE1395);

COrientationInterpolator* OrientationInterpolator1396 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1396->setDEF("r_ring2_OI");
CIS* IS1397 = new CIS();
Cconnect* connect1398 = new Cconnect();
connect1398->setNodeField("key");
connect1398->setProtoField("r_ring2_key");
IS1397->addConnect(*connect1398);

Cconnect* connect1399 = new Cconnect();
connect1399->setNodeField("keyValue");
connect1399->setProtoField("r_ring2_keyValue");
IS1397->addConnect(*connect1399);

Cconnect* connect1400 = new Cconnect();
connect1400->setNodeField("value_changed");
connect1400->setProtoField("r_ring2_changed");
IS1397->addConnect(*connect1400);

OrientationInterpolator1396->setIS(*IS1397);

ProtoBody603->addChildren(*OrientationInterpolator1396);

CROUTE* ROUTE1401 = new CROUTE();
ROUTE1401->setFromField("fraction_changed");
ROUTE1401->setFromNode("BehaviorClock");
ROUTE1401->setToField("set_fraction");
ROUTE1401->setToNode("r_ring2_OI");
ProtoBody603->addChildren(*ROUTE1401);

COrientationInterpolator* OrientationInterpolator1402 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1402->setDEF("r_ring3_OI");
CIS* IS1403 = new CIS();
Cconnect* connect1404 = new Cconnect();
connect1404->setNodeField("key");
connect1404->setProtoField("r_ring3_key");
IS1403->addConnect(*connect1404);

Cconnect* connect1405 = new Cconnect();
connect1405->setNodeField("keyValue");
connect1405->setProtoField("r_ring3_keyValue");
IS1403->addConnect(*connect1405);

Cconnect* connect1406 = new Cconnect();
connect1406->setNodeField("value_changed");
connect1406->setProtoField("r_ring3_changed");
IS1403->addConnect(*connect1406);

OrientationInterpolator1402->setIS(*IS1403);

ProtoBody603->addChildren(*OrientationInterpolator1402);

CROUTE* ROUTE1407 = new CROUTE();
ROUTE1407->setFromField("fraction_changed");
ROUTE1407->setFromNode("BehaviorClock");
ROUTE1407->setToField("set_fraction");
ROUTE1407->setToNode("r_ring3_OI");
ProtoBody603->addChildren(*ROUTE1407);

COrientationInterpolator* OrientationInterpolator1408 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1408->setDEF("r_ring_distal_OI");
CIS* IS1409 = new CIS();
Cconnect* connect1410 = new Cconnect();
connect1410->setNodeField("key");
connect1410->setProtoField("r_ring_distal_key");
IS1409->addConnect(*connect1410);

Cconnect* connect1411 = new Cconnect();
connect1411->setNodeField("keyValue");
connect1411->setProtoField("r_ring_distal_keyValue");
IS1409->addConnect(*connect1411);

Cconnect* connect1412 = new Cconnect();
connect1412->setNodeField("value_changed");
connect1412->setProtoField("r_ring_distal_changed");
IS1409->addConnect(*connect1412);

OrientationInterpolator1408->setIS(*IS1409);

ProtoBody603->addChildren(*OrientationInterpolator1408);

CROUTE* ROUTE1413 = new CROUTE();
ROUTE1413->setFromField("fraction_changed");
ROUTE1413->setFromNode("BehaviorClock");
ROUTE1413->setToField("set_fraction");
ROUTE1413->setToNode("r_ring_distal_OI");
ProtoBody603->addChildren(*ROUTE1413);

COrientationInterpolator* OrientationInterpolator1414 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1414->setDEF("r_ring_metacarpal_OI");
CIS* IS1415 = new CIS();
Cconnect* connect1416 = new Cconnect();
connect1416->setNodeField("key");
connect1416->setProtoField("r_ring_metacarpal_key");
IS1415->addConnect(*connect1416);

Cconnect* connect1417 = new Cconnect();
connect1417->setNodeField("keyValue");
connect1417->setProtoField("r_ring_metacarpal_keyValue");
IS1415->addConnect(*connect1417);

Cconnect* connect1418 = new Cconnect();
connect1418->setNodeField("value_changed");
connect1418->setProtoField("r_ring_metacarpal_changed");
IS1415->addConnect(*connect1418);

OrientationInterpolator1414->setIS(*IS1415);

ProtoBody603->addChildren(*OrientationInterpolator1414);

CROUTE* ROUTE1419 = new CROUTE();
ROUTE1419->setFromField("fraction_changed");
ROUTE1419->setFromNode("BehaviorClock");
ROUTE1419->setToField("set_fraction");
ROUTE1419->setToNode("r_ring_metacarpal_OI");
ProtoBody603->addChildren(*ROUTE1419);

COrientationInterpolator* OrientationInterpolator1420 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1420->setDEF("r_ring_middle_OI");
CIS* IS1421 = new CIS();
Cconnect* connect1422 = new Cconnect();
connect1422->setNodeField("key");
connect1422->setProtoField("r_ring_middle_key");
IS1421->addConnect(*connect1422);

Cconnect* connect1423 = new Cconnect();
connect1423->setNodeField("keyValue");
connect1423->setProtoField("r_ring_middle_keyValue");
IS1421->addConnect(*connect1423);

Cconnect* connect1424 = new Cconnect();
connect1424->setNodeField("value_changed");
connect1424->setProtoField("r_ring_middle_changed");
IS1421->addConnect(*connect1424);

OrientationInterpolator1420->setIS(*IS1421);

ProtoBody603->addChildren(*OrientationInterpolator1420);

CROUTE* ROUTE1425 = new CROUTE();
ROUTE1425->setFromField("fraction_changed");
ROUTE1425->setFromNode("BehaviorClock");
ROUTE1425->setToField("set_fraction");
ROUTE1425->setToNode("r_ring_middle_OI");
ProtoBody603->addChildren(*ROUTE1425);

COrientationInterpolator* OrientationInterpolator1426 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1426->setDEF("r_ring_proximal_OI");
CIS* IS1427 = new CIS();
Cconnect* connect1428 = new Cconnect();
connect1428->setNodeField("key");
connect1428->setProtoField("r_ring_proximal_key");
IS1427->addConnect(*connect1428);

Cconnect* connect1429 = new Cconnect();
connect1429->setNodeField("keyValue");
connect1429->setProtoField("r_ring_proximal_keyValue");
IS1427->addConnect(*connect1429);

Cconnect* connect1430 = new Cconnect();
connect1430->setNodeField("value_changed");
connect1430->setProtoField("r_ring_proximal_changed");
IS1427->addConnect(*connect1430);

OrientationInterpolator1426->setIS(*IS1427);

ProtoBody603->addChildren(*OrientationInterpolator1426);

CROUTE* ROUTE1431 = new CROUTE();
ROUTE1431->setFromField("fraction_changed");
ROUTE1431->setFromNode("BehaviorClock");
ROUTE1431->setToField("set_fraction");
ROUTE1431->setToNode("r_ring_proximal_OI");
ProtoBody603->addChildren(*ROUTE1431);

COrientationInterpolator* OrientationInterpolator1432 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1432->setDEF("r_scapula_OI");
CIS* IS1433 = new CIS();
Cconnect* connect1434 = new Cconnect();
connect1434->setNodeField("key");
connect1434->setProtoField("r_scapula_key");
IS1433->addConnect(*connect1434);

Cconnect* connect1435 = new Cconnect();
connect1435->setNodeField("keyValue");
connect1435->setProtoField("r_scapula_keyValue");
IS1433->addConnect(*connect1435);

Cconnect* connect1436 = new Cconnect();
connect1436->setNodeField("value_changed");
connect1436->setProtoField("r_scapula_changed");
IS1433->addConnect(*connect1436);

OrientationInterpolator1432->setIS(*IS1433);

ProtoBody603->addChildren(*OrientationInterpolator1432);

CROUTE* ROUTE1437 = new CROUTE();
ROUTE1437->setFromField("fraction_changed");
ROUTE1437->setFromNode("BehaviorClock");
ROUTE1437->setToField("set_fraction");
ROUTE1437->setToNode("r_scapula_OI");
ProtoBody603->addChildren(*ROUTE1437);

COrientationInterpolator* OrientationInterpolator1438 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1438->setDEF("r_shoulder_OI");
CIS* IS1439 = new CIS();
Cconnect* connect1440 = new Cconnect();
connect1440->setNodeField("key");
connect1440->setProtoField("r_shoulder_key");
IS1439->addConnect(*connect1440);

Cconnect* connect1441 = new Cconnect();
connect1441->setNodeField("keyValue");
connect1441->setProtoField("r_shoulder_keyValue");
IS1439->addConnect(*connect1441);

Cconnect* connect1442 = new Cconnect();
connect1442->setNodeField("value_changed");
connect1442->setProtoField("r_shoulder_changed");
IS1439->addConnect(*connect1442);

OrientationInterpolator1438->setIS(*IS1439);

ProtoBody603->addChildren(*OrientationInterpolator1438);

CROUTE* ROUTE1443 = new CROUTE();
ROUTE1443->setFromField("fraction_changed");
ROUTE1443->setFromNode("BehaviorClock");
ROUTE1443->setToField("set_fraction");
ROUTE1443->setToNode("r_shoulder_OI");
ProtoBody603->addChildren(*ROUTE1443);

COrientationInterpolator* OrientationInterpolator1444 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1444->setDEF("r_sternoclavicular_OI");
CIS* IS1445 = new CIS();
Cconnect* connect1446 = new Cconnect();
connect1446->setNodeField("key");
connect1446->setProtoField("r_sternoclavicular_key");
IS1445->addConnect(*connect1446);

Cconnect* connect1447 = new Cconnect();
connect1447->setNodeField("keyValue");
connect1447->setProtoField("r_sternoclavicular_keyValue");
IS1445->addConnect(*connect1447);

Cconnect* connect1448 = new Cconnect();
connect1448->setNodeField("value_changed");
connect1448->setProtoField("r_sternoclavicular_changed");
IS1445->addConnect(*connect1448);

OrientationInterpolator1444->setIS(*IS1445);

ProtoBody603->addChildren(*OrientationInterpolator1444);

CROUTE* ROUTE1449 = new CROUTE();
ROUTE1449->setFromField("fraction_changed");
ROUTE1449->setFromNode("BehaviorClock");
ROUTE1449->setToField("set_fraction");
ROUTE1449->setToNode("r_sternoclavicular_OI");
ProtoBody603->addChildren(*ROUTE1449);

COrientationInterpolator* OrientationInterpolator1450 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1450->setDEF("r_subtalar_OI");
CIS* IS1451 = new CIS();
Cconnect* connect1452 = new Cconnect();
connect1452->setNodeField("key");
connect1452->setProtoField("r_subtalar_key");
IS1451->addConnect(*connect1452);

Cconnect* connect1453 = new Cconnect();
connect1453->setNodeField("keyValue");
connect1453->setProtoField("r_subtalar_keyValue");
IS1451->addConnect(*connect1453);

Cconnect* connect1454 = new Cconnect();
connect1454->setNodeField("value_changed");
connect1454->setProtoField("r_subtalar_changed");
IS1451->addConnect(*connect1454);

OrientationInterpolator1450->setIS(*IS1451);

ProtoBody603->addChildren(*OrientationInterpolator1450);

CROUTE* ROUTE1455 = new CROUTE();
ROUTE1455->setFromField("fraction_changed");
ROUTE1455->setFromNode("BehaviorClock");
ROUTE1455->setToField("set_fraction");
ROUTE1455->setToNode("r_subtalar_OI");
ProtoBody603->addChildren(*ROUTE1455);

COrientationInterpolator* OrientationInterpolator1456 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1456->setDEF("r_thigh_OI");
CIS* IS1457 = new CIS();
Cconnect* connect1458 = new Cconnect();
connect1458->setNodeField("key");
connect1458->setProtoField("r_thigh_key");
IS1457->addConnect(*connect1458);

Cconnect* connect1459 = new Cconnect();
connect1459->setNodeField("keyValue");
connect1459->setProtoField("r_thigh_keyValue");
IS1457->addConnect(*connect1459);

Cconnect* connect1460 = new Cconnect();
connect1460->setNodeField("value_changed");
connect1460->setProtoField("r_thigh_changed");
IS1457->addConnect(*connect1460);

OrientationInterpolator1456->setIS(*IS1457);

ProtoBody603->addChildren(*OrientationInterpolator1456);

CROUTE* ROUTE1461 = new CROUTE();
ROUTE1461->setFromField("fraction_changed");
ROUTE1461->setFromNode("BehaviorClock");
ROUTE1461->setToField("set_fraction");
ROUTE1461->setToNode("r_thigh_OI");
ProtoBody603->addChildren(*ROUTE1461);

COrientationInterpolator* OrientationInterpolator1462 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1462->setDEF("r_thumb1_OI");
CIS* IS1463 = new CIS();
Cconnect* connect1464 = new Cconnect();
connect1464->setNodeField("key");
connect1464->setProtoField("r_thumb1_key");
IS1463->addConnect(*connect1464);

Cconnect* connect1465 = new Cconnect();
connect1465->setNodeField("keyValue");
connect1465->setProtoField("r_thumb1_keyValue");
IS1463->addConnect(*connect1465);

Cconnect* connect1466 = new Cconnect();
connect1466->setNodeField("value_changed");
connect1466->setProtoField("r_thumb1_changed");
IS1463->addConnect(*connect1466);

OrientationInterpolator1462->setIS(*IS1463);

ProtoBody603->addChildren(*OrientationInterpolator1462);

CROUTE* ROUTE1467 = new CROUTE();
ROUTE1467->setFromField("fraction_changed");
ROUTE1467->setFromNode("BehaviorClock");
ROUTE1467->setToField("set_fraction");
ROUTE1467->setToNode("r_thumb1_OI");
ProtoBody603->addChildren(*ROUTE1467);

COrientationInterpolator* OrientationInterpolator1468 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1468->setDEF("r_thumb2_OI");
CIS* IS1469 = new CIS();
Cconnect* connect1470 = new Cconnect();
connect1470->setNodeField("key");
connect1470->setProtoField("r_thumb2_key");
IS1469->addConnect(*connect1470);

Cconnect* connect1471 = new Cconnect();
connect1471->setNodeField("keyValue");
connect1471->setProtoField("r_thumb2_keyValue");
IS1469->addConnect(*connect1471);

Cconnect* connect1472 = new Cconnect();
connect1472->setNodeField("value_changed");
connect1472->setProtoField("r_thumb2_changed");
IS1469->addConnect(*connect1472);

OrientationInterpolator1468->setIS(*IS1469);

ProtoBody603->addChildren(*OrientationInterpolator1468);

CROUTE* ROUTE1473 = new CROUTE();
ROUTE1473->setFromField("fraction_changed");
ROUTE1473->setFromNode("BehaviorClock");
ROUTE1473->setToField("set_fraction");
ROUTE1473->setToNode("r_thumb2_OI");
ProtoBody603->addChildren(*ROUTE1473);

COrientationInterpolator* OrientationInterpolator1474 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1474->setDEF("r_thumb3_OI");
CIS* IS1475 = new CIS();
Cconnect* connect1476 = new Cconnect();
connect1476->setNodeField("key");
connect1476->setProtoField("r_thumb3_key");
IS1475->addConnect(*connect1476);

Cconnect* connect1477 = new Cconnect();
connect1477->setNodeField("keyValue");
connect1477->setProtoField("r_thumb3_keyValue");
IS1475->addConnect(*connect1477);

Cconnect* connect1478 = new Cconnect();
connect1478->setNodeField("value_changed");
connect1478->setProtoField("r_thumb3_changed");
IS1475->addConnect(*connect1478);

OrientationInterpolator1474->setIS(*IS1475);

ProtoBody603->addChildren(*OrientationInterpolator1474);

CROUTE* ROUTE1479 = new CROUTE();
ROUTE1479->setFromField("fraction_changed");
ROUTE1479->setFromNode("BehaviorClock");
ROUTE1479->setToField("set_fraction");
ROUTE1479->setToNode("r_thumb3_OI");
ProtoBody603->addChildren(*ROUTE1479);

COrientationInterpolator* OrientationInterpolator1480 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1480->setDEF("r_thumb_distal_OI");
CIS* IS1481 = new CIS();
Cconnect* connect1482 = new Cconnect();
connect1482->setNodeField("key");
connect1482->setProtoField("r_thumb_distal_key");
IS1481->addConnect(*connect1482);

Cconnect* connect1483 = new Cconnect();
connect1483->setNodeField("keyValue");
connect1483->setProtoField("r_thumb_distal_keyValue");
IS1481->addConnect(*connect1483);

Cconnect* connect1484 = new Cconnect();
connect1484->setNodeField("value_changed");
connect1484->setProtoField("r_thumb_distal_changed");
IS1481->addConnect(*connect1484);

OrientationInterpolator1480->setIS(*IS1481);

ProtoBody603->addChildren(*OrientationInterpolator1480);

CROUTE* ROUTE1485 = new CROUTE();
ROUTE1485->setFromField("fraction_changed");
ROUTE1485->setFromNode("BehaviorClock");
ROUTE1485->setToField("set_fraction");
ROUTE1485->setToNode("r_thumb_distal_OI");
ProtoBody603->addChildren(*ROUTE1485);

COrientationInterpolator* OrientationInterpolator1486 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1486->setDEF("r_thumb_metacarpal_OI");
CIS* IS1487 = new CIS();
Cconnect* connect1488 = new Cconnect();
connect1488->setNodeField("key");
connect1488->setProtoField("r_thumb_metacarpal_key");
IS1487->addConnect(*connect1488);

Cconnect* connect1489 = new Cconnect();
connect1489->setNodeField("keyValue");
connect1489->setProtoField("r_thumb_metacarpal_keyValue");
IS1487->addConnect(*connect1489);

Cconnect* connect1490 = new Cconnect();
connect1490->setNodeField("value_changed");
connect1490->setProtoField("r_thumb_metacarpal_changed");
IS1487->addConnect(*connect1490);

OrientationInterpolator1486->setIS(*IS1487);

ProtoBody603->addChildren(*OrientationInterpolator1486);

CROUTE* ROUTE1491 = new CROUTE();
ROUTE1491->setFromField("fraction_changed");
ROUTE1491->setFromNode("BehaviorClock");
ROUTE1491->setToField("set_fraction");
ROUTE1491->setToNode("r_thumb_metacarpal_OI");
ProtoBody603->addChildren(*ROUTE1491);

COrientationInterpolator* OrientationInterpolator1492 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1492->setDEF("r_thumb_proximal_OI");
CIS* IS1493 = new CIS();
Cconnect* connect1494 = new Cconnect();
connect1494->setNodeField("key");
connect1494->setProtoField("r_thumb_proximal_key");
IS1493->addConnect(*connect1494);

Cconnect* connect1495 = new Cconnect();
connect1495->setNodeField("keyValue");
connect1495->setProtoField("r_thumb_proximal_keyValue");
IS1493->addConnect(*connect1495);

Cconnect* connect1496 = new Cconnect();
connect1496->setNodeField("value_changed");
connect1496->setProtoField("r_thumb_proximal_changed");
IS1493->addConnect(*connect1496);

OrientationInterpolator1492->setIS(*IS1493);

ProtoBody603->addChildren(*OrientationInterpolator1492);

CROUTE* ROUTE1497 = new CROUTE();
ROUTE1497->setFromField("fraction_changed");
ROUTE1497->setFromNode("BehaviorClock");
ROUTE1497->setToField("set_fraction");
ROUTE1497->setToNode("r_thumb_proximal_OI");
ProtoBody603->addChildren(*ROUTE1497);

COrientationInterpolator* OrientationInterpolator1498 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1498->setDEF("r_upperarm_OI");
CIS* IS1499 = new CIS();
Cconnect* connect1500 = new Cconnect();
connect1500->setNodeField("key");
connect1500->setProtoField("r_upperarm_key");
IS1499->addConnect(*connect1500);

Cconnect* connect1501 = new Cconnect();
connect1501->setNodeField("keyValue");
connect1501->setProtoField("r_upperarm_keyValue");
IS1499->addConnect(*connect1501);

Cconnect* connect1502 = new Cconnect();
connect1502->setNodeField("value_changed");
connect1502->setProtoField("r_upperarm_changed");
IS1499->addConnect(*connect1502);

OrientationInterpolator1498->setIS(*IS1499);

ProtoBody603->addChildren(*OrientationInterpolator1498);

CROUTE* ROUTE1503 = new CROUTE();
ROUTE1503->setFromField("fraction_changed");
ROUTE1503->setFromNode("BehaviorClock");
ROUTE1503->setToField("set_fraction");
ROUTE1503->setToNode("r_upperarm_OI");
ProtoBody603->addChildren(*ROUTE1503);

COrientationInterpolator* OrientationInterpolator1504 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1504->setDEF("r_wrist_OI");
CIS* IS1505 = new CIS();
Cconnect* connect1506 = new Cconnect();
connect1506->setNodeField("key");
connect1506->setProtoField("r_wrist_key");
IS1505->addConnect(*connect1506);

Cconnect* connect1507 = new Cconnect();
connect1507->setNodeField("keyValue");
connect1507->setProtoField("r_wrist_keyValue");
IS1505->addConnect(*connect1507);

Cconnect* connect1508 = new Cconnect();
connect1508->setNodeField("value_changed");
connect1508->setProtoField("r_wrist_changed");
IS1505->addConnect(*connect1508);

OrientationInterpolator1504->setIS(*IS1505);

ProtoBody603->addChildren(*OrientationInterpolator1504);

CROUTE* ROUTE1509 = new CROUTE();
ROUTE1509->setFromField("fraction_changed");
ROUTE1509->setFromNode("BehaviorClock");
ROUTE1509->setToField("set_fraction");
ROUTE1509->setToNode("r_wrist_OI");
ProtoBody603->addChildren(*ROUTE1509);

COrientationInterpolator* OrientationInterpolator1510 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1510->setDEF("sacroiliac_OI");
CIS* IS1511 = new CIS();
Cconnect* connect1512 = new Cconnect();
connect1512->setNodeField("key");
connect1512->setProtoField("sacroiliac_key");
IS1511->addConnect(*connect1512);

Cconnect* connect1513 = new Cconnect();
connect1513->setNodeField("keyValue");
connect1513->setProtoField("sacroiliac_keyValue");
IS1511->addConnect(*connect1513);

Cconnect* connect1514 = new Cconnect();
connect1514->setNodeField("value_changed");
connect1514->setProtoField("sacroiliac_changed");
IS1511->addConnect(*connect1514);

OrientationInterpolator1510->setIS(*IS1511);

ProtoBody603->addChildren(*OrientationInterpolator1510);

CROUTE* ROUTE1515 = new CROUTE();
ROUTE1515->setFromField("fraction_changed");
ROUTE1515->setFromNode("BehaviorClock");
ROUTE1515->setToField("set_fraction");
ROUTE1515->setToNode("sacroiliac_OI");
ProtoBody603->addChildren(*ROUTE1515);

COrientationInterpolator* OrientationInterpolator1516 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1516->setDEF("sacrum_OI");
CIS* IS1517 = new CIS();
Cconnect* connect1518 = new Cconnect();
connect1518->setNodeField("key");
connect1518->setProtoField("sacrum_key");
IS1517->addConnect(*connect1518);

Cconnect* connect1519 = new Cconnect();
connect1519->setNodeField("keyValue");
connect1519->setProtoField("sacrum_keyValue");
IS1517->addConnect(*connect1519);

Cconnect* connect1520 = new Cconnect();
connect1520->setNodeField("value_changed");
connect1520->setProtoField("sacrum_changed");
IS1517->addConnect(*connect1520);

OrientationInterpolator1516->setIS(*IS1517);

ProtoBody603->addChildren(*OrientationInterpolator1516);

CROUTE* ROUTE1521 = new CROUTE();
ROUTE1521->setFromField("fraction_changed");
ROUTE1521->setFromNode("BehaviorClock");
ROUTE1521->setToField("set_fraction");
ROUTE1521->setToNode("sacrum_OI");
ProtoBody603->addChildren(*ROUTE1521);

COrientationInterpolator* OrientationInterpolator1522 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1522->setDEF("skull_OI");
CIS* IS1523 = new CIS();
Cconnect* connect1524 = new Cconnect();
connect1524->setNodeField("key");
connect1524->setProtoField("skull_key");
IS1523->addConnect(*connect1524);

Cconnect* connect1525 = new Cconnect();
connect1525->setNodeField("keyValue");
connect1525->setProtoField("skull_keyValue");
IS1523->addConnect(*connect1525);

Cconnect* connect1526 = new Cconnect();
connect1526->setNodeField("value_changed");
connect1526->setProtoField("skull_changed");
IS1523->addConnect(*connect1526);

OrientationInterpolator1522->setIS(*IS1523);

ProtoBody603->addChildren(*OrientationInterpolator1522);

CROUTE* ROUTE1527 = new CROUTE();
ROUTE1527->setFromField("fraction_changed");
ROUTE1527->setFromNode("BehaviorClock");
ROUTE1527->setToField("set_fraction");
ROUTE1527->setToNode("skull_OI");
ProtoBody603->addChildren(*ROUTE1527);

COrientationInterpolator* OrientationInterpolator1528 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1528->setDEF("skullbase_OI");
CIS* IS1529 = new CIS();
Cconnect* connect1530 = new Cconnect();
connect1530->setNodeField("key");
connect1530->setProtoField("skullbase_key");
IS1529->addConnect(*connect1530);

Cconnect* connect1531 = new Cconnect();
connect1531->setNodeField("keyValue");
connect1531->setProtoField("skullbase_keyValue");
IS1529->addConnect(*connect1531);

Cconnect* connect1532 = new Cconnect();
connect1532->setNodeField("value_changed");
connect1532->setProtoField("skullbase_changed");
IS1529->addConnect(*connect1532);

OrientationInterpolator1528->setIS(*IS1529);

ProtoBody603->addChildren(*OrientationInterpolator1528);

CROUTE* ROUTE1533 = new CROUTE();
ROUTE1533->setFromField("fraction_changed");
ROUTE1533->setFromNode("BehaviorClock");
ROUTE1533->setToField("set_fraction");
ROUTE1533->setToNode("skullbase_OI");
ProtoBody603->addChildren(*ROUTE1533);

COrientationInterpolator* OrientationInterpolator1534 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1534->setDEF("t1_OI");
CIS* IS1535 = new CIS();
Cconnect* connect1536 = new Cconnect();
connect1536->setNodeField("key");
connect1536->setProtoField("t1_key");
IS1535->addConnect(*connect1536);

Cconnect* connect1537 = new Cconnect();
connect1537->setNodeField("keyValue");
connect1537->setProtoField("t1_keyValue");
IS1535->addConnect(*connect1537);

Cconnect* connect1538 = new Cconnect();
connect1538->setNodeField("value_changed");
connect1538->setProtoField("t1_changed");
IS1535->addConnect(*connect1538);

OrientationInterpolator1534->setIS(*IS1535);

ProtoBody603->addChildren(*OrientationInterpolator1534);

CROUTE* ROUTE1539 = new CROUTE();
ROUTE1539->setFromField("fraction_changed");
ROUTE1539->setFromNode("BehaviorClock");
ROUTE1539->setToField("set_fraction");
ROUTE1539->setToNode("t1_OI");
ProtoBody603->addChildren(*ROUTE1539);

COrientationInterpolator* OrientationInterpolator1540 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1540->setDEF("t2_OI");
CIS* IS1541 = new CIS();
Cconnect* connect1542 = new Cconnect();
connect1542->setNodeField("key");
connect1542->setProtoField("t2_key");
IS1541->addConnect(*connect1542);

Cconnect* connect1543 = new Cconnect();
connect1543->setNodeField("keyValue");
connect1543->setProtoField("t2_keyValue");
IS1541->addConnect(*connect1543);

Cconnect* connect1544 = new Cconnect();
connect1544->setNodeField("value_changed");
connect1544->setProtoField("t2_changed");
IS1541->addConnect(*connect1544);

OrientationInterpolator1540->setIS(*IS1541);

ProtoBody603->addChildren(*OrientationInterpolator1540);

CROUTE* ROUTE1545 = new CROUTE();
ROUTE1545->setFromField("fraction_changed");
ROUTE1545->setFromNode("BehaviorClock");
ROUTE1545->setToField("set_fraction");
ROUTE1545->setToNode("t2_OI");
ProtoBody603->addChildren(*ROUTE1545);

COrientationInterpolator* OrientationInterpolator1546 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1546->setDEF("t3_OI");
CIS* IS1547 = new CIS();
Cconnect* connect1548 = new Cconnect();
connect1548->setNodeField("key");
connect1548->setProtoField("t3_key");
IS1547->addConnect(*connect1548);

Cconnect* connect1549 = new Cconnect();
connect1549->setNodeField("keyValue");
connect1549->setProtoField("t3_keyValue");
IS1547->addConnect(*connect1549);

Cconnect* connect1550 = new Cconnect();
connect1550->setNodeField("value_changed");
connect1550->setProtoField("t3_changed");
IS1547->addConnect(*connect1550);

OrientationInterpolator1546->setIS(*IS1547);

ProtoBody603->addChildren(*OrientationInterpolator1546);

CROUTE* ROUTE1551 = new CROUTE();
ROUTE1551->setFromField("fraction_changed");
ROUTE1551->setFromNode("BehaviorClock");
ROUTE1551->setToField("set_fraction");
ROUTE1551->setToNode("t3_OI");
ProtoBody603->addChildren(*ROUTE1551);

COrientationInterpolator* OrientationInterpolator1552 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1552->setDEF("t4_OI");
CIS* IS1553 = new CIS();
Cconnect* connect1554 = new Cconnect();
connect1554->setNodeField("key");
connect1554->setProtoField("t4_key");
IS1553->addConnect(*connect1554);

Cconnect* connect1555 = new Cconnect();
connect1555->setNodeField("keyValue");
connect1555->setProtoField("t4_keyValue");
IS1553->addConnect(*connect1555);

Cconnect* connect1556 = new Cconnect();
connect1556->setNodeField("value_changed");
connect1556->setProtoField("t4_changed");
IS1553->addConnect(*connect1556);

OrientationInterpolator1552->setIS(*IS1553);

ProtoBody603->addChildren(*OrientationInterpolator1552);

CROUTE* ROUTE1557 = new CROUTE();
ROUTE1557->setFromField("fraction_changed");
ROUTE1557->setFromNode("BehaviorClock");
ROUTE1557->setToField("set_fraction");
ROUTE1557->setToNode("t4_OI");
ProtoBody603->addChildren(*ROUTE1557);

COrientationInterpolator* OrientationInterpolator1558 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1558->setDEF("t5_OI");
CIS* IS1559 = new CIS();
Cconnect* connect1560 = new Cconnect();
connect1560->setNodeField("key");
connect1560->setProtoField("t5_key");
IS1559->addConnect(*connect1560);

Cconnect* connect1561 = new Cconnect();
connect1561->setNodeField("keyValue");
connect1561->setProtoField("t5_keyValue");
IS1559->addConnect(*connect1561);

Cconnect* connect1562 = new Cconnect();
connect1562->setNodeField("value_changed");
connect1562->setProtoField("t5_changed");
IS1559->addConnect(*connect1562);

OrientationInterpolator1558->setIS(*IS1559);

ProtoBody603->addChildren(*OrientationInterpolator1558);

CROUTE* ROUTE1563 = new CROUTE();
ROUTE1563->setFromField("fraction_changed");
ROUTE1563->setFromNode("BehaviorClock");
ROUTE1563->setToField("set_fraction");
ROUTE1563->setToNode("t5_OI");
ProtoBody603->addChildren(*ROUTE1563);

COrientationInterpolator* OrientationInterpolator1564 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1564->setDEF("t6_OI");
CIS* IS1565 = new CIS();
Cconnect* connect1566 = new Cconnect();
connect1566->setNodeField("key");
connect1566->setProtoField("t6_key");
IS1565->addConnect(*connect1566);

Cconnect* connect1567 = new Cconnect();
connect1567->setNodeField("keyValue");
connect1567->setProtoField("t6_keyValue");
IS1565->addConnect(*connect1567);

Cconnect* connect1568 = new Cconnect();
connect1568->setNodeField("value_changed");
connect1568->setProtoField("t6_changed");
IS1565->addConnect(*connect1568);

OrientationInterpolator1564->setIS(*IS1565);

ProtoBody603->addChildren(*OrientationInterpolator1564);

CROUTE* ROUTE1569 = new CROUTE();
ROUTE1569->setFromField("fraction_changed");
ROUTE1569->setFromNode("BehaviorClock");
ROUTE1569->setToField("set_fraction");
ROUTE1569->setToNode("t6_OI");
ProtoBody603->addChildren(*ROUTE1569);

COrientationInterpolator* OrientationInterpolator1570 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1570->setDEF("t7_OI");
CIS* IS1571 = new CIS();
Cconnect* connect1572 = new Cconnect();
connect1572->setNodeField("key");
connect1572->setProtoField("t7_key");
IS1571->addConnect(*connect1572);

Cconnect* connect1573 = new Cconnect();
connect1573->setNodeField("keyValue");
connect1573->setProtoField("t7_keyValue");
IS1571->addConnect(*connect1573);

Cconnect* connect1574 = new Cconnect();
connect1574->setNodeField("value_changed");
connect1574->setProtoField("t7_changed");
IS1571->addConnect(*connect1574);

OrientationInterpolator1570->setIS(*IS1571);

ProtoBody603->addChildren(*OrientationInterpolator1570);

CROUTE* ROUTE1575 = new CROUTE();
ROUTE1575->setFromField("fraction_changed");
ROUTE1575->setFromNode("BehaviorClock");
ROUTE1575->setToField("set_fraction");
ROUTE1575->setToNode("t7_OI");
ProtoBody603->addChildren(*ROUTE1575);

COrientationInterpolator* OrientationInterpolator1576 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1576->setDEF("t8_OI");
CIS* IS1577 = new CIS();
Cconnect* connect1578 = new Cconnect();
connect1578->setNodeField("key");
connect1578->setProtoField("t8_key");
IS1577->addConnect(*connect1578);

Cconnect* connect1579 = new Cconnect();
connect1579->setNodeField("keyValue");
connect1579->setProtoField("t8_keyValue");
IS1577->addConnect(*connect1579);

Cconnect* connect1580 = new Cconnect();
connect1580->setNodeField("value_changed");
connect1580->setProtoField("t8_changed");
IS1577->addConnect(*connect1580);

OrientationInterpolator1576->setIS(*IS1577);

ProtoBody603->addChildren(*OrientationInterpolator1576);

CROUTE* ROUTE1581 = new CROUTE();
ROUTE1581->setFromField("fraction_changed");
ROUTE1581->setFromNode("BehaviorClock");
ROUTE1581->setToField("set_fraction");
ROUTE1581->setToNode("t8_OI");
ProtoBody603->addChildren(*ROUTE1581);

COrientationInterpolator* OrientationInterpolator1582 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1582->setDEF("t9_OI");
CIS* IS1583 = new CIS();
Cconnect* connect1584 = new Cconnect();
connect1584->setNodeField("key");
connect1584->setProtoField("t9_key");
IS1583->addConnect(*connect1584);

Cconnect* connect1585 = new Cconnect();
connect1585->setNodeField("keyValue");
connect1585->setProtoField("t9_keyValue");
IS1583->addConnect(*connect1585);

Cconnect* connect1586 = new Cconnect();
connect1586->setNodeField("value_changed");
connect1586->setProtoField("t9_changed");
IS1583->addConnect(*connect1586);

OrientationInterpolator1582->setIS(*IS1583);

ProtoBody603->addChildren(*OrientationInterpolator1582);

CROUTE* ROUTE1587 = new CROUTE();
ROUTE1587->setFromField("fraction_changed");
ROUTE1587->setFromNode("BehaviorClock");
ROUTE1587->setToField("set_fraction");
ROUTE1587->setToNode("t9_OI");
ProtoBody603->addChildren(*ROUTE1587);

COrientationInterpolator* OrientationInterpolator1588 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1588->setDEF("t10_OI");
CIS* IS1589 = new CIS();
Cconnect* connect1590 = new Cconnect();
connect1590->setNodeField("key");
connect1590->setProtoField("t10_key");
IS1589->addConnect(*connect1590);

Cconnect* connect1591 = new Cconnect();
connect1591->setNodeField("keyValue");
connect1591->setProtoField("t10_keyValue");
IS1589->addConnect(*connect1591);

Cconnect* connect1592 = new Cconnect();
connect1592->setNodeField("value_changed");
connect1592->setProtoField("t10_changed");
IS1589->addConnect(*connect1592);

OrientationInterpolator1588->setIS(*IS1589);

ProtoBody603->addChildren(*OrientationInterpolator1588);

CROUTE* ROUTE1593 = new CROUTE();
ROUTE1593->setFromField("fraction_changed");
ROUTE1593->setFromNode("BehaviorClock");
ROUTE1593->setToField("set_fraction");
ROUTE1593->setToNode("t10_OI");
ProtoBody603->addChildren(*ROUTE1593);

COrientationInterpolator* OrientationInterpolator1594 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1594->setDEF("t11_OI");
CIS* IS1595 = new CIS();
Cconnect* connect1596 = new Cconnect();
connect1596->setNodeField("key");
connect1596->setProtoField("t11_key");
IS1595->addConnect(*connect1596);

Cconnect* connect1597 = new Cconnect();
connect1597->setNodeField("keyValue");
connect1597->setProtoField("t11_keyValue");
IS1595->addConnect(*connect1597);

Cconnect* connect1598 = new Cconnect();
connect1598->setNodeField("value_changed");
connect1598->setProtoField("t11_changed");
IS1595->addConnect(*connect1598);

OrientationInterpolator1594->setIS(*IS1595);

ProtoBody603->addChildren(*OrientationInterpolator1594);

CROUTE* ROUTE1599 = new CROUTE();
ROUTE1599->setFromField("fraction_changed");
ROUTE1599->setFromNode("BehaviorClock");
ROUTE1599->setToField("set_fraction");
ROUTE1599->setToNode("t11_OI");
ProtoBody603->addChildren(*ROUTE1599);

COrientationInterpolator* OrientationInterpolator1600 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1600->setDEF("t12_OI");
CIS* IS1601 = new CIS();
Cconnect* connect1602 = new Cconnect();
connect1602->setNodeField("key");
connect1602->setProtoField("t12_key");
IS1601->addConnect(*connect1602);

Cconnect* connect1603 = new Cconnect();
connect1603->setNodeField("keyValue");
connect1603->setProtoField("t12_keyValue");
IS1601->addConnect(*connect1603);

Cconnect* connect1604 = new Cconnect();
connect1604->setNodeField("value_changed");
connect1604->setProtoField("t12_changed");
IS1601->addConnect(*connect1604);

OrientationInterpolator1600->setIS(*IS1601);

ProtoBody603->addChildren(*OrientationInterpolator1600);

CROUTE* ROUTE1605 = new CROUTE();
ROUTE1605->setFromField("fraction_changed");
ROUTE1605->setFromNode("BehaviorClock");
ROUTE1605->setToField("set_fraction");
ROUTE1605->setToNode("t12_OI");
ProtoBody603->addChildren(*ROUTE1605);

COrientationInterpolator* OrientationInterpolator1606 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1606->setDEF("temporomandibular_OI");
CIS* IS1607 = new CIS();
Cconnect* connect1608 = new Cconnect();
connect1608->setNodeField("key");
connect1608->setProtoField("temporomandibular_key");
IS1607->addConnect(*connect1608);

Cconnect* connect1609 = new Cconnect();
connect1609->setNodeField("keyValue");
connect1609->setProtoField("temporomandibular_keyValue");
IS1607->addConnect(*connect1609);

Cconnect* connect1610 = new Cconnect();
connect1610->setNodeField("value_changed");
connect1610->setProtoField("temporomandibular_changed");
IS1607->addConnect(*connect1610);

OrientationInterpolator1606->setIS(*IS1607);

ProtoBody603->addChildren(*OrientationInterpolator1606);

CROUTE* ROUTE1611 = new CROUTE();
ROUTE1611->setFromField("fraction_changed");
ROUTE1611->setFromNode("BehaviorClock");
ROUTE1611->setToField("set_fraction");
ROUTE1611->setToNode("temporomandibular_OI");
ProtoBody603->addChildren(*ROUTE1611);

COrientationInterpolator* OrientationInterpolator1612 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1612->setDEF("vc1_OI");
CIS* IS1613 = new CIS();
Cconnect* connect1614 = new Cconnect();
connect1614->setNodeField("key");
connect1614->setProtoField("vc1_key");
IS1613->addConnect(*connect1614);

Cconnect* connect1615 = new Cconnect();
connect1615->setNodeField("keyValue");
connect1615->setProtoField("vc1_keyValue");
IS1613->addConnect(*connect1615);

Cconnect* connect1616 = new Cconnect();
connect1616->setNodeField("value_changed");
connect1616->setProtoField("vc1_changed");
IS1613->addConnect(*connect1616);

OrientationInterpolator1612->setIS(*IS1613);

ProtoBody603->addChildren(*OrientationInterpolator1612);

CROUTE* ROUTE1617 = new CROUTE();
ROUTE1617->setFromField("fraction_changed");
ROUTE1617->setFromNode("BehaviorClock");
ROUTE1617->setToField("set_fraction");
ROUTE1617->setToNode("vc1_OI");
ProtoBody603->addChildren(*ROUTE1617);

COrientationInterpolator* OrientationInterpolator1618 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1618->setDEF("vc2_OI");
CIS* IS1619 = new CIS();
Cconnect* connect1620 = new Cconnect();
connect1620->setNodeField("key");
connect1620->setProtoField("vc2_key");
IS1619->addConnect(*connect1620);

Cconnect* connect1621 = new Cconnect();
connect1621->setNodeField("keyValue");
connect1621->setProtoField("vc2_keyValue");
IS1619->addConnect(*connect1621);

Cconnect* connect1622 = new Cconnect();
connect1622->setNodeField("value_changed");
connect1622->setProtoField("vc2_changed");
IS1619->addConnect(*connect1622);

OrientationInterpolator1618->setIS(*IS1619);

ProtoBody603->addChildren(*OrientationInterpolator1618);

CROUTE* ROUTE1623 = new CROUTE();
ROUTE1623->setFromField("fraction_changed");
ROUTE1623->setFromNode("BehaviorClock");
ROUTE1623->setToField("set_fraction");
ROUTE1623->setToNode("vc2_OI");
ProtoBody603->addChildren(*ROUTE1623);

COrientationInterpolator* OrientationInterpolator1624 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1624->setDEF("vc3_OI");
CIS* IS1625 = new CIS();
Cconnect* connect1626 = new Cconnect();
connect1626->setNodeField("key");
connect1626->setProtoField("vc3_key");
IS1625->addConnect(*connect1626);

Cconnect* connect1627 = new Cconnect();
connect1627->setNodeField("keyValue");
connect1627->setProtoField("vc3_keyValue");
IS1625->addConnect(*connect1627);

Cconnect* connect1628 = new Cconnect();
connect1628->setNodeField("value_changed");
connect1628->setProtoField("vc3_changed");
IS1625->addConnect(*connect1628);

OrientationInterpolator1624->setIS(*IS1625);

ProtoBody603->addChildren(*OrientationInterpolator1624);

CROUTE* ROUTE1629 = new CROUTE();
ROUTE1629->setFromField("fraction_changed");
ROUTE1629->setFromNode("BehaviorClock");
ROUTE1629->setToField("set_fraction");
ROUTE1629->setToNode("vc3_OI");
ProtoBody603->addChildren(*ROUTE1629);

COrientationInterpolator* OrientationInterpolator1630 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1630->setDEF("vc4_OI");
CIS* IS1631 = new CIS();
Cconnect* connect1632 = new Cconnect();
connect1632->setNodeField("key");
connect1632->setProtoField("vc4_key");
IS1631->addConnect(*connect1632);

Cconnect* connect1633 = new Cconnect();
connect1633->setNodeField("keyValue");
connect1633->setProtoField("vc4_keyValue");
IS1631->addConnect(*connect1633);

Cconnect* connect1634 = new Cconnect();
connect1634->setNodeField("value_changed");
connect1634->setProtoField("vc4_changed");
IS1631->addConnect(*connect1634);

OrientationInterpolator1630->setIS(*IS1631);

ProtoBody603->addChildren(*OrientationInterpolator1630);

CROUTE* ROUTE1635 = new CROUTE();
ROUTE1635->setFromField("fraction_changed");
ROUTE1635->setFromNode("BehaviorClock");
ROUTE1635->setToField("set_fraction");
ROUTE1635->setToNode("vc4_OI");
ProtoBody603->addChildren(*ROUTE1635);

COrientationInterpolator* OrientationInterpolator1636 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1636->setDEF("vc5_OI");
CIS* IS1637 = new CIS();
Cconnect* connect1638 = new Cconnect();
connect1638->setNodeField("key");
connect1638->setProtoField("vc5_key");
IS1637->addConnect(*connect1638);

Cconnect* connect1639 = new Cconnect();
connect1639->setNodeField("keyValue");
connect1639->setProtoField("vc5_keyValue");
IS1637->addConnect(*connect1639);

Cconnect* connect1640 = new Cconnect();
connect1640->setNodeField("value_changed");
connect1640->setProtoField("vc5_changed");
IS1637->addConnect(*connect1640);

OrientationInterpolator1636->setIS(*IS1637);

ProtoBody603->addChildren(*OrientationInterpolator1636);

CROUTE* ROUTE1641 = new CROUTE();
ROUTE1641->setFromField("fraction_changed");
ROUTE1641->setFromNode("BehaviorClock");
ROUTE1641->setToField("set_fraction");
ROUTE1641->setToNode("vc5_OI");
ProtoBody603->addChildren(*ROUTE1641);

COrientationInterpolator* OrientationInterpolator1642 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1642->setDEF("vc6_OI");
CIS* IS1643 = new CIS();
Cconnect* connect1644 = new Cconnect();
connect1644->setNodeField("key");
connect1644->setProtoField("vc6_key");
IS1643->addConnect(*connect1644);

Cconnect* connect1645 = new Cconnect();
connect1645->setNodeField("keyValue");
connect1645->setProtoField("vc6_keyValue");
IS1643->addConnect(*connect1645);

Cconnect* connect1646 = new Cconnect();
connect1646->setNodeField("value_changed");
connect1646->setProtoField("vc6_changed");
IS1643->addConnect(*connect1646);

OrientationInterpolator1642->setIS(*IS1643);

ProtoBody603->addChildren(*OrientationInterpolator1642);

CROUTE* ROUTE1647 = new CROUTE();
ROUTE1647->setFromField("fraction_changed");
ROUTE1647->setFromNode("BehaviorClock");
ROUTE1647->setToField("set_fraction");
ROUTE1647->setToNode("vc6_OI");
ProtoBody603->addChildren(*ROUTE1647);

COrientationInterpolator* OrientationInterpolator1648 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1648->setDEF("vc7_OI");
CIS* IS1649 = new CIS();
Cconnect* connect1650 = new Cconnect();
connect1650->setNodeField("key");
connect1650->setProtoField("vc7_key");
IS1649->addConnect(*connect1650);

Cconnect* connect1651 = new Cconnect();
connect1651->setNodeField("keyValue");
connect1651->setProtoField("vc7_keyValue");
IS1649->addConnect(*connect1651);

Cconnect* connect1652 = new Cconnect();
connect1652->setNodeField("value_changed");
connect1652->setProtoField("vc7_changed");
IS1649->addConnect(*connect1652);

OrientationInterpolator1648->setIS(*IS1649);

ProtoBody603->addChildren(*OrientationInterpolator1648);

CROUTE* ROUTE1653 = new CROUTE();
ROUTE1653->setFromField("fraction_changed");
ROUTE1653->setFromNode("BehaviorClock");
ROUTE1653->setToField("set_fraction");
ROUTE1653->setToNode("vc7_OI");
ProtoBody603->addChildren(*ROUTE1653);

COrientationInterpolator* OrientationInterpolator1654 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1654->setDEF("vl1_OI");
CIS* IS1655 = new CIS();
Cconnect* connect1656 = new Cconnect();
connect1656->setNodeField("key");
connect1656->setProtoField("vl1_key");
IS1655->addConnect(*connect1656);

Cconnect* connect1657 = new Cconnect();
connect1657->setNodeField("keyValue");
connect1657->setProtoField("vl1_keyValue");
IS1655->addConnect(*connect1657);

Cconnect* connect1658 = new Cconnect();
connect1658->setNodeField("value_changed");
connect1658->setProtoField("vl1_changed");
IS1655->addConnect(*connect1658);

OrientationInterpolator1654->setIS(*IS1655);

ProtoBody603->addChildren(*OrientationInterpolator1654);

CROUTE* ROUTE1659 = new CROUTE();
ROUTE1659->setFromField("fraction_changed");
ROUTE1659->setFromNode("BehaviorClock");
ROUTE1659->setToField("set_fraction");
ROUTE1659->setToNode("vl1_OI");
ProtoBody603->addChildren(*ROUTE1659);

COrientationInterpolator* OrientationInterpolator1660 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1660->setDEF("vl2_OI");
CIS* IS1661 = new CIS();
Cconnect* connect1662 = new Cconnect();
connect1662->setNodeField("key");
connect1662->setProtoField("vl2_key");
IS1661->addConnect(*connect1662);

Cconnect* connect1663 = new Cconnect();
connect1663->setNodeField("keyValue");
connect1663->setProtoField("vl2_keyValue");
IS1661->addConnect(*connect1663);

Cconnect* connect1664 = new Cconnect();
connect1664->setNodeField("value_changed");
connect1664->setProtoField("vl2_changed");
IS1661->addConnect(*connect1664);

OrientationInterpolator1660->setIS(*IS1661);

ProtoBody603->addChildren(*OrientationInterpolator1660);

CROUTE* ROUTE1665 = new CROUTE();
ROUTE1665->setFromField("fraction_changed");
ROUTE1665->setFromNode("BehaviorClock");
ROUTE1665->setToField("set_fraction");
ROUTE1665->setToNode("vl2_OI");
ProtoBody603->addChildren(*ROUTE1665);

COrientationInterpolator* OrientationInterpolator1666 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1666->setDEF("vl3_OI");
CIS* IS1667 = new CIS();
Cconnect* connect1668 = new Cconnect();
connect1668->setNodeField("key");
connect1668->setProtoField("vl3_key");
IS1667->addConnect(*connect1668);

Cconnect* connect1669 = new Cconnect();
connect1669->setNodeField("keyValue");
connect1669->setProtoField("vl3_keyValue");
IS1667->addConnect(*connect1669);

Cconnect* connect1670 = new Cconnect();
connect1670->setNodeField("value_changed");
connect1670->setProtoField("vl3_changed");
IS1667->addConnect(*connect1670);

OrientationInterpolator1666->setIS(*IS1667);

ProtoBody603->addChildren(*OrientationInterpolator1666);

CROUTE* ROUTE1671 = new CROUTE();
ROUTE1671->setFromField("fraction_changed");
ROUTE1671->setFromNode("BehaviorClock");
ROUTE1671->setToField("set_fraction");
ROUTE1671->setToNode("vl3_OI");
ProtoBody603->addChildren(*ROUTE1671);

COrientationInterpolator* OrientationInterpolator1672 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1672->setDEF("vl4_OI");
CIS* IS1673 = new CIS();
Cconnect* connect1674 = new Cconnect();
connect1674->setNodeField("key");
connect1674->setProtoField("vl4_key");
IS1673->addConnect(*connect1674);

Cconnect* connect1675 = new Cconnect();
connect1675->setNodeField("keyValue");
connect1675->setProtoField("vl4_keyValue");
IS1673->addConnect(*connect1675);

Cconnect* connect1676 = new Cconnect();
connect1676->setNodeField("value_changed");
connect1676->setProtoField("vl4_changed");
IS1673->addConnect(*connect1676);

OrientationInterpolator1672->setIS(*IS1673);

ProtoBody603->addChildren(*OrientationInterpolator1672);

CROUTE* ROUTE1677 = new CROUTE();
ROUTE1677->setFromField("fraction_changed");
ROUTE1677->setFromNode("BehaviorClock");
ROUTE1677->setToField("set_fraction");
ROUTE1677->setToNode("vl4_OI");
ProtoBody603->addChildren(*ROUTE1677);

COrientationInterpolator* OrientationInterpolator1678 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1678->setDEF("vl5_OI");
CIS* IS1679 = new CIS();
Cconnect* connect1680 = new Cconnect();
connect1680->setNodeField("key");
connect1680->setProtoField("vl5_key");
IS1679->addConnect(*connect1680);

Cconnect* connect1681 = new Cconnect();
connect1681->setNodeField("keyValue");
connect1681->setProtoField("vl5_keyValue");
IS1679->addConnect(*connect1681);

Cconnect* connect1682 = new Cconnect();
connect1682->setNodeField("value_changed");
connect1682->setProtoField("vl5_changed");
IS1679->addConnect(*connect1682);

OrientationInterpolator1678->setIS(*IS1679);

ProtoBody603->addChildren(*OrientationInterpolator1678);

CROUTE* ROUTE1683 = new CROUTE();
ROUTE1683->setFromField("fraction_changed");
ROUTE1683->setFromNode("BehaviorClock");
ROUTE1683->setToField("set_fraction");
ROUTE1683->setToNode("vl5_OI");
ProtoBody603->addChildren(*ROUTE1683);

COrientationInterpolator* OrientationInterpolator1684 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1684->setDEF("vt1_OI");
CIS* IS1685 = new CIS();
Cconnect* connect1686 = new Cconnect();
connect1686->setNodeField("key");
connect1686->setProtoField("vt1_key");
IS1685->addConnect(*connect1686);

Cconnect* connect1687 = new Cconnect();
connect1687->setNodeField("keyValue");
connect1687->setProtoField("vt1_keyValue");
IS1685->addConnect(*connect1687);

Cconnect* connect1688 = new Cconnect();
connect1688->setNodeField("value_changed");
connect1688->setProtoField("vt1_changed");
IS1685->addConnect(*connect1688);

OrientationInterpolator1684->setIS(*IS1685);

ProtoBody603->addChildren(*OrientationInterpolator1684);

CROUTE* ROUTE1689 = new CROUTE();
ROUTE1689->setFromField("fraction_changed");
ROUTE1689->setFromNode("BehaviorClock");
ROUTE1689->setToField("set_fraction");
ROUTE1689->setToNode("vt1_OI");
ProtoBody603->addChildren(*ROUTE1689);

COrientationInterpolator* OrientationInterpolator1690 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1690->setDEF("vt2_OI");
CIS* IS1691 = new CIS();
Cconnect* connect1692 = new Cconnect();
connect1692->setNodeField("key");
connect1692->setProtoField("vt2_key");
IS1691->addConnect(*connect1692);

Cconnect* connect1693 = new Cconnect();
connect1693->setNodeField("keyValue");
connect1693->setProtoField("vt2_keyValue");
IS1691->addConnect(*connect1693);

Cconnect* connect1694 = new Cconnect();
connect1694->setNodeField("value_changed");
connect1694->setProtoField("vt2_changed");
IS1691->addConnect(*connect1694);

OrientationInterpolator1690->setIS(*IS1691);

ProtoBody603->addChildren(*OrientationInterpolator1690);

CROUTE* ROUTE1695 = new CROUTE();
ROUTE1695->setFromField("fraction_changed");
ROUTE1695->setFromNode("BehaviorClock");
ROUTE1695->setToField("set_fraction");
ROUTE1695->setToNode("vt2_OI");
ProtoBody603->addChildren(*ROUTE1695);

COrientationInterpolator* OrientationInterpolator1696 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1696->setDEF("vt3_OI");
CIS* IS1697 = new CIS();
Cconnect* connect1698 = new Cconnect();
connect1698->setNodeField("key");
connect1698->setProtoField("vt3_key");
IS1697->addConnect(*connect1698);

Cconnect* connect1699 = new Cconnect();
connect1699->setNodeField("keyValue");
connect1699->setProtoField("vt3_keyValue");
IS1697->addConnect(*connect1699);

Cconnect* connect1700 = new Cconnect();
connect1700->setNodeField("value_changed");
connect1700->setProtoField("vt3_changed");
IS1697->addConnect(*connect1700);

OrientationInterpolator1696->setIS(*IS1697);

ProtoBody603->addChildren(*OrientationInterpolator1696);

CROUTE* ROUTE1701 = new CROUTE();
ROUTE1701->setFromField("fraction_changed");
ROUTE1701->setFromNode("BehaviorClock");
ROUTE1701->setToField("set_fraction");
ROUTE1701->setToNode("vt3_OI");
ProtoBody603->addChildren(*ROUTE1701);

COrientationInterpolator* OrientationInterpolator1702 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1702->setDEF("vt4_OI");
CIS* IS1703 = new CIS();
Cconnect* connect1704 = new Cconnect();
connect1704->setNodeField("key");
connect1704->setProtoField("vt4_key");
IS1703->addConnect(*connect1704);

Cconnect* connect1705 = new Cconnect();
connect1705->setNodeField("keyValue");
connect1705->setProtoField("vt4_keyValue");
IS1703->addConnect(*connect1705);

Cconnect* connect1706 = new Cconnect();
connect1706->setNodeField("value_changed");
connect1706->setProtoField("vt4_changed");
IS1703->addConnect(*connect1706);

OrientationInterpolator1702->setIS(*IS1703);

ProtoBody603->addChildren(*OrientationInterpolator1702);

CROUTE* ROUTE1707 = new CROUTE();
ROUTE1707->setFromField("fraction_changed");
ROUTE1707->setFromNode("BehaviorClock");
ROUTE1707->setToField("set_fraction");
ROUTE1707->setToNode("vt4_OI");
ProtoBody603->addChildren(*ROUTE1707);

COrientationInterpolator* OrientationInterpolator1708 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1708->setDEF("vt5_OI");
CIS* IS1709 = new CIS();
Cconnect* connect1710 = new Cconnect();
connect1710->setNodeField("key");
connect1710->setProtoField("vt5_key");
IS1709->addConnect(*connect1710);

Cconnect* connect1711 = new Cconnect();
connect1711->setNodeField("keyValue");
connect1711->setProtoField("vt5_keyValue");
IS1709->addConnect(*connect1711);

Cconnect* connect1712 = new Cconnect();
connect1712->setNodeField("value_changed");
connect1712->setProtoField("vt5_changed");
IS1709->addConnect(*connect1712);

OrientationInterpolator1708->setIS(*IS1709);

ProtoBody603->addChildren(*OrientationInterpolator1708);

CROUTE* ROUTE1713 = new CROUTE();
ROUTE1713->setFromField("fraction_changed");
ROUTE1713->setFromNode("BehaviorClock");
ROUTE1713->setToField("set_fraction");
ROUTE1713->setToNode("vt5_OI");
ProtoBody603->addChildren(*ROUTE1713);

COrientationInterpolator* OrientationInterpolator1714 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1714->setDEF("vt6_OI");
CIS* IS1715 = new CIS();
Cconnect* connect1716 = new Cconnect();
connect1716->setNodeField("key");
connect1716->setProtoField("vt6_key");
IS1715->addConnect(*connect1716);

Cconnect* connect1717 = new Cconnect();
connect1717->setNodeField("keyValue");
connect1717->setProtoField("vt6_keyValue");
IS1715->addConnect(*connect1717);

Cconnect* connect1718 = new Cconnect();
connect1718->setNodeField("value_changed");
connect1718->setProtoField("vt6_changed");
IS1715->addConnect(*connect1718);

OrientationInterpolator1714->setIS(*IS1715);

ProtoBody603->addChildren(*OrientationInterpolator1714);

CROUTE* ROUTE1719 = new CROUTE();
ROUTE1719->setFromField("fraction_changed");
ROUTE1719->setFromNode("BehaviorClock");
ROUTE1719->setToField("set_fraction");
ROUTE1719->setToNode("vt6_OI");
ProtoBody603->addChildren(*ROUTE1719);

COrientationInterpolator* OrientationInterpolator1720 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1720->setDEF("vt7_OI");
CIS* IS1721 = new CIS();
Cconnect* connect1722 = new Cconnect();
connect1722->setNodeField("key");
connect1722->setProtoField("vt7_key");
IS1721->addConnect(*connect1722);

Cconnect* connect1723 = new Cconnect();
connect1723->setNodeField("keyValue");
connect1723->setProtoField("vt7_keyValue");
IS1721->addConnect(*connect1723);

Cconnect* connect1724 = new Cconnect();
connect1724->setNodeField("value_changed");
connect1724->setProtoField("vt7_changed");
IS1721->addConnect(*connect1724);

OrientationInterpolator1720->setIS(*IS1721);

ProtoBody603->addChildren(*OrientationInterpolator1720);

CROUTE* ROUTE1725 = new CROUTE();
ROUTE1725->setFromField("fraction_changed");
ROUTE1725->setFromNode("BehaviorClock");
ROUTE1725->setToField("set_fraction");
ROUTE1725->setToNode("vt7_OI");
ProtoBody603->addChildren(*ROUTE1725);

COrientationInterpolator* OrientationInterpolator1726 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1726->setDEF("vt8_OI");
CIS* IS1727 = new CIS();
Cconnect* connect1728 = new Cconnect();
connect1728->setNodeField("key");
connect1728->setProtoField("vt8_key");
IS1727->addConnect(*connect1728);

Cconnect* connect1729 = new Cconnect();
connect1729->setNodeField("keyValue");
connect1729->setProtoField("vt8_keyValue");
IS1727->addConnect(*connect1729);

Cconnect* connect1730 = new Cconnect();
connect1730->setNodeField("value_changed");
connect1730->setProtoField("vt8_changed");
IS1727->addConnect(*connect1730);

OrientationInterpolator1726->setIS(*IS1727);

ProtoBody603->addChildren(*OrientationInterpolator1726);

CROUTE* ROUTE1731 = new CROUTE();
ROUTE1731->setFromField("fraction_changed");
ROUTE1731->setFromNode("BehaviorClock");
ROUTE1731->setToField("set_fraction");
ROUTE1731->setToNode("vt8_OI");
ProtoBody603->addChildren(*ROUTE1731);

COrientationInterpolator* OrientationInterpolator1732 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1732->setDEF("vt9_OI");
CIS* IS1733 = new CIS();
Cconnect* connect1734 = new Cconnect();
connect1734->setNodeField("key");
connect1734->setProtoField("vt9_key");
IS1733->addConnect(*connect1734);

Cconnect* connect1735 = new Cconnect();
connect1735->setNodeField("keyValue");
connect1735->setProtoField("vt9_keyValue");
IS1733->addConnect(*connect1735);

Cconnect* connect1736 = new Cconnect();
connect1736->setNodeField("value_changed");
connect1736->setProtoField("vt9_changed");
IS1733->addConnect(*connect1736);

OrientationInterpolator1732->setIS(*IS1733);

ProtoBody603->addChildren(*OrientationInterpolator1732);

CROUTE* ROUTE1737 = new CROUTE();
ROUTE1737->setFromField("fraction_changed");
ROUTE1737->setFromNode("BehaviorClock");
ROUTE1737->setToField("set_fraction");
ROUTE1737->setToNode("vt9_OI");
ProtoBody603->addChildren(*ROUTE1737);

COrientationInterpolator* OrientationInterpolator1738 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1738->setDEF("vt10_OI");
CIS* IS1739 = new CIS();
Cconnect* connect1740 = new Cconnect();
connect1740->setNodeField("key");
connect1740->setProtoField("vt10_key");
IS1739->addConnect(*connect1740);

Cconnect* connect1741 = new Cconnect();
connect1741->setNodeField("keyValue");
connect1741->setProtoField("vt10_keyValue");
IS1739->addConnect(*connect1741);

Cconnect* connect1742 = new Cconnect();
connect1742->setNodeField("value_changed");
connect1742->setProtoField("vt10_changed");
IS1739->addConnect(*connect1742);

OrientationInterpolator1738->setIS(*IS1739);

ProtoBody603->addChildren(*OrientationInterpolator1738);

CROUTE* ROUTE1743 = new CROUTE();
ROUTE1743->setFromField("fraction_changed");
ROUTE1743->setFromNode("BehaviorClock");
ROUTE1743->setToField("set_fraction");
ROUTE1743->setToNode("vt10_OI");
ProtoBody603->addChildren(*ROUTE1743);

COrientationInterpolator* OrientationInterpolator1744 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1744->setDEF("vt11_OI");
CIS* IS1745 = new CIS();
Cconnect* connect1746 = new Cconnect();
connect1746->setNodeField("key");
connect1746->setProtoField("vt11_key");
IS1745->addConnect(*connect1746);

Cconnect* connect1747 = new Cconnect();
connect1747->setNodeField("keyValue");
connect1747->setProtoField("vt11_keyValue");
IS1745->addConnect(*connect1747);

Cconnect* connect1748 = new Cconnect();
connect1748->setNodeField("value_changed");
connect1748->setProtoField("vt11_changed");
IS1745->addConnect(*connect1748);

OrientationInterpolator1744->setIS(*IS1745);

ProtoBody603->addChildren(*OrientationInterpolator1744);

CROUTE* ROUTE1749 = new CROUTE();
ROUTE1749->setFromField("fraction_changed");
ROUTE1749->setFromNode("BehaviorClock");
ROUTE1749->setToField("set_fraction");
ROUTE1749->setToNode("vt11_OI");
ProtoBody603->addChildren(*ROUTE1749);

COrientationInterpolator* OrientationInterpolator1750 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1750->setDEF("vt12_OI");
CIS* IS1751 = new CIS();
Cconnect* connect1752 = new Cconnect();
connect1752->setNodeField("key");
connect1752->setProtoField("vt12_key");
IS1751->addConnect(*connect1752);

Cconnect* connect1753 = new Cconnect();
connect1753->setNodeField("keyValue");
connect1753->setProtoField("vt12_keyValue");
IS1751->addConnect(*connect1753);

Cconnect* connect1754 = new Cconnect();
connect1754->setNodeField("value_changed");
connect1754->setProtoField("vt12_changed");
IS1751->addConnect(*connect1754);

OrientationInterpolator1750->setIS(*IS1751);

ProtoBody603->addChildren(*OrientationInterpolator1750);

CROUTE* ROUTE1755 = new CROUTE();
ROUTE1755->setFromField("fraction_changed");
ROUTE1755->setFromNode("BehaviorClock");
ROUTE1755->setToField("set_fraction");
ROUTE1755->setToNode("vt12_OI");
ProtoBody603->addChildren(*ROUTE1755);

ProtoDeclare20->setProtoBody(*ProtoBody603);

group->addChildren(*ProtoDeclare20);

CProtoDeclare ProtoDeclare1756 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="HAnimBodyBehaviorChooser" appinfo="The HAnimBodyBehaviorChooser node allows an author to select one of several HAnimHumanoid bodies and simultaneously apply multiple HAnimBehavior animations to the active body. Individual behaviors may be enabled or disabled at any time." ><ProtoInterface><!--TODO: supported Level of Articulation (LOA) might be adapted to more efficiently setup/teardown pertinent ROUTEs--><!--accessType="inputOutput" avoided to maintain backwards compatilibility with VRML97 scripting constraints--><!--shared common TimeSensor inputs for all BehaviorAnimation nodes, connected via ROUTEs--><!--TODO: consider named accessors, e.g. enableBehaviorByName and disableBehaviorByName--><!--TODO: consider addBody, removeBody, addBehavior, removeBehavior--><!--TODO: consider startBehaviorByIndex, stopBehaviorByIndex, startBehaviorByName, stopBehaviorByName--><field name="supportedLOA" accessType="inputOutput" appinfo="Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3." type="SFInt32" value="-1"></field>
<field name="HumanoidArray" accessType="initializeOnly" appinfo="[HAnimHumanoid] nodes only" type="MFNode"><!--default NULL--></field>
<field name="whichBody" accessType="initializeOnly" appinfo="whichBody is selected default is initial member of HumanoidArray" type="SFInt32" value="-1"></field>
<field name="set_whichBody" accessType="inputOnly" appinfo="whichBody is selected default is none" type="SFInt32"></field>
<field name="whichBody_changed" accessType="outputOnly" appinfo="whichBody is selected default is none" type="SFInt32"></field>
<field name="hAnimBehaviorNodes" accessType="initializeOnly" appinfo="[HAnimBehavior] nodes only some or all of which may be enabled. Warning: do not animate a single joint with more than one interpolator at a given time." type="MFNode"><!--default NULL--></field>
<field name="enabledBehaviorsArray" accessType="initializeOnly" appinfo="indicate which HAnimBehavior nodes are activated, empty indicates all enabled true" type="MFBool"><!--no default values--></field>
<field name="enableBehavior" accessType="inputOnly" appinfo="enable corresponding behavior identified by index number" type="SFInt32"></field>
<field name="disableBehavior" accessType="inputOnly" appinfo="disable corresponding behavior identified by index number" type="SFInt32"></field>
<field name="startTime" accessType="inputOutput" type="SFTime" value="0"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime" value="0"></field>
</ProtoInterface>
<ProtoBody><Switch DEF="BodySwitch" whichChoice="-1"><IS><connect nodeField="whichChoice" protoField="whichBody"></connect>
<connect nodeField="children" protoField="HumanoidArray"></connect>
</IS>
</Switch>
<!--note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless--><Group DEF="BehaviorArrayHolder"><IS><connect nodeField="children" protoField="hAnimBehaviorNodes"></connect>
</IS>
</Group>
<TimeSensor DEF="TimeSensorHolderStartStopTimes"><IS><connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
</IS>
</TimeSensor>
<Switch DEF="SupportedLoaHolder2" whichChoice="-1"><IS><connect nodeField="whichChoice" protoField="supportedLOA"></connect>
</IS>
</Switch>
<Script DEF="BehaviorSelectionScript" directOutput="true" url="&quot;HAnimBehaviorPrototypesScript.js&quot; &quot;https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypesScript.js&quot;"><field name="HumanoidArray" accessType="initializeOnly" appinfo="[HAnimHumanoid] nodes only" type="MFNode"></field>
<field name="whichBody" accessType="initializeOnly" appinfo="whichBody is selected default is none" type="SFInt32"></field>
<field name="set_whichBody" accessType="inputOnly" appinfo="whichBody is selected default is none" type="SFInt32"></field>
<field name="whichBody_changed" accessType="outputOnly" appinfo="whichBody is selected default is none" type="SFInt32"></field>
<field name="hAnimBehaviorNodes" accessType="initializeOnly" appinfo="[HAnimBehavior] nodes only" type="MFNode"><!--TODO: might consider accessType="inputOutput" if VRML97 compatibility not needed--></field>
<field name="enabledBehaviorsArray" accessType="initializeOnly" type="MFBool"></field>
<field name="enableBehavior" accessType="inputOnly" appinfo="enable corresponding behavior" type="SFInt32"></field>
<field name="disableBehavior" accessType="inputOnly" appinfo="enable corresponding behavior" type="SFInt32"></field>
<field name="timeSensorNode" accessType="initializeOnly" type="SFNode"><TimeSensor USE="TimeSensorHolderStartStopTimes"></TimeSensor>
</field>
<field name="previousBodyIndex" accessType="initializeOnly" appinfo="remember prior body index to avoid unnecessary ROUTE teardown and creation" type="SFInt32" value="-1"></field>
<field name="traceEnabled" accessType="initializeOnly" type="SFBool" value="true"></field>
<IS><connect nodeField="HumanoidArray" protoField="HumanoidArray"></connect>
<connect nodeField="whichBody" protoField="whichBody"></connect>
<connect nodeField="set_whichBody" protoField="set_whichBody"></connect>
<connect nodeField="whichBody_changed" protoField="whichBody_changed"></connect>
<connect nodeField="hAnimBehaviorNodes" protoField="hAnimBehaviorNodes"></connect>
<connect nodeField="enabledBehaviorsArray" protoField="enabledBehaviorsArray"></connect>
<connect nodeField="enableBehavior" protoField="enableBehavior"></connect>
<connect nodeField="disableBehavior" protoField="disableBehavior"></connect>
</IS>
</Script>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare1756->setName("HAnimBodyBehaviorChooser");
ProtoDeclare1756->setAppinfo("The HAnimBodyBehaviorChooser node allows an author to select one of several HAnimHumanoid bodies and simultaneously apply multiple HAnimBehavior animations to the active body. Individual behaviors may be enabled or disabled at any time.");
CProtoInterface* ProtoInterface1757 = new CProtoInterface();
//TODO: supported Level of Articulation (LOA) might be adapted to more efficiently setup/teardown pertinent ROUTEs
//accessType=\"inputOutput\" avoided to maintain backwards compatilibility with VRML97 scripting constraints
//shared common TimeSensor inputs for all BehaviorAnimation nodes, connected via ROUTEs
//TODO: consider named accessors, e.g. enableBehaviorByName and disableBehaviorByName
//TODO: consider addBody, removeBody, addBehavior, removeBehavior
//TODO: consider startBehaviorByIndex, stopBehaviorByIndex, startBehaviorByName, stopBehaviorByName
Cfield* field1758 = new Cfield();
field1758->setName("supportedLOA");
field1758->setAccessType("inputOutput");
field1758->setAppinfo("Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3.");
field1758->setType("SFInt32");
field1758->setValue("-1");
ProtoInterface1757->addField(*field1758);

Cfield* field1759 = new Cfield();
field1759->setName("HumanoidArray");
field1759->setAccessType("initializeOnly");
field1759->setAppinfo("[HAnimHumanoid] nodes only");
field1759->setType("MFNode");
//default NULL
ProtoInterface1757->addField(*field1759);

Cfield* field1760 = new Cfield();
field1760->setName("whichBody");
field1760->setAccessType("initializeOnly");
field1760->setAppinfo("whichBody is selected default is initial member of HumanoidArray");
field1760->setType("SFInt32");
field1760->setValue("-1");
ProtoInterface1757->addField(*field1760);

Cfield* field1761 = new Cfield();
field1761->setName("set_whichBody");
field1761->setAccessType("inputOnly");
field1761->setAppinfo("whichBody is selected default is none");
field1761->setType("SFInt32");
ProtoInterface1757->addField(*field1761);

Cfield* field1762 = new Cfield();
field1762->setName("whichBody_changed");
field1762->setAccessType("outputOnly");
field1762->setAppinfo("whichBody is selected default is none");
field1762->setType("SFInt32");
ProtoInterface1757->addField(*field1762);

Cfield* field1763 = new Cfield();
field1763->setName("hAnimBehaviorNodes");
field1763->setAccessType("initializeOnly");
field1763->setAppinfo("[HAnimBehavior] nodes only some or all of which may be enabled. Warning: do not animate a single joint with more than one interpolator at a given time.");
field1763->setType("MFNode");
//default NULL
ProtoInterface1757->addField(*field1763);

Cfield* field1764 = new Cfield();
field1764->setName("enabledBehaviorsArray");
field1764->setAccessType("initializeOnly");
field1764->setAppinfo("indicate which HAnimBehavior nodes are activated, empty indicates all enabled true");
field1764->setType("MFBool");
//no default values
ProtoInterface1757->addField(*field1764);

Cfield* field1765 = new Cfield();
field1765->setName("enableBehavior");
field1765->setAccessType("inputOnly");
field1765->setAppinfo("enable corresponding behavior identified by index number");
field1765->setType("SFInt32");
ProtoInterface1757->addField(*field1765);

Cfield* field1766 = new Cfield();
field1766->setName("disableBehavior");
field1766->setAccessType("inputOnly");
field1766->setAppinfo("disable corresponding behavior identified by index number");
field1766->setType("SFInt32");
ProtoInterface1757->addField(*field1766);

Cfield* field1767 = new Cfield();
field1767->setName("startTime");
field1767->setAccessType("inputOutput");
field1767->setType("SFTime");
field1767->setValue("0");
ProtoInterface1757->addField(*field1767);

Cfield* field1768 = new Cfield();
field1768->setName("stopTime");
field1768->setAccessType("inputOutput");
field1768->setType("SFTime");
field1768->setValue("0");
ProtoInterface1757->addField(*field1768);

ProtoDeclare1756->setProtoInterface(*ProtoInterface1757);

CProtoBody* ProtoBody1769 = new CProtoBody();
CSwitch* Switch1770 = (CSwitch *)(m_pScene.createNode("Switch"));
Switch1770->setDEF("BodySwitch");
Switch1770->setWhichChoice(-1);
CIS* IS1771 = new CIS();
Cconnect* connect1772 = new Cconnect();
connect1772->setNodeField("whichChoice");
connect1772->setProtoField("whichBody");
IS1771->addConnect(*connect1772);

Cconnect* connect1773 = new Cconnect();
connect1773->setNodeField("children");
connect1773->setProtoField("HumanoidArray");
IS1771->addConnect(*connect1773);

Switch1770->setIS(*IS1771);

ProtoBody1769->addChildren(*Switch1770);

//note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless
CGroup* Group1774 = (CGroup *)(m_pScene.createNode("Group"));
Group1774->setDEF("BehaviorArrayHolder");
CIS* IS1775 = new CIS();
Cconnect* connect1776 = new Cconnect();
connect1776->setNodeField("children");
connect1776->setProtoField("hAnimBehaviorNodes");
IS1775->addConnect(*connect1776);

Group1774->setIS(*IS1775);

ProtoBody1769->addChildren(*Group1774);

CTimeSensor* TimeSensor1777 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor1777->setDEF("TimeSensorHolderStartStopTimes");
CIS* IS1778 = new CIS();
Cconnect* connect1779 = new Cconnect();
connect1779->setNodeField("startTime");
connect1779->setProtoField("startTime");
IS1778->addConnect(*connect1779);

Cconnect* connect1780 = new Cconnect();
connect1780->setNodeField("stopTime");
connect1780->setProtoField("stopTime");
IS1778->addConnect(*connect1780);

TimeSensor1777->setIS(*IS1778);

ProtoBody1769->addChildren(*TimeSensor1777);

CSwitch* Switch1781 = (CSwitch *)(m_pScene.createNode("Switch"));
Switch1781->setDEF("SupportedLoaHolder2");
Switch1781->setWhichChoice(-1);
CIS* IS1782 = new CIS();
Cconnect* connect1783 = new Cconnect();
connect1783->setNodeField("whichChoice");
connect1783->setProtoField("supportedLOA");
IS1782->addConnect(*connect1783);

Switch1781->setIS(*IS1782);

ProtoBody1769->addChildren(*Switch1781);

CScript* Script1784 = (CScript *)(m_pScene.createNode("Script"));
Script1784->setDEF("BehaviorSelectionScript");
Script1784->setDirectOutput(True);
Script1784->setUrl(new CString[2]{"HAnimBehaviorPrototypesScript.js","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypesScript.js"}, 2);
Cfield* field1785 = new Cfield();
field1785->setName("HumanoidArray");
field1785->setAccessType("initializeOnly");
field1785->setAppinfo("[HAnimHumanoid] nodes only");
field1785->setType("MFNode");
Script1784->addField(*field1785);

Cfield* field1786 = new Cfield();
field1786->setName("whichBody");
field1786->setAccessType("initializeOnly");
field1786->setAppinfo("whichBody is selected default is none");
field1786->setType("SFInt32");
Script1784->addField(*field1786);

Cfield* field1787 = new Cfield();
field1787->setName("set_whichBody");
field1787->setAccessType("inputOnly");
field1787->setAppinfo("whichBody is selected default is none");
field1787->setType("SFInt32");
Script1784->addField(*field1787);

Cfield* field1788 = new Cfield();
field1788->setName("whichBody_changed");
field1788->setAccessType("outputOnly");
field1788->setAppinfo("whichBody is selected default is none");
field1788->setType("SFInt32");
Script1784->addField(*field1788);

Cfield* field1789 = new Cfield();
field1789->setName("hAnimBehaviorNodes");
field1789->setAccessType("initializeOnly");
field1789->setAppinfo("[HAnimBehavior] nodes only");
field1789->setType("MFNode");
//TODO: might consider accessType=\"inputOutput\" if VRML97 compatibility not needed
Script1784->addField(*field1789);

Cfield* field1790 = new Cfield();
field1790->setName("enabledBehaviorsArray");
field1790->setAccessType("initializeOnly");
field1790->setType("MFBool");
Script1784->addField(*field1790);

Cfield* field1791 = new Cfield();
field1791->setName("enableBehavior");
field1791->setAccessType("inputOnly");
field1791->setAppinfo("enable corresponding behavior");
field1791->setType("SFInt32");
Script1784->addField(*field1791);

Cfield* field1792 = new Cfield();
field1792->setName("disableBehavior");
field1792->setAccessType("inputOnly");
field1792->setAppinfo("enable corresponding behavior");
field1792->setType("SFInt32");
Script1784->addField(*field1792);

Cfield* field1793 = new Cfield();
field1793->setName("timeSensorNode");
field1793->setAccessType("initializeOnly");
field1793->setType("SFNode");
CTimeSensor* TimeSensor1794 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor1794->setUSE("TimeSensorHolderStartStopTimes");
field1793->addChildren(*TimeSensor1794);

Script1784->addField(*field1793);

Cfield* field1795 = new Cfield();
field1795->setName("previousBodyIndex");
field1795->setAccessType("initializeOnly");
field1795->setAppinfo("remember prior body index to avoid unnecessary ROUTE teardown and creation");
field1795->setType("SFInt32");
field1795->setValue("-1");
Script1784->addField(*field1795);

Cfield* field1796 = new Cfield();
field1796->setName("traceEnabled");
field1796->setAccessType("initializeOnly");
field1796->setType("SFBool");
field1796->setValue("true");
Script1784->addField(*field1796);

CIS* IS1797 = new CIS();
Cconnect* connect1798 = new Cconnect();
connect1798->setNodeField("HumanoidArray");
connect1798->setProtoField("HumanoidArray");
IS1797->addConnect(*connect1798);

Cconnect* connect1799 = new Cconnect();
connect1799->setNodeField("whichBody");
connect1799->setProtoField("whichBody");
IS1797->addConnect(*connect1799);

Cconnect* connect1800 = new Cconnect();
connect1800->setNodeField("set_whichBody");
connect1800->setProtoField("set_whichBody");
IS1797->addConnect(*connect1800);

Cconnect* connect1801 = new Cconnect();
connect1801->setNodeField("whichBody_changed");
connect1801->setProtoField("whichBody_changed");
IS1797->addConnect(*connect1801);

Cconnect* connect1802 = new Cconnect();
connect1802->setNodeField("hAnimBehaviorNodes");
connect1802->setProtoField("hAnimBehaviorNodes");
IS1797->addConnect(*connect1802);

Cconnect* connect1803 = new Cconnect();
connect1803->setNodeField("enabledBehaviorsArray");
connect1803->setProtoField("enabledBehaviorsArray");
IS1797->addConnect(*connect1803);

Cconnect* connect1804 = new Cconnect();
connect1804->setNodeField("enableBehavior");
connect1804->setProtoField("enableBehavior");
IS1797->addConnect(*connect1804);

Cconnect* connect1805 = new Cconnect();
connect1805->setNodeField("disableBehavior");
connect1805->setProtoField("disableBehavior");
IS1797->addConnect(*connect1805);

Script1784->setIS(*IS1797);

ProtoBody1769->addChildren(*Script1784);

ProtoDeclare1756->setProtoBody(*ProtoBody1769);

group->addChildren(*ProtoDeclare1756);

//TODO: Goal is to have 3 different ways to present a body: local creation, Inline with IMPORT/EXPORT, or external prototype.
CProtoInstance* ProtoInstance1806 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance1806->setName("HAnimBehavior");
ProtoInstance1806->setDEF("BehaviorTest1");
//only one PositionInterpolator key/keyValue definition for entire humanoid - optional
//must have paired overrides of each key/keyValue array being defined
CfieldValue* fieldValue1807 = new CfieldValue();
fieldValue1807->setName("HumanoidRoot_translation_key");
fieldValue1807->setValue("0 0.25 0.5 0.75 1");
ProtoInstance1806->addFieldValue(*fieldValue1807);

CfieldValue* fieldValue1808 = new CfieldValue();
fieldValue1808->setName("HumanoidRoot_translation_keyValue");
fieldValue1808->setValue("0 0 0 0 0 10 0 0 20 0 0 30 0 0 40 0 0 50");
ProtoInstance1806->addFieldValue(*fieldValue1808);

CfieldValue* fieldValue1809 = new CfieldValue();
fieldValue1809->setName("r_ankle_key");
fieldValue1809->setValue("0 0.5 1");
ProtoInstance1806->addFieldValue(*fieldValue1809);

CfieldValue* fieldValue1810 = new CfieldValue();
fieldValue1810->setName("r_ankle_keyValue");
fieldValue1810->setValue("0 1 0 0 0 1 0 0.2 0 1 0 0.4");
ProtoInstance1806->addFieldValue(*fieldValue1810);

group->addChildren(*ProtoInstance1806);

CProtoInstance* ProtoInstance1811 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance1811->setName("HAnimBodyBehaviorChooser");
ProtoInstance1811->setDEF("ChooserTest");
CfieldValue* fieldValue1812 = new CfieldValue();
fieldValue1812->setName("HumanoidArray");
CHAnimHumanoid* HAnimHumanoid1813 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid1813->setName("DiamondManLOA-1");
HAnimHumanoid1813->setDEF("hanim_DiamondManLOA-1");
HAnimHumanoid1813->setVersion("1.0");
fieldValue1812->addChildren(*HAnimHumanoid1813);

ProtoInstance1811->addFieldValue(*fieldValue1812);

CfieldValue* fieldValue1814 = new CfieldValue();
fieldValue1814->setName("whichBody");
fieldValue1814->setValue("0");
ProtoInstance1811->addFieldValue(*fieldValue1814);

CfieldValue* fieldValue1815 = new CfieldValue();
fieldValue1815->setName("hAnimBehaviorNodes");
CProtoInstance* ProtoInstance1816 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance1816->setUSE("BehaviorTest1");
fieldValue1815->addChildren(*ProtoInstance1816);

ProtoInstance1811->addFieldValue(*fieldValue1815);

CfieldValue* fieldValue1817 = new CfieldValue();
fieldValue1817->setName("enabledBehaviorsArray");
fieldValue1817->setValue("true");
ProtoInstance1811->addFieldValue(*fieldValue1817);

group->addChildren(*ProtoInstance1811);

X3D0->setScene(*Scene18);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
