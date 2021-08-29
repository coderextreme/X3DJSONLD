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
    meta(content='FenceGate.x3d',name='title'),
    meta(content='Gate for outside fence',name='description'),
    meta(content='Baris AKTOP',name='creator'),
    meta(content='14 September 2002',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/FenceGate.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(
        children=[
        Shape(DEF='fence',
          geometry=Extrusion(creaseAngle=3.14,crossSection=[(-0.1,0.025),(-0.1,-0.025),(0.1,-0.025),(0.1,0.025),(-0.1,0.025)],scale=[(1,1),(1,1),(1,1),(0.85,0.85),(0.7,0.7),(0.55,0.55)],spine=[(0,0,0),(0,0.9,0),(0,0.925,0),(0,0.95,0),(0,0.975,0),(0,1,0)]),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.9,0)),
            texture=ImageTexture(DEF='wood',url=["wood.jpg","https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/wood.jpg"])))]),
      Transform(translation=(0.25,0,0),
        children=[
        Shape(USE='fence')]),
      Transform(translation=(0.5,0,0),
        children=[
        Shape(USE='fence')]),
      Transform(translation=(0.75,0,0),
        children=[
        Shape(USE='fence')]),
      Transform(translation=(1,0,0),
        children=[
        Shape(USE='fence')]),
      Transform(translation=(1.25,0,0),
        children=[
        Shape(USE='fence')]),
      Transform(translation=(1.5,0,0),
        children=[
        Shape(USE='fence')]),
      Transform(translation=(1.75,0,0),
        children=[
        Shape(USE='fence')]),
      Transform(translation=(2,0,0),
        children=[
        Shape(USE='fence')]),
      Transform(translation=(2.25,0,0),
        children=[
        Shape(USE='fence')]),
      Transform(translation=(2.5,0,0),
        children=[
        Shape(USE='fence')]),
      Transform(translation=(2.75,0,0),
        children=[
        Shape(USE='fence')]),
      Transform(translation=(3,0,0),
        children=[
        Shape(USE='fence')]),
      Transform(DEF='gate',center=(3.125,0,0),
        children=[
        Group(
          children=[
          Transform(translation=(3.25,0,0),
            children=[
            Shape(USE='fence')]),
          Transform(translation=(3.5,0,0),
            children=[
            Shape(USE='fence')]),
          Transform(translation=(3.75,0,0),
            children=[
            Shape(USE='fence')]),
          Transform(translation=(4,0,0),
            children=[
            Shape(USE='fence')]),
          Transform(translation=(4.25,0,0),
            children=[
            Shape(USE='fence')]),
          Transform(translation=(4.5,0,0),
            children=[
            Shape(USE='fence')]),
          Transform(translation=(3.875,0.8,0),
            children=[
            Shape(DEF='bar',
              geometry=Box(size=(1.3,0.1,0.1)),
              appearance=Appearance(
                texture=ImageTexture(USE='wood'),
                material=Material(diffuseColor=(1,0.9,0))))]),
          Transform(translation=(3.875,0.3,0),
            children=[
            Shape(USE='bar')])]),
        CylinderSensor(DEF='gatesensor',description='click and drag to rotate',maxAngle=2.5,minAngle=-2.5),
        ROUTE(fromField='rotation_changed',fromNode='gatesensor',toField='set_rotation',toNode='gate')]),
      Transform(translation=(4.75,0,0),
        children=[
        Shape(USE='fence')]),
      Transform(translation=(5,0,0),
        children=[
        Shape(USE='fence')]),
      Transform(translation=(5.25,0,0),
        children=[
        Shape(USE='fence')]),
      Transform(translation=(5.5,0,0),
        children=[
        Shape(USE='fence')]),
      Transform(translation=(5.75,0,0),
        children=[
        Shape(USE='fence')]),
      Transform(translation=(6,0,0),
        children=[
        Shape(USE='fence')]),
      Transform(translation=(6.25,0,0),
        children=[
        Shape(USE='fence')]),
      Transform(translation=(6.5,0,0),
        children=[
        Shape(USE='fence')]),
      Transform(translation=(6.75,0,0),
        children=[
        Shape(USE='fence')]),
      Transform(translation=(7,0,0),
        children=[
        Shape(USE='fence')]),
      Transform(translation=(7.25,0,0),
        children=[
        Shape(USE='fence')]),
      Transform(translation=(7.5,0,0),
        children=[
        Shape(USE='fence')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for FenceGate.py")
