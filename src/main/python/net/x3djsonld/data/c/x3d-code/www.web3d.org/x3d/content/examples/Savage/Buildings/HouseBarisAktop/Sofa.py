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
    meta(content='Sofa.x3d',name='title'),
    meta(content='Simple sofa.',name='description'),
    meta(content='Baris AKTOP',name='creator'),
    meta(content='13 September 2002',name='created'),
    meta(content='11 October 2002',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/Sofa.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(scale=(3,1,1),translation=(0,0.2,0),
        children=[
        Shape(
          geometry=Extrusion(creaseAngle=3.14,crossSection=[(-1,0),(-1,-0.95),(-0.975,-0.975),(-0.95,-1),(-0.05,-1),(-0.025,-0.975),(0,-0.95),(0,0),(0.1,0),(0.1,-1.05),(0.075,-1.075),(0.05,-1.1),(-1.05,-1.1),(-1.075,-1.075),(-1.1,-1.05),(-1.1,0),(-1,0)],solid=False,spine=[(0,0,0),(0,0.3,0),(0,0.4,0),(0,0.5,0),(0,0.6,0)]),
          appearance=Appearance(
            material=Material(DEF='ref',diffuseColor=(0.5,0,0.2))))]),
      Transform(DEF='bottom',scale=(3,1,1),translation=(-1.5,-0.1,-0.55),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.7,0.35,0.1)),
            texture=ImageTexture(DEF='wood',url=["wood.jpg","https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/wood.jpg"])),
          geometry=Extrusion(DEF='topext',creaseAngle=3.14,crossSection=[(0.55,-0.55),(0.575,-0.525),(0.6,-0.5),(0.6,0.5),(0.575,0.525),(0.55,0.55),(-0.55,0.55),(-0.575,0.525),(-0.6,0.5),(-0.6,-0.5),(-0.575,-0.525),(-0.55,-0.55),(0.6,-0.55)],scale=[(0.95,0.95),(0.975,0.975),(1,1),(0.95,0.95)],solid=False,spine=[(0,0,0),(0,0.1,0),(0,0.2,0),(0,0.3,0)]))]),
      Transform(scale=(0.83,1,1),translation=(-2.5,0.2,-0.55),
        children=[
        Shape(DEF='seat',
          appearance=Appearance(
            material=Material(diffuseColor=(0.5,0,0.2))),
          geometry=Extrusion(creaseAngle=3.14,crossSection=[(0.55,-0.55),(0.575,-0.525),(0.6,-0.5),(0.6,0.5),(0.575,0.525),(0.55,0.55),(-0.55,0.55),(-0.575,0.525),(-0.6,0.5),(-0.6,-0.5),(-0.575,-0.525),(-0.55,-0.55),(0.6,-0.55)],scale=[(0.95,0.95),(0.975,0.975),(1,1),(0.95,0.95)],solid=False,spine=[(0,0,0),(0,0.1,0),(0,0.2,0),(0,0.3,0)]))]),
      Transform(scale=(0.83,1,1),translation=(-0.5,0.2,-0.55),
        children=[
        Shape(USE='seat')]),
      Transform(scale=(0.83,1,1),translation=(-1.5,0.2,-0.55),
        children=[
        Shape(USE='seat')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Sofa.py")
