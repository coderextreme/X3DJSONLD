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
    meta(content='RemusSideScan.x3d',name='title'),
    meta(content='REMUS Autonomous Underwater Vehicle (AUV) with side-scan sonar beams.',name='description'),
    meta(content='Jeffrey Weekley and Don Brutzman',name='creator'),
    meta(content='12 March 2001',name='created'),
    meta(content='8 April 2012',name='modified'),
    meta(content='RemusAssetTrackPlayback3d.jpg',name='Image'),
    meta(content='https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/RemusSideScan.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["Only unclassified open resources were used to create this model."],title='REMUS Side Scan'),
    ExternProtoDeclare(appinfo='Produce wireframe or semi-transparent sonar sidescan beams',name='SideScanSonar',url=["../../../Savage/CommunicationsAndSensors/Sonar/SideScanSonarPrototype.x3d#SideScanSonar","https://savage.nps.edu/Savage/CommunicationsAndSensors/Sonar/SideScanSonarPrototype.x3d#SideScanSonar","../../../Savage/CommunicationsAndSensors/Sonar/SideScanSonarPrototype.wrl#SideScanSonar","https://savage.nps.edu/Savage/CommunicationsAndSensors/Sonar/SideScanSonarPrototype.wrl#SideScanSonar"],
      field=[
      field(accessType='inputOnly',appinfo='vertical distance above bottom in meters along y axis',name='altitude',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='default vertical distance above bottom in meters along y axis',name='defaultAltitude',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='maximum effective altitude of sidescan sonar above bottom',name='maxAltitude',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='distance in meters from nadir to rightmost/leftmost edge when operating at defaultAltitude above the bottom',name='defaultCrossTrackHalfRange',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='longitudinal width of a single return',name='defaultTrackWidthMeters',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='width (or diameter) of vehicle carrying port/starboard sidescan sonar transducers',name='vehicleWidthMeters',type='SFFloat'),
      field(accessType='inputOnly',appinfo='(communications) whether transmitted signal is in contact with receiver or (sensor) is a target return detected?',name='contact',type='SFBool'),
      field(accessType='initializeOnly',appinfo='draw lines for tracking shape?',name='wireframe',type='SFBool'),
      field(accessType='initializeOnly',appinfo='draw solid tracking shape?',name='solid',type='SFBool'),
      field(accessType='initializeOnly',appinfo='rendering color when contact=true',name='contactColor',type='SFColor'),
      field(accessType='initializeOnly',appinfo='rendering color when contact=false',name='noContactColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='1 = fully transparent wireframe only',name='transparency',type='SFFloat')]),
    Background(skyColor=[(0.2,0.7,0.7)]),
    Viewpoint(description='Remus from ahead 30m',orientation=(0,1,0,1.57),position=(30,0.1,0)),
    #  This file builds the REMUS Autonomous Underwater Vehicle (AUV). The dimensions were originally provided in English units and is converted to metric using a scale that 39.3 inches equal one meter. 
    Inline(DEF='Remus',url=["Remus.x3d","../../../Savage/Robots/UnmannedUnderwaterVehicles/Remus.x3d","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/Remus.x3d","Remus.wrl","../../../Savage/Robots/UnmannedUnderwaterVehicles/Remus.wrl","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/Remus.wrl"]),
    #  Remus maxAltitude typically 10% of swath width. 
    Transform(translation=(0.04,0,0),
      children=[
      ProtoInstance(DEF='SideScanSonarBeam',name='SideScanSonar',
        fieldValue=[
        fieldValue(name='defaultTrackWidthMeters',value=1),
        fieldValue(name='transparency',value=0.5),
        fieldValue(name='wireframe',value=True),
        fieldValue(name='solid',value=True)])]),
    #  Authoring assist, hidden under Switch whichChoice=0 
    Switch(whichChoice=-1,
      children=[
      Group(
        children=[
        Transform(translation=(0,-0.5,0),
          children=[
          Inline(DEF='CoordinateAxes',url=["../../../Savage/Tools/Authoring/CoordinateAxes.x3d","../../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../../Savage/Tools/Authoring/CoordinateAxes.wrl","../../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"])]),
        Transform(scale=(0.1,0.1,0.1),
          children=[
          Inline(DEF='Grid',url=["../../../Savage/Tools/Authoring/GridXZ_20x20Movable.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Movable.x3d","../../../Savage/Tools/Authoring/GridXZ_20x20Movable.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Movable.wrl"])]),
        Transform(scale=(3,3,3),translation=(0,-3,0),
          children=[
          Inline(USE='Grid')])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RemusSideScan.py")
