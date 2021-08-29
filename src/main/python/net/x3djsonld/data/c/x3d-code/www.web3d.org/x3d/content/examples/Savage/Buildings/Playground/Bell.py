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
    meta(content='Bell.x3d',name='title'),
    meta(content='This file draws the Bell with sound effect.',name='description'),
    meta(content='Kok Keng Ng',name='creator'),
    meta(content='20 September 2002',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/PlayGround/Bell.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='BellFront',position=(0,-1.2,7)),
    Group(
      children=[
      PointLight(intensity=0.2,location=(3,3,3)),
      Transform(DEF='BELLTx',rotation=(1,0,0,0.001),
        children=[
        Group(DEF='BELL',
          children=[
          Transform(rotation=(1,0,0,3.1415),scale=(0.5,0.5,0.5),
            children=[
            Shape(
              geometry=Extrusion(creaseAngle=1.57,crossSection=[(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,-0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0)],endCap=False,scale=[(.00001,.00001),(0.8,0.8),(1.0,1.0),(1.1,1.1),(1.15,1.15),(1.15,1.15),(1.2,1.2),(1.45,1.45),(1.8,1.8),(1.85,1.85),(1.87,1.87),(1.8,1.8),(1.67,1.67),(1.65,1.65),(1.6,1.6),(1.25,1.25),(1.0,1.0),(.95,0.95),(.95,.95),(.9,.9),(0.8,0.8),(0.00001,0.00001)],solid=False,spine=[(0,0.0,0),(0,0.2,0),(0,0.4,0),(0,0.8,0),(0,1.2,0),(0,1.6,0),(0,2.0,0),(0,2.4,0),(0,2.8,0),(0,3.2,0),(0,3.3,0),(0,3.32,0),(0,3.3,0),(0,3.2,0),(0,2.8,0),(0,2.4,0),(0,2.0,0),(0,1.6,0),(0,1.2,0),(0,0.8,0),(0,0.4,0),(0,0.2,0)]),
              appearance=Appearance(DEF='GoldApp',
                material=Material(ambientIntensity=0.4,diffuseColor=(0.22,0.15,0),shininess=0.16,specularColor=(0.71,0.70,0.56))))]),
          TimeSensor(DEF='BELLTimeS',cycleInterval=4),
          TimeSensor(DEF='BELLTimeS1',cycleInterval=2),
          TouchSensor(DEF='BELLTouchS'),
          OrientationInterpolator(DEF='BELLInterpolator',key=[0.0,0.15,0.7,1.0],keyValue=[(0,0.0,1,0.0),(.0,0.0,1,0.475),(.0,0.0,1,-0.475),(.0,0.0,1,0)]),
          Transform(
            children=[
            Transform(
              children=[
              Shape(
                geometry=Cylinder(height=0.15,radius=0.08),
                appearance=Appearance(USE='GoldApp'))])])])]),
      Transform(
        children=[
        Group(DEF='BELLBall',
          children=[
          Transform(translation=(0,-0.9,0),
            children=[
            Shape(
              appearance=Appearance(USE='GoldApp'),
              geometry=Cylinder(height=1.7,radius=0.02))]),
          Transform(translation=(0,-1.8,0),
            children=[
            Shape(
              appearance=Appearance(USE='GoldApp'),
              geometry=Sphere(radius=.1))])])]),
      Transform(
        children=[
        Group(
          children=[
          Transform(
            children=[
            Transform(translation=(-2,-1.5,0),
              children=[
              Shape(DEF='BELLBeam',
                geometry=Box(size=(0.4,4,0.4)),
                appearance=Appearance(DEF='WoodApp',
                  material=Material(diffuseColor=(0.8,0.5,0.1)),
                  texture=ImageTexture(url=["wood.jpg","https://savage.nps.edu/Savage/Buildings/PlayGround/wood.jpg"])))]),
            Transform(translation=(2,-1.5,0),
              children=[
              Shape(USE='BELLBeam')]),
            Transform(translation=(0,0.3,0),
              children=[
              Shape(
                geometry=Box(size=(3.6,0.4,0.4)),
                appearance=Appearance(USE='WoodApp'))])])])]),
      Sound(DEF='BELLSound',direction=(1,1,1),maxBack=65,maxFront=65,minBack=60,minFront=60,
        source=AudioClip(DEF='BELLClip',url=["Dong.wav","https://savage.nps.edu/Savage/Buildings/PlayGround/Dong.wav"])),
      ROUTE(fromField='touchTime',fromNode='BELLTouchS',toField='set_startTime',toNode='BELLTimeS'),
      ROUTE(fromField='fraction_changed',fromNode='BELLTimeS',toField='set_fraction',toNode='BELLInterpolator'),
      ROUTE(fromField='value_changed',fromNode='BELLInterpolator',toField='set_rotation',toNode='BELLTx'),
      ROUTE(fromField='touchTime',fromNode='BELLTouchS',toField='set_startTime',toNode='BELLClip')]),
    Background(skyColor=[(0.15,0.15,0.8)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Bell.py")
