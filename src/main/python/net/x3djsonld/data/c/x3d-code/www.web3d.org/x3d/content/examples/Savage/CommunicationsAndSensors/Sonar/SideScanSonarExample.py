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
    meta(content='SideScanSonarExample.x3d',name='title'),
    meta(content='Produce wireframe or transparent sidescan sonar beams.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='15 March 2001',name='created'),
    meta(content='27 December 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/RemusSideScan.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/Sonar/SideScanSonarExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3 https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(0.2,0.2,0.4)]),
    WorldInfo(info=["Produce wireframe or transparent beam cones"],title='BeamConeExample'),
    Viewpoint(description='SideScanSonar example',orientation=(0,1,0,-1.57),position=(-40,0,0)),
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
    #  Viewable geometry for this scene 
    Group(
      children=[
      ProtoInstance(DEF='SideScanSonarBeam',name='SideScanSonar',
        fieldValue=[
        fieldValue(name='defaultTrackWidthMeters',value=1),
        fieldValue(name='transparency',value=0.5),
        fieldValue(name='wireframe',value=True),
        fieldValue(name='solid',value=True)]),
      Transform(translation=(0,4,0),
        children=[
        Billboard(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(.8,.8,0))),
            geometry=Text(string=["touch text to activate contact-mode rendering"],
              fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=2))),
          TouchSensor(description='Hover over text to activate contact mode'),
          Shape(
            #  transparent Box as text-selection assist 
            geometry=Box(size=(32,2,.001)),
            appearance=Appearance(
              material=Material(transparency=1)))]),
        TouchSensor(DEF='TextTouch',description='touch text to toggle contact-mode rendering'),
        ROUTE(fromField='isOver',fromNode='TextTouch',toField='contact',toNode='SideScanSonarBeam')])]),
    Group(DEF='AnimationGroup',
      children=[
      TimeSensor(DEF='SonarClock',cycleInterval=10,loop=True),
      #  note that this interpolator sets speed at (5m / 6sec) == 0.78 m/sec which is very very slow!! 
      #  this example is not physically realistic but it helps visualize the propagation of sound energy 
      ScalarInterpolator(DEF='RangeInterpolator',key=[0,.2,0.8,1],keyValue=[0,0.01,5,5]),
      ROUTE(fromField='fraction_changed',fromNode='SonarClock',toField='set_fraction',toNode='RangeInterpolator'),
      ROUTE(fromField='value_changed',fromNode='RangeInterpolator',toField='altitude',toNode='SideScanSonarBeam'),
      #  ========== 
      ScalarInterpolator(DEF='TransparencyInterpolator',key=[0,.2,0.8,1],keyValue=[0,0,1,1]),
      ROUTE(fromField='fraction_changed',fromNode='SonarClock',toField='set_fraction',toNode='TransparencyInterpolator'),
      ROUTE(fromField='value_changed',fromNode='TransparencyInterpolator',toField='transparency',toNode='SideScanSonarBeam')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SideScanSonarExample.py")
