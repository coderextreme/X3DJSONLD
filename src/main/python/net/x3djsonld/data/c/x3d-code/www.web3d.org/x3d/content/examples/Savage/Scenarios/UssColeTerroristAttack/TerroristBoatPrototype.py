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
    meta(content='TerroristBoatPrototype.x3d',name='title'),
    meta(content='James Harney',name='creator'),
    meta(content='11 October 2001',name='created'),
    meta(content='19 March 2012',name='modified'),
    meta(content='Simple model of fiberglass skiff used by terrorists to attack the USS COLE in Aden Harbor, Yemen. Aligned down positive x axis as required for Savage vehicle models.',name='description'),
    meta(content='TerroristBoatControlPanel.bat',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/TerroristBoatControlPanel.java',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/TerroristBoatActionInterpreter.java',name='reference'),
    meta(content='http://www.foia.navy.mil/usscole/index.html',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/TerroristBoatPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='TerroristBoat',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',name='startExplosion',type='SFTime')]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Transform(
            children=[
            Viewpoint(DEF='STBD',description='Terrorist Boat stbd View',jump=False,orientation=(1,0,0,-0.2),position=(5,10,35)),
            Viewpoint(DEF='REAR',description='Terrorist Boat Rear View',jump=False,orientation=(0,1,0,-1.57),position=(-30,8,0)),
            Viewpoint(description='Terrorist Boat Port View',jump=False,orientation=(0,1,0,3.14),position=(5,8,-30)),
            Viewpoint(DEF='FRONT',description='Terrorist Boat Front View',jump=False,orientation=(0,1,0,1.57),position=(32,8,0))]),
          PositionInterpolator(DEF='BoatPosit',key=[0.325,0.9,1],keyValue=[(0,0,0),(0,-15,0),(0,-.5,0)]),
          TimeSensor(DEF='BoatPositClock',cycleInterval=3.6,
            IS=IS(
              connect=[
              connect(nodeField='startTime',protoField='startExplosion')])),
          TimeSensor(DEF='DeadBoat',cycleInterval=5),
          OrientationInterpolator(DEF='DeadOrient',key=[0.4,0.9,1],keyValue=[(1,0,0,0.00),(1,0,0,3.14),(1,0,0,3.14)]),
          Transform(DEF='BoatTransform',
            children=[
            Transform(
              children=[
              Shape(
                geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00)],orientation=[(0,1,0,0),(0,1,0,0),(0,0,1,-0.5)],scale=[(1,1),(1,1),(1,.1)],solid=False,spine=[(0,0,0),(7.8842,0,0),(10.7,0.25,0)]),
                appearance=Appearance(
                  material=Material(diffuseColor=(.9,.9,.9),shininess=.1),
                  texture=ImageTexture(url=["BoatTexture.jpg","../../Scenarios/UssColeTerroristAttack/BoatTexture.jpg","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/BoatTexture.jpg"]))),
              Shape(
                geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.10,0.96),(0.10,-0.96)],scale=[(1,1),(1,1),(1,.1)],solid=False,spine=[(.1,0,0),(7.8842,0,0),(10.6,0.25,0)]),
                appearance=Appearance(
                  material=Material(diffuseColor=(.4,0,0),emissiveColor=(.4,0,0))))]),
            Transform(translation=(0,-.2,0),
              children=[
              Shape(
                geometry=IndexedFaceSet(coordIndex=[0,2,6,4,0,-1,1,3,7,5,1,-1,0,1,5,4,0,-1,2,3,7,6,2,-1,4,6,7,5,4,-1],solid=False,
                  coord=Coordinate(point=[(2,0,.5),(3,0,.5),(2,0,-.5),(3,0,-.5),(2,1,.5),(3,1.5,.5),(2,1,-.5),(3,1.5,-.5)])),
                appearance=Appearance(
                  material=Material(diffuseColor=(.8,.8,.8))))])]),
          ROUTE(fromField='fraction_changed',fromNode='BoatPositClock',toField='set_fraction',toNode='BoatPosit'),
          ROUTE(fromField='value_changed',fromNode='BoatPosit',toField='set_translation',toNode='BoatTransform'),
          ROUTE(fromField='startTime',fromNode='BoatPositClock',toField='set_startTime',toNode='DeadBoat'),
          ROUTE(fromField='fraction_changed',fromNode='DeadBoat',toField='set_fraction',toNode='DeadOrient'),
          ROUTE(fromField='value_changed',fromNode='DeadOrient',toField='set_rotation',toNode='BoatTransform')])])),
    NavigationInfo(speed=10,type=["EXAMINE","FLY","ANY"],visibilityLimit=7000),
    Background(groundAngle=[1.309,1.570796],groundColor=[(0.1,0.1,0),(0.4,0.25,0.2),(0.6,0.6,0.6)],skyAngle=[1.309,1.571],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
    ProtoInstance(DEF='Boat',name='TerroristBoat'),
    Viewpoint(description='Terrorist Boat View',jump=False,orientation=(1,0,0,-0.2),position=(0,10,35)),
    TouchSensor(DEF='Touch',description='Flips boat over when touched.'),
    ROUTE(fromField='touchTime',fromNode='Touch',toField='startExplosion',toNode='Boat')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TerroristBoatPrototype.py")
