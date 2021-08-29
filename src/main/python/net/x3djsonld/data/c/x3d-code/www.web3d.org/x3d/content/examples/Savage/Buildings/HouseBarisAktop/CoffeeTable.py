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
    meta(content='CoffeeTable.x3d',name='title'),
    meta(content='Coffee table with wood grain',name='description'),
    meta(content='Baris AKTOP',name='creator'),
    meta(content='13 September 2002',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/CoffeeTable.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(translation=(-0.75,0,0.5),
        children=[
        Shape(DEF='leg',
          geometry=Extrusion(creaseAngle=3.14,crossSection=[(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0)],scale=[(0.03,0.03),(0.03,0.03),(0.02,0.02),(0.025,0.025),(0.03,0.03),(0.04,0.04),(0.05,0.05),(0.06,0.06)],spine=[(0,0,0),(0,0.02,0),(0,0.03,0),(0,0.2,0),(0,0.3,0),(0,0.4,0),(0,0.5,0),(0,0.6,0)]),
          appearance=Appearance(DEF='coffetableapp',
            material=Material(diffuseColor=(0.7,0.35,0.1)),
            texture=ImageTexture(DEF='wood',url=["wood.jpg","https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/wood.jpg"])))]),
      Transform(translation=(0.75,0,0.5),
        children=[
        Shape(USE='leg')]),
      Transform(translation=(-0.75,0,-0.5),
        children=[
        Shape(USE='leg')]),
      Transform(translation=(0.75,0,-0.5),
        children=[
        Shape(USE='leg')]),
      Transform(translation=(0,0.6,0),
        children=[
        Shape(
          geometry=Extrusion(crossSection=[(-0.75,0.5),(0.75,0.5),(0.75,-0.5),(-0.75,-0.5),(-0.75,0.5)],scale=[(1.2,1.2),(1.3,1.3),(1.2,1.2)],spine=[(0,0,0),(0,0.05,0),(0,0.1,0)]),
          appearance=Appearance(USE='coffetableapp'))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CoffeeTable.py")
