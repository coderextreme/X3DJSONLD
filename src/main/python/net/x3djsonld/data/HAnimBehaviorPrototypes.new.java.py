####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python HAnimBehaviorPrototypes.py
#
# Python package x3d.py package is available on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package in other Python programs:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    component(name='HAnim',level=1),
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
    ProtoDeclare(name='HAnimBehavior',appinfo='The HAnimBehavior node models a single humanoid behavior either for an entire body or simply parts of a body. It collects a TimeSensor clock with a single PositionInterpolator and multiple OrientationInterpolator nodes to provide a single humanoid behavior.',documentation='https://www.web3d.org/files/specifications/19774/V1.0/',
      ProtoInterface=ProtoInterface(
        #  supported Level of Articulation (LOA) 
        #  shared common input for single TimeSensor animating all interpolators, since different Behaviors may have different cycleInterval durations 
        #  TODO: add other X3D 3.0 TimeSensor fields (pause etc.) 
        #  Not supported: animated translation of individual joints 
        #  pass in key/keyValue array pairs for single PositionInterpolator 
        #  pass in key/keyValue array pairs and expose named output for each OrientationInterpolator, joint by joint 
        field=[
        field(name='supportedLOA',accessType='inputOutput',appinfo='Supported Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3.',type='SFInt32',value=-1),
        field(name='enabled',accessType='inputOutput',appinfo='is this behavior enabled?',type='SFBool',value=True),
        field(name='cycleInterval',accessType='inputOutput',appinfo='how long do these interpolators take to execute?',type='SFTime'),
        field(name='loop',accessType='inputOutput',appinfo='whether or not this behavior loops (e.g. walking) or is single shot (e.g. shake hands).',type='SFBool',value=False),
        field(name='startTime',accessType='inputOutput',appinfo='when time now >= startTime isActive becomes true and TimeSensor becomes active',type='SFTime'),
        field(name='stopTime',accessType='inputOutput',appinfo='when stopTime becomes <= time now isActive becomes false and TimeSensor becomes inactive',type='SFTime'),
        field(name='pauseTime',accessType='inputOutput',appinfo='when time now >= pauseTime isPaused becomes true and TimeSensor becomes paused',type='SFTime'),
        field(name='resumeTime',accessType='inputOutput',appinfo='when resumeTime becomes <= time now isPaused becomes false and TimeSensor becomes inactive',type='SFTime'),
        field(name='cycleTime',accessType='outputOnly',appinfo='cycleTime sends a time outputOnly at startTime and also at the beginning of each new cycle',type='SFTime'),
        field(name='isActive',accessType='outputOnly',appinfo='isActive true/false events are sent when TimeSensor starts/stops running',type='SFBool'),
        field(name='isPaused',accessType='outputOnly',appinfo='isPaused true/false events are sent when TimeSensor is paused/resumed',type='SFBool'),
        field(name='elapsedTime',accessType='outputOnly',appinfo='current elapsed time since TimeSensor activated/running cumulative in seconds and not counting any paused time',type='SFBool'),
        field(name='time',accessType='outputOnly',appinfo='continuously sends the absolute time (since January 1 1970)',type='SFBool'),
        field(name='fraction_changed',accessType='outputOnly',appinfo='fraction_changed continuously sends value in range [0 1] showing time progress in the current cycle.',type='SFFloat'),
        field(name='HumanoidRoot_translation_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='HumanoidRoot_translation_keyValue',accessType='inputOutput',type='MFVec3f',
          #  no default value 
          ),
        field(name='HumanoidRoot_translation_changed',accessType='outputOnly',type='SFVec3f'),
        field(name='HumanoidRoot_rotation_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='HumanoidRoot_rotation_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='HumanoidRoot_rotation_changed',accessType='outputOnly',type='SFRotation'),
        field(name='c1_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='c1_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='c1_changed',accessType='outputOnly',type='SFRotation'),
        field(name='c2_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='c2_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='c2_changed',accessType='outputOnly',type='SFRotation'),
        field(name='c3_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='c3_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='c3_changed',accessType='outputOnly',type='SFRotation'),
        field(name='c4_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='c4_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='c4_changed',accessType='outputOnly',type='SFRotation'),
        field(name='c5_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='c5_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='c5_changed',accessType='outputOnly',type='SFRotation'),
        field(name='c6_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='c6_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='c6_changed',accessType='outputOnly',type='SFRotation'),
        field(name='c7_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='c7_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='c7_changed',accessType='outputOnly',type='SFRotation'),
        field(name='jaw_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='jaw_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='jaw_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l1_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l1_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l1_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l2_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l2_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l2_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l3_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l3_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l3_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l4_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l4_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l4_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l5_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l5_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l5_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_acromioclavicular_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_acromioclavicular_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_acromioclavicular_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_ankle_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_ankle_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_ankle_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_calf_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_calf_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_calf_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_clavicle_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_clavicle_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_clavicle_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_elbow_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_elbow_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_elbow_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_eyeball_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_eyeball_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_eyeball_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_eyeball_joint_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_eyeball_joint_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_eyeball_joint_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_eyebrow_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_eyebrow_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_eyebrow_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_eyebrow_joint_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_eyebrow_joint_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_eyebrow_joint_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_eyelid_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_eyelid_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_eyelid_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_eyelid_joint_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_eyelid_joint_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_eyelid_joint_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_forearm_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_forearm_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_forearm_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_forefoot_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_forefoot_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_forefoot_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_hand_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_hand_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_hand_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_hindfoot_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_hindfoot_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_hindfoot_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_hip_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_hip_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_hip_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_index0_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_index0_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_index0_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_index1_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_index1_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_index1_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_index2_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_index2_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_index2_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_index3_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_index3_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_index3_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_index_distal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_index_distal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_index_distal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_index_metacarpal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_index_metacarpal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_index_metacarpal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_index_middle_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_index_middle_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_index_middle_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_index_proximal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_index_proximal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_index_proximal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_knee_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_knee_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_knee_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_metatarsal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_metatarsal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_metatarsal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_middistal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_middistal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_middistal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_middle0_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_middle0_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_middle0_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_middle1_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_middle1_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_middle1_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_middle2_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_middle2_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_middle2_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_middle3_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_middle3_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_middle3_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_middle_distal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_middle_distal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_middle_distal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_middle_metacarpal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_middle_metacarpal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_middle_metacarpal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_middle_middle_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_middle_middle_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_middle_middle_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_middle_proximal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_middle_proximal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_middle_proximal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_midproximal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_midproximal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_midproximal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_midtarsal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_midtarsal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_midtarsal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_pinky0_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_pinky0_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_pinky0_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_pinky1_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_pinky1_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_pinky1_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_pinky2_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_pinky2_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_pinky2_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_pinky3_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_pinky3_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_pinky3_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_pinky_distal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_pinky_distal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_pinky_distal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_pinky_metacarpal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_pinky_metacarpal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_pinky_metacarpal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_pinky_middle_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_pinky_middle_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_pinky_middle_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_pinky_proximal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_pinky_proximal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_pinky_proximal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_ring0_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_ring0_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_ring0_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_ring1_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_ring1_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_ring1_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_ring2_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_ring2_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_ring2_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_ring3_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_ring3_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_ring3_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_ring_distal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_ring_distal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_ring_distal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_ring_metacarpal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_ring_metacarpal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_ring_metacarpal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_ring_middle_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_ring_middle_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_ring_middle_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_ring_proximal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_ring_proximal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_ring_proximal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_scapula_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_scapula_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_scapula_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_shoulder_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_shoulder_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_shoulder_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_sternoclavicular_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_sternoclavicular_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_sternoclavicular_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_subtalar_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_subtalar_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_subtalar_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_thigh_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_thigh_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_thigh_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_thumb1_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_thumb1_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_thumb1_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_thumb2_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_thumb2_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_thumb2_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_thumb3_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_thumb3_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_thumb3_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_thumb_distal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_thumb_distal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_thumb_distal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_thumb_metacarpal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_thumb_metacarpal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_thumb_metacarpal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_thumb_proximal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_thumb_proximal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_thumb_proximal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_upperarm_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_upperarm_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_upperarm_changed',accessType='outputOnly',type='SFRotation'),
        field(name='l_wrist_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='l_wrist_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='l_wrist_changed',accessType='outputOnly',type='SFRotation'),
        field(name='pelvis_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='pelvis_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='pelvis_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_acromioclavicular_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_acromioclavicular_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_acromioclavicular_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_ankle_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_ankle_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_ankle_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_calf_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_calf_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_calf_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_clavicle_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_clavicle_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_clavicle_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_elbow_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_elbow_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_elbow_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_eyeball_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_eyeball_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_eyeball_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_eyeball_joint_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_eyeball_joint_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_eyeball_joint_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_eyebrow_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_eyebrow_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_eyebrow_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_eyebrow_joint_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_eyebrow_joint_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_eyebrow_joint_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_eyelid_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_eyelid_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_eyelid_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_eyelid_joint_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_eyelid_joint_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_eyelid_joint_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_forearm_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_forearm_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_forearm_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_forefoot_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_forefoot_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_forefoot_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_hand_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_hand_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_hand_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_hindfoot_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_hindfoot_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_hindfoot_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_hip_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_hip_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_hip_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_index0_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_index0_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_index0_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_index1_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_index1_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_index1_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_index2_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_index2_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_index2_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_index3_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_index3_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_index3_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_index_distal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_index_distal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_index_distal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_index_metacarpal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_index_metacarpal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_index_metacarpal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_index_middle_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_index_middle_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_index_middle_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_index_proximal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_index_proximal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_index_proximal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_knee_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_knee_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_knee_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_metatarsal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_metatarsal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_metatarsal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_middistal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_middistal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_middistal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_middle0_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_middle0_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_middle0_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_middle1_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_middle1_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_middle1_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_middle2_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_middle2_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_middle2_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_middle3_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_middle3_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_middle3_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_middle_distal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_middle_distal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_middle_distal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_middle_metacarpal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_middle_metacarpal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_middle_metacarpal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_middle_middle_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_middle_middle_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_middle_middle_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_middle_proximal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_middle_proximal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_middle_proximal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_midproximal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_midproximal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_midproximal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_midtarsal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_midtarsal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_midtarsal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_pinky0_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_pinky0_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_pinky0_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_pinky1_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_pinky1_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_pinky1_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_pinky2_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_pinky2_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_pinky2_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_pinky3_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_pinky3_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_pinky3_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_pinky_distal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_pinky_distal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_pinky_distal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_pinky_metacarpal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_pinky_metacarpal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_pinky_metacarpal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_pinky_middle_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_pinky_middle_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_pinky_middle_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_pinky_proximal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_pinky_proximal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_pinky_proximal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_ring0_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_ring0_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_ring0_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_ring1_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_ring1_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_ring1_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_ring2_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_ring2_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_ring2_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_ring3_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_ring3_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_ring3_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_ring_distal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_ring_distal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_ring_distal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_ring_metacarpal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_ring_metacarpal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_ring_metacarpal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_ring_middle_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_ring_middle_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_ring_middle_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_ring_proximal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_ring_proximal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_ring_proximal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_scapula_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_scapula_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_scapula_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_shoulder_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_shoulder_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_shoulder_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_sternoclavicular_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_sternoclavicular_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_sternoclavicular_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_subtalar_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_subtalar_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_subtalar_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_thigh_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_thigh_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_thigh_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_thumb1_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_thumb1_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_thumb1_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_thumb2_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_thumb2_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_thumb2_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_thumb3_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_thumb3_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_thumb3_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_thumb_distal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_thumb_distal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_thumb_distal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_thumb_metacarpal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_thumb_metacarpal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_thumb_metacarpal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_thumb_proximal_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_thumb_proximal_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_thumb_proximal_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_upperarm_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_upperarm_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_upperarm_changed',accessType='outputOnly',type='SFRotation'),
        field(name='r_wrist_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='r_wrist_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='r_wrist_changed',accessType='outputOnly',type='SFRotation'),
        field(name='sacroiliac_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='sacroiliac_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='sacroiliac_changed',accessType='outputOnly',type='SFRotation'),
        field(name='sacrum_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='sacrum_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='sacrum_changed',accessType='outputOnly',type='SFRotation'),
        field(name='skull_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='skull_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='skull_changed',accessType='outputOnly',type='SFRotation'),
        field(name='skullbase_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='skullbase_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='skullbase_changed',accessType='outputOnly',type='SFRotation'),
        field(name='t10_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='t10_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='t10_changed',accessType='outputOnly',type='SFRotation'),
        field(name='t11_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='t11_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='t11_changed',accessType='outputOnly',type='SFRotation'),
        field(name='t12_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='t12_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='t12_changed',accessType='outputOnly',type='SFRotation'),
        field(name='t1_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='t1_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='t1_changed',accessType='outputOnly',type='SFRotation'),
        field(name='t2_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='t2_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='t2_changed',accessType='outputOnly',type='SFRotation'),
        field(name='t3_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='t3_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='t3_changed',accessType='outputOnly',type='SFRotation'),
        field(name='t4_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='t4_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='t4_changed',accessType='outputOnly',type='SFRotation'),
        field(name='t5_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='t5_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='t5_changed',accessType='outputOnly',type='SFRotation'),
        field(name='t6_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='t6_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='t6_changed',accessType='outputOnly',type='SFRotation'),
        field(name='t7_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='t7_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='t7_changed',accessType='outputOnly',type='SFRotation'),
        field(name='t8_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='t8_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='t8_changed',accessType='outputOnly',type='SFRotation'),
        field(name='t9_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='t9_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='t9_changed',accessType='outputOnly',type='SFRotation'),
        field(name='temporomandibular_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='temporomandibular_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='temporomandibular_changed',accessType='outputOnly',type='SFRotation'),
        field(name='vc1_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='vc1_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='vc1_changed',accessType='outputOnly',type='SFRotation'),
        field(name='vc2_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='vc2_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='vc2_changed',accessType='outputOnly',type='SFRotation'),
        field(name='vc3_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='vc3_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='vc3_changed',accessType='outputOnly',type='SFRotation'),
        field(name='vc4_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='vc4_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='vc4_changed',accessType='outputOnly',type='SFRotation'),
        field(name='vc5_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='vc5_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='vc5_changed',accessType='outputOnly',type='SFRotation'),
        field(name='vc6_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='vc6_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='vc6_changed',accessType='outputOnly',type='SFRotation'),
        field(name='vc7_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='vc7_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='vc7_changed',accessType='outputOnly',type='SFRotation'),
        field(name='vl1_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='vl1_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='vl1_changed',accessType='outputOnly',type='SFRotation'),
        field(name='vl2_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='vl2_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='vl2_changed',accessType='outputOnly',type='SFRotation'),
        field(name='vl3_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='vl3_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='vl3_changed',accessType='outputOnly',type='SFRotation'),
        field(name='vl4_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='vl4_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='vl4_changed',accessType='outputOnly',type='SFRotation'),
        field(name='vl5_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='vl5_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='vl5_changed',accessType='outputOnly',type='SFRotation'),
        field(name='vt10_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='vt10_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='vt10_changed',accessType='outputOnly',type='SFRotation'),
        field(name='vt11_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='vt11_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='vt11_changed',accessType='outputOnly',type='SFRotation'),
        field(name='vt12_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='vt12_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='vt12_changed',accessType='outputOnly',type='SFRotation'),
        field(name='vt1_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='vt1_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='vt1_changed',accessType='outputOnly',type='SFRotation'),
        field(name='vt2_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='vt2_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='vt2_changed',accessType='outputOnly',type='SFRotation'),
        field(name='vt3_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='vt3_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='vt3_changed',accessType='outputOnly',type='SFRotation'),
        field(name='vt4_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='vt4_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='vt4_changed',accessType='outputOnly',type='SFRotation'),
        field(name='vt5_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='vt5_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='vt5_changed',accessType='outputOnly',type='SFRotation'),
        field(name='vt6_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='vt6_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='vt6_changed',accessType='outputOnly',type='SFRotation'),
        field(name='vt7_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='vt7_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='vt7_changed',accessType='outputOnly',type='SFRotation'),
        field(name='vt8_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='vt8_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='vt8_changed',accessType='outputOnly',type='SFRotation'),
        field(name='vt9_key',accessType='inputOutput',type='MFFloat',
          #  no default value 
          ),
        field(name='vt9_keyValue',accessType='inputOutput',type='MFRotation',
          #  no default value 
          ),
        field(name='vt9_changed',accessType='outputOnly',type='SFRotation')]),
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
    ProtoDeclare(name='HAnimBodyBehaviorChooser',appinfo='The HAnimBodyBehaviorChooser node allows an author to select one of several HAnimHumanoid bodies and simultaneously apply multiple HAnimBehavior animations to the active body. Individual behaviors may be enabled or disabled at any time.',
      ProtoInterface=ProtoInterface(
        #  TODO: supported Level of Articulation (LOA) might be adapted to more efficiently setup/teardown pertinent ROUTEs 
        #  accessType="inputOutput" avoided to maintain backwards compatilibility with VRML97 scripting constraints 
        #  shared common TimeSensor inputs for all BehaviorAnimation nodes, connected via ROUTEs 
        #  TODO: consider named accessors, e.g. enableBehaviorByName and disableBehaviorByName 
        #  TODO: consider addBody, removeBody, addBehavior, removeBehavior 
        #  TODO: consider startBehaviorByIndex, stopBehaviorByIndex, startBehaviorByName, stopBehaviorByName 
        field=[
        field(name='supportedLOA',accessType='inputOutput',appinfo='Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3.',type='SFInt32',value=-1),
        field(name='HumanoidArray',accessType='initializeOnly',appinfo='[HAnimHumanoid] nodes only',type='MFNode',
          #  default NULL 
          ),
        field(name='whichBody',accessType='initializeOnly',appinfo='whichBody is selected default is initial member of HumanoidArray',type='SFInt32',value=-1),
        field(name='set_whichBody',accessType='inputOnly',appinfo='whichBody is selected default is none',type='SFInt32'),
        field(name='whichBody_changed',accessType='outputOnly',appinfo='whichBody is selected default is none',type='SFInt32'),
        field(name='hAnimBehaviorNodes',accessType='initializeOnly',appinfo='[HAnimBehavior] nodes only some or all of which may be enabled. Warning: do not animate a single joint with more than one interpolator at a given time.',type='MFNode',
          #  default NULL 
          ),
        field(name='enabledBehaviorsArray',accessType='initializeOnly',appinfo='indicate which HAnimBehavior nodes are activated, empty indicates all enabled true',type='MFBool',
          #  no default values 
          ),
        field(name='enableBehavior',accessType='inputOnly',appinfo='enable corresponding behavior identified by index number',type='SFInt32'),
        field(name='disableBehavior',accessType='inputOnly',appinfo='disable corresponding behavior identified by index number',type='SFInt32'),
        field(name='startTime',accessType='inputOutput',type='SFTime'),
        field(name='stopTime',accessType='inputOutput',type='SFTime')]),
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
          field(name='HumanoidArray',accessType='initializeOnly',appinfo='[HAnimHumanoid] nodes only',type='MFNode'),
          field(name='whichBody',accessType='initializeOnly',appinfo='whichBody is selected default is none',type='SFInt32'),
          field(name='set_whichBody',accessType='inputOnly',appinfo='whichBody is selected default is none',type='SFInt32'),
          field(name='whichBody_changed',accessType='outputOnly',appinfo='whichBody is selected default is none',type='SFInt32'),
          field(name='hAnimBehaviorNodes',accessType='initializeOnly',appinfo='[HAnimBehavior] nodes only',type='MFNode',
            #  TODO: might consider accessType="inputOutput" if VRML97 compatibility not needed 
            ),
          field(name='enabledBehaviorsArray',accessType='initializeOnly',type='MFBool'),
          field(name='enableBehavior',accessType='inputOnly',appinfo='enable corresponding behavior',type='SFInt32'),
          field(name='disableBehavior',accessType='inputOnly',appinfo='enable corresponding behavior',type='SFInt32'),
          field(name='timeSensorNode',accessType='initializeOnly',type='SFNode',
            children=[
            TimeSensor(USE='TimeSensorHolderStartStopTimes')]),
          field(name='previousBodyIndex',accessType='initializeOnly',appinfo='remember prior body index to avoid unnecessary ROUTE teardown and creation',type='SFInt32',value=-1),
          field(name='traceEnabled',accessType='initializeOnly',type='SFBool',value=True)],
          IS=IS(
            connect=[
            connect(nodeField='HumanoidArray',protoField='HumanoidArray'),
            connect(nodeField='whichBody',protoField='whichBody'),
            connect(nodeField='set_whichBody',protoField='set_whichBody'),
            connect(nodeField='whichBody_changed',protoField='whichBody_changed'),
            connect(nodeField='hAnimBehaviorNodes',protoField='hAnimBehaviorNodes'),
            connect(nodeField='enabledBehaviorsArray',protoField='enabledBehaviorsArray'),
            connect(nodeField='enableBehavior',protoField='enableBehavior'),
            connect(nodeField='disableBehavior',protoField='disableBehavior')]),

        sourceCode="""
ecmascript:

""")])),
    #  TODO: Goal is to have 3 different ways to present a body: local creation, Inline with IMPORT/EXPORT, or external prototype. 
    ProtoInstance(DEF='BehaviorTest1',name='HAnimBehavior',
      #  only one PositionInterpolator key/keyValue definition for entire humanoid - optional 
      #  must have paired overrides of each key/keyValue array being defined 
      fieldValue=[
      fieldValue(name='HumanoidRoot_translation_key',value=[0,0.25,0.5,0.75,1]),
      fieldValue(name='HumanoidRoot_translation_keyValue',value=[(0,0,0),(0,0,10),(0,0,20),(0,0,30),(0,0,40),(0,0,50)]),
      fieldValue(name='r_ankle_key',value=[0,0.5,1]),
      fieldValue(name='r_ankle_keyValue',value=[(0,1,0,0),(0,1,0,0.2),(0,1,0,0.4)])]),
    ProtoInstance(DEF='ChooserTest',name='HAnimBodyBehaviorChooser',
      fieldValue=[
      fieldValue(name='HumanoidArray',
        children=[
        HAnimHumanoid(DEF='hanim_DiamondManLOA-1',name='DiamondManLOA-1',version='2.0')]),
      fieldValue(name='whichBody',value=0),
      fieldValue(name='hAnimBehaviorNodes',
        children=[
        ProtoInstance(USE='BehaviorTest1')]),
      fieldValue(name='enabledBehaviorsArray',value=[True])])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for HAnimBehaviorPrototypes.py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python HAnimBehaviorPrototypes.py load and self-test diagnostics complete.")
