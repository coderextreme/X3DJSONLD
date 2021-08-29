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
    meta(content='RHIBPrototype.x3d',name='title'),
    meta(content='James Harney',name='creator'),
    meta(content='12 November 2001',name='created'),
    meta(content='10 October 2015',name='modified'),
    meta(content='Simple model of US Navy non-Spec War RHIB boat. Aligned down positive x axis as required for Savage vehicle models.',name='description'),
    meta(content='RHIBBoatControlPanel.bat',name='reference'),
    meta(content='http://www.foia.navy.mil/usscole/index.html',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/navy/docs/swos/eng/62b-416/sld005.htm',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/navy/docs/swos/eng/62b-416/sld006.htm',name='reference'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/TurkishFlag.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/RHIBPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='Rigid Hull Inflatable Boat',name='RHIB',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',name='startExplosion',type='SFTime')]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Transform(
            children=[
            Viewpoint(DEF='STBD',description='RHIB Boat stbd View',jump=False,orientation=(1,0,0,-0.2),position=(0,10,25)),
            Viewpoint(DEF='FRONT',centerOfRotation=(0,8,0),description='RHIB Boat Front View',jump=False,orientation=(0,1,0,1.57),position=(27,8,0)),
            Viewpoint(DEF='PORT',centerOfRotation=(0,8,0),description='RHIB Boat Port View',jump=False,orientation=(0,1,0,3.14),position=(0,8,-25)),
            Viewpoint(DEF='REAR',centerOfRotation=(0,8,0),description='RHIB Boat Rear View',jump=False,orientation=(0,1,0,-1.57),position=(-25,8,0))]),
          TimeSensor(DEF='BoatPositClock',cycleInterval=1.8,
            IS=IS(
              connect=[
              connect(nodeField='startTime',protoField='startExplosion')])),
          PositionInterpolator(DEF='BoatPosit',key=[.9,1],keyValue=[(0,0,0),(0,-15,0)]),
          Transform(DEF='BoatTransform',
            children=[
            Transform(
              #  Hull 
              children=[
              Shape(
                geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00)],orientation=[(0,1,0,0),(0,1,0,0),(0,0,1,-0.5)],scale=[(1.25,2),(1.25,2),(1.25,.1)],solid=False,spine=[(0,0,0),(5.775,0,0),(7.9,0.25,0)]),
                appearance=Appearance(
                  material=Material(diffuseColor=(.9,.9,.9),shininess=1))),
              #  Deck 
              Shape(
                geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.10,0.96),(0.10,-0.96)],scale=[(1,1.75),(1,1.75),(1,.1)],solid=False,spine=[(.1,-.5,0),(5.6,-.5,0),(7.8,0.25,0)]),
                appearance=Appearance(
                  material=Material(diffuseColor=(.05,.05,.05),emissiveColor=(.05,.05,.05)))),
              #  Air cushion 
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(.7,.7,.7),shininess=.3)),
                geometry=Extrusion(creaseAngle=.785,crossSection=[(1.00,0),(.92,-.38),(.71,-.71),(.38,-.92),(.00,-1.00),(-.38,-.92),(-.71,-.71),(-.92,-.38),(-1.00,-0.00),(-.92,.38),(-.71,.71),(-.38,.92),(0.00,1.00),(.38,.92),(.71,.71),(.92,.38),(1.00,0.00)],scale=[(.1,.1),(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.1,.1)],solid=False,spine=[(-.66,0,-1.75),(0,0,-1.75),(5.775,0,-1.75),(7.62,.25,-.25),(7.62,.25,.25),(5.775,0,1.75),(0,0,1.75),(-.66,0,1.75)]))]),
            #  Driving console 
            Transform(translation=(0,-.2,0),
              children=[
              Shape(
                geometry=IndexedFaceSet(coordIndex=[0,2,6,4,0,-1,1,3,7,5,1,-1,0,1,5,4,0,-1,2,3,7,6,2,-1,4,6,7,5,4,-1],solid=False,
                  coord=Coordinate(point=[(2,0,.5),(3,0,.5),(2,0,-.5),(3,0,-.5),(2,1,.5),(3,1.5,.5),(2,1,-.5),(3,1.5,-.5)])),
                appearance=Appearance(
                  material=Material(diffuseColor=(.8,.8,.8))))]),
            #  Flag code, based off Turkish Frigate in meta ref. 
            Transform(rotation=(0,0,1,.2),
              children=[
              Group(
                children=[
                Transform(rotation=(0,1,0,3.14),scale=(.2,.2,.2),translation=(0,1.0,0.0),
                  children=[
                  Shape(
                    geometry=IndexedFaceSet(DEF='Flag',convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,0],solid=False,
                      coord=Coordinate(DEF='FlagCoor',point=[(0.0,0.0,0.0),(0.5,0.0,0.0),(1.0,0.0,0.0),(1.5,0.0,0.0),(2.0,0.0,0.0),(2.5,0.0,0.0),(3.0,0.0,0.0),(3.5,0.0,0.0),(4.0,0.0,0.0),(4.5,0.0,0.0),(5.0,0.0,0.0),(5.5,0.0,0.0),(6.0,0.0,0.0),(6.5,0.0,0.0),(7.0,0.0,0.0),(7.5,0.0,0.0),(7.5,0.5,0.0),(7.5,1.0,0.0),(7.5,1.5,0.0),(7.5,2.0,0.0),(7.5,2.5,0.0),(7.5,3.0,0.0),(7.5,3.5,0.0),(7.5,4.0,0.0),(7.5,4.5,0.0),(7.5,5.0,0.0),(7.0,5.0,0.0),(6.5,5.0,0.0),(6.0,5.0,0.0),(5.5,5.0,0.0),(5.0,5.0,0.0),(4.5,5.0,0.0),(4.0,5.0,0.0),(3.5,5.0,0.0),(3.0,5.0,0.0),(2.5,5.0,0.0),(2.0,5.0,0.0),(1.5,5.0,0.0),(1.0,5.0,0.0),(0.5,5.0,0.0),(0.0,5.0,0.0),(0.0,4.5,0.0),(0.0,4.0,0.0),(0.0,3.5,0.0),(0.0,3.0,0.0),(0.0,2.5,0.0),(0.0,2.0,0.0),(0.0,1.5,0.0),(0.0,1.0,0.0),(0.0,0.5,0.0)])),
                    appearance=Appearance(
                      material=Material(shininess=0.8),
                      texture=ImageTexture(repeatS=False,repeatT=False,url=["UsaFlag.png","UsaFlag.gif","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/UsaFlag.png","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/UsaFlag.gif"]),
                      textureTransform=TextureTransform(scale=(1.0,1.3),translation=(0.0,0.05)))),
                  Shape(
                    geometry=IndexedFaceSet(coordIndex=[0,1,2,3,0],solid=False,
                      coord=Coordinate(point=[(-0.3,-5.0,0.0),(0.0,-5.0,0.0),(0.0,5.0,0.0),(-0.3,5.0,0.0)])),
                    appearance=Appearance(
                      material=Material(diffuseColor=(.7,.7,.7)))),
                  TimeSensor(DEF='timer',cycleInterval=4.0,loop=True),
                  CoordinateInterpolator(DEF='MoveFlag',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(0.0,0.0,0.0),(0.5,0.0,0.87),(1.0,0.0,1.0),(1.5,0.0,0.87),(2.0,0.0,0.0),(2.5,0.0,-0.87),(3.0,0.0,-1.0),(3.5,0.0,-0.87),(4.0,0.0,0.0),(4.5,0.0,0.87),(5.0,0.0,1.0),(5.5,0.0,0.87),(6.0,0.0,0.0),(6.5,0.0,-0.87),(7.0,0.0,-1.0),(7.5,0.0,-0.87),(7.5,0.5,-0.87),(7.5,1.0,-0.87),(7.5,1.5,-0.87),(7.5,2.0,-0.87),(7.5,2.5,-0.87),(7.5,3.0,-0.87),(7.5,3.5,-0.87),(7.5,4.0,-0.87),(7.5,4.5,-0.87),(7.5,5.0,-0.87),(7.0,5.0,-1.0),(6.5,5.0,-0.87),(6.0,5.0,0.0),(5.5,5.0,0.87),(5.0,5.0,1.0),(4.5,5.0,0.87),(4.0,5.0,0.0),(3.5,5.0,-0.87),(3.0,5.0,-1.0),(2.5,5.0,-0.87),(2.0,5.0,0.0),(1.5,5.0,0.87),(1.0,5.0,1.0),(0.5,5.0,0.87),(0.0,5.0,0.0),(0.0,4.5,0.0),(0.0,4.0,0.0),(0.0,3.5,0.0),(0.0,3.0,0.0),(0.0,2.5,0.0),(0.0,2.0,0.0),(0.0,1.5,0.0),(0.0,1.0,0.0),(0.0,0.5,0.0),(0.0,0.0,0.0),(0.5,0.5,0.5),(0.0,0.0,0.0),(0.5,0.0,-0.87),(1.0,0.0,-1.0),(1.5,0.0,-0.87),(2.0,0.0,0.0),(2.5,0.0,0.87),(3.0,0.0,1.0),(3.5,0.0,0.87),(4.0,0.0,0.0),(4.5,0.0,-0.87),(5.0,0.0,-1.0),(5.5,0.0,-0.87),(6.0,0.0,0.0),(6.5,0.0,0.87),(7.0,0.0,1.0),(7.5,0.0,0.87),(7.5,0.5,0.87),(7.5,1.0,0.87),(7.5,1.5,0.87),(7.5,2.0,0.87),(7.5,2.5,0.87),(7.5,3.0,0.87),(7.5,3.5,0.87),(7.5,4.0,0.87),(7.5,4.5,0.87),(7.5,5.0,0.87),(7.0,5.0,1.0),(6.5,5.0,0.87),(6.0,5.0,0.0),(5.5,5.0,-0.87),(5.0,5.0,-1.0),(4.5,5.0,-0.87),(4.0,5.0,0.0),(3.5,5.0,0.87),(3.0,5.0,1.0),(2.5,5.0,0.87),(2.0,5.0,0.0),(1.5,5.0,-0.87),(1.0,5.0,-1.0),(0.5,5.0,-0.87),(0.0,5.0,0.0),(0.0,4.5,0.0),(0.0,4.0,0.0),(0.0,3.5,0.0),(0.0,3.0,0.0),(0.0,2.5,0.0),(0.0,2.0,0.0),(0.0,1.5,0.0),(0.0,1.0,0.0),(0.0,0.5,0.0),(0.0,0.0,0.0),(1.0,1.0,1.0),(0.0,0.0,0.0),(0.5,0.0,0.87),(1.0,0.0,1.0),(1.5,0.0,0.87),(2.0,0.0,0.0),(2.5,0.0,-0.87),(3.0,0.0,-1.0),(3.5,0.0,-0.87),(4.0,0.0,0.0),(4.5,0.0,0.87),(5.0,0.0,1.0),(5.5,0.0,0.87),(6.0,0.0,0.0),(6.5,0.0,-0.87),(7.0,0.0,-1.0),(7.5,0.0,-0.87),(7.5,0.5,-0.87),(7.5,1.0,-0.87),(7.5,1.5,-0.87),(7.5,2.0,-0.87),(7.5,2.5,-0.87),(7.5,3.0,-0.87),(7.5,3.5,-0.87),(7.5,4.0,-0.87),(7.5,4.5,-0.87),(7.5,5.0,-0.87),(7.0,5.0,-1.0),(6.5,5.0,-0.87),(6.0,5.0,0.0),(5.5,5.0,0.87),(5.0,5.0,1.0),(4.5,5.0,0.87),(4.0,5.0,0.0),(3.5,5.0,-0.87),(3.0,5.0,-1.0),(2.5,5.0,-0.87),(2.0,5.0,0.0),(1.5,5.0,0.87),(1.0,5.0,1.0),(0.5,5.0,0.87),(0.0,5.0,0.0),(0.0,4.5,0.0),(0.0,4.0,0.0),(0.0,3.5,0.0),(0.0,3.0,0.0),(0.0,2.5,0.0),(0.0,2.0,0.0),(0.0,1.5,0.0),(0.0,1.0,0.0),(0.0,0.5,0.0),(0.0,0.0,0.0),(0.5,0.5,0.5),(0.0,0.0,0.0),(0.5,0.0,-0.87),(1.0,0.0,-1.0),(1.5,0.0,-0.87),(2.0,0.0,0.0),(2.5,0.0,0.87),(3.0,0.0,1.0),(3.5,0.0,0.87),(4.0,0.0,0.0),(4.5,0.0,-0.87),(5.0,0.0,-1.0),(5.5,0.0,-0.87),(6.0,0.0,0.0),(6.5,0.0,0.87),(7.0,0.0,1.0),(7.5,0.0,0.87),(7.5,0.5,0.87),(7.5,1.0,0.87),(7.5,1.5,0.87),(7.5,2.0,0.87),(7.5,2.5,0.87),(7.5,3.0,0.87),(7.5,3.5,0.87),(7.5,4.0,0.87),(7.5,4.5,0.87),(7.5,5.0,0.87),(7.0,5.0,1.0),(6.5,5.0,0.87),(6.0,5.0,0.0),(5.5,5.0,-0.87),(5.0,5.0,-1.0),(4.5,5.0,-0.87),(4.0,5.0,0.0),(3.5,5.0,0.87),(3.0,5.0,1.0),(2.5,5.0,0.87),(2.0,5.0,0.0),(1.5,5.0,-0.87),(1.0,5.0,-1.0),(0.5,5.0,-0.87),(0.0,5.0,0.0),(0.0,4.5,0.0),(0.0,4.0,0.0),(0.0,3.5,0.0),(0.0,3.0,0.0),(0.0,2.5,0.0),(0.0,2.0,0.0),(0.0,1.5,0.0),(0.0,1.0,0.0),(0.0,0.5,0.0),(0.0,0.0,0.0),(0.0,0.0,0.0),(0.0,0.0,0.0),(0.5,0.0,0.87),(1.0,0.0,1.0),(1.5,0.0,0.87),(2.0,0.0,0.0),(2.5,0.0,-0.87),(3.0,0.0,-1.0),(3.5,0.0,-0.87),(4.0,0.0,0.0),(4.5,0.0,0.87),(5.0,0.0,1.0),(5.5,0.0,0.87),(6.0,0.0,0.0),(6.5,0.0,-0.87),(7.0,0.0,-1.0),(7.5,0.0,-0.87),(7.5,0.5,-0.87),(7.5,1.0,-0.87),(7.5,1.5,-0.87),(7.5,2.0,-0.87),(7.5,2.5,-0.87),(7.5,3.0,-0.87),(7.5,3.5,-0.87),(7.5,4.0,-0.87),(7.5,4.5,-0.87),(7.5,5.0,-0.87),(7.0,5.0,-1.0),(6.5,5.0,-0.87),(6.0,5.0,0.0),(5.5,5.0,0.87),(5.0,5.0,1.0),(4.5,5.0,0.87),(4.0,5.0,0.0),(3.5,5.0,-0.87),(3.0,5.0,-1.0),(2.5,5.0,-0.87),(2.0,5.0,0.0),(1.5,5.0,0.87),(1.0,5.0,1.0),(0.5,5.0,0.87),(0.0,5.0,0.0),(0.0,4.5,0.0),(0.0,4.0,0.0),(0.0,3.5,0.0),(0.0,3.0,0.0),(0.0,2.5,0.0),(0.0,2.0,0.0),(0.0,1.5,0.0),(0.0,1.0,0.0),(0.0,0.5,0.0),(0.0,0.0,0.0),(0.0,0.0,0.0)])])])])]),
          ROUTE(fromField='fraction_changed',fromNode='timer',toField='set_fraction',toNode='MoveFlag'),
          ROUTE(fromField='value_changed',fromNode='MoveFlag',toField='set_point',toNode='FlagCoor'),
          ROUTE(fromField='fraction_changed',fromNode='BoatPositClock',toField='set_fraction',toNode='BoatPosit'),
          ROUTE(fromField='value_changed',fromNode='BoatPosit',toField='set_translation',toNode='BoatTransform')])])),
    NavigationInfo(speed=10,type=["EXAMINE","FLY","ANY"],visibilityLimit=7000),
    Background(groundAngle=[1.309,1.570796],groundColor=[(0.1,0.1,0),(0.4,0.25,0.2),(0.6,0.6,0.6)],skyAngle=[1.309,1.571],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
    ProtoInstance(DEF='Boat',name='RHIB'),
    Viewpoint(description='RHIB View',jump=False,orientation=(1,0,0,-0.2),position=(0,10,25)),
    TouchSensor(DEF='Touch',description='touch to activate'),
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

print ("python x3d.py load successful for RHIBPrototype.py")
