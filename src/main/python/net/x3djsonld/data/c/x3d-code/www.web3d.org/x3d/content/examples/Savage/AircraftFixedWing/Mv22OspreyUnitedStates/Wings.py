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
    meta(content='Wings.x3d',name='title'),
    meta(content='Osprey MV-22 wings and engines.',name='description'),
    meta(content='Major William C. James USMC',name='creator'),
    meta(content='23 September 2001',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/Mv22OspreyUnitedStates/Wings.x3d',name='identifier'),
    meta(content='http://www.navair.navy.mil/v22',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/v-22.htm',name='reference'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(.2,.2,.7)]),
    Viewpoint(description='Front, level',position=(0,0,30)),
    #  Wings 
    Transform(
      children=[
      Transform(DEF='L_Wing',rotation=(0,1,0,.1),translation=(-4.5,0,0),
        children=[
        Transform(rotation=(0,0,1,-.05),scale=(1,1,1.25),
          children=[
          Shape(DEF='L_Wing_Cross_Span',
            geometry=Extrusion(creaseAngle=1.6,crossSection=[(0,.3),(3.75,.3),(3.75,-.3),(-3.75,-.3),(-3.75,.3),(0,.3)],scale=[(1,1),(1,.5)],solid=False,spine=[(0,0,0),(0,0,-2.5)]),
            appearance=Appearance(
              material=Material(DEF='L_Wing_Cross_Span_Color',diffuseColor=(.5,.5,.5),shininess=.5)))])]),
      Transform(DEF='R_Wing',rotation=(0,1,0,-.1),translation=(4.5,0,0),
        children=[
        Transform(rotation=(0,0,1,.05),scale=(1,1,1.25),
          children=[
          Shape(DEF='R_Wing_Cross_Span',
            geometry=Extrusion(creaseAngle=1.6,crossSection=[(0,.3),(3.75,.3),(3.75,-.3),(-3.75,-.3),(-3.75,.3),(0,.3)],scale=[(1,1),(1,.5)],solid=False,spine=[(0,0,0),(0,0,-2.5)]),
            appearance=Appearance(
              material=Material(DEF='R_Wing_Cross_Span_Color',diffuseColor=(.5,.5,.5),shininess=.5)))])])]),
    #  Inline_Right_Engine 
    Transform(DEF='Right_Engine',translation=(9.3,0,-1),
      children=[
      Inline(url=["RightEngine.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/Mv22OspreyUnitedStates/RightEngine.x3d","RightEngine.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/Mv22OspreyUnitedStates/RightEngine.wrl"]),
      #  
      TouchSensor(DEF='RCowling_rotation_sensor',description='right cowling rotation'),
      TimeSensor(DEF='CLOCK1',cycleInterval=4),
      OrientationInterpolator(DEF='CowlingInterpolator',key=[0.0,1.0],keyValue=[(-1.0,0.0,0.0,0.0),(-1.0,0.0,0.0,1.57)])]),
    #  Inline_Left_Engine 
    Transform(DEF='Left_Engine',translation=(-9.3,0,-1),
      children=[
      Inline(url=["LeftEngine.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/Mv22OspreyUnitedStates/LeftEngine.x3d","LeftEngine.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/Mv22OspreyUnitedStates/LeftEngine.wrl"]),
      #  
      TouchSensor(DEF='LCowling_rotation_sensor',description='left cowling rotation'),
      TimeSensor(DEF='CLOCK2',cycleInterval=4),
      OrientationInterpolator(USE='CowlingInterpolator')]),
    #  RightCowling 
    ROUTE(fromField='touchTime',fromNode='RCowling_rotation_sensor',toField='set_startTime',toNode='CLOCK1'),
    ROUTE(fromField='value_changed',fromNode='CowlingInterpolator',toField='set_rotation',toNode='Right_Engine'),
    #  Sensor_routes_for_rotation_together 
    ROUTE(fromField='touchTime',fromNode='RCowling_rotation_sensor',toField='set_startTime',toNode='CLOCK2'),
    #  Clock_interpolator 
    ROUTE(fromField='fraction_changed',fromNode='CLOCK1',toField='set_fraction',toNode='CowlingInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK2',toField='set_fraction',toNode='CowlingInterpolator'),
    #  Left_Cowling 
    ROUTE(fromField='touchTime',fromNode='LCowling_rotation_sensor',toField='set_startTime',toNode='CLOCK2'),
    ROUTE(fromField='value_changed',fromNode='CowlingInterpolator',toField='set_rotation',toNode='Left_Engine'),
    #  Sensor_routes_for_rotation_together 
    ROUTE(fromField='touchTime',fromNode='LCowling_rotation_sensor',toField='set_startTime',toNode='CLOCK1')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Wings.py")
