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
    meta(content='GunAK130.x3d',name='title'),
    meta(content='Kevin Anderson, Mike Whitecar',name='creator'),
    meta(content='27 September 2000',name='created'),
    meta(content='10 November 2002',name='modified'),
    meta(content='AK130 Gun for use with Sovremennny and/or other Russian Warships. Designed to specifications and photos supplied by Janes Online.',name='description'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DestroyerSovremennyRussia/GunAK130.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  AK-130 Russian Gun 
    children=[
    Transform(DEF='GunTurret',scale=(3.6,3.5,3.5),translation=(0,3,0),
      children=[
      Transform(scale=(1,1,.55),translation=(0,0,-.4),
        children=[
        Shape(DEF='TurretSide',
          geometry=Extrusion(creaseAngle=1.6,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,0.00),(1.00,0.00)],orientation=[(0,1,0,0),(1,0,0,1.57)],spine=[(0,0,0),(0,0,0)]),
          appearance=Appearance(DEF='Gray',
            material=Material(diffuseColor=(.62,.639,.612))))]),
      Transform(
        children=[
        Shape(
          appearance=Appearance(USE='Gray'),
          geometry=Extrusion(creaseAngle=1.6,crossSection=[(0,-.4),(0,.4)],spine=[(0,0,0),(-1,0,0),(-.92,.38,0),(-.71,.71,0),(-.38,.92,0),(0,1,0),(0,.5,0)]))]),
      Transform(rotation=(0,1,0,3.14),scale=(1,1,.55),translation=(0,0,.4),
        children=[
        Shape(USE='TurretSide')]),
      Transform(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(.604,.549,.537))),
          geometry=Extrusion(ccw=False,creaseAngle=1.6,crossSection=[(0,-.4),(0,.4)],spine=[(0,0,0),(.71,0,0),(.71,.58,0),(.38,.82,0),(0,.9,0)]))]),
      Transform(translation=(.6,0.05,0),
        children=[
        Shape(
          appearance=Appearance(USE='Gray'),
          geometry=Box(size=(.8,.1,.8)))])]),
    Transform(translation=(0,2,0),
      children=[
      Shape(
        appearance=Appearance(USE='Gray'),
        geometry=Cylinder(height=4,radius=1.9))]),
    Transform(translation=(0,.5,0),
      children=[
      Shape(
        appearance=Appearance(USE='Gray'),
        geometry=Cylinder(height=1.5,radius=3))]),
    Transform(DEF='GunBarrel',translation=(3,4.5,.7),
      children=[
      Transform(rotation=(0,0,1,-1.57),
        children=[
        Shape(
          appearance=Appearance(USE='Gray'),
          geometry=Cylinder(height=.7,radius=.4)),
        Transform(translation=(0,3,0),
          children=[
          Shape(
            appearance=Appearance(USE='Gray'),
            geometry=Cylinder(height=6,radius=.25))])])]),
    Transform(translation=(0,0,-1.4),
      children=[
      Transform(USE='GunBarrel')]),
    Transform(scale=(2.6,1,2.6),
      children=[
      Shape(
        appearance=Appearance(USE='Gray'),
        geometry=Extrusion(ccw=False,creaseAngle=.7,crossSection=[(-.01,0),(.01,0),(.01,-1.7),(-.01,-1.7),(-.01,0)],solid=False,spine=[(2.00,0.0,0.00),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.00,0.0,2.00),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.00,0.0,0.00),(-1.85,0.0,-0.77),(-1.41,0.0,-1.41),(-0.77,0.0,-1.85),(0.00,0.0,-2.00),(0.77,0.0,-1.85),(1.41,0.0,-1.41),(1.85,0.0,-0.77),(2.00,0.0,0.00)]))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for GunAK130.py")
