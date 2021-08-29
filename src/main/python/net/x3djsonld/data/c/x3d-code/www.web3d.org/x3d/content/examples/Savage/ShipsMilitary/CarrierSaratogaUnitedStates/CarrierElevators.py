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
    meta(content='CarrierElevators.x3d',name='title'),
    meta(content='Carrier elevators lift planes up from hangar deck to flight deck.',name='description'),
    meta(content='Chun Hock Sng',name='creator'),
    meta(content='1 February 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/CarrierElevators.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='Elevators',
      children=[
      Transform(DEF='Move_elevator1',
        children=[
        Shape(DEF='Elevator1',
          geometry=Extrusion(crossSection=[(44,10.5),(58.5,10.5),(58.5,-2),(44,-2),(44,10.5)]),
          appearance=Appearance(
            material=Material(diffuseColor=(0.502,0.502,0.502)))),
        TouchSensor(DEF='TouchSensor1'),
        TimeSensor(DEF='CLOCK1',cycleInterval=15,enabled=False,loop=True),
        PositionInterpolator(DEF='Elevator_1',key=[0.0,0.5,1.0],keyValue=[(0,0,0),(0,-8,0),(0,0,0)])]),
      Transform(DEF='Move_elevator2',
        children=[
        Shape(DEF='Elevator2',
          geometry=Extrusion(crossSection=[(91.5,10.5),(91.5,-2.07),(6.5,-2.07),(6.5,10.5),(91.5,10.5)]),
          appearance=Appearance(
            material=Material(DEF='Elev_col',diffuseColor=(0.5,0.5,0.5)))),
        TimeSensor(DEF='CLOCK2',cycleInterval=12,loop=True),
        PositionInterpolator(DEF='Elevator_2',key=[0.0,0.5,1.0],keyValue=[(0,0,0),(0,-8,0),(0,0,0)])]),
      Transform(DEF='Move_elevator3',
        children=[
        Shape(DEF='Elevator3',
          geometry=Extrusion(crossSection=[(130,10.5),(144.5,10.5),(144.5,-2),(130,-2),(130,10.5)]),
          appearance=Appearance(
            material=Material(USE='Elev_col'))),
        TimeSensor(DEF='CLOCK3',cycleInterval=60,loop=True),
        PositionInterpolator(DEF='Elevator_3',key=[0,0.1,0.15,0.2,0.3,0.4,0.5,0.6,0.7,0.76,0.86,0.9,0.93,0.96,1],keyValue=[(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,-8,0),(0,-8,0)])]),
      Transform(DEF='Move_elevator4',
        children=[
        Shape(DEF='Elevator4',
          geometry=Extrusion(convex=False,crossSection=[(138,-46),(138,-33.5),(153.5,-33.5),(153.5,-37),(156.5,-37.5),(153.5,-46),(138,-46)]),
          appearance=Appearance(
            material=Material(USE='Elev_col'))),
        TimeSensor(DEF='CLOCK4',cycleInterval=60,loop=True),
        PositionInterpolator(DEF='Elevator_4',key=[0,0.1,0.15,0.2,0.3,0.4,0.5,0.6,0.7,0.76,0.86,0.9,0.93,0.96,1],keyValue=[(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,-8,0),(0,-8,0)])])]),
    ROUTE(fromField='isOver',fromNode='TouchSensor1',toField='set_enabled',toNode='CLOCK1'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK1',toField='set_fraction',toNode='Elevator_1'),
    ROUTE(fromField='value_changed',fromNode='Elevator_1',toField='set_translation',toNode='Move_elevator1'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK2',toField='set_fraction',toNode='Elevator_2'),
    ROUTE(fromField='value_changed',fromNode='Elevator_2',toField='set_translation',toNode='Move_elevator2'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK3',toField='set_fraction',toNode='Elevator_3'),
    ROUTE(fromField='value_changed',fromNode='Elevator_3',toField='set_translation',toNode='Move_elevator3'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK4',toField='set_fraction',toNode='Elevator_4'),
    ROUTE(fromField='value_changed',fromNode='Elevator_4',toField='set_translation',toNode='Move_elevator4')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CarrierElevators.py")
