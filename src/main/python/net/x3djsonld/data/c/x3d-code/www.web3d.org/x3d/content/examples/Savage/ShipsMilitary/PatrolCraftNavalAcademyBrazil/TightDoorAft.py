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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='TightDoorAft.x3d',name='title'),
    meta(content='Brazilian Naval Academy Training Ship',name='description'),
    meta(content='Claudio Coreixas',name='creator'),
    meta(content='20 October 2009',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='http://www.en.mar.mil.br',name='reference'),
    meta(content='ships parts',name='subject'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/PatrolCraftNavalAcademyBrazil/TightDoorAft.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Door',fieldOfView=0.45,orientation=(1,0,0,0),position=(0,0,1)),
    TimeSensor(DEF='spinTimer',cycleInterval=3),
    OrientationInterpolator(DEF='openDoor',key=[0,0.25,0.5,0.75,1],keyValue=[(0,1,0,0),(0,1,0,0),(0,1,0,0),(0,0,1,1.57),(0,0,1,2.8)]),
    ROUTE(fromField='fraction_changed',fromNode='spinTimer',toField='set_fraction',toNode='openDoor'),
    TimeSensor(DEF='dogTimer'),
    OrientationInterpolator(DEF='openDog',key=[0,1],keyValue=[(0,1,0,0),(0,1,0,1.3)]),
    ROUTE(fromField='fraction_changed',fromNode='dogTimer',toField='set_fraction',toNode='openDog'),
    OrientationInterpolator(DEF='openDog2',key=[0,1],keyValue=[(0,1,0,0),(0,1,0,-1.3)]),
    ROUTE(fromField='fraction_changed',fromNode='dogTimer',toField='set_fraction',toNode='openDog2'),
    Transform(DEF='openDoorTransform',center=(-0.1,0,0),
      children=[
      ROUTE(fromField='value_changed',fromNode='openDoor',toField='rotation',toNode='openDoorTransform'),
      Transform(DEF='openDogSpin',center=(0.07,0.01,-0.1),
        children=[
        ROUTE(fromField='value_changed',fromNode='openDog',toField='rotation',toNode='openDogSpin'),
        Transform(translation=(0.07,0.01,-0.1),
          children=[
          Transform(rotation=(1,0,0,1.57),
            children=[
            Shape(DEF='dog',
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.4,0.4))),
              geometry=Extrusion(ccw=False,convex=False,crossSection=[(0.01,0),(0.0092,0.0038),(0.0071,0.0071),(0.0038,0.0092),(0,0.01),(-0.0038,0.0092),(-0.0071,0.0071),(-0.0092,0.0038),(-0.01,0),(-0.0092,-0.0038),(-0.0071,-0.0071),(-0.0038,-0.0092),(0,-0.01),(0.0038,-0.0092),(0.0071,-0.0071),(0.0092,-0.0039),(0.01,0)],scale=[(0.3,0.5),(0.4,0.7),(0.55,0.8),(0.7,0.85),(0.85,0.95),(1,1),(1,1),(0.85,0.95),(0.7,0.85),(0.55,0.8),(0.4,0.7),(0.3,0.5)],solid=False,spine=[(-0.069,0,0.017),(-0.01,0,0.017),(-0.0062,0,0.0162),(-0.0029,0,0.0141),(-0.0008,0,0.0109),(0,0,0.007),(0,0,-0.007),(-0.0008,0,-0.0108),(-0.0029,0,-0.0141),(-0.0062,0,-0.0162),(-0.01,0,-0.017),(-0.069,0,-0.017)]))]),
          TouchSensor(DEF='dogSensor',description='Touch to Open Hatch'),
          ROUTE(fromField='touchTime',fromNode='dogSensor',toField='startTime',toNode='spinTimer'),
          ROUTE(fromField='touchTime',fromNode='dogSensor',toField='startTime',toNode='dogTimer')])]),
      Transform(DEF='openDogSpin2',center=(0.07,0.01,0.1),
        children=[
        ROUTE(fromField='value_changed',fromNode='openDog2',toField='rotation',toNode='openDogSpin2'),
        Transform(translation=(0.07,0.01,0.1),
          children=[
          Transform(rotation=(1,0,0,1.57),
            children=[
            Shape(USE='dog')]),
          TouchSensor(DEF='dogSensor2',description='Touch to Open Hatch'),
          ROUTE(fromField='touchTime',fromNode='dogSensor2',toField='startTime',toNode='spinTimer'),
          ROUTE(fromField='touchTime',fromNode='dogSensor2',toField='startTime',toNode='dogTimer')])]),
      Shape(DEF='TightDoor',
        appearance=Appearance(
          material=Material(diffuseColor=(0.82,0.78,0.74))),
        geometry=IndexedFaceSet(DEF='pipeIFS',convex=False,coordIndex=[1,2,22,21,-1,2,3,23,22,-1,3,4,24,23,-1,4,5,25,24,-1,5,6,26,25,-1,6,7,27,26,-1,7,8,28,27,-1,8,9,29,28,-1,9,10,30,29,-1,10,11,31,30,-1,11,12,32,31,-1,12,13,33,32,-1,13,14,34,33,-1,14,15,35,34,-1,15,16,36,35,-1,16,17,37,36,-1,17,18,38,37,-1,18,19,39,38,-1,19,20,40,39,-1,20,1,21,40,-1,21,22,42,41,-1,22,23,43,42,-1,23,24,44,43,-1,24,25,45,44,-1,25,26,46,45,-1,26,27,47,46,-1,27,28,48,47,-1,28,29,49,48,-1,29,30,50,49,-1,30,31,51,50,-1,31,32,52,51,-1,32,33,53,52,-1,33,34,54,53,-1,34,35,55,54,-1,35,36,56,55,-1,36,37,57,56,-1,37,38,58,57,-1,38,39,59,58,-1,39,40,60,59,-1,40,21,41,60,-1,41,42,62,61,-1,42,43,63,62,-1,43,44,64,63,-1,44,45,65,64,-1,45,46,66,65,-1,46,47,67,66,-1,47,48,68,67,-1,48,49,69,68,-1,49,50,70,69,-1,50,51,71,70,-1,51,52,72,71,-1,52,53,73,72,-1,53,54,74,73,-1,54,55,75,74,-1,55,56,76,75,-1,56,57,77,76,-1,57,58,78,77,-1,58,59,79,78,-1,59,60,80,79,-1,60,41,61,80,-1,61,62,81,-1,62,63,81,-1,63,64,81,-1,64,65,81,-1,65,66,82,81,-1,66,67,82,-1,67,68,82,-1,68,69,82,-1,69,70,82,-1,70,71,83,82,-1,71,72,83,-1,72,73,83,-1,73,74,83,-1,74,75,83,-1,75,76,84,83,-1,76,77,84,-1,77,78,84,-1,78,79,84,-1,79,80,84,-1,80,61,81,84,-1,81,82,83,84,-1],creaseAngle=1.5,solid=False,
          coord=Coordinate(point=[(0.0000,0.0000,0.0000),(0.1000,0.0000,0.1500),(0.0962,0.0000,0.1691),(0.0854,0.0000,0.1853),(0.0692,0.0000,0.1962),(0.0500,0.0000,0.2000),(-0.0500,0.0000,0.2000),(-0.0691,0.0000,0.1962),(-0.0853,0.0000,0.1854),(-0.0962,0.0000,0.1692),(-0.1000,0.0000,0.1501),(-0.1000,0.0000,-0.1499),(-0.0962,0.0000,-0.1691),(-0.0854,0.0000,-0.1853),(-0.0692,0.0000,-0.1962),(-0.0501,0.0000,-0.2000),(0.0499,0.0000,-0.2000),(0.0690,0.0000,-0.1962),(0.0853,0.0000,-0.1855),(0.0961,0.0000,-0.1693),(0.1000,0.0000,-0.1502),(0.0962,0.0038,0.1500),(0.0927,0.0038,0.1677),(0.0827,0.0038,0.1827),(0.0677,0.0038,0.1927),(0.0500,0.0038,0.1962),(-0.0500,0.0038,0.1962),(-0.0676,0.0038,0.1927),(-0.0826,0.0038,0.1827),(-0.0927,0.0038,0.1677),(-0.0962,0.0038,0.1501),(-0.0962,0.0038,-0.1499),(-0.0927,0.0038,-0.1676),(-0.0827,0.0038,-0.1826),(-0.0678,0.0038,-0.1926),(-0.0501,0.0038,-0.1962),(0.0499,0.0038,-0.1962),(0.0676,0.0038,-0.1927),(0.0826,0.0038,-0.1828),(0.0926,0.0038,-0.1678),(0.0962,0.0038,-0.1501),(0.0854,0.0071,0.1500),(0.0827,0.0071,0.1635),(0.0750,0.0071,0.1750),(0.0636,0.0071,0.1827),(0.0500,0.0071,0.1854),(-0.0500,0.0071,0.1854),(-0.0635,0.0071,0.1827),(-0.0750,0.0071,0.1750),(-0.0827,0.0071,0.1636),(-0.0854,0.0071,0.1501),(-0.0854,0.0071,-0.1499),(-0.0827,0.0071,-0.1635),(-0.0751,0.0071,-0.1750),(-0.0636,0.0071,-0.1826),(-0.0501,0.0071,-0.1854),(0.0499,0.0071,-0.1854),(0.0635,0.0071,-0.1827),(0.0749,0.0071,-0.1751),(0.0826,0.0071,-0.1636),(0.0854,0.0071,-0.1501),(0.0692,0.0092,0.1500),(0.0677,0.0092,0.1573),(0.0636,0.0092,0.1635),(0.0573,0.0092,0.1677),(0.0500,0.0092,0.1692),(-0.0500,0.0092,0.1692),(-0.0573,0.0092,0.1677),(-0.0635,0.0092,0.1636),(-0.0677,0.0092,0.1574),(-0.0692,0.0092,0.1500),(-0.0692,0.0092,-0.1500),(-0.0677,0.0092,-0.1573),(-0.0636,0.0092,-0.1635),(-0.0574,0.0092,-0.1677),(-0.0500,0.0092,-0.1692),(0.0500,0.0092,-0.1692),(0.0573,0.0092,-0.1677),(0.0635,0.0092,-0.1636),(0.0677,0.0092,-0.1574),(0.0692,0.0092,-0.1501),(0.0500,0.0100,0.1500),(-0.0500,0.0100,0.1500),(0.0500,0.0100,-0.1500),(0.0500,0.0100,-0.1500)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TightDoorAft.py")
