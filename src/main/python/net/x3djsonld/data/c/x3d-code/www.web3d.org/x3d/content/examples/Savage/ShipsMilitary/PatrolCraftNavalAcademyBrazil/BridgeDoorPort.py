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
    meta(content='BridgeDoorPort.x3d',name='title'),
    meta(content='Brazilian Naval Academy Training Ship',name='description'),
    meta(content='Claudio Coreixas',name='creator'),
    meta(content='20 October 2009',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='http://www.en.mar.mil.br',name='reference'),
    meta(content='ships parts',name='subject'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/PatrolCraftNavalAcademyBrazil/BridgeDoorPort.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Door',fieldOfView=0.45,orientation=(1,0,0,0),position=(5.7,2.3,4)),
    TimeSensor(DEF='spinTimer',cycleInterval=3),
    OrientationInterpolator(DEF='openDoor',key=[0,0.25,0.5,0.75,1],keyValue=[(0,1,0,0),(0,1,0,0),(0,1,0,0),(0,1,0,-1.57),(0,1,0,-3)]),
    ROUTE(fromField='fraction_changed',fromNode='spinTimer',toField='set_fraction',toNode='openDoor'),
    TimeSensor(DEF='dogTimer'),
    OrientationInterpolator(DEF='openDog',key=[0,1],keyValue=[(0,0,1,0),(0,0,1,-1.3)]),
    ROUTE(fromField='fraction_changed',fromNode='dogTimer',toField='set_fraction',toNode='openDog'),
    Transform(DEF='openDoorTransform',center=(5.825,2,-0.55),
      children=[
      ROUTE(fromField='value_changed',fromNode='openDoor',toField='rotation',toNode='openDoorTransform'),
      Transform(DEF='openDogSpin',center=(5.6,2.3,-0.55),
        children=[
        ROUTE(fromField='value_changed',fromNode='openDog',toField='rotation',toNode='openDogSpin'),
        Transform(
          children=[
          Transform(
            children=[
            Shape(DEF='dog',
              appearance=Appearance(
                material=Material(),),
              geometry=Extrusion(ccw=False,convex=False,crossSection=[(0.01,0),(0.0092,0.0038),(0.0071,0.0071),(0.0038,0.0092),(0,0.01),(-0.0038,0.0092),(-0.0071,0.0071),(-0.0092,0.0038),(-0.01,0),(-0.0092,-0.0038),(-0.0071,-0.0071),(-0.0038,-0.0092),(0,-0.01),(0.0038,-0.0092),(0.0071,-0.0071),(0.0092,-0.0039),(0.01,0)],scale=[(0.3,0.5),(0.4,0.7),(0.55,0.8),(0.7,0.85),(0.85,0.95),(1,1),(1,1),(0.85,0.95),(0.7,0.85),(0.55,0.8),(0.4,0.7),(0.3,0.5)],solid=False,spine=[(5.6690,2.3000,-0.5330),(5.6100,2.3000,-0.5330),(5.6062,2.3000,-0.5338),(5.6029,2.3000,-0.5359),(5.6008,2.3000,-0.5391),(5.6000,2.3000,-0.5430),(5.6000,2.3000,-0.5570),(5.6008,2.3000,-0.5608),(5.6029,2.3000,-0.5641),(5.6062,2.3000,-0.5662),(5.6100,2.3000,-0.5670),(5.6690,2.3000,-0.5670)]))]),
          TouchSensor(DEF='dogSensor',description='Touch to Open Hatch'),
          ROUTE(fromField='touchTime',fromNode='dogSensor',toField='startTime',toNode='spinTimer'),
          ROUTE(fromField='touchTime',fromNode='dogSensor',toField='startTime',toNode='dogTimer')])]),
      Shape(DEF='BridgeDoorStb',
        appearance=Appearance(
          texture=ImageTexture(url=["wood02.jpg","https://savage.nps.edu/Savage/ShipsMilitary/PatrolCraftNavalAcademyBrazil/wood.jpg"])),
        geometry=IndexedFaceSet(DEF='doorIFS',coordIndex=[0,4,5,1,-1,1,5,6,2,-1,2,6,7,3,-1,4,0,3,7,-1],creaseAngle=1.5,solid=False,
          coord=Coordinate(point=[(5.575,2,-0.55),(5.825,2,-0.55),(5.825,2.55,-0.55),(5.575,2.55,-0.55),(5.6,2.325,-0.55),(5.8,2.325,-0.55),(5.8,2.525,-0.55),(5.6,2.525,-0.55)]))),
      Shape(DEF='window',
        appearance=Appearance(
          material=Material(DEF='Glass',ambientIntensity=0.37773332,diffuseColor=(0.0,0.36666667,0.76666665),shininess=0.76666665,specularColor=(1.0,1.0,1.0),transparency=0.58)),
        geometry=IndexedFaceSet(DEF='windowIFS',coordIndex=[0,1,2,3,-1],creaseAngle=1.5,solid=False,
          coord=Coordinate(point=[(5.6,2.325,-0.55),(5.8,2.325,-0.55),(5.8,2.525,-0.55),(5.6,2.525,-0.55)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BridgeDoorPort.py")
