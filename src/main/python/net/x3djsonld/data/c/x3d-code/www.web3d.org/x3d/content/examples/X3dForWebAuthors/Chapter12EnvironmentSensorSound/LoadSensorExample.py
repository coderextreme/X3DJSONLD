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
    meta(content='LoadSensorExample.x3d',name='title'),
    meta(content='Simple test of LoadSensor node',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='17 July 2008',name='created'),
    meta(content='14 June 2020',name='modified'),
    meta(content='Copyright Don Brutzman and Leonard Daly 2008',name='rights'),
    meta(content='X3D LoadSensor example',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter12EnvironmentSensorSound/LoadSensorExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='LoadSensor.x3d'),
    Viewpoint(DEF='ViewAll',description='LoadSensor test',position=(0,0,12)),
    Inline(DEF='HelloWorld',url=["../HelloWorld.x3d","https://www.web3d.org/x3d/content/examples/HelloWorld.x3d"]),
    LoadSensor(DEF='InlineLoadSensor',timeOut=5,
      children=[
      Inline(USE='HelloWorld')]),
    Transform(DEF='PivotTextSigns',translation=(0,3,0),
      #  First sign indicates waiting... 
      children=[
      Shape(
        geometry=Text(length=[0],string=["LoadSensor waiting for HelloWorld scene..."],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.7,style_='ITALIC')),
        appearance=Appearance(
          material=Material(emissiveColor=(0.878431,0.262745,0)))),
      #  Second sign indicates completed, initially rotated 90 degrees out of view 
      Transform(rotation=(0,1,0,1.57),
        children=[
        Shape(
          geometry=Text(length=[0],string=["LoadSensor reports HelloWorld scene loading complete."],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.7,style_='ITALIC')),
          appearance=Appearance(
            material=Material(emissiveColor=(0,0.278431,0.027451))))])]),
    OrientationInterpolator(DEF='SignRotationInterpolator',key=[0,1],keyValue=[(0,1,0,0),(0,1,0,-1.57)]),
    TimeSensor(DEF='SignRotationClock',cycleInterval=0.8),
    ROUTE(fromField='loadTime',fromNode='InlineLoadSensor',toField='set_startTime',toNode='SignRotationClock'),
    ROUTE(fromField='fraction_changed',fromNode='SignRotationClock',toField='set_fraction',toNode='SignRotationInterpolator'),
    ROUTE(fromField='value_changed',fromNode='SignRotationInterpolator',toField='set_rotation',toNode='PivotTextSigns'),
    Script(DEF='TraceScript',
      field=[
      field(accessType='inputOnly',name='eventLoaded',type='SFBool'),
      field(accessType='inputOnly',name='loadTimeEvent',type='SFTime')]),
    ROUTE(fromField='isLoaded',fromNode='InlineLoadSensor',toField='eventLoaded',toNode='TraceScript'),
    ROUTE(fromField='loadTime',fromNode='InlineLoadSensor',toField='loadTimeEvent',toNode='TraceScript')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for LoadSensorExample.py")
