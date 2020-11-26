let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "HAnimBehaviorPrototypes.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ProtoDeclare3 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="HAnimBehavior" appinfo="The HAnimBehavior node models a single humanoid behavior either for an entire body or simply parts of a body. It collects a TimeSensor clock with a single PositionInterpolator and multiple OrientationInterpolator nodes to provide a single humanoid behavior." documentation="https://www.web3d.org/files/specifications/19774/V1.0/" ><ProtoInterface><!--supported Level of Articulation (LOA)--><!--shared common input for single TimeSensor animating all interpolators, since different Behaviors may have different cycleInterval durations--><!--TODO: add other X3D 3.0 TimeSensor fields (pause etc.)--><!--Not supported: animated translation of individual joints--><!--pass in key/keyValue array pairs for single PositionInterpolator--><!--pass in key/keyValue array pairs and expose named output for each OrientationInterpolator, joint by joint--><field name="supportedLOA" accessType="inputOutput" appinfo="Supported Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3." type="SFInt32" value="-1"></field>
<field name="enabled" accessType="inputOutput" appinfo="is this behavior enabled?" type="SFBool" value="true"></field>
<field name="cycleInterval" accessType="inputOutput" appinfo="how long do these interpolators take to execute?" type="SFTime" value="1"></field>
<field name="loop" accessType="inputOutput" appinfo="whether or not this behavior loops (e.g. walking) or is single shot (e.g. shake hands)." type="SFBool" value="false"></field>
<field name="startTime" accessType="inputOutput" appinfo="when time now >= startTime isActive becomes true and TimeSensor becomes active" type="SFTime" value="0"/>
<field name="stopTime" accessType="inputOutput" appinfo="when stopTime becomes &lt;= time now isActive becomes false and TimeSensor becomes inactive" type="SFTime" value="0"></field>
<field name="pauseTime" accessType="inputOutput" appinfo="when time now >= pauseTime isPaused becomes true and TimeSensor becomes paused" type="SFTime" value="0"/>
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
ProtoDeclare3.name = "HAnimBehavior";
ProtoDeclare3.appinfo = "The HAnimBehavior node models a single humanoid behavior either for an entire body or simply parts of a body. It collects a TimeSensor clock with a single PositionInterpolator and multiple OrientationInterpolator nodes to provide a single humanoid behavior.";
ProtoDeclare3.documentation = "https://www.web3d.org/files/specifications/19774/V1.0/";
let ProtoInterface4 = browser.currentScene.createNode("ProtoInterface");
//supported Level of Articulation (LOA)
//shared common input for single TimeSensor animating all interpolators, since different Behaviors may have different cycleInterval durations
//TODO: add other X3D 3.0 TimeSensor fields (pause etc.)
//Not supported: animated translation of individual joints
//pass in key/keyValue array pairs for single PositionInterpolator
//pass in key/keyValue array pairs and expose named output for each OrientationInterpolator, joint by joint
let field5 = browser.currentScene.createNode("field");
field5.name = "supportedLOA";
field5.accessType = "inputOutput";
field5.appinfo = "Supported Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3.";
field5.type = "SFInt32";
field5.value = "-1";
ProtoInterface4.field = new MFNode();

ProtoInterface4.field[0] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "enabled";
field6.accessType = "inputOutput";
field6.appinfo = "is this behavior enabled?";
field6.type = "SFBool";
field6.value = "true";
ProtoInterface4.field[1] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "cycleInterval";
field7.accessType = "inputOutput";
field7.appinfo = "how long do these interpolators take to execute?";
field7.type = "SFTime";
field7.value = "1";
ProtoInterface4.field[2] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "loop";
field8.accessType = "inputOutput";
field8.appinfo = "whether or not this behavior loops (e.g. walking) or is single shot (e.g. shake hands).";
field8.type = "SFBool";
field8.value = "false";
ProtoInterface4.field[3] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "startTime";
field9.accessType = "inputOutput";
field9.appinfo = "when time now >= startTime isActive becomes true and TimeSensor becomes active";
field9.type = "SFTime";
field9.value = "0";
ProtoInterface4.field[4] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "stopTime";
field10.accessType = "inputOutput";
field10.appinfo = "when stopTime becomes <= time now isActive becomes false and TimeSensor becomes inactive";
field10.type = "SFTime";
field10.value = "0";
ProtoInterface4.field[5] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "pauseTime";
field11.accessType = "inputOutput";
field11.appinfo = "when time now >= pauseTime isPaused becomes true and TimeSensor becomes paused";
field11.type = "SFTime";
field11.value = "0";
ProtoInterface4.field[6] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "resumeTime";
field12.accessType = "inputOutput";
field12.appinfo = "when resumeTime becomes <= time now isPaused becomes false and TimeSensor becomes inactive";
field12.type = "SFTime";
field12.value = "0";
ProtoInterface4.field[7] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "cycleTime";
field13.accessType = "outputOnly";
field13.appinfo = "cycleTime sends a time outputOnly at startTime and also at the beginning of each new cycle";
field13.type = "SFTime";
ProtoInterface4.field[8] = field13;

let field14 = browser.currentScene.createNode("field");
field14.name = "isActive";
field14.accessType = "outputOnly";
field14.appinfo = "isActive true/false events are sent when TimeSensor starts/stops running";
field14.type = "SFBool";
ProtoInterface4.field[9] = field14;

let field15 = browser.currentScene.createNode("field");
field15.name = "isPaused";
field15.accessType = "outputOnly";
field15.appinfo = "isPaused true/false events are sent when TimeSensor is paused/resumed";
field15.type = "SFBool";
ProtoInterface4.field[10] = field15;

let field16 = browser.currentScene.createNode("field");
field16.name = "elapsedTime";
field16.accessType = "outputOnly";
field16.appinfo = "current elapsed time since TimeSensor activated/running cumulative in seconds and not counting any paused time";
field16.type = "SFBool";
ProtoInterface4.field[11] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "time";
field17.accessType = "outputOnly";
field17.appinfo = "continuously sends the absolute time (since January 1 1970)";
field17.type = "SFBool";
ProtoInterface4.field[12] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "fraction_changed";
field18.accessType = "outputOnly";
field18.appinfo = "fraction_changed continuously sends value in range [0 1] showing time progress in the current cycle.";
field18.type = "SFFloat";
ProtoInterface4.field[13] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "HumanoidRoot_translation_key";
field19.accessType = "inputOutput";
field19.type = "MFFloat";
//no default value
ProtoInterface4.field[14] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "HumanoidRoot_translation_keyValue";
field20.accessType = "inputOutput";
field20.type = "MFVec3f";
//no default value
ProtoInterface4.field[15] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "HumanoidRoot_translation_changed";
field21.accessType = "outputOnly";
field21.type = "SFVec3f";
ProtoInterface4.field[16] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "HumanoidRoot_rotation_key";
field22.accessType = "inputOutput";
field22.type = "MFFloat";
//no default value
ProtoInterface4.field[17] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "HumanoidRoot_rotation_keyValue";
field23.accessType = "inputOutput";
field23.type = "MFRotation";
//no default value
ProtoInterface4.field[18] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "HumanoidRoot_rotation_changed";
field24.accessType = "outputOnly";
field24.type = "SFRotation";
ProtoInterface4.field[19] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "c1_key";
field25.accessType = "inputOutput";
field25.type = "MFFloat";
//no default value
ProtoInterface4.field[20] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "c1_keyValue";
field26.accessType = "inputOutput";
field26.type = "MFRotation";
//no default value
ProtoInterface4.field[21] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "c1_changed";
field27.accessType = "outputOnly";
field27.type = "SFRotation";
ProtoInterface4.field[22] = field27;

let field28 = browser.currentScene.createNode("field");
field28.name = "c2_key";
field28.accessType = "inputOutput";
field28.type = "MFFloat";
//no default value
ProtoInterface4.field[23] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "c2_keyValue";
field29.accessType = "inputOutput";
field29.type = "MFRotation";
//no default value
ProtoInterface4.field[24] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "c2_changed";
field30.accessType = "outputOnly";
field30.type = "SFRotation";
ProtoInterface4.field[25] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "c3_key";
field31.accessType = "inputOutput";
field31.type = "MFFloat";
//no default value
ProtoInterface4.field[26] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "c3_keyValue";
field32.accessType = "inputOutput";
field32.type = "MFRotation";
//no default value
ProtoInterface4.field[27] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "c3_changed";
field33.accessType = "outputOnly";
field33.type = "SFRotation";
ProtoInterface4.field[28] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "c4_key";
field34.accessType = "inputOutput";
field34.type = "MFFloat";
//no default value
ProtoInterface4.field[29] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "c4_keyValue";
field35.accessType = "inputOutput";
field35.type = "MFRotation";
//no default value
ProtoInterface4.field[30] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "c4_changed";
field36.accessType = "outputOnly";
field36.type = "SFRotation";
ProtoInterface4.field[31] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "c5_key";
field37.accessType = "inputOutput";
field37.type = "MFFloat";
//no default value
ProtoInterface4.field[32] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "c5_keyValue";
field38.accessType = "inputOutput";
field38.type = "MFRotation";
//no default value
ProtoInterface4.field[33] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "c5_changed";
field39.accessType = "outputOnly";
field39.type = "SFRotation";
ProtoInterface4.field[34] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "c6_key";
field40.accessType = "inputOutput";
field40.type = "MFFloat";
//no default value
ProtoInterface4.field[35] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "c6_keyValue";
field41.accessType = "inputOutput";
field41.type = "MFRotation";
//no default value
ProtoInterface4.field[36] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "c6_changed";
field42.accessType = "outputOnly";
field42.type = "SFRotation";
ProtoInterface4.field[37] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "c7_key";
field43.accessType = "inputOutput";
field43.type = "MFFloat";
//no default value
ProtoInterface4.field[38] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "c7_keyValue";
field44.accessType = "inputOutput";
field44.type = "MFRotation";
//no default value
ProtoInterface4.field[39] = field44;

let field45 = browser.currentScene.createNode("field");
field45.name = "c7_changed";
field45.accessType = "outputOnly";
field45.type = "SFRotation";
ProtoInterface4.field[40] = field45;

let field46 = browser.currentScene.createNode("field");
field46.name = "jaw_key";
field46.accessType = "inputOutput";
field46.type = "MFFloat";
//no default value
ProtoInterface4.field[41] = field46;

let field47 = browser.currentScene.createNode("field");
field47.name = "jaw_keyValue";
field47.accessType = "inputOutput";
field47.type = "MFRotation";
//no default value
ProtoInterface4.field[42] = field47;

let field48 = browser.currentScene.createNode("field");
field48.name = "jaw_changed";
field48.accessType = "outputOnly";
field48.type = "SFRotation";
ProtoInterface4.field[43] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "l1_key";
field49.accessType = "inputOutput";
field49.type = "MFFloat";
//no default value
ProtoInterface4.field[44] = field49;

let field50 = browser.currentScene.createNode("field");
field50.name = "l1_keyValue";
field50.accessType = "inputOutput";
field50.type = "MFRotation";
//no default value
ProtoInterface4.field[45] = field50;

let field51 = browser.currentScene.createNode("field");
field51.name = "l1_changed";
field51.accessType = "outputOnly";
field51.type = "SFRotation";
ProtoInterface4.field[46] = field51;

let field52 = browser.currentScene.createNode("field");
field52.name = "l2_key";
field52.accessType = "inputOutput";
field52.type = "MFFloat";
//no default value
ProtoInterface4.field[47] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "l2_keyValue";
field53.accessType = "inputOutput";
field53.type = "MFRotation";
//no default value
ProtoInterface4.field[48] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "l2_changed";
field54.accessType = "outputOnly";
field54.type = "SFRotation";
ProtoInterface4.field[49] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "l3_key";
field55.accessType = "inputOutput";
field55.type = "MFFloat";
//no default value
ProtoInterface4.field[50] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "l3_keyValue";
field56.accessType = "inputOutput";
field56.type = "MFRotation";
//no default value
ProtoInterface4.field[51] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "l3_changed";
field57.accessType = "outputOnly";
field57.type = "SFRotation";
ProtoInterface4.field[52] = field57;

let field58 = browser.currentScene.createNode("field");
field58.name = "l4_key";
field58.accessType = "inputOutput";
field58.type = "MFFloat";
//no default value
ProtoInterface4.field[53] = field58;

let field59 = browser.currentScene.createNode("field");
field59.name = "l4_keyValue";
field59.accessType = "inputOutput";
field59.type = "MFRotation";
//no default value
ProtoInterface4.field[54] = field59;

let field60 = browser.currentScene.createNode("field");
field60.name = "l4_changed";
field60.accessType = "outputOnly";
field60.type = "SFRotation";
ProtoInterface4.field[55] = field60;

let field61 = browser.currentScene.createNode("field");
field61.name = "l5_key";
field61.accessType = "inputOutput";
field61.type = "MFFloat";
//no default value
ProtoInterface4.field[56] = field61;

let field62 = browser.currentScene.createNode("field");
field62.name = "l5_keyValue";
field62.accessType = "inputOutput";
field62.type = "MFRotation";
//no default value
ProtoInterface4.field[57] = field62;

let field63 = browser.currentScene.createNode("field");
field63.name = "l5_changed";
field63.accessType = "outputOnly";
field63.type = "SFRotation";
ProtoInterface4.field[58] = field63;

let field64 = browser.currentScene.createNode("field");
field64.name = "l_acromioclavicular_key";
field64.accessType = "inputOutput";
field64.type = "MFFloat";
//no default value
ProtoInterface4.field[59] = field64;

let field65 = browser.currentScene.createNode("field");
field65.name = "l_acromioclavicular_keyValue";
field65.accessType = "inputOutput";
field65.type = "MFRotation";
//no default value
ProtoInterface4.field[60] = field65;

let field66 = browser.currentScene.createNode("field");
field66.name = "l_acromioclavicular_changed";
field66.accessType = "outputOnly";
field66.type = "SFRotation";
ProtoInterface4.field[61] = field66;

let field67 = browser.currentScene.createNode("field");
field67.name = "l_ankle_key";
field67.accessType = "inputOutput";
field67.type = "MFFloat";
//no default value
ProtoInterface4.field[62] = field67;

let field68 = browser.currentScene.createNode("field");
field68.name = "l_ankle_keyValue";
field68.accessType = "inputOutput";
field68.type = "MFRotation";
//no default value
ProtoInterface4.field[63] = field68;

let field69 = browser.currentScene.createNode("field");
field69.name = "l_ankle_changed";
field69.accessType = "outputOnly";
field69.type = "SFRotation";
ProtoInterface4.field[64] = field69;

let field70 = browser.currentScene.createNode("field");
field70.name = "l_calf_key";
field70.accessType = "inputOutput";
field70.type = "MFFloat";
//no default value
ProtoInterface4.field[65] = field70;

let field71 = browser.currentScene.createNode("field");
field71.name = "l_calf_keyValue";
field71.accessType = "inputOutput";
field71.type = "MFRotation";
//no default value
ProtoInterface4.field[66] = field71;

let field72 = browser.currentScene.createNode("field");
field72.name = "l_calf_changed";
field72.accessType = "outputOnly";
field72.type = "SFRotation";
ProtoInterface4.field[67] = field72;

let field73 = browser.currentScene.createNode("field");
field73.name = "l_clavicle_key";
field73.accessType = "inputOutput";
field73.type = "MFFloat";
//no default value
ProtoInterface4.field[68] = field73;

let field74 = browser.currentScene.createNode("field");
field74.name = "l_clavicle_keyValue";
field74.accessType = "inputOutput";
field74.type = "MFRotation";
//no default value
ProtoInterface4.field[69] = field74;

let field75 = browser.currentScene.createNode("field");
field75.name = "l_clavicle_changed";
field75.accessType = "outputOnly";
field75.type = "SFRotation";
ProtoInterface4.field[70] = field75;

let field76 = browser.currentScene.createNode("field");
field76.name = "l_elbow_key";
field76.accessType = "inputOutput";
field76.type = "MFFloat";
//no default value
ProtoInterface4.field[71] = field76;

let field77 = browser.currentScene.createNode("field");
field77.name = "l_elbow_keyValue";
field77.accessType = "inputOutput";
field77.type = "MFRotation";
//no default value
ProtoInterface4.field[72] = field77;

let field78 = browser.currentScene.createNode("field");
field78.name = "l_elbow_changed";
field78.accessType = "outputOnly";
field78.type = "SFRotation";
ProtoInterface4.field[73] = field78;

let field79 = browser.currentScene.createNode("field");
field79.name = "l_eyeball_key";
field79.accessType = "inputOutput";
field79.type = "MFFloat";
//no default value
ProtoInterface4.field[74] = field79;

let field80 = browser.currentScene.createNode("field");
field80.name = "l_eyeball_keyValue";
field80.accessType = "inputOutput";
field80.type = "MFRotation";
//no default value
ProtoInterface4.field[75] = field80;

let field81 = browser.currentScene.createNode("field");
field81.name = "l_eyeball_changed";
field81.accessType = "outputOnly";
field81.type = "SFRotation";
ProtoInterface4.field[76] = field81;

let field82 = browser.currentScene.createNode("field");
field82.name = "l_eyeball_joint_key";
field82.accessType = "inputOutput";
field82.type = "MFFloat";
//no default value
ProtoInterface4.field[77] = field82;

let field83 = browser.currentScene.createNode("field");
field83.name = "l_eyeball_joint_keyValue";
field83.accessType = "inputOutput";
field83.type = "MFRotation";
//no default value
ProtoInterface4.field[78] = field83;

let field84 = browser.currentScene.createNode("field");
field84.name = "l_eyeball_joint_changed";
field84.accessType = "outputOnly";
field84.type = "SFRotation";
ProtoInterface4.field[79] = field84;

let field85 = browser.currentScene.createNode("field");
field85.name = "l_eyebrow_key";
field85.accessType = "inputOutput";
field85.type = "MFFloat";
//no default value
ProtoInterface4.field[80] = field85;

let field86 = browser.currentScene.createNode("field");
field86.name = "l_eyebrow_keyValue";
field86.accessType = "inputOutput";
field86.type = "MFRotation";
//no default value
ProtoInterface4.field[81] = field86;

let field87 = browser.currentScene.createNode("field");
field87.name = "l_eyebrow_changed";
field87.accessType = "outputOnly";
field87.type = "SFRotation";
ProtoInterface4.field[82] = field87;

let field88 = browser.currentScene.createNode("field");
field88.name = "l_eyebrow_joint_key";
field88.accessType = "inputOutput";
field88.type = "MFFloat";
//no default value
ProtoInterface4.field[83] = field88;

let field89 = browser.currentScene.createNode("field");
field89.name = "l_eyebrow_joint_keyValue";
field89.accessType = "inputOutput";
field89.type = "MFRotation";
//no default value
ProtoInterface4.field[84] = field89;

let field90 = browser.currentScene.createNode("field");
field90.name = "l_eyebrow_joint_changed";
field90.accessType = "outputOnly";
field90.type = "SFRotation";
ProtoInterface4.field[85] = field90;

let field91 = browser.currentScene.createNode("field");
field91.name = "l_eyelid_key";
field91.accessType = "inputOutput";
field91.type = "MFFloat";
//no default value
ProtoInterface4.field[86] = field91;

let field92 = browser.currentScene.createNode("field");
field92.name = "l_eyelid_keyValue";
field92.accessType = "inputOutput";
field92.type = "MFRotation";
//no default value
ProtoInterface4.field[87] = field92;

let field93 = browser.currentScene.createNode("field");
field93.name = "l_eyelid_changed";
field93.accessType = "outputOnly";
field93.type = "SFRotation";
ProtoInterface4.field[88] = field93;

let field94 = browser.currentScene.createNode("field");
field94.name = "l_eyelid_joint_key";
field94.accessType = "inputOutput";
field94.type = "MFFloat";
//no default value
ProtoInterface4.field[89] = field94;

let field95 = browser.currentScene.createNode("field");
field95.name = "l_eyelid_joint_keyValue";
field95.accessType = "inputOutput";
field95.type = "MFRotation";
//no default value
ProtoInterface4.field[90] = field95;

let field96 = browser.currentScene.createNode("field");
field96.name = "l_eyelid_joint_changed";
field96.accessType = "outputOnly";
field96.type = "SFRotation";
ProtoInterface4.field[91] = field96;

let field97 = browser.currentScene.createNode("field");
field97.name = "l_forearm_key";
field97.accessType = "inputOutput";
field97.type = "MFFloat";
//no default value
ProtoInterface4.field[92] = field97;

let field98 = browser.currentScene.createNode("field");
field98.name = "l_forearm_keyValue";
field98.accessType = "inputOutput";
field98.type = "MFRotation";
//no default value
ProtoInterface4.field[93] = field98;

let field99 = browser.currentScene.createNode("field");
field99.name = "l_forearm_changed";
field99.accessType = "outputOnly";
field99.type = "SFRotation";
ProtoInterface4.field[94] = field99;

let field100 = browser.currentScene.createNode("field");
field100.name = "l_forefoot_key";
field100.accessType = "inputOutput";
field100.type = "MFFloat";
//no default value
ProtoInterface4.field[95] = field100;

let field101 = browser.currentScene.createNode("field");
field101.name = "l_forefoot_keyValue";
field101.accessType = "inputOutput";
field101.type = "MFRotation";
//no default value
ProtoInterface4.field[96] = field101;

let field102 = browser.currentScene.createNode("field");
field102.name = "l_forefoot_changed";
field102.accessType = "outputOnly";
field102.type = "SFRotation";
ProtoInterface4.field[97] = field102;

let field103 = browser.currentScene.createNode("field");
field103.name = "l_hand_key";
field103.accessType = "inputOutput";
field103.type = "MFFloat";
//no default value
ProtoInterface4.field[98] = field103;

let field104 = browser.currentScene.createNode("field");
field104.name = "l_hand_keyValue";
field104.accessType = "inputOutput";
field104.type = "MFRotation";
//no default value
ProtoInterface4.field[99] = field104;

let field105 = browser.currentScene.createNode("field");
field105.name = "l_hand_changed";
field105.accessType = "outputOnly";
field105.type = "SFRotation";
ProtoInterface4.field[100] = field105;

let field106 = browser.currentScene.createNode("field");
field106.name = "l_hindfoot_key";
field106.accessType = "inputOutput";
field106.type = "MFFloat";
//no default value
ProtoInterface4.field[101] = field106;

let field107 = browser.currentScene.createNode("field");
field107.name = "l_hindfoot_keyValue";
field107.accessType = "inputOutput";
field107.type = "MFRotation";
//no default value
ProtoInterface4.field[102] = field107;

let field108 = browser.currentScene.createNode("field");
field108.name = "l_hindfoot_changed";
field108.accessType = "outputOnly";
field108.type = "SFRotation";
ProtoInterface4.field[103] = field108;

let field109 = browser.currentScene.createNode("field");
field109.name = "l_hip_key";
field109.accessType = "inputOutput";
field109.type = "MFFloat";
//no default value
ProtoInterface4.field[104] = field109;

let field110 = browser.currentScene.createNode("field");
field110.name = "l_hip_keyValue";
field110.accessType = "inputOutput";
field110.type = "MFRotation";
//no default value
ProtoInterface4.field[105] = field110;

let field111 = browser.currentScene.createNode("field");
field111.name = "l_hip_changed";
field111.accessType = "outputOnly";
field111.type = "SFRotation";
ProtoInterface4.field[106] = field111;

let field112 = browser.currentScene.createNode("field");
field112.name = "l_index0_key";
field112.accessType = "inputOutput";
field112.type = "MFFloat";
//no default value
ProtoInterface4.field[107] = field112;

let field113 = browser.currentScene.createNode("field");
field113.name = "l_index0_keyValue";
field113.accessType = "inputOutput";
field113.type = "MFRotation";
//no default value
ProtoInterface4.field[108] = field113;

let field114 = browser.currentScene.createNode("field");
field114.name = "l_index0_changed";
field114.accessType = "outputOnly";
field114.type = "SFRotation";
ProtoInterface4.field[109] = field114;

let field115 = browser.currentScene.createNode("field");
field115.name = "l_index1_key";
field115.accessType = "inputOutput";
field115.type = "MFFloat";
//no default value
ProtoInterface4.field[110] = field115;

let field116 = browser.currentScene.createNode("field");
field116.name = "l_index1_keyValue";
field116.accessType = "inputOutput";
field116.type = "MFRotation";
//no default value
ProtoInterface4.field[111] = field116;

let field117 = browser.currentScene.createNode("field");
field117.name = "l_index1_changed";
field117.accessType = "outputOnly";
field117.type = "SFRotation";
ProtoInterface4.field[112] = field117;

let field118 = browser.currentScene.createNode("field");
field118.name = "l_index2_key";
field118.accessType = "inputOutput";
field118.type = "MFFloat";
//no default value
ProtoInterface4.field[113] = field118;

let field119 = browser.currentScene.createNode("field");
field119.name = "l_index2_keyValue";
field119.accessType = "inputOutput";
field119.type = "MFRotation";
//no default value
ProtoInterface4.field[114] = field119;

let field120 = browser.currentScene.createNode("field");
field120.name = "l_index2_changed";
field120.accessType = "outputOnly";
field120.type = "SFRotation";
ProtoInterface4.field[115] = field120;

let field121 = browser.currentScene.createNode("field");
field121.name = "l_index3_key";
field121.accessType = "inputOutput";
field121.type = "MFFloat";
//no default value
ProtoInterface4.field[116] = field121;

let field122 = browser.currentScene.createNode("field");
field122.name = "l_index3_keyValue";
field122.accessType = "inputOutput";
field122.type = "MFRotation";
//no default value
ProtoInterface4.field[117] = field122;

let field123 = browser.currentScene.createNode("field");
field123.name = "l_index3_changed";
field123.accessType = "outputOnly";
field123.type = "SFRotation";
ProtoInterface4.field[118] = field123;

let field124 = browser.currentScene.createNode("field");
field124.name = "l_index_distal_key";
field124.accessType = "inputOutput";
field124.type = "MFFloat";
//no default value
ProtoInterface4.field[119] = field124;

let field125 = browser.currentScene.createNode("field");
field125.name = "l_index_distal_keyValue";
field125.accessType = "inputOutput";
field125.type = "MFRotation";
//no default value
ProtoInterface4.field[120] = field125;

let field126 = browser.currentScene.createNode("field");
field126.name = "l_index_distal_changed";
field126.accessType = "outputOnly";
field126.type = "SFRotation";
ProtoInterface4.field[121] = field126;

let field127 = browser.currentScene.createNode("field");
field127.name = "l_index_metacarpal_key";
field127.accessType = "inputOutput";
field127.type = "MFFloat";
//no default value
ProtoInterface4.field[122] = field127;

let field128 = browser.currentScene.createNode("field");
field128.name = "l_index_metacarpal_keyValue";
field128.accessType = "inputOutput";
field128.type = "MFRotation";
//no default value
ProtoInterface4.field[123] = field128;

let field129 = browser.currentScene.createNode("field");
field129.name = "l_index_metacarpal_changed";
field129.accessType = "outputOnly";
field129.type = "SFRotation";
ProtoInterface4.field[124] = field129;

let field130 = browser.currentScene.createNode("field");
field130.name = "l_index_middle_key";
field130.accessType = "inputOutput";
field130.type = "MFFloat";
//no default value
ProtoInterface4.field[125] = field130;

let field131 = browser.currentScene.createNode("field");
field131.name = "l_index_middle_keyValue";
field131.accessType = "inputOutput";
field131.type = "MFRotation";
//no default value
ProtoInterface4.field[126] = field131;

let field132 = browser.currentScene.createNode("field");
field132.name = "l_index_middle_changed";
field132.accessType = "outputOnly";
field132.type = "SFRotation";
ProtoInterface4.field[127] = field132;

let field133 = browser.currentScene.createNode("field");
field133.name = "l_index_proximal_key";
field133.accessType = "inputOutput";
field133.type = "MFFloat";
//no default value
ProtoInterface4.field[128] = field133;

let field134 = browser.currentScene.createNode("field");
field134.name = "l_index_proximal_keyValue";
field134.accessType = "inputOutput";
field134.type = "MFRotation";
//no default value
ProtoInterface4.field[129] = field134;

let field135 = browser.currentScene.createNode("field");
field135.name = "l_index_proximal_changed";
field135.accessType = "outputOnly";
field135.type = "SFRotation";
ProtoInterface4.field[130] = field135;

let field136 = browser.currentScene.createNode("field");
field136.name = "l_knee_key";
field136.accessType = "inputOutput";
field136.type = "MFFloat";
//no default value
ProtoInterface4.field[131] = field136;

let field137 = browser.currentScene.createNode("field");
field137.name = "l_knee_keyValue";
field137.accessType = "inputOutput";
field137.type = "MFRotation";
//no default value
ProtoInterface4.field[132] = field137;

let field138 = browser.currentScene.createNode("field");
field138.name = "l_knee_changed";
field138.accessType = "outputOnly";
field138.type = "SFRotation";
ProtoInterface4.field[133] = field138;

let field139 = browser.currentScene.createNode("field");
field139.name = "l_metatarsal_key";
field139.accessType = "inputOutput";
field139.type = "MFFloat";
//no default value
ProtoInterface4.field[134] = field139;

let field140 = browser.currentScene.createNode("field");
field140.name = "l_metatarsal_keyValue";
field140.accessType = "inputOutput";
field140.type = "MFRotation";
//no default value
ProtoInterface4.field[135] = field140;

let field141 = browser.currentScene.createNode("field");
field141.name = "l_metatarsal_changed";
field141.accessType = "outputOnly";
field141.type = "SFRotation";
ProtoInterface4.field[136] = field141;

let field142 = browser.currentScene.createNode("field");
field142.name = "l_middistal_key";
field142.accessType = "inputOutput";
field142.type = "MFFloat";
//no default value
ProtoInterface4.field[137] = field142;

let field143 = browser.currentScene.createNode("field");
field143.name = "l_middistal_keyValue";
field143.accessType = "inputOutput";
field143.type = "MFRotation";
//no default value
ProtoInterface4.field[138] = field143;

let field144 = browser.currentScene.createNode("field");
field144.name = "l_middistal_changed";
field144.accessType = "outputOnly";
field144.type = "SFRotation";
ProtoInterface4.field[139] = field144;

let field145 = browser.currentScene.createNode("field");
field145.name = "l_middle0_key";
field145.accessType = "inputOutput";
field145.type = "MFFloat";
//no default value
ProtoInterface4.field[140] = field145;

let field146 = browser.currentScene.createNode("field");
field146.name = "l_middle0_keyValue";
field146.accessType = "inputOutput";
field146.type = "MFRotation";
//no default value
ProtoInterface4.field[141] = field146;

let field147 = browser.currentScene.createNode("field");
field147.name = "l_middle0_changed";
field147.accessType = "outputOnly";
field147.type = "SFRotation";
ProtoInterface4.field[142] = field147;

let field148 = browser.currentScene.createNode("field");
field148.name = "l_middle1_key";
field148.accessType = "inputOutput";
field148.type = "MFFloat";
//no default value
ProtoInterface4.field[143] = field148;

let field149 = browser.currentScene.createNode("field");
field149.name = "l_middle1_keyValue";
field149.accessType = "inputOutput";
field149.type = "MFRotation";
//no default value
ProtoInterface4.field[144] = field149;

let field150 = browser.currentScene.createNode("field");
field150.name = "l_middle1_changed";
field150.accessType = "outputOnly";
field150.type = "SFRotation";
ProtoInterface4.field[145] = field150;

let field151 = browser.currentScene.createNode("field");
field151.name = "l_middle2_key";
field151.accessType = "inputOutput";
field151.type = "MFFloat";
//no default value
ProtoInterface4.field[146] = field151;

let field152 = browser.currentScene.createNode("field");
field152.name = "l_middle2_keyValue";
field152.accessType = "inputOutput";
field152.type = "MFRotation";
//no default value
ProtoInterface4.field[147] = field152;

let field153 = browser.currentScene.createNode("field");
field153.name = "l_middle2_changed";
field153.accessType = "outputOnly";
field153.type = "SFRotation";
ProtoInterface4.field[148] = field153;

let field154 = browser.currentScene.createNode("field");
field154.name = "l_middle3_key";
field154.accessType = "inputOutput";
field154.type = "MFFloat";
//no default value
ProtoInterface4.field[149] = field154;

let field155 = browser.currentScene.createNode("field");
field155.name = "l_middle3_keyValue";
field155.accessType = "inputOutput";
field155.type = "MFRotation";
//no default value
ProtoInterface4.field[150] = field155;

let field156 = browser.currentScene.createNode("field");
field156.name = "l_middle3_changed";
field156.accessType = "outputOnly";
field156.type = "SFRotation";
ProtoInterface4.field[151] = field156;

let field157 = browser.currentScene.createNode("field");
field157.name = "l_middle_distal_key";
field157.accessType = "inputOutput";
field157.type = "MFFloat";
//no default value
ProtoInterface4.field[152] = field157;

let field158 = browser.currentScene.createNode("field");
field158.name = "l_middle_distal_keyValue";
field158.accessType = "inputOutput";
field158.type = "MFRotation";
//no default value
ProtoInterface4.field[153] = field158;

let field159 = browser.currentScene.createNode("field");
field159.name = "l_middle_distal_changed";
field159.accessType = "outputOnly";
field159.type = "SFRotation";
ProtoInterface4.field[154] = field159;

let field160 = browser.currentScene.createNode("field");
field160.name = "l_middle_metacarpal_key";
field160.accessType = "inputOutput";
field160.type = "MFFloat";
//no default value
ProtoInterface4.field[155] = field160;

let field161 = browser.currentScene.createNode("field");
field161.name = "l_middle_metacarpal_keyValue";
field161.accessType = "inputOutput";
field161.type = "MFRotation";
//no default value
ProtoInterface4.field[156] = field161;

let field162 = browser.currentScene.createNode("field");
field162.name = "l_middle_metacarpal_changed";
field162.accessType = "outputOnly";
field162.type = "SFRotation";
ProtoInterface4.field[157] = field162;

let field163 = browser.currentScene.createNode("field");
field163.name = "l_middle_middle_key";
field163.accessType = "inputOutput";
field163.type = "MFFloat";
//no default value
ProtoInterface4.field[158] = field163;

let field164 = browser.currentScene.createNode("field");
field164.name = "l_middle_middle_keyValue";
field164.accessType = "inputOutput";
field164.type = "MFRotation";
//no default value
ProtoInterface4.field[159] = field164;

let field165 = browser.currentScene.createNode("field");
field165.name = "l_middle_middle_changed";
field165.accessType = "outputOnly";
field165.type = "SFRotation";
ProtoInterface4.field[160] = field165;

let field166 = browser.currentScene.createNode("field");
field166.name = "l_middle_proximal_key";
field166.accessType = "inputOutput";
field166.type = "MFFloat";
//no default value
ProtoInterface4.field[161] = field166;

let field167 = browser.currentScene.createNode("field");
field167.name = "l_middle_proximal_keyValue";
field167.accessType = "inputOutput";
field167.type = "MFRotation";
//no default value
ProtoInterface4.field[162] = field167;

let field168 = browser.currentScene.createNode("field");
field168.name = "l_middle_proximal_changed";
field168.accessType = "outputOnly";
field168.type = "SFRotation";
ProtoInterface4.field[163] = field168;

let field169 = browser.currentScene.createNode("field");
field169.name = "l_midproximal_key";
field169.accessType = "inputOutput";
field169.type = "MFFloat";
//no default value
ProtoInterface4.field[164] = field169;

let field170 = browser.currentScene.createNode("field");
field170.name = "l_midproximal_keyValue";
field170.accessType = "inputOutput";
field170.type = "MFRotation";
//no default value
ProtoInterface4.field[165] = field170;

let field171 = browser.currentScene.createNode("field");
field171.name = "l_midproximal_changed";
field171.accessType = "outputOnly";
field171.type = "SFRotation";
ProtoInterface4.field[166] = field171;

let field172 = browser.currentScene.createNode("field");
field172.name = "l_midtarsal_key";
field172.accessType = "inputOutput";
field172.type = "MFFloat";
//no default value
ProtoInterface4.field[167] = field172;

let field173 = browser.currentScene.createNode("field");
field173.name = "l_midtarsal_keyValue";
field173.accessType = "inputOutput";
field173.type = "MFRotation";
//no default value
ProtoInterface4.field[168] = field173;

let field174 = browser.currentScene.createNode("field");
field174.name = "l_midtarsal_changed";
field174.accessType = "outputOnly";
field174.type = "SFRotation";
ProtoInterface4.field[169] = field174;

let field175 = browser.currentScene.createNode("field");
field175.name = "l_pinky0_key";
field175.accessType = "inputOutput";
field175.type = "MFFloat";
//no default value
ProtoInterface4.field[170] = field175;

let field176 = browser.currentScene.createNode("field");
field176.name = "l_pinky0_keyValue";
field176.accessType = "inputOutput";
field176.type = "MFRotation";
//no default value
ProtoInterface4.field[171] = field176;

let field177 = browser.currentScene.createNode("field");
field177.name = "l_pinky0_changed";
field177.accessType = "outputOnly";
field177.type = "SFRotation";
ProtoInterface4.field[172] = field177;

let field178 = browser.currentScene.createNode("field");
field178.name = "l_pinky1_key";
field178.accessType = "inputOutput";
field178.type = "MFFloat";
//no default value
ProtoInterface4.field[173] = field178;

let field179 = browser.currentScene.createNode("field");
field179.name = "l_pinky1_keyValue";
field179.accessType = "inputOutput";
field179.type = "MFRotation";
//no default value
ProtoInterface4.field[174] = field179;

let field180 = browser.currentScene.createNode("field");
field180.name = "l_pinky1_changed";
field180.accessType = "outputOnly";
field180.type = "SFRotation";
ProtoInterface4.field[175] = field180;

let field181 = browser.currentScene.createNode("field");
field181.name = "l_pinky2_key";
field181.accessType = "inputOutput";
field181.type = "MFFloat";
//no default value
ProtoInterface4.field[176] = field181;

let field182 = browser.currentScene.createNode("field");
field182.name = "l_pinky2_keyValue";
field182.accessType = "inputOutput";
field182.type = "MFRotation";
//no default value
ProtoInterface4.field[177] = field182;

let field183 = browser.currentScene.createNode("field");
field183.name = "l_pinky2_changed";
field183.accessType = "outputOnly";
field183.type = "SFRotation";
ProtoInterface4.field[178] = field183;

let field184 = browser.currentScene.createNode("field");
field184.name = "l_pinky3_key";
field184.accessType = "inputOutput";
field184.type = "MFFloat";
//no default value
ProtoInterface4.field[179] = field184;

let field185 = browser.currentScene.createNode("field");
field185.name = "l_pinky3_keyValue";
field185.accessType = "inputOutput";
field185.type = "MFRotation";
//no default value
ProtoInterface4.field[180] = field185;

let field186 = browser.currentScene.createNode("field");
field186.name = "l_pinky3_changed";
field186.accessType = "outputOnly";
field186.type = "SFRotation";
ProtoInterface4.field[181] = field186;

let field187 = browser.currentScene.createNode("field");
field187.name = "l_pinky_distal_key";
field187.accessType = "inputOutput";
field187.type = "MFFloat";
//no default value
ProtoInterface4.field[182] = field187;

let field188 = browser.currentScene.createNode("field");
field188.name = "l_pinky_distal_keyValue";
field188.accessType = "inputOutput";
field188.type = "MFRotation";
//no default value
ProtoInterface4.field[183] = field188;

let field189 = browser.currentScene.createNode("field");
field189.name = "l_pinky_distal_changed";
field189.accessType = "outputOnly";
field189.type = "SFRotation";
ProtoInterface4.field[184] = field189;

let field190 = browser.currentScene.createNode("field");
field190.name = "l_pinky_metacarpal_key";
field190.accessType = "inputOutput";
field190.type = "MFFloat";
//no default value
ProtoInterface4.field[185] = field190;

let field191 = browser.currentScene.createNode("field");
field191.name = "l_pinky_metacarpal_keyValue";
field191.accessType = "inputOutput";
field191.type = "MFRotation";
//no default value
ProtoInterface4.field[186] = field191;

let field192 = browser.currentScene.createNode("field");
field192.name = "l_pinky_metacarpal_changed";
field192.accessType = "outputOnly";
field192.type = "SFRotation";
ProtoInterface4.field[187] = field192;

let field193 = browser.currentScene.createNode("field");
field193.name = "l_pinky_middle_key";
field193.accessType = "inputOutput";
field193.type = "MFFloat";
//no default value
ProtoInterface4.field[188] = field193;

let field194 = browser.currentScene.createNode("field");
field194.name = "l_pinky_middle_keyValue";
field194.accessType = "inputOutput";
field194.type = "MFRotation";
//no default value
ProtoInterface4.field[189] = field194;

let field195 = browser.currentScene.createNode("field");
field195.name = "l_pinky_middle_changed";
field195.accessType = "outputOnly";
field195.type = "SFRotation";
ProtoInterface4.field[190] = field195;

let field196 = browser.currentScene.createNode("field");
field196.name = "l_pinky_proximal_key";
field196.accessType = "inputOutput";
field196.type = "MFFloat";
//no default value
ProtoInterface4.field[191] = field196;

let field197 = browser.currentScene.createNode("field");
field197.name = "l_pinky_proximal_keyValue";
field197.accessType = "inputOutput";
field197.type = "MFRotation";
//no default value
ProtoInterface4.field[192] = field197;

let field198 = browser.currentScene.createNode("field");
field198.name = "l_pinky_proximal_changed";
field198.accessType = "outputOnly";
field198.type = "SFRotation";
ProtoInterface4.field[193] = field198;

let field199 = browser.currentScene.createNode("field");
field199.name = "l_ring0_key";
field199.accessType = "inputOutput";
field199.type = "MFFloat";
//no default value
ProtoInterface4.field[194] = field199;

let field200 = browser.currentScene.createNode("field");
field200.name = "l_ring0_keyValue";
field200.accessType = "inputOutput";
field200.type = "MFRotation";
//no default value
ProtoInterface4.field[195] = field200;

let field201 = browser.currentScene.createNode("field");
field201.name = "l_ring0_changed";
field201.accessType = "outputOnly";
field201.type = "SFRotation";
ProtoInterface4.field[196] = field201;

let field202 = browser.currentScene.createNode("field");
field202.name = "l_ring1_key";
field202.accessType = "inputOutput";
field202.type = "MFFloat";
//no default value
ProtoInterface4.field[197] = field202;

let field203 = browser.currentScene.createNode("field");
field203.name = "l_ring1_keyValue";
field203.accessType = "inputOutput";
field203.type = "MFRotation";
//no default value
ProtoInterface4.field[198] = field203;

let field204 = browser.currentScene.createNode("field");
field204.name = "l_ring1_changed";
field204.accessType = "outputOnly";
field204.type = "SFRotation";
ProtoInterface4.field[199] = field204;

let field205 = browser.currentScene.createNode("field");
field205.name = "l_ring2_key";
field205.accessType = "inputOutput";
field205.type = "MFFloat";
//no default value
ProtoInterface4.field[200] = field205;

let field206 = browser.currentScene.createNode("field");
field206.name = "l_ring2_keyValue";
field206.accessType = "inputOutput";
field206.type = "MFRotation";
//no default value
ProtoInterface4.field[201] = field206;

let field207 = browser.currentScene.createNode("field");
field207.name = "l_ring2_changed";
field207.accessType = "outputOnly";
field207.type = "SFRotation";
ProtoInterface4.field[202] = field207;

let field208 = browser.currentScene.createNode("field");
field208.name = "l_ring3_key";
field208.accessType = "inputOutput";
field208.type = "MFFloat";
//no default value
ProtoInterface4.field[203] = field208;

let field209 = browser.currentScene.createNode("field");
field209.name = "l_ring3_keyValue";
field209.accessType = "inputOutput";
field209.type = "MFRotation";
//no default value
ProtoInterface4.field[204] = field209;

let field210 = browser.currentScene.createNode("field");
field210.name = "l_ring3_changed";
field210.accessType = "outputOnly";
field210.type = "SFRotation";
ProtoInterface4.field[205] = field210;

let field211 = browser.currentScene.createNode("field");
field211.name = "l_ring_distal_key";
field211.accessType = "inputOutput";
field211.type = "MFFloat";
//no default value
ProtoInterface4.field[206] = field211;

let field212 = browser.currentScene.createNode("field");
field212.name = "l_ring_distal_keyValue";
field212.accessType = "inputOutput";
field212.type = "MFRotation";
//no default value
ProtoInterface4.field[207] = field212;

let field213 = browser.currentScene.createNode("field");
field213.name = "l_ring_distal_changed";
field213.accessType = "outputOnly";
field213.type = "SFRotation";
ProtoInterface4.field[208] = field213;

let field214 = browser.currentScene.createNode("field");
field214.name = "l_ring_metacarpal_key";
field214.accessType = "inputOutput";
field214.type = "MFFloat";
//no default value
ProtoInterface4.field[209] = field214;

let field215 = browser.currentScene.createNode("field");
field215.name = "l_ring_metacarpal_keyValue";
field215.accessType = "inputOutput";
field215.type = "MFRotation";
//no default value
ProtoInterface4.field[210] = field215;

let field216 = browser.currentScene.createNode("field");
field216.name = "l_ring_metacarpal_changed";
field216.accessType = "outputOnly";
field216.type = "SFRotation";
ProtoInterface4.field[211] = field216;

let field217 = browser.currentScene.createNode("field");
field217.name = "l_ring_middle_key";
field217.accessType = "inputOutput";
field217.type = "MFFloat";
//no default value
ProtoInterface4.field[212] = field217;

let field218 = browser.currentScene.createNode("field");
field218.name = "l_ring_middle_keyValue";
field218.accessType = "inputOutput";
field218.type = "MFRotation";
//no default value
ProtoInterface4.field[213] = field218;

let field219 = browser.currentScene.createNode("field");
field219.name = "l_ring_middle_changed";
field219.accessType = "outputOnly";
field219.type = "SFRotation";
ProtoInterface4.field[214] = field219;

let field220 = browser.currentScene.createNode("field");
field220.name = "l_ring_proximal_key";
field220.accessType = "inputOutput";
field220.type = "MFFloat";
//no default value
ProtoInterface4.field[215] = field220;

let field221 = browser.currentScene.createNode("field");
field221.name = "l_ring_proximal_keyValue";
field221.accessType = "inputOutput";
field221.type = "MFRotation";
//no default value
ProtoInterface4.field[216] = field221;

let field222 = browser.currentScene.createNode("field");
field222.name = "l_ring_proximal_changed";
field222.accessType = "outputOnly";
field222.type = "SFRotation";
ProtoInterface4.field[217] = field222;

let field223 = browser.currentScene.createNode("field");
field223.name = "l_scapula_key";
field223.accessType = "inputOutput";
field223.type = "MFFloat";
//no default value
ProtoInterface4.field[218] = field223;

let field224 = browser.currentScene.createNode("field");
field224.name = "l_scapula_keyValue";
field224.accessType = "inputOutput";
field224.type = "MFRotation";
//no default value
ProtoInterface4.field[219] = field224;

let field225 = browser.currentScene.createNode("field");
field225.name = "l_scapula_changed";
field225.accessType = "outputOnly";
field225.type = "SFRotation";
ProtoInterface4.field[220] = field225;

let field226 = browser.currentScene.createNode("field");
field226.name = "l_shoulder_key";
field226.accessType = "inputOutput";
field226.type = "MFFloat";
//no default value
ProtoInterface4.field[221] = field226;

let field227 = browser.currentScene.createNode("field");
field227.name = "l_shoulder_keyValue";
field227.accessType = "inputOutput";
field227.type = "MFRotation";
//no default value
ProtoInterface4.field[222] = field227;

let field228 = browser.currentScene.createNode("field");
field228.name = "l_shoulder_changed";
field228.accessType = "outputOnly";
field228.type = "SFRotation";
ProtoInterface4.field[223] = field228;

let field229 = browser.currentScene.createNode("field");
field229.name = "l_sternoclavicular_key";
field229.accessType = "inputOutput";
field229.type = "MFFloat";
//no default value
ProtoInterface4.field[224] = field229;

let field230 = browser.currentScene.createNode("field");
field230.name = "l_sternoclavicular_keyValue";
field230.accessType = "inputOutput";
field230.type = "MFRotation";
//no default value
ProtoInterface4.field[225] = field230;

let field231 = browser.currentScene.createNode("field");
field231.name = "l_sternoclavicular_changed";
field231.accessType = "outputOnly";
field231.type = "SFRotation";
ProtoInterface4.field[226] = field231;

let field232 = browser.currentScene.createNode("field");
field232.name = "l_subtalar_key";
field232.accessType = "inputOutput";
field232.type = "MFFloat";
//no default value
ProtoInterface4.field[227] = field232;

let field233 = browser.currentScene.createNode("field");
field233.name = "l_subtalar_keyValue";
field233.accessType = "inputOutput";
field233.type = "MFRotation";
//no default value
ProtoInterface4.field[228] = field233;

let field234 = browser.currentScene.createNode("field");
field234.name = "l_subtalar_changed";
field234.accessType = "outputOnly";
field234.type = "SFRotation";
ProtoInterface4.field[229] = field234;

let field235 = browser.currentScene.createNode("field");
field235.name = "l_thigh_key";
field235.accessType = "inputOutput";
field235.type = "MFFloat";
//no default value
ProtoInterface4.field[230] = field235;

let field236 = browser.currentScene.createNode("field");
field236.name = "l_thigh_keyValue";
field236.accessType = "inputOutput";
field236.type = "MFRotation";
//no default value
ProtoInterface4.field[231] = field236;

let field237 = browser.currentScene.createNode("field");
field237.name = "l_thigh_changed";
field237.accessType = "outputOnly";
field237.type = "SFRotation";
ProtoInterface4.field[232] = field237;

let field238 = browser.currentScene.createNode("field");
field238.name = "l_thumb1_key";
field238.accessType = "inputOutput";
field238.type = "MFFloat";
//no default value
ProtoInterface4.field[233] = field238;

let field239 = browser.currentScene.createNode("field");
field239.name = "l_thumb1_keyValue";
field239.accessType = "inputOutput";
field239.type = "MFRotation";
//no default value
ProtoInterface4.field[234] = field239;

let field240 = browser.currentScene.createNode("field");
field240.name = "l_thumb1_changed";
field240.accessType = "outputOnly";
field240.type = "SFRotation";
ProtoInterface4.field[235] = field240;

let field241 = browser.currentScene.createNode("field");
field241.name = "l_thumb2_key";
field241.accessType = "inputOutput";
field241.type = "MFFloat";
//no default value
ProtoInterface4.field[236] = field241;

let field242 = browser.currentScene.createNode("field");
field242.name = "l_thumb2_keyValue";
field242.accessType = "inputOutput";
field242.type = "MFRotation";
//no default value
ProtoInterface4.field[237] = field242;

let field243 = browser.currentScene.createNode("field");
field243.name = "l_thumb2_changed";
field243.accessType = "outputOnly";
field243.type = "SFRotation";
ProtoInterface4.field[238] = field243;

let field244 = browser.currentScene.createNode("field");
field244.name = "l_thumb3_key";
field244.accessType = "inputOutput";
field244.type = "MFFloat";
//no default value
ProtoInterface4.field[239] = field244;

let field245 = browser.currentScene.createNode("field");
field245.name = "l_thumb3_keyValue";
field245.accessType = "inputOutput";
field245.type = "MFRotation";
//no default value
ProtoInterface4.field[240] = field245;

let field246 = browser.currentScene.createNode("field");
field246.name = "l_thumb3_changed";
field246.accessType = "outputOnly";
field246.type = "SFRotation";
ProtoInterface4.field[241] = field246;

let field247 = browser.currentScene.createNode("field");
field247.name = "l_thumb_distal_key";
field247.accessType = "inputOutput";
field247.type = "MFFloat";
//no default value
ProtoInterface4.field[242] = field247;

let field248 = browser.currentScene.createNode("field");
field248.name = "l_thumb_distal_keyValue";
field248.accessType = "inputOutput";
field248.type = "MFRotation";
//no default value
ProtoInterface4.field[243] = field248;

let field249 = browser.currentScene.createNode("field");
field249.name = "l_thumb_distal_changed";
field249.accessType = "outputOnly";
field249.type = "SFRotation";
ProtoInterface4.field[244] = field249;

let field250 = browser.currentScene.createNode("field");
field250.name = "l_thumb_metacarpal_key";
field250.accessType = "inputOutput";
field250.type = "MFFloat";
//no default value
ProtoInterface4.field[245] = field250;

let field251 = browser.currentScene.createNode("field");
field251.name = "l_thumb_metacarpal_keyValue";
field251.accessType = "inputOutput";
field251.type = "MFRotation";
//no default value
ProtoInterface4.field[246] = field251;

let field252 = browser.currentScene.createNode("field");
field252.name = "l_thumb_metacarpal_changed";
field252.accessType = "outputOnly";
field252.type = "SFRotation";
ProtoInterface4.field[247] = field252;

let field253 = browser.currentScene.createNode("field");
field253.name = "l_thumb_proximal_key";
field253.accessType = "inputOutput";
field253.type = "MFFloat";
//no default value
ProtoInterface4.field[248] = field253;

let field254 = browser.currentScene.createNode("field");
field254.name = "l_thumb_proximal_keyValue";
field254.accessType = "inputOutput";
field254.type = "MFRotation";
//no default value
ProtoInterface4.field[249] = field254;

let field255 = browser.currentScene.createNode("field");
field255.name = "l_thumb_proximal_changed";
field255.accessType = "outputOnly";
field255.type = "SFRotation";
ProtoInterface4.field[250] = field255;

let field256 = browser.currentScene.createNode("field");
field256.name = "l_upperarm_key";
field256.accessType = "inputOutput";
field256.type = "MFFloat";
//no default value
ProtoInterface4.field[251] = field256;

let field257 = browser.currentScene.createNode("field");
field257.name = "l_upperarm_keyValue";
field257.accessType = "inputOutput";
field257.type = "MFRotation";
//no default value
ProtoInterface4.field[252] = field257;

let field258 = browser.currentScene.createNode("field");
field258.name = "l_upperarm_changed";
field258.accessType = "outputOnly";
field258.type = "SFRotation";
ProtoInterface4.field[253] = field258;

let field259 = browser.currentScene.createNode("field");
field259.name = "l_wrist_key";
field259.accessType = "inputOutput";
field259.type = "MFFloat";
//no default value
ProtoInterface4.field[254] = field259;

let field260 = browser.currentScene.createNode("field");
field260.name = "l_wrist_keyValue";
field260.accessType = "inputOutput";
field260.type = "MFRotation";
//no default value
ProtoInterface4.field[255] = field260;

let field261 = browser.currentScene.createNode("field");
field261.name = "l_wrist_changed";
field261.accessType = "outputOnly";
field261.type = "SFRotation";
ProtoInterface4.field[256] = field261;

let field262 = browser.currentScene.createNode("field");
field262.name = "pelvis_key";
field262.accessType = "inputOutput";
field262.type = "MFFloat";
//no default value
ProtoInterface4.field[257] = field262;

let field263 = browser.currentScene.createNode("field");
field263.name = "pelvis_keyValue";
field263.accessType = "inputOutput";
field263.type = "MFRotation";
//no default value
ProtoInterface4.field[258] = field263;

let field264 = browser.currentScene.createNode("field");
field264.name = "pelvis_changed";
field264.accessType = "outputOnly";
field264.type = "SFRotation";
ProtoInterface4.field[259] = field264;

let field265 = browser.currentScene.createNode("field");
field265.name = "r_acromioclavicular_key";
field265.accessType = "inputOutput";
field265.type = "MFFloat";
//no default value
ProtoInterface4.field[260] = field265;

let field266 = browser.currentScene.createNode("field");
field266.name = "r_acromioclavicular_keyValue";
field266.accessType = "inputOutput";
field266.type = "MFRotation";
//no default value
ProtoInterface4.field[261] = field266;

let field267 = browser.currentScene.createNode("field");
field267.name = "r_acromioclavicular_changed";
field267.accessType = "outputOnly";
field267.type = "SFRotation";
ProtoInterface4.field[262] = field267;

let field268 = browser.currentScene.createNode("field");
field268.name = "r_ankle_key";
field268.accessType = "inputOutput";
field268.type = "MFFloat";
//no default value
ProtoInterface4.field[263] = field268;

let field269 = browser.currentScene.createNode("field");
field269.name = "r_ankle_keyValue";
field269.accessType = "inputOutput";
field269.type = "MFRotation";
//no default value
ProtoInterface4.field[264] = field269;

let field270 = browser.currentScene.createNode("field");
field270.name = "r_ankle_changed";
field270.accessType = "outputOnly";
field270.type = "SFRotation";
ProtoInterface4.field[265] = field270;

let field271 = browser.currentScene.createNode("field");
field271.name = "r_calf_key";
field271.accessType = "inputOutput";
field271.type = "MFFloat";
//no default value
ProtoInterface4.field[266] = field271;

let field272 = browser.currentScene.createNode("field");
field272.name = "r_calf_keyValue";
field272.accessType = "inputOutput";
field272.type = "MFRotation";
//no default value
ProtoInterface4.field[267] = field272;

let field273 = browser.currentScene.createNode("field");
field273.name = "r_calf_changed";
field273.accessType = "outputOnly";
field273.type = "SFRotation";
ProtoInterface4.field[268] = field273;

let field274 = browser.currentScene.createNode("field");
field274.name = "r_clavicle_key";
field274.accessType = "inputOutput";
field274.type = "MFFloat";
//no default value
ProtoInterface4.field[269] = field274;

let field275 = browser.currentScene.createNode("field");
field275.name = "r_clavicle_keyValue";
field275.accessType = "inputOutput";
field275.type = "MFRotation";
//no default value
ProtoInterface4.field[270] = field275;

let field276 = browser.currentScene.createNode("field");
field276.name = "r_clavicle_changed";
field276.accessType = "outputOnly";
field276.type = "SFRotation";
ProtoInterface4.field[271] = field276;

let field277 = browser.currentScene.createNode("field");
field277.name = "r_elbow_key";
field277.accessType = "inputOutput";
field277.type = "MFFloat";
//no default value
ProtoInterface4.field[272] = field277;

let field278 = browser.currentScene.createNode("field");
field278.name = "r_elbow_keyValue";
field278.accessType = "inputOutput";
field278.type = "MFRotation";
//no default value
ProtoInterface4.field[273] = field278;

let field279 = browser.currentScene.createNode("field");
field279.name = "r_elbow_changed";
field279.accessType = "outputOnly";
field279.type = "SFRotation";
ProtoInterface4.field[274] = field279;

let field280 = browser.currentScene.createNode("field");
field280.name = "r_eyeball_key";
field280.accessType = "inputOutput";
field280.type = "MFFloat";
//no default value
ProtoInterface4.field[275] = field280;

let field281 = browser.currentScene.createNode("field");
field281.name = "r_eyeball_keyValue";
field281.accessType = "inputOutput";
field281.type = "MFRotation";
//no default value
ProtoInterface4.field[276] = field281;

let field282 = browser.currentScene.createNode("field");
field282.name = "r_eyeball_changed";
field282.accessType = "outputOnly";
field282.type = "SFRotation";
ProtoInterface4.field[277] = field282;

let field283 = browser.currentScene.createNode("field");
field283.name = "r_eyeball_joint_key";
field283.accessType = "inputOutput";
field283.type = "MFFloat";
//no default value
ProtoInterface4.field[278] = field283;

let field284 = browser.currentScene.createNode("field");
field284.name = "r_eyeball_joint_keyValue";
field284.accessType = "inputOutput";
field284.type = "MFRotation";
//no default value
ProtoInterface4.field[279] = field284;

let field285 = browser.currentScene.createNode("field");
field285.name = "r_eyeball_joint_changed";
field285.accessType = "outputOnly";
field285.type = "SFRotation";
ProtoInterface4.field[280] = field285;

let field286 = browser.currentScene.createNode("field");
field286.name = "r_eyebrow_key";
field286.accessType = "inputOutput";
field286.type = "MFFloat";
//no default value
ProtoInterface4.field[281] = field286;

let field287 = browser.currentScene.createNode("field");
field287.name = "r_eyebrow_keyValue";
field287.accessType = "inputOutput";
field287.type = "MFRotation";
//no default value
ProtoInterface4.field[282] = field287;

let field288 = browser.currentScene.createNode("field");
field288.name = "r_eyebrow_changed";
field288.accessType = "outputOnly";
field288.type = "SFRotation";
ProtoInterface4.field[283] = field288;

let field289 = browser.currentScene.createNode("field");
field289.name = "r_eyebrow_joint_key";
field289.accessType = "inputOutput";
field289.type = "MFFloat";
//no default value
ProtoInterface4.field[284] = field289;

let field290 = browser.currentScene.createNode("field");
field290.name = "r_eyebrow_joint_keyValue";
field290.accessType = "inputOutput";
field290.type = "MFRotation";
//no default value
ProtoInterface4.field[285] = field290;

let field291 = browser.currentScene.createNode("field");
field291.name = "r_eyebrow_joint_changed";
field291.accessType = "outputOnly";
field291.type = "SFRotation";
ProtoInterface4.field[286] = field291;

let field292 = browser.currentScene.createNode("field");
field292.name = "r_eyelid_key";
field292.accessType = "inputOutput";
field292.type = "MFFloat";
//no default value
ProtoInterface4.field[287] = field292;

let field293 = browser.currentScene.createNode("field");
field293.name = "r_eyelid_keyValue";
field293.accessType = "inputOutput";
field293.type = "MFRotation";
//no default value
ProtoInterface4.field[288] = field293;

let field294 = browser.currentScene.createNode("field");
field294.name = "r_eyelid_changed";
field294.accessType = "outputOnly";
field294.type = "SFRotation";
ProtoInterface4.field[289] = field294;

let field295 = browser.currentScene.createNode("field");
field295.name = "r_eyelid_joint_key";
field295.accessType = "inputOutput";
field295.type = "MFFloat";
//no default value
ProtoInterface4.field[290] = field295;

let field296 = browser.currentScene.createNode("field");
field296.name = "r_eyelid_joint_keyValue";
field296.accessType = "inputOutput";
field296.type = "MFRotation";
//no default value
ProtoInterface4.field[291] = field296;

let field297 = browser.currentScene.createNode("field");
field297.name = "r_eyelid_joint_changed";
field297.accessType = "outputOnly";
field297.type = "SFRotation";
ProtoInterface4.field[292] = field297;

let field298 = browser.currentScene.createNode("field");
field298.name = "r_forearm_key";
field298.accessType = "inputOutput";
field298.type = "MFFloat";
//no default value
ProtoInterface4.field[293] = field298;

let field299 = browser.currentScene.createNode("field");
field299.name = "r_forearm_keyValue";
field299.accessType = "inputOutput";
field299.type = "MFRotation";
//no default value
ProtoInterface4.field[294] = field299;

let field300 = browser.currentScene.createNode("field");
field300.name = "r_forearm_changed";
field300.accessType = "outputOnly";
field300.type = "SFRotation";
ProtoInterface4.field[295] = field300;

let field301 = browser.currentScene.createNode("field");
field301.name = "r_forefoot_key";
field301.accessType = "inputOutput";
field301.type = "MFFloat";
//no default value
ProtoInterface4.field[296] = field301;

let field302 = browser.currentScene.createNode("field");
field302.name = "r_forefoot_keyValue";
field302.accessType = "inputOutput";
field302.type = "MFRotation";
//no default value
ProtoInterface4.field[297] = field302;

let field303 = browser.currentScene.createNode("field");
field303.name = "r_forefoot_changed";
field303.accessType = "outputOnly";
field303.type = "SFRotation";
ProtoInterface4.field[298] = field303;

let field304 = browser.currentScene.createNode("field");
field304.name = "r_hand_key";
field304.accessType = "inputOutput";
field304.type = "MFFloat";
//no default value
ProtoInterface4.field[299] = field304;

let field305 = browser.currentScene.createNode("field");
field305.name = "r_hand_keyValue";
field305.accessType = "inputOutput";
field305.type = "MFRotation";
//no default value
ProtoInterface4.field[300] = field305;

let field306 = browser.currentScene.createNode("field");
field306.name = "r_hand_changed";
field306.accessType = "outputOnly";
field306.type = "SFRotation";
ProtoInterface4.field[301] = field306;

let field307 = browser.currentScene.createNode("field");
field307.name = "r_hindfoot_key";
field307.accessType = "inputOutput";
field307.type = "MFFloat";
//no default value
ProtoInterface4.field[302] = field307;

let field308 = browser.currentScene.createNode("field");
field308.name = "r_hindfoot_keyValue";
field308.accessType = "inputOutput";
field308.type = "MFRotation";
//no default value
ProtoInterface4.field[303] = field308;

let field309 = browser.currentScene.createNode("field");
field309.name = "r_hindfoot_changed";
field309.accessType = "outputOnly";
field309.type = "SFRotation";
ProtoInterface4.field[304] = field309;

let field310 = browser.currentScene.createNode("field");
field310.name = "r_hip_key";
field310.accessType = "inputOutput";
field310.type = "MFFloat";
//no default value
ProtoInterface4.field[305] = field310;

let field311 = browser.currentScene.createNode("field");
field311.name = "r_hip_keyValue";
field311.accessType = "inputOutput";
field311.type = "MFRotation";
//no default value
ProtoInterface4.field[306] = field311;

let field312 = browser.currentScene.createNode("field");
field312.name = "r_hip_changed";
field312.accessType = "outputOnly";
field312.type = "SFRotation";
ProtoInterface4.field[307] = field312;

let field313 = browser.currentScene.createNode("field");
field313.name = "r_index0_key";
field313.accessType = "inputOutput";
field313.type = "MFFloat";
//no default value
ProtoInterface4.field[308] = field313;

let field314 = browser.currentScene.createNode("field");
field314.name = "r_index0_keyValue";
field314.accessType = "inputOutput";
field314.type = "MFRotation";
//no default value
ProtoInterface4.field[309] = field314;

let field315 = browser.currentScene.createNode("field");
field315.name = "r_index0_changed";
field315.accessType = "outputOnly";
field315.type = "SFRotation";
ProtoInterface4.field[310] = field315;

let field316 = browser.currentScene.createNode("field");
field316.name = "r_index1_key";
field316.accessType = "inputOutput";
field316.type = "MFFloat";
//no default value
ProtoInterface4.field[311] = field316;

let field317 = browser.currentScene.createNode("field");
field317.name = "r_index1_keyValue";
field317.accessType = "inputOutput";
field317.type = "MFRotation";
//no default value
ProtoInterface4.field[312] = field317;

let field318 = browser.currentScene.createNode("field");
field318.name = "r_index1_changed";
field318.accessType = "outputOnly";
field318.type = "SFRotation";
ProtoInterface4.field[313] = field318;

let field319 = browser.currentScene.createNode("field");
field319.name = "r_index2_key";
field319.accessType = "inputOutput";
field319.type = "MFFloat";
//no default value
ProtoInterface4.field[314] = field319;

let field320 = browser.currentScene.createNode("field");
field320.name = "r_index2_keyValue";
field320.accessType = "inputOutput";
field320.type = "MFRotation";
//no default value
ProtoInterface4.field[315] = field320;

let field321 = browser.currentScene.createNode("field");
field321.name = "r_index2_changed";
field321.accessType = "outputOnly";
field321.type = "SFRotation";
ProtoInterface4.field[316] = field321;

let field322 = browser.currentScene.createNode("field");
field322.name = "r_index3_key";
field322.accessType = "inputOutput";
field322.type = "MFFloat";
//no default value
ProtoInterface4.field[317] = field322;

let field323 = browser.currentScene.createNode("field");
field323.name = "r_index3_keyValue";
field323.accessType = "inputOutput";
field323.type = "MFRotation";
//no default value
ProtoInterface4.field[318] = field323;

let field324 = browser.currentScene.createNode("field");
field324.name = "r_index3_changed";
field324.accessType = "outputOnly";
field324.type = "SFRotation";
ProtoInterface4.field[319] = field324;

let field325 = browser.currentScene.createNode("field");
field325.name = "r_index_distal_key";
field325.accessType = "inputOutput";
field325.type = "MFFloat";
//no default value
ProtoInterface4.field[320] = field325;

let field326 = browser.currentScene.createNode("field");
field326.name = "r_index_distal_keyValue";
field326.accessType = "inputOutput";
field326.type = "MFRotation";
//no default value
ProtoInterface4.field[321] = field326;

let field327 = browser.currentScene.createNode("field");
field327.name = "r_index_distal_changed";
field327.accessType = "outputOnly";
field327.type = "SFRotation";
ProtoInterface4.field[322] = field327;

let field328 = browser.currentScene.createNode("field");
field328.name = "r_index_metacarpal_key";
field328.accessType = "inputOutput";
field328.type = "MFFloat";
//no default value
ProtoInterface4.field[323] = field328;

let field329 = browser.currentScene.createNode("field");
field329.name = "r_index_metacarpal_keyValue";
field329.accessType = "inputOutput";
field329.type = "MFRotation";
//no default value
ProtoInterface4.field[324] = field329;

let field330 = browser.currentScene.createNode("field");
field330.name = "r_index_metacarpal_changed";
field330.accessType = "outputOnly";
field330.type = "SFRotation";
ProtoInterface4.field[325] = field330;

let field331 = browser.currentScene.createNode("field");
field331.name = "r_index_middle_key";
field331.accessType = "inputOutput";
field331.type = "MFFloat";
//no default value
ProtoInterface4.field[326] = field331;

let field332 = browser.currentScene.createNode("field");
field332.name = "r_index_middle_keyValue";
field332.accessType = "inputOutput";
field332.type = "MFRotation";
//no default value
ProtoInterface4.field[327] = field332;

let field333 = browser.currentScene.createNode("field");
field333.name = "r_index_middle_changed";
field333.accessType = "outputOnly";
field333.type = "SFRotation";
ProtoInterface4.field[328] = field333;

let field334 = browser.currentScene.createNode("field");
field334.name = "r_index_proximal_key";
field334.accessType = "inputOutput";
field334.type = "MFFloat";
//no default value
ProtoInterface4.field[329] = field334;

let field335 = browser.currentScene.createNode("field");
field335.name = "r_index_proximal_keyValue";
field335.accessType = "inputOutput";
field335.type = "MFRotation";
//no default value
ProtoInterface4.field[330] = field335;

let field336 = browser.currentScene.createNode("field");
field336.name = "r_index_proximal_changed";
field336.accessType = "outputOnly";
field336.type = "SFRotation";
ProtoInterface4.field[331] = field336;

let field337 = browser.currentScene.createNode("field");
field337.name = "r_knee_key";
field337.accessType = "inputOutput";
field337.type = "MFFloat";
//no default value
ProtoInterface4.field[332] = field337;

let field338 = browser.currentScene.createNode("field");
field338.name = "r_knee_keyValue";
field338.accessType = "inputOutput";
field338.type = "MFRotation";
//no default value
ProtoInterface4.field[333] = field338;

let field339 = browser.currentScene.createNode("field");
field339.name = "r_knee_changed";
field339.accessType = "outputOnly";
field339.type = "SFRotation";
ProtoInterface4.field[334] = field339;

let field340 = browser.currentScene.createNode("field");
field340.name = "r_metatarsal_key";
field340.accessType = "inputOutput";
field340.type = "MFFloat";
//no default value
ProtoInterface4.field[335] = field340;

let field341 = browser.currentScene.createNode("field");
field341.name = "r_metatarsal_keyValue";
field341.accessType = "inputOutput";
field341.type = "MFRotation";
//no default value
ProtoInterface4.field[336] = field341;

let field342 = browser.currentScene.createNode("field");
field342.name = "r_metatarsal_changed";
field342.accessType = "outputOnly";
field342.type = "SFRotation";
ProtoInterface4.field[337] = field342;

let field343 = browser.currentScene.createNode("field");
field343.name = "r_middistal_key";
field343.accessType = "inputOutput";
field343.type = "MFFloat";
//no default value
ProtoInterface4.field[338] = field343;

let field344 = browser.currentScene.createNode("field");
field344.name = "r_middistal_keyValue";
field344.accessType = "inputOutput";
field344.type = "MFRotation";
//no default value
ProtoInterface4.field[339] = field344;

let field345 = browser.currentScene.createNode("field");
field345.name = "r_middistal_changed";
field345.accessType = "outputOnly";
field345.type = "SFRotation";
ProtoInterface4.field[340] = field345;

let field346 = browser.currentScene.createNode("field");
field346.name = "r_middle0_key";
field346.accessType = "inputOutput";
field346.type = "MFFloat";
//no default value
ProtoInterface4.field[341] = field346;

let field347 = browser.currentScene.createNode("field");
field347.name = "r_middle0_keyValue";
field347.accessType = "inputOutput";
field347.type = "MFRotation";
//no default value
ProtoInterface4.field[342] = field347;

let field348 = browser.currentScene.createNode("field");
field348.name = "r_middle0_changed";
field348.accessType = "outputOnly";
field348.type = "SFRotation";
ProtoInterface4.field[343] = field348;

let field349 = browser.currentScene.createNode("field");
field349.name = "r_middle1_key";
field349.accessType = "inputOutput";
field349.type = "MFFloat";
//no default value
ProtoInterface4.field[344] = field349;

let field350 = browser.currentScene.createNode("field");
field350.name = "r_middle1_keyValue";
field350.accessType = "inputOutput";
field350.type = "MFRotation";
//no default value
ProtoInterface4.field[345] = field350;

let field351 = browser.currentScene.createNode("field");
field351.name = "r_middle1_changed";
field351.accessType = "outputOnly";
field351.type = "SFRotation";
ProtoInterface4.field[346] = field351;

let field352 = browser.currentScene.createNode("field");
field352.name = "r_middle2_key";
field352.accessType = "inputOutput";
field352.type = "MFFloat";
//no default value
ProtoInterface4.field[347] = field352;

let field353 = browser.currentScene.createNode("field");
field353.name = "r_middle2_keyValue";
field353.accessType = "inputOutput";
field353.type = "MFRotation";
//no default value
ProtoInterface4.field[348] = field353;

let field354 = browser.currentScene.createNode("field");
field354.name = "r_middle2_changed";
field354.accessType = "outputOnly";
field354.type = "SFRotation";
ProtoInterface4.field[349] = field354;

let field355 = browser.currentScene.createNode("field");
field355.name = "r_middle3_key";
field355.accessType = "inputOutput";
field355.type = "MFFloat";
//no default value
ProtoInterface4.field[350] = field355;

let field356 = browser.currentScene.createNode("field");
field356.name = "r_middle3_keyValue";
field356.accessType = "inputOutput";
field356.type = "MFRotation";
//no default value
ProtoInterface4.field[351] = field356;

let field357 = browser.currentScene.createNode("field");
field357.name = "r_middle3_changed";
field357.accessType = "outputOnly";
field357.type = "SFRotation";
ProtoInterface4.field[352] = field357;

let field358 = browser.currentScene.createNode("field");
field358.name = "r_middle_distal_key";
field358.accessType = "inputOutput";
field358.type = "MFFloat";
//no default value
ProtoInterface4.field[353] = field358;

let field359 = browser.currentScene.createNode("field");
field359.name = "r_middle_distal_keyValue";
field359.accessType = "inputOutput";
field359.type = "MFRotation";
//no default value
ProtoInterface4.field[354] = field359;

let field360 = browser.currentScene.createNode("field");
field360.name = "r_middle_distal_changed";
field360.accessType = "outputOnly";
field360.type = "SFRotation";
ProtoInterface4.field[355] = field360;

let field361 = browser.currentScene.createNode("field");
field361.name = "r_middle_metacarpal_key";
field361.accessType = "inputOutput";
field361.type = "MFFloat";
//no default value
ProtoInterface4.field[356] = field361;

let field362 = browser.currentScene.createNode("field");
field362.name = "r_middle_metacarpal_keyValue";
field362.accessType = "inputOutput";
field362.type = "MFRotation";
//no default value
ProtoInterface4.field[357] = field362;

let field363 = browser.currentScene.createNode("field");
field363.name = "r_middle_metacarpal_changed";
field363.accessType = "outputOnly";
field363.type = "SFRotation";
ProtoInterface4.field[358] = field363;

let field364 = browser.currentScene.createNode("field");
field364.name = "r_middle_middle_key";
field364.accessType = "inputOutput";
field364.type = "MFFloat";
//no default value
ProtoInterface4.field[359] = field364;

let field365 = browser.currentScene.createNode("field");
field365.name = "r_middle_middle_keyValue";
field365.accessType = "inputOutput";
field365.type = "MFRotation";
//no default value
ProtoInterface4.field[360] = field365;

let field366 = browser.currentScene.createNode("field");
field366.name = "r_middle_middle_changed";
field366.accessType = "outputOnly";
field366.type = "SFRotation";
ProtoInterface4.field[361] = field366;

let field367 = browser.currentScene.createNode("field");
field367.name = "r_middle_proximal_key";
field367.accessType = "inputOutput";
field367.type = "MFFloat";
//no default value
ProtoInterface4.field[362] = field367;

let field368 = browser.currentScene.createNode("field");
field368.name = "r_middle_proximal_keyValue";
field368.accessType = "inputOutput";
field368.type = "MFRotation";
//no default value
ProtoInterface4.field[363] = field368;

let field369 = browser.currentScene.createNode("field");
field369.name = "r_middle_proximal_changed";
field369.accessType = "outputOnly";
field369.type = "SFRotation";
ProtoInterface4.field[364] = field369;

let field370 = browser.currentScene.createNode("field");
field370.name = "r_midproximal_key";
field370.accessType = "inputOutput";
field370.type = "MFFloat";
//no default value
ProtoInterface4.field[365] = field370;

let field371 = browser.currentScene.createNode("field");
field371.name = "r_midproximal_keyValue";
field371.accessType = "inputOutput";
field371.type = "MFRotation";
//no default value
ProtoInterface4.field[366] = field371;

let field372 = browser.currentScene.createNode("field");
field372.name = "r_midproximal_changed";
field372.accessType = "outputOnly";
field372.type = "SFRotation";
ProtoInterface4.field[367] = field372;

let field373 = browser.currentScene.createNode("field");
field373.name = "r_midtarsal_key";
field373.accessType = "inputOutput";
field373.type = "MFFloat";
//no default value
ProtoInterface4.field[368] = field373;

let field374 = browser.currentScene.createNode("field");
field374.name = "r_midtarsal_keyValue";
field374.accessType = "inputOutput";
field374.type = "MFRotation";
//no default value
ProtoInterface4.field[369] = field374;

let field375 = browser.currentScene.createNode("field");
field375.name = "r_midtarsal_changed";
field375.accessType = "outputOnly";
field375.type = "SFRotation";
ProtoInterface4.field[370] = field375;

let field376 = browser.currentScene.createNode("field");
field376.name = "r_pinky0_key";
field376.accessType = "inputOutput";
field376.type = "MFFloat";
//no default value
ProtoInterface4.field[371] = field376;

let field377 = browser.currentScene.createNode("field");
field377.name = "r_pinky0_keyValue";
field377.accessType = "inputOutput";
field377.type = "MFRotation";
//no default value
ProtoInterface4.field[372] = field377;

let field378 = browser.currentScene.createNode("field");
field378.name = "r_pinky0_changed";
field378.accessType = "outputOnly";
field378.type = "SFRotation";
ProtoInterface4.field[373] = field378;

let field379 = browser.currentScene.createNode("field");
field379.name = "r_pinky1_key";
field379.accessType = "inputOutput";
field379.type = "MFFloat";
//no default value
ProtoInterface4.field[374] = field379;

let field380 = browser.currentScene.createNode("field");
field380.name = "r_pinky1_keyValue";
field380.accessType = "inputOutput";
field380.type = "MFRotation";
//no default value
ProtoInterface4.field[375] = field380;

let field381 = browser.currentScene.createNode("field");
field381.name = "r_pinky1_changed";
field381.accessType = "outputOnly";
field381.type = "SFRotation";
ProtoInterface4.field[376] = field381;

let field382 = browser.currentScene.createNode("field");
field382.name = "r_pinky2_key";
field382.accessType = "inputOutput";
field382.type = "MFFloat";
//no default value
ProtoInterface4.field[377] = field382;

let field383 = browser.currentScene.createNode("field");
field383.name = "r_pinky2_keyValue";
field383.accessType = "inputOutput";
field383.type = "MFRotation";
//no default value
ProtoInterface4.field[378] = field383;

let field384 = browser.currentScene.createNode("field");
field384.name = "r_pinky2_changed";
field384.accessType = "outputOnly";
field384.type = "SFRotation";
ProtoInterface4.field[379] = field384;

let field385 = browser.currentScene.createNode("field");
field385.name = "r_pinky3_key";
field385.accessType = "inputOutput";
field385.type = "MFFloat";
//no default value
ProtoInterface4.field[380] = field385;

let field386 = browser.currentScene.createNode("field");
field386.name = "r_pinky3_keyValue";
field386.accessType = "inputOutput";
field386.type = "MFRotation";
//no default value
ProtoInterface4.field[381] = field386;

let field387 = browser.currentScene.createNode("field");
field387.name = "r_pinky3_changed";
field387.accessType = "outputOnly";
field387.type = "SFRotation";
ProtoInterface4.field[382] = field387;

let field388 = browser.currentScene.createNode("field");
field388.name = "r_pinky_distal_key";
field388.accessType = "inputOutput";
field388.type = "MFFloat";
//no default value
ProtoInterface4.field[383] = field388;

let field389 = browser.currentScene.createNode("field");
field389.name = "r_pinky_distal_keyValue";
field389.accessType = "inputOutput";
field389.type = "MFRotation";
//no default value
ProtoInterface4.field[384] = field389;

let field390 = browser.currentScene.createNode("field");
field390.name = "r_pinky_distal_changed";
field390.accessType = "outputOnly";
field390.type = "SFRotation";
ProtoInterface4.field[385] = field390;

let field391 = browser.currentScene.createNode("field");
field391.name = "r_pinky_metacarpal_key";
field391.accessType = "inputOutput";
field391.type = "MFFloat";
//no default value
ProtoInterface4.field[386] = field391;

let field392 = browser.currentScene.createNode("field");
field392.name = "r_pinky_metacarpal_keyValue";
field392.accessType = "inputOutput";
field392.type = "MFRotation";
//no default value
ProtoInterface4.field[387] = field392;

let field393 = browser.currentScene.createNode("field");
field393.name = "r_pinky_metacarpal_changed";
field393.accessType = "outputOnly";
field393.type = "SFRotation";
ProtoInterface4.field[388] = field393;

let field394 = browser.currentScene.createNode("field");
field394.name = "r_pinky_middle_key";
field394.accessType = "inputOutput";
field394.type = "MFFloat";
//no default value
ProtoInterface4.field[389] = field394;

let field395 = browser.currentScene.createNode("field");
field395.name = "r_pinky_middle_keyValue";
field395.accessType = "inputOutput";
field395.type = "MFRotation";
//no default value
ProtoInterface4.field[390] = field395;

let field396 = browser.currentScene.createNode("field");
field396.name = "r_pinky_middle_changed";
field396.accessType = "outputOnly";
field396.type = "SFRotation";
ProtoInterface4.field[391] = field396;

let field397 = browser.currentScene.createNode("field");
field397.name = "r_pinky_proximal_key";
field397.accessType = "inputOutput";
field397.type = "MFFloat";
//no default value
ProtoInterface4.field[392] = field397;

let field398 = browser.currentScene.createNode("field");
field398.name = "r_pinky_proximal_keyValue";
field398.accessType = "inputOutput";
field398.type = "MFRotation";
//no default value
ProtoInterface4.field[393] = field398;

let field399 = browser.currentScene.createNode("field");
field399.name = "r_pinky_proximal_changed";
field399.accessType = "outputOnly";
field399.type = "SFRotation";
ProtoInterface4.field[394] = field399;

let field400 = browser.currentScene.createNode("field");
field400.name = "r_ring0_key";
field400.accessType = "inputOutput";
field400.type = "MFFloat";
//no default value
ProtoInterface4.field[395] = field400;

let field401 = browser.currentScene.createNode("field");
field401.name = "r_ring0_keyValue";
field401.accessType = "inputOutput";
field401.type = "MFRotation";
//no default value
ProtoInterface4.field[396] = field401;

let field402 = browser.currentScene.createNode("field");
field402.name = "r_ring0_changed";
field402.accessType = "outputOnly";
field402.type = "SFRotation";
ProtoInterface4.field[397] = field402;

let field403 = browser.currentScene.createNode("field");
field403.name = "r_ring1_key";
field403.accessType = "inputOutput";
field403.type = "MFFloat";
//no default value
ProtoInterface4.field[398] = field403;

let field404 = browser.currentScene.createNode("field");
field404.name = "r_ring1_keyValue";
field404.accessType = "inputOutput";
field404.type = "MFRotation";
//no default value
ProtoInterface4.field[399] = field404;

let field405 = browser.currentScene.createNode("field");
field405.name = "r_ring1_changed";
field405.accessType = "outputOnly";
field405.type = "SFRotation";
ProtoInterface4.field[400] = field405;

let field406 = browser.currentScene.createNode("field");
field406.name = "r_ring2_key";
field406.accessType = "inputOutput";
field406.type = "MFFloat";
//no default value
ProtoInterface4.field[401] = field406;

let field407 = browser.currentScene.createNode("field");
field407.name = "r_ring2_keyValue";
field407.accessType = "inputOutput";
field407.type = "MFRotation";
//no default value
ProtoInterface4.field[402] = field407;

let field408 = browser.currentScene.createNode("field");
field408.name = "r_ring2_changed";
field408.accessType = "outputOnly";
field408.type = "SFRotation";
ProtoInterface4.field[403] = field408;

let field409 = browser.currentScene.createNode("field");
field409.name = "r_ring3_key";
field409.accessType = "inputOutput";
field409.type = "MFFloat";
//no default value
ProtoInterface4.field[404] = field409;

let field410 = browser.currentScene.createNode("field");
field410.name = "r_ring3_keyValue";
field410.accessType = "inputOutput";
field410.type = "MFRotation";
//no default value
ProtoInterface4.field[405] = field410;

let field411 = browser.currentScene.createNode("field");
field411.name = "r_ring3_changed";
field411.accessType = "outputOnly";
field411.type = "SFRotation";
ProtoInterface4.field[406] = field411;

let field412 = browser.currentScene.createNode("field");
field412.name = "r_ring_distal_key";
field412.accessType = "inputOutput";
field412.type = "MFFloat";
//no default value
ProtoInterface4.field[407] = field412;

let field413 = browser.currentScene.createNode("field");
field413.name = "r_ring_distal_keyValue";
field413.accessType = "inputOutput";
field413.type = "MFRotation";
//no default value
ProtoInterface4.field[408] = field413;

let field414 = browser.currentScene.createNode("field");
field414.name = "r_ring_distal_changed";
field414.accessType = "outputOnly";
field414.type = "SFRotation";
ProtoInterface4.field[409] = field414;

let field415 = browser.currentScene.createNode("field");
field415.name = "r_ring_metacarpal_key";
field415.accessType = "inputOutput";
field415.type = "MFFloat";
//no default value
ProtoInterface4.field[410] = field415;

let field416 = browser.currentScene.createNode("field");
field416.name = "r_ring_metacarpal_keyValue";
field416.accessType = "inputOutput";
field416.type = "MFRotation";
//no default value
ProtoInterface4.field[411] = field416;

let field417 = browser.currentScene.createNode("field");
field417.name = "r_ring_metacarpal_changed";
field417.accessType = "outputOnly";
field417.type = "SFRotation";
ProtoInterface4.field[412] = field417;

let field418 = browser.currentScene.createNode("field");
field418.name = "r_ring_middle_key";
field418.accessType = "inputOutput";
field418.type = "MFFloat";
//no default value
ProtoInterface4.field[413] = field418;

let field419 = browser.currentScene.createNode("field");
field419.name = "r_ring_middle_keyValue";
field419.accessType = "inputOutput";
field419.type = "MFRotation";
//no default value
ProtoInterface4.field[414] = field419;

let field420 = browser.currentScene.createNode("field");
field420.name = "r_ring_middle_changed";
field420.accessType = "outputOnly";
field420.type = "SFRotation";
ProtoInterface4.field[415] = field420;

let field421 = browser.currentScene.createNode("field");
field421.name = "r_ring_proximal_key";
field421.accessType = "inputOutput";
field421.type = "MFFloat";
//no default value
ProtoInterface4.field[416] = field421;

let field422 = browser.currentScene.createNode("field");
field422.name = "r_ring_proximal_keyValue";
field422.accessType = "inputOutput";
field422.type = "MFRotation";
//no default value
ProtoInterface4.field[417] = field422;

let field423 = browser.currentScene.createNode("field");
field423.name = "r_ring_proximal_changed";
field423.accessType = "outputOnly";
field423.type = "SFRotation";
ProtoInterface4.field[418] = field423;

let field424 = browser.currentScene.createNode("field");
field424.name = "r_scapula_key";
field424.accessType = "inputOutput";
field424.type = "MFFloat";
//no default value
ProtoInterface4.field[419] = field424;

let field425 = browser.currentScene.createNode("field");
field425.name = "r_scapula_keyValue";
field425.accessType = "inputOutput";
field425.type = "MFRotation";
//no default value
ProtoInterface4.field[420] = field425;

let field426 = browser.currentScene.createNode("field");
field426.name = "r_scapula_changed";
field426.accessType = "outputOnly";
field426.type = "SFRotation";
ProtoInterface4.field[421] = field426;

let field427 = browser.currentScene.createNode("field");
field427.name = "r_shoulder_key";
field427.accessType = "inputOutput";
field427.type = "MFFloat";
//no default value
ProtoInterface4.field[422] = field427;

let field428 = browser.currentScene.createNode("field");
field428.name = "r_shoulder_keyValue";
field428.accessType = "inputOutput";
field428.type = "MFRotation";
//no default value
ProtoInterface4.field[423] = field428;

let field429 = browser.currentScene.createNode("field");
field429.name = "r_shoulder_changed";
field429.accessType = "outputOnly";
field429.type = "SFRotation";
ProtoInterface4.field[424] = field429;

let field430 = browser.currentScene.createNode("field");
field430.name = "r_sternoclavicular_key";
field430.accessType = "inputOutput";
field430.type = "MFFloat";
//no default value
ProtoInterface4.field[425] = field430;

let field431 = browser.currentScene.createNode("field");
field431.name = "r_sternoclavicular_keyValue";
field431.accessType = "inputOutput";
field431.type = "MFRotation";
//no default value
ProtoInterface4.field[426] = field431;

let field432 = browser.currentScene.createNode("field");
field432.name = "r_sternoclavicular_changed";
field432.accessType = "outputOnly";
field432.type = "SFRotation";
ProtoInterface4.field[427] = field432;

let field433 = browser.currentScene.createNode("field");
field433.name = "r_subtalar_key";
field433.accessType = "inputOutput";
field433.type = "MFFloat";
//no default value
ProtoInterface4.field[428] = field433;

let field434 = browser.currentScene.createNode("field");
field434.name = "r_subtalar_keyValue";
field434.accessType = "inputOutput";
field434.type = "MFRotation";
//no default value
ProtoInterface4.field[429] = field434;

let field435 = browser.currentScene.createNode("field");
field435.name = "r_subtalar_changed";
field435.accessType = "outputOnly";
field435.type = "SFRotation";
ProtoInterface4.field[430] = field435;

let field436 = browser.currentScene.createNode("field");
field436.name = "r_thigh_key";
field436.accessType = "inputOutput";
field436.type = "MFFloat";
//no default value
ProtoInterface4.field[431] = field436;

let field437 = browser.currentScene.createNode("field");
field437.name = "r_thigh_keyValue";
field437.accessType = "inputOutput";
field437.type = "MFRotation";
//no default value
ProtoInterface4.field[432] = field437;

let field438 = browser.currentScene.createNode("field");
field438.name = "r_thigh_changed";
field438.accessType = "outputOnly";
field438.type = "SFRotation";
ProtoInterface4.field[433] = field438;

let field439 = browser.currentScene.createNode("field");
field439.name = "r_thumb1_key";
field439.accessType = "inputOutput";
field439.type = "MFFloat";
//no default value
ProtoInterface4.field[434] = field439;

let field440 = browser.currentScene.createNode("field");
field440.name = "r_thumb1_keyValue";
field440.accessType = "inputOutput";
field440.type = "MFRotation";
//no default value
ProtoInterface4.field[435] = field440;

let field441 = browser.currentScene.createNode("field");
field441.name = "r_thumb1_changed";
field441.accessType = "outputOnly";
field441.type = "SFRotation";
ProtoInterface4.field[436] = field441;

let field442 = browser.currentScene.createNode("field");
field442.name = "r_thumb2_key";
field442.accessType = "inputOutput";
field442.type = "MFFloat";
//no default value
ProtoInterface4.field[437] = field442;

let field443 = browser.currentScene.createNode("field");
field443.name = "r_thumb2_keyValue";
field443.accessType = "inputOutput";
field443.type = "MFRotation";
//no default value
ProtoInterface4.field[438] = field443;

let field444 = browser.currentScene.createNode("field");
field444.name = "r_thumb2_changed";
field444.accessType = "outputOnly";
field444.type = "SFRotation";
ProtoInterface4.field[439] = field444;

let field445 = browser.currentScene.createNode("field");
field445.name = "r_thumb3_key";
field445.accessType = "inputOutput";
field445.type = "MFFloat";
//no default value
ProtoInterface4.field[440] = field445;

let field446 = browser.currentScene.createNode("field");
field446.name = "r_thumb3_keyValue";
field446.accessType = "inputOutput";
field446.type = "MFRotation";
//no default value
ProtoInterface4.field[441] = field446;

let field447 = browser.currentScene.createNode("field");
field447.name = "r_thumb3_changed";
field447.accessType = "outputOnly";
field447.type = "SFRotation";
ProtoInterface4.field[442] = field447;

let field448 = browser.currentScene.createNode("field");
field448.name = "r_thumb_distal_key";
field448.accessType = "inputOutput";
field448.type = "MFFloat";
//no default value
ProtoInterface4.field[443] = field448;

let field449 = browser.currentScene.createNode("field");
field449.name = "r_thumb_distal_keyValue";
field449.accessType = "inputOutput";
field449.type = "MFRotation";
//no default value
ProtoInterface4.field[444] = field449;

let field450 = browser.currentScene.createNode("field");
field450.name = "r_thumb_distal_changed";
field450.accessType = "outputOnly";
field450.type = "SFRotation";
ProtoInterface4.field[445] = field450;

let field451 = browser.currentScene.createNode("field");
field451.name = "r_thumb_metacarpal_key";
field451.accessType = "inputOutput";
field451.type = "MFFloat";
//no default value
ProtoInterface4.field[446] = field451;

let field452 = browser.currentScene.createNode("field");
field452.name = "r_thumb_metacarpal_keyValue";
field452.accessType = "inputOutput";
field452.type = "MFRotation";
//no default value
ProtoInterface4.field[447] = field452;

let field453 = browser.currentScene.createNode("field");
field453.name = "r_thumb_metacarpal_changed";
field453.accessType = "outputOnly";
field453.type = "SFRotation";
ProtoInterface4.field[448] = field453;

let field454 = browser.currentScene.createNode("field");
field454.name = "r_thumb_proximal_key";
field454.accessType = "inputOutput";
field454.type = "MFFloat";
//no default value
ProtoInterface4.field[449] = field454;

let field455 = browser.currentScene.createNode("field");
field455.name = "r_thumb_proximal_keyValue";
field455.accessType = "inputOutput";
field455.type = "MFRotation";
//no default value
ProtoInterface4.field[450] = field455;

let field456 = browser.currentScene.createNode("field");
field456.name = "r_thumb_proximal_changed";
field456.accessType = "outputOnly";
field456.type = "SFRotation";
ProtoInterface4.field[451] = field456;

let field457 = browser.currentScene.createNode("field");
field457.name = "r_upperarm_key";
field457.accessType = "inputOutput";
field457.type = "MFFloat";
//no default value
ProtoInterface4.field[452] = field457;

let field458 = browser.currentScene.createNode("field");
field458.name = "r_upperarm_keyValue";
field458.accessType = "inputOutput";
field458.type = "MFRotation";
//no default value
ProtoInterface4.field[453] = field458;

let field459 = browser.currentScene.createNode("field");
field459.name = "r_upperarm_changed";
field459.accessType = "outputOnly";
field459.type = "SFRotation";
ProtoInterface4.field[454] = field459;

let field460 = browser.currentScene.createNode("field");
field460.name = "r_wrist_key";
field460.accessType = "inputOutput";
field460.type = "MFFloat";
//no default value
ProtoInterface4.field[455] = field460;

let field461 = browser.currentScene.createNode("field");
field461.name = "r_wrist_keyValue";
field461.accessType = "inputOutput";
field461.type = "MFRotation";
//no default value
ProtoInterface4.field[456] = field461;

let field462 = browser.currentScene.createNode("field");
field462.name = "r_wrist_changed";
field462.accessType = "outputOnly";
field462.type = "SFRotation";
ProtoInterface4.field[457] = field462;

let field463 = browser.currentScene.createNode("field");
field463.name = "sacroiliac_key";
field463.accessType = "inputOutput";
field463.type = "MFFloat";
//no default value
ProtoInterface4.field[458] = field463;

let field464 = browser.currentScene.createNode("field");
field464.name = "sacroiliac_keyValue";
field464.accessType = "inputOutput";
field464.type = "MFRotation";
//no default value
ProtoInterface4.field[459] = field464;

let field465 = browser.currentScene.createNode("field");
field465.name = "sacroiliac_changed";
field465.accessType = "outputOnly";
field465.type = "SFRotation";
ProtoInterface4.field[460] = field465;

let field466 = browser.currentScene.createNode("field");
field466.name = "sacrum_key";
field466.accessType = "inputOutput";
field466.type = "MFFloat";
//no default value
ProtoInterface4.field[461] = field466;

let field467 = browser.currentScene.createNode("field");
field467.name = "sacrum_keyValue";
field467.accessType = "inputOutput";
field467.type = "MFRotation";
//no default value
ProtoInterface4.field[462] = field467;

let field468 = browser.currentScene.createNode("field");
field468.name = "sacrum_changed";
field468.accessType = "outputOnly";
field468.type = "SFRotation";
ProtoInterface4.field[463] = field468;

let field469 = browser.currentScene.createNode("field");
field469.name = "skull_key";
field469.accessType = "inputOutput";
field469.type = "MFFloat";
//no default value
ProtoInterface4.field[464] = field469;

let field470 = browser.currentScene.createNode("field");
field470.name = "skull_keyValue";
field470.accessType = "inputOutput";
field470.type = "MFRotation";
//no default value
ProtoInterface4.field[465] = field470;

let field471 = browser.currentScene.createNode("field");
field471.name = "skull_changed";
field471.accessType = "outputOnly";
field471.type = "SFRotation";
ProtoInterface4.field[466] = field471;

let field472 = browser.currentScene.createNode("field");
field472.name = "skullbase_key";
field472.accessType = "inputOutput";
field472.type = "MFFloat";
//no default value
ProtoInterface4.field[467] = field472;

let field473 = browser.currentScene.createNode("field");
field473.name = "skullbase_keyValue";
field473.accessType = "inputOutput";
field473.type = "MFRotation";
//no default value
ProtoInterface4.field[468] = field473;

let field474 = browser.currentScene.createNode("field");
field474.name = "skullbase_changed";
field474.accessType = "outputOnly";
field474.type = "SFRotation";
ProtoInterface4.field[469] = field474;

let field475 = browser.currentScene.createNode("field");
field475.name = "t10_key";
field475.accessType = "inputOutput";
field475.type = "MFFloat";
//no default value
ProtoInterface4.field[470] = field475;

let field476 = browser.currentScene.createNode("field");
field476.name = "t10_keyValue";
field476.accessType = "inputOutput";
field476.type = "MFRotation";
//no default value
ProtoInterface4.field[471] = field476;

let field477 = browser.currentScene.createNode("field");
field477.name = "t10_changed";
field477.accessType = "outputOnly";
field477.type = "SFRotation";
ProtoInterface4.field[472] = field477;

let field478 = browser.currentScene.createNode("field");
field478.name = "t11_key";
field478.accessType = "inputOutput";
field478.type = "MFFloat";
//no default value
ProtoInterface4.field[473] = field478;

let field479 = browser.currentScene.createNode("field");
field479.name = "t11_keyValue";
field479.accessType = "inputOutput";
field479.type = "MFRotation";
//no default value
ProtoInterface4.field[474] = field479;

let field480 = browser.currentScene.createNode("field");
field480.name = "t11_changed";
field480.accessType = "outputOnly";
field480.type = "SFRotation";
ProtoInterface4.field[475] = field480;

let field481 = browser.currentScene.createNode("field");
field481.name = "t12_key";
field481.accessType = "inputOutput";
field481.type = "MFFloat";
//no default value
ProtoInterface4.field[476] = field481;

let field482 = browser.currentScene.createNode("field");
field482.name = "t12_keyValue";
field482.accessType = "inputOutput";
field482.type = "MFRotation";
//no default value
ProtoInterface4.field[477] = field482;

let field483 = browser.currentScene.createNode("field");
field483.name = "t12_changed";
field483.accessType = "outputOnly";
field483.type = "SFRotation";
ProtoInterface4.field[478] = field483;

let field484 = browser.currentScene.createNode("field");
field484.name = "t1_key";
field484.accessType = "inputOutput";
field484.type = "MFFloat";
//no default value
ProtoInterface4.field[479] = field484;

let field485 = browser.currentScene.createNode("field");
field485.name = "t1_keyValue";
field485.accessType = "inputOutput";
field485.type = "MFRotation";
//no default value
ProtoInterface4.field[480] = field485;

let field486 = browser.currentScene.createNode("field");
field486.name = "t1_changed";
field486.accessType = "outputOnly";
field486.type = "SFRotation";
ProtoInterface4.field[481] = field486;

let field487 = browser.currentScene.createNode("field");
field487.name = "t2_key";
field487.accessType = "inputOutput";
field487.type = "MFFloat";
//no default value
ProtoInterface4.field[482] = field487;

let field488 = browser.currentScene.createNode("field");
field488.name = "t2_keyValue";
field488.accessType = "inputOutput";
field488.type = "MFRotation";
//no default value
ProtoInterface4.field[483] = field488;

let field489 = browser.currentScene.createNode("field");
field489.name = "t2_changed";
field489.accessType = "outputOnly";
field489.type = "SFRotation";
ProtoInterface4.field[484] = field489;

let field490 = browser.currentScene.createNode("field");
field490.name = "t3_key";
field490.accessType = "inputOutput";
field490.type = "MFFloat";
//no default value
ProtoInterface4.field[485] = field490;

let field491 = browser.currentScene.createNode("field");
field491.name = "t3_keyValue";
field491.accessType = "inputOutput";
field491.type = "MFRotation";
//no default value
ProtoInterface4.field[486] = field491;

let field492 = browser.currentScene.createNode("field");
field492.name = "t3_changed";
field492.accessType = "outputOnly";
field492.type = "SFRotation";
ProtoInterface4.field[487] = field492;

let field493 = browser.currentScene.createNode("field");
field493.name = "t4_key";
field493.accessType = "inputOutput";
field493.type = "MFFloat";
//no default value
ProtoInterface4.field[488] = field493;

let field494 = browser.currentScene.createNode("field");
field494.name = "t4_keyValue";
field494.accessType = "inputOutput";
field494.type = "MFRotation";
//no default value
ProtoInterface4.field[489] = field494;

let field495 = browser.currentScene.createNode("field");
field495.name = "t4_changed";
field495.accessType = "outputOnly";
field495.type = "SFRotation";
ProtoInterface4.field[490] = field495;

let field496 = browser.currentScene.createNode("field");
field496.name = "t5_key";
field496.accessType = "inputOutput";
field496.type = "MFFloat";
//no default value
ProtoInterface4.field[491] = field496;

let field497 = browser.currentScene.createNode("field");
field497.name = "t5_keyValue";
field497.accessType = "inputOutput";
field497.type = "MFRotation";
//no default value
ProtoInterface4.field[492] = field497;

let field498 = browser.currentScene.createNode("field");
field498.name = "t5_changed";
field498.accessType = "outputOnly";
field498.type = "SFRotation";
ProtoInterface4.field[493] = field498;

let field499 = browser.currentScene.createNode("field");
field499.name = "t6_key";
field499.accessType = "inputOutput";
field499.type = "MFFloat";
//no default value
ProtoInterface4.field[494] = field499;

let field500 = browser.currentScene.createNode("field");
field500.name = "t6_keyValue";
field500.accessType = "inputOutput";
field500.type = "MFRotation";
//no default value
ProtoInterface4.field[495] = field500;

let field501 = browser.currentScene.createNode("field");
field501.name = "t6_changed";
field501.accessType = "outputOnly";
field501.type = "SFRotation";
ProtoInterface4.field[496] = field501;

let field502 = browser.currentScene.createNode("field");
field502.name = "t7_key";
field502.accessType = "inputOutput";
field502.type = "MFFloat";
//no default value
ProtoInterface4.field[497] = field502;

let field503 = browser.currentScene.createNode("field");
field503.name = "t7_keyValue";
field503.accessType = "inputOutput";
field503.type = "MFRotation";
//no default value
ProtoInterface4.field[498] = field503;

let field504 = browser.currentScene.createNode("field");
field504.name = "t7_changed";
field504.accessType = "outputOnly";
field504.type = "SFRotation";
ProtoInterface4.field[499] = field504;

let field505 = browser.currentScene.createNode("field");
field505.name = "t8_key";
field505.accessType = "inputOutput";
field505.type = "MFFloat";
//no default value
ProtoInterface4.field[500] = field505;

let field506 = browser.currentScene.createNode("field");
field506.name = "t8_keyValue";
field506.accessType = "inputOutput";
field506.type = "MFRotation";
//no default value
ProtoInterface4.field[501] = field506;

let field507 = browser.currentScene.createNode("field");
field507.name = "t8_changed";
field507.accessType = "outputOnly";
field507.type = "SFRotation";
ProtoInterface4.field[502] = field507;

let field508 = browser.currentScene.createNode("field");
field508.name = "t9_key";
field508.accessType = "inputOutput";
field508.type = "MFFloat";
//no default value
ProtoInterface4.field[503] = field508;

let field509 = browser.currentScene.createNode("field");
field509.name = "t9_keyValue";
field509.accessType = "inputOutput";
field509.type = "MFRotation";
//no default value
ProtoInterface4.field[504] = field509;

let field510 = browser.currentScene.createNode("field");
field510.name = "t9_changed";
field510.accessType = "outputOnly";
field510.type = "SFRotation";
ProtoInterface4.field[505] = field510;

let field511 = browser.currentScene.createNode("field");
field511.name = "temporomandibular_key";
field511.accessType = "inputOutput";
field511.type = "MFFloat";
//no default value
ProtoInterface4.field[506] = field511;

let field512 = browser.currentScene.createNode("field");
field512.name = "temporomandibular_keyValue";
field512.accessType = "inputOutput";
field512.type = "MFRotation";
//no default value
ProtoInterface4.field[507] = field512;

let field513 = browser.currentScene.createNode("field");
field513.name = "temporomandibular_changed";
field513.accessType = "outputOnly";
field513.type = "SFRotation";
ProtoInterface4.field[508] = field513;

let field514 = browser.currentScene.createNode("field");
field514.name = "vc1_key";
field514.accessType = "inputOutput";
field514.type = "MFFloat";
//no default value
ProtoInterface4.field[509] = field514;

let field515 = browser.currentScene.createNode("field");
field515.name = "vc1_keyValue";
field515.accessType = "inputOutput";
field515.type = "MFRotation";
//no default value
ProtoInterface4.field[510] = field515;

let field516 = browser.currentScene.createNode("field");
field516.name = "vc1_changed";
field516.accessType = "outputOnly";
field516.type = "SFRotation";
ProtoInterface4.field[511] = field516;

let field517 = browser.currentScene.createNode("field");
field517.name = "vc2_key";
field517.accessType = "inputOutput";
field517.type = "MFFloat";
//no default value
ProtoInterface4.field[512] = field517;

let field518 = browser.currentScene.createNode("field");
field518.name = "vc2_keyValue";
field518.accessType = "inputOutput";
field518.type = "MFRotation";
//no default value
ProtoInterface4.field[513] = field518;

let field519 = browser.currentScene.createNode("field");
field519.name = "vc2_changed";
field519.accessType = "outputOnly";
field519.type = "SFRotation";
ProtoInterface4.field[514] = field519;

let field520 = browser.currentScene.createNode("field");
field520.name = "vc3_key";
field520.accessType = "inputOutput";
field520.type = "MFFloat";
//no default value
ProtoInterface4.field[515] = field520;

let field521 = browser.currentScene.createNode("field");
field521.name = "vc3_keyValue";
field521.accessType = "inputOutput";
field521.type = "MFRotation";
//no default value
ProtoInterface4.field[516] = field521;

let field522 = browser.currentScene.createNode("field");
field522.name = "vc3_changed";
field522.accessType = "outputOnly";
field522.type = "SFRotation";
ProtoInterface4.field[517] = field522;

let field523 = browser.currentScene.createNode("field");
field523.name = "vc4_key";
field523.accessType = "inputOutput";
field523.type = "MFFloat";
//no default value
ProtoInterface4.field[518] = field523;

let field524 = browser.currentScene.createNode("field");
field524.name = "vc4_keyValue";
field524.accessType = "inputOutput";
field524.type = "MFRotation";
//no default value
ProtoInterface4.field[519] = field524;

let field525 = browser.currentScene.createNode("field");
field525.name = "vc4_changed";
field525.accessType = "outputOnly";
field525.type = "SFRotation";
ProtoInterface4.field[520] = field525;

let field526 = browser.currentScene.createNode("field");
field526.name = "vc5_key";
field526.accessType = "inputOutput";
field526.type = "MFFloat";
//no default value
ProtoInterface4.field[521] = field526;

let field527 = browser.currentScene.createNode("field");
field527.name = "vc5_keyValue";
field527.accessType = "inputOutput";
field527.type = "MFRotation";
//no default value
ProtoInterface4.field[522] = field527;

let field528 = browser.currentScene.createNode("field");
field528.name = "vc5_changed";
field528.accessType = "outputOnly";
field528.type = "SFRotation";
ProtoInterface4.field[523] = field528;

let field529 = browser.currentScene.createNode("field");
field529.name = "vc6_key";
field529.accessType = "inputOutput";
field529.type = "MFFloat";
//no default value
ProtoInterface4.field[524] = field529;

let field530 = browser.currentScene.createNode("field");
field530.name = "vc6_keyValue";
field530.accessType = "inputOutput";
field530.type = "MFRotation";
//no default value
ProtoInterface4.field[525] = field530;

let field531 = browser.currentScene.createNode("field");
field531.name = "vc6_changed";
field531.accessType = "outputOnly";
field531.type = "SFRotation";
ProtoInterface4.field[526] = field531;

let field532 = browser.currentScene.createNode("field");
field532.name = "vc7_key";
field532.accessType = "inputOutput";
field532.type = "MFFloat";
//no default value
ProtoInterface4.field[527] = field532;

let field533 = browser.currentScene.createNode("field");
field533.name = "vc7_keyValue";
field533.accessType = "inputOutput";
field533.type = "MFRotation";
//no default value
ProtoInterface4.field[528] = field533;

let field534 = browser.currentScene.createNode("field");
field534.name = "vc7_changed";
field534.accessType = "outputOnly";
field534.type = "SFRotation";
ProtoInterface4.field[529] = field534;

let field535 = browser.currentScene.createNode("field");
field535.name = "vl1_key";
field535.accessType = "inputOutput";
field535.type = "MFFloat";
//no default value
ProtoInterface4.field[530] = field535;

let field536 = browser.currentScene.createNode("field");
field536.name = "vl1_keyValue";
field536.accessType = "inputOutput";
field536.type = "MFRotation";
//no default value
ProtoInterface4.field[531] = field536;

let field537 = browser.currentScene.createNode("field");
field537.name = "vl1_changed";
field537.accessType = "outputOnly";
field537.type = "SFRotation";
ProtoInterface4.field[532] = field537;

let field538 = browser.currentScene.createNode("field");
field538.name = "vl2_key";
field538.accessType = "inputOutput";
field538.type = "MFFloat";
//no default value
ProtoInterface4.field[533] = field538;

let field539 = browser.currentScene.createNode("field");
field539.name = "vl2_keyValue";
field539.accessType = "inputOutput";
field539.type = "MFRotation";
//no default value
ProtoInterface4.field[534] = field539;

let field540 = browser.currentScene.createNode("field");
field540.name = "vl2_changed";
field540.accessType = "outputOnly";
field540.type = "SFRotation";
ProtoInterface4.field[535] = field540;

let field541 = browser.currentScene.createNode("field");
field541.name = "vl3_key";
field541.accessType = "inputOutput";
field541.type = "MFFloat";
//no default value
ProtoInterface4.field[536] = field541;

let field542 = browser.currentScene.createNode("field");
field542.name = "vl3_keyValue";
field542.accessType = "inputOutput";
field542.type = "MFRotation";
//no default value
ProtoInterface4.field[537] = field542;

let field543 = browser.currentScene.createNode("field");
field543.name = "vl3_changed";
field543.accessType = "outputOnly";
field543.type = "SFRotation";
ProtoInterface4.field[538] = field543;

let field544 = browser.currentScene.createNode("field");
field544.name = "vl4_key";
field544.accessType = "inputOutput";
field544.type = "MFFloat";
//no default value
ProtoInterface4.field[539] = field544;

let field545 = browser.currentScene.createNode("field");
field545.name = "vl4_keyValue";
field545.accessType = "inputOutput";
field545.type = "MFRotation";
//no default value
ProtoInterface4.field[540] = field545;

let field546 = browser.currentScene.createNode("field");
field546.name = "vl4_changed";
field546.accessType = "outputOnly";
field546.type = "SFRotation";
ProtoInterface4.field[541] = field546;

let field547 = browser.currentScene.createNode("field");
field547.name = "vl5_key";
field547.accessType = "inputOutput";
field547.type = "MFFloat";
//no default value
ProtoInterface4.field[542] = field547;

let field548 = browser.currentScene.createNode("field");
field548.name = "vl5_keyValue";
field548.accessType = "inputOutput";
field548.type = "MFRotation";
//no default value
ProtoInterface4.field[543] = field548;

let field549 = browser.currentScene.createNode("field");
field549.name = "vl5_changed";
field549.accessType = "outputOnly";
field549.type = "SFRotation";
ProtoInterface4.field[544] = field549;

let field550 = browser.currentScene.createNode("field");
field550.name = "vt10_key";
field550.accessType = "inputOutput";
field550.type = "MFFloat";
//no default value
ProtoInterface4.field[545] = field550;

let field551 = browser.currentScene.createNode("field");
field551.name = "vt10_keyValue";
field551.accessType = "inputOutput";
field551.type = "MFRotation";
//no default value
ProtoInterface4.field[546] = field551;

let field552 = browser.currentScene.createNode("field");
field552.name = "vt10_changed";
field552.accessType = "outputOnly";
field552.type = "SFRotation";
ProtoInterface4.field[547] = field552;

let field553 = browser.currentScene.createNode("field");
field553.name = "vt11_key";
field553.accessType = "inputOutput";
field553.type = "MFFloat";
//no default value
ProtoInterface4.field[548] = field553;

let field554 = browser.currentScene.createNode("field");
field554.name = "vt11_keyValue";
field554.accessType = "inputOutput";
field554.type = "MFRotation";
//no default value
ProtoInterface4.field[549] = field554;

let field555 = browser.currentScene.createNode("field");
field555.name = "vt11_changed";
field555.accessType = "outputOnly";
field555.type = "SFRotation";
ProtoInterface4.field[550] = field555;

let field556 = browser.currentScene.createNode("field");
field556.name = "vt12_key";
field556.accessType = "inputOutput";
field556.type = "MFFloat";
//no default value
ProtoInterface4.field[551] = field556;

let field557 = browser.currentScene.createNode("field");
field557.name = "vt12_keyValue";
field557.accessType = "inputOutput";
field557.type = "MFRotation";
//no default value
ProtoInterface4.field[552] = field557;

let field558 = browser.currentScene.createNode("field");
field558.name = "vt12_changed";
field558.accessType = "outputOnly";
field558.type = "SFRotation";
ProtoInterface4.field[553] = field558;

let field559 = browser.currentScene.createNode("field");
field559.name = "vt1_key";
field559.accessType = "inputOutput";
field559.type = "MFFloat";
//no default value
ProtoInterface4.field[554] = field559;

let field560 = browser.currentScene.createNode("field");
field560.name = "vt1_keyValue";
field560.accessType = "inputOutput";
field560.type = "MFRotation";
//no default value
ProtoInterface4.field[555] = field560;

let field561 = browser.currentScene.createNode("field");
field561.name = "vt1_changed";
field561.accessType = "outputOnly";
field561.type = "SFRotation";
ProtoInterface4.field[556] = field561;

let field562 = browser.currentScene.createNode("field");
field562.name = "vt2_key";
field562.accessType = "inputOutput";
field562.type = "MFFloat";
//no default value
ProtoInterface4.field[557] = field562;

let field563 = browser.currentScene.createNode("field");
field563.name = "vt2_keyValue";
field563.accessType = "inputOutput";
field563.type = "MFRotation";
//no default value
ProtoInterface4.field[558] = field563;

let field564 = browser.currentScene.createNode("field");
field564.name = "vt2_changed";
field564.accessType = "outputOnly";
field564.type = "SFRotation";
ProtoInterface4.field[559] = field564;

let field565 = browser.currentScene.createNode("field");
field565.name = "vt3_key";
field565.accessType = "inputOutput";
field565.type = "MFFloat";
//no default value
ProtoInterface4.field[560] = field565;

let field566 = browser.currentScene.createNode("field");
field566.name = "vt3_keyValue";
field566.accessType = "inputOutput";
field566.type = "MFRotation";
//no default value
ProtoInterface4.field[561] = field566;

let field567 = browser.currentScene.createNode("field");
field567.name = "vt3_changed";
field567.accessType = "outputOnly";
field567.type = "SFRotation";
ProtoInterface4.field[562] = field567;

let field568 = browser.currentScene.createNode("field");
field568.name = "vt4_key";
field568.accessType = "inputOutput";
field568.type = "MFFloat";
//no default value
ProtoInterface4.field[563] = field568;

let field569 = browser.currentScene.createNode("field");
field569.name = "vt4_keyValue";
field569.accessType = "inputOutput";
field569.type = "MFRotation";
//no default value
ProtoInterface4.field[564] = field569;

let field570 = browser.currentScene.createNode("field");
field570.name = "vt4_changed";
field570.accessType = "outputOnly";
field570.type = "SFRotation";
ProtoInterface4.field[565] = field570;

let field571 = browser.currentScene.createNode("field");
field571.name = "vt5_key";
field571.accessType = "inputOutput";
field571.type = "MFFloat";
//no default value
ProtoInterface4.field[566] = field571;

let field572 = browser.currentScene.createNode("field");
field572.name = "vt5_keyValue";
field572.accessType = "inputOutput";
field572.type = "MFRotation";
//no default value
ProtoInterface4.field[567] = field572;

let field573 = browser.currentScene.createNode("field");
field573.name = "vt5_changed";
field573.accessType = "outputOnly";
field573.type = "SFRotation";
ProtoInterface4.field[568] = field573;

let field574 = browser.currentScene.createNode("field");
field574.name = "vt6_key";
field574.accessType = "inputOutput";
field574.type = "MFFloat";
//no default value
ProtoInterface4.field[569] = field574;

let field575 = browser.currentScene.createNode("field");
field575.name = "vt6_keyValue";
field575.accessType = "inputOutput";
field575.type = "MFRotation";
//no default value
ProtoInterface4.field[570] = field575;

let field576 = browser.currentScene.createNode("field");
field576.name = "vt6_changed";
field576.accessType = "outputOnly";
field576.type = "SFRotation";
ProtoInterface4.field[571] = field576;

let field577 = browser.currentScene.createNode("field");
field577.name = "vt7_key";
field577.accessType = "inputOutput";
field577.type = "MFFloat";
//no default value
ProtoInterface4.field[572] = field577;

let field578 = browser.currentScene.createNode("field");
field578.name = "vt7_keyValue";
field578.accessType = "inputOutput";
field578.type = "MFRotation";
//no default value
ProtoInterface4.field[573] = field578;

let field579 = browser.currentScene.createNode("field");
field579.name = "vt7_changed";
field579.accessType = "outputOnly";
field579.type = "SFRotation";
ProtoInterface4.field[574] = field579;

let field580 = browser.currentScene.createNode("field");
field580.name = "vt8_key";
field580.accessType = "inputOutput";
field580.type = "MFFloat";
//no default value
ProtoInterface4.field[575] = field580;

let field581 = browser.currentScene.createNode("field");
field581.name = "vt8_keyValue";
field581.accessType = "inputOutput";
field581.type = "MFRotation";
//no default value
ProtoInterface4.field[576] = field581;

let field582 = browser.currentScene.createNode("field");
field582.name = "vt8_changed";
field582.accessType = "outputOnly";
field582.type = "SFRotation";
ProtoInterface4.field[577] = field582;

let field583 = browser.currentScene.createNode("field");
field583.name = "vt9_key";
field583.accessType = "inputOutput";
field583.type = "MFFloat";
//no default value
ProtoInterface4.field[578] = field583;

let field584 = browser.currentScene.createNode("field");
field584.name = "vt9_keyValue";
field584.accessType = "inputOutput";
field584.type = "MFRotation";
//no default value
ProtoInterface4.field[579] = field584;

let field585 = browser.currentScene.createNode("field");
field585.name = "vt9_changed";
field585.accessType = "outputOnly";
field585.type = "SFRotation";
ProtoInterface4.field[580] = field585;

ProtoDeclare3.protoInterface = ProtoInterface4;

let ProtoBody586 = browser.currentScene.createNode("ProtoBody");
//design alternative: move TimeSensor out of the prototype, instead expose set_fraction globally to all interpolators
let TimeSensor587 = browser.currentScene.createNode("TimeSensor");
TimeSensor587.DEF = "BehaviorClock";
let IS588 = browser.currentScene.createNode("IS");
let connect589 = browser.currentScene.createNode("connect");
connect589.nodeField = "enabled";
connect589.protoField = "enabled";
IS588.connect = new MFNode();

IS588.connect[0] = connect589;

let connect590 = browser.currentScene.createNode("connect");
connect590.nodeField = "cycleInterval";
connect590.protoField = "cycleInterval";
IS588.connect[1] = connect590;

let connect591 = browser.currentScene.createNode("connect");
connect591.nodeField = "loop";
connect591.protoField = "loop";
IS588.connect[2] = connect591;

let connect592 = browser.currentScene.createNode("connect");
connect592.nodeField = "startTime";
connect592.protoField = "startTime";
IS588.connect[3] = connect592;

let connect593 = browser.currentScene.createNode("connect");
connect593.nodeField = "stopTime";
connect593.protoField = "stopTime";
IS588.connect[4] = connect593;

let connect594 = browser.currentScene.createNode("connect");
connect594.nodeField = "pauseTime";
connect594.protoField = "pauseTime";
IS588.connect[5] = connect594;

let connect595 = browser.currentScene.createNode("connect");
connect595.nodeField = "resumeTime";
connect595.protoField = "resumeTime";
IS588.connect[6] = connect595;

let connect596 = browser.currentScene.createNode("connect");
connect596.nodeField = "cycleTime";
connect596.protoField = "cycleTime";
IS588.connect[7] = connect596;

let connect597 = browser.currentScene.createNode("connect");
connect597.nodeField = "isActive";
connect597.protoField = "isActive";
IS588.connect[8] = connect597;

let connect598 = browser.currentScene.createNode("connect");
connect598.nodeField = "isPaused";
connect598.protoField = "isPaused";
IS588.connect[9] = connect598;

let connect599 = browser.currentScene.createNode("connect");
connect599.nodeField = "elapsedTime";
connect599.protoField = "elapsedTime";
IS588.connect[10] = connect599;

let connect600 = browser.currentScene.createNode("connect");
connect600.nodeField = "time";
connect600.protoField = "time";
IS588.connect[11] = connect600;

let connect601 = browser.currentScene.createNode("connect");
connect601.nodeField = "fraction_changed";
connect601.protoField = "fraction_changed";
IS588.connect[12] = connect601;

TimeSensor587.iS = IS588;

ProtoBody586.children = new MFNode();

ProtoBody586.children[0] = TimeSensor587;

//note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless
let Switch602 = browser.currentScene.createNode("Switch");
Switch602.DEF = "SupportedLoaHolder1";
Switch602.whichChoice = -1;
let IS603 = browser.currentScene.createNode("IS");
let connect604 = browser.currentScene.createNode("connect");
connect604.nodeField = "whichChoice";
connect604.protoField = "supportedLOA";
IS603.connect = new MFNode();

IS603.connect[0] = connect604;

Switch602.iS = IS603;

ProtoBody586.children[1] = Switch602;

let PositionInterpolator605 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator605.DEF = "HumanoidRootPI";
let IS606 = browser.currentScene.createNode("IS");
let connect607 = browser.currentScene.createNode("connect");
connect607.nodeField = "key";
connect607.protoField = "HumanoidRoot_translation_key";
IS606.connect = new MFNode();

IS606.connect[0] = connect607;

let connect608 = browser.currentScene.createNode("connect");
connect608.nodeField = "keyValue";
connect608.protoField = "HumanoidRoot_translation_keyValue";
IS606.connect[1] = connect608;

let connect609 = browser.currentScene.createNode("connect");
connect609.nodeField = "value_changed";
connect609.protoField = "HumanoidRoot_translation_changed";
IS606.connect[2] = connect609;

PositionInterpolator605.iS = IS606;

ProtoBody586.children[2] = PositionInterpolator605;

let ROUTE610 = browser.currentScene.createNode("ROUTE");
ROUTE610.fromField = "fraction_changed";
ROUTE610.fromNode = "BehaviorClock";
ROUTE610.toField = "set_fraction";
ROUTE610.toNode = "HumanoidRootPI";
ProtoBody586.children[3] = ROUTE610;

let OrientationInterpolator611 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator611.DEF = "HumanoidRootOI";
let IS612 = browser.currentScene.createNode("IS");
let connect613 = browser.currentScene.createNode("connect");
connect613.nodeField = "key";
connect613.protoField = "HumanoidRoot_rotation_key";
IS612.connect = new MFNode();

IS612.connect[0] = connect613;

let connect614 = browser.currentScene.createNode("connect");
connect614.nodeField = "keyValue";
connect614.protoField = "HumanoidRoot_rotation_keyValue";
IS612.connect[1] = connect614;

let connect615 = browser.currentScene.createNode("connect");
connect615.nodeField = "value_changed";
connect615.protoField = "HumanoidRoot_rotation_changed";
IS612.connect[2] = connect615;

OrientationInterpolator611.iS = IS612;

ProtoBody586.children[4] = OrientationInterpolator611;

let ROUTE616 = browser.currentScene.createNode("ROUTE");
ROUTE616.fromField = "fraction_changed";
ROUTE616.fromNode = "BehaviorClock";
ROUTE616.toField = "set_fraction";
ROUTE616.toNode = "HumanoidRootOI";
ProtoBody586.children[5] = ROUTE616;

let OrientationInterpolator617 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator617.DEF = "c1_OI";
let IS618 = browser.currentScene.createNode("IS");
let connect619 = browser.currentScene.createNode("connect");
connect619.nodeField = "key";
connect619.protoField = "c1_key";
IS618.connect = new MFNode();

IS618.connect[0] = connect619;

let connect620 = browser.currentScene.createNode("connect");
connect620.nodeField = "keyValue";
connect620.protoField = "c1_keyValue";
IS618.connect[1] = connect620;

let connect621 = browser.currentScene.createNode("connect");
connect621.nodeField = "value_changed";
connect621.protoField = "c1_changed";
IS618.connect[2] = connect621;

OrientationInterpolator617.iS = IS618;

ProtoBody586.children[6] = OrientationInterpolator617;

let ROUTE622 = browser.currentScene.createNode("ROUTE");
ROUTE622.fromField = "fraction_changed";
ROUTE622.fromNode = "BehaviorClock";
ROUTE622.toField = "set_fraction";
ROUTE622.toNode = "c1_OI";
ProtoBody586.children[7] = ROUTE622;

let OrientationInterpolator623 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator623.DEF = "c2_OI";
let IS624 = browser.currentScene.createNode("IS");
let connect625 = browser.currentScene.createNode("connect");
connect625.nodeField = "key";
connect625.protoField = "c2_key";
IS624.connect = new MFNode();

IS624.connect[0] = connect625;

let connect626 = browser.currentScene.createNode("connect");
connect626.nodeField = "keyValue";
connect626.protoField = "c2_keyValue";
IS624.connect[1] = connect626;

let connect627 = browser.currentScene.createNode("connect");
connect627.nodeField = "value_changed";
connect627.protoField = "c2_changed";
IS624.connect[2] = connect627;

OrientationInterpolator623.iS = IS624;

ProtoBody586.children[8] = OrientationInterpolator623;

let ROUTE628 = browser.currentScene.createNode("ROUTE");
ROUTE628.fromField = "fraction_changed";
ROUTE628.fromNode = "BehaviorClock";
ROUTE628.toField = "set_fraction";
ROUTE628.toNode = "c2_OI";
ProtoBody586.children[9] = ROUTE628;

let OrientationInterpolator629 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator629.DEF = "c3_OI";
let IS630 = browser.currentScene.createNode("IS");
let connect631 = browser.currentScene.createNode("connect");
connect631.nodeField = "key";
connect631.protoField = "c3_key";
IS630.connect = new MFNode();

IS630.connect[0] = connect631;

let connect632 = browser.currentScene.createNode("connect");
connect632.nodeField = "keyValue";
connect632.protoField = "c3_keyValue";
IS630.connect[1] = connect632;

let connect633 = browser.currentScene.createNode("connect");
connect633.nodeField = "value_changed";
connect633.protoField = "c3_changed";
IS630.connect[2] = connect633;

OrientationInterpolator629.iS = IS630;

ProtoBody586.children[10] = OrientationInterpolator629;

let ROUTE634 = browser.currentScene.createNode("ROUTE");
ROUTE634.fromField = "fraction_changed";
ROUTE634.fromNode = "BehaviorClock";
ROUTE634.toField = "set_fraction";
ROUTE634.toNode = "c3_OI";
ProtoBody586.children[11] = ROUTE634;

let OrientationInterpolator635 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator635.DEF = "c4_OI";
let IS636 = browser.currentScene.createNode("IS");
let connect637 = browser.currentScene.createNode("connect");
connect637.nodeField = "key";
connect637.protoField = "c4_key";
IS636.connect = new MFNode();

IS636.connect[0] = connect637;

let connect638 = browser.currentScene.createNode("connect");
connect638.nodeField = "keyValue";
connect638.protoField = "c4_keyValue";
IS636.connect[1] = connect638;

let connect639 = browser.currentScene.createNode("connect");
connect639.nodeField = "value_changed";
connect639.protoField = "c4_changed";
IS636.connect[2] = connect639;

OrientationInterpolator635.iS = IS636;

ProtoBody586.children[12] = OrientationInterpolator635;

let ROUTE640 = browser.currentScene.createNode("ROUTE");
ROUTE640.fromField = "fraction_changed";
ROUTE640.fromNode = "BehaviorClock";
ROUTE640.toField = "set_fraction";
ROUTE640.toNode = "c4_OI";
ProtoBody586.children[13] = ROUTE640;

let OrientationInterpolator641 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator641.DEF = "c5_OI";
let IS642 = browser.currentScene.createNode("IS");
let connect643 = browser.currentScene.createNode("connect");
connect643.nodeField = "key";
connect643.protoField = "c5_key";
IS642.connect = new MFNode();

IS642.connect[0] = connect643;

let connect644 = browser.currentScene.createNode("connect");
connect644.nodeField = "keyValue";
connect644.protoField = "c5_keyValue";
IS642.connect[1] = connect644;

let connect645 = browser.currentScene.createNode("connect");
connect645.nodeField = "value_changed";
connect645.protoField = "c5_changed";
IS642.connect[2] = connect645;

OrientationInterpolator641.iS = IS642;

ProtoBody586.children[14] = OrientationInterpolator641;

let ROUTE646 = browser.currentScene.createNode("ROUTE");
ROUTE646.fromField = "fraction_changed";
ROUTE646.fromNode = "BehaviorClock";
ROUTE646.toField = "set_fraction";
ROUTE646.toNode = "c5_OI";
ProtoBody586.children[15] = ROUTE646;

let OrientationInterpolator647 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator647.DEF = "c6_OI";
let IS648 = browser.currentScene.createNode("IS");
let connect649 = browser.currentScene.createNode("connect");
connect649.nodeField = "key";
connect649.protoField = "c6_key";
IS648.connect = new MFNode();

IS648.connect[0] = connect649;

let connect650 = browser.currentScene.createNode("connect");
connect650.nodeField = "keyValue";
connect650.protoField = "c6_keyValue";
IS648.connect[1] = connect650;

let connect651 = browser.currentScene.createNode("connect");
connect651.nodeField = "value_changed";
connect651.protoField = "c6_changed";
IS648.connect[2] = connect651;

OrientationInterpolator647.iS = IS648;

ProtoBody586.children[16] = OrientationInterpolator647;

let ROUTE652 = browser.currentScene.createNode("ROUTE");
ROUTE652.fromField = "fraction_changed";
ROUTE652.fromNode = "BehaviorClock";
ROUTE652.toField = "set_fraction";
ROUTE652.toNode = "c6_OI";
ProtoBody586.children[17] = ROUTE652;

let OrientationInterpolator653 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator653.DEF = "c7_OI";
let IS654 = browser.currentScene.createNode("IS");
let connect655 = browser.currentScene.createNode("connect");
connect655.nodeField = "key";
connect655.protoField = "c7_key";
IS654.connect = new MFNode();

IS654.connect[0] = connect655;

let connect656 = browser.currentScene.createNode("connect");
connect656.nodeField = "keyValue";
connect656.protoField = "c7_keyValue";
IS654.connect[1] = connect656;

let connect657 = browser.currentScene.createNode("connect");
connect657.nodeField = "value_changed";
connect657.protoField = "c7_changed";
IS654.connect[2] = connect657;

OrientationInterpolator653.iS = IS654;

ProtoBody586.children[18] = OrientationInterpolator653;

let ROUTE658 = browser.currentScene.createNode("ROUTE");
ROUTE658.fromField = "fraction_changed";
ROUTE658.fromNode = "BehaviorClock";
ROUTE658.toField = "set_fraction";
ROUTE658.toNode = "c7_OI";
ProtoBody586.children[19] = ROUTE658;

let OrientationInterpolator659 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator659.DEF = "jaw_OI";
let IS660 = browser.currentScene.createNode("IS");
let connect661 = browser.currentScene.createNode("connect");
connect661.nodeField = "key";
connect661.protoField = "jaw_key";
IS660.connect = new MFNode();

IS660.connect[0] = connect661;

let connect662 = browser.currentScene.createNode("connect");
connect662.nodeField = "keyValue";
connect662.protoField = "jaw_keyValue";
IS660.connect[1] = connect662;

let connect663 = browser.currentScene.createNode("connect");
connect663.nodeField = "value_changed";
connect663.protoField = "jaw_changed";
IS660.connect[2] = connect663;

OrientationInterpolator659.iS = IS660;

ProtoBody586.children[20] = OrientationInterpolator659;

let ROUTE664 = browser.currentScene.createNode("ROUTE");
ROUTE664.fromField = "fraction_changed";
ROUTE664.fromNode = "BehaviorClock";
ROUTE664.toField = "set_fraction";
ROUTE664.toNode = "jaw_OI";
ProtoBody586.children[21] = ROUTE664;

let OrientationInterpolator665 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator665.DEF = "l1_OI";
let IS666 = browser.currentScene.createNode("IS");
let connect667 = browser.currentScene.createNode("connect");
connect667.nodeField = "key";
connect667.protoField = "l1_key";
IS666.connect = new MFNode();

IS666.connect[0] = connect667;

let connect668 = browser.currentScene.createNode("connect");
connect668.nodeField = "keyValue";
connect668.protoField = "l1_keyValue";
IS666.connect[1] = connect668;

let connect669 = browser.currentScene.createNode("connect");
connect669.nodeField = "value_changed";
connect669.protoField = "l1_changed";
IS666.connect[2] = connect669;

OrientationInterpolator665.iS = IS666;

ProtoBody586.children[22] = OrientationInterpolator665;

let ROUTE670 = browser.currentScene.createNode("ROUTE");
ROUTE670.fromField = "fraction_changed";
ROUTE670.fromNode = "BehaviorClock";
ROUTE670.toField = "set_fraction";
ROUTE670.toNode = "l1_OI";
ProtoBody586.children[23] = ROUTE670;

let OrientationInterpolator671 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator671.DEF = "l2_OI";
let IS672 = browser.currentScene.createNode("IS");
let connect673 = browser.currentScene.createNode("connect");
connect673.nodeField = "key";
connect673.protoField = "l2_key";
IS672.connect = new MFNode();

IS672.connect[0] = connect673;

let connect674 = browser.currentScene.createNode("connect");
connect674.nodeField = "keyValue";
connect674.protoField = "l2_keyValue";
IS672.connect[1] = connect674;

let connect675 = browser.currentScene.createNode("connect");
connect675.nodeField = "value_changed";
connect675.protoField = "l2_changed";
IS672.connect[2] = connect675;

OrientationInterpolator671.iS = IS672;

ProtoBody586.children[24] = OrientationInterpolator671;

let ROUTE676 = browser.currentScene.createNode("ROUTE");
ROUTE676.fromField = "fraction_changed";
ROUTE676.fromNode = "BehaviorClock";
ROUTE676.toField = "set_fraction";
ROUTE676.toNode = "l2_OI";
ProtoBody586.children[25] = ROUTE676;

let OrientationInterpolator677 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator677.DEF = "l3_OI";
let IS678 = browser.currentScene.createNode("IS");
let connect679 = browser.currentScene.createNode("connect");
connect679.nodeField = "key";
connect679.protoField = "l3_key";
IS678.connect = new MFNode();

IS678.connect[0] = connect679;

let connect680 = browser.currentScene.createNode("connect");
connect680.nodeField = "keyValue";
connect680.protoField = "l3_keyValue";
IS678.connect[1] = connect680;

let connect681 = browser.currentScene.createNode("connect");
connect681.nodeField = "value_changed";
connect681.protoField = "l3_changed";
IS678.connect[2] = connect681;

OrientationInterpolator677.iS = IS678;

ProtoBody586.children[26] = OrientationInterpolator677;

let ROUTE682 = browser.currentScene.createNode("ROUTE");
ROUTE682.fromField = "fraction_changed";
ROUTE682.fromNode = "BehaviorClock";
ROUTE682.toField = "set_fraction";
ROUTE682.toNode = "l3_OI";
ProtoBody586.children[27] = ROUTE682;

let OrientationInterpolator683 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator683.DEF = "l4_OI";
let IS684 = browser.currentScene.createNode("IS");
let connect685 = browser.currentScene.createNode("connect");
connect685.nodeField = "key";
connect685.protoField = "l4_key";
IS684.connect = new MFNode();

IS684.connect[0] = connect685;

let connect686 = browser.currentScene.createNode("connect");
connect686.nodeField = "keyValue";
connect686.protoField = "l4_keyValue";
IS684.connect[1] = connect686;

let connect687 = browser.currentScene.createNode("connect");
connect687.nodeField = "value_changed";
connect687.protoField = "l4_changed";
IS684.connect[2] = connect687;

OrientationInterpolator683.iS = IS684;

ProtoBody586.children[28] = OrientationInterpolator683;

let ROUTE688 = browser.currentScene.createNode("ROUTE");
ROUTE688.fromField = "fraction_changed";
ROUTE688.fromNode = "BehaviorClock";
ROUTE688.toField = "set_fraction";
ROUTE688.toNode = "l4_OI";
ProtoBody586.children[29] = ROUTE688;

let OrientationInterpolator689 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator689.DEF = "l5_OI";
let IS690 = browser.currentScene.createNode("IS");
let connect691 = browser.currentScene.createNode("connect");
connect691.nodeField = "key";
connect691.protoField = "l5_key";
IS690.connect = new MFNode();

IS690.connect[0] = connect691;

let connect692 = browser.currentScene.createNode("connect");
connect692.nodeField = "keyValue";
connect692.protoField = "l5_keyValue";
IS690.connect[1] = connect692;

let connect693 = browser.currentScene.createNode("connect");
connect693.nodeField = "value_changed";
connect693.protoField = "l5_changed";
IS690.connect[2] = connect693;

OrientationInterpolator689.iS = IS690;

ProtoBody586.children[30] = OrientationInterpolator689;

let ROUTE694 = browser.currentScene.createNode("ROUTE");
ROUTE694.fromField = "fraction_changed";
ROUTE694.fromNode = "BehaviorClock";
ROUTE694.toField = "set_fraction";
ROUTE694.toNode = "l5_OI";
ProtoBody586.children[31] = ROUTE694;

let OrientationInterpolator695 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator695.DEF = "l_acromioclavicular_OI";
let IS696 = browser.currentScene.createNode("IS");
let connect697 = browser.currentScene.createNode("connect");
connect697.nodeField = "key";
connect697.protoField = "l_acromioclavicular_key";
IS696.connect = new MFNode();

IS696.connect[0] = connect697;

let connect698 = browser.currentScene.createNode("connect");
connect698.nodeField = "keyValue";
connect698.protoField = "l_acromioclavicular_keyValue";
IS696.connect[1] = connect698;

let connect699 = browser.currentScene.createNode("connect");
connect699.nodeField = "value_changed";
connect699.protoField = "l_acromioclavicular_changed";
IS696.connect[2] = connect699;

OrientationInterpolator695.iS = IS696;

ProtoBody586.children[32] = OrientationInterpolator695;

let ROUTE700 = browser.currentScene.createNode("ROUTE");
ROUTE700.fromField = "fraction_changed";
ROUTE700.fromNode = "BehaviorClock";
ROUTE700.toField = "set_fraction";
ROUTE700.toNode = "l_acromioclavicular_OI";
ProtoBody586.children[33] = ROUTE700;

let OrientationInterpolator701 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator701.DEF = "l_ankle_OI";
let IS702 = browser.currentScene.createNode("IS");
let connect703 = browser.currentScene.createNode("connect");
connect703.nodeField = "key";
connect703.protoField = "l_ankle_key";
IS702.connect = new MFNode();

IS702.connect[0] = connect703;

let connect704 = browser.currentScene.createNode("connect");
connect704.nodeField = "keyValue";
connect704.protoField = "l_ankle_keyValue";
IS702.connect[1] = connect704;

let connect705 = browser.currentScene.createNode("connect");
connect705.nodeField = "value_changed";
connect705.protoField = "l_ankle_changed";
IS702.connect[2] = connect705;

OrientationInterpolator701.iS = IS702;

ProtoBody586.children[34] = OrientationInterpolator701;

let ROUTE706 = browser.currentScene.createNode("ROUTE");
ROUTE706.fromField = "fraction_changed";
ROUTE706.fromNode = "BehaviorClock";
ROUTE706.toField = "set_fraction";
ROUTE706.toNode = "l_ankle_OI";
ProtoBody586.children[35] = ROUTE706;

let OrientationInterpolator707 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator707.DEF = "l_calf_OI";
let IS708 = browser.currentScene.createNode("IS");
let connect709 = browser.currentScene.createNode("connect");
connect709.nodeField = "key";
connect709.protoField = "l_calf_key";
IS708.connect = new MFNode();

IS708.connect[0] = connect709;

let connect710 = browser.currentScene.createNode("connect");
connect710.nodeField = "keyValue";
connect710.protoField = "l_calf_keyValue";
IS708.connect[1] = connect710;

let connect711 = browser.currentScene.createNode("connect");
connect711.nodeField = "value_changed";
connect711.protoField = "l_calf_changed";
IS708.connect[2] = connect711;

OrientationInterpolator707.iS = IS708;

ProtoBody586.children[36] = OrientationInterpolator707;

let ROUTE712 = browser.currentScene.createNode("ROUTE");
ROUTE712.fromField = "fraction_changed";
ROUTE712.fromNode = "BehaviorClock";
ROUTE712.toField = "set_fraction";
ROUTE712.toNode = "l_calf_OI";
ProtoBody586.children[37] = ROUTE712;

let OrientationInterpolator713 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator713.DEF = "l_clavicle_OI";
let IS714 = browser.currentScene.createNode("IS");
let connect715 = browser.currentScene.createNode("connect");
connect715.nodeField = "key";
connect715.protoField = "l_clavicle_key";
IS714.connect = new MFNode();

IS714.connect[0] = connect715;

let connect716 = browser.currentScene.createNode("connect");
connect716.nodeField = "keyValue";
connect716.protoField = "l_clavicle_keyValue";
IS714.connect[1] = connect716;

let connect717 = browser.currentScene.createNode("connect");
connect717.nodeField = "value_changed";
connect717.protoField = "l_clavicle_changed";
IS714.connect[2] = connect717;

OrientationInterpolator713.iS = IS714;

ProtoBody586.children[38] = OrientationInterpolator713;

let ROUTE718 = browser.currentScene.createNode("ROUTE");
ROUTE718.fromField = "fraction_changed";
ROUTE718.fromNode = "BehaviorClock";
ROUTE718.toField = "set_fraction";
ROUTE718.toNode = "l_clavicle_OI";
ProtoBody586.children[39] = ROUTE718;

let OrientationInterpolator719 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator719.DEF = "l_elbow_OI";
let IS720 = browser.currentScene.createNode("IS");
let connect721 = browser.currentScene.createNode("connect");
connect721.nodeField = "key";
connect721.protoField = "l_elbow_key";
IS720.connect = new MFNode();

IS720.connect[0] = connect721;

let connect722 = browser.currentScene.createNode("connect");
connect722.nodeField = "keyValue";
connect722.protoField = "l_elbow_keyValue";
IS720.connect[1] = connect722;

let connect723 = browser.currentScene.createNode("connect");
connect723.nodeField = "value_changed";
connect723.protoField = "l_elbow_changed";
IS720.connect[2] = connect723;

OrientationInterpolator719.iS = IS720;

ProtoBody586.children[40] = OrientationInterpolator719;

let ROUTE724 = browser.currentScene.createNode("ROUTE");
ROUTE724.fromField = "fraction_changed";
ROUTE724.fromNode = "BehaviorClock";
ROUTE724.toField = "set_fraction";
ROUTE724.toNode = "l_elbow_OI";
ProtoBody586.children[41] = ROUTE724;

let OrientationInterpolator725 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator725.DEF = "l_eyeball_OI";
let IS726 = browser.currentScene.createNode("IS");
let connect727 = browser.currentScene.createNode("connect");
connect727.nodeField = "key";
connect727.protoField = "l_eyeball_key";
IS726.connect = new MFNode();

IS726.connect[0] = connect727;

let connect728 = browser.currentScene.createNode("connect");
connect728.nodeField = "keyValue";
connect728.protoField = "l_eyeball_keyValue";
IS726.connect[1] = connect728;

let connect729 = browser.currentScene.createNode("connect");
connect729.nodeField = "value_changed";
connect729.protoField = "l_eyeball_changed";
IS726.connect[2] = connect729;

OrientationInterpolator725.iS = IS726;

ProtoBody586.children[42] = OrientationInterpolator725;

let ROUTE730 = browser.currentScene.createNode("ROUTE");
ROUTE730.fromField = "fraction_changed";
ROUTE730.fromNode = "BehaviorClock";
ROUTE730.toField = "set_fraction";
ROUTE730.toNode = "l_eyeball_OI";
ProtoBody586.children[43] = ROUTE730;

let OrientationInterpolator731 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator731.DEF = "l_eyeball_joint_OI";
let IS732 = browser.currentScene.createNode("IS");
let connect733 = browser.currentScene.createNode("connect");
connect733.nodeField = "key";
connect733.protoField = "l_eyeball_joint_key";
IS732.connect = new MFNode();

IS732.connect[0] = connect733;

let connect734 = browser.currentScene.createNode("connect");
connect734.nodeField = "keyValue";
connect734.protoField = "l_eyeball_joint_keyValue";
IS732.connect[1] = connect734;

let connect735 = browser.currentScene.createNode("connect");
connect735.nodeField = "value_changed";
connect735.protoField = "l_eyeball_joint_changed";
IS732.connect[2] = connect735;

OrientationInterpolator731.iS = IS732;

ProtoBody586.children[44] = OrientationInterpolator731;

let ROUTE736 = browser.currentScene.createNode("ROUTE");
ROUTE736.fromField = "fraction_changed";
ROUTE736.fromNode = "BehaviorClock";
ROUTE736.toField = "set_fraction";
ROUTE736.toNode = "l_eyeball_joint_OI";
ProtoBody586.children[45] = ROUTE736;

let OrientationInterpolator737 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator737.DEF = "l_eyebrow_OI";
let IS738 = browser.currentScene.createNode("IS");
let connect739 = browser.currentScene.createNode("connect");
connect739.nodeField = "key";
connect739.protoField = "l_eyebrow_key";
IS738.connect = new MFNode();

IS738.connect[0] = connect739;

let connect740 = browser.currentScene.createNode("connect");
connect740.nodeField = "keyValue";
connect740.protoField = "l_eyebrow_keyValue";
IS738.connect[1] = connect740;

let connect741 = browser.currentScene.createNode("connect");
connect741.nodeField = "value_changed";
connect741.protoField = "l_eyebrow_changed";
IS738.connect[2] = connect741;

OrientationInterpolator737.iS = IS738;

ProtoBody586.children[46] = OrientationInterpolator737;

let ROUTE742 = browser.currentScene.createNode("ROUTE");
ROUTE742.fromField = "fraction_changed";
ROUTE742.fromNode = "BehaviorClock";
ROUTE742.toField = "set_fraction";
ROUTE742.toNode = "l_eyebrow_OI";
ProtoBody586.children[47] = ROUTE742;

let OrientationInterpolator743 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator743.DEF = "l_eyebrow_joint_OI";
let IS744 = browser.currentScene.createNode("IS");
let connect745 = browser.currentScene.createNode("connect");
connect745.nodeField = "key";
connect745.protoField = "l_eyebrow_joint_key";
IS744.connect = new MFNode();

IS744.connect[0] = connect745;

let connect746 = browser.currentScene.createNode("connect");
connect746.nodeField = "keyValue";
connect746.protoField = "l_eyebrow_joint_keyValue";
IS744.connect[1] = connect746;

let connect747 = browser.currentScene.createNode("connect");
connect747.nodeField = "value_changed";
connect747.protoField = "l_eyebrow_joint_changed";
IS744.connect[2] = connect747;

OrientationInterpolator743.iS = IS744;

ProtoBody586.children[48] = OrientationInterpolator743;

let ROUTE748 = browser.currentScene.createNode("ROUTE");
ROUTE748.fromField = "fraction_changed";
ROUTE748.fromNode = "BehaviorClock";
ROUTE748.toField = "set_fraction";
ROUTE748.toNode = "l_eyebrow_joint_OI";
ProtoBody586.children[49] = ROUTE748;

let OrientationInterpolator749 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator749.DEF = "l_eyelid_OI";
let IS750 = browser.currentScene.createNode("IS");
let connect751 = browser.currentScene.createNode("connect");
connect751.nodeField = "key";
connect751.protoField = "l_eyelid_key";
IS750.connect = new MFNode();

IS750.connect[0] = connect751;

let connect752 = browser.currentScene.createNode("connect");
connect752.nodeField = "keyValue";
connect752.protoField = "l_eyelid_keyValue";
IS750.connect[1] = connect752;

let connect753 = browser.currentScene.createNode("connect");
connect753.nodeField = "value_changed";
connect753.protoField = "l_eyelid_changed";
IS750.connect[2] = connect753;

OrientationInterpolator749.iS = IS750;

ProtoBody586.children[50] = OrientationInterpolator749;

let ROUTE754 = browser.currentScene.createNode("ROUTE");
ROUTE754.fromField = "fraction_changed";
ROUTE754.fromNode = "BehaviorClock";
ROUTE754.toField = "set_fraction";
ROUTE754.toNode = "l_eyelid_OI";
ProtoBody586.children[51] = ROUTE754;

let OrientationInterpolator755 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator755.DEF = "l_eyelid_joint_OI";
let IS756 = browser.currentScene.createNode("IS");
let connect757 = browser.currentScene.createNode("connect");
connect757.nodeField = "key";
connect757.protoField = "l_eyelid_joint_key";
IS756.connect = new MFNode();

IS756.connect[0] = connect757;

let connect758 = browser.currentScene.createNode("connect");
connect758.nodeField = "keyValue";
connect758.protoField = "l_eyelid_joint_keyValue";
IS756.connect[1] = connect758;

let connect759 = browser.currentScene.createNode("connect");
connect759.nodeField = "value_changed";
connect759.protoField = "l_eyelid_joint_changed";
IS756.connect[2] = connect759;

OrientationInterpolator755.iS = IS756;

ProtoBody586.children[52] = OrientationInterpolator755;

let ROUTE760 = browser.currentScene.createNode("ROUTE");
ROUTE760.fromField = "fraction_changed";
ROUTE760.fromNode = "BehaviorClock";
ROUTE760.toField = "set_fraction";
ROUTE760.toNode = "l_eyelid_joint_OI";
ProtoBody586.children[53] = ROUTE760;

let OrientationInterpolator761 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator761.DEF = "l_forearm_OI";
let IS762 = browser.currentScene.createNode("IS");
let connect763 = browser.currentScene.createNode("connect");
connect763.nodeField = "key";
connect763.protoField = "l_forearm_key";
IS762.connect = new MFNode();

IS762.connect[0] = connect763;

let connect764 = browser.currentScene.createNode("connect");
connect764.nodeField = "keyValue";
connect764.protoField = "l_forearm_keyValue";
IS762.connect[1] = connect764;

let connect765 = browser.currentScene.createNode("connect");
connect765.nodeField = "value_changed";
connect765.protoField = "l_forearm_changed";
IS762.connect[2] = connect765;

OrientationInterpolator761.iS = IS762;

ProtoBody586.children[54] = OrientationInterpolator761;

let ROUTE766 = browser.currentScene.createNode("ROUTE");
ROUTE766.fromField = "fraction_changed";
ROUTE766.fromNode = "BehaviorClock";
ROUTE766.toField = "set_fraction";
ROUTE766.toNode = "l_forearm_OI";
ProtoBody586.children[55] = ROUTE766;

let OrientationInterpolator767 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator767.DEF = "l_forefoot_OI";
let IS768 = browser.currentScene.createNode("IS");
let connect769 = browser.currentScene.createNode("connect");
connect769.nodeField = "key";
connect769.protoField = "l_forefoot_key";
IS768.connect = new MFNode();

IS768.connect[0] = connect769;

let connect770 = browser.currentScene.createNode("connect");
connect770.nodeField = "keyValue";
connect770.protoField = "l_forefoot_keyValue";
IS768.connect[1] = connect770;

let connect771 = browser.currentScene.createNode("connect");
connect771.nodeField = "value_changed";
connect771.protoField = "l_forefoot_changed";
IS768.connect[2] = connect771;

OrientationInterpolator767.iS = IS768;

ProtoBody586.children[56] = OrientationInterpolator767;

let ROUTE772 = browser.currentScene.createNode("ROUTE");
ROUTE772.fromField = "fraction_changed";
ROUTE772.fromNode = "BehaviorClock";
ROUTE772.toField = "set_fraction";
ROUTE772.toNode = "l_forefoot_OI";
ProtoBody586.children[57] = ROUTE772;

let OrientationInterpolator773 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator773.DEF = "l_hand_OI";
let IS774 = browser.currentScene.createNode("IS");
let connect775 = browser.currentScene.createNode("connect");
connect775.nodeField = "key";
connect775.protoField = "l_hand_key";
IS774.connect = new MFNode();

IS774.connect[0] = connect775;

let connect776 = browser.currentScene.createNode("connect");
connect776.nodeField = "keyValue";
connect776.protoField = "l_hand_keyValue";
IS774.connect[1] = connect776;

let connect777 = browser.currentScene.createNode("connect");
connect777.nodeField = "value_changed";
connect777.protoField = "l_hand_changed";
IS774.connect[2] = connect777;

OrientationInterpolator773.iS = IS774;

ProtoBody586.children[58] = OrientationInterpolator773;

let ROUTE778 = browser.currentScene.createNode("ROUTE");
ROUTE778.fromField = "fraction_changed";
ROUTE778.fromNode = "BehaviorClock";
ROUTE778.toField = "set_fraction";
ROUTE778.toNode = "l_hand_OI";
ProtoBody586.children[59] = ROUTE778;

let OrientationInterpolator779 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator779.DEF = "l_hindfoot_OI";
let IS780 = browser.currentScene.createNode("IS");
let connect781 = browser.currentScene.createNode("connect");
connect781.nodeField = "key";
connect781.protoField = "l_hindfoot_key";
IS780.connect = new MFNode();

IS780.connect[0] = connect781;

let connect782 = browser.currentScene.createNode("connect");
connect782.nodeField = "keyValue";
connect782.protoField = "l_hindfoot_keyValue";
IS780.connect[1] = connect782;

let connect783 = browser.currentScene.createNode("connect");
connect783.nodeField = "value_changed";
connect783.protoField = "l_hindfoot_changed";
IS780.connect[2] = connect783;

OrientationInterpolator779.iS = IS780;

ProtoBody586.children[60] = OrientationInterpolator779;

let ROUTE784 = browser.currentScene.createNode("ROUTE");
ROUTE784.fromField = "fraction_changed";
ROUTE784.fromNode = "BehaviorClock";
ROUTE784.toField = "set_fraction";
ROUTE784.toNode = "l_hindfoot_OI";
ProtoBody586.children[61] = ROUTE784;

let OrientationInterpolator785 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator785.DEF = "l_hip_OI";
let IS786 = browser.currentScene.createNode("IS");
let connect787 = browser.currentScene.createNode("connect");
connect787.nodeField = "key";
connect787.protoField = "l_hip_key";
IS786.connect = new MFNode();

IS786.connect[0] = connect787;

let connect788 = browser.currentScene.createNode("connect");
connect788.nodeField = "keyValue";
connect788.protoField = "l_hip_keyValue";
IS786.connect[1] = connect788;

let connect789 = browser.currentScene.createNode("connect");
connect789.nodeField = "value_changed";
connect789.protoField = "l_hip_changed";
IS786.connect[2] = connect789;

OrientationInterpolator785.iS = IS786;

ProtoBody586.children[62] = OrientationInterpolator785;

let ROUTE790 = browser.currentScene.createNode("ROUTE");
ROUTE790.fromField = "fraction_changed";
ROUTE790.fromNode = "BehaviorClock";
ROUTE790.toField = "set_fraction";
ROUTE790.toNode = "l_hip_OI";
ProtoBody586.children[63] = ROUTE790;

let OrientationInterpolator791 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator791.DEF = "l_index0_OI";
let IS792 = browser.currentScene.createNode("IS");
let connect793 = browser.currentScene.createNode("connect");
connect793.nodeField = "key";
connect793.protoField = "l_index0_key";
IS792.connect = new MFNode();

IS792.connect[0] = connect793;

let connect794 = browser.currentScene.createNode("connect");
connect794.nodeField = "keyValue";
connect794.protoField = "l_index0_keyValue";
IS792.connect[1] = connect794;

let connect795 = browser.currentScene.createNode("connect");
connect795.nodeField = "value_changed";
connect795.protoField = "l_index0_changed";
IS792.connect[2] = connect795;

OrientationInterpolator791.iS = IS792;

ProtoBody586.children[64] = OrientationInterpolator791;

let ROUTE796 = browser.currentScene.createNode("ROUTE");
ROUTE796.fromField = "fraction_changed";
ROUTE796.fromNode = "BehaviorClock";
ROUTE796.toField = "set_fraction";
ROUTE796.toNode = "l_index0_OI";
ProtoBody586.children[65] = ROUTE796;

let OrientationInterpolator797 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator797.DEF = "l_index1_OI";
let IS798 = browser.currentScene.createNode("IS");
let connect799 = browser.currentScene.createNode("connect");
connect799.nodeField = "key";
connect799.protoField = "l_index1_key";
IS798.connect = new MFNode();

IS798.connect[0] = connect799;

let connect800 = browser.currentScene.createNode("connect");
connect800.nodeField = "keyValue";
connect800.protoField = "l_index1_keyValue";
IS798.connect[1] = connect800;

let connect801 = browser.currentScene.createNode("connect");
connect801.nodeField = "value_changed";
connect801.protoField = "l_index1_changed";
IS798.connect[2] = connect801;

OrientationInterpolator797.iS = IS798;

ProtoBody586.children[66] = OrientationInterpolator797;

let ROUTE802 = browser.currentScene.createNode("ROUTE");
ROUTE802.fromField = "fraction_changed";
ROUTE802.fromNode = "BehaviorClock";
ROUTE802.toField = "set_fraction";
ROUTE802.toNode = "l_index1_OI";
ProtoBody586.children[67] = ROUTE802;

let OrientationInterpolator803 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator803.DEF = "l_index2_OI";
let IS804 = browser.currentScene.createNode("IS");
let connect805 = browser.currentScene.createNode("connect");
connect805.nodeField = "key";
connect805.protoField = "l_index2_key";
IS804.connect = new MFNode();

IS804.connect[0] = connect805;

let connect806 = browser.currentScene.createNode("connect");
connect806.nodeField = "keyValue";
connect806.protoField = "l_index2_keyValue";
IS804.connect[1] = connect806;

let connect807 = browser.currentScene.createNode("connect");
connect807.nodeField = "value_changed";
connect807.protoField = "l_index2_changed";
IS804.connect[2] = connect807;

OrientationInterpolator803.iS = IS804;

ProtoBody586.children[68] = OrientationInterpolator803;

let ROUTE808 = browser.currentScene.createNode("ROUTE");
ROUTE808.fromField = "fraction_changed";
ROUTE808.fromNode = "BehaviorClock";
ROUTE808.toField = "set_fraction";
ROUTE808.toNode = "l_index2_OI";
ProtoBody586.children[69] = ROUTE808;

let OrientationInterpolator809 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator809.DEF = "l_index3_OI";
let IS810 = browser.currentScene.createNode("IS");
let connect811 = browser.currentScene.createNode("connect");
connect811.nodeField = "key";
connect811.protoField = "l_index3_key";
IS810.connect = new MFNode();

IS810.connect[0] = connect811;

let connect812 = browser.currentScene.createNode("connect");
connect812.nodeField = "keyValue";
connect812.protoField = "l_index3_keyValue";
IS810.connect[1] = connect812;

let connect813 = browser.currentScene.createNode("connect");
connect813.nodeField = "value_changed";
connect813.protoField = "l_index3_changed";
IS810.connect[2] = connect813;

OrientationInterpolator809.iS = IS810;

ProtoBody586.children[70] = OrientationInterpolator809;

let ROUTE814 = browser.currentScene.createNode("ROUTE");
ROUTE814.fromField = "fraction_changed";
ROUTE814.fromNode = "BehaviorClock";
ROUTE814.toField = "set_fraction";
ROUTE814.toNode = "l_index3_OI";
ProtoBody586.children[71] = ROUTE814;

let OrientationInterpolator815 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator815.DEF = "l_index_distal_OI";
let IS816 = browser.currentScene.createNode("IS");
let connect817 = browser.currentScene.createNode("connect");
connect817.nodeField = "key";
connect817.protoField = "l_index_distal_key";
IS816.connect = new MFNode();

IS816.connect[0] = connect817;

let connect818 = browser.currentScene.createNode("connect");
connect818.nodeField = "keyValue";
connect818.protoField = "l_index_distal_keyValue";
IS816.connect[1] = connect818;

let connect819 = browser.currentScene.createNode("connect");
connect819.nodeField = "value_changed";
connect819.protoField = "l_index_distal_changed";
IS816.connect[2] = connect819;

OrientationInterpolator815.iS = IS816;

ProtoBody586.children[72] = OrientationInterpolator815;

let ROUTE820 = browser.currentScene.createNode("ROUTE");
ROUTE820.fromField = "fraction_changed";
ROUTE820.fromNode = "BehaviorClock";
ROUTE820.toField = "set_fraction";
ROUTE820.toNode = "l_index_distal_OI";
ProtoBody586.children[73] = ROUTE820;

let OrientationInterpolator821 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator821.DEF = "l_index_metacarpal_OI";
let IS822 = browser.currentScene.createNode("IS");
let connect823 = browser.currentScene.createNode("connect");
connect823.nodeField = "key";
connect823.protoField = "l_index_metacarpal_key";
IS822.connect = new MFNode();

IS822.connect[0] = connect823;

let connect824 = browser.currentScene.createNode("connect");
connect824.nodeField = "keyValue";
connect824.protoField = "l_index_metacarpal_keyValue";
IS822.connect[1] = connect824;

let connect825 = browser.currentScene.createNode("connect");
connect825.nodeField = "value_changed";
connect825.protoField = "l_index_metacarpal_changed";
IS822.connect[2] = connect825;

OrientationInterpolator821.iS = IS822;

ProtoBody586.children[74] = OrientationInterpolator821;

let ROUTE826 = browser.currentScene.createNode("ROUTE");
ROUTE826.fromField = "fraction_changed";
ROUTE826.fromNode = "BehaviorClock";
ROUTE826.toField = "set_fraction";
ROUTE826.toNode = "l_index_metacarpal_OI";
ProtoBody586.children[75] = ROUTE826;

let OrientationInterpolator827 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator827.DEF = "l_index_middle_OI";
let IS828 = browser.currentScene.createNode("IS");
let connect829 = browser.currentScene.createNode("connect");
connect829.nodeField = "key";
connect829.protoField = "l_index_middle_key";
IS828.connect = new MFNode();

IS828.connect[0] = connect829;

let connect830 = browser.currentScene.createNode("connect");
connect830.nodeField = "keyValue";
connect830.protoField = "l_index_middle_keyValue";
IS828.connect[1] = connect830;

let connect831 = browser.currentScene.createNode("connect");
connect831.nodeField = "value_changed";
connect831.protoField = "l_index_middle_changed";
IS828.connect[2] = connect831;

OrientationInterpolator827.iS = IS828;

ProtoBody586.children[76] = OrientationInterpolator827;

let ROUTE832 = browser.currentScene.createNode("ROUTE");
ROUTE832.fromField = "fraction_changed";
ROUTE832.fromNode = "BehaviorClock";
ROUTE832.toField = "set_fraction";
ROUTE832.toNode = "l_index_middle_OI";
ProtoBody586.children[77] = ROUTE832;

let OrientationInterpolator833 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator833.DEF = "l_index_proximal_OI";
let IS834 = browser.currentScene.createNode("IS");
let connect835 = browser.currentScene.createNode("connect");
connect835.nodeField = "key";
connect835.protoField = "l_index_proximal_key";
IS834.connect = new MFNode();

IS834.connect[0] = connect835;

let connect836 = browser.currentScene.createNode("connect");
connect836.nodeField = "keyValue";
connect836.protoField = "l_index_proximal_keyValue";
IS834.connect[1] = connect836;

let connect837 = browser.currentScene.createNode("connect");
connect837.nodeField = "value_changed";
connect837.protoField = "l_index_proximal_changed";
IS834.connect[2] = connect837;

OrientationInterpolator833.iS = IS834;

ProtoBody586.children[78] = OrientationInterpolator833;

let ROUTE838 = browser.currentScene.createNode("ROUTE");
ROUTE838.fromField = "fraction_changed";
ROUTE838.fromNode = "BehaviorClock";
ROUTE838.toField = "set_fraction";
ROUTE838.toNode = "l_index_proximal_OI";
ProtoBody586.children[79] = ROUTE838;

let OrientationInterpolator839 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator839.DEF = "l_knee_OI";
let IS840 = browser.currentScene.createNode("IS");
let connect841 = browser.currentScene.createNode("connect");
connect841.nodeField = "key";
connect841.protoField = "l_knee_key";
IS840.connect = new MFNode();

IS840.connect[0] = connect841;

let connect842 = browser.currentScene.createNode("connect");
connect842.nodeField = "keyValue";
connect842.protoField = "l_knee_keyValue";
IS840.connect[1] = connect842;

let connect843 = browser.currentScene.createNode("connect");
connect843.nodeField = "value_changed";
connect843.protoField = "l_knee_changed";
IS840.connect[2] = connect843;

OrientationInterpolator839.iS = IS840;

ProtoBody586.children[80] = OrientationInterpolator839;

let ROUTE844 = browser.currentScene.createNode("ROUTE");
ROUTE844.fromField = "fraction_changed";
ROUTE844.fromNode = "BehaviorClock";
ROUTE844.toField = "set_fraction";
ROUTE844.toNode = "l_knee_OI";
ProtoBody586.children[81] = ROUTE844;

let OrientationInterpolator845 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator845.DEF = "l_metatarsal_OI";
let IS846 = browser.currentScene.createNode("IS");
let connect847 = browser.currentScene.createNode("connect");
connect847.nodeField = "key";
connect847.protoField = "l_metatarsal_key";
IS846.connect = new MFNode();

IS846.connect[0] = connect847;

let connect848 = browser.currentScene.createNode("connect");
connect848.nodeField = "keyValue";
connect848.protoField = "l_metatarsal_keyValue";
IS846.connect[1] = connect848;

let connect849 = browser.currentScene.createNode("connect");
connect849.nodeField = "value_changed";
connect849.protoField = "l_metatarsal_changed";
IS846.connect[2] = connect849;

OrientationInterpolator845.iS = IS846;

ProtoBody586.children[82] = OrientationInterpolator845;

let ROUTE850 = browser.currentScene.createNode("ROUTE");
ROUTE850.fromField = "fraction_changed";
ROUTE850.fromNode = "BehaviorClock";
ROUTE850.toField = "set_fraction";
ROUTE850.toNode = "l_metatarsal_OI";
ProtoBody586.children[83] = ROUTE850;

let OrientationInterpolator851 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator851.DEF = "l_middistal_OI";
let IS852 = browser.currentScene.createNode("IS");
let connect853 = browser.currentScene.createNode("connect");
connect853.nodeField = "key";
connect853.protoField = "l_middistal_key";
IS852.connect = new MFNode();

IS852.connect[0] = connect853;

let connect854 = browser.currentScene.createNode("connect");
connect854.nodeField = "keyValue";
connect854.protoField = "l_middistal_keyValue";
IS852.connect[1] = connect854;

let connect855 = browser.currentScene.createNode("connect");
connect855.nodeField = "value_changed";
connect855.protoField = "l_middistal_changed";
IS852.connect[2] = connect855;

OrientationInterpolator851.iS = IS852;

ProtoBody586.children[84] = OrientationInterpolator851;

let ROUTE856 = browser.currentScene.createNode("ROUTE");
ROUTE856.fromField = "fraction_changed";
ROUTE856.fromNode = "BehaviorClock";
ROUTE856.toField = "set_fraction";
ROUTE856.toNode = "l_middistal_OI";
ProtoBody586.children[85] = ROUTE856;

let OrientationInterpolator857 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator857.DEF = "l_middle0_OI";
let IS858 = browser.currentScene.createNode("IS");
let connect859 = browser.currentScene.createNode("connect");
connect859.nodeField = "key";
connect859.protoField = "l_middle0_key";
IS858.connect = new MFNode();

IS858.connect[0] = connect859;

let connect860 = browser.currentScene.createNode("connect");
connect860.nodeField = "keyValue";
connect860.protoField = "l_middle0_keyValue";
IS858.connect[1] = connect860;

let connect861 = browser.currentScene.createNode("connect");
connect861.nodeField = "value_changed";
connect861.protoField = "l_middle0_changed";
IS858.connect[2] = connect861;

OrientationInterpolator857.iS = IS858;

ProtoBody586.children[86] = OrientationInterpolator857;

let ROUTE862 = browser.currentScene.createNode("ROUTE");
ROUTE862.fromField = "fraction_changed";
ROUTE862.fromNode = "BehaviorClock";
ROUTE862.toField = "set_fraction";
ROUTE862.toNode = "l_middle0_OI";
ProtoBody586.children[87] = ROUTE862;

let OrientationInterpolator863 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator863.DEF = "l_middle1_OI";
let IS864 = browser.currentScene.createNode("IS");
let connect865 = browser.currentScene.createNode("connect");
connect865.nodeField = "key";
connect865.protoField = "l_middle1_key";
IS864.connect = new MFNode();

IS864.connect[0] = connect865;

let connect866 = browser.currentScene.createNode("connect");
connect866.nodeField = "keyValue";
connect866.protoField = "l_middle1_keyValue";
IS864.connect[1] = connect866;

let connect867 = browser.currentScene.createNode("connect");
connect867.nodeField = "value_changed";
connect867.protoField = "l_middle1_changed";
IS864.connect[2] = connect867;

OrientationInterpolator863.iS = IS864;

ProtoBody586.children[88] = OrientationInterpolator863;

let ROUTE868 = browser.currentScene.createNode("ROUTE");
ROUTE868.fromField = "fraction_changed";
ROUTE868.fromNode = "BehaviorClock";
ROUTE868.toField = "set_fraction";
ROUTE868.toNode = "l_middle1_OI";
ProtoBody586.children[89] = ROUTE868;

let OrientationInterpolator869 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator869.DEF = "l_middle2_OI";
let IS870 = browser.currentScene.createNode("IS");
let connect871 = browser.currentScene.createNode("connect");
connect871.nodeField = "key";
connect871.protoField = "l_middle2_key";
IS870.connect = new MFNode();

IS870.connect[0] = connect871;

let connect872 = browser.currentScene.createNode("connect");
connect872.nodeField = "keyValue";
connect872.protoField = "l_middle2_keyValue";
IS870.connect[1] = connect872;

let connect873 = browser.currentScene.createNode("connect");
connect873.nodeField = "value_changed";
connect873.protoField = "l_middle2_changed";
IS870.connect[2] = connect873;

OrientationInterpolator869.iS = IS870;

ProtoBody586.children[90] = OrientationInterpolator869;

let ROUTE874 = browser.currentScene.createNode("ROUTE");
ROUTE874.fromField = "fraction_changed";
ROUTE874.fromNode = "BehaviorClock";
ROUTE874.toField = "set_fraction";
ROUTE874.toNode = "l_middle2_OI";
ProtoBody586.children[91] = ROUTE874;

let OrientationInterpolator875 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator875.DEF = "l_middle3_OI";
let IS876 = browser.currentScene.createNode("IS");
let connect877 = browser.currentScene.createNode("connect");
connect877.nodeField = "key";
connect877.protoField = "l_middle3_key";
IS876.connect = new MFNode();

IS876.connect[0] = connect877;

let connect878 = browser.currentScene.createNode("connect");
connect878.nodeField = "keyValue";
connect878.protoField = "l_middle3_keyValue";
IS876.connect[1] = connect878;

let connect879 = browser.currentScene.createNode("connect");
connect879.nodeField = "value_changed";
connect879.protoField = "l_middle3_changed";
IS876.connect[2] = connect879;

OrientationInterpolator875.iS = IS876;

ProtoBody586.children[92] = OrientationInterpolator875;

let ROUTE880 = browser.currentScene.createNode("ROUTE");
ROUTE880.fromField = "fraction_changed";
ROUTE880.fromNode = "BehaviorClock";
ROUTE880.toField = "set_fraction";
ROUTE880.toNode = "l_middle3_OI";
ProtoBody586.children[93] = ROUTE880;

let OrientationInterpolator881 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator881.DEF = "l_middle_distal_OI";
let IS882 = browser.currentScene.createNode("IS");
let connect883 = browser.currentScene.createNode("connect");
connect883.nodeField = "key";
connect883.protoField = "l_middle_distal_key";
IS882.connect = new MFNode();

IS882.connect[0] = connect883;

let connect884 = browser.currentScene.createNode("connect");
connect884.nodeField = "keyValue";
connect884.protoField = "l_middle_distal_keyValue";
IS882.connect[1] = connect884;

let connect885 = browser.currentScene.createNode("connect");
connect885.nodeField = "value_changed";
connect885.protoField = "l_middle_distal_changed";
IS882.connect[2] = connect885;

OrientationInterpolator881.iS = IS882;

ProtoBody586.children[94] = OrientationInterpolator881;

let ROUTE886 = browser.currentScene.createNode("ROUTE");
ROUTE886.fromField = "fraction_changed";
ROUTE886.fromNode = "BehaviorClock";
ROUTE886.toField = "set_fraction";
ROUTE886.toNode = "l_middle_distal_OI";
ProtoBody586.children[95] = ROUTE886;

let OrientationInterpolator887 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator887.DEF = "l_middle_metacarpal_OI";
let IS888 = browser.currentScene.createNode("IS");
let connect889 = browser.currentScene.createNode("connect");
connect889.nodeField = "key";
connect889.protoField = "l_middle_metacarpal_key";
IS888.connect = new MFNode();

IS888.connect[0] = connect889;

let connect890 = browser.currentScene.createNode("connect");
connect890.nodeField = "keyValue";
connect890.protoField = "l_middle_metacarpal_keyValue";
IS888.connect[1] = connect890;

let connect891 = browser.currentScene.createNode("connect");
connect891.nodeField = "value_changed";
connect891.protoField = "l_middle_metacarpal_changed";
IS888.connect[2] = connect891;

OrientationInterpolator887.iS = IS888;

ProtoBody586.children[96] = OrientationInterpolator887;

let ROUTE892 = browser.currentScene.createNode("ROUTE");
ROUTE892.fromField = "fraction_changed";
ROUTE892.fromNode = "BehaviorClock";
ROUTE892.toField = "set_fraction";
ROUTE892.toNode = "l_middle_metacarpal_OI";
ProtoBody586.children[97] = ROUTE892;

let OrientationInterpolator893 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator893.DEF = "l_middle_middle_OI";
let IS894 = browser.currentScene.createNode("IS");
let connect895 = browser.currentScene.createNode("connect");
connect895.nodeField = "key";
connect895.protoField = "l_middle_middle_key";
IS894.connect = new MFNode();

IS894.connect[0] = connect895;

let connect896 = browser.currentScene.createNode("connect");
connect896.nodeField = "keyValue";
connect896.protoField = "l_middle_middle_keyValue";
IS894.connect[1] = connect896;

let connect897 = browser.currentScene.createNode("connect");
connect897.nodeField = "value_changed";
connect897.protoField = "l_middle_middle_changed";
IS894.connect[2] = connect897;

OrientationInterpolator893.iS = IS894;

ProtoBody586.children[98] = OrientationInterpolator893;

let ROUTE898 = browser.currentScene.createNode("ROUTE");
ROUTE898.fromField = "fraction_changed";
ROUTE898.fromNode = "BehaviorClock";
ROUTE898.toField = "set_fraction";
ROUTE898.toNode = "l_middle_middle_OI";
ProtoBody586.children[99] = ROUTE898;

let OrientationInterpolator899 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator899.DEF = "l_middle_proximal_OI";
let IS900 = browser.currentScene.createNode("IS");
let connect901 = browser.currentScene.createNode("connect");
connect901.nodeField = "key";
connect901.protoField = "l_middle_proximal_key";
IS900.connect = new MFNode();

IS900.connect[0] = connect901;

let connect902 = browser.currentScene.createNode("connect");
connect902.nodeField = "keyValue";
connect902.protoField = "l_middle_proximal_keyValue";
IS900.connect[1] = connect902;

let connect903 = browser.currentScene.createNode("connect");
connect903.nodeField = "value_changed";
connect903.protoField = "l_middle_proximal_changed";
IS900.connect[2] = connect903;

OrientationInterpolator899.iS = IS900;

ProtoBody586.children[100] = OrientationInterpolator899;

let ROUTE904 = browser.currentScene.createNode("ROUTE");
ROUTE904.fromField = "fraction_changed";
ROUTE904.fromNode = "BehaviorClock";
ROUTE904.toField = "set_fraction";
ROUTE904.toNode = "l_middle_proximal_OI";
ProtoBody586.children[101] = ROUTE904;

let OrientationInterpolator905 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator905.DEF = "l_midproximal_OI";
let IS906 = browser.currentScene.createNode("IS");
let connect907 = browser.currentScene.createNode("connect");
connect907.nodeField = "key";
connect907.protoField = "l_midproximal_key";
IS906.connect = new MFNode();

IS906.connect[0] = connect907;

let connect908 = browser.currentScene.createNode("connect");
connect908.nodeField = "keyValue";
connect908.protoField = "l_midproximal_keyValue";
IS906.connect[1] = connect908;

let connect909 = browser.currentScene.createNode("connect");
connect909.nodeField = "value_changed";
connect909.protoField = "l_midproximal_changed";
IS906.connect[2] = connect909;

OrientationInterpolator905.iS = IS906;

ProtoBody586.children[102] = OrientationInterpolator905;

let ROUTE910 = browser.currentScene.createNode("ROUTE");
ROUTE910.fromField = "fraction_changed";
ROUTE910.fromNode = "BehaviorClock";
ROUTE910.toField = "set_fraction";
ROUTE910.toNode = "l_midproximal_OI";
ProtoBody586.children[103] = ROUTE910;

let OrientationInterpolator911 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator911.DEF = "l_midtarsal_OI";
let IS912 = browser.currentScene.createNode("IS");
let connect913 = browser.currentScene.createNode("connect");
connect913.nodeField = "key";
connect913.protoField = "l_midtarsal_key";
IS912.connect = new MFNode();

IS912.connect[0] = connect913;

let connect914 = browser.currentScene.createNode("connect");
connect914.nodeField = "keyValue";
connect914.protoField = "l_midtarsal_keyValue";
IS912.connect[1] = connect914;

let connect915 = browser.currentScene.createNode("connect");
connect915.nodeField = "value_changed";
connect915.protoField = "l_midtarsal_changed";
IS912.connect[2] = connect915;

OrientationInterpolator911.iS = IS912;

ProtoBody586.children[104] = OrientationInterpolator911;

let ROUTE916 = browser.currentScene.createNode("ROUTE");
ROUTE916.fromField = "fraction_changed";
ROUTE916.fromNode = "BehaviorClock";
ROUTE916.toField = "set_fraction";
ROUTE916.toNode = "l_midtarsal_OI";
ProtoBody586.children[105] = ROUTE916;

let OrientationInterpolator917 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator917.DEF = "l_pinky0_OI";
let IS918 = browser.currentScene.createNode("IS");
let connect919 = browser.currentScene.createNode("connect");
connect919.nodeField = "key";
connect919.protoField = "l_pinky0_key";
IS918.connect = new MFNode();

IS918.connect[0] = connect919;

let connect920 = browser.currentScene.createNode("connect");
connect920.nodeField = "keyValue";
connect920.protoField = "l_pinky0_keyValue";
IS918.connect[1] = connect920;

let connect921 = browser.currentScene.createNode("connect");
connect921.nodeField = "value_changed";
connect921.protoField = "l_pinky0_changed";
IS918.connect[2] = connect921;

OrientationInterpolator917.iS = IS918;

ProtoBody586.children[106] = OrientationInterpolator917;

let ROUTE922 = browser.currentScene.createNode("ROUTE");
ROUTE922.fromField = "fraction_changed";
ROUTE922.fromNode = "BehaviorClock";
ROUTE922.toField = "set_fraction";
ROUTE922.toNode = "l_pinky0_OI";
ProtoBody586.children[107] = ROUTE922;

let OrientationInterpolator923 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator923.DEF = "l_pinky1_OI";
let IS924 = browser.currentScene.createNode("IS");
let connect925 = browser.currentScene.createNode("connect");
connect925.nodeField = "key";
connect925.protoField = "l_pinky1_key";
IS924.connect = new MFNode();

IS924.connect[0] = connect925;

let connect926 = browser.currentScene.createNode("connect");
connect926.nodeField = "keyValue";
connect926.protoField = "l_pinky1_keyValue";
IS924.connect[1] = connect926;

let connect927 = browser.currentScene.createNode("connect");
connect927.nodeField = "value_changed";
connect927.protoField = "l_pinky1_changed";
IS924.connect[2] = connect927;

OrientationInterpolator923.iS = IS924;

ProtoBody586.children[108] = OrientationInterpolator923;

let ROUTE928 = browser.currentScene.createNode("ROUTE");
ROUTE928.fromField = "fraction_changed";
ROUTE928.fromNode = "BehaviorClock";
ROUTE928.toField = "set_fraction";
ROUTE928.toNode = "l_pinky1_OI";
ProtoBody586.children[109] = ROUTE928;

let OrientationInterpolator929 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator929.DEF = "l_pinky2_OI";
let IS930 = browser.currentScene.createNode("IS");
let connect931 = browser.currentScene.createNode("connect");
connect931.nodeField = "key";
connect931.protoField = "l_pinky2_key";
IS930.connect = new MFNode();

IS930.connect[0] = connect931;

let connect932 = browser.currentScene.createNode("connect");
connect932.nodeField = "keyValue";
connect932.protoField = "l_pinky2_keyValue";
IS930.connect[1] = connect932;

let connect933 = browser.currentScene.createNode("connect");
connect933.nodeField = "value_changed";
connect933.protoField = "l_pinky2_changed";
IS930.connect[2] = connect933;

OrientationInterpolator929.iS = IS930;

ProtoBody586.children[110] = OrientationInterpolator929;

let ROUTE934 = browser.currentScene.createNode("ROUTE");
ROUTE934.fromField = "fraction_changed";
ROUTE934.fromNode = "BehaviorClock";
ROUTE934.toField = "set_fraction";
ROUTE934.toNode = "l_pinky2_OI";
ProtoBody586.children[111] = ROUTE934;

let OrientationInterpolator935 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator935.DEF = "l_pinky3_OI";
let IS936 = browser.currentScene.createNode("IS");
let connect937 = browser.currentScene.createNode("connect");
connect937.nodeField = "key";
connect937.protoField = "l_pinky3_key";
IS936.connect = new MFNode();

IS936.connect[0] = connect937;

let connect938 = browser.currentScene.createNode("connect");
connect938.nodeField = "keyValue";
connect938.protoField = "l_pinky3_keyValue";
IS936.connect[1] = connect938;

let connect939 = browser.currentScene.createNode("connect");
connect939.nodeField = "value_changed";
connect939.protoField = "l_pinky3_changed";
IS936.connect[2] = connect939;

OrientationInterpolator935.iS = IS936;

ProtoBody586.children[112] = OrientationInterpolator935;

let ROUTE940 = browser.currentScene.createNode("ROUTE");
ROUTE940.fromField = "fraction_changed";
ROUTE940.fromNode = "BehaviorClock";
ROUTE940.toField = "set_fraction";
ROUTE940.toNode = "l_pinky3_OI";
ProtoBody586.children[113] = ROUTE940;

let OrientationInterpolator941 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator941.DEF = "l_pinky_distal_OI";
let IS942 = browser.currentScene.createNode("IS");
let connect943 = browser.currentScene.createNode("connect");
connect943.nodeField = "key";
connect943.protoField = "l_pinky_distal_key";
IS942.connect = new MFNode();

IS942.connect[0] = connect943;

let connect944 = browser.currentScene.createNode("connect");
connect944.nodeField = "keyValue";
connect944.protoField = "l_pinky_distal_keyValue";
IS942.connect[1] = connect944;

let connect945 = browser.currentScene.createNode("connect");
connect945.nodeField = "value_changed";
connect945.protoField = "l_pinky_distal_changed";
IS942.connect[2] = connect945;

OrientationInterpolator941.iS = IS942;

ProtoBody586.children[114] = OrientationInterpolator941;

let ROUTE946 = browser.currentScene.createNode("ROUTE");
ROUTE946.fromField = "fraction_changed";
ROUTE946.fromNode = "BehaviorClock";
ROUTE946.toField = "set_fraction";
ROUTE946.toNode = "l_pinky_distal_OI";
ProtoBody586.children[115] = ROUTE946;

let OrientationInterpolator947 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator947.DEF = "l_pinky_metacarpal_OI";
let IS948 = browser.currentScene.createNode("IS");
let connect949 = browser.currentScene.createNode("connect");
connect949.nodeField = "key";
connect949.protoField = "l_pinky_metacarpal_key";
IS948.connect = new MFNode();

IS948.connect[0] = connect949;

let connect950 = browser.currentScene.createNode("connect");
connect950.nodeField = "keyValue";
connect950.protoField = "l_pinky_metacarpal_keyValue";
IS948.connect[1] = connect950;

let connect951 = browser.currentScene.createNode("connect");
connect951.nodeField = "value_changed";
connect951.protoField = "l_pinky_metacarpal_changed";
IS948.connect[2] = connect951;

OrientationInterpolator947.iS = IS948;

ProtoBody586.children[116] = OrientationInterpolator947;

let ROUTE952 = browser.currentScene.createNode("ROUTE");
ROUTE952.fromField = "fraction_changed";
ROUTE952.fromNode = "BehaviorClock";
ROUTE952.toField = "set_fraction";
ROUTE952.toNode = "l_pinky_metacarpal_OI";
ProtoBody586.children[117] = ROUTE952;

let OrientationInterpolator953 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator953.DEF = "l_pinky_middle_OI";
let IS954 = browser.currentScene.createNode("IS");
let connect955 = browser.currentScene.createNode("connect");
connect955.nodeField = "key";
connect955.protoField = "l_pinky_middle_key";
IS954.connect = new MFNode();

IS954.connect[0] = connect955;

let connect956 = browser.currentScene.createNode("connect");
connect956.nodeField = "keyValue";
connect956.protoField = "l_pinky_middle_keyValue";
IS954.connect[1] = connect956;

let connect957 = browser.currentScene.createNode("connect");
connect957.nodeField = "value_changed";
connect957.protoField = "l_pinky_middle_changed";
IS954.connect[2] = connect957;

OrientationInterpolator953.iS = IS954;

ProtoBody586.children[118] = OrientationInterpolator953;

let ROUTE958 = browser.currentScene.createNode("ROUTE");
ROUTE958.fromField = "fraction_changed";
ROUTE958.fromNode = "BehaviorClock";
ROUTE958.toField = "set_fraction";
ROUTE958.toNode = "l_pinky_middle_OI";
ProtoBody586.children[119] = ROUTE958;

let OrientationInterpolator959 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator959.DEF = "l_pinky_proximal_OI";
let IS960 = browser.currentScene.createNode("IS");
let connect961 = browser.currentScene.createNode("connect");
connect961.nodeField = "key";
connect961.protoField = "l_pinky_proximal_key";
IS960.connect = new MFNode();

IS960.connect[0] = connect961;

let connect962 = browser.currentScene.createNode("connect");
connect962.nodeField = "keyValue";
connect962.protoField = "l_pinky_proximal_keyValue";
IS960.connect[1] = connect962;

let connect963 = browser.currentScene.createNode("connect");
connect963.nodeField = "value_changed";
connect963.protoField = "l_pinky_proximal_changed";
IS960.connect[2] = connect963;

OrientationInterpolator959.iS = IS960;

ProtoBody586.children[120] = OrientationInterpolator959;

let ROUTE964 = browser.currentScene.createNode("ROUTE");
ROUTE964.fromField = "fraction_changed";
ROUTE964.fromNode = "BehaviorClock";
ROUTE964.toField = "set_fraction";
ROUTE964.toNode = "l_pinky_proximal_OI";
ProtoBody586.children[121] = ROUTE964;

let OrientationInterpolator965 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator965.DEF = "l_ring0_OI";
let IS966 = browser.currentScene.createNode("IS");
let connect967 = browser.currentScene.createNode("connect");
connect967.nodeField = "key";
connect967.protoField = "l_ring0_key";
IS966.connect = new MFNode();

IS966.connect[0] = connect967;

let connect968 = browser.currentScene.createNode("connect");
connect968.nodeField = "keyValue";
connect968.protoField = "l_ring0_keyValue";
IS966.connect[1] = connect968;

let connect969 = browser.currentScene.createNode("connect");
connect969.nodeField = "value_changed";
connect969.protoField = "l_ring0_changed";
IS966.connect[2] = connect969;

OrientationInterpolator965.iS = IS966;

ProtoBody586.children[122] = OrientationInterpolator965;

let ROUTE970 = browser.currentScene.createNode("ROUTE");
ROUTE970.fromField = "fraction_changed";
ROUTE970.fromNode = "BehaviorClock";
ROUTE970.toField = "set_fraction";
ROUTE970.toNode = "l_ring0_OI";
ProtoBody586.children[123] = ROUTE970;

let OrientationInterpolator971 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator971.DEF = "l_ring1_OI";
let IS972 = browser.currentScene.createNode("IS");
let connect973 = browser.currentScene.createNode("connect");
connect973.nodeField = "key";
connect973.protoField = "l_ring1_key";
IS972.connect = new MFNode();

IS972.connect[0] = connect973;

let connect974 = browser.currentScene.createNode("connect");
connect974.nodeField = "keyValue";
connect974.protoField = "l_ring1_keyValue";
IS972.connect[1] = connect974;

let connect975 = browser.currentScene.createNode("connect");
connect975.nodeField = "value_changed";
connect975.protoField = "l_ring1_changed";
IS972.connect[2] = connect975;

OrientationInterpolator971.iS = IS972;

ProtoBody586.children[124] = OrientationInterpolator971;

let ROUTE976 = browser.currentScene.createNode("ROUTE");
ROUTE976.fromField = "fraction_changed";
ROUTE976.fromNode = "BehaviorClock";
ROUTE976.toField = "set_fraction";
ROUTE976.toNode = "l_ring1_OI";
ProtoBody586.children[125] = ROUTE976;

let OrientationInterpolator977 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator977.DEF = "l_ring2_OI";
let IS978 = browser.currentScene.createNode("IS");
let connect979 = browser.currentScene.createNode("connect");
connect979.nodeField = "key";
connect979.protoField = "l_ring2_key";
IS978.connect = new MFNode();

IS978.connect[0] = connect979;

let connect980 = browser.currentScene.createNode("connect");
connect980.nodeField = "keyValue";
connect980.protoField = "l_ring2_keyValue";
IS978.connect[1] = connect980;

let connect981 = browser.currentScene.createNode("connect");
connect981.nodeField = "value_changed";
connect981.protoField = "l_ring2_changed";
IS978.connect[2] = connect981;

OrientationInterpolator977.iS = IS978;

ProtoBody586.children[126] = OrientationInterpolator977;

let ROUTE982 = browser.currentScene.createNode("ROUTE");
ROUTE982.fromField = "fraction_changed";
ROUTE982.fromNode = "BehaviorClock";
ROUTE982.toField = "set_fraction";
ROUTE982.toNode = "l_ring2_OI";
ProtoBody586.children[127] = ROUTE982;

let OrientationInterpolator983 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator983.DEF = "l_ring3_OI";
let IS984 = browser.currentScene.createNode("IS");
let connect985 = browser.currentScene.createNode("connect");
connect985.nodeField = "key";
connect985.protoField = "l_ring3_key";
IS984.connect = new MFNode();

IS984.connect[0] = connect985;

let connect986 = browser.currentScene.createNode("connect");
connect986.nodeField = "keyValue";
connect986.protoField = "l_ring3_keyValue";
IS984.connect[1] = connect986;

let connect987 = browser.currentScene.createNode("connect");
connect987.nodeField = "value_changed";
connect987.protoField = "l_ring3_changed";
IS984.connect[2] = connect987;

OrientationInterpolator983.iS = IS984;

ProtoBody586.children[128] = OrientationInterpolator983;

let ROUTE988 = browser.currentScene.createNode("ROUTE");
ROUTE988.fromField = "fraction_changed";
ROUTE988.fromNode = "BehaviorClock";
ROUTE988.toField = "set_fraction";
ROUTE988.toNode = "l_ring3_OI";
ProtoBody586.children[129] = ROUTE988;

let OrientationInterpolator989 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator989.DEF = "l_ring_distal_OI";
let IS990 = browser.currentScene.createNode("IS");
let connect991 = browser.currentScene.createNode("connect");
connect991.nodeField = "key";
connect991.protoField = "l_ring_distal_key";
IS990.connect = new MFNode();

IS990.connect[0] = connect991;

let connect992 = browser.currentScene.createNode("connect");
connect992.nodeField = "keyValue";
connect992.protoField = "l_ring_distal_keyValue";
IS990.connect[1] = connect992;

let connect993 = browser.currentScene.createNode("connect");
connect993.nodeField = "value_changed";
connect993.protoField = "l_ring_distal_changed";
IS990.connect[2] = connect993;

OrientationInterpolator989.iS = IS990;

ProtoBody586.children[130] = OrientationInterpolator989;

let ROUTE994 = browser.currentScene.createNode("ROUTE");
ROUTE994.fromField = "fraction_changed";
ROUTE994.fromNode = "BehaviorClock";
ROUTE994.toField = "set_fraction";
ROUTE994.toNode = "l_ring_distal_OI";
ProtoBody586.children[131] = ROUTE994;

let OrientationInterpolator995 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator995.DEF = "l_ring_metacarpal_OI";
let IS996 = browser.currentScene.createNode("IS");
let connect997 = browser.currentScene.createNode("connect");
connect997.nodeField = "key";
connect997.protoField = "l_ring_metacarpal_key";
IS996.connect = new MFNode();

IS996.connect[0] = connect997;

let connect998 = browser.currentScene.createNode("connect");
connect998.nodeField = "keyValue";
connect998.protoField = "l_ring_metacarpal_keyValue";
IS996.connect[1] = connect998;

let connect999 = browser.currentScene.createNode("connect");
connect999.nodeField = "value_changed";
connect999.protoField = "l_ring_metacarpal_changed";
IS996.connect[2] = connect999;

OrientationInterpolator995.iS = IS996;

ProtoBody586.children[132] = OrientationInterpolator995;

let ROUTE1000 = browser.currentScene.createNode("ROUTE");
ROUTE1000.fromField = "fraction_changed";
ROUTE1000.fromNode = "BehaviorClock";
ROUTE1000.toField = "set_fraction";
ROUTE1000.toNode = "l_ring_metacarpal_OI";
ProtoBody586.children[133] = ROUTE1000;

let OrientationInterpolator1001 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1001.DEF = "l_ring_middle_OI";
let IS1002 = browser.currentScene.createNode("IS");
let connect1003 = browser.currentScene.createNode("connect");
connect1003.nodeField = "key";
connect1003.protoField = "l_ring_middle_key";
IS1002.connect = new MFNode();

IS1002.connect[0] = connect1003;

let connect1004 = browser.currentScene.createNode("connect");
connect1004.nodeField = "keyValue";
connect1004.protoField = "l_ring_middle_keyValue";
IS1002.connect[1] = connect1004;

let connect1005 = browser.currentScene.createNode("connect");
connect1005.nodeField = "value_changed";
connect1005.protoField = "l_ring_middle_changed";
IS1002.connect[2] = connect1005;

OrientationInterpolator1001.iS = IS1002;

ProtoBody586.children[134] = OrientationInterpolator1001;

let ROUTE1006 = browser.currentScene.createNode("ROUTE");
ROUTE1006.fromField = "fraction_changed";
ROUTE1006.fromNode = "BehaviorClock";
ROUTE1006.toField = "set_fraction";
ROUTE1006.toNode = "l_ring_middle_OI";
ProtoBody586.children[135] = ROUTE1006;

let OrientationInterpolator1007 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1007.DEF = "l_ring_proximal_OI";
let IS1008 = browser.currentScene.createNode("IS");
let connect1009 = browser.currentScene.createNode("connect");
connect1009.nodeField = "key";
connect1009.protoField = "l_ring_proximal_key";
IS1008.connect = new MFNode();

IS1008.connect[0] = connect1009;

let connect1010 = browser.currentScene.createNode("connect");
connect1010.nodeField = "keyValue";
connect1010.protoField = "l_ring_proximal_keyValue";
IS1008.connect[1] = connect1010;

let connect1011 = browser.currentScene.createNode("connect");
connect1011.nodeField = "value_changed";
connect1011.protoField = "l_ring_proximal_changed";
IS1008.connect[2] = connect1011;

OrientationInterpolator1007.iS = IS1008;

ProtoBody586.children[136] = OrientationInterpolator1007;

let ROUTE1012 = browser.currentScene.createNode("ROUTE");
ROUTE1012.fromField = "fraction_changed";
ROUTE1012.fromNode = "BehaviorClock";
ROUTE1012.toField = "set_fraction";
ROUTE1012.toNode = "l_ring_proximal_OI";
ProtoBody586.children[137] = ROUTE1012;

let OrientationInterpolator1013 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1013.DEF = "l_scapula_OI";
let IS1014 = browser.currentScene.createNode("IS");
let connect1015 = browser.currentScene.createNode("connect");
connect1015.nodeField = "key";
connect1015.protoField = "l_scapula_key";
IS1014.connect = new MFNode();

IS1014.connect[0] = connect1015;

let connect1016 = browser.currentScene.createNode("connect");
connect1016.nodeField = "keyValue";
connect1016.protoField = "l_scapula_keyValue";
IS1014.connect[1] = connect1016;

let connect1017 = browser.currentScene.createNode("connect");
connect1017.nodeField = "value_changed";
connect1017.protoField = "l_scapula_changed";
IS1014.connect[2] = connect1017;

OrientationInterpolator1013.iS = IS1014;

ProtoBody586.children[138] = OrientationInterpolator1013;

let ROUTE1018 = browser.currentScene.createNode("ROUTE");
ROUTE1018.fromField = "fraction_changed";
ROUTE1018.fromNode = "BehaviorClock";
ROUTE1018.toField = "set_fraction";
ROUTE1018.toNode = "l_scapula_OI";
ProtoBody586.children[139] = ROUTE1018;

let OrientationInterpolator1019 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1019.DEF = "l_shoulder_OI";
let IS1020 = browser.currentScene.createNode("IS");
let connect1021 = browser.currentScene.createNode("connect");
connect1021.nodeField = "key";
connect1021.protoField = "l_shoulder_key";
IS1020.connect = new MFNode();

IS1020.connect[0] = connect1021;

let connect1022 = browser.currentScene.createNode("connect");
connect1022.nodeField = "keyValue";
connect1022.protoField = "l_shoulder_keyValue";
IS1020.connect[1] = connect1022;

let connect1023 = browser.currentScene.createNode("connect");
connect1023.nodeField = "value_changed";
connect1023.protoField = "l_shoulder_changed";
IS1020.connect[2] = connect1023;

OrientationInterpolator1019.iS = IS1020;

ProtoBody586.children[140] = OrientationInterpolator1019;

let ROUTE1024 = browser.currentScene.createNode("ROUTE");
ROUTE1024.fromField = "fraction_changed";
ROUTE1024.fromNode = "BehaviorClock";
ROUTE1024.toField = "set_fraction";
ROUTE1024.toNode = "l_shoulder_OI";
ProtoBody586.children[141] = ROUTE1024;

let OrientationInterpolator1025 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1025.DEF = "l_sternoclavicular_OI";
let IS1026 = browser.currentScene.createNode("IS");
let connect1027 = browser.currentScene.createNode("connect");
connect1027.nodeField = "key";
connect1027.protoField = "l_sternoclavicular_key";
IS1026.connect = new MFNode();

IS1026.connect[0] = connect1027;

let connect1028 = browser.currentScene.createNode("connect");
connect1028.nodeField = "keyValue";
connect1028.protoField = "l_sternoclavicular_keyValue";
IS1026.connect[1] = connect1028;

let connect1029 = browser.currentScene.createNode("connect");
connect1029.nodeField = "value_changed";
connect1029.protoField = "l_sternoclavicular_changed";
IS1026.connect[2] = connect1029;

OrientationInterpolator1025.iS = IS1026;

ProtoBody586.children[142] = OrientationInterpolator1025;

let ROUTE1030 = browser.currentScene.createNode("ROUTE");
ROUTE1030.fromField = "fraction_changed";
ROUTE1030.fromNode = "BehaviorClock";
ROUTE1030.toField = "set_fraction";
ROUTE1030.toNode = "l_sternoclavicular_OI";
ProtoBody586.children[143] = ROUTE1030;

let OrientationInterpolator1031 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1031.DEF = "l_subtalar_OI";
let IS1032 = browser.currentScene.createNode("IS");
let connect1033 = browser.currentScene.createNode("connect");
connect1033.nodeField = "key";
connect1033.protoField = "l_subtalar_key";
IS1032.connect = new MFNode();

IS1032.connect[0] = connect1033;

let connect1034 = browser.currentScene.createNode("connect");
connect1034.nodeField = "keyValue";
connect1034.protoField = "l_subtalar_keyValue";
IS1032.connect[1] = connect1034;

let connect1035 = browser.currentScene.createNode("connect");
connect1035.nodeField = "value_changed";
connect1035.protoField = "l_subtalar_changed";
IS1032.connect[2] = connect1035;

OrientationInterpolator1031.iS = IS1032;

ProtoBody586.children[144] = OrientationInterpolator1031;

let ROUTE1036 = browser.currentScene.createNode("ROUTE");
ROUTE1036.fromField = "fraction_changed";
ROUTE1036.fromNode = "BehaviorClock";
ROUTE1036.toField = "set_fraction";
ROUTE1036.toNode = "l_subtalar_OI";
ProtoBody586.children[145] = ROUTE1036;

let OrientationInterpolator1037 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1037.DEF = "l_thigh_OI";
let IS1038 = browser.currentScene.createNode("IS");
let connect1039 = browser.currentScene.createNode("connect");
connect1039.nodeField = "key";
connect1039.protoField = "l_thigh_key";
IS1038.connect = new MFNode();

IS1038.connect[0] = connect1039;

let connect1040 = browser.currentScene.createNode("connect");
connect1040.nodeField = "keyValue";
connect1040.protoField = "l_thigh_keyValue";
IS1038.connect[1] = connect1040;

let connect1041 = browser.currentScene.createNode("connect");
connect1041.nodeField = "value_changed";
connect1041.protoField = "l_thigh_changed";
IS1038.connect[2] = connect1041;

OrientationInterpolator1037.iS = IS1038;

ProtoBody586.children[146] = OrientationInterpolator1037;

let ROUTE1042 = browser.currentScene.createNode("ROUTE");
ROUTE1042.fromField = "fraction_changed";
ROUTE1042.fromNode = "BehaviorClock";
ROUTE1042.toField = "set_fraction";
ROUTE1042.toNode = "l_thigh_OI";
ProtoBody586.children[147] = ROUTE1042;

let OrientationInterpolator1043 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1043.DEF = "l_thumb1_OI";
let IS1044 = browser.currentScene.createNode("IS");
let connect1045 = browser.currentScene.createNode("connect");
connect1045.nodeField = "key";
connect1045.protoField = "l_thumb1_key";
IS1044.connect = new MFNode();

IS1044.connect[0] = connect1045;

let connect1046 = browser.currentScene.createNode("connect");
connect1046.nodeField = "keyValue";
connect1046.protoField = "l_thumb1_keyValue";
IS1044.connect[1] = connect1046;

let connect1047 = browser.currentScene.createNode("connect");
connect1047.nodeField = "value_changed";
connect1047.protoField = "l_thumb1_changed";
IS1044.connect[2] = connect1047;

OrientationInterpolator1043.iS = IS1044;

ProtoBody586.children[148] = OrientationInterpolator1043;

let ROUTE1048 = browser.currentScene.createNode("ROUTE");
ROUTE1048.fromField = "fraction_changed";
ROUTE1048.fromNode = "BehaviorClock";
ROUTE1048.toField = "set_fraction";
ROUTE1048.toNode = "l_thumb1_OI";
ProtoBody586.children[149] = ROUTE1048;

let OrientationInterpolator1049 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1049.DEF = "l_thumb2_OI";
let IS1050 = browser.currentScene.createNode("IS");
let connect1051 = browser.currentScene.createNode("connect");
connect1051.nodeField = "key";
connect1051.protoField = "l_thumb2_key";
IS1050.connect = new MFNode();

IS1050.connect[0] = connect1051;

let connect1052 = browser.currentScene.createNode("connect");
connect1052.nodeField = "keyValue";
connect1052.protoField = "l_thumb2_keyValue";
IS1050.connect[1] = connect1052;

let connect1053 = browser.currentScene.createNode("connect");
connect1053.nodeField = "value_changed";
connect1053.protoField = "l_thumb2_changed";
IS1050.connect[2] = connect1053;

OrientationInterpolator1049.iS = IS1050;

ProtoBody586.children[150] = OrientationInterpolator1049;

let ROUTE1054 = browser.currentScene.createNode("ROUTE");
ROUTE1054.fromField = "fraction_changed";
ROUTE1054.fromNode = "BehaviorClock";
ROUTE1054.toField = "set_fraction";
ROUTE1054.toNode = "l_thumb2_OI";
ProtoBody586.children[151] = ROUTE1054;

let OrientationInterpolator1055 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1055.DEF = "l_thumb3_OI";
let IS1056 = browser.currentScene.createNode("IS");
let connect1057 = browser.currentScene.createNode("connect");
connect1057.nodeField = "key";
connect1057.protoField = "l_thumb3_key";
IS1056.connect = new MFNode();

IS1056.connect[0] = connect1057;

let connect1058 = browser.currentScene.createNode("connect");
connect1058.nodeField = "keyValue";
connect1058.protoField = "l_thumb3_keyValue";
IS1056.connect[1] = connect1058;

let connect1059 = browser.currentScene.createNode("connect");
connect1059.nodeField = "value_changed";
connect1059.protoField = "l_thumb3_changed";
IS1056.connect[2] = connect1059;

OrientationInterpolator1055.iS = IS1056;

ProtoBody586.children[152] = OrientationInterpolator1055;

let ROUTE1060 = browser.currentScene.createNode("ROUTE");
ROUTE1060.fromField = "fraction_changed";
ROUTE1060.fromNode = "BehaviorClock";
ROUTE1060.toField = "set_fraction";
ROUTE1060.toNode = "l_thumb3_OI";
ProtoBody586.children[153] = ROUTE1060;

let OrientationInterpolator1061 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1061.DEF = "l_thumb_distal_OI";
let IS1062 = browser.currentScene.createNode("IS");
let connect1063 = browser.currentScene.createNode("connect");
connect1063.nodeField = "key";
connect1063.protoField = "l_thumb_distal_key";
IS1062.connect = new MFNode();

IS1062.connect[0] = connect1063;

let connect1064 = browser.currentScene.createNode("connect");
connect1064.nodeField = "keyValue";
connect1064.protoField = "l_thumb_distal_keyValue";
IS1062.connect[1] = connect1064;

let connect1065 = browser.currentScene.createNode("connect");
connect1065.nodeField = "value_changed";
connect1065.protoField = "l_thumb_distal_changed";
IS1062.connect[2] = connect1065;

OrientationInterpolator1061.iS = IS1062;

ProtoBody586.children[154] = OrientationInterpolator1061;

let ROUTE1066 = browser.currentScene.createNode("ROUTE");
ROUTE1066.fromField = "fraction_changed";
ROUTE1066.fromNode = "BehaviorClock";
ROUTE1066.toField = "set_fraction";
ROUTE1066.toNode = "l_thumb_distal_OI";
ProtoBody586.children[155] = ROUTE1066;

let OrientationInterpolator1067 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1067.DEF = "l_thumb_metacarpal_OI";
let IS1068 = browser.currentScene.createNode("IS");
let connect1069 = browser.currentScene.createNode("connect");
connect1069.nodeField = "key";
connect1069.protoField = "l_thumb_metacarpal_key";
IS1068.connect = new MFNode();

IS1068.connect[0] = connect1069;

let connect1070 = browser.currentScene.createNode("connect");
connect1070.nodeField = "keyValue";
connect1070.protoField = "l_thumb_metacarpal_keyValue";
IS1068.connect[1] = connect1070;

let connect1071 = browser.currentScene.createNode("connect");
connect1071.nodeField = "value_changed";
connect1071.protoField = "l_thumb_metacarpal_changed";
IS1068.connect[2] = connect1071;

OrientationInterpolator1067.iS = IS1068;

ProtoBody586.children[156] = OrientationInterpolator1067;

let ROUTE1072 = browser.currentScene.createNode("ROUTE");
ROUTE1072.fromField = "fraction_changed";
ROUTE1072.fromNode = "BehaviorClock";
ROUTE1072.toField = "set_fraction";
ROUTE1072.toNode = "l_thumb_metacarpal_OI";
ProtoBody586.children[157] = ROUTE1072;

let OrientationInterpolator1073 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1073.DEF = "l_thumb_proximal_OI";
let IS1074 = browser.currentScene.createNode("IS");
let connect1075 = browser.currentScene.createNode("connect");
connect1075.nodeField = "key";
connect1075.protoField = "l_thumb_proximal_key";
IS1074.connect = new MFNode();

IS1074.connect[0] = connect1075;

let connect1076 = browser.currentScene.createNode("connect");
connect1076.nodeField = "keyValue";
connect1076.protoField = "l_thumb_proximal_keyValue";
IS1074.connect[1] = connect1076;

let connect1077 = browser.currentScene.createNode("connect");
connect1077.nodeField = "value_changed";
connect1077.protoField = "l_thumb_proximal_changed";
IS1074.connect[2] = connect1077;

OrientationInterpolator1073.iS = IS1074;

ProtoBody586.children[158] = OrientationInterpolator1073;

let ROUTE1078 = browser.currentScene.createNode("ROUTE");
ROUTE1078.fromField = "fraction_changed";
ROUTE1078.fromNode = "BehaviorClock";
ROUTE1078.toField = "set_fraction";
ROUTE1078.toNode = "l_thumb_proximal_OI";
ProtoBody586.children[159] = ROUTE1078;

let OrientationInterpolator1079 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1079.DEF = "l_upperarm_OI";
let IS1080 = browser.currentScene.createNode("IS");
let connect1081 = browser.currentScene.createNode("connect");
connect1081.nodeField = "key";
connect1081.protoField = "l_upperarm_key";
IS1080.connect = new MFNode();

IS1080.connect[0] = connect1081;

let connect1082 = browser.currentScene.createNode("connect");
connect1082.nodeField = "keyValue";
connect1082.protoField = "l_upperarm_keyValue";
IS1080.connect[1] = connect1082;

let connect1083 = browser.currentScene.createNode("connect");
connect1083.nodeField = "value_changed";
connect1083.protoField = "l_upperarm_changed";
IS1080.connect[2] = connect1083;

OrientationInterpolator1079.iS = IS1080;

ProtoBody586.children[160] = OrientationInterpolator1079;

let ROUTE1084 = browser.currentScene.createNode("ROUTE");
ROUTE1084.fromField = "fraction_changed";
ROUTE1084.fromNode = "BehaviorClock";
ROUTE1084.toField = "set_fraction";
ROUTE1084.toNode = "l_upperarm_OI";
ProtoBody586.children[161] = ROUTE1084;

let OrientationInterpolator1085 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1085.DEF = "l_wrist_OI";
let IS1086 = browser.currentScene.createNode("IS");
let connect1087 = browser.currentScene.createNode("connect");
connect1087.nodeField = "key";
connect1087.protoField = "l_wrist_key";
IS1086.connect = new MFNode();

IS1086.connect[0] = connect1087;

let connect1088 = browser.currentScene.createNode("connect");
connect1088.nodeField = "keyValue";
connect1088.protoField = "l_wrist_keyValue";
IS1086.connect[1] = connect1088;

let connect1089 = browser.currentScene.createNode("connect");
connect1089.nodeField = "value_changed";
connect1089.protoField = "l_wrist_changed";
IS1086.connect[2] = connect1089;

OrientationInterpolator1085.iS = IS1086;

ProtoBody586.children[162] = OrientationInterpolator1085;

let ROUTE1090 = browser.currentScene.createNode("ROUTE");
ROUTE1090.fromField = "fraction_changed";
ROUTE1090.fromNode = "BehaviorClock";
ROUTE1090.toField = "set_fraction";
ROUTE1090.toNode = "l_wrist_OI";
ProtoBody586.children[163] = ROUTE1090;

let OrientationInterpolator1091 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1091.DEF = "pelvis_OI";
let IS1092 = browser.currentScene.createNode("IS");
let connect1093 = browser.currentScene.createNode("connect");
connect1093.nodeField = "key";
connect1093.protoField = "pelvis_key";
IS1092.connect = new MFNode();

IS1092.connect[0] = connect1093;

let connect1094 = browser.currentScene.createNode("connect");
connect1094.nodeField = "keyValue";
connect1094.protoField = "pelvis_keyValue";
IS1092.connect[1] = connect1094;

let connect1095 = browser.currentScene.createNode("connect");
connect1095.nodeField = "value_changed";
connect1095.protoField = "pelvis_changed";
IS1092.connect[2] = connect1095;

OrientationInterpolator1091.iS = IS1092;

ProtoBody586.children[164] = OrientationInterpolator1091;

let ROUTE1096 = browser.currentScene.createNode("ROUTE");
ROUTE1096.fromField = "fraction_changed";
ROUTE1096.fromNode = "BehaviorClock";
ROUTE1096.toField = "set_fraction";
ROUTE1096.toNode = "pelvis_OI";
ProtoBody586.children[165] = ROUTE1096;

let OrientationInterpolator1097 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1097.DEF = "r_acromioclavicular_OI";
let IS1098 = browser.currentScene.createNode("IS");
let connect1099 = browser.currentScene.createNode("connect");
connect1099.nodeField = "key";
connect1099.protoField = "r_acromioclavicular_key";
IS1098.connect = new MFNode();

IS1098.connect[0] = connect1099;

let connect1100 = browser.currentScene.createNode("connect");
connect1100.nodeField = "keyValue";
connect1100.protoField = "r_acromioclavicular_keyValue";
IS1098.connect[1] = connect1100;

let connect1101 = browser.currentScene.createNode("connect");
connect1101.nodeField = "value_changed";
connect1101.protoField = "r_acromioclavicular_changed";
IS1098.connect[2] = connect1101;

OrientationInterpolator1097.iS = IS1098;

ProtoBody586.children[166] = OrientationInterpolator1097;

let ROUTE1102 = browser.currentScene.createNode("ROUTE");
ROUTE1102.fromField = "fraction_changed";
ROUTE1102.fromNode = "BehaviorClock";
ROUTE1102.toField = "set_fraction";
ROUTE1102.toNode = "r_acromioclavicular_OI";
ProtoBody586.children[167] = ROUTE1102;

let OrientationInterpolator1103 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1103.DEF = "r_ankle_OI";
let IS1104 = browser.currentScene.createNode("IS");
let connect1105 = browser.currentScene.createNode("connect");
connect1105.nodeField = "key";
connect1105.protoField = "r_ankle_key";
IS1104.connect = new MFNode();

IS1104.connect[0] = connect1105;

let connect1106 = browser.currentScene.createNode("connect");
connect1106.nodeField = "keyValue";
connect1106.protoField = "r_ankle_keyValue";
IS1104.connect[1] = connect1106;

let connect1107 = browser.currentScene.createNode("connect");
connect1107.nodeField = "value_changed";
connect1107.protoField = "r_ankle_changed";
IS1104.connect[2] = connect1107;

OrientationInterpolator1103.iS = IS1104;

ProtoBody586.children[168] = OrientationInterpolator1103;

let ROUTE1108 = browser.currentScene.createNode("ROUTE");
ROUTE1108.fromField = "fraction_changed";
ROUTE1108.fromNode = "BehaviorClock";
ROUTE1108.toField = "set_fraction";
ROUTE1108.toNode = "r_ankle_OI";
ProtoBody586.children[169] = ROUTE1108;

let OrientationInterpolator1109 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1109.DEF = "r_calf_OI";
let IS1110 = browser.currentScene.createNode("IS");
let connect1111 = browser.currentScene.createNode("connect");
connect1111.nodeField = "key";
connect1111.protoField = "r_calf_key";
IS1110.connect = new MFNode();

IS1110.connect[0] = connect1111;

let connect1112 = browser.currentScene.createNode("connect");
connect1112.nodeField = "keyValue";
connect1112.protoField = "r_calf_keyValue";
IS1110.connect[1] = connect1112;

let connect1113 = browser.currentScene.createNode("connect");
connect1113.nodeField = "value_changed";
connect1113.protoField = "r_calf_changed";
IS1110.connect[2] = connect1113;

OrientationInterpolator1109.iS = IS1110;

ProtoBody586.children[170] = OrientationInterpolator1109;

let ROUTE1114 = browser.currentScene.createNode("ROUTE");
ROUTE1114.fromField = "fraction_changed";
ROUTE1114.fromNode = "BehaviorClock";
ROUTE1114.toField = "set_fraction";
ROUTE1114.toNode = "r_calf_OI";
ProtoBody586.children[171] = ROUTE1114;

let OrientationInterpolator1115 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1115.DEF = "r_clavicle_OI";
let IS1116 = browser.currentScene.createNode("IS");
let connect1117 = browser.currentScene.createNode("connect");
connect1117.nodeField = "key";
connect1117.protoField = "r_clavicle_key";
IS1116.connect = new MFNode();

IS1116.connect[0] = connect1117;

let connect1118 = browser.currentScene.createNode("connect");
connect1118.nodeField = "keyValue";
connect1118.protoField = "r_clavicle_keyValue";
IS1116.connect[1] = connect1118;

let connect1119 = browser.currentScene.createNode("connect");
connect1119.nodeField = "value_changed";
connect1119.protoField = "r_clavicle_changed";
IS1116.connect[2] = connect1119;

OrientationInterpolator1115.iS = IS1116;

ProtoBody586.children[172] = OrientationInterpolator1115;

let ROUTE1120 = browser.currentScene.createNode("ROUTE");
ROUTE1120.fromField = "fraction_changed";
ROUTE1120.fromNode = "BehaviorClock";
ROUTE1120.toField = "set_fraction";
ROUTE1120.toNode = "r_clavicle_OI";
ProtoBody586.children[173] = ROUTE1120;

let OrientationInterpolator1121 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1121.DEF = "r_elbow_OI";
let IS1122 = browser.currentScene.createNode("IS");
let connect1123 = browser.currentScene.createNode("connect");
connect1123.nodeField = "key";
connect1123.protoField = "r_elbow_key";
IS1122.connect = new MFNode();

IS1122.connect[0] = connect1123;

let connect1124 = browser.currentScene.createNode("connect");
connect1124.nodeField = "keyValue";
connect1124.protoField = "r_elbow_keyValue";
IS1122.connect[1] = connect1124;

let connect1125 = browser.currentScene.createNode("connect");
connect1125.nodeField = "value_changed";
connect1125.protoField = "r_elbow_changed";
IS1122.connect[2] = connect1125;

OrientationInterpolator1121.iS = IS1122;

ProtoBody586.children[174] = OrientationInterpolator1121;

let ROUTE1126 = browser.currentScene.createNode("ROUTE");
ROUTE1126.fromField = "fraction_changed";
ROUTE1126.fromNode = "BehaviorClock";
ROUTE1126.toField = "set_fraction";
ROUTE1126.toNode = "r_elbow_OI";
ProtoBody586.children[175] = ROUTE1126;

let OrientationInterpolator1127 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1127.DEF = "r_eyeball_OI";
let IS1128 = browser.currentScene.createNode("IS");
let connect1129 = browser.currentScene.createNode("connect");
connect1129.nodeField = "key";
connect1129.protoField = "r_eyeball_key";
IS1128.connect = new MFNode();

IS1128.connect[0] = connect1129;

let connect1130 = browser.currentScene.createNode("connect");
connect1130.nodeField = "keyValue";
connect1130.protoField = "r_eyeball_keyValue";
IS1128.connect[1] = connect1130;

let connect1131 = browser.currentScene.createNode("connect");
connect1131.nodeField = "value_changed";
connect1131.protoField = "r_eyeball_changed";
IS1128.connect[2] = connect1131;

OrientationInterpolator1127.iS = IS1128;

ProtoBody586.children[176] = OrientationInterpolator1127;

let ROUTE1132 = browser.currentScene.createNode("ROUTE");
ROUTE1132.fromField = "fraction_changed";
ROUTE1132.fromNode = "BehaviorClock";
ROUTE1132.toField = "set_fraction";
ROUTE1132.toNode = "r_eyeball_OI";
ProtoBody586.children[177] = ROUTE1132;

let OrientationInterpolator1133 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1133.DEF = "r_eyeball_joint_OI";
let IS1134 = browser.currentScene.createNode("IS");
let connect1135 = browser.currentScene.createNode("connect");
connect1135.nodeField = "key";
connect1135.protoField = "r_eyeball_joint_key";
IS1134.connect = new MFNode();

IS1134.connect[0] = connect1135;

let connect1136 = browser.currentScene.createNode("connect");
connect1136.nodeField = "keyValue";
connect1136.protoField = "r_eyeball_joint_keyValue";
IS1134.connect[1] = connect1136;

let connect1137 = browser.currentScene.createNode("connect");
connect1137.nodeField = "value_changed";
connect1137.protoField = "r_eyeball_joint_changed";
IS1134.connect[2] = connect1137;

OrientationInterpolator1133.iS = IS1134;

ProtoBody586.children[178] = OrientationInterpolator1133;

let ROUTE1138 = browser.currentScene.createNode("ROUTE");
ROUTE1138.fromField = "fraction_changed";
ROUTE1138.fromNode = "BehaviorClock";
ROUTE1138.toField = "set_fraction";
ROUTE1138.toNode = "r_eyeball_joint_OI";
ProtoBody586.children[179] = ROUTE1138;

let OrientationInterpolator1139 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1139.DEF = "r_eyebrow_OI";
let IS1140 = browser.currentScene.createNode("IS");
let connect1141 = browser.currentScene.createNode("connect");
connect1141.nodeField = "key";
connect1141.protoField = "r_eyebrow_key";
IS1140.connect = new MFNode();

IS1140.connect[0] = connect1141;

let connect1142 = browser.currentScene.createNode("connect");
connect1142.nodeField = "keyValue";
connect1142.protoField = "r_eyebrow_keyValue";
IS1140.connect[1] = connect1142;

let connect1143 = browser.currentScene.createNode("connect");
connect1143.nodeField = "value_changed";
connect1143.protoField = "r_eyebrow_changed";
IS1140.connect[2] = connect1143;

OrientationInterpolator1139.iS = IS1140;

ProtoBody586.children[180] = OrientationInterpolator1139;

let ROUTE1144 = browser.currentScene.createNode("ROUTE");
ROUTE1144.fromField = "fraction_changed";
ROUTE1144.fromNode = "BehaviorClock";
ROUTE1144.toField = "set_fraction";
ROUTE1144.toNode = "r_eyebrow_OI";
ProtoBody586.children[181] = ROUTE1144;

let OrientationInterpolator1145 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1145.DEF = "r_eyebrow_joint_OI";
let IS1146 = browser.currentScene.createNode("IS");
let connect1147 = browser.currentScene.createNode("connect");
connect1147.nodeField = "key";
connect1147.protoField = "r_eyebrow_joint_key";
IS1146.connect = new MFNode();

IS1146.connect[0] = connect1147;

let connect1148 = browser.currentScene.createNode("connect");
connect1148.nodeField = "keyValue";
connect1148.protoField = "r_eyebrow_joint_keyValue";
IS1146.connect[1] = connect1148;

let connect1149 = browser.currentScene.createNode("connect");
connect1149.nodeField = "value_changed";
connect1149.protoField = "r_eyebrow_joint_changed";
IS1146.connect[2] = connect1149;

OrientationInterpolator1145.iS = IS1146;

ProtoBody586.children[182] = OrientationInterpolator1145;

let ROUTE1150 = browser.currentScene.createNode("ROUTE");
ROUTE1150.fromField = "fraction_changed";
ROUTE1150.fromNode = "BehaviorClock";
ROUTE1150.toField = "set_fraction";
ROUTE1150.toNode = "r_eyebrow_joint_OI";
ProtoBody586.children[183] = ROUTE1150;

let OrientationInterpolator1151 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1151.DEF = "r_eyelid_OI";
let IS1152 = browser.currentScene.createNode("IS");
let connect1153 = browser.currentScene.createNode("connect");
connect1153.nodeField = "key";
connect1153.protoField = "r_eyelid_key";
IS1152.connect = new MFNode();

IS1152.connect[0] = connect1153;

let connect1154 = browser.currentScene.createNode("connect");
connect1154.nodeField = "keyValue";
connect1154.protoField = "r_eyelid_keyValue";
IS1152.connect[1] = connect1154;

let connect1155 = browser.currentScene.createNode("connect");
connect1155.nodeField = "value_changed";
connect1155.protoField = "r_eyelid_changed";
IS1152.connect[2] = connect1155;

OrientationInterpolator1151.iS = IS1152;

ProtoBody586.children[184] = OrientationInterpolator1151;

let ROUTE1156 = browser.currentScene.createNode("ROUTE");
ROUTE1156.fromField = "fraction_changed";
ROUTE1156.fromNode = "BehaviorClock";
ROUTE1156.toField = "set_fraction";
ROUTE1156.toNode = "r_eyelid_OI";
ProtoBody586.children[185] = ROUTE1156;

let OrientationInterpolator1157 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1157.DEF = "r_eyelid_joint_OI";
let IS1158 = browser.currentScene.createNode("IS");
let connect1159 = browser.currentScene.createNode("connect");
connect1159.nodeField = "key";
connect1159.protoField = "r_eyelid_joint_key";
IS1158.connect = new MFNode();

IS1158.connect[0] = connect1159;

let connect1160 = browser.currentScene.createNode("connect");
connect1160.nodeField = "keyValue";
connect1160.protoField = "r_eyelid_joint_keyValue";
IS1158.connect[1] = connect1160;

let connect1161 = browser.currentScene.createNode("connect");
connect1161.nodeField = "value_changed";
connect1161.protoField = "r_eyelid_joint_changed";
IS1158.connect[2] = connect1161;

OrientationInterpolator1157.iS = IS1158;

ProtoBody586.children[186] = OrientationInterpolator1157;

let ROUTE1162 = browser.currentScene.createNode("ROUTE");
ROUTE1162.fromField = "fraction_changed";
ROUTE1162.fromNode = "BehaviorClock";
ROUTE1162.toField = "set_fraction";
ROUTE1162.toNode = "r_eyelid_joint_OI";
ProtoBody586.children[187] = ROUTE1162;

let OrientationInterpolator1163 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1163.DEF = "r_forearm_OI";
let IS1164 = browser.currentScene.createNode("IS");
let connect1165 = browser.currentScene.createNode("connect");
connect1165.nodeField = "key";
connect1165.protoField = "r_forearm_key";
IS1164.connect = new MFNode();

IS1164.connect[0] = connect1165;

let connect1166 = browser.currentScene.createNode("connect");
connect1166.nodeField = "keyValue";
connect1166.protoField = "r_forearm_keyValue";
IS1164.connect[1] = connect1166;

let connect1167 = browser.currentScene.createNode("connect");
connect1167.nodeField = "value_changed";
connect1167.protoField = "r_forearm_changed";
IS1164.connect[2] = connect1167;

OrientationInterpolator1163.iS = IS1164;

ProtoBody586.children[188] = OrientationInterpolator1163;

let ROUTE1168 = browser.currentScene.createNode("ROUTE");
ROUTE1168.fromField = "fraction_changed";
ROUTE1168.fromNode = "BehaviorClock";
ROUTE1168.toField = "set_fraction";
ROUTE1168.toNode = "r_forearm_OI";
ProtoBody586.children[189] = ROUTE1168;

let OrientationInterpolator1169 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1169.DEF = "r_forefoot_OI";
let IS1170 = browser.currentScene.createNode("IS");
let connect1171 = browser.currentScene.createNode("connect");
connect1171.nodeField = "key";
connect1171.protoField = "r_forefoot_key";
IS1170.connect = new MFNode();

IS1170.connect[0] = connect1171;

let connect1172 = browser.currentScene.createNode("connect");
connect1172.nodeField = "keyValue";
connect1172.protoField = "r_forefoot_keyValue";
IS1170.connect[1] = connect1172;

let connect1173 = browser.currentScene.createNode("connect");
connect1173.nodeField = "value_changed";
connect1173.protoField = "r_forefoot_changed";
IS1170.connect[2] = connect1173;

OrientationInterpolator1169.iS = IS1170;

ProtoBody586.children[190] = OrientationInterpolator1169;

let ROUTE1174 = browser.currentScene.createNode("ROUTE");
ROUTE1174.fromField = "fraction_changed";
ROUTE1174.fromNode = "BehaviorClock";
ROUTE1174.toField = "set_fraction";
ROUTE1174.toNode = "r_forefoot_OI";
ProtoBody586.children[191] = ROUTE1174;

let OrientationInterpolator1175 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1175.DEF = "r_hand_OI";
let IS1176 = browser.currentScene.createNode("IS");
let connect1177 = browser.currentScene.createNode("connect");
connect1177.nodeField = "key";
connect1177.protoField = "r_hand_key";
IS1176.connect = new MFNode();

IS1176.connect[0] = connect1177;

let connect1178 = browser.currentScene.createNode("connect");
connect1178.nodeField = "keyValue";
connect1178.protoField = "r_hand_keyValue";
IS1176.connect[1] = connect1178;

let connect1179 = browser.currentScene.createNode("connect");
connect1179.nodeField = "value_changed";
connect1179.protoField = "r_hand_changed";
IS1176.connect[2] = connect1179;

OrientationInterpolator1175.iS = IS1176;

ProtoBody586.children[192] = OrientationInterpolator1175;

let ROUTE1180 = browser.currentScene.createNode("ROUTE");
ROUTE1180.fromField = "fraction_changed";
ROUTE1180.fromNode = "BehaviorClock";
ROUTE1180.toField = "set_fraction";
ROUTE1180.toNode = "r_hand_OI";
ProtoBody586.children[193] = ROUTE1180;

let OrientationInterpolator1181 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1181.DEF = "r_hindfoot_OI";
let IS1182 = browser.currentScene.createNode("IS");
let connect1183 = browser.currentScene.createNode("connect");
connect1183.nodeField = "key";
connect1183.protoField = "r_hindfoot_key";
IS1182.connect = new MFNode();

IS1182.connect[0] = connect1183;

let connect1184 = browser.currentScene.createNode("connect");
connect1184.nodeField = "keyValue";
connect1184.protoField = "r_hindfoot_keyValue";
IS1182.connect[1] = connect1184;

let connect1185 = browser.currentScene.createNode("connect");
connect1185.nodeField = "value_changed";
connect1185.protoField = "r_hindfoot_changed";
IS1182.connect[2] = connect1185;

OrientationInterpolator1181.iS = IS1182;

ProtoBody586.children[194] = OrientationInterpolator1181;

let ROUTE1186 = browser.currentScene.createNode("ROUTE");
ROUTE1186.fromField = "fraction_changed";
ROUTE1186.fromNode = "BehaviorClock";
ROUTE1186.toField = "set_fraction";
ROUTE1186.toNode = "r_hindfoot_OI";
ProtoBody586.children[195] = ROUTE1186;

let OrientationInterpolator1187 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1187.DEF = "r_hip_OI";
let IS1188 = browser.currentScene.createNode("IS");
let connect1189 = browser.currentScene.createNode("connect");
connect1189.nodeField = "key";
connect1189.protoField = "r_hip_key";
IS1188.connect = new MFNode();

IS1188.connect[0] = connect1189;

let connect1190 = browser.currentScene.createNode("connect");
connect1190.nodeField = "keyValue";
connect1190.protoField = "r_hip_keyValue";
IS1188.connect[1] = connect1190;

let connect1191 = browser.currentScene.createNode("connect");
connect1191.nodeField = "value_changed";
connect1191.protoField = "r_hip_changed";
IS1188.connect[2] = connect1191;

OrientationInterpolator1187.iS = IS1188;

ProtoBody586.children[196] = OrientationInterpolator1187;

let ROUTE1192 = browser.currentScene.createNode("ROUTE");
ROUTE1192.fromField = "fraction_changed";
ROUTE1192.fromNode = "BehaviorClock";
ROUTE1192.toField = "set_fraction";
ROUTE1192.toNode = "r_hip_OI";
ProtoBody586.children[197] = ROUTE1192;

let OrientationInterpolator1193 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1193.DEF = "r_index0_OI";
let IS1194 = browser.currentScene.createNode("IS");
let connect1195 = browser.currentScene.createNode("connect");
connect1195.nodeField = "key";
connect1195.protoField = "r_index0_key";
IS1194.connect = new MFNode();

IS1194.connect[0] = connect1195;

let connect1196 = browser.currentScene.createNode("connect");
connect1196.nodeField = "keyValue";
connect1196.protoField = "r_index0_keyValue";
IS1194.connect[1] = connect1196;

let connect1197 = browser.currentScene.createNode("connect");
connect1197.nodeField = "value_changed";
connect1197.protoField = "r_index0_changed";
IS1194.connect[2] = connect1197;

OrientationInterpolator1193.iS = IS1194;

ProtoBody586.children[198] = OrientationInterpolator1193;

let ROUTE1198 = browser.currentScene.createNode("ROUTE");
ROUTE1198.fromField = "fraction_changed";
ROUTE1198.fromNode = "BehaviorClock";
ROUTE1198.toField = "set_fraction";
ROUTE1198.toNode = "r_index0_OI";
ProtoBody586.children[199] = ROUTE1198;

let OrientationInterpolator1199 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1199.DEF = "r_index1_OI";
let IS1200 = browser.currentScene.createNode("IS");
let connect1201 = browser.currentScene.createNode("connect");
connect1201.nodeField = "key";
connect1201.protoField = "r_index1_key";
IS1200.connect = new MFNode();

IS1200.connect[0] = connect1201;

let connect1202 = browser.currentScene.createNode("connect");
connect1202.nodeField = "keyValue";
connect1202.protoField = "r_index1_keyValue";
IS1200.connect[1] = connect1202;

let connect1203 = browser.currentScene.createNode("connect");
connect1203.nodeField = "value_changed";
connect1203.protoField = "r_index1_changed";
IS1200.connect[2] = connect1203;

OrientationInterpolator1199.iS = IS1200;

ProtoBody586.children[200] = OrientationInterpolator1199;

let ROUTE1204 = browser.currentScene.createNode("ROUTE");
ROUTE1204.fromField = "fraction_changed";
ROUTE1204.fromNode = "BehaviorClock";
ROUTE1204.toField = "set_fraction";
ROUTE1204.toNode = "r_index1_OI";
ProtoBody586.children[201] = ROUTE1204;

let OrientationInterpolator1205 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1205.DEF = "r_index2_OI";
let IS1206 = browser.currentScene.createNode("IS");
let connect1207 = browser.currentScene.createNode("connect");
connect1207.nodeField = "key";
connect1207.protoField = "r_index2_key";
IS1206.connect = new MFNode();

IS1206.connect[0] = connect1207;

let connect1208 = browser.currentScene.createNode("connect");
connect1208.nodeField = "keyValue";
connect1208.protoField = "r_index2_keyValue";
IS1206.connect[1] = connect1208;

let connect1209 = browser.currentScene.createNode("connect");
connect1209.nodeField = "value_changed";
connect1209.protoField = "r_index2_changed";
IS1206.connect[2] = connect1209;

OrientationInterpolator1205.iS = IS1206;

ProtoBody586.children[202] = OrientationInterpolator1205;

let ROUTE1210 = browser.currentScene.createNode("ROUTE");
ROUTE1210.fromField = "fraction_changed";
ROUTE1210.fromNode = "BehaviorClock";
ROUTE1210.toField = "set_fraction";
ROUTE1210.toNode = "r_index2_OI";
ProtoBody586.children[203] = ROUTE1210;

let OrientationInterpolator1211 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1211.DEF = "r_index3_OI";
let IS1212 = browser.currentScene.createNode("IS");
let connect1213 = browser.currentScene.createNode("connect");
connect1213.nodeField = "key";
connect1213.protoField = "r_index3_key";
IS1212.connect = new MFNode();

IS1212.connect[0] = connect1213;

let connect1214 = browser.currentScene.createNode("connect");
connect1214.nodeField = "keyValue";
connect1214.protoField = "r_index3_keyValue";
IS1212.connect[1] = connect1214;

let connect1215 = browser.currentScene.createNode("connect");
connect1215.nodeField = "value_changed";
connect1215.protoField = "r_index3_changed";
IS1212.connect[2] = connect1215;

OrientationInterpolator1211.iS = IS1212;

ProtoBody586.children[204] = OrientationInterpolator1211;

let ROUTE1216 = browser.currentScene.createNode("ROUTE");
ROUTE1216.fromField = "fraction_changed";
ROUTE1216.fromNode = "BehaviorClock";
ROUTE1216.toField = "set_fraction";
ROUTE1216.toNode = "r_index3_OI";
ProtoBody586.children[205] = ROUTE1216;

let OrientationInterpolator1217 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1217.DEF = "r_index_distal_OI";
let IS1218 = browser.currentScene.createNode("IS");
let connect1219 = browser.currentScene.createNode("connect");
connect1219.nodeField = "key";
connect1219.protoField = "r_index_distal_key";
IS1218.connect = new MFNode();

IS1218.connect[0] = connect1219;

let connect1220 = browser.currentScene.createNode("connect");
connect1220.nodeField = "keyValue";
connect1220.protoField = "r_index_distal_keyValue";
IS1218.connect[1] = connect1220;

let connect1221 = browser.currentScene.createNode("connect");
connect1221.nodeField = "value_changed";
connect1221.protoField = "r_index_distal_changed";
IS1218.connect[2] = connect1221;

OrientationInterpolator1217.iS = IS1218;

ProtoBody586.children[206] = OrientationInterpolator1217;

let ROUTE1222 = browser.currentScene.createNode("ROUTE");
ROUTE1222.fromField = "fraction_changed";
ROUTE1222.fromNode = "BehaviorClock";
ROUTE1222.toField = "set_fraction";
ROUTE1222.toNode = "r_index_distal_OI";
ProtoBody586.children[207] = ROUTE1222;

let OrientationInterpolator1223 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1223.DEF = "r_index_metacarpal_OI";
let IS1224 = browser.currentScene.createNode("IS");
let connect1225 = browser.currentScene.createNode("connect");
connect1225.nodeField = "key";
connect1225.protoField = "r_index_metacarpal_key";
IS1224.connect = new MFNode();

IS1224.connect[0] = connect1225;

let connect1226 = browser.currentScene.createNode("connect");
connect1226.nodeField = "keyValue";
connect1226.protoField = "r_index_metacarpal_keyValue";
IS1224.connect[1] = connect1226;

let connect1227 = browser.currentScene.createNode("connect");
connect1227.nodeField = "value_changed";
connect1227.protoField = "r_index_metacarpal_changed";
IS1224.connect[2] = connect1227;

OrientationInterpolator1223.iS = IS1224;

ProtoBody586.children[208] = OrientationInterpolator1223;

let ROUTE1228 = browser.currentScene.createNode("ROUTE");
ROUTE1228.fromField = "fraction_changed";
ROUTE1228.fromNode = "BehaviorClock";
ROUTE1228.toField = "set_fraction";
ROUTE1228.toNode = "r_index_metacarpal_OI";
ProtoBody586.children[209] = ROUTE1228;

let OrientationInterpolator1229 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1229.DEF = "r_index_middle_OI";
let IS1230 = browser.currentScene.createNode("IS");
let connect1231 = browser.currentScene.createNode("connect");
connect1231.nodeField = "key";
connect1231.protoField = "r_index_middle_key";
IS1230.connect = new MFNode();

IS1230.connect[0] = connect1231;

let connect1232 = browser.currentScene.createNode("connect");
connect1232.nodeField = "keyValue";
connect1232.protoField = "r_index_middle_keyValue";
IS1230.connect[1] = connect1232;

let connect1233 = browser.currentScene.createNode("connect");
connect1233.nodeField = "value_changed";
connect1233.protoField = "r_index_middle_changed";
IS1230.connect[2] = connect1233;

OrientationInterpolator1229.iS = IS1230;

ProtoBody586.children[210] = OrientationInterpolator1229;

let ROUTE1234 = browser.currentScene.createNode("ROUTE");
ROUTE1234.fromField = "fraction_changed";
ROUTE1234.fromNode = "BehaviorClock";
ROUTE1234.toField = "set_fraction";
ROUTE1234.toNode = "r_index_middle_OI";
ProtoBody586.children[211] = ROUTE1234;

let OrientationInterpolator1235 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1235.DEF = "r_index_proximal_OI";
let IS1236 = browser.currentScene.createNode("IS");
let connect1237 = browser.currentScene.createNode("connect");
connect1237.nodeField = "key";
connect1237.protoField = "r_index_proximal_key";
IS1236.connect = new MFNode();

IS1236.connect[0] = connect1237;

let connect1238 = browser.currentScene.createNode("connect");
connect1238.nodeField = "keyValue";
connect1238.protoField = "r_index_proximal_keyValue";
IS1236.connect[1] = connect1238;

let connect1239 = browser.currentScene.createNode("connect");
connect1239.nodeField = "value_changed";
connect1239.protoField = "r_index_proximal_changed";
IS1236.connect[2] = connect1239;

OrientationInterpolator1235.iS = IS1236;

ProtoBody586.children[212] = OrientationInterpolator1235;

let ROUTE1240 = browser.currentScene.createNode("ROUTE");
ROUTE1240.fromField = "fraction_changed";
ROUTE1240.fromNode = "BehaviorClock";
ROUTE1240.toField = "set_fraction";
ROUTE1240.toNode = "r_index_proximal_OI";
ProtoBody586.children[213] = ROUTE1240;

let OrientationInterpolator1241 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1241.DEF = "r_knee_OI";
let IS1242 = browser.currentScene.createNode("IS");
let connect1243 = browser.currentScene.createNode("connect");
connect1243.nodeField = "key";
connect1243.protoField = "r_knee_key";
IS1242.connect = new MFNode();

IS1242.connect[0] = connect1243;

let connect1244 = browser.currentScene.createNode("connect");
connect1244.nodeField = "keyValue";
connect1244.protoField = "r_knee_keyValue";
IS1242.connect[1] = connect1244;

let connect1245 = browser.currentScene.createNode("connect");
connect1245.nodeField = "value_changed";
connect1245.protoField = "r_knee_changed";
IS1242.connect[2] = connect1245;

OrientationInterpolator1241.iS = IS1242;

ProtoBody586.children[214] = OrientationInterpolator1241;

let ROUTE1246 = browser.currentScene.createNode("ROUTE");
ROUTE1246.fromField = "fraction_changed";
ROUTE1246.fromNode = "BehaviorClock";
ROUTE1246.toField = "set_fraction";
ROUTE1246.toNode = "r_knee_OI";
ProtoBody586.children[215] = ROUTE1246;

let OrientationInterpolator1247 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1247.DEF = "r_metatarsal_OI";
let IS1248 = browser.currentScene.createNode("IS");
let connect1249 = browser.currentScene.createNode("connect");
connect1249.nodeField = "key";
connect1249.protoField = "r_metatarsal_key";
IS1248.connect = new MFNode();

IS1248.connect[0] = connect1249;

let connect1250 = browser.currentScene.createNode("connect");
connect1250.nodeField = "keyValue";
connect1250.protoField = "r_metatarsal_keyValue";
IS1248.connect[1] = connect1250;

let connect1251 = browser.currentScene.createNode("connect");
connect1251.nodeField = "value_changed";
connect1251.protoField = "r_metatarsal_changed";
IS1248.connect[2] = connect1251;

OrientationInterpolator1247.iS = IS1248;

ProtoBody586.children[216] = OrientationInterpolator1247;

let ROUTE1252 = browser.currentScene.createNode("ROUTE");
ROUTE1252.fromField = "fraction_changed";
ROUTE1252.fromNode = "BehaviorClock";
ROUTE1252.toField = "set_fraction";
ROUTE1252.toNode = "r_metatarsal_OI";
ProtoBody586.children[217] = ROUTE1252;

let OrientationInterpolator1253 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1253.DEF = "r_middistal_OI";
let IS1254 = browser.currentScene.createNode("IS");
let connect1255 = browser.currentScene.createNode("connect");
connect1255.nodeField = "key";
connect1255.protoField = "r_middistal_key";
IS1254.connect = new MFNode();

IS1254.connect[0] = connect1255;

let connect1256 = browser.currentScene.createNode("connect");
connect1256.nodeField = "keyValue";
connect1256.protoField = "r_middistal_keyValue";
IS1254.connect[1] = connect1256;

let connect1257 = browser.currentScene.createNode("connect");
connect1257.nodeField = "value_changed";
connect1257.protoField = "r_middistal_changed";
IS1254.connect[2] = connect1257;

OrientationInterpolator1253.iS = IS1254;

ProtoBody586.children[218] = OrientationInterpolator1253;

let ROUTE1258 = browser.currentScene.createNode("ROUTE");
ROUTE1258.fromField = "fraction_changed";
ROUTE1258.fromNode = "BehaviorClock";
ROUTE1258.toField = "set_fraction";
ROUTE1258.toNode = "r_middistal_OI";
ProtoBody586.children[219] = ROUTE1258;

let OrientationInterpolator1259 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1259.DEF = "r_middle0_OI";
let IS1260 = browser.currentScene.createNode("IS");
let connect1261 = browser.currentScene.createNode("connect");
connect1261.nodeField = "key";
connect1261.protoField = "r_middle0_key";
IS1260.connect = new MFNode();

IS1260.connect[0] = connect1261;

let connect1262 = browser.currentScene.createNode("connect");
connect1262.nodeField = "keyValue";
connect1262.protoField = "r_middle0_keyValue";
IS1260.connect[1] = connect1262;

let connect1263 = browser.currentScene.createNode("connect");
connect1263.nodeField = "value_changed";
connect1263.protoField = "r_middle0_changed";
IS1260.connect[2] = connect1263;

OrientationInterpolator1259.iS = IS1260;

ProtoBody586.children[220] = OrientationInterpolator1259;

let ROUTE1264 = browser.currentScene.createNode("ROUTE");
ROUTE1264.fromField = "fraction_changed";
ROUTE1264.fromNode = "BehaviorClock";
ROUTE1264.toField = "set_fraction";
ROUTE1264.toNode = "r_middle0_OI";
ProtoBody586.children[221] = ROUTE1264;

let OrientationInterpolator1265 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1265.DEF = "r_middle1_OI";
let IS1266 = browser.currentScene.createNode("IS");
let connect1267 = browser.currentScene.createNode("connect");
connect1267.nodeField = "key";
connect1267.protoField = "r_middle1_key";
IS1266.connect = new MFNode();

IS1266.connect[0] = connect1267;

let connect1268 = browser.currentScene.createNode("connect");
connect1268.nodeField = "keyValue";
connect1268.protoField = "r_middle1_keyValue";
IS1266.connect[1] = connect1268;

let connect1269 = browser.currentScene.createNode("connect");
connect1269.nodeField = "value_changed";
connect1269.protoField = "r_middle1_changed";
IS1266.connect[2] = connect1269;

OrientationInterpolator1265.iS = IS1266;

ProtoBody586.children[222] = OrientationInterpolator1265;

let ROUTE1270 = browser.currentScene.createNode("ROUTE");
ROUTE1270.fromField = "fraction_changed";
ROUTE1270.fromNode = "BehaviorClock";
ROUTE1270.toField = "set_fraction";
ROUTE1270.toNode = "r_middle1_OI";
ProtoBody586.children[223] = ROUTE1270;

let OrientationInterpolator1271 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1271.DEF = "r_middle2_OI";
let IS1272 = browser.currentScene.createNode("IS");
let connect1273 = browser.currentScene.createNode("connect");
connect1273.nodeField = "key";
connect1273.protoField = "r_middle2_key";
IS1272.connect = new MFNode();

IS1272.connect[0] = connect1273;

let connect1274 = browser.currentScene.createNode("connect");
connect1274.nodeField = "keyValue";
connect1274.protoField = "r_middle2_keyValue";
IS1272.connect[1] = connect1274;

let connect1275 = browser.currentScene.createNode("connect");
connect1275.nodeField = "value_changed";
connect1275.protoField = "r_middle2_changed";
IS1272.connect[2] = connect1275;

OrientationInterpolator1271.iS = IS1272;

ProtoBody586.children[224] = OrientationInterpolator1271;

let ROUTE1276 = browser.currentScene.createNode("ROUTE");
ROUTE1276.fromField = "fraction_changed";
ROUTE1276.fromNode = "BehaviorClock";
ROUTE1276.toField = "set_fraction";
ROUTE1276.toNode = "r_middle2_OI";
ProtoBody586.children[225] = ROUTE1276;

let OrientationInterpolator1277 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1277.DEF = "r_middle3_OI";
let IS1278 = browser.currentScene.createNode("IS");
let connect1279 = browser.currentScene.createNode("connect");
connect1279.nodeField = "key";
connect1279.protoField = "r_middle3_key";
IS1278.connect = new MFNode();

IS1278.connect[0] = connect1279;

let connect1280 = browser.currentScene.createNode("connect");
connect1280.nodeField = "keyValue";
connect1280.protoField = "r_middle3_keyValue";
IS1278.connect[1] = connect1280;

let connect1281 = browser.currentScene.createNode("connect");
connect1281.nodeField = "value_changed";
connect1281.protoField = "r_middle3_changed";
IS1278.connect[2] = connect1281;

OrientationInterpolator1277.iS = IS1278;

ProtoBody586.children[226] = OrientationInterpolator1277;

let ROUTE1282 = browser.currentScene.createNode("ROUTE");
ROUTE1282.fromField = "fraction_changed";
ROUTE1282.fromNode = "BehaviorClock";
ROUTE1282.toField = "set_fraction";
ROUTE1282.toNode = "r_middle3_OI";
ProtoBody586.children[227] = ROUTE1282;

let OrientationInterpolator1283 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1283.DEF = "r_middle_distal_OI";
let IS1284 = browser.currentScene.createNode("IS");
let connect1285 = browser.currentScene.createNode("connect");
connect1285.nodeField = "key";
connect1285.protoField = "r_middle_distal_key";
IS1284.connect = new MFNode();

IS1284.connect[0] = connect1285;

let connect1286 = browser.currentScene.createNode("connect");
connect1286.nodeField = "keyValue";
connect1286.protoField = "r_middle_distal_keyValue";
IS1284.connect[1] = connect1286;

let connect1287 = browser.currentScene.createNode("connect");
connect1287.nodeField = "value_changed";
connect1287.protoField = "r_middle_distal_changed";
IS1284.connect[2] = connect1287;

OrientationInterpolator1283.iS = IS1284;

ProtoBody586.children[228] = OrientationInterpolator1283;

let ROUTE1288 = browser.currentScene.createNode("ROUTE");
ROUTE1288.fromField = "fraction_changed";
ROUTE1288.fromNode = "BehaviorClock";
ROUTE1288.toField = "set_fraction";
ROUTE1288.toNode = "r_middle_distal_OI";
ProtoBody586.children[229] = ROUTE1288;

let OrientationInterpolator1289 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1289.DEF = "r_middle_metacarpal_OI";
let IS1290 = browser.currentScene.createNode("IS");
let connect1291 = browser.currentScene.createNode("connect");
connect1291.nodeField = "key";
connect1291.protoField = "r_middle_metacarpal_key";
IS1290.connect = new MFNode();

IS1290.connect[0] = connect1291;

let connect1292 = browser.currentScene.createNode("connect");
connect1292.nodeField = "keyValue";
connect1292.protoField = "r_middle_metacarpal_keyValue";
IS1290.connect[1] = connect1292;

let connect1293 = browser.currentScene.createNode("connect");
connect1293.nodeField = "value_changed";
connect1293.protoField = "r_middle_metacarpal_changed";
IS1290.connect[2] = connect1293;

OrientationInterpolator1289.iS = IS1290;

ProtoBody586.children[230] = OrientationInterpolator1289;

let ROUTE1294 = browser.currentScene.createNode("ROUTE");
ROUTE1294.fromField = "fraction_changed";
ROUTE1294.fromNode = "BehaviorClock";
ROUTE1294.toField = "set_fraction";
ROUTE1294.toNode = "r_middle_metacarpal_OI";
ProtoBody586.children[231] = ROUTE1294;

let OrientationInterpolator1295 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1295.DEF = "r_middle_middle_OI";
let IS1296 = browser.currentScene.createNode("IS");
let connect1297 = browser.currentScene.createNode("connect");
connect1297.nodeField = "key";
connect1297.protoField = "r_middle_middle_key";
IS1296.connect = new MFNode();

IS1296.connect[0] = connect1297;

let connect1298 = browser.currentScene.createNode("connect");
connect1298.nodeField = "keyValue";
connect1298.protoField = "r_middle_middle_keyValue";
IS1296.connect[1] = connect1298;

let connect1299 = browser.currentScene.createNode("connect");
connect1299.nodeField = "value_changed";
connect1299.protoField = "r_middle_middle_changed";
IS1296.connect[2] = connect1299;

OrientationInterpolator1295.iS = IS1296;

ProtoBody586.children[232] = OrientationInterpolator1295;

let ROUTE1300 = browser.currentScene.createNode("ROUTE");
ROUTE1300.fromField = "fraction_changed";
ROUTE1300.fromNode = "BehaviorClock";
ROUTE1300.toField = "set_fraction";
ROUTE1300.toNode = "r_middle_middle_OI";
ProtoBody586.children[233] = ROUTE1300;

let OrientationInterpolator1301 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1301.DEF = "r_middle_proximal_OI";
let IS1302 = browser.currentScene.createNode("IS");
let connect1303 = browser.currentScene.createNode("connect");
connect1303.nodeField = "key";
connect1303.protoField = "r_middle_proximal_key";
IS1302.connect = new MFNode();

IS1302.connect[0] = connect1303;

let connect1304 = browser.currentScene.createNode("connect");
connect1304.nodeField = "keyValue";
connect1304.protoField = "r_middle_proximal_keyValue";
IS1302.connect[1] = connect1304;

let connect1305 = browser.currentScene.createNode("connect");
connect1305.nodeField = "value_changed";
connect1305.protoField = "r_middle_proximal_changed";
IS1302.connect[2] = connect1305;

OrientationInterpolator1301.iS = IS1302;

ProtoBody586.children[234] = OrientationInterpolator1301;

let ROUTE1306 = browser.currentScene.createNode("ROUTE");
ROUTE1306.fromField = "fraction_changed";
ROUTE1306.fromNode = "BehaviorClock";
ROUTE1306.toField = "set_fraction";
ROUTE1306.toNode = "r_middle_proximal_OI";
ProtoBody586.children[235] = ROUTE1306;

let OrientationInterpolator1307 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1307.DEF = "r_midproximal_OI";
let IS1308 = browser.currentScene.createNode("IS");
let connect1309 = browser.currentScene.createNode("connect");
connect1309.nodeField = "key";
connect1309.protoField = "r_midproximal_key";
IS1308.connect = new MFNode();

IS1308.connect[0] = connect1309;

let connect1310 = browser.currentScene.createNode("connect");
connect1310.nodeField = "keyValue";
connect1310.protoField = "r_midproximal_keyValue";
IS1308.connect[1] = connect1310;

let connect1311 = browser.currentScene.createNode("connect");
connect1311.nodeField = "value_changed";
connect1311.protoField = "r_midproximal_changed";
IS1308.connect[2] = connect1311;

OrientationInterpolator1307.iS = IS1308;

ProtoBody586.children[236] = OrientationInterpolator1307;

let ROUTE1312 = browser.currentScene.createNode("ROUTE");
ROUTE1312.fromField = "fraction_changed";
ROUTE1312.fromNode = "BehaviorClock";
ROUTE1312.toField = "set_fraction";
ROUTE1312.toNode = "r_midproximal_OI";
ProtoBody586.children[237] = ROUTE1312;

let OrientationInterpolator1313 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1313.DEF = "r_midtarsal_OI";
let IS1314 = browser.currentScene.createNode("IS");
let connect1315 = browser.currentScene.createNode("connect");
connect1315.nodeField = "key";
connect1315.protoField = "r_midtarsal_key";
IS1314.connect = new MFNode();

IS1314.connect[0] = connect1315;

let connect1316 = browser.currentScene.createNode("connect");
connect1316.nodeField = "keyValue";
connect1316.protoField = "r_midtarsal_keyValue";
IS1314.connect[1] = connect1316;

let connect1317 = browser.currentScene.createNode("connect");
connect1317.nodeField = "value_changed";
connect1317.protoField = "r_midtarsal_changed";
IS1314.connect[2] = connect1317;

OrientationInterpolator1313.iS = IS1314;

ProtoBody586.children[238] = OrientationInterpolator1313;

let ROUTE1318 = browser.currentScene.createNode("ROUTE");
ROUTE1318.fromField = "fraction_changed";
ROUTE1318.fromNode = "BehaviorClock";
ROUTE1318.toField = "set_fraction";
ROUTE1318.toNode = "r_midtarsal_OI";
ProtoBody586.children[239] = ROUTE1318;

let OrientationInterpolator1319 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1319.DEF = "r_pinky0_OI";
let IS1320 = browser.currentScene.createNode("IS");
let connect1321 = browser.currentScene.createNode("connect");
connect1321.nodeField = "key";
connect1321.protoField = "r_pinky0_key";
IS1320.connect = new MFNode();

IS1320.connect[0] = connect1321;

let connect1322 = browser.currentScene.createNode("connect");
connect1322.nodeField = "keyValue";
connect1322.protoField = "r_pinky0_keyValue";
IS1320.connect[1] = connect1322;

let connect1323 = browser.currentScene.createNode("connect");
connect1323.nodeField = "value_changed";
connect1323.protoField = "r_pinky0_changed";
IS1320.connect[2] = connect1323;

OrientationInterpolator1319.iS = IS1320;

ProtoBody586.children[240] = OrientationInterpolator1319;

let ROUTE1324 = browser.currentScene.createNode("ROUTE");
ROUTE1324.fromField = "fraction_changed";
ROUTE1324.fromNode = "BehaviorClock";
ROUTE1324.toField = "set_fraction";
ROUTE1324.toNode = "r_pinky0_OI";
ProtoBody586.children[241] = ROUTE1324;

let OrientationInterpolator1325 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1325.DEF = "r_pinky1_OI";
let IS1326 = browser.currentScene.createNode("IS");
let connect1327 = browser.currentScene.createNode("connect");
connect1327.nodeField = "key";
connect1327.protoField = "r_pinky1_key";
IS1326.connect = new MFNode();

IS1326.connect[0] = connect1327;

let connect1328 = browser.currentScene.createNode("connect");
connect1328.nodeField = "keyValue";
connect1328.protoField = "r_pinky1_keyValue";
IS1326.connect[1] = connect1328;

let connect1329 = browser.currentScene.createNode("connect");
connect1329.nodeField = "value_changed";
connect1329.protoField = "r_pinky1_changed";
IS1326.connect[2] = connect1329;

OrientationInterpolator1325.iS = IS1326;

ProtoBody586.children[242] = OrientationInterpolator1325;

let ROUTE1330 = browser.currentScene.createNode("ROUTE");
ROUTE1330.fromField = "fraction_changed";
ROUTE1330.fromNode = "BehaviorClock";
ROUTE1330.toField = "set_fraction";
ROUTE1330.toNode = "r_pinky1_OI";
ProtoBody586.children[243] = ROUTE1330;

let OrientationInterpolator1331 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1331.DEF = "r_pinky2_OI";
let IS1332 = browser.currentScene.createNode("IS");
let connect1333 = browser.currentScene.createNode("connect");
connect1333.nodeField = "key";
connect1333.protoField = "r_pinky2_key";
IS1332.connect = new MFNode();

IS1332.connect[0] = connect1333;

let connect1334 = browser.currentScene.createNode("connect");
connect1334.nodeField = "keyValue";
connect1334.protoField = "r_pinky2_keyValue";
IS1332.connect[1] = connect1334;

let connect1335 = browser.currentScene.createNode("connect");
connect1335.nodeField = "value_changed";
connect1335.protoField = "r_pinky2_changed";
IS1332.connect[2] = connect1335;

OrientationInterpolator1331.iS = IS1332;

ProtoBody586.children[244] = OrientationInterpolator1331;

let ROUTE1336 = browser.currentScene.createNode("ROUTE");
ROUTE1336.fromField = "fraction_changed";
ROUTE1336.fromNode = "BehaviorClock";
ROUTE1336.toField = "set_fraction";
ROUTE1336.toNode = "r_pinky2_OI";
ProtoBody586.children[245] = ROUTE1336;

let OrientationInterpolator1337 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1337.DEF = "r_pinky3_OI";
let IS1338 = browser.currentScene.createNode("IS");
let connect1339 = browser.currentScene.createNode("connect");
connect1339.nodeField = "key";
connect1339.protoField = "r_pinky3_key";
IS1338.connect = new MFNode();

IS1338.connect[0] = connect1339;

let connect1340 = browser.currentScene.createNode("connect");
connect1340.nodeField = "keyValue";
connect1340.protoField = "r_pinky3_keyValue";
IS1338.connect[1] = connect1340;

let connect1341 = browser.currentScene.createNode("connect");
connect1341.nodeField = "value_changed";
connect1341.protoField = "r_pinky3_changed";
IS1338.connect[2] = connect1341;

OrientationInterpolator1337.iS = IS1338;

ProtoBody586.children[246] = OrientationInterpolator1337;

let ROUTE1342 = browser.currentScene.createNode("ROUTE");
ROUTE1342.fromField = "fraction_changed";
ROUTE1342.fromNode = "BehaviorClock";
ROUTE1342.toField = "set_fraction";
ROUTE1342.toNode = "r_pinky3_OI";
ProtoBody586.children[247] = ROUTE1342;

let OrientationInterpolator1343 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1343.DEF = "r_pinky_distal_OI";
let IS1344 = browser.currentScene.createNode("IS");
let connect1345 = browser.currentScene.createNode("connect");
connect1345.nodeField = "key";
connect1345.protoField = "r_pinky_distal_key";
IS1344.connect = new MFNode();

IS1344.connect[0] = connect1345;

let connect1346 = browser.currentScene.createNode("connect");
connect1346.nodeField = "keyValue";
connect1346.protoField = "r_pinky_distal_keyValue";
IS1344.connect[1] = connect1346;

let connect1347 = browser.currentScene.createNode("connect");
connect1347.nodeField = "value_changed";
connect1347.protoField = "r_pinky_distal_changed";
IS1344.connect[2] = connect1347;

OrientationInterpolator1343.iS = IS1344;

ProtoBody586.children[248] = OrientationInterpolator1343;

let ROUTE1348 = browser.currentScene.createNode("ROUTE");
ROUTE1348.fromField = "fraction_changed";
ROUTE1348.fromNode = "BehaviorClock";
ROUTE1348.toField = "set_fraction";
ROUTE1348.toNode = "r_pinky_distal_OI";
ProtoBody586.children[249] = ROUTE1348;

let OrientationInterpolator1349 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1349.DEF = "r_pinky_metacarpal_OI";
let IS1350 = browser.currentScene.createNode("IS");
let connect1351 = browser.currentScene.createNode("connect");
connect1351.nodeField = "key";
connect1351.protoField = "r_pinky_metacarpal_key";
IS1350.connect = new MFNode();

IS1350.connect[0] = connect1351;

let connect1352 = browser.currentScene.createNode("connect");
connect1352.nodeField = "keyValue";
connect1352.protoField = "r_pinky_metacarpal_keyValue";
IS1350.connect[1] = connect1352;

let connect1353 = browser.currentScene.createNode("connect");
connect1353.nodeField = "value_changed";
connect1353.protoField = "r_pinky_metacarpal_changed";
IS1350.connect[2] = connect1353;

OrientationInterpolator1349.iS = IS1350;

ProtoBody586.children[250] = OrientationInterpolator1349;

let ROUTE1354 = browser.currentScene.createNode("ROUTE");
ROUTE1354.fromField = "fraction_changed";
ROUTE1354.fromNode = "BehaviorClock";
ROUTE1354.toField = "set_fraction";
ROUTE1354.toNode = "r_pinky_metacarpal_OI";
ProtoBody586.children[251] = ROUTE1354;

let OrientationInterpolator1355 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1355.DEF = "r_pinky_middle_OI";
let IS1356 = browser.currentScene.createNode("IS");
let connect1357 = browser.currentScene.createNode("connect");
connect1357.nodeField = "key";
connect1357.protoField = "r_pinky_middle_key";
IS1356.connect = new MFNode();

IS1356.connect[0] = connect1357;

let connect1358 = browser.currentScene.createNode("connect");
connect1358.nodeField = "keyValue";
connect1358.protoField = "r_pinky_middle_keyValue";
IS1356.connect[1] = connect1358;

let connect1359 = browser.currentScene.createNode("connect");
connect1359.nodeField = "value_changed";
connect1359.protoField = "r_pinky_middle_changed";
IS1356.connect[2] = connect1359;

OrientationInterpolator1355.iS = IS1356;

ProtoBody586.children[252] = OrientationInterpolator1355;

let ROUTE1360 = browser.currentScene.createNode("ROUTE");
ROUTE1360.fromField = "fraction_changed";
ROUTE1360.fromNode = "BehaviorClock";
ROUTE1360.toField = "set_fraction";
ROUTE1360.toNode = "r_pinky_middle_OI";
ProtoBody586.children[253] = ROUTE1360;

let OrientationInterpolator1361 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1361.DEF = "r_pinky_proximal_OI";
let IS1362 = browser.currentScene.createNode("IS");
let connect1363 = browser.currentScene.createNode("connect");
connect1363.nodeField = "key";
connect1363.protoField = "r_pinky_proximal_key";
IS1362.connect = new MFNode();

IS1362.connect[0] = connect1363;

let connect1364 = browser.currentScene.createNode("connect");
connect1364.nodeField = "keyValue";
connect1364.protoField = "r_pinky_proximal_keyValue";
IS1362.connect[1] = connect1364;

let connect1365 = browser.currentScene.createNode("connect");
connect1365.nodeField = "value_changed";
connect1365.protoField = "r_pinky_proximal_changed";
IS1362.connect[2] = connect1365;

OrientationInterpolator1361.iS = IS1362;

ProtoBody586.children[254] = OrientationInterpolator1361;

let ROUTE1366 = browser.currentScene.createNode("ROUTE");
ROUTE1366.fromField = "fraction_changed";
ROUTE1366.fromNode = "BehaviorClock";
ROUTE1366.toField = "set_fraction";
ROUTE1366.toNode = "r_pinky_proximal_OI";
ProtoBody586.children[255] = ROUTE1366;

let OrientationInterpolator1367 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1367.DEF = "r_ring0_OI";
let IS1368 = browser.currentScene.createNode("IS");
let connect1369 = browser.currentScene.createNode("connect");
connect1369.nodeField = "key";
connect1369.protoField = "r_ring0_key";
IS1368.connect = new MFNode();

IS1368.connect[0] = connect1369;

let connect1370 = browser.currentScene.createNode("connect");
connect1370.nodeField = "keyValue";
connect1370.protoField = "r_ring0_keyValue";
IS1368.connect[1] = connect1370;

let connect1371 = browser.currentScene.createNode("connect");
connect1371.nodeField = "value_changed";
connect1371.protoField = "r_ring0_changed";
IS1368.connect[2] = connect1371;

OrientationInterpolator1367.iS = IS1368;

ProtoBody586.children[256] = OrientationInterpolator1367;

let ROUTE1372 = browser.currentScene.createNode("ROUTE");
ROUTE1372.fromField = "fraction_changed";
ROUTE1372.fromNode = "BehaviorClock";
ROUTE1372.toField = "set_fraction";
ROUTE1372.toNode = "r_ring0_OI";
ProtoBody586.children[257] = ROUTE1372;

let OrientationInterpolator1373 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1373.DEF = "r_ring1_OI";
let IS1374 = browser.currentScene.createNode("IS");
let connect1375 = browser.currentScene.createNode("connect");
connect1375.nodeField = "key";
connect1375.protoField = "r_ring1_key";
IS1374.connect = new MFNode();

IS1374.connect[0] = connect1375;

let connect1376 = browser.currentScene.createNode("connect");
connect1376.nodeField = "keyValue";
connect1376.protoField = "r_ring1_keyValue";
IS1374.connect[1] = connect1376;

let connect1377 = browser.currentScene.createNode("connect");
connect1377.nodeField = "value_changed";
connect1377.protoField = "r_ring1_changed";
IS1374.connect[2] = connect1377;

OrientationInterpolator1373.iS = IS1374;

ProtoBody586.children[258] = OrientationInterpolator1373;

let ROUTE1378 = browser.currentScene.createNode("ROUTE");
ROUTE1378.fromField = "fraction_changed";
ROUTE1378.fromNode = "BehaviorClock";
ROUTE1378.toField = "set_fraction";
ROUTE1378.toNode = "r_ring1_OI";
ProtoBody586.children[259] = ROUTE1378;

let OrientationInterpolator1379 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1379.DEF = "r_ring2_OI";
let IS1380 = browser.currentScene.createNode("IS");
let connect1381 = browser.currentScene.createNode("connect");
connect1381.nodeField = "key";
connect1381.protoField = "r_ring2_key";
IS1380.connect = new MFNode();

IS1380.connect[0] = connect1381;

let connect1382 = browser.currentScene.createNode("connect");
connect1382.nodeField = "keyValue";
connect1382.protoField = "r_ring2_keyValue";
IS1380.connect[1] = connect1382;

let connect1383 = browser.currentScene.createNode("connect");
connect1383.nodeField = "value_changed";
connect1383.protoField = "r_ring2_changed";
IS1380.connect[2] = connect1383;

OrientationInterpolator1379.iS = IS1380;

ProtoBody586.children[260] = OrientationInterpolator1379;

let ROUTE1384 = browser.currentScene.createNode("ROUTE");
ROUTE1384.fromField = "fraction_changed";
ROUTE1384.fromNode = "BehaviorClock";
ROUTE1384.toField = "set_fraction";
ROUTE1384.toNode = "r_ring2_OI";
ProtoBody586.children[261] = ROUTE1384;

let OrientationInterpolator1385 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1385.DEF = "r_ring3_OI";
let IS1386 = browser.currentScene.createNode("IS");
let connect1387 = browser.currentScene.createNode("connect");
connect1387.nodeField = "key";
connect1387.protoField = "r_ring3_key";
IS1386.connect = new MFNode();

IS1386.connect[0] = connect1387;

let connect1388 = browser.currentScene.createNode("connect");
connect1388.nodeField = "keyValue";
connect1388.protoField = "r_ring3_keyValue";
IS1386.connect[1] = connect1388;

let connect1389 = browser.currentScene.createNode("connect");
connect1389.nodeField = "value_changed";
connect1389.protoField = "r_ring3_changed";
IS1386.connect[2] = connect1389;

OrientationInterpolator1385.iS = IS1386;

ProtoBody586.children[262] = OrientationInterpolator1385;

let ROUTE1390 = browser.currentScene.createNode("ROUTE");
ROUTE1390.fromField = "fraction_changed";
ROUTE1390.fromNode = "BehaviorClock";
ROUTE1390.toField = "set_fraction";
ROUTE1390.toNode = "r_ring3_OI";
ProtoBody586.children[263] = ROUTE1390;

let OrientationInterpolator1391 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1391.DEF = "r_ring_distal_OI";
let IS1392 = browser.currentScene.createNode("IS");
let connect1393 = browser.currentScene.createNode("connect");
connect1393.nodeField = "key";
connect1393.protoField = "r_ring_distal_key";
IS1392.connect = new MFNode();

IS1392.connect[0] = connect1393;

let connect1394 = browser.currentScene.createNode("connect");
connect1394.nodeField = "keyValue";
connect1394.protoField = "r_ring_distal_keyValue";
IS1392.connect[1] = connect1394;

let connect1395 = browser.currentScene.createNode("connect");
connect1395.nodeField = "value_changed";
connect1395.protoField = "r_ring_distal_changed";
IS1392.connect[2] = connect1395;

OrientationInterpolator1391.iS = IS1392;

ProtoBody586.children[264] = OrientationInterpolator1391;

let ROUTE1396 = browser.currentScene.createNode("ROUTE");
ROUTE1396.fromField = "fraction_changed";
ROUTE1396.fromNode = "BehaviorClock";
ROUTE1396.toField = "set_fraction";
ROUTE1396.toNode = "r_ring_distal_OI";
ProtoBody586.children[265] = ROUTE1396;

let OrientationInterpolator1397 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1397.DEF = "r_ring_metacarpal_OI";
let IS1398 = browser.currentScene.createNode("IS");
let connect1399 = browser.currentScene.createNode("connect");
connect1399.nodeField = "key";
connect1399.protoField = "r_ring_metacarpal_key";
IS1398.connect = new MFNode();

IS1398.connect[0] = connect1399;

let connect1400 = browser.currentScene.createNode("connect");
connect1400.nodeField = "keyValue";
connect1400.protoField = "r_ring_metacarpal_keyValue";
IS1398.connect[1] = connect1400;

let connect1401 = browser.currentScene.createNode("connect");
connect1401.nodeField = "value_changed";
connect1401.protoField = "r_ring_metacarpal_changed";
IS1398.connect[2] = connect1401;

OrientationInterpolator1397.iS = IS1398;

ProtoBody586.children[266] = OrientationInterpolator1397;

let ROUTE1402 = browser.currentScene.createNode("ROUTE");
ROUTE1402.fromField = "fraction_changed";
ROUTE1402.fromNode = "BehaviorClock";
ROUTE1402.toField = "set_fraction";
ROUTE1402.toNode = "r_ring_metacarpal_OI";
ProtoBody586.children[267] = ROUTE1402;

let OrientationInterpolator1403 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1403.DEF = "r_ring_middle_OI";
let IS1404 = browser.currentScene.createNode("IS");
let connect1405 = browser.currentScene.createNode("connect");
connect1405.nodeField = "key";
connect1405.protoField = "r_ring_middle_key";
IS1404.connect = new MFNode();

IS1404.connect[0] = connect1405;

let connect1406 = browser.currentScene.createNode("connect");
connect1406.nodeField = "keyValue";
connect1406.protoField = "r_ring_middle_keyValue";
IS1404.connect[1] = connect1406;

let connect1407 = browser.currentScene.createNode("connect");
connect1407.nodeField = "value_changed";
connect1407.protoField = "r_ring_middle_changed";
IS1404.connect[2] = connect1407;

OrientationInterpolator1403.iS = IS1404;

ProtoBody586.children[268] = OrientationInterpolator1403;

let ROUTE1408 = browser.currentScene.createNode("ROUTE");
ROUTE1408.fromField = "fraction_changed";
ROUTE1408.fromNode = "BehaviorClock";
ROUTE1408.toField = "set_fraction";
ROUTE1408.toNode = "r_ring_middle_OI";
ProtoBody586.children[269] = ROUTE1408;

let OrientationInterpolator1409 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1409.DEF = "r_ring_proximal_OI";
let IS1410 = browser.currentScene.createNode("IS");
let connect1411 = browser.currentScene.createNode("connect");
connect1411.nodeField = "key";
connect1411.protoField = "r_ring_proximal_key";
IS1410.connect = new MFNode();

IS1410.connect[0] = connect1411;

let connect1412 = browser.currentScene.createNode("connect");
connect1412.nodeField = "keyValue";
connect1412.protoField = "r_ring_proximal_keyValue";
IS1410.connect[1] = connect1412;

let connect1413 = browser.currentScene.createNode("connect");
connect1413.nodeField = "value_changed";
connect1413.protoField = "r_ring_proximal_changed";
IS1410.connect[2] = connect1413;

OrientationInterpolator1409.iS = IS1410;

ProtoBody586.children[270] = OrientationInterpolator1409;

let ROUTE1414 = browser.currentScene.createNode("ROUTE");
ROUTE1414.fromField = "fraction_changed";
ROUTE1414.fromNode = "BehaviorClock";
ROUTE1414.toField = "set_fraction";
ROUTE1414.toNode = "r_ring_proximal_OI";
ProtoBody586.children[271] = ROUTE1414;

let OrientationInterpolator1415 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1415.DEF = "r_scapula_OI";
let IS1416 = browser.currentScene.createNode("IS");
let connect1417 = browser.currentScene.createNode("connect");
connect1417.nodeField = "key";
connect1417.protoField = "r_scapula_key";
IS1416.connect = new MFNode();

IS1416.connect[0] = connect1417;

let connect1418 = browser.currentScene.createNode("connect");
connect1418.nodeField = "keyValue";
connect1418.protoField = "r_scapula_keyValue";
IS1416.connect[1] = connect1418;

let connect1419 = browser.currentScene.createNode("connect");
connect1419.nodeField = "value_changed";
connect1419.protoField = "r_scapula_changed";
IS1416.connect[2] = connect1419;

OrientationInterpolator1415.iS = IS1416;

ProtoBody586.children[272] = OrientationInterpolator1415;

let ROUTE1420 = browser.currentScene.createNode("ROUTE");
ROUTE1420.fromField = "fraction_changed";
ROUTE1420.fromNode = "BehaviorClock";
ROUTE1420.toField = "set_fraction";
ROUTE1420.toNode = "r_scapula_OI";
ProtoBody586.children[273] = ROUTE1420;

let OrientationInterpolator1421 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1421.DEF = "r_shoulder_OI";
let IS1422 = browser.currentScene.createNode("IS");
let connect1423 = browser.currentScene.createNode("connect");
connect1423.nodeField = "key";
connect1423.protoField = "r_shoulder_key";
IS1422.connect = new MFNode();

IS1422.connect[0] = connect1423;

let connect1424 = browser.currentScene.createNode("connect");
connect1424.nodeField = "keyValue";
connect1424.protoField = "r_shoulder_keyValue";
IS1422.connect[1] = connect1424;

let connect1425 = browser.currentScene.createNode("connect");
connect1425.nodeField = "value_changed";
connect1425.protoField = "r_shoulder_changed";
IS1422.connect[2] = connect1425;

OrientationInterpolator1421.iS = IS1422;

ProtoBody586.children[274] = OrientationInterpolator1421;

let ROUTE1426 = browser.currentScene.createNode("ROUTE");
ROUTE1426.fromField = "fraction_changed";
ROUTE1426.fromNode = "BehaviorClock";
ROUTE1426.toField = "set_fraction";
ROUTE1426.toNode = "r_shoulder_OI";
ProtoBody586.children[275] = ROUTE1426;

let OrientationInterpolator1427 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1427.DEF = "r_sternoclavicular_OI";
let IS1428 = browser.currentScene.createNode("IS");
let connect1429 = browser.currentScene.createNode("connect");
connect1429.nodeField = "key";
connect1429.protoField = "r_sternoclavicular_key";
IS1428.connect = new MFNode();

IS1428.connect[0] = connect1429;

let connect1430 = browser.currentScene.createNode("connect");
connect1430.nodeField = "keyValue";
connect1430.protoField = "r_sternoclavicular_keyValue";
IS1428.connect[1] = connect1430;

let connect1431 = browser.currentScene.createNode("connect");
connect1431.nodeField = "value_changed";
connect1431.protoField = "r_sternoclavicular_changed";
IS1428.connect[2] = connect1431;

OrientationInterpolator1427.iS = IS1428;

ProtoBody586.children[276] = OrientationInterpolator1427;

let ROUTE1432 = browser.currentScene.createNode("ROUTE");
ROUTE1432.fromField = "fraction_changed";
ROUTE1432.fromNode = "BehaviorClock";
ROUTE1432.toField = "set_fraction";
ROUTE1432.toNode = "r_sternoclavicular_OI";
ProtoBody586.children[277] = ROUTE1432;

let OrientationInterpolator1433 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1433.DEF = "r_subtalar_OI";
let IS1434 = browser.currentScene.createNode("IS");
let connect1435 = browser.currentScene.createNode("connect");
connect1435.nodeField = "key";
connect1435.protoField = "r_subtalar_key";
IS1434.connect = new MFNode();

IS1434.connect[0] = connect1435;

let connect1436 = browser.currentScene.createNode("connect");
connect1436.nodeField = "keyValue";
connect1436.protoField = "r_subtalar_keyValue";
IS1434.connect[1] = connect1436;

let connect1437 = browser.currentScene.createNode("connect");
connect1437.nodeField = "value_changed";
connect1437.protoField = "r_subtalar_changed";
IS1434.connect[2] = connect1437;

OrientationInterpolator1433.iS = IS1434;

ProtoBody586.children[278] = OrientationInterpolator1433;

let ROUTE1438 = browser.currentScene.createNode("ROUTE");
ROUTE1438.fromField = "fraction_changed";
ROUTE1438.fromNode = "BehaviorClock";
ROUTE1438.toField = "set_fraction";
ROUTE1438.toNode = "r_subtalar_OI";
ProtoBody586.children[279] = ROUTE1438;

let OrientationInterpolator1439 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1439.DEF = "r_thigh_OI";
let IS1440 = browser.currentScene.createNode("IS");
let connect1441 = browser.currentScene.createNode("connect");
connect1441.nodeField = "key";
connect1441.protoField = "r_thigh_key";
IS1440.connect = new MFNode();

IS1440.connect[0] = connect1441;

let connect1442 = browser.currentScene.createNode("connect");
connect1442.nodeField = "keyValue";
connect1442.protoField = "r_thigh_keyValue";
IS1440.connect[1] = connect1442;

let connect1443 = browser.currentScene.createNode("connect");
connect1443.nodeField = "value_changed";
connect1443.protoField = "r_thigh_changed";
IS1440.connect[2] = connect1443;

OrientationInterpolator1439.iS = IS1440;

ProtoBody586.children[280] = OrientationInterpolator1439;

let ROUTE1444 = browser.currentScene.createNode("ROUTE");
ROUTE1444.fromField = "fraction_changed";
ROUTE1444.fromNode = "BehaviorClock";
ROUTE1444.toField = "set_fraction";
ROUTE1444.toNode = "r_thigh_OI";
ProtoBody586.children[281] = ROUTE1444;

let OrientationInterpolator1445 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1445.DEF = "r_thumb1_OI";
let IS1446 = browser.currentScene.createNode("IS");
let connect1447 = browser.currentScene.createNode("connect");
connect1447.nodeField = "key";
connect1447.protoField = "r_thumb1_key";
IS1446.connect = new MFNode();

IS1446.connect[0] = connect1447;

let connect1448 = browser.currentScene.createNode("connect");
connect1448.nodeField = "keyValue";
connect1448.protoField = "r_thumb1_keyValue";
IS1446.connect[1] = connect1448;

let connect1449 = browser.currentScene.createNode("connect");
connect1449.nodeField = "value_changed";
connect1449.protoField = "r_thumb1_changed";
IS1446.connect[2] = connect1449;

OrientationInterpolator1445.iS = IS1446;

ProtoBody586.children[282] = OrientationInterpolator1445;

let ROUTE1450 = browser.currentScene.createNode("ROUTE");
ROUTE1450.fromField = "fraction_changed";
ROUTE1450.fromNode = "BehaviorClock";
ROUTE1450.toField = "set_fraction";
ROUTE1450.toNode = "r_thumb1_OI";
ProtoBody586.children[283] = ROUTE1450;

let OrientationInterpolator1451 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1451.DEF = "r_thumb2_OI";
let IS1452 = browser.currentScene.createNode("IS");
let connect1453 = browser.currentScene.createNode("connect");
connect1453.nodeField = "key";
connect1453.protoField = "r_thumb2_key";
IS1452.connect = new MFNode();

IS1452.connect[0] = connect1453;

let connect1454 = browser.currentScene.createNode("connect");
connect1454.nodeField = "keyValue";
connect1454.protoField = "r_thumb2_keyValue";
IS1452.connect[1] = connect1454;

let connect1455 = browser.currentScene.createNode("connect");
connect1455.nodeField = "value_changed";
connect1455.protoField = "r_thumb2_changed";
IS1452.connect[2] = connect1455;

OrientationInterpolator1451.iS = IS1452;

ProtoBody586.children[284] = OrientationInterpolator1451;

let ROUTE1456 = browser.currentScene.createNode("ROUTE");
ROUTE1456.fromField = "fraction_changed";
ROUTE1456.fromNode = "BehaviorClock";
ROUTE1456.toField = "set_fraction";
ROUTE1456.toNode = "r_thumb2_OI";
ProtoBody586.children[285] = ROUTE1456;

let OrientationInterpolator1457 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1457.DEF = "r_thumb3_OI";
let IS1458 = browser.currentScene.createNode("IS");
let connect1459 = browser.currentScene.createNode("connect");
connect1459.nodeField = "key";
connect1459.protoField = "r_thumb3_key";
IS1458.connect = new MFNode();

IS1458.connect[0] = connect1459;

let connect1460 = browser.currentScene.createNode("connect");
connect1460.nodeField = "keyValue";
connect1460.protoField = "r_thumb3_keyValue";
IS1458.connect[1] = connect1460;

let connect1461 = browser.currentScene.createNode("connect");
connect1461.nodeField = "value_changed";
connect1461.protoField = "r_thumb3_changed";
IS1458.connect[2] = connect1461;

OrientationInterpolator1457.iS = IS1458;

ProtoBody586.children[286] = OrientationInterpolator1457;

let ROUTE1462 = browser.currentScene.createNode("ROUTE");
ROUTE1462.fromField = "fraction_changed";
ROUTE1462.fromNode = "BehaviorClock";
ROUTE1462.toField = "set_fraction";
ROUTE1462.toNode = "r_thumb3_OI";
ProtoBody586.children[287] = ROUTE1462;

let OrientationInterpolator1463 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1463.DEF = "r_thumb_distal_OI";
let IS1464 = browser.currentScene.createNode("IS");
let connect1465 = browser.currentScene.createNode("connect");
connect1465.nodeField = "key";
connect1465.protoField = "r_thumb_distal_key";
IS1464.connect = new MFNode();

IS1464.connect[0] = connect1465;

let connect1466 = browser.currentScene.createNode("connect");
connect1466.nodeField = "keyValue";
connect1466.protoField = "r_thumb_distal_keyValue";
IS1464.connect[1] = connect1466;

let connect1467 = browser.currentScene.createNode("connect");
connect1467.nodeField = "value_changed";
connect1467.protoField = "r_thumb_distal_changed";
IS1464.connect[2] = connect1467;

OrientationInterpolator1463.iS = IS1464;

ProtoBody586.children[288] = OrientationInterpolator1463;

let ROUTE1468 = browser.currentScene.createNode("ROUTE");
ROUTE1468.fromField = "fraction_changed";
ROUTE1468.fromNode = "BehaviorClock";
ROUTE1468.toField = "set_fraction";
ROUTE1468.toNode = "r_thumb_distal_OI";
ProtoBody586.children[289] = ROUTE1468;

let OrientationInterpolator1469 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1469.DEF = "r_thumb_metacarpal_OI";
let IS1470 = browser.currentScene.createNode("IS");
let connect1471 = browser.currentScene.createNode("connect");
connect1471.nodeField = "key";
connect1471.protoField = "r_thumb_metacarpal_key";
IS1470.connect = new MFNode();

IS1470.connect[0] = connect1471;

let connect1472 = browser.currentScene.createNode("connect");
connect1472.nodeField = "keyValue";
connect1472.protoField = "r_thumb_metacarpal_keyValue";
IS1470.connect[1] = connect1472;

let connect1473 = browser.currentScene.createNode("connect");
connect1473.nodeField = "value_changed";
connect1473.protoField = "r_thumb_metacarpal_changed";
IS1470.connect[2] = connect1473;

OrientationInterpolator1469.iS = IS1470;

ProtoBody586.children[290] = OrientationInterpolator1469;

let ROUTE1474 = browser.currentScene.createNode("ROUTE");
ROUTE1474.fromField = "fraction_changed";
ROUTE1474.fromNode = "BehaviorClock";
ROUTE1474.toField = "set_fraction";
ROUTE1474.toNode = "r_thumb_metacarpal_OI";
ProtoBody586.children[291] = ROUTE1474;

let OrientationInterpolator1475 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1475.DEF = "r_thumb_proximal_OI";
let IS1476 = browser.currentScene.createNode("IS");
let connect1477 = browser.currentScene.createNode("connect");
connect1477.nodeField = "key";
connect1477.protoField = "r_thumb_proximal_key";
IS1476.connect = new MFNode();

IS1476.connect[0] = connect1477;

let connect1478 = browser.currentScene.createNode("connect");
connect1478.nodeField = "keyValue";
connect1478.protoField = "r_thumb_proximal_keyValue";
IS1476.connect[1] = connect1478;

let connect1479 = browser.currentScene.createNode("connect");
connect1479.nodeField = "value_changed";
connect1479.protoField = "r_thumb_proximal_changed";
IS1476.connect[2] = connect1479;

OrientationInterpolator1475.iS = IS1476;

ProtoBody586.children[292] = OrientationInterpolator1475;

let ROUTE1480 = browser.currentScene.createNode("ROUTE");
ROUTE1480.fromField = "fraction_changed";
ROUTE1480.fromNode = "BehaviorClock";
ROUTE1480.toField = "set_fraction";
ROUTE1480.toNode = "r_thumb_proximal_OI";
ProtoBody586.children[293] = ROUTE1480;

let OrientationInterpolator1481 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1481.DEF = "r_upperarm_OI";
let IS1482 = browser.currentScene.createNode("IS");
let connect1483 = browser.currentScene.createNode("connect");
connect1483.nodeField = "key";
connect1483.protoField = "r_upperarm_key";
IS1482.connect = new MFNode();

IS1482.connect[0] = connect1483;

let connect1484 = browser.currentScene.createNode("connect");
connect1484.nodeField = "keyValue";
connect1484.protoField = "r_upperarm_keyValue";
IS1482.connect[1] = connect1484;

let connect1485 = browser.currentScene.createNode("connect");
connect1485.nodeField = "value_changed";
connect1485.protoField = "r_upperarm_changed";
IS1482.connect[2] = connect1485;

OrientationInterpolator1481.iS = IS1482;

ProtoBody586.children[294] = OrientationInterpolator1481;

let ROUTE1486 = browser.currentScene.createNode("ROUTE");
ROUTE1486.fromField = "fraction_changed";
ROUTE1486.fromNode = "BehaviorClock";
ROUTE1486.toField = "set_fraction";
ROUTE1486.toNode = "r_upperarm_OI";
ProtoBody586.children[295] = ROUTE1486;

let OrientationInterpolator1487 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1487.DEF = "r_wrist_OI";
let IS1488 = browser.currentScene.createNode("IS");
let connect1489 = browser.currentScene.createNode("connect");
connect1489.nodeField = "key";
connect1489.protoField = "r_wrist_key";
IS1488.connect = new MFNode();

IS1488.connect[0] = connect1489;

let connect1490 = browser.currentScene.createNode("connect");
connect1490.nodeField = "keyValue";
connect1490.protoField = "r_wrist_keyValue";
IS1488.connect[1] = connect1490;

let connect1491 = browser.currentScene.createNode("connect");
connect1491.nodeField = "value_changed";
connect1491.protoField = "r_wrist_changed";
IS1488.connect[2] = connect1491;

OrientationInterpolator1487.iS = IS1488;

ProtoBody586.children[296] = OrientationInterpolator1487;

let ROUTE1492 = browser.currentScene.createNode("ROUTE");
ROUTE1492.fromField = "fraction_changed";
ROUTE1492.fromNode = "BehaviorClock";
ROUTE1492.toField = "set_fraction";
ROUTE1492.toNode = "r_wrist_OI";
ProtoBody586.children[297] = ROUTE1492;

let OrientationInterpolator1493 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1493.DEF = "sacroiliac_OI";
let IS1494 = browser.currentScene.createNode("IS");
let connect1495 = browser.currentScene.createNode("connect");
connect1495.nodeField = "key";
connect1495.protoField = "sacroiliac_key";
IS1494.connect = new MFNode();

IS1494.connect[0] = connect1495;

let connect1496 = browser.currentScene.createNode("connect");
connect1496.nodeField = "keyValue";
connect1496.protoField = "sacroiliac_keyValue";
IS1494.connect[1] = connect1496;

let connect1497 = browser.currentScene.createNode("connect");
connect1497.nodeField = "value_changed";
connect1497.protoField = "sacroiliac_changed";
IS1494.connect[2] = connect1497;

OrientationInterpolator1493.iS = IS1494;

ProtoBody586.children[298] = OrientationInterpolator1493;

let ROUTE1498 = browser.currentScene.createNode("ROUTE");
ROUTE1498.fromField = "fraction_changed";
ROUTE1498.fromNode = "BehaviorClock";
ROUTE1498.toField = "set_fraction";
ROUTE1498.toNode = "sacroiliac_OI";
ProtoBody586.children[299] = ROUTE1498;

let OrientationInterpolator1499 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1499.DEF = "sacrum_OI";
let IS1500 = browser.currentScene.createNode("IS");
let connect1501 = browser.currentScene.createNode("connect");
connect1501.nodeField = "key";
connect1501.protoField = "sacrum_key";
IS1500.connect = new MFNode();

IS1500.connect[0] = connect1501;

let connect1502 = browser.currentScene.createNode("connect");
connect1502.nodeField = "keyValue";
connect1502.protoField = "sacrum_keyValue";
IS1500.connect[1] = connect1502;

let connect1503 = browser.currentScene.createNode("connect");
connect1503.nodeField = "value_changed";
connect1503.protoField = "sacrum_changed";
IS1500.connect[2] = connect1503;

OrientationInterpolator1499.iS = IS1500;

ProtoBody586.children[300] = OrientationInterpolator1499;

let ROUTE1504 = browser.currentScene.createNode("ROUTE");
ROUTE1504.fromField = "fraction_changed";
ROUTE1504.fromNode = "BehaviorClock";
ROUTE1504.toField = "set_fraction";
ROUTE1504.toNode = "sacrum_OI";
ProtoBody586.children[301] = ROUTE1504;

let OrientationInterpolator1505 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1505.DEF = "skull_OI";
let IS1506 = browser.currentScene.createNode("IS");
let connect1507 = browser.currentScene.createNode("connect");
connect1507.nodeField = "key";
connect1507.protoField = "skull_key";
IS1506.connect = new MFNode();

IS1506.connect[0] = connect1507;

let connect1508 = browser.currentScene.createNode("connect");
connect1508.nodeField = "keyValue";
connect1508.protoField = "skull_keyValue";
IS1506.connect[1] = connect1508;

let connect1509 = browser.currentScene.createNode("connect");
connect1509.nodeField = "value_changed";
connect1509.protoField = "skull_changed";
IS1506.connect[2] = connect1509;

OrientationInterpolator1505.iS = IS1506;

ProtoBody586.children[302] = OrientationInterpolator1505;

let ROUTE1510 = browser.currentScene.createNode("ROUTE");
ROUTE1510.fromField = "fraction_changed";
ROUTE1510.fromNode = "BehaviorClock";
ROUTE1510.toField = "set_fraction";
ROUTE1510.toNode = "skull_OI";
ProtoBody586.children[303] = ROUTE1510;

let OrientationInterpolator1511 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1511.DEF = "skullbase_OI";
let IS1512 = browser.currentScene.createNode("IS");
let connect1513 = browser.currentScene.createNode("connect");
connect1513.nodeField = "key";
connect1513.protoField = "skullbase_key";
IS1512.connect = new MFNode();

IS1512.connect[0] = connect1513;

let connect1514 = browser.currentScene.createNode("connect");
connect1514.nodeField = "keyValue";
connect1514.protoField = "skullbase_keyValue";
IS1512.connect[1] = connect1514;

let connect1515 = browser.currentScene.createNode("connect");
connect1515.nodeField = "value_changed";
connect1515.protoField = "skullbase_changed";
IS1512.connect[2] = connect1515;

OrientationInterpolator1511.iS = IS1512;

ProtoBody586.children[304] = OrientationInterpolator1511;

let ROUTE1516 = browser.currentScene.createNode("ROUTE");
ROUTE1516.fromField = "fraction_changed";
ROUTE1516.fromNode = "BehaviorClock";
ROUTE1516.toField = "set_fraction";
ROUTE1516.toNode = "skullbase_OI";
ProtoBody586.children[305] = ROUTE1516;

let OrientationInterpolator1517 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1517.DEF = "t1_OI";
let IS1518 = browser.currentScene.createNode("IS");
let connect1519 = browser.currentScene.createNode("connect");
connect1519.nodeField = "key";
connect1519.protoField = "t1_key";
IS1518.connect = new MFNode();

IS1518.connect[0] = connect1519;

let connect1520 = browser.currentScene.createNode("connect");
connect1520.nodeField = "keyValue";
connect1520.protoField = "t1_keyValue";
IS1518.connect[1] = connect1520;

let connect1521 = browser.currentScene.createNode("connect");
connect1521.nodeField = "value_changed";
connect1521.protoField = "t1_changed";
IS1518.connect[2] = connect1521;

OrientationInterpolator1517.iS = IS1518;

ProtoBody586.children[306] = OrientationInterpolator1517;

let ROUTE1522 = browser.currentScene.createNode("ROUTE");
ROUTE1522.fromField = "fraction_changed";
ROUTE1522.fromNode = "BehaviorClock";
ROUTE1522.toField = "set_fraction";
ROUTE1522.toNode = "t1_OI";
ProtoBody586.children[307] = ROUTE1522;

let OrientationInterpolator1523 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1523.DEF = "t2_OI";
let IS1524 = browser.currentScene.createNode("IS");
let connect1525 = browser.currentScene.createNode("connect");
connect1525.nodeField = "key";
connect1525.protoField = "t2_key";
IS1524.connect = new MFNode();

IS1524.connect[0] = connect1525;

let connect1526 = browser.currentScene.createNode("connect");
connect1526.nodeField = "keyValue";
connect1526.protoField = "t2_keyValue";
IS1524.connect[1] = connect1526;

let connect1527 = browser.currentScene.createNode("connect");
connect1527.nodeField = "value_changed";
connect1527.protoField = "t2_changed";
IS1524.connect[2] = connect1527;

OrientationInterpolator1523.iS = IS1524;

ProtoBody586.children[308] = OrientationInterpolator1523;

let ROUTE1528 = browser.currentScene.createNode("ROUTE");
ROUTE1528.fromField = "fraction_changed";
ROUTE1528.fromNode = "BehaviorClock";
ROUTE1528.toField = "set_fraction";
ROUTE1528.toNode = "t2_OI";
ProtoBody586.children[309] = ROUTE1528;

let OrientationInterpolator1529 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1529.DEF = "t3_OI";
let IS1530 = browser.currentScene.createNode("IS");
let connect1531 = browser.currentScene.createNode("connect");
connect1531.nodeField = "key";
connect1531.protoField = "t3_key";
IS1530.connect = new MFNode();

IS1530.connect[0] = connect1531;

let connect1532 = browser.currentScene.createNode("connect");
connect1532.nodeField = "keyValue";
connect1532.protoField = "t3_keyValue";
IS1530.connect[1] = connect1532;

let connect1533 = browser.currentScene.createNode("connect");
connect1533.nodeField = "value_changed";
connect1533.protoField = "t3_changed";
IS1530.connect[2] = connect1533;

OrientationInterpolator1529.iS = IS1530;

ProtoBody586.children[310] = OrientationInterpolator1529;

let ROUTE1534 = browser.currentScene.createNode("ROUTE");
ROUTE1534.fromField = "fraction_changed";
ROUTE1534.fromNode = "BehaviorClock";
ROUTE1534.toField = "set_fraction";
ROUTE1534.toNode = "t3_OI";
ProtoBody586.children[311] = ROUTE1534;

let OrientationInterpolator1535 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1535.DEF = "t4_OI";
let IS1536 = browser.currentScene.createNode("IS");
let connect1537 = browser.currentScene.createNode("connect");
connect1537.nodeField = "key";
connect1537.protoField = "t4_key";
IS1536.connect = new MFNode();

IS1536.connect[0] = connect1537;

let connect1538 = browser.currentScene.createNode("connect");
connect1538.nodeField = "keyValue";
connect1538.protoField = "t4_keyValue";
IS1536.connect[1] = connect1538;

let connect1539 = browser.currentScene.createNode("connect");
connect1539.nodeField = "value_changed";
connect1539.protoField = "t4_changed";
IS1536.connect[2] = connect1539;

OrientationInterpolator1535.iS = IS1536;

ProtoBody586.children[312] = OrientationInterpolator1535;

let ROUTE1540 = browser.currentScene.createNode("ROUTE");
ROUTE1540.fromField = "fraction_changed";
ROUTE1540.fromNode = "BehaviorClock";
ROUTE1540.toField = "set_fraction";
ROUTE1540.toNode = "t4_OI";
ProtoBody586.children[313] = ROUTE1540;

let OrientationInterpolator1541 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1541.DEF = "t5_OI";
let IS1542 = browser.currentScene.createNode("IS");
let connect1543 = browser.currentScene.createNode("connect");
connect1543.nodeField = "key";
connect1543.protoField = "t5_key";
IS1542.connect = new MFNode();

IS1542.connect[0] = connect1543;

let connect1544 = browser.currentScene.createNode("connect");
connect1544.nodeField = "keyValue";
connect1544.protoField = "t5_keyValue";
IS1542.connect[1] = connect1544;

let connect1545 = browser.currentScene.createNode("connect");
connect1545.nodeField = "value_changed";
connect1545.protoField = "t5_changed";
IS1542.connect[2] = connect1545;

OrientationInterpolator1541.iS = IS1542;

ProtoBody586.children[314] = OrientationInterpolator1541;

let ROUTE1546 = browser.currentScene.createNode("ROUTE");
ROUTE1546.fromField = "fraction_changed";
ROUTE1546.fromNode = "BehaviorClock";
ROUTE1546.toField = "set_fraction";
ROUTE1546.toNode = "t5_OI";
ProtoBody586.children[315] = ROUTE1546;

let OrientationInterpolator1547 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1547.DEF = "t6_OI";
let IS1548 = browser.currentScene.createNode("IS");
let connect1549 = browser.currentScene.createNode("connect");
connect1549.nodeField = "key";
connect1549.protoField = "t6_key";
IS1548.connect = new MFNode();

IS1548.connect[0] = connect1549;

let connect1550 = browser.currentScene.createNode("connect");
connect1550.nodeField = "keyValue";
connect1550.protoField = "t6_keyValue";
IS1548.connect[1] = connect1550;

let connect1551 = browser.currentScene.createNode("connect");
connect1551.nodeField = "value_changed";
connect1551.protoField = "t6_changed";
IS1548.connect[2] = connect1551;

OrientationInterpolator1547.iS = IS1548;

ProtoBody586.children[316] = OrientationInterpolator1547;

let ROUTE1552 = browser.currentScene.createNode("ROUTE");
ROUTE1552.fromField = "fraction_changed";
ROUTE1552.fromNode = "BehaviorClock";
ROUTE1552.toField = "set_fraction";
ROUTE1552.toNode = "t6_OI";
ProtoBody586.children[317] = ROUTE1552;

let OrientationInterpolator1553 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1553.DEF = "t7_OI";
let IS1554 = browser.currentScene.createNode("IS");
let connect1555 = browser.currentScene.createNode("connect");
connect1555.nodeField = "key";
connect1555.protoField = "t7_key";
IS1554.connect = new MFNode();

IS1554.connect[0] = connect1555;

let connect1556 = browser.currentScene.createNode("connect");
connect1556.nodeField = "keyValue";
connect1556.protoField = "t7_keyValue";
IS1554.connect[1] = connect1556;

let connect1557 = browser.currentScene.createNode("connect");
connect1557.nodeField = "value_changed";
connect1557.protoField = "t7_changed";
IS1554.connect[2] = connect1557;

OrientationInterpolator1553.iS = IS1554;

ProtoBody586.children[318] = OrientationInterpolator1553;

let ROUTE1558 = browser.currentScene.createNode("ROUTE");
ROUTE1558.fromField = "fraction_changed";
ROUTE1558.fromNode = "BehaviorClock";
ROUTE1558.toField = "set_fraction";
ROUTE1558.toNode = "t7_OI";
ProtoBody586.children[319] = ROUTE1558;

let OrientationInterpolator1559 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1559.DEF = "t8_OI";
let IS1560 = browser.currentScene.createNode("IS");
let connect1561 = browser.currentScene.createNode("connect");
connect1561.nodeField = "key";
connect1561.protoField = "t8_key";
IS1560.connect = new MFNode();

IS1560.connect[0] = connect1561;

let connect1562 = browser.currentScene.createNode("connect");
connect1562.nodeField = "keyValue";
connect1562.protoField = "t8_keyValue";
IS1560.connect[1] = connect1562;

let connect1563 = browser.currentScene.createNode("connect");
connect1563.nodeField = "value_changed";
connect1563.protoField = "t8_changed";
IS1560.connect[2] = connect1563;

OrientationInterpolator1559.iS = IS1560;

ProtoBody586.children[320] = OrientationInterpolator1559;

let ROUTE1564 = browser.currentScene.createNode("ROUTE");
ROUTE1564.fromField = "fraction_changed";
ROUTE1564.fromNode = "BehaviorClock";
ROUTE1564.toField = "set_fraction";
ROUTE1564.toNode = "t8_OI";
ProtoBody586.children[321] = ROUTE1564;

let OrientationInterpolator1565 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1565.DEF = "t9_OI";
let IS1566 = browser.currentScene.createNode("IS");
let connect1567 = browser.currentScene.createNode("connect");
connect1567.nodeField = "key";
connect1567.protoField = "t9_key";
IS1566.connect = new MFNode();

IS1566.connect[0] = connect1567;

let connect1568 = browser.currentScene.createNode("connect");
connect1568.nodeField = "keyValue";
connect1568.protoField = "t9_keyValue";
IS1566.connect[1] = connect1568;

let connect1569 = browser.currentScene.createNode("connect");
connect1569.nodeField = "value_changed";
connect1569.protoField = "t9_changed";
IS1566.connect[2] = connect1569;

OrientationInterpolator1565.iS = IS1566;

ProtoBody586.children[322] = OrientationInterpolator1565;

let ROUTE1570 = browser.currentScene.createNode("ROUTE");
ROUTE1570.fromField = "fraction_changed";
ROUTE1570.fromNode = "BehaviorClock";
ROUTE1570.toField = "set_fraction";
ROUTE1570.toNode = "t9_OI";
ProtoBody586.children[323] = ROUTE1570;

let OrientationInterpolator1571 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1571.DEF = "t10_OI";
let IS1572 = browser.currentScene.createNode("IS");
let connect1573 = browser.currentScene.createNode("connect");
connect1573.nodeField = "key";
connect1573.protoField = "t10_key";
IS1572.connect = new MFNode();

IS1572.connect[0] = connect1573;

let connect1574 = browser.currentScene.createNode("connect");
connect1574.nodeField = "keyValue";
connect1574.protoField = "t10_keyValue";
IS1572.connect[1] = connect1574;

let connect1575 = browser.currentScene.createNode("connect");
connect1575.nodeField = "value_changed";
connect1575.protoField = "t10_changed";
IS1572.connect[2] = connect1575;

OrientationInterpolator1571.iS = IS1572;

ProtoBody586.children[324] = OrientationInterpolator1571;

let ROUTE1576 = browser.currentScene.createNode("ROUTE");
ROUTE1576.fromField = "fraction_changed";
ROUTE1576.fromNode = "BehaviorClock";
ROUTE1576.toField = "set_fraction";
ROUTE1576.toNode = "t10_OI";
ProtoBody586.children[325] = ROUTE1576;

let OrientationInterpolator1577 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1577.DEF = "t11_OI";
let IS1578 = browser.currentScene.createNode("IS");
let connect1579 = browser.currentScene.createNode("connect");
connect1579.nodeField = "key";
connect1579.protoField = "t11_key";
IS1578.connect = new MFNode();

IS1578.connect[0] = connect1579;

let connect1580 = browser.currentScene.createNode("connect");
connect1580.nodeField = "keyValue";
connect1580.protoField = "t11_keyValue";
IS1578.connect[1] = connect1580;

let connect1581 = browser.currentScene.createNode("connect");
connect1581.nodeField = "value_changed";
connect1581.protoField = "t11_changed";
IS1578.connect[2] = connect1581;

OrientationInterpolator1577.iS = IS1578;

ProtoBody586.children[326] = OrientationInterpolator1577;

let ROUTE1582 = browser.currentScene.createNode("ROUTE");
ROUTE1582.fromField = "fraction_changed";
ROUTE1582.fromNode = "BehaviorClock";
ROUTE1582.toField = "set_fraction";
ROUTE1582.toNode = "t11_OI";
ProtoBody586.children[327] = ROUTE1582;

let OrientationInterpolator1583 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1583.DEF = "t12_OI";
let IS1584 = browser.currentScene.createNode("IS");
let connect1585 = browser.currentScene.createNode("connect");
connect1585.nodeField = "key";
connect1585.protoField = "t12_key";
IS1584.connect = new MFNode();

IS1584.connect[0] = connect1585;

let connect1586 = browser.currentScene.createNode("connect");
connect1586.nodeField = "keyValue";
connect1586.protoField = "t12_keyValue";
IS1584.connect[1] = connect1586;

let connect1587 = browser.currentScene.createNode("connect");
connect1587.nodeField = "value_changed";
connect1587.protoField = "t12_changed";
IS1584.connect[2] = connect1587;

OrientationInterpolator1583.iS = IS1584;

ProtoBody586.children[328] = OrientationInterpolator1583;

let ROUTE1588 = browser.currentScene.createNode("ROUTE");
ROUTE1588.fromField = "fraction_changed";
ROUTE1588.fromNode = "BehaviorClock";
ROUTE1588.toField = "set_fraction";
ROUTE1588.toNode = "t12_OI";
ProtoBody586.children[329] = ROUTE1588;

let OrientationInterpolator1589 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1589.DEF = "temporomandibular_OI";
let IS1590 = browser.currentScene.createNode("IS");
let connect1591 = browser.currentScene.createNode("connect");
connect1591.nodeField = "key";
connect1591.protoField = "temporomandibular_key";
IS1590.connect = new MFNode();

IS1590.connect[0] = connect1591;

let connect1592 = browser.currentScene.createNode("connect");
connect1592.nodeField = "keyValue";
connect1592.protoField = "temporomandibular_keyValue";
IS1590.connect[1] = connect1592;

let connect1593 = browser.currentScene.createNode("connect");
connect1593.nodeField = "value_changed";
connect1593.protoField = "temporomandibular_changed";
IS1590.connect[2] = connect1593;

OrientationInterpolator1589.iS = IS1590;

ProtoBody586.children[330] = OrientationInterpolator1589;

let ROUTE1594 = browser.currentScene.createNode("ROUTE");
ROUTE1594.fromField = "fraction_changed";
ROUTE1594.fromNode = "BehaviorClock";
ROUTE1594.toField = "set_fraction";
ROUTE1594.toNode = "temporomandibular_OI";
ProtoBody586.children[331] = ROUTE1594;

let OrientationInterpolator1595 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1595.DEF = "vc1_OI";
let IS1596 = browser.currentScene.createNode("IS");
let connect1597 = browser.currentScene.createNode("connect");
connect1597.nodeField = "key";
connect1597.protoField = "vc1_key";
IS1596.connect = new MFNode();

IS1596.connect[0] = connect1597;

let connect1598 = browser.currentScene.createNode("connect");
connect1598.nodeField = "keyValue";
connect1598.protoField = "vc1_keyValue";
IS1596.connect[1] = connect1598;

let connect1599 = browser.currentScene.createNode("connect");
connect1599.nodeField = "value_changed";
connect1599.protoField = "vc1_changed";
IS1596.connect[2] = connect1599;

OrientationInterpolator1595.iS = IS1596;

ProtoBody586.children[332] = OrientationInterpolator1595;

let ROUTE1600 = browser.currentScene.createNode("ROUTE");
ROUTE1600.fromField = "fraction_changed";
ROUTE1600.fromNode = "BehaviorClock";
ROUTE1600.toField = "set_fraction";
ROUTE1600.toNode = "vc1_OI";
ProtoBody586.children[333] = ROUTE1600;

let OrientationInterpolator1601 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1601.DEF = "vc2_OI";
let IS1602 = browser.currentScene.createNode("IS");
let connect1603 = browser.currentScene.createNode("connect");
connect1603.nodeField = "key";
connect1603.protoField = "vc2_key";
IS1602.connect = new MFNode();

IS1602.connect[0] = connect1603;

let connect1604 = browser.currentScene.createNode("connect");
connect1604.nodeField = "keyValue";
connect1604.protoField = "vc2_keyValue";
IS1602.connect[1] = connect1604;

let connect1605 = browser.currentScene.createNode("connect");
connect1605.nodeField = "value_changed";
connect1605.protoField = "vc2_changed";
IS1602.connect[2] = connect1605;

OrientationInterpolator1601.iS = IS1602;

ProtoBody586.children[334] = OrientationInterpolator1601;

let ROUTE1606 = browser.currentScene.createNode("ROUTE");
ROUTE1606.fromField = "fraction_changed";
ROUTE1606.fromNode = "BehaviorClock";
ROUTE1606.toField = "set_fraction";
ROUTE1606.toNode = "vc2_OI";
ProtoBody586.children[335] = ROUTE1606;

let OrientationInterpolator1607 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1607.DEF = "vc3_OI";
let IS1608 = browser.currentScene.createNode("IS");
let connect1609 = browser.currentScene.createNode("connect");
connect1609.nodeField = "key";
connect1609.protoField = "vc3_key";
IS1608.connect = new MFNode();

IS1608.connect[0] = connect1609;

let connect1610 = browser.currentScene.createNode("connect");
connect1610.nodeField = "keyValue";
connect1610.protoField = "vc3_keyValue";
IS1608.connect[1] = connect1610;

let connect1611 = browser.currentScene.createNode("connect");
connect1611.nodeField = "value_changed";
connect1611.protoField = "vc3_changed";
IS1608.connect[2] = connect1611;

OrientationInterpolator1607.iS = IS1608;

ProtoBody586.children[336] = OrientationInterpolator1607;

let ROUTE1612 = browser.currentScene.createNode("ROUTE");
ROUTE1612.fromField = "fraction_changed";
ROUTE1612.fromNode = "BehaviorClock";
ROUTE1612.toField = "set_fraction";
ROUTE1612.toNode = "vc3_OI";
ProtoBody586.children[337] = ROUTE1612;

let OrientationInterpolator1613 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1613.DEF = "vc4_OI";
let IS1614 = browser.currentScene.createNode("IS");
let connect1615 = browser.currentScene.createNode("connect");
connect1615.nodeField = "key";
connect1615.protoField = "vc4_key";
IS1614.connect = new MFNode();

IS1614.connect[0] = connect1615;

let connect1616 = browser.currentScene.createNode("connect");
connect1616.nodeField = "keyValue";
connect1616.protoField = "vc4_keyValue";
IS1614.connect[1] = connect1616;

let connect1617 = browser.currentScene.createNode("connect");
connect1617.nodeField = "value_changed";
connect1617.protoField = "vc4_changed";
IS1614.connect[2] = connect1617;

OrientationInterpolator1613.iS = IS1614;

ProtoBody586.children[338] = OrientationInterpolator1613;

let ROUTE1618 = browser.currentScene.createNode("ROUTE");
ROUTE1618.fromField = "fraction_changed";
ROUTE1618.fromNode = "BehaviorClock";
ROUTE1618.toField = "set_fraction";
ROUTE1618.toNode = "vc4_OI";
ProtoBody586.children[339] = ROUTE1618;

let OrientationInterpolator1619 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1619.DEF = "vc5_OI";
let IS1620 = browser.currentScene.createNode("IS");
let connect1621 = browser.currentScene.createNode("connect");
connect1621.nodeField = "key";
connect1621.protoField = "vc5_key";
IS1620.connect = new MFNode();

IS1620.connect[0] = connect1621;

let connect1622 = browser.currentScene.createNode("connect");
connect1622.nodeField = "keyValue";
connect1622.protoField = "vc5_keyValue";
IS1620.connect[1] = connect1622;

let connect1623 = browser.currentScene.createNode("connect");
connect1623.nodeField = "value_changed";
connect1623.protoField = "vc5_changed";
IS1620.connect[2] = connect1623;

OrientationInterpolator1619.iS = IS1620;

ProtoBody586.children[340] = OrientationInterpolator1619;

let ROUTE1624 = browser.currentScene.createNode("ROUTE");
ROUTE1624.fromField = "fraction_changed";
ROUTE1624.fromNode = "BehaviorClock";
ROUTE1624.toField = "set_fraction";
ROUTE1624.toNode = "vc5_OI";
ProtoBody586.children[341] = ROUTE1624;

let OrientationInterpolator1625 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1625.DEF = "vc6_OI";
let IS1626 = browser.currentScene.createNode("IS");
let connect1627 = browser.currentScene.createNode("connect");
connect1627.nodeField = "key";
connect1627.protoField = "vc6_key";
IS1626.connect = new MFNode();

IS1626.connect[0] = connect1627;

let connect1628 = browser.currentScene.createNode("connect");
connect1628.nodeField = "keyValue";
connect1628.protoField = "vc6_keyValue";
IS1626.connect[1] = connect1628;

let connect1629 = browser.currentScene.createNode("connect");
connect1629.nodeField = "value_changed";
connect1629.protoField = "vc6_changed";
IS1626.connect[2] = connect1629;

OrientationInterpolator1625.iS = IS1626;

ProtoBody586.children[342] = OrientationInterpolator1625;

let ROUTE1630 = browser.currentScene.createNode("ROUTE");
ROUTE1630.fromField = "fraction_changed";
ROUTE1630.fromNode = "BehaviorClock";
ROUTE1630.toField = "set_fraction";
ROUTE1630.toNode = "vc6_OI";
ProtoBody586.children[343] = ROUTE1630;

let OrientationInterpolator1631 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1631.DEF = "vc7_OI";
let IS1632 = browser.currentScene.createNode("IS");
let connect1633 = browser.currentScene.createNode("connect");
connect1633.nodeField = "key";
connect1633.protoField = "vc7_key";
IS1632.connect = new MFNode();

IS1632.connect[0] = connect1633;

let connect1634 = browser.currentScene.createNode("connect");
connect1634.nodeField = "keyValue";
connect1634.protoField = "vc7_keyValue";
IS1632.connect[1] = connect1634;

let connect1635 = browser.currentScene.createNode("connect");
connect1635.nodeField = "value_changed";
connect1635.protoField = "vc7_changed";
IS1632.connect[2] = connect1635;

OrientationInterpolator1631.iS = IS1632;

ProtoBody586.children[344] = OrientationInterpolator1631;

let ROUTE1636 = browser.currentScene.createNode("ROUTE");
ROUTE1636.fromField = "fraction_changed";
ROUTE1636.fromNode = "BehaviorClock";
ROUTE1636.toField = "set_fraction";
ROUTE1636.toNode = "vc7_OI";
ProtoBody586.children[345] = ROUTE1636;

let OrientationInterpolator1637 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1637.DEF = "vl1_OI";
let IS1638 = browser.currentScene.createNode("IS");
let connect1639 = browser.currentScene.createNode("connect");
connect1639.nodeField = "key";
connect1639.protoField = "vl1_key";
IS1638.connect = new MFNode();

IS1638.connect[0] = connect1639;

let connect1640 = browser.currentScene.createNode("connect");
connect1640.nodeField = "keyValue";
connect1640.protoField = "vl1_keyValue";
IS1638.connect[1] = connect1640;

let connect1641 = browser.currentScene.createNode("connect");
connect1641.nodeField = "value_changed";
connect1641.protoField = "vl1_changed";
IS1638.connect[2] = connect1641;

OrientationInterpolator1637.iS = IS1638;

ProtoBody586.children[346] = OrientationInterpolator1637;

let ROUTE1642 = browser.currentScene.createNode("ROUTE");
ROUTE1642.fromField = "fraction_changed";
ROUTE1642.fromNode = "BehaviorClock";
ROUTE1642.toField = "set_fraction";
ROUTE1642.toNode = "vl1_OI";
ProtoBody586.children[347] = ROUTE1642;

let OrientationInterpolator1643 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1643.DEF = "vl2_OI";
let IS1644 = browser.currentScene.createNode("IS");
let connect1645 = browser.currentScene.createNode("connect");
connect1645.nodeField = "key";
connect1645.protoField = "vl2_key";
IS1644.connect = new MFNode();

IS1644.connect[0] = connect1645;

let connect1646 = browser.currentScene.createNode("connect");
connect1646.nodeField = "keyValue";
connect1646.protoField = "vl2_keyValue";
IS1644.connect[1] = connect1646;

let connect1647 = browser.currentScene.createNode("connect");
connect1647.nodeField = "value_changed";
connect1647.protoField = "vl2_changed";
IS1644.connect[2] = connect1647;

OrientationInterpolator1643.iS = IS1644;

ProtoBody586.children[348] = OrientationInterpolator1643;

let ROUTE1648 = browser.currentScene.createNode("ROUTE");
ROUTE1648.fromField = "fraction_changed";
ROUTE1648.fromNode = "BehaviorClock";
ROUTE1648.toField = "set_fraction";
ROUTE1648.toNode = "vl2_OI";
ProtoBody586.children[349] = ROUTE1648;

let OrientationInterpolator1649 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1649.DEF = "vl3_OI";
let IS1650 = browser.currentScene.createNode("IS");
let connect1651 = browser.currentScene.createNode("connect");
connect1651.nodeField = "key";
connect1651.protoField = "vl3_key";
IS1650.connect = new MFNode();

IS1650.connect[0] = connect1651;

let connect1652 = browser.currentScene.createNode("connect");
connect1652.nodeField = "keyValue";
connect1652.protoField = "vl3_keyValue";
IS1650.connect[1] = connect1652;

let connect1653 = browser.currentScene.createNode("connect");
connect1653.nodeField = "value_changed";
connect1653.protoField = "vl3_changed";
IS1650.connect[2] = connect1653;

OrientationInterpolator1649.iS = IS1650;

ProtoBody586.children[350] = OrientationInterpolator1649;

let ROUTE1654 = browser.currentScene.createNode("ROUTE");
ROUTE1654.fromField = "fraction_changed";
ROUTE1654.fromNode = "BehaviorClock";
ROUTE1654.toField = "set_fraction";
ROUTE1654.toNode = "vl3_OI";
ProtoBody586.children[351] = ROUTE1654;

let OrientationInterpolator1655 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1655.DEF = "vl4_OI";
let IS1656 = browser.currentScene.createNode("IS");
let connect1657 = browser.currentScene.createNode("connect");
connect1657.nodeField = "key";
connect1657.protoField = "vl4_key";
IS1656.connect = new MFNode();

IS1656.connect[0] = connect1657;

let connect1658 = browser.currentScene.createNode("connect");
connect1658.nodeField = "keyValue";
connect1658.protoField = "vl4_keyValue";
IS1656.connect[1] = connect1658;

let connect1659 = browser.currentScene.createNode("connect");
connect1659.nodeField = "value_changed";
connect1659.protoField = "vl4_changed";
IS1656.connect[2] = connect1659;

OrientationInterpolator1655.iS = IS1656;

ProtoBody586.children[352] = OrientationInterpolator1655;

let ROUTE1660 = browser.currentScene.createNode("ROUTE");
ROUTE1660.fromField = "fraction_changed";
ROUTE1660.fromNode = "BehaviorClock";
ROUTE1660.toField = "set_fraction";
ROUTE1660.toNode = "vl4_OI";
ProtoBody586.children[353] = ROUTE1660;

let OrientationInterpolator1661 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1661.DEF = "vl5_OI";
let IS1662 = browser.currentScene.createNode("IS");
let connect1663 = browser.currentScene.createNode("connect");
connect1663.nodeField = "key";
connect1663.protoField = "vl5_key";
IS1662.connect = new MFNode();

IS1662.connect[0] = connect1663;

let connect1664 = browser.currentScene.createNode("connect");
connect1664.nodeField = "keyValue";
connect1664.protoField = "vl5_keyValue";
IS1662.connect[1] = connect1664;

let connect1665 = browser.currentScene.createNode("connect");
connect1665.nodeField = "value_changed";
connect1665.protoField = "vl5_changed";
IS1662.connect[2] = connect1665;

OrientationInterpolator1661.iS = IS1662;

ProtoBody586.children[354] = OrientationInterpolator1661;

let ROUTE1666 = browser.currentScene.createNode("ROUTE");
ROUTE1666.fromField = "fraction_changed";
ROUTE1666.fromNode = "BehaviorClock";
ROUTE1666.toField = "set_fraction";
ROUTE1666.toNode = "vl5_OI";
ProtoBody586.children[355] = ROUTE1666;

let OrientationInterpolator1667 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1667.DEF = "vt1_OI";
let IS1668 = browser.currentScene.createNode("IS");
let connect1669 = browser.currentScene.createNode("connect");
connect1669.nodeField = "key";
connect1669.protoField = "vt1_key";
IS1668.connect = new MFNode();

IS1668.connect[0] = connect1669;

let connect1670 = browser.currentScene.createNode("connect");
connect1670.nodeField = "keyValue";
connect1670.protoField = "vt1_keyValue";
IS1668.connect[1] = connect1670;

let connect1671 = browser.currentScene.createNode("connect");
connect1671.nodeField = "value_changed";
connect1671.protoField = "vt1_changed";
IS1668.connect[2] = connect1671;

OrientationInterpolator1667.iS = IS1668;

ProtoBody586.children[356] = OrientationInterpolator1667;

let ROUTE1672 = browser.currentScene.createNode("ROUTE");
ROUTE1672.fromField = "fraction_changed";
ROUTE1672.fromNode = "BehaviorClock";
ROUTE1672.toField = "set_fraction";
ROUTE1672.toNode = "vt1_OI";
ProtoBody586.children[357] = ROUTE1672;

let OrientationInterpolator1673 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1673.DEF = "vt2_OI";
let IS1674 = browser.currentScene.createNode("IS");
let connect1675 = browser.currentScene.createNode("connect");
connect1675.nodeField = "key";
connect1675.protoField = "vt2_key";
IS1674.connect = new MFNode();

IS1674.connect[0] = connect1675;

let connect1676 = browser.currentScene.createNode("connect");
connect1676.nodeField = "keyValue";
connect1676.protoField = "vt2_keyValue";
IS1674.connect[1] = connect1676;

let connect1677 = browser.currentScene.createNode("connect");
connect1677.nodeField = "value_changed";
connect1677.protoField = "vt2_changed";
IS1674.connect[2] = connect1677;

OrientationInterpolator1673.iS = IS1674;

ProtoBody586.children[358] = OrientationInterpolator1673;

let ROUTE1678 = browser.currentScene.createNode("ROUTE");
ROUTE1678.fromField = "fraction_changed";
ROUTE1678.fromNode = "BehaviorClock";
ROUTE1678.toField = "set_fraction";
ROUTE1678.toNode = "vt2_OI";
ProtoBody586.children[359] = ROUTE1678;

let OrientationInterpolator1679 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1679.DEF = "vt3_OI";
let IS1680 = browser.currentScene.createNode("IS");
let connect1681 = browser.currentScene.createNode("connect");
connect1681.nodeField = "key";
connect1681.protoField = "vt3_key";
IS1680.connect = new MFNode();

IS1680.connect[0] = connect1681;

let connect1682 = browser.currentScene.createNode("connect");
connect1682.nodeField = "keyValue";
connect1682.protoField = "vt3_keyValue";
IS1680.connect[1] = connect1682;

let connect1683 = browser.currentScene.createNode("connect");
connect1683.nodeField = "value_changed";
connect1683.protoField = "vt3_changed";
IS1680.connect[2] = connect1683;

OrientationInterpolator1679.iS = IS1680;

ProtoBody586.children[360] = OrientationInterpolator1679;

let ROUTE1684 = browser.currentScene.createNode("ROUTE");
ROUTE1684.fromField = "fraction_changed";
ROUTE1684.fromNode = "BehaviorClock";
ROUTE1684.toField = "set_fraction";
ROUTE1684.toNode = "vt3_OI";
ProtoBody586.children[361] = ROUTE1684;

let OrientationInterpolator1685 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1685.DEF = "vt4_OI";
let IS1686 = browser.currentScene.createNode("IS");
let connect1687 = browser.currentScene.createNode("connect");
connect1687.nodeField = "key";
connect1687.protoField = "vt4_key";
IS1686.connect = new MFNode();

IS1686.connect[0] = connect1687;

let connect1688 = browser.currentScene.createNode("connect");
connect1688.nodeField = "keyValue";
connect1688.protoField = "vt4_keyValue";
IS1686.connect[1] = connect1688;

let connect1689 = browser.currentScene.createNode("connect");
connect1689.nodeField = "value_changed";
connect1689.protoField = "vt4_changed";
IS1686.connect[2] = connect1689;

OrientationInterpolator1685.iS = IS1686;

ProtoBody586.children[362] = OrientationInterpolator1685;

let ROUTE1690 = browser.currentScene.createNode("ROUTE");
ROUTE1690.fromField = "fraction_changed";
ROUTE1690.fromNode = "BehaviorClock";
ROUTE1690.toField = "set_fraction";
ROUTE1690.toNode = "vt4_OI";
ProtoBody586.children[363] = ROUTE1690;

let OrientationInterpolator1691 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1691.DEF = "vt5_OI";
let IS1692 = browser.currentScene.createNode("IS");
let connect1693 = browser.currentScene.createNode("connect");
connect1693.nodeField = "key";
connect1693.protoField = "vt5_key";
IS1692.connect = new MFNode();

IS1692.connect[0] = connect1693;

let connect1694 = browser.currentScene.createNode("connect");
connect1694.nodeField = "keyValue";
connect1694.protoField = "vt5_keyValue";
IS1692.connect[1] = connect1694;

let connect1695 = browser.currentScene.createNode("connect");
connect1695.nodeField = "value_changed";
connect1695.protoField = "vt5_changed";
IS1692.connect[2] = connect1695;

OrientationInterpolator1691.iS = IS1692;

ProtoBody586.children[364] = OrientationInterpolator1691;

let ROUTE1696 = browser.currentScene.createNode("ROUTE");
ROUTE1696.fromField = "fraction_changed";
ROUTE1696.fromNode = "BehaviorClock";
ROUTE1696.toField = "set_fraction";
ROUTE1696.toNode = "vt5_OI";
ProtoBody586.children[365] = ROUTE1696;

let OrientationInterpolator1697 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1697.DEF = "vt6_OI";
let IS1698 = browser.currentScene.createNode("IS");
let connect1699 = browser.currentScene.createNode("connect");
connect1699.nodeField = "key";
connect1699.protoField = "vt6_key";
IS1698.connect = new MFNode();

IS1698.connect[0] = connect1699;

let connect1700 = browser.currentScene.createNode("connect");
connect1700.nodeField = "keyValue";
connect1700.protoField = "vt6_keyValue";
IS1698.connect[1] = connect1700;

let connect1701 = browser.currentScene.createNode("connect");
connect1701.nodeField = "value_changed";
connect1701.protoField = "vt6_changed";
IS1698.connect[2] = connect1701;

OrientationInterpolator1697.iS = IS1698;

ProtoBody586.children[366] = OrientationInterpolator1697;

let ROUTE1702 = browser.currentScene.createNode("ROUTE");
ROUTE1702.fromField = "fraction_changed";
ROUTE1702.fromNode = "BehaviorClock";
ROUTE1702.toField = "set_fraction";
ROUTE1702.toNode = "vt6_OI";
ProtoBody586.children[367] = ROUTE1702;

let OrientationInterpolator1703 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1703.DEF = "vt7_OI";
let IS1704 = browser.currentScene.createNode("IS");
let connect1705 = browser.currentScene.createNode("connect");
connect1705.nodeField = "key";
connect1705.protoField = "vt7_key";
IS1704.connect = new MFNode();

IS1704.connect[0] = connect1705;

let connect1706 = browser.currentScene.createNode("connect");
connect1706.nodeField = "keyValue";
connect1706.protoField = "vt7_keyValue";
IS1704.connect[1] = connect1706;

let connect1707 = browser.currentScene.createNode("connect");
connect1707.nodeField = "value_changed";
connect1707.protoField = "vt7_changed";
IS1704.connect[2] = connect1707;

OrientationInterpolator1703.iS = IS1704;

ProtoBody586.children[368] = OrientationInterpolator1703;

let ROUTE1708 = browser.currentScene.createNode("ROUTE");
ROUTE1708.fromField = "fraction_changed";
ROUTE1708.fromNode = "BehaviorClock";
ROUTE1708.toField = "set_fraction";
ROUTE1708.toNode = "vt7_OI";
ProtoBody586.children[369] = ROUTE1708;

let OrientationInterpolator1709 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1709.DEF = "vt8_OI";
let IS1710 = browser.currentScene.createNode("IS");
let connect1711 = browser.currentScene.createNode("connect");
connect1711.nodeField = "key";
connect1711.protoField = "vt8_key";
IS1710.connect = new MFNode();

IS1710.connect[0] = connect1711;

let connect1712 = browser.currentScene.createNode("connect");
connect1712.nodeField = "keyValue";
connect1712.protoField = "vt8_keyValue";
IS1710.connect[1] = connect1712;

let connect1713 = browser.currentScene.createNode("connect");
connect1713.nodeField = "value_changed";
connect1713.protoField = "vt8_changed";
IS1710.connect[2] = connect1713;

OrientationInterpolator1709.iS = IS1710;

ProtoBody586.children[370] = OrientationInterpolator1709;

let ROUTE1714 = browser.currentScene.createNode("ROUTE");
ROUTE1714.fromField = "fraction_changed";
ROUTE1714.fromNode = "BehaviorClock";
ROUTE1714.toField = "set_fraction";
ROUTE1714.toNode = "vt8_OI";
ProtoBody586.children[371] = ROUTE1714;

let OrientationInterpolator1715 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1715.DEF = "vt9_OI";
let IS1716 = browser.currentScene.createNode("IS");
let connect1717 = browser.currentScene.createNode("connect");
connect1717.nodeField = "key";
connect1717.protoField = "vt9_key";
IS1716.connect = new MFNode();

IS1716.connect[0] = connect1717;

let connect1718 = browser.currentScene.createNode("connect");
connect1718.nodeField = "keyValue";
connect1718.protoField = "vt9_keyValue";
IS1716.connect[1] = connect1718;

let connect1719 = browser.currentScene.createNode("connect");
connect1719.nodeField = "value_changed";
connect1719.protoField = "vt9_changed";
IS1716.connect[2] = connect1719;

OrientationInterpolator1715.iS = IS1716;

ProtoBody586.children[372] = OrientationInterpolator1715;

let ROUTE1720 = browser.currentScene.createNode("ROUTE");
ROUTE1720.fromField = "fraction_changed";
ROUTE1720.fromNode = "BehaviorClock";
ROUTE1720.toField = "set_fraction";
ROUTE1720.toNode = "vt9_OI";
ProtoBody586.children[373] = ROUTE1720;

let OrientationInterpolator1721 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1721.DEF = "vt10_OI";
let IS1722 = browser.currentScene.createNode("IS");
let connect1723 = browser.currentScene.createNode("connect");
connect1723.nodeField = "key";
connect1723.protoField = "vt10_key";
IS1722.connect = new MFNode();

IS1722.connect[0] = connect1723;

let connect1724 = browser.currentScene.createNode("connect");
connect1724.nodeField = "keyValue";
connect1724.protoField = "vt10_keyValue";
IS1722.connect[1] = connect1724;

let connect1725 = browser.currentScene.createNode("connect");
connect1725.nodeField = "value_changed";
connect1725.protoField = "vt10_changed";
IS1722.connect[2] = connect1725;

OrientationInterpolator1721.iS = IS1722;

ProtoBody586.children[374] = OrientationInterpolator1721;

let ROUTE1726 = browser.currentScene.createNode("ROUTE");
ROUTE1726.fromField = "fraction_changed";
ROUTE1726.fromNode = "BehaviorClock";
ROUTE1726.toField = "set_fraction";
ROUTE1726.toNode = "vt10_OI";
ProtoBody586.children[375] = ROUTE1726;

let OrientationInterpolator1727 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1727.DEF = "vt11_OI";
let IS1728 = browser.currentScene.createNode("IS");
let connect1729 = browser.currentScene.createNode("connect");
connect1729.nodeField = "key";
connect1729.protoField = "vt11_key";
IS1728.connect = new MFNode();

IS1728.connect[0] = connect1729;

let connect1730 = browser.currentScene.createNode("connect");
connect1730.nodeField = "keyValue";
connect1730.protoField = "vt11_keyValue";
IS1728.connect[1] = connect1730;

let connect1731 = browser.currentScene.createNode("connect");
connect1731.nodeField = "value_changed";
connect1731.protoField = "vt11_changed";
IS1728.connect[2] = connect1731;

OrientationInterpolator1727.iS = IS1728;

ProtoBody586.children[376] = OrientationInterpolator1727;

let ROUTE1732 = browser.currentScene.createNode("ROUTE");
ROUTE1732.fromField = "fraction_changed";
ROUTE1732.fromNode = "BehaviorClock";
ROUTE1732.toField = "set_fraction";
ROUTE1732.toNode = "vt11_OI";
ProtoBody586.children[377] = ROUTE1732;

let OrientationInterpolator1733 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator1733.DEF = "vt12_OI";
let IS1734 = browser.currentScene.createNode("IS");
let connect1735 = browser.currentScene.createNode("connect");
connect1735.nodeField = "key";
connect1735.protoField = "vt12_key";
IS1734.connect = new MFNode();

IS1734.connect[0] = connect1735;

let connect1736 = browser.currentScene.createNode("connect");
connect1736.nodeField = "keyValue";
connect1736.protoField = "vt12_keyValue";
IS1734.connect[1] = connect1736;

let connect1737 = browser.currentScene.createNode("connect");
connect1737.nodeField = "value_changed";
connect1737.protoField = "vt12_changed";
IS1734.connect[2] = connect1737;

OrientationInterpolator1733.iS = IS1734;

ProtoBody586.children[378] = OrientationInterpolator1733;

let ROUTE1738 = browser.currentScene.createNode("ROUTE");
ROUTE1738.fromField = "fraction_changed";
ROUTE1738.fromNode = "BehaviorClock";
ROUTE1738.toField = "set_fraction";
ROUTE1738.toNode = "vt12_OI";
ProtoBody586.children[379] = ROUTE1738;

ProtoDeclare3.protoBody = ProtoBody586;

browser.currentScene.children[1] = ProtoDeclare3;

let ProtoDeclare1739 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare1739.name = "HAnimBodyBehaviorChooser";
ProtoDeclare1739.appinfo = "The HAnimBodyBehaviorChooser node allows an author to select one of several HAnimHumanoid bodies and simultaneously apply multiple HAnimBehavior animations to the active body. Individual behaviors may be enabled or disabled at any time.";
let ProtoInterface1740 = browser.currentScene.createNode("ProtoInterface");
//TODO: supported Level of Articulation (LOA) might be adapted to more efficiently setup/teardown pertinent ROUTEs
//accessType=\"inputOutput\" avoided to maintain backwards compatilibility with VRML97 scripting constraints
//shared common TimeSensor inputs for all BehaviorAnimation nodes, connected via ROUTEs
//TODO: consider named accessors, e.g. enableBehaviorByName and disableBehaviorByName
//TODO: consider addBody, removeBody, addBehavior, removeBehavior
//TODO: consider startBehaviorByIndex, stopBehaviorByIndex, startBehaviorByName, stopBehaviorByName
let field1741 = browser.currentScene.createNode("field");
field1741.name = "supportedLOA";
field1741.accessType = "inputOutput";
field1741.appinfo = "Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3.";
field1741.type = "SFInt32";
field1741.value = "-1";
ProtoInterface1740.field = new MFNode();

ProtoInterface1740.field[0] = field1741;

let field1742 = browser.currentScene.createNode("field");
field1742.name = "HumanoidArray";
field1742.accessType = "initializeOnly";
field1742.appinfo = "[HAnimHumanoid] nodes only";
field1742.type = "MFNode";
//default NULL
ProtoInterface1740.field[1] = field1742;

let field1743 = browser.currentScene.createNode("field");
field1743.name = "whichBody";
field1743.accessType = "initializeOnly";
field1743.appinfo = "whichBody is selected default is initial member of HumanoidArray";
field1743.type = "SFInt32";
field1743.value = "-1";
ProtoInterface1740.field[2] = field1743;

let field1744 = browser.currentScene.createNode("field");
field1744.name = "set_whichBody";
field1744.accessType = "inputOnly";
field1744.appinfo = "whichBody is selected default is none";
field1744.type = "SFInt32";
ProtoInterface1740.field[3] = field1744;

let field1745 = browser.currentScene.createNode("field");
field1745.name = "whichBody_changed";
field1745.accessType = "outputOnly";
field1745.appinfo = "whichBody is selected default is none";
field1745.type = "SFInt32";
ProtoInterface1740.field[4] = field1745;

let field1746 = browser.currentScene.createNode("field");
field1746.name = "hAnimBehaviorNodes";
field1746.accessType = "initializeOnly";
field1746.appinfo = "[HAnimBehavior] nodes only some or all of which may be enabled. Warning: do not animate a single joint with more than one interpolator at a given time.";
field1746.type = "MFNode";
//default NULL
ProtoInterface1740.field[5] = field1746;

let field1747 = browser.currentScene.createNode("field");
field1747.name = "enabledBehaviorsArray";
field1747.accessType = "initializeOnly";
field1747.appinfo = "indicate which HAnimBehavior nodes are activated, empty indicates all enabled true";
field1747.type = "MFBool";
//no default values
ProtoInterface1740.field[6] = field1747;

let field1748 = browser.currentScene.createNode("field");
field1748.name = "enableBehavior";
field1748.accessType = "inputOnly";
field1748.appinfo = "enable corresponding behavior identified by index number";
field1748.type = "SFInt32";
ProtoInterface1740.field[7] = field1748;

let field1749 = browser.currentScene.createNode("field");
field1749.name = "disableBehavior";
field1749.accessType = "inputOnly";
field1749.appinfo = "disable corresponding behavior identified by index number";
field1749.type = "SFInt32";
ProtoInterface1740.field[8] = field1749;

let field1750 = browser.currentScene.createNode("field");
field1750.name = "startTime";
field1750.accessType = "inputOutput";
field1750.type = "SFTime";
field1750.value = "0";
ProtoInterface1740.field[9] = field1750;

let field1751 = browser.currentScene.createNode("field");
field1751.name = "stopTime";
field1751.accessType = "inputOutput";
field1751.type = "SFTime";
field1751.value = "0";
ProtoInterface1740.field[10] = field1751;

ProtoDeclare1739.protoInterface = ProtoInterface1740;

let ProtoBody1752 = browser.currentScene.createNode("ProtoBody");
let Switch1753 = browser.currentScene.createNode("Switch");
Switch1753.DEF = "BodySwitch";
Switch1753.whichChoice = -1;
let IS1754 = browser.currentScene.createNode("IS");
let connect1755 = browser.currentScene.createNode("connect");
connect1755.nodeField = "whichChoice";
connect1755.protoField = "whichBody";
IS1754.connect = new MFNode();

IS1754.connect[0] = connect1755;

let connect1756 = browser.currentScene.createNode("connect");
connect1756.nodeField = "children";
connect1756.protoField = "HumanoidArray";
IS1754.connect[1] = connect1756;

Switch1753.iS = IS1754;

ProtoBody1752.children = new MFNode();

ProtoBody1752.children[0] = Switch1753;

//note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless
let Group1757 = browser.currentScene.createNode("Group");
Group1757.DEF = "BehaviorArrayHolder";
let IS1758 = browser.currentScene.createNode("IS");
let connect1759 = browser.currentScene.createNode("connect");
connect1759.nodeField = "children";
connect1759.protoField = "hAnimBehaviorNodes";
IS1758.connect = new MFNode();

IS1758.connect[0] = connect1759;

Group1757.iS = IS1758;

ProtoBody1752.children[1] = Group1757;

let TimeSensor1760 = browser.currentScene.createNode("TimeSensor");
TimeSensor1760.DEF = "TimeSensorHolderStartStopTimes";
let IS1761 = browser.currentScene.createNode("IS");
let connect1762 = browser.currentScene.createNode("connect");
connect1762.nodeField = "startTime";
connect1762.protoField = "startTime";
IS1761.connect = new MFNode();

IS1761.connect[0] = connect1762;

let connect1763 = browser.currentScene.createNode("connect");
connect1763.nodeField = "stopTime";
connect1763.protoField = "stopTime";
IS1761.connect[1] = connect1763;

TimeSensor1760.iS = IS1761;

ProtoBody1752.children[2] = TimeSensor1760;

let Switch1764 = browser.currentScene.createNode("Switch");
Switch1764.DEF = "SupportedLoaHolder2";
Switch1764.whichChoice = -1;
let IS1765 = browser.currentScene.createNode("IS");
let connect1766 = browser.currentScene.createNode("connect");
connect1766.nodeField = "whichChoice";
connect1766.protoField = "supportedLOA";
IS1765.connect = new MFNode();

IS1765.connect[0] = connect1766;

Switch1764.iS = IS1765;

ProtoBody1752.children[3] = Switch1764;

let Script1767 = browser.currentScene.createNode("Script");
Script1767.DEF = "BehaviorSelectionScript";
Script1767.directOutput = True;
Script1767.url = new MFString(new java.lang.String["HAnimBehaviorPrototypesScript.js","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypesScript.js"]);
let field1768 = browser.currentScene.createNode("field");
field1768.name = "HumanoidArray";
field1768.accessType = "initializeOnly";
field1768.appinfo = "[HAnimHumanoid] nodes only";
field1768.type = "MFNode";
Script1767.field = new MFNode();

Script1767.field[0] = field1768;

let field1769 = browser.currentScene.createNode("field");
field1769.name = "whichBody";
field1769.accessType = "initializeOnly";
field1769.appinfo = "whichBody is selected default is none";
field1769.type = "SFInt32";
Script1767.field[1] = field1769;

let field1770 = browser.currentScene.createNode("field");
field1770.name = "set_whichBody";
field1770.accessType = "inputOnly";
field1770.appinfo = "whichBody is selected default is none";
field1770.type = "SFInt32";
Script1767.field[2] = field1770;

let field1771 = browser.currentScene.createNode("field");
field1771.name = "whichBody_changed";
field1771.accessType = "outputOnly";
field1771.appinfo = "whichBody is selected default is none";
field1771.type = "SFInt32";
Script1767.field[3] = field1771;

let field1772 = browser.currentScene.createNode("field");
field1772.name = "hAnimBehaviorNodes";
field1772.accessType = "initializeOnly";
field1772.appinfo = "[HAnimBehavior] nodes only";
field1772.type = "MFNode";
//TODO: might consider accessType=\"inputOutput\" if VRML97 compatibility not needed
Script1767.field[4] = field1772;

let field1773 = browser.currentScene.createNode("field");
field1773.name = "enabledBehaviorsArray";
field1773.accessType = "initializeOnly";
field1773.type = "MFBool";
Script1767.field[5] = field1773;

let field1774 = browser.currentScene.createNode("field");
field1774.name = "enableBehavior";
field1774.accessType = "inputOnly";
field1774.appinfo = "enable corresponding behavior";
field1774.type = "SFInt32";
Script1767.field[6] = field1774;

let field1775 = browser.currentScene.createNode("field");
field1775.name = "disableBehavior";
field1775.accessType = "inputOnly";
field1775.appinfo = "enable corresponding behavior";
field1775.type = "SFInt32";
Script1767.field[7] = field1775;

let field1776 = browser.currentScene.createNode("field");
field1776.name = "timeSensorNode";
field1776.accessType = "initializeOnly";
field1776.type = "SFNode";
let TimeSensor1777 = browser.currentScene.createNode("TimeSensor");
TimeSensor1777.USE = "TimeSensorHolderStartStopTimes";
field1776.children = new MFNode();

field1776.children[0] = TimeSensor1777;

Script1767.field[8] = field1776;

let field1778 = browser.currentScene.createNode("field");
field1778.name = "previousBodyIndex";
field1778.accessType = "initializeOnly";
field1778.appinfo = "remember prior body index to avoid unnecessary ROUTE teardown and creation";
field1778.type = "SFInt32";
field1778.value = "-1";
Script1767.field[9] = field1778;

let field1779 = browser.currentScene.createNode("field");
field1779.name = "traceEnabled";
field1779.accessType = "initializeOnly";
field1779.type = "SFBool";
field1779.value = "true";
Script1767.field[10] = field1779;

let IS1780 = browser.currentScene.createNode("IS");
let connect1781 = browser.currentScene.createNode("connect");
connect1781.nodeField = "HumanoidArray";
connect1781.protoField = "HumanoidArray";
IS1780.connect = new MFNode();

IS1780.connect[0] = connect1781;

let connect1782 = browser.currentScene.createNode("connect");
connect1782.nodeField = "whichBody";
connect1782.protoField = "whichBody";
IS1780.connect[1] = connect1782;

let connect1783 = browser.currentScene.createNode("connect");
connect1783.nodeField = "set_whichBody";
connect1783.protoField = "set_whichBody";
IS1780.connect[2] = connect1783;

let connect1784 = browser.currentScene.createNode("connect");
connect1784.nodeField = "whichBody_changed";
connect1784.protoField = "whichBody_changed";
IS1780.connect[3] = connect1784;

let connect1785 = browser.currentScene.createNode("connect");
connect1785.nodeField = "hAnimBehaviorNodes";
connect1785.protoField = "hAnimBehaviorNodes";
IS1780.connect[4] = connect1785;

let connect1786 = browser.currentScene.createNode("connect");
connect1786.nodeField = "enabledBehaviorsArray";
connect1786.protoField = "enabledBehaviorsArray";
IS1780.connect[5] = connect1786;

let connect1787 = browser.currentScene.createNode("connect");
connect1787.nodeField = "enableBehavior";
connect1787.protoField = "enableBehavior";
IS1780.connect[6] = connect1787;

let connect1788 = browser.currentScene.createNode("connect");
connect1788.nodeField = "disableBehavior";
connect1788.protoField = "disableBehavior";
IS1780.connect[7] = connect1788;

Script1767.iS = IS1780;

ProtoBody1752.children[4] = Script1767;

ProtoDeclare1739.protoBody = ProtoBody1752;

browser.currentScene.children[2] = ProtoDeclare1739;

//TODO: Goal is to have 3 different ways to present a body: local creation, Inline with IMPORT/EXPORT, or external prototype.
let ProtoInstance1789 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1789.name = "HAnimBehavior";
ProtoInstance1789.DEF = "BehaviorTest1";
//only one PositionInterpolator key/keyValue definition for entire humanoid - optional
//must have paired overrides of each key/keyValue array being defined
let fieldValue1790 = browser.currentScene.createNode("fieldValue");
fieldValue1790.name = "HumanoidRoot_translation_key";
fieldValue1790.value = "0 0.25 0.5 0.75 1";
ProtoInstance1789.fieldValue = new MFNode();

ProtoInstance1789.fieldValue[0] = fieldValue1790;

let fieldValue1791 = browser.currentScene.createNode("fieldValue");
fieldValue1791.name = "HumanoidRoot_translation_keyValue";
fieldValue1791.value = "0 0 0 0 0 10 0 0 20 0 0 30 0 0 40 0 0 50";
ProtoInstance1789.fieldValue[1] = fieldValue1791;

let fieldValue1792 = browser.currentScene.createNode("fieldValue");
fieldValue1792.name = "r_ankle_key";
fieldValue1792.value = "0 0.5 1";
ProtoInstance1789.fieldValue[2] = fieldValue1792;

let fieldValue1793 = browser.currentScene.createNode("fieldValue");
fieldValue1793.name = "r_ankle_keyValue";
fieldValue1793.value = "0 1 0 0 0 1 0 0.2 0 1 0 0.4";
ProtoInstance1789.fieldValue[3] = fieldValue1793;

browser.currentScene.children[3] = ProtoInstance1789;

let ProtoInstance1794 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1794.name = "HAnimBodyBehaviorChooser";
ProtoInstance1794.DEF = "ChooserTest";
let fieldValue1795 = browser.currentScene.createNode("fieldValue");
fieldValue1795.name = "HumanoidArray";
let HAnimHumanoid1796 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid1796.name = "DiamondManLOA-1";
HAnimHumanoid1796.DEF = "hanim_DiamondManLOA-1";
HAnimHumanoid1796.version = "1.0";
fieldValue1795.children = new MFNode();

fieldValue1795.children[0] = HAnimHumanoid1796;

ProtoInstance1794.fieldValue = new MFNode();

ProtoInstance1794.fieldValue[0] = fieldValue1795;

let fieldValue1797 = browser.currentScene.createNode("fieldValue");
fieldValue1797.name = "whichBody";
fieldValue1797.value = "0";
ProtoInstance1794.fieldValue[1] = fieldValue1797;

let fieldValue1798 = browser.currentScene.createNode("fieldValue");
fieldValue1798.name = "hAnimBehaviorNodes";
let ProtoInstance1799 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance1799.USE = "BehaviorTest1";
fieldValue1798.children = new MFNode();

fieldValue1798.children[0] = ProtoInstance1799;

ProtoInstance1794.fieldValue[2] = fieldValue1798;

let fieldValue1800 = browser.currentScene.createNode("fieldValue");
fieldValue1800.name = "enabledBehaviorsArray";
fieldValue1800.value = "true";
ProtoInstance1794.fieldValue[3] = fieldValue1800;

browser.currentScene.children[4] = ProtoInstance1794;

