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
    meta(content='Skids.x3d',name='title'),
    meta(content='This file defines the skids of an OH58D helicopter',name='description'),
    meta(content='Jane Wu (adapted from the original skidtube.wrl created for vrtp demo helicopter)',name='creator'),
    meta(content='12 January 2001',name='created'),
    meta(content='Del Beilstein',name='contributor'),
    meta(content='1 January 2019',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/Skids.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(translation=(0,0,1.2),
      children=[
      Group(DEF='SkidTube',
        children=[
        Transform(rotation=(0.0,0.0,1.0,-1.57),
          children=[
          Shape(
            appearance=Appearance(DEF='GRAYColor',
              material=Material(diffuseColor=(0.25,0.25,0.25))),
            geometry=Cylinder(height=2.9,radius=0.075)),
          Transform(translation=(0,-1.45,0),
            children=[
            Shape(
              geometry=Sphere(radius=.075),
              appearance=Appearance(USE='GRAYColor'))]),
          Transform(rotation=(0,0,1,.985),scale=(1.2,.9,.9),translation=(-0.03,1.49,0.0),
            children=[
            Shape(
              appearance=Appearance(USE='GRAYColor'),
              geometry=Cylinder(height=.1,radius=0.075))]),
          Transform(translation=(0,1.47,0),
            children=[
            Shape(
              geometry=Sphere(radius=.075),
              appearance=Appearance(USE='GRAYColor'))]),
          Transform(translation=(0,1.49,0),
            children=[
            Shape(
              geometry=Sphere(radius=.075),
              appearance=Appearance(USE='GRAYColor'))])])])]),
    Transform(rotation=(1.0,0.0,0.0,5.498),translation=(1.1,0.3,0.9),
      children=[
      Shape(DEF='SUPPORT',
        appearance=Appearance(USE='GRAYColor'),
        geometry=Cylinder(bottom=False,height=0.8,radius=0.06,top=False))]),
    Transform(rotation=(1.0,0.0,0.0,5.498),translation=(-0.7,0.3,0.9),
      children=[
      Shape(USE='SUPPORT')]),
    Transform(translation=(0.0,0.0,-1.2),
      children=[
      Group(USE='SkidTube')]),
    Transform(rotation=(1.0,0.0,0.0,0.785),translation=(1.1,0.3,-0.9),
      children=[
      Shape(USE='SUPPORT')]),
    Transform(rotation=(1.0,0.0,0.0,0.785),translation=(-0.7,0.3,-0.9),
      children=[
      Shape(USE='SUPPORT')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Skids.py")
