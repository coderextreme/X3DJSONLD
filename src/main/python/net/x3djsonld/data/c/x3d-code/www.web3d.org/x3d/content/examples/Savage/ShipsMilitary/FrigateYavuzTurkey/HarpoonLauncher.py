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
    meta(content='HarpoonLauncher.x3d',name='title'),
    meta(content='Harpoon Launchers of Yavuz Class Frigate',name='description'),
    meta(content='Ozan APAYDIN',name='creator'),
    meta(content='15 SEPT 2001',name='created'),
    meta(content='17 SEPT 2001',name='modified'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/HarpoonLauncher.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(rotation=(0,0,1,0.785),
      children=[
      Group(DEF='HarpoonLauncher',
        children=[
        Shape(DEF='Tube',
          geometry=Cylinder(height=2.5,radius=0.2),
          appearance=Appearance(DEF='TubeAppearance',
            material=Material(diffuseColor=(0.9,0.9,0.9),shininess=0.7))),
        Transform(translation=(0.4,0,0),
          children=[
          Shape(USE='Tube')]),
        Transform(translation=(0.4,0,0.4),
          children=[
          Shape(USE='Tube')]),
        Transform(translation=(0,0,0.4),
          children=[
          Shape(USE='Tube')]),
        Transform(translation=(0,1,0),
          children=[
          Shape(DEF='cover',
            geometry=Cylinder(height=0.2,radius=0.23),
            appearance=Appearance(DEF='Blue',
              material=Material(diffuseColor=(0.4,0.4,0.6))))]),
        Transform(translation=(0,-1,0),
          children=[
          Shape(USE='cover')]),
        Transform(translation=(0.4,1,0),
          children=[
          Shape(USE='cover')]),
        Transform(translation=(0.4,-1,0),
          children=[
          Shape(USE='cover')]),
        Transform(translation=(0.4,1,0.4),
          children=[
          Shape(USE='cover')]),
        Transform(translation=(0.4,-1,0.4),
          children=[
          Shape(USE='cover')]),
        Transform(translation=(0,1,0.4),
          children=[
          Shape(USE='cover')]),
        Transform(translation=(0,-1,0.4),
          children=[
          Shape(USE='cover')]),
        Transform(translation=(-0.4,0,0.2),
          children=[
          Shape(
            geometry=Box(size=(2,0.1,0.8)),
            appearance=Appearance(USE='Blue'))])])]),
    Transform(rotation=(0,0,1,2.355),translation=(0.4,0,0.8),
      children=[
      Group(USE='HarpoonLauncher')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HarpoonLauncher.py")
