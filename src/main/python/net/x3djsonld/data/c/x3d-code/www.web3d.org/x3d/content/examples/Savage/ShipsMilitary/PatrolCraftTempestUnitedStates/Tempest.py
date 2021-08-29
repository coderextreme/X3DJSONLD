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
    meta(content='Tempest.x3d',name='title'),
    meta(content='Chandan Singh Negi',name='creator'),
    meta(content='26 September 2000',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='US Navy Patrol Craft USS Tempest',name='description'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/PatrolCraftTempestUnitedStates/Tempest.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='USS Tempest, starboard side',position=(0,2.5,20)),
    Viewpoint(description='USS Tempest, from forward 45 starboard quarter',orientation=(0,1,0,1),position=(20,5,20)),
    Viewpoint(description='USS Tempest, from ahead',orientation=(0,1,0,1.57),position=(25,5,0)),
    Viewpoint(description='USS Tempest, from aft starboard quarter',orientation=(0,1,0,-1),position=(-30,5,15)),
    Background(groundColor=[(0,0,0.8)],skyColor=[(0,0,0.8)]),
    #  Scene Nodes 
    Transform(scale=(0.3,0.3,0.3),
      children=[
      Shape(DEF='HullUnderWater',
        appearance=Appearance(DEF='Black',
          material=Material(diffuseColor=(0.1,0.1,0.1))),
        geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.71,0.71),(0.92,0.38),(1,0),(0.92,-0.38),(0.71,-0.71),(0.71,0.71)],orientation=[(0,0,1,-.5),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,-.4),(0,0,1,-.6),(0,0,1,-.7),(0,0,1,-.8),(0,0,1,-.82)],scale=[(3,3),(3,3),(3,3.3),(3,3.3),(3,2.73),(3,2.23),(3,1.58),(3,0.71),(3,0.17)],spine=[(-25,0,0),(-23,0,0),(0,0,0),(5,0,0),(10,0,0),(15,0,0),(20,0,0),(24,0,0),(25,0,0)])),
      Shape(DEF='HullAboveWater',
        appearance=Appearance(DEF='Grey',
          material=Material(diffuseColor=(0.62,0.639,0.612))),
        geometry=Extrusion(creaseAngle=.7,crossSection=[(0,0),(0,1),(0.38,0.92),(0.71,0.71),(0.71,-0.71),(0.38,-0.92),(0.00,-1),(0,0)],orientation=[(0,0,1,-.5),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,-.4),(0,0,1,-.6),(0,0,1,-.7),(0,0,1,-.8),(0,0,1,-.82)],scale=[(3,3),(3,3),(3,3.3),(3,3.3),(3,2.73),(3,2.23),(3,1.58),(3,0.71),(3,0.1)],solid=False,spine=[(-25,0,0),(-23,0,0),(0,0,0),(5,0,0),(10,0,0),(15,0,0),(20,0,0),(24,0,0),(25,0,0)])),
      Shape(DEF='MainDeck',
        appearance=Appearance(DEF='DeckPaint',
          material=Material(diffuseColor=(.753,.34,.26))),
        geometry=Extrusion(crossSection=[(-0.1,1),(0,1),(0,-1),(-0.1,-1),(-0.1,1)],orientation=[(0,0,1,-.5),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,-.4),(0,0,1,-.6),(0,0,1,-.7),(0,0,1,-.8),(0,0,1,-.82)],scale=[(3,3),(3,3),(3,3.3),(3,3.3),(3,2.73),(3,2.23),(3,1.58),(3,0.71),(3,0.1)],spine=[(-25,0,0),(-23,0,0),(0,0,0),(5,0,0),(10,0,0),(15,0,0),(20,0,0),(24,0,0),(25,0,0)])),
      Shape(DEF='BreakWater',
        appearance=Appearance(DEF='DarkGrey',
          material=Material(diffuseColor=(0.4,0.4,0.4))),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,-1,6,7,8,9,-1,9,0,5,6,-1,2,12,13,3,-1,7,17,18,8,-1,3,13,14,15,16,17,7,6,5,4,-1,2,1,0,9,8,18,19,10,11,12],creaseAngle=.1,
          coord=Coordinate(point=[(19,0.6,0),(17.5,0.5,-1.25),(15,0.4,-2),(14.7,0.4,-1.8),(17.2,0.5,-1.1),(18.7,0.6,0),(17.2,0.5,1.1),(14.7,0.4,1.8),(15,0.4,2),(17.5,0.5,1.25),(19,0,0),(17.5,0,-1.25),(15,0,-2),(14.7,0,-1.8),(17.2,0,-1.1),(18.7,0,0),(17.2,0,1.1),(14.7,0,1.8),(15,0,2),(17.5,0,1.25)]))),
      Shape(DEF='ForwardStruct',
        appearance=Appearance(USE='Grey'),
        geometry=Extrusion(convex=False,crossSection=[(2,1.7),(4,2.2),(8,2.5),(10.5,2.1),(12.5,0),(10.5,-2.1),(8,-2.5),(4,-2.2),(2,-1.7),(2,1.7)],orientation=[(0,0,1,0),(0,0,1,0.05)],spine=[(0,0,0),(0,1.5,0)])),
      Shape(DEF='UnderBridge',
        appearance=Appearance(USE='Grey'),
        geometry=Extrusion(crossSection=[(2,1.7),(4,2.2),(6,1.6),(7,0),(6,-1.6),(4,-2.2),(2,-1.7),(2,1.7)],orientation=[(0,0,1,0),(0,0,1,0)],spine=[(0,1.5,0),(0,2.6,0)])),
      Shape(DEF='BridgeWingStruct',
        appearance=Appearance(USE='Grey'),
        geometry=Extrusion(creaseAngle=.7,crossSection=[(2,1.7),(1,2.4),(-3.9,2.5),(-3.9,-2.5),(1,-2.4),(2,-1.7),(2,1.7)],orientation=[(0,0,1,0),(0,0,1,0)],solid=False,spine=[(0,0,0),(0,1.5,0)])),
      Shape(DEF='BridgeWing',
        appearance=Appearance(USE='Grey'),
        geometry=Extrusion(convex=False,crossSection=[(2,1.7),(0.3,3),(-3.9,2.5),(-3.9,-2.5),(0.3,-3.3),(2,-1.7),(2,1.7)],endCap=False,orientation=[(0,0,1,0),(0,0,1,0)],scale=[(1,1),(1,1.3)],solid=False,spine=[(0,1.5,0),(0,2.5,0)])),
      Shape(DEF='MidStruct',
        appearance=Appearance(USE='Grey'),
        geometry=Extrusion(creaseAngle=.7,crossSection=[(-7,2.5),(-9.5,2.5),(-9.5,-2.5),(-7,-2.5),(-7,2.5)],orientation=[(0,0,1,0),(0,0,1,0)],solid=False,spine=[(0,0,0),(0,1.5,0)])),
      Shape(DEF='AftGunStruct',
        appearance=Appearance(USE='Grey'),
        geometry=Extrusion(creaseAngle=.7,crossSection=[(-12,2.5),(-15,2.5),(-15,-2.5),(-12,-2.5),(-12,2.5)],orientation=[(0,0,1,0),(0,0,1,0)],solid=False,spine=[(0,0,0),(0,1.5,0)])),
      Transform(DEF='Gemini',rotation=(0,0,1,.05),scale=(0.3,0.4,0.3),translation=(-23,1,-2),
        children=[
        Shape(DEF='GeminiBase',
          appearance=Appearance(
            material=Material(ambientIntensity=.5,diffuseColor=(0,.6,.6),shininess=.8,specularColor=(0,1,0))),
          geometry=Extrusion(beginCap=False,creaseAngle=1.57,crossSection=[(0,1),(0.38,0.92),(0.71,0.71),(0.71,-0.71),(0.38,-0.92),(0.00,-1)],endCap=False,scale=[(2,3),(2,2.73),(2,2.23),(2,1.58),(2,0.71),(2,0.01)],solid=False,spine=[(0,0,0),(5,0,0),(10,0,0),(15,0,0),(19,0,0),(20,0,0)])),
        Shape(DEF='GeminiTube',
          appearance=Appearance(
            material=Material(diffuseColor=(.6,.7,.3))),
          geometry=Extrusion(creaseAngle=1.57,crossSection=[(1,0),(0.92,-.38),(.71,-.71),(.38,-.92),(0,-1),(-.38,-.92),(-.71,-.71),(-.92,-.38),(-1,0),(-.92,.38),(-.71,.71),(-.38,.92),(0,1),(.38,.92),(.71,.71),(.92,.38),(1,0)],scale=[(0.32,0.26),(0.32,0.26),(0.32,0.26),(0.32,0.26),(0.32,0.26),(0.32,0.26),(0.32,0.26),(0.32,0.26),(0.32,0.26),(0.32,0.26),(0.32,0.26)],spine=[(0,0,3),(5,0,2.73),(10,0,2.23),(15,0,1.58),(19,0,.7),(20,0,0),(19,0,-.7),(15,0,-1.58),(10,0,-2.23),(5,0,-2.73),(0,0,-3)]))]),
      Transform(DEF='Bridge',translation=(2,2.6,0),
        children=[
        Group(
          children=[
          Shape(
            appearance=Appearance(USE='Grey'),
            geometry=Extrusion(crossSection=[(0,1.7),(2,2.2),(4,1.6),(5,0),(4,-1.6),(2,-2.2),(0,-1.7),(0,1.7)],orientation=[(0,0,1,0),(0,0,1,0)],scale=[(1,1),(1.04,1.04)],spine=[(0,0,0),(0,0.6,0)])),
          Transform(rotation=(0,1,0,.4),translation=(2.4,0.3,2.2),
            children=[
            Shape(DEF='Glass',
              appearance=Appearance(
                material=Material(diffuseColor=(0.2,0.2,0.2),specularColor=(.8,.8,.8),transparency=0.1)),
              geometry=Box(size=(0.5,0.5,0.05)))]),
          Transform(rotation=(0,1,0,.4),translation=(3,0.3,2),
            children=[
            Shape(USE='Glass')]),
          Transform(rotation=(0,1,0,.34),translation=(3.6,0.3,1.85),
            children=[
            Shape(USE='Glass')]),
          Transform(rotation=(0,1,0,-.4),translation=(2.4,0.3,-2.2),
            children=[
            Shape(USE='Glass')]),
          Transform(rotation=(0,1,0,-.4),translation=(3,0.3,-2),
            children=[
            Shape(USE='Glass')]),
          Transform(rotation=(0,1,0,-.34),translation=(3.6,0.3,-1.85),
            children=[
            Shape(USE='Glass')]),
          Transform(rotation=(0,1,0,1),translation=(4.3,0.3,1.35),
            children=[
            Shape(USE='Glass')]),
          Transform(rotation=(0,1,0,1),translation=(4.7,0.3,.85),
            children=[
            Shape(USE='Glass')]),
          Transform(rotation=(0,1,0,1),translation=(5,0.3,.35),
            children=[
            Shape(USE='Glass')]),
          Transform(rotation=(0,1,0,-1),translation=(4.3,0.3,-1.35),
            children=[
            Shape(USE='Glass')]),
          Transform(rotation=(0,1,0,-1),translation=(4.7,0.3,-.85),
            children=[
            Shape(USE='Glass')]),
          Transform(rotation=(0,1,0,-1),translation=(5,0.3,-.35),
            children=[
            Shape(USE='Glass')]),
          Transform(rotation=(0,1,0,-.35),translation=(0.4,0.3,1.9),
            children=[
            Shape(USE='Glass')]),
          Transform(rotation=(0,1,0,-.35),translation=(1,0.3,2.05),
            children=[
            Shape(USE='Glass')]),
          Transform(rotation=(0,1,0,-.35),translation=(1.6,0.3,2.2),
            children=[
            Shape(USE='Glass')]),
          Transform(rotation=(0,1,0,.35),translation=(0.4,0.3,-1.9),
            children=[
            Shape(USE='Glass')]),
          Transform(rotation=(0,1,0,.35),translation=(1,0.3,-2.05),
            children=[
            Shape(USE='Glass')]),
          Transform(rotation=(0,1,0,.35),translation=(1.6,0.3,-2.2),
            children=[
            Shape(USE='Glass')]),
          Transform(translation=(4,.9,1),
            children=[
            Shape(
              appearance=Appearance(DEF='Creamy',
                material=Material(),),
              geometry=Cylinder(height=0.4,radius=0.05))]),
          Transform(DEF='BridgeTopAntenna',translation=(4,1.2,1),
            children=[
            Shape(
              appearance=Appearance(USE='Creamy'),
              geometry=Extrusion(creaseAngle=1.57,crossSection=[(1,0),(0.92,-.38),(.71,-.71),(.38,-.92),(0,-1),(-.38,-.92),(-.71,-.71),(-.92,-.38),(-1,0),(-.92,.38),(-.71,.71),(-.38,.92),(0,1),(.38,.92),(.71,.71),(.92,.38),(1,0)],scale=[(.2,.2),(.2,.2),(0.01,0.01)],spine=[(0,0,0),(0,.5,0),(0,.6,0)]))])])]),
      Transform(DEF='mast',scale=(1,0.8,0.8),translation=(2,5,0),
        children=[
        Group(
          children=[
          Transform(DEF='StbdFrontMast',rotation=(1,0,0,-.17),translation=(0,0,2),
            children=[
            Shape(DEF='FrontMast',
              appearance=Appearance(USE='Grey'),
              geometry=Cylinder(height=10.5,radius=.15))]),
          Transform(DEF='PortFrontMast',rotation=(1,0,0,.17),translation=(0,0,-2),
            children=[
            Shape(USE='FrontMast')]),
          Shape(DEF='MidPlatform',
            appearance=Appearance(USE='Grey'),
            geometry=Extrusion(crossSection=[(0,2.5),(2,1),(2,-1),(0,-2.5),(0,2.5)],scale=[(1,0.65),(1,0.65)],spine=[(0,2.8,0),(0,3,0)])),
          Transform(DEF='TopPlatform',scale=(1,1,.75),translation=(0,2.27,0),
            children=[
            Shape(USE='MidPlatform')]),
          Transform(DEF='BottomPlatform',scale=(1,1,1.25),translation=(0,-2.27,0),
            children=[
            Shape(USE='MidPlatform')]),
          Transform(DEF='MainMastAntenna1',translation=(1.7,5.4,0),
            children=[
            Shape(DEF='AePedestal',
              appearance=Appearance(USE='Creamy'),
              geometry=Box(size=(0.2,0.5,0.2))),
            Transform(DEF='AeBar',translation=(0,0.5,0),
              children=[
              Shape(
                appearance=Appearance(USE='Creamy'),
                geometry=Box(size=(0.2,0.3,5)))])]),
          Transform(DEF='MainMastAntenna3',scale=(.8,.8,.6),translation=(1.7,1,0),
            children=[
            Shape(USE='AePedestal'),
            Transform(USE='AeBar')]),
          Transform(DEF='MainMastAntenna2',translation=(1.7,3.2,0),
            children=[
            Shape(USE='AePedestal'),
            Transform(rotation=(0,1,1,-.57),translation=(0,0.5,0),
              children=[
              Shape(
                appearance=Appearance(USE='Creamy'),
                geometry=Box(size=(1,.4,.4)))])]),
          Transform(DEF='MainMast',scale=(1.2,1.7,1.2),translation=(-2,0,0),
            children=[
            Shape(USE='FrontMast'),
            Transform(DEF='HBar1',rotation=(1,0,0,1.57),scale=(.5,1.2,.5),translation=(0,2.5,0),
              children=[
              Shape(USE='FrontMast')]),
            Transform(DEF='HBar2',rotation=(1,0,0,1.57),scale=(.5,.8,.5),
              children=[
              Shape(USE='FrontMast')]),
            Transform(DEF='CBar1',rotation=(1,0,0,1.1),scale=(.5,0.5,.5),translation=(0,1.2,2.4),
              children=[
              Shape(USE='FrontMast')]),
            Transform(DEF='CBar2',rotation=(1,0,0,-1.1),scale=(.5,0.5,.5),translation=(0,1.2,-2.4),
              children=[
              Shape(USE='FrontMast')]),
            Transform(DEF='IFFT1',translation=(0,2.75,-4.8),
              children=[
              Shape(DEF='IFFS',
                appearance=Appearance(USE='Creamy'),
                geometry=Cylinder(height=0.7,radius=0.1))]),
            Transform(DEF='IFFT2',translation=(0,2.75,4.8),
              children=[
              Shape(USE='IFFS')]),
            Transform(DEF='PortLt',translation=(0,2.75,-6.2),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(emissiveColor=(1,0,0))),
                geometry=Cylinder(height=.4,radius=.15))]),
            Transform(DEF='StbdLt',translation=(0,2.75,6.2),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(emissiveColor=(0,1,0))),
                geometry=Cylinder(height=.4,radius=.15))]),
            Transform(DEF='EW',translation=(0,5.5,0),
              children=[
              Shape(
                appearance=Appearance(USE='Creamy'),
                geometry=Cylinder(height=3,radius=.6))]),
            Transform(DEF='PortJam',scale=(1,0.2,1),translation=(0,0.2,-4),
              children=[
              Shape(USE='AePedestal'),
              Transform(DEF='PtJ',rotation=(0,0,1,-1.3),translation=(0,0.05,0),
                children=[
                Shape(
                  appearance=Appearance(USE='Creamy'),
                  geometry=Cylinder(height=0.2,radius=.6))])]),
            Transform(DEF='StbdJam',scale=(1,0.2,1),translation=(0,0.2,4),
              children=[
              Shape(USE='AePedestal'),
              Transform(USE='PtJ')])])])]),
      Transform(DEF='ForeStbdAntenna',translation=(7.2,1.5,2.5),
        children=[
        Shape(DEF='CommAntenna',
          appearance=Appearance(USE='Creamy'),
          geometry=Extrusion(creaseAngle=1.57,crossSection=[(1,0),(0.92,-.38),(.71,-.71),(.38,-.92),(0,-1),(-.38,-.92),(-.71,-.71),(-.92,-.38),(-1,0),(-.92,.38),(-.71,.71),(-.38,.92),(0,1),(.38,.92),(.71,.71),(.92,.38),(1,0)],scale=[(.08,.08),(.06,.06)],spine=[(0,0,0),(0,5,0)]))]),
      Transform(DEF='ForePortAntenna',translation=(7.2,1.5,-2.5),
        children=[
        Shape(USE='CommAntenna')]),
      Transform(DEF='AftPortAntenna',translation=(-4,1.2,-2.3),
        children=[
        Shape(USE='CommAntenna')]),
      Transform(DEF='Davit',translation=(-20,0,1.5),
        children=[
        Shape(
          appearance=Appearance(USE='Grey'),
          geometry=Extrusion(crossSection=[(1,0),(0.92,-.38),(.71,-.71),(.38,-.92),(0,-1),(-.38,-.92),(-.71,-.71),(-.92,-.38),(-1,0),(-.92,.38),(-.71,.71),(-.38,.92),(0,1),(.38,.92),(.71,.71),(.92,.38),(1,0)],scale=[(0.3,0.3),(0.2,0.2)],spine=[(0,0,0),(0,2,0)])),
        Transform(rotation=(0,0,1,-0.3),translation=(1,1.6,0),
          children=[
          Shape(DEF='Arm',
            appearance=Appearance(USE='Grey'),
            geometry=Box(size=(2,0.1,0.3)))]),
        Transform(rotation=(0,0,1,0.785),translation=(0.6,1.2,0),
          children=[
          Shape(
            appearance=Appearance(USE='Grey'),
            geometry=Box(size=(1,0.1,0.2)))])]),
      Transform(DEF='StemLight',translation=(23,2,0),
        children=[
        Shape(
          appearance=Appearance(USE='Grey'),
          geometry=Cylinder(height=4,radius=.1)),
        Transform(translation=(0,2.25,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(emissiveColor=(0.6,0.6,0.6))),
            geometry=Cylinder(height=.7,radius=.2))])]),
      Transform(DEF='BollardT',translation=(18,0,-1.4),
        children=[
        Shape(DEF='Bollard',
          appearance=Appearance(USE='Grey'),
          geometry=Extrusion(crossSection=[(1,0),(0.92,-.38),(.71,-.71),(.38,-.92),(0,-1),(-.38,-.92),(-.71,-.71),(-.92,-.38),(-1,0),(-.92,.38),(-.71,.71),(-.38,.92),(0,1),(.38,.92),(.71,.71),(.92,.38),(1,0)],scale=[(0.2,0.2),(0.2,0.2),(0.3,0.3)],spine=[(0,0,0),(0,0.6,0),(0,.8,0)]))]),
      Transform(translation=(19,0,-1.3),
        children=[
        Shape(USE='Bollard')]),
      Transform(DEF='FwdGunMount',translation=(15.5,0,0),
        children=[
        Shape(
          appearance=Appearance(USE='Grey'),
          geometry=Extrusion(crossSection=[(1,0),(0.92,-.38),(.71,-.71),(.38,-.92),(0,-1),(-.38,-.92),(-.71,-.71),(-.92,-.38),(-1,0),(-.92,.38),(-.71,.71),(-.38,.92),(0,1),(.38,.92),(.71,.71),(.92,.38),(1,0)],scale=[(.9,.9),(0.7,0.7)],spine=[(0,0,0),(0,1.5,0)])),
        Transform(rotation=(0,0,1,-1.3),translation=(1,1.4,0),
          children=[
          Shape(
            appearance=Appearance(USE='Grey'),
            geometry=Cylinder(height=3,radius=0.15))])]),
      Transform(translation=(-29,1.4,0),
        children=[
        Transform(USE='FwdGunMount')]),
      Transform(translation=(-16,1.4,-2.2),
        children=[
        Transform(USE='FwdGunMount')]),
      Transform(translation=(-16,1.4,2.2),
        children=[
        Transform(USE='FwdGunMount')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Tempest.py")
