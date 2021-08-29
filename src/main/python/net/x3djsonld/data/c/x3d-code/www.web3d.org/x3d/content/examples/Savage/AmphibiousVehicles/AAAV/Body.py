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
    meta(content='Body.x3d',name='title'),
    meta(content='AAAV Body',name='description'),
    meta(content='William Geissler',name='creator'),
    meta(content='9 February 2001',name='created'),
    meta(content='21 February 2010',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/Body.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["AAAV Vehicle Body"],title='AAAV Body'),
    NavigationInfo(speed=10),
    Background(groundColor=[(0.3,0.6,0.3)],skyColor=[(0.3,0.6,0.3)]),
    Transform(DEF='Body',rotation=(0,1,0,1.57),translation=(2.5,1.1,-5.2),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(url=["cammie1.jpg","https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/cammie1.jpg"])),
        geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,0,-1,9,10,8,7,-1,11,12,10,9,-1,3,14,4,3,-1,3,2,13,14,3,-1,2,1,13,2,-1,15,16,17,18,19,20,21,22,23,15,-1,24,25,17,16,-1,26,27,25,24,-1,21,20,28,21,-1,22,21,28,29,22,-1,23,22,29,23,-1,6,5,19,18,-1,5,4,20,19,-1,4,14,13,1,0,15,23,29,28,20,-1,0,8,10,12,26,24,16,15,0,-1,11,9,7,6,18,17,25,27,11,-1,12,11,27,26,12,-1],creaseAngle=0.05,texCoordIndex=[0,1,2,3,4,5,6,7,8,0,-1,9,10,8,7,-1,11,12,10,9,-1,3,14,4,3,-1,3,2,13,14,3,-1,2,1,13,2,-1,15,16,17,18,19,20,21,22,23,15,-1,24,25,17,16,-1,26,27,25,24,-1,21,20,28,21,-1,22,21,28,29,22,-1,23,22,29,23,-1,6,5,19,18,-1,5,4,20,19,-1,4,14,13,1,0,15,23,29,28,20,-1,0,8,10,12,26,24,16,15,0,-1,11,9,7,6,18,17,25,27,11,-1,12,11,27,26,12,-1],
          coord=Coordinate(point=[(0.0,0.0,0.0),(-2.6,0.0,0.0),(-3.4,-0.6,0.0),(-6.8,-0.6,0.0),(-7.6,0.0,0.0),(-9.8,-0.4,0.0),(-10.4,-0.8,0.0),(-9.4,-1.6,0.0),(-0.4,-1.6,0.0),(-9.4,-1.6,-0.8),(-0.4,-1.6,-0.8),(-8.4,-2.7,-0.8),(-0.8,-2.7,-0.8),(-2.6,0.0,-1.0),(-7.6,0.0,-1.0),(0.0,0.0,-5.0),(-0.4,-1.6,-5.0),(-9.4,-1.6,-5.0),(-10.4,-0.8,-5.0),(-9.8,-0.4,-5.0),(-7.6,0.0,-5.0),(-6.8,-0.6,-5.0),(-3.4,-0.6,-5.0),(-2.6,0.0,-5.0),(-0.4,-1.6,-4.2),(-9.4,-1.6,-4.2),(-0.8,-2.7,-4.2),(-8.4,-2.7,-4.2),(-7.6,0.0,-4.0),(-2.6,0.0,-4.0)]),
          texCoord=TextureCoordinate(point=[(1.00,0.32),(0.76,0.32),(0.68,0.24),(0.40,0.24),(0.32,0.32),(0.08,0.28),(0.00,0.20),(0.12,0.00),(0.92,0.00),(0.12,0.08),(0.92,0.08),(0.12,0.16),(0.92,0.16),(0.68,0.32),(0.40,0.32),(1.00,0.68),(0.92,1.00),(0.12,1.00),(0.00,0.80),(0.08,0.72),(0.32,0.68),(0.40,0.76),(0.68,0.76),(0.76,0.68),(0.92,0.92),(0.12,0.92),(0.92,0.84),(0.12,0.84),(0.40,0.68),(0.68,0.68)]))),
      Group(DEF='ChineFlap',
        children=[
        Shape(
          geometry=Extrusion(ccw=False,crossSection=[(4.5,0.5),(-4.5,0.5),(-3.5,-0.5),(4.1,-0.5),(4.5,0.5)],spine=[(-4.9,-2.0,0.04),(-4.9,-2.0,-0.01)]),
          appearance=Appearance(
            texture=ImageTexture(url=["cammie1a.jpg","https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/cammie1a.jpg"]))),
        Transform(translation=(-8.0,-1.55,0.035),
          children=[
          Shape(
            geometry=Box(size=(0.1,0.1,0.1)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.2,0.2,0.2))))]),
        Transform(translation=(-6.95,-1.55,0.035),
          children=[
          Shape(
            geometry=Box(size=(0.1,0.1,0.1)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.2,0.2,0.2))))]),
        Transform(translation=(-5.7,-1.55,0.035),
          children=[
          Shape(
            geometry=Box(size=(0.1,0.1,0.1)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.2,0.2,0.2))))]),
        Transform(translation=(-4.5,-1.55,0.035),
          children=[
          Shape(
            geometry=Box(size=(0.1,0.1,0.1)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.2,0.2,0.2))))]),
        Transform(translation=(-3.4,-1.55,0.035),
          children=[
          Shape(
            geometry=Box(size=(0.1,0.1,0.1)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.2,0.2,0.2))))]),
        Transform(translation=(-2.3,-1.55,0.035),
          children=[
          Shape(
            geometry=Box(size=(0.1,0.1,0.1)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.2,0.2,0.2))))]),
        Transform(translation=(-1.3,-1.55,0.035),
          children=[
          Shape(
            geometry=Box(size=(0.1,0.1,0.1)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.2,0.2,0.2))))])]),
      Transform(translation=(0,0,-5),
        children=[
        Group(USE='ChineFlap')]),
      Transform(translation=(-8.2,-0.1,-1.0),
        children=[
        Group(DEF='CrewHatch',
          children=[
          Shape(
            geometry=Extrusion(ccw=False,crossSection=[(0.30,0.35),(0.20,0.45),(-0.20,0.45),(-0.45,0.20),(-0.45,-0.20),(-0.20,-0.45),(0.20,-0.45),(0.30,-0.35),(0.30,0.35)],spine=[(0,-0.2,0),(0,0.08,0)]),
            appearance=Appearance(
              texture=ImageTexture(DEF='cammie2',url=["cammie2.jpg","https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/cammie2.jpg"]))),
          Transform(translation=(0.40,0.05,0.00),
            children=[
            Shape(
              geometry=Box(size=(0.2,0.1,0.7)),
              appearance=Appearance(
                texture=ImageTexture(USE='cammie2')))]),
          Transform(rotation=(0,1,0,0.785),translation=(-0.325,0,-0.325),
            children=[
            Shape(
              geometry=Box(size=(0.3,0.06,0.05)),
              appearance=Appearance(
                material=Material(ambientIntensity=0.26,diffuseColor=(0.20,0.08,0.00),shininess=0.08,specularColor=(0.75,0.33,0.00))))]),
          Transform(rotation=(0,1,0,-0.785),translation=(-0.325,0,0.325),
            children=[
            Shape(
              geometry=Box(size=(0.3,0.06,0.05)),
              appearance=Appearance(
                material=Material(ambientIntensity=0.26,diffuseColor=(0.20,0.08,0.00),shininess=0.08,specularColor=(0.75,0.33,0.00))))]),
          Transform(rotation=(0,1,0,1.57),translation=(-0.45,0,0),
            children=[
            Shape(
              geometry=Box(size=(0.3,0.06,0.05)),
              appearance=Appearance(
                material=Material(ambientIntensity=0.26,diffuseColor=(0.20,0.08,0.00),shininess=0.08,specularColor=(0.75,0.33,0.00))))])])]),
      Transform(translation=(-8.2,-0.1,-4.0),
        children=[
        Group(USE='CrewHatch')]),
      Transform(translation=(-2.4,0,-0.5),
        children=[
        Group(DEF='Antenna',
          children=[
          Shape(
            geometry=Cone(bottom=False,bottomRadius=0.2,height=0.5),
            appearance=Appearance(
              material=Material(diffuseColor=(0.1,0.1,0.1)))),
          Transform(translation=(0,1.4,0),
            children=[
            Shape(
              geometry=Cylinder(bottom=False,height=3,radius=0.01),
              appearance=Appearance(
                material=Material(diffuseColor=(0.1,0.1,0.1))))])])]),
      Transform(translation=(-2.4,0,-4.5),
        children=[
        Group(USE='Antenna')]),
      Transform(translation=(-4.0,0.0,-2.5),
        children=[
        Shape(
          geometry=Box(size=(3,0.1,1.5)),
          appearance=Appearance(
            texture=ImageTexture(url=["engine.jpg","https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/engine.jpg"])))]),
      Transform(rotation=(1,0,0,-1.57),
        children=[
        Transform(DEF='BowPlane',rotation=(0,1,0,-0.805),translation=(-8.6,2.5,-2.6),
          children=[
          Group(
            children=[
            Shape(
              geometry=Extrusion(convex=False,crossSection=[(2.4,3.0),(-2.4,3.0),(-2.4,1.5),(-1.4,1.5),(-1.4,0.0),(1.4,0.0),(1.4,1.4),(2.4,1.4),(2.4,3.0)],solid=False,spine=[(0,0,0),(0.05,0,0)]),
              appearance=Appearance(
                texture=ImageTexture(USE='cammie2'))),
            Transform(translation=(0,0,3.0),
              children=[
              Shape(
                geometry=Cylinder(height=4.8,radius=0.05),
                appearance=Appearance(
                  texture=ImageTexture(DEF='green1',url=["green1.jpg","https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/green1.jpg"])))]),
            Transform(DEF='BowTop',translation=(0,0,3.0),
              children=[
              Transform(center=(-0.75,0,0),rotation=(0,1,0,0.64),translation=(0.75,0,0),
                children=[
                Shape(
                  geometry=Box(size=(1.5,4.8,0.05)),
                  appearance=Appearance(
                    texture=ImageTexture(USE='cammie2')))]),
              CylinderSensor(DEF='BOWTOPCYLINDERSENSOR',description='select to rotate',maxAngle=0,minAngle=-1.57)])]),
          CylinderSensor(DEF='BOWCYLINDERSENSOR',description='select to rotate',maxAngle=-0.805,minAngle=-1.2)]),
        Transform(translation=(-8.6,2.5,-2.6),
          children=[
          Shape(
            geometry=Cylinder(height=2.8,radius=0.1),
            appearance=Appearance(
              texture=ImageTexture(USE='green1')))])]),
      Transform(rotation=(1,0,0,-1.57),
        children=[
        Transform(DEF='TransomFlap',rotation=(0,1,0,0.3),translation=(-0.7,2.5,-2.6),
          children=[
          Group(
            children=[
            Shape(
              geometry=Extrusion(convex=False,crossSection=[(1.5,2.5),(-1.5,2.5),(-1.5,0.0),(1.5,0.0),(1.5,2.5)],solid=False,spine=[(0,0,0),(0.05,0,0)]),
              appearance=Appearance(
                texture=ImageTexture(USE='cammie2')))]),
          CylinderSensor(DEF='TRANSOMCYLINDERSENSOR',description='select to rotate',maxAngle=1.7,minAngle=0.3)]),
        Transform(translation=(-0.7,2.5,-2.6),
          children=[
          Shape(
            geometry=Cylinder(height=2.8,radius=0.1),
            appearance=Appearance(
              texture=ImageTexture(USE='green1')))])])]),
    ROUTE(fromField='rotation_changed',fromNode='BOWCYLINDERSENSOR',toField='set_rotation',toNode='BowPlane'),
    ROUTE(fromField='rotation_changed',fromNode='BOWTOPCYLINDERSENSOR',toField='set_rotation',toNode='BowTop'),
    ROUTE(fromField='rotation_changed',fromNode='TRANSOMCYLINDERSENSOR',toField='set_rotation',toNode='TransomFlap')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Body.py")
