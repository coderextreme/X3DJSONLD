####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python LOA1_StopAnimation.py
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
    meta(content='LOA1_StopAnimation.x3d',name='title'),
    meta(content='Humanoid animation prototype reusable by any Humanoid.',name='description'),
    meta(content='Cindy Ballreich cindy@ballreich.net 3Name3D, Joe Williams, Don Brutzman',name='creator'),
    meta(content='1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved.',name='rights'),
    meta(content='Ozan APAYDIN',name='translator'),
    meta(content='1 December 2001',name='created'),
    meta(content='23 May 2020',name='modified'),
    meta(content='https://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl',name='reference'),
    meta(content='https://www.HAnim.org',name='reference'),
    meta(content='https://HAnim.org/Models',name='reference'),
    meta(content='https://HAnim.org/Nodes',name='reference'),
    meta(content='Nancy Stand Animation HAnim 2001',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_StopAnimation.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='LOA1_StopAnimation.x3d'),
    ProtoDeclare(name='LOA1_StopAnimation',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='cycleInterval',type='SFTime',value=0.009999999776482582),
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
          PositionInterpolator(DEF='HUMANOIDROOT_POSITION_ANIMATOR',key=[0.0,1.0],keyValue=[(0.0,0.0,0.0),(0.0,0.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='HumanoidRoot_translation_changed')])),
          OrientationInterpolator(DEF='HUMANOIDROOT_ANIMATOR',key=[0.0,1.0],keyValue=[(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='HumanoidRoot_rotation_changed')])),
          OrientationInterpolator(DEF='SACROILIAC_ANIMATOR',key=[0.0,1.0],keyValue=[(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='lower_body_rotation_changed')])),
          OrientationInterpolator(DEF='L_HIP_ANIMATOR',key=[0.0,1.0],keyValue=[(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='l_hip_rotation_changed')])),
          OrientationInterpolator(DEF='L_KNEE_ANIMATOR',key=[0.0,1.0],keyValue=[(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='l_knee_rotation_changed')])),
          OrientationInterpolator(DEF='L_ANKLE_ANIMATOR',key=[0.0,1.0],keyValue=[(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='l_ankle_rotation_changed')])),
          OrientationInterpolator(DEF='L_MIDTARSAL_ANIMATOR',key=[0.0,1.0],keyValue=[(1,0,0,0),(1,0,0,0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='l_midtarsal_rotation_changed')])),
          OrientationInterpolator(DEF='R_HIP_ANIMATOR',key=[0.0,1.0],keyValue=[(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='r_hip_rotation_changed')])),
          OrientationInterpolator(DEF='R_KNEE_ANIMATOR',key=[0.0,1.0],keyValue=[(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='r_knee_rotation_changed')])),
          OrientationInterpolator(DEF='R_ANKLE_ANIMATOR',key=[0.0,1.0],keyValue=[(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='r_ankle_rotation_changed')])),
          OrientationInterpolator(DEF='R_MIDTARSAL_ANIMATOR',key=[0.0,1.0],keyValue=[(1,0,0,0),(1,0,0,0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='r_midtarsal_rotation_changed')])),
          OrientationInterpolator(DEF='VL5_ANIMATOR',key=[0.0,1.0],keyValue=[(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='vl5_rotation_changed')])),
          OrientationInterpolator(DEF='SKULLBASE_ANIMATOR',key=[0.0,1.0],keyValue=[(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='skullbase_rotation_changed')])),
          OrientationInterpolator(DEF='L_SHOULDER_ANIMATOR',key=[0.0,1.0],keyValue=[(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='l_shoulder_rotation_changed')])),
          OrientationInterpolator(DEF='L_ELBOW_ANIMATOR',key=[0.0,1.0],keyValue=[(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='l_elbow_rotation_changed')])),
          OrientationInterpolator(DEF='L_WRIST_ANIMATOR',key=[0.0,1.0],keyValue=[(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='l_wrist_rotation_changed')])),
          OrientationInterpolator(DEF='R_SHOULDER_ANIMATOR',key=[0.0,1.0],keyValue=[(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='r_shoulder_rotation_changed')])),
          OrientationInterpolator(DEF='R_ELBOW_ANIMATOR',key=[0.0,1.0],keyValue=[(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,0.0)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='r_elbow_rotation_changed')])),
          OrientationInterpolator(DEF='R_WRIST_ANIMATOR',key=[0.0,1.0],keyValue=[(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,0.0)],
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
    #  ====================================== 
    #  Point to example use in case someone inspects this file 
    Anchor(description='InterchangableActorsViaDynamicRouting',parameter=["target=_blank"],url=["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"],
      children=[
      Shape(
        geometry=Text(string=["LOA1_StopAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.8)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0.2))))])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for LOA1_StopAnimation.py:')
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

print("python LOA1_StopAnimation.py load and self-test diagnostics complete.")
