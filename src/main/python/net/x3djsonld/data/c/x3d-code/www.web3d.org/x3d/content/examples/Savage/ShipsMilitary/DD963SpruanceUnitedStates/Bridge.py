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
    meta(content='Bridge.x3d',name='title'),
    meta(content='Spruance Bridge',name='description'),
    meta(content='LT Josh Hansen',name='creator'),
    meta(content='17 September 2001',name='created'),
    meta(content='20 October 2001',name='modified'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DD963SpruanceUnitedStates/Bridge.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(
        children=[
        Shape(
          geometry=Extrusion(crossSection=[(0,0),(5.5,0),(7.5,1),(7.5,13),(-7.5,13),(-7.5,1),(-5.5,0),(0,0)],solid=False,spine=[(0,0,0),(0,12,0)]),
          appearance=Appearance(
            material=Material(diffuseColor=(.6,.6,.6)))),
        Transform(translation=(0,12,0),
          children=[
          Shape(
            geometry=Extrusion(beginCap=False,crossSection=[(-5.5,0),(-7.5,1),(-7.5,13),(-7.4,13),(-7.4,1.1),(-5.5,.1),(-5.5,0)],endCap=False,solid=False,spine=[(0,0,0),(0,2,0)]),
            appearance=Appearance(
              material=Material(diffuseColor=(.6,.6,.6)))),
          Shape(
            geometry=Extrusion(beginCap=False,crossSection=[(5.5,0),(7.5,1),(7.5,13),(7.4,13),(7.4,1.1),(5.5,.1),(5.5,0)],endCap=False,solid=False,spine=[(0,0,0),(0,2,0)]),
            appearance=Appearance(
              material=Material(diffuseColor=(.6,.6,.6)))),
          Shape(
            geometry=Extrusion(beginCap=False,crossSection=[(0,0),(5.5,0),(5.5,13),(-5.5,13),(-5.5,0),(0,0)],endCap=False,solid=False,spine=[(0,0,0),(0,2,0)]),
            appearance=Appearance(
              material=Material(diffuseColor=(.6,.6,.6)))),
          Transform(rotation=(0,1,0,3.14),translation=(0,3.25,13),
            children=[
            Shape(
              geometry=Extrusion(beginCap=False,crossSection=[(0,0),(5.5,0),(5.5,13),(-5.5,13),(-5.5,0),(0,0)],scale=[(1,1),(1,1),(1,1.05)],solid=False,spine=[(0,0,0),(0,1,0),(0,2,0)]),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.6))))]),
          Transform(translation=(0,2.6,0),
            children=[
            Shape(
              geometry=Box(size=(.2,1.25,.1)),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.6))))]),
          Transform(translation=(2,2.6,0),
            children=[
            Shape(
              geometry=Box(size=(.2,1.25,.1)),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.6))))]),
          Transform(translation=(4,2.6,0),
            children=[
            Shape(
              geometry=Box(size=(.2,1.25,.1)),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.6))))]),
          Transform(translation=(5.5,2.6,0),
            children=[
            Shape(
              geometry=Box(size=(.2,1.25,.1)),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.6))))]),
          Transform(translation=(5.5,2.6,2),
            children=[
            Shape(
              geometry=Box(size=(.2,1.25,.1)),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.6))))]),
          Transform(translation=(5.5,2.6,4),
            children=[
            Shape(
              geometry=Box(size=(.2,1.25,.1)),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.6))))]),
          Transform(translation=(5.5,2.6,6),
            children=[
            Shape(
              geometry=Box(size=(.2,1.25,.1)),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.6))))]),
          Transform(translation=(5.5,2.6,8),
            children=[
            Shape(
              geometry=Box(size=(.2,1.25,.1)),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.6))))]),
          Transform(translation=(5.4,2.6,11),
            children=[
            Shape(
              geometry=Box(size=(.2,1.3,4)),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.6))))]),
          Transform(translation=(-5.4,2.6,11),
            children=[
            Shape(
              geometry=Box(size=(.2,1.3,4)),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.6))))]),
          Transform(translation=(-2,2.6,0),
            children=[
            Shape(
              geometry=Box(size=(.2,1.25,.1)),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.6))))]),
          Transform(translation=(-4,2.6,0),
            children=[
            Shape(
              geometry=Box(size=(.2,1.25,.1)),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.6))))]),
          Transform(translation=(-5.5,2.6,0),
            children=[
            Shape(
              geometry=Box(size=(.2,1.25,.1)),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.6))))]),
          Transform(translation=(-5.5,2.6,2),
            children=[
            Shape(
              geometry=Box(size=(.2,1.25,.1)),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.6))))]),
          Transform(translation=(-5.5,2.6,4),
            children=[
            Shape(
              geometry=Box(size=(.2,1.25,.1)),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.6))))]),
          Transform(translation=(-5.5,2.6,6),
            children=[
            Shape(
              geometry=Box(size=(.2,1.25,.1)),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.6))))]),
          Transform(translation=(-5.5,2.6,8),
            children=[
            Shape(
              geometry=Box(size=(.2,1.25,.1)),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.6))))])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Bridge.py")
