const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "HAnimBehaviorPrototypes.x3d");
scene.addMetaData("description", "Prototypes for HAnimBehavior node, which collects OrientationInterpolators for aggregate animation of an HAnim humanoid model, and HAnimBodyBehaviorChooser, which selects one body and enables/disables multiple aggregated behaviors.");
scene.addMetaData("creator", "Don Brutzman, Jeff Weekley, MV4205 Advanced X3D Authoring class, and Keith Victor");
scene.addMetaData("created", "2 May 2006");
scene.addMetaData("modified", "4 July 2020");
scene.addMetaData("reference", "Web3D2007BlendedBehaviorsChangeableBodies.pdf");
scene.addMetaData("reference", "https://www.web3d.org/files/specifications/19774/V1.0");
scene.addMetaData("reference", "https://www.web3d.org/x3d/specifications/ISO-IEC-19775-X3DAbstractSpecification_Revision1_to_Part1/Part01/components/hanim.html");
scene.addMetaData("reference", "InterchangableActorsViaDynamicRoutingPrototypes.x3d");
scene.addMetaData("reference", "ApaydinThesis.pdf");
scene.addMetaData("subject", "X3D HAnim humanoid animation behaviors");
scene.addMetaData("warning", "under development. should joint translations be exposed? upgrade to HAnim v2.2");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypes.x3d");
scene.addMetaData("generator", "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let WorldInfo19 = browser.currentScene.createNode("WorldInfo");
WorldInfo19.title = "HAnimBehaviorPrototypes.x3d";
browser.currentScene.children = new X3D.MFNode();

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
//supported Level of Articulation (LOA)
//shared common input for single TimeSensor animating all interpolators, since different Behaviors may have different cycleInterval durations
//TODO: add other X3D 3.0 TimeSensor fields (pause etc.)
//Not supported: animated translation of individual joints
//pass in key/keyValue array pairs for single PositionInterpolator
//pass in key/keyValue array pairs and expose named output for each OrientationInterpolator, joint by joint
ProtoInterface22.getField("supportedLOA").setValue("-1");
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface23.getField("enabled").setValue("true");
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface24.getField("cycleInterval").setValue("1");
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface25.getField("loop").setValue("false");
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface26.getField("startTime").setValue("0");
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface27.getField("stopTime").setValue("0");
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface28.getField("pauseTime").setValue("0");
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface29.getField("resumeTime").setValue("0");
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface30.getField("cycleTime")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface31.getField("isActive")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface32.getField("isPaused")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface33.getField("elapsedTime")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface34.getField("time")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface35.getField("fraction_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface36.getField("HumanoidRoot_translation_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface37.getField("HumanoidRoot_translation_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface38.getField("HumanoidRoot_translation_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface39.getField("HumanoidRoot_rotation_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface40.getField("HumanoidRoot_rotation_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface41.getField("HumanoidRoot_rotation_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface42.getField("c1_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface43.getField("c1_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface44.getField("c1_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface45.getField("c2_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface46.getField("c2_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface47.getField("c2_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface48.getField("c3_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface49.getField("c3_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface50.getField("c3_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface51.getField("c4_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface52.getField("c4_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface53.getField("c4_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface54.getField("c5_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface55.getField("c5_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface56.getField("c5_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface57.getField("c6_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface58.getField("c6_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface59.getField("c6_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface60.getField("c7_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface61.getField("c7_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface62.getField("c7_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface63.getField("jaw_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface64.getField("jaw_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface65.getField("jaw_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface66.getField("l1_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface67.getField("l1_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface68.getField("l1_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface69.getField("l2_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface70.getField("l2_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface71.getField("l2_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface72.getField("l3_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface73.getField("l3_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface74.getField("l3_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface75.getField("l4_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface76.getField("l4_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface77.getField("l4_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface78.getField("l5_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface79.getField("l5_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface80.getField("l5_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface81.getField("l_acromioclavicular_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface82.getField("l_acromioclavicular_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface83.getField("l_acromioclavicular_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface84.getField("l_ankle_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface85.getField("l_ankle_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface86.getField("l_ankle_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface87.getField("l_calf_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface88.getField("l_calf_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface89.getField("l_calf_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface90.getField("l_clavicle_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface91.getField("l_clavicle_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface92.getField("l_clavicle_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface93.getField("l_elbow_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface94.getField("l_elbow_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface95.getField("l_elbow_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface96.getField("l_eyeball_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface97.getField("l_eyeball_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface98.getField("l_eyeball_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface99.getField("l_eyeball_joint_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface100.getField("l_eyeball_joint_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface101.getField("l_eyeball_joint_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface102.getField("l_eyebrow_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface103.getField("l_eyebrow_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface104.getField("l_eyebrow_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface105.getField("l_eyebrow_joint_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface106.getField("l_eyebrow_joint_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface107.getField("l_eyebrow_joint_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface108.getField("l_eyelid_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface109.getField("l_eyelid_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface110.getField("l_eyelid_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface111.getField("l_eyelid_joint_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface112.getField("l_eyelid_joint_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface113.getField("l_eyelid_joint_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface114.getField("l_forearm_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface115.getField("l_forearm_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface116.getField("l_forearm_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface117.getField("l_forefoot_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface118.getField("l_forefoot_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface119.getField("l_forefoot_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface120.getField("l_hand_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface121.getField("l_hand_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface122.getField("l_hand_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface123.getField("l_hindfoot_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface124.getField("l_hindfoot_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface125.getField("l_hindfoot_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface126.getField("l_hip_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface127.getField("l_hip_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface128.getField("l_hip_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface129.getField("l_index0_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface130.getField("l_index0_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface131.getField("l_index0_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface132.getField("l_index1_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface133.getField("l_index1_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface134.getField("l_index1_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface135.getField("l_index2_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface136.getField("l_index2_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface137.getField("l_index2_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface138.getField("l_index3_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface139.getField("l_index3_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface140.getField("l_index3_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface141.getField("l_index_distal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface142.getField("l_index_distal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface143.getField("l_index_distal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface144.getField("l_index_metacarpal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface145.getField("l_index_metacarpal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface146.getField("l_index_metacarpal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface147.getField("l_index_middle_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface148.getField("l_index_middle_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface149.getField("l_index_middle_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface150.getField("l_index_proximal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface151.getField("l_index_proximal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface152.getField("l_index_proximal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface153.getField("l_knee_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface154.getField("l_knee_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface155.getField("l_knee_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface156.getField("l_metatarsal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface157.getField("l_metatarsal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface158.getField("l_metatarsal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface159.getField("l_middistal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface160.getField("l_middistal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface161.getField("l_middistal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface162.getField("l_middle0_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface163.getField("l_middle0_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface164.getField("l_middle0_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface165.getField("l_middle1_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface166.getField("l_middle1_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface167.getField("l_middle1_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface168.getField("l_middle2_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface169.getField("l_middle2_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface170.getField("l_middle2_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface171.getField("l_middle3_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface172.getField("l_middle3_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface173.getField("l_middle3_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface174.getField("l_middle_distal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface175.getField("l_middle_distal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface176.getField("l_middle_distal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface177.getField("l_middle_metacarpal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface178.getField("l_middle_metacarpal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface179.getField("l_middle_metacarpal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface180.getField("l_middle_middle_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface181.getField("l_middle_middle_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface182.getField("l_middle_middle_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface183.getField("l_middle_proximal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface184.getField("l_middle_proximal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface185.getField("l_middle_proximal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface186.getField("l_midproximal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface187.getField("l_midproximal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface188.getField("l_midproximal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface189.getField("l_midtarsal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface190.getField("l_midtarsal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface191.getField("l_midtarsal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface192.getField("l_pinky0_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface193.getField("l_pinky0_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface194.getField("l_pinky0_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface195.getField("l_pinky1_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface196.getField("l_pinky1_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface197.getField("l_pinky1_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface198.getField("l_pinky2_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface199.getField("l_pinky2_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface200.getField("l_pinky2_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface201.getField("l_pinky3_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface202.getField("l_pinky3_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface203.getField("l_pinky3_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface204.getField("l_pinky_distal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface205.getField("l_pinky_distal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface206.getField("l_pinky_distal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface207.getField("l_pinky_metacarpal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface208.getField("l_pinky_metacarpal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface209.getField("l_pinky_metacarpal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface210.getField("l_pinky_middle_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface211.getField("l_pinky_middle_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface212.getField("l_pinky_middle_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface213.getField("l_pinky_proximal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface214.getField("l_pinky_proximal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface215.getField("l_pinky_proximal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface216.getField("l_ring0_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface217.getField("l_ring0_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface218.getField("l_ring0_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface219.getField("l_ring1_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface220.getField("l_ring1_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface221.getField("l_ring1_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface222.getField("l_ring2_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface223.getField("l_ring2_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface224.getField("l_ring2_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface225.getField("l_ring3_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface226.getField("l_ring3_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface227.getField("l_ring3_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface228.getField("l_ring_distal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface229.getField("l_ring_distal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface230.getField("l_ring_distal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface231.getField("l_ring_metacarpal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface232.getField("l_ring_metacarpal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface233.getField("l_ring_metacarpal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface234.getField("l_ring_middle_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface235.getField("l_ring_middle_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface236.getField("l_ring_middle_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface237.getField("l_ring_proximal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface238.getField("l_ring_proximal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface239.getField("l_ring_proximal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface240.getField("l_scapula_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface241.getField("l_scapula_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface242.getField("l_scapula_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface243.getField("l_shoulder_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface244.getField("l_shoulder_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface245.getField("l_shoulder_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface246.getField("l_sternoclavicular_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface247.getField("l_sternoclavicular_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface248.getField("l_sternoclavicular_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface249.getField("l_subtalar_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface250.getField("l_subtalar_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface251.getField("l_subtalar_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface252.getField("l_thigh_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface253.getField("l_thigh_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface254.getField("l_thigh_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface255.getField("l_thumb1_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface256.getField("l_thumb1_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface257.getField("l_thumb1_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface258.getField("l_thumb2_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface259.getField("l_thumb2_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface260.getField("l_thumb2_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface261.getField("l_thumb3_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface262.getField("l_thumb3_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface263.getField("l_thumb3_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface264.getField("l_thumb_distal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface265.getField("l_thumb_distal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface266.getField("l_thumb_distal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface267.getField("l_thumb_metacarpal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface268.getField("l_thumb_metacarpal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface269.getField("l_thumb_metacarpal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface270.getField("l_thumb_proximal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface271.getField("l_thumb_proximal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface272.getField("l_thumb_proximal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface273.getField("l_upperarm_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface274.getField("l_upperarm_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface275.getField("l_upperarm_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface276.getField("l_wrist_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface277.getField("l_wrist_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface278.getField("l_wrist_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface279.getField("pelvis_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface280.getField("pelvis_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface281.getField("pelvis_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface282.getField("r_acromioclavicular_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface283.getField("r_acromioclavicular_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface284.getField("r_acromioclavicular_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface285.getField("r_ankle_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface286.getField("r_ankle_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface287.getField("r_ankle_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface288.getField("r_calf_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface289.getField("r_calf_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface290.getField("r_calf_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface291.getField("r_clavicle_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface292.getField("r_clavicle_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface293.getField("r_clavicle_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface294.getField("r_elbow_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface295.getField("r_elbow_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface296.getField("r_elbow_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface297.getField("r_eyeball_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface298.getField("r_eyeball_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface299.getField("r_eyeball_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface300.getField("r_eyeball_joint_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface301.getField("r_eyeball_joint_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface302.getField("r_eyeball_joint_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface303.getField("r_eyebrow_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface304.getField("r_eyebrow_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface305.getField("r_eyebrow_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface306.getField("r_eyebrow_joint_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface307.getField("r_eyebrow_joint_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface308.getField("r_eyebrow_joint_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface309.getField("r_eyelid_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface310.getField("r_eyelid_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface311.getField("r_eyelid_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface312.getField("r_eyelid_joint_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface313.getField("r_eyelid_joint_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface314.getField("r_eyelid_joint_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface315.getField("r_forearm_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface316.getField("r_forearm_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface317.getField("r_forearm_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface318.getField("r_forefoot_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface319.getField("r_forefoot_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface320.getField("r_forefoot_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface321.getField("r_hand_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface322.getField("r_hand_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface323.getField("r_hand_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface324.getField("r_hindfoot_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface325.getField("r_hindfoot_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface326.getField("r_hindfoot_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface327.getField("r_hip_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface328.getField("r_hip_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface329.getField("r_hip_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface330.getField("r_index0_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface331.getField("r_index0_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface332.getField("r_index0_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface333.getField("r_index1_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface334.getField("r_index1_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface335.getField("r_index1_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface336.getField("r_index2_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface337.getField("r_index2_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface338.getField("r_index2_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface339.getField("r_index3_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface340.getField("r_index3_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface341.getField("r_index3_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface342.getField("r_index_distal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface343.getField("r_index_distal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface344.getField("r_index_distal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface345.getField("r_index_metacarpal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface346.getField("r_index_metacarpal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface347.getField("r_index_metacarpal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface348.getField("r_index_middle_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface349.getField("r_index_middle_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface350.getField("r_index_middle_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface351.getField("r_index_proximal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface352.getField("r_index_proximal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface353.getField("r_index_proximal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface354.getField("r_knee_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface355.getField("r_knee_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface356.getField("r_knee_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface357.getField("r_metatarsal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface358.getField("r_metatarsal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface359.getField("r_metatarsal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface360.getField("r_middistal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface361.getField("r_middistal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface362.getField("r_middistal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface363.getField("r_middle0_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface364.getField("r_middle0_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface365.getField("r_middle0_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface366.getField("r_middle1_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface367.getField("r_middle1_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface368.getField("r_middle1_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface369.getField("r_middle2_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface370.getField("r_middle2_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface371.getField("r_middle2_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface372.getField("r_middle3_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface373.getField("r_middle3_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface374.getField("r_middle3_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface375.getField("r_middle_distal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface376.getField("r_middle_distal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface377.getField("r_middle_distal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface378.getField("r_middle_metacarpal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface379.getField("r_middle_metacarpal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface380.getField("r_middle_metacarpal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface381.getField("r_middle_middle_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface382.getField("r_middle_middle_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface383.getField("r_middle_middle_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface384.getField("r_middle_proximal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface385.getField("r_middle_proximal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface386.getField("r_middle_proximal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface387.getField("r_midproximal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface388.getField("r_midproximal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface389.getField("r_midproximal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface390.getField("r_midtarsal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface391.getField("r_midtarsal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface392.getField("r_midtarsal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface393.getField("r_pinky0_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface394.getField("r_pinky0_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface395.getField("r_pinky0_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface396.getField("r_pinky1_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface397.getField("r_pinky1_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface398.getField("r_pinky1_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface399.getField("r_pinky2_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface400.getField("r_pinky2_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface401.getField("r_pinky2_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface402.getField("r_pinky3_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface403.getField("r_pinky3_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface404.getField("r_pinky3_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface405.getField("r_pinky_distal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface406.getField("r_pinky_distal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface407.getField("r_pinky_distal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface408.getField("r_pinky_metacarpal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface409.getField("r_pinky_metacarpal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface410.getField("r_pinky_metacarpal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface411.getField("r_pinky_middle_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface412.getField("r_pinky_middle_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface413.getField("r_pinky_middle_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface414.getField("r_pinky_proximal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface415.getField("r_pinky_proximal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface416.getField("r_pinky_proximal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface417.getField("r_ring0_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface418.getField("r_ring0_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface419.getField("r_ring0_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface420.getField("r_ring1_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface421.getField("r_ring1_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface422.getField("r_ring1_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface423.getField("r_ring2_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface424.getField("r_ring2_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface425.getField("r_ring2_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface426.getField("r_ring3_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface427.getField("r_ring3_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface428.getField("r_ring3_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface429.getField("r_ring_distal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface430.getField("r_ring_distal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface431.getField("r_ring_distal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface432.getField("r_ring_metacarpal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface433.getField("r_ring_metacarpal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface434.getField("r_ring_metacarpal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface435.getField("r_ring_middle_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface436.getField("r_ring_middle_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface437.getField("r_ring_middle_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface438.getField("r_ring_proximal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface439.getField("r_ring_proximal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface440.getField("r_ring_proximal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface441.getField("r_scapula_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface442.getField("r_scapula_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface443.getField("r_scapula_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface444.getField("r_shoulder_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface445.getField("r_shoulder_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface446.getField("r_shoulder_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface447.getField("r_sternoclavicular_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface448.getField("r_sternoclavicular_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface449.getField("r_sternoclavicular_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface450.getField("r_subtalar_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface451.getField("r_subtalar_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface452.getField("r_subtalar_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface453.getField("r_thigh_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface454.getField("r_thigh_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface455.getField("r_thigh_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface456.getField("r_thumb1_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface457.getField("r_thumb1_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface458.getField("r_thumb1_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface459.getField("r_thumb2_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface460.getField("r_thumb2_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface461.getField("r_thumb2_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface462.getField("r_thumb3_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface463.getField("r_thumb3_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface464.getField("r_thumb3_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface465.getField("r_thumb_distal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface466.getField("r_thumb_distal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface467.getField("r_thumb_distal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface468.getField("r_thumb_metacarpal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface469.getField("r_thumb_metacarpal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface470.getField("r_thumb_metacarpal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface471.getField("r_thumb_proximal_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface472.getField("r_thumb_proximal_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface473.getField("r_thumb_proximal_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface474.getField("r_upperarm_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface475.getField("r_upperarm_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface476.getField("r_upperarm_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface477.getField("r_wrist_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface478.getField("r_wrist_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface479.getField("r_wrist_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface480.getField("sacroiliac_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface481.getField("sacroiliac_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface482.getField("sacroiliac_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface483.getField("sacrum_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface484.getField("sacrum_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface485.getField("sacrum_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface486.getField("skull_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface487.getField("skull_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface488.getField("skull_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface489.getField("skullbase_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface490.getField("skullbase_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface491.getField("skullbase_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface492.getField("t10_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface493.getField("t10_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface494.getField("t10_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface495.getField("t11_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface496.getField("t11_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface497.getField("t11_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface498.getField("t12_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface499.getField("t12_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface500.getField("t12_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface501.getField("t1_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface502.getField("t1_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface503.getField("t1_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface504.getField("t2_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface505.getField("t2_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface506.getField("t2_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface507.getField("t3_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface508.getField("t3_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface509.getField("t3_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface510.getField("t4_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface511.getField("t4_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface512.getField("t4_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface513.getField("t5_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface514.getField("t5_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface515.getField("t5_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface516.getField("t6_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface517.getField("t6_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface518.getField("t6_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface519.getField("t7_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface520.getField("t7_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface521.getField("t7_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface522.getField("t8_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface523.getField("t8_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface524.getField("t8_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface525.getField("t9_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface526.getField("t9_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface527.getField("t9_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface528.getField("temporomandibular_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface529.getField("temporomandibular_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface530.getField("temporomandibular_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface531.getField("vc1_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface532.getField("vc1_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface533.getField("vc1_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface534.getField("vc2_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface535.getField("vc2_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface536.getField("vc2_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface537.getField("vc3_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface538.getField("vc3_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface539.getField("vc3_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface540.getField("vc4_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface541.getField("vc4_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface542.getField("vc4_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface543.getField("vc5_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface544.getField("vc5_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface545.getField("vc5_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface546.getField("vc6_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface547.getField("vc6_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface548.getField("vc6_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface549.getField("vc7_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface550.getField("vc7_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface551.getField("vc7_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface552.getField("vl1_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface553.getField("vl1_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface554.getField("vl1_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface555.getField("vl2_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface556.getField("vl2_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface557.getField("vl2_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface558.getField("vl3_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface559.getField("vl3_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface560.getField("vl3_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface561.getField("vl4_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface562.getField("vl4_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface563.getField("vl4_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface564.getField("vl5_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface565.getField("vl5_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface566.getField("vl5_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface567.getField("vt10_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface568.getField("vt10_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface569.getField("vt10_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface570.getField("vt11_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface571.getField("vt11_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface572.getField("vt11_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface573.getField("vt12_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface574.getField("vt12_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface575.getField("vt12_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface576.getField("vt1_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface577.getField("vt1_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface578.getField("vt1_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface579.getField("vt2_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface580.getField("vt2_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface581.getField("vt2_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface582.getField("vt3_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface583.getField("vt3_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface584.getField("vt3_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface585.getField("vt4_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface586.getField("vt4_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface587.getField("vt4_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface588.getField("vt5_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface589.getField("vt5_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface590.getField("vt5_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface591.getField("vt6_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface592.getField("vt6_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface593.getField("vt6_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface594.getField("vt7_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface595.getField("vt7_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface596.getField("vt7_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface597.getField("vt8_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface598.getField("vt8_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface599.getField("vt8_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface600.getField("vt9_key")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface601.getField("vt9_keyValue")//no default value
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface602.getField("vt9_changed")ProtoInterface21YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface21;

let ProtoBody603 = browser.currentScene.createNode("ProtoBody");
//design alternative: move TimeSensor out of the prototype, instead expose set_fraction globally to all interpolators
let TimeSensor604 = browser.currentScene.createNode("TimeSensor");
TimeSensor604.DEF = "BehaviorClock";
let IS605 = browser.currentScene.createNode("IS");
let connect606 = browser.currentScene.createNode("connect");
connect606.nodeField = "enabled";
connect606.protoField = "enabled";
IS605YYY.connect = new X3D.MFNode();

IS605ZZZ.connect[0] = connect606;

let connect607 = browser.currentScene.createNode("connect");
connect607.nodeField = "cycleInterval";
connect607.protoField = "cycleInterval";
IS605ZZZ.connect[1] = connect607;

let connect608 = browser.currentScene.createNode("connect");
connect608.nodeField = "loop";
connect608.protoField = "loop";
IS605ZZZ.connect[2] = connect608;

let connect609 = browser.currentScene.createNode("connect");
connect609.nodeField = "startTime";
connect609.protoField = "startTime";
IS605ZZZ.connect[3] = connect609;

let connect610 = browser.currentScene.createNode("connect");
connect610.nodeField = "stopTime";
connect610.protoField = "stopTime";
IS605ZZZ.connect[4] = connect610;

let connect611 = browser.currentScene.createNode("connect");
connect611.nodeField = "pauseTime";
connect611.protoField = "pauseTime";
IS605ZZZ.connect[5] = connect611;

let connect612 = browser.currentScene.createNode("connect");
connect612.nodeField = "resumeTime";
connect612.protoField = "resumeTime";
IS605ZZZ.connect[6] = connect612;

let connect613 = browser.currentScene.createNode("connect");
connect613.nodeField = "cycleTime";
connect613.protoField = "cycleTime";
IS605ZZZ.connect[7] = connect613;

let connect614 = browser.currentScene.createNode("connect");
connect614.nodeField = "isActive";
connect614.protoField = "isActive";
IS605ZZZ.connect[8] = connect614;

let connect615 = browser.currentScene.createNode("connect");
connect615.nodeField = "isPaused";
connect615.protoField = "isPaused";
IS605ZZZ.connect[9] = connect615;

let connect616 = browser.currentScene.createNode("connect");
connect616.nodeField = "elapsedTime";
connect616.protoField = "elapsedTime";
IS605ZZZ.connect[10] = connect616;

let connect617 = browser.currentScene.createNode("connect");
connect617.nodeField = "time";
connect617.protoField = "time";
IS605ZZZ.connect[11] = connect617;

let connect618 = browser.currentScene.createNode("connect");
connect618.nodeField = "fraction_changed";
connect618.protoField = "fraction_changed";
IS605ZZZ.connect[12] = connect618;

iS = IS605;

ProtoBody603YYY.children = new X3D.MFNode();

ProtoBody603ZZZ.children[0] = TimeSensor604;

//note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless
let Switch619 = browser.currentScene.createNode("Switch");
Switch619.DEF = "SupportedLoaHolder1";
Switch619.whichChoice = -1;
let IS620 = browser.currentScene.createNode("IS");
let connect621 = browser.currentScene.createNode("connect");
connect621.nodeField = "whichChoice";
connect621.protoField = "supportedLOA";
IS620YYY.connect = new X3D.MFNode();

IS620ZZZ.connect[0] = connect621;

iS = IS620;

ProtoBody603ZZZ.children[1] = Switch619;

let PositionInterpolator622 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator622.DEF = "HumanoidRootPI";
let IS623 = browser.currentScene.createNode("IS");
let connect624 = browser.currentScene.createNode("connect");
connect624.nodeField = "key";
connect624.protoField = "HumanoidRoot_translation_key";
IS623YYY.connect = new X3D.MFNode();

IS623ZZZ.connect[0] = connect624;

let connect625 = browser.currentScene.createNode("connect");
connect625.nodeField = "keyValue";
connect625.protoField = "HumanoidRoot_translation_keyValue";
IS623ZZZ.connect[1] = connect625;

let connect626 = browser.currentScene.createNode("connect");
connect626.nodeField = "value_changed";
connect626.protoField = "HumanoidRoot_translation_changed";
IS623ZZZ.connect[2] = connect626;

iS = IS623;

ProtoBody603ZZZ.children[2] = PositionInterpolator622;

let ROUTE627 = browser.currentScene.createNode("ROUTE");
ROUTE627.fromField = "fraction_changed";
ROUTE627.fromNode = "BehaviorClock";
ROUTE627.toField = "set_fraction";
ROUTE627.toNode = "HumanoidRootPI";
ProtoBody603ZZZ.children[3] = ROUTE627;

let OrientationInterpolator628 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator628.DEF = "HumanoidRootOI";
let IS629 = browser.currentScene.createNode("IS");
let connect630 = browser.currentScene.createNode("connect");
connect630.nodeField = "key";
connect630.protoField = "HumanoidRoot_rotation_key";
IS629YYY.connect = new X3D.MFNode();

IS629ZZZ.connect[0] = connect630;

let connect631 = browser.currentScene.createNode("connect");
connect631.nodeField = "keyValue";
connect631.protoField = "HumanoidRoot_rotation_keyValue";
IS629ZZZ.connect[1] = connect631;

let connect632 = browser.currentScene.createNode("connect");
connect632.nodeField = "value_changed";
connect632.protoField = "HumanoidRoot_rotation_changed";
IS629ZZZ.connect[2] = connect632;

iS = IS629;

ProtoBody603ZZZ.children[4] = OrientationInterpolator628;

let ROUTE633 = browser.currentScene.createNode("ROUTE");
ROUTE633.fromField = "fraction_changed";
ROUTE633.fromNode = "BehaviorClock";
ROUTE633.toField = "set_fraction";
ROUTE633.toNode = "HumanoidRootOI";
ProtoBody603ZZZ.children[5] = ROUTE633;

let OrientationInterpolator634 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator634.DEF = "c1_OI";
let IS635 = browser.currentScene.createNode("IS");
let connect636 = browser.currentScene.createNode("connect");
connect636.nodeField = "key";
connect636.protoField = "c1_key";
IS635YYY.connect = new X3D.MFNode();

IS635ZZZ.connect[0] = connect636;

let connect637 = browser.currentScene.createNode("connect");
connect637.nodeField = "keyValue";
connect637.protoField = "c1_keyValue";
IS635ZZZ.connect[1] = connect637;

let connect638 = browser.currentScene.createNode("connect");
connect638.nodeField = "value_changed";
connect638.protoField = "c1_changed";
IS635ZZZ.connect[2] = connect638;

iS = IS635;

ProtoBody603ZZZ.children[6] = OrientationInterpolator634;

let ROUTE639 = browser.currentScene.createNode("ROUTE");
ROUTE639.fromField = "fraction_changed";
ROUTE639.fromNode = "BehaviorClock";
ROUTE639.toField = "set_fraction";
ROUTE639.toNode = "c1_OI";
ProtoBody603ZZZ.children[7] = ROUTE639;

let OrientationInterpolator640 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator640.DEF = "c2_OI";
let IS641 = browser.currentScene.createNode("IS");
let connect642 = browser.currentScene.createNode("connect");
connect642.nodeField = "key";
connect642.protoField = "c2_key";
IS641YYY.connect = new X3D.MFNode();

IS641ZZZ.connect[0] = connect642;

let connect643 = browser.currentScene.createNode("connect");
connect643.nodeField = "keyValue";
connect643.protoField = "c2_keyValue";
IS641ZZZ.connect[1] = connect643;

let connect644 = browser.currentScene.createNode("connect");
connect644.nodeField = "value_changed";
connect644.protoField = "c2_changed";
IS641ZZZ.connect[2] = connect644;

iS = IS641;

ProtoBody603ZZZ.children[8] = OrientationInterpolator640;

let ROUTE645 = browser.currentScene.createNode("ROUTE");
ROUTE645.fromField = "fraction_changed";
ROUTE645.fromNode = "BehaviorClock";
ROUTE645.toField = "set_fraction";
ROUTE645.toNode = "c2_OI";
ProtoBody603ZZZ.children[9] = ROUTE645;

let OrientationInterpolator646 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator646.DEF = "c3_OI";
let IS647 = browser.currentScene.createNode("IS");
let connect648 = browser.currentScene.createNode("connect");
connect648.nodeField = "key";
connect648.protoField = "c3_key";
IS647YYY.connect = new X3D.MFNode();

IS647ZZZ.connect[0] = connect648;

let connect649 = browser.currentScene.createNode("connect");
connect649.nodeField = "keyValue";
connect649.protoField = "c3_keyValue";
IS647ZZZ.connect[1] = connect649;

let connect650 = browser.currentScene.createNode("connect");
connect650.nodeField = "value_changed";
connect650.protoField = "c3_changed";
IS647ZZZ.connect[2] = connect650;

iS = IS647;

ProtoBody603ZZZ.children[10] = OrientationInterpolator646;

let ROUTE651 = browser.currentScene.createNode("ROUTE");
ROUTE651.fromField = "fraction_changed";
ROUTE651.fromNode = "BehaviorClock";
ROUTE651.toField = "set_fraction";
ROUTE651.toNode = "c3_OI";
ProtoBody603ZZZ.children[11] = ROUTE651;

let OrientationInterpolator652 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator652.DEF = "c4_OI";
let IS653 = browser.currentScene.createNode("IS");
let connect654 = browser.currentScene.createNode("connect");
connect654.nodeField = "key";
connect654.protoField = "c4_key";
IS653YYY.connect = new X3D.MFNode();

IS653ZZZ.connect[0] = connect654;

let connect655 = browser.currentScene.createNode("connect");
connect655.nodeField = "keyValue";
connect655.protoField = "c4_keyValue";
IS653ZZZ.connect[1] = connect655;

let connect656 = browser.currentScene.createNode("connect");
connect656.nodeField = "value_changed";
connect656.protoField = "c4_changed";
IS653ZZZ.connect[2] = connect656;

iS = IS653;

ProtoBody603ZZZ.children[12] = OrientationInterpolator652;

let ROUTE657 = browser.currentScene.createNode("ROUTE");
ROUTE657.fromField = "fraction_changed";
ROUTE657.fromNode = "BehaviorClock";
ROUTE657.toField = "set_fraction";
ROUTE657.toNode = "c4_OI";
ProtoBody603ZZZ.children[13] = ROUTE657;

let OrientationInterpolator658 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator658.DEF = "c5_OI";
let IS659 = browser.currentScene.createNode("IS");
let connect660 = browser.currentScene.createNode("connect");
connect660.nodeField = "key";
connect660.protoField = "c5_key";
IS659YYY.connect = new X3D.MFNode();

IS659ZZZ.connect[0] = connect660;

let connect661 = browser.currentScene.createNode("connect");
connect661.nodeField = "keyValue";
connect661.protoField = "c5_keyValue";
IS659ZZZ.connect[1] = connect661;

let connect662 = browser.currentScene.createNode("connect");
connect662.nodeField = "value_changed";
connect662.protoField = "c5_changed";
IS659ZZZ.connect[2] = connect662;

iS = IS659;

ProtoBody603ZZZ.children[14] = OrientationInterpolator658;

let ROUTE663 = browser.currentScene.createNode("ROUTE");
ROUTE663.fromField = "fraction_changed";
ROUTE663.fromNode = "BehaviorClock";
ROUTE663.toField = "set_fraction";
ROUTE663.toNode = "c5_OI";
ProtoBody603ZZZ.children[15] = ROUTE663;

let OrientationInterpolator664 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator664.DEF = "c6_OI";
let IS665 = browser.currentScene.createNode("IS");
let connect666 = browser.currentScene.createNode("connect");
connect666.nodeField = "key";
connect666.protoField = "c6_key";
IS665YYY.connect = new X3D.MFNode();

IS665ZZZ.connect[0] = connect666;

let connect667 = browser.currentScene.createNode("connect");
connect667.nodeField = "keyValue";
connect667.protoField = "c6_keyValue";
IS665ZZZ.connect[1] = connect667;

let connect668 = browser.currentScene.createNode("connect");
connect668.nodeField = "value_changed";
connect668.protoField = "c6_changed";
IS665ZZZ.connect[2] = connect668;

iS = IS665;

ProtoBody603ZZZ.children[16] = OrientationInterpolator664;

let ROUTE669 = browser.currentScene.createNode("ROUTE");
ROUTE669.fromField = "fraction_changed";
ROUTE669.fromNode = "BehaviorClock";
ROUTE669.toField = "set_fraction";
ROUTE669.toNode = "c6_OI";
ProtoBody603ZZZ.children[17] = ROUTE669;

let OrientationInterpolator670 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator670.DEF = "c7_OI";
let IS671 = browser.currentScene.createNode("IS");
let connect672 = browser.currentScene.createNode("connect");
connect672.nodeField = "key";
connect672.protoField = "c7_key";
IS671YYY.connect = new X3D.MFNode();

IS671ZZZ.connect[0] = connect672;

let connect673 = browser.currentScene.createNode("connect");
connect673.nodeField = "keyValue";
connect673.protoField = "c7_keyValue";
IS671ZZZ.connect[1] = connect673;

let connect674 = browser.currentScene.createNode("connect");
connect674.nodeField = "value_changed";
connect674.protoField = "c7_changed";
IS671ZZZ.connect[2] = connect674;

iS = IS671;

ProtoBody603ZZZ.children[18] = OrientationInterpolator670;

let ROUTE675 = browser.currentScene.createNode("ROUTE");
ROUTE675.fromField = "fraction_changed";
ROUTE675.fromNode = "BehaviorClock";
ROUTE675.toField = "set_fraction";
ROUTE675.toNode = "c7_OI";
ProtoBody603ZZZ.children[19] = ROUTE675;

let OrientationInterpolator676 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator676.DEF = "jaw_OI";
let IS677 = browser.currentScene.createNode("IS");
let connect678 = browser.currentScene.createNode("connect");
connect678.nodeField = "key";
connect678.protoField = "jaw_key";
IS677YYY.connect = new X3D.MFNode();

IS677ZZZ.connect[0] = connect678;

let connect679 = browser.currentScene.createNode("connect");
connect679.nodeField = "keyValue";
connect679.protoField = "jaw_keyValue";
IS677ZZZ.connect[1] = connect679;

let connect680 = browser.currentScene.createNode("connect");
connect680.nodeField = "value_changed";
connect680.protoField = "jaw_changed";
IS677ZZZ.connect[2] = connect680;

iS = IS677;

ProtoBody603ZZZ.children[20] = OrientationInterpolator676;

let ROUTE681 = browser.currentScene.createNode("ROUTE");
ROUTE681.fromField = "fraction_changed";
ROUTE681.fromNode = "BehaviorClock";
ROUTE681.toField = "set_fraction";
ROUTE681.toNode = "jaw_OI";
ProtoBody603ZZZ.children[21] = ROUTE681;

let OrientationInterpolator682 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator682.DEF = "l1_OI";
let IS683 = browser.currentScene.createNode("IS");
let connect684 = browser.currentScene.createNode("connect");
connect684.nodeField = "key";
connect684.protoField = "l1_key";
IS683YYY.connect = new X3D.MFNode();

IS683ZZZ.connect[0] = connect684;

let connect685 = browser.currentScene.createNode("connect");
connect685.nodeField = "keyValue";
connect685.protoField = "l1_keyValue";
IS683ZZZ.connect[1] = connect685;

let connect686 = browser.currentScene.createNode("connect");
connect686.nodeField = "value_changed";
connect686.protoField = "l1_changed";
IS683ZZZ.connect[2] = connect686;

iS = IS683;

ProtoBody603ZZZ.children[22] = OrientationInterpolator682;

let ROUTE687 = browser.currentScene.createNode("ROUTE");
ROUTE687.fromField = "fraction_changed";
ROUTE687.fromNode = "BehaviorClock";
ROUTE687.toField = "set_fraction";
ROUTE687.toNode = "l1_OI";
ProtoBody603ZZZ.children[23] = ROUTE687;

let OrientationInterpolator688 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator688.DEF = "l2_OI";
let IS689 = browser.currentScene.createNode("IS");
let connect690 = browser.currentScene.createNode("connect");
connect690.nodeField = "key";
connect690.protoField = "l2_key";
IS689YYY.connect = new X3D.MFNode();

IS689ZZZ.connect[0] = connect690;

let connect691 = browser.currentScene.createNode("connect");
connect691.nodeField = "keyValue";
connect691.protoField = "l2_keyValue";
IS689ZZZ.connect[1] = connect691;

let connect692 = browser.currentScene.createNode("connect");
connect692.nodeField = "value_changed";
connect692.protoField = "l2_changed";
IS689ZZZ.connect[2] = connect692;

iS = IS689;

ProtoBody603ZZZ.children[24] = OrientationInterpolator688;

let ROUTE693 = browser.currentScene.createNode("ROUTE");
ROUTE693.fromField = "fraction_changed";
ROUTE693.fromNode = "BehaviorClock";
ROUTE693.toField = "set_fraction";
ROUTE693.toNode = "l2_OI";
ProtoBody603ZZZ.children[25] = ROUTE693;

let OrientationInterpolator694 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator694.DEF = "l3_OI";
let IS695 = browser.currentScene.createNode("IS");
let connect696 = browser.currentScene.createNode("connect");
connect696.nodeField = "key";
connect696.protoField = "l3_key";
IS695YYY.connect = new X3D.MFNode();

IS695ZZZ.connect[0] = connect696;

let connect697 = browser.currentScene.createNode("connect");
connect697.nodeField = "keyValue";
connect697.protoField = "l3_keyValue";
IS695ZZZ.connect[1] = connect697;

let connect698 = browser.currentScene.createNode("connect");
connect698.nodeField = "value_changed";
connect698.protoField = "l3_changed";
IS695ZZZ.connect[2] = connect698;

iS = IS695;

ProtoBody603ZZZ.children[26] = OrientationInterpolator694;

let ROUTE699 = browser.currentScene.createNode("ROUTE");
ROUTE699.fromField = "fraction_changed";
ROUTE699.fromNode = "BehaviorClock";
ROUTE699.toField = "set_fraction";
ROUTE699.toNode = "l3_OI";
ProtoBody603ZZZ.children[27] = ROUTE699;

let OrientationInterpolator700 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator700.DEF = "l4_OI";
let IS701 = browser.currentScene.createNode("IS");
let connect702 = browser.currentScene.createNode("connect");
connect702.nodeField = "key";
connect702.protoField = "l4_key";
IS701YYY.connect = new X3D.MFNode();

IS701ZZZ.connect[0] = connect702;

let connect703 = browser.currentScene.createNode("connect");
connect703.nodeField = "keyValue";
connect703.protoField = "l4_keyValue";
IS701ZZZ.connect[1] = connect703;

let connect704 = browser.currentScene.createNode("connect");
connect704.nodeField = "value_changed";
connect704.protoField = "l4_changed";
IS701ZZZ.connect[2] = connect704;

iS = IS701;

ProtoBody603ZZZ.children[28] = OrientationInterpolator700;

let ROUTE705 = browser.currentScene.createNode("ROUTE");
ROUTE705.fromField = "fraction_changed";
ROUTE705.fromNode = "BehaviorClock";
ROUTE705.toField = "set_fraction";
ROUTE705.toNode = "l4_OI";
ProtoBody603ZZZ.children[29] = ROUTE705;

let OrientationInterpolator706 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator706.DEF = "l5_OI";
let IS707 = browser.currentScene.createNode("IS");
let connect708 = browser.currentScene.createNode("connect");
connect708.nodeField = "key";
connect708.protoField = "l5_key";
IS707YYY.connect = new X3D.MFNode();

IS707ZZZ.connect[0] = connect708;

let connect709 = browser.currentScene.createNode("connect");
connect709.nodeField = "keyValue";
connect709.protoField = "l5_keyValue";
IS707ZZZ.connect[1] = connect709;

let connect710 = browser.currentScene.createNode("connect");
connect710.nodeField = "value_changed";
connect710.protoField = "l5_changed";
IS707ZZZ.connect[2] = connect710;

iS = IS707;

ProtoBody603ZZZ.children[30] = OrientationInterpolator706;

let ROUTE711 = browser.currentScene.createNode("ROUTE");
ROUTE711.fromField = "fraction_changed";
ROUTE711.fromNode = "BehaviorClock";
ROUTE711.toField = "set_fraction";
ROUTE711.toNode = "l5_OI";
ProtoBody603ZZZ.children[31] = ROUTE711;

let OrientationInterpolator712 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator712.DEF = "l_acromioclavicular_OI";
let IS713 = browser.currentScene.createNode("IS");
let connect714 = browser.currentScene.createNode("connect");
connect714.nodeField = "key";
connect714.protoField = "l_acromioclavicular_key";
IS713YYY.connect = new X3D.MFNode();

IS713ZZZ.connect[0] = connect714;

let connect715 = browser.currentScene.createNode("connect");
connect715.nodeField = "keyValue";
connect715.protoField = "l_acromioclavicular_keyValue";
IS713ZZZ.connect[1] = connect715;

let connect716 = browser.currentScene.createNode("connect");
connect716.nodeField = "value_changed";
connect716.protoField = "l_acromioclavicular_changed";
IS713ZZZ.connect[2] = connect716;

iS = IS713;

ProtoBody603ZZZ.children[32] = OrientationInterpolator712;

let ROUTE717 = browser.currentScene.createNode("ROUTE");
ROUTE717.fromField = "fraction_changed";
ROUTE717.fromNode = "BehaviorClock";
ROUTE717.toField = "set_fraction";
ROUTE717.toNode = "l_acromioclavicular_OI";
ProtoBody603ZZZ.children[33] = ROUTE717;

let OrientationInterpolator718 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator718.DEF = "l_ankle_OI";
let IS719 = browser.currentScene.createNode("IS");
let connect720 = browser.currentScene.createNode("connect");
connect720.nodeField = "key";
connect720.protoField = "l_ankle_key";
IS719YYY.connect = new X3D.MFNode();

IS719ZZZ.connect[0] = connect720;

let connect721 = browser.currentScene.createNode("connect");
connect721.nodeField = "keyValue";
connect721.protoField = "l_ankle_keyValue";
IS719ZZZ.connect[1] = connect721;

let connect722 = browser.currentScene.createNode("connect");
connect722.nodeField = "value_changed";
connect722.protoField = "l_ankle_changed";
IS719ZZZ.connect[2] = connect722;

iS = IS719;

ProtoBody603ZZZ.children[34] = OrientationInterpolator718;

let ROUTE723 = browser.currentScene.createNode("ROUTE");
ROUTE723.fromField = "fraction_changed";
ROUTE723.fromNode = "BehaviorClock";
ROUTE723.toField = "set_fraction";
ROUTE723.toNode = "l_ankle_OI";
ProtoBody603ZZZ.children[35] = ROUTE723;

let OrientationInterpolator724 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator724.DEF = "l_calf_OI";
let IS725 = browser.currentScene.createNode("IS");
let connect726 = browser.currentScene.createNode("connect");
connect726.nodeField = "key";
connect726.protoField = "l_calf_key";
IS725YYY.connect = new X3D.MFNode();

IS725ZZZ.connect[0] = connect726;

let connect727 = browser.currentScene.createNode("connect");
connect727.nodeField = "keyValue";
connect727.protoField = "l_calf_keyValue";
IS725ZZZ.connect[1] = connect727;

let connect728 = browser.currentScene.createNode("connect");
connect728.nodeField = "value_changed";
connect728.protoField = "l_calf_changed";
IS725ZZZ.connect[2] = connect728;

iS = IS725;

ProtoBody603ZZZ.children[36] = OrientationInterpolator724;

let ROUTE729 = browser.currentScene.createNode("ROUTE");
ROUTE729.fromField = "fraction_changed";
ROUTE729.fromNode = "BehaviorClock";
ROUTE729.toField = "set_fraction";
ROUTE729.toNode = "l_calf_OI";
ProtoBody603ZZZ.children[37] = ROUTE729;

let OrientationInterpolator730 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator730.DEF = "l_clavicle_OI";
let IS731 = browser.currentScene.createNode("IS");
let connect732 = browser.currentScene.createNode("connect");
connect732.nodeField = "key";
connect732.protoField = "l_clavicle_key";
IS731YYY.connect = new X3D.MFNode();

IS731ZZZ.connect[0] = connect732;

let connect733 = browser.currentScene.createNode("connect");
connect733.nodeField = "keyValue";
connect733.protoField = "l_clavicle_keyValue";
IS731ZZZ.connect[1] = connect733;

let connect734 = browser.currentScene.createNode("connect");
connect734.nodeField = "value_changed";
connect734.protoField = "l_clavicle_changed";
IS731ZZZ.connect[2] = connect734;

iS = IS731;

ProtoBody603ZZZ.children[38] = OrientationInterpolator730;

let ROUTE735 = browser.currentScene.createNode("ROUTE");
ROUTE735.fromField = "fraction_changed";
ROUTE735.fromNode = "BehaviorClock";
ROUTE735.toField = "set_fraction";
ROUTE735.toNode = "l_clavicle_OI";
ProtoBody603ZZZ.children[39] = ROUTE735;

let OrientationInterpolator736 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator736.DEF = "l_elbow_OI";
let IS737 = browser.currentScene.createNode("IS");
let connect738 = browser.currentScene.createNode("connect");
connect738.nodeField = "key";
connect738.protoField = "l_elbow_key";
IS737YYY.connect = new X3D.MFNode();

IS737ZZZ.connect[0] = connect738;

let connect739 = browser.currentScene.createNode("connect");
connect739.nodeField = "keyValue";
connect739.protoField = "l_elbow_keyValue";
IS737ZZZ.connect[1] = connect739;

let connect740 = browser.currentScene.createNode("connect");
connect740.nodeField = "value_changed";
connect740.protoField = "l_elbow_changed";
IS737ZZZ.connect[2] = connect740;

iS = IS737;

ProtoBody603ZZZ.children[40] = OrientationInterpolator736;

let ROUTE741 = browser.currentScene.createNode("ROUTE");
ROUTE741.fromField = "fraction_changed";
ROUTE741.fromNode = "BehaviorClock";
ROUTE741.toField = "set_fraction";
ROUTE741.toNode = "l_elbow_OI";
ProtoBody603ZZZ.children[41] = ROUTE741;

let OrientationInterpolator742 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator742.DEF = "l_eyeball_OI";
let IS743 = browser.currentScene.createNode("IS");
let connect744 = browser.currentScene.createNode("connect");
connect744.nodeField = "key";
connect744.protoField = "l_eyeball_key";
IS743YYY.connect = new X3D.MFNode();

IS743ZZZ.connect[0] = connect744;

let connect745 = browser.currentScene.createNode("connect");
connect745.nodeField = "keyValue";
connect745.protoField = "l_eyeball_keyValue";
IS743ZZZ.connect[1] = connect745;

let connect746 = browser.currentScene.createNode("connect");
connect746.nodeField = "value_changed";
connect746.protoField = "l_eyeball_changed";
IS743ZZZ.connect[2] = connect746;

iS = IS743;

ProtoBody603ZZZ.children[42] = OrientationInterpolator742;

let ROUTE747 = browser.currentScene.createNode("ROUTE");
ROUTE747.fromField = "fraction_changed";
ROUTE747.fromNode = "BehaviorClock";
ROUTE747.toField = "set_fraction";
ROUTE747.toNode = "l_eyeball_OI";
ProtoBody603ZZZ.children[43] = ROUTE747;

let OrientationInterpolator748 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator748.DEF = "l_eyeball_joint_OI";
let IS749 = browser.currentScene.createNode("IS");
let connect750 = browser.currentScene.createNode("connect");
connect750.nodeField = "key";
connect750.protoField = "l_eyeball_joint_key";
IS749YYY.connect = new X3D.MFNode();

IS749ZZZ.connect[0] = connect750;

let connect751 = browser.currentScene.createNode("connect");
connect751.nodeField = "keyValue";
connect751.protoField = "l_eyeball_joint_keyValue";
IS749ZZZ.connect[1] = connect751;

let connect752 = browser.currentScene.createNode("connect");
connect752.nodeField = "value_changed";
connect752.protoField = "l_eyeball_joint_changed";
IS749ZZZ.connect[2] = connect752;

iS = IS749;

ProtoBody603ZZZ.children[44] = OrientationInterpolator748;

let ROUTE753 = browser.currentScene.createNode("ROUTE");
ROUTE753.fromField = "fraction_changed";
ROUTE753.fromNode = "BehaviorClock";
ROUTE753.toField = "set_fraction";
ROUTE753.toNode = "l_eyeball_joint_OI";
ProtoBody603ZZZ.children[45] = ROUTE753;

let OrientationInterpolator754 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator754.DEF = "l_eyebrow_OI";
let IS755 = browser.currentScene.createNode("IS");
let connect756 = browser.currentScene.createNode("connect");
connect756.nodeField = "key";
connect756.protoField = "l_eyebrow_key";
IS755YYY.connect = new X3D.MFNode();

IS755ZZZ.connect[0] = connect756;

let connect757 = browser.currentScene.createNode("connect");
connect757.nodeField = "keyValue";
connect757.protoField = "l_eyebrow_keyValue";
IS755ZZZ.connect[1] = connect757;

let connect758 = browser.currentScene.createNode("connect");
connect758.nodeField = "value_changed";
connect758.protoField = "l_eyebrow_changed";
IS755ZZZ.connect[2] = connect758;

iS = IS755;

ProtoBody603ZZZ.children[46] = OrientationInterpolator754;

let ROUTE759 = browser.currentScene.createNode("ROUTE");
ROUTE759.fromField = "fraction_changed";
ROUTE759.fromNode = "BehaviorClock";
ROUTE759.toField = "set_fraction";
ROUTE759.toNode = "l_eyebrow_OI";
ProtoBody603ZZZ.children[47] = ROUTE759;

let OrientationInterpolator760 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator760.DEF = "l_eyebrow_joint_OI";
let IS761 = browser.currentScene.createNode("IS");
let connect762 = browser.currentScene.createNode("connect");
connect762.nodeField = "key";
connect762.protoField = "l_eyebrow_joint_key";
IS761YYY.connect = new X3D.MFNode();

IS761ZZZ.connect[0] = connect762;

let connect763 = browser.currentScene.createNode("connect");
connect763.nodeField = "keyValue";
connect763.protoField = "l_eyebrow_joint_keyValue";
IS761ZZZ.connect[1] = connect763;

let connect764 = browser.currentScene.createNode("connect");
connect764.nodeField = "value_changed";
connect764.protoField = "l_eyebrow_joint_changed";
IS761ZZZ.connect[2] = connect764;

iS = IS761;

ProtoBody603ZZZ.children[48] = OrientationInterpolator760;

let ROUTE765 = browser.currentScene.createNode("ROUTE");
ROUTE765.fromField = "fraction_changed";
ROUTE765.fromNode = "BehaviorClock";
ROUTE765.toField = "set_fraction";
ROUTE765.toNode = "l_eyebrow_joint_OI";
ProtoBody603ZZZ.children[49] = ROUTE765;

let OrientationInterpolator766 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator766.DEF = "l_eyelid_OI";
let IS767 = browser.currentScene.createNode("IS");
let connect768 = browser.currentScene.createNode("connect");
connect768.nodeField = "key";
connect768.protoField = "l_eyelid_key";
IS767YYY.connect = new X3D.MFNode();

IS767ZZZ.connect[0] = connect768;

let connect769 = browser.currentScene.createNode("connect");
connect769.nodeField = "keyValue";
connect769.protoField = "l_eyelid_keyValue";
IS767ZZZ.connect[1] = connect769;

let connect770 = browser.currentScene.createNode("connect");
connect770.nodeField = "value_changed";
connect770.protoField = "l_eyelid_changed";
IS767ZZZ.connect[2] = connect770;

iS = IS767;

ProtoBody603ZZZ.children[50] = OrientationInterpolator766;

let ROUTE771 = browser.currentScene.createNode("ROUTE");
ROUTE771.fromField = "fraction_changed";
ROUTE771.fromNode = "BehaviorClock";
ROUTE771.toField = "set_fraction";
ROUTE771.toNode = "l_eyelid_OI";
ProtoBody603ZZZ.children[51] = ROUTE771;

let OrientationInterpolator772 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator772.DEF = "l_eyelid_joint_OI";
let IS773 = browser.currentScene.createNode("IS");
let connect774 = browser.currentScene.createNode("connect");
connect774.nodeField = "key";
connect774.protoField = "l_eyelid_joint_key";
IS773YYY.connect = new X3D.MFNode();

IS773ZZZ.connect[0] = connect774;

let connect775 = browser.currentScene.createNode("connect");
connect775.nodeField = "keyValue";
connect775.protoField = "l_eyelid_joint_keyValue";
IS773ZZZ.connect[1] = connect775;

let connect776 = browser.currentScene.createNode("connect");
connect776.nodeField = "value_changed";
connect776.protoField = "l_eyelid_joint_changed";
IS773ZZZ.connect[2] = connect776;

iS = IS773;

ProtoBody603ZZZ.children[52] = OrientationInterpolator772;

let ROUTE777 = browser.currentScene.createNode("ROUTE");
ROUTE777.fromField = "fraction_changed";
ROUTE777.fromNode = "BehaviorClock";
ROUTE777.toField = "set_fraction";
ROUTE777.toNode = "l_eyelid_joint_OI";
ProtoBody603ZZZ.children[53] = ROUTE777;

let OrientationInterpolator778 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator778.DEF = "l_forearm_OI";
let IS779 = browser.currentScene.createNode("IS");
let connect780 = browser.currentScene.createNode("connect");
connect780.nodeField = "key";
connect780.protoField = "l_forearm_key";
IS779YYY.connect = new X3D.MFNode();

IS779ZZZ.connect[0] = connect780;

let connect781 = browser.currentScene.createNode("connect");
connect781.nodeField = "keyValue";
connect781.protoField = "l_forearm_keyValue";
IS779ZZZ.connect[1] = connect781;

let connect782 = browser.currentScene.createNode("connect");
connect782.nodeField = "value_changed";
connect782.protoField = "l_forearm_changed";
IS779ZZZ.connect[2] = connect782;

iS = IS779;

ProtoBody603ZZZ.children[54] = OrientationInterpolator778;

let ROUTE783 = browser.currentScene.createNode("ROUTE");
ROUTE783.fromField = "fraction_changed";
ROUTE783.fromNode = "BehaviorClock";
ROUTE783.toField = "set_fraction";
ROUTE783.toNode = "l_forearm_OI";
ProtoBody603ZZZ.children[55] = ROUTE783;

let OrientationInterpolator784 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator784.DEF = "l_forefoot_OI";
let IS785 = browser.currentScene.createNode("IS");
let connect786 = browser.currentScene.createNode("connect");
connect786.nodeField = "key";
connect786.protoField = "l_forefoot_key";
IS785YYY.connect = new X3D.MFNode();

IS785ZZZ.connect[0] = connect786;

let connect787 = browser.currentScene.createNode("connect");
connect787.nodeField = "keyValue";
connect787.protoField = "l_forefoot_keyValue";
IS785ZZZ.connect[1] = connect787;

let connect788 = browser.currentScene.createNode("connect");
connect788.nodeField = "value_changed";
connect788.protoField = "l_forefoot_changed";
IS785ZZZ.connect[2] = connect788;

iS = IS785;

ProtoBody603ZZZ.children[56] = OrientationInterpolator784;

let ROUTE789 = browser.currentScene.createNode("ROUTE");
ROUTE789.fromField = "fraction_changed";
ROUTE789.fromNode = "BehaviorClock";
ROUTE789.toField = "set_fraction";
ROUTE789.toNode = "l_forefoot_OI";
ProtoBody603ZZZ.children[57] = ROUTE789;

let OrientationInterpolator790 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator790.DEF = "l_hand_OI";
let IS791 = browser.currentScene.createNode("IS");
let connect792 = browser.currentScene.createNode("connect");
connect792.nodeField = "key";
connect792.protoField = "l_hand_key";
IS791YYY.connect = new X3D.MFNode();

IS791ZZZ.connect[0] = connect792;

let connect793 = browser.currentScene.createNode("connect");
connect793.nodeField = "keyValue";
connect793.protoField = "l_hand_keyValue";
IS791ZZZ.connect[1] = connect793;

let connect794 = browser.currentScene.createNode("connect");
connect794.nodeField = "value_changed";
connect794.protoField = "l_hand_changed";
IS791ZZZ.connect[2] = connect794;

iS = IS791;

ProtoBody603ZZZ.children[58] = OrientationInterpolator790;

let ROUTE795 = browser.currentScene.createNode("ROUTE");
ROUTE795.fromField = "fraction_changed";
ROUTE795.fromNode = "BehaviorClock";
ROUTE795.toField = "set_fraction";
ROUTE795.toNode = "l_hand_OI";
ProtoBody603ZZZ.children[59] = ROUTE795;

let OrientationInterpolator796 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator796.DEF = "l_hindfoot_OI";
let IS797 = browser.currentScene.createNode("IS");
let connect798 = browser.currentScene.createNode("connect");
connect798.nodeField = "key";
connect798.protoField = "l_hindfoot_key";
IS797YYY.connect = new X3D.MFNode();

IS797ZZZ.connect[0] = connect798;

let connect799 = browser.currentScene.createNode("connect");
connect799.nodeField = "keyValue";
connect799.protoField = "l_hindfoot_keyValue";
IS797ZZZ.connect[1] = connect799;

let connect800 = browser.currentScene.createNode("connect");
connect800.nodeField = "value_changed";
connect800.protoField = "l_hindfoot_changed";
IS797ZZZ.connect[2] = connect800;

iS = IS797;

ProtoBody603ZZZ.children[60] = OrientationInterpolator796;

let ROUTE801 = browser.currentScene.createNode("ROUTE");
ROUTE801.fromField = "fraction_changed";
ROUTE801.fromNode = "BehaviorClock";
ROUTE801.toField = "set_fraction";
ROUTE801.toNode = "l_hindfoot_OI";
ProtoBody603ZZZ.children[61] = ROUTE801;

let OrientationInterpolator802 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator802.DEF = "l_hip_OI";
let IS803 = browser.currentScene.createNode("IS");
let connect804 = browser.currentScene.createNode("connect");
connect804.nodeField = "key";
connect804.protoField = "l_hip_key";
IS803YYY.connect = new X3D.MFNode();

IS803ZZZ.connect[0] = connect804;

let connect805 = browser.currentScene.createNode("connect");
connect805.nodeField = "keyValue";
connect805.protoField = "l_hip_keyValue";
IS803ZZZ.connect[1] = connect805;

let connect806 = browser.currentScene.createNode("connect");
connect806.nodeField = "value_changed";
connect806.protoField = "l_hip_changed";
IS803ZZZ.connect[2] = connect806;

iS = IS803;

ProtoBody603ZZZ.children[62] = OrientationInterpolator802;

let ROUTE807 = browser.currentScene.createNode("ROUTE");
ROUTE807.fromField = "fraction_changed";
ROUTE807.fromNode = "BehaviorClock";
ROUTE807.toField = "set_fraction";
ROUTE807.toNode = "l_hip_OI";
ProtoBody603ZZZ.children[63] = ROUTE807;

let OrientationInterpolator808 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator808.DEF = "l_index0_OI";
let IS809 = browser.currentScene.createNode("IS");
let connect810 = browser.currentScene.createNode("connect");
connect810.nodeField = "key";
connect810.protoField = "l_index0_key";
IS809YYY.connect = new X3D.MFNode();

IS809ZZZ.connect[0] = connect810;

let connect811 = browser.currentScene.createNode("connect");
connect811.nodeField = "keyValue";
connect811.protoField = "l_index0_keyValue";
IS809ZZZ.connect[1] = connect811;

let connect812 = browser.currentScene.createNode("connect");
connect812.nodeField = "value_changed";
connect812.protoField = "l_index0_changed";
IS809ZZZ.connect[2] = connect812;

iS = IS809;

ProtoBody603ZZZ.children[64] = OrientationInterpolator808;

let ROUTE813 = browser.currentScene.createNode("ROUTE");
ROUTE813.fromField = "fraction_changed";
ROUTE813.fromNode = "BehaviorClock";
ROUTE813.toField = "set_fraction";
ROUTE813.toNode = "l_index0_OI";
ProtoBody603ZZZ.children[65] = ROUTE813;

let OrientationInterpolator814 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator814.DEF = "l_index1_OI";
let IS815 = browser.currentScene.createNode("IS");
let connect816 = browser.currentScene.createNode("connect");
connect816.nodeField = "key";
connect816.protoField = "l_index1_key";
IS815YYY.connect = new X3D.MFNode();

IS815ZZZ.connect[0] = connect816;

let connect817 = browser.currentScene.createNode("connect");
connect817.nodeField = "keyValue";
connect817.protoField = "l_index1_keyValue";
IS815ZZZ.connect[1] = connect817;

let connect818 = browser.currentScene.createNode("connect");
connect818.nodeField = "value_changed";
connect818.protoField = "l_index1_changed";
IS815ZZZ.connect[2] = connect818;

iS = IS815;

ProtoBody603ZZZ.children[66] = OrientationInterpolator814;

let ROUTE819 = browser.currentScene.createNode("ROUTE");
ROUTE819.fromField = "fraction_changed";
ROUTE819.fromNode = "BehaviorClock";
ROUTE819.toField = "set_fraction";
ROUTE819.toNode = "l_index1_OI";
ProtoBody603ZZZ.children[67] = ROUTE819;

let OrientationInterpolator820 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator820.DEF = "l_index2_OI";
let IS821 = browser.currentScene.createNode("IS");
let connect822 = browser.currentScene.createNode("connect");
connect822.nodeField = "key";
connect822.protoField = "l_index2_key";
IS821YYY.connect = new X3D.MFNode();

IS821ZZZ.connect[0] = connect822;

let connect823 = browser.currentScene.createNode("connect");
connect823.nodeField = "keyValue";
connect823.protoField = "l_index2_keyValue";
IS821ZZZ.connect[1] = connect823;

let connect824 = browser.currentScene.createNode("connect");
connect824.nodeField = "value_changed";
connect824.protoField = "l_index2_changed";
IS821ZZZ.connect[2] = connect824;

iS = IS821;

ProtoBody603ZZZ.children[68] = OrientationInterpolator820;

let ROUTE825 = browser.currentScene.createNode("ROUTE");
ROUTE825.fromField = "fraction_changed";
ROUTE825.fromNode = "BehaviorClock";
ROUTE825.toField = "set_fraction";
ROUTE825.toNode = "l_index2_OI";
ProtoBody603ZZZ.children[69] = ROUTE825;

let OrientationInterpolator826 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator826.DEF = "l_index3_OI";
let IS827 = browser.currentScene.createNode("IS");
let connect828 = browser.currentScene.createNode("connect");
connect828.nodeField = "key";
connect828.protoField = "l_index3_key";
IS827YYY.connect = new X3D.MFNode();

IS827ZZZ.connect[0] = connect828;

let connect829 = browser.currentScene.createNode("connect");
connect829.nodeField = "keyValue";
connect829.protoField = "l_index3_keyValue";
IS827ZZZ.connect[1] = connect829;

let connect830 = browser.currentScene.createNode("connect");
connect830.nodeField = "value_changed";
connect830.protoField = "l_index3_changed";
IS827ZZZ.connect[2] = connect830;

iS = IS827;

ProtoBody603ZZZ.children[70] = OrientationInterpolator826;

let ROUTE831 = browser.currentScene.createNode("ROUTE");
ROUTE831.fromField = "fraction_changed";
ROUTE831.fromNode = "BehaviorClock";
ROUTE831.toField = "set_fraction";
ROUTE831.toNode = "l_index3_OI";
ProtoBody603ZZZ.children[71] = ROUTE831;

let OrientationInterpolator832 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator832.DEF = "l_index_distal_OI";
let IS833 = browser.currentScene.createNode("IS");
let connect834 = browser.currentScene.createNode("connect");
connect834.nodeField = "key";
connect834.protoField = "l_index_distal_key";
IS833YYY.connect = new X3D.MFNode();

IS833ZZZ.connect[0] = connect834;

let connect835 = browser.currentScene.createNode("connect");
connect835.nodeField = "keyValue";
connect835.protoField = "l_index_distal_keyValue";
IS833ZZZ.connect[1] = connect835;

let connect836 = browser.currentScene.createNode("connect");
connect836.nodeField = "value_changed";
connect836.protoField = "l_index_distal_changed";
IS833ZZZ.connect[2] = connect836;

iS = IS833;

ProtoBody603ZZZ.children[72] = OrientationInterpolator832;

let ROUTE837 = browser.currentScene.createNode("ROUTE");
ROUTE837.fromField = "fraction_changed";
ROUTE837.fromNode = "BehaviorClock";
ROUTE837.toField = "set_fraction";
ROUTE837.toNode = "l_index_distal_OI";
ProtoBody603ZZZ.children[73] = ROUTE837;

let OrientationInterpolator838 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator838.DEF = "l_index_metacarpal_OI";
let IS839 = browser.currentScene.createNode("IS");
let connect840 = browser.currentScene.createNode("connect");
connect840.nodeField = "key";
connect840.protoField = "l_index_metacarpal_key";
IS839YYY.connect = new X3D.MFNode();

IS839ZZZ.connect[0] = connect840;

let connect841 = browser.currentScene.createNode("connect");
connect841.nodeField = "keyValue";
connect841.protoField = "l_index_metacarpal_keyValue";
IS839ZZZ.connect[1] = connect841;

let connect842 = browser.currentScene.createNode("connect");
connect842.nodeField = "value_changed";
connect842.protoField = "l_index_metacarpal_changed";
IS839ZZZ.connect[2] = connect842;

iS = IS839;

ProtoBody603ZZZ.children[74] = OrientationInterpolator838;

let ROUTE843 = browser.currentScene.createNode("ROUTE");
ROUTE843.fromField = "fraction_changed";
ROUTE843.fromNode = "BehaviorClock";
ROUTE843.toField = "set_fraction";
ROUTE843.toNode = "l_index_metacarpal_OI";
ProtoBody603ZZZ.children[75] = ROUTE843;

let OrientationInterpolator844 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator844.DEF = "l_index_middle_OI";
let IS845 = browser.currentScene.createNode("IS");
let connect846 = browser.currentScene.createNode("connect");
connect846.nodeField = "key";
connect846.protoField = "l_index_middle_key";
IS845YYY.connect = new X3D.MFNode();

IS845ZZZ.connect[0] = connect846;

let connect847 = browser.currentScene.createNode("connect");
connect847.nodeField = "keyValue";
connect847.protoField = "l_index_middle_keyValue";
IS845ZZZ.connect[1] = connect847;

let connect848 = browser.currentScene.createNode("connect");
connect848.nodeField = "value_changed";
connect848.protoField = "l_index_middle_changed";
IS845ZZZ.connect[2] = connect848;

iS = IS845;

ProtoBody603ZZZ.children[76] = OrientationInterpolator844;

let ROUTE849 = browser.currentScene.createNode("ROUTE");
ROUTE849.fromField = "fraction_changed";
ROUTE849.fromNode = "BehaviorClock";
ROUTE849.toField = "set_fraction";
ROUTE849.toNode = "l_index_middle_OI";
ProtoBody603ZZZ.children[77] = ROUTE849;

let OrientationInterpolator850 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator850.DEF = "l_index_proximal_OI";
let IS851 = browser.currentScene.createNode("IS");
let connect852 = browser.currentScene.createNode("connect");
connect852.nodeField = "key";
connect852.protoField = "l_index_proximal_key";
IS851YYY.connect = new X3D.MFNode();

IS851ZZZ.connect[0] = connect852;

let connect853 = browser.currentScene.createNode("connect");
connect853.nodeField = "keyValue";
connect853.protoField = "l_index_proximal_keyValue";
IS851ZZZ.connect[1] = connect853;

let connect854 = browser.currentScene.createNode("connect");
connect854.nodeField = "value_changed";
connect854.protoField = "l_index_proximal_changed";
IS851ZZZ.connect[2] = connect854;

iS = IS851;

ProtoBody603ZZZ.children[78] = OrientationInterpolator850;

let ROUTE855 = browser.currentScene.createNode("ROUTE");
ROUTE855.fromField = "fraction_changed";
ROUTE855.fromNode = "BehaviorClock";
ROUTE855.toField = "set_fraction";
ROUTE855.toNode = "l_index_proximal_OI";
ProtoBody603ZZZ.children[79] = ROUTE855;

let OrientationInterpolator856 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator856.DEF = "l_knee_OI";
let IS857 = browser.currentScene.createNode("IS");
let connect858 = browser.currentScene.createNode("connect");
connect858.nodeField = "key";
connect858.protoField = "l_knee_key";
IS857YYY.connect = new X3D.MFNode();

IS857ZZZ.connect[0] = connect858;

let connect859 = browser.currentScene.createNode("connect");
connect859.nodeField = "keyValue";
connect859.protoField = "l_knee_keyValue";
IS857ZZZ.connect[1] = connect859;

let connect860 = browser.currentScene.createNode("connect");
connect860.nodeField = "value_changed";
connect860.protoField = "l_knee_changed";
IS857ZZZ.connect[2] = connect860;

iS = IS857;

ProtoBody603ZZZ.children[80] = OrientationInterpolator856;

let ROUTE861 = browser.currentScene.createNode("ROUTE");
ROUTE861.fromField = "fraction_changed";
ROUTE861.fromNode = "BehaviorClock";
ROUTE861.toField = "set_fraction";
ROUTE861.toNode = "l_knee_OI";
ProtoBody603ZZZ.children[81] = ROUTE861;

let OrientationInterpolator862 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator862.DEF = "l_metatarsal_OI";
let IS863 = browser.currentScene.createNode("IS");
let connect864 = browser.currentScene.createNode("connect");
connect864.nodeField = "key";
connect864.protoField = "l_metatarsal_key";
IS863YYY.connect = new X3D.MFNode();

IS863ZZZ.connect[0] = connect864;

let connect865 = browser.currentScene.createNode("connect");
connect865.nodeField = "keyValue";
connect865.protoField = "l_metatarsal_keyValue";
IS863ZZZ.connect[1] = connect865;

let connect866 = browser.currentScene.createNode("connect");
connect866.nodeField = "value_changed";
connect866.protoField = "l_metatarsal_changed";
IS863ZZZ.connect[2] = connect866;

iS = IS863;

ProtoBody603ZZZ.children[82] = OrientationInterpolator862;

let ROUTE867 = browser.currentScene.createNode("ROUTE");
ROUTE867.fromField = "fraction_changed";
ROUTE867.fromNode = "BehaviorClock";
ROUTE867.toField = "set_fraction";
ROUTE867.toNode = "l_metatarsal_OI";
ProtoBody603ZZZ.children[83] = ROUTE867;

let OrientationInterpolator868 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator868.DEF = "l_middistal_OI";
let IS869 = browser.currentScene.createNode("IS");
let connect870 = browser.currentScene.createNode("connect");
connect870.nodeField = "key";
connect870.protoField = "l_middistal_key";
IS869YYY.connect = new X3D.MFNode();

IS869ZZZ.connect[0] = connect870;

let connect871 = browser.currentScene.createNode("connect");
connect871.nodeField = "keyValue";
connect871.protoField = "l_middistal_keyValue";
IS869ZZZ.connect[1] = connect871;

let connect872 = browser.currentScene.createNode("connect");
connect872.nodeField = "value_changed";
connect872.protoField = "l_middistal_changed";
IS869ZZZ.connect[2] = connect872;

iS = IS869;

ProtoBody603ZZZ.children[84] = OrientationInterpolator868;

let ROUTE873 = browser.currentScene.createNode("ROUTE");
ROUTE873.fromField = "fraction_changed";
ROUTE873.fromNode = "BehaviorClock";
ROUTE873.toField = "set_fraction";
ROUTE873.toNode = "l_middistal_OI";
ProtoBody603ZZZ.children[85] = ROUTE873;

let OrientationInterpolator874 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator874.DEF = "l_middle0_OI";
let IS875 = browser.currentScene.createNode("IS");
let connect876 = browser.currentScene.createNode("connect");
connect876.nodeField = "key";
connect876.protoField = "l_middle0_key";
IS875YYY.connect = new X3D.MFNode();

IS875ZZZ.connect[0] = connect876;

let connect877 = browser.currentScene.createNode("connect");
connect877.nodeField = "keyValue";
connect877.protoField = "l_middle0_keyValue";
IS875ZZZ.connect[1] = connect877;

let connect878 = browser.currentScene.createNode("connect");
connect878.nodeField = "value_changed";
connect878.protoField = "l_middle0_changed";
IS875ZZZ.connect[2] = connect878;

iS = IS875;

ProtoBody603ZZZ.children[86] = OrientationInterpolator874;

let ROUTE879 = browser.currentScene.createNode("ROUTE");
ROUTE879.fromField = "fraction_changed";
ROUTE879.fromNode = "BehaviorClock";
ROUTE879.toField = "set_fraction";
ROUTE879.toNode = "l_middle0_OI";
ProtoBody603ZZZ.children[87] = ROUTE879;

let OrientationInterpolator880 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator880.DEF = "l_middle1_OI";
let IS881 = browser.currentScene.createNode("IS");
let connect882 = browser.currentScene.createNode("connect");
connect882.nodeField = "key";
connect882.protoField = "l_middle1_key";
IS881YYY.connect = new X3D.MFNode();

IS881ZZZ.connect[0] = connect882;

let connect883 = browser.currentScene.createNode("connect");
connect883.nodeField = "keyValue";
connect883.protoField = "l_middle1_keyValue";
IS881ZZZ.connect[1] = connect883;

let connect884 = browser.currentScene.createNode("connect");
connect884.nodeField = "value_changed";
connect884.protoField = "l_middle1_changed";
IS881ZZZ.connect[2] = connect884;

iS = IS881;

ProtoBody603ZZZ.children[88] = OrientationInterpolator880;

let ROUTE885 = browser.currentScene.createNode("ROUTE");
ROUTE885.fromField = "fraction_changed";
ROUTE885.fromNode = "BehaviorClock";
ROUTE885.toField = "set_fraction";
ROUTE885.toNode = "l_middle1_OI";
ProtoBody603ZZZ.children[89] = ROUTE885;

let OrientationInterpolator886 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator886.DEF = "l_middle2_OI";
let IS887 = browser.currentScene.createNode("IS");
let connect888 = browser.currentScene.createNode("connect");
connect888.nodeField = "key";
connect888.protoField = "l_middle2_key";
IS887YYY.connect = new X3D.MFNode();

IS887ZZZ.connect[0] = connect888;

let connect889 = browser.currentScene.createNode("connect");
connect889.nodeField = "keyValue";
connect889.protoField = "l_middle2_keyValue";
IS887ZZZ.connect[1] = connect889;

let connect890 = browser.currentScene.createNode("connect");
connect890.nodeField = "value_changed";
connect890.protoField = "l_middle2_changed";
IS887ZZZ.connect[2] = connect890;

iS = IS887;

ProtoBody603ZZZ.children[90] = OrientationInterpolator886;

let ROUTE891 = browser.currentScene.createNode("ROUTE");
ROUTE891.fromField = "fraction_changed";
ROUTE891.fromNode = "BehaviorClock";
ROUTE891.toField = "set_fraction";
ROUTE891.toNode = "l_middle2_OI";
ProtoBody603ZZZ.children[91] = ROUTE891;

let OrientationInterpolator892 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator892.DEF = "l_middle3_OI";
let IS893 = browser.currentScene.createNode("IS");
let connect894 = browser.currentScene.createNode("connect");
connect894.nodeField = "key";
connect894.protoField = "l_middle3_key";
IS893YYY.connect = new X3D.MFNode();

IS893ZZZ.connect[0] = connect894;

let connect895 = browser.currentScene.createNode("connect");
connect895.nodeField = "keyValue";
connect895.protoField = "l_middle3_keyValue";
IS893ZZZ.connect[1] = connect895;

let connect896 = browser.currentScene.createNode("connect");
connect896.nodeField = "value_changed";
connect896.protoField = "l_middle3_changed";
IS893ZZZ.connect[2] = connect896;

iS = IS893;

ProtoBody603ZZZ.children[92] = OrientationInterpolator892;

let ROUTE897 = browser.currentScene.createNode("ROUTE");
ROUTE897.fromField = "fraction_changed";
ROUTE897.fromNode = "BehaviorClock";
ROUTE897.toField = "set_fraction";
ROUTE897.toNode = "l_middle3_OI";
ProtoBody603ZZZ.children[93] = ROUTE897;

let OrientationInterpolator898 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator898.DEF = "l_middle_distal_OI";
let IS899 = browser.currentScene.createNode("IS");
let connect900 = browser.currentScene.createNode("connect");
connect900.nodeField = "key";
connect900.protoField = "l_middle_distal_key";
IS899YYY.connect = new X3D.MFNode();

IS899ZZZ.connect[0] = connect900;

let connect901 = browser.currentScene.createNode("connect");
connect901.nodeField = "keyValue";
connect901.protoField = "l_middle_distal_keyValue";
IS899ZZZ.connect[1] = connect901;

let connect902 = browser.currentScene.createNode("connect");
connect902.nodeField = "value_changed";
connect902.protoField = "l_middle_distal_changed";
IS899ZZZ.connect[2] = connect902;

iS = IS899;

ProtoBody603ZZZ.children[94] = OrientationInterpolator898;

let ROUTE903 = browser.currentScene.createNode("ROUTE");
ROUTE903.fromField = "fraction_changed";
ROUTE903.fromNode = "BehaviorClock";
ROUTE903.toField = "set_fraction";
ROUTE903.toNode = "l_middle_distal_OI";
ProtoBody603ZZZ.children[95] = ROUTE903;

let OrientationInterpolator904 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator904.DEF = "l_middle_metacarpal_OI";
let IS905 = browser.currentScene.createNode("IS");
let connect906 = browser.currentScene.createNode("connect");
connect906.nodeField = "key";
connect906.protoField = "l_middle_metacarpal_key";
IS905YYY.connect = new X3D.MFNode();

IS905ZZZ.connect[0] = connect906;

let connect907 = browser.currentScene.createNode("connect");
connect907.nodeField = "keyValue";
connect907.protoField = "l_middle_metacarpal_keyValue";
IS905ZZZ.connect[1] = connect907;

let connect908 = browser.currentScene.createNode("connect");
connect908.nodeField = "value_changed";
connect908.protoField = "l_middle_metacarpal_changed";
IS905ZZZ.connect[2] = connect908;

iS = IS905;

ProtoBody603ZZZ.children[96] = OrientationInterpolator904;

let ROUTE909 = browser.currentScene.createNode("ROUTE");
ROUTE909.fromField = "fraction_changed";
ROUTE909.fromNode = "BehaviorClock";
ROUTE909.toField = "set_fraction";
ROUTE909.toNode = "l_middle_metacarpal_OI";
ProtoBody603ZZZ.children[97] = ROUTE909;

let OrientationInterpolator910 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator910.DEF = "l_middle_middle_OI";
let IS911 = browser.currentScene.createNode("IS");
let connect912 = browser.currentScene.createNode("connect");
connect912.nodeField = "key";
connect912.protoField = "l_middle_middle_key";
IS911YYY.connect = new X3D.MFNode();

IS911ZZZ.connect[0] = connect912;

let connect913 = browser.currentScene.createNode("connect");
connect913.nodeField = "keyValue";
connect913.protoField = "l_middle_middle_keyValue";
IS911ZZZ.connect[1] = connect913;

let connect914 = browser.currentScene.createNode("connect");
connect914.nodeField = "value_changed";
connect914.protoField = "l_middle_middle_changed";
IS911ZZZ.connect[2] = connect914;

iS = IS911;

ProtoBody603ZZZ.children[98] = OrientationInterpolator910;

let ROUTE915 = browser.currentScene.createNode("ROUTE");
ROUTE915.fromField = "fraction_changed";
ROUTE915.fromNode = "BehaviorClock";
ROUTE915.toField = "set_fraction";
ROUTE915.toNode = "l_middle_middle_OI";
ProtoBody603ZZZ.children[99] = ROUTE915;

let OrientationInterpolator916 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator916.DEF = "l_middle_proximal_OI";
let IS917 = browser.currentScene.createNode("IS");
let connect918 = browser.currentScene.createNode("connect");
connect918.nodeField = "key";
connect918.protoField = "l_middle_proximal_key";
IS917YYY.connect = new X3D.MFNode();

IS917ZZZ.connect[0] = connect918;

let connect919 = browser.currentScene.createNode("connect");
connect919.nodeField = "keyValue";
connect919.protoField = "l_middle_proximal_keyValue";
IS917ZZZ.connect[1] = connect919;

let connect920 = browser.currentScene.createNode("connect");
connect920.nodeField = "value_changed";
connect920.protoField = "l_middle_proximal_changed";
IS917ZZZ.connect[2] = connect920;

iS = IS917;

ProtoBody603ZZZ.children[100] = OrientationInterpolator916;

let ROUTE921 = browser.currentScene.createNode("ROUTE");
ROUTE921.fromField = "fraction_changed";
ROUTE921.fromNode = "BehaviorClock";
ROUTE921.toField = "set_fraction";
ROUTE921.toNode = "l_middle_proximal_OI";
ProtoBody603ZZZ.children[101] = ROUTE921;

let OrientationInterpolator922 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator922.DEF = "l_midproximal_OI";
let IS923 = browser.currentScene.createNode("IS");
let connect924 = browser.currentScene.createNode("connect");
connect924.nodeField = "key";
connect924.protoField = "l_midproximal_key";
IS923YYY.connect = new X3D.MFNode();

IS923ZZZ.connect[0] = connect924;

let connect925 = browser.currentScene.createNode("connect");
connect925.nodeField = "keyValue";
connect925.protoField = "l_midproximal_keyValue";
IS923ZZZ.connect[1] = connect925;

let connect926 = browser.currentScene.createNode("connect");
connect926.nodeField = "value_changed";
connect926.protoField = "l_midproximal_changed";
IS923ZZZ.connect[2] = connect926;

iS = IS923;

ProtoBody603ZZZ.children[102] = OrientationInterpolator922;

let ROUTE927 = browser.currentScene.createNode("ROUTE");
ROUTE927.fromField = "fraction_changed";
ROUTE927.fromNode = "BehaviorClock";
ROUTE927.toField = "set_fraction";
ROUTE927.toNode = "l_midproximal_OI";
ProtoBody603ZZZ.children[103] = ROUTE927;

let OrientationInterpolator928 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator928.DEF = "l_midtarsal_OI";
let IS929 = browser.currentScene.createNode("IS");
let connect930 = browser.currentScene.createNode("connect");
connect930.nodeField = "key";
connect930.protoField = "l_midtarsal_key";
IS929YYY.connect = new X3D.MFNode();

IS929ZZZ.connect[0] = connect930;

let connect931 = browser.currentScene.createNode("connect");
connect931.nodeField = "keyValue";
connect931.protoField = "l_midtarsal_keyValue";
IS929ZZZ.connect[1] = connect931;

let connect932 = browser.currentScene.createNode("connect");
connect932.nodeField = "value_changed";
connect932.protoField = "l_midtarsal_changed";
IS929ZZZ.connect[2] = connect932;

iS = IS929;

ProtoBody603ZZZ.children[104] = OrientationInterpolator928;

let ROUTE933 = browser.currentScene.createNode("ROUTE");
ROUTE933.fromField = "fraction_changed";
ROUTE933.fromNode = "BehaviorClock";
ROUTE933.toField = "set_fraction";
ROUTE933.toNode = "l_midtarsal_OI";
ProtoBody603ZZZ.children[105] = ROUTE933;

let OrientationInterpolator934 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator934.DEF = "l_pinky0_OI";
let IS935 = browser.currentScene.createNode("IS");
let connect936 = browser.currentScene.createNode("connect");
connect936.nodeField = "key";
connect936.protoField = "l_pinky0_key";
IS935YYY.connect = new X3D.MFNode();

IS935ZZZ.connect[0] = connect936;

let connect937 = browser.currentScene.createNode("connect");
connect937.nodeField = "keyValue";
connect937.protoField = "l_pinky0_keyValue";
IS935ZZZ.connect[1] = connect937;

let connect938 = browser.currentScene.createNode("connect");
connect938.nodeField = "value_changed";
connect938.protoField = "l_pinky0_changed";
IS935ZZZ.connect[2] = connect938;

iS = IS935;

ProtoBody603ZZZ.children[106] = OrientationInterpolator934;

let ROUTE939 = browser.currentScene.createNode("ROUTE");
ROUTE939.fromField = "fraction_changed";
ROUTE939.fromNode = "BehaviorClock";
ROUTE939.toField = "set_fraction";
ROUTE939.toNode = "l_pinky0_OI";
ProtoBody603ZZZ.children[107] = ROUTE939;

let OrientationInterpolator940 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator940.DEF = "l_pinky1_OI";
let IS941 = browser.currentScene.createNode("IS");
let connect942 = browser.currentScene.createNode("connect");
connect942.nodeField = "key";
connect942.protoField = "l_pinky1_key";
IS941YYY.connect = new X3D.MFNode();

IS941ZZZ.connect[0] = connect942;

let connect943 = browser.currentScene.createNode("connect");
connect943.nodeField = "keyValue";
connect943.protoField = "l_pinky1_keyValue";
IS941ZZZ.connect[1] = connect943;

let connect944 = browser.currentScene.createNode("connect");
connect944.nodeField = "value_changed";
connect944.protoField = "l_pinky1_changed";
IS941ZZZ.connect[2] = connect944;

iS = IS941;

ProtoBody603ZZZ.children[108] = OrientationInterpolator940;

let ROUTE945 = browser.currentScene.createNode("ROUTE");
ROUTE945.fromField = "fraction_changed";
ROUTE945.fromNode = "BehaviorClock";
ROUTE945.toField = "set_fraction";
ROUTE945.toNode = "l_pinky1_OI";
ProtoBody603ZZZ.children[109] = ROUTE945;

let OrientationInterpolator946 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator946.DEF = "l_pinky2_OI";
let IS947 = browser.currentScene.createNode("IS");
let connect948 = browser.currentScene.createNode("connect");
connect948.nodeField = "key";
connect948.protoField = "l_pinky2_key";
IS947YYY.connect = new X3D.MFNode();

IS947ZZZ.connect[0] = connect948;

let connect949 = browser.currentScene.createNode("connect");
connect949.nodeField = "keyValue";
connect949.protoField = "l_pinky2_keyValue";
IS947ZZZ.connect[1] = connect949;

let connect950 = browser.currentScene.createNode("connect");
connect950.nodeField = "value_changed";
connect950.protoField = "l_pinky2_changed";
IS947ZZZ.connect[2] = connect950;

iS = IS947;

ProtoBody603ZZZ.children[110] = OrientationInterpolator946;

let ROUTE951 = browser.currentScene.createNode("ROUTE");
ROUTE951.fromField = "fraction_changed";
ROUTE951.fromNode = "BehaviorClock";
ROUTE951.toField = "set_fraction";
ROUTE951.toNode = "l_pinky2_OI";
ProtoBody603ZZZ.children[111] = ROUTE951;

let OrientationInterpolator952 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator952.DEF = "l_pinky3_OI";
let IS953 = browser.currentScene.createNode("IS");
let connect954 = browser.currentScene.createNode("connect");
connect954.nodeField = "key";
connect954.protoField = "l_pinky3_key";
IS953YYY.connect = new X3D.MFNode();

IS953ZZZ.connect[0] = connect954;

let connect955 = browser.currentScene.createNode("connect");
connect955.nodeField = "keyValue";
connect955.protoField = "l_pinky3_keyValue";
IS953ZZZ.connect[1] = connect955;

let connect956 = browser.currentScene.createNode("connect");
connect956.nodeField = "value_changed";
connect956.protoField = "l_pinky3_changed";
IS953ZZZ.connect[2] = connect956;

iS = IS953;

ProtoBody603ZZZ.children[112] = OrientationInterpolator952;

let ROUTE957 = browser.currentScene.createNode("ROUTE");
ROUTE957.fromField = "fraction_changed";
ROUTE957.fromNode = "BehaviorClock";
ROUTE957.toField = "set_fraction";
ROUTE957.toNode = "l_pinky3_OI";
ProtoBody603ZZZ.children[113] = ROUTE957;

let OrientationInterpolator958 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator958.DEF = "l_pinky_distal_OI";
let IS959 = browser.currentScene.createNode("IS");
let connect960 = browser.currentScene.createNode("connect");
connect960.nodeField = "key";
connect960.protoField = "l_pinky_distal_key";
IS959YYY.connect = new X3D.MFNode();

IS959ZZZ.connect[0] = connect960;

let connect961 = browser.currentScene.createNode("connect");
connect961.nodeField = "keyValue";
connect961.protoField = "l_pinky_distal_keyValue";
IS959ZZZ.connect[1] = connect961;

let connect962 = browser.currentScene.createNode("connect");
connect962.nodeField = "value_changed";
connect962.protoField = "l_pinky_distal_changed";
IS959ZZZ.connect[2] = connect962;

iS = IS959;

ProtoBody603ZZZ.children[114] = OrientationInterpolator958;

let ROUTE963 = browser.currentScene.createNode("ROUTE");
ROUTE963.fromField = "fraction_changed";
ROUTE963.fromNode = "BehaviorClock";
ROUTE963.toField = "set_fraction";
ROUTE963.toNode = "l_pinky_distal_OI";
ProtoBody603ZZZ.children[115] = ROUTE963;

let OrientationInterpolator964 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator964.DEF = "l_pinky_metacarpal_OI";
let IS965 = browser.currentScene.createNode("IS");
let connect966 = browser.currentScene.createNode("connect");
connect966.nodeField = "key";
connect966.protoField = "l_pinky_metacarpal_key";
IS965YYY.connect = new X3D.MFNode();

IS965ZZZ.connect[0] = connect966;

let connect967 = browser.currentScene.createNode("connect");
connect967.nodeField = "keyValue";
connect967.protoField = "l_pinky_metacarpal_keyValue";
IS965ZZZ.connect[1] = connect967;

let connect968 = browser.currentScene.createNode("connect");
connect968.nodeField = "value_changed";
connect968.protoField = "l_pinky_metacarpal_changed";
IS965ZZZ.connect[2] = connect968;

iS = IS965;

ProtoBody603ZZZ.children[116] = OrientationInterpolator964;

let ROUTE969 = browser.currentScene.createNode("ROUTE");
ROUTE969.fromField = "fraction_changed";
ROUTE969.fromNode = "BehaviorClock";
ROUTE969.toField = "set_fraction";
ROUTE969.toNode = "l_pinky_metacarpal_OI";
ProtoBody603ZZZ.children[117] = ROUTE969;

let OrientationInterpolator970 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator970.DEF = "l_pinky_middle_OI";
let IS971 = browser.currentScene.createNode("IS");
let connect972 = browser.currentScene.createNode("connect");
connect972.nodeField = "key";
connect972.protoField = "l_pinky_middle_key";
IS971YYY.connect = new X3D.MFNode();

IS971ZZZ.connect[0] = connect972;

let connect973 = browser.currentScene.createNode("connect");
connect973.nodeField = "keyValue";
connect973.protoField = "l_pinky_middle_keyValue";
IS971ZZZ.connect[1] = connect973;

let connect974 = browser.currentScene.createNode("connect");
connect974.nodeField = "value_changed";
connect974.protoField = "l_pinky_middle_changed";
IS971ZZZ.connect[2] = connect974;

iS = IS971;

ProtoBody603ZZZ.children[118] = OrientationInterpolator970;

let ROUTE975 = browser.currentScene.createNode("ROUTE");
ROUTE975.fromField = "fraction_changed";
ROUTE975.fromNode = "BehaviorClock";
ROUTE975.toField = "set_fraction";
ROUTE975.toNode = "l_pinky_middle_OI";
ProtoBody603ZZZ.children[119] = ROUTE975;

let OrientationInterpolator976 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator976.DEF = "l_pinky_proximal_OI";
let IS977 = browser.currentScene.createNode("IS");
let connect978 = browser.currentScene.createNode("connect");
connect978.nodeField = "key";
connect978.protoField = "l_pinky_proximal_key";
IS977YYY.connect = new X3D.MFNode();

IS977ZZZ.connect[0] = connect978;

let connect979 = browser.currentScene.createNode("connect");
connect979.nodeField = "keyValue";
connect979.protoField = "l_pinky_proximal_keyValue";
IS977ZZZ.connect[1] = connect979;

let connect980 = browser.currentScene.createNode("connect");
connect980.nodeField = "value_changed";
connect980.protoField = "l_pinky_proximal_changed";
IS977ZZZ.connect[2] = connect980;

iS = IS977;

ProtoBody603ZZZ.children[120] = OrientationInterpolator976;

let ROUTE981 = browser.currentScene.createNode("ROUTE");
ROUTE981.fromField = "fraction_changed";
ROUTE981.fromNode = "BehaviorClock";
ROUTE981.toField = "set_fraction";
ROUTE981.toNode = "l_pinky_proximal_OI";
ProtoBody603ZZZ.children[121] = ROUTE981;

let OrientationInterpolator982 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator982.DEF = "l_ring0_OI";
let IS983 = browser.currentScene.createNode("IS");
let connect984 = browser.currentScene.createNode("connect");
connect984.nodeField = "key";
connect984.protoField = "l_ring0_key";
IS983YYY.connect = new X3D.MFNode();

IS983ZZZ.connect[0] = connect984;

let connect985 = browser.currentScene.createNode("connect");
connect985.nodeField = "keyValue";
connect985.protoField = "l_ring0_keyValue";
IS983ZZZ.connect[1] = connect985;

let connect986 = browser.currentScene.createNode("connect");
connect986.nodeField = "value_changed";
connect986.protoField = "l_ring0_changed";
IS983ZZZ.connect[2] = connect986;

iS = IS983;

ProtoBody603ZZZ.children[122] = OrientationInterpolator982;

let ROUTE987 = browser.currentScene.createNode("ROUTE");
ROUTE987.fromField = "fraction_changed";
ROUTE987.fromNode = "BehaviorClock";
ROUTE987.toField = "set_fraction";
ROUTE987.toNode = "l_ring0_OI";
ProtoBody603ZZZ.children[123] = ROUTE987;

let OrientationInterpolator988 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator988.DEF = "l_ring1_OI";
let IS989 = browser.currentScene.createNode("IS");
let connect990 = browser.currentScene.createNode("connect");
connect990.nodeField = "key";
connect990.protoField = "l_ring1_key";
IS989YYY.connect = new X3D.MFNode();

IS989ZZZ.connect[0] = connect990;

let connect991 = browser.currentScene.createNode("connect");
connect991.nodeField = "keyValue";
connect991.protoField = "l_ring1_keyValue";
IS989ZZZ.connect[1] = connect991;

let connect992 = browser.currentScene.createNode("connect");
connect992.nodeField = "value_changed";
connect992.protoField = "l_ring1_changed";
IS989ZZZ.connect[2] = connect992;

iS = IS989;

ProtoBody603ZZZ.children[124] = OrientationInterpolator988;

let ROUTE993 = browser.currentScene.createNode("ROUTE");
ROUTE993.fromField = "fraction_changed";
ROUTE993.fromNode = "BehaviorClock";
ROUTE993.toField = "set_fraction";
ROUTE993.toNode = "l_ring1_OI";
ProtoBody603ZZZ.children[125] = ROUTE993;

let OrientationInterpolator994 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator994.DEF = "l_ring2_OI";
let IS995 = browser.currentScene.createNode("IS");
let connect996 = browser.currentScene.createNode("connect");
connect996.nodeField = "key";
connect996.protoField = "l_ring2_key";
IS995YYY.connect = new X3D.MFNode();

IS995ZZZ.connect[0] = connect996;

let connect997 = browser.currentScene.createNode("connect");
connect997.nodeField = "keyValue";
connect997.protoField = "l_ring2_keyValue";
IS995ZZZ.connect[1] = connect997;

let connect998 = browser.currentScene.createNode("connect");
connect998.nodeField = "value_changed";
connect998.protoField = "l_ring2_changed";
IS995ZZZ.connect[2] = connect998;

iS = IS995;

ProtoBody603ZZZ.children[126] = OrientationInterpolator994;

let ROUTE999 = browser.currentScene.createNode("ROUTE");
ROUTE999.fromField = "fraction_changed";
ROUTE999.fromNode = "BehaviorClock";
ROUTE999.toField = "set_fraction";
ROUTE999.toNode = "l_ring2_OI";
ProtoBody603ZZZ.children[127] = ROUTE999;

let OrientationInterpolator1000 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1000.DEF = "l_ring3_OI";
let IS1001 = browser.currentScene.createNode("IS");
let connect1002 = browser.currentScene.createNode("connect");
connect1002.nodeField = "key";
connect1002.protoField = "l_ring3_key";
IS1001YYY.connect = new X3D.MFNode();

IS1001ZZZ.connect[0] = connect1002;

let connect1003 = browser.currentScene.createNode("connect");
connect1003.nodeField = "keyValue";
connect1003.protoField = "l_ring3_keyValue";
IS1001ZZZ.connect[1] = connect1003;

let connect1004 = browser.currentScene.createNode("connect");
connect1004.nodeField = "value_changed";
connect1004.protoField = "l_ring3_changed";
IS1001ZZZ.connect[2] = connect1004;

iS = IS1001;

ProtoBody603ZZZ.children[128] = OrientationInterpolator1000;

let ROUTE1005 = browser.currentScene.createNode("ROUTE");
ROUTE1005.fromField = "fraction_changed";
ROUTE1005.fromNode = "BehaviorClock";
ROUTE1005.toField = "set_fraction";
ROUTE1005.toNode = "l_ring3_OI";
ProtoBody603ZZZ.children[129] = ROUTE1005;

let OrientationInterpolator1006 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1006.DEF = "l_ring_distal_OI";
let IS1007 = browser.currentScene.createNode("IS");
let connect1008 = browser.currentScene.createNode("connect");
connect1008.nodeField = "key";
connect1008.protoField = "l_ring_distal_key";
IS1007YYY.connect = new X3D.MFNode();

IS1007ZZZ.connect[0] = connect1008;

let connect1009 = browser.currentScene.createNode("connect");
connect1009.nodeField = "keyValue";
connect1009.protoField = "l_ring_distal_keyValue";
IS1007ZZZ.connect[1] = connect1009;

let connect1010 = browser.currentScene.createNode("connect");
connect1010.nodeField = "value_changed";
connect1010.protoField = "l_ring_distal_changed";
IS1007ZZZ.connect[2] = connect1010;

iS = IS1007;

ProtoBody603ZZZ.children[130] = OrientationInterpolator1006;

let ROUTE1011 = browser.currentScene.createNode("ROUTE");
ROUTE1011.fromField = "fraction_changed";
ROUTE1011.fromNode = "BehaviorClock";
ROUTE1011.toField = "set_fraction";
ROUTE1011.toNode = "l_ring_distal_OI";
ProtoBody603ZZZ.children[131] = ROUTE1011;

let OrientationInterpolator1012 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1012.DEF = "l_ring_metacarpal_OI";
let IS1013 = browser.currentScene.createNode("IS");
let connect1014 = browser.currentScene.createNode("connect");
connect1014.nodeField = "key";
connect1014.protoField = "l_ring_metacarpal_key";
IS1013YYY.connect = new X3D.MFNode();

IS1013ZZZ.connect[0] = connect1014;

let connect1015 = browser.currentScene.createNode("connect");
connect1015.nodeField = "keyValue";
connect1015.protoField = "l_ring_metacarpal_keyValue";
IS1013ZZZ.connect[1] = connect1015;

let connect1016 = browser.currentScene.createNode("connect");
connect1016.nodeField = "value_changed";
connect1016.protoField = "l_ring_metacarpal_changed";
IS1013ZZZ.connect[2] = connect1016;

iS = IS1013;

ProtoBody603ZZZ.children[132] = OrientationInterpolator1012;

let ROUTE1017 = browser.currentScene.createNode("ROUTE");
ROUTE1017.fromField = "fraction_changed";
ROUTE1017.fromNode = "BehaviorClock";
ROUTE1017.toField = "set_fraction";
ROUTE1017.toNode = "l_ring_metacarpal_OI";
ProtoBody603ZZZ.children[133] = ROUTE1017;

let OrientationInterpolator1018 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1018.DEF = "l_ring_middle_OI";
let IS1019 = browser.currentScene.createNode("IS");
let connect1020 = browser.currentScene.createNode("connect");
connect1020.nodeField = "key";
connect1020.protoField = "l_ring_middle_key";
IS1019YYY.connect = new X3D.MFNode();

IS1019ZZZ.connect[0] = connect1020;

let connect1021 = browser.currentScene.createNode("connect");
connect1021.nodeField = "keyValue";
connect1021.protoField = "l_ring_middle_keyValue";
IS1019ZZZ.connect[1] = connect1021;

let connect1022 = browser.currentScene.createNode("connect");
connect1022.nodeField = "value_changed";
connect1022.protoField = "l_ring_middle_changed";
IS1019ZZZ.connect[2] = connect1022;

iS = IS1019;

ProtoBody603ZZZ.children[134] = OrientationInterpolator1018;

let ROUTE1023 = browser.currentScene.createNode("ROUTE");
ROUTE1023.fromField = "fraction_changed";
ROUTE1023.fromNode = "BehaviorClock";
ROUTE1023.toField = "set_fraction";
ROUTE1023.toNode = "l_ring_middle_OI";
ProtoBody603ZZZ.children[135] = ROUTE1023;

let OrientationInterpolator1024 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1024.DEF = "l_ring_proximal_OI";
let IS1025 = browser.currentScene.createNode("IS");
let connect1026 = browser.currentScene.createNode("connect");
connect1026.nodeField = "key";
connect1026.protoField = "l_ring_proximal_key";
IS1025YYY.connect = new X3D.MFNode();

IS1025ZZZ.connect[0] = connect1026;

let connect1027 = browser.currentScene.createNode("connect");
connect1027.nodeField = "keyValue";
connect1027.protoField = "l_ring_proximal_keyValue";
IS1025ZZZ.connect[1] = connect1027;

let connect1028 = browser.currentScene.createNode("connect");
connect1028.nodeField = "value_changed";
connect1028.protoField = "l_ring_proximal_changed";
IS1025ZZZ.connect[2] = connect1028;

iS = IS1025;

ProtoBody603ZZZ.children[136] = OrientationInterpolator1024;

let ROUTE1029 = browser.currentScene.createNode("ROUTE");
ROUTE1029.fromField = "fraction_changed";
ROUTE1029.fromNode = "BehaviorClock";
ROUTE1029.toField = "set_fraction";
ROUTE1029.toNode = "l_ring_proximal_OI";
ProtoBody603ZZZ.children[137] = ROUTE1029;

let OrientationInterpolator1030 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1030.DEF = "l_scapula_OI";
let IS1031 = browser.currentScene.createNode("IS");
let connect1032 = browser.currentScene.createNode("connect");
connect1032.nodeField = "key";
connect1032.protoField = "l_scapula_key";
IS1031YYY.connect = new X3D.MFNode();

IS1031ZZZ.connect[0] = connect1032;

let connect1033 = browser.currentScene.createNode("connect");
connect1033.nodeField = "keyValue";
connect1033.protoField = "l_scapula_keyValue";
IS1031ZZZ.connect[1] = connect1033;

let connect1034 = browser.currentScene.createNode("connect");
connect1034.nodeField = "value_changed";
connect1034.protoField = "l_scapula_changed";
IS1031ZZZ.connect[2] = connect1034;

iS = IS1031;

ProtoBody603ZZZ.children[138] = OrientationInterpolator1030;

let ROUTE1035 = browser.currentScene.createNode("ROUTE");
ROUTE1035.fromField = "fraction_changed";
ROUTE1035.fromNode = "BehaviorClock";
ROUTE1035.toField = "set_fraction";
ROUTE1035.toNode = "l_scapula_OI";
ProtoBody603ZZZ.children[139] = ROUTE1035;

let OrientationInterpolator1036 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1036.DEF = "l_shoulder_OI";
let IS1037 = browser.currentScene.createNode("IS");
let connect1038 = browser.currentScene.createNode("connect");
connect1038.nodeField = "key";
connect1038.protoField = "l_shoulder_key";
IS1037YYY.connect = new X3D.MFNode();

IS1037ZZZ.connect[0] = connect1038;

let connect1039 = browser.currentScene.createNode("connect");
connect1039.nodeField = "keyValue";
connect1039.protoField = "l_shoulder_keyValue";
IS1037ZZZ.connect[1] = connect1039;

let connect1040 = browser.currentScene.createNode("connect");
connect1040.nodeField = "value_changed";
connect1040.protoField = "l_shoulder_changed";
IS1037ZZZ.connect[2] = connect1040;

iS = IS1037;

ProtoBody603ZZZ.children[140] = OrientationInterpolator1036;

let ROUTE1041 = browser.currentScene.createNode("ROUTE");
ROUTE1041.fromField = "fraction_changed";
ROUTE1041.fromNode = "BehaviorClock";
ROUTE1041.toField = "set_fraction";
ROUTE1041.toNode = "l_shoulder_OI";
ProtoBody603ZZZ.children[141] = ROUTE1041;

let OrientationInterpolator1042 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1042.DEF = "l_sternoclavicular_OI";
let IS1043 = browser.currentScene.createNode("IS");
let connect1044 = browser.currentScene.createNode("connect");
connect1044.nodeField = "key";
connect1044.protoField = "l_sternoclavicular_key";
IS1043YYY.connect = new X3D.MFNode();

IS1043ZZZ.connect[0] = connect1044;

let connect1045 = browser.currentScene.createNode("connect");
connect1045.nodeField = "keyValue";
connect1045.protoField = "l_sternoclavicular_keyValue";
IS1043ZZZ.connect[1] = connect1045;

let connect1046 = browser.currentScene.createNode("connect");
connect1046.nodeField = "value_changed";
connect1046.protoField = "l_sternoclavicular_changed";
IS1043ZZZ.connect[2] = connect1046;

iS = IS1043;

ProtoBody603ZZZ.children[142] = OrientationInterpolator1042;

let ROUTE1047 = browser.currentScene.createNode("ROUTE");
ROUTE1047.fromField = "fraction_changed";
ROUTE1047.fromNode = "BehaviorClock";
ROUTE1047.toField = "set_fraction";
ROUTE1047.toNode = "l_sternoclavicular_OI";
ProtoBody603ZZZ.children[143] = ROUTE1047;

let OrientationInterpolator1048 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1048.DEF = "l_subtalar_OI";
let IS1049 = browser.currentScene.createNode("IS");
let connect1050 = browser.currentScene.createNode("connect");
connect1050.nodeField = "key";
connect1050.protoField = "l_subtalar_key";
IS1049YYY.connect = new X3D.MFNode();

IS1049ZZZ.connect[0] = connect1050;

let connect1051 = browser.currentScene.createNode("connect");
connect1051.nodeField = "keyValue";
connect1051.protoField = "l_subtalar_keyValue";
IS1049ZZZ.connect[1] = connect1051;

let connect1052 = browser.currentScene.createNode("connect");
connect1052.nodeField = "value_changed";
connect1052.protoField = "l_subtalar_changed";
IS1049ZZZ.connect[2] = connect1052;

iS = IS1049;

ProtoBody603ZZZ.children[144] = OrientationInterpolator1048;

let ROUTE1053 = browser.currentScene.createNode("ROUTE");
ROUTE1053.fromField = "fraction_changed";
ROUTE1053.fromNode = "BehaviorClock";
ROUTE1053.toField = "set_fraction";
ROUTE1053.toNode = "l_subtalar_OI";
ProtoBody603ZZZ.children[145] = ROUTE1053;

let OrientationInterpolator1054 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1054.DEF = "l_thigh_OI";
let IS1055 = browser.currentScene.createNode("IS");
let connect1056 = browser.currentScene.createNode("connect");
connect1056.nodeField = "key";
connect1056.protoField = "l_thigh_key";
IS1055YYY.connect = new X3D.MFNode();

IS1055ZZZ.connect[0] = connect1056;

let connect1057 = browser.currentScene.createNode("connect");
connect1057.nodeField = "keyValue";
connect1057.protoField = "l_thigh_keyValue";
IS1055ZZZ.connect[1] = connect1057;

let connect1058 = browser.currentScene.createNode("connect");
connect1058.nodeField = "value_changed";
connect1058.protoField = "l_thigh_changed";
IS1055ZZZ.connect[2] = connect1058;

iS = IS1055;

ProtoBody603ZZZ.children[146] = OrientationInterpolator1054;

let ROUTE1059 = browser.currentScene.createNode("ROUTE");
ROUTE1059.fromField = "fraction_changed";
ROUTE1059.fromNode = "BehaviorClock";
ROUTE1059.toField = "set_fraction";
ROUTE1059.toNode = "l_thigh_OI";
ProtoBody603ZZZ.children[147] = ROUTE1059;

let OrientationInterpolator1060 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1060.DEF = "l_thumb1_OI";
let IS1061 = browser.currentScene.createNode("IS");
let connect1062 = browser.currentScene.createNode("connect");
connect1062.nodeField = "key";
connect1062.protoField = "l_thumb1_key";
IS1061YYY.connect = new X3D.MFNode();

IS1061ZZZ.connect[0] = connect1062;

let connect1063 = browser.currentScene.createNode("connect");
connect1063.nodeField = "keyValue";
connect1063.protoField = "l_thumb1_keyValue";
IS1061ZZZ.connect[1] = connect1063;

let connect1064 = browser.currentScene.createNode("connect");
connect1064.nodeField = "value_changed";
connect1064.protoField = "l_thumb1_changed";
IS1061ZZZ.connect[2] = connect1064;

iS = IS1061;

ProtoBody603ZZZ.children[148] = OrientationInterpolator1060;

let ROUTE1065 = browser.currentScene.createNode("ROUTE");
ROUTE1065.fromField = "fraction_changed";
ROUTE1065.fromNode = "BehaviorClock";
ROUTE1065.toField = "set_fraction";
ROUTE1065.toNode = "l_thumb1_OI";
ProtoBody603ZZZ.children[149] = ROUTE1065;

let OrientationInterpolator1066 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1066.DEF = "l_thumb2_OI";
let IS1067 = browser.currentScene.createNode("IS");
let connect1068 = browser.currentScene.createNode("connect");
connect1068.nodeField = "key";
connect1068.protoField = "l_thumb2_key";
IS1067YYY.connect = new X3D.MFNode();

IS1067ZZZ.connect[0] = connect1068;

let connect1069 = browser.currentScene.createNode("connect");
connect1069.nodeField = "keyValue";
connect1069.protoField = "l_thumb2_keyValue";
IS1067ZZZ.connect[1] = connect1069;

let connect1070 = browser.currentScene.createNode("connect");
connect1070.nodeField = "value_changed";
connect1070.protoField = "l_thumb2_changed";
IS1067ZZZ.connect[2] = connect1070;

iS = IS1067;

ProtoBody603ZZZ.children[150] = OrientationInterpolator1066;

let ROUTE1071 = browser.currentScene.createNode("ROUTE");
ROUTE1071.fromField = "fraction_changed";
ROUTE1071.fromNode = "BehaviorClock";
ROUTE1071.toField = "set_fraction";
ROUTE1071.toNode = "l_thumb2_OI";
ProtoBody603ZZZ.children[151] = ROUTE1071;

let OrientationInterpolator1072 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1072.DEF = "l_thumb3_OI";
let IS1073 = browser.currentScene.createNode("IS");
let connect1074 = browser.currentScene.createNode("connect");
connect1074.nodeField = "key";
connect1074.protoField = "l_thumb3_key";
IS1073YYY.connect = new X3D.MFNode();

IS1073ZZZ.connect[0] = connect1074;

let connect1075 = browser.currentScene.createNode("connect");
connect1075.nodeField = "keyValue";
connect1075.protoField = "l_thumb3_keyValue";
IS1073ZZZ.connect[1] = connect1075;

let connect1076 = browser.currentScene.createNode("connect");
connect1076.nodeField = "value_changed";
connect1076.protoField = "l_thumb3_changed";
IS1073ZZZ.connect[2] = connect1076;

iS = IS1073;

ProtoBody603ZZZ.children[152] = OrientationInterpolator1072;

let ROUTE1077 = browser.currentScene.createNode("ROUTE");
ROUTE1077.fromField = "fraction_changed";
ROUTE1077.fromNode = "BehaviorClock";
ROUTE1077.toField = "set_fraction";
ROUTE1077.toNode = "l_thumb3_OI";
ProtoBody603ZZZ.children[153] = ROUTE1077;

let OrientationInterpolator1078 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1078.DEF = "l_thumb_distal_OI";
let IS1079 = browser.currentScene.createNode("IS");
let connect1080 = browser.currentScene.createNode("connect");
connect1080.nodeField = "key";
connect1080.protoField = "l_thumb_distal_key";
IS1079YYY.connect = new X3D.MFNode();

IS1079ZZZ.connect[0] = connect1080;

let connect1081 = browser.currentScene.createNode("connect");
connect1081.nodeField = "keyValue";
connect1081.protoField = "l_thumb_distal_keyValue";
IS1079ZZZ.connect[1] = connect1081;

let connect1082 = browser.currentScene.createNode("connect");
connect1082.nodeField = "value_changed";
connect1082.protoField = "l_thumb_distal_changed";
IS1079ZZZ.connect[2] = connect1082;

iS = IS1079;

ProtoBody603ZZZ.children[154] = OrientationInterpolator1078;

let ROUTE1083 = browser.currentScene.createNode("ROUTE");
ROUTE1083.fromField = "fraction_changed";
ROUTE1083.fromNode = "BehaviorClock";
ROUTE1083.toField = "set_fraction";
ROUTE1083.toNode = "l_thumb_distal_OI";
ProtoBody603ZZZ.children[155] = ROUTE1083;

let OrientationInterpolator1084 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1084.DEF = "l_thumb_metacarpal_OI";
let IS1085 = browser.currentScene.createNode("IS");
let connect1086 = browser.currentScene.createNode("connect");
connect1086.nodeField = "key";
connect1086.protoField = "l_thumb_metacarpal_key";
IS1085YYY.connect = new X3D.MFNode();

IS1085ZZZ.connect[0] = connect1086;

let connect1087 = browser.currentScene.createNode("connect");
connect1087.nodeField = "keyValue";
connect1087.protoField = "l_thumb_metacarpal_keyValue";
IS1085ZZZ.connect[1] = connect1087;

let connect1088 = browser.currentScene.createNode("connect");
connect1088.nodeField = "value_changed";
connect1088.protoField = "l_thumb_metacarpal_changed";
IS1085ZZZ.connect[2] = connect1088;

iS = IS1085;

ProtoBody603ZZZ.children[156] = OrientationInterpolator1084;

let ROUTE1089 = browser.currentScene.createNode("ROUTE");
ROUTE1089.fromField = "fraction_changed";
ROUTE1089.fromNode = "BehaviorClock";
ROUTE1089.toField = "set_fraction";
ROUTE1089.toNode = "l_thumb_metacarpal_OI";
ProtoBody603ZZZ.children[157] = ROUTE1089;

let OrientationInterpolator1090 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1090.DEF = "l_thumb_proximal_OI";
let IS1091 = browser.currentScene.createNode("IS");
let connect1092 = browser.currentScene.createNode("connect");
connect1092.nodeField = "key";
connect1092.protoField = "l_thumb_proximal_key";
IS1091YYY.connect = new X3D.MFNode();

IS1091ZZZ.connect[0] = connect1092;

let connect1093 = browser.currentScene.createNode("connect");
connect1093.nodeField = "keyValue";
connect1093.protoField = "l_thumb_proximal_keyValue";
IS1091ZZZ.connect[1] = connect1093;

let connect1094 = browser.currentScene.createNode("connect");
connect1094.nodeField = "value_changed";
connect1094.protoField = "l_thumb_proximal_changed";
IS1091ZZZ.connect[2] = connect1094;

iS = IS1091;

ProtoBody603ZZZ.children[158] = OrientationInterpolator1090;

let ROUTE1095 = browser.currentScene.createNode("ROUTE");
ROUTE1095.fromField = "fraction_changed";
ROUTE1095.fromNode = "BehaviorClock";
ROUTE1095.toField = "set_fraction";
ROUTE1095.toNode = "l_thumb_proximal_OI";
ProtoBody603ZZZ.children[159] = ROUTE1095;

let OrientationInterpolator1096 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1096.DEF = "l_upperarm_OI";
let IS1097 = browser.currentScene.createNode("IS");
let connect1098 = browser.currentScene.createNode("connect");
connect1098.nodeField = "key";
connect1098.protoField = "l_upperarm_key";
IS1097YYY.connect = new X3D.MFNode();

IS1097ZZZ.connect[0] = connect1098;

let connect1099 = browser.currentScene.createNode("connect");
connect1099.nodeField = "keyValue";
connect1099.protoField = "l_upperarm_keyValue";
IS1097ZZZ.connect[1] = connect1099;

let connect1100 = browser.currentScene.createNode("connect");
connect1100.nodeField = "value_changed";
connect1100.protoField = "l_upperarm_changed";
IS1097ZZZ.connect[2] = connect1100;

iS = IS1097;

ProtoBody603ZZZ.children[160] = OrientationInterpolator1096;

let ROUTE1101 = browser.currentScene.createNode("ROUTE");
ROUTE1101.fromField = "fraction_changed";
ROUTE1101.fromNode = "BehaviorClock";
ROUTE1101.toField = "set_fraction";
ROUTE1101.toNode = "l_upperarm_OI";
ProtoBody603ZZZ.children[161] = ROUTE1101;

let OrientationInterpolator1102 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1102.DEF = "l_wrist_OI";
let IS1103 = browser.currentScene.createNode("IS");
let connect1104 = browser.currentScene.createNode("connect");
connect1104.nodeField = "key";
connect1104.protoField = "l_wrist_key";
IS1103YYY.connect = new X3D.MFNode();

IS1103ZZZ.connect[0] = connect1104;

let connect1105 = browser.currentScene.createNode("connect");
connect1105.nodeField = "keyValue";
connect1105.protoField = "l_wrist_keyValue";
IS1103ZZZ.connect[1] = connect1105;

let connect1106 = browser.currentScene.createNode("connect");
connect1106.nodeField = "value_changed";
connect1106.protoField = "l_wrist_changed";
IS1103ZZZ.connect[2] = connect1106;

iS = IS1103;

ProtoBody603ZZZ.children[162] = OrientationInterpolator1102;

let ROUTE1107 = browser.currentScene.createNode("ROUTE");
ROUTE1107.fromField = "fraction_changed";
ROUTE1107.fromNode = "BehaviorClock";
ROUTE1107.toField = "set_fraction";
ROUTE1107.toNode = "l_wrist_OI";
ProtoBody603ZZZ.children[163] = ROUTE1107;

let OrientationInterpolator1108 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1108.DEF = "pelvis_OI";
let IS1109 = browser.currentScene.createNode("IS");
let connect1110 = browser.currentScene.createNode("connect");
connect1110.nodeField = "key";
connect1110.protoField = "pelvis_key";
IS1109YYY.connect = new X3D.MFNode();

IS1109ZZZ.connect[0] = connect1110;

let connect1111 = browser.currentScene.createNode("connect");
connect1111.nodeField = "keyValue";
connect1111.protoField = "pelvis_keyValue";
IS1109ZZZ.connect[1] = connect1111;

let connect1112 = browser.currentScene.createNode("connect");
connect1112.nodeField = "value_changed";
connect1112.protoField = "pelvis_changed";
IS1109ZZZ.connect[2] = connect1112;

iS = IS1109;

ProtoBody603ZZZ.children[164] = OrientationInterpolator1108;

let ROUTE1113 = browser.currentScene.createNode("ROUTE");
ROUTE1113.fromField = "fraction_changed";
ROUTE1113.fromNode = "BehaviorClock";
ROUTE1113.toField = "set_fraction";
ROUTE1113.toNode = "pelvis_OI";
ProtoBody603ZZZ.children[165] = ROUTE1113;

let OrientationInterpolator1114 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1114.DEF = "r_acromioclavicular_OI";
let IS1115 = browser.currentScene.createNode("IS");
let connect1116 = browser.currentScene.createNode("connect");
connect1116.nodeField = "key";
connect1116.protoField = "r_acromioclavicular_key";
IS1115YYY.connect = new X3D.MFNode();

IS1115ZZZ.connect[0] = connect1116;

let connect1117 = browser.currentScene.createNode("connect");
connect1117.nodeField = "keyValue";
connect1117.protoField = "r_acromioclavicular_keyValue";
IS1115ZZZ.connect[1] = connect1117;

let connect1118 = browser.currentScene.createNode("connect");
connect1118.nodeField = "value_changed";
connect1118.protoField = "r_acromioclavicular_changed";
IS1115ZZZ.connect[2] = connect1118;

iS = IS1115;

ProtoBody603ZZZ.children[166] = OrientationInterpolator1114;

let ROUTE1119 = browser.currentScene.createNode("ROUTE");
ROUTE1119.fromField = "fraction_changed";
ROUTE1119.fromNode = "BehaviorClock";
ROUTE1119.toField = "set_fraction";
ROUTE1119.toNode = "r_acromioclavicular_OI";
ProtoBody603ZZZ.children[167] = ROUTE1119;

let OrientationInterpolator1120 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1120.DEF = "r_ankle_OI";
let IS1121 = browser.currentScene.createNode("IS");
let connect1122 = browser.currentScene.createNode("connect");
connect1122.nodeField = "key";
connect1122.protoField = "r_ankle_key";
IS1121YYY.connect = new X3D.MFNode();

IS1121ZZZ.connect[0] = connect1122;

let connect1123 = browser.currentScene.createNode("connect");
connect1123.nodeField = "keyValue";
connect1123.protoField = "r_ankle_keyValue";
IS1121ZZZ.connect[1] = connect1123;

let connect1124 = browser.currentScene.createNode("connect");
connect1124.nodeField = "value_changed";
connect1124.protoField = "r_ankle_changed";
IS1121ZZZ.connect[2] = connect1124;

iS = IS1121;

ProtoBody603ZZZ.children[168] = OrientationInterpolator1120;

let ROUTE1125 = browser.currentScene.createNode("ROUTE");
ROUTE1125.fromField = "fraction_changed";
ROUTE1125.fromNode = "BehaviorClock";
ROUTE1125.toField = "set_fraction";
ROUTE1125.toNode = "r_ankle_OI";
ProtoBody603ZZZ.children[169] = ROUTE1125;

let OrientationInterpolator1126 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1126.DEF = "r_calf_OI";
let IS1127 = browser.currentScene.createNode("IS");
let connect1128 = browser.currentScene.createNode("connect");
connect1128.nodeField = "key";
connect1128.protoField = "r_calf_key";
IS1127YYY.connect = new X3D.MFNode();

IS1127ZZZ.connect[0] = connect1128;

let connect1129 = browser.currentScene.createNode("connect");
connect1129.nodeField = "keyValue";
connect1129.protoField = "r_calf_keyValue";
IS1127ZZZ.connect[1] = connect1129;

let connect1130 = browser.currentScene.createNode("connect");
connect1130.nodeField = "value_changed";
connect1130.protoField = "r_calf_changed";
IS1127ZZZ.connect[2] = connect1130;

iS = IS1127;

ProtoBody603ZZZ.children[170] = OrientationInterpolator1126;

let ROUTE1131 = browser.currentScene.createNode("ROUTE");
ROUTE1131.fromField = "fraction_changed";
ROUTE1131.fromNode = "BehaviorClock";
ROUTE1131.toField = "set_fraction";
ROUTE1131.toNode = "r_calf_OI";
ProtoBody603ZZZ.children[171] = ROUTE1131;

let OrientationInterpolator1132 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1132.DEF = "r_clavicle_OI";
let IS1133 = browser.currentScene.createNode("IS");
let connect1134 = browser.currentScene.createNode("connect");
connect1134.nodeField = "key";
connect1134.protoField = "r_clavicle_key";
IS1133YYY.connect = new X3D.MFNode();

IS1133ZZZ.connect[0] = connect1134;

let connect1135 = browser.currentScene.createNode("connect");
connect1135.nodeField = "keyValue";
connect1135.protoField = "r_clavicle_keyValue";
IS1133ZZZ.connect[1] = connect1135;

let connect1136 = browser.currentScene.createNode("connect");
connect1136.nodeField = "value_changed";
connect1136.protoField = "r_clavicle_changed";
IS1133ZZZ.connect[2] = connect1136;

iS = IS1133;

ProtoBody603ZZZ.children[172] = OrientationInterpolator1132;

let ROUTE1137 = browser.currentScene.createNode("ROUTE");
ROUTE1137.fromField = "fraction_changed";
ROUTE1137.fromNode = "BehaviorClock";
ROUTE1137.toField = "set_fraction";
ROUTE1137.toNode = "r_clavicle_OI";
ProtoBody603ZZZ.children[173] = ROUTE1137;

let OrientationInterpolator1138 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1138.DEF = "r_elbow_OI";
let IS1139 = browser.currentScene.createNode("IS");
let connect1140 = browser.currentScene.createNode("connect");
connect1140.nodeField = "key";
connect1140.protoField = "r_elbow_key";
IS1139YYY.connect = new X3D.MFNode();

IS1139ZZZ.connect[0] = connect1140;

let connect1141 = browser.currentScene.createNode("connect");
connect1141.nodeField = "keyValue";
connect1141.protoField = "r_elbow_keyValue";
IS1139ZZZ.connect[1] = connect1141;

let connect1142 = browser.currentScene.createNode("connect");
connect1142.nodeField = "value_changed";
connect1142.protoField = "r_elbow_changed";
IS1139ZZZ.connect[2] = connect1142;

iS = IS1139;

ProtoBody603ZZZ.children[174] = OrientationInterpolator1138;

let ROUTE1143 = browser.currentScene.createNode("ROUTE");
ROUTE1143.fromField = "fraction_changed";
ROUTE1143.fromNode = "BehaviorClock";
ROUTE1143.toField = "set_fraction";
ROUTE1143.toNode = "r_elbow_OI";
ProtoBody603ZZZ.children[175] = ROUTE1143;

let OrientationInterpolator1144 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1144.DEF = "r_eyeball_OI";
let IS1145 = browser.currentScene.createNode("IS");
let connect1146 = browser.currentScene.createNode("connect");
connect1146.nodeField = "key";
connect1146.protoField = "r_eyeball_key";
IS1145YYY.connect = new X3D.MFNode();

IS1145ZZZ.connect[0] = connect1146;

let connect1147 = browser.currentScene.createNode("connect");
connect1147.nodeField = "keyValue";
connect1147.protoField = "r_eyeball_keyValue";
IS1145ZZZ.connect[1] = connect1147;

let connect1148 = browser.currentScene.createNode("connect");
connect1148.nodeField = "value_changed";
connect1148.protoField = "r_eyeball_changed";
IS1145ZZZ.connect[2] = connect1148;

iS = IS1145;

ProtoBody603ZZZ.children[176] = OrientationInterpolator1144;

let ROUTE1149 = browser.currentScene.createNode("ROUTE");
ROUTE1149.fromField = "fraction_changed";
ROUTE1149.fromNode = "BehaviorClock";
ROUTE1149.toField = "set_fraction";
ROUTE1149.toNode = "r_eyeball_OI";
ProtoBody603ZZZ.children[177] = ROUTE1149;

let OrientationInterpolator1150 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1150.DEF = "r_eyeball_joint_OI";
let IS1151 = browser.currentScene.createNode("IS");
let connect1152 = browser.currentScene.createNode("connect");
connect1152.nodeField = "key";
connect1152.protoField = "r_eyeball_joint_key";
IS1151YYY.connect = new X3D.MFNode();

IS1151ZZZ.connect[0] = connect1152;

let connect1153 = browser.currentScene.createNode("connect");
connect1153.nodeField = "keyValue";
connect1153.protoField = "r_eyeball_joint_keyValue";
IS1151ZZZ.connect[1] = connect1153;

let connect1154 = browser.currentScene.createNode("connect");
connect1154.nodeField = "value_changed";
connect1154.protoField = "r_eyeball_joint_changed";
IS1151ZZZ.connect[2] = connect1154;

iS = IS1151;

ProtoBody603ZZZ.children[178] = OrientationInterpolator1150;

let ROUTE1155 = browser.currentScene.createNode("ROUTE");
ROUTE1155.fromField = "fraction_changed";
ROUTE1155.fromNode = "BehaviorClock";
ROUTE1155.toField = "set_fraction";
ROUTE1155.toNode = "r_eyeball_joint_OI";
ProtoBody603ZZZ.children[179] = ROUTE1155;

let OrientationInterpolator1156 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1156.DEF = "r_eyebrow_OI";
let IS1157 = browser.currentScene.createNode("IS");
let connect1158 = browser.currentScene.createNode("connect");
connect1158.nodeField = "key";
connect1158.protoField = "r_eyebrow_key";
IS1157YYY.connect = new X3D.MFNode();

IS1157ZZZ.connect[0] = connect1158;

let connect1159 = browser.currentScene.createNode("connect");
connect1159.nodeField = "keyValue";
connect1159.protoField = "r_eyebrow_keyValue";
IS1157ZZZ.connect[1] = connect1159;

let connect1160 = browser.currentScene.createNode("connect");
connect1160.nodeField = "value_changed";
connect1160.protoField = "r_eyebrow_changed";
IS1157ZZZ.connect[2] = connect1160;

iS = IS1157;

ProtoBody603ZZZ.children[180] = OrientationInterpolator1156;

let ROUTE1161 = browser.currentScene.createNode("ROUTE");
ROUTE1161.fromField = "fraction_changed";
ROUTE1161.fromNode = "BehaviorClock";
ROUTE1161.toField = "set_fraction";
ROUTE1161.toNode = "r_eyebrow_OI";
ProtoBody603ZZZ.children[181] = ROUTE1161;

let OrientationInterpolator1162 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1162.DEF = "r_eyebrow_joint_OI";
let IS1163 = browser.currentScene.createNode("IS");
let connect1164 = browser.currentScene.createNode("connect");
connect1164.nodeField = "key";
connect1164.protoField = "r_eyebrow_joint_key";
IS1163YYY.connect = new X3D.MFNode();

IS1163ZZZ.connect[0] = connect1164;

let connect1165 = browser.currentScene.createNode("connect");
connect1165.nodeField = "keyValue";
connect1165.protoField = "r_eyebrow_joint_keyValue";
IS1163ZZZ.connect[1] = connect1165;

let connect1166 = browser.currentScene.createNode("connect");
connect1166.nodeField = "value_changed";
connect1166.protoField = "r_eyebrow_joint_changed";
IS1163ZZZ.connect[2] = connect1166;

iS = IS1163;

ProtoBody603ZZZ.children[182] = OrientationInterpolator1162;

let ROUTE1167 = browser.currentScene.createNode("ROUTE");
ROUTE1167.fromField = "fraction_changed";
ROUTE1167.fromNode = "BehaviorClock";
ROUTE1167.toField = "set_fraction";
ROUTE1167.toNode = "r_eyebrow_joint_OI";
ProtoBody603ZZZ.children[183] = ROUTE1167;

let OrientationInterpolator1168 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1168.DEF = "r_eyelid_OI";
let IS1169 = browser.currentScene.createNode("IS");
let connect1170 = browser.currentScene.createNode("connect");
connect1170.nodeField = "key";
connect1170.protoField = "r_eyelid_key";
IS1169YYY.connect = new X3D.MFNode();

IS1169ZZZ.connect[0] = connect1170;

let connect1171 = browser.currentScene.createNode("connect");
connect1171.nodeField = "keyValue";
connect1171.protoField = "r_eyelid_keyValue";
IS1169ZZZ.connect[1] = connect1171;

let connect1172 = browser.currentScene.createNode("connect");
connect1172.nodeField = "value_changed";
connect1172.protoField = "r_eyelid_changed";
IS1169ZZZ.connect[2] = connect1172;

iS = IS1169;

ProtoBody603ZZZ.children[184] = OrientationInterpolator1168;

let ROUTE1173 = browser.currentScene.createNode("ROUTE");
ROUTE1173.fromField = "fraction_changed";
ROUTE1173.fromNode = "BehaviorClock";
ROUTE1173.toField = "set_fraction";
ROUTE1173.toNode = "r_eyelid_OI";
ProtoBody603ZZZ.children[185] = ROUTE1173;

let OrientationInterpolator1174 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1174.DEF = "r_eyelid_joint_OI";
let IS1175 = browser.currentScene.createNode("IS");
let connect1176 = browser.currentScene.createNode("connect");
connect1176.nodeField = "key";
connect1176.protoField = "r_eyelid_joint_key";
IS1175YYY.connect = new X3D.MFNode();

IS1175ZZZ.connect[0] = connect1176;

let connect1177 = browser.currentScene.createNode("connect");
connect1177.nodeField = "keyValue";
connect1177.protoField = "r_eyelid_joint_keyValue";
IS1175ZZZ.connect[1] = connect1177;

let connect1178 = browser.currentScene.createNode("connect");
connect1178.nodeField = "value_changed";
connect1178.protoField = "r_eyelid_joint_changed";
IS1175ZZZ.connect[2] = connect1178;

iS = IS1175;

ProtoBody603ZZZ.children[186] = OrientationInterpolator1174;

let ROUTE1179 = browser.currentScene.createNode("ROUTE");
ROUTE1179.fromField = "fraction_changed";
ROUTE1179.fromNode = "BehaviorClock";
ROUTE1179.toField = "set_fraction";
ROUTE1179.toNode = "r_eyelid_joint_OI";
ProtoBody603ZZZ.children[187] = ROUTE1179;

let OrientationInterpolator1180 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1180.DEF = "r_forearm_OI";
let IS1181 = browser.currentScene.createNode("IS");
let connect1182 = browser.currentScene.createNode("connect");
connect1182.nodeField = "key";
connect1182.protoField = "r_forearm_key";
IS1181YYY.connect = new X3D.MFNode();

IS1181ZZZ.connect[0] = connect1182;

let connect1183 = browser.currentScene.createNode("connect");
connect1183.nodeField = "keyValue";
connect1183.protoField = "r_forearm_keyValue";
IS1181ZZZ.connect[1] = connect1183;

let connect1184 = browser.currentScene.createNode("connect");
connect1184.nodeField = "value_changed";
connect1184.protoField = "r_forearm_changed";
IS1181ZZZ.connect[2] = connect1184;

iS = IS1181;

ProtoBody603ZZZ.children[188] = OrientationInterpolator1180;

let ROUTE1185 = browser.currentScene.createNode("ROUTE");
ROUTE1185.fromField = "fraction_changed";
ROUTE1185.fromNode = "BehaviorClock";
ROUTE1185.toField = "set_fraction";
ROUTE1185.toNode = "r_forearm_OI";
ProtoBody603ZZZ.children[189] = ROUTE1185;

let OrientationInterpolator1186 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1186.DEF = "r_forefoot_OI";
let IS1187 = browser.currentScene.createNode("IS");
let connect1188 = browser.currentScene.createNode("connect");
connect1188.nodeField = "key";
connect1188.protoField = "r_forefoot_key";
IS1187YYY.connect = new X3D.MFNode();

IS1187ZZZ.connect[0] = connect1188;

let connect1189 = browser.currentScene.createNode("connect");
connect1189.nodeField = "keyValue";
connect1189.protoField = "r_forefoot_keyValue";
IS1187ZZZ.connect[1] = connect1189;

let connect1190 = browser.currentScene.createNode("connect");
connect1190.nodeField = "value_changed";
connect1190.protoField = "r_forefoot_changed";
IS1187ZZZ.connect[2] = connect1190;

iS = IS1187;

ProtoBody603ZZZ.children[190] = OrientationInterpolator1186;

let ROUTE1191 = browser.currentScene.createNode("ROUTE");
ROUTE1191.fromField = "fraction_changed";
ROUTE1191.fromNode = "BehaviorClock";
ROUTE1191.toField = "set_fraction";
ROUTE1191.toNode = "r_forefoot_OI";
ProtoBody603ZZZ.children[191] = ROUTE1191;

let OrientationInterpolator1192 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1192.DEF = "r_hand_OI";
let IS1193 = browser.currentScene.createNode("IS");
let connect1194 = browser.currentScene.createNode("connect");
connect1194.nodeField = "key";
connect1194.protoField = "r_hand_key";
IS1193YYY.connect = new X3D.MFNode();

IS1193ZZZ.connect[0] = connect1194;

let connect1195 = browser.currentScene.createNode("connect");
connect1195.nodeField = "keyValue";
connect1195.protoField = "r_hand_keyValue";
IS1193ZZZ.connect[1] = connect1195;

let connect1196 = browser.currentScene.createNode("connect");
connect1196.nodeField = "value_changed";
connect1196.protoField = "r_hand_changed";
IS1193ZZZ.connect[2] = connect1196;

iS = IS1193;

ProtoBody603ZZZ.children[192] = OrientationInterpolator1192;

let ROUTE1197 = browser.currentScene.createNode("ROUTE");
ROUTE1197.fromField = "fraction_changed";
ROUTE1197.fromNode = "BehaviorClock";
ROUTE1197.toField = "set_fraction";
ROUTE1197.toNode = "r_hand_OI";
ProtoBody603ZZZ.children[193] = ROUTE1197;

let OrientationInterpolator1198 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1198.DEF = "r_hindfoot_OI";
let IS1199 = browser.currentScene.createNode("IS");
let connect1200 = browser.currentScene.createNode("connect");
connect1200.nodeField = "key";
connect1200.protoField = "r_hindfoot_key";
IS1199YYY.connect = new X3D.MFNode();

IS1199ZZZ.connect[0] = connect1200;

let connect1201 = browser.currentScene.createNode("connect");
connect1201.nodeField = "keyValue";
connect1201.protoField = "r_hindfoot_keyValue";
IS1199ZZZ.connect[1] = connect1201;

let connect1202 = browser.currentScene.createNode("connect");
connect1202.nodeField = "value_changed";
connect1202.protoField = "r_hindfoot_changed";
IS1199ZZZ.connect[2] = connect1202;

iS = IS1199;

ProtoBody603ZZZ.children[194] = OrientationInterpolator1198;

let ROUTE1203 = browser.currentScene.createNode("ROUTE");
ROUTE1203.fromField = "fraction_changed";
ROUTE1203.fromNode = "BehaviorClock";
ROUTE1203.toField = "set_fraction";
ROUTE1203.toNode = "r_hindfoot_OI";
ProtoBody603ZZZ.children[195] = ROUTE1203;

let OrientationInterpolator1204 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1204.DEF = "r_hip_OI";
let IS1205 = browser.currentScene.createNode("IS");
let connect1206 = browser.currentScene.createNode("connect");
connect1206.nodeField = "key";
connect1206.protoField = "r_hip_key";
IS1205YYY.connect = new X3D.MFNode();

IS1205ZZZ.connect[0] = connect1206;

let connect1207 = browser.currentScene.createNode("connect");
connect1207.nodeField = "keyValue";
connect1207.protoField = "r_hip_keyValue";
IS1205ZZZ.connect[1] = connect1207;

let connect1208 = browser.currentScene.createNode("connect");
connect1208.nodeField = "value_changed";
connect1208.protoField = "r_hip_changed";
IS1205ZZZ.connect[2] = connect1208;

iS = IS1205;

ProtoBody603ZZZ.children[196] = OrientationInterpolator1204;

let ROUTE1209 = browser.currentScene.createNode("ROUTE");
ROUTE1209.fromField = "fraction_changed";
ROUTE1209.fromNode = "BehaviorClock";
ROUTE1209.toField = "set_fraction";
ROUTE1209.toNode = "r_hip_OI";
ProtoBody603ZZZ.children[197] = ROUTE1209;

let OrientationInterpolator1210 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1210.DEF = "r_index0_OI";
let IS1211 = browser.currentScene.createNode("IS");
let connect1212 = browser.currentScene.createNode("connect");
connect1212.nodeField = "key";
connect1212.protoField = "r_index0_key";
IS1211YYY.connect = new X3D.MFNode();

IS1211ZZZ.connect[0] = connect1212;

let connect1213 = browser.currentScene.createNode("connect");
connect1213.nodeField = "keyValue";
connect1213.protoField = "r_index0_keyValue";
IS1211ZZZ.connect[1] = connect1213;

let connect1214 = browser.currentScene.createNode("connect");
connect1214.nodeField = "value_changed";
connect1214.protoField = "r_index0_changed";
IS1211ZZZ.connect[2] = connect1214;

iS = IS1211;

ProtoBody603ZZZ.children[198] = OrientationInterpolator1210;

let ROUTE1215 = browser.currentScene.createNode("ROUTE");
ROUTE1215.fromField = "fraction_changed";
ROUTE1215.fromNode = "BehaviorClock";
ROUTE1215.toField = "set_fraction";
ROUTE1215.toNode = "r_index0_OI";
ProtoBody603ZZZ.children[199] = ROUTE1215;

let OrientationInterpolator1216 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1216.DEF = "r_index1_OI";
let IS1217 = browser.currentScene.createNode("IS");
let connect1218 = browser.currentScene.createNode("connect");
connect1218.nodeField = "key";
connect1218.protoField = "r_index1_key";
IS1217YYY.connect = new X3D.MFNode();

IS1217ZZZ.connect[0] = connect1218;

let connect1219 = browser.currentScene.createNode("connect");
connect1219.nodeField = "keyValue";
connect1219.protoField = "r_index1_keyValue";
IS1217ZZZ.connect[1] = connect1219;

let connect1220 = browser.currentScene.createNode("connect");
connect1220.nodeField = "value_changed";
connect1220.protoField = "r_index1_changed";
IS1217ZZZ.connect[2] = connect1220;

iS = IS1217;

ProtoBody603ZZZ.children[200] = OrientationInterpolator1216;

let ROUTE1221 = browser.currentScene.createNode("ROUTE");
ROUTE1221.fromField = "fraction_changed";
ROUTE1221.fromNode = "BehaviorClock";
ROUTE1221.toField = "set_fraction";
ROUTE1221.toNode = "r_index1_OI";
ProtoBody603ZZZ.children[201] = ROUTE1221;

let OrientationInterpolator1222 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1222.DEF = "r_index2_OI";
let IS1223 = browser.currentScene.createNode("IS");
let connect1224 = browser.currentScene.createNode("connect");
connect1224.nodeField = "key";
connect1224.protoField = "r_index2_key";
IS1223YYY.connect = new X3D.MFNode();

IS1223ZZZ.connect[0] = connect1224;

let connect1225 = browser.currentScene.createNode("connect");
connect1225.nodeField = "keyValue";
connect1225.protoField = "r_index2_keyValue";
IS1223ZZZ.connect[1] = connect1225;

let connect1226 = browser.currentScene.createNode("connect");
connect1226.nodeField = "value_changed";
connect1226.protoField = "r_index2_changed";
IS1223ZZZ.connect[2] = connect1226;

iS = IS1223;

ProtoBody603ZZZ.children[202] = OrientationInterpolator1222;

let ROUTE1227 = browser.currentScene.createNode("ROUTE");
ROUTE1227.fromField = "fraction_changed";
ROUTE1227.fromNode = "BehaviorClock";
ROUTE1227.toField = "set_fraction";
ROUTE1227.toNode = "r_index2_OI";
ProtoBody603ZZZ.children[203] = ROUTE1227;

let OrientationInterpolator1228 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1228.DEF = "r_index3_OI";
let IS1229 = browser.currentScene.createNode("IS");
let connect1230 = browser.currentScene.createNode("connect");
connect1230.nodeField = "key";
connect1230.protoField = "r_index3_key";
IS1229YYY.connect = new X3D.MFNode();

IS1229ZZZ.connect[0] = connect1230;

let connect1231 = browser.currentScene.createNode("connect");
connect1231.nodeField = "keyValue";
connect1231.protoField = "r_index3_keyValue";
IS1229ZZZ.connect[1] = connect1231;

let connect1232 = browser.currentScene.createNode("connect");
connect1232.nodeField = "value_changed";
connect1232.protoField = "r_index3_changed";
IS1229ZZZ.connect[2] = connect1232;

iS = IS1229;

ProtoBody603ZZZ.children[204] = OrientationInterpolator1228;

let ROUTE1233 = browser.currentScene.createNode("ROUTE");
ROUTE1233.fromField = "fraction_changed";
ROUTE1233.fromNode = "BehaviorClock";
ROUTE1233.toField = "set_fraction";
ROUTE1233.toNode = "r_index3_OI";
ProtoBody603ZZZ.children[205] = ROUTE1233;

let OrientationInterpolator1234 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1234.DEF = "r_index_distal_OI";
let IS1235 = browser.currentScene.createNode("IS");
let connect1236 = browser.currentScene.createNode("connect");
connect1236.nodeField = "key";
connect1236.protoField = "r_index_distal_key";
IS1235YYY.connect = new X3D.MFNode();

IS1235ZZZ.connect[0] = connect1236;

let connect1237 = browser.currentScene.createNode("connect");
connect1237.nodeField = "keyValue";
connect1237.protoField = "r_index_distal_keyValue";
IS1235ZZZ.connect[1] = connect1237;

let connect1238 = browser.currentScene.createNode("connect");
connect1238.nodeField = "value_changed";
connect1238.protoField = "r_index_distal_changed";
IS1235ZZZ.connect[2] = connect1238;

iS = IS1235;

ProtoBody603ZZZ.children[206] = OrientationInterpolator1234;

let ROUTE1239 = browser.currentScene.createNode("ROUTE");
ROUTE1239.fromField = "fraction_changed";
ROUTE1239.fromNode = "BehaviorClock";
ROUTE1239.toField = "set_fraction";
ROUTE1239.toNode = "r_index_distal_OI";
ProtoBody603ZZZ.children[207] = ROUTE1239;

let OrientationInterpolator1240 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1240.DEF = "r_index_metacarpal_OI";
let IS1241 = browser.currentScene.createNode("IS");
let connect1242 = browser.currentScene.createNode("connect");
connect1242.nodeField = "key";
connect1242.protoField = "r_index_metacarpal_key";
IS1241YYY.connect = new X3D.MFNode();

IS1241ZZZ.connect[0] = connect1242;

let connect1243 = browser.currentScene.createNode("connect");
connect1243.nodeField = "keyValue";
connect1243.protoField = "r_index_metacarpal_keyValue";
IS1241ZZZ.connect[1] = connect1243;

let connect1244 = browser.currentScene.createNode("connect");
connect1244.nodeField = "value_changed";
connect1244.protoField = "r_index_metacarpal_changed";
IS1241ZZZ.connect[2] = connect1244;

iS = IS1241;

ProtoBody603ZZZ.children[208] = OrientationInterpolator1240;

let ROUTE1245 = browser.currentScene.createNode("ROUTE");
ROUTE1245.fromField = "fraction_changed";
ROUTE1245.fromNode = "BehaviorClock";
ROUTE1245.toField = "set_fraction";
ROUTE1245.toNode = "r_index_metacarpal_OI";
ProtoBody603ZZZ.children[209] = ROUTE1245;

let OrientationInterpolator1246 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1246.DEF = "r_index_middle_OI";
let IS1247 = browser.currentScene.createNode("IS");
let connect1248 = browser.currentScene.createNode("connect");
connect1248.nodeField = "key";
connect1248.protoField = "r_index_middle_key";
IS1247YYY.connect = new X3D.MFNode();

IS1247ZZZ.connect[0] = connect1248;

let connect1249 = browser.currentScene.createNode("connect");
connect1249.nodeField = "keyValue";
connect1249.protoField = "r_index_middle_keyValue";
IS1247ZZZ.connect[1] = connect1249;

let connect1250 = browser.currentScene.createNode("connect");
connect1250.nodeField = "value_changed";
connect1250.protoField = "r_index_middle_changed";
IS1247ZZZ.connect[2] = connect1250;

iS = IS1247;

ProtoBody603ZZZ.children[210] = OrientationInterpolator1246;

let ROUTE1251 = browser.currentScene.createNode("ROUTE");
ROUTE1251.fromField = "fraction_changed";
ROUTE1251.fromNode = "BehaviorClock";
ROUTE1251.toField = "set_fraction";
ROUTE1251.toNode = "r_index_middle_OI";
ProtoBody603ZZZ.children[211] = ROUTE1251;

let OrientationInterpolator1252 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1252.DEF = "r_index_proximal_OI";
let IS1253 = browser.currentScene.createNode("IS");
let connect1254 = browser.currentScene.createNode("connect");
connect1254.nodeField = "key";
connect1254.protoField = "r_index_proximal_key";
IS1253YYY.connect = new X3D.MFNode();

IS1253ZZZ.connect[0] = connect1254;

let connect1255 = browser.currentScene.createNode("connect");
connect1255.nodeField = "keyValue";
connect1255.protoField = "r_index_proximal_keyValue";
IS1253ZZZ.connect[1] = connect1255;

let connect1256 = browser.currentScene.createNode("connect");
connect1256.nodeField = "value_changed";
connect1256.protoField = "r_index_proximal_changed";
IS1253ZZZ.connect[2] = connect1256;

iS = IS1253;

ProtoBody603ZZZ.children[212] = OrientationInterpolator1252;

let ROUTE1257 = browser.currentScene.createNode("ROUTE");
ROUTE1257.fromField = "fraction_changed";
ROUTE1257.fromNode = "BehaviorClock";
ROUTE1257.toField = "set_fraction";
ROUTE1257.toNode = "r_index_proximal_OI";
ProtoBody603ZZZ.children[213] = ROUTE1257;

let OrientationInterpolator1258 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1258.DEF = "r_knee_OI";
let IS1259 = browser.currentScene.createNode("IS");
let connect1260 = browser.currentScene.createNode("connect");
connect1260.nodeField = "key";
connect1260.protoField = "r_knee_key";
IS1259YYY.connect = new X3D.MFNode();

IS1259ZZZ.connect[0] = connect1260;

let connect1261 = browser.currentScene.createNode("connect");
connect1261.nodeField = "keyValue";
connect1261.protoField = "r_knee_keyValue";
IS1259ZZZ.connect[1] = connect1261;

let connect1262 = browser.currentScene.createNode("connect");
connect1262.nodeField = "value_changed";
connect1262.protoField = "r_knee_changed";
IS1259ZZZ.connect[2] = connect1262;

iS = IS1259;

ProtoBody603ZZZ.children[214] = OrientationInterpolator1258;

let ROUTE1263 = browser.currentScene.createNode("ROUTE");
ROUTE1263.fromField = "fraction_changed";
ROUTE1263.fromNode = "BehaviorClock";
ROUTE1263.toField = "set_fraction";
ROUTE1263.toNode = "r_knee_OI";
ProtoBody603ZZZ.children[215] = ROUTE1263;

let OrientationInterpolator1264 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1264.DEF = "r_metatarsal_OI";
let IS1265 = browser.currentScene.createNode("IS");
let connect1266 = browser.currentScene.createNode("connect");
connect1266.nodeField = "key";
connect1266.protoField = "r_metatarsal_key";
IS1265YYY.connect = new X3D.MFNode();

IS1265ZZZ.connect[0] = connect1266;

let connect1267 = browser.currentScene.createNode("connect");
connect1267.nodeField = "keyValue";
connect1267.protoField = "r_metatarsal_keyValue";
IS1265ZZZ.connect[1] = connect1267;

let connect1268 = browser.currentScene.createNode("connect");
connect1268.nodeField = "value_changed";
connect1268.protoField = "r_metatarsal_changed";
IS1265ZZZ.connect[2] = connect1268;

iS = IS1265;

ProtoBody603ZZZ.children[216] = OrientationInterpolator1264;

let ROUTE1269 = browser.currentScene.createNode("ROUTE");
ROUTE1269.fromField = "fraction_changed";
ROUTE1269.fromNode = "BehaviorClock";
ROUTE1269.toField = "set_fraction";
ROUTE1269.toNode = "r_metatarsal_OI";
ProtoBody603ZZZ.children[217] = ROUTE1269;

let OrientationInterpolator1270 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1270.DEF = "r_middistal_OI";
let IS1271 = browser.currentScene.createNode("IS");
let connect1272 = browser.currentScene.createNode("connect");
connect1272.nodeField = "key";
connect1272.protoField = "r_middistal_key";
IS1271YYY.connect = new X3D.MFNode();

IS1271ZZZ.connect[0] = connect1272;

let connect1273 = browser.currentScene.createNode("connect");
connect1273.nodeField = "keyValue";
connect1273.protoField = "r_middistal_keyValue";
IS1271ZZZ.connect[1] = connect1273;

let connect1274 = browser.currentScene.createNode("connect");
connect1274.nodeField = "value_changed";
connect1274.protoField = "r_middistal_changed";
IS1271ZZZ.connect[2] = connect1274;

iS = IS1271;

ProtoBody603ZZZ.children[218] = OrientationInterpolator1270;

let ROUTE1275 = browser.currentScene.createNode("ROUTE");
ROUTE1275.fromField = "fraction_changed";
ROUTE1275.fromNode = "BehaviorClock";
ROUTE1275.toField = "set_fraction";
ROUTE1275.toNode = "r_middistal_OI";
ProtoBody603ZZZ.children[219] = ROUTE1275;

let OrientationInterpolator1276 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1276.DEF = "r_middle0_OI";
let IS1277 = browser.currentScene.createNode("IS");
let connect1278 = browser.currentScene.createNode("connect");
connect1278.nodeField = "key";
connect1278.protoField = "r_middle0_key";
IS1277YYY.connect = new X3D.MFNode();

IS1277ZZZ.connect[0] = connect1278;

let connect1279 = browser.currentScene.createNode("connect");
connect1279.nodeField = "keyValue";
connect1279.protoField = "r_middle0_keyValue";
IS1277ZZZ.connect[1] = connect1279;

let connect1280 = browser.currentScene.createNode("connect");
connect1280.nodeField = "value_changed";
connect1280.protoField = "r_middle0_changed";
IS1277ZZZ.connect[2] = connect1280;

iS = IS1277;

ProtoBody603ZZZ.children[220] = OrientationInterpolator1276;

let ROUTE1281 = browser.currentScene.createNode("ROUTE");
ROUTE1281.fromField = "fraction_changed";
ROUTE1281.fromNode = "BehaviorClock";
ROUTE1281.toField = "set_fraction";
ROUTE1281.toNode = "r_middle0_OI";
ProtoBody603ZZZ.children[221] = ROUTE1281;

let OrientationInterpolator1282 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1282.DEF = "r_middle1_OI";
let IS1283 = browser.currentScene.createNode("IS");
let connect1284 = browser.currentScene.createNode("connect");
connect1284.nodeField = "key";
connect1284.protoField = "r_middle1_key";
IS1283YYY.connect = new X3D.MFNode();

IS1283ZZZ.connect[0] = connect1284;

let connect1285 = browser.currentScene.createNode("connect");
connect1285.nodeField = "keyValue";
connect1285.protoField = "r_middle1_keyValue";
IS1283ZZZ.connect[1] = connect1285;

let connect1286 = browser.currentScene.createNode("connect");
connect1286.nodeField = "value_changed";
connect1286.protoField = "r_middle1_changed";
IS1283ZZZ.connect[2] = connect1286;

iS = IS1283;

ProtoBody603ZZZ.children[222] = OrientationInterpolator1282;

let ROUTE1287 = browser.currentScene.createNode("ROUTE");
ROUTE1287.fromField = "fraction_changed";
ROUTE1287.fromNode = "BehaviorClock";
ROUTE1287.toField = "set_fraction";
ROUTE1287.toNode = "r_middle1_OI";
ProtoBody603ZZZ.children[223] = ROUTE1287;

let OrientationInterpolator1288 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1288.DEF = "r_middle2_OI";
let IS1289 = browser.currentScene.createNode("IS");
let connect1290 = browser.currentScene.createNode("connect");
connect1290.nodeField = "key";
connect1290.protoField = "r_middle2_key";
IS1289YYY.connect = new X3D.MFNode();

IS1289ZZZ.connect[0] = connect1290;

let connect1291 = browser.currentScene.createNode("connect");
connect1291.nodeField = "keyValue";
connect1291.protoField = "r_middle2_keyValue";
IS1289ZZZ.connect[1] = connect1291;

let connect1292 = browser.currentScene.createNode("connect");
connect1292.nodeField = "value_changed";
connect1292.protoField = "r_middle2_changed";
IS1289ZZZ.connect[2] = connect1292;

iS = IS1289;

ProtoBody603ZZZ.children[224] = OrientationInterpolator1288;

let ROUTE1293 = browser.currentScene.createNode("ROUTE");
ROUTE1293.fromField = "fraction_changed";
ROUTE1293.fromNode = "BehaviorClock";
ROUTE1293.toField = "set_fraction";
ROUTE1293.toNode = "r_middle2_OI";
ProtoBody603ZZZ.children[225] = ROUTE1293;

let OrientationInterpolator1294 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1294.DEF = "r_middle3_OI";
let IS1295 = browser.currentScene.createNode("IS");
let connect1296 = browser.currentScene.createNode("connect");
connect1296.nodeField = "key";
connect1296.protoField = "r_middle3_key";
IS1295YYY.connect = new X3D.MFNode();

IS1295ZZZ.connect[0] = connect1296;

let connect1297 = browser.currentScene.createNode("connect");
connect1297.nodeField = "keyValue";
connect1297.protoField = "r_middle3_keyValue";
IS1295ZZZ.connect[1] = connect1297;

let connect1298 = browser.currentScene.createNode("connect");
connect1298.nodeField = "value_changed";
connect1298.protoField = "r_middle3_changed";
IS1295ZZZ.connect[2] = connect1298;

iS = IS1295;

ProtoBody603ZZZ.children[226] = OrientationInterpolator1294;

let ROUTE1299 = browser.currentScene.createNode("ROUTE");
ROUTE1299.fromField = "fraction_changed";
ROUTE1299.fromNode = "BehaviorClock";
ROUTE1299.toField = "set_fraction";
ROUTE1299.toNode = "r_middle3_OI";
ProtoBody603ZZZ.children[227] = ROUTE1299;

let OrientationInterpolator1300 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1300.DEF = "r_middle_distal_OI";
let IS1301 = browser.currentScene.createNode("IS");
let connect1302 = browser.currentScene.createNode("connect");
connect1302.nodeField = "key";
connect1302.protoField = "r_middle_distal_key";
IS1301YYY.connect = new X3D.MFNode();

IS1301ZZZ.connect[0] = connect1302;

let connect1303 = browser.currentScene.createNode("connect");
connect1303.nodeField = "keyValue";
connect1303.protoField = "r_middle_distal_keyValue";
IS1301ZZZ.connect[1] = connect1303;

let connect1304 = browser.currentScene.createNode("connect");
connect1304.nodeField = "value_changed";
connect1304.protoField = "r_middle_distal_changed";
IS1301ZZZ.connect[2] = connect1304;

iS = IS1301;

ProtoBody603ZZZ.children[228] = OrientationInterpolator1300;

let ROUTE1305 = browser.currentScene.createNode("ROUTE");
ROUTE1305.fromField = "fraction_changed";
ROUTE1305.fromNode = "BehaviorClock";
ROUTE1305.toField = "set_fraction";
ROUTE1305.toNode = "r_middle_distal_OI";
ProtoBody603ZZZ.children[229] = ROUTE1305;

let OrientationInterpolator1306 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1306.DEF = "r_middle_metacarpal_OI";
let IS1307 = browser.currentScene.createNode("IS");
let connect1308 = browser.currentScene.createNode("connect");
connect1308.nodeField = "key";
connect1308.protoField = "r_middle_metacarpal_key";
IS1307YYY.connect = new X3D.MFNode();

IS1307ZZZ.connect[0] = connect1308;

let connect1309 = browser.currentScene.createNode("connect");
connect1309.nodeField = "keyValue";
connect1309.protoField = "r_middle_metacarpal_keyValue";
IS1307ZZZ.connect[1] = connect1309;

let connect1310 = browser.currentScene.createNode("connect");
connect1310.nodeField = "value_changed";
connect1310.protoField = "r_middle_metacarpal_changed";
IS1307ZZZ.connect[2] = connect1310;

iS = IS1307;

ProtoBody603ZZZ.children[230] = OrientationInterpolator1306;

let ROUTE1311 = browser.currentScene.createNode("ROUTE");
ROUTE1311.fromField = "fraction_changed";
ROUTE1311.fromNode = "BehaviorClock";
ROUTE1311.toField = "set_fraction";
ROUTE1311.toNode = "r_middle_metacarpal_OI";
ProtoBody603ZZZ.children[231] = ROUTE1311;

let OrientationInterpolator1312 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1312.DEF = "r_middle_middle_OI";
let IS1313 = browser.currentScene.createNode("IS");
let connect1314 = browser.currentScene.createNode("connect");
connect1314.nodeField = "key";
connect1314.protoField = "r_middle_middle_key";
IS1313YYY.connect = new X3D.MFNode();

IS1313ZZZ.connect[0] = connect1314;

let connect1315 = browser.currentScene.createNode("connect");
connect1315.nodeField = "keyValue";
connect1315.protoField = "r_middle_middle_keyValue";
IS1313ZZZ.connect[1] = connect1315;

let connect1316 = browser.currentScene.createNode("connect");
connect1316.nodeField = "value_changed";
connect1316.protoField = "r_middle_middle_changed";
IS1313ZZZ.connect[2] = connect1316;

iS = IS1313;

ProtoBody603ZZZ.children[232] = OrientationInterpolator1312;

let ROUTE1317 = browser.currentScene.createNode("ROUTE");
ROUTE1317.fromField = "fraction_changed";
ROUTE1317.fromNode = "BehaviorClock";
ROUTE1317.toField = "set_fraction";
ROUTE1317.toNode = "r_middle_middle_OI";
ProtoBody603ZZZ.children[233] = ROUTE1317;

let OrientationInterpolator1318 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1318.DEF = "r_middle_proximal_OI";
let IS1319 = browser.currentScene.createNode("IS");
let connect1320 = browser.currentScene.createNode("connect");
connect1320.nodeField = "key";
connect1320.protoField = "r_middle_proximal_key";
IS1319YYY.connect = new X3D.MFNode();

IS1319ZZZ.connect[0] = connect1320;

let connect1321 = browser.currentScene.createNode("connect");
connect1321.nodeField = "keyValue";
connect1321.protoField = "r_middle_proximal_keyValue";
IS1319ZZZ.connect[1] = connect1321;

let connect1322 = browser.currentScene.createNode("connect");
connect1322.nodeField = "value_changed";
connect1322.protoField = "r_middle_proximal_changed";
IS1319ZZZ.connect[2] = connect1322;

iS = IS1319;

ProtoBody603ZZZ.children[234] = OrientationInterpolator1318;

let ROUTE1323 = browser.currentScene.createNode("ROUTE");
ROUTE1323.fromField = "fraction_changed";
ROUTE1323.fromNode = "BehaviorClock";
ROUTE1323.toField = "set_fraction";
ROUTE1323.toNode = "r_middle_proximal_OI";
ProtoBody603ZZZ.children[235] = ROUTE1323;

let OrientationInterpolator1324 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1324.DEF = "r_midproximal_OI";
let IS1325 = browser.currentScene.createNode("IS");
let connect1326 = browser.currentScene.createNode("connect");
connect1326.nodeField = "key";
connect1326.protoField = "r_midproximal_key";
IS1325YYY.connect = new X3D.MFNode();

IS1325ZZZ.connect[0] = connect1326;

let connect1327 = browser.currentScene.createNode("connect");
connect1327.nodeField = "keyValue";
connect1327.protoField = "r_midproximal_keyValue";
IS1325ZZZ.connect[1] = connect1327;

let connect1328 = browser.currentScene.createNode("connect");
connect1328.nodeField = "value_changed";
connect1328.protoField = "r_midproximal_changed";
IS1325ZZZ.connect[2] = connect1328;

iS = IS1325;

ProtoBody603ZZZ.children[236] = OrientationInterpolator1324;

let ROUTE1329 = browser.currentScene.createNode("ROUTE");
ROUTE1329.fromField = "fraction_changed";
ROUTE1329.fromNode = "BehaviorClock";
ROUTE1329.toField = "set_fraction";
ROUTE1329.toNode = "r_midproximal_OI";
ProtoBody603ZZZ.children[237] = ROUTE1329;

let OrientationInterpolator1330 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1330.DEF = "r_midtarsal_OI";
let IS1331 = browser.currentScene.createNode("IS");
let connect1332 = browser.currentScene.createNode("connect");
connect1332.nodeField = "key";
connect1332.protoField = "r_midtarsal_key";
IS1331YYY.connect = new X3D.MFNode();

IS1331ZZZ.connect[0] = connect1332;

let connect1333 = browser.currentScene.createNode("connect");
connect1333.nodeField = "keyValue";
connect1333.protoField = "r_midtarsal_keyValue";
IS1331ZZZ.connect[1] = connect1333;

let connect1334 = browser.currentScene.createNode("connect");
connect1334.nodeField = "value_changed";
connect1334.protoField = "r_midtarsal_changed";
IS1331ZZZ.connect[2] = connect1334;

iS = IS1331;

ProtoBody603ZZZ.children[238] = OrientationInterpolator1330;

let ROUTE1335 = browser.currentScene.createNode("ROUTE");
ROUTE1335.fromField = "fraction_changed";
ROUTE1335.fromNode = "BehaviorClock";
ROUTE1335.toField = "set_fraction";
ROUTE1335.toNode = "r_midtarsal_OI";
ProtoBody603ZZZ.children[239] = ROUTE1335;

let OrientationInterpolator1336 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1336.DEF = "r_pinky0_OI";
let IS1337 = browser.currentScene.createNode("IS");
let connect1338 = browser.currentScene.createNode("connect");
connect1338.nodeField = "key";
connect1338.protoField = "r_pinky0_key";
IS1337YYY.connect = new X3D.MFNode();

IS1337ZZZ.connect[0] = connect1338;

let connect1339 = browser.currentScene.createNode("connect");
connect1339.nodeField = "keyValue";
connect1339.protoField = "r_pinky0_keyValue";
IS1337ZZZ.connect[1] = connect1339;

let connect1340 = browser.currentScene.createNode("connect");
connect1340.nodeField = "value_changed";
connect1340.protoField = "r_pinky0_changed";
IS1337ZZZ.connect[2] = connect1340;

iS = IS1337;

ProtoBody603ZZZ.children[240] = OrientationInterpolator1336;

let ROUTE1341 = browser.currentScene.createNode("ROUTE");
ROUTE1341.fromField = "fraction_changed";
ROUTE1341.fromNode = "BehaviorClock";
ROUTE1341.toField = "set_fraction";
ROUTE1341.toNode = "r_pinky0_OI";
ProtoBody603ZZZ.children[241] = ROUTE1341;

let OrientationInterpolator1342 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1342.DEF = "r_pinky1_OI";
let IS1343 = browser.currentScene.createNode("IS");
let connect1344 = browser.currentScene.createNode("connect");
connect1344.nodeField = "key";
connect1344.protoField = "r_pinky1_key";
IS1343YYY.connect = new X3D.MFNode();

IS1343ZZZ.connect[0] = connect1344;

let connect1345 = browser.currentScene.createNode("connect");
connect1345.nodeField = "keyValue";
connect1345.protoField = "r_pinky1_keyValue";
IS1343ZZZ.connect[1] = connect1345;

let connect1346 = browser.currentScene.createNode("connect");
connect1346.nodeField = "value_changed";
connect1346.protoField = "r_pinky1_changed";
IS1343ZZZ.connect[2] = connect1346;

iS = IS1343;

ProtoBody603ZZZ.children[242] = OrientationInterpolator1342;

let ROUTE1347 = browser.currentScene.createNode("ROUTE");
ROUTE1347.fromField = "fraction_changed";
ROUTE1347.fromNode = "BehaviorClock";
ROUTE1347.toField = "set_fraction";
ROUTE1347.toNode = "r_pinky1_OI";
ProtoBody603ZZZ.children[243] = ROUTE1347;

let OrientationInterpolator1348 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1348.DEF = "r_pinky2_OI";
let IS1349 = browser.currentScene.createNode("IS");
let connect1350 = browser.currentScene.createNode("connect");
connect1350.nodeField = "key";
connect1350.protoField = "r_pinky2_key";
IS1349YYY.connect = new X3D.MFNode();

IS1349ZZZ.connect[0] = connect1350;

let connect1351 = browser.currentScene.createNode("connect");
connect1351.nodeField = "keyValue";
connect1351.protoField = "r_pinky2_keyValue";
IS1349ZZZ.connect[1] = connect1351;

let connect1352 = browser.currentScene.createNode("connect");
connect1352.nodeField = "value_changed";
connect1352.protoField = "r_pinky2_changed";
IS1349ZZZ.connect[2] = connect1352;

iS = IS1349;

ProtoBody603ZZZ.children[244] = OrientationInterpolator1348;

let ROUTE1353 = browser.currentScene.createNode("ROUTE");
ROUTE1353.fromField = "fraction_changed";
ROUTE1353.fromNode = "BehaviorClock";
ROUTE1353.toField = "set_fraction";
ROUTE1353.toNode = "r_pinky2_OI";
ProtoBody603ZZZ.children[245] = ROUTE1353;

let OrientationInterpolator1354 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1354.DEF = "r_pinky3_OI";
let IS1355 = browser.currentScene.createNode("IS");
let connect1356 = browser.currentScene.createNode("connect");
connect1356.nodeField = "key";
connect1356.protoField = "r_pinky3_key";
IS1355YYY.connect = new X3D.MFNode();

IS1355ZZZ.connect[0] = connect1356;

let connect1357 = browser.currentScene.createNode("connect");
connect1357.nodeField = "keyValue";
connect1357.protoField = "r_pinky3_keyValue";
IS1355ZZZ.connect[1] = connect1357;

let connect1358 = browser.currentScene.createNode("connect");
connect1358.nodeField = "value_changed";
connect1358.protoField = "r_pinky3_changed";
IS1355ZZZ.connect[2] = connect1358;

iS = IS1355;

ProtoBody603ZZZ.children[246] = OrientationInterpolator1354;

let ROUTE1359 = browser.currentScene.createNode("ROUTE");
ROUTE1359.fromField = "fraction_changed";
ROUTE1359.fromNode = "BehaviorClock";
ROUTE1359.toField = "set_fraction";
ROUTE1359.toNode = "r_pinky3_OI";
ProtoBody603ZZZ.children[247] = ROUTE1359;

let OrientationInterpolator1360 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1360.DEF = "r_pinky_distal_OI";
let IS1361 = browser.currentScene.createNode("IS");
let connect1362 = browser.currentScene.createNode("connect");
connect1362.nodeField = "key";
connect1362.protoField = "r_pinky_distal_key";
IS1361YYY.connect = new X3D.MFNode();

IS1361ZZZ.connect[0] = connect1362;

let connect1363 = browser.currentScene.createNode("connect");
connect1363.nodeField = "keyValue";
connect1363.protoField = "r_pinky_distal_keyValue";
IS1361ZZZ.connect[1] = connect1363;

let connect1364 = browser.currentScene.createNode("connect");
connect1364.nodeField = "value_changed";
connect1364.protoField = "r_pinky_distal_changed";
IS1361ZZZ.connect[2] = connect1364;

iS = IS1361;

ProtoBody603ZZZ.children[248] = OrientationInterpolator1360;

let ROUTE1365 = browser.currentScene.createNode("ROUTE");
ROUTE1365.fromField = "fraction_changed";
ROUTE1365.fromNode = "BehaviorClock";
ROUTE1365.toField = "set_fraction";
ROUTE1365.toNode = "r_pinky_distal_OI";
ProtoBody603ZZZ.children[249] = ROUTE1365;

let OrientationInterpolator1366 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1366.DEF = "r_pinky_metacarpal_OI";
let IS1367 = browser.currentScene.createNode("IS");
let connect1368 = browser.currentScene.createNode("connect");
connect1368.nodeField = "key";
connect1368.protoField = "r_pinky_metacarpal_key";
IS1367YYY.connect = new X3D.MFNode();

IS1367ZZZ.connect[0] = connect1368;

let connect1369 = browser.currentScene.createNode("connect");
connect1369.nodeField = "keyValue";
connect1369.protoField = "r_pinky_metacarpal_keyValue";
IS1367ZZZ.connect[1] = connect1369;

let connect1370 = browser.currentScene.createNode("connect");
connect1370.nodeField = "value_changed";
connect1370.protoField = "r_pinky_metacarpal_changed";
IS1367ZZZ.connect[2] = connect1370;

iS = IS1367;

ProtoBody603ZZZ.children[250] = OrientationInterpolator1366;

let ROUTE1371 = browser.currentScene.createNode("ROUTE");
ROUTE1371.fromField = "fraction_changed";
ROUTE1371.fromNode = "BehaviorClock";
ROUTE1371.toField = "set_fraction";
ROUTE1371.toNode = "r_pinky_metacarpal_OI";
ProtoBody603ZZZ.children[251] = ROUTE1371;

let OrientationInterpolator1372 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1372.DEF = "r_pinky_middle_OI";
let IS1373 = browser.currentScene.createNode("IS");
let connect1374 = browser.currentScene.createNode("connect");
connect1374.nodeField = "key";
connect1374.protoField = "r_pinky_middle_key";
IS1373YYY.connect = new X3D.MFNode();

IS1373ZZZ.connect[0] = connect1374;

let connect1375 = browser.currentScene.createNode("connect");
connect1375.nodeField = "keyValue";
connect1375.protoField = "r_pinky_middle_keyValue";
IS1373ZZZ.connect[1] = connect1375;

let connect1376 = browser.currentScene.createNode("connect");
connect1376.nodeField = "value_changed";
connect1376.protoField = "r_pinky_middle_changed";
IS1373ZZZ.connect[2] = connect1376;

iS = IS1373;

ProtoBody603ZZZ.children[252] = OrientationInterpolator1372;

let ROUTE1377 = browser.currentScene.createNode("ROUTE");
ROUTE1377.fromField = "fraction_changed";
ROUTE1377.fromNode = "BehaviorClock";
ROUTE1377.toField = "set_fraction";
ROUTE1377.toNode = "r_pinky_middle_OI";
ProtoBody603ZZZ.children[253] = ROUTE1377;

let OrientationInterpolator1378 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1378.DEF = "r_pinky_proximal_OI";
let IS1379 = browser.currentScene.createNode("IS");
let connect1380 = browser.currentScene.createNode("connect");
connect1380.nodeField = "key";
connect1380.protoField = "r_pinky_proximal_key";
IS1379YYY.connect = new X3D.MFNode();

IS1379ZZZ.connect[0] = connect1380;

let connect1381 = browser.currentScene.createNode("connect");
connect1381.nodeField = "keyValue";
connect1381.protoField = "r_pinky_proximal_keyValue";
IS1379ZZZ.connect[1] = connect1381;

let connect1382 = browser.currentScene.createNode("connect");
connect1382.nodeField = "value_changed";
connect1382.protoField = "r_pinky_proximal_changed";
IS1379ZZZ.connect[2] = connect1382;

iS = IS1379;

ProtoBody603ZZZ.children[254] = OrientationInterpolator1378;

let ROUTE1383 = browser.currentScene.createNode("ROUTE");
ROUTE1383.fromField = "fraction_changed";
ROUTE1383.fromNode = "BehaviorClock";
ROUTE1383.toField = "set_fraction";
ROUTE1383.toNode = "r_pinky_proximal_OI";
ProtoBody603ZZZ.children[255] = ROUTE1383;

let OrientationInterpolator1384 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1384.DEF = "r_ring0_OI";
let IS1385 = browser.currentScene.createNode("IS");
let connect1386 = browser.currentScene.createNode("connect");
connect1386.nodeField = "key";
connect1386.protoField = "r_ring0_key";
IS1385YYY.connect = new X3D.MFNode();

IS1385ZZZ.connect[0] = connect1386;

let connect1387 = browser.currentScene.createNode("connect");
connect1387.nodeField = "keyValue";
connect1387.protoField = "r_ring0_keyValue";
IS1385ZZZ.connect[1] = connect1387;

let connect1388 = browser.currentScene.createNode("connect");
connect1388.nodeField = "value_changed";
connect1388.protoField = "r_ring0_changed";
IS1385ZZZ.connect[2] = connect1388;

iS = IS1385;

ProtoBody603ZZZ.children[256] = OrientationInterpolator1384;

let ROUTE1389 = browser.currentScene.createNode("ROUTE");
ROUTE1389.fromField = "fraction_changed";
ROUTE1389.fromNode = "BehaviorClock";
ROUTE1389.toField = "set_fraction";
ROUTE1389.toNode = "r_ring0_OI";
ProtoBody603ZZZ.children[257] = ROUTE1389;

let OrientationInterpolator1390 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1390.DEF = "r_ring1_OI";
let IS1391 = browser.currentScene.createNode("IS");
let connect1392 = browser.currentScene.createNode("connect");
connect1392.nodeField = "key";
connect1392.protoField = "r_ring1_key";
IS1391YYY.connect = new X3D.MFNode();

IS1391ZZZ.connect[0] = connect1392;

let connect1393 = browser.currentScene.createNode("connect");
connect1393.nodeField = "keyValue";
connect1393.protoField = "r_ring1_keyValue";
IS1391ZZZ.connect[1] = connect1393;

let connect1394 = browser.currentScene.createNode("connect");
connect1394.nodeField = "value_changed";
connect1394.protoField = "r_ring1_changed";
IS1391ZZZ.connect[2] = connect1394;

iS = IS1391;

ProtoBody603ZZZ.children[258] = OrientationInterpolator1390;

let ROUTE1395 = browser.currentScene.createNode("ROUTE");
ROUTE1395.fromField = "fraction_changed";
ROUTE1395.fromNode = "BehaviorClock";
ROUTE1395.toField = "set_fraction";
ROUTE1395.toNode = "r_ring1_OI";
ProtoBody603ZZZ.children[259] = ROUTE1395;

let OrientationInterpolator1396 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1396.DEF = "r_ring2_OI";
let IS1397 = browser.currentScene.createNode("IS");
let connect1398 = browser.currentScene.createNode("connect");
connect1398.nodeField = "key";
connect1398.protoField = "r_ring2_key";
IS1397YYY.connect = new X3D.MFNode();

IS1397ZZZ.connect[0] = connect1398;

let connect1399 = browser.currentScene.createNode("connect");
connect1399.nodeField = "keyValue";
connect1399.protoField = "r_ring2_keyValue";
IS1397ZZZ.connect[1] = connect1399;

let connect1400 = browser.currentScene.createNode("connect");
connect1400.nodeField = "value_changed";
connect1400.protoField = "r_ring2_changed";
IS1397ZZZ.connect[2] = connect1400;

iS = IS1397;

ProtoBody603ZZZ.children[260] = OrientationInterpolator1396;

let ROUTE1401 = browser.currentScene.createNode("ROUTE");
ROUTE1401.fromField = "fraction_changed";
ROUTE1401.fromNode = "BehaviorClock";
ROUTE1401.toField = "set_fraction";
ROUTE1401.toNode = "r_ring2_OI";
ProtoBody603ZZZ.children[261] = ROUTE1401;

let OrientationInterpolator1402 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1402.DEF = "r_ring3_OI";
let IS1403 = browser.currentScene.createNode("IS");
let connect1404 = browser.currentScene.createNode("connect");
connect1404.nodeField = "key";
connect1404.protoField = "r_ring3_key";
IS1403YYY.connect = new X3D.MFNode();

IS1403ZZZ.connect[0] = connect1404;

let connect1405 = browser.currentScene.createNode("connect");
connect1405.nodeField = "keyValue";
connect1405.protoField = "r_ring3_keyValue";
IS1403ZZZ.connect[1] = connect1405;

let connect1406 = browser.currentScene.createNode("connect");
connect1406.nodeField = "value_changed";
connect1406.protoField = "r_ring3_changed";
IS1403ZZZ.connect[2] = connect1406;

iS = IS1403;

ProtoBody603ZZZ.children[262] = OrientationInterpolator1402;

let ROUTE1407 = browser.currentScene.createNode("ROUTE");
ROUTE1407.fromField = "fraction_changed";
ROUTE1407.fromNode = "BehaviorClock";
ROUTE1407.toField = "set_fraction";
ROUTE1407.toNode = "r_ring3_OI";
ProtoBody603ZZZ.children[263] = ROUTE1407;

let OrientationInterpolator1408 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1408.DEF = "r_ring_distal_OI";
let IS1409 = browser.currentScene.createNode("IS");
let connect1410 = browser.currentScene.createNode("connect");
connect1410.nodeField = "key";
connect1410.protoField = "r_ring_distal_key";
IS1409YYY.connect = new X3D.MFNode();

IS1409ZZZ.connect[0] = connect1410;

let connect1411 = browser.currentScene.createNode("connect");
connect1411.nodeField = "keyValue";
connect1411.protoField = "r_ring_distal_keyValue";
IS1409ZZZ.connect[1] = connect1411;

let connect1412 = browser.currentScene.createNode("connect");
connect1412.nodeField = "value_changed";
connect1412.protoField = "r_ring_distal_changed";
IS1409ZZZ.connect[2] = connect1412;

iS = IS1409;

ProtoBody603ZZZ.children[264] = OrientationInterpolator1408;

let ROUTE1413 = browser.currentScene.createNode("ROUTE");
ROUTE1413.fromField = "fraction_changed";
ROUTE1413.fromNode = "BehaviorClock";
ROUTE1413.toField = "set_fraction";
ROUTE1413.toNode = "r_ring_distal_OI";
ProtoBody603ZZZ.children[265] = ROUTE1413;

let OrientationInterpolator1414 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1414.DEF = "r_ring_metacarpal_OI";
let IS1415 = browser.currentScene.createNode("IS");
let connect1416 = browser.currentScene.createNode("connect");
connect1416.nodeField = "key";
connect1416.protoField = "r_ring_metacarpal_key";
IS1415YYY.connect = new X3D.MFNode();

IS1415ZZZ.connect[0] = connect1416;

let connect1417 = browser.currentScene.createNode("connect");
connect1417.nodeField = "keyValue";
connect1417.protoField = "r_ring_metacarpal_keyValue";
IS1415ZZZ.connect[1] = connect1417;

let connect1418 = browser.currentScene.createNode("connect");
connect1418.nodeField = "value_changed";
connect1418.protoField = "r_ring_metacarpal_changed";
IS1415ZZZ.connect[2] = connect1418;

iS = IS1415;

ProtoBody603ZZZ.children[266] = OrientationInterpolator1414;

let ROUTE1419 = browser.currentScene.createNode("ROUTE");
ROUTE1419.fromField = "fraction_changed";
ROUTE1419.fromNode = "BehaviorClock";
ROUTE1419.toField = "set_fraction";
ROUTE1419.toNode = "r_ring_metacarpal_OI";
ProtoBody603ZZZ.children[267] = ROUTE1419;

let OrientationInterpolator1420 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1420.DEF = "r_ring_middle_OI";
let IS1421 = browser.currentScene.createNode("IS");
let connect1422 = browser.currentScene.createNode("connect");
connect1422.nodeField = "key";
connect1422.protoField = "r_ring_middle_key";
IS1421YYY.connect = new X3D.MFNode();

IS1421ZZZ.connect[0] = connect1422;

let connect1423 = browser.currentScene.createNode("connect");
connect1423.nodeField = "keyValue";
connect1423.protoField = "r_ring_middle_keyValue";
IS1421ZZZ.connect[1] = connect1423;

let connect1424 = browser.currentScene.createNode("connect");
connect1424.nodeField = "value_changed";
connect1424.protoField = "r_ring_middle_changed";
IS1421ZZZ.connect[2] = connect1424;

iS = IS1421;

ProtoBody603ZZZ.children[268] = OrientationInterpolator1420;

let ROUTE1425 = browser.currentScene.createNode("ROUTE");
ROUTE1425.fromField = "fraction_changed";
ROUTE1425.fromNode = "BehaviorClock";
ROUTE1425.toField = "set_fraction";
ROUTE1425.toNode = "r_ring_middle_OI";
ProtoBody603ZZZ.children[269] = ROUTE1425;

let OrientationInterpolator1426 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1426.DEF = "r_ring_proximal_OI";
let IS1427 = browser.currentScene.createNode("IS");
let connect1428 = browser.currentScene.createNode("connect");
connect1428.nodeField = "key";
connect1428.protoField = "r_ring_proximal_key";
IS1427YYY.connect = new X3D.MFNode();

IS1427ZZZ.connect[0] = connect1428;

let connect1429 = browser.currentScene.createNode("connect");
connect1429.nodeField = "keyValue";
connect1429.protoField = "r_ring_proximal_keyValue";
IS1427ZZZ.connect[1] = connect1429;

let connect1430 = browser.currentScene.createNode("connect");
connect1430.nodeField = "value_changed";
connect1430.protoField = "r_ring_proximal_changed";
IS1427ZZZ.connect[2] = connect1430;

iS = IS1427;

ProtoBody603ZZZ.children[270] = OrientationInterpolator1426;

let ROUTE1431 = browser.currentScene.createNode("ROUTE");
ROUTE1431.fromField = "fraction_changed";
ROUTE1431.fromNode = "BehaviorClock";
ROUTE1431.toField = "set_fraction";
ROUTE1431.toNode = "r_ring_proximal_OI";
ProtoBody603ZZZ.children[271] = ROUTE1431;

let OrientationInterpolator1432 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1432.DEF = "r_scapula_OI";
let IS1433 = browser.currentScene.createNode("IS");
let connect1434 = browser.currentScene.createNode("connect");
connect1434.nodeField = "key";
connect1434.protoField = "r_scapula_key";
IS1433YYY.connect = new X3D.MFNode();

IS1433ZZZ.connect[0] = connect1434;

let connect1435 = browser.currentScene.createNode("connect");
connect1435.nodeField = "keyValue";
connect1435.protoField = "r_scapula_keyValue";
IS1433ZZZ.connect[1] = connect1435;

let connect1436 = browser.currentScene.createNode("connect");
connect1436.nodeField = "value_changed";
connect1436.protoField = "r_scapula_changed";
IS1433ZZZ.connect[2] = connect1436;

iS = IS1433;

ProtoBody603ZZZ.children[272] = OrientationInterpolator1432;

let ROUTE1437 = browser.currentScene.createNode("ROUTE");
ROUTE1437.fromField = "fraction_changed";
ROUTE1437.fromNode = "BehaviorClock";
ROUTE1437.toField = "set_fraction";
ROUTE1437.toNode = "r_scapula_OI";
ProtoBody603ZZZ.children[273] = ROUTE1437;

let OrientationInterpolator1438 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1438.DEF = "r_shoulder_OI";
let IS1439 = browser.currentScene.createNode("IS");
let connect1440 = browser.currentScene.createNode("connect");
connect1440.nodeField = "key";
connect1440.protoField = "r_shoulder_key";
IS1439YYY.connect = new X3D.MFNode();

IS1439ZZZ.connect[0] = connect1440;

let connect1441 = browser.currentScene.createNode("connect");
connect1441.nodeField = "keyValue";
connect1441.protoField = "r_shoulder_keyValue";
IS1439ZZZ.connect[1] = connect1441;

let connect1442 = browser.currentScene.createNode("connect");
connect1442.nodeField = "value_changed";
connect1442.protoField = "r_shoulder_changed";
IS1439ZZZ.connect[2] = connect1442;

iS = IS1439;

ProtoBody603ZZZ.children[274] = OrientationInterpolator1438;

let ROUTE1443 = browser.currentScene.createNode("ROUTE");
ROUTE1443.fromField = "fraction_changed";
ROUTE1443.fromNode = "BehaviorClock";
ROUTE1443.toField = "set_fraction";
ROUTE1443.toNode = "r_shoulder_OI";
ProtoBody603ZZZ.children[275] = ROUTE1443;

let OrientationInterpolator1444 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1444.DEF = "r_sternoclavicular_OI";
let IS1445 = browser.currentScene.createNode("IS");
let connect1446 = browser.currentScene.createNode("connect");
connect1446.nodeField = "key";
connect1446.protoField = "r_sternoclavicular_key";
IS1445YYY.connect = new X3D.MFNode();

IS1445ZZZ.connect[0] = connect1446;

let connect1447 = browser.currentScene.createNode("connect");
connect1447.nodeField = "keyValue";
connect1447.protoField = "r_sternoclavicular_keyValue";
IS1445ZZZ.connect[1] = connect1447;

let connect1448 = browser.currentScene.createNode("connect");
connect1448.nodeField = "value_changed";
connect1448.protoField = "r_sternoclavicular_changed";
IS1445ZZZ.connect[2] = connect1448;

iS = IS1445;

ProtoBody603ZZZ.children[276] = OrientationInterpolator1444;

let ROUTE1449 = browser.currentScene.createNode("ROUTE");
ROUTE1449.fromField = "fraction_changed";
ROUTE1449.fromNode = "BehaviorClock";
ROUTE1449.toField = "set_fraction";
ROUTE1449.toNode = "r_sternoclavicular_OI";
ProtoBody603ZZZ.children[277] = ROUTE1449;

let OrientationInterpolator1450 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1450.DEF = "r_subtalar_OI";
let IS1451 = browser.currentScene.createNode("IS");
let connect1452 = browser.currentScene.createNode("connect");
connect1452.nodeField = "key";
connect1452.protoField = "r_subtalar_key";
IS1451YYY.connect = new X3D.MFNode();

IS1451ZZZ.connect[0] = connect1452;

let connect1453 = browser.currentScene.createNode("connect");
connect1453.nodeField = "keyValue";
connect1453.protoField = "r_subtalar_keyValue";
IS1451ZZZ.connect[1] = connect1453;

let connect1454 = browser.currentScene.createNode("connect");
connect1454.nodeField = "value_changed";
connect1454.protoField = "r_subtalar_changed";
IS1451ZZZ.connect[2] = connect1454;

iS = IS1451;

ProtoBody603ZZZ.children[278] = OrientationInterpolator1450;

let ROUTE1455 = browser.currentScene.createNode("ROUTE");
ROUTE1455.fromField = "fraction_changed";
ROUTE1455.fromNode = "BehaviorClock";
ROUTE1455.toField = "set_fraction";
ROUTE1455.toNode = "r_subtalar_OI";
ProtoBody603ZZZ.children[279] = ROUTE1455;

let OrientationInterpolator1456 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1456.DEF = "r_thigh_OI";
let IS1457 = browser.currentScene.createNode("IS");
let connect1458 = browser.currentScene.createNode("connect");
connect1458.nodeField = "key";
connect1458.protoField = "r_thigh_key";
IS1457YYY.connect = new X3D.MFNode();

IS1457ZZZ.connect[0] = connect1458;

let connect1459 = browser.currentScene.createNode("connect");
connect1459.nodeField = "keyValue";
connect1459.protoField = "r_thigh_keyValue";
IS1457ZZZ.connect[1] = connect1459;

let connect1460 = browser.currentScene.createNode("connect");
connect1460.nodeField = "value_changed";
connect1460.protoField = "r_thigh_changed";
IS1457ZZZ.connect[2] = connect1460;

iS = IS1457;

ProtoBody603ZZZ.children[280] = OrientationInterpolator1456;

let ROUTE1461 = browser.currentScene.createNode("ROUTE");
ROUTE1461.fromField = "fraction_changed";
ROUTE1461.fromNode = "BehaviorClock";
ROUTE1461.toField = "set_fraction";
ROUTE1461.toNode = "r_thigh_OI";
ProtoBody603ZZZ.children[281] = ROUTE1461;

let OrientationInterpolator1462 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1462.DEF = "r_thumb1_OI";
let IS1463 = browser.currentScene.createNode("IS");
let connect1464 = browser.currentScene.createNode("connect");
connect1464.nodeField = "key";
connect1464.protoField = "r_thumb1_key";
IS1463YYY.connect = new X3D.MFNode();

IS1463ZZZ.connect[0] = connect1464;

let connect1465 = browser.currentScene.createNode("connect");
connect1465.nodeField = "keyValue";
connect1465.protoField = "r_thumb1_keyValue";
IS1463ZZZ.connect[1] = connect1465;

let connect1466 = browser.currentScene.createNode("connect");
connect1466.nodeField = "value_changed";
connect1466.protoField = "r_thumb1_changed";
IS1463ZZZ.connect[2] = connect1466;

iS = IS1463;

ProtoBody603ZZZ.children[282] = OrientationInterpolator1462;

let ROUTE1467 = browser.currentScene.createNode("ROUTE");
ROUTE1467.fromField = "fraction_changed";
ROUTE1467.fromNode = "BehaviorClock";
ROUTE1467.toField = "set_fraction";
ROUTE1467.toNode = "r_thumb1_OI";
ProtoBody603ZZZ.children[283] = ROUTE1467;

let OrientationInterpolator1468 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1468.DEF = "r_thumb2_OI";
let IS1469 = browser.currentScene.createNode("IS");
let connect1470 = browser.currentScene.createNode("connect");
connect1470.nodeField = "key";
connect1470.protoField = "r_thumb2_key";
IS1469YYY.connect = new X3D.MFNode();

IS1469ZZZ.connect[0] = connect1470;

let connect1471 = browser.currentScene.createNode("connect");
connect1471.nodeField = "keyValue";
connect1471.protoField = "r_thumb2_keyValue";
IS1469ZZZ.connect[1] = connect1471;

let connect1472 = browser.currentScene.createNode("connect");
connect1472.nodeField = "value_changed";
connect1472.protoField = "r_thumb2_changed";
IS1469ZZZ.connect[2] = connect1472;

iS = IS1469;

ProtoBody603ZZZ.children[284] = OrientationInterpolator1468;

let ROUTE1473 = browser.currentScene.createNode("ROUTE");
ROUTE1473.fromField = "fraction_changed";
ROUTE1473.fromNode = "BehaviorClock";
ROUTE1473.toField = "set_fraction";
ROUTE1473.toNode = "r_thumb2_OI";
ProtoBody603ZZZ.children[285] = ROUTE1473;

let OrientationInterpolator1474 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1474.DEF = "r_thumb3_OI";
let IS1475 = browser.currentScene.createNode("IS");
let connect1476 = browser.currentScene.createNode("connect");
connect1476.nodeField = "key";
connect1476.protoField = "r_thumb3_key";
IS1475YYY.connect = new X3D.MFNode();

IS1475ZZZ.connect[0] = connect1476;

let connect1477 = browser.currentScene.createNode("connect");
connect1477.nodeField = "keyValue";
connect1477.protoField = "r_thumb3_keyValue";
IS1475ZZZ.connect[1] = connect1477;

let connect1478 = browser.currentScene.createNode("connect");
connect1478.nodeField = "value_changed";
connect1478.protoField = "r_thumb3_changed";
IS1475ZZZ.connect[2] = connect1478;

iS = IS1475;

ProtoBody603ZZZ.children[286] = OrientationInterpolator1474;

let ROUTE1479 = browser.currentScene.createNode("ROUTE");
ROUTE1479.fromField = "fraction_changed";
ROUTE1479.fromNode = "BehaviorClock";
ROUTE1479.toField = "set_fraction";
ROUTE1479.toNode = "r_thumb3_OI";
ProtoBody603ZZZ.children[287] = ROUTE1479;

let OrientationInterpolator1480 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1480.DEF = "r_thumb_distal_OI";
let IS1481 = browser.currentScene.createNode("IS");
let connect1482 = browser.currentScene.createNode("connect");
connect1482.nodeField = "key";
connect1482.protoField = "r_thumb_distal_key";
IS1481YYY.connect = new X3D.MFNode();

IS1481ZZZ.connect[0] = connect1482;

let connect1483 = browser.currentScene.createNode("connect");
connect1483.nodeField = "keyValue";
connect1483.protoField = "r_thumb_distal_keyValue";
IS1481ZZZ.connect[1] = connect1483;

let connect1484 = browser.currentScene.createNode("connect");
connect1484.nodeField = "value_changed";
connect1484.protoField = "r_thumb_distal_changed";
IS1481ZZZ.connect[2] = connect1484;

iS = IS1481;

ProtoBody603ZZZ.children[288] = OrientationInterpolator1480;

let ROUTE1485 = browser.currentScene.createNode("ROUTE");
ROUTE1485.fromField = "fraction_changed";
ROUTE1485.fromNode = "BehaviorClock";
ROUTE1485.toField = "set_fraction";
ROUTE1485.toNode = "r_thumb_distal_OI";
ProtoBody603ZZZ.children[289] = ROUTE1485;

let OrientationInterpolator1486 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1486.DEF = "r_thumb_metacarpal_OI";
let IS1487 = browser.currentScene.createNode("IS");
let connect1488 = browser.currentScene.createNode("connect");
connect1488.nodeField = "key";
connect1488.protoField = "r_thumb_metacarpal_key";
IS1487YYY.connect = new X3D.MFNode();

IS1487ZZZ.connect[0] = connect1488;

let connect1489 = browser.currentScene.createNode("connect");
connect1489.nodeField = "keyValue";
connect1489.protoField = "r_thumb_metacarpal_keyValue";
IS1487ZZZ.connect[1] = connect1489;

let connect1490 = browser.currentScene.createNode("connect");
connect1490.nodeField = "value_changed";
connect1490.protoField = "r_thumb_metacarpal_changed";
IS1487ZZZ.connect[2] = connect1490;

iS = IS1487;

ProtoBody603ZZZ.children[290] = OrientationInterpolator1486;

let ROUTE1491 = browser.currentScene.createNode("ROUTE");
ROUTE1491.fromField = "fraction_changed";
ROUTE1491.fromNode = "BehaviorClock";
ROUTE1491.toField = "set_fraction";
ROUTE1491.toNode = "r_thumb_metacarpal_OI";
ProtoBody603ZZZ.children[291] = ROUTE1491;

let OrientationInterpolator1492 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1492.DEF = "r_thumb_proximal_OI";
let IS1493 = browser.currentScene.createNode("IS");
let connect1494 = browser.currentScene.createNode("connect");
connect1494.nodeField = "key";
connect1494.protoField = "r_thumb_proximal_key";
IS1493YYY.connect = new X3D.MFNode();

IS1493ZZZ.connect[0] = connect1494;

let connect1495 = browser.currentScene.createNode("connect");
connect1495.nodeField = "keyValue";
connect1495.protoField = "r_thumb_proximal_keyValue";
IS1493ZZZ.connect[1] = connect1495;

let connect1496 = browser.currentScene.createNode("connect");
connect1496.nodeField = "value_changed";
connect1496.protoField = "r_thumb_proximal_changed";
IS1493ZZZ.connect[2] = connect1496;

iS = IS1493;

ProtoBody603ZZZ.children[292] = OrientationInterpolator1492;

let ROUTE1497 = browser.currentScene.createNode("ROUTE");
ROUTE1497.fromField = "fraction_changed";
ROUTE1497.fromNode = "BehaviorClock";
ROUTE1497.toField = "set_fraction";
ROUTE1497.toNode = "r_thumb_proximal_OI";
ProtoBody603ZZZ.children[293] = ROUTE1497;

let OrientationInterpolator1498 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1498.DEF = "r_upperarm_OI";
let IS1499 = browser.currentScene.createNode("IS");
let connect1500 = browser.currentScene.createNode("connect");
connect1500.nodeField = "key";
connect1500.protoField = "r_upperarm_key";
IS1499YYY.connect = new X3D.MFNode();

IS1499ZZZ.connect[0] = connect1500;

let connect1501 = browser.currentScene.createNode("connect");
connect1501.nodeField = "keyValue";
connect1501.protoField = "r_upperarm_keyValue";
IS1499ZZZ.connect[1] = connect1501;

let connect1502 = browser.currentScene.createNode("connect");
connect1502.nodeField = "value_changed";
connect1502.protoField = "r_upperarm_changed";
IS1499ZZZ.connect[2] = connect1502;

iS = IS1499;

ProtoBody603ZZZ.children[294] = OrientationInterpolator1498;

let ROUTE1503 = browser.currentScene.createNode("ROUTE");
ROUTE1503.fromField = "fraction_changed";
ROUTE1503.fromNode = "BehaviorClock";
ROUTE1503.toField = "set_fraction";
ROUTE1503.toNode = "r_upperarm_OI";
ProtoBody603ZZZ.children[295] = ROUTE1503;

let OrientationInterpolator1504 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1504.DEF = "r_wrist_OI";
let IS1505 = browser.currentScene.createNode("IS");
let connect1506 = browser.currentScene.createNode("connect");
connect1506.nodeField = "key";
connect1506.protoField = "r_wrist_key";
IS1505YYY.connect = new X3D.MFNode();

IS1505ZZZ.connect[0] = connect1506;

let connect1507 = browser.currentScene.createNode("connect");
connect1507.nodeField = "keyValue";
connect1507.protoField = "r_wrist_keyValue";
IS1505ZZZ.connect[1] = connect1507;

let connect1508 = browser.currentScene.createNode("connect");
connect1508.nodeField = "value_changed";
connect1508.protoField = "r_wrist_changed";
IS1505ZZZ.connect[2] = connect1508;

iS = IS1505;

ProtoBody603ZZZ.children[296] = OrientationInterpolator1504;

let ROUTE1509 = browser.currentScene.createNode("ROUTE");
ROUTE1509.fromField = "fraction_changed";
ROUTE1509.fromNode = "BehaviorClock";
ROUTE1509.toField = "set_fraction";
ROUTE1509.toNode = "r_wrist_OI";
ProtoBody603ZZZ.children[297] = ROUTE1509;

let OrientationInterpolator1510 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1510.DEF = "sacroiliac_OI";
let IS1511 = browser.currentScene.createNode("IS");
let connect1512 = browser.currentScene.createNode("connect");
connect1512.nodeField = "key";
connect1512.protoField = "sacroiliac_key";
IS1511YYY.connect = new X3D.MFNode();

IS1511ZZZ.connect[0] = connect1512;

let connect1513 = browser.currentScene.createNode("connect");
connect1513.nodeField = "keyValue";
connect1513.protoField = "sacroiliac_keyValue";
IS1511ZZZ.connect[1] = connect1513;

let connect1514 = browser.currentScene.createNode("connect");
connect1514.nodeField = "value_changed";
connect1514.protoField = "sacroiliac_changed";
IS1511ZZZ.connect[2] = connect1514;

iS = IS1511;

ProtoBody603ZZZ.children[298] = OrientationInterpolator1510;

let ROUTE1515 = browser.currentScene.createNode("ROUTE");
ROUTE1515.fromField = "fraction_changed";
ROUTE1515.fromNode = "BehaviorClock";
ROUTE1515.toField = "set_fraction";
ROUTE1515.toNode = "sacroiliac_OI";
ProtoBody603ZZZ.children[299] = ROUTE1515;

let OrientationInterpolator1516 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1516.DEF = "sacrum_OI";
let IS1517 = browser.currentScene.createNode("IS");
let connect1518 = browser.currentScene.createNode("connect");
connect1518.nodeField = "key";
connect1518.protoField = "sacrum_key";
IS1517YYY.connect = new X3D.MFNode();

IS1517ZZZ.connect[0] = connect1518;

let connect1519 = browser.currentScene.createNode("connect");
connect1519.nodeField = "keyValue";
connect1519.protoField = "sacrum_keyValue";
IS1517ZZZ.connect[1] = connect1519;

let connect1520 = browser.currentScene.createNode("connect");
connect1520.nodeField = "value_changed";
connect1520.protoField = "sacrum_changed";
IS1517ZZZ.connect[2] = connect1520;

iS = IS1517;

ProtoBody603ZZZ.children[300] = OrientationInterpolator1516;

let ROUTE1521 = browser.currentScene.createNode("ROUTE");
ROUTE1521.fromField = "fraction_changed";
ROUTE1521.fromNode = "BehaviorClock";
ROUTE1521.toField = "set_fraction";
ROUTE1521.toNode = "sacrum_OI";
ProtoBody603ZZZ.children[301] = ROUTE1521;

let OrientationInterpolator1522 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1522.DEF = "skull_OI";
let IS1523 = browser.currentScene.createNode("IS");
let connect1524 = browser.currentScene.createNode("connect");
connect1524.nodeField = "key";
connect1524.protoField = "skull_key";
IS1523YYY.connect = new X3D.MFNode();

IS1523ZZZ.connect[0] = connect1524;

let connect1525 = browser.currentScene.createNode("connect");
connect1525.nodeField = "keyValue";
connect1525.protoField = "skull_keyValue";
IS1523ZZZ.connect[1] = connect1525;

let connect1526 = browser.currentScene.createNode("connect");
connect1526.nodeField = "value_changed";
connect1526.protoField = "skull_changed";
IS1523ZZZ.connect[2] = connect1526;

iS = IS1523;

ProtoBody603ZZZ.children[302] = OrientationInterpolator1522;

let ROUTE1527 = browser.currentScene.createNode("ROUTE");
ROUTE1527.fromField = "fraction_changed";
ROUTE1527.fromNode = "BehaviorClock";
ROUTE1527.toField = "set_fraction";
ROUTE1527.toNode = "skull_OI";
ProtoBody603ZZZ.children[303] = ROUTE1527;

let OrientationInterpolator1528 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1528.DEF = "skullbase_OI";
let IS1529 = browser.currentScene.createNode("IS");
let connect1530 = browser.currentScene.createNode("connect");
connect1530.nodeField = "key";
connect1530.protoField = "skullbase_key";
IS1529YYY.connect = new X3D.MFNode();

IS1529ZZZ.connect[0] = connect1530;

let connect1531 = browser.currentScene.createNode("connect");
connect1531.nodeField = "keyValue";
connect1531.protoField = "skullbase_keyValue";
IS1529ZZZ.connect[1] = connect1531;

let connect1532 = browser.currentScene.createNode("connect");
connect1532.nodeField = "value_changed";
connect1532.protoField = "skullbase_changed";
IS1529ZZZ.connect[2] = connect1532;

iS = IS1529;

ProtoBody603ZZZ.children[304] = OrientationInterpolator1528;

let ROUTE1533 = browser.currentScene.createNode("ROUTE");
ROUTE1533.fromField = "fraction_changed";
ROUTE1533.fromNode = "BehaviorClock";
ROUTE1533.toField = "set_fraction";
ROUTE1533.toNode = "skullbase_OI";
ProtoBody603ZZZ.children[305] = ROUTE1533;

let OrientationInterpolator1534 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1534.DEF = "t1_OI";
let IS1535 = browser.currentScene.createNode("IS");
let connect1536 = browser.currentScene.createNode("connect");
connect1536.nodeField = "key";
connect1536.protoField = "t1_key";
IS1535YYY.connect = new X3D.MFNode();

IS1535ZZZ.connect[0] = connect1536;

let connect1537 = browser.currentScene.createNode("connect");
connect1537.nodeField = "keyValue";
connect1537.protoField = "t1_keyValue";
IS1535ZZZ.connect[1] = connect1537;

let connect1538 = browser.currentScene.createNode("connect");
connect1538.nodeField = "value_changed";
connect1538.protoField = "t1_changed";
IS1535ZZZ.connect[2] = connect1538;

iS = IS1535;

ProtoBody603ZZZ.children[306] = OrientationInterpolator1534;

let ROUTE1539 = browser.currentScene.createNode("ROUTE");
ROUTE1539.fromField = "fraction_changed";
ROUTE1539.fromNode = "BehaviorClock";
ROUTE1539.toField = "set_fraction";
ROUTE1539.toNode = "t1_OI";
ProtoBody603ZZZ.children[307] = ROUTE1539;

let OrientationInterpolator1540 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1540.DEF = "t2_OI";
let IS1541 = browser.currentScene.createNode("IS");
let connect1542 = browser.currentScene.createNode("connect");
connect1542.nodeField = "key";
connect1542.protoField = "t2_key";
IS1541YYY.connect = new X3D.MFNode();

IS1541ZZZ.connect[0] = connect1542;

let connect1543 = browser.currentScene.createNode("connect");
connect1543.nodeField = "keyValue";
connect1543.protoField = "t2_keyValue";
IS1541ZZZ.connect[1] = connect1543;

let connect1544 = browser.currentScene.createNode("connect");
connect1544.nodeField = "value_changed";
connect1544.protoField = "t2_changed";
IS1541ZZZ.connect[2] = connect1544;

iS = IS1541;

ProtoBody603ZZZ.children[308] = OrientationInterpolator1540;

let ROUTE1545 = browser.currentScene.createNode("ROUTE");
ROUTE1545.fromField = "fraction_changed";
ROUTE1545.fromNode = "BehaviorClock";
ROUTE1545.toField = "set_fraction";
ROUTE1545.toNode = "t2_OI";
ProtoBody603ZZZ.children[309] = ROUTE1545;

let OrientationInterpolator1546 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1546.DEF = "t3_OI";
let IS1547 = browser.currentScene.createNode("IS");
let connect1548 = browser.currentScene.createNode("connect");
connect1548.nodeField = "key";
connect1548.protoField = "t3_key";
IS1547YYY.connect = new X3D.MFNode();

IS1547ZZZ.connect[0] = connect1548;

let connect1549 = browser.currentScene.createNode("connect");
connect1549.nodeField = "keyValue";
connect1549.protoField = "t3_keyValue";
IS1547ZZZ.connect[1] = connect1549;

let connect1550 = browser.currentScene.createNode("connect");
connect1550.nodeField = "value_changed";
connect1550.protoField = "t3_changed";
IS1547ZZZ.connect[2] = connect1550;

iS = IS1547;

ProtoBody603ZZZ.children[310] = OrientationInterpolator1546;

let ROUTE1551 = browser.currentScene.createNode("ROUTE");
ROUTE1551.fromField = "fraction_changed";
ROUTE1551.fromNode = "BehaviorClock";
ROUTE1551.toField = "set_fraction";
ROUTE1551.toNode = "t3_OI";
ProtoBody603ZZZ.children[311] = ROUTE1551;

let OrientationInterpolator1552 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1552.DEF = "t4_OI";
let IS1553 = browser.currentScene.createNode("IS");
let connect1554 = browser.currentScene.createNode("connect");
connect1554.nodeField = "key";
connect1554.protoField = "t4_key";
IS1553YYY.connect = new X3D.MFNode();

IS1553ZZZ.connect[0] = connect1554;

let connect1555 = browser.currentScene.createNode("connect");
connect1555.nodeField = "keyValue";
connect1555.protoField = "t4_keyValue";
IS1553ZZZ.connect[1] = connect1555;

let connect1556 = browser.currentScene.createNode("connect");
connect1556.nodeField = "value_changed";
connect1556.protoField = "t4_changed";
IS1553ZZZ.connect[2] = connect1556;

iS = IS1553;

ProtoBody603ZZZ.children[312] = OrientationInterpolator1552;

let ROUTE1557 = browser.currentScene.createNode("ROUTE");
ROUTE1557.fromField = "fraction_changed";
ROUTE1557.fromNode = "BehaviorClock";
ROUTE1557.toField = "set_fraction";
ROUTE1557.toNode = "t4_OI";
ProtoBody603ZZZ.children[313] = ROUTE1557;

let OrientationInterpolator1558 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1558.DEF = "t5_OI";
let IS1559 = browser.currentScene.createNode("IS");
let connect1560 = browser.currentScene.createNode("connect");
connect1560.nodeField = "key";
connect1560.protoField = "t5_key";
IS1559YYY.connect = new X3D.MFNode();

IS1559ZZZ.connect[0] = connect1560;

let connect1561 = browser.currentScene.createNode("connect");
connect1561.nodeField = "keyValue";
connect1561.protoField = "t5_keyValue";
IS1559ZZZ.connect[1] = connect1561;

let connect1562 = browser.currentScene.createNode("connect");
connect1562.nodeField = "value_changed";
connect1562.protoField = "t5_changed";
IS1559ZZZ.connect[2] = connect1562;

iS = IS1559;

ProtoBody603ZZZ.children[314] = OrientationInterpolator1558;

let ROUTE1563 = browser.currentScene.createNode("ROUTE");
ROUTE1563.fromField = "fraction_changed";
ROUTE1563.fromNode = "BehaviorClock";
ROUTE1563.toField = "set_fraction";
ROUTE1563.toNode = "t5_OI";
ProtoBody603ZZZ.children[315] = ROUTE1563;

let OrientationInterpolator1564 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1564.DEF = "t6_OI";
let IS1565 = browser.currentScene.createNode("IS");
let connect1566 = browser.currentScene.createNode("connect");
connect1566.nodeField = "key";
connect1566.protoField = "t6_key";
IS1565YYY.connect = new X3D.MFNode();

IS1565ZZZ.connect[0] = connect1566;

let connect1567 = browser.currentScene.createNode("connect");
connect1567.nodeField = "keyValue";
connect1567.protoField = "t6_keyValue";
IS1565ZZZ.connect[1] = connect1567;

let connect1568 = browser.currentScene.createNode("connect");
connect1568.nodeField = "value_changed";
connect1568.protoField = "t6_changed";
IS1565ZZZ.connect[2] = connect1568;

iS = IS1565;

ProtoBody603ZZZ.children[316] = OrientationInterpolator1564;

let ROUTE1569 = browser.currentScene.createNode("ROUTE");
ROUTE1569.fromField = "fraction_changed";
ROUTE1569.fromNode = "BehaviorClock";
ROUTE1569.toField = "set_fraction";
ROUTE1569.toNode = "t6_OI";
ProtoBody603ZZZ.children[317] = ROUTE1569;

let OrientationInterpolator1570 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1570.DEF = "t7_OI";
let IS1571 = browser.currentScene.createNode("IS");
let connect1572 = browser.currentScene.createNode("connect");
connect1572.nodeField = "key";
connect1572.protoField = "t7_key";
IS1571YYY.connect = new X3D.MFNode();

IS1571ZZZ.connect[0] = connect1572;

let connect1573 = browser.currentScene.createNode("connect");
connect1573.nodeField = "keyValue";
connect1573.protoField = "t7_keyValue";
IS1571ZZZ.connect[1] = connect1573;

let connect1574 = browser.currentScene.createNode("connect");
connect1574.nodeField = "value_changed";
connect1574.protoField = "t7_changed";
IS1571ZZZ.connect[2] = connect1574;

iS = IS1571;

ProtoBody603ZZZ.children[318] = OrientationInterpolator1570;

let ROUTE1575 = browser.currentScene.createNode("ROUTE");
ROUTE1575.fromField = "fraction_changed";
ROUTE1575.fromNode = "BehaviorClock";
ROUTE1575.toField = "set_fraction";
ROUTE1575.toNode = "t7_OI";
ProtoBody603ZZZ.children[319] = ROUTE1575;

let OrientationInterpolator1576 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1576.DEF = "t8_OI";
let IS1577 = browser.currentScene.createNode("IS");
let connect1578 = browser.currentScene.createNode("connect");
connect1578.nodeField = "key";
connect1578.protoField = "t8_key";
IS1577YYY.connect = new X3D.MFNode();

IS1577ZZZ.connect[0] = connect1578;

let connect1579 = browser.currentScene.createNode("connect");
connect1579.nodeField = "keyValue";
connect1579.protoField = "t8_keyValue";
IS1577ZZZ.connect[1] = connect1579;

let connect1580 = browser.currentScene.createNode("connect");
connect1580.nodeField = "value_changed";
connect1580.protoField = "t8_changed";
IS1577ZZZ.connect[2] = connect1580;

iS = IS1577;

ProtoBody603ZZZ.children[320] = OrientationInterpolator1576;

let ROUTE1581 = browser.currentScene.createNode("ROUTE");
ROUTE1581.fromField = "fraction_changed";
ROUTE1581.fromNode = "BehaviorClock";
ROUTE1581.toField = "set_fraction";
ROUTE1581.toNode = "t8_OI";
ProtoBody603ZZZ.children[321] = ROUTE1581;

let OrientationInterpolator1582 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1582.DEF = "t9_OI";
let IS1583 = browser.currentScene.createNode("IS");
let connect1584 = browser.currentScene.createNode("connect");
connect1584.nodeField = "key";
connect1584.protoField = "t9_key";
IS1583YYY.connect = new X3D.MFNode();

IS1583ZZZ.connect[0] = connect1584;

let connect1585 = browser.currentScene.createNode("connect");
connect1585.nodeField = "keyValue";
connect1585.protoField = "t9_keyValue";
IS1583ZZZ.connect[1] = connect1585;

let connect1586 = browser.currentScene.createNode("connect");
connect1586.nodeField = "value_changed";
connect1586.protoField = "t9_changed";
IS1583ZZZ.connect[2] = connect1586;

iS = IS1583;

ProtoBody603ZZZ.children[322] = OrientationInterpolator1582;

let ROUTE1587 = browser.currentScene.createNode("ROUTE");
ROUTE1587.fromField = "fraction_changed";
ROUTE1587.fromNode = "BehaviorClock";
ROUTE1587.toField = "set_fraction";
ROUTE1587.toNode = "t9_OI";
ProtoBody603ZZZ.children[323] = ROUTE1587;

let OrientationInterpolator1588 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1588.DEF = "t10_OI";
let IS1589 = browser.currentScene.createNode("IS");
let connect1590 = browser.currentScene.createNode("connect");
connect1590.nodeField = "key";
connect1590.protoField = "t10_key";
IS1589YYY.connect = new X3D.MFNode();

IS1589ZZZ.connect[0] = connect1590;

let connect1591 = browser.currentScene.createNode("connect");
connect1591.nodeField = "keyValue";
connect1591.protoField = "t10_keyValue";
IS1589ZZZ.connect[1] = connect1591;

let connect1592 = browser.currentScene.createNode("connect");
connect1592.nodeField = "value_changed";
connect1592.protoField = "t10_changed";
IS1589ZZZ.connect[2] = connect1592;

iS = IS1589;

ProtoBody603ZZZ.children[324] = OrientationInterpolator1588;

let ROUTE1593 = browser.currentScene.createNode("ROUTE");
ROUTE1593.fromField = "fraction_changed";
ROUTE1593.fromNode = "BehaviorClock";
ROUTE1593.toField = "set_fraction";
ROUTE1593.toNode = "t10_OI";
ProtoBody603ZZZ.children[325] = ROUTE1593;

let OrientationInterpolator1594 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1594.DEF = "t11_OI";
let IS1595 = browser.currentScene.createNode("IS");
let connect1596 = browser.currentScene.createNode("connect");
connect1596.nodeField = "key";
connect1596.protoField = "t11_key";
IS1595YYY.connect = new X3D.MFNode();

IS1595ZZZ.connect[0] = connect1596;

let connect1597 = browser.currentScene.createNode("connect");
connect1597.nodeField = "keyValue";
connect1597.protoField = "t11_keyValue";
IS1595ZZZ.connect[1] = connect1597;

let connect1598 = browser.currentScene.createNode("connect");
connect1598.nodeField = "value_changed";
connect1598.protoField = "t11_changed";
IS1595ZZZ.connect[2] = connect1598;

iS = IS1595;

ProtoBody603ZZZ.children[326] = OrientationInterpolator1594;

let ROUTE1599 = browser.currentScene.createNode("ROUTE");
ROUTE1599.fromField = "fraction_changed";
ROUTE1599.fromNode = "BehaviorClock";
ROUTE1599.toField = "set_fraction";
ROUTE1599.toNode = "t11_OI";
ProtoBody603ZZZ.children[327] = ROUTE1599;

let OrientationInterpolator1600 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1600.DEF = "t12_OI";
let IS1601 = browser.currentScene.createNode("IS");
let connect1602 = browser.currentScene.createNode("connect");
connect1602.nodeField = "key";
connect1602.protoField = "t12_key";
IS1601YYY.connect = new X3D.MFNode();

IS1601ZZZ.connect[0] = connect1602;

let connect1603 = browser.currentScene.createNode("connect");
connect1603.nodeField = "keyValue";
connect1603.protoField = "t12_keyValue";
IS1601ZZZ.connect[1] = connect1603;

let connect1604 = browser.currentScene.createNode("connect");
connect1604.nodeField = "value_changed";
connect1604.protoField = "t12_changed";
IS1601ZZZ.connect[2] = connect1604;

iS = IS1601;

ProtoBody603ZZZ.children[328] = OrientationInterpolator1600;

let ROUTE1605 = browser.currentScene.createNode("ROUTE");
ROUTE1605.fromField = "fraction_changed";
ROUTE1605.fromNode = "BehaviorClock";
ROUTE1605.toField = "set_fraction";
ROUTE1605.toNode = "t12_OI";
ProtoBody603ZZZ.children[329] = ROUTE1605;

let OrientationInterpolator1606 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1606.DEF = "temporomandibular_OI";
let IS1607 = browser.currentScene.createNode("IS");
let connect1608 = browser.currentScene.createNode("connect");
connect1608.nodeField = "key";
connect1608.protoField = "temporomandibular_key";
IS1607YYY.connect = new X3D.MFNode();

IS1607ZZZ.connect[0] = connect1608;

let connect1609 = browser.currentScene.createNode("connect");
connect1609.nodeField = "keyValue";
connect1609.protoField = "temporomandibular_keyValue";
IS1607ZZZ.connect[1] = connect1609;

let connect1610 = browser.currentScene.createNode("connect");
connect1610.nodeField = "value_changed";
connect1610.protoField = "temporomandibular_changed";
IS1607ZZZ.connect[2] = connect1610;

iS = IS1607;

ProtoBody603ZZZ.children[330] = OrientationInterpolator1606;

let ROUTE1611 = browser.currentScene.createNode("ROUTE");
ROUTE1611.fromField = "fraction_changed";
ROUTE1611.fromNode = "BehaviorClock";
ROUTE1611.toField = "set_fraction";
ROUTE1611.toNode = "temporomandibular_OI";
ProtoBody603ZZZ.children[331] = ROUTE1611;

let OrientationInterpolator1612 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1612.DEF = "vc1_OI";
let IS1613 = browser.currentScene.createNode("IS");
let connect1614 = browser.currentScene.createNode("connect");
connect1614.nodeField = "key";
connect1614.protoField = "vc1_key";
IS1613YYY.connect = new X3D.MFNode();

IS1613ZZZ.connect[0] = connect1614;

let connect1615 = browser.currentScene.createNode("connect");
connect1615.nodeField = "keyValue";
connect1615.protoField = "vc1_keyValue";
IS1613ZZZ.connect[1] = connect1615;

let connect1616 = browser.currentScene.createNode("connect");
connect1616.nodeField = "value_changed";
connect1616.protoField = "vc1_changed";
IS1613ZZZ.connect[2] = connect1616;

iS = IS1613;

ProtoBody603ZZZ.children[332] = OrientationInterpolator1612;

let ROUTE1617 = browser.currentScene.createNode("ROUTE");
ROUTE1617.fromField = "fraction_changed";
ROUTE1617.fromNode = "BehaviorClock";
ROUTE1617.toField = "set_fraction";
ROUTE1617.toNode = "vc1_OI";
ProtoBody603ZZZ.children[333] = ROUTE1617;

let OrientationInterpolator1618 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1618.DEF = "vc2_OI";
let IS1619 = browser.currentScene.createNode("IS");
let connect1620 = browser.currentScene.createNode("connect");
connect1620.nodeField = "key";
connect1620.protoField = "vc2_key";
IS1619YYY.connect = new X3D.MFNode();

IS1619ZZZ.connect[0] = connect1620;

let connect1621 = browser.currentScene.createNode("connect");
connect1621.nodeField = "keyValue";
connect1621.protoField = "vc2_keyValue";
IS1619ZZZ.connect[1] = connect1621;

let connect1622 = browser.currentScene.createNode("connect");
connect1622.nodeField = "value_changed";
connect1622.protoField = "vc2_changed";
IS1619ZZZ.connect[2] = connect1622;

iS = IS1619;

ProtoBody603ZZZ.children[334] = OrientationInterpolator1618;

let ROUTE1623 = browser.currentScene.createNode("ROUTE");
ROUTE1623.fromField = "fraction_changed";
ROUTE1623.fromNode = "BehaviorClock";
ROUTE1623.toField = "set_fraction";
ROUTE1623.toNode = "vc2_OI";
ProtoBody603ZZZ.children[335] = ROUTE1623;

let OrientationInterpolator1624 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1624.DEF = "vc3_OI";
let IS1625 = browser.currentScene.createNode("IS");
let connect1626 = browser.currentScene.createNode("connect");
connect1626.nodeField = "key";
connect1626.protoField = "vc3_key";
IS1625YYY.connect = new X3D.MFNode();

IS1625ZZZ.connect[0] = connect1626;

let connect1627 = browser.currentScene.createNode("connect");
connect1627.nodeField = "keyValue";
connect1627.protoField = "vc3_keyValue";
IS1625ZZZ.connect[1] = connect1627;

let connect1628 = browser.currentScene.createNode("connect");
connect1628.nodeField = "value_changed";
connect1628.protoField = "vc3_changed";
IS1625ZZZ.connect[2] = connect1628;

iS = IS1625;

ProtoBody603ZZZ.children[336] = OrientationInterpolator1624;

let ROUTE1629 = browser.currentScene.createNode("ROUTE");
ROUTE1629.fromField = "fraction_changed";
ROUTE1629.fromNode = "BehaviorClock";
ROUTE1629.toField = "set_fraction";
ROUTE1629.toNode = "vc3_OI";
ProtoBody603ZZZ.children[337] = ROUTE1629;

let OrientationInterpolator1630 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1630.DEF = "vc4_OI";
let IS1631 = browser.currentScene.createNode("IS");
let connect1632 = browser.currentScene.createNode("connect");
connect1632.nodeField = "key";
connect1632.protoField = "vc4_key";
IS1631YYY.connect = new X3D.MFNode();

IS1631ZZZ.connect[0] = connect1632;

let connect1633 = browser.currentScene.createNode("connect");
connect1633.nodeField = "keyValue";
connect1633.protoField = "vc4_keyValue";
IS1631ZZZ.connect[1] = connect1633;

let connect1634 = browser.currentScene.createNode("connect");
connect1634.nodeField = "value_changed";
connect1634.protoField = "vc4_changed";
IS1631ZZZ.connect[2] = connect1634;

iS = IS1631;

ProtoBody603ZZZ.children[338] = OrientationInterpolator1630;

let ROUTE1635 = browser.currentScene.createNode("ROUTE");
ROUTE1635.fromField = "fraction_changed";
ROUTE1635.fromNode = "BehaviorClock";
ROUTE1635.toField = "set_fraction";
ROUTE1635.toNode = "vc4_OI";
ProtoBody603ZZZ.children[339] = ROUTE1635;

let OrientationInterpolator1636 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1636.DEF = "vc5_OI";
let IS1637 = browser.currentScene.createNode("IS");
let connect1638 = browser.currentScene.createNode("connect");
connect1638.nodeField = "key";
connect1638.protoField = "vc5_key";
IS1637YYY.connect = new X3D.MFNode();

IS1637ZZZ.connect[0] = connect1638;

let connect1639 = browser.currentScene.createNode("connect");
connect1639.nodeField = "keyValue";
connect1639.protoField = "vc5_keyValue";
IS1637ZZZ.connect[1] = connect1639;

let connect1640 = browser.currentScene.createNode("connect");
connect1640.nodeField = "value_changed";
connect1640.protoField = "vc5_changed";
IS1637ZZZ.connect[2] = connect1640;

iS = IS1637;

ProtoBody603ZZZ.children[340] = OrientationInterpolator1636;

let ROUTE1641 = browser.currentScene.createNode("ROUTE");
ROUTE1641.fromField = "fraction_changed";
ROUTE1641.fromNode = "BehaviorClock";
ROUTE1641.toField = "set_fraction";
ROUTE1641.toNode = "vc5_OI";
ProtoBody603ZZZ.children[341] = ROUTE1641;

let OrientationInterpolator1642 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1642.DEF = "vc6_OI";
let IS1643 = browser.currentScene.createNode("IS");
let connect1644 = browser.currentScene.createNode("connect");
connect1644.nodeField = "key";
connect1644.protoField = "vc6_key";
IS1643YYY.connect = new X3D.MFNode();

IS1643ZZZ.connect[0] = connect1644;

let connect1645 = browser.currentScene.createNode("connect");
connect1645.nodeField = "keyValue";
connect1645.protoField = "vc6_keyValue";
IS1643ZZZ.connect[1] = connect1645;

let connect1646 = browser.currentScene.createNode("connect");
connect1646.nodeField = "value_changed";
connect1646.protoField = "vc6_changed";
IS1643ZZZ.connect[2] = connect1646;

iS = IS1643;

ProtoBody603ZZZ.children[342] = OrientationInterpolator1642;

let ROUTE1647 = browser.currentScene.createNode("ROUTE");
ROUTE1647.fromField = "fraction_changed";
ROUTE1647.fromNode = "BehaviorClock";
ROUTE1647.toField = "set_fraction";
ROUTE1647.toNode = "vc6_OI";
ProtoBody603ZZZ.children[343] = ROUTE1647;

let OrientationInterpolator1648 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1648.DEF = "vc7_OI";
let IS1649 = browser.currentScene.createNode("IS");
let connect1650 = browser.currentScene.createNode("connect");
connect1650.nodeField = "key";
connect1650.protoField = "vc7_key";
IS1649YYY.connect = new X3D.MFNode();

IS1649ZZZ.connect[0] = connect1650;

let connect1651 = browser.currentScene.createNode("connect");
connect1651.nodeField = "keyValue";
connect1651.protoField = "vc7_keyValue";
IS1649ZZZ.connect[1] = connect1651;

let connect1652 = browser.currentScene.createNode("connect");
connect1652.nodeField = "value_changed";
connect1652.protoField = "vc7_changed";
IS1649ZZZ.connect[2] = connect1652;

iS = IS1649;

ProtoBody603ZZZ.children[344] = OrientationInterpolator1648;

let ROUTE1653 = browser.currentScene.createNode("ROUTE");
ROUTE1653.fromField = "fraction_changed";
ROUTE1653.fromNode = "BehaviorClock";
ROUTE1653.toField = "set_fraction";
ROUTE1653.toNode = "vc7_OI";
ProtoBody603ZZZ.children[345] = ROUTE1653;

let OrientationInterpolator1654 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1654.DEF = "vl1_OI";
let IS1655 = browser.currentScene.createNode("IS");
let connect1656 = browser.currentScene.createNode("connect");
connect1656.nodeField = "key";
connect1656.protoField = "vl1_key";
IS1655YYY.connect = new X3D.MFNode();

IS1655ZZZ.connect[0] = connect1656;

let connect1657 = browser.currentScene.createNode("connect");
connect1657.nodeField = "keyValue";
connect1657.protoField = "vl1_keyValue";
IS1655ZZZ.connect[1] = connect1657;

let connect1658 = browser.currentScene.createNode("connect");
connect1658.nodeField = "value_changed";
connect1658.protoField = "vl1_changed";
IS1655ZZZ.connect[2] = connect1658;

iS = IS1655;

ProtoBody603ZZZ.children[346] = OrientationInterpolator1654;

let ROUTE1659 = browser.currentScene.createNode("ROUTE");
ROUTE1659.fromField = "fraction_changed";
ROUTE1659.fromNode = "BehaviorClock";
ROUTE1659.toField = "set_fraction";
ROUTE1659.toNode = "vl1_OI";
ProtoBody603ZZZ.children[347] = ROUTE1659;

let OrientationInterpolator1660 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1660.DEF = "vl2_OI";
let IS1661 = browser.currentScene.createNode("IS");
let connect1662 = browser.currentScene.createNode("connect");
connect1662.nodeField = "key";
connect1662.protoField = "vl2_key";
IS1661YYY.connect = new X3D.MFNode();

IS1661ZZZ.connect[0] = connect1662;

let connect1663 = browser.currentScene.createNode("connect");
connect1663.nodeField = "keyValue";
connect1663.protoField = "vl2_keyValue";
IS1661ZZZ.connect[1] = connect1663;

let connect1664 = browser.currentScene.createNode("connect");
connect1664.nodeField = "value_changed";
connect1664.protoField = "vl2_changed";
IS1661ZZZ.connect[2] = connect1664;

iS = IS1661;

ProtoBody603ZZZ.children[348] = OrientationInterpolator1660;

let ROUTE1665 = browser.currentScene.createNode("ROUTE");
ROUTE1665.fromField = "fraction_changed";
ROUTE1665.fromNode = "BehaviorClock";
ROUTE1665.toField = "set_fraction";
ROUTE1665.toNode = "vl2_OI";
ProtoBody603ZZZ.children[349] = ROUTE1665;

let OrientationInterpolator1666 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1666.DEF = "vl3_OI";
let IS1667 = browser.currentScene.createNode("IS");
let connect1668 = browser.currentScene.createNode("connect");
connect1668.nodeField = "key";
connect1668.protoField = "vl3_key";
IS1667YYY.connect = new X3D.MFNode();

IS1667ZZZ.connect[0] = connect1668;

let connect1669 = browser.currentScene.createNode("connect");
connect1669.nodeField = "keyValue";
connect1669.protoField = "vl3_keyValue";
IS1667ZZZ.connect[1] = connect1669;

let connect1670 = browser.currentScene.createNode("connect");
connect1670.nodeField = "value_changed";
connect1670.protoField = "vl3_changed";
IS1667ZZZ.connect[2] = connect1670;

iS = IS1667;

ProtoBody603ZZZ.children[350] = OrientationInterpolator1666;

let ROUTE1671 = browser.currentScene.createNode("ROUTE");
ROUTE1671.fromField = "fraction_changed";
ROUTE1671.fromNode = "BehaviorClock";
ROUTE1671.toField = "set_fraction";
ROUTE1671.toNode = "vl3_OI";
ProtoBody603ZZZ.children[351] = ROUTE1671;

let OrientationInterpolator1672 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1672.DEF = "vl4_OI";
let IS1673 = browser.currentScene.createNode("IS");
let connect1674 = browser.currentScene.createNode("connect");
connect1674.nodeField = "key";
connect1674.protoField = "vl4_key";
IS1673YYY.connect = new X3D.MFNode();

IS1673ZZZ.connect[0] = connect1674;

let connect1675 = browser.currentScene.createNode("connect");
connect1675.nodeField = "keyValue";
connect1675.protoField = "vl4_keyValue";
IS1673ZZZ.connect[1] = connect1675;

let connect1676 = browser.currentScene.createNode("connect");
connect1676.nodeField = "value_changed";
connect1676.protoField = "vl4_changed";
IS1673ZZZ.connect[2] = connect1676;

iS = IS1673;

ProtoBody603ZZZ.children[352] = OrientationInterpolator1672;

let ROUTE1677 = browser.currentScene.createNode("ROUTE");
ROUTE1677.fromField = "fraction_changed";
ROUTE1677.fromNode = "BehaviorClock";
ROUTE1677.toField = "set_fraction";
ROUTE1677.toNode = "vl4_OI";
ProtoBody603ZZZ.children[353] = ROUTE1677;

let OrientationInterpolator1678 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1678.DEF = "vl5_OI";
let IS1679 = browser.currentScene.createNode("IS");
let connect1680 = browser.currentScene.createNode("connect");
connect1680.nodeField = "key";
connect1680.protoField = "vl5_key";
IS1679YYY.connect = new X3D.MFNode();

IS1679ZZZ.connect[0] = connect1680;

let connect1681 = browser.currentScene.createNode("connect");
connect1681.nodeField = "keyValue";
connect1681.protoField = "vl5_keyValue";
IS1679ZZZ.connect[1] = connect1681;

let connect1682 = browser.currentScene.createNode("connect");
connect1682.nodeField = "value_changed";
connect1682.protoField = "vl5_changed";
IS1679ZZZ.connect[2] = connect1682;

iS = IS1679;

ProtoBody603ZZZ.children[354] = OrientationInterpolator1678;

let ROUTE1683 = browser.currentScene.createNode("ROUTE");
ROUTE1683.fromField = "fraction_changed";
ROUTE1683.fromNode = "BehaviorClock";
ROUTE1683.toField = "set_fraction";
ROUTE1683.toNode = "vl5_OI";
ProtoBody603ZZZ.children[355] = ROUTE1683;

let OrientationInterpolator1684 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1684.DEF = "vt1_OI";
let IS1685 = browser.currentScene.createNode("IS");
let connect1686 = browser.currentScene.createNode("connect");
connect1686.nodeField = "key";
connect1686.protoField = "vt1_key";
IS1685YYY.connect = new X3D.MFNode();

IS1685ZZZ.connect[0] = connect1686;

let connect1687 = browser.currentScene.createNode("connect");
connect1687.nodeField = "keyValue";
connect1687.protoField = "vt1_keyValue";
IS1685ZZZ.connect[1] = connect1687;

let connect1688 = browser.currentScene.createNode("connect");
connect1688.nodeField = "value_changed";
connect1688.protoField = "vt1_changed";
IS1685ZZZ.connect[2] = connect1688;

iS = IS1685;

ProtoBody603ZZZ.children[356] = OrientationInterpolator1684;

let ROUTE1689 = browser.currentScene.createNode("ROUTE");
ROUTE1689.fromField = "fraction_changed";
ROUTE1689.fromNode = "BehaviorClock";
ROUTE1689.toField = "set_fraction";
ROUTE1689.toNode = "vt1_OI";
ProtoBody603ZZZ.children[357] = ROUTE1689;

let OrientationInterpolator1690 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1690.DEF = "vt2_OI";
let IS1691 = browser.currentScene.createNode("IS");
let connect1692 = browser.currentScene.createNode("connect");
connect1692.nodeField = "key";
connect1692.protoField = "vt2_key";
IS1691YYY.connect = new X3D.MFNode();

IS1691ZZZ.connect[0] = connect1692;

let connect1693 = browser.currentScene.createNode("connect");
connect1693.nodeField = "keyValue";
connect1693.protoField = "vt2_keyValue";
IS1691ZZZ.connect[1] = connect1693;

let connect1694 = browser.currentScene.createNode("connect");
connect1694.nodeField = "value_changed";
connect1694.protoField = "vt2_changed";
IS1691ZZZ.connect[2] = connect1694;

iS = IS1691;

ProtoBody603ZZZ.children[358] = OrientationInterpolator1690;

let ROUTE1695 = browser.currentScene.createNode("ROUTE");
ROUTE1695.fromField = "fraction_changed";
ROUTE1695.fromNode = "BehaviorClock";
ROUTE1695.toField = "set_fraction";
ROUTE1695.toNode = "vt2_OI";
ProtoBody603ZZZ.children[359] = ROUTE1695;

let OrientationInterpolator1696 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1696.DEF = "vt3_OI";
let IS1697 = browser.currentScene.createNode("IS");
let connect1698 = browser.currentScene.createNode("connect");
connect1698.nodeField = "key";
connect1698.protoField = "vt3_key";
IS1697YYY.connect = new X3D.MFNode();

IS1697ZZZ.connect[0] = connect1698;

let connect1699 = browser.currentScene.createNode("connect");
connect1699.nodeField = "keyValue";
connect1699.protoField = "vt3_keyValue";
IS1697ZZZ.connect[1] = connect1699;

let connect1700 = browser.currentScene.createNode("connect");
connect1700.nodeField = "value_changed";
connect1700.protoField = "vt3_changed";
IS1697ZZZ.connect[2] = connect1700;

iS = IS1697;

ProtoBody603ZZZ.children[360] = OrientationInterpolator1696;

let ROUTE1701 = browser.currentScene.createNode("ROUTE");
ROUTE1701.fromField = "fraction_changed";
ROUTE1701.fromNode = "BehaviorClock";
ROUTE1701.toField = "set_fraction";
ROUTE1701.toNode = "vt3_OI";
ProtoBody603ZZZ.children[361] = ROUTE1701;

let OrientationInterpolator1702 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1702.DEF = "vt4_OI";
let IS1703 = browser.currentScene.createNode("IS");
let connect1704 = browser.currentScene.createNode("connect");
connect1704.nodeField = "key";
connect1704.protoField = "vt4_key";
IS1703YYY.connect = new X3D.MFNode();

IS1703ZZZ.connect[0] = connect1704;

let connect1705 = browser.currentScene.createNode("connect");
connect1705.nodeField = "keyValue";
connect1705.protoField = "vt4_keyValue";
IS1703ZZZ.connect[1] = connect1705;

let connect1706 = browser.currentScene.createNode("connect");
connect1706.nodeField = "value_changed";
connect1706.protoField = "vt4_changed";
IS1703ZZZ.connect[2] = connect1706;

iS = IS1703;

ProtoBody603ZZZ.children[362] = OrientationInterpolator1702;

let ROUTE1707 = browser.currentScene.createNode("ROUTE");
ROUTE1707.fromField = "fraction_changed";
ROUTE1707.fromNode = "BehaviorClock";
ROUTE1707.toField = "set_fraction";
ROUTE1707.toNode = "vt4_OI";
ProtoBody603ZZZ.children[363] = ROUTE1707;

let OrientationInterpolator1708 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1708.DEF = "vt5_OI";
let IS1709 = browser.currentScene.createNode("IS");
let connect1710 = browser.currentScene.createNode("connect");
connect1710.nodeField = "key";
connect1710.protoField = "vt5_key";
IS1709YYY.connect = new X3D.MFNode();

IS1709ZZZ.connect[0] = connect1710;

let connect1711 = browser.currentScene.createNode("connect");
connect1711.nodeField = "keyValue";
connect1711.protoField = "vt5_keyValue";
IS1709ZZZ.connect[1] = connect1711;

let connect1712 = browser.currentScene.createNode("connect");
connect1712.nodeField = "value_changed";
connect1712.protoField = "vt5_changed";
IS1709ZZZ.connect[2] = connect1712;

iS = IS1709;

ProtoBody603ZZZ.children[364] = OrientationInterpolator1708;

let ROUTE1713 = browser.currentScene.createNode("ROUTE");
ROUTE1713.fromField = "fraction_changed";
ROUTE1713.fromNode = "BehaviorClock";
ROUTE1713.toField = "set_fraction";
ROUTE1713.toNode = "vt5_OI";
ProtoBody603ZZZ.children[365] = ROUTE1713;

let OrientationInterpolator1714 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1714.DEF = "vt6_OI";
let IS1715 = browser.currentScene.createNode("IS");
let connect1716 = browser.currentScene.createNode("connect");
connect1716.nodeField = "key";
connect1716.protoField = "vt6_key";
IS1715YYY.connect = new X3D.MFNode();

IS1715ZZZ.connect[0] = connect1716;

let connect1717 = browser.currentScene.createNode("connect");
connect1717.nodeField = "keyValue";
connect1717.protoField = "vt6_keyValue";
IS1715ZZZ.connect[1] = connect1717;

let connect1718 = browser.currentScene.createNode("connect");
connect1718.nodeField = "value_changed";
connect1718.protoField = "vt6_changed";
IS1715ZZZ.connect[2] = connect1718;

iS = IS1715;

ProtoBody603ZZZ.children[366] = OrientationInterpolator1714;

let ROUTE1719 = browser.currentScene.createNode("ROUTE");
ROUTE1719.fromField = "fraction_changed";
ROUTE1719.fromNode = "BehaviorClock";
ROUTE1719.toField = "set_fraction";
ROUTE1719.toNode = "vt6_OI";
ProtoBody603ZZZ.children[367] = ROUTE1719;

let OrientationInterpolator1720 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1720.DEF = "vt7_OI";
let IS1721 = browser.currentScene.createNode("IS");
let connect1722 = browser.currentScene.createNode("connect");
connect1722.nodeField = "key";
connect1722.protoField = "vt7_key";
IS1721YYY.connect = new X3D.MFNode();

IS1721ZZZ.connect[0] = connect1722;

let connect1723 = browser.currentScene.createNode("connect");
connect1723.nodeField = "keyValue";
connect1723.protoField = "vt7_keyValue";
IS1721ZZZ.connect[1] = connect1723;

let connect1724 = browser.currentScene.createNode("connect");
connect1724.nodeField = "value_changed";
connect1724.protoField = "vt7_changed";
IS1721ZZZ.connect[2] = connect1724;

iS = IS1721;

ProtoBody603ZZZ.children[368] = OrientationInterpolator1720;

let ROUTE1725 = browser.currentScene.createNode("ROUTE");
ROUTE1725.fromField = "fraction_changed";
ROUTE1725.fromNode = "BehaviorClock";
ROUTE1725.toField = "set_fraction";
ROUTE1725.toNode = "vt7_OI";
ProtoBody603ZZZ.children[369] = ROUTE1725;

let OrientationInterpolator1726 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1726.DEF = "vt8_OI";
let IS1727 = browser.currentScene.createNode("IS");
let connect1728 = browser.currentScene.createNode("connect");
connect1728.nodeField = "key";
connect1728.protoField = "vt8_key";
IS1727YYY.connect = new X3D.MFNode();

IS1727ZZZ.connect[0] = connect1728;

let connect1729 = browser.currentScene.createNode("connect");
connect1729.nodeField = "keyValue";
connect1729.protoField = "vt8_keyValue";
IS1727ZZZ.connect[1] = connect1729;

let connect1730 = browser.currentScene.createNode("connect");
connect1730.nodeField = "value_changed";
connect1730.protoField = "vt8_changed";
IS1727ZZZ.connect[2] = connect1730;

iS = IS1727;

ProtoBody603ZZZ.children[370] = OrientationInterpolator1726;

let ROUTE1731 = browser.currentScene.createNode("ROUTE");
ROUTE1731.fromField = "fraction_changed";
ROUTE1731.fromNode = "BehaviorClock";
ROUTE1731.toField = "set_fraction";
ROUTE1731.toNode = "vt8_OI";
ProtoBody603ZZZ.children[371] = ROUTE1731;

let OrientationInterpolator1732 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1732.DEF = "vt9_OI";
let IS1733 = browser.currentScene.createNode("IS");
let connect1734 = browser.currentScene.createNode("connect");
connect1734.nodeField = "key";
connect1734.protoField = "vt9_key";
IS1733YYY.connect = new X3D.MFNode();

IS1733ZZZ.connect[0] = connect1734;

let connect1735 = browser.currentScene.createNode("connect");
connect1735.nodeField = "keyValue";
connect1735.protoField = "vt9_keyValue";
IS1733ZZZ.connect[1] = connect1735;

let connect1736 = browser.currentScene.createNode("connect");
connect1736.nodeField = "value_changed";
connect1736.protoField = "vt9_changed";
IS1733ZZZ.connect[2] = connect1736;

iS = IS1733;

ProtoBody603ZZZ.children[372] = OrientationInterpolator1732;

let ROUTE1737 = browser.currentScene.createNode("ROUTE");
ROUTE1737.fromField = "fraction_changed";
ROUTE1737.fromNode = "BehaviorClock";
ROUTE1737.toField = "set_fraction";
ROUTE1737.toNode = "vt9_OI";
ProtoBody603ZZZ.children[373] = ROUTE1737;

let OrientationInterpolator1738 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1738.DEF = "vt10_OI";
let IS1739 = browser.currentScene.createNode("IS");
let connect1740 = browser.currentScene.createNode("connect");
connect1740.nodeField = "key";
connect1740.protoField = "vt10_key";
IS1739YYY.connect = new X3D.MFNode();

IS1739ZZZ.connect[0] = connect1740;

let connect1741 = browser.currentScene.createNode("connect");
connect1741.nodeField = "keyValue";
connect1741.protoField = "vt10_keyValue";
IS1739ZZZ.connect[1] = connect1741;

let connect1742 = browser.currentScene.createNode("connect");
connect1742.nodeField = "value_changed";
connect1742.protoField = "vt10_changed";
IS1739ZZZ.connect[2] = connect1742;

iS = IS1739;

ProtoBody603ZZZ.children[374] = OrientationInterpolator1738;

let ROUTE1743 = browser.currentScene.createNode("ROUTE");
ROUTE1743.fromField = "fraction_changed";
ROUTE1743.fromNode = "BehaviorClock";
ROUTE1743.toField = "set_fraction";
ROUTE1743.toNode = "vt10_OI";
ProtoBody603ZZZ.children[375] = ROUTE1743;

let OrientationInterpolator1744 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1744.DEF = "vt11_OI";
let IS1745 = browser.currentScene.createNode("IS");
let connect1746 = browser.currentScene.createNode("connect");
connect1746.nodeField = "key";
connect1746.protoField = "vt11_key";
IS1745YYY.connect = new X3D.MFNode();

IS1745ZZZ.connect[0] = connect1746;

let connect1747 = browser.currentScene.createNode("connect");
connect1747.nodeField = "keyValue";
connect1747.protoField = "vt11_keyValue";
IS1745ZZZ.connect[1] = connect1747;

let connect1748 = browser.currentScene.createNode("connect");
connect1748.nodeField = "value_changed";
connect1748.protoField = "vt11_changed";
IS1745ZZZ.connect[2] = connect1748;

iS = IS1745;

ProtoBody603ZZZ.children[376] = OrientationInterpolator1744;

let ROUTE1749 = browser.currentScene.createNode("ROUTE");
ROUTE1749.fromField = "fraction_changed";
ROUTE1749.fromNode = "BehaviorClock";
ROUTE1749.toField = "set_fraction";
ROUTE1749.toNode = "vt11_OI";
ProtoBody603ZZZ.children[377] = ROUTE1749;

let OrientationInterpolator1750 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1750.DEF = "vt12_OI";
let IS1751 = browser.currentScene.createNode("IS");
let connect1752 = browser.currentScene.createNode("connect");
connect1752.nodeField = "key";
connect1752.protoField = "vt12_key";
IS1751YYY.connect = new X3D.MFNode();

IS1751ZZZ.connect[0] = connect1752;

let connect1753 = browser.currentScene.createNode("connect");
connect1753.nodeField = "keyValue";
connect1753.protoField = "vt12_keyValue";
IS1751ZZZ.connect[1] = connect1753;

let connect1754 = browser.currentScene.createNode("connect");
connect1754.nodeField = "value_changed";
connect1754.protoField = "vt12_changed";
IS1751ZZZ.connect[2] = connect1754;

iS = IS1751;

ProtoBody603ZZZ.children[378] = OrientationInterpolator1750;

let ROUTE1755 = browser.currentScene.createNode("ROUTE");
ROUTE1755.fromField = "fraction_changed";
ROUTE1755.fromNode = "BehaviorClock";
ROUTE1755.toField = "set_fraction";
ROUTE1755.toNode = "vt12_OI";
ProtoBody603ZZZ.children[379] = ROUTE1755;

protoBody = ProtoBody603;

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
//TODO: supported Level of Articulation (LOA) might be adapted to more efficiently setup/teardown pertinent ROUTEs
//accessType=\"inputOutput\" avoided to maintain backwards compatilibility with VRML97 scripting constraints
//shared common TimeSensor inputs for all BehaviorAnimation nodes, connected via ROUTEs
//TODO: consider named accessors, e.g. enableBehaviorByName and disableBehaviorByName
//TODO: consider addBody, removeBody, addBehavior, removeBehavior
//TODO: consider startBehaviorByIndex, stopBehaviorByIndex, startBehaviorByName, stopBehaviorByName
ProtoInterface1758.getField("supportedLOA").setValue("-1");
ProtoInterface1757YYY.field = new X3D.MFNode();

ProtoInterface1759.getField("HumanoidArray")//default NULL
ProtoInterface1757YYY.field = new X3D.MFNode();

ProtoInterface1760.getField("whichBody").setValue("-1");
ProtoInterface1757YYY.field = new X3D.MFNode();

ProtoInterface1761.getField("set_whichBody")ProtoInterface1757YYY.field = new X3D.MFNode();

ProtoInterface1762.getField("whichBody_changed")ProtoInterface1757YYY.field = new X3D.MFNode();

ProtoInterface1763.getField("hAnimBehaviorNodes")//default NULL
ProtoInterface1757YYY.field = new X3D.MFNode();

ProtoInterface1764.getField("enabledBehaviorsArray")//no default values
ProtoInterface1757YYY.field = new X3D.MFNode();

ProtoInterface1765.getField("enableBehavior")ProtoInterface1757YYY.field = new X3D.MFNode();

ProtoInterface1766.getField("disableBehavior")ProtoInterface1757YYY.field = new X3D.MFNode();

ProtoInterface1767.getField("startTime").setValue("0");
ProtoInterface1757YYY.field = new X3D.MFNode();

ProtoInterface1768.getField("stopTime").setValue("0");
ProtoInterface1757YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface1757;

let ProtoBody1769 = browser.currentScene.createNode("ProtoBody");
let Switch1770 = browser.currentScene.createNode("Switch");
Switch1770.DEF = "BodySwitch";
Switch1770.whichChoice = -1;
let IS1771 = browser.currentScene.createNode("IS");
let connect1772 = browser.currentScene.createNode("connect");
connect1772.nodeField = "whichChoice";
connect1772.protoField = "whichBody";
IS1771YYY.connect = new X3D.MFNode();

IS1771ZZZ.connect[0] = connect1772;

let connect1773 = browser.currentScene.createNode("connect");
connect1773.nodeField = "children";
connect1773.protoField = "HumanoidArray";
IS1771ZZZ.connect[1] = connect1773;

iS = IS1771;

ProtoBody1769YYY.children = new X3D.MFNode();

ProtoBody1769ZZZ.children[0] = Switch1770;

//note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless
let Group1774 = browser.currentScene.createNode("Group");
Group1774.DEF = "BehaviorArrayHolder";
let IS1775 = browser.currentScene.createNode("IS");
let connect1776 = browser.currentScene.createNode("connect");
connect1776.nodeField = "children";
connect1776.protoField = "hAnimBehaviorNodes";
IS1775YYY.connect = new X3D.MFNode();

IS1775ZZZ.connect[0] = connect1776;

iS = IS1775;

ProtoBody1769ZZZ.children[1] = Group1774;

let TimeSensor1777 = browser.currentScene.createNode("TimeSensor");
TimeSensor1777.DEF = "TimeSensorHolderStartStopTimes";
let IS1778 = browser.currentScene.createNode("IS");
let connect1779 = browser.currentScene.createNode("connect");
connect1779.nodeField = "startTime";
connect1779.protoField = "startTime";
IS1778YYY.connect = new X3D.MFNode();

IS1778ZZZ.connect[0] = connect1779;

let connect1780 = browser.currentScene.createNode("connect");
connect1780.nodeField = "stopTime";
connect1780.protoField = "stopTime";
IS1778ZZZ.connect[1] = connect1780;

iS = IS1778;

ProtoBody1769ZZZ.children[2] = TimeSensor1777;

let Switch1781 = browser.currentScene.createNode("Switch");
Switch1781.DEF = "SupportedLoaHolder2";
Switch1781.whichChoice = -1;
let IS1782 = browser.currentScene.createNode("IS");
let connect1783 = browser.currentScene.createNode("connect");
connect1783.nodeField = "whichChoice";
connect1783.protoField = "supportedLOA";
IS1782YYY.connect = new X3D.MFNode();

IS1782ZZZ.connect[0] = connect1783;

iS = IS1782;

ProtoBody1769ZZZ.children[3] = Switch1781;

let Script1784 = browser.currentScene.createNode("Script");
Script1784.DEF = "BehaviorSelectionScript";
Script1784.directOutput = True;
Script1784.url = new X3D.MFString([new X3D.SFString("HAnimBehaviorPrototypesScript.js"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypesScript.js")]);
Script1785.getField("HumanoidArray")Script1784YYY.field = new X3D.MFNode();

Script1786.getField("whichBody")Script1784YYY.field = new X3D.MFNode();

Script1787.getField("set_whichBody")Script1784YYY.field = new X3D.MFNode();

Script1788.getField("whichBody_changed")Script1784YYY.field = new X3D.MFNode();

Script1789.getField("hAnimBehaviorNodes")//TODO: might consider accessType=\"inputOutput\" if VRML97 compatibility not needed
Script1784YYY.field = new X3D.MFNode();

Script1790.getField("enabledBehaviorsArray")Script1784YYY.field = new X3D.MFNode();

Script1791.getField("enableBehavior")Script1784YYY.field = new X3D.MFNode();

Script1792.getField("disableBehavior")Script1784YYY.field = new X3D.MFNode();

Script1793.getField("timeSensorNode")let TimeSensor1794 = browser.currentScene.createNode("TimeSensor");
TimeSensor1794.USE = "TimeSensorHolderStartStopTimes";
field1793YYY.children = new X3D.MFNode();

field1793ZZZ.children[0] = TimeSensor1794;

Script1784YYY.field = new X3D.MFNode();

Script1795.getField("previousBodyIndex").setValue("-1");
Script1784YYY.field = new X3D.MFNode();

Script1796.getField("traceEnabled").setValue("true");
Script1784YYY.field = new X3D.MFNode();

let IS1797 = browser.currentScene.createNode("IS");
let connect1798 = browser.currentScene.createNode("connect");
connect1798.nodeField = "HumanoidArray";
connect1798.protoField = "HumanoidArray";
IS1797YYY.connect = new X3D.MFNode();

IS1797ZZZ.connect[0] = connect1798;

let connect1799 = browser.currentScene.createNode("connect");
connect1799.nodeField = "whichBody";
connect1799.protoField = "whichBody";
IS1797ZZZ.connect[1] = connect1799;

let connect1800 = browser.currentScene.createNode("connect");
connect1800.nodeField = "set_whichBody";
connect1800.protoField = "set_whichBody";
IS1797ZZZ.connect[2] = connect1800;

let connect1801 = browser.currentScene.createNode("connect");
connect1801.nodeField = "whichBody_changed";
connect1801.protoField = "whichBody_changed";
IS1797ZZZ.connect[3] = connect1801;

let connect1802 = browser.currentScene.createNode("connect");
connect1802.nodeField = "hAnimBehaviorNodes";
connect1802.protoField = "hAnimBehaviorNodes";
IS1797ZZZ.connect[4] = connect1802;

let connect1803 = browser.currentScene.createNode("connect");
connect1803.nodeField = "enabledBehaviorsArray";
connect1803.protoField = "enabledBehaviorsArray";
IS1797ZZZ.connect[5] = connect1803;

let connect1804 = browser.currentScene.createNode("connect");
connect1804.nodeField = "enableBehavior";
connect1804.protoField = "enableBehavior";
IS1797ZZZ.connect[6] = connect1804;

let connect1805 = browser.currentScene.createNode("connect");
connect1805.nodeField = "disableBehavior";
connect1805.protoField = "disableBehavior";
IS1797ZZZ.connect[7] = connect1805;

iS = IS1797;

ProtoBody1769ZZZ.children[4] = Script1784;

protoBody = ProtoBody1769;

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
ProtoInstance1806YYY.fieldValue = new X3D.MFNode();

ProtoInstance1806ZZZ.fieldValue[0] = fieldValue1807;

let fieldValue1808 = browser.currentScene.createNode("fieldValue");
fieldValue1808.name = "HumanoidRoot_translation_keyValue";
fieldValue1808.value = "0 0 0 0 0 10 0 0 20 0 0 30 0 0 40 0 0 50";
ProtoInstance1806ZZZ.fieldValue[1] = fieldValue1808;

let fieldValue1809 = browser.currentScene.createNode("fieldValue");
fieldValue1809.name = "r_ankle_key";
fieldValue1809.value = "0 0.5 1";
ProtoInstance1806ZZZ.fieldValue[2] = fieldValue1809;

let fieldValue1810 = browser.currentScene.createNode("fieldValue");
fieldValue1810.name = "r_ankle_keyValue";
fieldValue1810.value = "0 1 0 0 0 1 0 0.2 0 1 0 0.4";
ProtoInstance1806ZZZ.fieldValue[3] = fieldValue1810;

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
fieldValue1812YYY.children = new X3D.MFNode();

fieldValue1812ZZZ.children[0] = HAnimHumanoid1813;

ProtoInstance1811YYY.fieldValue = new X3D.MFNode();

ProtoInstance1811ZZZ.fieldValue[0] = fieldValue1812;

let fieldValue1814 = browser.currentScene.createNode("fieldValue");
fieldValue1814.name = "whichBody";
fieldValue1814.value = "0";
ProtoInstance1811ZZZ.fieldValue[1] = fieldValue1814;

let fieldValue1815 = browser.currentScene.createNode("fieldValue");
fieldValue1815.name = "hAnimBehaviorNodes";
let ProtoInstance1816 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1816.USE = "BehaviorTest1";
fieldValue1815YYY.children = new X3D.MFNode();

fieldValue1815ZZZ.children[0] = ProtoInstance1816;

ProtoInstance1811ZZZ.fieldValue[2] = fieldValue1815;

let fieldValue1817 = browser.currentScene.createNode("fieldValue");
fieldValue1817.name = "enabledBehaviorsArray";
fieldValue1817.value = "true";
ProtoInstance1811ZZZ.fieldValue[3] = fieldValue1817;

browser.currentScene.children[4] = ProtoInstance1811;

}
main ();
