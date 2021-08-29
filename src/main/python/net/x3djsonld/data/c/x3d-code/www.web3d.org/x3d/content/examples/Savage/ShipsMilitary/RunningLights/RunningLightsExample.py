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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='RunningLightsExample.x3d',name='title'),
    meta(content='Andrew Wiest',name='creator'),
    meta(content='6 May 2001',name='created'),
    meta(content='19 September 2011',name='modified'),
    meta(content='Example for using the ship RunningLights prototype.',name='description'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/RunningLights/RunningLightsExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  This node provides standard running lights for vessels > 50 meters in length 
    children=[
    ExternProtoDeclare(name='RunningLights',url=["../../ShipsMilitary/RunningLights/RunningLightsPrototype.x3d#RunningLights","https://savage.nps.edu/Savage/ShipsMilitary/RunningLights/RunningLightsPrototype.x3d#RunningLights","../../ShipsMilitary/RunningLights/RunningLightsPrototype.wrl#RunningLights","https://savage.nps.edu/Savage/ShipsMilitary/RunningLights/RunningLightsPrototype.wrl#RunningLights"],
      field=[
      field(accessType='initializeOnly',name='StbdRunningLightPosition',type='SFVec3f'),
      field(accessType='initializeOnly',name='StbdRunningLightScale',type='SFVec3f'),
      field(accessType='initializeOnly',name='StbdRunningLightOnOffSwitch',type='SFColor'),
      field(accessType='initializeOnly',name='SternLightPosition',type='SFVec3f'),
      field(accessType='initializeOnly',name='SternLightScale',type='SFVec3f'),
      field(accessType='initializeOnly',name='WhiteRunningLightOnOffSwitch',type='SFColor'),
      field(accessType='initializeOnly',name='PortRunningLightPosition',type='SFVec3f'),
      field(accessType='initializeOnly',name='PortRunningLightScale',type='SFVec3f'),
      field(accessType='initializeOnly',name='PortRunningLightOnOffSwitch',type='SFColor'),
      field(accessType='initializeOnly',name='LowerMastHeadLightPosition',type='SFVec3f'),
      field(accessType='initializeOnly',name='LowerMastHeadLightScale',type='SFVec3f'),
      field(accessType='initializeOnly',name='UpperMastHeadLightPosition',type='SFVec3f'),
      field(accessType='initializeOnly',name='UpperMastHeadLightScale',type='SFVec3f'),
      field(accessType='initializeOnly',name='FwdAnchorLightPosition',type='SFVec3f'),
      field(accessType='initializeOnly',name='FwdAnchorLightScale',type='SFVec3f'),
      field(accessType='initializeOnly',name='AnchorLightsOnOffSwitch',type='SFColor'),
      field(accessType='initializeOnly',name='AftAnchorLightPosition',type='SFVec3f'),
      field(accessType='initializeOnly',name='AftAnchorLightScale',type='SFVec3f')]),
    #  Example scene using the ProtoDeclaration follows 
    Background(skyColor=[(.2,.2,.2)]),
    NavigationInfo(headlight=False,speed=1000,type=["WALK","EXAMINE","ANY"]),
    Viewpoint(description='100m Running Lights',orientation=(0,1,0,1.571),position=(100,2,0)),
    LOD(range=[10000],
      children=[
      Group(
        children=[
        Viewpoint(description='1000m Running Lights',orientation=(0,1,0,1.571),position=(1000,2,0)),
        Viewpoint(description='2000m Running Lights',orientation=(0,1,0,1.571),position=(2000,2,0)),
        Viewpoint(description='3000m Running Lights',orientation=(0,1,0,1.571),position=(3000,2,0)),
        Viewpoint(description='4000m Running Lights',orientation=(0,1,0,1.571),position=(4000,2,0)),
        Viewpoint(description='5000m Running Lights',orientation=(0,1,0,1.571),position=(5000,2,0))]),
      WorldInfo(info=["null node - hide all viewpoints outside 10,000m"])]),
    Viewpoint(description='6000m Running Lights',orientation=(0,1,0,1.571),position=(6000,2,0)),
    LOD(DEF='CopyThisNode',range=[1000,2000,3000,4000,5000,6000],
      children=[
      Transform(DEF='UpTo1000yds',
        children=[
        ProtoInstance(name='RunningLights',
          fieldValue=[
          fieldValue(name='StbdRunningLightPosition',value=(0,0,10)),
          fieldValue(name='StbdRunningLightScale',value=(6,6,6)),
          fieldValue(name='StbdRunningLightOnOffSwitch',value=(0,1,0)),
          fieldValue(name='SternLightPosition',value=(-10,0,0)),
          fieldValue(name='SternLightScale',value=(6,6,6)),
          fieldValue(name='WhiteRunningLightOnOffSwitch',value=(1,1,1)),
          fieldValue(name='PortRunningLightPosition',value=(0,0,-10)),
          fieldValue(name='PortRunningLightScale',value=(6,6,6)),
          fieldValue(name='PortRunningLightOnOffSwitch',value=(1,0,0)),
          fieldValue(name='LowerMastHeadLightPosition',value=(10,10,0)),
          fieldValue(name='LowerMastHeadLightScale',value=(6,6,6)),
          fieldValue(name='UpperMastHeadLightPosition',value=(0,20,0)),
          fieldValue(name='UpperMastHeadLightScale',value=(1,1,1)),
          fieldValue(name='FwdAnchorLightPosition',value=(30,0,0)),
          fieldValue(name='FwdAnchorLightScale',value=(6,6,6)),
          fieldValue(name='AnchorLightsOnOffSwitch',value=(0,0,0)),
          fieldValue(name='AftAnchorLightPosition',value=(-10,10,0)),
          fieldValue(name='AftAnchorLightScale',value=(1,1,1))])]),
      Transform(DEF='UpTo2000yds',
        children=[
        ProtoInstance(name='RunningLights',
          fieldValue=[
          fieldValue(name='StbdRunningLightPosition',value=(0,0,10)),
          fieldValue(name='StbdRunningLightScale',value=(13,13,13)),
          fieldValue(name='StbdRunningLightOnOffSwitch',value=(0,1,0)),
          fieldValue(name='SternLightPosition',value=(-10,0,0)),
          fieldValue(name='SternLightScale',value=(12,12,12)),
          fieldValue(name='WhiteRunningLightOnOffSwitch',value=(1,1,1)),
          fieldValue(name='PortRunningLightPosition',value=(0,0,-10)),
          fieldValue(name='PortRunningLightScale',value=(13,13,13)),
          fieldValue(name='PortRunningLightOnOffSwitch',value=(1,0,0)),
          fieldValue(name='LowerMastHeadLightPosition',value=(10,10,0)),
          fieldValue(name='LowerMastHeadLightScale',value=(13,13,13)),
          fieldValue(name='UpperMastHeadLightPosition',value=(0,20,0)),
          fieldValue(name='UpperMastHeadLightScale',value=(1,1,1)),
          fieldValue(name='FwdAnchorLightPosition',value=(30,0,0)),
          fieldValue(name='FwdAnchorLightScale',value=(13,13,13)),
          fieldValue(name='AnchorLightsOnOffSwitch',value=(0,0,0)),
          fieldValue(name='AftAnchorLightPosition',value=(-10,10,0)),
          fieldValue(name='AftAnchorLightScale',value=(1,1,1))])]),
      Transform(DEF='UpTo3000Yds',
        children=[
        ProtoInstance(name='RunningLights',
          fieldValue=[
          fieldValue(name='StbdRunningLightPosition',value=(0,0,10)),
          fieldValue(name='StbdRunningLightScale',value=(20,20,20)),
          fieldValue(name='StbdRunningLightOnOffSwitch',value=(0,1,0)),
          fieldValue(name='SternLightPosition',value=(-10,0,0)),
          fieldValue(name='SternLightScale',value=(20,20,20)),
          fieldValue(name='WhiteRunningLightOnOffSwitch',value=(1,1,1)),
          fieldValue(name='PortRunningLightPosition',value=(0,0,-10)),
          fieldValue(name='PortRunningLightScale',value=(20,20,20)),
          fieldValue(name='PortRunningLightOnOffSwitch',value=(1,0,0)),
          fieldValue(name='LowerMastHeadLightPosition',value=(10,10,0)),
          fieldValue(name='LowerMastHeadLightScale',value=(20,20,20)),
          fieldValue(name='UpperMastHeadLightPosition',value=(0,20,0)),
          fieldValue(name='UpperMastHeadLightScale',value=(1,1,1)),
          fieldValue(name='FwdAnchorLightPosition',value=(30,0,0)),
          fieldValue(name='FwdAnchorLightScale',value=(20,20,20)),
          fieldValue(name='AnchorLightsOnOffSwitch',value=(0,0,0)),
          fieldValue(name='AftAnchorLightPosition',value=(-10,10,0)),
          fieldValue(name='AftAnchorLightScale',value=(1,1,1))])]),
      Transform(DEF='UpTo4000Yds',
        children=[
        ProtoInstance(name='RunningLights',
          fieldValue=[
          fieldValue(name='StbdRunningLightPosition',value=(0,0,10)),
          fieldValue(name='StbdRunningLightScale',value=(26,26,26)),
          fieldValue(name='StbdRunningLightOnOffSwitch',value=(0,1,0)),
          fieldValue(name='SternLightPosition',value=(-10,0,0)),
          fieldValue(name='SternLightScale',value=(26,26,26)),
          fieldValue(name='WhiteRunningLightOnOffSwitch',value=(1,1,1)),
          fieldValue(name='PortRunningLightPosition',value=(0,0,-10)),
          fieldValue(name='PortRunningLightScale',value=(26,26,26)),
          fieldValue(name='PortRunningLightOnOffSwitch',value=(1,0,0)),
          fieldValue(name='LowerMastHeadLightPosition',value=(10,10,0)),
          fieldValue(name='LowerMastHeadLightScale',value=(26,26,26)),
          fieldValue(name='UpperMastHeadLightPosition',value=(0,20,0)),
          fieldValue(name='UpperMastHeadLightScale',value=(1,1,1)),
          fieldValue(name='FwdAnchorLightPosition',value=(30,0,0)),
          fieldValue(name='FwdAnchorLightScale',value=(26,26,26)),
          fieldValue(name='AnchorLightsOnOffSwitch',value=(0,0,0)),
          fieldValue(name='AftAnchorLightPosition',value=(-10,10,0)),
          fieldValue(name='AftAnchorLightScale',value=(1,1,1))])]),
      Transform(DEF='UpTo5000Yds',
        children=[
        ProtoInstance(name='RunningLights',
          fieldValue=[
          fieldValue(name='StbdRunningLightPosition',value=(0,0,10)),
          fieldValue(name='StbdRunningLightScale',value=(34,34,34)),
          fieldValue(name='StbdRunningLightOnOffSwitch',value=(0,1,0)),
          fieldValue(name='SternLightPosition',value=(-10,0,0)),
          fieldValue(name='SternLightScale',value=(34,34,34)),
          fieldValue(name='WhiteRunningLightOnOffSwitch',value=(1,1,1)),
          fieldValue(name='PortRunningLightPosition',value=(0,0,-10)),
          fieldValue(name='PortRunningLightScale',value=(34,34,34)),
          fieldValue(name='PortRunningLightOnOffSwitch',value=(1,0,0)),
          fieldValue(name='LowerMastHeadLightPosition',value=(10,10,0)),
          fieldValue(name='LowerMastHeadLightScale',value=(34,34,34)),
          fieldValue(name='UpperMastHeadLightPosition',value=(0,20,0)),
          fieldValue(name='UpperMastHeadLightScale',value=(1,1,1)),
          fieldValue(name='FwdAnchorLightPosition',value=(30,0,0)),
          fieldValue(name='FwdAnchorLightScale',value=(34,34,34)),
          fieldValue(name='AnchorLightsOnOffSwitch',value=(0,0,0)),
          fieldValue(name='AftAnchorLightPosition',value=(-10,10,0)),
          fieldValue(name='AftAnchorLightScale',value=(1,1,1))])]),
      Transform(DEF='UpTo6000Yds',
        children=[
        ProtoInstance(name='RunningLights',
          fieldValue=[
          fieldValue(name='StbdRunningLightPosition',value=(0,0,10)),
          fieldValue(name='StbdRunningLightScale',value=(40,40,40)),
          fieldValue(name='StbdRunningLightOnOffSwitch',value=(0,1,0)),
          fieldValue(name='SternLightPosition',value=(-10,0,0)),
          fieldValue(name='SternLightScale',value=(40,40,40)),
          fieldValue(name='WhiteRunningLightOnOffSwitch',value=(1,1,1)),
          fieldValue(name='PortRunningLightPosition',value=(0,0,-10)),
          fieldValue(name='PortRunningLightScale',value=(40,40,40)),
          fieldValue(name='PortRunningLightOnOffSwitch',value=(1,0,0)),
          fieldValue(name='LowerMastHeadLightPosition',value=(10,10,0)),
          fieldValue(name='LowerMastHeadLightScale',value=(40,40,40)),
          fieldValue(name='UpperMastHeadLightPosition',value=(0,20,0)),
          fieldValue(name='UpperMastHeadLightScale',value=(1,1,1)),
          fieldValue(name='FwdAnchorLightPosition',value=(30,0,0)),
          fieldValue(name='FwdAnchorLightScale',value=(40,40,40)),
          fieldValue(name='AnchorLightsOnOffSwitch',value=(0,0,0)),
          fieldValue(name='AftAnchorLightPosition',value=(-10,10,0)),
          fieldValue(name='AftAnchorLightScale',value=(1,1,1))])]),
      Transform(DEF='GreaterThan6000yds',
        children=[
        ProtoInstance(name='RunningLights',
          fieldValue=[
          fieldValue(name='StbdRunningLightPosition',value=(0,0,10)),
          fieldValue(name='StbdRunningLightScale',value=(42,42,42)),
          fieldValue(name='StbdRunningLightOnOffSwitch',value=(0,1,0)),
          fieldValue(name='SternLightPosition',value=(-10,0,0)),
          fieldValue(name='SternLightScale',value=(42,42,42)),
          fieldValue(name='WhiteRunningLightOnOffSwitch',value=(1,1,1)),
          fieldValue(name='PortRunningLightPosition',value=(0,0,-10)),
          fieldValue(name='PortRunningLightScale',value=(42,42,42)),
          fieldValue(name='PortRunningLightOnOffSwitch',value=(1,0,0)),
          fieldValue(name='LowerMastHeadLightPosition',value=(10,10,0)),
          fieldValue(name='LowerMastHeadLightScale',value=(42,42,42)),
          fieldValue(name='UpperMastHeadLightPosition',value=(0,20,0)),
          fieldValue(name='UpperMastHeadLightScale',value=(1,1,1)),
          fieldValue(name='FwdAnchorLightPosition',value=(30,0,0)),
          fieldValue(name='FwdAnchorLightScale',value=(42,42,42)),
          fieldValue(name='AnchorLightsOnOffSwitch',value=(0,0,0)),
          fieldValue(name='AftAnchorLightPosition',value=(-10,10,0)),
          fieldValue(name='AftAnchorLightScale',value=(1,1,1))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RunningLightsExample.py")
