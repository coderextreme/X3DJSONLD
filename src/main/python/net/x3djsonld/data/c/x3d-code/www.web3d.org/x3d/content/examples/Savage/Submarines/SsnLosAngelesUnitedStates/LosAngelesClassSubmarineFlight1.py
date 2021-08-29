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
    meta(content='LosAngelesClassSubmarineFlight1.x3d',name='title'),
    meta(content='Primary model to bring together all the individual parts of a First Flight 688 class submarine.',name='description'),
    meta(content='LT Ken Curtin',name='creator'),
    meta(content='7 August 2003',name='created'),
    meta(content='27 February 2016',name='modified'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/ssn-688.htm',name='reference'),
    meta(content='http://www.combatindex.com/store/3d/ssn688_model.html',name='reference'),
    meta(content='688, Los Angeles, Submarine',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Submarines/SsnLosAngelesUnitedStates/LosAngelesClassSubmarineFlight1.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundColor=[(0,0,.8)]),
    Transform(DEF='MoveSubAround',
      children=[
      Group(DEF='LosAngelesClassSubmarine',
        children=[
        Transform(DEF='BringInHull',
          children=[
          Inline(url=["Hull.x3d","https://savage.nps.edu/Savage/Submarines/SsnLosAngelesUnitedStates/Hull.x3d","Hull.wrl","https://savage.nps.edu/Savage/Submarines/SsnLosAngelesUnitedStates/Hull.wrl"])]),
        Transform(DEF='BringInSail',translation=(24.84,4.9,0),
          children=[
          Inline(url=["Sail.x3d","https://savage.nps.edu/Savage/Submarines/SsnLosAngelesUnitedStates/Sail.x3d","Sail.wrl","https://savage.nps.edu/Savage/Submarines/SsnLosAngelesUnitedStates/Sail.wrl"])]),
        Transform(DEF='BringInSternPlanes',rotation=(1,0,0,-1.57),translation=(-50.92,0,6),
          children=[
          Transform(DEF='SternPlanes',center=(3,0,0),
            children=[
            TouchSensor(DEF='MoveSternPlanes',description='Activates the Stern Planes'),
            TimeSensor(DEF='SternPlaneTimer'),
            ROUTE(fromField='touchTime',fromNode='MoveSternPlanes',toField='set_startTime',toNode='SternPlaneTimer'),
            OrientationInterpolator(DEF='RotateSternPlanes',key=[0,.25,.50,.75,1.0],keyValue=[(0,1,0,0.0),(0,1,0,0.52),(0,1,0,0.00),(0,1,0,-0.52),(0,1,0,0.00)]),
            ROUTE(fromField='fraction_changed',fromNode='SternPlaneTimer',toField='set_fraction',toNode='RotateSternPlanes'),
            ROUTE(fromField='value_changed',fromNode='RotateSternPlanes',toField='set_rotation',toNode='SternPlanes'),
            Inline(url=["Planes.x3d","https://savage.nps.edu/Savage/Submarines/SsnLosAngelesUnitedStates/Planes.x3d"])])]),
        Transform(DEF='BringInRudder',translation=(-50.92,-4.72,0),
          children=[
          Transform(DEF='Rudder',center=(3,0,0),
            children=[
            TouchSensor(DEF='MoveRudder',description='Activates the Rudder'),
            TimeSensor(DEF='RudderTimer'),
            ROUTE(fromField='touchTime',fromNode='MoveRudder',toField='set_startTime',toNode='RudderTimer'),
            OrientationInterpolator(DEF='RudderRotation',key=[0,.25,.50,.75,1.0],keyValue=[(0,1,0,0.0),(0,1,0,0.52),(0,1,0,0.00),(0,1,0,-0.52),(0,1,0,0.00)]),
            ROUTE(fromField='fraction_changed',fromNode='RudderTimer',toField='set_fraction',toNode='RudderRotation'),
            ROUTE(fromField='value_changed',fromNode='RudderRotation',toField='set_rotation',toNode='Rudder'),
            Inline(url=["Rudder.x3d","https://savage.nps.edu/Savage/Submarines/SsnLosAngelesUnitedStates/Rudder.x3d"])])]),
        Transform(DEF='BringInScrew',rotation=(0,1,0,-1.57),scale=(1.1,1.1,1.1),translation=(-53.2,0,0),
          children=[
          Inline(url=["../../Submarines/Various/Type209GlafkosDieselSubmarinePropeller.x3d","https://savage.nps.edu/Savage/Submarines/Various/Type209GlafkosDieselSubmarinePropeller.x3d","../../Submarines/Various/Type209GlafkosDieselSubmarinePropeller.wrl","https://savage.nps.edu/Savage/Submarines/Various/Type209GlafkosDieselSubmarinePropeller.wrl"])])])]),
    Transform(DEF='AllAhead1_3',translation=(0,40,0),
      children=[
      Shape(DEF='StartSubMoving',
        geometry=Text(string=["All Ahead 1/3"],
          fontStyle=FontStyle(size=10)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0)))),
      TouchSensor(DEF='StartSub',description='Activates the Submarine Movement'),
      TimeSensor(DEF='MoveClock',cycleInterval=40),
      PositionInterpolator(DEF='MovePath',key=[0,.125,.250,.375,.5,.625,.750,.875,1],keyValue=[(0,0,0),(100,0,-100),(200,0,-200),(100,0,-300),(0,0,-400),(-100,0,-300),(-200,0,-200),(-100,0,100),(0,0,0)]),
      OrientationInterpolator(DEF='MoveRotate',key=[0,.125,.250,.375,.5,.625,.750,.875,1],keyValue=[(0,0,0,0),(0,1,0,.785),(0,1,0,1.571),(0,1,0,2.357),(0,1,0,3.14),(0,1,0,3.928),(0,1,0,4.712),(0,1,0,5.498),(0,0,0,6.28)]),
      ROUTE(fromField='touchTime',fromNode='StartSub',toField='set_startTime',toNode='MoveClock'),
      ROUTE(fromField='fraction_changed',fromNode='MoveClock',toField='set_fraction',toNode='MovePath'),
      ROUTE(fromField='fraction_changed',fromNode='MoveClock',toField='set_fraction',toNode='MoveRotate'),
      ROUTE(fromField='value_changed',fromNode='MovePath',toField='set_translation',toNode='MoveSubAround'),
      ROUTE(fromField='value_changed',fromNode='MoveRotate',toField='set_rotation',toNode='MoveSubAround')]),
    Viewpoint(description='FarAway',orientation=(-0.344,0.933,0.109,0.2504),position=(80,13.9,300.3)),
    Viewpoint(description='StbdView',orientation=(-0.344,0.933,0.109,0.2504),position=(30,13.9,83.3)),
    Viewpoint(description='SailFront',orientation=(-0.195,0.949,0.249,1.1171),position=(50.6,18.3,13.3)),
    Viewpoint(description='TopDown',orientation=(-0.887,0.46,0.045,1.6075),position=(45.7,83.9,-5.4)),
    Viewpoint(description='Bottom',orientation=(-0.35,0.737,-0.578,2.4783),position=(78.3,-34.8,-15.6)),
    Viewpoint(description='RearView',orientation=(-0.36,-0.894,0.266,1.6014),position=(-84.7,12.9,-1.6)),
    Viewpoint(description='PortView',orientation=(0.15,0.963,0.223,2.8124),position=(44.4,39.2,-78.3))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for LosAngelesClassSubmarineFlight1.py")
