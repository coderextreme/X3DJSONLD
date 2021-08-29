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
    meta(content='ForwardMast.x3d',name='title'),
    meta(content='Spruance Forward Mast',name='description'),
    meta(content='LT Josh Hansen',name='creator'),
    meta(content='17 September 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DD963SpruanceUnitedStates/ForwardMast.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(translation=(3,7.5,0),
        children=[
        Shape(
          geometry=Cylinder(height=15,radius=.5),
          appearance=Appearance(
            material=Material(diffuseColor=(.6,.6,.7))))]),
      Transform(translation=(-3,7.5,0),
        children=[
        Shape(
          geometry=Cylinder(height=15,radius=.5),
          appearance=Appearance(
            material=Material(diffuseColor=(.6,.6,.7))))]),
      Transform(rotation=(1,0,0,.18),translation=(3,7.65,-6),
        children=[
        Shape(
          geometry=Cylinder(height=15.5,radius=.5),
          appearance=Appearance(
            material=Material(diffuseColor=(.6,.6,.7))))]),
      Transform(rotation=(1,0,0,.18),translation=(-3,7.65,-6),
        children=[
        Shape(
          geometry=Cylinder(height=15.5,radius=.5),
          appearance=Appearance(
            material=Material(diffuseColor=(.6,.6,.7))))]),
      Group(
        children=[
        Transform(rotation=(1,0,0,2),translation=(3,1.8,-3.75),
          children=[
          Shape(
            geometry=Cylinder(height=7.5,radius=.3),
            appearance=Appearance(
              material=Material(diffuseColor=(.6,.6,.7))))]),
        Transform(rotation=(1,0,0,-2),translation=(3,1.8,-3.75),
          children=[
          Shape(
            geometry=Cylinder(height=7.5,radius=.3),
            appearance=Appearance(
              material=Material(diffuseColor=(.6,.6,.7))))]),
        Transform(rotation=(1,0,0,1.57),translation=(3,3.5,-3.3),
          children=[
          Shape(
            geometry=Cylinder(height=6.2,radius=.3),
            appearance=Appearance(
              material=Material(diffuseColor=(.6,.6,.7))))]),
        Transform(rotation=(1,0,0,-2),translation=(3,5,-3.75),
          children=[
          Shape(
            geometry=Cylinder(height=7.4,radius=.3),
            appearance=Appearance(
              material=Material(diffuseColor=(.6,.6,.7))))]),
        Transform(rotation=(1,0,0,1.57),translation=(3,7.25,-3.3),
          children=[
          Shape(
            geometry=Cylinder(height=5.75,radius=.3),
            appearance=Appearance(
              material=Material(diffuseColor=(.6,.6,.7))))]),
        Transform(rotation=(1,0,0,-1.9),translation=(3,8.5,-3.35),
          children=[
          Shape(
            geometry=Cylinder(height=6.3,radius=.3),
            appearance=Appearance(
              material=Material(diffuseColor=(.6,.6,.7))))]),
        Transform(translation=(0,10,-.5),
          children=[
          Shape(
            geometry=Box(size=(6,.3,10)),
            appearance=Appearance(
              material=Material(diffuseColor=(.5,.5,.5))))]),
        Transform(rotation=(1,0,0,-1.9),translation=(3,11.5,-3),
          children=[
          Shape(
            geometry=Cylinder(height=5.75,radius=.3),
            appearance=Appearance(
              material=Material(diffuseColor=(.6,.6,.7))))]),
        Transform(rotation=(1,0,0,1.57),translation=(3,12.75,-2.8),
          children=[
          Shape(
            geometry=Cylinder(height=5,radius=.3),
            appearance=Appearance(
              material=Material(diffuseColor=(.6,.6,.7))))]),
        Transform(rotation=(1,0,0,-1.9),translation=(3,13.75,-2.75),
          children=[
          Shape(
            geometry=Cylinder(height=5.25,radius=.3),
            appearance=Appearance(
              material=Material(diffuseColor=(.6,.6,.7))))]),
        Transform(translation=(0,15,-1),
          children=[
          Shape(
            geometry=Box(size=(6,.3,6.5)),
            appearance=Appearance(
              material=Material(diffuseColor=(.5,.5,.5)))),
          Transform(translation=(0,0,-4),
            children=[
            Shape(
              geometry=Box(size=(12,.3,.3)),
              appearance=Appearance(
                material=Material(diffuseColor=(.5,.5,.5))))])])]),
      Transform(translation=(-6,0,0),
        children=[
        Group(
          children=[
          Transform(rotation=(1,0,0,2),translation=(3,1.8,-3.75),
            children=[
            Shape(
              geometry=Cylinder(height=7.5,radius=.3),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.7))))]),
          Transform(rotation=(1,0,0,-2),translation=(3,1.8,-3.75),
            children=[
            Shape(
              geometry=Cylinder(height=7.5,radius=.3),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.7))))]),
          Transform(rotation=(1,0,0,1.57),translation=(3,3.5,-3.3),
            children=[
            Shape(
              geometry=Cylinder(height=6.2,radius=.3),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.7))))]),
          Transform(rotation=(1,0,0,-2),translation=(3,5,-3.75),
            children=[
            Shape(
              geometry=Cylinder(height=7.4,radius=.3),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.7))))]),
          Transform(rotation=(1,0,0,1.57),translation=(3,7.25,-3.3),
            children=[
            Shape(
              geometry=Cylinder(height=5.75,radius=.3),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.7))))]),
          Transform(rotation=(1,0,0,-1.9),translation=(3,8.5,-3.35),
            children=[
            Shape(
              geometry=Cylinder(height=6.3,radius=.3),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.7))))]),
          Transform(rotation=(1,0,0,-1.9),translation=(3,11.5,-3),
            children=[
            Shape(
              geometry=Cylinder(height=5.75,radius=.3),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.7))))]),
          Transform(rotation=(1,0,0,1.57),translation=(3,12.75,-2.8),
            children=[
            Shape(
              geometry=Cylinder(height=5,radius=.3),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.7))))]),
          Transform(rotation=(1,0,0,-1.9),translation=(3,13.75,-2.75),
            children=[
            Shape(
              geometry=Cylinder(height=5.25,radius=.3),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.7))))])])]),
      Transform(translation=(0,12.5,-5),
        children=[
        Shape(
          geometry=Box(size=(1,25,1)),
          appearance=Appearance(
            material=Material(diffuseColor=(.45,.45,.45))))]),
      Group(
        children=[
        Transform(rotation=(0,1,0,1.57),
          children=[
          Transform(rotation=(1,0,0,2),translation=(0,1.8,0),
            children=[
            Shape(
              geometry=Cylinder(height=7,radius=.3),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.7))))]),
          Transform(rotation=(1,0,0,-2),translation=(0,1.8,0),
            children=[
            Shape(
              geometry=Cylinder(height=7,radius=.3),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.7))))]),
          Transform(rotation=(1,0,0,1.57),translation=(0,3.5,0),
            children=[
            Shape(
              geometry=Cylinder(height=6.2,radius=.3),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.7))))]),
          Transform(rotation=(1,0,0,1.57),translation=(0,7.25,0),
            children=[
            Shape(
              geometry=Cylinder(height=5.75,radius=.3),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.7))))]),
          Transform(rotation=(1,0,0,1.57),translation=(0,12.75,0),
            children=[
            Shape(
              geometry=Cylinder(height=5,radius=.3),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.7))))])])]),
      Transform(rotation=(1,0,0,.18),translation=(0,0,-7.3),
        children=[
        Group(
          children=[
          Transform(rotation=(0,1,0,1.57),
            children=[
            Transform(rotation=(1,0,0,2),translation=(0,1.8,0),
              children=[
              Shape(
                geometry=Cylinder(height=7,radius=.3),
                appearance=Appearance(
                  material=Material(diffuseColor=(.6,.6,.7))))]),
            Transform(rotation=(1,0,0,-2),translation=(0,1.8,0),
              children=[
              Shape(
                geometry=Cylinder(height=7,radius=.3),
                appearance=Appearance(
                  material=Material(diffuseColor=(.6,.6,.7))))]),
            Transform(rotation=(1,0,0,1.57),translation=(0,3.5,0),
              children=[
              Shape(
                geometry=Cylinder(height=6.2,radius=.3),
                appearance=Appearance(
                  material=Material(diffuseColor=(.6,.6,.7))))]),
            Transform(rotation=(1,0,0,1.57),translation=(0,7.25,0),
              children=[
              Shape(
                geometry=Cylinder(height=5.75,radius=.3),
                appearance=Appearance(
                  material=Material(diffuseColor=(.6,.6,.7))))]),
            Transform(rotation=(1,0,0,1.57),translation=(0,12.75,0),
              children=[
              Shape(
                geometry=Cylinder(height=5,radius=.3),
                appearance=Appearance(
                  material=Material(diffuseColor=(.6,.6,.7))))])])])]),
      Transform(translation=(0,21.5,-5),
        children=[
        Shape(
          geometry=Box(size=(10,.5,.5)),
          appearance=Appearance(
            material=Material(diffuseColor=(.67,.67,.67)))),
        Transform(translation=(0,0,1.5),
          children=[
          Shape(
            geometry=Box(size=(3,.3,3)),
            appearance=Appearance(
              material=Material(diffuseColor=(.5,.5,.5))))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ForwardMast.py")
