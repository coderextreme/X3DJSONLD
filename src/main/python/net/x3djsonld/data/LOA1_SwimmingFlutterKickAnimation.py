####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python LOA1_SwimmingFlutterKickAnimation.py
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
    meta(content='LOA1_SwimmingFlutterKickAnimation.x3d',name='title'),
    meta(content='Humanoid animation prototype reusable by any Humanoid.',name='description'),
    meta(content='Etsuko Lippi',name='creator'),
    meta(content='13 December 2001',name='created'),
    meta(content='23 May 2020',name='modified'),
    meta(content='not yet tested, need to compare with NancyDivingExample interpolators',name='warning'),
    meta(content='https://www.HAnim.org',name='reference'),
    meta(content='https://HAnim.org/Models',name='reference'),
    meta(content='https://HAnim.org/Nodes',name='reference'),
    meta(content='Swimming flutter kick Animation HAnim 2001',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_SwimmingFlutterKickAnimation.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='LOA1_SwimmingFlutterKickAnimation.x3d'),
    ProtoDeclare(name='LOA1_DivingAnimation',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='cycleInterval',type='SFTime',value=7),
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
          PositionInterpolator(DEF='HUMANOIDROOT_POSITION_ANIMATOR',key=[0.0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1.0],keyValue=[(0.0,-0.00928,0.0),(0.0,-0.003858,0.0),(0.0,-0.008847,0.0),(0.0,-0.01486,0.0),(0.0,-0.02641,0.0),(0.0,-0.03934,0.0),(0.0,-0.0502,0.0),(0.0,-0.07469,0.0),(0.0,-0.02732,0.0),(0.0,-0.01608,0.0),(0.0,-0.01129,0.0),(0.0,-0.005819,0.0),(0.0,-0.002004,0.0),(0.0,-0.002579,0.0),(0.0,-0.0143,0.0),(0.0,-0.03799,0.0),(0.0,-0.05648,0.0),(0.0,-0.045,0.0),(0.0,-0.00928,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='HumanoidRoot_translation_changed')])),
          OrientationInterpolator(DEF='HUMANOIDROOT_ANIMATOR',key=[0.0,1.0],keyValue=[(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='HumanoidRoot_rotation_changed')])),
          #  no SACROILIAC_ANIMATOR 
          OrientationInterpolator(DEF='L_HIP_ANIMATOR',key=[0.0,0.25,0.375,0.6667,0.7917,0.9167,1.0],keyValue=[(-0.873,0.06094,0.484,0.2865),(0.9963,-0.01057,0.08481,0.2488),(0.9965,0.01591,-0.08222,0.3836),(-1.0,0.0,0.0,0.5518),(-0.9964,0.02231,0.0817,0.5351),(-0.9809,0.04912,0.1881,0.5204),(-0.873,0.06094,0.484,0.2865)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='l_hip_rotation_changed')])),
          OrientationInterpolator(DEF='L_KNEE_ANIMATOR',key=[0.0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1.0],keyValue=[(1.0,0.0,0.0,0.3226),(1.0,0.0,0.0,0.1556),(1.0,0.0,0.0,0.08678),(1.0,0.0,0.0,0.8751),(1.0,0.0,0.0,1.131),(1.0,0.0,0.0,0.09961),(1.0,0.0,0.0,0.3942),(1.0,0.0,0.0,0.3226)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='l_knee_rotation_changed')])),
          OrientationInterpolator(DEF='L_ANKLE_ANIMATOR',key=[0.0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1.0],keyValue=[(1.0,0.0,0.0,0.6001),(1.0,0.0,0.0,0.6509),(1.0,0.0,0.0,0.6001),(1.0,0.0,0.0,0.6001),(1.0,0.0,0.0,0.6509),(1.0,0.0,0.0,0.6001),(1.0,0.0,0.0,0.6001),(1.0,0.0,0.0,0.6509),(1.0,0.0,0.0,0.6001),(1.0,0.0,0.0,0.6509),(1.0,0.0,0.0,0.6001)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='l_ankle_rotation_changed')])),
          #  no L_MIDTARSAL_ANIMATOR 
          OrientationInterpolator(DEF='R_HIP_ANIMATOR',key=[0.0,0.125,0.2083,0.2917,0.5,0.7917,0.9167,1.0],keyValue=[(-0.5831,0.03511,0.8116,0.1481),(-0.995,0.02296,0.09674,0.4683),(-1.0,0.00192,0.007964,0.4732),(-0.998,-0.0158,-0.06102,0.5079),(-0.9131,-0.06243,-0.403,0.3361),(1.0,0.0,0.0,0.2571),(0.9891,-0.02805,0.1444,0.3879),(-0.5831,0.03511,0.8116,0.1481)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='r_hip_rotation_changed')])),
          OrientationInterpolator(DEF='R_KNEE_ANIMATOR',key=[0.0,0.125,0.2083,0.375,0.5,0.6667,0.9167,1.0],keyValue=[(1.0,0.0,0.0,0.8573),(1.0,0.0,0.0,0.5351),(1.0,0.0,0.0,0.1756),(1.0,0.0,0.0,0.1194),(1.0,0.0,0.0,0.3153),(1.0,0.0,0.0,0.09354),(1.0,0.0,0.0,0.08558),(1.0,0.0,0.0,0.8573)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='r_knee_rotation_changed')])),
          OrientationInterpolator(DEF='R_ANKLE_ANIMATOR',key=[0.0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1.0],keyValue=[(1.0,0.0,0.0,0.8001),(1.0,0.0,0.0,0.8509),(1.0,0.0,0.0,0.8001),(1.0,0.0,0.0,0.8001),(1.0,0.0,0.0,0.8509),(1.0,0.0,0.0,0.8001),(1.0,0.0,0.0,0.8001),(1.0,0.0,0.0,0.8001),(1.0,0.0,0.0,0.8001),(1.0,0.0,0.0,0.8509),(1.0,0.0,0.0,0.86001)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='r_ankle_rotation_changed')])),
          #  no L_MIDTARSAL_ANIMATOR 
          OrientationInterpolator(DEF='VL5_ANIMATOR',key=[0.0,0.2083,0.375,0.75,0.8333,1.0],keyValue=[(0.0,1.0,0.0,0.0826),(-0.01972,-0.5974,0.8017,0.08231),(0.009296,-0.9648,0.2627,0.1734),(-0.01238,0.9549,-0.2968,0.08732),(-0.008125,0.9691,-0.2463,0.158),(0.0,1.0,0.0,0.0826)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='vl5_rotation_changed')])),
          OrientationInterpolator(DEF='SKULLBASE_ANIMATOR',key=[0.0,0.28,0.3,0.32,0.4,0.45,0.60,0.65,0.70,0.75,0.85,0.90,0.95,1.0],keyValue=[(-1.0,0.0,0.0,1.0),(-1.0,0.0,0.0,1.0),(-1.0,0.0,0.0,0.999),(-1.0,0.0,0.0,0.99),(-1.0,0.0,0.0,0.99),(-1.0,0.0,0.0,0.9),(-1.0,0.0,0.0,0.9),(-1.0,0.0,0.0,0.9),(-1.0,0.0,0.0,0.9),(-1.0,0.0,0.0,0.9),(-1.0,0.0,0.0,0.9),(-1.0,0.0,0.0,0.9),(-1.0,0.0,0.0,0.9),(-1.0,0.0,0.0,1.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='skullbase_rotation_changed')])),
          OrientationInterpolator(DEF='L_SHOULDER_ANIMATOR',key=[0.0,0.25,0.375,0.6667,0.7917,0.9167,1.0],keyValue=[(0.0,0.0,1.0,0.1),(0.0,0.0,1.0,0.2),(0.0,0.0,1.0,0.2),(0.86,0.25,0.42,0.5),(0.86,0.25,0.42,0.8),(0.86,0.25,0.42,0.4),(0.86,0.25,0.42,0.2)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='l_shoulder_rotation_changed')])),
          OrientationInterpolator(DEF='L_ELBOW_ANIMATOR',key=[0.0,0.28,0.32,0.64,0.76,1.0],keyValue=[(0.0,0.0,1.0,0.0),(-1.0,0.0,0.0,0.1229),(-1.0,0.0,0.0,0.1229),(-1.0,0.0,0.0,0.5976),(-1.0,0.0,0.0,0.3917),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='l_elbow_rotation_changed')])),
          OrientationInterpolator(DEF='L_WRIST_ANIMATOR',key=[0.0,0.32,0.64,0.88,1.0],keyValue=[(0.0,0.0,1.0,0.0),(0.067,0.98,-0.128,4.15),(0.067,0.98,-0.128,4.15),(0.067,0.98,-0.128,4.15),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='l_wrist_rotation_changed')])),
          OrientationInterpolator(DEF='R_SHOULDER_ANIMATOR',key=[0.0,0.45,0.64,0.76,0.88,1.0],keyValue=[(0.0,0.0,1.0,0.0),(0.9992,0.02042,0.03558,7.2),(0.9989,-0.04623,0.005159,4.079),(-0.8687,-0.2525,-0.4261,1.501),(-0.941,-0.2893,-0.1754,0.4788),(0.0,0.0,1.0,0.0)],
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
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='SKULLBASE_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='VL5_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='L_HIP_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='L_KNEE_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='L_ANKLE_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='R_HIP_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='R_KNEE_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='R_ANKLE_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='L_SHOULDER_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='L_ELBOW_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='L_WRIST_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='R_SHOULDER_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='R_ELBOW_ANIMATOR'),
        ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='R_WRIST_ANIMATOR')])),
    Viewpoint(description='LOA1_SwimmingFlutterKickAnimation scene',position=(0,0,12)),
    Anchor(description='Nancy Diving',parameter=["target=_blank"],url=["NancyDiving.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.x3d","NancyDiving.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.wrl"],
      children=[
      Shape(
        geometry=Text(string=["LOA1_SwimmingFlutterKickAnimation.x3d","defines a prototype","for animating a humanoid.","","Click text to see example."],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.8)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0.2))))])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for LOA1_SwimmingFlutterKickAnimation.py:')
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

print("python LOA1_SwimmingFlutterKickAnimation.py load and self-test diagnostics complete.")
