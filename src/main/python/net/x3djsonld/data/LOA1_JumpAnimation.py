####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python LOA1_JumpAnimation.py
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

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    meta(content='LOA1_JumpAnimation.x3d',name='title'),
    meta(content='Humanoid animation prototype reusable by any Humanoid.',name='description'),
    meta(content='Cindy Ballreich cindy@ballreich.net 3Name3D',name='creator'),
    meta(content='1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved.',name='rights'),
    meta(content='Scott Tufts',name='translator'),
    meta(content='1 December 2001',name='translated'),
    meta(content='23 May 2020',name='modified'),
    meta(content='https://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl',name='reference'),
    meta(content='https://www.HAnim.org',name='reference'),
    meta(content='https://HAnim.org/Models',name='reference'),
    meta(content='https://HAnim.org/Nodes',name='reference'),
    meta(content='InterchangableActorsViaDynamicRouting Nancy jump Animation HAnim 2001',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_JumpAnimation.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='LOA1_JumpAnimation.x3d'),
    ProtoDeclare(name='LOA1_JumpAnimation',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='cycleInterval',type='SFTime',value=2),
        field(accessType='inputOutput',name='enabled',type='SFBool',value=True),
        field(accessType='inputOutput',name='loop',type='SFBool',value=True),
        field(accessType='inputOutput',name='startTime',type='SFTime',value=0),
        field(accessType='inputOutput',name='stopTime',type='SFTime',value=-1),
        field(accessType='outputOnly',name='fraction_changed',type='SFFloat'),
        field(accessType='outputOnly',name='isActive',type='SFBool'),
        field(accessType='outputOnly',name='HumanoidRoot_translation_changed',type='SFVec3f'),
        field(accessType='outputOnly',name='HumanoidRoot_rotation_changed',type='SFRotation'),
        field(accessType='outputOnly',name='lower_body_rotation_changed',type='SFRotation'),
        field(accessType='outputOnly',name='l_hip_rotation_changed',type='SFRotation'),
        field(accessType='outputOnly',name='l_knee_rotation_changed',type='SFRotation'),
        field(accessType='outputOnly',name='l_ankle_rotation_changed',type='SFRotation'),
        field(accessType='outputOnly',name='l_midtarsal_rotation_changed',type='SFRotation'),
        field(accessType='outputOnly',name='r_hip_rotation_changed',type='SFRotation'),
        field(accessType='outputOnly',name='r_knee_rotation_changed',type='SFRotation'),
        field(accessType='outputOnly',name='r_ankle_rotation_changed',type='SFRotation'),
        field(accessType='outputOnly',name='r_midtarsal_rotation_changed',type='SFRotation'),
        field(accessType='outputOnly',name='vl5_rotation_changed',type='SFRotation'),
        field(accessType='outputOnly',name='skullbase_rotation_changed',type='SFRotation'),
        field(accessType='outputOnly',name='l_shoulder_rotation_changed',type='SFRotation'),
        field(accessType='outputOnly',name='l_elbow_rotation_changed',type='SFRotation'),
        field(accessType='outputOnly',name='l_wrist_rotation_changed',type='SFRotation'),
        field(accessType='outputOnly',name='r_shoulder_rotation_changed',type='SFRotation'),
        field(accessType='outputOnly',name='r_elbow_rotation_changed',type='SFRotation'),
        field(accessType='outputOnly',name='r_wrist_rotation_changed',type='SFRotation')]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          TimeSensor(DEF='TIMER',loop=True,
            IS=IS(
              connect=[
              connect(nodeField='cycleInterval',protoField='cycleInterval'),
              connect(nodeField='enabled',protoField='enabled'),
              connect(nodeField='loop',protoField='loop'),
              connect(nodeField='startTime',protoField='startTime'),
              connect(nodeField='stopTime',protoField='stopTime'),
              connect(nodeField='fraction_changed',protoField='fraction_changed'),
              connect(nodeField='isActive',protoField='isActive')])),
          PositionInterpolator(DEF='HUMANOIDROOT_POSITION_ANIMATOR',key=[0.0,0.04,0.08,0.12,0.16,0.2,0.24,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.8,0.84,0.88,0.92,0.96,1.0],keyValue=[(0.0,0.0,0.0),(0.0,-0.01264,-0.01289),(0.0,-0.04712,-0.03738),(-3.345E-4,-0.1049,-0.05353),(-5.712E-4,-0.1892,-0.06561),(-8.233E-4,-0.286,-0.06276),(-9.591E-4,-0.3795,-0.05148),(-0.00106,-0.4484,-0.03656),(-0.00106,-0.4484,-0.03656),(-0.001122,-0.3269,-0.1499),(-8.616E-4,-0.13,-0.06358),(-5.128E-4,-0.03123,-0.05488),(4.779E-4,0.053,0.02732),(1.728E-4,0.4148,0.006873),(0.0,0.03045,0.02148),(0.0,-0.01299,-0.01057),(0.0,-0.06932,-0.01064),(1.365E-4,-0.1037,-0.005059),(1.279E-4,-0.07198,-0.007596),(1.41E-4,-0.01626,-0.004935),(0.0,0.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='HumanoidRoot_translation_changed')])),
          OrientationInterpolator(DEF='HUMANOIDROOT_ANIMATOR',key=[0.0,0.28,0.32,0.48,0.64,0.76,1.0],keyValue=[(0.0,0.0,1.0,0.0),(1.0,0.0,0.0,0.3273),(1.0,0.0,0.0,0.3273),(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='HumanoidRoot_rotation_changed')])),
          OrientationInterpolator(DEF='SACROILIAC_ANIMATOR',key=[0.0,0.28,0.32,0.48,0.76,1.0],keyValue=[(0.0,0.0,1.0,0.0),(1.0,0.0,0.0,0.1892),(1.0,0.0,0.0,0.1892),(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='lower_body_rotation_changed')])),
          OrientationInterpolator(DEF='L_HIP_ANIMATOR',key=[0.0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1.0],keyValue=[(0.0,0.0,1.0,0.0),(1.0,0.0,0.0,4.349),(1.0,0.0,0.0,4.349),(1.0,0.0,0.0,4.615),(-1.0,0.0,0.0,0.9136),(-1.0,0.0,0.0,0.3614),(0.0,0.0,1.0,0.0),(-1.0,0.0,0.0,0.7869),(-1.0,0.0,0.0,0.3918),(-1.0,0.0,0.0,0.5433),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='l_hip_rotation_changed')])),
          OrientationInterpolator(DEF='L_KNEE_ANIMATOR',key=[0.0,0.28,0.32,0.48,0.64,0.76,0.88,1.0],keyValue=[(0.0,0.0,1.0,0.0),(1.0,0.0,0.0,2.047),(1.0,0.0,0.0,2.047),(0.0,0.0,1.0,0.0),(1.0,0.0,0.0,1.566),(1.0,0.0,0.0,0.5913),(1.0,0.0,0.0,0.9235),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='l_knee_rotation_changed')])),
          OrientationInterpolator(DEF='L_ANKLE_ANIMATOR',key=[0.0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1.0],keyValue=[(0.0,0.0,1.0,0.0),(-1.0,0.0,0.0,0.625),(-1.0,0.0,0.0,0.625),(-1.0,0.0,0.0,0.3364),(-1.0,0.0,0.0,0.2742),(-1.0,0.0,0.0,0.05078),(1.0,0.0,0.0,0.2833),(1.0,0.0,0.0,0.6667),(1.0,0.0,0.0,0.2833),(-1.0,0.0,0.0,0.2108),(-1.0,0.0,0.0,0.375),(-1.0,0.0,0.0,0.3146),(-1.0,0.0,0.0,0.1174),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='l_ankle_rotation_changed')])),
          OrientationInterpolator(DEF='L_MIDTARSAL_ANIMATOR',key=[0,0.5,1],keyValue=[(1,0,0,0),(1,0,0,-0.2),(1,0,0,0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='l_midtarsal_rotation_changed')])),
          OrientationInterpolator(DEF='R_HIP_ANIMATOR',key=[0.0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1.0],keyValue=[(0.0,0.0,1.0,0.0),(1.0,0.0,0.0,4.433),(1.0,0.0,0.0,4.433),(1.0,0.0,0.0,4.647),(-1.0,0.0,0.0,0.8943),(-1.0,0.0,0.0,0.3698),(0.0,0.0,1.0,0.0),(-1.0,0.0,0.0,0.4963),(-1.0,0.0,0.0,0.3829),(-1.0,0.0,0.0,0.5169),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='r_hip_rotation_changed')])),
          OrientationInterpolator(DEF='R_KNEE_ANIMATOR',key=[0.0,0.28,0.32,0.48,0.64,0.76,0.88,1.0],keyValue=[(0.0,0.0,1.0,0.0),(1.0,0.0,0.0,2.005),(1.0,0.0,0.0,2.005),(0.0,0.0,1.0,0.0),(1.0,0.0,0.0,0.9507),(1.0,0.0,0.0,0.5845),(1.0,0.0,0.0,0.9054),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='r_knee_rotation_changed')])),
          OrientationInterpolator(DEF='R_ANKLE_ANIMATOR',key=[0.0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1.0],keyValue=[(0.0,0.0,1.0,0.0),(-1.0,0.0,0.0,0.6735),(-1.0,0.0,0.0,0.6735),(-1.0,0.0,0.0,0.3527),(-1.0,0.0,0.0,0.3038),(-1.0,0.0,0.0,0.07964),(1.0,0.0,0.0,0.3001),(1.0,0.0,0.0,0.6509),(1.0,0.0,0.0,0.3001),(-1.0,0.0,0.0,0.2087),(-1.0,0.0,0.0,0.3756),(-1.0,0.0,0.0,0.3279),(-1.0,0.0,0.0,0.1193),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='r_ankle_rotation_changed')])),
          OrientationInterpolator(DEF='R_MIDTARSAL_ANIMATOR',key=[0,0.5,1],keyValue=[(1,0,0,-0.2),(1,0,0,0),(1,0,0,-0.2)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='r_midtarsal_rotation_changed')])),
          OrientationInterpolator(DEF='VL5_ANIMATOR',key=[0,0.2083,0.375,0.75,0.8333,1],keyValue=[(0,1,0,0.0826),(-0.01972,-0.5974,0.8017,0.08231),(0.009296,-0.9648,0.2627,0.1734),(-0.01238,0.9549,-0.2968,0.08732),(-0.008125,0.9691,-0.2463,0.158),(0,1,0,0.0826)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='vl5_rotation_changed')])),
          OrientationInterpolator(DEF='SKULLBASE_ANIMATOR',key=[0.0,0.28,0.32,0.48,0.76,1.0],keyValue=[(0.0,0.0,1.0,0.0),(-1.0,0.0,0.0,0.5989),(-1.0,0.0,0.0,0.5989),(-1.0,0.0,0.0,0.3216),(1.0,0.0,0.0,0.06503),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='skullbase_rotation_changed')])),
          OrientationInterpolator(DEF='L_SHOULDER_ANIMATOR',key=[0.0,0.28,0.32,0.64,0.76,0.88,1.0],keyValue=[(0.0,0.0,1.0,0.0),(-0.9987,0.02554,0.04498,1.57),(-0.9987,0.02554,0.04498,1.57),(1.0,4.113E-4,0.003055,4.114),(-0.8413,0.3238,0.4329,1.453),(-0.877,0.4198,0.2337,0.6009),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='l_shoulder_rotation_changed')])),
          OrientationInterpolator(DEF='L_ELBOW_ANIMATOR',key=[0.0,0.28,0.32,0.64,0.76,1.0],keyValue=[(0.0,0.0,1.0,0.0),(-1.0,0.0,0.0,0.1229),(-1.0,0.0,0.0,0.1229),(-1.0,0.0,0.0,0.5976),(-1.0,0.0,0.0,0.3917),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='l_elbow_rotation_changed')])),
          OrientationInterpolator(DEF='L_WRIST_ANIMATOR',key=[0.0,0.28,0.32,0.64,0.76,0.88,1.0],keyValue=[(0.0,0.0,1.0,0.0),(0.0672928,0.989475,-0.128107,4.15574),(0.0672928,0.989475,-0.128107,4.15574),(0.00364942,0.999901,0.0135896,4.5822),(0.0,-1.0,0.0,0.655922),(-5.0618E-4,-0.999999,0.0012782,1.28397),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='l_wrist_rotation_changed')])),
          OrientationInterpolator(DEF='R_SHOULDER_ANIMATOR',key=[0.0,0.28,0.32,0.64,0.76,0.88,1.0],keyValue=[(0.0,0.0,1.0,0.0),(0.9992,0.02042,0.03558,4.688),(0.9992,0.02042,0.03558,4.688),(0.9989,-0.04623,0.005159,4.079),(-0.8687,-0.2525,-0.4261,1.501),(-0.941,-0.2893,-0.1754,0.4788),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='r_shoulder_rotation_changed')])),
          OrientationInterpolator(DEF='R_ELBOW_ANIMATOR',key=[0.0,0.28,0.32,0.64,0.76,1.0],keyValue=[(0.0,0.0,1.0,0.0),(-1.0,0.0,0.0,0.04151),(-1.0,0.0,0.0,0.04151),(-1.0,0.0,0.0,0.5855),(-1.0,0.0,0.0,0.5852),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='r_elbow_rotation_changed')])),
          OrientationInterpolator(DEF='R_WRIST_ANIMATOR',key=[0.0,0.28,0.32,0.64,0.76,1.0],keyValue=[(0.0,0.0,1.0,0.0),(-0.0585279,0.983903,-0.168849,1.85956),(-0.0585279,0.983903,-0.168849,1.85956),(-0.00222418,0.99801,-0.0630095,1.46072),(0.0,1.0,0.0,0.497349),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='r_wrist_rotation_changed')]))]),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='HUMANOIDROOT_POSITION_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='HUMANOIDROOT_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='SACROILIAC_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='L_HIP_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='L_KNEE_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='L_ANKLE_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='L_MIDTARSAL_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='R_HIP_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='R_KNEE_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='R_ANKLE_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='R_MIDTARSAL_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='VL5_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='SKULLBASE_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='L_SHOULDER_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='L_ELBOW_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='L_WRIST_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='R_SHOULDER_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='R_ELBOW_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='R_WRIST_ANIMATOR')])),
    Anchor(description='see InterchangableActorsViaDynamicRouting scene',parameter=["target=_blank"],url=["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"],
      children=[
      Shape(
        geometry=Text(string=["LOA1_JumpAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.8)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0.2))))])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for LOA1_JumpAnimation.py:')
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

print("python LOA1_JumpAnimation.py load and self-test diagnostics complete.")
