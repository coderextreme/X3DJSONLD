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
    meta(content='SupertankerExampleDay.x3d',name='title'),
    meta(content='Andrew Wiest',name='creator'),
    meta(content='6 May 2001',name='created'),
    meta(content='10 February 2014',name='modified'),
    meta(content='SupertankerExampleDay.png',name='Image'),
    meta(content='Supertanker scene during the daytime.',name='description'),
    meta(content='https://savage.nps.edu/Savage/ShipsCivilian/Supertanker/SupertankerExampleDay.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
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
    Background(groundAngle=[1.57],groundColor=[(0,0,1),(.7,.7,.8)],skyAngle=[1.57],skyColor=[(.8,.8,.8),(.7,.7,.8)]),
    LOD(DEF='CopyThisNode',range=[1000,2000,3000,4000,5000,6000],
      children=[
      Transform(DEF='UpTo1000yds',
        children=[
        ProtoInstance(name='RunningLights',
          fieldValue=[
          fieldValue(name='StbdRunningLightPosition',value=(-80,24.8,23)),
          fieldValue(name='StbdRunningLightScale',value=(6,6,6)),
          fieldValue(name='StbdRunningLightOnOffSwitch',value=(0,1,0)),
          fieldValue(name='SternLightPosition',value=(-125,10,0)),
          fieldValue(name='SternLightScale',value=(6,6,6)),
          fieldValue(name='WhiteRunningLightOnOffSwitch',value=(1,1,1)),
          fieldValue(name='PortRunningLightPosition',value=(-80,24.8,-23)),
          fieldValue(name='PortRunningLightScale',value=(6,6,6)),
          fieldValue(name='PortRunningLightOnOffSwitch',value=(1,0,0)),
          fieldValue(name='LowerMastHeadLightPosition',value=(151.4,19.7,0)),
          fieldValue(name='LowerMastHeadLightScale',value=(6,6,6)),
          fieldValue(name='UpperMastHeadLightPosition',value=(-92.1,37.9,0)),
          fieldValue(name='UpperMastHeadLightScale',value=(1,1,1)),
          fieldValue(name='FwdAnchorLightPosition',value=(151.4,20,0)),
          fieldValue(name='FwdAnchorLightScale',value=(6,6,6)),
          fieldValue(name='AnchorLightsOnOffSwitch',value=(0,0,0)),
          fieldValue(name='AftAnchorLightPosition',value=(-125,15,0)),
          fieldValue(name='AftAnchorLightScale',value=(1,1,1))])]),
      Transform(DEF='UpTo2000yds',
        children=[
        ProtoInstance(name='RunningLights',
          fieldValue=[
          fieldValue(name='StbdRunningLightPosition',value=(-80,24.8,23)),
          fieldValue(name='StbdRunningLightScale',value=(13,13,13)),
          fieldValue(name='StbdRunningLightOnOffSwitch',value=(0,1,0)),
          fieldValue(name='SternLightPosition',value=(-125,10,0)),
          fieldValue(name='SternLightScale',value=(12,12,12)),
          fieldValue(name='WhiteRunningLightOnOffSwitch',value=(1,1,1)),
          fieldValue(name='PortRunningLightPosition',value=(-80,24.8,-23)),
          fieldValue(name='PortRunningLightScale',value=(13,13,13)),
          fieldValue(name='PortRunningLightOnOffSwitch',value=(1,0,0)),
          fieldValue(name='LowerMastHeadLightPosition',value=(151.4,19.7,0)),
          fieldValue(name='LowerMastHeadLightScale',value=(13,13,13)),
          fieldValue(name='UpperMastHeadLightPosition',value=(-92.1,37.9,0)),
          fieldValue(name='UpperMastHeadLightScale',value=(1,1,1)),
          fieldValue(name='FwdAnchorLightPosition',value=(151.4,20,0)),
          fieldValue(name='FwdAnchorLightScale',value=(13,13,13)),
          fieldValue(name='AnchorLightsOnOffSwitch',value=(0,0,0)),
          fieldValue(name='AftAnchorLightPosition',value=(-125,15,0)),
          fieldValue(name='AftAnchorLightScale',value=(1,1,1))])]),
      Transform(DEF='UpTo3000Yds',
        children=[
        ProtoInstance(name='RunningLights',
          fieldValue=[
          fieldValue(name='StbdRunningLightPosition',value=(-80,24.8,23)),
          fieldValue(name='StbdRunningLightScale',value=(20,20,20)),
          fieldValue(name='StbdRunningLightOnOffSwitch',value=(0,1,0)),
          fieldValue(name='SternLightPosition',value=(-125,10,0)),
          fieldValue(name='SternLightScale',value=(20,20,20)),
          fieldValue(name='WhiteRunningLightOnOffSwitch',value=(1,1,1)),
          fieldValue(name='PortRunningLightPosition',value=(-80,24.8,-23)),
          fieldValue(name='PortRunningLightScale',value=(20,20,20)),
          fieldValue(name='PortRunningLightOnOffSwitch',value=(1,0,0)),
          fieldValue(name='LowerMastHeadLightPosition',value=(151.4,19.7,0)),
          fieldValue(name='LowerMastHeadLightScale',value=(20,20,20)),
          fieldValue(name='UpperMastHeadLightPosition',value=(-92.1,37.9,0)),
          fieldValue(name='UpperMastHeadLightScale',value=(1,1,1)),
          fieldValue(name='FwdAnchorLightPosition',value=(151.4,20,0)),
          fieldValue(name='FwdAnchorLightScale',value=(20,20,20)),
          fieldValue(name='AnchorLightsOnOffSwitch',value=(0,0,0)),
          fieldValue(name='AftAnchorLightPosition',value=(-125,15,0)),
          fieldValue(name='AftAnchorLightScale',value=(1,1,1))])]),
      Transform(DEF='UpTo4000Yds',
        children=[
        ProtoInstance(name='RunningLights',
          fieldValue=[
          fieldValue(name='StbdRunningLightPosition',value=(-80,24.8,23)),
          fieldValue(name='StbdRunningLightScale',value=(26,26,26)),
          fieldValue(name='StbdRunningLightOnOffSwitch',value=(0,1,0)),
          fieldValue(name='SternLightPosition',value=(-125,10,0)),
          fieldValue(name='SternLightScale',value=(26,26,26)),
          fieldValue(name='WhiteRunningLightOnOffSwitch',value=(1,1,1)),
          fieldValue(name='PortRunningLightPosition',value=(-80,24.8,-23)),
          fieldValue(name='PortRunningLightScale',value=(26,26,26)),
          fieldValue(name='PortRunningLightOnOffSwitch',value=(1,0,0)),
          fieldValue(name='LowerMastHeadLightPosition',value=(151.4,19.7,0)),
          fieldValue(name='LowerMastHeadLightScale',value=(26,26,26)),
          fieldValue(name='UpperMastHeadLightPosition',value=(-92.1,37.9,0)),
          fieldValue(name='UpperMastHeadLightScale',value=(1,1,1)),
          fieldValue(name='FwdAnchorLightPosition',value=(151.4,20,0)),
          fieldValue(name='FwdAnchorLightScale',value=(26,26,26)),
          fieldValue(name='AnchorLightsOnOffSwitch',value=(0,0,0)),
          fieldValue(name='AftAnchorLightPosition',value=(-125,15,0)),
          fieldValue(name='AftAnchorLightScale',value=(1,1,1))])]),
      Transform(DEF='UpTo5000Yds',
        children=[
        ProtoInstance(name='RunningLights',
          fieldValue=[
          fieldValue(name='StbdRunningLightPosition',value=(-80,24.8,23)),
          fieldValue(name='StbdRunningLightScale',value=(34,34,34)),
          fieldValue(name='StbdRunningLightOnOffSwitch',value=(0,1,0)),
          fieldValue(name='SternLightPosition',value=(-125,10,0)),
          fieldValue(name='SternLightScale',value=(34,34,34)),
          fieldValue(name='WhiteRunningLightOnOffSwitch',value=(1,1,1)),
          fieldValue(name='PortRunningLightPosition',value=(-80,24.8,-23)),
          fieldValue(name='PortRunningLightScale',value=(34,34,34)),
          fieldValue(name='PortRunningLightOnOffSwitch',value=(1,0,0)),
          fieldValue(name='LowerMastHeadLightPosition',value=(151.4,19.7,0)),
          fieldValue(name='LowerMastHeadLightScale',value=(34,34,34)),
          fieldValue(name='UpperMastHeadLightPosition',value=(-92.1,37.9,0)),
          fieldValue(name='UpperMastHeadLightScale',value=(1,1,1)),
          fieldValue(name='FwdAnchorLightPosition',value=(151.4,20,0)),
          fieldValue(name='FwdAnchorLightScale',value=(34,34,34)),
          fieldValue(name='AnchorLightsOnOffSwitch',value=(0,0,0)),
          fieldValue(name='AftAnchorLightPosition',value=(-125,15,0)),
          fieldValue(name='AftAnchorLightScale',value=(1,1,1))])]),
      Transform(DEF='UpTo6000Yds',
        children=[
        ProtoInstance(name='RunningLights',
          fieldValue=[
          fieldValue(name='StbdRunningLightPosition',value=(-80,24.8,23)),
          fieldValue(name='StbdRunningLightScale',value=(40,40,40)),
          fieldValue(name='StbdRunningLightOnOffSwitch',value=(0,1,0)),
          fieldValue(name='SternLightPosition',value=(-125,10,0)),
          fieldValue(name='SternLightScale',value=(40,40,40)),
          fieldValue(name='WhiteRunningLightOnOffSwitch',value=(1,1,1)),
          fieldValue(name='PortRunningLightPosition',value=(-80,24.8,-23)),
          fieldValue(name='PortRunningLightScale',value=(40,40,40)),
          fieldValue(name='PortRunningLightOnOffSwitch',value=(1,0,0)),
          fieldValue(name='LowerMastHeadLightPosition',value=(151.4,19.7,0)),
          fieldValue(name='LowerMastHeadLightScale',value=(40,40,40)),
          fieldValue(name='UpperMastHeadLightPosition',value=(-92.1,37.9,0)),
          fieldValue(name='UpperMastHeadLightScale',value=(1,1,1)),
          fieldValue(name='FwdAnchorLightPosition',value=(151.4,20,0)),
          fieldValue(name='FwdAnchorLightScale',value=(40,40,40)),
          fieldValue(name='AnchorLightsOnOffSwitch',value=(0,0,0)),
          fieldValue(name='AftAnchorLightPosition',value=(-125,15,0)),
          fieldValue(name='AftAnchorLightScale',value=(1,1,1))])]),
      Transform(DEF='GreaterThan6000yds',
        children=[
        ProtoInstance(name='RunningLights',
          fieldValue=[
          fieldValue(name='StbdRunningLightPosition',value=(-80,24.8,23)),
          fieldValue(name='StbdRunningLightScale',value=(42,42,42)),
          fieldValue(name='StbdRunningLightOnOffSwitch',value=(0,1,0)),
          fieldValue(name='SternLightPosition',value=(-125,10,0)),
          fieldValue(name='SternLightScale',value=(42,42,42)),
          fieldValue(name='WhiteRunningLightOnOffSwitch',value=(1,1,1)),
          fieldValue(name='PortRunningLightPosition',value=(-80,24.8,-23)),
          fieldValue(name='PortRunningLightScale',value=(42,42,42)),
          fieldValue(name='PortRunningLightOnOffSwitch',value=(1,0,0)),
          fieldValue(name='LowerMastHeadLightPosition',value=(151.4,19.7,0)),
          fieldValue(name='LowerMastHeadLightScale',value=(42,42,42)),
          fieldValue(name='UpperMastHeadLightPosition',value=(-92.1,37.9,0)),
          fieldValue(name='UpperMastHeadLightScale',value=(1,1,1)),
          fieldValue(name='FwdAnchorLightPosition',value=(151.4,20,0)),
          fieldValue(name='FwdAnchorLightScale',value=(42,42,42)),
          fieldValue(name='AnchorLightsOnOffSwitch',value=(0,0,0)),
          fieldValue(name='AftAnchorLightPosition',value=(-125,15,0)),
          fieldValue(name='AftAnchorLightScale',value=(1,1,1))])])]),
    LOD(range=[1000,2000],
      children=[
      Transform(DEF='SupertankerModelInline1',
        children=[
        Inline(url=["SupertankerHighDetail.x3d","https://savage.nps.edu/Savage/ShipsCivilian/Supertanker/SupertankerHighDetail.x3d","SupertankerHighDetail.wrl","https://savage.nps.edu/Savage/ShipsCivilian/Supertanker/SupertankerHighDetail.wrl"])]),
      Transform(DEF='SupertankerModelInline2',
        children=[
        Inline(url=["SupertankerMediumDetail.x3d","https://savage.nps.edu/Savage/ShipsCivilian/Supertanker/SupertankerMediumDetail.x3d","SupertankerMediumDetail.wrl","https://savage.nps.edu/Savage/ShipsCivilian/Supertanker/SupertankerMediumDetail.wrl"])]),
      Transform(DEF='SupertankerModelInline3',
        children=[
        Inline(url=["SupertankerLowDetail.x3d","https://savage.nps.edu/Savage/ShipsCivilian/Supertanker/SupertankerLowDetail.x3d","SupertankerLowDetail.wrl","https://savage.nps.edu/Savage/ShipsCivilian/Supertanker/SupertankerLowDetail.wrl"])])]),
    Viewpoint(description='Supertanker Example Day',orientation=(-0.429808,0.899118,0.0827735,0.422004),position=(150,50,250)),
    Viewpoint(description='distance test 3000',orientation=(-0.00598026,0.99997,0.00490264,1.37343),position=(3000,4,0)),
    Viewpoint(description='distance test 1000',orientation=(-0.00598026,0.99997,0.00490264,1.37343),position=(1000,4,0)),
    Viewpoint(description='distance test 2000',orientation=(-0.00598026,0.99997,0.00490264,1.37343),position=(2000,4,0))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SupertankerExampleDay.py")
