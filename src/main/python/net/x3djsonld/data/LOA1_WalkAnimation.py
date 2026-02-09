####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python LOA1_WalkAnimation.py
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
# Project home page:    # X3D Python Scene Access Interface Library (X3DPSAIL)
#                       # https://www.web3d.org/x3d/stylesheets/python/python.html
# Conversion generator: # https://www.web3d.org/x3d/stylesheets/X3dToPython.xslt
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    meta(content='LOA1_WalkAnimation.x3d',name='title'),
    meta(content='Humanoid animation prototype reusable by any Humanoid.',name='description'),
    meta(content='Cindy Ballreich cindy@ballreich.net 3Name3D',name='creator'),
    meta(content='1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved.',name='rights'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 October 2001',name='translated'),
    meta(content='23 May 2020',name='modified'),
    meta(content='https://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl',name='reference'),
    meta(content='https://HAnim.org/Specifications/HAnim2001',name='reference'),
    meta(content='https://HAnim.org/Models',name='reference'),
    meta(content='https://HAnim.org/Nodes',name='reference'),
    meta(content='Nancy Walk Animation HAnim 2001',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='LOA1_WalkAnimation.x3d'),
    ProtoDeclare(name='LOA1_WalkAnimation',
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
          TimeSensor(DEF='TIMER',
            IS=IS(
              connect=[
              connect(nodeField='cycleInterval',protoField='cycleInterval'),
              connect(nodeField='enabled',protoField='enabled'),
              connect(nodeField='loop',protoField='loop'),
              connect(nodeField='startTime',protoField='startTime'),
              connect(nodeField='stopTime',protoField='stopTime'),
              connect(nodeField='fraction_changed',protoField='fraction_changed'),
              connect(nodeField='isActive',protoField='isActive')])),
          PositionInterpolator(DEF='HUMANOIDROOT_POSITION_ANIMATOR',key=[0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1],keyValue=[(0,-0.00928,0),(0,-0.003858,0),(0,-0.008847,0),(0,-0.01486,0),(0,-0.02641,0),(0,-0.03934,0),(0,-0.0502,0),(0,-0.07469,0),(0,-0.02732,0),(0,-0.01608,0),(0,-0.01129,0),(0,-0.005819,0),(0,-0.002004,0),(0,-0.002579,0),(0,-0.0143,0),(0,-0.03799,0),(0,-0.05648,0),(0,-0.045,0),(0,-0.00928,0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='HumanoidRoot_translation_changed')])),
          OrientationInterpolator(DEF='HUMANOIDROOT_ANIMATOR',key=[0,1],keyValue=[(0,1,0,0),(0,1,0,0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='HumanoidRoot_rotation_changed')])),
          OrientationInterpolator(DEF='SACROILIAC_ANIMATOR',key=[0,0.5,1.0],keyValue=[(0.0,0.0,-1.0,0.1056),(0.0,0.0,1.0,0.09018),(0.0,0.0,-1.0,0.1056)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='lower_body_rotation_changed')])),
          OrientationInterpolator(DEF='L_HIP_ANIMATOR',key=[0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1],keyValue=[(-0.873,0.06094,0.484,0.2865),(0.9963,-0.01057,0.08481,0.2488),(0.9965,0.01591,-0.08222,0.3836),(-0.7018,-0.03223,-0.7117,0.1289),(-1,0,0,0.5518),(-0.9964,0.02231,0.0817,0.5351),(-0.9809,0.04912,0.1881,0.5204),(-0.873,0.06094,0.484,0.2865)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='l_hip_rotation_changed')])),
          OrientationInterpolator(DEF='L_KNEE_ANIMATOR',key=[0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1],keyValue=[(1,0,0,0.3226),(1,0,0,0.1556),(1,0,0,0.08678),(1,0,0,0.8751),(1,0,0,1.131),(1,0,0,0.09961),(1,0,0,0.3942),(1,0,0,0.3226)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='l_knee_rotation_changed')])),
          OrientationInterpolator(DEF='L_ANKLE_ANIMATOR',key=[0,0.125,0.2083,0.375,0.6667,0.9167,1],keyValue=[(-1,0,0,0.06714),(-1,0,0,0.2152),(-1,0,0,0.3184),(-1,0,0,0.4717),(-1,0,0,0.2912),(1,0,0,0.1222),(-1,0,0,0.06714)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='l_ankle_rotation_changed')])),
          OrientationInterpolator(DEF='L_MIDTARSAL_ANIMATOR',key=[0,0.5,1],keyValue=[(1,0,0,0),(1,0,0,-0.2),(1,0,0,0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='l_midtarsal_rotation_changed')])),
          OrientationInterpolator(DEF='R_HIP_ANIMATOR',key=[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1],keyValue=[(-0.5831,0.03511,0.8116,0.1481),(-0.995,0.02296,0.09674,0.4683),(-1,0.00192,0.007964,0.4732),(-0.998,-0.0158,-0.06102,0.5079),(-0.9911,-0.03541,-0.1286,0.5419),(-0.9131,-0.06243,-0.403,0.3361),(-0.4306,-0.07962,-0.899,0.07038),(1,0,0,0.2571),(0.9891,-0.02805,0.1444,0.3879),(-0.5831,0.03511,0.8116,0.1481)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='r_hip_rotation_changed')])),
          OrientationInterpolator(DEF='R_KNEE_ANIMATOR',key=[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1],keyValue=[(1,0,0,0.8573),(1,0,0,0.8926),(1,0,0,0.5351),(1,0,0,0.1756),(1,0,0,0.1194),(1,0,0,0.3153),(1,-1.176e-08,-4.971e-09,0.09354),(1,0,0,0.08558),(1,0,0,0.2475),(1,0,0,0.8573)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='r_knee_rotation_changed')])),
          OrientationInterpolator(DEF='R_ANKLE_ANIMATOR',key=[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1],keyValue=[(0,0,1,0),(-1,0,0,0.3533),(-1,0,0,0.1072),(1,0,0,0.2612),(1,-1.641e-07,1.827e-08,0.1268),(-1,0,0,0.01793),(-1,0,0,0.05824),(-1,0,0,0.2398),(-1,0,0,0.35),(-1,0,0,0.3322),(0,0,1,0)],
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
          OrientationInterpolator(DEF='SKULLBASE_ANIMATOR',key=[0.0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1.0],keyValue=[(0.0,-1.0,0.0,0.08642),(0.0,1.0,0.0,0.1825),(0.0,1.0,0.0,0.1505),(0.0,1.0,0.0,0.1053),(0.0,1.0,0.0,0.04391),(0.0,-1.0,0.0,0.03119),(0.0,-1.0,0.0,0.07936),(0.0,-1.0,0.0,0.1616),(0.0,-1.0,0.0,0.155),(0.0,-1.0,0.0,0.08642)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='skullbase_rotation_changed')])),
          OrientationInterpolator(DEF='L_SHOULDER_ANIMATOR',key=[0,0.375,0.9167,1],keyValue=[(1,0,0,0.1189),(-1,-5.928e-07,1.525e-07,0.1861),(1,-2.038e-07,-1.257e-07,0.3357),(1,0,0,0.1189)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='l_shoulder_rotation_changed')])),
          OrientationInterpolator(DEF='L_ELBOW_ANIMATOR',key=[0,0.375,0.9167,1],keyValue=[(-1,-1.58298e-07,8.15967e-08,0.0659878),(-1,-3.28826e-08,-2.31665e-08,0.488383),(-1,3.06462e-06,-3.11947e-06,0.0177536),(-1,-1.58298e-07,8.15967e-08,0.0659878)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='l_elbow_rotation_changed')])),
          OrientationInterpolator(DEF='L_WRIST_ANIMATOR',key=[0,0.375,0.9167,1],keyValue=[(1.51276e-06,-1,1.7724e-06,0.461076),(-0.330195,-0.927451,0.175516,0.538852),(0.0327774,-0.999314,-0.0172185,0.492033),(1.51276e-06,-1,1.7724e-06,0.461076)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='l_wrist_rotation_changed')])),
          OrientationInterpolator(DEF='R_SHOULDER_ANIMATOR',key=[0,0.375,0.9167,1],keyValue=[(-1,-7.689e-07,-1.48e-07,0.09346),(1,5.004e-08,2.254e-08,0.3197),(-1,-1.104e-07,5.267e-10,0.1564),(-1,-7.689e-07,-1.48e-07,0.09346)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='r_shoulder_rotation_changed')])),
          OrientationInterpolator(DEF='R_ELBOW_ANIMATOR',key=[0,0.375,0.9167,1],keyValue=[(-1,-4.45619e-08,2.70318e-08,0.411508),(-1,8.16742e-07,-1.09556e-07,0.0925011),(-1,-2.47628e-08,-7.02862e-09,0.572568),(-1,-4.45619e-08,2.70318e-08,0.411508)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='r_elbow_rotation_changed')])),
          OrientationInterpolator(DEF='R_WRIST_ANIMATOR',key=[0,0.375,0.9167,1],keyValue=[(-0.8129,0.4759,-0.3357,0.1346),(0.1533,-0.9878,0.02582,0.3902),(-0.5701,0.7604,-0.311,0.366),(-0.8129,0.4759,-0.3357,0.1346)],
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
    Comment(' ====================================== '),
    Comment(' Point to example use in case someone inspects this file '),
    Anchor(description='InterchangableActorsViaDynamicRouting',parameter=["target=_blank"],url=["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"],
      children=[
      Shape(
        geometry=Text(string=["LOA1_WalkAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.8)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0.2))))])])
)

### X3D model conversion complete ###

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for LOA1_WalkAnimation.py:')
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

print("python LOA1_WalkAnimation.py load and self-test diagnostics complete.")
