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

newModel=X3D(profile='Interactive',version='3.0',
  head=head(
    children=[
    meta(content='Cover.x3d',name='title'),
    meta(content='Wooden cover for kitchen storage lockers.',name='description'),
    meta(content='Baris Aktop',name='creator'),
    meta(content='9 September 2002',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/Cover.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(DEF='cover1',center=(0.35,0,0),translation=(0.35,0.4,0),
        children=[
        Shape(
          appearance=Appearance(
            texture=ImageTexture(DEF='wood',url=["wood.jpg","https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/wood.jpg"]),
            material=Material(diffuseColor=(0.8,0.6,0))),
          geometry=Box(size=(0.695,0.8,0.03))),
        Transform(translation=(-0.3,0.3,0.04),
          children=[
          Shape(
            geometry=Sphere(radius=0.03),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.6,0)),
              texture=ImageTexture(USE='wood'))),
          CylinderSensor(DEF='coveropen',description='click and drag to rotate',maxAngle=1.57),
          ROUTE(fromField='rotation_changed',fromNode='coveropen',toField='set_rotation',toNode='cover1')])]),
      Transform(DEF='cover2',center=(-0.35,0,0),translation=(-0.35,0.4,0),
        children=[
        Shape(
          appearance=Appearance(
            texture=ImageTexture(USE='wood'),
            material=Material(diffuseColor=(0.8,0.6,0))),
          geometry=Box(size=(0.695,0.8,0.03))),
        Transform(translation=(0.3,0.3,0.04),
          children=[
          Shape(
            geometry=Sphere(radius=0.03),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.6,0)),
              texture=ImageTexture(USE='wood'))),
          CylinderSensor(DEF='coveropen2',description='click and drag to rotate',maxAngle=0,minAngle=-1.57),
          ROUTE(fromField='rotation_changed',fromNode='coveropen2',toField='set_rotation',toNode='cover2')])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Cover.py")
