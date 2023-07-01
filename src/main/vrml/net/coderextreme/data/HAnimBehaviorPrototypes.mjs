let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "H-Anim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "title";
meta3.content = "HAnimBehaviorPrototypes.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "description";
meta4.content = "Prototypes for HAnimBehavior node, which collects OrientationInterpolators for aggregate animation of an HAnim humanoid model, and HAnimBodyBehaviorChooser, which selects one body and enables/disables multiple aggregated behaviors.";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "creator";
meta5.content = "Don Brutzman, Jeff Weekley, MV4205 Advanced X3D Authoring class, and Keith Victor";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "created";
meta6.content = "2 May 2006";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "modified";
meta7.content = "4 July 2020";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "reference";
meta8.content = "Web3D2007BlendedBehaviorsChangeableBodies.pdf";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "reference";
meta9.content = "https://www.web3d.org/files/specifications/19774/V1.0";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "reference";
meta10.content = "https://www.web3d.org/x3d/specifications/ISO-IEC-19775-X3DAbstractSpecification_Revision1_to_Part1/Part01/components/hanim.html";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "reference";
meta11.content = "InterchangableActorsViaDynamicRoutingPrototypes.x3d";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "reference";
meta12.content = "ApaydinThesis.pdf";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "subject";
meta13.content = "X3D HAnim humanoid animation behaviors";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "warning";
meta14.content = "under development. should joint translations be exposed? upgrade to HAnim v2.2";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "identifier";
meta15.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypes.x3d";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "generator";
meta16.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[14] = meta16;

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "license";
meta17.content = "../license.html";
head1.meta[15] = meta17;

head = head1;

let WorldInfo19 = browser.currentScene.createNode("WorldInfo");
WorldInfo19.title = "HAnimBehaviorPrototypes.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo19;

let ProtoDeclare20 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
</ProtoDeclare>`);
ProtoDeclare20.name = "HAnimBehavior";
ProtoDeclare20.appinfo = "The HAnimBehavior node models a single humanoid behavior either for an entire body or simply parts of a body. It collects a TimeSensor clock with a single PositionInterpolator and multiple OrientationInterpolator nodes to provide a single humanoid behavior.";
ProtoDeclare20.documentation = "https://www.web3d.org/files/specifications/19774/V1.0/";
let ProtoInterface21 = browser.currentScene.createNode("ProtoInterface");
//supported Level of Articulation (LOA)
//shared common input for single TimeSensor animating all interpolators, since different Behaviors may have different cycleInterval durations
//TODO: add other X3D 3.0 TimeSensor fields (pause etc.)
//Not supported: animated translation of individual joints
//pass in key/keyValue array pairs for single PositionInterpolator
//pass in key/keyValue array pairs and expose named output for each OrientationInterpolator, joint by joint
let field22 = browser.currentScene.createNode("field");
field22.name = "supportedLOA";
field22.accessType = "inputOutput";
field22.appinfo = "Supported Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3.";
field22.type = "SFInt32";
field22.value = "-1";
ProtoInterface21.field = new MFNode();

ProtoInterface21.field[0] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "enabled";
field23.accessType = "inputOutput";
field23.appinfo = "is this behavior enabled?";
field23.type = "SFBool";
field23.value = "true";
ProtoInterface21.field[1] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "cycleInterval";
field24.accessType = "inputOutput";
field24.appinfo = "how long do these interpolators take to execute?";
field24.type = "SFTime";
field24.value = "1";
ProtoInterface21.field[2] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "loop";
field25.accessType = "inputOutput";
field25.appinfo = "whether or not this behavior loops (e.g. walking) or is single shot (e.g. shake hands).";
field25.type = "SFBool";
field25.value = "false";
ProtoInterface21.field[3] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "startTime";
field26.accessType = "inputOutput";
field26.appinfo = "when time now >= startTime isActive becomes true and TimeSensor becomes active";
field26.type = "SFTime";
field26.value = "0";
ProtoInterface21.field[4] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "stopTime";
field27.accessType = "inputOutput";
field27.appinfo = "when stopTime becomes <= time now isActive becomes false and TimeSensor becomes inactive";
field27.type = "SFTime";
field27.value = "0";
ProtoInterface21.field[5] = field27;

let field28 = browser.currentScene.createNode("field");
field28.name = "pauseTime";
field28.accessType = "inputOutput";
field28.appinfo = "when time now >= pauseTime isPaused becomes true and TimeSensor becomes paused";
field28.type = "SFTime";
field28.value = "0";
ProtoInterface21.field[6] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "resumeTime";
field29.accessType = "inputOutput";
field29.appinfo = "when resumeTime becomes <= time now isPaused becomes false and TimeSensor becomes inactive";
field29.type = "SFTime";
field29.value = "0";
ProtoInterface21.field[7] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "cycleTime";
field30.accessType = "outputOnly";
field30.appinfo = "cycleTime sends a time outputOnly at startTime and also at the beginning of each new cycle";
field30.type = "SFTime";
ProtoInterface21.field[8] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "isActive";
field31.accessType = "outputOnly";
field31.appinfo = "isActive true/false events are sent when TimeSensor starts/stops running";
field31.type = "SFBool";
ProtoInterface21.field[9] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "isPaused";
field32.accessType = "outputOnly";
field32.appinfo = "isPaused true/false events are sent when TimeSensor is paused/resumed";
field32.type = "SFBool";
ProtoInterface21.field[10] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "elapsedTime";
field33.accessType = "outputOnly";
field33.appinfo = "current elapsed time since TimeSensor activated/running cumulative in seconds and not counting any paused time";
field33.type = "SFBool";
ProtoInterface21.field[11] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "time";
field34.accessType = "outputOnly";
field34.appinfo = "continuously sends the absolute time (since January 1 1970)";
field34.type = "SFBool";
ProtoInterface21.field[12] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "fraction_changed";
field35.accessType = "outputOnly";
field35.appinfo = "fraction_changed continuously sends value in range [0 1] showing time progress in the current cycle.";
field35.type = "SFFloat";
ProtoInterface21.field[13] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "HumanoidRoot_translation_key";
field36.accessType = "inputOutput";
field36.type = "MFFloat";
//no default value
ProtoInterface21.field[14] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "HumanoidRoot_translation_keyValue";
field37.accessType = "inputOutput";
field37.type = "MFVec3f";
//no default value
ProtoInterface21.field[15] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "HumanoidRoot_translation_changed";
field38.accessType = "outputOnly";
field38.type = "SFVec3f";
ProtoInterface21.field[16] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "HumanoidRoot_rotation_key";
field39.accessType = "inputOutput";
field39.type = "MFFloat";
//no default value
ProtoInterface21.field[17] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "HumanoidRoot_rotation_keyValue";
field40.accessType = "inputOutput";
field40.type = "MFRotation";
//no default value
ProtoInterface21.field[18] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "HumanoidRoot_rotation_changed";
field41.accessType = "outputOnly";
field41.type = "SFRotation";
ProtoInterface21.field[19] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "c1_key";
field42.accessType = "inputOutput";
field42.type = "MFFloat";
//no default value
ProtoInterface21.field[20] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "c1_keyValue";
field43.accessType = "inputOutput";
field43.type = "MFRotation";
//no default value
ProtoInterface21.field[21] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "c1_changed";
field44.accessType = "outputOnly";
field44.type = "SFRotation";
ProtoInterface21.field[22] = field44;

let field45 = browser.currentScene.createNode("field");
field45.name = "c2_key";
field45.accessType = "inputOutput";
field45.type = "MFFloat";
//no default value
ProtoInterface21.field[23] = field45;

let field46 = browser.currentScene.createNode("field");
field46.name = "c2_keyValue";
field46.accessType = "inputOutput";
field46.type = "MFRotation";
//no default value
ProtoInterface21.field[24] = field46;

let field47 = browser.currentScene.createNode("field");
field47.name = "c2_changed";
field47.accessType = "outputOnly";
field47.type = "SFRotation";
ProtoInterface21.field[25] = field47;

let field48 = browser.currentScene.createNode("field");
field48.name = "c3_key";
field48.accessType = "inputOutput";
field48.type = "MFFloat";
//no default value
ProtoInterface21.field[26] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "c3_keyValue";
field49.accessType = "inputOutput";
field49.type = "MFRotation";
//no default value
ProtoInterface21.field[27] = field49;

let field50 = browser.currentScene.createNode("field");
field50.name = "c3_changed";
field50.accessType = "outputOnly";
field50.type = "SFRotation";
ProtoInterface21.field[28] = field50;

let field51 = browser.currentScene.createNode("field");
field51.name = "c4_key";
field51.accessType = "inputOutput";
field51.type = "MFFloat";
//no default value
ProtoInterface21.field[29] = field51;

let field52 = browser.currentScene.createNode("field");
field52.name = "c4_keyValue";
field52.accessType = "inputOutput";
field52.type = "MFRotation";
//no default value
ProtoInterface21.field[30] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "c4_changed";
field53.accessType = "outputOnly";
field53.type = "SFRotation";
ProtoInterface21.field[31] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "c5_key";
field54.accessType = "inputOutput";
field54.type = "MFFloat";
//no default value
ProtoInterface21.field[32] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "c5_keyValue";
field55.accessType = "inputOutput";
field55.type = "MFRotation";
//no default value
ProtoInterface21.field[33] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "c5_changed";
field56.accessType = "outputOnly";
field56.type = "SFRotation";
ProtoInterface21.field[34] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "c6_key";
field57.accessType = "inputOutput";
field57.type = "MFFloat";
//no default value
ProtoInterface21.field[35] = field57;

let field58 = browser.currentScene.createNode("field");
field58.name = "c6_keyValue";
field58.accessType = "inputOutput";
field58.type = "MFRotation";
//no default value
ProtoInterface21.field[36] = field58;

let field59 = browser.currentScene.createNode("field");
field59.name = "c6_changed";
field59.accessType = "outputOnly";
field59.type = "SFRotation";
ProtoInterface21.field[37] = field59;

let field60 = browser.currentScene.createNode("field");
field60.name = "c7_key";
field60.accessType = "inputOutput";
field60.type = "MFFloat";
//no default value
ProtoInterface21.field[38] = field60;

let field61 = browser.currentScene.createNode("field");
field61.name = "c7_keyValue";
field61.accessType = "inputOutput";
field61.type = "MFRotation";
//no default value
ProtoInterface21.field[39] = field61;

let field62 = browser.currentScene.createNode("field");
field62.name = "c7_changed";
field62.accessType = "outputOnly";
field62.type = "SFRotation";
ProtoInterface21.field[40] = field62;

let field63 = browser.currentScene.createNode("field");
field63.name = "jaw_key";
field63.accessType = "inputOutput";
field63.type = "MFFloat";
//no default value
ProtoInterface21.field[41] = field63;

let field64 = browser.currentScene.createNode("field");
field64.name = "jaw_keyValue";
field64.accessType = "inputOutput";
field64.type = "MFRotation";
//no default value
ProtoInterface21.field[42] = field64;

let field65 = browser.currentScene.createNode("field");
field65.name = "jaw_changed";
field65.accessType = "outputOnly";
field65.type = "SFRotation";
ProtoInterface21.field[43] = field65;

let field66 = browser.currentScene.createNode("field");
field66.name = "l1_key";
field66.accessType = "inputOutput";
field66.type = "MFFloat";
//no default value
ProtoInterface21.field[44] = field66;

let field67 = browser.currentScene.createNode("field");
field67.name = "l1_keyValue";
field67.accessType = "inputOutput";
field67.type = "MFRotation";
//no default value
ProtoInterface21.field[45] = field67;

let field68 = browser.currentScene.createNode("field");
field68.name = "l1_changed";
field68.accessType = "outputOnly";
field68.type = "SFRotation";
ProtoInterface21.field[46] = field68;

let field69 = browser.currentScene.createNode("field");
field69.name = "l2_key";
field69.accessType = "inputOutput";
field69.type = "MFFloat";
//no default value
ProtoInterface21.field[47] = field69;

let field70 = browser.currentScene.createNode("field");
field70.name = "l2_keyValue";
field70.accessType = "inputOutput";
field70.type = "MFRotation";
//no default value
ProtoInterface21.field[48] = field70;

let field71 = browser.currentScene.createNode("field");
field71.name = "l2_changed";
field71.accessType = "outputOnly";
field71.type = "SFRotation";
ProtoInterface21.field[49] = field71;

let field72 = browser.currentScene.createNode("field");
field72.name = "l3_key";
field72.accessType = "inputOutput";
field72.type = "MFFloat";
//no default value
ProtoInterface21.field[50] = field72;

let field73 = browser.currentScene.createNode("field");
field73.name = "l3_keyValue";
field73.accessType = "inputOutput";
field73.type = "MFRotation";
//no default value
ProtoInterface21.field[51] = field73;

let field74 = browser.currentScene.createNode("field");
field74.name = "l3_changed";
field74.accessType = "outputOnly";
field74.type = "SFRotation";
ProtoInterface21.field[52] = field74;

let field75 = browser.currentScene.createNode("field");
field75.name = "l4_key";
field75.accessType = "inputOutput";
field75.type = "MFFloat";
//no default value
ProtoInterface21.field[53] = field75;

let field76 = browser.currentScene.createNode("field");
field76.name = "l4_keyValue";
field76.accessType = "inputOutput";
field76.type = "MFRotation";
//no default value
ProtoInterface21.field[54] = field76;

let field77 = browser.currentScene.createNode("field");
field77.name = "l4_changed";
field77.accessType = "outputOnly";
field77.type = "SFRotation";
ProtoInterface21.field[55] = field77;

let field78 = browser.currentScene.createNode("field");
field78.name = "l5_key";
field78.accessType = "inputOutput";
field78.type = "MFFloat";
//no default value
ProtoInterface21.field[56] = field78;

let field79 = browser.currentScene.createNode("field");
field79.name = "l5_keyValue";
field79.accessType = "inputOutput";
field79.type = "MFRotation";
//no default value
ProtoInterface21.field[57] = field79;

let field80 = browser.currentScene.createNode("field");
field80.name = "l5_changed";
field80.accessType = "outputOnly";
field80.type = "SFRotation";
ProtoInterface21.field[58] = field80;

let field81 = browser.currentScene.createNode("field");
field81.name = "l_acromioclavicular_key";
field81.accessType = "inputOutput";
field81.type = "MFFloat";
//no default value
ProtoInterface21.field[59] = field81;

let field82 = browser.currentScene.createNode("field");
field82.name = "l_acromioclavicular_keyValue";
field82.accessType = "inputOutput";
field82.type = "MFRotation";
//no default value
ProtoInterface21.field[60] = field82;

let field83 = browser.currentScene.createNode("field");
field83.name = "l_acromioclavicular_changed";
field83.accessType = "outputOnly";
field83.type = "SFRotation";
ProtoInterface21.field[61] = field83;

let field84 = browser.currentScene.createNode("field");
field84.name = "l_ankle_key";
field84.accessType = "inputOutput";
field84.type = "MFFloat";
//no default value
ProtoInterface21.field[62] = field84;

let field85 = browser.currentScene.createNode("field");
field85.name = "l_ankle_keyValue";
field85.accessType = "inputOutput";
field85.type = "MFRotation";
//no default value
ProtoInterface21.field[63] = field85;

let field86 = browser.currentScene.createNode("field");
field86.name = "l_ankle_changed";
field86.accessType = "outputOnly";
field86.type = "SFRotation";
ProtoInterface21.field[64] = field86;

let field87 = browser.currentScene.createNode("field");
field87.name = "l_calf_key";
field87.accessType = "inputOutput";
field87.type = "MFFloat";
//no default value
ProtoInterface21.field[65] = field87;

let field88 = browser.currentScene.createNode("field");
field88.name = "l_calf_keyValue";
field88.accessType = "inputOutput";
field88.type = "MFRotation";
//no default value
ProtoInterface21.field[66] = field88;

let field89 = browser.currentScene.createNode("field");
field89.name = "l_calf_changed";
field89.accessType = "outputOnly";
field89.type = "SFRotation";
ProtoInterface21.field[67] = field89;

let field90 = browser.currentScene.createNode("field");
field90.name = "l_clavicle_key";
field90.accessType = "inputOutput";
field90.type = "MFFloat";
//no default value
ProtoInterface21.field[68] = field90;

let field91 = browser.currentScene.createNode("field");
field91.name = "l_clavicle_keyValue";
field91.accessType = "inputOutput";
field91.type = "MFRotation";
//no default value
ProtoInterface21.field[69] = field91;

let field92 = browser.currentScene.createNode("field");
field92.name = "l_clavicle_changed";
field92.accessType = "outputOnly";
field92.type = "SFRotation";
ProtoInterface21.field[70] = field92;

let field93 = browser.currentScene.createNode("field");
field93.name = "l_elbow_key";
field93.accessType = "inputOutput";
field93.type = "MFFloat";
//no default value
ProtoInterface21.field[71] = field93;

let field94 = browser.currentScene.createNode("field");
field94.name = "l_elbow_keyValue";
field94.accessType = "inputOutput";
field94.type = "MFRotation";
//no default value
ProtoInterface21.field[72] = field94;

let field95 = browser.currentScene.createNode("field");
field95.name = "l_elbow_changed";
field95.accessType = "outputOnly";
field95.type = "SFRotation";
ProtoInterface21.field[73] = field95;

let field96 = browser.currentScene.createNode("field");
field96.name = "l_eyeball_key";
field96.accessType = "inputOutput";
field96.type = "MFFloat";
//no default value
ProtoInterface21.field[74] = field96;

let field97 = browser.currentScene.createNode("field");
field97.name = "l_eyeball_keyValue";
field97.accessType = "inputOutput";
field97.type = "MFRotation";
//no default value
ProtoInterface21.field[75] = field97;

let field98 = browser.currentScene.createNode("field");
field98.name = "l_eyeball_changed";
field98.accessType = "outputOnly";
field98.type = "SFRotation";
ProtoInterface21.field[76] = field98;

let field99 = browser.currentScene.createNode("field");
field99.name = "l_eyeball_joint_key";
field99.accessType = "inputOutput";
field99.type = "MFFloat";
//no default value
ProtoInterface21.field[77] = field99;

let field100 = browser.currentScene.createNode("field");
field100.name = "l_eyeball_joint_keyValue";
field100.accessType = "inputOutput";
field100.type = "MFRotation";
//no default value
ProtoInterface21.field[78] = field100;

let field101 = browser.currentScene.createNode("field");
field101.name = "l_eyeball_joint_changed";
field101.accessType = "outputOnly";
field101.type = "SFRotation";
ProtoInterface21.field[79] = field101;

let field102 = browser.currentScene.createNode("field");
field102.name = "l_eyebrow_key";
field102.accessType = "inputOutput";
field102.type = "MFFloat";
//no default value
ProtoInterface21.field[80] = field102;

let field103 = browser.currentScene.createNode("field");
field103.name = "l_eyebrow_keyValue";
field103.accessType = "inputOutput";
field103.type = "MFRotation";
//no default value
ProtoInterface21.field[81] = field103;

let field104 = browser.currentScene.createNode("field");
field104.name = "l_eyebrow_changed";
field104.accessType = "outputOnly";
field104.type = "SFRotation";
ProtoInterface21.field[82] = field104;

let field105 = browser.currentScene.createNode("field");
field105.name = "l_eyebrow_joint_key";
field105.accessType = "inputOutput";
field105.type = "MFFloat";
//no default value
ProtoInterface21.field[83] = field105;

let field106 = browser.currentScene.createNode("field");
field106.name = "l_eyebrow_joint_keyValue";
field106.accessType = "inputOutput";
field106.type = "MFRotation";
//no default value
ProtoInterface21.field[84] = field106;

let field107 = browser.currentScene.createNode("field");
field107.name = "l_eyebrow_joint_changed";
field107.accessType = "outputOnly";
field107.type = "SFRotation";
ProtoInterface21.field[85] = field107;

let field108 = browser.currentScene.createNode("field");
field108.name = "l_eyelid_key";
field108.accessType = "inputOutput";
field108.type = "MFFloat";
//no default value
ProtoInterface21.field[86] = field108;

let field109 = browser.currentScene.createNode("field");
field109.name = "l_eyelid_keyValue";
field109.accessType = "inputOutput";
field109.type = "MFRotation";
//no default value
ProtoInterface21.field[87] = field109;

let field110 = browser.currentScene.createNode("field");
field110.name = "l_eyelid_changed";
field110.accessType = "outputOnly";
field110.type = "SFRotation";
ProtoInterface21.field[88] = field110;

let field111 = browser.currentScene.createNode("field");
field111.name = "l_eyelid_joint_key";
field111.accessType = "inputOutput";
field111.type = "MFFloat";
//no default value
ProtoInterface21.field[89] = field111;

let field112 = browser.currentScene.createNode("field");
field112.name = "l_eyelid_joint_keyValue";
field112.accessType = "inputOutput";
field112.type = "MFRotation";
//no default value
ProtoInterface21.field[90] = field112;

let field113 = browser.currentScene.createNode("field");
field113.name = "l_eyelid_joint_changed";
field113.accessType = "outputOnly";
field113.type = "SFRotation";
ProtoInterface21.field[91] = field113;

let field114 = browser.currentScene.createNode("field");
field114.name = "l_forearm_key";
field114.accessType = "inputOutput";
field114.type = "MFFloat";
//no default value
ProtoInterface21.field[92] = field114;

let field115 = browser.currentScene.createNode("field");
field115.name = "l_forearm_keyValue";
field115.accessType = "inputOutput";
field115.type = "MFRotation";
//no default value
ProtoInterface21.field[93] = field115;

let field116 = browser.currentScene.createNode("field");
field116.name = "l_forearm_changed";
field116.accessType = "outputOnly";
field116.type = "SFRotation";
ProtoInterface21.field[94] = field116;

let field117 = browser.currentScene.createNode("field");
field117.name = "l_forefoot_key";
field117.accessType = "inputOutput";
field117.type = "MFFloat";
//no default value
ProtoInterface21.field[95] = field117;

let field118 = browser.currentScene.createNode("field");
field118.name = "l_forefoot_keyValue";
field118.accessType = "inputOutput";
field118.type = "MFRotation";
//no default value
ProtoInterface21.field[96] = field118;

let field119 = browser.currentScene.createNode("field");
field119.name = "l_forefoot_changed";
field119.accessType = "outputOnly";
field119.type = "SFRotation";
ProtoInterface21.field[97] = field119;

let field120 = browser.currentScene.createNode("field");
field120.name = "l_hand_key";
field120.accessType = "inputOutput";
field120.type = "MFFloat";
//no default value
ProtoInterface21.field[98] = field120;

let field121 = browser.currentScene.createNode("field");
field121.name = "l_hand_keyValue";
field121.accessType = "inputOutput";
field121.type = "MFRotation";
//no default value
ProtoInterface21.field[99] = field121;

let field122 = browser.currentScene.createNode("field");
field122.name = "l_hand_changed";
field122.accessType = "outputOnly";
field122.type = "SFRotation";
ProtoInterface21.field[100] = field122;

let field123 = browser.currentScene.createNode("field");
field123.name = "l_hindfoot_key";
field123.accessType = "inputOutput";
field123.type = "MFFloat";
//no default value
ProtoInterface21.field[101] = field123;

let field124 = browser.currentScene.createNode("field");
field124.name = "l_hindfoot_keyValue";
field124.accessType = "inputOutput";
field124.type = "MFRotation";
//no default value
ProtoInterface21.field[102] = field124;

let field125 = browser.currentScene.createNode("field");
field125.name = "l_hindfoot_changed";
field125.accessType = "outputOnly";
field125.type = "SFRotation";
ProtoInterface21.field[103] = field125;

let field126 = browser.currentScene.createNode("field");
field126.name = "l_hip_key";
field126.accessType = "inputOutput";
field126.type = "MFFloat";
//no default value
ProtoInterface21.field[104] = field126;

let field127 = browser.currentScene.createNode("field");
field127.name = "l_hip_keyValue";
field127.accessType = "inputOutput";
field127.type = "MFRotation";
//no default value
ProtoInterface21.field[105] = field127;

let field128 = browser.currentScene.createNode("field");
field128.name = "l_hip_changed";
field128.accessType = "outputOnly";
field128.type = "SFRotation";
ProtoInterface21.field[106] = field128;

let field129 = browser.currentScene.createNode("field");
field129.name = "l_index0_key";
field129.accessType = "inputOutput";
field129.type = "MFFloat";
//no default value
ProtoInterface21.field[107] = field129;

let field130 = browser.currentScene.createNode("field");
field130.name = "l_index0_keyValue";
field130.accessType = "inputOutput";
field130.type = "MFRotation";
//no default value
ProtoInterface21.field[108] = field130;

let field131 = browser.currentScene.createNode("field");
field131.name = "l_index0_changed";
field131.accessType = "outputOnly";
field131.type = "SFRotation";
ProtoInterface21.field[109] = field131;

let field132 = browser.currentScene.createNode("field");
field132.name = "l_index1_key";
field132.accessType = "inputOutput";
field132.type = "MFFloat";
//no default value
ProtoInterface21.field[110] = field132;

let field133 = browser.currentScene.createNode("field");
field133.name = "l_index1_keyValue";
field133.accessType = "inputOutput";
field133.type = "MFRotation";
//no default value
ProtoInterface21.field[111] = field133;

let field134 = browser.currentScene.createNode("field");
field134.name = "l_index1_changed";
field134.accessType = "outputOnly";
field134.type = "SFRotation";
ProtoInterface21.field[112] = field134;

let field135 = browser.currentScene.createNode("field");
field135.name = "l_index2_key";
field135.accessType = "inputOutput";
field135.type = "MFFloat";
//no default value
ProtoInterface21.field[113] = field135;

let field136 = browser.currentScene.createNode("field");
field136.name = "l_index2_keyValue";
field136.accessType = "inputOutput";
field136.type = "MFRotation";
//no default value
ProtoInterface21.field[114] = field136;

let field137 = browser.currentScene.createNode("field");
field137.name = "l_index2_changed";
field137.accessType = "outputOnly";
field137.type = "SFRotation";
ProtoInterface21.field[115] = field137;

let field138 = browser.currentScene.createNode("field");
field138.name = "l_index3_key";
field138.accessType = "inputOutput";
field138.type = "MFFloat";
//no default value
ProtoInterface21.field[116] = field138;

let field139 = browser.currentScene.createNode("field");
field139.name = "l_index3_keyValue";
field139.accessType = "inputOutput";
field139.type = "MFRotation";
//no default value
ProtoInterface21.field[117] = field139;

let field140 = browser.currentScene.createNode("field");
field140.name = "l_index3_changed";
field140.accessType = "outputOnly";
field140.type = "SFRotation";
ProtoInterface21.field[118] = field140;

let field141 = browser.currentScene.createNode("field");
field141.name = "l_index_distal_key";
field141.accessType = "inputOutput";
field141.type = "MFFloat";
//no default value
ProtoInterface21.field[119] = field141;

let field142 = browser.currentScene.createNode("field");
field142.name = "l_index_distal_keyValue";
field142.accessType = "inputOutput";
field142.type = "MFRotation";
//no default value
ProtoInterface21.field[120] = field142;

let field143 = browser.currentScene.createNode("field");
field143.name = "l_index_distal_changed";
field143.accessType = "outputOnly";
field143.type = "SFRotation";
ProtoInterface21.field[121] = field143;

let field144 = browser.currentScene.createNode("field");
field144.name = "l_index_metacarpal_key";
field144.accessType = "inputOutput";
field144.type = "MFFloat";
//no default value
ProtoInterface21.field[122] = field144;

let field145 = browser.currentScene.createNode("field");
field145.name = "l_index_metacarpal_keyValue";
field145.accessType = "inputOutput";
field145.type = "MFRotation";
//no default value
ProtoInterface21.field[123] = field145;

let field146 = browser.currentScene.createNode("field");
field146.name = "l_index_metacarpal_changed";
field146.accessType = "outputOnly";
field146.type = "SFRotation";
ProtoInterface21.field[124] = field146;

let field147 = browser.currentScene.createNode("field");
field147.name = "l_index_middle_key";
field147.accessType = "inputOutput";
field147.type = "MFFloat";
//no default value
ProtoInterface21.field[125] = field147;

let field148 = browser.currentScene.createNode("field");
field148.name = "l_index_middle_keyValue";
field148.accessType = "inputOutput";
field148.type = "MFRotation";
//no default value
ProtoInterface21.field[126] = field148;

let field149 = browser.currentScene.createNode("field");
field149.name = "l_index_middle_changed";
field149.accessType = "outputOnly";
field149.type = "SFRotation";
ProtoInterface21.field[127] = field149;

let field150 = browser.currentScene.createNode("field");
field150.name = "l_index_proximal_key";
field150.accessType = "inputOutput";
field150.type = "MFFloat";
//no default value
ProtoInterface21.field[128] = field150;

let field151 = browser.currentScene.createNode("field");
field151.name = "l_index_proximal_keyValue";
field151.accessType = "inputOutput";
field151.type = "MFRotation";
//no default value
ProtoInterface21.field[129] = field151;

let field152 = browser.currentScene.createNode("field");
field152.name = "l_index_proximal_changed";
field152.accessType = "outputOnly";
field152.type = "SFRotation";
ProtoInterface21.field[130] = field152;

let field153 = browser.currentScene.createNode("field");
field153.name = "l_knee_key";
field153.accessType = "inputOutput";
field153.type = "MFFloat";
//no default value
ProtoInterface21.field[131] = field153;

let field154 = browser.currentScene.createNode("field");
field154.name = "l_knee_keyValue";
field154.accessType = "inputOutput";
field154.type = "MFRotation";
//no default value
ProtoInterface21.field[132] = field154;

let field155 = browser.currentScene.createNode("field");
field155.name = "l_knee_changed";
field155.accessType = "outputOnly";
field155.type = "SFRotation";
ProtoInterface21.field[133] = field155;

let field156 = browser.currentScene.createNode("field");
field156.name = "l_metatarsal_key";
field156.accessType = "inputOutput";
field156.type = "MFFloat";
//no default value
ProtoInterface21.field[134] = field156;

let field157 = browser.currentScene.createNode("field");
field157.name = "l_metatarsal_keyValue";
field157.accessType = "inputOutput";
field157.type = "MFRotation";
//no default value
ProtoInterface21.field[135] = field157;

let field158 = browser.currentScene.createNode("field");
field158.name = "l_metatarsal_changed";
field158.accessType = "outputOnly";
field158.type = "SFRotation";
ProtoInterface21.field[136] = field158;

let field159 = browser.currentScene.createNode("field");
field159.name = "l_middistal_key";
field159.accessType = "inputOutput";
field159.type = "MFFloat";
//no default value
ProtoInterface21.field[137] = field159;

let field160 = browser.currentScene.createNode("field");
field160.name = "l_middistal_keyValue";
field160.accessType = "inputOutput";
field160.type = "MFRotation";
//no default value
ProtoInterface21.field[138] = field160;

let field161 = browser.currentScene.createNode("field");
field161.name = "l_middistal_changed";
field161.accessType = "outputOnly";
field161.type = "SFRotation";
ProtoInterface21.field[139] = field161;

let field162 = browser.currentScene.createNode("field");
field162.name = "l_middle0_key";
field162.accessType = "inputOutput";
field162.type = "MFFloat";
//no default value
ProtoInterface21.field[140] = field162;

let field163 = browser.currentScene.createNode("field");
field163.name = "l_middle0_keyValue";
field163.accessType = "inputOutput";
field163.type = "MFRotation";
//no default value
ProtoInterface21.field[141] = field163;

let field164 = browser.currentScene.createNode("field");
field164.name = "l_middle0_changed";
field164.accessType = "outputOnly";
field164.type = "SFRotation";
ProtoInterface21.field[142] = field164;

let field165 = browser.currentScene.createNode("field");
field165.name = "l_middle1_key";
field165.accessType = "inputOutput";
field165.type = "MFFloat";
//no default value
ProtoInterface21.field[143] = field165;

let field166 = browser.currentScene.createNode("field");
field166.name = "l_middle1_keyValue";
field166.accessType = "inputOutput";
field166.type = "MFRotation";
//no default value
ProtoInterface21.field[144] = field166;

let field167 = browser.currentScene.createNode("field");
field167.name = "l_middle1_changed";
field167.accessType = "outputOnly";
field167.type = "SFRotation";
ProtoInterface21.field[145] = field167;

let field168 = browser.currentScene.createNode("field");
field168.name = "l_middle2_key";
field168.accessType = "inputOutput";
field168.type = "MFFloat";
//no default value
ProtoInterface21.field[146] = field168;

let field169 = browser.currentScene.createNode("field");
field169.name = "l_middle2_keyValue";
field169.accessType = "inputOutput";
field169.type = "MFRotation";
//no default value
ProtoInterface21.field[147] = field169;

let field170 = browser.currentScene.createNode("field");
field170.name = "l_middle2_changed";
field170.accessType = "outputOnly";
field170.type = "SFRotation";
ProtoInterface21.field[148] = field170;

let field171 = browser.currentScene.createNode("field");
field171.name = "l_middle3_key";
field171.accessType = "inputOutput";
field171.type = "MFFloat";
//no default value
ProtoInterface21.field[149] = field171;

let field172 = browser.currentScene.createNode("field");
field172.name = "l_middle3_keyValue";
field172.accessType = "inputOutput";
field172.type = "MFRotation";
//no default value
ProtoInterface21.field[150] = field172;

let field173 = browser.currentScene.createNode("field");
field173.name = "l_middle3_changed";
field173.accessType = "outputOnly";
field173.type = "SFRotation";
ProtoInterface21.field[151] = field173;

let field174 = browser.currentScene.createNode("field");
field174.name = "l_middle_distal_key";
field174.accessType = "inputOutput";
field174.type = "MFFloat";
//no default value
ProtoInterface21.field[152] = field174;

let field175 = browser.currentScene.createNode("field");
field175.name = "l_middle_distal_keyValue";
field175.accessType = "inputOutput";
field175.type = "MFRotation";
//no default value
ProtoInterface21.field[153] = field175;

let field176 = browser.currentScene.createNode("field");
field176.name = "l_middle_distal_changed";
field176.accessType = "outputOnly";
field176.type = "SFRotation";
ProtoInterface21.field[154] = field176;

let field177 = browser.currentScene.createNode("field");
field177.name = "l_middle_metacarpal_key";
field177.accessType = "inputOutput";
field177.type = "MFFloat";
//no default value
ProtoInterface21.field[155] = field177;

let field178 = browser.currentScene.createNode("field");
field178.name = "l_middle_metacarpal_keyValue";
field178.accessType = "inputOutput";
field178.type = "MFRotation";
//no default value
ProtoInterface21.field[156] = field178;

let field179 = browser.currentScene.createNode("field");
field179.name = "l_middle_metacarpal_changed";
field179.accessType = "outputOnly";
field179.type = "SFRotation";
ProtoInterface21.field[157] = field179;

let field180 = browser.currentScene.createNode("field");
field180.name = "l_middle_middle_key";
field180.accessType = "inputOutput";
field180.type = "MFFloat";
//no default value
ProtoInterface21.field[158] = field180;

let field181 = browser.currentScene.createNode("field");
field181.name = "l_middle_middle_keyValue";
field181.accessType = "inputOutput";
field181.type = "MFRotation";
//no default value
ProtoInterface21.field[159] = field181;

let field182 = browser.currentScene.createNode("field");
field182.name = "l_middle_middle_changed";
field182.accessType = "outputOnly";
field182.type = "SFRotation";
ProtoInterface21.field[160] = field182;

let field183 = browser.currentScene.createNode("field");
field183.name = "l_middle_proximal_key";
field183.accessType = "inputOutput";
field183.type = "MFFloat";
//no default value
ProtoInterface21.field[161] = field183;

let field184 = browser.currentScene.createNode("field");
field184.name = "l_middle_proximal_keyValue";
field184.accessType = "inputOutput";
field184.type = "MFRotation";
//no default value
ProtoInterface21.field[162] = field184;

let field185 = browser.currentScene.createNode("field");
field185.name = "l_middle_proximal_changed";
field185.accessType = "outputOnly";
field185.type = "SFRotation";
ProtoInterface21.field[163] = field185;

let field186 = browser.currentScene.createNode("field");
field186.name = "l_midproximal_key";
field186.accessType = "inputOutput";
field186.type = "MFFloat";
//no default value
ProtoInterface21.field[164] = field186;

let field187 = browser.currentScene.createNode("field");
field187.name = "l_midproximal_keyValue";
field187.accessType = "inputOutput";
field187.type = "MFRotation";
//no default value
ProtoInterface21.field[165] = field187;

let field188 = browser.currentScene.createNode("field");
field188.name = "l_midproximal_changed";
field188.accessType = "outputOnly";
field188.type = "SFRotation";
ProtoInterface21.field[166] = field188;

let field189 = browser.currentScene.createNode("field");
field189.name = "l_midtarsal_key";
field189.accessType = "inputOutput";
field189.type = "MFFloat";
//no default value
ProtoInterface21.field[167] = field189;

let field190 = browser.currentScene.createNode("field");
field190.name = "l_midtarsal_keyValue";
field190.accessType = "inputOutput";
field190.type = "MFRotation";
//no default value
ProtoInterface21.field[168] = field190;

let field191 = browser.currentScene.createNode("field");
field191.name = "l_midtarsal_changed";
field191.accessType = "outputOnly";
field191.type = "SFRotation";
ProtoInterface21.field[169] = field191;

let field192 = browser.currentScene.createNode("field");
field192.name = "l_pinky0_key";
field192.accessType = "inputOutput";
field192.type = "MFFloat";
//no default value
ProtoInterface21.field[170] = field192;

let field193 = browser.currentScene.createNode("field");
field193.name = "l_pinky0_keyValue";
field193.accessType = "inputOutput";
field193.type = "MFRotation";
//no default value
ProtoInterface21.field[171] = field193;

let field194 = browser.currentScene.createNode("field");
field194.name = "l_pinky0_changed";
field194.accessType = "outputOnly";
field194.type = "SFRotation";
ProtoInterface21.field[172] = field194;

let field195 = browser.currentScene.createNode("field");
field195.name = "l_pinky1_key";
field195.accessType = "inputOutput";
field195.type = "MFFloat";
//no default value
ProtoInterface21.field[173] = field195;

let field196 = browser.currentScene.createNode("field");
field196.name = "l_pinky1_keyValue";
field196.accessType = "inputOutput";
field196.type = "MFRotation";
//no default value
ProtoInterface21.field[174] = field196;

let field197 = browser.currentScene.createNode("field");
field197.name = "l_pinky1_changed";
field197.accessType = "outputOnly";
field197.type = "SFRotation";
ProtoInterface21.field[175] = field197;

let field198 = browser.currentScene.createNode("field");
field198.name = "l_pinky2_key";
field198.accessType = "inputOutput";
field198.type = "MFFloat";
//no default value
ProtoInterface21.field[176] = field198;

let field199 = browser.currentScene.createNode("field");
field199.name = "l_pinky2_keyValue";
field199.accessType = "inputOutput";
field199.type = "MFRotation";
//no default value
ProtoInterface21.field[177] = field199;

let field200 = browser.currentScene.createNode("field");
field200.name = "l_pinky2_changed";
field200.accessType = "outputOnly";
field200.type = "SFRotation";
ProtoInterface21.field[178] = field200;

let field201 = browser.currentScene.createNode("field");
field201.name = "l_pinky3_key";
field201.accessType = "inputOutput";
field201.type = "MFFloat";
//no default value
ProtoInterface21.field[179] = field201;

let field202 = browser.currentScene.createNode("field");
field202.name = "l_pinky3_keyValue";
field202.accessType = "inputOutput";
field202.type = "MFRotation";
//no default value
ProtoInterface21.field[180] = field202;

let field203 = browser.currentScene.createNode("field");
field203.name = "l_pinky3_changed";
field203.accessType = "outputOnly";
field203.type = "SFRotation";
ProtoInterface21.field[181] = field203;

let field204 = browser.currentScene.createNode("field");
field204.name = "l_pinky_distal_key";
field204.accessType = "inputOutput";
field204.type = "MFFloat";
//no default value
ProtoInterface21.field[182] = field204;

let field205 = browser.currentScene.createNode("field");
field205.name = "l_pinky_distal_keyValue";
field205.accessType = "inputOutput";
field205.type = "MFRotation";
//no default value
ProtoInterface21.field[183] = field205;

let field206 = browser.currentScene.createNode("field");
field206.name = "l_pinky_distal_changed";
field206.accessType = "outputOnly";
field206.type = "SFRotation";
ProtoInterface21.field[184] = field206;

let field207 = browser.currentScene.createNode("field");
field207.name = "l_pinky_metacarpal_key";
field207.accessType = "inputOutput";
field207.type = "MFFloat";
//no default value
ProtoInterface21.field[185] = field207;

let field208 = browser.currentScene.createNode("field");
field208.name = "l_pinky_metacarpal_keyValue";
field208.accessType = "inputOutput";
field208.type = "MFRotation";
//no default value
ProtoInterface21.field[186] = field208;

let field209 = browser.currentScene.createNode("field");
field209.name = "l_pinky_metacarpal_changed";
field209.accessType = "outputOnly";
field209.type = "SFRotation";
ProtoInterface21.field[187] = field209;

let field210 = browser.currentScene.createNode("field");
field210.name = "l_pinky_middle_key";
field210.accessType = "inputOutput";
field210.type = "MFFloat";
//no default value
ProtoInterface21.field[188] = field210;

let field211 = browser.currentScene.createNode("field");
field211.name = "l_pinky_middle_keyValue";
field211.accessType = "inputOutput";
field211.type = "MFRotation";
//no default value
ProtoInterface21.field[189] = field211;

let field212 = browser.currentScene.createNode("field");
field212.name = "l_pinky_middle_changed";
field212.accessType = "outputOnly";
field212.type = "SFRotation";
ProtoInterface21.field[190] = field212;

let field213 = browser.currentScene.createNode("field");
field213.name = "l_pinky_proximal_key";
field213.accessType = "inputOutput";
field213.type = "MFFloat";
//no default value
ProtoInterface21.field[191] = field213;

let field214 = browser.currentScene.createNode("field");
field214.name = "l_pinky_proximal_keyValue";
field214.accessType = "inputOutput";
field214.type = "MFRotation";
//no default value
ProtoInterface21.field[192] = field214;

let field215 = browser.currentScene.createNode("field");
field215.name = "l_pinky_proximal_changed";
field215.accessType = "outputOnly";
field215.type = "SFRotation";
ProtoInterface21.field[193] = field215;

let field216 = browser.currentScene.createNode("field");
field216.name = "l_ring0_key";
field216.accessType = "inputOutput";
field216.type = "MFFloat";
//no default value
ProtoInterface21.field[194] = field216;

let field217 = browser.currentScene.createNode("field");
field217.name = "l_ring0_keyValue";
field217.accessType = "inputOutput";
field217.type = "MFRotation";
//no default value
ProtoInterface21.field[195] = field217;

let field218 = browser.currentScene.createNode("field");
field218.name = "l_ring0_changed";
field218.accessType = "outputOnly";
field218.type = "SFRotation";
ProtoInterface21.field[196] = field218;

let field219 = browser.currentScene.createNode("field");
field219.name = "l_ring1_key";
field219.accessType = "inputOutput";
field219.type = "MFFloat";
//no default value
ProtoInterface21.field[197] = field219;

let field220 = browser.currentScene.createNode("field");
field220.name = "l_ring1_keyValue";
field220.accessType = "inputOutput";
field220.type = "MFRotation";
//no default value
ProtoInterface21.field[198] = field220;

let field221 = browser.currentScene.createNode("field");
field221.name = "l_ring1_changed";
field221.accessType = "outputOnly";
field221.type = "SFRotation";
ProtoInterface21.field[199] = field221;

let field222 = browser.currentScene.createNode("field");
field222.name = "l_ring2_key";
field222.accessType = "inputOutput";
field222.type = "MFFloat";
//no default value
ProtoInterface21.field[200] = field222;

let field223 = browser.currentScene.createNode("field");
field223.name = "l_ring2_keyValue";
field223.accessType = "inputOutput";
field223.type = "MFRotation";
//no default value
ProtoInterface21.field[201] = field223;

let field224 = browser.currentScene.createNode("field");
field224.name = "l_ring2_changed";
field224.accessType = "outputOnly";
field224.type = "SFRotation";
ProtoInterface21.field[202] = field224;

let field225 = browser.currentScene.createNode("field");
field225.name = "l_ring3_key";
field225.accessType = "inputOutput";
field225.type = "MFFloat";
//no default value
ProtoInterface21.field[203] = field225;

let field226 = browser.currentScene.createNode("field");
field226.name = "l_ring3_keyValue";
field226.accessType = "inputOutput";
field226.type = "MFRotation";
//no default value
ProtoInterface21.field[204] = field226;

let field227 = browser.currentScene.createNode("field");
field227.name = "l_ring3_changed";
field227.accessType = "outputOnly";
field227.type = "SFRotation";
ProtoInterface21.field[205] = field227;

let field228 = browser.currentScene.createNode("field");
field228.name = "l_ring_distal_key";
field228.accessType = "inputOutput";
field228.type = "MFFloat";
//no default value
ProtoInterface21.field[206] = field228;

let field229 = browser.currentScene.createNode("field");
field229.name = "l_ring_distal_keyValue";
field229.accessType = "inputOutput";
field229.type = "MFRotation";
//no default value
ProtoInterface21.field[207] = field229;

let field230 = browser.currentScene.createNode("field");
field230.name = "l_ring_distal_changed";
field230.accessType = "outputOnly";
field230.type = "SFRotation";
ProtoInterface21.field[208] = field230;

let field231 = browser.currentScene.createNode("field");
field231.name = "l_ring_metacarpal_key";
field231.accessType = "inputOutput";
field231.type = "MFFloat";
//no default value
ProtoInterface21.field[209] = field231;

let field232 = browser.currentScene.createNode("field");
field232.name = "l_ring_metacarpal_keyValue";
field232.accessType = "inputOutput";
field232.type = "MFRotation";
//no default value
ProtoInterface21.field[210] = field232;

let field233 = browser.currentScene.createNode("field");
field233.name = "l_ring_metacarpal_changed";
field233.accessType = "outputOnly";
field233.type = "SFRotation";
ProtoInterface21.field[211] = field233;

let field234 = browser.currentScene.createNode("field");
field234.name = "l_ring_middle_key";
field234.accessType = "inputOutput";
field234.type = "MFFloat";
//no default value
ProtoInterface21.field[212] = field234;

let field235 = browser.currentScene.createNode("field");
field235.name = "l_ring_middle_keyValue";
field235.accessType = "inputOutput";
field235.type = "MFRotation";
//no default value
ProtoInterface21.field[213] = field235;

let field236 = browser.currentScene.createNode("field");
field236.name = "l_ring_middle_changed";
field236.accessType = "outputOnly";
field236.type = "SFRotation";
ProtoInterface21.field[214] = field236;

let field237 = browser.currentScene.createNode("field");
field237.name = "l_ring_proximal_key";
field237.accessType = "inputOutput";
field237.type = "MFFloat";
//no default value
ProtoInterface21.field[215] = field237;

let field238 = browser.currentScene.createNode("field");
field238.name = "l_ring_proximal_keyValue";
field238.accessType = "inputOutput";
field238.type = "MFRotation";
//no default value
ProtoInterface21.field[216] = field238;

let field239 = browser.currentScene.createNode("field");
field239.name = "l_ring_proximal_changed";
field239.accessType = "outputOnly";
field239.type = "SFRotation";
ProtoInterface21.field[217] = field239;

let field240 = browser.currentScene.createNode("field");
field240.name = "l_scapula_key";
field240.accessType = "inputOutput";
field240.type = "MFFloat";
//no default value
ProtoInterface21.field[218] = field240;

let field241 = browser.currentScene.createNode("field");
field241.name = "l_scapula_keyValue";
field241.accessType = "inputOutput";
field241.type = "MFRotation";
//no default value
ProtoInterface21.field[219] = field241;

let field242 = browser.currentScene.createNode("field");
field242.name = "l_scapula_changed";
field242.accessType = "outputOnly";
field242.type = "SFRotation";
ProtoInterface21.field[220] = field242;

let field243 = browser.currentScene.createNode("field");
field243.name = "l_shoulder_key";
field243.accessType = "inputOutput";
field243.type = "MFFloat";
//no default value
ProtoInterface21.field[221] = field243;

let field244 = browser.currentScene.createNode("field");
field244.name = "l_shoulder_keyValue";
field244.accessType = "inputOutput";
field244.type = "MFRotation";
//no default value
ProtoInterface21.field[222] = field244;

let field245 = browser.currentScene.createNode("field");
field245.name = "l_shoulder_changed";
field245.accessType = "outputOnly";
field245.type = "SFRotation";
ProtoInterface21.field[223] = field245;

let field246 = browser.currentScene.createNode("field");
field246.name = "l_sternoclavicular_key";
field246.accessType = "inputOutput";
field246.type = "MFFloat";
//no default value
ProtoInterface21.field[224] = field246;

let field247 = browser.currentScene.createNode("field");
field247.name = "l_sternoclavicular_keyValue";
field247.accessType = "inputOutput";
field247.type = "MFRotation";
//no default value
ProtoInterface21.field[225] = field247;

let field248 = browser.currentScene.createNode("field");
field248.name = "l_sternoclavicular_changed";
field248.accessType = "outputOnly";
field248.type = "SFRotation";
ProtoInterface21.field[226] = field248;

let field249 = browser.currentScene.createNode("field");
field249.name = "l_subtalar_key";
field249.accessType = "inputOutput";
field249.type = "MFFloat";
//no default value
ProtoInterface21.field[227] = field249;

let field250 = browser.currentScene.createNode("field");
field250.name = "l_subtalar_keyValue";
field250.accessType = "inputOutput";
field250.type = "MFRotation";
//no default value
ProtoInterface21.field[228] = field250;

let field251 = browser.currentScene.createNode("field");
field251.name = "l_subtalar_changed";
field251.accessType = "outputOnly";
field251.type = "SFRotation";
ProtoInterface21.field[229] = field251;

let field252 = browser.currentScene.createNode("field");
field252.name = "l_thigh_key";
field252.accessType = "inputOutput";
field252.type = "MFFloat";
//no default value
ProtoInterface21.field[230] = field252;

let field253 = browser.currentScene.createNode("field");
field253.name = "l_thigh_keyValue";
field253.accessType = "inputOutput";
field253.type = "MFRotation";
//no default value
ProtoInterface21.field[231] = field253;

let field254 = browser.currentScene.createNode("field");
field254.name = "l_thigh_changed";
field254.accessType = "outputOnly";
field254.type = "SFRotation";
ProtoInterface21.field[232] = field254;

let field255 = browser.currentScene.createNode("field");
field255.name = "l_thumb1_key";
field255.accessType = "inputOutput";
field255.type = "MFFloat";
//no default value
ProtoInterface21.field[233] = field255;

let field256 = browser.currentScene.createNode("field");
field256.name = "l_thumb1_keyValue";
field256.accessType = "inputOutput";
field256.type = "MFRotation";
//no default value
ProtoInterface21.field[234] = field256;

let field257 = browser.currentScene.createNode("field");
field257.name = "l_thumb1_changed";
field257.accessType = "outputOnly";
field257.type = "SFRotation";
ProtoInterface21.field[235] = field257;

let field258 = browser.currentScene.createNode("field");
field258.name = "l_thumb2_key";
field258.accessType = "inputOutput";
field258.type = "MFFloat";
//no default value
ProtoInterface21.field[236] = field258;

let field259 = browser.currentScene.createNode("field");
field259.name = "l_thumb2_keyValue";
field259.accessType = "inputOutput";
field259.type = "MFRotation";
//no default value
ProtoInterface21.field[237] = field259;

let field260 = browser.currentScene.createNode("field");
field260.name = "l_thumb2_changed";
field260.accessType = "outputOnly";
field260.type = "SFRotation";
ProtoInterface21.field[238] = field260;

let field261 = browser.currentScene.createNode("field");
field261.name = "l_thumb3_key";
field261.accessType = "inputOutput";
field261.type = "MFFloat";
//no default value
ProtoInterface21.field[239] = field261;

let field262 = browser.currentScene.createNode("field");
field262.name = "l_thumb3_keyValue";
field262.accessType = "inputOutput";
field262.type = "MFRotation";
//no default value
ProtoInterface21.field[240] = field262;

let field263 = browser.currentScene.createNode("field");
field263.name = "l_thumb3_changed";
field263.accessType = "outputOnly";
field263.type = "SFRotation";
ProtoInterface21.field[241] = field263;

let field264 = browser.currentScene.createNode("field");
field264.name = "l_thumb_distal_key";
field264.accessType = "inputOutput";
field264.type = "MFFloat";
//no default value
ProtoInterface21.field[242] = field264;

let field265 = browser.currentScene.createNode("field");
field265.name = "l_thumb_distal_keyValue";
field265.accessType = "inputOutput";
field265.type = "MFRotation";
//no default value
ProtoInterface21.field[243] = field265;

let field266 = browser.currentScene.createNode("field");
field266.name = "l_thumb_distal_changed";
field266.accessType = "outputOnly";
field266.type = "SFRotation";
ProtoInterface21.field[244] = field266;

let field267 = browser.currentScene.createNode("field");
field267.name = "l_thumb_metacarpal_key";
field267.accessType = "inputOutput";
field267.type = "MFFloat";
//no default value
ProtoInterface21.field[245] = field267;

let field268 = browser.currentScene.createNode("field");
field268.name = "l_thumb_metacarpal_keyValue";
field268.accessType = "inputOutput";
field268.type = "MFRotation";
//no default value
ProtoInterface21.field[246] = field268;

let field269 = browser.currentScene.createNode("field");
field269.name = "l_thumb_metacarpal_changed";
field269.accessType = "outputOnly";
field269.type = "SFRotation";
ProtoInterface21.field[247] = field269;

let field270 = browser.currentScene.createNode("field");
field270.name = "l_thumb_proximal_key";
field270.accessType = "inputOutput";
field270.type = "MFFloat";
//no default value
ProtoInterface21.field[248] = field270;

let field271 = browser.currentScene.createNode("field");
field271.name = "l_thumb_proximal_keyValue";
field271.accessType = "inputOutput";
field271.type = "MFRotation";
//no default value
ProtoInterface21.field[249] = field271;

let field272 = browser.currentScene.createNode("field");
field272.name = "l_thumb_proximal_changed";
field272.accessType = "outputOnly";
field272.type = "SFRotation";
ProtoInterface21.field[250] = field272;

let field273 = browser.currentScene.createNode("field");
field273.name = "l_upperarm_key";
field273.accessType = "inputOutput";
field273.type = "MFFloat";
//no default value
ProtoInterface21.field[251] = field273;

let field274 = browser.currentScene.createNode("field");
field274.name = "l_upperarm_keyValue";
field274.accessType = "inputOutput";
field274.type = "MFRotation";
//no default value
ProtoInterface21.field[252] = field274;

let field275 = browser.currentScene.createNode("field");
field275.name = "l_upperarm_changed";
field275.accessType = "outputOnly";
field275.type = "SFRotation";
ProtoInterface21.field[253] = field275;

let field276 = browser.currentScene.createNode("field");
field276.name = "l_wrist_key";
field276.accessType = "inputOutput";
field276.type = "MFFloat";
//no default value
ProtoInterface21.field[254] = field276;

let field277 = browser.currentScene.createNode("field");
field277.name = "l_wrist_keyValue";
field277.accessType = "inputOutput";
field277.type = "MFRotation";
//no default value
ProtoInterface21.field[255] = field277;

let field278 = browser.currentScene.createNode("field");
field278.name = "l_wrist_changed";
field278.accessType = "outputOnly";
field278.type = "SFRotation";
ProtoInterface21.field[256] = field278;

let field279 = browser.currentScene.createNode("field");
field279.name = "pelvis_key";
field279.accessType = "inputOutput";
field279.type = "MFFloat";
//no default value
ProtoInterface21.field[257] = field279;

let field280 = browser.currentScene.createNode("field");
field280.name = "pelvis_keyValue";
field280.accessType = "inputOutput";
field280.type = "MFRotation";
//no default value
ProtoInterface21.field[258] = field280;

let field281 = browser.currentScene.createNode("field");
field281.name = "pelvis_changed";
field281.accessType = "outputOnly";
field281.type = "SFRotation";
ProtoInterface21.field[259] = field281;

let field282 = browser.currentScene.createNode("field");
field282.name = "r_acromioclavicular_key";
field282.accessType = "inputOutput";
field282.type = "MFFloat";
//no default value
ProtoInterface21.field[260] = field282;

let field283 = browser.currentScene.createNode("field");
field283.name = "r_acromioclavicular_keyValue";
field283.accessType = "inputOutput";
field283.type = "MFRotation";
//no default value
ProtoInterface21.field[261] = field283;

let field284 = browser.currentScene.createNode("field");
field284.name = "r_acromioclavicular_changed";
field284.accessType = "outputOnly";
field284.type = "SFRotation";
ProtoInterface21.field[262] = field284;

let field285 = browser.currentScene.createNode("field");
field285.name = "r_ankle_key";
field285.accessType = "inputOutput";
field285.type = "MFFloat";
//no default value
ProtoInterface21.field[263] = field285;

let field286 = browser.currentScene.createNode("field");
field286.name = "r_ankle_keyValue";
field286.accessType = "inputOutput";
field286.type = "MFRotation";
//no default value
ProtoInterface21.field[264] = field286;

let field287 = browser.currentScene.createNode("field");
field287.name = "r_ankle_changed";
field287.accessType = "outputOnly";
field287.type = "SFRotation";
ProtoInterface21.field[265] = field287;

let field288 = browser.currentScene.createNode("field");
field288.name = "r_calf_key";
field288.accessType = "inputOutput";
field288.type = "MFFloat";
//no default value
ProtoInterface21.field[266] = field288;

let field289 = browser.currentScene.createNode("field");
field289.name = "r_calf_keyValue";
field289.accessType = "inputOutput";
field289.type = "MFRotation";
//no default value
ProtoInterface21.field[267] = field289;

let field290 = browser.currentScene.createNode("field");
field290.name = "r_calf_changed";
field290.accessType = "outputOnly";
field290.type = "SFRotation";
ProtoInterface21.field[268] = field290;

let field291 = browser.currentScene.createNode("field");
field291.name = "r_clavicle_key";
field291.accessType = "inputOutput";
field291.type = "MFFloat";
//no default value
ProtoInterface21.field[269] = field291;

let field292 = browser.currentScene.createNode("field");
field292.name = "r_clavicle_keyValue";
field292.accessType = "inputOutput";
field292.type = "MFRotation";
//no default value
ProtoInterface21.field[270] = field292;

let field293 = browser.currentScene.createNode("field");
field293.name = "r_clavicle_changed";
field293.accessType = "outputOnly";
field293.type = "SFRotation";
ProtoInterface21.field[271] = field293;

let field294 = browser.currentScene.createNode("field");
field294.name = "r_elbow_key";
field294.accessType = "inputOutput";
field294.type = "MFFloat";
//no default value
ProtoInterface21.field[272] = field294;

let field295 = browser.currentScene.createNode("field");
field295.name = "r_elbow_keyValue";
field295.accessType = "inputOutput";
field295.type = "MFRotation";
//no default value
ProtoInterface21.field[273] = field295;

let field296 = browser.currentScene.createNode("field");
field296.name = "r_elbow_changed";
field296.accessType = "outputOnly";
field296.type = "SFRotation";
ProtoInterface21.field[274] = field296;

let field297 = browser.currentScene.createNode("field");
field297.name = "r_eyeball_key";
field297.accessType = "inputOutput";
field297.type = "MFFloat";
//no default value
ProtoInterface21.field[275] = field297;

let field298 = browser.currentScene.createNode("field");
field298.name = "r_eyeball_keyValue";
field298.accessType = "inputOutput";
field298.type = "MFRotation";
//no default value
ProtoInterface21.field[276] = field298;

let field299 = browser.currentScene.createNode("field");
field299.name = "r_eyeball_changed";
field299.accessType = "outputOnly";
field299.type = "SFRotation";
ProtoInterface21.field[277] = field299;

let field300 = browser.currentScene.createNode("field");
field300.name = "r_eyeball_joint_key";
field300.accessType = "inputOutput";
field300.type = "MFFloat";
//no default value
ProtoInterface21.field[278] = field300;

let field301 = browser.currentScene.createNode("field");
field301.name = "r_eyeball_joint_keyValue";
field301.accessType = "inputOutput";
field301.type = "MFRotation";
//no default value
ProtoInterface21.field[279] = field301;

let field302 = browser.currentScene.createNode("field");
field302.name = "r_eyeball_joint_changed";
field302.accessType = "outputOnly";
field302.type = "SFRotation";
ProtoInterface21.field[280] = field302;

let field303 = browser.currentScene.createNode("field");
field303.name = "r_eyebrow_key";
field303.accessType = "inputOutput";
field303.type = "MFFloat";
//no default value
ProtoInterface21.field[281] = field303;

let field304 = browser.currentScene.createNode("field");
field304.name = "r_eyebrow_keyValue";
field304.accessType = "inputOutput";
field304.type = "MFRotation";
//no default value
ProtoInterface21.field[282] = field304;

let field305 = browser.currentScene.createNode("field");
field305.name = "r_eyebrow_changed";
field305.accessType = "outputOnly";
field305.type = "SFRotation";
ProtoInterface21.field[283] = field305;

let field306 = browser.currentScene.createNode("field");
field306.name = "r_eyebrow_joint_key";
field306.accessType = "inputOutput";
field306.type = "MFFloat";
//no default value
ProtoInterface21.field[284] = field306;

let field307 = browser.currentScene.createNode("field");
field307.name = "r_eyebrow_joint_keyValue";
field307.accessType = "inputOutput";
field307.type = "MFRotation";
//no default value
ProtoInterface21.field[285] = field307;

let field308 = browser.currentScene.createNode("field");
field308.name = "r_eyebrow_joint_changed";
field308.accessType = "outputOnly";
field308.type = "SFRotation";
ProtoInterface21.field[286] = field308;

let field309 = browser.currentScene.createNode("field");
field309.name = "r_eyelid_key";
field309.accessType = "inputOutput";
field309.type = "MFFloat";
//no default value
ProtoInterface21.field[287] = field309;

let field310 = browser.currentScene.createNode("field");
field310.name = "r_eyelid_keyValue";
field310.accessType = "inputOutput";
field310.type = "MFRotation";
//no default value
ProtoInterface21.field[288] = field310;

let field311 = browser.currentScene.createNode("field");
field311.name = "r_eyelid_changed";
field311.accessType = "outputOnly";
field311.type = "SFRotation";
ProtoInterface21.field[289] = field311;

let field312 = browser.currentScene.createNode("field");
field312.name = "r_eyelid_joint_key";
field312.accessType = "inputOutput";
field312.type = "MFFloat";
//no default value
ProtoInterface21.field[290] = field312;

let field313 = browser.currentScene.createNode("field");
field313.name = "r_eyelid_joint_keyValue";
field313.accessType = "inputOutput";
field313.type = "MFRotation";
//no default value
ProtoInterface21.field[291] = field313;

let field314 = browser.currentScene.createNode("field");
field314.name = "r_eyelid_joint_changed";
field314.accessType = "outputOnly";
field314.type = "SFRotation";
ProtoInterface21.field[292] = field314;

let field315 = browser.currentScene.createNode("field");
field315.name = "r_forearm_key";
field315.accessType = "inputOutput";
field315.type = "MFFloat";
//no default value
ProtoInterface21.field[293] = field315;

let field316 = browser.currentScene.createNode("field");
field316.name = "r_forearm_keyValue";
field316.accessType = "inputOutput";
field316.type = "MFRotation";
//no default value
ProtoInterface21.field[294] = field316;

let field317 = browser.currentScene.createNode("field");
field317.name = "r_forearm_changed";
field317.accessType = "outputOnly";
field317.type = "SFRotation";
ProtoInterface21.field[295] = field317;

let field318 = browser.currentScene.createNode("field");
field318.name = "r_forefoot_key";
field318.accessType = "inputOutput";
field318.type = "MFFloat";
//no default value
ProtoInterface21.field[296] = field318;

let field319 = browser.currentScene.createNode("field");
field319.name = "r_forefoot_keyValue";
field319.accessType = "inputOutput";
field319.type = "MFRotation";
//no default value
ProtoInterface21.field[297] = field319;

let field320 = browser.currentScene.createNode("field");
field320.name = "r_forefoot_changed";
field320.accessType = "outputOnly";
field320.type = "SFRotation";
ProtoInterface21.field[298] = field320;

let field321 = browser.currentScene.createNode("field");
field321.name = "r_hand_key";
field321.accessType = "inputOutput";
field321.type = "MFFloat";
//no default value
ProtoInterface21.field[299] = field321;

let field322 = browser.currentScene.createNode("field");
field322.name = "r_hand_keyValue";
field322.accessType = "inputOutput";
field322.type = "MFRotation";
//no default value
ProtoInterface21.field[300] = field322;

let field323 = browser.currentScene.createNode("field");
field323.name = "r_hand_changed";
field323.accessType = "outputOnly";
field323.type = "SFRotation";
ProtoInterface21.field[301] = field323;

let field324 = browser.currentScene.createNode("field");
field324.name = "r_hindfoot_key";
field324.accessType = "inputOutput";
field324.type = "MFFloat";
//no default value
ProtoInterface21.field[302] = field324;

let field325 = browser.currentScene.createNode("field");
field325.name = "r_hindfoot_keyValue";
field325.accessType = "inputOutput";
field325.type = "MFRotation";
//no default value
ProtoInterface21.field[303] = field325;

let field326 = browser.currentScene.createNode("field");
field326.name = "r_hindfoot_changed";
field326.accessType = "outputOnly";
field326.type = "SFRotation";
ProtoInterface21.field[304] = field326;

let field327 = browser.currentScene.createNode("field");
field327.name = "r_hip_key";
field327.accessType = "inputOutput";
field327.type = "MFFloat";
//no default value
ProtoInterface21.field[305] = field327;

let field328 = browser.currentScene.createNode("field");
field328.name = "r_hip_keyValue";
field328.accessType = "inputOutput";
field328.type = "MFRotation";
//no default value
ProtoInterface21.field[306] = field328;

let field329 = browser.currentScene.createNode("field");
field329.name = "r_hip_changed";
field329.accessType = "outputOnly";
field329.type = "SFRotation";
ProtoInterface21.field[307] = field329;

let field330 = browser.currentScene.createNode("field");
field330.name = "r_index0_key";
field330.accessType = "inputOutput";
field330.type = "MFFloat";
//no default value
ProtoInterface21.field[308] = field330;

let field331 = browser.currentScene.createNode("field");
field331.name = "r_index0_keyValue";
field331.accessType = "inputOutput";
field331.type = "MFRotation";
//no default value
ProtoInterface21.field[309] = field331;

let field332 = browser.currentScene.createNode("field");
field332.name = "r_index0_changed";
field332.accessType = "outputOnly";
field332.type = "SFRotation";
ProtoInterface21.field[310] = field332;

let field333 = browser.currentScene.createNode("field");
field333.name = "r_index1_key";
field333.accessType = "inputOutput";
field333.type = "MFFloat";
//no default value
ProtoInterface21.field[311] = field333;

let field334 = browser.currentScene.createNode("field");
field334.name = "r_index1_keyValue";
field334.accessType = "inputOutput";
field334.type = "MFRotation";
//no default value
ProtoInterface21.field[312] = field334;

let field335 = browser.currentScene.createNode("field");
field335.name = "r_index1_changed";
field335.accessType = "outputOnly";
field335.type = "SFRotation";
ProtoInterface21.field[313] = field335;

let field336 = browser.currentScene.createNode("field");
field336.name = "r_index2_key";
field336.accessType = "inputOutput";
field336.type = "MFFloat";
//no default value
ProtoInterface21.field[314] = field336;

let field337 = browser.currentScene.createNode("field");
field337.name = "r_index2_keyValue";
field337.accessType = "inputOutput";
field337.type = "MFRotation";
//no default value
ProtoInterface21.field[315] = field337;

let field338 = browser.currentScene.createNode("field");
field338.name = "r_index2_changed";
field338.accessType = "outputOnly";
field338.type = "SFRotation";
ProtoInterface21.field[316] = field338;

let field339 = browser.currentScene.createNode("field");
field339.name = "r_index3_key";
field339.accessType = "inputOutput";
field339.type = "MFFloat";
//no default value
ProtoInterface21.field[317] = field339;

let field340 = browser.currentScene.createNode("field");
field340.name = "r_index3_keyValue";
field340.accessType = "inputOutput";
field340.type = "MFRotation";
//no default value
ProtoInterface21.field[318] = field340;

let field341 = browser.currentScene.createNode("field");
field341.name = "r_index3_changed";
field341.accessType = "outputOnly";
field341.type = "SFRotation";
ProtoInterface21.field[319] = field341;

let field342 = browser.currentScene.createNode("field");
field342.name = "r_index_distal_key";
field342.accessType = "inputOutput";
field342.type = "MFFloat";
//no default value
ProtoInterface21.field[320] = field342;

let field343 = browser.currentScene.createNode("field");
field343.name = "r_index_distal_keyValue";
field343.accessType = "inputOutput";
field343.type = "MFRotation";
//no default value
ProtoInterface21.field[321] = field343;

let field344 = browser.currentScene.createNode("field");
field344.name = "r_index_distal_changed";
field344.accessType = "outputOnly";
field344.type = "SFRotation";
ProtoInterface21.field[322] = field344;

let field345 = browser.currentScene.createNode("field");
field345.name = "r_index_metacarpal_key";
field345.accessType = "inputOutput";
field345.type = "MFFloat";
//no default value
ProtoInterface21.field[323] = field345;

let field346 = browser.currentScene.createNode("field");
field346.name = "r_index_metacarpal_keyValue";
field346.accessType = "inputOutput";
field346.type = "MFRotation";
//no default value
ProtoInterface21.field[324] = field346;

let field347 = browser.currentScene.createNode("field");
field347.name = "r_index_metacarpal_changed";
field347.accessType = "outputOnly";
field347.type = "SFRotation";
ProtoInterface21.field[325] = field347;

let field348 = browser.currentScene.createNode("field");
field348.name = "r_index_middle_key";
field348.accessType = "inputOutput";
field348.type = "MFFloat";
//no default value
ProtoInterface21.field[326] = field348;

let field349 = browser.currentScene.createNode("field");
field349.name = "r_index_middle_keyValue";
field349.accessType = "inputOutput";
field349.type = "MFRotation";
//no default value
ProtoInterface21.field[327] = field349;

let field350 = browser.currentScene.createNode("field");
field350.name = "r_index_middle_changed";
field350.accessType = "outputOnly";
field350.type = "SFRotation";
ProtoInterface21.field[328] = field350;

let field351 = browser.currentScene.createNode("field");
field351.name = "r_index_proximal_key";
field351.accessType = "inputOutput";
field351.type = "MFFloat";
//no default value
ProtoInterface21.field[329] = field351;

let field352 = browser.currentScene.createNode("field");
field352.name = "r_index_proximal_keyValue";
field352.accessType = "inputOutput";
field352.type = "MFRotation";
//no default value
ProtoInterface21.field[330] = field352;

let field353 = browser.currentScene.createNode("field");
field353.name = "r_index_proximal_changed";
field353.accessType = "outputOnly";
field353.type = "SFRotation";
ProtoInterface21.field[331] = field353;

let field354 = browser.currentScene.createNode("field");
field354.name = "r_knee_key";
field354.accessType = "inputOutput";
field354.type = "MFFloat";
//no default value
ProtoInterface21.field[332] = field354;

let field355 = browser.currentScene.createNode("field");
field355.name = "r_knee_keyValue";
field355.accessType = "inputOutput";
field355.type = "MFRotation";
//no default value
ProtoInterface21.field[333] = field355;

let field356 = browser.currentScene.createNode("field");
field356.name = "r_knee_changed";
field356.accessType = "outputOnly";
field356.type = "SFRotation";
ProtoInterface21.field[334] = field356;

let field357 = browser.currentScene.createNode("field");
field357.name = "r_metatarsal_key";
field357.accessType = "inputOutput";
field357.type = "MFFloat";
//no default value
ProtoInterface21.field[335] = field357;

let field358 = browser.currentScene.createNode("field");
field358.name = "r_metatarsal_keyValue";
field358.accessType = "inputOutput";
field358.type = "MFRotation";
//no default value
ProtoInterface21.field[336] = field358;

let field359 = browser.currentScene.createNode("field");
field359.name = "r_metatarsal_changed";
field359.accessType = "outputOnly";
field359.type = "SFRotation";
ProtoInterface21.field[337] = field359;

let field360 = browser.currentScene.createNode("field");
field360.name = "r_middistal_key";
field360.accessType = "inputOutput";
field360.type = "MFFloat";
//no default value
ProtoInterface21.field[338] = field360;

let field361 = browser.currentScene.createNode("field");
field361.name = "r_middistal_keyValue";
field361.accessType = "inputOutput";
field361.type = "MFRotation";
//no default value
ProtoInterface21.field[339] = field361;

let field362 = browser.currentScene.createNode("field");
field362.name = "r_middistal_changed";
field362.accessType = "outputOnly";
field362.type = "SFRotation";
ProtoInterface21.field[340] = field362;

let field363 = browser.currentScene.createNode("field");
field363.name = "r_middle0_key";
field363.accessType = "inputOutput";
field363.type = "MFFloat";
//no default value
ProtoInterface21.field[341] = field363;

let field364 = browser.currentScene.createNode("field");
field364.name = "r_middle0_keyValue";
field364.accessType = "inputOutput";
field364.type = "MFRotation";
//no default value
ProtoInterface21.field[342] = field364;

let field365 = browser.currentScene.createNode("field");
field365.name = "r_middle0_changed";
field365.accessType = "outputOnly";
field365.type = "SFRotation";
ProtoInterface21.field[343] = field365;

let field366 = browser.currentScene.createNode("field");
field366.name = "r_middle1_key";
field366.accessType = "inputOutput";
field366.type = "MFFloat";
//no default value
ProtoInterface21.field[344] = field366;

let field367 = browser.currentScene.createNode("field");
field367.name = "r_middle1_keyValue";
field367.accessType = "inputOutput";
field367.type = "MFRotation";
//no default value
ProtoInterface21.field[345] = field367;

let field368 = browser.currentScene.createNode("field");
field368.name = "r_middle1_changed";
field368.accessType = "outputOnly";
field368.type = "SFRotation";
ProtoInterface21.field[346] = field368;

let field369 = browser.currentScene.createNode("field");
field369.name = "r_middle2_key";
field369.accessType = "inputOutput";
field369.type = "MFFloat";
//no default value
ProtoInterface21.field[347] = field369;

let field370 = browser.currentScene.createNode("field");
field370.name = "r_middle2_keyValue";
field370.accessType = "inputOutput";
field370.type = "MFRotation";
//no default value
ProtoInterface21.field[348] = field370;

let field371 = browser.currentScene.createNode("field");
field371.name = "r_middle2_changed";
field371.accessType = "outputOnly";
field371.type = "SFRotation";
ProtoInterface21.field[349] = field371;

let field372 = browser.currentScene.createNode("field");
field372.name = "r_middle3_key";
field372.accessType = "inputOutput";
field372.type = "MFFloat";
//no default value
ProtoInterface21.field[350] = field372;

let field373 = browser.currentScene.createNode("field");
field373.name = "r_middle3_keyValue";
field373.accessType = "inputOutput";
field373.type = "MFRotation";
//no default value
ProtoInterface21.field[351] = field373;

let field374 = browser.currentScene.createNode("field");
field374.name = "r_middle3_changed";
field374.accessType = "outputOnly";
field374.type = "SFRotation";
ProtoInterface21.field[352] = field374;

let field375 = browser.currentScene.createNode("field");
field375.name = "r_middle_distal_key";
field375.accessType = "inputOutput";
field375.type = "MFFloat";
//no default value
ProtoInterface21.field[353] = field375;

let field376 = browser.currentScene.createNode("field");
field376.name = "r_middle_distal_keyValue";
field376.accessType = "inputOutput";
field376.type = "MFRotation";
//no default value
ProtoInterface21.field[354] = field376;

let field377 = browser.currentScene.createNode("field");
field377.name = "r_middle_distal_changed";
field377.accessType = "outputOnly";
field377.type = "SFRotation";
ProtoInterface21.field[355] = field377;

let field378 = browser.currentScene.createNode("field");
field378.name = "r_middle_metacarpal_key";
field378.accessType = "inputOutput";
field378.type = "MFFloat";
//no default value
ProtoInterface21.field[356] = field378;

let field379 = browser.currentScene.createNode("field");
field379.name = "r_middle_metacarpal_keyValue";
field379.accessType = "inputOutput";
field379.type = "MFRotation";
//no default value
ProtoInterface21.field[357] = field379;

let field380 = browser.currentScene.createNode("field");
field380.name = "r_middle_metacarpal_changed";
field380.accessType = "outputOnly";
field380.type = "SFRotation";
ProtoInterface21.field[358] = field380;

let field381 = browser.currentScene.createNode("field");
field381.name = "r_middle_middle_key";
field381.accessType = "inputOutput";
field381.type = "MFFloat";
//no default value
ProtoInterface21.field[359] = field381;

let field382 = browser.currentScene.createNode("field");
field382.name = "r_middle_middle_keyValue";
field382.accessType = "inputOutput";
field382.type = "MFRotation";
//no default value
ProtoInterface21.field[360] = field382;

let field383 = browser.currentScene.createNode("field");
field383.name = "r_middle_middle_changed";
field383.accessType = "outputOnly";
field383.type = "SFRotation";
ProtoInterface21.field[361] = field383;

let field384 = browser.currentScene.createNode("field");
field384.name = "r_middle_proximal_key";
field384.accessType = "inputOutput";
field384.type = "MFFloat";
//no default value
ProtoInterface21.field[362] = field384;

let field385 = browser.currentScene.createNode("field");
field385.name = "r_middle_proximal_keyValue";
field385.accessType = "inputOutput";
field385.type = "MFRotation";
//no default value
ProtoInterface21.field[363] = field385;

let field386 = browser.currentScene.createNode("field");
field386.name = "r_middle_proximal_changed";
field386.accessType = "outputOnly";
field386.type = "SFRotation";
ProtoInterface21.field[364] = field386;

let field387 = browser.currentScene.createNode("field");
field387.name = "r_midproximal_key";
field387.accessType = "inputOutput";
field387.type = "MFFloat";
//no default value
ProtoInterface21.field[365] = field387;

let field388 = browser.currentScene.createNode("field");
field388.name = "r_midproximal_keyValue";
field388.accessType = "inputOutput";
field388.type = "MFRotation";
//no default value
ProtoInterface21.field[366] = field388;

let field389 = browser.currentScene.createNode("field");
field389.name = "r_midproximal_changed";
field389.accessType = "outputOnly";
field389.type = "SFRotation";
ProtoInterface21.field[367] = field389;

let field390 = browser.currentScene.createNode("field");
field390.name = "r_midtarsal_key";
field390.accessType = "inputOutput";
field390.type = "MFFloat";
//no default value
ProtoInterface21.field[368] = field390;

let field391 = browser.currentScene.createNode("field");
field391.name = "r_midtarsal_keyValue";
field391.accessType = "inputOutput";
field391.type = "MFRotation";
//no default value
ProtoInterface21.field[369] = field391;

let field392 = browser.currentScene.createNode("field");
field392.name = "r_midtarsal_changed";
field392.accessType = "outputOnly";
field392.type = "SFRotation";
ProtoInterface21.field[370] = field392;

let field393 = browser.currentScene.createNode("field");
field393.name = "r_pinky0_key";
field393.accessType = "inputOutput";
field393.type = "MFFloat";
//no default value
ProtoInterface21.field[371] = field393;

let field394 = browser.currentScene.createNode("field");
field394.name = "r_pinky0_keyValue";
field394.accessType = "inputOutput";
field394.type = "MFRotation";
//no default value
ProtoInterface21.field[372] = field394;

let field395 = browser.currentScene.createNode("field");
field395.name = "r_pinky0_changed";
field395.accessType = "outputOnly";
field395.type = "SFRotation";
ProtoInterface21.field[373] = field395;

let field396 = browser.currentScene.createNode("field");
field396.name = "r_pinky1_key";
field396.accessType = "inputOutput";
field396.type = "MFFloat";
//no default value
ProtoInterface21.field[374] = field396;

let field397 = browser.currentScene.createNode("field");
field397.name = "r_pinky1_keyValue";
field397.accessType = "inputOutput";
field397.type = "MFRotation";
//no default value
ProtoInterface21.field[375] = field397;

let field398 = browser.currentScene.createNode("field");
field398.name = "r_pinky1_changed";
field398.accessType = "outputOnly";
field398.type = "SFRotation";
ProtoInterface21.field[376] = field398;

let field399 = browser.currentScene.createNode("field");
field399.name = "r_pinky2_key";
field399.accessType = "inputOutput";
field399.type = "MFFloat";
//no default value
ProtoInterface21.field[377] = field399;

let field400 = browser.currentScene.createNode("field");
field400.name = "r_pinky2_keyValue";
field400.accessType = "inputOutput";
field400.type = "MFRotation";
//no default value
ProtoInterface21.field[378] = field400;

let field401 = browser.currentScene.createNode("field");
field401.name = "r_pinky2_changed";
field401.accessType = "outputOnly";
field401.type = "SFRotation";
ProtoInterface21.field[379] = field401;

let field402 = browser.currentScene.createNode("field");
field402.name = "r_pinky3_key";
field402.accessType = "inputOutput";
field402.type = "MFFloat";
//no default value
ProtoInterface21.field[380] = field402;

let field403 = browser.currentScene.createNode("field");
field403.name = "r_pinky3_keyValue";
field403.accessType = "inputOutput";
field403.type = "MFRotation";
//no default value
ProtoInterface21.field[381] = field403;

let field404 = browser.currentScene.createNode("field");
field404.name = "r_pinky3_changed";
field404.accessType = "outputOnly";
field404.type = "SFRotation";
ProtoInterface21.field[382] = field404;

let field405 = browser.currentScene.createNode("field");
field405.name = "r_pinky_distal_key";
field405.accessType = "inputOutput";
field405.type = "MFFloat";
//no default value
ProtoInterface21.field[383] = field405;

let field406 = browser.currentScene.createNode("field");
field406.name = "r_pinky_distal_keyValue";
field406.accessType = "inputOutput";
field406.type = "MFRotation";
//no default value
ProtoInterface21.field[384] = field406;

let field407 = browser.currentScene.createNode("field");
field407.name = "r_pinky_distal_changed";
field407.accessType = "outputOnly";
field407.type = "SFRotation";
ProtoInterface21.field[385] = field407;

let field408 = browser.currentScene.createNode("field");
field408.name = "r_pinky_metacarpal_key";
field408.accessType = "inputOutput";
field408.type = "MFFloat";
//no default value
ProtoInterface21.field[386] = field408;

let field409 = browser.currentScene.createNode("field");
field409.name = "r_pinky_metacarpal_keyValue";
field409.accessType = "inputOutput";
field409.type = "MFRotation";
//no default value
ProtoInterface21.field[387] = field409;

let field410 = browser.currentScene.createNode("field");
field410.name = "r_pinky_metacarpal_changed";
field410.accessType = "outputOnly";
field410.type = "SFRotation";
ProtoInterface21.field[388] = field410;

let field411 = browser.currentScene.createNode("field");
field411.name = "r_pinky_middle_key";
field411.accessType = "inputOutput";
field411.type = "MFFloat";
//no default value
ProtoInterface21.field[389] = field411;

let field412 = browser.currentScene.createNode("field");
field412.name = "r_pinky_middle_keyValue";
field412.accessType = "inputOutput";
field412.type = "MFRotation";
//no default value
ProtoInterface21.field[390] = field412;

let field413 = browser.currentScene.createNode("field");
field413.name = "r_pinky_middle_changed";
field413.accessType = "outputOnly";
field413.type = "SFRotation";
ProtoInterface21.field[391] = field413;

let field414 = browser.currentScene.createNode("field");
field414.name = "r_pinky_proximal_key";
field414.accessType = "inputOutput";
field414.type = "MFFloat";
//no default value
ProtoInterface21.field[392] = field414;

let field415 = browser.currentScene.createNode("field");
field415.name = "r_pinky_proximal_keyValue";
field415.accessType = "inputOutput";
field415.type = "MFRotation";
//no default value
ProtoInterface21.field[393] = field415;

let field416 = browser.currentScene.createNode("field");
field416.name = "r_pinky_proximal_changed";
field416.accessType = "outputOnly";
field416.type = "SFRotation";
ProtoInterface21.field[394] = field416;

let field417 = browser.currentScene.createNode("field");
field417.name = "r_ring0_key";
field417.accessType = "inputOutput";
field417.type = "MFFloat";
//no default value
ProtoInterface21.field[395] = field417;

let field418 = browser.currentScene.createNode("field");
field418.name = "r_ring0_keyValue";
field418.accessType = "inputOutput";
field418.type = "MFRotation";
//no default value
ProtoInterface21.field[396] = field418;

let field419 = browser.currentScene.createNode("field");
field419.name = "r_ring0_changed";
field419.accessType = "outputOnly";
field419.type = "SFRotation";
ProtoInterface21.field[397] = field419;

let field420 = browser.currentScene.createNode("field");
field420.name = "r_ring1_key";
field420.accessType = "inputOutput";
field420.type = "MFFloat";
//no default value
ProtoInterface21.field[398] = field420;

let field421 = browser.currentScene.createNode("field");
field421.name = "r_ring1_keyValue";
field421.accessType = "inputOutput";
field421.type = "MFRotation";
//no default value
ProtoInterface21.field[399] = field421;

let field422 = browser.currentScene.createNode("field");
field422.name = "r_ring1_changed";
field422.accessType = "outputOnly";
field422.type = "SFRotation";
ProtoInterface21.field[400] = field422;

let field423 = browser.currentScene.createNode("field");
field423.name = "r_ring2_key";
field423.accessType = "inputOutput";
field423.type = "MFFloat";
//no default value
ProtoInterface21.field[401] = field423;

let field424 = browser.currentScene.createNode("field");
field424.name = "r_ring2_keyValue";
field424.accessType = "inputOutput";
field424.type = "MFRotation";
//no default value
ProtoInterface21.field[402] = field424;

let field425 = browser.currentScene.createNode("field");
field425.name = "r_ring2_changed";
field425.accessType = "outputOnly";
field425.type = "SFRotation";
ProtoInterface21.field[403] = field425;

let field426 = browser.currentScene.createNode("field");
field426.name = "r_ring3_key";
field426.accessType = "inputOutput";
field426.type = "MFFloat";
//no default value
ProtoInterface21.field[404] = field426;

let field427 = browser.currentScene.createNode("field");
field427.name = "r_ring3_keyValue";
field427.accessType = "inputOutput";
field427.type = "MFRotation";
//no default value
ProtoInterface21.field[405] = field427;

let field428 = browser.currentScene.createNode("field");
field428.name = "r_ring3_changed";
field428.accessType = "outputOnly";
field428.type = "SFRotation";
ProtoInterface21.field[406] = field428;

let field429 = browser.currentScene.createNode("field");
field429.name = "r_ring_distal_key";
field429.accessType = "inputOutput";
field429.type = "MFFloat";
//no default value
ProtoInterface21.field[407] = field429;

let field430 = browser.currentScene.createNode("field");
field430.name = "r_ring_distal_keyValue";
field430.accessType = "inputOutput";
field430.type = "MFRotation";
//no default value
ProtoInterface21.field[408] = field430;

let field431 = browser.currentScene.createNode("field");
field431.name = "r_ring_distal_changed";
field431.accessType = "outputOnly";
field431.type = "SFRotation";
ProtoInterface21.field[409] = field431;

let field432 = browser.currentScene.createNode("field");
field432.name = "r_ring_metacarpal_key";
field432.accessType = "inputOutput";
field432.type = "MFFloat";
//no default value
ProtoInterface21.field[410] = field432;

let field433 = browser.currentScene.createNode("field");
field433.name = "r_ring_metacarpal_keyValue";
field433.accessType = "inputOutput";
field433.type = "MFRotation";
//no default value
ProtoInterface21.field[411] = field433;

let field434 = browser.currentScene.createNode("field");
field434.name = "r_ring_metacarpal_changed";
field434.accessType = "outputOnly";
field434.type = "SFRotation";
ProtoInterface21.field[412] = field434;

let field435 = browser.currentScene.createNode("field");
field435.name = "r_ring_middle_key";
field435.accessType = "inputOutput";
field435.type = "MFFloat";
//no default value
ProtoInterface21.field[413] = field435;

let field436 = browser.currentScene.createNode("field");
field436.name = "r_ring_middle_keyValue";
field436.accessType = "inputOutput";
field436.type = "MFRotation";
//no default value
ProtoInterface21.field[414] = field436;

let field437 = browser.currentScene.createNode("field");
field437.name = "r_ring_middle_changed";
field437.accessType = "outputOnly";
field437.type = "SFRotation";
ProtoInterface21.field[415] = field437;

let field438 = browser.currentScene.createNode("field");
field438.name = "r_ring_proximal_key";
field438.accessType = "inputOutput";
field438.type = "MFFloat";
//no default value
ProtoInterface21.field[416] = field438;

let field439 = browser.currentScene.createNode("field");
field439.name = "r_ring_proximal_keyValue";
field439.accessType = "inputOutput";
field439.type = "MFRotation";
//no default value
ProtoInterface21.field[417] = field439;

let field440 = browser.currentScene.createNode("field");
field440.name = "r_ring_proximal_changed";
field440.accessType = "outputOnly";
field440.type = "SFRotation";
ProtoInterface21.field[418] = field440;

let field441 = browser.currentScene.createNode("field");
field441.name = "r_scapula_key";
field441.accessType = "inputOutput";
field441.type = "MFFloat";
//no default value
ProtoInterface21.field[419] = field441;

let field442 = browser.currentScene.createNode("field");
field442.name = "r_scapula_keyValue";
field442.accessType = "inputOutput";
field442.type = "MFRotation";
//no default value
ProtoInterface21.field[420] = field442;

let field443 = browser.currentScene.createNode("field");
field443.name = "r_scapula_changed";
field443.accessType = "outputOnly";
field443.type = "SFRotation";
ProtoInterface21.field[421] = field443;

let field444 = browser.currentScene.createNode("field");
field444.name = "r_shoulder_key";
field444.accessType = "inputOutput";
field444.type = "MFFloat";
//no default value
ProtoInterface21.field[422] = field444;

let field445 = browser.currentScene.createNode("field");
field445.name = "r_shoulder_keyValue";
field445.accessType = "inputOutput";
field445.type = "MFRotation";
//no default value
ProtoInterface21.field[423] = field445;

let field446 = browser.currentScene.createNode("field");
field446.name = "r_shoulder_changed";
field446.accessType = "outputOnly";
field446.type = "SFRotation";
ProtoInterface21.field[424] = field446;

let field447 = browser.currentScene.createNode("field");
field447.name = "r_sternoclavicular_key";
field447.accessType = "inputOutput";
field447.type = "MFFloat";
//no default value
ProtoInterface21.field[425] = field447;

let field448 = browser.currentScene.createNode("field");
field448.name = "r_sternoclavicular_keyValue";
field448.accessType = "inputOutput";
field448.type = "MFRotation";
//no default value
ProtoInterface21.field[426] = field448;

let field449 = browser.currentScene.createNode("field");
field449.name = "r_sternoclavicular_changed";
field449.accessType = "outputOnly";
field449.type = "SFRotation";
ProtoInterface21.field[427] = field449;

let field450 = browser.currentScene.createNode("field");
field450.name = "r_subtalar_key";
field450.accessType = "inputOutput";
field450.type = "MFFloat";
//no default value
ProtoInterface21.field[428] = field450;

let field451 = browser.currentScene.createNode("field");
field451.name = "r_subtalar_keyValue";
field451.accessType = "inputOutput";
field451.type = "MFRotation";
//no default value
ProtoInterface21.field[429] = field451;

let field452 = browser.currentScene.createNode("field");
field452.name = "r_subtalar_changed";
field452.accessType = "outputOnly";
field452.type = "SFRotation";
ProtoInterface21.field[430] = field452;

let field453 = browser.currentScene.createNode("field");
field453.name = "r_thigh_key";
field453.accessType = "inputOutput";
field453.type = "MFFloat";
//no default value
ProtoInterface21.field[431] = field453;

let field454 = browser.currentScene.createNode("field");
field454.name = "r_thigh_keyValue";
field454.accessType = "inputOutput";
field454.type = "MFRotation";
//no default value
ProtoInterface21.field[432] = field454;

let field455 = browser.currentScene.createNode("field");
field455.name = "r_thigh_changed";
field455.accessType = "outputOnly";
field455.type = "SFRotation";
ProtoInterface21.field[433] = field455;

let field456 = browser.currentScene.createNode("field");
field456.name = "r_thumb1_key";
field456.accessType = "inputOutput";
field456.type = "MFFloat";
//no default value
ProtoInterface21.field[434] = field456;

let field457 = browser.currentScene.createNode("field");
field457.name = "r_thumb1_keyValue";
field457.accessType = "inputOutput";
field457.type = "MFRotation";
//no default value
ProtoInterface21.field[435] = field457;

let field458 = browser.currentScene.createNode("field");
field458.name = "r_thumb1_changed";
field458.accessType = "outputOnly";
field458.type = "SFRotation";
ProtoInterface21.field[436] = field458;

let field459 = browser.currentScene.createNode("field");
field459.name = "r_thumb2_key";
field459.accessType = "inputOutput";
field459.type = "MFFloat";
//no default value
ProtoInterface21.field[437] = field459;

let field460 = browser.currentScene.createNode("field");
field460.name = "r_thumb2_keyValue";
field460.accessType = "inputOutput";
field460.type = "MFRotation";
//no default value
ProtoInterface21.field[438] = field460;

let field461 = browser.currentScene.createNode("field");
field461.name = "r_thumb2_changed";
field461.accessType = "outputOnly";
field461.type = "SFRotation";
ProtoInterface21.field[439] = field461;

let field462 = browser.currentScene.createNode("field");
field462.name = "r_thumb3_key";
field462.accessType = "inputOutput";
field462.type = "MFFloat";
//no default value
ProtoInterface21.field[440] = field462;

let field463 = browser.currentScene.createNode("field");
field463.name = "r_thumb3_keyValue";
field463.accessType = "inputOutput";
field463.type = "MFRotation";
//no default value
ProtoInterface21.field[441] = field463;

let field464 = browser.currentScene.createNode("field");
field464.name = "r_thumb3_changed";
field464.accessType = "outputOnly";
field464.type = "SFRotation";
ProtoInterface21.field[442] = field464;

let field465 = browser.currentScene.createNode("field");
field465.name = "r_thumb_distal_key";
field465.accessType = "inputOutput";
field465.type = "MFFloat";
//no default value
ProtoInterface21.field[443] = field465;

let field466 = browser.currentScene.createNode("field");
field466.name = "r_thumb_distal_keyValue";
field466.accessType = "inputOutput";
field466.type = "MFRotation";
//no default value
ProtoInterface21.field[444] = field466;

let field467 = browser.currentScene.createNode("field");
field467.name = "r_thumb_distal_changed";
field467.accessType = "outputOnly";
field467.type = "SFRotation";
ProtoInterface21.field[445] = field467;

let field468 = browser.currentScene.createNode("field");
field468.name = "r_thumb_metacarpal_key";
field468.accessType = "inputOutput";
field468.type = "MFFloat";
//no default value
ProtoInterface21.field[446] = field468;

let field469 = browser.currentScene.createNode("field");
field469.name = "r_thumb_metacarpal_keyValue";
field469.accessType = "inputOutput";
field469.type = "MFRotation";
//no default value
ProtoInterface21.field[447] = field469;

let field470 = browser.currentScene.createNode("field");
field470.name = "r_thumb_metacarpal_changed";
field470.accessType = "outputOnly";
field470.type = "SFRotation";
ProtoInterface21.field[448] = field470;

let field471 = browser.currentScene.createNode("field");
field471.name = "r_thumb_proximal_key";
field471.accessType = "inputOutput";
field471.type = "MFFloat";
//no default value
ProtoInterface21.field[449] = field471;

let field472 = browser.currentScene.createNode("field");
field472.name = "r_thumb_proximal_keyValue";
field472.accessType = "inputOutput";
field472.type = "MFRotation";
//no default value
ProtoInterface21.field[450] = field472;

let field473 = browser.currentScene.createNode("field");
field473.name = "r_thumb_proximal_changed";
field473.accessType = "outputOnly";
field473.type = "SFRotation";
ProtoInterface21.field[451] = field473;

let field474 = browser.currentScene.createNode("field");
field474.name = "r_upperarm_key";
field474.accessType = "inputOutput";
field474.type = "MFFloat";
//no default value
ProtoInterface21.field[452] = field474;

let field475 = browser.currentScene.createNode("field");
field475.name = "r_upperarm_keyValue";
field475.accessType = "inputOutput";
field475.type = "MFRotation";
//no default value
ProtoInterface21.field[453] = field475;

let field476 = browser.currentScene.createNode("field");
field476.name = "r_upperarm_changed";
field476.accessType = "outputOnly";
field476.type = "SFRotation";
ProtoInterface21.field[454] = field476;

let field477 = browser.currentScene.createNode("field");
field477.name = "r_wrist_key";
field477.accessType = "inputOutput";
field477.type = "MFFloat";
//no default value
ProtoInterface21.field[455] = field477;

let field478 = browser.currentScene.createNode("field");
field478.name = "r_wrist_keyValue";
field478.accessType = "inputOutput";
field478.type = "MFRotation";
//no default value
ProtoInterface21.field[456] = field478;

let field479 = browser.currentScene.createNode("field");
field479.name = "r_wrist_changed";
field479.accessType = "outputOnly";
field479.type = "SFRotation";
ProtoInterface21.field[457] = field479;

let field480 = browser.currentScene.createNode("field");
field480.name = "sacroiliac_key";
field480.accessType = "inputOutput";
field480.type = "MFFloat";
//no default value
ProtoInterface21.field[458] = field480;

let field481 = browser.currentScene.createNode("field");
field481.name = "sacroiliac_keyValue";
field481.accessType = "inputOutput";
field481.type = "MFRotation";
//no default value
ProtoInterface21.field[459] = field481;

let field482 = browser.currentScene.createNode("field");
field482.name = "sacroiliac_changed";
field482.accessType = "outputOnly";
field482.type = "SFRotation";
ProtoInterface21.field[460] = field482;

let field483 = browser.currentScene.createNode("field");
field483.name = "sacrum_key";
field483.accessType = "inputOutput";
field483.type = "MFFloat";
//no default value
ProtoInterface21.field[461] = field483;

let field484 = browser.currentScene.createNode("field");
field484.name = "sacrum_keyValue";
field484.accessType = "inputOutput";
field484.type = "MFRotation";
//no default value
ProtoInterface21.field[462] = field484;

let field485 = browser.currentScene.createNode("field");
field485.name = "sacrum_changed";
field485.accessType = "outputOnly";
field485.type = "SFRotation";
ProtoInterface21.field[463] = field485;

let field486 = browser.currentScene.createNode("field");
field486.name = "skull_key";
field486.accessType = "inputOutput";
field486.type = "MFFloat";
//no default value
ProtoInterface21.field[464] = field486;

let field487 = browser.currentScene.createNode("field");
field487.name = "skull_keyValue";
field487.accessType = "inputOutput";
field487.type = "MFRotation";
//no default value
ProtoInterface21.field[465] = field487;

let field488 = browser.currentScene.createNode("field");
field488.name = "skull_changed";
field488.accessType = "outputOnly";
field488.type = "SFRotation";
ProtoInterface21.field[466] = field488;

let field489 = browser.currentScene.createNode("field");
field489.name = "skullbase_key";
field489.accessType = "inputOutput";
field489.type = "MFFloat";
//no default value
ProtoInterface21.field[467] = field489;

let field490 = browser.currentScene.createNode("field");
field490.name = "skullbase_keyValue";
field490.accessType = "inputOutput";
field490.type = "MFRotation";
//no default value
ProtoInterface21.field[468] = field490;

let field491 = browser.currentScene.createNode("field");
field491.name = "skullbase_changed";
field491.accessType = "outputOnly";
field491.type = "SFRotation";
ProtoInterface21.field[469] = field491;

let field492 = browser.currentScene.createNode("field");
field492.name = "t10_key";
field492.accessType = "inputOutput";
field492.type = "MFFloat";
//no default value
ProtoInterface21.field[470] = field492;

let field493 = browser.currentScene.createNode("field");
field493.name = "t10_keyValue";
field493.accessType = "inputOutput";
field493.type = "MFRotation";
//no default value
ProtoInterface21.field[471] = field493;

let field494 = browser.currentScene.createNode("field");
field494.name = "t10_changed";
field494.accessType = "outputOnly";
field494.type = "SFRotation";
ProtoInterface21.field[472] = field494;

let field495 = browser.currentScene.createNode("field");
field495.name = "t11_key";
field495.accessType = "inputOutput";
field495.type = "MFFloat";
//no default value
ProtoInterface21.field[473] = field495;

let field496 = browser.currentScene.createNode("field");
field496.name = "t11_keyValue";
field496.accessType = "inputOutput";
field496.type = "MFRotation";
//no default value
ProtoInterface21.field[474] = field496;

let field497 = browser.currentScene.createNode("field");
field497.name = "t11_changed";
field497.accessType = "outputOnly";
field497.type = "SFRotation";
ProtoInterface21.field[475] = field497;

let field498 = browser.currentScene.createNode("field");
field498.name = "t12_key";
field498.accessType = "inputOutput";
field498.type = "MFFloat";
//no default value
ProtoInterface21.field[476] = field498;

let field499 = browser.currentScene.createNode("field");
field499.name = "t12_keyValue";
field499.accessType = "inputOutput";
field499.type = "MFRotation";
//no default value
ProtoInterface21.field[477] = field499;

let field500 = browser.currentScene.createNode("field");
field500.name = "t12_changed";
field500.accessType = "outputOnly";
field500.type = "SFRotation";
ProtoInterface21.field[478] = field500;

let field501 = browser.currentScene.createNode("field");
field501.name = "t1_key";
field501.accessType = "inputOutput";
field501.type = "MFFloat";
//no default value
ProtoInterface21.field[479] = field501;

let field502 = browser.currentScene.createNode("field");
field502.name = "t1_keyValue";
field502.accessType = "inputOutput";
field502.type = "MFRotation";
//no default value
ProtoInterface21.field[480] = field502;

let field503 = browser.currentScene.createNode("field");
field503.name = "t1_changed";
field503.accessType = "outputOnly";
field503.type = "SFRotation";
ProtoInterface21.field[481] = field503;

let field504 = browser.currentScene.createNode("field");
field504.name = "t2_key";
field504.accessType = "inputOutput";
field504.type = "MFFloat";
//no default value
ProtoInterface21.field[482] = field504;

let field505 = browser.currentScene.createNode("field");
field505.name = "t2_keyValue";
field505.accessType = "inputOutput";
field505.type = "MFRotation";
//no default value
ProtoInterface21.field[483] = field505;

let field506 = browser.currentScene.createNode("field");
field506.name = "t2_changed";
field506.accessType = "outputOnly";
field506.type = "SFRotation";
ProtoInterface21.field[484] = field506;

let field507 = browser.currentScene.createNode("field");
field507.name = "t3_key";
field507.accessType = "inputOutput";
field507.type = "MFFloat";
//no default value
ProtoInterface21.field[485] = field507;

let field508 = browser.currentScene.createNode("field");
field508.name = "t3_keyValue";
field508.accessType = "inputOutput";
field508.type = "MFRotation";
//no default value
ProtoInterface21.field[486] = field508;

let field509 = browser.currentScene.createNode("field");
field509.name = "t3_changed";
field509.accessType = "outputOnly";
field509.type = "SFRotation";
ProtoInterface21.field[487] = field509;

let field510 = browser.currentScene.createNode("field");
field510.name = "t4_key";
field510.accessType = "inputOutput";
field510.type = "MFFloat";
//no default value
ProtoInterface21.field[488] = field510;

let field511 = browser.currentScene.createNode("field");
field511.name = "t4_keyValue";
field511.accessType = "inputOutput";
field511.type = "MFRotation";
//no default value
ProtoInterface21.field[489] = field511;

let field512 = browser.currentScene.createNode("field");
field512.name = "t4_changed";
field512.accessType = "outputOnly";
field512.type = "SFRotation";
ProtoInterface21.field[490] = field512;

let field513 = browser.currentScene.createNode("field");
field513.name = "t5_key";
field513.accessType = "inputOutput";
field513.type = "MFFloat";
//no default value
ProtoInterface21.field[491] = field513;

let field514 = browser.currentScene.createNode("field");
field514.name = "t5_keyValue";
field514.accessType = "inputOutput";
field514.type = "MFRotation";
//no default value
ProtoInterface21.field[492] = field514;

let field515 = browser.currentScene.createNode("field");
field515.name = "t5_changed";
field515.accessType = "outputOnly";
field515.type = "SFRotation";
ProtoInterface21.field[493] = field515;

let field516 = browser.currentScene.createNode("field");
field516.name = "t6_key";
field516.accessType = "inputOutput";
field516.type = "MFFloat";
//no default value
ProtoInterface21.field[494] = field516;

let field517 = browser.currentScene.createNode("field");
field517.name = "t6_keyValue";
field517.accessType = "inputOutput";
field517.type = "MFRotation";
//no default value
ProtoInterface21.field[495] = field517;

let field518 = browser.currentScene.createNode("field");
field518.name = "t6_changed";
field518.accessType = "outputOnly";
field518.type = "SFRotation";
ProtoInterface21.field[496] = field518;

let field519 = browser.currentScene.createNode("field");
field519.name = "t7_key";
field519.accessType = "inputOutput";
field519.type = "MFFloat";
//no default value
ProtoInterface21.field[497] = field519;

let field520 = browser.currentScene.createNode("field");
field520.name = "t7_keyValue";
field520.accessType = "inputOutput";
field520.type = "MFRotation";
//no default value
ProtoInterface21.field[498] = field520;

let field521 = browser.currentScene.createNode("field");
field521.name = "t7_changed";
field521.accessType = "outputOnly";
field521.type = "SFRotation";
ProtoInterface21.field[499] = field521;

let field522 = browser.currentScene.createNode("field");
field522.name = "t8_key";
field522.accessType = "inputOutput";
field522.type = "MFFloat";
//no default value
ProtoInterface21.field[500] = field522;

let field523 = browser.currentScene.createNode("field");
field523.name = "t8_keyValue";
field523.accessType = "inputOutput";
field523.type = "MFRotation";
//no default value
ProtoInterface21.field[501] = field523;

let field524 = browser.currentScene.createNode("field");
field524.name = "t8_changed";
field524.accessType = "outputOnly";
field524.type = "SFRotation";
ProtoInterface21.field[502] = field524;

let field525 = browser.currentScene.createNode("field");
field525.name = "t9_key";
field525.accessType = "inputOutput";
field525.type = "MFFloat";
//no default value
ProtoInterface21.field[503] = field525;

let field526 = browser.currentScene.createNode("field");
field526.name = "t9_keyValue";
field526.accessType = "inputOutput";
field526.type = "MFRotation";
//no default value
ProtoInterface21.field[504] = field526;

let field527 = browser.currentScene.createNode("field");
field527.name = "t9_changed";
field527.accessType = "outputOnly";
field527.type = "SFRotation";
ProtoInterface21.field[505] = field527;

let field528 = browser.currentScene.createNode("field");
field528.name = "temporomandibular_key";
field528.accessType = "inputOutput";
field528.type = "MFFloat";
//no default value
ProtoInterface21.field[506] = field528;

let field529 = browser.currentScene.createNode("field");
field529.name = "temporomandibular_keyValue";
field529.accessType = "inputOutput";
field529.type = "MFRotation";
//no default value
ProtoInterface21.field[507] = field529;

let field530 = browser.currentScene.createNode("field");
field530.name = "temporomandibular_changed";
field530.accessType = "outputOnly";
field530.type = "SFRotation";
ProtoInterface21.field[508] = field530;

let field531 = browser.currentScene.createNode("field");
field531.name = "vc1_key";
field531.accessType = "inputOutput";
field531.type = "MFFloat";
//no default value
ProtoInterface21.field[509] = field531;

let field532 = browser.currentScene.createNode("field");
field532.name = "vc1_keyValue";
field532.accessType = "inputOutput";
field532.type = "MFRotation";
//no default value
ProtoInterface21.field[510] = field532;

let field533 = browser.currentScene.createNode("field");
field533.name = "vc1_changed";
field533.accessType = "outputOnly";
field533.type = "SFRotation";
ProtoInterface21.field[511] = field533;

let field534 = browser.currentScene.createNode("field");
field534.name = "vc2_key";
field534.accessType = "inputOutput";
field534.type = "MFFloat";
//no default value
ProtoInterface21.field[512] = field534;

let field535 = browser.currentScene.createNode("field");
field535.name = "vc2_keyValue";
field535.accessType = "inputOutput";
field535.type = "MFRotation";
//no default value
ProtoInterface21.field[513] = field535;

let field536 = browser.currentScene.createNode("field");
field536.name = "vc2_changed";
field536.accessType = "outputOnly";
field536.type = "SFRotation";
ProtoInterface21.field[514] = field536;

let field537 = browser.currentScene.createNode("field");
field537.name = "vc3_key";
field537.accessType = "inputOutput";
field537.type = "MFFloat";
//no default value
ProtoInterface21.field[515] = field537;

let field538 = browser.currentScene.createNode("field");
field538.name = "vc3_keyValue";
field538.accessType = "inputOutput";
field538.type = "MFRotation";
//no default value
ProtoInterface21.field[516] = field538;

let field539 = browser.currentScene.createNode("field");
field539.name = "vc3_changed";
field539.accessType = "outputOnly";
field539.type = "SFRotation";
ProtoInterface21.field[517] = field539;

let field540 = browser.currentScene.createNode("field");
field540.name = "vc4_key";
field540.accessType = "inputOutput";
field540.type = "MFFloat";
//no default value
ProtoInterface21.field[518] = field540;

let field541 = browser.currentScene.createNode("field");
field541.name = "vc4_keyValue";
field541.accessType = "inputOutput";
field541.type = "MFRotation";
//no default value
ProtoInterface21.field[519] = field541;

let field542 = browser.currentScene.createNode("field");
field542.name = "vc4_changed";
field542.accessType = "outputOnly";
field542.type = "SFRotation";
ProtoInterface21.field[520] = field542;

let field543 = browser.currentScene.createNode("field");
field543.name = "vc5_key";
field543.accessType = "inputOutput";
field543.type = "MFFloat";
//no default value
ProtoInterface21.field[521] = field543;

let field544 = browser.currentScene.createNode("field");
field544.name = "vc5_keyValue";
field544.accessType = "inputOutput";
field544.type = "MFRotation";
//no default value
ProtoInterface21.field[522] = field544;

let field545 = browser.currentScene.createNode("field");
field545.name = "vc5_changed";
field545.accessType = "outputOnly";
field545.type = "SFRotation";
ProtoInterface21.field[523] = field545;

let field546 = browser.currentScene.createNode("field");
field546.name = "vc6_key";
field546.accessType = "inputOutput";
field546.type = "MFFloat";
//no default value
ProtoInterface21.field[524] = field546;

let field547 = browser.currentScene.createNode("field");
field547.name = "vc6_keyValue";
field547.accessType = "inputOutput";
field547.type = "MFRotation";
//no default value
ProtoInterface21.field[525] = field547;

let field548 = browser.currentScene.createNode("field");
field548.name = "vc6_changed";
field548.accessType = "outputOnly";
field548.type = "SFRotation";
ProtoInterface21.field[526] = field548;

let field549 = browser.currentScene.createNode("field");
field549.name = "vc7_key";
field549.accessType = "inputOutput";
field549.type = "MFFloat";
//no default value
ProtoInterface21.field[527] = field549;

let field550 = browser.currentScene.createNode("field");
field550.name = "vc7_keyValue";
field550.accessType = "inputOutput";
field550.type = "MFRotation";
//no default value
ProtoInterface21.field[528] = field550;

let field551 = browser.currentScene.createNode("field");
field551.name = "vc7_changed";
field551.accessType = "outputOnly";
field551.type = "SFRotation";
ProtoInterface21.field[529] = field551;

let field552 = browser.currentScene.createNode("field");
field552.name = "vl1_key";
field552.accessType = "inputOutput";
field552.type = "MFFloat";
//no default value
ProtoInterface21.field[530] = field552;

let field553 = browser.currentScene.createNode("field");
field553.name = "vl1_keyValue";
field553.accessType = "inputOutput";
field553.type = "MFRotation";
//no default value
ProtoInterface21.field[531] = field553;

let field554 = browser.currentScene.createNode("field");
field554.name = "vl1_changed";
field554.accessType = "outputOnly";
field554.type = "SFRotation";
ProtoInterface21.field[532] = field554;

let field555 = browser.currentScene.createNode("field");
field555.name = "vl2_key";
field555.accessType = "inputOutput";
field555.type = "MFFloat";
//no default value
ProtoInterface21.field[533] = field555;

let field556 = browser.currentScene.createNode("field");
field556.name = "vl2_keyValue";
field556.accessType = "inputOutput";
field556.type = "MFRotation";
//no default value
ProtoInterface21.field[534] = field556;

let field557 = browser.currentScene.createNode("field");
field557.name = "vl2_changed";
field557.accessType = "outputOnly";
field557.type = "SFRotation";
ProtoInterface21.field[535] = field557;

let field558 = browser.currentScene.createNode("field");
field558.name = "vl3_key";
field558.accessType = "inputOutput";
field558.type = "MFFloat";
//no default value
ProtoInterface21.field[536] = field558;

let field559 = browser.currentScene.createNode("field");
field559.name = "vl3_keyValue";
field559.accessType = "inputOutput";
field559.type = "MFRotation";
//no default value
ProtoInterface21.field[537] = field559;

let field560 = browser.currentScene.createNode("field");
field560.name = "vl3_changed";
field560.accessType = "outputOnly";
field560.type = "SFRotation";
ProtoInterface21.field[538] = field560;

let field561 = browser.currentScene.createNode("field");
field561.name = "vl4_key";
field561.accessType = "inputOutput";
field561.type = "MFFloat";
//no default value
ProtoInterface21.field[539] = field561;

let field562 = browser.currentScene.createNode("field");
field562.name = "vl4_keyValue";
field562.accessType = "inputOutput";
field562.type = "MFRotation";
//no default value
ProtoInterface21.field[540] = field562;

let field563 = browser.currentScene.createNode("field");
field563.name = "vl4_changed";
field563.accessType = "outputOnly";
field563.type = "SFRotation";
ProtoInterface21.field[541] = field563;

let field564 = browser.currentScene.createNode("field");
field564.name = "vl5_key";
field564.accessType = "inputOutput";
field564.type = "MFFloat";
//no default value
ProtoInterface21.field[542] = field564;

let field565 = browser.currentScene.createNode("field");
field565.name = "vl5_keyValue";
field565.accessType = "inputOutput";
field565.type = "MFRotation";
//no default value
ProtoInterface21.field[543] = field565;

let field566 = browser.currentScene.createNode("field");
field566.name = "vl5_changed";
field566.accessType = "outputOnly";
field566.type = "SFRotation";
ProtoInterface21.field[544] = field566;

let field567 = browser.currentScene.createNode("field");
field567.name = "vt10_key";
field567.accessType = "inputOutput";
field567.type = "MFFloat";
//no default value
ProtoInterface21.field[545] = field567;

let field568 = browser.currentScene.createNode("field");
field568.name = "vt10_keyValue";
field568.accessType = "inputOutput";
field568.type = "MFRotation";
//no default value
ProtoInterface21.field[546] = field568;

let field569 = browser.currentScene.createNode("field");
field569.name = "vt10_changed";
field569.accessType = "outputOnly";
field569.type = "SFRotation";
ProtoInterface21.field[547] = field569;

let field570 = browser.currentScene.createNode("field");
field570.name = "vt11_key";
field570.accessType = "inputOutput";
field570.type = "MFFloat";
//no default value
ProtoInterface21.field[548] = field570;

let field571 = browser.currentScene.createNode("field");
field571.name = "vt11_keyValue";
field571.accessType = "inputOutput";
field571.type = "MFRotation";
//no default value
ProtoInterface21.field[549] = field571;

let field572 = browser.currentScene.createNode("field");
field572.name = "vt11_changed";
field572.accessType = "outputOnly";
field572.type = "SFRotation";
ProtoInterface21.field[550] = field572;

let field573 = browser.currentScene.createNode("field");
field573.name = "vt12_key";
field573.accessType = "inputOutput";
field573.type = "MFFloat";
//no default value
ProtoInterface21.field[551] = field573;

let field574 = browser.currentScene.createNode("field");
field574.name = "vt12_keyValue";
field574.accessType = "inputOutput";
field574.type = "MFRotation";
//no default value
ProtoInterface21.field[552] = field574;

let field575 = browser.currentScene.createNode("field");
field575.name = "vt12_changed";
field575.accessType = "outputOnly";
field575.type = "SFRotation";
ProtoInterface21.field[553] = field575;

let field576 = browser.currentScene.createNode("field");
field576.name = "vt1_key";
field576.accessType = "inputOutput";
field576.type = "MFFloat";
//no default value
ProtoInterface21.field[554] = field576;

let field577 = browser.currentScene.createNode("field");
field577.name = "vt1_keyValue";
field577.accessType = "inputOutput";
field577.type = "MFRotation";
//no default value
ProtoInterface21.field[555] = field577;

let field578 = browser.currentScene.createNode("field");
field578.name = "vt1_changed";
field578.accessType = "outputOnly";
field578.type = "SFRotation";
ProtoInterface21.field[556] = field578;

let field579 = browser.currentScene.createNode("field");
field579.name = "vt2_key";
field579.accessType = "inputOutput";
field579.type = "MFFloat";
//no default value
ProtoInterface21.field[557] = field579;

let field580 = browser.currentScene.createNode("field");
field580.name = "vt2_keyValue";
field580.accessType = "inputOutput";
field580.type = "MFRotation";
//no default value
ProtoInterface21.field[558] = field580;

let field581 = browser.currentScene.createNode("field");
field581.name = "vt2_changed";
field581.accessType = "outputOnly";
field581.type = "SFRotation";
ProtoInterface21.field[559] = field581;

let field582 = browser.currentScene.createNode("field");
field582.name = "vt3_key";
field582.accessType = "inputOutput";
field582.type = "MFFloat";
//no default value
ProtoInterface21.field[560] = field582;

let field583 = browser.currentScene.createNode("field");
field583.name = "vt3_keyValue";
field583.accessType = "inputOutput";
field583.type = "MFRotation";
//no default value
ProtoInterface21.field[561] = field583;

let field584 = browser.currentScene.createNode("field");
field584.name = "vt3_changed";
field584.accessType = "outputOnly";
field584.type = "SFRotation";
ProtoInterface21.field[562] = field584;

let field585 = browser.currentScene.createNode("field");
field585.name = "vt4_key";
field585.accessType = "inputOutput";
field585.type = "MFFloat";
//no default value
ProtoInterface21.field[563] = field585;

let field586 = browser.currentScene.createNode("field");
field586.name = "vt4_keyValue";
field586.accessType = "inputOutput";
field586.type = "MFRotation";
//no default value
ProtoInterface21.field[564] = field586;

let field587 = browser.currentScene.createNode("field");
field587.name = "vt4_changed";
field587.accessType = "outputOnly";
field587.type = "SFRotation";
ProtoInterface21.field[565] = field587;

let field588 = browser.currentScene.createNode("field");
field588.name = "vt5_key";
field588.accessType = "inputOutput";
field588.type = "MFFloat";
//no default value
ProtoInterface21.field[566] = field588;

let field589 = browser.currentScene.createNode("field");
field589.name = "vt5_keyValue";
field589.accessType = "inputOutput";
field589.type = "MFRotation";
//no default value
ProtoInterface21.field[567] = field589;

let field590 = browser.currentScene.createNode("field");
field590.name = "vt5_changed";
field590.accessType = "outputOnly";
field590.type = "SFRotation";
ProtoInterface21.field[568] = field590;

let field591 = browser.currentScene.createNode("field");
field591.name = "vt6_key";
field591.accessType = "inputOutput";
field591.type = "MFFloat";
//no default value
ProtoInterface21.field[569] = field591;

let field592 = browser.currentScene.createNode("field");
field592.name = "vt6_keyValue";
field592.accessType = "inputOutput";
field592.type = "MFRotation";
//no default value
ProtoInterface21.field[570] = field592;

let field593 = browser.currentScene.createNode("field");
field593.name = "vt6_changed";
field593.accessType = "outputOnly";
field593.type = "SFRotation";
ProtoInterface21.field[571] = field593;

let field594 = browser.currentScene.createNode("field");
field594.name = "vt7_key";
field594.accessType = "inputOutput";
field594.type = "MFFloat";
//no default value
ProtoInterface21.field[572] = field594;

let field595 = browser.currentScene.createNode("field");
field595.name = "vt7_keyValue";
field595.accessType = "inputOutput";
field595.type = "MFRotation";
//no default value
ProtoInterface21.field[573] = field595;

let field596 = browser.currentScene.createNode("field");
field596.name = "vt7_changed";
field596.accessType = "outputOnly";
field596.type = "SFRotation";
ProtoInterface21.field[574] = field596;

let field597 = browser.currentScene.createNode("field");
field597.name = "vt8_key";
field597.accessType = "inputOutput";
field597.type = "MFFloat";
//no default value
ProtoInterface21.field[575] = field597;

let field598 = browser.currentScene.createNode("field");
field598.name = "vt8_keyValue";
field598.accessType = "inputOutput";
field598.type = "MFRotation";
//no default value
ProtoInterface21.field[576] = field598;

let field599 = browser.currentScene.createNode("field");
field599.name = "vt8_changed";
field599.accessType = "outputOnly";
field599.type = "SFRotation";
ProtoInterface21.field[577] = field599;

let field600 = browser.currentScene.createNode("field");
field600.name = "vt9_key";
field600.accessType = "inputOutput";
field600.type = "MFFloat";
//no default value
ProtoInterface21.field[578] = field600;

let field601 = browser.currentScene.createNode("field");
field601.name = "vt9_keyValue";
field601.accessType = "inputOutput";
field601.type = "MFRotation";
//no default value
ProtoInterface21.field[579] = field601;

let field602 = browser.currentScene.createNode("field");
field602.name = "vt9_changed";
field602.accessType = "outputOnly";
field602.type = "SFRotation";
ProtoInterface21.field[580] = field602;

ProtoDeclare20.protoInterface = ProtoInterface21;

let ProtoBody603 = browser.currentScene.createNode("ProtoBody");
//design alternative: move TimeSensor out of the prototype, instead expose set_fraction globally to all interpolators
let TimeSensor604 = browser.currentScene.createNode("TimeSensor");
TimeSensor604.DEF = "BehaviorClock";
let IS605 = browser.currentScene.createNode("IS");
let connect606 = browser.currentScene.createNode("connect");
connect606.nodeField = "enabled";
connect606.protoField = "enabled";
IS605.connect = new MFNode();

IS605.connect[0] = connect606;

let connect607 = browser.currentScene.createNode("connect");
connect607.nodeField = "cycleInterval";
connect607.protoField = "cycleInterval";
IS605.connect[1] = connect607;

let connect608 = browser.currentScene.createNode("connect");
connect608.nodeField = "loop";
connect608.protoField = "loop";
IS605.connect[2] = connect608;

let connect609 = browser.currentScene.createNode("connect");
connect609.nodeField = "startTime";
connect609.protoField = "startTime";
IS605.connect[3] = connect609;

let connect610 = browser.currentScene.createNode("connect");
connect610.nodeField = "stopTime";
connect610.protoField = "stopTime";
IS605.connect[4] = connect610;

let connect611 = browser.currentScene.createNode("connect");
connect611.nodeField = "pauseTime";
connect611.protoField = "pauseTime";
IS605.connect[5] = connect611;

let connect612 = browser.currentScene.createNode("connect");
connect612.nodeField = "resumeTime";
connect612.protoField = "resumeTime";
IS605.connect[6] = connect612;

let connect613 = browser.currentScene.createNode("connect");
connect613.nodeField = "cycleTime";
connect613.protoField = "cycleTime";
IS605.connect[7] = connect613;

let connect614 = browser.currentScene.createNode("connect");
connect614.nodeField = "isActive";
connect614.protoField = "isActive";
IS605.connect[8] = connect614;

let connect615 = browser.currentScene.createNode("connect");
connect615.nodeField = "isPaused";
connect615.protoField = "isPaused";
IS605.connect[9] = connect615;

let connect616 = browser.currentScene.createNode("connect");
connect616.nodeField = "elapsedTime";
connect616.protoField = "elapsedTime";
IS605.connect[10] = connect616;

let connect617 = browser.currentScene.createNode("connect");
connect617.nodeField = "time";
connect617.protoField = "time";
IS605.connect[11] = connect617;

let connect618 = browser.currentScene.createNode("connect");
connect618.nodeField = "fraction_changed";
connect618.protoField = "fraction_changed";
IS605.connect[12] = connect618;

TimeSensor604.iS = IS605;

ProtoBody603.children = new MFNode();

ProtoBody603.children[0] = TimeSensor604;

//note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless
let Switch619 = browser.currentScene.createNode("Switch");
Switch619.DEF = "SupportedLoaHolder1";
Switch619.whichChoice = -1;
let IS620 = browser.currentScene.createNode("IS");
let connect621 = browser.currentScene.createNode("connect");
connect621.nodeField = "whichChoice";
connect621.protoField = "supportedLOA";
IS620.connect = new MFNode();

IS620.connect[0] = connect621;

Switch619.iS = IS620;

ProtoBody603.children[1] = Switch619;

let PositionInterpolator622 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator622.DEF = "HumanoidRootPI";
let IS623 = browser.currentScene.createNode("IS");
let connect624 = browser.currentScene.createNode("connect");
connect624.nodeField = "key";
connect624.protoField = "HumanoidRoot_translation_key";
IS623.connect = new MFNode();

IS623.connect[0] = connect624;

let connect625 = browser.currentScene.createNode("connect");
connect625.nodeField = "keyValue";
connect625.protoField = "HumanoidRoot_translation_keyValue";
IS623.connect[1] = connect625;

let connect626 = browser.currentScene.createNode("connect");
connect626.nodeField = "value_changed";
connect626.protoField = "HumanoidRoot_translation_changed";
IS623.connect[2] = connect626;

PositionInterpolator622.iS = IS623;

ProtoBody603.children[2] = PositionInterpolator622;

let ROUTE627 = browser.currentScene.createNode("ROUTE");
ROUTE627.fromField = "fraction_changed";
ROUTE627.fromNode = "BehaviorClock";
ROUTE627.toField = "set_fraction";
ROUTE627.toNode = "HumanoidRootPI";
ProtoBody603.children[3] = ROUTE627;

let OrientationInterpolator628 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator628.DEF = "HumanoidRootOI";
let IS629 = browser.currentScene.createNode("IS");
let connect630 = browser.currentScene.createNode("connect");
connect630.nodeField = "key";
connect630.protoField = "HumanoidRoot_rotation_key";
IS629.connect = new MFNode();

IS629.connect[0] = connect630;

let connect631 = browser.currentScene.createNode("connect");
connect631.nodeField = "keyValue";
connect631.protoField = "HumanoidRoot_rotation_keyValue";
IS629.connect[1] = connect631;

let connect632 = browser.currentScene.createNode("connect");
connect632.nodeField = "value_changed";
connect632.protoField = "HumanoidRoot_rotation_changed";
IS629.connect[2] = connect632;

OrientationInterpolator628.iS = IS629;

ProtoBody603.children[4] = OrientationInterpolator628;

let ROUTE633 = browser.currentScene.createNode("ROUTE");
ROUTE633.fromField = "fraction_changed";
ROUTE633.fromNode = "BehaviorClock";
ROUTE633.toField = "set_fraction";
ROUTE633.toNode = "HumanoidRootOI";
ProtoBody603.children[5] = ROUTE633;

let OrientationInterpolator634 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator634.DEF = "c1_OI";
let IS635 = browser.currentScene.createNode("IS");
let connect636 = browser.currentScene.createNode("connect");
connect636.nodeField = "key";
connect636.protoField = "c1_key";
IS635.connect = new MFNode();

IS635.connect[0] = connect636;

let connect637 = browser.currentScene.createNode("connect");
connect637.nodeField = "keyValue";
connect637.protoField = "c1_keyValue";
IS635.connect[1] = connect637;

let connect638 = browser.currentScene.createNode("connect");
connect638.nodeField = "value_changed";
connect638.protoField = "c1_changed";
IS635.connect[2] = connect638;

OrientationInterpolator634.iS = IS635;

ProtoBody603.children[6] = OrientationInterpolator634;

let ROUTE639 = browser.currentScene.createNode("ROUTE");
ROUTE639.fromField = "fraction_changed";
ROUTE639.fromNode = "BehaviorClock";
ROUTE639.toField = "set_fraction";
ROUTE639.toNode = "c1_OI";
ProtoBody603.children[7] = ROUTE639;

let OrientationInterpolator640 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator640.DEF = "c2_OI";
let IS641 = browser.currentScene.createNode("IS");
let connect642 = browser.currentScene.createNode("connect");
connect642.nodeField = "key";
connect642.protoField = "c2_key";
IS641.connect = new MFNode();

IS641.connect[0] = connect642;

let connect643 = browser.currentScene.createNode("connect");
connect643.nodeField = "keyValue";
connect643.protoField = "c2_keyValue";
IS641.connect[1] = connect643;

let connect644 = browser.currentScene.createNode("connect");
connect644.nodeField = "value_changed";
connect644.protoField = "c2_changed";
IS641.connect[2] = connect644;

OrientationInterpolator640.iS = IS641;

ProtoBody603.children[8] = OrientationInterpolator640;

let ROUTE645 = browser.currentScene.createNode("ROUTE");
ROUTE645.fromField = "fraction_changed";
ROUTE645.fromNode = "BehaviorClock";
ROUTE645.toField = "set_fraction";
ROUTE645.toNode = "c2_OI";
ProtoBody603.children[9] = ROUTE645;

let OrientationInterpolator646 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator646.DEF = "c3_OI";
let IS647 = browser.currentScene.createNode("IS");
let connect648 = browser.currentScene.createNode("connect");
connect648.nodeField = "key";
connect648.protoField = "c3_key";
IS647.connect = new MFNode();

IS647.connect[0] = connect648;

let connect649 = browser.currentScene.createNode("connect");
connect649.nodeField = "keyValue";
connect649.protoField = "c3_keyValue";
IS647.connect[1] = connect649;

let connect650 = browser.currentScene.createNode("connect");
connect650.nodeField = "value_changed";
connect650.protoField = "c3_changed";
IS647.connect[2] = connect650;

OrientationInterpolator646.iS = IS647;

ProtoBody603.children[10] = OrientationInterpolator646;

let ROUTE651 = browser.currentScene.createNode("ROUTE");
ROUTE651.fromField = "fraction_changed";
ROUTE651.fromNode = "BehaviorClock";
ROUTE651.toField = "set_fraction";
ROUTE651.toNode = "c3_OI";
ProtoBody603.children[11] = ROUTE651;

let OrientationInterpolator652 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator652.DEF = "c4_OI";
let IS653 = browser.currentScene.createNode("IS");
let connect654 = browser.currentScene.createNode("connect");
connect654.nodeField = "key";
connect654.protoField = "c4_key";
IS653.connect = new MFNode();

IS653.connect[0] = connect654;

let connect655 = browser.currentScene.createNode("connect");
connect655.nodeField = "keyValue";
connect655.protoField = "c4_keyValue";
IS653.connect[1] = connect655;

let connect656 = browser.currentScene.createNode("connect");
connect656.nodeField = "value_changed";
connect656.protoField = "c4_changed";
IS653.connect[2] = connect656;

OrientationInterpolator652.iS = IS653;

ProtoBody603.children[12] = OrientationInterpolator652;

let ROUTE657 = browser.currentScene.createNode("ROUTE");
ROUTE657.fromField = "fraction_changed";
ROUTE657.fromNode = "BehaviorClock";
ROUTE657.toField = "set_fraction";
ROUTE657.toNode = "c4_OI";
ProtoBody603.children[13] = ROUTE657;

let OrientationInterpolator658 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator658.DEF = "c5_OI";
let IS659 = browser.currentScene.createNode("IS");
let connect660 = browser.currentScene.createNode("connect");
connect660.nodeField = "key";
connect660.protoField = "c5_key";
IS659.connect = new MFNode();

IS659.connect[0] = connect660;

let connect661 = browser.currentScene.createNode("connect");
connect661.nodeField = "keyValue";
connect661.protoField = "c5_keyValue";
IS659.connect[1] = connect661;

let connect662 = browser.currentScene.createNode("connect");
connect662.nodeField = "value_changed";
connect662.protoField = "c5_changed";
IS659.connect[2] = connect662;

OrientationInterpolator658.iS = IS659;

ProtoBody603.children[14] = OrientationInterpolator658;

let ROUTE663 = browser.currentScene.createNode("ROUTE");
ROUTE663.fromField = "fraction_changed";
ROUTE663.fromNode = "BehaviorClock";
ROUTE663.toField = "set_fraction";
ROUTE663.toNode = "c5_OI";
ProtoBody603.children[15] = ROUTE663;

let OrientationInterpolator664 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator664.DEF = "c6_OI";
let IS665 = browser.currentScene.createNode("IS");
let connect666 = browser.currentScene.createNode("connect");
connect666.nodeField = "key";
connect666.protoField = "c6_key";
IS665.connect = new MFNode();

IS665.connect[0] = connect666;

let connect667 = browser.currentScene.createNode("connect");
connect667.nodeField = "keyValue";
connect667.protoField = "c6_keyValue";
IS665.connect[1] = connect667;

let connect668 = browser.currentScene.createNode("connect");
connect668.nodeField = "value_changed";
connect668.protoField = "c6_changed";
IS665.connect[2] = connect668;

OrientationInterpolator664.iS = IS665;

ProtoBody603.children[16] = OrientationInterpolator664;

let ROUTE669 = browser.currentScene.createNode("ROUTE");
ROUTE669.fromField = "fraction_changed";
ROUTE669.fromNode = "BehaviorClock";
ROUTE669.toField = "set_fraction";
ROUTE669.toNode = "c6_OI";
ProtoBody603.children[17] = ROUTE669;

let OrientationInterpolator670 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator670.DEF = "c7_OI";
let IS671 = browser.currentScene.createNode("IS");
let connect672 = browser.currentScene.createNode("connect");
connect672.nodeField = "key";
connect672.protoField = "c7_key";
IS671.connect = new MFNode();

IS671.connect[0] = connect672;

let connect673 = browser.currentScene.createNode("connect");
connect673.nodeField = "keyValue";
connect673.protoField = "c7_keyValue";
IS671.connect[1] = connect673;

let connect674 = browser.currentScene.createNode("connect");
connect674.nodeField = "value_changed";
connect674.protoField = "c7_changed";
IS671.connect[2] = connect674;

OrientationInterpolator670.iS = IS671;

ProtoBody603.children[18] = OrientationInterpolator670;

let ROUTE675 = browser.currentScene.createNode("ROUTE");
ROUTE675.fromField = "fraction_changed";
ROUTE675.fromNode = "BehaviorClock";
ROUTE675.toField = "set_fraction";
ROUTE675.toNode = "c7_OI";
ProtoBody603.children[19] = ROUTE675;

let OrientationInterpolator676 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator676.DEF = "jaw_OI";
let IS677 = browser.currentScene.createNode("IS");
let connect678 = browser.currentScene.createNode("connect");
connect678.nodeField = "key";
connect678.protoField = "jaw_key";
IS677.connect = new MFNode();

IS677.connect[0] = connect678;

let connect679 = browser.currentScene.createNode("connect");
connect679.nodeField = "keyValue";
connect679.protoField = "jaw_keyValue";
IS677.connect[1] = connect679;

let connect680 = browser.currentScene.createNode("connect");
connect680.nodeField = "value_changed";
connect680.protoField = "jaw_changed";
IS677.connect[2] = connect680;

OrientationInterpolator676.iS = IS677;

ProtoBody603.children[20] = OrientationInterpolator676;

let ROUTE681 = browser.currentScene.createNode("ROUTE");
ROUTE681.fromField = "fraction_changed";
ROUTE681.fromNode = "BehaviorClock";
ROUTE681.toField = "set_fraction";
ROUTE681.toNode = "jaw_OI";
ProtoBody603.children[21] = ROUTE681;

let OrientationInterpolator682 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator682.DEF = "l1_OI";
let IS683 = browser.currentScene.createNode("IS");
let connect684 = browser.currentScene.createNode("connect");
connect684.nodeField = "key";
connect684.protoField = "l1_key";
IS683.connect = new MFNode();

IS683.connect[0] = connect684;

let connect685 = browser.currentScene.createNode("connect");
connect685.nodeField = "keyValue";
connect685.protoField = "l1_keyValue";
IS683.connect[1] = connect685;

let connect686 = browser.currentScene.createNode("connect");
connect686.nodeField = "value_changed";
connect686.protoField = "l1_changed";
IS683.connect[2] = connect686;

OrientationInterpolator682.iS = IS683;

ProtoBody603.children[22] = OrientationInterpolator682;

let ROUTE687 = browser.currentScene.createNode("ROUTE");
ROUTE687.fromField = "fraction_changed";
ROUTE687.fromNode = "BehaviorClock";
ROUTE687.toField = "set_fraction";
ROUTE687.toNode = "l1_OI";
ProtoBody603.children[23] = ROUTE687;

let OrientationInterpolator688 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator688.DEF = "l2_OI";
let IS689 = browser.currentScene.createNode("IS");
let connect690 = browser.currentScene.createNode("connect");
connect690.nodeField = "key";
connect690.protoField = "l2_key";
IS689.connect = new MFNode();

IS689.connect[0] = connect690;

let connect691 = browser.currentScene.createNode("connect");
connect691.nodeField = "keyValue";
connect691.protoField = "l2_keyValue";
IS689.connect[1] = connect691;

let connect692 = browser.currentScene.createNode("connect");
connect692.nodeField = "value_changed";
connect692.protoField = "l2_changed";
IS689.connect[2] = connect692;

OrientationInterpolator688.iS = IS689;

ProtoBody603.children[24] = OrientationInterpolator688;

let ROUTE693 = browser.currentScene.createNode("ROUTE");
ROUTE693.fromField = "fraction_changed";
ROUTE693.fromNode = "BehaviorClock";
ROUTE693.toField = "set_fraction";
ROUTE693.toNode = "l2_OI";
ProtoBody603.children[25] = ROUTE693;

let OrientationInterpolator694 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator694.DEF = "l3_OI";
let IS695 = browser.currentScene.createNode("IS");
let connect696 = browser.currentScene.createNode("connect");
connect696.nodeField = "key";
connect696.protoField = "l3_key";
IS695.connect = new MFNode();

IS695.connect[0] = connect696;

let connect697 = browser.currentScene.createNode("connect");
connect697.nodeField = "keyValue";
connect697.protoField = "l3_keyValue";
IS695.connect[1] = connect697;

let connect698 = browser.currentScene.createNode("connect");
connect698.nodeField = "value_changed";
connect698.protoField = "l3_changed";
IS695.connect[2] = connect698;

OrientationInterpolator694.iS = IS695;

ProtoBody603.children[26] = OrientationInterpolator694;

let ROUTE699 = browser.currentScene.createNode("ROUTE");
ROUTE699.fromField = "fraction_changed";
ROUTE699.fromNode = "BehaviorClock";
ROUTE699.toField = "set_fraction";
ROUTE699.toNode = "l3_OI";
ProtoBody603.children[27] = ROUTE699;

let OrientationInterpolator700 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator700.DEF = "l4_OI";
let IS701 = browser.currentScene.createNode("IS");
let connect702 = browser.currentScene.createNode("connect");
connect702.nodeField = "key";
connect702.protoField = "l4_key";
IS701.connect = new MFNode();

IS701.connect[0] = connect702;

let connect703 = browser.currentScene.createNode("connect");
connect703.nodeField = "keyValue";
connect703.protoField = "l4_keyValue";
IS701.connect[1] = connect703;

let connect704 = browser.currentScene.createNode("connect");
connect704.nodeField = "value_changed";
connect704.protoField = "l4_changed";
IS701.connect[2] = connect704;

OrientationInterpolator700.iS = IS701;

ProtoBody603.children[28] = OrientationInterpolator700;

let ROUTE705 = browser.currentScene.createNode("ROUTE");
ROUTE705.fromField = "fraction_changed";
ROUTE705.fromNode = "BehaviorClock";
ROUTE705.toField = "set_fraction";
ROUTE705.toNode = "l4_OI";
ProtoBody603.children[29] = ROUTE705;

let OrientationInterpolator706 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator706.DEF = "l5_OI";
let IS707 = browser.currentScene.createNode("IS");
let connect708 = browser.currentScene.createNode("connect");
connect708.nodeField = "key";
connect708.protoField = "l5_key";
IS707.connect = new MFNode();

IS707.connect[0] = connect708;

let connect709 = browser.currentScene.createNode("connect");
connect709.nodeField = "keyValue";
connect709.protoField = "l5_keyValue";
IS707.connect[1] = connect709;

let connect710 = browser.currentScene.createNode("connect");
connect710.nodeField = "value_changed";
connect710.protoField = "l5_changed";
IS707.connect[2] = connect710;

OrientationInterpolator706.iS = IS707;

ProtoBody603.children[30] = OrientationInterpolator706;

let ROUTE711 = browser.currentScene.createNode("ROUTE");
ROUTE711.fromField = "fraction_changed";
ROUTE711.fromNode = "BehaviorClock";
ROUTE711.toField = "set_fraction";
ROUTE711.toNode = "l5_OI";
ProtoBody603.children[31] = ROUTE711;

let OrientationInterpolator712 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator712.DEF = "l_acromioclavicular_OI";
let IS713 = browser.currentScene.createNode("IS");
let connect714 = browser.currentScene.createNode("connect");
connect714.nodeField = "key";
connect714.protoField = "l_acromioclavicular_key";
IS713.connect = new MFNode();

IS713.connect[0] = connect714;

let connect715 = browser.currentScene.createNode("connect");
connect715.nodeField = "keyValue";
connect715.protoField = "l_acromioclavicular_keyValue";
IS713.connect[1] = connect715;

let connect716 = browser.currentScene.createNode("connect");
connect716.nodeField = "value_changed";
connect716.protoField = "l_acromioclavicular_changed";
IS713.connect[2] = connect716;

OrientationInterpolator712.iS = IS713;

ProtoBody603.children[32] = OrientationInterpolator712;

let ROUTE717 = browser.currentScene.createNode("ROUTE");
ROUTE717.fromField = "fraction_changed";
ROUTE717.fromNode = "BehaviorClock";
ROUTE717.toField = "set_fraction";
ROUTE717.toNode = "l_acromioclavicular_OI";
ProtoBody603.children[33] = ROUTE717;

let OrientationInterpolator718 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator718.DEF = "l_ankle_OI";
let IS719 = browser.currentScene.createNode("IS");
let connect720 = browser.currentScene.createNode("connect");
connect720.nodeField = "key";
connect720.protoField = "l_ankle_key";
IS719.connect = new MFNode();

IS719.connect[0] = connect720;

let connect721 = browser.currentScene.createNode("connect");
connect721.nodeField = "keyValue";
connect721.protoField = "l_ankle_keyValue";
IS719.connect[1] = connect721;

let connect722 = browser.currentScene.createNode("connect");
connect722.nodeField = "value_changed";
connect722.protoField = "l_ankle_changed";
IS719.connect[2] = connect722;

OrientationInterpolator718.iS = IS719;

ProtoBody603.children[34] = OrientationInterpolator718;

let ROUTE723 = browser.currentScene.createNode("ROUTE");
ROUTE723.fromField = "fraction_changed";
ROUTE723.fromNode = "BehaviorClock";
ROUTE723.toField = "set_fraction";
ROUTE723.toNode = "l_ankle_OI";
ProtoBody603.children[35] = ROUTE723;

let OrientationInterpolator724 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator724.DEF = "l_calf_OI";
let IS725 = browser.currentScene.createNode("IS");
let connect726 = browser.currentScene.createNode("connect");
connect726.nodeField = "key";
connect726.protoField = "l_calf_key";
IS725.connect = new MFNode();

IS725.connect[0] = connect726;

let connect727 = browser.currentScene.createNode("connect");
connect727.nodeField = "keyValue";
connect727.protoField = "l_calf_keyValue";
IS725.connect[1] = connect727;

let connect728 = browser.currentScene.createNode("connect");
connect728.nodeField = "value_changed";
connect728.protoField = "l_calf_changed";
IS725.connect[2] = connect728;

OrientationInterpolator724.iS = IS725;

ProtoBody603.children[36] = OrientationInterpolator724;

let ROUTE729 = browser.currentScene.createNode("ROUTE");
ROUTE729.fromField = "fraction_changed";
ROUTE729.fromNode = "BehaviorClock";
ROUTE729.toField = "set_fraction";
ROUTE729.toNode = "l_calf_OI";
ProtoBody603.children[37] = ROUTE729;

let OrientationInterpolator730 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator730.DEF = "l_clavicle_OI";
let IS731 = browser.currentScene.createNode("IS");
let connect732 = browser.currentScene.createNode("connect");
connect732.nodeField = "key";
connect732.protoField = "l_clavicle_key";
IS731.connect = new MFNode();

IS731.connect[0] = connect732;

let connect733 = browser.currentScene.createNode("connect");
connect733.nodeField = "keyValue";
connect733.protoField = "l_clavicle_keyValue";
IS731.connect[1] = connect733;

let connect734 = browser.currentScene.createNode("connect");
connect734.nodeField = "value_changed";
connect734.protoField = "l_clavicle_changed";
IS731.connect[2] = connect734;

OrientationInterpolator730.iS = IS731;

ProtoBody603.children[38] = OrientationInterpolator730;

let ROUTE735 = browser.currentScene.createNode("ROUTE");
ROUTE735.fromField = "fraction_changed";
ROUTE735.fromNode = "BehaviorClock";
ROUTE735.toField = "set_fraction";
ROUTE735.toNode = "l_clavicle_OI";
ProtoBody603.children[39] = ROUTE735;

let OrientationInterpolator736 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator736.DEF = "l_elbow_OI";
let IS737 = browser.currentScene.createNode("IS");
let connect738 = browser.currentScene.createNode("connect");
connect738.nodeField = "key";
connect738.protoField = "l_elbow_key";
IS737.connect = new MFNode();

IS737.connect[0] = connect738;

let connect739 = browser.currentScene.createNode("connect");
connect739.nodeField = "keyValue";
connect739.protoField = "l_elbow_keyValue";
IS737.connect[1] = connect739;

let connect740 = browser.currentScene.createNode("connect");
connect740.nodeField = "value_changed";
connect740.protoField = "l_elbow_changed";
IS737.connect[2] = connect740;

OrientationInterpolator736.iS = IS737;

ProtoBody603.children[40] = OrientationInterpolator736;

let ROUTE741 = browser.currentScene.createNode("ROUTE");
ROUTE741.fromField = "fraction_changed";
ROUTE741.fromNode = "BehaviorClock";
ROUTE741.toField = "set_fraction";
ROUTE741.toNode = "l_elbow_OI";
ProtoBody603.children[41] = ROUTE741;

let OrientationInterpolator742 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator742.DEF = "l_eyeball_OI";
let IS743 = browser.currentScene.createNode("IS");
let connect744 = browser.currentScene.createNode("connect");
connect744.nodeField = "key";
connect744.protoField = "l_eyeball_key";
IS743.connect = new MFNode();

IS743.connect[0] = connect744;

let connect745 = browser.currentScene.createNode("connect");
connect745.nodeField = "keyValue";
connect745.protoField = "l_eyeball_keyValue";
IS743.connect[1] = connect745;

let connect746 = browser.currentScene.createNode("connect");
connect746.nodeField = "value_changed";
connect746.protoField = "l_eyeball_changed";
IS743.connect[2] = connect746;

OrientationInterpolator742.iS = IS743;

ProtoBody603.children[42] = OrientationInterpolator742;

let ROUTE747 = browser.currentScene.createNode("ROUTE");
ROUTE747.fromField = "fraction_changed";
ROUTE747.fromNode = "BehaviorClock";
ROUTE747.toField = "set_fraction";
ROUTE747.toNode = "l_eyeball_OI";
ProtoBody603.children[43] = ROUTE747;

let OrientationInterpolator748 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator748.DEF = "l_eyeball_joint_OI";
let IS749 = browser.currentScene.createNode("IS");
let connect750 = browser.currentScene.createNode("connect");
connect750.nodeField = "key";
connect750.protoField = "l_eyeball_joint_key";
IS749.connect = new MFNode();

IS749.connect[0] = connect750;

let connect751 = browser.currentScene.createNode("connect");
connect751.nodeField = "keyValue";
connect751.protoField = "l_eyeball_joint_keyValue";
IS749.connect[1] = connect751;

let connect752 = browser.currentScene.createNode("connect");
connect752.nodeField = "value_changed";
connect752.protoField = "l_eyeball_joint_changed";
IS749.connect[2] = connect752;

OrientationInterpolator748.iS = IS749;

ProtoBody603.children[44] = OrientationInterpolator748;

let ROUTE753 = browser.currentScene.createNode("ROUTE");
ROUTE753.fromField = "fraction_changed";
ROUTE753.fromNode = "BehaviorClock";
ROUTE753.toField = "set_fraction";
ROUTE753.toNode = "l_eyeball_joint_OI";
ProtoBody603.children[45] = ROUTE753;

let OrientationInterpolator754 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator754.DEF = "l_eyebrow_OI";
let IS755 = browser.currentScene.createNode("IS");
let connect756 = browser.currentScene.createNode("connect");
connect756.nodeField = "key";
connect756.protoField = "l_eyebrow_key";
IS755.connect = new MFNode();

IS755.connect[0] = connect756;

let connect757 = browser.currentScene.createNode("connect");
connect757.nodeField = "keyValue";
connect757.protoField = "l_eyebrow_keyValue";
IS755.connect[1] = connect757;

let connect758 = browser.currentScene.createNode("connect");
connect758.nodeField = "value_changed";
connect758.protoField = "l_eyebrow_changed";
IS755.connect[2] = connect758;

OrientationInterpolator754.iS = IS755;

ProtoBody603.children[46] = OrientationInterpolator754;

let ROUTE759 = browser.currentScene.createNode("ROUTE");
ROUTE759.fromField = "fraction_changed";
ROUTE759.fromNode = "BehaviorClock";
ROUTE759.toField = "set_fraction";
ROUTE759.toNode = "l_eyebrow_OI";
ProtoBody603.children[47] = ROUTE759;

let OrientationInterpolator760 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator760.DEF = "l_eyebrow_joint_OI";
let IS761 = browser.currentScene.createNode("IS");
let connect762 = browser.currentScene.createNode("connect");
connect762.nodeField = "key";
connect762.protoField = "l_eyebrow_joint_key";
IS761.connect = new MFNode();

IS761.connect[0] = connect762;

let connect763 = browser.currentScene.createNode("connect");
connect763.nodeField = "keyValue";
connect763.protoField = "l_eyebrow_joint_keyValue";
IS761.connect[1] = connect763;

let connect764 = browser.currentScene.createNode("connect");
connect764.nodeField = "value_changed";
connect764.protoField = "l_eyebrow_joint_changed";
IS761.connect[2] = connect764;

OrientationInterpolator760.iS = IS761;

ProtoBody603.children[48] = OrientationInterpolator760;

let ROUTE765 = browser.currentScene.createNode("ROUTE");
ROUTE765.fromField = "fraction_changed";
ROUTE765.fromNode = "BehaviorClock";
ROUTE765.toField = "set_fraction";
ROUTE765.toNode = "l_eyebrow_joint_OI";
ProtoBody603.children[49] = ROUTE765;

let OrientationInterpolator766 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator766.DEF = "l_eyelid_OI";
let IS767 = browser.currentScene.createNode("IS");
let connect768 = browser.currentScene.createNode("connect");
connect768.nodeField = "key";
connect768.protoField = "l_eyelid_key";
IS767.connect = new MFNode();

IS767.connect[0] = connect768;

let connect769 = browser.currentScene.createNode("connect");
connect769.nodeField = "keyValue";
connect769.protoField = "l_eyelid_keyValue";
IS767.connect[1] = connect769;

let connect770 = browser.currentScene.createNode("connect");
connect770.nodeField = "value_changed";
connect770.protoField = "l_eyelid_changed";
IS767.connect[2] = connect770;

OrientationInterpolator766.iS = IS767;

ProtoBody603.children[50] = OrientationInterpolator766;

let ROUTE771 = browser.currentScene.createNode("ROUTE");
ROUTE771.fromField = "fraction_changed";
ROUTE771.fromNode = "BehaviorClock";
ROUTE771.toField = "set_fraction";
ROUTE771.toNode = "l_eyelid_OI";
ProtoBody603.children[51] = ROUTE771;

let OrientationInterpolator772 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator772.DEF = "l_eyelid_joint_OI";
let IS773 = browser.currentScene.createNode("IS");
let connect774 = browser.currentScene.createNode("connect");
connect774.nodeField = "key";
connect774.protoField = "l_eyelid_joint_key";
IS773.connect = new MFNode();

IS773.connect[0] = connect774;

let connect775 = browser.currentScene.createNode("connect");
connect775.nodeField = "keyValue";
connect775.protoField = "l_eyelid_joint_keyValue";
IS773.connect[1] = connect775;

let connect776 = browser.currentScene.createNode("connect");
connect776.nodeField = "value_changed";
connect776.protoField = "l_eyelid_joint_changed";
IS773.connect[2] = connect776;

OrientationInterpolator772.iS = IS773;

ProtoBody603.children[52] = OrientationInterpolator772;

let ROUTE777 = browser.currentScene.createNode("ROUTE");
ROUTE777.fromField = "fraction_changed";
ROUTE777.fromNode = "BehaviorClock";
ROUTE777.toField = "set_fraction";
ROUTE777.toNode = "l_eyelid_joint_OI";
ProtoBody603.children[53] = ROUTE777;

let OrientationInterpolator778 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator778.DEF = "l_forearm_OI";
let IS779 = browser.currentScene.createNode("IS");
let connect780 = browser.currentScene.createNode("connect");
connect780.nodeField = "key";
connect780.protoField = "l_forearm_key";
IS779.connect = new MFNode();

IS779.connect[0] = connect780;

let connect781 = browser.currentScene.createNode("connect");
connect781.nodeField = "keyValue";
connect781.protoField = "l_forearm_keyValue";
IS779.connect[1] = connect781;

let connect782 = browser.currentScene.createNode("connect");
connect782.nodeField = "value_changed";
connect782.protoField = "l_forearm_changed";
IS779.connect[2] = connect782;

OrientationInterpolator778.iS = IS779;

ProtoBody603.children[54] = OrientationInterpolator778;

let ROUTE783 = browser.currentScene.createNode("ROUTE");
ROUTE783.fromField = "fraction_changed";
ROUTE783.fromNode = "BehaviorClock";
ROUTE783.toField = "set_fraction";
ROUTE783.toNode = "l_forearm_OI";
ProtoBody603.children[55] = ROUTE783;

let OrientationInterpolator784 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator784.DEF = "l_forefoot_OI";
let IS785 = browser.currentScene.createNode("IS");
let connect786 = browser.currentScene.createNode("connect");
connect786.nodeField = "key";
connect786.protoField = "l_forefoot_key";
IS785.connect = new MFNode();

IS785.connect[0] = connect786;

let connect787 = browser.currentScene.createNode("connect");
connect787.nodeField = "keyValue";
connect787.protoField = "l_forefoot_keyValue";
IS785.connect[1] = connect787;

let connect788 = browser.currentScene.createNode("connect");
connect788.nodeField = "value_changed";
connect788.protoField = "l_forefoot_changed";
IS785.connect[2] = connect788;

OrientationInterpolator784.iS = IS785;

ProtoBody603.children[56] = OrientationInterpolator784;

let ROUTE789 = browser.currentScene.createNode("ROUTE");
ROUTE789.fromField = "fraction_changed";
ROUTE789.fromNode = "BehaviorClock";
ROUTE789.toField = "set_fraction";
ROUTE789.toNode = "l_forefoot_OI";
ProtoBody603.children[57] = ROUTE789;

let OrientationInterpolator790 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator790.DEF = "l_hand_OI";
let IS791 = browser.currentScene.createNode("IS");
let connect792 = browser.currentScene.createNode("connect");
connect792.nodeField = "key";
connect792.protoField = "l_hand_key";
IS791.connect = new MFNode();

IS791.connect[0] = connect792;

let connect793 = browser.currentScene.createNode("connect");
connect793.nodeField = "keyValue";
connect793.protoField = "l_hand_keyValue";
IS791.connect[1] = connect793;

let connect794 = browser.currentScene.createNode("connect");
connect794.nodeField = "value_changed";
connect794.protoField = "l_hand_changed";
IS791.connect[2] = connect794;

OrientationInterpolator790.iS = IS791;

ProtoBody603.children[58] = OrientationInterpolator790;

let ROUTE795 = browser.currentScene.createNode("ROUTE");
ROUTE795.fromField = "fraction_changed";
ROUTE795.fromNode = "BehaviorClock";
ROUTE795.toField = "set_fraction";
ROUTE795.toNode = "l_hand_OI";
ProtoBody603.children[59] = ROUTE795;

let OrientationInterpolator796 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator796.DEF = "l_hindfoot_OI";
let IS797 = browser.currentScene.createNode("IS");
let connect798 = browser.currentScene.createNode("connect");
connect798.nodeField = "key";
connect798.protoField = "l_hindfoot_key";
IS797.connect = new MFNode();

IS797.connect[0] = connect798;

let connect799 = browser.currentScene.createNode("connect");
connect799.nodeField = "keyValue";
connect799.protoField = "l_hindfoot_keyValue";
IS797.connect[1] = connect799;

let connect800 = browser.currentScene.createNode("connect");
connect800.nodeField = "value_changed";
connect800.protoField = "l_hindfoot_changed";
IS797.connect[2] = connect800;

OrientationInterpolator796.iS = IS797;

ProtoBody603.children[60] = OrientationInterpolator796;

let ROUTE801 = browser.currentScene.createNode("ROUTE");
ROUTE801.fromField = "fraction_changed";
ROUTE801.fromNode = "BehaviorClock";
ROUTE801.toField = "set_fraction";
ROUTE801.toNode = "l_hindfoot_OI";
ProtoBody603.children[61] = ROUTE801;

let OrientationInterpolator802 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator802.DEF = "l_hip_OI";
let IS803 = browser.currentScene.createNode("IS");
let connect804 = browser.currentScene.createNode("connect");
connect804.nodeField = "key";
connect804.protoField = "l_hip_key";
IS803.connect = new MFNode();

IS803.connect[0] = connect804;

let connect805 = browser.currentScene.createNode("connect");
connect805.nodeField = "keyValue";
connect805.protoField = "l_hip_keyValue";
IS803.connect[1] = connect805;

let connect806 = browser.currentScene.createNode("connect");
connect806.nodeField = "value_changed";
connect806.protoField = "l_hip_changed";
IS803.connect[2] = connect806;

OrientationInterpolator802.iS = IS803;

ProtoBody603.children[62] = OrientationInterpolator802;

let ROUTE807 = browser.currentScene.createNode("ROUTE");
ROUTE807.fromField = "fraction_changed";
ROUTE807.fromNode = "BehaviorClock";
ROUTE807.toField = "set_fraction";
ROUTE807.toNode = "l_hip_OI";
ProtoBody603.children[63] = ROUTE807;

let OrientationInterpolator808 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator808.DEF = "l_index0_OI";
let IS809 = browser.currentScene.createNode("IS");
let connect810 = browser.currentScene.createNode("connect");
connect810.nodeField = "key";
connect810.protoField = "l_index0_key";
IS809.connect = new MFNode();

IS809.connect[0] = connect810;

let connect811 = browser.currentScene.createNode("connect");
connect811.nodeField = "keyValue";
connect811.protoField = "l_index0_keyValue";
IS809.connect[1] = connect811;

let connect812 = browser.currentScene.createNode("connect");
connect812.nodeField = "value_changed";
connect812.protoField = "l_index0_changed";
IS809.connect[2] = connect812;

OrientationInterpolator808.iS = IS809;

ProtoBody603.children[64] = OrientationInterpolator808;

let ROUTE813 = browser.currentScene.createNode("ROUTE");
ROUTE813.fromField = "fraction_changed";
ROUTE813.fromNode = "BehaviorClock";
ROUTE813.toField = "set_fraction";
ROUTE813.toNode = "l_index0_OI";
ProtoBody603.children[65] = ROUTE813;

let OrientationInterpolator814 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator814.DEF = "l_index1_OI";
let IS815 = browser.currentScene.createNode("IS");
let connect816 = browser.currentScene.createNode("connect");
connect816.nodeField = "key";
connect816.protoField = "l_index1_key";
IS815.connect = new MFNode();

IS815.connect[0] = connect816;

let connect817 = browser.currentScene.createNode("connect");
connect817.nodeField = "keyValue";
connect817.protoField = "l_index1_keyValue";
IS815.connect[1] = connect817;

let connect818 = browser.currentScene.createNode("connect");
connect818.nodeField = "value_changed";
connect818.protoField = "l_index1_changed";
IS815.connect[2] = connect818;

OrientationInterpolator814.iS = IS815;

ProtoBody603.children[66] = OrientationInterpolator814;

let ROUTE819 = browser.currentScene.createNode("ROUTE");
ROUTE819.fromField = "fraction_changed";
ROUTE819.fromNode = "BehaviorClock";
ROUTE819.toField = "set_fraction";
ROUTE819.toNode = "l_index1_OI";
ProtoBody603.children[67] = ROUTE819;

let OrientationInterpolator820 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator820.DEF = "l_index2_OI";
let IS821 = browser.currentScene.createNode("IS");
let connect822 = browser.currentScene.createNode("connect");
connect822.nodeField = "key";
connect822.protoField = "l_index2_key";
IS821.connect = new MFNode();

IS821.connect[0] = connect822;

let connect823 = browser.currentScene.createNode("connect");
connect823.nodeField = "keyValue";
connect823.protoField = "l_index2_keyValue";
IS821.connect[1] = connect823;

let connect824 = browser.currentScene.createNode("connect");
connect824.nodeField = "value_changed";
connect824.protoField = "l_index2_changed";
IS821.connect[2] = connect824;

OrientationInterpolator820.iS = IS821;

ProtoBody603.children[68] = OrientationInterpolator820;

let ROUTE825 = browser.currentScene.createNode("ROUTE");
ROUTE825.fromField = "fraction_changed";
ROUTE825.fromNode = "BehaviorClock";
ROUTE825.toField = "set_fraction";
ROUTE825.toNode = "l_index2_OI";
ProtoBody603.children[69] = ROUTE825;

let OrientationInterpolator826 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator826.DEF = "l_index3_OI";
let IS827 = browser.currentScene.createNode("IS");
let connect828 = browser.currentScene.createNode("connect");
connect828.nodeField = "key";
connect828.protoField = "l_index3_key";
IS827.connect = new MFNode();

IS827.connect[0] = connect828;

let connect829 = browser.currentScene.createNode("connect");
connect829.nodeField = "keyValue";
connect829.protoField = "l_index3_keyValue";
IS827.connect[1] = connect829;

let connect830 = browser.currentScene.createNode("connect");
connect830.nodeField = "value_changed";
connect830.protoField = "l_index3_changed";
IS827.connect[2] = connect830;

OrientationInterpolator826.iS = IS827;

ProtoBody603.children[70] = OrientationInterpolator826;

let ROUTE831 = browser.currentScene.createNode("ROUTE");
ROUTE831.fromField = "fraction_changed";
ROUTE831.fromNode = "BehaviorClock";
ROUTE831.toField = "set_fraction";
ROUTE831.toNode = "l_index3_OI";
ProtoBody603.children[71] = ROUTE831;

let OrientationInterpolator832 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator832.DEF = "l_index_distal_OI";
let IS833 = browser.currentScene.createNode("IS");
let connect834 = browser.currentScene.createNode("connect");
connect834.nodeField = "key";
connect834.protoField = "l_index_distal_key";
IS833.connect = new MFNode();

IS833.connect[0] = connect834;

let connect835 = browser.currentScene.createNode("connect");
connect835.nodeField = "keyValue";
connect835.protoField = "l_index_distal_keyValue";
IS833.connect[1] = connect835;

let connect836 = browser.currentScene.createNode("connect");
connect836.nodeField = "value_changed";
connect836.protoField = "l_index_distal_changed";
IS833.connect[2] = connect836;

OrientationInterpolator832.iS = IS833;

ProtoBody603.children[72] = OrientationInterpolator832;

let ROUTE837 = browser.currentScene.createNode("ROUTE");
ROUTE837.fromField = "fraction_changed";
ROUTE837.fromNode = "BehaviorClock";
ROUTE837.toField = "set_fraction";
ROUTE837.toNode = "l_index_distal_OI";
ProtoBody603.children[73] = ROUTE837;

let OrientationInterpolator838 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator838.DEF = "l_index_metacarpal_OI";
let IS839 = browser.currentScene.createNode("IS");
let connect840 = browser.currentScene.createNode("connect");
connect840.nodeField = "key";
connect840.protoField = "l_index_metacarpal_key";
IS839.connect = new MFNode();

IS839.connect[0] = connect840;

let connect841 = browser.currentScene.createNode("connect");
connect841.nodeField = "keyValue";
connect841.protoField = "l_index_metacarpal_keyValue";
IS839.connect[1] = connect841;

let connect842 = browser.currentScene.createNode("connect");
connect842.nodeField = "value_changed";
connect842.protoField = "l_index_metacarpal_changed";
IS839.connect[2] = connect842;

OrientationInterpolator838.iS = IS839;

ProtoBody603.children[74] = OrientationInterpolator838;

let ROUTE843 = browser.currentScene.createNode("ROUTE");
ROUTE843.fromField = "fraction_changed";
ROUTE843.fromNode = "BehaviorClock";
ROUTE843.toField = "set_fraction";
ROUTE843.toNode = "l_index_metacarpal_OI";
ProtoBody603.children[75] = ROUTE843;

let OrientationInterpolator844 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator844.DEF = "l_index_middle_OI";
let IS845 = browser.currentScene.createNode("IS");
let connect846 = browser.currentScene.createNode("connect");
connect846.nodeField = "key";
connect846.protoField = "l_index_middle_key";
IS845.connect = new MFNode();

IS845.connect[0] = connect846;

let connect847 = browser.currentScene.createNode("connect");
connect847.nodeField = "keyValue";
connect847.protoField = "l_index_middle_keyValue";
IS845.connect[1] = connect847;

let connect848 = browser.currentScene.createNode("connect");
connect848.nodeField = "value_changed";
connect848.protoField = "l_index_middle_changed";
IS845.connect[2] = connect848;

OrientationInterpolator844.iS = IS845;

ProtoBody603.children[76] = OrientationInterpolator844;

let ROUTE849 = browser.currentScene.createNode("ROUTE");
ROUTE849.fromField = "fraction_changed";
ROUTE849.fromNode = "BehaviorClock";
ROUTE849.toField = "set_fraction";
ROUTE849.toNode = "l_index_middle_OI";
ProtoBody603.children[77] = ROUTE849;

let OrientationInterpolator850 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator850.DEF = "l_index_proximal_OI";
let IS851 = browser.currentScene.createNode("IS");
let connect852 = browser.currentScene.createNode("connect");
connect852.nodeField = "key";
connect852.protoField = "l_index_proximal_key";
IS851.connect = new MFNode();

IS851.connect[0] = connect852;

let connect853 = browser.currentScene.createNode("connect");
connect853.nodeField = "keyValue";
connect853.protoField = "l_index_proximal_keyValue";
IS851.connect[1] = connect853;

let connect854 = browser.currentScene.createNode("connect");
connect854.nodeField = "value_changed";
connect854.protoField = "l_index_proximal_changed";
IS851.connect[2] = connect854;

OrientationInterpolator850.iS = IS851;

ProtoBody603.children[78] = OrientationInterpolator850;

let ROUTE855 = browser.currentScene.createNode("ROUTE");
ROUTE855.fromField = "fraction_changed";
ROUTE855.fromNode = "BehaviorClock";
ROUTE855.toField = "set_fraction";
ROUTE855.toNode = "l_index_proximal_OI";
ProtoBody603.children[79] = ROUTE855;

let OrientationInterpolator856 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator856.DEF = "l_knee_OI";
let IS857 = browser.currentScene.createNode("IS");
let connect858 = browser.currentScene.createNode("connect");
connect858.nodeField = "key";
connect858.protoField = "l_knee_key";
IS857.connect = new MFNode();

IS857.connect[0] = connect858;

let connect859 = browser.currentScene.createNode("connect");
connect859.nodeField = "keyValue";
connect859.protoField = "l_knee_keyValue";
IS857.connect[1] = connect859;

let connect860 = browser.currentScene.createNode("connect");
connect860.nodeField = "value_changed";
connect860.protoField = "l_knee_changed";
IS857.connect[2] = connect860;

OrientationInterpolator856.iS = IS857;

ProtoBody603.children[80] = OrientationInterpolator856;

let ROUTE861 = browser.currentScene.createNode("ROUTE");
ROUTE861.fromField = "fraction_changed";
ROUTE861.fromNode = "BehaviorClock";
ROUTE861.toField = "set_fraction";
ROUTE861.toNode = "l_knee_OI";
ProtoBody603.children[81] = ROUTE861;

let OrientationInterpolator862 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator862.DEF = "l_metatarsal_OI";
let IS863 = browser.currentScene.createNode("IS");
let connect864 = browser.currentScene.createNode("connect");
connect864.nodeField = "key";
connect864.protoField = "l_metatarsal_key";
IS863.connect = new MFNode();

IS863.connect[0] = connect864;

let connect865 = browser.currentScene.createNode("connect");
connect865.nodeField = "keyValue";
connect865.protoField = "l_metatarsal_keyValue";
IS863.connect[1] = connect865;

let connect866 = browser.currentScene.createNode("connect");
connect866.nodeField = "value_changed";
connect866.protoField = "l_metatarsal_changed";
IS863.connect[2] = connect866;

OrientationInterpolator862.iS = IS863;

ProtoBody603.children[82] = OrientationInterpolator862;

let ROUTE867 = browser.currentScene.createNode("ROUTE");
ROUTE867.fromField = "fraction_changed";
ROUTE867.fromNode = "BehaviorClock";
ROUTE867.toField = "set_fraction";
ROUTE867.toNode = "l_metatarsal_OI";
ProtoBody603.children[83] = ROUTE867;

let OrientationInterpolator868 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator868.DEF = "l_middistal_OI";
let IS869 = browser.currentScene.createNode("IS");
let connect870 = browser.currentScene.createNode("connect");
connect870.nodeField = "key";
connect870.protoField = "l_middistal_key";
IS869.connect = new MFNode();

IS869.connect[0] = connect870;

let connect871 = browser.currentScene.createNode("connect");
connect871.nodeField = "keyValue";
connect871.protoField = "l_middistal_keyValue";
IS869.connect[1] = connect871;

let connect872 = browser.currentScene.createNode("connect");
connect872.nodeField = "value_changed";
connect872.protoField = "l_middistal_changed";
IS869.connect[2] = connect872;

OrientationInterpolator868.iS = IS869;

ProtoBody603.children[84] = OrientationInterpolator868;

let ROUTE873 = browser.currentScene.createNode("ROUTE");
ROUTE873.fromField = "fraction_changed";
ROUTE873.fromNode = "BehaviorClock";
ROUTE873.toField = "set_fraction";
ROUTE873.toNode = "l_middistal_OI";
ProtoBody603.children[85] = ROUTE873;

let OrientationInterpolator874 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator874.DEF = "l_middle0_OI";
let IS875 = browser.currentScene.createNode("IS");
let connect876 = browser.currentScene.createNode("connect");
connect876.nodeField = "key";
connect876.protoField = "l_middle0_key";
IS875.connect = new MFNode();

IS875.connect[0] = connect876;

let connect877 = browser.currentScene.createNode("connect");
connect877.nodeField = "keyValue";
connect877.protoField = "l_middle0_keyValue";
IS875.connect[1] = connect877;

let connect878 = browser.currentScene.createNode("connect");
connect878.nodeField = "value_changed";
connect878.protoField = "l_middle0_changed";
IS875.connect[2] = connect878;

OrientationInterpolator874.iS = IS875;

ProtoBody603.children[86] = OrientationInterpolator874;

let ROUTE879 = browser.currentScene.createNode("ROUTE");
ROUTE879.fromField = "fraction_changed";
ROUTE879.fromNode = "BehaviorClock";
ROUTE879.toField = "set_fraction";
ROUTE879.toNode = "l_middle0_OI";
ProtoBody603.children[87] = ROUTE879;

let OrientationInterpolator880 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator880.DEF = "l_middle1_OI";
let IS881 = browser.currentScene.createNode("IS");
let connect882 = browser.currentScene.createNode("connect");
connect882.nodeField = "key";
connect882.protoField = "l_middle1_key";
IS881.connect = new MFNode();

IS881.connect[0] = connect882;

let connect883 = browser.currentScene.createNode("connect");
connect883.nodeField = "keyValue";
connect883.protoField = "l_middle1_keyValue";
IS881.connect[1] = connect883;

let connect884 = browser.currentScene.createNode("connect");
connect884.nodeField = "value_changed";
connect884.protoField = "l_middle1_changed";
IS881.connect[2] = connect884;

OrientationInterpolator880.iS = IS881;

ProtoBody603.children[88] = OrientationInterpolator880;

let ROUTE885 = browser.currentScene.createNode("ROUTE");
ROUTE885.fromField = "fraction_changed";
ROUTE885.fromNode = "BehaviorClock";
ROUTE885.toField = "set_fraction";
ROUTE885.toNode = "l_middle1_OI";
ProtoBody603.children[89] = ROUTE885;

let OrientationInterpolator886 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator886.DEF = "l_middle2_OI";
let IS887 = browser.currentScene.createNode("IS");
let connect888 = browser.currentScene.createNode("connect");
connect888.nodeField = "key";
connect888.protoField = "l_middle2_key";
IS887.connect = new MFNode();

IS887.connect[0] = connect888;

let connect889 = browser.currentScene.createNode("connect");
connect889.nodeField = "keyValue";
connect889.protoField = "l_middle2_keyValue";
IS887.connect[1] = connect889;

let connect890 = browser.currentScene.createNode("connect");
connect890.nodeField = "value_changed";
connect890.protoField = "l_middle2_changed";
IS887.connect[2] = connect890;

OrientationInterpolator886.iS = IS887;

ProtoBody603.children[90] = OrientationInterpolator886;

let ROUTE891 = browser.currentScene.createNode("ROUTE");
ROUTE891.fromField = "fraction_changed";
ROUTE891.fromNode = "BehaviorClock";
ROUTE891.toField = "set_fraction";
ROUTE891.toNode = "l_middle2_OI";
ProtoBody603.children[91] = ROUTE891;

let OrientationInterpolator892 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator892.DEF = "l_middle3_OI";
let IS893 = browser.currentScene.createNode("IS");
let connect894 = browser.currentScene.createNode("connect");
connect894.nodeField = "key";
connect894.protoField = "l_middle3_key";
IS893.connect = new MFNode();

IS893.connect[0] = connect894;

let connect895 = browser.currentScene.createNode("connect");
connect895.nodeField = "keyValue";
connect895.protoField = "l_middle3_keyValue";
IS893.connect[1] = connect895;

let connect896 = browser.currentScene.createNode("connect");
connect896.nodeField = "value_changed";
connect896.protoField = "l_middle3_changed";
IS893.connect[2] = connect896;

OrientationInterpolator892.iS = IS893;

ProtoBody603.children[92] = OrientationInterpolator892;

let ROUTE897 = browser.currentScene.createNode("ROUTE");
ROUTE897.fromField = "fraction_changed";
ROUTE897.fromNode = "BehaviorClock";
ROUTE897.toField = "set_fraction";
ROUTE897.toNode = "l_middle3_OI";
ProtoBody603.children[93] = ROUTE897;

let OrientationInterpolator898 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator898.DEF = "l_middle_distal_OI";
let IS899 = browser.currentScene.createNode("IS");
let connect900 = browser.currentScene.createNode("connect");
connect900.nodeField = "key";
connect900.protoField = "l_middle_distal_key";
IS899.connect = new MFNode();

IS899.connect[0] = connect900;

let connect901 = browser.currentScene.createNode("connect");
connect901.nodeField = "keyValue";
connect901.protoField = "l_middle_distal_keyValue";
IS899.connect[1] = connect901;

let connect902 = browser.currentScene.createNode("connect");
connect902.nodeField = "value_changed";
connect902.protoField = "l_middle_distal_changed";
IS899.connect[2] = connect902;

OrientationInterpolator898.iS = IS899;

ProtoBody603.children[94] = OrientationInterpolator898;

let ROUTE903 = browser.currentScene.createNode("ROUTE");
ROUTE903.fromField = "fraction_changed";
ROUTE903.fromNode = "BehaviorClock";
ROUTE903.toField = "set_fraction";
ROUTE903.toNode = "l_middle_distal_OI";
ProtoBody603.children[95] = ROUTE903;

let OrientationInterpolator904 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator904.DEF = "l_middle_metacarpal_OI";
let IS905 = browser.currentScene.createNode("IS");
let connect906 = browser.currentScene.createNode("connect");
connect906.nodeField = "key";
connect906.protoField = "l_middle_metacarpal_key";
IS905.connect = new MFNode();

IS905.connect[0] = connect906;

let connect907 = browser.currentScene.createNode("connect");
connect907.nodeField = "keyValue";
connect907.protoField = "l_middle_metacarpal_keyValue";
IS905.connect[1] = connect907;

let connect908 = browser.currentScene.createNode("connect");
connect908.nodeField = "value_changed";
connect908.protoField = "l_middle_metacarpal_changed";
IS905.connect[2] = connect908;

OrientationInterpolator904.iS = IS905;

ProtoBody603.children[96] = OrientationInterpolator904;

let ROUTE909 = browser.currentScene.createNode("ROUTE");
ROUTE909.fromField = "fraction_changed";
ROUTE909.fromNode = "BehaviorClock";
ROUTE909.toField = "set_fraction";
ROUTE909.toNode = "l_middle_metacarpal_OI";
ProtoBody603.children[97] = ROUTE909;

let OrientationInterpolator910 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator910.DEF = "l_middle_middle_OI";
let IS911 = browser.currentScene.createNode("IS");
let connect912 = browser.currentScene.createNode("connect");
connect912.nodeField = "key";
connect912.protoField = "l_middle_middle_key";
IS911.connect = new MFNode();

IS911.connect[0] = connect912;

let connect913 = browser.currentScene.createNode("connect");
connect913.nodeField = "keyValue";
connect913.protoField = "l_middle_middle_keyValue";
IS911.connect[1] = connect913;

let connect914 = browser.currentScene.createNode("connect");
connect914.nodeField = "value_changed";
connect914.protoField = "l_middle_middle_changed";
IS911.connect[2] = connect914;

OrientationInterpolator910.iS = IS911;

ProtoBody603.children[98] = OrientationInterpolator910;

let ROUTE915 = browser.currentScene.createNode("ROUTE");
ROUTE915.fromField = "fraction_changed";
ROUTE915.fromNode = "BehaviorClock";
ROUTE915.toField = "set_fraction";
ROUTE915.toNode = "l_middle_middle_OI";
ProtoBody603.children[99] = ROUTE915;

let OrientationInterpolator916 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator916.DEF = "l_middle_proximal_OI";
let IS917 = browser.currentScene.createNode("IS");
let connect918 = browser.currentScene.createNode("connect");
connect918.nodeField = "key";
connect918.protoField = "l_middle_proximal_key";
IS917.connect = new MFNode();

IS917.connect[0] = connect918;

let connect919 = browser.currentScene.createNode("connect");
connect919.nodeField = "keyValue";
connect919.protoField = "l_middle_proximal_keyValue";
IS917.connect[1] = connect919;

let connect920 = browser.currentScene.createNode("connect");
connect920.nodeField = "value_changed";
connect920.protoField = "l_middle_proximal_changed";
IS917.connect[2] = connect920;

OrientationInterpolator916.iS = IS917;

ProtoBody603.children[100] = OrientationInterpolator916;

let ROUTE921 = browser.currentScene.createNode("ROUTE");
ROUTE921.fromField = "fraction_changed";
ROUTE921.fromNode = "BehaviorClock";
ROUTE921.toField = "set_fraction";
ROUTE921.toNode = "l_middle_proximal_OI";
ProtoBody603.children[101] = ROUTE921;

let OrientationInterpolator922 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator922.DEF = "l_midproximal_OI";
let IS923 = browser.currentScene.createNode("IS");
let connect924 = browser.currentScene.createNode("connect");
connect924.nodeField = "key";
connect924.protoField = "l_midproximal_key";
IS923.connect = new MFNode();

IS923.connect[0] = connect924;

let connect925 = browser.currentScene.createNode("connect");
connect925.nodeField = "keyValue";
connect925.protoField = "l_midproximal_keyValue";
IS923.connect[1] = connect925;

let connect926 = browser.currentScene.createNode("connect");
connect926.nodeField = "value_changed";
connect926.protoField = "l_midproximal_changed";
IS923.connect[2] = connect926;

OrientationInterpolator922.iS = IS923;

ProtoBody603.children[102] = OrientationInterpolator922;

let ROUTE927 = browser.currentScene.createNode("ROUTE");
ROUTE927.fromField = "fraction_changed";
ROUTE927.fromNode = "BehaviorClock";
ROUTE927.toField = "set_fraction";
ROUTE927.toNode = "l_midproximal_OI";
ProtoBody603.children[103] = ROUTE927;

let OrientationInterpolator928 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator928.DEF = "l_midtarsal_OI";
let IS929 = browser.currentScene.createNode("IS");
let connect930 = browser.currentScene.createNode("connect");
connect930.nodeField = "key";
connect930.protoField = "l_midtarsal_key";
IS929.connect = new MFNode();

IS929.connect[0] = connect930;

let connect931 = browser.currentScene.createNode("connect");
connect931.nodeField = "keyValue";
connect931.protoField = "l_midtarsal_keyValue";
IS929.connect[1] = connect931;

let connect932 = browser.currentScene.createNode("connect");
connect932.nodeField = "value_changed";
connect932.protoField = "l_midtarsal_changed";
IS929.connect[2] = connect932;

OrientationInterpolator928.iS = IS929;

ProtoBody603.children[104] = OrientationInterpolator928;

let ROUTE933 = browser.currentScene.createNode("ROUTE");
ROUTE933.fromField = "fraction_changed";
ROUTE933.fromNode = "BehaviorClock";
ROUTE933.toField = "set_fraction";
ROUTE933.toNode = "l_midtarsal_OI";
ProtoBody603.children[105] = ROUTE933;

let OrientationInterpolator934 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator934.DEF = "l_pinky0_OI";
let IS935 = browser.currentScene.createNode("IS");
let connect936 = browser.currentScene.createNode("connect");
connect936.nodeField = "key";
connect936.protoField = "l_pinky0_key";
IS935.connect = new MFNode();

IS935.connect[0] = connect936;

let connect937 = browser.currentScene.createNode("connect");
connect937.nodeField = "keyValue";
connect937.protoField = "l_pinky0_keyValue";
IS935.connect[1] = connect937;

let connect938 = browser.currentScene.createNode("connect");
connect938.nodeField = "value_changed";
connect938.protoField = "l_pinky0_changed";
IS935.connect[2] = connect938;

OrientationInterpolator934.iS = IS935;

ProtoBody603.children[106] = OrientationInterpolator934;

let ROUTE939 = browser.currentScene.createNode("ROUTE");
ROUTE939.fromField = "fraction_changed";
ROUTE939.fromNode = "BehaviorClock";
ROUTE939.toField = "set_fraction";
ROUTE939.toNode = "l_pinky0_OI";
ProtoBody603.children[107] = ROUTE939;

let OrientationInterpolator940 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator940.DEF = "l_pinky1_OI";
let IS941 = browser.currentScene.createNode("IS");
let connect942 = browser.currentScene.createNode("connect");
connect942.nodeField = "key";
connect942.protoField = "l_pinky1_key";
IS941.connect = new MFNode();

IS941.connect[0] = connect942;

let connect943 = browser.currentScene.createNode("connect");
connect943.nodeField = "keyValue";
connect943.protoField = "l_pinky1_keyValue";
IS941.connect[1] = connect943;

let connect944 = browser.currentScene.createNode("connect");
connect944.nodeField = "value_changed";
connect944.protoField = "l_pinky1_changed";
IS941.connect[2] = connect944;

OrientationInterpolator940.iS = IS941;

ProtoBody603.children[108] = OrientationInterpolator940;

let ROUTE945 = browser.currentScene.createNode("ROUTE");
ROUTE945.fromField = "fraction_changed";
ROUTE945.fromNode = "BehaviorClock";
ROUTE945.toField = "set_fraction";
ROUTE945.toNode = "l_pinky1_OI";
ProtoBody603.children[109] = ROUTE945;

let OrientationInterpolator946 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator946.DEF = "l_pinky2_OI";
let IS947 = browser.currentScene.createNode("IS");
let connect948 = browser.currentScene.createNode("connect");
connect948.nodeField = "key";
connect948.protoField = "l_pinky2_key";
IS947.connect = new MFNode();

IS947.connect[0] = connect948;

let connect949 = browser.currentScene.createNode("connect");
connect949.nodeField = "keyValue";
connect949.protoField = "l_pinky2_keyValue";
IS947.connect[1] = connect949;

let connect950 = browser.currentScene.createNode("connect");
connect950.nodeField = "value_changed";
connect950.protoField = "l_pinky2_changed";
IS947.connect[2] = connect950;

OrientationInterpolator946.iS = IS947;

ProtoBody603.children[110] = OrientationInterpolator946;

let ROUTE951 = browser.currentScene.createNode("ROUTE");
ROUTE951.fromField = "fraction_changed";
ROUTE951.fromNode = "BehaviorClock";
ROUTE951.toField = "set_fraction";
ROUTE951.toNode = "l_pinky2_OI";
ProtoBody603.children[111] = ROUTE951;

let OrientationInterpolator952 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator952.DEF = "l_pinky3_OI";
let IS953 = browser.currentScene.createNode("IS");
let connect954 = browser.currentScene.createNode("connect");
connect954.nodeField = "key";
connect954.protoField = "l_pinky3_key";
IS953.connect = new MFNode();

IS953.connect[0] = connect954;

let connect955 = browser.currentScene.createNode("connect");
connect955.nodeField = "keyValue";
connect955.protoField = "l_pinky3_keyValue";
IS953.connect[1] = connect955;

let connect956 = browser.currentScene.createNode("connect");
connect956.nodeField = "value_changed";
connect956.protoField = "l_pinky3_changed";
IS953.connect[2] = connect956;

OrientationInterpolator952.iS = IS953;

ProtoBody603.children[112] = OrientationInterpolator952;

let ROUTE957 = browser.currentScene.createNode("ROUTE");
ROUTE957.fromField = "fraction_changed";
ROUTE957.fromNode = "BehaviorClock";
ROUTE957.toField = "set_fraction";
ROUTE957.toNode = "l_pinky3_OI";
ProtoBody603.children[113] = ROUTE957;

let OrientationInterpolator958 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator958.DEF = "l_pinky_distal_OI";
let IS959 = browser.currentScene.createNode("IS");
let connect960 = browser.currentScene.createNode("connect");
connect960.nodeField = "key";
connect960.protoField = "l_pinky_distal_key";
IS959.connect = new MFNode();

IS959.connect[0] = connect960;

let connect961 = browser.currentScene.createNode("connect");
connect961.nodeField = "keyValue";
connect961.protoField = "l_pinky_distal_keyValue";
IS959.connect[1] = connect961;

let connect962 = browser.currentScene.createNode("connect");
connect962.nodeField = "value_changed";
connect962.protoField = "l_pinky_distal_changed";
IS959.connect[2] = connect962;

OrientationInterpolator958.iS = IS959;

ProtoBody603.children[114] = OrientationInterpolator958;

let ROUTE963 = browser.currentScene.createNode("ROUTE");
ROUTE963.fromField = "fraction_changed";
ROUTE963.fromNode = "BehaviorClock";
ROUTE963.toField = "set_fraction";
ROUTE963.toNode = "l_pinky_distal_OI";
ProtoBody603.children[115] = ROUTE963;

let OrientationInterpolator964 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator964.DEF = "l_pinky_metacarpal_OI";
let IS965 = browser.currentScene.createNode("IS");
let connect966 = browser.currentScene.createNode("connect");
connect966.nodeField = "key";
connect966.protoField = "l_pinky_metacarpal_key";
IS965.connect = new MFNode();

IS965.connect[0] = connect966;

let connect967 = browser.currentScene.createNode("connect");
connect967.nodeField = "keyValue";
connect967.protoField = "l_pinky_metacarpal_keyValue";
IS965.connect[1] = connect967;

let connect968 = browser.currentScene.createNode("connect");
connect968.nodeField = "value_changed";
connect968.protoField = "l_pinky_metacarpal_changed";
IS965.connect[2] = connect968;

OrientationInterpolator964.iS = IS965;

ProtoBody603.children[116] = OrientationInterpolator964;

let ROUTE969 = browser.currentScene.createNode("ROUTE");
ROUTE969.fromField = "fraction_changed";
ROUTE969.fromNode = "BehaviorClock";
ROUTE969.toField = "set_fraction";
ROUTE969.toNode = "l_pinky_metacarpal_OI";
ProtoBody603.children[117] = ROUTE969;

let OrientationInterpolator970 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator970.DEF = "l_pinky_middle_OI";
let IS971 = browser.currentScene.createNode("IS");
let connect972 = browser.currentScene.createNode("connect");
connect972.nodeField = "key";
connect972.protoField = "l_pinky_middle_key";
IS971.connect = new MFNode();

IS971.connect[0] = connect972;

let connect973 = browser.currentScene.createNode("connect");
connect973.nodeField = "keyValue";
connect973.protoField = "l_pinky_middle_keyValue";
IS971.connect[1] = connect973;

let connect974 = browser.currentScene.createNode("connect");
connect974.nodeField = "value_changed";
connect974.protoField = "l_pinky_middle_changed";
IS971.connect[2] = connect974;

OrientationInterpolator970.iS = IS971;

ProtoBody603.children[118] = OrientationInterpolator970;

let ROUTE975 = browser.currentScene.createNode("ROUTE");
ROUTE975.fromField = "fraction_changed";
ROUTE975.fromNode = "BehaviorClock";
ROUTE975.toField = "set_fraction";
ROUTE975.toNode = "l_pinky_middle_OI";
ProtoBody603.children[119] = ROUTE975;

let OrientationInterpolator976 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator976.DEF = "l_pinky_proximal_OI";
let IS977 = browser.currentScene.createNode("IS");
let connect978 = browser.currentScene.createNode("connect");
connect978.nodeField = "key";
connect978.protoField = "l_pinky_proximal_key";
IS977.connect = new MFNode();

IS977.connect[0] = connect978;

let connect979 = browser.currentScene.createNode("connect");
connect979.nodeField = "keyValue";
connect979.protoField = "l_pinky_proximal_keyValue";
IS977.connect[1] = connect979;

let connect980 = browser.currentScene.createNode("connect");
connect980.nodeField = "value_changed";
connect980.protoField = "l_pinky_proximal_changed";
IS977.connect[2] = connect980;

OrientationInterpolator976.iS = IS977;

ProtoBody603.children[120] = OrientationInterpolator976;

let ROUTE981 = browser.currentScene.createNode("ROUTE");
ROUTE981.fromField = "fraction_changed";
ROUTE981.fromNode = "BehaviorClock";
ROUTE981.toField = "set_fraction";
ROUTE981.toNode = "l_pinky_proximal_OI";
ProtoBody603.children[121] = ROUTE981;

let OrientationInterpolator982 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator982.DEF = "l_ring0_OI";
let IS983 = browser.currentScene.createNode("IS");
let connect984 = browser.currentScene.createNode("connect");
connect984.nodeField = "key";
connect984.protoField = "l_ring0_key";
IS983.connect = new MFNode();

IS983.connect[0] = connect984;

let connect985 = browser.currentScene.createNode("connect");
connect985.nodeField = "keyValue";
connect985.protoField = "l_ring0_keyValue";
IS983.connect[1] = connect985;

let connect986 = browser.currentScene.createNode("connect");
connect986.nodeField = "value_changed";
connect986.protoField = "l_ring0_changed";
IS983.connect[2] = connect986;

OrientationInterpolator982.iS = IS983;

ProtoBody603.children[122] = OrientationInterpolator982;

let ROUTE987 = browser.currentScene.createNode("ROUTE");
ROUTE987.fromField = "fraction_changed";
ROUTE987.fromNode = "BehaviorClock";
ROUTE987.toField = "set_fraction";
ROUTE987.toNode = "l_ring0_OI";
ProtoBody603.children[123] = ROUTE987;

let OrientationInterpolator988 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator988.DEF = "l_ring1_OI";
let IS989 = browser.currentScene.createNode("IS");
let connect990 = browser.currentScene.createNode("connect");
connect990.nodeField = "key";
connect990.protoField = "l_ring1_key";
IS989.connect = new MFNode();

IS989.connect[0] = connect990;

let connect991 = browser.currentScene.createNode("connect");
connect991.nodeField = "keyValue";
connect991.protoField = "l_ring1_keyValue";
IS989.connect[1] = connect991;

let connect992 = browser.currentScene.createNode("connect");
connect992.nodeField = "value_changed";
connect992.protoField = "l_ring1_changed";
IS989.connect[2] = connect992;

OrientationInterpolator988.iS = IS989;

ProtoBody603.children[124] = OrientationInterpolator988;

let ROUTE993 = browser.currentScene.createNode("ROUTE");
ROUTE993.fromField = "fraction_changed";
ROUTE993.fromNode = "BehaviorClock";
ROUTE993.toField = "set_fraction";
ROUTE993.toNode = "l_ring1_OI";
ProtoBody603.children[125] = ROUTE993;

let OrientationInterpolator994 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator994.DEF = "l_ring2_OI";
let IS995 = browser.currentScene.createNode("IS");
let connect996 = browser.currentScene.createNode("connect");
connect996.nodeField = "key";
connect996.protoField = "l_ring2_key";
IS995.connect = new MFNode();

IS995.connect[0] = connect996;

let connect997 = browser.currentScene.createNode("connect");
connect997.nodeField = "keyValue";
connect997.protoField = "l_ring2_keyValue";
IS995.connect[1] = connect997;

let connect998 = browser.currentScene.createNode("connect");
connect998.nodeField = "value_changed";
connect998.protoField = "l_ring2_changed";
IS995.connect[2] = connect998;

OrientationInterpolator994.iS = IS995;

ProtoBody603.children[126] = OrientationInterpolator994;

let ROUTE999 = browser.currentScene.createNode("ROUTE");
ROUTE999.fromField = "fraction_changed";
ROUTE999.fromNode = "BehaviorClock";
ROUTE999.toField = "set_fraction";
ROUTE999.toNode = "l_ring2_OI";
ProtoBody603.children[127] = ROUTE999;

let OrientationInterpolator1000 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1000.DEF = "l_ring3_OI";
let IS1001 = browser.currentScene.createNode("IS");
let connect1002 = browser.currentScene.createNode("connect");
connect1002.nodeField = "key";
connect1002.protoField = "l_ring3_key";
IS1001.connect = new MFNode();

IS1001.connect[0] = connect1002;

let connect1003 = browser.currentScene.createNode("connect");
connect1003.nodeField = "keyValue";
connect1003.protoField = "l_ring3_keyValue";
IS1001.connect[1] = connect1003;

let connect1004 = browser.currentScene.createNode("connect");
connect1004.nodeField = "value_changed";
connect1004.protoField = "l_ring3_changed";
IS1001.connect[2] = connect1004;

OrientationInterpolator1000.iS = IS1001;

ProtoBody603.children[128] = OrientationInterpolator1000;

let ROUTE1005 = browser.currentScene.createNode("ROUTE");
ROUTE1005.fromField = "fraction_changed";
ROUTE1005.fromNode = "BehaviorClock";
ROUTE1005.toField = "set_fraction";
ROUTE1005.toNode = "l_ring3_OI";
ProtoBody603.children[129] = ROUTE1005;

let OrientationInterpolator1006 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1006.DEF = "l_ring_distal_OI";
let IS1007 = browser.currentScene.createNode("IS");
let connect1008 = browser.currentScene.createNode("connect");
connect1008.nodeField = "key";
connect1008.protoField = "l_ring_distal_key";
IS1007.connect = new MFNode();

IS1007.connect[0] = connect1008;

let connect1009 = browser.currentScene.createNode("connect");
connect1009.nodeField = "keyValue";
connect1009.protoField = "l_ring_distal_keyValue";
IS1007.connect[1] = connect1009;

let connect1010 = browser.currentScene.createNode("connect");
connect1010.nodeField = "value_changed";
connect1010.protoField = "l_ring_distal_changed";
IS1007.connect[2] = connect1010;

OrientationInterpolator1006.iS = IS1007;

ProtoBody603.children[130] = OrientationInterpolator1006;

let ROUTE1011 = browser.currentScene.createNode("ROUTE");
ROUTE1011.fromField = "fraction_changed";
ROUTE1011.fromNode = "BehaviorClock";
ROUTE1011.toField = "set_fraction";
ROUTE1011.toNode = "l_ring_distal_OI";
ProtoBody603.children[131] = ROUTE1011;

let OrientationInterpolator1012 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1012.DEF = "l_ring_metacarpal_OI";
let IS1013 = browser.currentScene.createNode("IS");
let connect1014 = browser.currentScene.createNode("connect");
connect1014.nodeField = "key";
connect1014.protoField = "l_ring_metacarpal_key";
IS1013.connect = new MFNode();

IS1013.connect[0] = connect1014;

let connect1015 = browser.currentScene.createNode("connect");
connect1015.nodeField = "keyValue";
connect1015.protoField = "l_ring_metacarpal_keyValue";
IS1013.connect[1] = connect1015;

let connect1016 = browser.currentScene.createNode("connect");
connect1016.nodeField = "value_changed";
connect1016.protoField = "l_ring_metacarpal_changed";
IS1013.connect[2] = connect1016;

OrientationInterpolator1012.iS = IS1013;

ProtoBody603.children[132] = OrientationInterpolator1012;

let ROUTE1017 = browser.currentScene.createNode("ROUTE");
ROUTE1017.fromField = "fraction_changed";
ROUTE1017.fromNode = "BehaviorClock";
ROUTE1017.toField = "set_fraction";
ROUTE1017.toNode = "l_ring_metacarpal_OI";
ProtoBody603.children[133] = ROUTE1017;

let OrientationInterpolator1018 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1018.DEF = "l_ring_middle_OI";
let IS1019 = browser.currentScene.createNode("IS");
let connect1020 = browser.currentScene.createNode("connect");
connect1020.nodeField = "key";
connect1020.protoField = "l_ring_middle_key";
IS1019.connect = new MFNode();

IS1019.connect[0] = connect1020;

let connect1021 = browser.currentScene.createNode("connect");
connect1021.nodeField = "keyValue";
connect1021.protoField = "l_ring_middle_keyValue";
IS1019.connect[1] = connect1021;

let connect1022 = browser.currentScene.createNode("connect");
connect1022.nodeField = "value_changed";
connect1022.protoField = "l_ring_middle_changed";
IS1019.connect[2] = connect1022;

OrientationInterpolator1018.iS = IS1019;

ProtoBody603.children[134] = OrientationInterpolator1018;

let ROUTE1023 = browser.currentScene.createNode("ROUTE");
ROUTE1023.fromField = "fraction_changed";
ROUTE1023.fromNode = "BehaviorClock";
ROUTE1023.toField = "set_fraction";
ROUTE1023.toNode = "l_ring_middle_OI";
ProtoBody603.children[135] = ROUTE1023;

let OrientationInterpolator1024 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1024.DEF = "l_ring_proximal_OI";
let IS1025 = browser.currentScene.createNode("IS");
let connect1026 = browser.currentScene.createNode("connect");
connect1026.nodeField = "key";
connect1026.protoField = "l_ring_proximal_key";
IS1025.connect = new MFNode();

IS1025.connect[0] = connect1026;

let connect1027 = browser.currentScene.createNode("connect");
connect1027.nodeField = "keyValue";
connect1027.protoField = "l_ring_proximal_keyValue";
IS1025.connect[1] = connect1027;

let connect1028 = browser.currentScene.createNode("connect");
connect1028.nodeField = "value_changed";
connect1028.protoField = "l_ring_proximal_changed";
IS1025.connect[2] = connect1028;

OrientationInterpolator1024.iS = IS1025;

ProtoBody603.children[136] = OrientationInterpolator1024;

let ROUTE1029 = browser.currentScene.createNode("ROUTE");
ROUTE1029.fromField = "fraction_changed";
ROUTE1029.fromNode = "BehaviorClock";
ROUTE1029.toField = "set_fraction";
ROUTE1029.toNode = "l_ring_proximal_OI";
ProtoBody603.children[137] = ROUTE1029;

let OrientationInterpolator1030 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1030.DEF = "l_scapula_OI";
let IS1031 = browser.currentScene.createNode("IS");
let connect1032 = browser.currentScene.createNode("connect");
connect1032.nodeField = "key";
connect1032.protoField = "l_scapula_key";
IS1031.connect = new MFNode();

IS1031.connect[0] = connect1032;

let connect1033 = browser.currentScene.createNode("connect");
connect1033.nodeField = "keyValue";
connect1033.protoField = "l_scapula_keyValue";
IS1031.connect[1] = connect1033;

let connect1034 = browser.currentScene.createNode("connect");
connect1034.nodeField = "value_changed";
connect1034.protoField = "l_scapula_changed";
IS1031.connect[2] = connect1034;

OrientationInterpolator1030.iS = IS1031;

ProtoBody603.children[138] = OrientationInterpolator1030;

let ROUTE1035 = browser.currentScene.createNode("ROUTE");
ROUTE1035.fromField = "fraction_changed";
ROUTE1035.fromNode = "BehaviorClock";
ROUTE1035.toField = "set_fraction";
ROUTE1035.toNode = "l_scapula_OI";
ProtoBody603.children[139] = ROUTE1035;

let OrientationInterpolator1036 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1036.DEF = "l_shoulder_OI";
let IS1037 = browser.currentScene.createNode("IS");
let connect1038 = browser.currentScene.createNode("connect");
connect1038.nodeField = "key";
connect1038.protoField = "l_shoulder_key";
IS1037.connect = new MFNode();

IS1037.connect[0] = connect1038;

let connect1039 = browser.currentScene.createNode("connect");
connect1039.nodeField = "keyValue";
connect1039.protoField = "l_shoulder_keyValue";
IS1037.connect[1] = connect1039;

let connect1040 = browser.currentScene.createNode("connect");
connect1040.nodeField = "value_changed";
connect1040.protoField = "l_shoulder_changed";
IS1037.connect[2] = connect1040;

OrientationInterpolator1036.iS = IS1037;

ProtoBody603.children[140] = OrientationInterpolator1036;

let ROUTE1041 = browser.currentScene.createNode("ROUTE");
ROUTE1041.fromField = "fraction_changed";
ROUTE1041.fromNode = "BehaviorClock";
ROUTE1041.toField = "set_fraction";
ROUTE1041.toNode = "l_shoulder_OI";
ProtoBody603.children[141] = ROUTE1041;

let OrientationInterpolator1042 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1042.DEF = "l_sternoclavicular_OI";
let IS1043 = browser.currentScene.createNode("IS");
let connect1044 = browser.currentScene.createNode("connect");
connect1044.nodeField = "key";
connect1044.protoField = "l_sternoclavicular_key";
IS1043.connect = new MFNode();

IS1043.connect[0] = connect1044;

let connect1045 = browser.currentScene.createNode("connect");
connect1045.nodeField = "keyValue";
connect1045.protoField = "l_sternoclavicular_keyValue";
IS1043.connect[1] = connect1045;

let connect1046 = browser.currentScene.createNode("connect");
connect1046.nodeField = "value_changed";
connect1046.protoField = "l_sternoclavicular_changed";
IS1043.connect[2] = connect1046;

OrientationInterpolator1042.iS = IS1043;

ProtoBody603.children[142] = OrientationInterpolator1042;

let ROUTE1047 = browser.currentScene.createNode("ROUTE");
ROUTE1047.fromField = "fraction_changed";
ROUTE1047.fromNode = "BehaviorClock";
ROUTE1047.toField = "set_fraction";
ROUTE1047.toNode = "l_sternoclavicular_OI";
ProtoBody603.children[143] = ROUTE1047;

let OrientationInterpolator1048 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1048.DEF = "l_subtalar_OI";
let IS1049 = browser.currentScene.createNode("IS");
let connect1050 = browser.currentScene.createNode("connect");
connect1050.nodeField = "key";
connect1050.protoField = "l_subtalar_key";
IS1049.connect = new MFNode();

IS1049.connect[0] = connect1050;

let connect1051 = browser.currentScene.createNode("connect");
connect1051.nodeField = "keyValue";
connect1051.protoField = "l_subtalar_keyValue";
IS1049.connect[1] = connect1051;

let connect1052 = browser.currentScene.createNode("connect");
connect1052.nodeField = "value_changed";
connect1052.protoField = "l_subtalar_changed";
IS1049.connect[2] = connect1052;

OrientationInterpolator1048.iS = IS1049;

ProtoBody603.children[144] = OrientationInterpolator1048;

let ROUTE1053 = browser.currentScene.createNode("ROUTE");
ROUTE1053.fromField = "fraction_changed";
ROUTE1053.fromNode = "BehaviorClock";
ROUTE1053.toField = "set_fraction";
ROUTE1053.toNode = "l_subtalar_OI";
ProtoBody603.children[145] = ROUTE1053;

let OrientationInterpolator1054 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1054.DEF = "l_thigh_OI";
let IS1055 = browser.currentScene.createNode("IS");
let connect1056 = browser.currentScene.createNode("connect");
connect1056.nodeField = "key";
connect1056.protoField = "l_thigh_key";
IS1055.connect = new MFNode();

IS1055.connect[0] = connect1056;

let connect1057 = browser.currentScene.createNode("connect");
connect1057.nodeField = "keyValue";
connect1057.protoField = "l_thigh_keyValue";
IS1055.connect[1] = connect1057;

let connect1058 = browser.currentScene.createNode("connect");
connect1058.nodeField = "value_changed";
connect1058.protoField = "l_thigh_changed";
IS1055.connect[2] = connect1058;

OrientationInterpolator1054.iS = IS1055;

ProtoBody603.children[146] = OrientationInterpolator1054;

let ROUTE1059 = browser.currentScene.createNode("ROUTE");
ROUTE1059.fromField = "fraction_changed";
ROUTE1059.fromNode = "BehaviorClock";
ROUTE1059.toField = "set_fraction";
ROUTE1059.toNode = "l_thigh_OI";
ProtoBody603.children[147] = ROUTE1059;

let OrientationInterpolator1060 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1060.DEF = "l_thumb1_OI";
let IS1061 = browser.currentScene.createNode("IS");
let connect1062 = browser.currentScene.createNode("connect");
connect1062.nodeField = "key";
connect1062.protoField = "l_thumb1_key";
IS1061.connect = new MFNode();

IS1061.connect[0] = connect1062;

let connect1063 = browser.currentScene.createNode("connect");
connect1063.nodeField = "keyValue";
connect1063.protoField = "l_thumb1_keyValue";
IS1061.connect[1] = connect1063;

let connect1064 = browser.currentScene.createNode("connect");
connect1064.nodeField = "value_changed";
connect1064.protoField = "l_thumb1_changed";
IS1061.connect[2] = connect1064;

OrientationInterpolator1060.iS = IS1061;

ProtoBody603.children[148] = OrientationInterpolator1060;

let ROUTE1065 = browser.currentScene.createNode("ROUTE");
ROUTE1065.fromField = "fraction_changed";
ROUTE1065.fromNode = "BehaviorClock";
ROUTE1065.toField = "set_fraction";
ROUTE1065.toNode = "l_thumb1_OI";
ProtoBody603.children[149] = ROUTE1065;

let OrientationInterpolator1066 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1066.DEF = "l_thumb2_OI";
let IS1067 = browser.currentScene.createNode("IS");
let connect1068 = browser.currentScene.createNode("connect");
connect1068.nodeField = "key";
connect1068.protoField = "l_thumb2_key";
IS1067.connect = new MFNode();

IS1067.connect[0] = connect1068;

let connect1069 = browser.currentScene.createNode("connect");
connect1069.nodeField = "keyValue";
connect1069.protoField = "l_thumb2_keyValue";
IS1067.connect[1] = connect1069;

let connect1070 = browser.currentScene.createNode("connect");
connect1070.nodeField = "value_changed";
connect1070.protoField = "l_thumb2_changed";
IS1067.connect[2] = connect1070;

OrientationInterpolator1066.iS = IS1067;

ProtoBody603.children[150] = OrientationInterpolator1066;

let ROUTE1071 = browser.currentScene.createNode("ROUTE");
ROUTE1071.fromField = "fraction_changed";
ROUTE1071.fromNode = "BehaviorClock";
ROUTE1071.toField = "set_fraction";
ROUTE1071.toNode = "l_thumb2_OI";
ProtoBody603.children[151] = ROUTE1071;

let OrientationInterpolator1072 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1072.DEF = "l_thumb3_OI";
let IS1073 = browser.currentScene.createNode("IS");
let connect1074 = browser.currentScene.createNode("connect");
connect1074.nodeField = "key";
connect1074.protoField = "l_thumb3_key";
IS1073.connect = new MFNode();

IS1073.connect[0] = connect1074;

let connect1075 = browser.currentScene.createNode("connect");
connect1075.nodeField = "keyValue";
connect1075.protoField = "l_thumb3_keyValue";
IS1073.connect[1] = connect1075;

let connect1076 = browser.currentScene.createNode("connect");
connect1076.nodeField = "value_changed";
connect1076.protoField = "l_thumb3_changed";
IS1073.connect[2] = connect1076;

OrientationInterpolator1072.iS = IS1073;

ProtoBody603.children[152] = OrientationInterpolator1072;

let ROUTE1077 = browser.currentScene.createNode("ROUTE");
ROUTE1077.fromField = "fraction_changed";
ROUTE1077.fromNode = "BehaviorClock";
ROUTE1077.toField = "set_fraction";
ROUTE1077.toNode = "l_thumb3_OI";
ProtoBody603.children[153] = ROUTE1077;

let OrientationInterpolator1078 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1078.DEF = "l_thumb_distal_OI";
let IS1079 = browser.currentScene.createNode("IS");
let connect1080 = browser.currentScene.createNode("connect");
connect1080.nodeField = "key";
connect1080.protoField = "l_thumb_distal_key";
IS1079.connect = new MFNode();

IS1079.connect[0] = connect1080;

let connect1081 = browser.currentScene.createNode("connect");
connect1081.nodeField = "keyValue";
connect1081.protoField = "l_thumb_distal_keyValue";
IS1079.connect[1] = connect1081;

let connect1082 = browser.currentScene.createNode("connect");
connect1082.nodeField = "value_changed";
connect1082.protoField = "l_thumb_distal_changed";
IS1079.connect[2] = connect1082;

OrientationInterpolator1078.iS = IS1079;

ProtoBody603.children[154] = OrientationInterpolator1078;

let ROUTE1083 = browser.currentScene.createNode("ROUTE");
ROUTE1083.fromField = "fraction_changed";
ROUTE1083.fromNode = "BehaviorClock";
ROUTE1083.toField = "set_fraction";
ROUTE1083.toNode = "l_thumb_distal_OI";
ProtoBody603.children[155] = ROUTE1083;

let OrientationInterpolator1084 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1084.DEF = "l_thumb_metacarpal_OI";
let IS1085 = browser.currentScene.createNode("IS");
let connect1086 = browser.currentScene.createNode("connect");
connect1086.nodeField = "key";
connect1086.protoField = "l_thumb_metacarpal_key";
IS1085.connect = new MFNode();

IS1085.connect[0] = connect1086;

let connect1087 = browser.currentScene.createNode("connect");
connect1087.nodeField = "keyValue";
connect1087.protoField = "l_thumb_metacarpal_keyValue";
IS1085.connect[1] = connect1087;

let connect1088 = browser.currentScene.createNode("connect");
connect1088.nodeField = "value_changed";
connect1088.protoField = "l_thumb_metacarpal_changed";
IS1085.connect[2] = connect1088;

OrientationInterpolator1084.iS = IS1085;

ProtoBody603.children[156] = OrientationInterpolator1084;

let ROUTE1089 = browser.currentScene.createNode("ROUTE");
ROUTE1089.fromField = "fraction_changed";
ROUTE1089.fromNode = "BehaviorClock";
ROUTE1089.toField = "set_fraction";
ROUTE1089.toNode = "l_thumb_metacarpal_OI";
ProtoBody603.children[157] = ROUTE1089;

let OrientationInterpolator1090 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1090.DEF = "l_thumb_proximal_OI";
let IS1091 = browser.currentScene.createNode("IS");
let connect1092 = browser.currentScene.createNode("connect");
connect1092.nodeField = "key";
connect1092.protoField = "l_thumb_proximal_key";
IS1091.connect = new MFNode();

IS1091.connect[0] = connect1092;

let connect1093 = browser.currentScene.createNode("connect");
connect1093.nodeField = "keyValue";
connect1093.protoField = "l_thumb_proximal_keyValue";
IS1091.connect[1] = connect1093;

let connect1094 = browser.currentScene.createNode("connect");
connect1094.nodeField = "value_changed";
connect1094.protoField = "l_thumb_proximal_changed";
IS1091.connect[2] = connect1094;

OrientationInterpolator1090.iS = IS1091;

ProtoBody603.children[158] = OrientationInterpolator1090;

let ROUTE1095 = browser.currentScene.createNode("ROUTE");
ROUTE1095.fromField = "fraction_changed";
ROUTE1095.fromNode = "BehaviorClock";
ROUTE1095.toField = "set_fraction";
ROUTE1095.toNode = "l_thumb_proximal_OI";
ProtoBody603.children[159] = ROUTE1095;

let OrientationInterpolator1096 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1096.DEF = "l_upperarm_OI";
let IS1097 = browser.currentScene.createNode("IS");
let connect1098 = browser.currentScene.createNode("connect");
connect1098.nodeField = "key";
connect1098.protoField = "l_upperarm_key";
IS1097.connect = new MFNode();

IS1097.connect[0] = connect1098;

let connect1099 = browser.currentScene.createNode("connect");
connect1099.nodeField = "keyValue";
connect1099.protoField = "l_upperarm_keyValue";
IS1097.connect[1] = connect1099;

let connect1100 = browser.currentScene.createNode("connect");
connect1100.nodeField = "value_changed";
connect1100.protoField = "l_upperarm_changed";
IS1097.connect[2] = connect1100;

OrientationInterpolator1096.iS = IS1097;

ProtoBody603.children[160] = OrientationInterpolator1096;

let ROUTE1101 = browser.currentScene.createNode("ROUTE");
ROUTE1101.fromField = "fraction_changed";
ROUTE1101.fromNode = "BehaviorClock";
ROUTE1101.toField = "set_fraction";
ROUTE1101.toNode = "l_upperarm_OI";
ProtoBody603.children[161] = ROUTE1101;

let OrientationInterpolator1102 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1102.DEF = "l_wrist_OI";
let IS1103 = browser.currentScene.createNode("IS");
let connect1104 = browser.currentScene.createNode("connect");
connect1104.nodeField = "key";
connect1104.protoField = "l_wrist_key";
IS1103.connect = new MFNode();

IS1103.connect[0] = connect1104;

let connect1105 = browser.currentScene.createNode("connect");
connect1105.nodeField = "keyValue";
connect1105.protoField = "l_wrist_keyValue";
IS1103.connect[1] = connect1105;

let connect1106 = browser.currentScene.createNode("connect");
connect1106.nodeField = "value_changed";
connect1106.protoField = "l_wrist_changed";
IS1103.connect[2] = connect1106;

OrientationInterpolator1102.iS = IS1103;

ProtoBody603.children[162] = OrientationInterpolator1102;

let ROUTE1107 = browser.currentScene.createNode("ROUTE");
ROUTE1107.fromField = "fraction_changed";
ROUTE1107.fromNode = "BehaviorClock";
ROUTE1107.toField = "set_fraction";
ROUTE1107.toNode = "l_wrist_OI";
ProtoBody603.children[163] = ROUTE1107;

let OrientationInterpolator1108 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1108.DEF = "pelvis_OI";
let IS1109 = browser.currentScene.createNode("IS");
let connect1110 = browser.currentScene.createNode("connect");
connect1110.nodeField = "key";
connect1110.protoField = "pelvis_key";
IS1109.connect = new MFNode();

IS1109.connect[0] = connect1110;

let connect1111 = browser.currentScene.createNode("connect");
connect1111.nodeField = "keyValue";
connect1111.protoField = "pelvis_keyValue";
IS1109.connect[1] = connect1111;

let connect1112 = browser.currentScene.createNode("connect");
connect1112.nodeField = "value_changed";
connect1112.protoField = "pelvis_changed";
IS1109.connect[2] = connect1112;

OrientationInterpolator1108.iS = IS1109;

ProtoBody603.children[164] = OrientationInterpolator1108;

let ROUTE1113 = browser.currentScene.createNode("ROUTE");
ROUTE1113.fromField = "fraction_changed";
ROUTE1113.fromNode = "BehaviorClock";
ROUTE1113.toField = "set_fraction";
ROUTE1113.toNode = "pelvis_OI";
ProtoBody603.children[165] = ROUTE1113;

let OrientationInterpolator1114 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1114.DEF = "r_acromioclavicular_OI";
let IS1115 = browser.currentScene.createNode("IS");
let connect1116 = browser.currentScene.createNode("connect");
connect1116.nodeField = "key";
connect1116.protoField = "r_acromioclavicular_key";
IS1115.connect = new MFNode();

IS1115.connect[0] = connect1116;

let connect1117 = browser.currentScene.createNode("connect");
connect1117.nodeField = "keyValue";
connect1117.protoField = "r_acromioclavicular_keyValue";
IS1115.connect[1] = connect1117;

let connect1118 = browser.currentScene.createNode("connect");
connect1118.nodeField = "value_changed";
connect1118.protoField = "r_acromioclavicular_changed";
IS1115.connect[2] = connect1118;

OrientationInterpolator1114.iS = IS1115;

ProtoBody603.children[166] = OrientationInterpolator1114;

let ROUTE1119 = browser.currentScene.createNode("ROUTE");
ROUTE1119.fromField = "fraction_changed";
ROUTE1119.fromNode = "BehaviorClock";
ROUTE1119.toField = "set_fraction";
ROUTE1119.toNode = "r_acromioclavicular_OI";
ProtoBody603.children[167] = ROUTE1119;

let OrientationInterpolator1120 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1120.DEF = "r_ankle_OI";
let IS1121 = browser.currentScene.createNode("IS");
let connect1122 = browser.currentScene.createNode("connect");
connect1122.nodeField = "key";
connect1122.protoField = "r_ankle_key";
IS1121.connect = new MFNode();

IS1121.connect[0] = connect1122;

let connect1123 = browser.currentScene.createNode("connect");
connect1123.nodeField = "keyValue";
connect1123.protoField = "r_ankle_keyValue";
IS1121.connect[1] = connect1123;

let connect1124 = browser.currentScene.createNode("connect");
connect1124.nodeField = "value_changed";
connect1124.protoField = "r_ankle_changed";
IS1121.connect[2] = connect1124;

OrientationInterpolator1120.iS = IS1121;

ProtoBody603.children[168] = OrientationInterpolator1120;

let ROUTE1125 = browser.currentScene.createNode("ROUTE");
ROUTE1125.fromField = "fraction_changed";
ROUTE1125.fromNode = "BehaviorClock";
ROUTE1125.toField = "set_fraction";
ROUTE1125.toNode = "r_ankle_OI";
ProtoBody603.children[169] = ROUTE1125;

let OrientationInterpolator1126 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1126.DEF = "r_calf_OI";
let IS1127 = browser.currentScene.createNode("IS");
let connect1128 = browser.currentScene.createNode("connect");
connect1128.nodeField = "key";
connect1128.protoField = "r_calf_key";
IS1127.connect = new MFNode();

IS1127.connect[0] = connect1128;

let connect1129 = browser.currentScene.createNode("connect");
connect1129.nodeField = "keyValue";
connect1129.protoField = "r_calf_keyValue";
IS1127.connect[1] = connect1129;

let connect1130 = browser.currentScene.createNode("connect");
connect1130.nodeField = "value_changed";
connect1130.protoField = "r_calf_changed";
IS1127.connect[2] = connect1130;

OrientationInterpolator1126.iS = IS1127;

ProtoBody603.children[170] = OrientationInterpolator1126;

let ROUTE1131 = browser.currentScene.createNode("ROUTE");
ROUTE1131.fromField = "fraction_changed";
ROUTE1131.fromNode = "BehaviorClock";
ROUTE1131.toField = "set_fraction";
ROUTE1131.toNode = "r_calf_OI";
ProtoBody603.children[171] = ROUTE1131;

let OrientationInterpolator1132 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1132.DEF = "r_clavicle_OI";
let IS1133 = browser.currentScene.createNode("IS");
let connect1134 = browser.currentScene.createNode("connect");
connect1134.nodeField = "key";
connect1134.protoField = "r_clavicle_key";
IS1133.connect = new MFNode();

IS1133.connect[0] = connect1134;

let connect1135 = browser.currentScene.createNode("connect");
connect1135.nodeField = "keyValue";
connect1135.protoField = "r_clavicle_keyValue";
IS1133.connect[1] = connect1135;

let connect1136 = browser.currentScene.createNode("connect");
connect1136.nodeField = "value_changed";
connect1136.protoField = "r_clavicle_changed";
IS1133.connect[2] = connect1136;

OrientationInterpolator1132.iS = IS1133;

ProtoBody603.children[172] = OrientationInterpolator1132;

let ROUTE1137 = browser.currentScene.createNode("ROUTE");
ROUTE1137.fromField = "fraction_changed";
ROUTE1137.fromNode = "BehaviorClock";
ROUTE1137.toField = "set_fraction";
ROUTE1137.toNode = "r_clavicle_OI";
ProtoBody603.children[173] = ROUTE1137;

let OrientationInterpolator1138 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1138.DEF = "r_elbow_OI";
let IS1139 = browser.currentScene.createNode("IS");
let connect1140 = browser.currentScene.createNode("connect");
connect1140.nodeField = "key";
connect1140.protoField = "r_elbow_key";
IS1139.connect = new MFNode();

IS1139.connect[0] = connect1140;

let connect1141 = browser.currentScene.createNode("connect");
connect1141.nodeField = "keyValue";
connect1141.protoField = "r_elbow_keyValue";
IS1139.connect[1] = connect1141;

let connect1142 = browser.currentScene.createNode("connect");
connect1142.nodeField = "value_changed";
connect1142.protoField = "r_elbow_changed";
IS1139.connect[2] = connect1142;

OrientationInterpolator1138.iS = IS1139;

ProtoBody603.children[174] = OrientationInterpolator1138;

let ROUTE1143 = browser.currentScene.createNode("ROUTE");
ROUTE1143.fromField = "fraction_changed";
ROUTE1143.fromNode = "BehaviorClock";
ROUTE1143.toField = "set_fraction";
ROUTE1143.toNode = "r_elbow_OI";
ProtoBody603.children[175] = ROUTE1143;

let OrientationInterpolator1144 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1144.DEF = "r_eyeball_OI";
let IS1145 = browser.currentScene.createNode("IS");
let connect1146 = browser.currentScene.createNode("connect");
connect1146.nodeField = "key";
connect1146.protoField = "r_eyeball_key";
IS1145.connect = new MFNode();

IS1145.connect[0] = connect1146;

let connect1147 = browser.currentScene.createNode("connect");
connect1147.nodeField = "keyValue";
connect1147.protoField = "r_eyeball_keyValue";
IS1145.connect[1] = connect1147;

let connect1148 = browser.currentScene.createNode("connect");
connect1148.nodeField = "value_changed";
connect1148.protoField = "r_eyeball_changed";
IS1145.connect[2] = connect1148;

OrientationInterpolator1144.iS = IS1145;

ProtoBody603.children[176] = OrientationInterpolator1144;

let ROUTE1149 = browser.currentScene.createNode("ROUTE");
ROUTE1149.fromField = "fraction_changed";
ROUTE1149.fromNode = "BehaviorClock";
ROUTE1149.toField = "set_fraction";
ROUTE1149.toNode = "r_eyeball_OI";
ProtoBody603.children[177] = ROUTE1149;

let OrientationInterpolator1150 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1150.DEF = "r_eyeball_joint_OI";
let IS1151 = browser.currentScene.createNode("IS");
let connect1152 = browser.currentScene.createNode("connect");
connect1152.nodeField = "key";
connect1152.protoField = "r_eyeball_joint_key";
IS1151.connect = new MFNode();

IS1151.connect[0] = connect1152;

let connect1153 = browser.currentScene.createNode("connect");
connect1153.nodeField = "keyValue";
connect1153.protoField = "r_eyeball_joint_keyValue";
IS1151.connect[1] = connect1153;

let connect1154 = browser.currentScene.createNode("connect");
connect1154.nodeField = "value_changed";
connect1154.protoField = "r_eyeball_joint_changed";
IS1151.connect[2] = connect1154;

OrientationInterpolator1150.iS = IS1151;

ProtoBody603.children[178] = OrientationInterpolator1150;

let ROUTE1155 = browser.currentScene.createNode("ROUTE");
ROUTE1155.fromField = "fraction_changed";
ROUTE1155.fromNode = "BehaviorClock";
ROUTE1155.toField = "set_fraction";
ROUTE1155.toNode = "r_eyeball_joint_OI";
ProtoBody603.children[179] = ROUTE1155;

let OrientationInterpolator1156 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1156.DEF = "r_eyebrow_OI";
let IS1157 = browser.currentScene.createNode("IS");
let connect1158 = browser.currentScene.createNode("connect");
connect1158.nodeField = "key";
connect1158.protoField = "r_eyebrow_key";
IS1157.connect = new MFNode();

IS1157.connect[0] = connect1158;

let connect1159 = browser.currentScene.createNode("connect");
connect1159.nodeField = "keyValue";
connect1159.protoField = "r_eyebrow_keyValue";
IS1157.connect[1] = connect1159;

let connect1160 = browser.currentScene.createNode("connect");
connect1160.nodeField = "value_changed";
connect1160.protoField = "r_eyebrow_changed";
IS1157.connect[2] = connect1160;

OrientationInterpolator1156.iS = IS1157;

ProtoBody603.children[180] = OrientationInterpolator1156;

let ROUTE1161 = browser.currentScene.createNode("ROUTE");
ROUTE1161.fromField = "fraction_changed";
ROUTE1161.fromNode = "BehaviorClock";
ROUTE1161.toField = "set_fraction";
ROUTE1161.toNode = "r_eyebrow_OI";
ProtoBody603.children[181] = ROUTE1161;

let OrientationInterpolator1162 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1162.DEF = "r_eyebrow_joint_OI";
let IS1163 = browser.currentScene.createNode("IS");
let connect1164 = browser.currentScene.createNode("connect");
connect1164.nodeField = "key";
connect1164.protoField = "r_eyebrow_joint_key";
IS1163.connect = new MFNode();

IS1163.connect[0] = connect1164;

let connect1165 = browser.currentScene.createNode("connect");
connect1165.nodeField = "keyValue";
connect1165.protoField = "r_eyebrow_joint_keyValue";
IS1163.connect[1] = connect1165;

let connect1166 = browser.currentScene.createNode("connect");
connect1166.nodeField = "value_changed";
connect1166.protoField = "r_eyebrow_joint_changed";
IS1163.connect[2] = connect1166;

OrientationInterpolator1162.iS = IS1163;

ProtoBody603.children[182] = OrientationInterpolator1162;

let ROUTE1167 = browser.currentScene.createNode("ROUTE");
ROUTE1167.fromField = "fraction_changed";
ROUTE1167.fromNode = "BehaviorClock";
ROUTE1167.toField = "set_fraction";
ROUTE1167.toNode = "r_eyebrow_joint_OI";
ProtoBody603.children[183] = ROUTE1167;

let OrientationInterpolator1168 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1168.DEF = "r_eyelid_OI";
let IS1169 = browser.currentScene.createNode("IS");
let connect1170 = browser.currentScene.createNode("connect");
connect1170.nodeField = "key";
connect1170.protoField = "r_eyelid_key";
IS1169.connect = new MFNode();

IS1169.connect[0] = connect1170;

let connect1171 = browser.currentScene.createNode("connect");
connect1171.nodeField = "keyValue";
connect1171.protoField = "r_eyelid_keyValue";
IS1169.connect[1] = connect1171;

let connect1172 = browser.currentScene.createNode("connect");
connect1172.nodeField = "value_changed";
connect1172.protoField = "r_eyelid_changed";
IS1169.connect[2] = connect1172;

OrientationInterpolator1168.iS = IS1169;

ProtoBody603.children[184] = OrientationInterpolator1168;

let ROUTE1173 = browser.currentScene.createNode("ROUTE");
ROUTE1173.fromField = "fraction_changed";
ROUTE1173.fromNode = "BehaviorClock";
ROUTE1173.toField = "set_fraction";
ROUTE1173.toNode = "r_eyelid_OI";
ProtoBody603.children[185] = ROUTE1173;

let OrientationInterpolator1174 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1174.DEF = "r_eyelid_joint_OI";
let IS1175 = browser.currentScene.createNode("IS");
let connect1176 = browser.currentScene.createNode("connect");
connect1176.nodeField = "key";
connect1176.protoField = "r_eyelid_joint_key";
IS1175.connect = new MFNode();

IS1175.connect[0] = connect1176;

let connect1177 = browser.currentScene.createNode("connect");
connect1177.nodeField = "keyValue";
connect1177.protoField = "r_eyelid_joint_keyValue";
IS1175.connect[1] = connect1177;

let connect1178 = browser.currentScene.createNode("connect");
connect1178.nodeField = "value_changed";
connect1178.protoField = "r_eyelid_joint_changed";
IS1175.connect[2] = connect1178;

OrientationInterpolator1174.iS = IS1175;

ProtoBody603.children[186] = OrientationInterpolator1174;

let ROUTE1179 = browser.currentScene.createNode("ROUTE");
ROUTE1179.fromField = "fraction_changed";
ROUTE1179.fromNode = "BehaviorClock";
ROUTE1179.toField = "set_fraction";
ROUTE1179.toNode = "r_eyelid_joint_OI";
ProtoBody603.children[187] = ROUTE1179;

let OrientationInterpolator1180 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1180.DEF = "r_forearm_OI";
let IS1181 = browser.currentScene.createNode("IS");
let connect1182 = browser.currentScene.createNode("connect");
connect1182.nodeField = "key";
connect1182.protoField = "r_forearm_key";
IS1181.connect = new MFNode();

IS1181.connect[0] = connect1182;

let connect1183 = browser.currentScene.createNode("connect");
connect1183.nodeField = "keyValue";
connect1183.protoField = "r_forearm_keyValue";
IS1181.connect[1] = connect1183;

let connect1184 = browser.currentScene.createNode("connect");
connect1184.nodeField = "value_changed";
connect1184.protoField = "r_forearm_changed";
IS1181.connect[2] = connect1184;

OrientationInterpolator1180.iS = IS1181;

ProtoBody603.children[188] = OrientationInterpolator1180;

let ROUTE1185 = browser.currentScene.createNode("ROUTE");
ROUTE1185.fromField = "fraction_changed";
ROUTE1185.fromNode = "BehaviorClock";
ROUTE1185.toField = "set_fraction";
ROUTE1185.toNode = "r_forearm_OI";
ProtoBody603.children[189] = ROUTE1185;

let OrientationInterpolator1186 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1186.DEF = "r_forefoot_OI";
let IS1187 = browser.currentScene.createNode("IS");
let connect1188 = browser.currentScene.createNode("connect");
connect1188.nodeField = "key";
connect1188.protoField = "r_forefoot_key";
IS1187.connect = new MFNode();

IS1187.connect[0] = connect1188;

let connect1189 = browser.currentScene.createNode("connect");
connect1189.nodeField = "keyValue";
connect1189.protoField = "r_forefoot_keyValue";
IS1187.connect[1] = connect1189;

let connect1190 = browser.currentScene.createNode("connect");
connect1190.nodeField = "value_changed";
connect1190.protoField = "r_forefoot_changed";
IS1187.connect[2] = connect1190;

OrientationInterpolator1186.iS = IS1187;

ProtoBody603.children[190] = OrientationInterpolator1186;

let ROUTE1191 = browser.currentScene.createNode("ROUTE");
ROUTE1191.fromField = "fraction_changed";
ROUTE1191.fromNode = "BehaviorClock";
ROUTE1191.toField = "set_fraction";
ROUTE1191.toNode = "r_forefoot_OI";
ProtoBody603.children[191] = ROUTE1191;

let OrientationInterpolator1192 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1192.DEF = "r_hand_OI";
let IS1193 = browser.currentScene.createNode("IS");
let connect1194 = browser.currentScene.createNode("connect");
connect1194.nodeField = "key";
connect1194.protoField = "r_hand_key";
IS1193.connect = new MFNode();

IS1193.connect[0] = connect1194;

let connect1195 = browser.currentScene.createNode("connect");
connect1195.nodeField = "keyValue";
connect1195.protoField = "r_hand_keyValue";
IS1193.connect[1] = connect1195;

let connect1196 = browser.currentScene.createNode("connect");
connect1196.nodeField = "value_changed";
connect1196.protoField = "r_hand_changed";
IS1193.connect[2] = connect1196;

OrientationInterpolator1192.iS = IS1193;

ProtoBody603.children[192] = OrientationInterpolator1192;

let ROUTE1197 = browser.currentScene.createNode("ROUTE");
ROUTE1197.fromField = "fraction_changed";
ROUTE1197.fromNode = "BehaviorClock";
ROUTE1197.toField = "set_fraction";
ROUTE1197.toNode = "r_hand_OI";
ProtoBody603.children[193] = ROUTE1197;

let OrientationInterpolator1198 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1198.DEF = "r_hindfoot_OI";
let IS1199 = browser.currentScene.createNode("IS");
let connect1200 = browser.currentScene.createNode("connect");
connect1200.nodeField = "key";
connect1200.protoField = "r_hindfoot_key";
IS1199.connect = new MFNode();

IS1199.connect[0] = connect1200;

let connect1201 = browser.currentScene.createNode("connect");
connect1201.nodeField = "keyValue";
connect1201.protoField = "r_hindfoot_keyValue";
IS1199.connect[1] = connect1201;

let connect1202 = browser.currentScene.createNode("connect");
connect1202.nodeField = "value_changed";
connect1202.protoField = "r_hindfoot_changed";
IS1199.connect[2] = connect1202;

OrientationInterpolator1198.iS = IS1199;

ProtoBody603.children[194] = OrientationInterpolator1198;

let ROUTE1203 = browser.currentScene.createNode("ROUTE");
ROUTE1203.fromField = "fraction_changed";
ROUTE1203.fromNode = "BehaviorClock";
ROUTE1203.toField = "set_fraction";
ROUTE1203.toNode = "r_hindfoot_OI";
ProtoBody603.children[195] = ROUTE1203;

let OrientationInterpolator1204 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1204.DEF = "r_hip_OI";
let IS1205 = browser.currentScene.createNode("IS");
let connect1206 = browser.currentScene.createNode("connect");
connect1206.nodeField = "key";
connect1206.protoField = "r_hip_key";
IS1205.connect = new MFNode();

IS1205.connect[0] = connect1206;

let connect1207 = browser.currentScene.createNode("connect");
connect1207.nodeField = "keyValue";
connect1207.protoField = "r_hip_keyValue";
IS1205.connect[1] = connect1207;

let connect1208 = browser.currentScene.createNode("connect");
connect1208.nodeField = "value_changed";
connect1208.protoField = "r_hip_changed";
IS1205.connect[2] = connect1208;

OrientationInterpolator1204.iS = IS1205;

ProtoBody603.children[196] = OrientationInterpolator1204;

let ROUTE1209 = browser.currentScene.createNode("ROUTE");
ROUTE1209.fromField = "fraction_changed";
ROUTE1209.fromNode = "BehaviorClock";
ROUTE1209.toField = "set_fraction";
ROUTE1209.toNode = "r_hip_OI";
ProtoBody603.children[197] = ROUTE1209;

let OrientationInterpolator1210 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1210.DEF = "r_index0_OI";
let IS1211 = browser.currentScene.createNode("IS");
let connect1212 = browser.currentScene.createNode("connect");
connect1212.nodeField = "key";
connect1212.protoField = "r_index0_key";
IS1211.connect = new MFNode();

IS1211.connect[0] = connect1212;

let connect1213 = browser.currentScene.createNode("connect");
connect1213.nodeField = "keyValue";
connect1213.protoField = "r_index0_keyValue";
IS1211.connect[1] = connect1213;

let connect1214 = browser.currentScene.createNode("connect");
connect1214.nodeField = "value_changed";
connect1214.protoField = "r_index0_changed";
IS1211.connect[2] = connect1214;

OrientationInterpolator1210.iS = IS1211;

ProtoBody603.children[198] = OrientationInterpolator1210;

let ROUTE1215 = browser.currentScene.createNode("ROUTE");
ROUTE1215.fromField = "fraction_changed";
ROUTE1215.fromNode = "BehaviorClock";
ROUTE1215.toField = "set_fraction";
ROUTE1215.toNode = "r_index0_OI";
ProtoBody603.children[199] = ROUTE1215;

let OrientationInterpolator1216 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1216.DEF = "r_index1_OI";
let IS1217 = browser.currentScene.createNode("IS");
let connect1218 = browser.currentScene.createNode("connect");
connect1218.nodeField = "key";
connect1218.protoField = "r_index1_key";
IS1217.connect = new MFNode();

IS1217.connect[0] = connect1218;

let connect1219 = browser.currentScene.createNode("connect");
connect1219.nodeField = "keyValue";
connect1219.protoField = "r_index1_keyValue";
IS1217.connect[1] = connect1219;

let connect1220 = browser.currentScene.createNode("connect");
connect1220.nodeField = "value_changed";
connect1220.protoField = "r_index1_changed";
IS1217.connect[2] = connect1220;

OrientationInterpolator1216.iS = IS1217;

ProtoBody603.children[200] = OrientationInterpolator1216;

let ROUTE1221 = browser.currentScene.createNode("ROUTE");
ROUTE1221.fromField = "fraction_changed";
ROUTE1221.fromNode = "BehaviorClock";
ROUTE1221.toField = "set_fraction";
ROUTE1221.toNode = "r_index1_OI";
ProtoBody603.children[201] = ROUTE1221;

let OrientationInterpolator1222 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1222.DEF = "r_index2_OI";
let IS1223 = browser.currentScene.createNode("IS");
let connect1224 = browser.currentScene.createNode("connect");
connect1224.nodeField = "key";
connect1224.protoField = "r_index2_key";
IS1223.connect = new MFNode();

IS1223.connect[0] = connect1224;

let connect1225 = browser.currentScene.createNode("connect");
connect1225.nodeField = "keyValue";
connect1225.protoField = "r_index2_keyValue";
IS1223.connect[1] = connect1225;

let connect1226 = browser.currentScene.createNode("connect");
connect1226.nodeField = "value_changed";
connect1226.protoField = "r_index2_changed";
IS1223.connect[2] = connect1226;

OrientationInterpolator1222.iS = IS1223;

ProtoBody603.children[202] = OrientationInterpolator1222;

let ROUTE1227 = browser.currentScene.createNode("ROUTE");
ROUTE1227.fromField = "fraction_changed";
ROUTE1227.fromNode = "BehaviorClock";
ROUTE1227.toField = "set_fraction";
ROUTE1227.toNode = "r_index2_OI";
ProtoBody603.children[203] = ROUTE1227;

let OrientationInterpolator1228 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1228.DEF = "r_index3_OI";
let IS1229 = browser.currentScene.createNode("IS");
let connect1230 = browser.currentScene.createNode("connect");
connect1230.nodeField = "key";
connect1230.protoField = "r_index3_key";
IS1229.connect = new MFNode();

IS1229.connect[0] = connect1230;

let connect1231 = browser.currentScene.createNode("connect");
connect1231.nodeField = "keyValue";
connect1231.protoField = "r_index3_keyValue";
IS1229.connect[1] = connect1231;

let connect1232 = browser.currentScene.createNode("connect");
connect1232.nodeField = "value_changed";
connect1232.protoField = "r_index3_changed";
IS1229.connect[2] = connect1232;

OrientationInterpolator1228.iS = IS1229;

ProtoBody603.children[204] = OrientationInterpolator1228;

let ROUTE1233 = browser.currentScene.createNode("ROUTE");
ROUTE1233.fromField = "fraction_changed";
ROUTE1233.fromNode = "BehaviorClock";
ROUTE1233.toField = "set_fraction";
ROUTE1233.toNode = "r_index3_OI";
ProtoBody603.children[205] = ROUTE1233;

let OrientationInterpolator1234 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1234.DEF = "r_index_distal_OI";
let IS1235 = browser.currentScene.createNode("IS");
let connect1236 = browser.currentScene.createNode("connect");
connect1236.nodeField = "key";
connect1236.protoField = "r_index_distal_key";
IS1235.connect = new MFNode();

IS1235.connect[0] = connect1236;

let connect1237 = browser.currentScene.createNode("connect");
connect1237.nodeField = "keyValue";
connect1237.protoField = "r_index_distal_keyValue";
IS1235.connect[1] = connect1237;

let connect1238 = browser.currentScene.createNode("connect");
connect1238.nodeField = "value_changed";
connect1238.protoField = "r_index_distal_changed";
IS1235.connect[2] = connect1238;

OrientationInterpolator1234.iS = IS1235;

ProtoBody603.children[206] = OrientationInterpolator1234;

let ROUTE1239 = browser.currentScene.createNode("ROUTE");
ROUTE1239.fromField = "fraction_changed";
ROUTE1239.fromNode = "BehaviorClock";
ROUTE1239.toField = "set_fraction";
ROUTE1239.toNode = "r_index_distal_OI";
ProtoBody603.children[207] = ROUTE1239;

let OrientationInterpolator1240 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1240.DEF = "r_index_metacarpal_OI";
let IS1241 = browser.currentScene.createNode("IS");
let connect1242 = browser.currentScene.createNode("connect");
connect1242.nodeField = "key";
connect1242.protoField = "r_index_metacarpal_key";
IS1241.connect = new MFNode();

IS1241.connect[0] = connect1242;

let connect1243 = browser.currentScene.createNode("connect");
connect1243.nodeField = "keyValue";
connect1243.protoField = "r_index_metacarpal_keyValue";
IS1241.connect[1] = connect1243;

let connect1244 = browser.currentScene.createNode("connect");
connect1244.nodeField = "value_changed";
connect1244.protoField = "r_index_metacarpal_changed";
IS1241.connect[2] = connect1244;

OrientationInterpolator1240.iS = IS1241;

ProtoBody603.children[208] = OrientationInterpolator1240;

let ROUTE1245 = browser.currentScene.createNode("ROUTE");
ROUTE1245.fromField = "fraction_changed";
ROUTE1245.fromNode = "BehaviorClock";
ROUTE1245.toField = "set_fraction";
ROUTE1245.toNode = "r_index_metacarpal_OI";
ProtoBody603.children[209] = ROUTE1245;

let OrientationInterpolator1246 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1246.DEF = "r_index_middle_OI";
let IS1247 = browser.currentScene.createNode("IS");
let connect1248 = browser.currentScene.createNode("connect");
connect1248.nodeField = "key";
connect1248.protoField = "r_index_middle_key";
IS1247.connect = new MFNode();

IS1247.connect[0] = connect1248;

let connect1249 = browser.currentScene.createNode("connect");
connect1249.nodeField = "keyValue";
connect1249.protoField = "r_index_middle_keyValue";
IS1247.connect[1] = connect1249;

let connect1250 = browser.currentScene.createNode("connect");
connect1250.nodeField = "value_changed";
connect1250.protoField = "r_index_middle_changed";
IS1247.connect[2] = connect1250;

OrientationInterpolator1246.iS = IS1247;

ProtoBody603.children[210] = OrientationInterpolator1246;

let ROUTE1251 = browser.currentScene.createNode("ROUTE");
ROUTE1251.fromField = "fraction_changed";
ROUTE1251.fromNode = "BehaviorClock";
ROUTE1251.toField = "set_fraction";
ROUTE1251.toNode = "r_index_middle_OI";
ProtoBody603.children[211] = ROUTE1251;

let OrientationInterpolator1252 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1252.DEF = "r_index_proximal_OI";
let IS1253 = browser.currentScene.createNode("IS");
let connect1254 = browser.currentScene.createNode("connect");
connect1254.nodeField = "key";
connect1254.protoField = "r_index_proximal_key";
IS1253.connect = new MFNode();

IS1253.connect[0] = connect1254;

let connect1255 = browser.currentScene.createNode("connect");
connect1255.nodeField = "keyValue";
connect1255.protoField = "r_index_proximal_keyValue";
IS1253.connect[1] = connect1255;

let connect1256 = browser.currentScene.createNode("connect");
connect1256.nodeField = "value_changed";
connect1256.protoField = "r_index_proximal_changed";
IS1253.connect[2] = connect1256;

OrientationInterpolator1252.iS = IS1253;

ProtoBody603.children[212] = OrientationInterpolator1252;

let ROUTE1257 = browser.currentScene.createNode("ROUTE");
ROUTE1257.fromField = "fraction_changed";
ROUTE1257.fromNode = "BehaviorClock";
ROUTE1257.toField = "set_fraction";
ROUTE1257.toNode = "r_index_proximal_OI";
ProtoBody603.children[213] = ROUTE1257;

let OrientationInterpolator1258 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1258.DEF = "r_knee_OI";
let IS1259 = browser.currentScene.createNode("IS");
let connect1260 = browser.currentScene.createNode("connect");
connect1260.nodeField = "key";
connect1260.protoField = "r_knee_key";
IS1259.connect = new MFNode();

IS1259.connect[0] = connect1260;

let connect1261 = browser.currentScene.createNode("connect");
connect1261.nodeField = "keyValue";
connect1261.protoField = "r_knee_keyValue";
IS1259.connect[1] = connect1261;

let connect1262 = browser.currentScene.createNode("connect");
connect1262.nodeField = "value_changed";
connect1262.protoField = "r_knee_changed";
IS1259.connect[2] = connect1262;

OrientationInterpolator1258.iS = IS1259;

ProtoBody603.children[214] = OrientationInterpolator1258;

let ROUTE1263 = browser.currentScene.createNode("ROUTE");
ROUTE1263.fromField = "fraction_changed";
ROUTE1263.fromNode = "BehaviorClock";
ROUTE1263.toField = "set_fraction";
ROUTE1263.toNode = "r_knee_OI";
ProtoBody603.children[215] = ROUTE1263;

let OrientationInterpolator1264 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1264.DEF = "r_metatarsal_OI";
let IS1265 = browser.currentScene.createNode("IS");
let connect1266 = browser.currentScene.createNode("connect");
connect1266.nodeField = "key";
connect1266.protoField = "r_metatarsal_key";
IS1265.connect = new MFNode();

IS1265.connect[0] = connect1266;

let connect1267 = browser.currentScene.createNode("connect");
connect1267.nodeField = "keyValue";
connect1267.protoField = "r_metatarsal_keyValue";
IS1265.connect[1] = connect1267;

let connect1268 = browser.currentScene.createNode("connect");
connect1268.nodeField = "value_changed";
connect1268.protoField = "r_metatarsal_changed";
IS1265.connect[2] = connect1268;

OrientationInterpolator1264.iS = IS1265;

ProtoBody603.children[216] = OrientationInterpolator1264;

let ROUTE1269 = browser.currentScene.createNode("ROUTE");
ROUTE1269.fromField = "fraction_changed";
ROUTE1269.fromNode = "BehaviorClock";
ROUTE1269.toField = "set_fraction";
ROUTE1269.toNode = "r_metatarsal_OI";
ProtoBody603.children[217] = ROUTE1269;

let OrientationInterpolator1270 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1270.DEF = "r_middistal_OI";
let IS1271 = browser.currentScene.createNode("IS");
let connect1272 = browser.currentScene.createNode("connect");
connect1272.nodeField = "key";
connect1272.protoField = "r_middistal_key";
IS1271.connect = new MFNode();

IS1271.connect[0] = connect1272;

let connect1273 = browser.currentScene.createNode("connect");
connect1273.nodeField = "keyValue";
connect1273.protoField = "r_middistal_keyValue";
IS1271.connect[1] = connect1273;

let connect1274 = browser.currentScene.createNode("connect");
connect1274.nodeField = "value_changed";
connect1274.protoField = "r_middistal_changed";
IS1271.connect[2] = connect1274;

OrientationInterpolator1270.iS = IS1271;

ProtoBody603.children[218] = OrientationInterpolator1270;

let ROUTE1275 = browser.currentScene.createNode("ROUTE");
ROUTE1275.fromField = "fraction_changed";
ROUTE1275.fromNode = "BehaviorClock";
ROUTE1275.toField = "set_fraction";
ROUTE1275.toNode = "r_middistal_OI";
ProtoBody603.children[219] = ROUTE1275;

let OrientationInterpolator1276 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1276.DEF = "r_middle0_OI";
let IS1277 = browser.currentScene.createNode("IS");
let connect1278 = browser.currentScene.createNode("connect");
connect1278.nodeField = "key";
connect1278.protoField = "r_middle0_key";
IS1277.connect = new MFNode();

IS1277.connect[0] = connect1278;

let connect1279 = browser.currentScene.createNode("connect");
connect1279.nodeField = "keyValue";
connect1279.protoField = "r_middle0_keyValue";
IS1277.connect[1] = connect1279;

let connect1280 = browser.currentScene.createNode("connect");
connect1280.nodeField = "value_changed";
connect1280.protoField = "r_middle0_changed";
IS1277.connect[2] = connect1280;

OrientationInterpolator1276.iS = IS1277;

ProtoBody603.children[220] = OrientationInterpolator1276;

let ROUTE1281 = browser.currentScene.createNode("ROUTE");
ROUTE1281.fromField = "fraction_changed";
ROUTE1281.fromNode = "BehaviorClock";
ROUTE1281.toField = "set_fraction";
ROUTE1281.toNode = "r_middle0_OI";
ProtoBody603.children[221] = ROUTE1281;

let OrientationInterpolator1282 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1282.DEF = "r_middle1_OI";
let IS1283 = browser.currentScene.createNode("IS");
let connect1284 = browser.currentScene.createNode("connect");
connect1284.nodeField = "key";
connect1284.protoField = "r_middle1_key";
IS1283.connect = new MFNode();

IS1283.connect[0] = connect1284;

let connect1285 = browser.currentScene.createNode("connect");
connect1285.nodeField = "keyValue";
connect1285.protoField = "r_middle1_keyValue";
IS1283.connect[1] = connect1285;

let connect1286 = browser.currentScene.createNode("connect");
connect1286.nodeField = "value_changed";
connect1286.protoField = "r_middle1_changed";
IS1283.connect[2] = connect1286;

OrientationInterpolator1282.iS = IS1283;

ProtoBody603.children[222] = OrientationInterpolator1282;

let ROUTE1287 = browser.currentScene.createNode("ROUTE");
ROUTE1287.fromField = "fraction_changed";
ROUTE1287.fromNode = "BehaviorClock";
ROUTE1287.toField = "set_fraction";
ROUTE1287.toNode = "r_middle1_OI";
ProtoBody603.children[223] = ROUTE1287;

let OrientationInterpolator1288 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1288.DEF = "r_middle2_OI";
let IS1289 = browser.currentScene.createNode("IS");
let connect1290 = browser.currentScene.createNode("connect");
connect1290.nodeField = "key";
connect1290.protoField = "r_middle2_key";
IS1289.connect = new MFNode();

IS1289.connect[0] = connect1290;

let connect1291 = browser.currentScene.createNode("connect");
connect1291.nodeField = "keyValue";
connect1291.protoField = "r_middle2_keyValue";
IS1289.connect[1] = connect1291;

let connect1292 = browser.currentScene.createNode("connect");
connect1292.nodeField = "value_changed";
connect1292.protoField = "r_middle2_changed";
IS1289.connect[2] = connect1292;

OrientationInterpolator1288.iS = IS1289;

ProtoBody603.children[224] = OrientationInterpolator1288;

let ROUTE1293 = browser.currentScene.createNode("ROUTE");
ROUTE1293.fromField = "fraction_changed";
ROUTE1293.fromNode = "BehaviorClock";
ROUTE1293.toField = "set_fraction";
ROUTE1293.toNode = "r_middle2_OI";
ProtoBody603.children[225] = ROUTE1293;

let OrientationInterpolator1294 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1294.DEF = "r_middle3_OI";
let IS1295 = browser.currentScene.createNode("IS");
let connect1296 = browser.currentScene.createNode("connect");
connect1296.nodeField = "key";
connect1296.protoField = "r_middle3_key";
IS1295.connect = new MFNode();

IS1295.connect[0] = connect1296;

let connect1297 = browser.currentScene.createNode("connect");
connect1297.nodeField = "keyValue";
connect1297.protoField = "r_middle3_keyValue";
IS1295.connect[1] = connect1297;

let connect1298 = browser.currentScene.createNode("connect");
connect1298.nodeField = "value_changed";
connect1298.protoField = "r_middle3_changed";
IS1295.connect[2] = connect1298;

OrientationInterpolator1294.iS = IS1295;

ProtoBody603.children[226] = OrientationInterpolator1294;

let ROUTE1299 = browser.currentScene.createNode("ROUTE");
ROUTE1299.fromField = "fraction_changed";
ROUTE1299.fromNode = "BehaviorClock";
ROUTE1299.toField = "set_fraction";
ROUTE1299.toNode = "r_middle3_OI";
ProtoBody603.children[227] = ROUTE1299;

let OrientationInterpolator1300 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1300.DEF = "r_middle_distal_OI";
let IS1301 = browser.currentScene.createNode("IS");
let connect1302 = browser.currentScene.createNode("connect");
connect1302.nodeField = "key";
connect1302.protoField = "r_middle_distal_key";
IS1301.connect = new MFNode();

IS1301.connect[0] = connect1302;

let connect1303 = browser.currentScene.createNode("connect");
connect1303.nodeField = "keyValue";
connect1303.protoField = "r_middle_distal_keyValue";
IS1301.connect[1] = connect1303;

let connect1304 = browser.currentScene.createNode("connect");
connect1304.nodeField = "value_changed";
connect1304.protoField = "r_middle_distal_changed";
IS1301.connect[2] = connect1304;

OrientationInterpolator1300.iS = IS1301;

ProtoBody603.children[228] = OrientationInterpolator1300;

let ROUTE1305 = browser.currentScene.createNode("ROUTE");
ROUTE1305.fromField = "fraction_changed";
ROUTE1305.fromNode = "BehaviorClock";
ROUTE1305.toField = "set_fraction";
ROUTE1305.toNode = "r_middle_distal_OI";
ProtoBody603.children[229] = ROUTE1305;

let OrientationInterpolator1306 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1306.DEF = "r_middle_metacarpal_OI";
let IS1307 = browser.currentScene.createNode("IS");
let connect1308 = browser.currentScene.createNode("connect");
connect1308.nodeField = "key";
connect1308.protoField = "r_middle_metacarpal_key";
IS1307.connect = new MFNode();

IS1307.connect[0] = connect1308;

let connect1309 = browser.currentScene.createNode("connect");
connect1309.nodeField = "keyValue";
connect1309.protoField = "r_middle_metacarpal_keyValue";
IS1307.connect[1] = connect1309;

let connect1310 = browser.currentScene.createNode("connect");
connect1310.nodeField = "value_changed";
connect1310.protoField = "r_middle_metacarpal_changed";
IS1307.connect[2] = connect1310;

OrientationInterpolator1306.iS = IS1307;

ProtoBody603.children[230] = OrientationInterpolator1306;

let ROUTE1311 = browser.currentScene.createNode("ROUTE");
ROUTE1311.fromField = "fraction_changed";
ROUTE1311.fromNode = "BehaviorClock";
ROUTE1311.toField = "set_fraction";
ROUTE1311.toNode = "r_middle_metacarpal_OI";
ProtoBody603.children[231] = ROUTE1311;

let OrientationInterpolator1312 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1312.DEF = "r_middle_middle_OI";
let IS1313 = browser.currentScene.createNode("IS");
let connect1314 = browser.currentScene.createNode("connect");
connect1314.nodeField = "key";
connect1314.protoField = "r_middle_middle_key";
IS1313.connect = new MFNode();

IS1313.connect[0] = connect1314;

let connect1315 = browser.currentScene.createNode("connect");
connect1315.nodeField = "keyValue";
connect1315.protoField = "r_middle_middle_keyValue";
IS1313.connect[1] = connect1315;

let connect1316 = browser.currentScene.createNode("connect");
connect1316.nodeField = "value_changed";
connect1316.protoField = "r_middle_middle_changed";
IS1313.connect[2] = connect1316;

OrientationInterpolator1312.iS = IS1313;

ProtoBody603.children[232] = OrientationInterpolator1312;

let ROUTE1317 = browser.currentScene.createNode("ROUTE");
ROUTE1317.fromField = "fraction_changed";
ROUTE1317.fromNode = "BehaviorClock";
ROUTE1317.toField = "set_fraction";
ROUTE1317.toNode = "r_middle_middle_OI";
ProtoBody603.children[233] = ROUTE1317;

let OrientationInterpolator1318 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1318.DEF = "r_middle_proximal_OI";
let IS1319 = browser.currentScene.createNode("IS");
let connect1320 = browser.currentScene.createNode("connect");
connect1320.nodeField = "key";
connect1320.protoField = "r_middle_proximal_key";
IS1319.connect = new MFNode();

IS1319.connect[0] = connect1320;

let connect1321 = browser.currentScene.createNode("connect");
connect1321.nodeField = "keyValue";
connect1321.protoField = "r_middle_proximal_keyValue";
IS1319.connect[1] = connect1321;

let connect1322 = browser.currentScene.createNode("connect");
connect1322.nodeField = "value_changed";
connect1322.protoField = "r_middle_proximal_changed";
IS1319.connect[2] = connect1322;

OrientationInterpolator1318.iS = IS1319;

ProtoBody603.children[234] = OrientationInterpolator1318;

let ROUTE1323 = browser.currentScene.createNode("ROUTE");
ROUTE1323.fromField = "fraction_changed";
ROUTE1323.fromNode = "BehaviorClock";
ROUTE1323.toField = "set_fraction";
ROUTE1323.toNode = "r_middle_proximal_OI";
ProtoBody603.children[235] = ROUTE1323;

let OrientationInterpolator1324 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1324.DEF = "r_midproximal_OI";
let IS1325 = browser.currentScene.createNode("IS");
let connect1326 = browser.currentScene.createNode("connect");
connect1326.nodeField = "key";
connect1326.protoField = "r_midproximal_key";
IS1325.connect = new MFNode();

IS1325.connect[0] = connect1326;

let connect1327 = browser.currentScene.createNode("connect");
connect1327.nodeField = "keyValue";
connect1327.protoField = "r_midproximal_keyValue";
IS1325.connect[1] = connect1327;

let connect1328 = browser.currentScene.createNode("connect");
connect1328.nodeField = "value_changed";
connect1328.protoField = "r_midproximal_changed";
IS1325.connect[2] = connect1328;

OrientationInterpolator1324.iS = IS1325;

ProtoBody603.children[236] = OrientationInterpolator1324;

let ROUTE1329 = browser.currentScene.createNode("ROUTE");
ROUTE1329.fromField = "fraction_changed";
ROUTE1329.fromNode = "BehaviorClock";
ROUTE1329.toField = "set_fraction";
ROUTE1329.toNode = "r_midproximal_OI";
ProtoBody603.children[237] = ROUTE1329;

let OrientationInterpolator1330 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1330.DEF = "r_midtarsal_OI";
let IS1331 = browser.currentScene.createNode("IS");
let connect1332 = browser.currentScene.createNode("connect");
connect1332.nodeField = "key";
connect1332.protoField = "r_midtarsal_key";
IS1331.connect = new MFNode();

IS1331.connect[0] = connect1332;

let connect1333 = browser.currentScene.createNode("connect");
connect1333.nodeField = "keyValue";
connect1333.protoField = "r_midtarsal_keyValue";
IS1331.connect[1] = connect1333;

let connect1334 = browser.currentScene.createNode("connect");
connect1334.nodeField = "value_changed";
connect1334.protoField = "r_midtarsal_changed";
IS1331.connect[2] = connect1334;

OrientationInterpolator1330.iS = IS1331;

ProtoBody603.children[238] = OrientationInterpolator1330;

let ROUTE1335 = browser.currentScene.createNode("ROUTE");
ROUTE1335.fromField = "fraction_changed";
ROUTE1335.fromNode = "BehaviorClock";
ROUTE1335.toField = "set_fraction";
ROUTE1335.toNode = "r_midtarsal_OI";
ProtoBody603.children[239] = ROUTE1335;

let OrientationInterpolator1336 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1336.DEF = "r_pinky0_OI";
let IS1337 = browser.currentScene.createNode("IS");
let connect1338 = browser.currentScene.createNode("connect");
connect1338.nodeField = "key";
connect1338.protoField = "r_pinky0_key";
IS1337.connect = new MFNode();

IS1337.connect[0] = connect1338;

let connect1339 = browser.currentScene.createNode("connect");
connect1339.nodeField = "keyValue";
connect1339.protoField = "r_pinky0_keyValue";
IS1337.connect[1] = connect1339;

let connect1340 = browser.currentScene.createNode("connect");
connect1340.nodeField = "value_changed";
connect1340.protoField = "r_pinky0_changed";
IS1337.connect[2] = connect1340;

OrientationInterpolator1336.iS = IS1337;

ProtoBody603.children[240] = OrientationInterpolator1336;

let ROUTE1341 = browser.currentScene.createNode("ROUTE");
ROUTE1341.fromField = "fraction_changed";
ROUTE1341.fromNode = "BehaviorClock";
ROUTE1341.toField = "set_fraction";
ROUTE1341.toNode = "r_pinky0_OI";
ProtoBody603.children[241] = ROUTE1341;

let OrientationInterpolator1342 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1342.DEF = "r_pinky1_OI";
let IS1343 = browser.currentScene.createNode("IS");
let connect1344 = browser.currentScene.createNode("connect");
connect1344.nodeField = "key";
connect1344.protoField = "r_pinky1_key";
IS1343.connect = new MFNode();

IS1343.connect[0] = connect1344;

let connect1345 = browser.currentScene.createNode("connect");
connect1345.nodeField = "keyValue";
connect1345.protoField = "r_pinky1_keyValue";
IS1343.connect[1] = connect1345;

let connect1346 = browser.currentScene.createNode("connect");
connect1346.nodeField = "value_changed";
connect1346.protoField = "r_pinky1_changed";
IS1343.connect[2] = connect1346;

OrientationInterpolator1342.iS = IS1343;

ProtoBody603.children[242] = OrientationInterpolator1342;

let ROUTE1347 = browser.currentScene.createNode("ROUTE");
ROUTE1347.fromField = "fraction_changed";
ROUTE1347.fromNode = "BehaviorClock";
ROUTE1347.toField = "set_fraction";
ROUTE1347.toNode = "r_pinky1_OI";
ProtoBody603.children[243] = ROUTE1347;

let OrientationInterpolator1348 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1348.DEF = "r_pinky2_OI";
let IS1349 = browser.currentScene.createNode("IS");
let connect1350 = browser.currentScene.createNode("connect");
connect1350.nodeField = "key";
connect1350.protoField = "r_pinky2_key";
IS1349.connect = new MFNode();

IS1349.connect[0] = connect1350;

let connect1351 = browser.currentScene.createNode("connect");
connect1351.nodeField = "keyValue";
connect1351.protoField = "r_pinky2_keyValue";
IS1349.connect[1] = connect1351;

let connect1352 = browser.currentScene.createNode("connect");
connect1352.nodeField = "value_changed";
connect1352.protoField = "r_pinky2_changed";
IS1349.connect[2] = connect1352;

OrientationInterpolator1348.iS = IS1349;

ProtoBody603.children[244] = OrientationInterpolator1348;

let ROUTE1353 = browser.currentScene.createNode("ROUTE");
ROUTE1353.fromField = "fraction_changed";
ROUTE1353.fromNode = "BehaviorClock";
ROUTE1353.toField = "set_fraction";
ROUTE1353.toNode = "r_pinky2_OI";
ProtoBody603.children[245] = ROUTE1353;

let OrientationInterpolator1354 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1354.DEF = "r_pinky3_OI";
let IS1355 = browser.currentScene.createNode("IS");
let connect1356 = browser.currentScene.createNode("connect");
connect1356.nodeField = "key";
connect1356.protoField = "r_pinky3_key";
IS1355.connect = new MFNode();

IS1355.connect[0] = connect1356;

let connect1357 = browser.currentScene.createNode("connect");
connect1357.nodeField = "keyValue";
connect1357.protoField = "r_pinky3_keyValue";
IS1355.connect[1] = connect1357;

let connect1358 = browser.currentScene.createNode("connect");
connect1358.nodeField = "value_changed";
connect1358.protoField = "r_pinky3_changed";
IS1355.connect[2] = connect1358;

OrientationInterpolator1354.iS = IS1355;

ProtoBody603.children[246] = OrientationInterpolator1354;

let ROUTE1359 = browser.currentScene.createNode("ROUTE");
ROUTE1359.fromField = "fraction_changed";
ROUTE1359.fromNode = "BehaviorClock";
ROUTE1359.toField = "set_fraction";
ROUTE1359.toNode = "r_pinky3_OI";
ProtoBody603.children[247] = ROUTE1359;

let OrientationInterpolator1360 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1360.DEF = "r_pinky_distal_OI";
let IS1361 = browser.currentScene.createNode("IS");
let connect1362 = browser.currentScene.createNode("connect");
connect1362.nodeField = "key";
connect1362.protoField = "r_pinky_distal_key";
IS1361.connect = new MFNode();

IS1361.connect[0] = connect1362;

let connect1363 = browser.currentScene.createNode("connect");
connect1363.nodeField = "keyValue";
connect1363.protoField = "r_pinky_distal_keyValue";
IS1361.connect[1] = connect1363;

let connect1364 = browser.currentScene.createNode("connect");
connect1364.nodeField = "value_changed";
connect1364.protoField = "r_pinky_distal_changed";
IS1361.connect[2] = connect1364;

OrientationInterpolator1360.iS = IS1361;

ProtoBody603.children[248] = OrientationInterpolator1360;

let ROUTE1365 = browser.currentScene.createNode("ROUTE");
ROUTE1365.fromField = "fraction_changed";
ROUTE1365.fromNode = "BehaviorClock";
ROUTE1365.toField = "set_fraction";
ROUTE1365.toNode = "r_pinky_distal_OI";
ProtoBody603.children[249] = ROUTE1365;

let OrientationInterpolator1366 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1366.DEF = "r_pinky_metacarpal_OI";
let IS1367 = browser.currentScene.createNode("IS");
let connect1368 = browser.currentScene.createNode("connect");
connect1368.nodeField = "key";
connect1368.protoField = "r_pinky_metacarpal_key";
IS1367.connect = new MFNode();

IS1367.connect[0] = connect1368;

let connect1369 = browser.currentScene.createNode("connect");
connect1369.nodeField = "keyValue";
connect1369.protoField = "r_pinky_metacarpal_keyValue";
IS1367.connect[1] = connect1369;

let connect1370 = browser.currentScene.createNode("connect");
connect1370.nodeField = "value_changed";
connect1370.protoField = "r_pinky_metacarpal_changed";
IS1367.connect[2] = connect1370;

OrientationInterpolator1366.iS = IS1367;

ProtoBody603.children[250] = OrientationInterpolator1366;

let ROUTE1371 = browser.currentScene.createNode("ROUTE");
ROUTE1371.fromField = "fraction_changed";
ROUTE1371.fromNode = "BehaviorClock";
ROUTE1371.toField = "set_fraction";
ROUTE1371.toNode = "r_pinky_metacarpal_OI";
ProtoBody603.children[251] = ROUTE1371;

let OrientationInterpolator1372 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1372.DEF = "r_pinky_middle_OI";
let IS1373 = browser.currentScene.createNode("IS");
let connect1374 = browser.currentScene.createNode("connect");
connect1374.nodeField = "key";
connect1374.protoField = "r_pinky_middle_key";
IS1373.connect = new MFNode();

IS1373.connect[0] = connect1374;

let connect1375 = browser.currentScene.createNode("connect");
connect1375.nodeField = "keyValue";
connect1375.protoField = "r_pinky_middle_keyValue";
IS1373.connect[1] = connect1375;

let connect1376 = browser.currentScene.createNode("connect");
connect1376.nodeField = "value_changed";
connect1376.protoField = "r_pinky_middle_changed";
IS1373.connect[2] = connect1376;

OrientationInterpolator1372.iS = IS1373;

ProtoBody603.children[252] = OrientationInterpolator1372;

let ROUTE1377 = browser.currentScene.createNode("ROUTE");
ROUTE1377.fromField = "fraction_changed";
ROUTE1377.fromNode = "BehaviorClock";
ROUTE1377.toField = "set_fraction";
ROUTE1377.toNode = "r_pinky_middle_OI";
ProtoBody603.children[253] = ROUTE1377;

let OrientationInterpolator1378 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1378.DEF = "r_pinky_proximal_OI";
let IS1379 = browser.currentScene.createNode("IS");
let connect1380 = browser.currentScene.createNode("connect");
connect1380.nodeField = "key";
connect1380.protoField = "r_pinky_proximal_key";
IS1379.connect = new MFNode();

IS1379.connect[0] = connect1380;

let connect1381 = browser.currentScene.createNode("connect");
connect1381.nodeField = "keyValue";
connect1381.protoField = "r_pinky_proximal_keyValue";
IS1379.connect[1] = connect1381;

let connect1382 = browser.currentScene.createNode("connect");
connect1382.nodeField = "value_changed";
connect1382.protoField = "r_pinky_proximal_changed";
IS1379.connect[2] = connect1382;

OrientationInterpolator1378.iS = IS1379;

ProtoBody603.children[254] = OrientationInterpolator1378;

let ROUTE1383 = browser.currentScene.createNode("ROUTE");
ROUTE1383.fromField = "fraction_changed";
ROUTE1383.fromNode = "BehaviorClock";
ROUTE1383.toField = "set_fraction";
ROUTE1383.toNode = "r_pinky_proximal_OI";
ProtoBody603.children[255] = ROUTE1383;

let OrientationInterpolator1384 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1384.DEF = "r_ring0_OI";
let IS1385 = browser.currentScene.createNode("IS");
let connect1386 = browser.currentScene.createNode("connect");
connect1386.nodeField = "key";
connect1386.protoField = "r_ring0_key";
IS1385.connect = new MFNode();

IS1385.connect[0] = connect1386;

let connect1387 = browser.currentScene.createNode("connect");
connect1387.nodeField = "keyValue";
connect1387.protoField = "r_ring0_keyValue";
IS1385.connect[1] = connect1387;

let connect1388 = browser.currentScene.createNode("connect");
connect1388.nodeField = "value_changed";
connect1388.protoField = "r_ring0_changed";
IS1385.connect[2] = connect1388;

OrientationInterpolator1384.iS = IS1385;

ProtoBody603.children[256] = OrientationInterpolator1384;

let ROUTE1389 = browser.currentScene.createNode("ROUTE");
ROUTE1389.fromField = "fraction_changed";
ROUTE1389.fromNode = "BehaviorClock";
ROUTE1389.toField = "set_fraction";
ROUTE1389.toNode = "r_ring0_OI";
ProtoBody603.children[257] = ROUTE1389;

let OrientationInterpolator1390 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1390.DEF = "r_ring1_OI";
let IS1391 = browser.currentScene.createNode("IS");
let connect1392 = browser.currentScene.createNode("connect");
connect1392.nodeField = "key";
connect1392.protoField = "r_ring1_key";
IS1391.connect = new MFNode();

IS1391.connect[0] = connect1392;

let connect1393 = browser.currentScene.createNode("connect");
connect1393.nodeField = "keyValue";
connect1393.protoField = "r_ring1_keyValue";
IS1391.connect[1] = connect1393;

let connect1394 = browser.currentScene.createNode("connect");
connect1394.nodeField = "value_changed";
connect1394.protoField = "r_ring1_changed";
IS1391.connect[2] = connect1394;

OrientationInterpolator1390.iS = IS1391;

ProtoBody603.children[258] = OrientationInterpolator1390;

let ROUTE1395 = browser.currentScene.createNode("ROUTE");
ROUTE1395.fromField = "fraction_changed";
ROUTE1395.fromNode = "BehaviorClock";
ROUTE1395.toField = "set_fraction";
ROUTE1395.toNode = "r_ring1_OI";
ProtoBody603.children[259] = ROUTE1395;

let OrientationInterpolator1396 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1396.DEF = "r_ring2_OI";
let IS1397 = browser.currentScene.createNode("IS");
let connect1398 = browser.currentScene.createNode("connect");
connect1398.nodeField = "key";
connect1398.protoField = "r_ring2_key";
IS1397.connect = new MFNode();

IS1397.connect[0] = connect1398;

let connect1399 = browser.currentScene.createNode("connect");
connect1399.nodeField = "keyValue";
connect1399.protoField = "r_ring2_keyValue";
IS1397.connect[1] = connect1399;

let connect1400 = browser.currentScene.createNode("connect");
connect1400.nodeField = "value_changed";
connect1400.protoField = "r_ring2_changed";
IS1397.connect[2] = connect1400;

OrientationInterpolator1396.iS = IS1397;

ProtoBody603.children[260] = OrientationInterpolator1396;

let ROUTE1401 = browser.currentScene.createNode("ROUTE");
ROUTE1401.fromField = "fraction_changed";
ROUTE1401.fromNode = "BehaviorClock";
ROUTE1401.toField = "set_fraction";
ROUTE1401.toNode = "r_ring2_OI";
ProtoBody603.children[261] = ROUTE1401;

let OrientationInterpolator1402 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1402.DEF = "r_ring3_OI";
let IS1403 = browser.currentScene.createNode("IS");
let connect1404 = browser.currentScene.createNode("connect");
connect1404.nodeField = "key";
connect1404.protoField = "r_ring3_key";
IS1403.connect = new MFNode();

IS1403.connect[0] = connect1404;

let connect1405 = browser.currentScene.createNode("connect");
connect1405.nodeField = "keyValue";
connect1405.protoField = "r_ring3_keyValue";
IS1403.connect[1] = connect1405;

let connect1406 = browser.currentScene.createNode("connect");
connect1406.nodeField = "value_changed";
connect1406.protoField = "r_ring3_changed";
IS1403.connect[2] = connect1406;

OrientationInterpolator1402.iS = IS1403;

ProtoBody603.children[262] = OrientationInterpolator1402;

let ROUTE1407 = browser.currentScene.createNode("ROUTE");
ROUTE1407.fromField = "fraction_changed";
ROUTE1407.fromNode = "BehaviorClock";
ROUTE1407.toField = "set_fraction";
ROUTE1407.toNode = "r_ring3_OI";
ProtoBody603.children[263] = ROUTE1407;

let OrientationInterpolator1408 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1408.DEF = "r_ring_distal_OI";
let IS1409 = browser.currentScene.createNode("IS");
let connect1410 = browser.currentScene.createNode("connect");
connect1410.nodeField = "key";
connect1410.protoField = "r_ring_distal_key";
IS1409.connect = new MFNode();

IS1409.connect[0] = connect1410;

let connect1411 = browser.currentScene.createNode("connect");
connect1411.nodeField = "keyValue";
connect1411.protoField = "r_ring_distal_keyValue";
IS1409.connect[1] = connect1411;

let connect1412 = browser.currentScene.createNode("connect");
connect1412.nodeField = "value_changed";
connect1412.protoField = "r_ring_distal_changed";
IS1409.connect[2] = connect1412;

OrientationInterpolator1408.iS = IS1409;

ProtoBody603.children[264] = OrientationInterpolator1408;

let ROUTE1413 = browser.currentScene.createNode("ROUTE");
ROUTE1413.fromField = "fraction_changed";
ROUTE1413.fromNode = "BehaviorClock";
ROUTE1413.toField = "set_fraction";
ROUTE1413.toNode = "r_ring_distal_OI";
ProtoBody603.children[265] = ROUTE1413;

let OrientationInterpolator1414 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1414.DEF = "r_ring_metacarpal_OI";
let IS1415 = browser.currentScene.createNode("IS");
let connect1416 = browser.currentScene.createNode("connect");
connect1416.nodeField = "key";
connect1416.protoField = "r_ring_metacarpal_key";
IS1415.connect = new MFNode();

IS1415.connect[0] = connect1416;

let connect1417 = browser.currentScene.createNode("connect");
connect1417.nodeField = "keyValue";
connect1417.protoField = "r_ring_metacarpal_keyValue";
IS1415.connect[1] = connect1417;

let connect1418 = browser.currentScene.createNode("connect");
connect1418.nodeField = "value_changed";
connect1418.protoField = "r_ring_metacarpal_changed";
IS1415.connect[2] = connect1418;

OrientationInterpolator1414.iS = IS1415;

ProtoBody603.children[266] = OrientationInterpolator1414;

let ROUTE1419 = browser.currentScene.createNode("ROUTE");
ROUTE1419.fromField = "fraction_changed";
ROUTE1419.fromNode = "BehaviorClock";
ROUTE1419.toField = "set_fraction";
ROUTE1419.toNode = "r_ring_metacarpal_OI";
ProtoBody603.children[267] = ROUTE1419;

let OrientationInterpolator1420 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1420.DEF = "r_ring_middle_OI";
let IS1421 = browser.currentScene.createNode("IS");
let connect1422 = browser.currentScene.createNode("connect");
connect1422.nodeField = "key";
connect1422.protoField = "r_ring_middle_key";
IS1421.connect = new MFNode();

IS1421.connect[0] = connect1422;

let connect1423 = browser.currentScene.createNode("connect");
connect1423.nodeField = "keyValue";
connect1423.protoField = "r_ring_middle_keyValue";
IS1421.connect[1] = connect1423;

let connect1424 = browser.currentScene.createNode("connect");
connect1424.nodeField = "value_changed";
connect1424.protoField = "r_ring_middle_changed";
IS1421.connect[2] = connect1424;

OrientationInterpolator1420.iS = IS1421;

ProtoBody603.children[268] = OrientationInterpolator1420;

let ROUTE1425 = browser.currentScene.createNode("ROUTE");
ROUTE1425.fromField = "fraction_changed";
ROUTE1425.fromNode = "BehaviorClock";
ROUTE1425.toField = "set_fraction";
ROUTE1425.toNode = "r_ring_middle_OI";
ProtoBody603.children[269] = ROUTE1425;

let OrientationInterpolator1426 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1426.DEF = "r_ring_proximal_OI";
let IS1427 = browser.currentScene.createNode("IS");
let connect1428 = browser.currentScene.createNode("connect");
connect1428.nodeField = "key";
connect1428.protoField = "r_ring_proximal_key";
IS1427.connect = new MFNode();

IS1427.connect[0] = connect1428;

let connect1429 = browser.currentScene.createNode("connect");
connect1429.nodeField = "keyValue";
connect1429.protoField = "r_ring_proximal_keyValue";
IS1427.connect[1] = connect1429;

let connect1430 = browser.currentScene.createNode("connect");
connect1430.nodeField = "value_changed";
connect1430.protoField = "r_ring_proximal_changed";
IS1427.connect[2] = connect1430;

OrientationInterpolator1426.iS = IS1427;

ProtoBody603.children[270] = OrientationInterpolator1426;

let ROUTE1431 = browser.currentScene.createNode("ROUTE");
ROUTE1431.fromField = "fraction_changed";
ROUTE1431.fromNode = "BehaviorClock";
ROUTE1431.toField = "set_fraction";
ROUTE1431.toNode = "r_ring_proximal_OI";
ProtoBody603.children[271] = ROUTE1431;

let OrientationInterpolator1432 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1432.DEF = "r_scapula_OI";
let IS1433 = browser.currentScene.createNode("IS");
let connect1434 = browser.currentScene.createNode("connect");
connect1434.nodeField = "key";
connect1434.protoField = "r_scapula_key";
IS1433.connect = new MFNode();

IS1433.connect[0] = connect1434;

let connect1435 = browser.currentScene.createNode("connect");
connect1435.nodeField = "keyValue";
connect1435.protoField = "r_scapula_keyValue";
IS1433.connect[1] = connect1435;

let connect1436 = browser.currentScene.createNode("connect");
connect1436.nodeField = "value_changed";
connect1436.protoField = "r_scapula_changed";
IS1433.connect[2] = connect1436;

OrientationInterpolator1432.iS = IS1433;

ProtoBody603.children[272] = OrientationInterpolator1432;

let ROUTE1437 = browser.currentScene.createNode("ROUTE");
ROUTE1437.fromField = "fraction_changed";
ROUTE1437.fromNode = "BehaviorClock";
ROUTE1437.toField = "set_fraction";
ROUTE1437.toNode = "r_scapula_OI";
ProtoBody603.children[273] = ROUTE1437;

let OrientationInterpolator1438 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1438.DEF = "r_shoulder_OI";
let IS1439 = browser.currentScene.createNode("IS");
let connect1440 = browser.currentScene.createNode("connect");
connect1440.nodeField = "key";
connect1440.protoField = "r_shoulder_key";
IS1439.connect = new MFNode();

IS1439.connect[0] = connect1440;

let connect1441 = browser.currentScene.createNode("connect");
connect1441.nodeField = "keyValue";
connect1441.protoField = "r_shoulder_keyValue";
IS1439.connect[1] = connect1441;

let connect1442 = browser.currentScene.createNode("connect");
connect1442.nodeField = "value_changed";
connect1442.protoField = "r_shoulder_changed";
IS1439.connect[2] = connect1442;

OrientationInterpolator1438.iS = IS1439;

ProtoBody603.children[274] = OrientationInterpolator1438;

let ROUTE1443 = browser.currentScene.createNode("ROUTE");
ROUTE1443.fromField = "fraction_changed";
ROUTE1443.fromNode = "BehaviorClock";
ROUTE1443.toField = "set_fraction";
ROUTE1443.toNode = "r_shoulder_OI";
ProtoBody603.children[275] = ROUTE1443;

let OrientationInterpolator1444 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1444.DEF = "r_sternoclavicular_OI";
let IS1445 = browser.currentScene.createNode("IS");
let connect1446 = browser.currentScene.createNode("connect");
connect1446.nodeField = "key";
connect1446.protoField = "r_sternoclavicular_key";
IS1445.connect = new MFNode();

IS1445.connect[0] = connect1446;

let connect1447 = browser.currentScene.createNode("connect");
connect1447.nodeField = "keyValue";
connect1447.protoField = "r_sternoclavicular_keyValue";
IS1445.connect[1] = connect1447;

let connect1448 = browser.currentScene.createNode("connect");
connect1448.nodeField = "value_changed";
connect1448.protoField = "r_sternoclavicular_changed";
IS1445.connect[2] = connect1448;

OrientationInterpolator1444.iS = IS1445;

ProtoBody603.children[276] = OrientationInterpolator1444;

let ROUTE1449 = browser.currentScene.createNode("ROUTE");
ROUTE1449.fromField = "fraction_changed";
ROUTE1449.fromNode = "BehaviorClock";
ROUTE1449.toField = "set_fraction";
ROUTE1449.toNode = "r_sternoclavicular_OI";
ProtoBody603.children[277] = ROUTE1449;

let OrientationInterpolator1450 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1450.DEF = "r_subtalar_OI";
let IS1451 = browser.currentScene.createNode("IS");
let connect1452 = browser.currentScene.createNode("connect");
connect1452.nodeField = "key";
connect1452.protoField = "r_subtalar_key";
IS1451.connect = new MFNode();

IS1451.connect[0] = connect1452;

let connect1453 = browser.currentScene.createNode("connect");
connect1453.nodeField = "keyValue";
connect1453.protoField = "r_subtalar_keyValue";
IS1451.connect[1] = connect1453;

let connect1454 = browser.currentScene.createNode("connect");
connect1454.nodeField = "value_changed";
connect1454.protoField = "r_subtalar_changed";
IS1451.connect[2] = connect1454;

OrientationInterpolator1450.iS = IS1451;

ProtoBody603.children[278] = OrientationInterpolator1450;

let ROUTE1455 = browser.currentScene.createNode("ROUTE");
ROUTE1455.fromField = "fraction_changed";
ROUTE1455.fromNode = "BehaviorClock";
ROUTE1455.toField = "set_fraction";
ROUTE1455.toNode = "r_subtalar_OI";
ProtoBody603.children[279] = ROUTE1455;

let OrientationInterpolator1456 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1456.DEF = "r_thigh_OI";
let IS1457 = browser.currentScene.createNode("IS");
let connect1458 = browser.currentScene.createNode("connect");
connect1458.nodeField = "key";
connect1458.protoField = "r_thigh_key";
IS1457.connect = new MFNode();

IS1457.connect[0] = connect1458;

let connect1459 = browser.currentScene.createNode("connect");
connect1459.nodeField = "keyValue";
connect1459.protoField = "r_thigh_keyValue";
IS1457.connect[1] = connect1459;

let connect1460 = browser.currentScene.createNode("connect");
connect1460.nodeField = "value_changed";
connect1460.protoField = "r_thigh_changed";
IS1457.connect[2] = connect1460;

OrientationInterpolator1456.iS = IS1457;

ProtoBody603.children[280] = OrientationInterpolator1456;

let ROUTE1461 = browser.currentScene.createNode("ROUTE");
ROUTE1461.fromField = "fraction_changed";
ROUTE1461.fromNode = "BehaviorClock";
ROUTE1461.toField = "set_fraction";
ROUTE1461.toNode = "r_thigh_OI";
ProtoBody603.children[281] = ROUTE1461;

let OrientationInterpolator1462 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1462.DEF = "r_thumb1_OI";
let IS1463 = browser.currentScene.createNode("IS");
let connect1464 = browser.currentScene.createNode("connect");
connect1464.nodeField = "key";
connect1464.protoField = "r_thumb1_key";
IS1463.connect = new MFNode();

IS1463.connect[0] = connect1464;

let connect1465 = browser.currentScene.createNode("connect");
connect1465.nodeField = "keyValue";
connect1465.protoField = "r_thumb1_keyValue";
IS1463.connect[1] = connect1465;

let connect1466 = browser.currentScene.createNode("connect");
connect1466.nodeField = "value_changed";
connect1466.protoField = "r_thumb1_changed";
IS1463.connect[2] = connect1466;

OrientationInterpolator1462.iS = IS1463;

ProtoBody603.children[282] = OrientationInterpolator1462;

let ROUTE1467 = browser.currentScene.createNode("ROUTE");
ROUTE1467.fromField = "fraction_changed";
ROUTE1467.fromNode = "BehaviorClock";
ROUTE1467.toField = "set_fraction";
ROUTE1467.toNode = "r_thumb1_OI";
ProtoBody603.children[283] = ROUTE1467;

let OrientationInterpolator1468 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1468.DEF = "r_thumb2_OI";
let IS1469 = browser.currentScene.createNode("IS");
let connect1470 = browser.currentScene.createNode("connect");
connect1470.nodeField = "key";
connect1470.protoField = "r_thumb2_key";
IS1469.connect = new MFNode();

IS1469.connect[0] = connect1470;

let connect1471 = browser.currentScene.createNode("connect");
connect1471.nodeField = "keyValue";
connect1471.protoField = "r_thumb2_keyValue";
IS1469.connect[1] = connect1471;

let connect1472 = browser.currentScene.createNode("connect");
connect1472.nodeField = "value_changed";
connect1472.protoField = "r_thumb2_changed";
IS1469.connect[2] = connect1472;

OrientationInterpolator1468.iS = IS1469;

ProtoBody603.children[284] = OrientationInterpolator1468;

let ROUTE1473 = browser.currentScene.createNode("ROUTE");
ROUTE1473.fromField = "fraction_changed";
ROUTE1473.fromNode = "BehaviorClock";
ROUTE1473.toField = "set_fraction";
ROUTE1473.toNode = "r_thumb2_OI";
ProtoBody603.children[285] = ROUTE1473;

let OrientationInterpolator1474 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1474.DEF = "r_thumb3_OI";
let IS1475 = browser.currentScene.createNode("IS");
let connect1476 = browser.currentScene.createNode("connect");
connect1476.nodeField = "key";
connect1476.protoField = "r_thumb3_key";
IS1475.connect = new MFNode();

IS1475.connect[0] = connect1476;

let connect1477 = browser.currentScene.createNode("connect");
connect1477.nodeField = "keyValue";
connect1477.protoField = "r_thumb3_keyValue";
IS1475.connect[1] = connect1477;

let connect1478 = browser.currentScene.createNode("connect");
connect1478.nodeField = "value_changed";
connect1478.protoField = "r_thumb3_changed";
IS1475.connect[2] = connect1478;

OrientationInterpolator1474.iS = IS1475;

ProtoBody603.children[286] = OrientationInterpolator1474;

let ROUTE1479 = browser.currentScene.createNode("ROUTE");
ROUTE1479.fromField = "fraction_changed";
ROUTE1479.fromNode = "BehaviorClock";
ROUTE1479.toField = "set_fraction";
ROUTE1479.toNode = "r_thumb3_OI";
ProtoBody603.children[287] = ROUTE1479;

let OrientationInterpolator1480 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1480.DEF = "r_thumb_distal_OI";
let IS1481 = browser.currentScene.createNode("IS");
let connect1482 = browser.currentScene.createNode("connect");
connect1482.nodeField = "key";
connect1482.protoField = "r_thumb_distal_key";
IS1481.connect = new MFNode();

IS1481.connect[0] = connect1482;

let connect1483 = browser.currentScene.createNode("connect");
connect1483.nodeField = "keyValue";
connect1483.protoField = "r_thumb_distal_keyValue";
IS1481.connect[1] = connect1483;

let connect1484 = browser.currentScene.createNode("connect");
connect1484.nodeField = "value_changed";
connect1484.protoField = "r_thumb_distal_changed";
IS1481.connect[2] = connect1484;

OrientationInterpolator1480.iS = IS1481;

ProtoBody603.children[288] = OrientationInterpolator1480;

let ROUTE1485 = browser.currentScene.createNode("ROUTE");
ROUTE1485.fromField = "fraction_changed";
ROUTE1485.fromNode = "BehaviorClock";
ROUTE1485.toField = "set_fraction";
ROUTE1485.toNode = "r_thumb_distal_OI";
ProtoBody603.children[289] = ROUTE1485;

let OrientationInterpolator1486 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1486.DEF = "r_thumb_metacarpal_OI";
let IS1487 = browser.currentScene.createNode("IS");
let connect1488 = browser.currentScene.createNode("connect");
connect1488.nodeField = "key";
connect1488.protoField = "r_thumb_metacarpal_key";
IS1487.connect = new MFNode();

IS1487.connect[0] = connect1488;

let connect1489 = browser.currentScene.createNode("connect");
connect1489.nodeField = "keyValue";
connect1489.protoField = "r_thumb_metacarpal_keyValue";
IS1487.connect[1] = connect1489;

let connect1490 = browser.currentScene.createNode("connect");
connect1490.nodeField = "value_changed";
connect1490.protoField = "r_thumb_metacarpal_changed";
IS1487.connect[2] = connect1490;

OrientationInterpolator1486.iS = IS1487;

ProtoBody603.children[290] = OrientationInterpolator1486;

let ROUTE1491 = browser.currentScene.createNode("ROUTE");
ROUTE1491.fromField = "fraction_changed";
ROUTE1491.fromNode = "BehaviorClock";
ROUTE1491.toField = "set_fraction";
ROUTE1491.toNode = "r_thumb_metacarpal_OI";
ProtoBody603.children[291] = ROUTE1491;

let OrientationInterpolator1492 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1492.DEF = "r_thumb_proximal_OI";
let IS1493 = browser.currentScene.createNode("IS");
let connect1494 = browser.currentScene.createNode("connect");
connect1494.nodeField = "key";
connect1494.protoField = "r_thumb_proximal_key";
IS1493.connect = new MFNode();

IS1493.connect[0] = connect1494;

let connect1495 = browser.currentScene.createNode("connect");
connect1495.nodeField = "keyValue";
connect1495.protoField = "r_thumb_proximal_keyValue";
IS1493.connect[1] = connect1495;

let connect1496 = browser.currentScene.createNode("connect");
connect1496.nodeField = "value_changed";
connect1496.protoField = "r_thumb_proximal_changed";
IS1493.connect[2] = connect1496;

OrientationInterpolator1492.iS = IS1493;

ProtoBody603.children[292] = OrientationInterpolator1492;

let ROUTE1497 = browser.currentScene.createNode("ROUTE");
ROUTE1497.fromField = "fraction_changed";
ROUTE1497.fromNode = "BehaviorClock";
ROUTE1497.toField = "set_fraction";
ROUTE1497.toNode = "r_thumb_proximal_OI";
ProtoBody603.children[293] = ROUTE1497;

let OrientationInterpolator1498 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1498.DEF = "r_upperarm_OI";
let IS1499 = browser.currentScene.createNode("IS");
let connect1500 = browser.currentScene.createNode("connect");
connect1500.nodeField = "key";
connect1500.protoField = "r_upperarm_key";
IS1499.connect = new MFNode();

IS1499.connect[0] = connect1500;

let connect1501 = browser.currentScene.createNode("connect");
connect1501.nodeField = "keyValue";
connect1501.protoField = "r_upperarm_keyValue";
IS1499.connect[1] = connect1501;

let connect1502 = browser.currentScene.createNode("connect");
connect1502.nodeField = "value_changed";
connect1502.protoField = "r_upperarm_changed";
IS1499.connect[2] = connect1502;

OrientationInterpolator1498.iS = IS1499;

ProtoBody603.children[294] = OrientationInterpolator1498;

let ROUTE1503 = browser.currentScene.createNode("ROUTE");
ROUTE1503.fromField = "fraction_changed";
ROUTE1503.fromNode = "BehaviorClock";
ROUTE1503.toField = "set_fraction";
ROUTE1503.toNode = "r_upperarm_OI";
ProtoBody603.children[295] = ROUTE1503;

let OrientationInterpolator1504 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1504.DEF = "r_wrist_OI";
let IS1505 = browser.currentScene.createNode("IS");
let connect1506 = browser.currentScene.createNode("connect");
connect1506.nodeField = "key";
connect1506.protoField = "r_wrist_key";
IS1505.connect = new MFNode();

IS1505.connect[0] = connect1506;

let connect1507 = browser.currentScene.createNode("connect");
connect1507.nodeField = "keyValue";
connect1507.protoField = "r_wrist_keyValue";
IS1505.connect[1] = connect1507;

let connect1508 = browser.currentScene.createNode("connect");
connect1508.nodeField = "value_changed";
connect1508.protoField = "r_wrist_changed";
IS1505.connect[2] = connect1508;

OrientationInterpolator1504.iS = IS1505;

ProtoBody603.children[296] = OrientationInterpolator1504;

let ROUTE1509 = browser.currentScene.createNode("ROUTE");
ROUTE1509.fromField = "fraction_changed";
ROUTE1509.fromNode = "BehaviorClock";
ROUTE1509.toField = "set_fraction";
ROUTE1509.toNode = "r_wrist_OI";
ProtoBody603.children[297] = ROUTE1509;

let OrientationInterpolator1510 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1510.DEF = "sacroiliac_OI";
let IS1511 = browser.currentScene.createNode("IS");
let connect1512 = browser.currentScene.createNode("connect");
connect1512.nodeField = "key";
connect1512.protoField = "sacroiliac_key";
IS1511.connect = new MFNode();

IS1511.connect[0] = connect1512;

let connect1513 = browser.currentScene.createNode("connect");
connect1513.nodeField = "keyValue";
connect1513.protoField = "sacroiliac_keyValue";
IS1511.connect[1] = connect1513;

let connect1514 = browser.currentScene.createNode("connect");
connect1514.nodeField = "value_changed";
connect1514.protoField = "sacroiliac_changed";
IS1511.connect[2] = connect1514;

OrientationInterpolator1510.iS = IS1511;

ProtoBody603.children[298] = OrientationInterpolator1510;

let ROUTE1515 = browser.currentScene.createNode("ROUTE");
ROUTE1515.fromField = "fraction_changed";
ROUTE1515.fromNode = "BehaviorClock";
ROUTE1515.toField = "set_fraction";
ROUTE1515.toNode = "sacroiliac_OI";
ProtoBody603.children[299] = ROUTE1515;

let OrientationInterpolator1516 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1516.DEF = "sacrum_OI";
let IS1517 = browser.currentScene.createNode("IS");
let connect1518 = browser.currentScene.createNode("connect");
connect1518.nodeField = "key";
connect1518.protoField = "sacrum_key";
IS1517.connect = new MFNode();

IS1517.connect[0] = connect1518;

let connect1519 = browser.currentScene.createNode("connect");
connect1519.nodeField = "keyValue";
connect1519.protoField = "sacrum_keyValue";
IS1517.connect[1] = connect1519;

let connect1520 = browser.currentScene.createNode("connect");
connect1520.nodeField = "value_changed";
connect1520.protoField = "sacrum_changed";
IS1517.connect[2] = connect1520;

OrientationInterpolator1516.iS = IS1517;

ProtoBody603.children[300] = OrientationInterpolator1516;

let ROUTE1521 = browser.currentScene.createNode("ROUTE");
ROUTE1521.fromField = "fraction_changed";
ROUTE1521.fromNode = "BehaviorClock";
ROUTE1521.toField = "set_fraction";
ROUTE1521.toNode = "sacrum_OI";
ProtoBody603.children[301] = ROUTE1521;

let OrientationInterpolator1522 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1522.DEF = "skull_OI";
let IS1523 = browser.currentScene.createNode("IS");
let connect1524 = browser.currentScene.createNode("connect");
connect1524.nodeField = "key";
connect1524.protoField = "skull_key";
IS1523.connect = new MFNode();

IS1523.connect[0] = connect1524;

let connect1525 = browser.currentScene.createNode("connect");
connect1525.nodeField = "keyValue";
connect1525.protoField = "skull_keyValue";
IS1523.connect[1] = connect1525;

let connect1526 = browser.currentScene.createNode("connect");
connect1526.nodeField = "value_changed";
connect1526.protoField = "skull_changed";
IS1523.connect[2] = connect1526;

OrientationInterpolator1522.iS = IS1523;

ProtoBody603.children[302] = OrientationInterpolator1522;

let ROUTE1527 = browser.currentScene.createNode("ROUTE");
ROUTE1527.fromField = "fraction_changed";
ROUTE1527.fromNode = "BehaviorClock";
ROUTE1527.toField = "set_fraction";
ROUTE1527.toNode = "skull_OI";
ProtoBody603.children[303] = ROUTE1527;

let OrientationInterpolator1528 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1528.DEF = "skullbase_OI";
let IS1529 = browser.currentScene.createNode("IS");
let connect1530 = browser.currentScene.createNode("connect");
connect1530.nodeField = "key";
connect1530.protoField = "skullbase_key";
IS1529.connect = new MFNode();

IS1529.connect[0] = connect1530;

let connect1531 = browser.currentScene.createNode("connect");
connect1531.nodeField = "keyValue";
connect1531.protoField = "skullbase_keyValue";
IS1529.connect[1] = connect1531;

let connect1532 = browser.currentScene.createNode("connect");
connect1532.nodeField = "value_changed";
connect1532.protoField = "skullbase_changed";
IS1529.connect[2] = connect1532;

OrientationInterpolator1528.iS = IS1529;

ProtoBody603.children[304] = OrientationInterpolator1528;

let ROUTE1533 = browser.currentScene.createNode("ROUTE");
ROUTE1533.fromField = "fraction_changed";
ROUTE1533.fromNode = "BehaviorClock";
ROUTE1533.toField = "set_fraction";
ROUTE1533.toNode = "skullbase_OI";
ProtoBody603.children[305] = ROUTE1533;

let OrientationInterpolator1534 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1534.DEF = "t1_OI";
let IS1535 = browser.currentScene.createNode("IS");
let connect1536 = browser.currentScene.createNode("connect");
connect1536.nodeField = "key";
connect1536.protoField = "t1_key";
IS1535.connect = new MFNode();

IS1535.connect[0] = connect1536;

let connect1537 = browser.currentScene.createNode("connect");
connect1537.nodeField = "keyValue";
connect1537.protoField = "t1_keyValue";
IS1535.connect[1] = connect1537;

let connect1538 = browser.currentScene.createNode("connect");
connect1538.nodeField = "value_changed";
connect1538.protoField = "t1_changed";
IS1535.connect[2] = connect1538;

OrientationInterpolator1534.iS = IS1535;

ProtoBody603.children[306] = OrientationInterpolator1534;

let ROUTE1539 = browser.currentScene.createNode("ROUTE");
ROUTE1539.fromField = "fraction_changed";
ROUTE1539.fromNode = "BehaviorClock";
ROUTE1539.toField = "set_fraction";
ROUTE1539.toNode = "t1_OI";
ProtoBody603.children[307] = ROUTE1539;

let OrientationInterpolator1540 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1540.DEF = "t2_OI";
let IS1541 = browser.currentScene.createNode("IS");
let connect1542 = browser.currentScene.createNode("connect");
connect1542.nodeField = "key";
connect1542.protoField = "t2_key";
IS1541.connect = new MFNode();

IS1541.connect[0] = connect1542;

let connect1543 = browser.currentScene.createNode("connect");
connect1543.nodeField = "keyValue";
connect1543.protoField = "t2_keyValue";
IS1541.connect[1] = connect1543;

let connect1544 = browser.currentScene.createNode("connect");
connect1544.nodeField = "value_changed";
connect1544.protoField = "t2_changed";
IS1541.connect[2] = connect1544;

OrientationInterpolator1540.iS = IS1541;

ProtoBody603.children[308] = OrientationInterpolator1540;

let ROUTE1545 = browser.currentScene.createNode("ROUTE");
ROUTE1545.fromField = "fraction_changed";
ROUTE1545.fromNode = "BehaviorClock";
ROUTE1545.toField = "set_fraction";
ROUTE1545.toNode = "t2_OI";
ProtoBody603.children[309] = ROUTE1545;

let OrientationInterpolator1546 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1546.DEF = "t3_OI";
let IS1547 = browser.currentScene.createNode("IS");
let connect1548 = browser.currentScene.createNode("connect");
connect1548.nodeField = "key";
connect1548.protoField = "t3_key";
IS1547.connect = new MFNode();

IS1547.connect[0] = connect1548;

let connect1549 = browser.currentScene.createNode("connect");
connect1549.nodeField = "keyValue";
connect1549.protoField = "t3_keyValue";
IS1547.connect[1] = connect1549;

let connect1550 = browser.currentScene.createNode("connect");
connect1550.nodeField = "value_changed";
connect1550.protoField = "t3_changed";
IS1547.connect[2] = connect1550;

OrientationInterpolator1546.iS = IS1547;

ProtoBody603.children[310] = OrientationInterpolator1546;

let ROUTE1551 = browser.currentScene.createNode("ROUTE");
ROUTE1551.fromField = "fraction_changed";
ROUTE1551.fromNode = "BehaviorClock";
ROUTE1551.toField = "set_fraction";
ROUTE1551.toNode = "t3_OI";
ProtoBody603.children[311] = ROUTE1551;

let OrientationInterpolator1552 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1552.DEF = "t4_OI";
let IS1553 = browser.currentScene.createNode("IS");
let connect1554 = browser.currentScene.createNode("connect");
connect1554.nodeField = "key";
connect1554.protoField = "t4_key";
IS1553.connect = new MFNode();

IS1553.connect[0] = connect1554;

let connect1555 = browser.currentScene.createNode("connect");
connect1555.nodeField = "keyValue";
connect1555.protoField = "t4_keyValue";
IS1553.connect[1] = connect1555;

let connect1556 = browser.currentScene.createNode("connect");
connect1556.nodeField = "value_changed";
connect1556.protoField = "t4_changed";
IS1553.connect[2] = connect1556;

OrientationInterpolator1552.iS = IS1553;

ProtoBody603.children[312] = OrientationInterpolator1552;

let ROUTE1557 = browser.currentScene.createNode("ROUTE");
ROUTE1557.fromField = "fraction_changed";
ROUTE1557.fromNode = "BehaviorClock";
ROUTE1557.toField = "set_fraction";
ROUTE1557.toNode = "t4_OI";
ProtoBody603.children[313] = ROUTE1557;

let OrientationInterpolator1558 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1558.DEF = "t5_OI";
let IS1559 = browser.currentScene.createNode("IS");
let connect1560 = browser.currentScene.createNode("connect");
connect1560.nodeField = "key";
connect1560.protoField = "t5_key";
IS1559.connect = new MFNode();

IS1559.connect[0] = connect1560;

let connect1561 = browser.currentScene.createNode("connect");
connect1561.nodeField = "keyValue";
connect1561.protoField = "t5_keyValue";
IS1559.connect[1] = connect1561;

let connect1562 = browser.currentScene.createNode("connect");
connect1562.nodeField = "value_changed";
connect1562.protoField = "t5_changed";
IS1559.connect[2] = connect1562;

OrientationInterpolator1558.iS = IS1559;

ProtoBody603.children[314] = OrientationInterpolator1558;

let ROUTE1563 = browser.currentScene.createNode("ROUTE");
ROUTE1563.fromField = "fraction_changed";
ROUTE1563.fromNode = "BehaviorClock";
ROUTE1563.toField = "set_fraction";
ROUTE1563.toNode = "t5_OI";
ProtoBody603.children[315] = ROUTE1563;

let OrientationInterpolator1564 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1564.DEF = "t6_OI";
let IS1565 = browser.currentScene.createNode("IS");
let connect1566 = browser.currentScene.createNode("connect");
connect1566.nodeField = "key";
connect1566.protoField = "t6_key";
IS1565.connect = new MFNode();

IS1565.connect[0] = connect1566;

let connect1567 = browser.currentScene.createNode("connect");
connect1567.nodeField = "keyValue";
connect1567.protoField = "t6_keyValue";
IS1565.connect[1] = connect1567;

let connect1568 = browser.currentScene.createNode("connect");
connect1568.nodeField = "value_changed";
connect1568.protoField = "t6_changed";
IS1565.connect[2] = connect1568;

OrientationInterpolator1564.iS = IS1565;

ProtoBody603.children[316] = OrientationInterpolator1564;

let ROUTE1569 = browser.currentScene.createNode("ROUTE");
ROUTE1569.fromField = "fraction_changed";
ROUTE1569.fromNode = "BehaviorClock";
ROUTE1569.toField = "set_fraction";
ROUTE1569.toNode = "t6_OI";
ProtoBody603.children[317] = ROUTE1569;

let OrientationInterpolator1570 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1570.DEF = "t7_OI";
let IS1571 = browser.currentScene.createNode("IS");
let connect1572 = browser.currentScene.createNode("connect");
connect1572.nodeField = "key";
connect1572.protoField = "t7_key";
IS1571.connect = new MFNode();

IS1571.connect[0] = connect1572;

let connect1573 = browser.currentScene.createNode("connect");
connect1573.nodeField = "keyValue";
connect1573.protoField = "t7_keyValue";
IS1571.connect[1] = connect1573;

let connect1574 = browser.currentScene.createNode("connect");
connect1574.nodeField = "value_changed";
connect1574.protoField = "t7_changed";
IS1571.connect[2] = connect1574;

OrientationInterpolator1570.iS = IS1571;

ProtoBody603.children[318] = OrientationInterpolator1570;

let ROUTE1575 = browser.currentScene.createNode("ROUTE");
ROUTE1575.fromField = "fraction_changed";
ROUTE1575.fromNode = "BehaviorClock";
ROUTE1575.toField = "set_fraction";
ROUTE1575.toNode = "t7_OI";
ProtoBody603.children[319] = ROUTE1575;

let OrientationInterpolator1576 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1576.DEF = "t8_OI";
let IS1577 = browser.currentScene.createNode("IS");
let connect1578 = browser.currentScene.createNode("connect");
connect1578.nodeField = "key";
connect1578.protoField = "t8_key";
IS1577.connect = new MFNode();

IS1577.connect[0] = connect1578;

let connect1579 = browser.currentScene.createNode("connect");
connect1579.nodeField = "keyValue";
connect1579.protoField = "t8_keyValue";
IS1577.connect[1] = connect1579;

let connect1580 = browser.currentScene.createNode("connect");
connect1580.nodeField = "value_changed";
connect1580.protoField = "t8_changed";
IS1577.connect[2] = connect1580;

OrientationInterpolator1576.iS = IS1577;

ProtoBody603.children[320] = OrientationInterpolator1576;

let ROUTE1581 = browser.currentScene.createNode("ROUTE");
ROUTE1581.fromField = "fraction_changed";
ROUTE1581.fromNode = "BehaviorClock";
ROUTE1581.toField = "set_fraction";
ROUTE1581.toNode = "t8_OI";
ProtoBody603.children[321] = ROUTE1581;

let OrientationInterpolator1582 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1582.DEF = "t9_OI";
let IS1583 = browser.currentScene.createNode("IS");
let connect1584 = browser.currentScene.createNode("connect");
connect1584.nodeField = "key";
connect1584.protoField = "t9_key";
IS1583.connect = new MFNode();

IS1583.connect[0] = connect1584;

let connect1585 = browser.currentScene.createNode("connect");
connect1585.nodeField = "keyValue";
connect1585.protoField = "t9_keyValue";
IS1583.connect[1] = connect1585;

let connect1586 = browser.currentScene.createNode("connect");
connect1586.nodeField = "value_changed";
connect1586.protoField = "t9_changed";
IS1583.connect[2] = connect1586;

OrientationInterpolator1582.iS = IS1583;

ProtoBody603.children[322] = OrientationInterpolator1582;

let ROUTE1587 = browser.currentScene.createNode("ROUTE");
ROUTE1587.fromField = "fraction_changed";
ROUTE1587.fromNode = "BehaviorClock";
ROUTE1587.toField = "set_fraction";
ROUTE1587.toNode = "t9_OI";
ProtoBody603.children[323] = ROUTE1587;

let OrientationInterpolator1588 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1588.DEF = "t10_OI";
let IS1589 = browser.currentScene.createNode("IS");
let connect1590 = browser.currentScene.createNode("connect");
connect1590.nodeField = "key";
connect1590.protoField = "t10_key";
IS1589.connect = new MFNode();

IS1589.connect[0] = connect1590;

let connect1591 = browser.currentScene.createNode("connect");
connect1591.nodeField = "keyValue";
connect1591.protoField = "t10_keyValue";
IS1589.connect[1] = connect1591;

let connect1592 = browser.currentScene.createNode("connect");
connect1592.nodeField = "value_changed";
connect1592.protoField = "t10_changed";
IS1589.connect[2] = connect1592;

OrientationInterpolator1588.iS = IS1589;

ProtoBody603.children[324] = OrientationInterpolator1588;

let ROUTE1593 = browser.currentScene.createNode("ROUTE");
ROUTE1593.fromField = "fraction_changed";
ROUTE1593.fromNode = "BehaviorClock";
ROUTE1593.toField = "set_fraction";
ROUTE1593.toNode = "t10_OI";
ProtoBody603.children[325] = ROUTE1593;

let OrientationInterpolator1594 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1594.DEF = "t11_OI";
let IS1595 = browser.currentScene.createNode("IS");
let connect1596 = browser.currentScene.createNode("connect");
connect1596.nodeField = "key";
connect1596.protoField = "t11_key";
IS1595.connect = new MFNode();

IS1595.connect[0] = connect1596;

let connect1597 = browser.currentScene.createNode("connect");
connect1597.nodeField = "keyValue";
connect1597.protoField = "t11_keyValue";
IS1595.connect[1] = connect1597;

let connect1598 = browser.currentScene.createNode("connect");
connect1598.nodeField = "value_changed";
connect1598.protoField = "t11_changed";
IS1595.connect[2] = connect1598;

OrientationInterpolator1594.iS = IS1595;

ProtoBody603.children[326] = OrientationInterpolator1594;

let ROUTE1599 = browser.currentScene.createNode("ROUTE");
ROUTE1599.fromField = "fraction_changed";
ROUTE1599.fromNode = "BehaviorClock";
ROUTE1599.toField = "set_fraction";
ROUTE1599.toNode = "t11_OI";
ProtoBody603.children[327] = ROUTE1599;

let OrientationInterpolator1600 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1600.DEF = "t12_OI";
let IS1601 = browser.currentScene.createNode("IS");
let connect1602 = browser.currentScene.createNode("connect");
connect1602.nodeField = "key";
connect1602.protoField = "t12_key";
IS1601.connect = new MFNode();

IS1601.connect[0] = connect1602;

let connect1603 = browser.currentScene.createNode("connect");
connect1603.nodeField = "keyValue";
connect1603.protoField = "t12_keyValue";
IS1601.connect[1] = connect1603;

let connect1604 = browser.currentScene.createNode("connect");
connect1604.nodeField = "value_changed";
connect1604.protoField = "t12_changed";
IS1601.connect[2] = connect1604;

OrientationInterpolator1600.iS = IS1601;

ProtoBody603.children[328] = OrientationInterpolator1600;

let ROUTE1605 = browser.currentScene.createNode("ROUTE");
ROUTE1605.fromField = "fraction_changed";
ROUTE1605.fromNode = "BehaviorClock";
ROUTE1605.toField = "set_fraction";
ROUTE1605.toNode = "t12_OI";
ProtoBody603.children[329] = ROUTE1605;

let OrientationInterpolator1606 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1606.DEF = "temporomandibular_OI";
let IS1607 = browser.currentScene.createNode("IS");
let connect1608 = browser.currentScene.createNode("connect");
connect1608.nodeField = "key";
connect1608.protoField = "temporomandibular_key";
IS1607.connect = new MFNode();

IS1607.connect[0] = connect1608;

let connect1609 = browser.currentScene.createNode("connect");
connect1609.nodeField = "keyValue";
connect1609.protoField = "temporomandibular_keyValue";
IS1607.connect[1] = connect1609;

let connect1610 = browser.currentScene.createNode("connect");
connect1610.nodeField = "value_changed";
connect1610.protoField = "temporomandibular_changed";
IS1607.connect[2] = connect1610;

OrientationInterpolator1606.iS = IS1607;

ProtoBody603.children[330] = OrientationInterpolator1606;

let ROUTE1611 = browser.currentScene.createNode("ROUTE");
ROUTE1611.fromField = "fraction_changed";
ROUTE1611.fromNode = "BehaviorClock";
ROUTE1611.toField = "set_fraction";
ROUTE1611.toNode = "temporomandibular_OI";
ProtoBody603.children[331] = ROUTE1611;

let OrientationInterpolator1612 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1612.DEF = "vc1_OI";
let IS1613 = browser.currentScene.createNode("IS");
let connect1614 = browser.currentScene.createNode("connect");
connect1614.nodeField = "key";
connect1614.protoField = "vc1_key";
IS1613.connect = new MFNode();

IS1613.connect[0] = connect1614;

let connect1615 = browser.currentScene.createNode("connect");
connect1615.nodeField = "keyValue";
connect1615.protoField = "vc1_keyValue";
IS1613.connect[1] = connect1615;

let connect1616 = browser.currentScene.createNode("connect");
connect1616.nodeField = "value_changed";
connect1616.protoField = "vc1_changed";
IS1613.connect[2] = connect1616;

OrientationInterpolator1612.iS = IS1613;

ProtoBody603.children[332] = OrientationInterpolator1612;

let ROUTE1617 = browser.currentScene.createNode("ROUTE");
ROUTE1617.fromField = "fraction_changed";
ROUTE1617.fromNode = "BehaviorClock";
ROUTE1617.toField = "set_fraction";
ROUTE1617.toNode = "vc1_OI";
ProtoBody603.children[333] = ROUTE1617;

let OrientationInterpolator1618 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1618.DEF = "vc2_OI";
let IS1619 = browser.currentScene.createNode("IS");
let connect1620 = browser.currentScene.createNode("connect");
connect1620.nodeField = "key";
connect1620.protoField = "vc2_key";
IS1619.connect = new MFNode();

IS1619.connect[0] = connect1620;

let connect1621 = browser.currentScene.createNode("connect");
connect1621.nodeField = "keyValue";
connect1621.protoField = "vc2_keyValue";
IS1619.connect[1] = connect1621;

let connect1622 = browser.currentScene.createNode("connect");
connect1622.nodeField = "value_changed";
connect1622.protoField = "vc2_changed";
IS1619.connect[2] = connect1622;

OrientationInterpolator1618.iS = IS1619;

ProtoBody603.children[334] = OrientationInterpolator1618;

let ROUTE1623 = browser.currentScene.createNode("ROUTE");
ROUTE1623.fromField = "fraction_changed";
ROUTE1623.fromNode = "BehaviorClock";
ROUTE1623.toField = "set_fraction";
ROUTE1623.toNode = "vc2_OI";
ProtoBody603.children[335] = ROUTE1623;

let OrientationInterpolator1624 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1624.DEF = "vc3_OI";
let IS1625 = browser.currentScene.createNode("IS");
let connect1626 = browser.currentScene.createNode("connect");
connect1626.nodeField = "key";
connect1626.protoField = "vc3_key";
IS1625.connect = new MFNode();

IS1625.connect[0] = connect1626;

let connect1627 = browser.currentScene.createNode("connect");
connect1627.nodeField = "keyValue";
connect1627.protoField = "vc3_keyValue";
IS1625.connect[1] = connect1627;

let connect1628 = browser.currentScene.createNode("connect");
connect1628.nodeField = "value_changed";
connect1628.protoField = "vc3_changed";
IS1625.connect[2] = connect1628;

OrientationInterpolator1624.iS = IS1625;

ProtoBody603.children[336] = OrientationInterpolator1624;

let ROUTE1629 = browser.currentScene.createNode("ROUTE");
ROUTE1629.fromField = "fraction_changed";
ROUTE1629.fromNode = "BehaviorClock";
ROUTE1629.toField = "set_fraction";
ROUTE1629.toNode = "vc3_OI";
ProtoBody603.children[337] = ROUTE1629;

let OrientationInterpolator1630 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1630.DEF = "vc4_OI";
let IS1631 = browser.currentScene.createNode("IS");
let connect1632 = browser.currentScene.createNode("connect");
connect1632.nodeField = "key";
connect1632.protoField = "vc4_key";
IS1631.connect = new MFNode();

IS1631.connect[0] = connect1632;

let connect1633 = browser.currentScene.createNode("connect");
connect1633.nodeField = "keyValue";
connect1633.protoField = "vc4_keyValue";
IS1631.connect[1] = connect1633;

let connect1634 = browser.currentScene.createNode("connect");
connect1634.nodeField = "value_changed";
connect1634.protoField = "vc4_changed";
IS1631.connect[2] = connect1634;

OrientationInterpolator1630.iS = IS1631;

ProtoBody603.children[338] = OrientationInterpolator1630;

let ROUTE1635 = browser.currentScene.createNode("ROUTE");
ROUTE1635.fromField = "fraction_changed";
ROUTE1635.fromNode = "BehaviorClock";
ROUTE1635.toField = "set_fraction";
ROUTE1635.toNode = "vc4_OI";
ProtoBody603.children[339] = ROUTE1635;

let OrientationInterpolator1636 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1636.DEF = "vc5_OI";
let IS1637 = browser.currentScene.createNode("IS");
let connect1638 = browser.currentScene.createNode("connect");
connect1638.nodeField = "key";
connect1638.protoField = "vc5_key";
IS1637.connect = new MFNode();

IS1637.connect[0] = connect1638;

let connect1639 = browser.currentScene.createNode("connect");
connect1639.nodeField = "keyValue";
connect1639.protoField = "vc5_keyValue";
IS1637.connect[1] = connect1639;

let connect1640 = browser.currentScene.createNode("connect");
connect1640.nodeField = "value_changed";
connect1640.protoField = "vc5_changed";
IS1637.connect[2] = connect1640;

OrientationInterpolator1636.iS = IS1637;

ProtoBody603.children[340] = OrientationInterpolator1636;

let ROUTE1641 = browser.currentScene.createNode("ROUTE");
ROUTE1641.fromField = "fraction_changed";
ROUTE1641.fromNode = "BehaviorClock";
ROUTE1641.toField = "set_fraction";
ROUTE1641.toNode = "vc5_OI";
ProtoBody603.children[341] = ROUTE1641;

let OrientationInterpolator1642 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1642.DEF = "vc6_OI";
let IS1643 = browser.currentScene.createNode("IS");
let connect1644 = browser.currentScene.createNode("connect");
connect1644.nodeField = "key";
connect1644.protoField = "vc6_key";
IS1643.connect = new MFNode();

IS1643.connect[0] = connect1644;

let connect1645 = browser.currentScene.createNode("connect");
connect1645.nodeField = "keyValue";
connect1645.protoField = "vc6_keyValue";
IS1643.connect[1] = connect1645;

let connect1646 = browser.currentScene.createNode("connect");
connect1646.nodeField = "value_changed";
connect1646.protoField = "vc6_changed";
IS1643.connect[2] = connect1646;

OrientationInterpolator1642.iS = IS1643;

ProtoBody603.children[342] = OrientationInterpolator1642;

let ROUTE1647 = browser.currentScene.createNode("ROUTE");
ROUTE1647.fromField = "fraction_changed";
ROUTE1647.fromNode = "BehaviorClock";
ROUTE1647.toField = "set_fraction";
ROUTE1647.toNode = "vc6_OI";
ProtoBody603.children[343] = ROUTE1647;

let OrientationInterpolator1648 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1648.DEF = "vc7_OI";
let IS1649 = browser.currentScene.createNode("IS");
let connect1650 = browser.currentScene.createNode("connect");
connect1650.nodeField = "key";
connect1650.protoField = "vc7_key";
IS1649.connect = new MFNode();

IS1649.connect[0] = connect1650;

let connect1651 = browser.currentScene.createNode("connect");
connect1651.nodeField = "keyValue";
connect1651.protoField = "vc7_keyValue";
IS1649.connect[1] = connect1651;

let connect1652 = browser.currentScene.createNode("connect");
connect1652.nodeField = "value_changed";
connect1652.protoField = "vc7_changed";
IS1649.connect[2] = connect1652;

OrientationInterpolator1648.iS = IS1649;

ProtoBody603.children[344] = OrientationInterpolator1648;

let ROUTE1653 = browser.currentScene.createNode("ROUTE");
ROUTE1653.fromField = "fraction_changed";
ROUTE1653.fromNode = "BehaviorClock";
ROUTE1653.toField = "set_fraction";
ROUTE1653.toNode = "vc7_OI";
ProtoBody603.children[345] = ROUTE1653;

let OrientationInterpolator1654 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1654.DEF = "vl1_OI";
let IS1655 = browser.currentScene.createNode("IS");
let connect1656 = browser.currentScene.createNode("connect");
connect1656.nodeField = "key";
connect1656.protoField = "vl1_key";
IS1655.connect = new MFNode();

IS1655.connect[0] = connect1656;

let connect1657 = browser.currentScene.createNode("connect");
connect1657.nodeField = "keyValue";
connect1657.protoField = "vl1_keyValue";
IS1655.connect[1] = connect1657;

let connect1658 = browser.currentScene.createNode("connect");
connect1658.nodeField = "value_changed";
connect1658.protoField = "vl1_changed";
IS1655.connect[2] = connect1658;

OrientationInterpolator1654.iS = IS1655;

ProtoBody603.children[346] = OrientationInterpolator1654;

let ROUTE1659 = browser.currentScene.createNode("ROUTE");
ROUTE1659.fromField = "fraction_changed";
ROUTE1659.fromNode = "BehaviorClock";
ROUTE1659.toField = "set_fraction";
ROUTE1659.toNode = "vl1_OI";
ProtoBody603.children[347] = ROUTE1659;

let OrientationInterpolator1660 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1660.DEF = "vl2_OI";
let IS1661 = browser.currentScene.createNode("IS");
let connect1662 = browser.currentScene.createNode("connect");
connect1662.nodeField = "key";
connect1662.protoField = "vl2_key";
IS1661.connect = new MFNode();

IS1661.connect[0] = connect1662;

let connect1663 = browser.currentScene.createNode("connect");
connect1663.nodeField = "keyValue";
connect1663.protoField = "vl2_keyValue";
IS1661.connect[1] = connect1663;

let connect1664 = browser.currentScene.createNode("connect");
connect1664.nodeField = "value_changed";
connect1664.protoField = "vl2_changed";
IS1661.connect[2] = connect1664;

OrientationInterpolator1660.iS = IS1661;

ProtoBody603.children[348] = OrientationInterpolator1660;

let ROUTE1665 = browser.currentScene.createNode("ROUTE");
ROUTE1665.fromField = "fraction_changed";
ROUTE1665.fromNode = "BehaviorClock";
ROUTE1665.toField = "set_fraction";
ROUTE1665.toNode = "vl2_OI";
ProtoBody603.children[349] = ROUTE1665;

let OrientationInterpolator1666 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1666.DEF = "vl3_OI";
let IS1667 = browser.currentScene.createNode("IS");
let connect1668 = browser.currentScene.createNode("connect");
connect1668.nodeField = "key";
connect1668.protoField = "vl3_key";
IS1667.connect = new MFNode();

IS1667.connect[0] = connect1668;

let connect1669 = browser.currentScene.createNode("connect");
connect1669.nodeField = "keyValue";
connect1669.protoField = "vl3_keyValue";
IS1667.connect[1] = connect1669;

let connect1670 = browser.currentScene.createNode("connect");
connect1670.nodeField = "value_changed";
connect1670.protoField = "vl3_changed";
IS1667.connect[2] = connect1670;

OrientationInterpolator1666.iS = IS1667;

ProtoBody603.children[350] = OrientationInterpolator1666;

let ROUTE1671 = browser.currentScene.createNode("ROUTE");
ROUTE1671.fromField = "fraction_changed";
ROUTE1671.fromNode = "BehaviorClock";
ROUTE1671.toField = "set_fraction";
ROUTE1671.toNode = "vl3_OI";
ProtoBody603.children[351] = ROUTE1671;

let OrientationInterpolator1672 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1672.DEF = "vl4_OI";
let IS1673 = browser.currentScene.createNode("IS");
let connect1674 = browser.currentScene.createNode("connect");
connect1674.nodeField = "key";
connect1674.protoField = "vl4_key";
IS1673.connect = new MFNode();

IS1673.connect[0] = connect1674;

let connect1675 = browser.currentScene.createNode("connect");
connect1675.nodeField = "keyValue";
connect1675.protoField = "vl4_keyValue";
IS1673.connect[1] = connect1675;

let connect1676 = browser.currentScene.createNode("connect");
connect1676.nodeField = "value_changed";
connect1676.protoField = "vl4_changed";
IS1673.connect[2] = connect1676;

OrientationInterpolator1672.iS = IS1673;

ProtoBody603.children[352] = OrientationInterpolator1672;

let ROUTE1677 = browser.currentScene.createNode("ROUTE");
ROUTE1677.fromField = "fraction_changed";
ROUTE1677.fromNode = "BehaviorClock";
ROUTE1677.toField = "set_fraction";
ROUTE1677.toNode = "vl4_OI";
ProtoBody603.children[353] = ROUTE1677;

let OrientationInterpolator1678 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1678.DEF = "vl5_OI";
let IS1679 = browser.currentScene.createNode("IS");
let connect1680 = browser.currentScene.createNode("connect");
connect1680.nodeField = "key";
connect1680.protoField = "vl5_key";
IS1679.connect = new MFNode();

IS1679.connect[0] = connect1680;

let connect1681 = browser.currentScene.createNode("connect");
connect1681.nodeField = "keyValue";
connect1681.protoField = "vl5_keyValue";
IS1679.connect[1] = connect1681;

let connect1682 = browser.currentScene.createNode("connect");
connect1682.nodeField = "value_changed";
connect1682.protoField = "vl5_changed";
IS1679.connect[2] = connect1682;

OrientationInterpolator1678.iS = IS1679;

ProtoBody603.children[354] = OrientationInterpolator1678;

let ROUTE1683 = browser.currentScene.createNode("ROUTE");
ROUTE1683.fromField = "fraction_changed";
ROUTE1683.fromNode = "BehaviorClock";
ROUTE1683.toField = "set_fraction";
ROUTE1683.toNode = "vl5_OI";
ProtoBody603.children[355] = ROUTE1683;

let OrientationInterpolator1684 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1684.DEF = "vt1_OI";
let IS1685 = browser.currentScene.createNode("IS");
let connect1686 = browser.currentScene.createNode("connect");
connect1686.nodeField = "key";
connect1686.protoField = "vt1_key";
IS1685.connect = new MFNode();

IS1685.connect[0] = connect1686;

let connect1687 = browser.currentScene.createNode("connect");
connect1687.nodeField = "keyValue";
connect1687.protoField = "vt1_keyValue";
IS1685.connect[1] = connect1687;

let connect1688 = browser.currentScene.createNode("connect");
connect1688.nodeField = "value_changed";
connect1688.protoField = "vt1_changed";
IS1685.connect[2] = connect1688;

OrientationInterpolator1684.iS = IS1685;

ProtoBody603.children[356] = OrientationInterpolator1684;

let ROUTE1689 = browser.currentScene.createNode("ROUTE");
ROUTE1689.fromField = "fraction_changed";
ROUTE1689.fromNode = "BehaviorClock";
ROUTE1689.toField = "set_fraction";
ROUTE1689.toNode = "vt1_OI";
ProtoBody603.children[357] = ROUTE1689;

let OrientationInterpolator1690 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1690.DEF = "vt2_OI";
let IS1691 = browser.currentScene.createNode("IS");
let connect1692 = browser.currentScene.createNode("connect");
connect1692.nodeField = "key";
connect1692.protoField = "vt2_key";
IS1691.connect = new MFNode();

IS1691.connect[0] = connect1692;

let connect1693 = browser.currentScene.createNode("connect");
connect1693.nodeField = "keyValue";
connect1693.protoField = "vt2_keyValue";
IS1691.connect[1] = connect1693;

let connect1694 = browser.currentScene.createNode("connect");
connect1694.nodeField = "value_changed";
connect1694.protoField = "vt2_changed";
IS1691.connect[2] = connect1694;

OrientationInterpolator1690.iS = IS1691;

ProtoBody603.children[358] = OrientationInterpolator1690;

let ROUTE1695 = browser.currentScene.createNode("ROUTE");
ROUTE1695.fromField = "fraction_changed";
ROUTE1695.fromNode = "BehaviorClock";
ROUTE1695.toField = "set_fraction";
ROUTE1695.toNode = "vt2_OI";
ProtoBody603.children[359] = ROUTE1695;

let OrientationInterpolator1696 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1696.DEF = "vt3_OI";
let IS1697 = browser.currentScene.createNode("IS");
let connect1698 = browser.currentScene.createNode("connect");
connect1698.nodeField = "key";
connect1698.protoField = "vt3_key";
IS1697.connect = new MFNode();

IS1697.connect[0] = connect1698;

let connect1699 = browser.currentScene.createNode("connect");
connect1699.nodeField = "keyValue";
connect1699.protoField = "vt3_keyValue";
IS1697.connect[1] = connect1699;

let connect1700 = browser.currentScene.createNode("connect");
connect1700.nodeField = "value_changed";
connect1700.protoField = "vt3_changed";
IS1697.connect[2] = connect1700;

OrientationInterpolator1696.iS = IS1697;

ProtoBody603.children[360] = OrientationInterpolator1696;

let ROUTE1701 = browser.currentScene.createNode("ROUTE");
ROUTE1701.fromField = "fraction_changed";
ROUTE1701.fromNode = "BehaviorClock";
ROUTE1701.toField = "set_fraction";
ROUTE1701.toNode = "vt3_OI";
ProtoBody603.children[361] = ROUTE1701;

let OrientationInterpolator1702 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1702.DEF = "vt4_OI";
let IS1703 = browser.currentScene.createNode("IS");
let connect1704 = browser.currentScene.createNode("connect");
connect1704.nodeField = "key";
connect1704.protoField = "vt4_key";
IS1703.connect = new MFNode();

IS1703.connect[0] = connect1704;

let connect1705 = browser.currentScene.createNode("connect");
connect1705.nodeField = "keyValue";
connect1705.protoField = "vt4_keyValue";
IS1703.connect[1] = connect1705;

let connect1706 = browser.currentScene.createNode("connect");
connect1706.nodeField = "value_changed";
connect1706.protoField = "vt4_changed";
IS1703.connect[2] = connect1706;

OrientationInterpolator1702.iS = IS1703;

ProtoBody603.children[362] = OrientationInterpolator1702;

let ROUTE1707 = browser.currentScene.createNode("ROUTE");
ROUTE1707.fromField = "fraction_changed";
ROUTE1707.fromNode = "BehaviorClock";
ROUTE1707.toField = "set_fraction";
ROUTE1707.toNode = "vt4_OI";
ProtoBody603.children[363] = ROUTE1707;

let OrientationInterpolator1708 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1708.DEF = "vt5_OI";
let IS1709 = browser.currentScene.createNode("IS");
let connect1710 = browser.currentScene.createNode("connect");
connect1710.nodeField = "key";
connect1710.protoField = "vt5_key";
IS1709.connect = new MFNode();

IS1709.connect[0] = connect1710;

let connect1711 = browser.currentScene.createNode("connect");
connect1711.nodeField = "keyValue";
connect1711.protoField = "vt5_keyValue";
IS1709.connect[1] = connect1711;

let connect1712 = browser.currentScene.createNode("connect");
connect1712.nodeField = "value_changed";
connect1712.protoField = "vt5_changed";
IS1709.connect[2] = connect1712;

OrientationInterpolator1708.iS = IS1709;

ProtoBody603.children[364] = OrientationInterpolator1708;

let ROUTE1713 = browser.currentScene.createNode("ROUTE");
ROUTE1713.fromField = "fraction_changed";
ROUTE1713.fromNode = "BehaviorClock";
ROUTE1713.toField = "set_fraction";
ROUTE1713.toNode = "vt5_OI";
ProtoBody603.children[365] = ROUTE1713;

let OrientationInterpolator1714 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1714.DEF = "vt6_OI";
let IS1715 = browser.currentScene.createNode("IS");
let connect1716 = browser.currentScene.createNode("connect");
connect1716.nodeField = "key";
connect1716.protoField = "vt6_key";
IS1715.connect = new MFNode();

IS1715.connect[0] = connect1716;

let connect1717 = browser.currentScene.createNode("connect");
connect1717.nodeField = "keyValue";
connect1717.protoField = "vt6_keyValue";
IS1715.connect[1] = connect1717;

let connect1718 = browser.currentScene.createNode("connect");
connect1718.nodeField = "value_changed";
connect1718.protoField = "vt6_changed";
IS1715.connect[2] = connect1718;

OrientationInterpolator1714.iS = IS1715;

ProtoBody603.children[366] = OrientationInterpolator1714;

let ROUTE1719 = browser.currentScene.createNode("ROUTE");
ROUTE1719.fromField = "fraction_changed";
ROUTE1719.fromNode = "BehaviorClock";
ROUTE1719.toField = "set_fraction";
ROUTE1719.toNode = "vt6_OI";
ProtoBody603.children[367] = ROUTE1719;

let OrientationInterpolator1720 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1720.DEF = "vt7_OI";
let IS1721 = browser.currentScene.createNode("IS");
let connect1722 = browser.currentScene.createNode("connect");
connect1722.nodeField = "key";
connect1722.protoField = "vt7_key";
IS1721.connect = new MFNode();

IS1721.connect[0] = connect1722;

let connect1723 = browser.currentScene.createNode("connect");
connect1723.nodeField = "keyValue";
connect1723.protoField = "vt7_keyValue";
IS1721.connect[1] = connect1723;

let connect1724 = browser.currentScene.createNode("connect");
connect1724.nodeField = "value_changed";
connect1724.protoField = "vt7_changed";
IS1721.connect[2] = connect1724;

OrientationInterpolator1720.iS = IS1721;

ProtoBody603.children[368] = OrientationInterpolator1720;

let ROUTE1725 = browser.currentScene.createNode("ROUTE");
ROUTE1725.fromField = "fraction_changed";
ROUTE1725.fromNode = "BehaviorClock";
ROUTE1725.toField = "set_fraction";
ROUTE1725.toNode = "vt7_OI";
ProtoBody603.children[369] = ROUTE1725;

let OrientationInterpolator1726 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1726.DEF = "vt8_OI";
let IS1727 = browser.currentScene.createNode("IS");
let connect1728 = browser.currentScene.createNode("connect");
connect1728.nodeField = "key";
connect1728.protoField = "vt8_key";
IS1727.connect = new MFNode();

IS1727.connect[0] = connect1728;

let connect1729 = browser.currentScene.createNode("connect");
connect1729.nodeField = "keyValue";
connect1729.protoField = "vt8_keyValue";
IS1727.connect[1] = connect1729;

let connect1730 = browser.currentScene.createNode("connect");
connect1730.nodeField = "value_changed";
connect1730.protoField = "vt8_changed";
IS1727.connect[2] = connect1730;

OrientationInterpolator1726.iS = IS1727;

ProtoBody603.children[370] = OrientationInterpolator1726;

let ROUTE1731 = browser.currentScene.createNode("ROUTE");
ROUTE1731.fromField = "fraction_changed";
ROUTE1731.fromNode = "BehaviorClock";
ROUTE1731.toField = "set_fraction";
ROUTE1731.toNode = "vt8_OI";
ProtoBody603.children[371] = ROUTE1731;

let OrientationInterpolator1732 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1732.DEF = "vt9_OI";
let IS1733 = browser.currentScene.createNode("IS");
let connect1734 = browser.currentScene.createNode("connect");
connect1734.nodeField = "key";
connect1734.protoField = "vt9_key";
IS1733.connect = new MFNode();

IS1733.connect[0] = connect1734;

let connect1735 = browser.currentScene.createNode("connect");
connect1735.nodeField = "keyValue";
connect1735.protoField = "vt9_keyValue";
IS1733.connect[1] = connect1735;

let connect1736 = browser.currentScene.createNode("connect");
connect1736.nodeField = "value_changed";
connect1736.protoField = "vt9_changed";
IS1733.connect[2] = connect1736;

OrientationInterpolator1732.iS = IS1733;

ProtoBody603.children[372] = OrientationInterpolator1732;

let ROUTE1737 = browser.currentScene.createNode("ROUTE");
ROUTE1737.fromField = "fraction_changed";
ROUTE1737.fromNode = "BehaviorClock";
ROUTE1737.toField = "set_fraction";
ROUTE1737.toNode = "vt9_OI";
ProtoBody603.children[373] = ROUTE1737;

let OrientationInterpolator1738 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1738.DEF = "vt10_OI";
let IS1739 = browser.currentScene.createNode("IS");
let connect1740 = browser.currentScene.createNode("connect");
connect1740.nodeField = "key";
connect1740.protoField = "vt10_key";
IS1739.connect = new MFNode();

IS1739.connect[0] = connect1740;

let connect1741 = browser.currentScene.createNode("connect");
connect1741.nodeField = "keyValue";
connect1741.protoField = "vt10_keyValue";
IS1739.connect[1] = connect1741;

let connect1742 = browser.currentScene.createNode("connect");
connect1742.nodeField = "value_changed";
connect1742.protoField = "vt10_changed";
IS1739.connect[2] = connect1742;

OrientationInterpolator1738.iS = IS1739;

ProtoBody603.children[374] = OrientationInterpolator1738;

let ROUTE1743 = browser.currentScene.createNode("ROUTE");
ROUTE1743.fromField = "fraction_changed";
ROUTE1743.fromNode = "BehaviorClock";
ROUTE1743.toField = "set_fraction";
ROUTE1743.toNode = "vt10_OI";
ProtoBody603.children[375] = ROUTE1743;

let OrientationInterpolator1744 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1744.DEF = "vt11_OI";
let IS1745 = browser.currentScene.createNode("IS");
let connect1746 = browser.currentScene.createNode("connect");
connect1746.nodeField = "key";
connect1746.protoField = "vt11_key";
IS1745.connect = new MFNode();

IS1745.connect[0] = connect1746;

let connect1747 = browser.currentScene.createNode("connect");
connect1747.nodeField = "keyValue";
connect1747.protoField = "vt11_keyValue";
IS1745.connect[1] = connect1747;

let connect1748 = browser.currentScene.createNode("connect");
connect1748.nodeField = "value_changed";
connect1748.protoField = "vt11_changed";
IS1745.connect[2] = connect1748;

OrientationInterpolator1744.iS = IS1745;

ProtoBody603.children[376] = OrientationInterpolator1744;

let ROUTE1749 = browser.currentScene.createNode("ROUTE");
ROUTE1749.fromField = "fraction_changed";
ROUTE1749.fromNode = "BehaviorClock";
ROUTE1749.toField = "set_fraction";
ROUTE1749.toNode = "vt11_OI";
ProtoBody603.children[377] = ROUTE1749;

let OrientationInterpolator1750 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1750.DEF = "vt12_OI";
let IS1751 = browser.currentScene.createNode("IS");
let connect1752 = browser.currentScene.createNode("connect");
connect1752.nodeField = "key";
connect1752.protoField = "vt12_key";
IS1751.connect = new MFNode();

IS1751.connect[0] = connect1752;

let connect1753 = browser.currentScene.createNode("connect");
connect1753.nodeField = "keyValue";
connect1753.protoField = "vt12_keyValue";
IS1751.connect[1] = connect1753;

let connect1754 = browser.currentScene.createNode("connect");
connect1754.nodeField = "value_changed";
connect1754.protoField = "vt12_changed";
IS1751.connect[2] = connect1754;

OrientationInterpolator1750.iS = IS1751;

ProtoBody603.children[378] = OrientationInterpolator1750;

let ROUTE1755 = browser.currentScene.createNode("ROUTE");
ROUTE1755.fromField = "fraction_changed";
ROUTE1755.fromNode = "BehaviorClock";
ROUTE1755.toField = "set_fraction";
ROUTE1755.toNode = "vt12_OI";
ProtoBody603.children[379] = ROUTE1755;

ProtoDeclare20.protoBody = ProtoBody603;

browser.currentScene.children[1] = ProtoDeclare20;

let ProtoDeclare1756 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
</ProtoDeclare>`);
ProtoDeclare1756.name = "HAnimBodyBehaviorChooser";
ProtoDeclare1756.appinfo = "The HAnimBodyBehaviorChooser node allows an author to select one of several HAnimHumanoid bodies and simultaneously apply multiple HAnimBehavior animations to the active body. Individual behaviors may be enabled or disabled at any time.";
let ProtoInterface1757 = browser.currentScene.createNode("ProtoInterface");
//TODO: supported Level of Articulation (LOA) might be adapted to more efficiently setup/teardown pertinent ROUTEs
//accessType=\"inputOutput\" avoided to maintain backwards compatilibility with VRML97 scripting constraints
//shared common TimeSensor inputs for all BehaviorAnimation nodes, connected via ROUTEs
//TODO: consider named accessors, e.g. enableBehaviorByName and disableBehaviorByName
//TODO: consider addBody, removeBody, addBehavior, removeBehavior
//TODO: consider startBehaviorByIndex, stopBehaviorByIndex, startBehaviorByName, stopBehaviorByName
let field1758 = browser.currentScene.createNode("field");
field1758.name = "supportedLOA";
field1758.accessType = "inputOutput";
field1758.appinfo = "Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3.";
field1758.type = "SFInt32";
field1758.value = "-1";
ProtoInterface1757.field = new MFNode();

ProtoInterface1757.field[0] = field1758;

let field1759 = browser.currentScene.createNode("field");
field1759.name = "HumanoidArray";
field1759.accessType = "initializeOnly";
field1759.appinfo = "[HAnimHumanoid] nodes only";
field1759.type = "MFNode";
//default NULL
ProtoInterface1757.field[1] = field1759;

let field1760 = browser.currentScene.createNode("field");
field1760.name = "whichBody";
field1760.accessType = "initializeOnly";
field1760.appinfo = "whichBody is selected default is initial member of HumanoidArray";
field1760.type = "SFInt32";
field1760.value = "-1";
ProtoInterface1757.field[2] = field1760;

let field1761 = browser.currentScene.createNode("field");
field1761.name = "set_whichBody";
field1761.accessType = "inputOnly";
field1761.appinfo = "whichBody is selected default is none";
field1761.type = "SFInt32";
ProtoInterface1757.field[3] = field1761;

let field1762 = browser.currentScene.createNode("field");
field1762.name = "whichBody_changed";
field1762.accessType = "outputOnly";
field1762.appinfo = "whichBody is selected default is none";
field1762.type = "SFInt32";
ProtoInterface1757.field[4] = field1762;

let field1763 = browser.currentScene.createNode("field");
field1763.name = "hAnimBehaviorNodes";
field1763.accessType = "initializeOnly";
field1763.appinfo = "[HAnimBehavior] nodes only some or all of which may be enabled. Warning: do not animate a single joint with more than one interpolator at a given time.";
field1763.type = "MFNode";
//default NULL
ProtoInterface1757.field[5] = field1763;

let field1764 = browser.currentScene.createNode("field");
field1764.name = "enabledBehaviorsArray";
field1764.accessType = "initializeOnly";
field1764.appinfo = "indicate which HAnimBehavior nodes are activated, empty indicates all enabled true";
field1764.type = "MFBool";
//no default values
ProtoInterface1757.field[6] = field1764;

let field1765 = browser.currentScene.createNode("field");
field1765.name = "enableBehavior";
field1765.accessType = "inputOnly";
field1765.appinfo = "enable corresponding behavior identified by index number";
field1765.type = "SFInt32";
ProtoInterface1757.field[7] = field1765;

let field1766 = browser.currentScene.createNode("field");
field1766.name = "disableBehavior";
field1766.accessType = "inputOnly";
field1766.appinfo = "disable corresponding behavior identified by index number";
field1766.type = "SFInt32";
ProtoInterface1757.field[8] = field1766;

let field1767 = browser.currentScene.createNode("field");
field1767.name = "startTime";
field1767.accessType = "inputOutput";
field1767.type = "SFTime";
field1767.value = "0";
ProtoInterface1757.field[9] = field1767;

let field1768 = browser.currentScene.createNode("field");
field1768.name = "stopTime";
field1768.accessType = "inputOutput";
field1768.type = "SFTime";
field1768.value = "0";
ProtoInterface1757.field[10] = field1768;

ProtoDeclare1756.protoInterface = ProtoInterface1757;

let ProtoBody1769 = browser.currentScene.createNode("ProtoBody");
let Switch1770 = browser.currentScene.createNode("Switch");
Switch1770.DEF = "BodySwitch";
Switch1770.whichChoice = -1;
let IS1771 = browser.currentScene.createNode("IS");
let connect1772 = browser.currentScene.createNode("connect");
connect1772.nodeField = "whichChoice";
connect1772.protoField = "whichBody";
IS1771.connect = new MFNode();

IS1771.connect[0] = connect1772;

let connect1773 = browser.currentScene.createNode("connect");
connect1773.nodeField = "children";
connect1773.protoField = "HumanoidArray";
IS1771.connect[1] = connect1773;

Switch1770.iS = IS1771;

ProtoBody1769.children = new MFNode();

ProtoBody1769.children[0] = Switch1770;

//note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless
let Group1774 = browser.currentScene.createNode("Group");
Group1774.DEF = "BehaviorArrayHolder";
let IS1775 = browser.currentScene.createNode("IS");
let connect1776 = browser.currentScene.createNode("connect");
connect1776.nodeField = "children";
connect1776.protoField = "hAnimBehaviorNodes";
IS1775.connect = new MFNode();

IS1775.connect[0] = connect1776;

Group1774.iS = IS1775;

ProtoBody1769.children[1] = Group1774;

let TimeSensor1777 = browser.currentScene.createNode("TimeSensor");
TimeSensor1777.DEF = "TimeSensorHolderStartStopTimes";
let IS1778 = browser.currentScene.createNode("IS");
let connect1779 = browser.currentScene.createNode("connect");
connect1779.nodeField = "startTime";
connect1779.protoField = "startTime";
IS1778.connect = new MFNode();

IS1778.connect[0] = connect1779;

let connect1780 = browser.currentScene.createNode("connect");
connect1780.nodeField = "stopTime";
connect1780.protoField = "stopTime";
IS1778.connect[1] = connect1780;

TimeSensor1777.iS = IS1778;

ProtoBody1769.children[2] = TimeSensor1777;

let Switch1781 = browser.currentScene.createNode("Switch");
Switch1781.DEF = "SupportedLoaHolder2";
Switch1781.whichChoice = -1;
let IS1782 = browser.currentScene.createNode("IS");
let connect1783 = browser.currentScene.createNode("connect");
connect1783.nodeField = "whichChoice";
connect1783.protoField = "supportedLOA";
IS1782.connect = new MFNode();

IS1782.connect[0] = connect1783;

Switch1781.iS = IS1782;

ProtoBody1769.children[3] = Switch1781;

let Script1784 = browser.currentScene.createNode("Script");
Script1784.DEF = "BehaviorSelectionScript";
Script1784.directOutput = True;
Script1784.url = new MFString(new java.lang.String["HAnimBehaviorPrototypesScript.js","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypesScript.js"]);
let field1785 = browser.currentScene.createNode("field");
field1785.name = "HumanoidArray";
field1785.accessType = "initializeOnly";
field1785.appinfo = "[HAnimHumanoid] nodes only";
field1785.type = "MFNode";
Script1784.field = new MFNode();

Script1784.field[0] = field1785;

let field1786 = browser.currentScene.createNode("field");
field1786.name = "whichBody";
field1786.accessType = "initializeOnly";
field1786.appinfo = "whichBody is selected default is none";
field1786.type = "SFInt32";
Script1784.field[1] = field1786;

let field1787 = browser.currentScene.createNode("field");
field1787.name = "set_whichBody";
field1787.accessType = "inputOnly";
field1787.appinfo = "whichBody is selected default is none";
field1787.type = "SFInt32";
Script1784.field[2] = field1787;

let field1788 = browser.currentScene.createNode("field");
field1788.name = "whichBody_changed";
field1788.accessType = "outputOnly";
field1788.appinfo = "whichBody is selected default is none";
field1788.type = "SFInt32";
Script1784.field[3] = field1788;

let field1789 = browser.currentScene.createNode("field");
field1789.name = "hAnimBehaviorNodes";
field1789.accessType = "initializeOnly";
field1789.appinfo = "[HAnimBehavior] nodes only";
field1789.type = "MFNode";
//TODO: might consider accessType=\"inputOutput\" if VRML97 compatibility not needed
Script1784.field[4] = field1789;

let field1790 = browser.currentScene.createNode("field");
field1790.name = "enabledBehaviorsArray";
field1790.accessType = "initializeOnly";
field1790.type = "MFBool";
Script1784.field[5] = field1790;

let field1791 = browser.currentScene.createNode("field");
field1791.name = "enableBehavior";
field1791.accessType = "inputOnly";
field1791.appinfo = "enable corresponding behavior";
field1791.type = "SFInt32";
Script1784.field[6] = field1791;

let field1792 = browser.currentScene.createNode("field");
field1792.name = "disableBehavior";
field1792.accessType = "inputOnly";
field1792.appinfo = "enable corresponding behavior";
field1792.type = "SFInt32";
Script1784.field[7] = field1792;

let field1793 = browser.currentScene.createNode("field");
field1793.name = "timeSensorNode";
field1793.accessType = "initializeOnly";
field1793.type = "SFNode";
let TimeSensor1794 = browser.currentScene.createNode("TimeSensor");
TimeSensor1794.USE = "TimeSensorHolderStartStopTimes";
field1793.children = new MFNode();

field1793.children[0] = TimeSensor1794;

Script1784.field[8] = field1793;

let field1795 = browser.currentScene.createNode("field");
field1795.name = "previousBodyIndex";
field1795.accessType = "initializeOnly";
field1795.appinfo = "remember prior body index to avoid unnecessary ROUTE teardown and creation";
field1795.type = "SFInt32";
field1795.value = "-1";
Script1784.field[9] = field1795;

let field1796 = browser.currentScene.createNode("field");
field1796.name = "traceEnabled";
field1796.accessType = "initializeOnly";
field1796.type = "SFBool";
field1796.value = "true";
Script1784.field[10] = field1796;

let IS1797 = browser.currentScene.createNode("IS");
let connect1798 = browser.currentScene.createNode("connect");
connect1798.nodeField = "HumanoidArray";
connect1798.protoField = "HumanoidArray";
IS1797.connect = new MFNode();

IS1797.connect[0] = connect1798;

let connect1799 = browser.currentScene.createNode("connect");
connect1799.nodeField = "whichBody";
connect1799.protoField = "whichBody";
IS1797.connect[1] = connect1799;

let connect1800 = browser.currentScene.createNode("connect");
connect1800.nodeField = "set_whichBody";
connect1800.protoField = "set_whichBody";
IS1797.connect[2] = connect1800;

let connect1801 = browser.currentScene.createNode("connect");
connect1801.nodeField = "whichBody_changed";
connect1801.protoField = "whichBody_changed";
IS1797.connect[3] = connect1801;

let connect1802 = browser.currentScene.createNode("connect");
connect1802.nodeField = "hAnimBehaviorNodes";
connect1802.protoField = "hAnimBehaviorNodes";
IS1797.connect[4] = connect1802;

let connect1803 = browser.currentScene.createNode("connect");
connect1803.nodeField = "enabledBehaviorsArray";
connect1803.protoField = "enabledBehaviorsArray";
IS1797.connect[5] = connect1803;

let connect1804 = browser.currentScene.createNode("connect");
connect1804.nodeField = "enableBehavior";
connect1804.protoField = "enableBehavior";
IS1797.connect[6] = connect1804;

let connect1805 = browser.currentScene.createNode("connect");
connect1805.nodeField = "disableBehavior";
connect1805.protoField = "disableBehavior";
IS1797.connect[7] = connect1805;

Script1784.iS = IS1797;

ProtoBody1769.children[4] = Script1784;

ProtoDeclare1756.protoBody = ProtoBody1769;

browser.currentScene.children[2] = ProtoDeclare1756;

//TODO: Goal is to have 3 different ways to present a body: local creation, Inline with IMPORT/EXPORT, or external prototype.
let ProtoInstance1806 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1806.name = "HAnimBehavior";
ProtoInstance1806.DEF = "BehaviorTest1";
//only one PositionInterpolator key/keyValue definition for entire humanoid - optional
//must have paired overrides of each key/keyValue array being defined
let fieldValue1807 = browser.currentScene.createNode("fieldValue");
fieldValue1807.name = "HumanoidRoot_translation_key";
fieldValue1807.value = "0 0.25 0.5 0.75 1";
ProtoInstance1806.fieldValue = new MFNode();

ProtoInstance1806.fieldValue[0] = fieldValue1807;

let fieldValue1808 = browser.currentScene.createNode("fieldValue");
fieldValue1808.name = "HumanoidRoot_translation_keyValue";
fieldValue1808.value = "0 0 0 0 0 10 0 0 20 0 0 30 0 0 40 0 0 50";
ProtoInstance1806.fieldValue[1] = fieldValue1808;

let fieldValue1809 = browser.currentScene.createNode("fieldValue");
fieldValue1809.name = "r_ankle_key";
fieldValue1809.value = "0 0.5 1";
ProtoInstance1806.fieldValue[2] = fieldValue1809;

let fieldValue1810 = browser.currentScene.createNode("fieldValue");
fieldValue1810.name = "r_ankle_keyValue";
fieldValue1810.value = "0 1 0 0 0 1 0 0.2 0 1 0 0.4";
ProtoInstance1806.fieldValue[3] = fieldValue1810;

browser.currentScene.children[3] = ProtoInstance1806;

let ProtoInstance1811 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1811.name = "HAnimBodyBehaviorChooser";
ProtoInstance1811.DEF = "ChooserTest";
let fieldValue1812 = browser.currentScene.createNode("fieldValue");
fieldValue1812.name = "HumanoidArray";
let HAnimHumanoid1813 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid1813.name = "DiamondManLOA-1";
HAnimHumanoid1813.DEF = "hanim_DiamondManLOA-1";
HAnimHumanoid1813.version = "2.0";
fieldValue1812.children = new MFNode();

fieldValue1812.children[0] = HAnimHumanoid1813;

ProtoInstance1811.fieldValue = new MFNode();

ProtoInstance1811.fieldValue[0] = fieldValue1812;

let fieldValue1814 = browser.currentScene.createNode("fieldValue");
fieldValue1814.name = "whichBody";
fieldValue1814.value = "0";
ProtoInstance1811.fieldValue[1] = fieldValue1814;

let fieldValue1815 = browser.currentScene.createNode("fieldValue");
fieldValue1815.name = "hAnimBehaviorNodes";
let ProtoInstance1816 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1816.USE = "BehaviorTest1";
fieldValue1815.children = new MFNode();

fieldValue1815.children[0] = ProtoInstance1816;

ProtoInstance1811.fieldValue[2] = fieldValue1815;

let fieldValue1817 = browser.currentScene.createNode("fieldValue");
fieldValue1817.name = "enabledBehaviorsArray";
fieldValue1817.value = "true";
ProtoInstance1811.fieldValue[3] = fieldValue1817;

browser.currentScene.children[4] = ProtoInstance1811;

