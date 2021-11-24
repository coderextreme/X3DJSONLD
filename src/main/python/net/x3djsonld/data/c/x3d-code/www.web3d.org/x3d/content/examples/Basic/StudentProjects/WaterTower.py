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
    meta(content='WaterTower.x3d',name='title'),
    meta(content='A simple water tower, produced as a MV4204 class project. Total height 25m.',name='description'),
    meta(content='Bob Vojtik, Don Brutzman',name='creator'),
    meta(content='26 July 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/WaterTower.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='WaterTower.x3d'),
    Viewpoint(description='Water Tower',position=(0,15,50)),
    Transform(DEF='MoveUpAboveGround',translation=(0,22.5,0),
      children=[
      Shape(DEF='waterTank',
        appearance=Appearance(
          material=Material(diffuseColor=(0.6,0.6,0.6))),
        geometry=Cylinder(height=7,radius=5)),
      Transform(translation=(0,-12.5,0),
        children=[
        Shape(DEF='centerWaterPipe',
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=20,radius=.6)),
        Transform(DEF='leftLeg',translation=(-2,0,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=20,radius=.2))]),
        Transform(DEF='rightLeg',translation=(2,0,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=20,radius=.2))]),
        Transform(DEF='backLeg',translation=(0,0,-2),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=20,radius=.2))]),
        Transform(DEF='frontLeg',translation=(0,0,2),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=20,radius=.2))]),
        Transform(DEF='ground',translation=(0,-10,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0,1,0))),
            geometry=Box(size=(8,.1,8)))]),
        Transform(DEF='crossBeams',rotation=(0,1,0,.785),translation=(1,0,1),
          children=[
          Transform(rotation=(0,0,1,.785),translation=(0,8.586,0),
            children=[
            Shape(DEF='CrossBeam',
              appearance=Appearance(
                material=Material(),),
              geometry=Box(size=(4,.2,.1)))]),
          Transform(rotation=(0,0,1,-.785),translation=(0,8.586,0),
            children=[
            Shape(USE='CrossBeam')]),
          Transform(rotation=(0,0,1,.785),translation=(0,5.7575,0),
            children=[
            Shape(USE='CrossBeam')]),
          Transform(rotation=(0,0,1,-.785),translation=(0,5.7575,0),
            children=[
            Shape(USE='CrossBeam')]),
          Transform(rotation=(0,0,1,.785),translation=(0,2.9291,0),
            children=[
            Shape(USE='CrossBeam')]),
          Transform(rotation=(0,0,1,-.785),translation=(0,2.9291,0),
            children=[
            Shape(USE='CrossBeam')]),
          Transform(rotation=(0,0,1,.785),translation=(0,-2.8284,0),
            children=[
            Shape(USE='CrossBeam')]),
          Transform(rotation=(0,0,1,-.785),translation=(0,-2.8284,0),
            children=[
            Shape(USE='CrossBeam')]),
          Transform(rotation=(0,0,1,.785),
            children=[
            Shape(USE='CrossBeam')]),
          Transform(rotation=(0,0,1,-.785),
            children=[
            Shape(USE='CrossBeam')]),
          Transform(rotation=(0,0,1,.785),translation=(0,-5.6568,0),
            children=[
            Shape(USE='CrossBeam')]),
          Transform(rotation=(0,0,1,-.785),translation=(0,-5.6568,0),
            children=[
            Shape(USE='CrossBeam')]),
          Transform(rotation=(0,0,1,.785),translation=(0,-8.4852,0),
            children=[
            Shape(USE='CrossBeam')]),
          Transform(rotation=(0,0,1,-.785),translation=(0,-8.4852,0),
            children=[
            Shape(USE='CrossBeam')])]),
        Transform(translation=(-2,0,-2),
          children=[
          Transform(USE='crossBeams')]),
        Transform(rotation=(0,1,0,1.57),
          children=[
          Transform(USE='crossBeams')])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for WaterTower.py")
