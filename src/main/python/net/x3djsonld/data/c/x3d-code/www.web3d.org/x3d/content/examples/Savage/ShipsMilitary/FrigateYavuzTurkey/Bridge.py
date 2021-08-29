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
    meta(content='Bridge of a Yavuz Class Frigate',name='description'),
    meta(content='Ozan APAYDIN',name='creator'),
    meta(content='30 August 2001',name='created'),
    meta(content='21 March 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/Bridge.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(0.6,0.6,0.6)]),
    Viewpoint(position=(0.0,0.0,30)),
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(.62,.639,.812))),
      geometry=Extrusion(convex=False,creaseAngle=0.785,crossSection=[(3.5,-1),(4.5,-0.5),(5.5,0),(5.5,8),(3.5,10),(-3.5,10),(-5.5,8),(-5.5,0),(-4.5,-0.5),(-3.5,-1),(3.5,-1)],scale=[(1,1),(1,1),(1.1,1.1),(1.1,1.1),(0.9,0.9),(0.8,0.8)],solid=False,spine=[(0,0,0),(0,5,0),(0,6.5,0),(0,7,0),(0,7.3,0),(0,7.5,0)])),
    #  Front glasses 
    Transform(rotation=(1,0,0,0.55),translation=(0,5.8,10.55),
      children=[
      Shape(DEF='Glass',
        appearance=Appearance(DEF='GlassApp',
          material=Material(diffuseColor=(0.1,0.1,0.1),emissiveColor=(0.1,0.1,0.1),shininess=0.5,transparency=0.3)),
        geometry=Box(size=(2.0,1.3,0.05))),
      Transform(translation=(-2.3,0,0),
        children=[
        Shape(USE='Glass')]),
      Transform(translation=(2.3,0,0),
        children=[
        Shape(USE='Glass')])]),
    #  Portside glasses 
    Transform(rotation=(0,0,1,-0.4),translation=(5.8,5.8,4),
      children=[
      Group(DEF='PortGlass',
        children=[
        Shape(DEF='PGlass',
          geometry=Box(size=(0.05,1.3,2)),
          appearance=Appearance(USE='GlassApp')),
        Transform(translation=(0,0,-2.3),
          children=[
          Shape(USE='PGlass')]),
        Transform(translation=(0,0,2.3),
          children=[
          Shape(USE='PGlass')])])]),
    #  Starboardside glasses 
    Transform(rotation=(0,0,1,0.4),translation=(-5.8,5.8,4),
      children=[
      Group(USE='PortGlass')]),
    Transform(rotation=(0,1,0,0.785),translation=(4.5,5.8,10),
      children=[
      Transform(rotation=(1,0,0,0.55),translation=(0.5,0,-0.2),
        children=[
        Shape(USE='Glass')])]),
    Transform(rotation=(0,1,0,-0.785),translation=(-4.5,5.8,10),
      children=[
      Transform(rotation=(1,0,0,0.55),translation=(-0.5,0,-0.2),
        children=[
        Shape(USE='Glass')])])])
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
