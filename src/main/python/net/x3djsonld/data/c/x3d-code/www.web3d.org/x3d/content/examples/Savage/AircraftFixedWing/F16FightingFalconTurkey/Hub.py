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
    meta(content='Hub.x3d',name='title'),
    meta(content='The hub is used for front and rear wheels',name='description'),
    meta(content='Etsuko Lippi',name='creator'),
    meta(content='Murat ONDER, LTJG, Turkish Navy',name='translator'),
    meta(content='19 July 2001',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/F16FightingFalconTurkey/Hub.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(scale=(0.3,0.3,0.3),
      children=[
      Group(
        children=[
        Transform(rotation=(1,0,0,1.571),
          children=[
          Shape(DEF='inside_wheel_center',
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=0.2,radius=0.275))])]),
      Transform(rotation=(1,0,0,1.571),
        children=[
        Shape(DEF='inside_wheel2',
          appearance=Appearance(
            material=Material(diffuseColor=(0.85,0.85,0.85))),
          geometry=Cylinder(height=0.1))]),
      #  wheel volts 
      Group(
        children=[
        Transform(DEF='volts',rotation=(1,0,0,1.571),translation=(0,0.48,0),
          children=[
          Shape(DEF='volt',
            appearance=Appearance(
              material=Material(diffuseColor=(0.7,0.7,0.7))),
            geometry=Cylinder(height=0.2,radius=0.1))]),
        Transform(rotation=(1,0,0,1.571),translation=(0.45,0.225,0),
          children=[
          Shape(USE='volt')]),
        Transform(rotation=(1,0,0,1.571),translation=(0,-0.48,0),
          children=[
          Shape(USE='volt')]),
        Transform(rotation=(1,0,0,1.571),translation=(-0.45,-0.225,0),
          children=[
          Shape(USE='volt')]),
        Transform(rotation=(1,0,0,1.571),translation=(0.45,-0.225,0),
          children=[
          Shape(USE='volt')]),
        Transform(rotation=(1,0,0,1.571),translation=(-0.45,0.225,0),
          children=[
          Shape(USE='volt')])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Hub.py")
