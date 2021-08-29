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
    meta(content='Bathtub.x3d',name='title'),
    meta(content='Bathtub model.',name='description'),
    meta(content='Baris AKTOP',name='creator'),
    meta(content='12 September 2002',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/Bathtub.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(
        children=[
        Shape(
          geometry=Extrusion(creaseAngle=3.14,crossSection=[(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0)],endCap=False,scale=[(0.35,0.7),(0.375,0.75),(0.4,0.8),(0.45,0.9),(0.5,1)],solid=False,spine=[(0,0,0),(0,0.1,0),(0,0.3,0),(0,0.4,0),(0,0.5,0)]),
          appearance=Appearance(
            material=Material(diffuseColor=(0.9,0.9,0.9)))),
        Transform(scale=(0.2,0.2,0.2),translation=(0,0,-0.45),
          children=[
          Shape(
            geometry=Cylinder(height=0.05,radius=0.15),
            appearance=Appearance(
              material=Material(diffuseColor=(0.3,0.3,0.3)))),
          Transform(rotation=(0,1,0,1.57),translation=(0,0.1,0),
            children=[
            Shape(
              geometry=Box(size=(0.05,0.05,0.3)),
              appearance=Appearance(DEF='tub',
                material=Material(diffuseColor=(0.9,0.9,0.9),shininess=0.9)))]),
          Transform(translation=(0,0.1,0),
            children=[
            Shape(
              geometry=Box(size=(0.05,0.05,0.3)),
              appearance=Appearance(USE='tub'))])])]),
      Transform(scale=(0.5,1,1),
        children=[
        Shape(
          geometry=Extrusion(convex=False,creaseAngle=3.14,crossSection=[(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(0.995,0.005),(1.2,0.005),(1.2,1),(-1.2,1),(-1.2,-1.1),(1.2,-1.1),(1.2,0),(1,0)],solid=False,spine=[(0,0,0),(0,0.5,0)]),
          appearance=Appearance(
            material=Material(diffuseColor=(0.8,0.8,0.4))))]),
      Transform(translation=(-0.6,1.25,-0.6),
        children=[
        Shape(
          geometry=Box(size=(0.05,1.5,1)),
          appearance=Appearance(
            material=Material(diffuseColor=(0.8,1,1),transparency=0.5)))]),
      Transform(rotation=(0,1,0,1.57),translation=(0,1.25,1),
        children=[
        Shape(
          geometry=Box(size=(0.05,1.5,1.2)),
          appearance=Appearance(
            material=Material(diffuseColor=(0.8,1,1),transparency=0.5)))]),
      Transform(rotation=(1,0,0,-1.57)),
      Transform(rotation=(0,1,0,-1.57),translation=(-0.6,0,0),
        children=[
        Group(
          children=[
          Transform(DEF='door',rotation=(0,1,0,1.57),translation=(0.45,1.25,0),
            children=[
            Shape(
              geometry=Box(size=(0.05,1.5,1.1)),
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,1,1),transparency=0.5)))]),
          PlaneSensor(DEF='slide',description='click and drag to move object',maxPosition=(0.43,1.25),minPosition=(-0.6,1.25)),
          ROUTE(fromField='translation_changed',fromNode='slide',toField='set_translation',toNode='door')])])]),
    Group(
      children=[
      Transform(scale=(0.5,0.5,0.5),translation=(0,0.5,-1),
        children=[
        Shape(
          appearance=Appearance(USE='tub'),
          geometry=Extrusion(creaseAngle=3.14,crossSection=[(-0.25,-0.05),(0.25,-0.05),(0.25,0.05),(-0.25,0.05),(-0.25,-0.05)],scale=[(1,1),(1,1),(0.9,0.9),(0.8,0.8)],solid=False,spine=[(0,0,0),(0,0.03,0),(0,0.04,0),(0,0.05,0)])),
        Transform(DEF='fountaintrans',rotation=(1,0,0,0.5),scale=(0.05,0.05,0.05),translation=(0,0.03,0),
          children=[
          Shape(
            geometry=Extrusion(creaseAngle=3.14,crossSection=[(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0)],endCap=False,solid=False,spine=[(0,0,0),(0,5,0),(0,6.76,0.16),(0,7.42,0.58),(0,7.84,1.24),(0,8,2),(0,7.84,2.76),(0,7.42,3.42),(0,6.76,3.84)]),
            appearance=Appearance(DEF='fountainapp',
              material=Material(diffuseColor=(0.95,0.95,0.95),shininess=1))),
          SphereSensor(DEF='fountain',description='click and drag to rotate'),
          ROUTE(fromField='rotation_changed',fromNode='fountain',toField='set_rotation',toNode='fountaintrans')]),
        Transform(DEF='wateropen',translation=(-0.15,0.05,0),
          children=[
          Shape(
            geometry=Sphere(DEF='open',radius=0.05),
            appearance=Appearance(USE='fountainapp')),
          Sound(maxBack=30,maxFront=30,minBack=10,minFront=10,
            source=AudioClip(DEF='waterflow',description='water flow',loop=True,startTime=-1,url=["waterflow.wav","https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/waterflow.wav"])),
          TouchSensor(DEF='water',description='touch to start water sound'),
          ROUTE(fromField='touchTime',fromNode='water',toField='set_startTime',toNode='waterflow')]),
        Transform(translation=(0.15,0.05,0),
          children=[
          Shape(
            geometry=Sphere(USE='open'),
            appearance=Appearance(USE='fountainapp')),
          TouchSensor(DEF='nowater',description='touch to silence water sound'),
          ROUTE(fromField='touchTime',fromNode='nowater',toField='set_stopTime',toNode='waterflow')])])]),
    Transform(DEF='showertrans',rotation=(1,0,0,0.5),scale=(0.05,0.05,0.05),translation=(0,1.5,-1.1),
      children=[
      Shape(
        geometry=Extrusion(creaseAngle=3.14,crossSection=[(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0)],endCap=False,scale=[(0.5,0.5),(0.5,0.5),(0.5,0.5),(0.5,0.5),(0.5,0.5),(0.5,0.5),(0.5,0.5)],spine=[(0,0,0),(0,5,0),(0,6.76,0.16),(0,7.42,0.58),(0,7.84,1.24),(0,8,2),(0,7.84,2.76)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.95,0.95,0.95),shininess=1)))]),
    Viewpoint(description='shower',orientation=(1,0,0,-0.6),position=(0,2.5,1.5)),
    Transform(rotation=(1,0,0,0.5),scale=(0.05,0.05,0.05),translation=(0,1.52,-1.12),
      children=[
      Transform(DEF='showertrans1',center=(0,7.84,2.76),
        children=[
        Shape(
          geometry=Extrusion(beginCap=False,creaseAngle=3.14,crossSection=[(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0)],scale=[(0.7,0.7),(1.5,1.5),(1.4,1.4)],solid=False,spine=[(0,7.84,2.76),(0,7.42,3.42),(0,6.76,3.84)]),
          appearance=Appearance(
            material=Material(diffuseColor=(0.95,0.95,0.95),shininess=1))),
        SphereSensor(DEF='shower',description='click and drag to rotate'),
        ROUTE(fromField='rotation_changed',fromNode='shower',toField='set_rotation',toNode='showertrans1')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Bathtub.py")
