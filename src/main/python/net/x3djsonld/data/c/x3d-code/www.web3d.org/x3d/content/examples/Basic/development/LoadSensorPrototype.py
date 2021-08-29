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
    meta(content='LoadSensorPrototype.x3d',name='title'),
    meta(content='LoadSensor prototype for VRML 97 use. Assumes correct loading of resources and provides output events based on timeOut delay.',name='description'),
    meta(content='26 December 2003',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='Set LoadSensorScript traceEnabled true/false to enable/disable console trace text.',name='hint'),
    meta(content='This LoadSensor implementation for VRML 97 only emulates LoadSensor events and cannot sense actual loading of watchList resources. Use an X3D-compliant browser for complete LoadSensor capability.',name='warning'),
    meta(content='LoadSensorExample.x3d',name='reference'),
    meta(content='LoadSensorPrototypeInitializationTrace.txt',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='LoadSensorPrototype.x3d'),
    ProtoDeclare(appinfo='LoadSensor monitors the progress and success of downloading URL elements over a network. Only nodes that contain a valid URL field (i.e. descendants of X3DUrlObject) may be specified as watchList children. Multiple nodes may be watched with a single LoadSensor.',documentation='https://www.web3d.org/specifications/ISO-IEC-19775/Part01/components/networking.html#LoadSensor',name='LoadSensor',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Enables/disables the sensor node.',name='enabled',type='SFBool',value=True),
        field(accessType='inputOutput',appinfo='Maximum time for which the LoadSensor will monitor loading starting from when the sensor becomes active. timeOut=0 ordinarily indicates an indefinite time out period; i.e. the LoadSensor will wait until loading has completed either with success or failure timeOut=0 causes immediate loading for this implementation.',name='timeOut',type='SFTime',value=0),
        field(accessType='initializeOnly',appinfo='Zero or more nodes with url fields to monitor.',name='watchList',type='MFNode'),
        field(accessType='inputOnly',appinfo='Change watchList MFNode array.',name='set_watchList',type='MFNode'),
        field(accessType='outputOnly',appinfo='isActive=true when loading begins isActive=false when loading ends.',name='isActive',type='SFBool'),
        field(accessType='outputOnly',appinfo='isLoaded=true when loading succeeds isLoaded=false when loading fails or timeOut reached.',name='isLoaded',type='SFBool'),
        field(accessType='outputOnly',appinfo='loadTime event is generated when loading has successfully completed.',name='loadTime',type='SFTime'),
        field(accessType='outputOnly',appinfo='progress [0..1] indicates fraction of loading complete.',name='progress',type='SFFloat'),
        field(accessType='initializeOnly',appinfo='associated Metadata node.',name='metadata',type='SFNode')]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          TimeSensor(DEF='Clock',loop=True,
            IS=IS(
              connect=[
              connect(nodeField='enabled',protoField='enabled'),
              connect(nodeField='cycleInterval',protoField='timeOut')])),
          Script(DEF='LoadSensorScript',directOutput=True,
            field=[
            field(accessType='initializeOnly',name='ClockNode',type='SFNode',
              children=[
              TimeSensor(USE='Clock')]),
            field(accessType='outputOnly',name='loopStart',type='SFTime'),
            field(accessType='inputOnly',name='fraction',type='SFFloat'),
            field(accessType='initializeOnly',name='priorFraction',type='SFFloat',value=0),
            field(accessType='outputOnly',name='progress',type='SFFloat'),
            field(accessType='initializeOnly',name='watchList',type='MFNode'),
            field(accessType='inputOnly',name='set_watchList',type='MFNode'),
            field(accessType='outputOnly',name='isActive',type='SFBool'),
            field(accessType='outputOnly',name='isLoaded',type='SFBool'),
            field(accessType='outputOnly',name='loadTime',type='SFTime'),
            field(accessType='initializeOnly',name='traceEnabled',type='SFBool',value=False)],
            IS=IS(
              connect=[
              connect(nodeField='watchList',protoField='watchList'),
              connect(nodeField='set_watchList',protoField='set_watchList'),
              connect(nodeField='isActive',protoField='isActive'),
              connect(nodeField='isLoaded',protoField='isLoaded'),
              connect(nodeField='loadTime',protoField='loadTime'),
              connect(nodeField='progress',protoField='progress')])),
          ROUTE(fromField='loopStart',fromNode='LoadSensorScript',toField='startTime',toNode='Clock'),
          ROUTE(fromField='isActive',fromNode='LoadSensorScript',toField='enabled',toNode='Clock'),
          ROUTE(fromField='fraction_changed',fromNode='Clock',toField='fraction',toNode='LoadSensorScript'),
          Collision(enabled=False,
            IS=IS(
              connect=[
              connect(nodeField='proxy',protoField='metadata')]))])])),
    #  ====================================== 
    #  Example use 
    Anchor(description='LoadSensorExample',parameter=["target=_blank"],url=["LoadSensorExample.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorExample.x3d","LoadSensorExample.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["LoadSensorPrototype","defines a prototype","","Click on this text to see","LoadSensorExample scene"],
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

print ("python x3d.py load successful for LoadSensorPrototype.py")
