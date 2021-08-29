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
    meta(content='SeaSparrowBox.x3d',name='title'),
    meta(content='Sea Sparrow',name='description'),
    meta(content='LT Josh Hansen',name='creator'),
    meta(content='17 September 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DD963SpruanceUnitedStates/SeaSparrowBox.x3d',name='identifier'),
    meta(content='http://www.fas.org/man/dod-101/sys/missile/rim-7.htm',name='reference'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(translation=(0,-.5,0),
        children=[
        Shape(
          geometry=Cone(bottomRadius=2.5,height=.25),
          appearance=Appearance(
            material=Material(DEF='Haze_Grey',diffuseColor=(.6,.6,.6))))]),
      Transform(translation=(0,.5,0),
        children=[
        Shape(
          geometry=Cylinder(radius=.5),
          appearance=Appearance(
            material=Material(USE='Haze_Grey')))]),
      Transform(translation=(0,1.5,0),
        children=[
        Shape(
          geometry=Box(size=(3,.25,.5)),
          appearance=Appearance(
            material=Material(USE='Haze_Grey')))]),
      Transform(translation=(-3.25,0,0),
        children=[
        Group(
          children=[
          Transform(translation=(1.5,2,0),
            children=[
            Shape(
              geometry=Box(size=(.75,.75,4)),
              appearance=Appearance(
                material=Material(USE='Haze_Grey'))),
            Transform(rotation=(1,0,0,1.57),scale=(.35,.15,.35),translation=(0,0,2),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(.6,.6,.6))),
                geometry=Extrusion(crossSection=[(-1,1),(1,1),(1,-1),(-1,-1),(-1,1)],scale=[(1,1),(0.01,0.01)]))])]),
          Transform(translation=(2.25,2,0),
            children=[
            Shape(
              geometry=Box(size=(.75,.75,4)),
              appearance=Appearance(
                material=Material(USE='Haze_Grey'))),
            Transform(rotation=(1,0,0,1.57),scale=(.35,.15,.35),translation=(0,0,2),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(.6,.6,.6))),
                geometry=Extrusion(crossSection=[(-1,1),(1,1),(1,-1),(-1,-1),(-1,1)],scale=[(1,1),(0.01,0.01)]))])]),
          Transform(translation=(1.5,1.25,0),
            children=[
            Shape(
              geometry=Box(size=(.75,.75,4)),
              appearance=Appearance(
                material=Material(USE='Haze_Grey'))),
            Transform(rotation=(1,0,0,1.57),scale=(.35,.15,.35),translation=(0,0,2),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(.6,.6,.6))),
                geometry=Extrusion(crossSection=[(-1,1),(1,1),(1,-1),(-1,-1),(-1,1)],scale=[(1,1),(0.01,0.01)]))])]),
          Transform(translation=(2.25,1.25,0),
            children=[
            Shape(
              geometry=Box(size=(.75,.75,4)),
              appearance=Appearance(
                material=Material(USE='Haze_Grey'))),
            Transform(rotation=(1,0,0,1.57),scale=(.35,.15,.35),translation=(0,0,2),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(.6,.6,.6))),
                geometry=Extrusion(crossSection=[(-1,1),(1,1),(1,-1),(-1,-1),(-1,1)],scale=[(1,1),(0.01,0.01)]))])])])]),
      Group(
        children=[
        Transform(translation=(1,2,0),
          children=[
          Shape(
            geometry=Box(size=(.75,.75,4)),
            appearance=Appearance(
              material=Material(USE='Haze_Grey'))),
          Transform(rotation=(1,0,0,1.57),scale=(.35,.15,.35),translation=(0,0,2),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.6))),
              geometry=Extrusion(crossSection=[(-1,1),(1,1),(1,-1),(-1,-1),(-1,1)],scale=[(1,1),(0.01,0.01)]))])]),
        Transform(translation=(1.75,2,0),
          children=[
          Shape(
            geometry=Box(size=(.75,.75,4)),
            appearance=Appearance(
              material=Material(USE='Haze_Grey'))),
          Transform(rotation=(1,0,0,1.57),scale=(.35,.15,.35),translation=(0,0,2),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.6))),
              geometry=Extrusion(crossSection=[(-1,1),(1,1),(1,-1),(-1,-1),(-1,1)],scale=[(1,1),(0.01,0.01)]))])]),
        Transform(translation=(1,1.25,0),
          children=[
          Shape(
            geometry=Box(size=(.75,.75,4)),
            appearance=Appearance(
              material=Material(USE='Haze_Grey'))),
          Transform(rotation=(1,0,0,1.57),scale=(.35,.15,.35),translation=(0,0,2),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.6))),
              geometry=Extrusion(crossSection=[(-1,1),(1,1),(1,-1),(-1,-1),(-1,1)],scale=[(1,1),(0.01,0.01)]))])]),
        Transform(translation=(1.75,1.25,0),
          children=[
          Shape(
            geometry=Box(size=(.75,.75,4)),
            appearance=Appearance(
              material=Material(USE='Haze_Grey'))),
          Transform(rotation=(1,0,0,1.57),scale=(.35,.15,.35),translation=(0,0,2),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.6))),
              geometry=Extrusion(crossSection=[(-1,1),(1,1),(1,-1),(-1,-1),(-1,1)],scale=[(1,1),(0.01,0.01)]))])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SeaSparrowBox.py")
