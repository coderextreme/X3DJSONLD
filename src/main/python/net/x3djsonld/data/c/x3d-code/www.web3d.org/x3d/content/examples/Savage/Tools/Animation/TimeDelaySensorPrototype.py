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
    meta(content='TimeDelaySensorPrototype.x3d',name='title'),
    meta(content='Time delay sensor design pattern, implemented as a reusable prototype node.',name='description'),
    meta(content='Don Brutzman and MV4204 class',name='creator'),
    meta(content='29 August 2003',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='TimeDelaySensorExample.x3d',name='reference'),
    meta(content='http://www.web3d.org/technicalinfo/specifications/vrml97/part1/concepts.html#4.6.8',name='reference'),
    meta(content='http://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#CoordinateInterpolator',name='reference'),
    meta(content='TimeDelaySensor',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/TimeDelaySensorPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='TimeSensor functionality commences after delayInterval pause',name='TimeDelaySensor',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='describe the purpose of this sensor',name='description',type='SFString'),
        field(accessType='inputOutput',appinfo='whether sensor is active',name='enabled',type='SFBool',value=True),
        field(accessType='inputOutput',appinfo='when current time exceeds startTime, isActive becomes true and sensor becomes active',name='startTime',type='SFTime',value=0),
        field(accessType='inputOutput',appinfo='seconds',name='delayInterval',type='SFTime',value=1),
        field(accessType='outputOnly',name='delayCompleteTime',type='SFTime'),
        field(accessType='initializeOnly',name='traceEnabled',type='SFBool',value=False)]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          TimeSensor(DEF='TimeDelayClock',
            IS=IS(
              connect=[
              connect(nodeField='startTime',protoField='startTime'),
              connect(nodeField='enabled',protoField='enabled'),
              connect(nodeField='cycleInterval',protoField='delayInterval')])),
          Script(DEF='TimeDelayScript',directOutput=True,
            field=[
            field(accessType='inputOutput',appinfo='describe the purpose of this sensor',name='description',type='SFString'),
            field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
            field(accessType='outputOnly',name='delayCompleteTime',type='SFTime'),
            field(accessType='initializeOnly',name='LocalTimeDelayClock',type='SFNode',
              children=[
              TimeSensor(USE='TimeDelayClock')]),
            field(accessType='initializeOnly',name='priorDelayInterval',type='SFTime',value=1),
            field(accessType='initializeOnly',name='delayStarted',type='SFBool',value=False),
            field(accessType='initializeOnly',name='traceEnabled',type='SFBool')],
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='description'),
              connect(nodeField='delayCompleteTime',protoField='delayCompleteTime'),
              connect(nodeField='traceEnabled',protoField='traceEnabled')])),
          ROUTE(fromField='fraction_changed',fromNode='TimeDelayClock',toField='set_fraction',toNode='TimeDelayScript')])])),
    #  ====================================== 
    #  Example use 
    Anchor(description='TimeDelaySensor Example',url=["TimeDelaySensorExample.x3d","https://savage.nps.edu/Savage/Tools/Animation/TimeDelaySensorExample.x3d","TimeDelaySensorExample.wrl","https://savage.nps.edu/Savage/Tools/Animation/TimeDelaySensorExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["TimeDelaySensorPrototype","defines a prototype","","Click text to see","TimeDelaySensorExample scene"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.7)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0.2))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TimeDelaySensorPrototype.py")
