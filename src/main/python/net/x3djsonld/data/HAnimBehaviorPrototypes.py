###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    component(level=1,name='HAnim'),
    meta(content='HAnimBehaviorPrototypes.x3d',name='title'),
    meta(content='Prototypes for HAnimBehavior node, which collects OrientationInterpolators for aggregate animation of an HAnim humanoid model, and HAnimBodyBehaviorChooser, which selects one body and enables/disables multiple aggregated behaviors.',name='description'),
    meta(content='Don Brutzman, Jeff Weekley, MV4205 Advanced X3D Authoring class, and Keith Victor',name='creator'),
    meta(content='2 May 2006',name='created'),
    meta(content='4 July 2020',name='modified'),
    meta(content='Web3D2007BlendedBehaviorsChangeableBodies.pdf',name='reference'),
    meta(content='https://www.web3d.org/files/specifications/19774/V1.0',name='reference'),
    meta(content='https://www.web3d.org/x3d/specifications/ISO-IEC-19775-X3DAbstractSpecification_Revision1_to_Part1/Part01/components/hanim.html',name='reference'),
    meta(content='InterchangableActorsViaDynamicRoutingPrototypes.x3d',name='reference'),
    meta(content='ApaydinThesis.pdf',name='reference'),
    meta(content='X3D HAnim humanoid animation behaviors',name='subject'),
    meta(content='under development. should joint translations be exposed? upgrade to HAnim v2.2',name='warning'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='HAnimBehaviorPrototypes.x3d'),
    ProtoDeclare(appinfo='The HAnimBehavior node models a single humanoid behavior either for an entire body or simply parts of a body. It collects a TimeSensor clock with a single PositionInterpolator and multiple OrientationInterpolator nodes to provide a single humanoid behavior.',documentation='https://www.web3d.org/files/specifications/19774/V1.0/',name='HAnimBehavior',
      ProtoInterface=ProtoInterface(
        #  supported Level of Articulation (LOA) 
        field=[
        field(accessType='inputOutput',appinfo='Supported Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3.',name='supportedLOA',type='SFInt32',value=-1),
        #  shared common input for single TimeSensor animating all interpolators, since different Behaviors may have different cycleInterval durations 
        #  TODO: add other X3D 3.0 TimeSensor fields (pause etc.) 
        #  Not supported: animated translation of individual joints 
        field(accessType='inputOutput',appinfo='is this behavior enabled?',name='enabled',type='SFBool',value=True),
        field(accessType='inputOutput',appinfo='how long do these interpolators take to execute?',name='cycleInterval',type='SFTime',value=1.0),
        field(accessType='inputOutput',appinfo='whether or not this behavior loops (e.g. walking) or is single shot (e.g. shake hands).',name='loop',type='SFBool',value=False),
        field(accessType='inputOutput',appinfo='when time now >= startTime isActive becomes true and TimeSensor becomes active',name='startTime',type='SFTime',value=0),
        field(accessType='inputOutput',appinfo='when stopTime becomes <= time now isActive becomes false and TimeSensor becomes inactive',name='stopTime',type='SFTime',value=0),
        field(accessType='inputOutput',appinfo='when time now >= pauseTime isPaused becomes true and TimeSensor becomes paused',name='pauseTime',type='SFTime',value=0),
        field(accessType='inputOutput',appinfo='when resumeTime becomes <= time now isPaused becomes false and TimeSensor becomes inactive',name='resumeTime',type='SFTime',value=0),
        field(accessType='outputOnly',appinfo='cycleTime sends a time outputOnly at startTime and also at the beginning of each new cycle',name='cycleTime',type='SFTime'),
        field(accessType='outputOnly',appinfo='isActive true/false events are sent when TimeSensor starts/stops running',name='isActive',type='SFBool'),
        field(accessType='outputOnly',appinfo='isPaused true/false events are sent when TimeSensor is paused/resumed',name='isPaused',type='SFBool'),
        field(accessType='outputOnly',appinfo='current elapsed time since TimeSensor activated/running cumulative in seconds and not counting any paused time',name='elapsedTime',type='SFBool'),
        field(accessType='outputOnly',appinfo='continuously sends the absolute time (since January 1 1970)',name='time',type='SFBool'),
        field(accessType='outputOnly',appinfo='fraction_changed continuously sends value in range [0 1] showing time progress in the current cycle.',name='fraction_changed',type='SFFloat'),
        #  pass in key/keyValue array pairs for single PositionInterpolator 
        field(accessType='inputOutput',name='HumanoidRoot_translation_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='HumanoidRoot_translation_keyValue',type='MFVec3f',
          #  no default value 
          ),
        field(accessType='outputOnly',name='HumanoidRoot_translation_changed',type='SFVec3f'),
        #  pass in key/keyValue array pairs and expose named output for each OrientationInterpolator, joint by joint 
        field(accessType='inputOutput',name='HumanoidRoot_rotation_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='HumanoidRoot_rotation_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='HumanoidRoot_rotation_changed',type='SFRotation'),
        field(accessType='inputOutput',name='c1_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='c1_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='c1_changed',type='SFRotation'),
        field(accessType='inputOutput',name='c2_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='c2_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='c2_changed',type='SFRotation'),
        field(accessType='inputOutput',name='c3_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='c3_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='c3_changed',type='SFRotation'),
        field(accessType='inputOutput',name='c4_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='c4_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='c4_changed',type='SFRotation'),
        field(accessType='inputOutput',name='c5_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='c5_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='c5_changed',type='SFRotation'),
        field(accessType='inputOutput',name='c6_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='c6_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='c6_changed',type='SFRotation'),
        field(accessType='inputOutput',name='c7_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='c7_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='c7_changed',type='SFRotation'),
        field(accessType='inputOutput',name='jaw_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='jaw_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='jaw_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l1_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l1_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l1_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l2_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l2_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l2_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l3_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l3_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l3_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l4_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l4_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l4_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l5_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l5_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l5_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_acromioclavicular_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_acromioclavicular_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_acromioclavicular_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_ankle_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_ankle_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_ankle_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_calf_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_calf_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_calf_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_clavicle_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_clavicle_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_clavicle_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_elbow_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_elbow_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_elbow_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_eyeball_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_eyeball_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_eyeball_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_eyeball_joint_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_eyeball_joint_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_eyeball_joint_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_eyebrow_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_eyebrow_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_eyebrow_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_eyebrow_joint_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_eyebrow_joint_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_eyebrow_joint_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_eyelid_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_eyelid_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_eyelid_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_eyelid_joint_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_eyelid_joint_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_eyelid_joint_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_forearm_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_forearm_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_forearm_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_forefoot_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_forefoot_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_forefoot_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_hand_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_hand_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_hand_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_hindfoot_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_hindfoot_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_hindfoot_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_hip_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_hip_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_hip_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_index0_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_index0_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_index0_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_index1_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_index1_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_index1_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_index2_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_index2_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_index2_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_index3_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_index3_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_index3_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_index_distal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_index_distal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_index_distal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_index_metacarpal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_index_metacarpal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_index_metacarpal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_index_middle_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_index_middle_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_index_middle_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_index_proximal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_index_proximal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_index_proximal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_knee_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_knee_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_knee_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_metatarsal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_metatarsal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_metatarsal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_middistal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_middistal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_middistal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_middle0_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_middle0_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_middle0_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_middle1_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_middle1_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_middle1_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_middle2_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_middle2_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_middle2_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_middle3_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_middle3_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_middle3_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_middle_distal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_middle_distal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_middle_distal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_middle_metacarpal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_middle_metacarpal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_middle_metacarpal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_middle_middle_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_middle_middle_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_middle_middle_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_middle_proximal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_middle_proximal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_middle_proximal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_midproximal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_midproximal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_midproximal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_midtarsal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_midtarsal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_midtarsal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_pinky0_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_pinky0_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_pinky0_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_pinky1_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_pinky1_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_pinky1_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_pinky2_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_pinky2_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_pinky2_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_pinky3_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_pinky3_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_pinky3_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_pinky_distal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_pinky_distal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_pinky_distal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_pinky_metacarpal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_pinky_metacarpal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_pinky_metacarpal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_pinky_middle_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_pinky_middle_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_pinky_middle_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_pinky_proximal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_pinky_proximal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_pinky_proximal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_ring0_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_ring0_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_ring0_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_ring1_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_ring1_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_ring1_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_ring2_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_ring2_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_ring2_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_ring3_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_ring3_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_ring3_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_ring_distal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_ring_distal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_ring_distal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_ring_metacarpal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_ring_metacarpal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_ring_metacarpal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_ring_middle_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_ring_middle_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_ring_middle_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_ring_proximal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_ring_proximal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_ring_proximal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_scapula_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_scapula_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_scapula_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_shoulder_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_shoulder_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_shoulder_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_sternoclavicular_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_sternoclavicular_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_sternoclavicular_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_subtalar_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_subtalar_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_subtalar_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_thigh_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_thigh_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_thigh_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_thumb1_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_thumb1_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_thumb1_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_thumb2_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_thumb2_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_thumb2_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_thumb3_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_thumb3_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_thumb3_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_thumb_distal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_thumb_distal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_thumb_distal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_thumb_metacarpal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_thumb_metacarpal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_thumb_metacarpal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_thumb_proximal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_thumb_proximal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_thumb_proximal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_upperarm_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_upperarm_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_upperarm_changed',type='SFRotation'),
        field(accessType='inputOutput',name='l_wrist_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='l_wrist_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='l_wrist_changed',type='SFRotation'),
        field(accessType='inputOutput',name='pelvis_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='pelvis_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='pelvis_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_acromioclavicular_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_acromioclavicular_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_acromioclavicular_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_ankle_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_ankle_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_ankle_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_calf_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_calf_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_calf_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_clavicle_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_clavicle_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_clavicle_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_elbow_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_elbow_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_elbow_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_eyeball_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_eyeball_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_eyeball_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_eyeball_joint_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_eyeball_joint_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_eyeball_joint_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_eyebrow_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_eyebrow_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_eyebrow_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_eyebrow_joint_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_eyebrow_joint_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_eyebrow_joint_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_eyelid_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_eyelid_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_eyelid_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_eyelid_joint_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_eyelid_joint_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_eyelid_joint_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_forearm_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_forearm_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_forearm_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_forefoot_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_forefoot_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_forefoot_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_hand_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_hand_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_hand_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_hindfoot_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_hindfoot_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_hindfoot_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_hip_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_hip_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_hip_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_index0_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_index0_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_index0_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_index1_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_index1_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_index1_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_index2_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_index2_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_index2_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_index3_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_index3_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_index3_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_index_distal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_index_distal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_index_distal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_index_metacarpal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_index_metacarpal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_index_metacarpal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_index_middle_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_index_middle_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_index_middle_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_index_proximal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_index_proximal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_index_proximal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_knee_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_knee_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_knee_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_metatarsal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_metatarsal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_metatarsal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_middistal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_middistal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_middistal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_middle0_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_middle0_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_middle0_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_middle1_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_middle1_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_middle1_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_middle2_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_middle2_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_middle2_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_middle3_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_middle3_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_middle3_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_middle_distal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_middle_distal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_middle_distal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_middle_metacarpal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_middle_metacarpal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_middle_metacarpal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_middle_middle_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_middle_middle_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_middle_middle_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_middle_proximal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_middle_proximal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_middle_proximal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_midproximal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_midproximal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_midproximal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_midtarsal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_midtarsal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_midtarsal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_pinky0_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_pinky0_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_pinky0_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_pinky1_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_pinky1_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_pinky1_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_pinky2_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_pinky2_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_pinky2_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_pinky3_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_pinky3_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_pinky3_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_pinky_distal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_pinky_distal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_pinky_distal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_pinky_metacarpal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_pinky_metacarpal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_pinky_metacarpal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_pinky_middle_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_pinky_middle_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_pinky_middle_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_pinky_proximal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_pinky_proximal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_pinky_proximal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_ring0_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_ring0_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_ring0_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_ring1_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_ring1_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_ring1_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_ring2_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_ring2_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_ring2_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_ring3_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_ring3_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_ring3_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_ring_distal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_ring_distal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_ring_distal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_ring_metacarpal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_ring_metacarpal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_ring_metacarpal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_ring_middle_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_ring_middle_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_ring_middle_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_ring_proximal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_ring_proximal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_ring_proximal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_scapula_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_scapula_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_scapula_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_shoulder_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_shoulder_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_shoulder_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_sternoclavicular_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_sternoclavicular_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_sternoclavicular_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_subtalar_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_subtalar_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_subtalar_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_thigh_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_thigh_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_thigh_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_thumb1_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_thumb1_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_thumb1_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_thumb2_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_thumb2_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_thumb2_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_thumb3_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_thumb3_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_thumb3_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_thumb_distal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_thumb_distal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_thumb_distal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_thumb_metacarpal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_thumb_metacarpal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_thumb_metacarpal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_thumb_proximal_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_thumb_proximal_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_thumb_proximal_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_upperarm_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_upperarm_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_upperarm_changed',type='SFRotation'),
        field(accessType='inputOutput',name='r_wrist_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='r_wrist_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='r_wrist_changed',type='SFRotation'),
        field(accessType='inputOutput',name='sacroiliac_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='sacroiliac_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='sacroiliac_changed',type='SFRotation'),
        field(accessType='inputOutput',name='sacrum_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='sacrum_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='sacrum_changed',type='SFRotation'),
        field(accessType='inputOutput',name='skull_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='skull_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='skull_changed',type='SFRotation'),
        field(accessType='inputOutput',name='skullbase_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='skullbase_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='skullbase_changed',type='SFRotation'),
        field(accessType='inputOutput',name='t10_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='t10_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='t10_changed',type='SFRotation'),
        field(accessType='inputOutput',name='t11_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='t11_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='t11_changed',type='SFRotation'),
        field(accessType='inputOutput',name='t12_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='t12_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='t12_changed',type='SFRotation'),
        field(accessType='inputOutput',name='t1_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='t1_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='t1_changed',type='SFRotation'),
        field(accessType='inputOutput',name='t2_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='t2_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='t2_changed',type='SFRotation'),
        field(accessType='inputOutput',name='t3_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='t3_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='t3_changed',type='SFRotation'),
        field(accessType='inputOutput',name='t4_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='t4_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='t4_changed',type='SFRotation'),
        field(accessType='inputOutput',name='t5_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='t5_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='t5_changed',type='SFRotation'),
        field(accessType='inputOutput',name='t6_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='t6_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='t6_changed',type='SFRotation'),
        field(accessType='inputOutput',name='t7_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='t7_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='t7_changed',type='SFRotation'),
        field(accessType='inputOutput',name='t8_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='t8_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='t8_changed',type='SFRotation'),
        field(accessType='inputOutput',name='t9_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='t9_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='t9_changed',type='SFRotation'),
        field(accessType='inputOutput',name='temporomandibular_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='temporomandibular_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='temporomandibular_changed',type='SFRotation'),
        field(accessType='inputOutput',name='vc1_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='vc1_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='vc1_changed',type='SFRotation'),
        field(accessType='inputOutput',name='vc2_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='vc2_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='vc2_changed',type='SFRotation'),
        field(accessType='inputOutput',name='vc3_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='vc3_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='vc3_changed',type='SFRotation'),
        field(accessType='inputOutput',name='vc4_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='vc4_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='vc4_changed',type='SFRotation'),
        field(accessType='inputOutput',name='vc5_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='vc5_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='vc5_changed',type='SFRotation'),
        field(accessType='inputOutput',name='vc6_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='vc6_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='vc6_changed',type='SFRotation'),
        field(accessType='inputOutput',name='vc7_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='vc7_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='vc7_changed',type='SFRotation'),
        field(accessType='inputOutput',name='vl1_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='vl1_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='vl1_changed',type='SFRotation'),
        field(accessType='inputOutput',name='vl2_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='vl2_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='vl2_changed',type='SFRotation'),
        field(accessType='inputOutput',name='vl3_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='vl3_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='vl3_changed',type='SFRotation'),
        field(accessType='inputOutput',name='vl4_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='vl4_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='vl4_changed',type='SFRotation'),
        field(accessType='inputOutput',name='vl5_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='vl5_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='vl5_changed',type='SFRotation'),
        field(accessType='inputOutput',name='vt10_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='vt10_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='vt10_changed',type='SFRotation'),
        field(accessType='inputOutput',name='vt11_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='vt11_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='vt11_changed',type='SFRotation'),
        field(accessType='inputOutput',name='vt12_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='vt12_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='vt12_changed',type='SFRotation'),
        field(accessType='inputOutput',name='vt1_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='vt1_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='vt1_changed',type='SFRotation'),
        field(accessType='inputOutput',name='vt2_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='vt2_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='vt2_changed',type='SFRotation'),
        field(accessType='inputOutput',name='vt3_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='vt3_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='vt3_changed',type='SFRotation'),
        field(accessType='inputOutput',name='vt4_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='vt4_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='vt4_changed',type='SFRotation'),
        field(accessType='inputOutput',name='vt5_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='vt5_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='vt5_changed',type='SFRotation'),
        field(accessType='inputOutput',name='vt6_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='vt6_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='vt6_changed',type='SFRotation'),
        field(accessType='inputOutput',name='vt7_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='vt7_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='vt7_changed',type='SFRotation'),
        field(accessType='inputOutput',name='vt8_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='vt8_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='vt8_changed',type='SFRotation'),
        field(accessType='inputOutput',name='vt9_key',type='MFFloat',
          #  no default value 
          ),
        field(accessType='inputOutput',name='vt9_keyValue',type='MFRotation',
          #  no default value 
          ),
        field(accessType='outputOnly',name='vt9_changed',type='SFRotation')]),
      ProtoBody=ProtoBody(
        #  design alternative: move TimeSensor out of the prototype, instead expose set_fraction globally to all interpolators 
        children=[
        TimeSensor(DEF='BehaviorClock',
          IS=IS(
            connect=[
            connect(nodeField='enabled',protoField='enabled'),
            connect(nodeField='cycleInterval',protoField='cycleInterval'),
            connect(nodeField='loop',protoField='loop'),
            connect(nodeField='startTime',protoField='startTime'),
            connect(nodeField='stopTime',protoField='stopTime'),
            connect(nodeField='pauseTime',protoField='pauseTime'),
            connect(nodeField='resumeTime',protoField='resumeTime'),
            connect(nodeField='cycleTime',protoField='cycleTime'),
            connect(nodeField='isActive',protoField='isActive'),
            connect(nodeField='isPaused',protoField='isPaused'),
            connect(nodeField='elapsedTime',protoField='elapsedTime'),
            connect(nodeField='time',protoField='time'),
            connect(nodeField='fraction_changed',protoField='fraction_changed')])),
        #  note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless 
        Switch(DEF='SupportedLoaHolder1',whichChoice=-1,
          IS=IS(
            connect=[
            connect(nodeField='whichChoice',protoField='supportedLOA')])),
        PositionInterpolator(DEF='HumanoidRootPI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='HumanoidRoot_translation_key'),
            connect(nodeField='keyValue',protoField='HumanoidRoot_translation_keyValue'),
            connect(nodeField='value_changed',protoField='HumanoidRoot_translation_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='HumanoidRootPI'),
        OrientationInterpolator(DEF='HumanoidRootOI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='HumanoidRoot_rotation_key'),
            connect(nodeField='keyValue',protoField='HumanoidRoot_rotation_keyValue'),
            connect(nodeField='value_changed',protoField='HumanoidRoot_rotation_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='HumanoidRootOI'),
        OrientationInterpolator(DEF='c1_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='c1_key'),
            connect(nodeField='keyValue',protoField='c1_keyValue'),
            connect(nodeField='value_changed',protoField='c1_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='c1_OI'),
        OrientationInterpolator(DEF='c2_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='c2_key'),
            connect(nodeField='keyValue',protoField='c2_keyValue'),
            connect(nodeField='value_changed',protoField='c2_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='c2_OI'),
        OrientationInterpolator(DEF='c3_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='c3_key'),
            connect(nodeField='keyValue',protoField='c3_keyValue'),
            connect(nodeField='value_changed',protoField='c3_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='c3_OI'),
        OrientationInterpolator(DEF='c4_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='c4_key'),
            connect(nodeField='keyValue',protoField='c4_keyValue'),
            connect(nodeField='value_changed',protoField='c4_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='c4_OI'),
        OrientationInterpolator(DEF='c5_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='c5_key'),
            connect(nodeField='keyValue',protoField='c5_keyValue'),
            connect(nodeField='value_changed',protoField='c5_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='c5_OI'),
        OrientationInterpolator(DEF='c6_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='c6_key'),
            connect(nodeField='keyValue',protoField='c6_keyValue'),
            connect(nodeField='value_changed',protoField='c6_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='c6_OI'),
        OrientationInterpolator(DEF='c7_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='c7_key'),
            connect(nodeField='keyValue',protoField='c7_keyValue'),
            connect(nodeField='value_changed',protoField='c7_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='c7_OI'),
        OrientationInterpolator(DEF='jaw_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='jaw_key'),
            connect(nodeField='keyValue',protoField='jaw_keyValue'),
            connect(nodeField='value_changed',protoField='jaw_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='jaw_OI'),
        OrientationInterpolator(DEF='l1_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l1_key'),
            connect(nodeField='keyValue',protoField='l1_keyValue'),
            connect(nodeField='value_changed',protoField='l1_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l1_OI'),
        OrientationInterpolator(DEF='l2_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l2_key'),
            connect(nodeField='keyValue',protoField='l2_keyValue'),
            connect(nodeField='value_changed',protoField='l2_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l2_OI'),
        OrientationInterpolator(DEF='l3_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l3_key'),
            connect(nodeField='keyValue',protoField='l3_keyValue'),
            connect(nodeField='value_changed',protoField='l3_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l3_OI'),
        OrientationInterpolator(DEF='l4_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l4_key'),
            connect(nodeField='keyValue',protoField='l4_keyValue'),
            connect(nodeField='value_changed',protoField='l4_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l4_OI'),
        OrientationInterpolator(DEF='l5_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l5_key'),
            connect(nodeField='keyValue',protoField='l5_keyValue'),
            connect(nodeField='value_changed',protoField='l5_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l5_OI'),
        OrientationInterpolator(DEF='l_acromioclavicular_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_acromioclavicular_key'),
            connect(nodeField='keyValue',protoField='l_acromioclavicular_keyValue'),
            connect(nodeField='value_changed',protoField='l_acromioclavicular_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_acromioclavicular_OI'),
        OrientationInterpolator(DEF='l_ankle_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_ankle_key'),
            connect(nodeField='keyValue',protoField='l_ankle_keyValue'),
            connect(nodeField='value_changed',protoField='l_ankle_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_ankle_OI'),
        OrientationInterpolator(DEF='l_calf_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_calf_key'),
            connect(nodeField='keyValue',protoField='l_calf_keyValue'),
            connect(nodeField='value_changed',protoField='l_calf_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_calf_OI'),
        OrientationInterpolator(DEF='l_clavicle_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_clavicle_key'),
            connect(nodeField='keyValue',protoField='l_clavicle_keyValue'),
            connect(nodeField='value_changed',protoField='l_clavicle_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_clavicle_OI'),
        OrientationInterpolator(DEF='l_elbow_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_elbow_key'),
            connect(nodeField='keyValue',protoField='l_elbow_keyValue'),
            connect(nodeField='value_changed',protoField='l_elbow_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_elbow_OI'),
        OrientationInterpolator(DEF='l_eyeball_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_eyeball_key'),
            connect(nodeField='keyValue',protoField='l_eyeball_keyValue'),
            connect(nodeField='value_changed',protoField='l_eyeball_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_eyeball_OI'),
        OrientationInterpolator(DEF='l_eyeball_joint_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_eyeball_joint_key'),
            connect(nodeField='keyValue',protoField='l_eyeball_joint_keyValue'),
            connect(nodeField='value_changed',protoField='l_eyeball_joint_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_eyeball_joint_OI'),
        OrientationInterpolator(DEF='l_eyebrow_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_eyebrow_key'),
            connect(nodeField='keyValue',protoField='l_eyebrow_keyValue'),
            connect(nodeField='value_changed',protoField='l_eyebrow_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_eyebrow_OI'),
        OrientationInterpolator(DEF='l_eyebrow_joint_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_eyebrow_joint_key'),
            connect(nodeField='keyValue',protoField='l_eyebrow_joint_keyValue'),
            connect(nodeField='value_changed',protoField='l_eyebrow_joint_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_eyebrow_joint_OI'),
        OrientationInterpolator(DEF='l_eyelid_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_eyelid_key'),
            connect(nodeField='keyValue',protoField='l_eyelid_keyValue'),
            connect(nodeField='value_changed',protoField='l_eyelid_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_eyelid_OI'),
        OrientationInterpolator(DEF='l_eyelid_joint_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_eyelid_joint_key'),
            connect(nodeField='keyValue',protoField='l_eyelid_joint_keyValue'),
            connect(nodeField='value_changed',protoField='l_eyelid_joint_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_eyelid_joint_OI'),
        OrientationInterpolator(DEF='l_forearm_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_forearm_key'),
            connect(nodeField='keyValue',protoField='l_forearm_keyValue'),
            connect(nodeField='value_changed',protoField='l_forearm_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_forearm_OI'),
        OrientationInterpolator(DEF='l_forefoot_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_forefoot_key'),
            connect(nodeField='keyValue',protoField='l_forefoot_keyValue'),
            connect(nodeField='value_changed',protoField='l_forefoot_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_forefoot_OI'),
        OrientationInterpolator(DEF='l_hand_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_hand_key'),
            connect(nodeField='keyValue',protoField='l_hand_keyValue'),
            connect(nodeField='value_changed',protoField='l_hand_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_hand_OI'),
        OrientationInterpolator(DEF='l_hindfoot_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_hindfoot_key'),
            connect(nodeField='keyValue',protoField='l_hindfoot_keyValue'),
            connect(nodeField='value_changed',protoField='l_hindfoot_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_hindfoot_OI'),
        OrientationInterpolator(DEF='l_hip_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_hip_key'),
            connect(nodeField='keyValue',protoField='l_hip_keyValue'),
            connect(nodeField='value_changed',protoField='l_hip_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_hip_OI'),
        OrientationInterpolator(DEF='l_index0_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_index0_key'),
            connect(nodeField='keyValue',protoField='l_index0_keyValue'),
            connect(nodeField='value_changed',protoField='l_index0_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_index0_OI'),
        OrientationInterpolator(DEF='l_index1_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_index1_key'),
            connect(nodeField='keyValue',protoField='l_index1_keyValue'),
            connect(nodeField='value_changed',protoField='l_index1_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_index1_OI'),
        OrientationInterpolator(DEF='l_index2_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_index2_key'),
            connect(nodeField='keyValue',protoField='l_index2_keyValue'),
            connect(nodeField='value_changed',protoField='l_index2_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_index2_OI'),
        OrientationInterpolator(DEF='l_index3_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_index3_key'),
            connect(nodeField='keyValue',protoField='l_index3_keyValue'),
            connect(nodeField='value_changed',protoField='l_index3_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_index3_OI'),
        OrientationInterpolator(DEF='l_index_distal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_index_distal_key'),
            connect(nodeField='keyValue',protoField='l_index_distal_keyValue'),
            connect(nodeField='value_changed',protoField='l_index_distal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_index_distal_OI'),
        OrientationInterpolator(DEF='l_index_metacarpal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_index_metacarpal_key'),
            connect(nodeField='keyValue',protoField='l_index_metacarpal_keyValue'),
            connect(nodeField='value_changed',protoField='l_index_metacarpal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_index_metacarpal_OI'),
        OrientationInterpolator(DEF='l_index_middle_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_index_middle_key'),
            connect(nodeField='keyValue',protoField='l_index_middle_keyValue'),
            connect(nodeField='value_changed',protoField='l_index_middle_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_index_middle_OI'),
        OrientationInterpolator(DEF='l_index_proximal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_index_proximal_key'),
            connect(nodeField='keyValue',protoField='l_index_proximal_keyValue'),
            connect(nodeField='value_changed',protoField='l_index_proximal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_index_proximal_OI'),
        OrientationInterpolator(DEF='l_knee_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_knee_key'),
            connect(nodeField='keyValue',protoField='l_knee_keyValue'),
            connect(nodeField='value_changed',protoField='l_knee_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_knee_OI'),
        OrientationInterpolator(DEF='l_metatarsal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_metatarsal_key'),
            connect(nodeField='keyValue',protoField='l_metatarsal_keyValue'),
            connect(nodeField='value_changed',protoField='l_metatarsal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_metatarsal_OI'),
        OrientationInterpolator(DEF='l_middistal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_middistal_key'),
            connect(nodeField='keyValue',protoField='l_middistal_keyValue'),
            connect(nodeField='value_changed',protoField='l_middistal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_middistal_OI'),
        OrientationInterpolator(DEF='l_middle0_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_middle0_key'),
            connect(nodeField='keyValue',protoField='l_middle0_keyValue'),
            connect(nodeField='value_changed',protoField='l_middle0_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_middle0_OI'),
        OrientationInterpolator(DEF='l_middle1_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_middle1_key'),
            connect(nodeField='keyValue',protoField='l_middle1_keyValue'),
            connect(nodeField='value_changed',protoField='l_middle1_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_middle1_OI'),
        OrientationInterpolator(DEF='l_middle2_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_middle2_key'),
            connect(nodeField='keyValue',protoField='l_middle2_keyValue'),
            connect(nodeField='value_changed',protoField='l_middle2_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_middle2_OI'),
        OrientationInterpolator(DEF='l_middle3_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_middle3_key'),
            connect(nodeField='keyValue',protoField='l_middle3_keyValue'),
            connect(nodeField='value_changed',protoField='l_middle3_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_middle3_OI'),
        OrientationInterpolator(DEF='l_middle_distal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_middle_distal_key'),
            connect(nodeField='keyValue',protoField='l_middle_distal_keyValue'),
            connect(nodeField='value_changed',protoField='l_middle_distal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_middle_distal_OI'),
        OrientationInterpolator(DEF='l_middle_metacarpal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_middle_metacarpal_key'),
            connect(nodeField='keyValue',protoField='l_middle_metacarpal_keyValue'),
            connect(nodeField='value_changed',protoField='l_middle_metacarpal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_middle_metacarpal_OI'),
        OrientationInterpolator(DEF='l_middle_middle_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_middle_middle_key'),
            connect(nodeField='keyValue',protoField='l_middle_middle_keyValue'),
            connect(nodeField='value_changed',protoField='l_middle_middle_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_middle_middle_OI'),
        OrientationInterpolator(DEF='l_middle_proximal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_middle_proximal_key'),
            connect(nodeField='keyValue',protoField='l_middle_proximal_keyValue'),
            connect(nodeField='value_changed',protoField='l_middle_proximal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_middle_proximal_OI'),
        OrientationInterpolator(DEF='l_midproximal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_midproximal_key'),
            connect(nodeField='keyValue',protoField='l_midproximal_keyValue'),
            connect(nodeField='value_changed',protoField='l_midproximal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_midproximal_OI'),
        OrientationInterpolator(DEF='l_midtarsal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_midtarsal_key'),
            connect(nodeField='keyValue',protoField='l_midtarsal_keyValue'),
            connect(nodeField='value_changed',protoField='l_midtarsal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_midtarsal_OI'),
        OrientationInterpolator(DEF='l_pinky0_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_pinky0_key'),
            connect(nodeField='keyValue',protoField='l_pinky0_keyValue'),
            connect(nodeField='value_changed',protoField='l_pinky0_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_pinky0_OI'),
        OrientationInterpolator(DEF='l_pinky1_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_pinky1_key'),
            connect(nodeField='keyValue',protoField='l_pinky1_keyValue'),
            connect(nodeField='value_changed',protoField='l_pinky1_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_pinky1_OI'),
        OrientationInterpolator(DEF='l_pinky2_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_pinky2_key'),
            connect(nodeField='keyValue',protoField='l_pinky2_keyValue'),
            connect(nodeField='value_changed',protoField='l_pinky2_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_pinky2_OI'),
        OrientationInterpolator(DEF='l_pinky3_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_pinky3_key'),
            connect(nodeField='keyValue',protoField='l_pinky3_keyValue'),
            connect(nodeField='value_changed',protoField='l_pinky3_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_pinky3_OI'),
        OrientationInterpolator(DEF='l_pinky_distal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_pinky_distal_key'),
            connect(nodeField='keyValue',protoField='l_pinky_distal_keyValue'),
            connect(nodeField='value_changed',protoField='l_pinky_distal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_pinky_distal_OI'),
        OrientationInterpolator(DEF='l_pinky_metacarpal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_pinky_metacarpal_key'),
            connect(nodeField='keyValue',protoField='l_pinky_metacarpal_keyValue'),
            connect(nodeField='value_changed',protoField='l_pinky_metacarpal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_pinky_metacarpal_OI'),
        OrientationInterpolator(DEF='l_pinky_middle_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_pinky_middle_key'),
            connect(nodeField='keyValue',protoField='l_pinky_middle_keyValue'),
            connect(nodeField='value_changed',protoField='l_pinky_middle_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_pinky_middle_OI'),
        OrientationInterpolator(DEF='l_pinky_proximal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_pinky_proximal_key'),
            connect(nodeField='keyValue',protoField='l_pinky_proximal_keyValue'),
            connect(nodeField='value_changed',protoField='l_pinky_proximal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_pinky_proximal_OI'),
        OrientationInterpolator(DEF='l_ring0_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_ring0_key'),
            connect(nodeField='keyValue',protoField='l_ring0_keyValue'),
            connect(nodeField='value_changed',protoField='l_ring0_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_ring0_OI'),
        OrientationInterpolator(DEF='l_ring1_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_ring1_key'),
            connect(nodeField='keyValue',protoField='l_ring1_keyValue'),
            connect(nodeField='value_changed',protoField='l_ring1_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_ring1_OI'),
        OrientationInterpolator(DEF='l_ring2_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_ring2_key'),
            connect(nodeField='keyValue',protoField='l_ring2_keyValue'),
            connect(nodeField='value_changed',protoField='l_ring2_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_ring2_OI'),
        OrientationInterpolator(DEF='l_ring3_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_ring3_key'),
            connect(nodeField='keyValue',protoField='l_ring3_keyValue'),
            connect(nodeField='value_changed',protoField='l_ring3_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_ring3_OI'),
        OrientationInterpolator(DEF='l_ring_distal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_ring_distal_key'),
            connect(nodeField='keyValue',protoField='l_ring_distal_keyValue'),
            connect(nodeField='value_changed',protoField='l_ring_distal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_ring_distal_OI'),
        OrientationInterpolator(DEF='l_ring_metacarpal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_ring_metacarpal_key'),
            connect(nodeField='keyValue',protoField='l_ring_metacarpal_keyValue'),
            connect(nodeField='value_changed',protoField='l_ring_metacarpal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_ring_metacarpal_OI'),
        OrientationInterpolator(DEF='l_ring_middle_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_ring_middle_key'),
            connect(nodeField='keyValue',protoField='l_ring_middle_keyValue'),
            connect(nodeField='value_changed',protoField='l_ring_middle_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_ring_middle_OI'),
        OrientationInterpolator(DEF='l_ring_proximal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_ring_proximal_key'),
            connect(nodeField='keyValue',protoField='l_ring_proximal_keyValue'),
            connect(nodeField='value_changed',protoField='l_ring_proximal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_ring_proximal_OI'),
        OrientationInterpolator(DEF='l_scapula_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_scapula_key'),
            connect(nodeField='keyValue',protoField='l_scapula_keyValue'),
            connect(nodeField='value_changed',protoField='l_scapula_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_scapula_OI'),
        OrientationInterpolator(DEF='l_shoulder_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_shoulder_key'),
            connect(nodeField='keyValue',protoField='l_shoulder_keyValue'),
            connect(nodeField='value_changed',protoField='l_shoulder_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_shoulder_OI'),
        OrientationInterpolator(DEF='l_sternoclavicular_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_sternoclavicular_key'),
            connect(nodeField='keyValue',protoField='l_sternoclavicular_keyValue'),
            connect(nodeField='value_changed',protoField='l_sternoclavicular_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_sternoclavicular_OI'),
        OrientationInterpolator(DEF='l_subtalar_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_subtalar_key'),
            connect(nodeField='keyValue',protoField='l_subtalar_keyValue'),
            connect(nodeField='value_changed',protoField='l_subtalar_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_subtalar_OI'),
        OrientationInterpolator(DEF='l_thigh_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_thigh_key'),
            connect(nodeField='keyValue',protoField='l_thigh_keyValue'),
            connect(nodeField='value_changed',protoField='l_thigh_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_thigh_OI'),
        OrientationInterpolator(DEF='l_thumb1_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_thumb1_key'),
            connect(nodeField='keyValue',protoField='l_thumb1_keyValue'),
            connect(nodeField='value_changed',protoField='l_thumb1_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_thumb1_OI'),
        OrientationInterpolator(DEF='l_thumb2_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_thumb2_key'),
            connect(nodeField='keyValue',protoField='l_thumb2_keyValue'),
            connect(nodeField='value_changed',protoField='l_thumb2_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_thumb2_OI'),
        OrientationInterpolator(DEF='l_thumb3_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_thumb3_key'),
            connect(nodeField='keyValue',protoField='l_thumb3_keyValue'),
            connect(nodeField='value_changed',protoField='l_thumb3_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_thumb3_OI'),
        OrientationInterpolator(DEF='l_thumb_distal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_thumb_distal_key'),
            connect(nodeField='keyValue',protoField='l_thumb_distal_keyValue'),
            connect(nodeField='value_changed',protoField='l_thumb_distal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_thumb_distal_OI'),
        OrientationInterpolator(DEF='l_thumb_metacarpal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_thumb_metacarpal_key'),
            connect(nodeField='keyValue',protoField='l_thumb_metacarpal_keyValue'),
            connect(nodeField='value_changed',protoField='l_thumb_metacarpal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_thumb_metacarpal_OI'),
        OrientationInterpolator(DEF='l_thumb_proximal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_thumb_proximal_key'),
            connect(nodeField='keyValue',protoField='l_thumb_proximal_keyValue'),
            connect(nodeField='value_changed',protoField='l_thumb_proximal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_thumb_proximal_OI'),
        OrientationInterpolator(DEF='l_upperarm_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_upperarm_key'),
            connect(nodeField='keyValue',protoField='l_upperarm_keyValue'),
            connect(nodeField='value_changed',protoField='l_upperarm_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_upperarm_OI'),
        OrientationInterpolator(DEF='l_wrist_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='l_wrist_key'),
            connect(nodeField='keyValue',protoField='l_wrist_keyValue'),
            connect(nodeField='value_changed',protoField='l_wrist_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='l_wrist_OI'),
        OrientationInterpolator(DEF='pelvis_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='pelvis_key'),
            connect(nodeField='keyValue',protoField='pelvis_keyValue'),
            connect(nodeField='value_changed',protoField='pelvis_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='pelvis_OI'),
        OrientationInterpolator(DEF='r_acromioclavicular_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_acromioclavicular_key'),
            connect(nodeField='keyValue',protoField='r_acromioclavicular_keyValue'),
            connect(nodeField='value_changed',protoField='r_acromioclavicular_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_acromioclavicular_OI'),
        OrientationInterpolator(DEF='r_ankle_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_ankle_key'),
            connect(nodeField='keyValue',protoField='r_ankle_keyValue'),
            connect(nodeField='value_changed',protoField='r_ankle_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_ankle_OI'),
        OrientationInterpolator(DEF='r_calf_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_calf_key'),
            connect(nodeField='keyValue',protoField='r_calf_keyValue'),
            connect(nodeField='value_changed',protoField='r_calf_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_calf_OI'),
        OrientationInterpolator(DEF='r_clavicle_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_clavicle_key'),
            connect(nodeField='keyValue',protoField='r_clavicle_keyValue'),
            connect(nodeField='value_changed',protoField='r_clavicle_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_clavicle_OI'),
        OrientationInterpolator(DEF='r_elbow_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_elbow_key'),
            connect(nodeField='keyValue',protoField='r_elbow_keyValue'),
            connect(nodeField='value_changed',protoField='r_elbow_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_elbow_OI'),
        OrientationInterpolator(DEF='r_eyeball_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_eyeball_key'),
            connect(nodeField='keyValue',protoField='r_eyeball_keyValue'),
            connect(nodeField='value_changed',protoField='r_eyeball_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_eyeball_OI'),
        OrientationInterpolator(DEF='r_eyeball_joint_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_eyeball_joint_key'),
            connect(nodeField='keyValue',protoField='r_eyeball_joint_keyValue'),
            connect(nodeField='value_changed',protoField='r_eyeball_joint_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_eyeball_joint_OI'),
        OrientationInterpolator(DEF='r_eyebrow_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_eyebrow_key'),
            connect(nodeField='keyValue',protoField='r_eyebrow_keyValue'),
            connect(nodeField='value_changed',protoField='r_eyebrow_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_eyebrow_OI'),
        OrientationInterpolator(DEF='r_eyebrow_joint_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_eyebrow_joint_key'),
            connect(nodeField='keyValue',protoField='r_eyebrow_joint_keyValue'),
            connect(nodeField='value_changed',protoField='r_eyebrow_joint_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_eyebrow_joint_OI'),
        OrientationInterpolator(DEF='r_eyelid_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_eyelid_key'),
            connect(nodeField='keyValue',protoField='r_eyelid_keyValue'),
            connect(nodeField='value_changed',protoField='r_eyelid_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_eyelid_OI'),
        OrientationInterpolator(DEF='r_eyelid_joint_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_eyelid_joint_key'),
            connect(nodeField='keyValue',protoField='r_eyelid_joint_keyValue'),
            connect(nodeField='value_changed',protoField='r_eyelid_joint_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_eyelid_joint_OI'),
        OrientationInterpolator(DEF='r_forearm_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_forearm_key'),
            connect(nodeField='keyValue',protoField='r_forearm_keyValue'),
            connect(nodeField='value_changed',protoField='r_forearm_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_forearm_OI'),
        OrientationInterpolator(DEF='r_forefoot_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_forefoot_key'),
            connect(nodeField='keyValue',protoField='r_forefoot_keyValue'),
            connect(nodeField='value_changed',protoField='r_forefoot_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_forefoot_OI'),
        OrientationInterpolator(DEF='r_hand_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_hand_key'),
            connect(nodeField='keyValue',protoField='r_hand_keyValue'),
            connect(nodeField='value_changed',protoField='r_hand_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_hand_OI'),
        OrientationInterpolator(DEF='r_hindfoot_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_hindfoot_key'),
            connect(nodeField='keyValue',protoField='r_hindfoot_keyValue'),
            connect(nodeField='value_changed',protoField='r_hindfoot_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_hindfoot_OI'),
        OrientationInterpolator(DEF='r_hip_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_hip_key'),
            connect(nodeField='keyValue',protoField='r_hip_keyValue'),
            connect(nodeField='value_changed',protoField='r_hip_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_hip_OI'),
        OrientationInterpolator(DEF='r_index0_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_index0_key'),
            connect(nodeField='keyValue',protoField='r_index0_keyValue'),
            connect(nodeField='value_changed',protoField='r_index0_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_index0_OI'),
        OrientationInterpolator(DEF='r_index1_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_index1_key'),
            connect(nodeField='keyValue',protoField='r_index1_keyValue'),
            connect(nodeField='value_changed',protoField='r_index1_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_index1_OI'),
        OrientationInterpolator(DEF='r_index2_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_index2_key'),
            connect(nodeField='keyValue',protoField='r_index2_keyValue'),
            connect(nodeField='value_changed',protoField='r_index2_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_index2_OI'),
        OrientationInterpolator(DEF='r_index3_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_index3_key'),
            connect(nodeField='keyValue',protoField='r_index3_keyValue'),
            connect(nodeField='value_changed',protoField='r_index3_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_index3_OI'),
        OrientationInterpolator(DEF='r_index_distal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_index_distal_key'),
            connect(nodeField='keyValue',protoField='r_index_distal_keyValue'),
            connect(nodeField='value_changed',protoField='r_index_distal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_index_distal_OI'),
        OrientationInterpolator(DEF='r_index_metacarpal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_index_metacarpal_key'),
            connect(nodeField='keyValue',protoField='r_index_metacarpal_keyValue'),
            connect(nodeField='value_changed',protoField='r_index_metacarpal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_index_metacarpal_OI'),
        OrientationInterpolator(DEF='r_index_middle_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_index_middle_key'),
            connect(nodeField='keyValue',protoField='r_index_middle_keyValue'),
            connect(nodeField='value_changed',protoField='r_index_middle_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_index_middle_OI'),
        OrientationInterpolator(DEF='r_index_proximal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_index_proximal_key'),
            connect(nodeField='keyValue',protoField='r_index_proximal_keyValue'),
            connect(nodeField='value_changed',protoField='r_index_proximal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_index_proximal_OI'),
        OrientationInterpolator(DEF='r_knee_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_knee_key'),
            connect(nodeField='keyValue',protoField='r_knee_keyValue'),
            connect(nodeField='value_changed',protoField='r_knee_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_knee_OI'),
        OrientationInterpolator(DEF='r_metatarsal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_metatarsal_key'),
            connect(nodeField='keyValue',protoField='r_metatarsal_keyValue'),
            connect(nodeField='value_changed',protoField='r_metatarsal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_metatarsal_OI'),
        OrientationInterpolator(DEF='r_middistal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_middistal_key'),
            connect(nodeField='keyValue',protoField='r_middistal_keyValue'),
            connect(nodeField='value_changed',protoField='r_middistal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_middistal_OI'),
        OrientationInterpolator(DEF='r_middle0_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_middle0_key'),
            connect(nodeField='keyValue',protoField='r_middle0_keyValue'),
            connect(nodeField='value_changed',protoField='r_middle0_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_middle0_OI'),
        OrientationInterpolator(DEF='r_middle1_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_middle1_key'),
            connect(nodeField='keyValue',protoField='r_middle1_keyValue'),
            connect(nodeField='value_changed',protoField='r_middle1_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_middle1_OI'),
        OrientationInterpolator(DEF='r_middle2_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_middle2_key'),
            connect(nodeField='keyValue',protoField='r_middle2_keyValue'),
            connect(nodeField='value_changed',protoField='r_middle2_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_middle2_OI'),
        OrientationInterpolator(DEF='r_middle3_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_middle3_key'),
            connect(nodeField='keyValue',protoField='r_middle3_keyValue'),
            connect(nodeField='value_changed',protoField='r_middle3_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_middle3_OI'),
        OrientationInterpolator(DEF='r_middle_distal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_middle_distal_key'),
            connect(nodeField='keyValue',protoField='r_middle_distal_keyValue'),
            connect(nodeField='value_changed',protoField='r_middle_distal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_middle_distal_OI'),
        OrientationInterpolator(DEF='r_middle_metacarpal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_middle_metacarpal_key'),
            connect(nodeField='keyValue',protoField='r_middle_metacarpal_keyValue'),
            connect(nodeField='value_changed',protoField='r_middle_metacarpal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_middle_metacarpal_OI'),
        OrientationInterpolator(DEF='r_middle_middle_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_middle_middle_key'),
            connect(nodeField='keyValue',protoField='r_middle_middle_keyValue'),
            connect(nodeField='value_changed',protoField='r_middle_middle_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_middle_middle_OI'),
        OrientationInterpolator(DEF='r_middle_proximal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_middle_proximal_key'),
            connect(nodeField='keyValue',protoField='r_middle_proximal_keyValue'),
            connect(nodeField='value_changed',protoField='r_middle_proximal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_middle_proximal_OI'),
        OrientationInterpolator(DEF='r_midproximal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_midproximal_key'),
            connect(nodeField='keyValue',protoField='r_midproximal_keyValue'),
            connect(nodeField='value_changed',protoField='r_midproximal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_midproximal_OI'),
        OrientationInterpolator(DEF='r_midtarsal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_midtarsal_key'),
            connect(nodeField='keyValue',protoField='r_midtarsal_keyValue'),
            connect(nodeField='value_changed',protoField='r_midtarsal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_midtarsal_OI'),
        OrientationInterpolator(DEF='r_pinky0_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_pinky0_key'),
            connect(nodeField='keyValue',protoField='r_pinky0_keyValue'),
            connect(nodeField='value_changed',protoField='r_pinky0_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_pinky0_OI'),
        OrientationInterpolator(DEF='r_pinky1_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_pinky1_key'),
            connect(nodeField='keyValue',protoField='r_pinky1_keyValue'),
            connect(nodeField='value_changed',protoField='r_pinky1_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_pinky1_OI'),
        OrientationInterpolator(DEF='r_pinky2_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_pinky2_key'),
            connect(nodeField='keyValue',protoField='r_pinky2_keyValue'),
            connect(nodeField='value_changed',protoField='r_pinky2_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_pinky2_OI'),
        OrientationInterpolator(DEF='r_pinky3_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_pinky3_key'),
            connect(nodeField='keyValue',protoField='r_pinky3_keyValue'),
            connect(nodeField='value_changed',protoField='r_pinky3_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_pinky3_OI'),
        OrientationInterpolator(DEF='r_pinky_distal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_pinky_distal_key'),
            connect(nodeField='keyValue',protoField='r_pinky_distal_keyValue'),
            connect(nodeField='value_changed',protoField='r_pinky_distal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_pinky_distal_OI'),
        OrientationInterpolator(DEF='r_pinky_metacarpal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_pinky_metacarpal_key'),
            connect(nodeField='keyValue',protoField='r_pinky_metacarpal_keyValue'),
            connect(nodeField='value_changed',protoField='r_pinky_metacarpal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_pinky_metacarpal_OI'),
        OrientationInterpolator(DEF='r_pinky_middle_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_pinky_middle_key'),
            connect(nodeField='keyValue',protoField='r_pinky_middle_keyValue'),
            connect(nodeField='value_changed',protoField='r_pinky_middle_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_pinky_middle_OI'),
        OrientationInterpolator(DEF='r_pinky_proximal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_pinky_proximal_key'),
            connect(nodeField='keyValue',protoField='r_pinky_proximal_keyValue'),
            connect(nodeField='value_changed',protoField='r_pinky_proximal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_pinky_proximal_OI'),
        OrientationInterpolator(DEF='r_ring0_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_ring0_key'),
            connect(nodeField='keyValue',protoField='r_ring0_keyValue'),
            connect(nodeField='value_changed',protoField='r_ring0_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_ring0_OI'),
        OrientationInterpolator(DEF='r_ring1_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_ring1_key'),
            connect(nodeField='keyValue',protoField='r_ring1_keyValue'),
            connect(nodeField='value_changed',protoField='r_ring1_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_ring1_OI'),
        OrientationInterpolator(DEF='r_ring2_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_ring2_key'),
            connect(nodeField='keyValue',protoField='r_ring2_keyValue'),
            connect(nodeField='value_changed',protoField='r_ring2_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_ring2_OI'),
        OrientationInterpolator(DEF='r_ring3_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_ring3_key'),
            connect(nodeField='keyValue',protoField='r_ring3_keyValue'),
            connect(nodeField='value_changed',protoField='r_ring3_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_ring3_OI'),
        OrientationInterpolator(DEF='r_ring_distal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_ring_distal_key'),
            connect(nodeField='keyValue',protoField='r_ring_distal_keyValue'),
            connect(nodeField='value_changed',protoField='r_ring_distal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_ring_distal_OI'),
        OrientationInterpolator(DEF='r_ring_metacarpal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_ring_metacarpal_key'),
            connect(nodeField='keyValue',protoField='r_ring_metacarpal_keyValue'),
            connect(nodeField='value_changed',protoField='r_ring_metacarpal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_ring_metacarpal_OI'),
        OrientationInterpolator(DEF='r_ring_middle_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_ring_middle_key'),
            connect(nodeField='keyValue',protoField='r_ring_middle_keyValue'),
            connect(nodeField='value_changed',protoField='r_ring_middle_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_ring_middle_OI'),
        OrientationInterpolator(DEF='r_ring_proximal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_ring_proximal_key'),
            connect(nodeField='keyValue',protoField='r_ring_proximal_keyValue'),
            connect(nodeField='value_changed',protoField='r_ring_proximal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_ring_proximal_OI'),
        OrientationInterpolator(DEF='r_scapula_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_scapula_key'),
            connect(nodeField='keyValue',protoField='r_scapula_keyValue'),
            connect(nodeField='value_changed',protoField='r_scapula_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_scapula_OI'),
        OrientationInterpolator(DEF='r_shoulder_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_shoulder_key'),
            connect(nodeField='keyValue',protoField='r_shoulder_keyValue'),
            connect(nodeField='value_changed',protoField='r_shoulder_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_shoulder_OI'),
        OrientationInterpolator(DEF='r_sternoclavicular_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_sternoclavicular_key'),
            connect(nodeField='keyValue',protoField='r_sternoclavicular_keyValue'),
            connect(nodeField='value_changed',protoField='r_sternoclavicular_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_sternoclavicular_OI'),
        OrientationInterpolator(DEF='r_subtalar_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_subtalar_key'),
            connect(nodeField='keyValue',protoField='r_subtalar_keyValue'),
            connect(nodeField='value_changed',protoField='r_subtalar_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_subtalar_OI'),
        OrientationInterpolator(DEF='r_thigh_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_thigh_key'),
            connect(nodeField='keyValue',protoField='r_thigh_keyValue'),
            connect(nodeField='value_changed',protoField='r_thigh_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_thigh_OI'),
        OrientationInterpolator(DEF='r_thumb1_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_thumb1_key'),
            connect(nodeField='keyValue',protoField='r_thumb1_keyValue'),
            connect(nodeField='value_changed',protoField='r_thumb1_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_thumb1_OI'),
        OrientationInterpolator(DEF='r_thumb2_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_thumb2_key'),
            connect(nodeField='keyValue',protoField='r_thumb2_keyValue'),
            connect(nodeField='value_changed',protoField='r_thumb2_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_thumb2_OI'),
        OrientationInterpolator(DEF='r_thumb3_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_thumb3_key'),
            connect(nodeField='keyValue',protoField='r_thumb3_keyValue'),
            connect(nodeField='value_changed',protoField='r_thumb3_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_thumb3_OI'),
        OrientationInterpolator(DEF='r_thumb_distal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_thumb_distal_key'),
            connect(nodeField='keyValue',protoField='r_thumb_distal_keyValue'),
            connect(nodeField='value_changed',protoField='r_thumb_distal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_thumb_distal_OI'),
        OrientationInterpolator(DEF='r_thumb_metacarpal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_thumb_metacarpal_key'),
            connect(nodeField='keyValue',protoField='r_thumb_metacarpal_keyValue'),
            connect(nodeField='value_changed',protoField='r_thumb_metacarpal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_thumb_metacarpal_OI'),
        OrientationInterpolator(DEF='r_thumb_proximal_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_thumb_proximal_key'),
            connect(nodeField='keyValue',protoField='r_thumb_proximal_keyValue'),
            connect(nodeField='value_changed',protoField='r_thumb_proximal_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_thumb_proximal_OI'),
        OrientationInterpolator(DEF='r_upperarm_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_upperarm_key'),
            connect(nodeField='keyValue',protoField='r_upperarm_keyValue'),
            connect(nodeField='value_changed',protoField='r_upperarm_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_upperarm_OI'),
        OrientationInterpolator(DEF='r_wrist_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='r_wrist_key'),
            connect(nodeField='keyValue',protoField='r_wrist_keyValue'),
            connect(nodeField='value_changed',protoField='r_wrist_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='r_wrist_OI'),
        OrientationInterpolator(DEF='sacroiliac_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='sacroiliac_key'),
            connect(nodeField='keyValue',protoField='sacroiliac_keyValue'),
            connect(nodeField='value_changed',protoField='sacroiliac_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='sacroiliac_OI'),
        OrientationInterpolator(DEF='sacrum_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='sacrum_key'),
            connect(nodeField='keyValue',protoField='sacrum_keyValue'),
            connect(nodeField='value_changed',protoField='sacrum_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='sacrum_OI'),
        OrientationInterpolator(DEF='skull_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='skull_key'),
            connect(nodeField='keyValue',protoField='skull_keyValue'),
            connect(nodeField='value_changed',protoField='skull_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='skull_OI'),
        OrientationInterpolator(DEF='skullbase_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='skullbase_key'),
            connect(nodeField='keyValue',protoField='skullbase_keyValue'),
            connect(nodeField='value_changed',protoField='skullbase_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='skullbase_OI'),
        OrientationInterpolator(DEF='t1_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='t1_key'),
            connect(nodeField='keyValue',protoField='t1_keyValue'),
            connect(nodeField='value_changed',protoField='t1_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='t1_OI'),
        OrientationInterpolator(DEF='t2_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='t2_key'),
            connect(nodeField='keyValue',protoField='t2_keyValue'),
            connect(nodeField='value_changed',protoField='t2_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='t2_OI'),
        OrientationInterpolator(DEF='t3_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='t3_key'),
            connect(nodeField='keyValue',protoField='t3_keyValue'),
            connect(nodeField='value_changed',protoField='t3_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='t3_OI'),
        OrientationInterpolator(DEF='t4_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='t4_key'),
            connect(nodeField='keyValue',protoField='t4_keyValue'),
            connect(nodeField='value_changed',protoField='t4_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='t4_OI'),
        OrientationInterpolator(DEF='t5_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='t5_key'),
            connect(nodeField='keyValue',protoField='t5_keyValue'),
            connect(nodeField='value_changed',protoField='t5_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='t5_OI'),
        OrientationInterpolator(DEF='t6_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='t6_key'),
            connect(nodeField='keyValue',protoField='t6_keyValue'),
            connect(nodeField='value_changed',protoField='t6_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='t6_OI'),
        OrientationInterpolator(DEF='t7_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='t7_key'),
            connect(nodeField='keyValue',protoField='t7_keyValue'),
            connect(nodeField='value_changed',protoField='t7_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='t7_OI'),
        OrientationInterpolator(DEF='t8_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='t8_key'),
            connect(nodeField='keyValue',protoField='t8_keyValue'),
            connect(nodeField='value_changed',protoField='t8_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='t8_OI'),
        OrientationInterpolator(DEF='t9_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='t9_key'),
            connect(nodeField='keyValue',protoField='t9_keyValue'),
            connect(nodeField='value_changed',protoField='t9_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='t9_OI'),
        OrientationInterpolator(DEF='t10_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='t10_key'),
            connect(nodeField='keyValue',protoField='t10_keyValue'),
            connect(nodeField='value_changed',protoField='t10_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='t10_OI'),
        OrientationInterpolator(DEF='t11_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='t11_key'),
            connect(nodeField='keyValue',protoField='t11_keyValue'),
            connect(nodeField='value_changed',protoField='t11_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='t11_OI'),
        OrientationInterpolator(DEF='t12_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='t12_key'),
            connect(nodeField='keyValue',protoField='t12_keyValue'),
            connect(nodeField='value_changed',protoField='t12_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='t12_OI'),
        OrientationInterpolator(DEF='temporomandibular_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='temporomandibular_key'),
            connect(nodeField='keyValue',protoField='temporomandibular_keyValue'),
            connect(nodeField='value_changed',protoField='temporomandibular_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='temporomandibular_OI'),
        OrientationInterpolator(DEF='vc1_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='vc1_key'),
            connect(nodeField='keyValue',protoField='vc1_keyValue'),
            connect(nodeField='value_changed',protoField='vc1_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='vc1_OI'),
        OrientationInterpolator(DEF='vc2_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='vc2_key'),
            connect(nodeField='keyValue',protoField='vc2_keyValue'),
            connect(nodeField='value_changed',protoField='vc2_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='vc2_OI'),
        OrientationInterpolator(DEF='vc3_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='vc3_key'),
            connect(nodeField='keyValue',protoField='vc3_keyValue'),
            connect(nodeField='value_changed',protoField='vc3_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='vc3_OI'),
        OrientationInterpolator(DEF='vc4_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='vc4_key'),
            connect(nodeField='keyValue',protoField='vc4_keyValue'),
            connect(nodeField='value_changed',protoField='vc4_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='vc4_OI'),
        OrientationInterpolator(DEF='vc5_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='vc5_key'),
            connect(nodeField='keyValue',protoField='vc5_keyValue'),
            connect(nodeField='value_changed',protoField='vc5_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='vc5_OI'),
        OrientationInterpolator(DEF='vc6_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='vc6_key'),
            connect(nodeField='keyValue',protoField='vc6_keyValue'),
            connect(nodeField='value_changed',protoField='vc6_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='vc6_OI'),
        OrientationInterpolator(DEF='vc7_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='vc7_key'),
            connect(nodeField='keyValue',protoField='vc7_keyValue'),
            connect(nodeField='value_changed',protoField='vc7_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='vc7_OI'),
        OrientationInterpolator(DEF='vl1_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='vl1_key'),
            connect(nodeField='keyValue',protoField='vl1_keyValue'),
            connect(nodeField='value_changed',protoField='vl1_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='vl1_OI'),
        OrientationInterpolator(DEF='vl2_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='vl2_key'),
            connect(nodeField='keyValue',protoField='vl2_keyValue'),
            connect(nodeField='value_changed',protoField='vl2_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='vl2_OI'),
        OrientationInterpolator(DEF='vl3_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='vl3_key'),
            connect(nodeField='keyValue',protoField='vl3_keyValue'),
            connect(nodeField='value_changed',protoField='vl3_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='vl3_OI'),
        OrientationInterpolator(DEF='vl4_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='vl4_key'),
            connect(nodeField='keyValue',protoField='vl4_keyValue'),
            connect(nodeField='value_changed',protoField='vl4_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='vl4_OI'),
        OrientationInterpolator(DEF='vl5_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='vl5_key'),
            connect(nodeField='keyValue',protoField='vl5_keyValue'),
            connect(nodeField='value_changed',protoField='vl5_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='vl5_OI'),
        OrientationInterpolator(DEF='vt1_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='vt1_key'),
            connect(nodeField='keyValue',protoField='vt1_keyValue'),
            connect(nodeField='value_changed',protoField='vt1_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='vt1_OI'),
        OrientationInterpolator(DEF='vt2_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='vt2_key'),
            connect(nodeField='keyValue',protoField='vt2_keyValue'),
            connect(nodeField='value_changed',protoField='vt2_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='vt2_OI'),
        OrientationInterpolator(DEF='vt3_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='vt3_key'),
            connect(nodeField='keyValue',protoField='vt3_keyValue'),
            connect(nodeField='value_changed',protoField='vt3_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='vt3_OI'),
        OrientationInterpolator(DEF='vt4_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='vt4_key'),
            connect(nodeField='keyValue',protoField='vt4_keyValue'),
            connect(nodeField='value_changed',protoField='vt4_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='vt4_OI'),
        OrientationInterpolator(DEF='vt5_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='vt5_key'),
            connect(nodeField='keyValue',protoField='vt5_keyValue'),
            connect(nodeField='value_changed',protoField='vt5_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='vt5_OI'),
        OrientationInterpolator(DEF='vt6_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='vt6_key'),
            connect(nodeField='keyValue',protoField='vt6_keyValue'),
            connect(nodeField='value_changed',protoField='vt6_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='vt6_OI'),
        OrientationInterpolator(DEF='vt7_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='vt7_key'),
            connect(nodeField='keyValue',protoField='vt7_keyValue'),
            connect(nodeField='value_changed',protoField='vt7_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='vt7_OI'),
        OrientationInterpolator(DEF='vt8_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='vt8_key'),
            connect(nodeField='keyValue',protoField='vt8_keyValue'),
            connect(nodeField='value_changed',protoField='vt8_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='vt8_OI'),
        OrientationInterpolator(DEF='vt9_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='vt9_key'),
            connect(nodeField='keyValue',protoField='vt9_keyValue'),
            connect(nodeField='value_changed',protoField='vt9_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='vt9_OI'),
        OrientationInterpolator(DEF='vt10_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='vt10_key'),
            connect(nodeField='keyValue',protoField='vt10_keyValue'),
            connect(nodeField='value_changed',protoField='vt10_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='vt10_OI'),
        OrientationInterpolator(DEF='vt11_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='vt11_key'),
            connect(nodeField='keyValue',protoField='vt11_keyValue'),
            connect(nodeField='value_changed',protoField='vt11_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='vt11_OI'),
        OrientationInterpolator(DEF='vt12_OI',
          IS=IS(
            connect=[
            connect(nodeField='key',protoField='vt12_key'),
            connect(nodeField='keyValue',protoField='vt12_keyValue'),
            connect(nodeField='value_changed',protoField='vt12_changed')])),
        ROUTE(fromField='fraction_changed',fromNode='BehaviorClock',toField='set_fraction',toNode='vt12_OI')])),
    ProtoDeclare(appinfo='The HAnimBodyBehaviorChooser node allows an author to select one of several HAnimHumanoid bodies and simultaneously apply multiple HAnimBehavior animations to the active body. Individual behaviors may be enabled or disabled at any time.',name='HAnimBodyBehaviorChooser',
      ProtoInterface=ProtoInterface(
        #  TODO: supported Level of Articulation (LOA) might be adapted to more efficiently setup/teardown pertinent ROUTEs 
        field=[
        field(accessType='inputOutput',appinfo='Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3.',name='supportedLOA',type='SFInt32',value=-1),
        field(accessType='initializeOnly',appinfo='[HAnimHumanoid] nodes only',name='HumanoidArray',type='MFNode',
          #  default NULL 
          ),
        #  accessType="inputOutput" avoided to maintain backwards compatilibility with VRML97 scripting constraints 
        field(accessType='initializeOnly',appinfo='whichBody is selected default is initial member of HumanoidArray',name='whichBody',type='SFInt32',value=-1),
        field(accessType='inputOnly',appinfo='whichBody is selected default is none',name='set_whichBody',type='SFInt32'),
        field(accessType='outputOnly',appinfo='whichBody is selected default is none',name='whichBody_changed',type='SFInt32'),
        field(accessType='initializeOnly',appinfo='[HAnimBehavior] nodes only some or all of which may be enabled. Warning: do not animate a single joint with more than one interpolator at a given time.',name='hAnimBehaviorNodes',type='MFNode',
          #  default NULL 
          ),
        field(accessType='initializeOnly',appinfo='indicate which HAnimBehavior nodes are activated, empty indicates all enabled true',name='enabledBehaviorsArray',type='MFBool',
          #  no default values 
          ),
        field(accessType='inputOnly',appinfo='enable corresponding behavior identified by index number',name='enableBehavior',type='SFInt32'),
        field(accessType='inputOnly',appinfo='disable corresponding behavior identified by index number',name='disableBehavior',type='SFInt32'),
        #  shared common TimeSensor inputs for all BehaviorAnimation nodes, connected via ROUTEs 
        field(accessType='inputOutput',name='startTime',type='SFTime',value=0),
        field(accessType='inputOutput',name='stopTime',type='SFTime',value=0)]
        #  TODO: consider named accessors, e.g. enableBehaviorByName and disableBehaviorByName 
        #  TODO: consider addBody, removeBody, addBehavior, removeBehavior 
        #  TODO: consider startBehaviorByIndex, stopBehaviorByIndex, startBehaviorByName, stopBehaviorByName 
        ),
      ProtoBody=ProtoBody(
        children=[
        Switch(DEF='BodySwitch',whichChoice=-1,
          IS=IS(
            connect=[
            connect(nodeField='whichChoice',protoField='whichBody'),
            connect(nodeField='children',protoField='HumanoidArray')])),
        #  note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless 
        Group(DEF='BehaviorArrayHolder',
          IS=IS(
            connect=[
            connect(nodeField='children',protoField='hAnimBehaviorNodes')])),
        TimeSensor(DEF='TimeSensorHolderStartStopTimes',
          IS=IS(
            connect=[
            connect(nodeField='startTime',protoField='startTime'),
            connect(nodeField='stopTime',protoField='stopTime')])),
        Switch(DEF='SupportedLoaHolder2',whichChoice=-1,
          IS=IS(
            connect=[
            connect(nodeField='whichChoice',protoField='supportedLOA')])),
        Script(DEF='BehaviorSelectionScript',directOutput=True,url=["HAnimBehaviorPrototypesScript.js","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypesScript.js"],
          field=[
          field(accessType='initializeOnly',appinfo='[HAnimHumanoid] nodes only',name='HumanoidArray',type='MFNode'),
          field(accessType='initializeOnly',appinfo='whichBody is selected default is none',name='whichBody',type='SFInt32'),
          field(accessType='inputOnly',appinfo='whichBody is selected default is none',name='set_whichBody',type='SFInt32'),
          field(accessType='outputOnly',appinfo='whichBody is selected default is none',name='whichBody_changed',type='SFInt32'),
          field(accessType='initializeOnly',appinfo='[HAnimBehavior] nodes only',name='hAnimBehaviorNodes',type='MFNode',
            #  TODO: might consider accessType="inputOutput" if VRML97 compatibility not needed 
            ),
          field(accessType='initializeOnly',name='enabledBehaviorsArray',type='MFBool'),
          field(accessType='inputOnly',appinfo='enable corresponding behavior',name='enableBehavior',type='SFInt32'),
          field(accessType='inputOnly',appinfo='enable corresponding behavior',name='disableBehavior',type='SFInt32'),
          field(accessType='initializeOnly',name='timeSensorNode',type='SFNode',
            children=[
            TimeSensor(USE='TimeSensorHolderStartStopTimes')]),
          field(accessType='initializeOnly',appinfo='remember prior body index to avoid unnecessary ROUTE teardown and creation',name='previousBodyIndex',type='SFInt32',value=-1),
          field(accessType='initializeOnly',name='traceEnabled',type='SFBool',value=True)],
          IS=IS(
            connect=[
            connect(nodeField='HumanoidArray',protoField='HumanoidArray'),
            connect(nodeField='whichBody',protoField='whichBody'),
            connect(nodeField='set_whichBody',protoField='set_whichBody'),
            connect(nodeField='whichBody_changed',protoField='whichBody_changed'),
            connect(nodeField='hAnimBehaviorNodes',protoField='hAnimBehaviorNodes'),
            connect(nodeField='enabledBehaviorsArray',protoField='enabledBehaviorsArray'),
            connect(nodeField='enableBehavior',protoField='enableBehavior'),
            connect(nodeField='disableBehavior',protoField='disableBehavior')]))])),
    #  TODO: Goal is to have 3 different ways to present a body: local creation, Inline with IMPORT/EXPORT, or external prototype. 
    ProtoInstance(DEF='BehaviorTest1',name='HAnimBehavior',
      #  only one PositionInterpolator key/keyValue definition for entire humanoid - optional 
      fieldValue=[
      fieldValue(name='HumanoidRoot_translation_key',value=[0,0.25,0.5,0.75,1.0]),
      fieldValue(name='HumanoidRoot_translation_keyValue',value=[(0,0,0),(0,0,10),(0,0,20),(0,0,30),(0,0,40),(0,0,50)]),
      #  must have paired overrides of each key/keyValue array being defined 
      fieldValue(name='r_ankle_key',value=[0,0.5,1]),
      fieldValue(name='r_ankle_keyValue',value=[(0,1,0,0),(0,1,0,0.2),(0,1,0,0.4)])]),
    ProtoInstance(DEF='ChooserTest',name='HAnimBodyBehaviorChooser',
      fieldValue=[
      fieldValue(name='HumanoidArray',
        children=[
        HAnimHumanoid(DEF='hanim_DiamondManLOA-1',name='DiamondManLOA-1',version='1.0')]),
      fieldValue(name='whichBody',value=0),
      fieldValue(name='hAnimBehaviorNodes',
        children=[
        ProtoInstance(USE='BehaviorTest1')]),
      fieldValue(name='enabledBehaviorsArray',value=[True])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HAnimBehaviorPrototypes.py")