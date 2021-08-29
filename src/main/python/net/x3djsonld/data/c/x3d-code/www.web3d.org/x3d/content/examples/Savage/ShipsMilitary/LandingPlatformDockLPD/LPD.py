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
    meta(content='LPD.x3d',name='title'),
    meta(content='Simple Landing Platform Dock (LPD) amphibious landing ship.',name='description'),
    meta(content='Mike Hunsberger',name='creator'),
    meta(content='28 January 2001',name='created'),
    meta(content='22 August 2018',name='modified'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/LandingPlatformDockLPD/LPD.x3d',name='identifier'),
    meta(content='http://www.fas.org',name='reference'),
    meta(content="Information also obtained from Jane's Online Fighting Ship catalog",name='reference'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='LPD: Landing Platform Dock',orientation=(1,0,0,-0.2),position=(-20,40,200)),
    NavigationInfo(speed=50),
    LOD(range=[1000,4000,20000],
      #  Close range is high resolution. Need to check scale. 
      children=[
      Group(DEF='LPD',
        children=[
        Transform(DEF='Hull',
          children=[
          Shape(
            geometry=Extrusion(DEF='UpperForward',creaseAngle=1.57,crossSection=[(0,-16),(0,16),(8.1,16),(8.1,-16),(0,-16)],orientation=[(0,0,1,0),(0,1,0,0),(0,1,0,0),(0,1,0,0),(0,0,1,-0.4)],scale=[(1,1),(1.5,0.90),(1.5,.75),(1.5,.43),(1.5,.1)],solid=False,spine=[(-10.5,0,0),(34,4,0),(53.7,4,0),(72,4,0),(80,4.25,0)]),
            appearance=Appearance(
              material=Material(DEF='HullGray',diffuseColor=(0.5,0.5,0.5)))),
          Shape(
            geometry=Extrusion(DEF='LowerAft',creaseAngle=1.57,crossSection=[(0,-16),(0,-13),(7,-13),(7,13),(0,13),(0,16),(7,16),(8,14),(8,-14),(7,-16),(0,-16)],orientation=[(0,1,0,0),(0,1,0,0),(0,0,1,0)],solid=False,spine=[(-117,-8,0),(0,-8,0),(1,-8,0)]),
            appearance=Appearance(
              material=Material(USE='HullGray'))),
          Shape(
            geometry=Extrusion(DEF='LowerForward',creaseAngle=1.57,crossSection=[(0,-16),(0,16),(7,16),(8,14),(8,-14),(7,-16),(0,-16)],orientation=[(0,1,0,0),(0,1,0,0),(0,1,0,0),(0,0,1,0.3)],scale=[(1,1),(1,.75),(1,.43),(1,.2)],solid=False,spine=[(1,-8,0),(53.7,-8,0),(70,-8,0),(74,-7.5,0)]),
            appearance=Appearance(
              material=Material(USE='HullGray'))),
          Shape(
            geometry=Extrusion(DEF='UpperAft',convex=False,creaseAngle=1.57,crossSection=[(0,-16),(8.1,-16),(8.1,-13),(1,-13),(1,13),(8.1,13),(8.1,16),(0,16),(0,-16)],orientation=[(0,0,1,0.35),(0,1,0,0),(0,0,1,0)],solid=False,spine=[(-120,0,0),(-117,0,0),(-10,0,0)]),
            appearance=Appearance(
              material=Material(USE='HullGray'))),
          Group(DEF='LowerDoorWithOpenTouchSensor',
            children=[
            TouchSensor(DEF='OpenDoors',description='Open Doors'),
            OrientationInterpolator(DEF='LowerDoorOrientationInterpolator',key=[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],keyValue=[(0,0,-1,3.14),(0,0,-1,2.95),(0,0,-1,2.76),(0,0,-1,2.56),(0,0,-1,2.36),(0,0,-1,2.16),(0,0,-1,1.96),(0,0,-1,1.76),(0,0,-1,1.56),(0,0,-1,1.36),(0,0,-1,1.16)]),
            TimeSensor(DEF='Clock2',cycleInterval=10),
            ROUTE(fromField='touchTime',fromNode='OpenDoors',toField='set_startTime',toNode='Clock2'),
            ROUTE(fromField='fraction_changed',fromNode='Clock2',toField='set_fraction',toNode='LowerDoorOrientationInterpolator'),
            Transform(DEF='LowerWellDeckDoor',
              children=[
              Transform(DEF='lowerDoor',center=(0,3.8,0),rotation=(0,0,-1,3.14),translation=(-116,-19,0),
                children=[
                Shape(
                  geometry=Box(size=(0.25,7.6,26)),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,0.66,1))))])]),
            ROUTE(fromField='value_changed',fromNode='LowerDoorOrientationInterpolator',toField='set_rotation',toNode='lowerDoor')]),
          Group(DEF='UpperDoorWithCloseTouchSensor',
            children=[
            OrientationInterpolator(DEF='DoorOrientationInterpolator',key=[0,0.1,0.15,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],keyValue=[(0,0,1,0.35),(0,0,-1,0.26),(0,0,-1,0.44),(0,0,-1,0.52),(0,0,-1,0.61),(0,0,-1,0.70),(0,0,-1,0.79),(0,0,-1,0.87),(0,0,-1,0.96),(0,0,-1,1.10),(0,0,-1,1.32),(0,0,-1,1.45)]),
            TimeSensor(DEF='Clock',cycleInterval=10),
            ROUTE(fromField='touchTime',fromNode='OpenDoors',toField='set_startTime',toNode='Clock'),
            ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='DoorOrientationInterpolator'),
            Transform(DEF='UpperWellDeckDoor',
              children=[
              Transform(DEF='UpperDoor',center=(0,4,0),rotation=(0,0,1,0.35),translation=(-119,-4.3,0),
                children=[
                Shape(
                  geometry=Box(size=(0.25,8,26)),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,0.66,1))))])]),
            ROUTE(fromField='value_changed',fromNode='DoorOrientationInterpolator',toField='set_rotation',toNode='UpperDoor')])]),
        Transform(DEF='Superstructure',
          children=[
          Inline(url=["LPDSuperstructure.x3d","https://savage.nps.edu/Savage/ShipsMilitary/LandingPlatformDockLPD/LPDSuperstructure.x3d","LPDSuperstructure.wrl","https://savage.nps.edu/Savage/ShipsMilitary/LandingPlatformDockLPD/LPDSuperstructure.wrl"])])]),
      #  Medium range is low resolution 
      Group(DEF='LPDSimple',
        children=[
        Transform(
          children=[
          Shape(
            geometry=Box(size=(208.5,27.5,31.9)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.65,0.65,0.65))))])]),
      #  Long range is tactical symbol 
      Group(DEF='LPDSymbol',
        children=[
        Billboard(axisOfRotation=(0,0,0),
          children=[
          Transform(
            children=[
            Shape(
              geometry=IndexedFaceSet(ccw=False,coordIndex=[0,1,2,3,4,-1],
                coord=Coordinate(point=[(100,100,0),(100,-100,0),(-100,-100,0),(-100,100,0),(100,100,0)])),
              appearance=Appearance(
                texture=ImageTexture(url=["LPDSymbol.png","https://savage.nps.edu/Savage/ShipsMilitary/LandingPlatformDockLPD/LPDSymbol.png"])))])])]),
      #  Extreme range is not rendered 
      WorldInfo(info=["null node"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for LPD.py")
