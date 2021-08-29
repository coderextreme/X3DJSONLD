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
    meta(content='SoundLoadSensorTest.x3d',name='title'),
    meta(content='UsingLoadSensor to test when AudioClip loading is complete',name='description'),
    meta(content='19 July 2008',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Leonard Daly and Don Brutzman',name='creator'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright 2006, Daly Realism and Don Brutzman',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter12EnvironmentSensorSound/SoundLoadSensorTest.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  Sound location y-value is 1.6 in order to match typical avatar height (in meters) 
    children=[
    WorldInfo(title='SoundLoadSensorTest.x3d'),
    Sound(DEF='SomeSound',location=(0,1.6,0),maxBack=100,maxFront=100,minBack=10,minFront=10,
      source=AudioClip(DEF='WaterSounds',description='Running Water',url=["aqua.wav","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter12EnvironmentSensorSound/aqua.wav"])),
    LoadSensor(DEF='ReportWhenLoaded',
      children=[
      AudioClip(USE='WaterSounds')]),
    ROUTE(fromField='loadTime',fromNode='ReportWhenLoaded',toField='startTime',toNode='WaterSounds'),
    #  send completion report to console 
    Script(DEF='ConsoleReport',
      field=[
      field(accessType='inputOnly',name='loadComplete',type='SFBool'),
      field(accessType='inputOnly',name='loadTime',type='SFTime')]),
    ROUTE(fromField='isLoaded',fromNode='ReportWhenLoaded',toField='loadComplete',toNode='ConsoleReport'),
    ROUTE(fromField='loadTime',fromNode='ReportWhenLoaded',toField='loadTime',toNode='ConsoleReport'),
    #  show visible indication of load waiting, complete 
    Transform(DEF='PivotTextSigns',
      #  First sign indicates waiting... 
      children=[
      Shape(
        geometry=Text(string=["LoadSensor waiting for AudioClip..."],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.7,style_='ITALIC')),
        appearance=Appearance(
          material=Material(emissiveColor=(0.878431,0.262745,0)))),
      #  Second sign indicates completed, initially rotated 90 degrees out of view 
      Transform(rotation=(0,1,0,1.57),
        children=[
        Shape(
          geometry=Text(string=["LoadSensor reports AudioClip loading complete."],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.7,style_='ITALIC')),
          appearance=Appearance(
            material=Material(emissiveColor=(0,0.278431,0.027451))))])]),
    OrientationInterpolator(DEF='SignRotationInterpolator',key=[0,1],keyValue=[(0,1,0,0),(0,1,0,-1.57)]),
    TimeSensor(DEF='SignRotationClock',cycleInterval=0.8),
    ROUTE(fromField='loadTime',fromNode='ReportWhenLoaded',toField='startTime',toNode='SignRotationClock'),
    ROUTE(fromField='fraction_changed',fromNode='SignRotationClock',toField='set_fraction',toNode='SignRotationInterpolator'),
    ROUTE(fromField='value_changed',fromNode='SignRotationInterpolator',toField='rotation',toNode='PivotTextSigns')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SoundLoadSensorTest.py")
