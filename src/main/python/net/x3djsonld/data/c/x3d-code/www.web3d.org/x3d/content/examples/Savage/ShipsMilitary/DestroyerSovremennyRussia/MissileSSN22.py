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
    meta(content='MissileSSN22.x3d',name='title'),
    meta(content='Kevin Anderson, Mike Whitecar',name='creator'),
    meta(content='27 September 2000',name='created'),
    meta(content='22 August 2018',name='modified'),
    meta(content='SS-N-22 Missile for use with Sovremennny and/or other Russian Warships. Designed to specifications and photos supplied by Janes Online.',name='description'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DestroyerSovremennyRussia/MissileSSN22.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  SS-N-22 Missile Launcher 
    children=[
    Transform(translation=(0,-.4,0),
      children=[
      Shape(
        appearance=Appearance(DEF='Gray',
          material=Material(diffuseColor=(.62,.63,.61))),
        geometry=Box(size=(5,2,2.8)))]),
    Transform(translation=(.5,1.25,.65),
      children=[
      Transform(DEF='MissileTube',rotation=(0,0,1,-1.57),
        children=[
        Shape(
          geometry=Cylinder(height=9,radius=.65),
          appearance=Appearance(USE='Gray')),
        Transform(scale=(1,.35,1),translation=(0,4.5,0),
          children=[
          Shape(DEF='TubeEnd',
            appearance=Appearance(USE='Gray'),
            geometry=Sphere(radius=.65))]),
        Transform(scale=(1,.35,1),translation=(0,-4.5,0),
          children=[
          Shape(USE='TubeEnd')])])]),
    Transform(translation=(.5,1.25,-.65),
      children=[
      Transform(USE='MissileTube')]),
    Transform(translation=(.5,2.55,.65),
      children=[
      Transform(USE='MissileTube')]),
    Transform(translation=(.5,2.55,-.65),
      children=[
      Transform(USE='MissileTube')]),
    Transform(translation=(.5,1.9,0),
      children=[
      Shape(
        geometry=Box(size=(8.8,2.6,1.3)),
        appearance=Appearance(USE='Gray'))]),
    Transform(translation=(-2,1.9,0),
      children=[
      Shape(DEF='Beam',
        appearance=Appearance(USE='Gray'),
        geometry=Box(size=(.2,.6,2.6)))]),
    Transform(translation=(2,1.9,0),
      children=[
      Shape(USE='Beam')]),
    Transform(translation=(-2,.6,0),
      children=[
      Shape(USE='Beam')]),
    Transform(translation=(2,.6,0),
      children=[
      Shape(USE='Beam')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MissileSSN22.py")
