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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='RocketPod.x3d',name='title'),
    meta(content='Defines a 2.75 inch rocket weapon system that is inlined to create a helicopter',name='description'),
    meta(content='Jane Wu (adapted from the original rocketpod.x3d created for vrtp demo helicopter)',name='creator'),
    meta(content='10 January 2001',name='created'),
    meta(content='9 October 2002',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/RocketPod.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      #  Rocket pod 
      children=[
      Shape(
        appearance=Appearance(DEF='Gray',
          material=Material(diffuseColor=(0.25,0.25,0.25))),
        geometry=Cylinder(height=1.73,radius=0.23)),
      #  Pylon mount 
      Transform(translation=(0.0,0.0,0.23),
        children=[
        Shape(
          appearance=Appearance(USE='Gray'),
          geometry=Box(size=(0.07,0.6,0.5)))]),
      #  Rocket #1 
      Transform(translation=(0.0,0.2,0.0),
        children=[
        Group(DEF='Rocket',
          #  Rocket Tube 
          children=[
          Shape(
            appearance=Appearance(DEF='White',
              material=Material(diffuseColor=(1.0,1.0,1.0))),
            geometry=Cylinder(height=1.6,radius=0.04)),
          #  Rocket Fuse 
          Transform(translation=(0.0,0.875,0.0),
            children=[
            Shape(
              appearance=Appearance(DEF='DarkBlue',
                material=Material(diffuseColor=(0,0,0.25))),
              geometry=Cone(bottomRadius=0.04,height=0.15))])])]),
      #  Rocket #2 
      Transform(translation=(-0.12,0.2,0.0),
        children=[
        Group(USE='Rocket')]),
      #  Rocket #3 
      Transform(translation=(0.12,0.2,0.0),
        children=[
        Group(USE='Rocket')]),
      #  Rocket #4 
      Transform(translation=(-0.06,0.2,-0.1),
        children=[
        Group(USE='Rocket')]),
      #  Rocket #5 
      Transform(translation=(0.06,0.2,0.1),
        children=[
        Group(USE='Rocket')]),
      #  Rocket #6 
      Transform(translation=(0.06,0.2,-0.1),
        children=[
        Group(USE='Rocket')]),
      #  Rocket #7 
      Transform(translation=(-0.06,0.2,0.1),
        children=[
        Group(USE='Rocket')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RocketPod.py")
