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
    meta(content='GunAK630.x3d',name='title'),
    meta(content='Kevin Anderson, Mike Whitecar',name='creator'),
    meta(content='10 November 2002',name='modified'),
    meta(content='AK630 Gun for use with Sovremennny and/or other Russian Warships. Designed to specifications and photos supplied by Janes Online.',name='description'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DestroyerSovremennyRussia/GunAK630.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  AK-630 Russian Gun - Close In Weapons System (CIWS) 
    children=[
    Group(DEF='PedistalBase',
      children=[
      Shape(
        geometry=Extrusion(creaseAngle=.7,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(.85,.85),(.55,.55)],spine=[(0,0,0),(0,.5,0)]),
        appearance=Appearance(DEF='Gray',
          material=Material(diffuseColor=(.55,.53,.5))))]),
    Group(DEF='TurretGroup',
      children=[
      Transform(
        children=[
        Transform(translation=(0,.55,0),
          children=[
          Shape(
            appearance=Appearance(USE='Gray'),
            geometry=Cylinder(height=.08,radius=.55)),
          Transform(translation=(0,.155,0),
            children=[
            Shape(
              appearance=Appearance(USE='Gray'),
              geometry=Cylinder(height=.25,radius=.53))]),
          Transform(scale=(1,.4,1),translation=(0,.28,0),
            children=[
            Shape(
              appearance=Appearance(USE='Gray'),
              geometry=Sphere(radius=.53))])]),
        Transform(DEF='GunBarrel',translation=(.65,.675,0),
          children=[
          Transform(rotation=(0,0,1,-1.57),
            children=[
            Shape(
              appearance=Appearance(DEF='Black',
                material=Material(diffuseColor=(.1,.1,.1))),
              geometry=Cylinder(height=.4,radius=.13)),
            Transform(translation=(0,.5,0),
              children=[
              Shape(
                appearance=Appearance(USE='Black'),
                geometry=Cylinder(height=1,radius=.1))])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for GunAK630.py")
