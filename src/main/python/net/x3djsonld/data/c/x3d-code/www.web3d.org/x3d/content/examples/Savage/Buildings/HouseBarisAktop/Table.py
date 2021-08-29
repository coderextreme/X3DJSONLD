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
    meta(content='Table.x3d',name='title'),
    meta(content='Table for kitchen.',name='description'),
    meta(content='Baris Aktop',name='creator'),
    meta(content='15 august 2002',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/Table.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(DEF='table',
      children=[
      Group(
        children=[
        Transform(translation=(0,0.75,0),
          children=[
          Shape(
            geometry=Cylinder(height=1.5,radius=0.15),
            appearance=Appearance(DEF='tableApp',
              material=Material(diffuseColor=(0.8,0.5,0)),
              texture=ImageTexture(DEF='wood',url=["wood.jpg","https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/wood.jpg"])))]),
        Transform(rotation=(0,0,1,1.57),
          children=[
          Shape(DEF='leg',
            geometry=Cylinder(height=1.5,radius=0.1),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.5,0)),
              texture=ImageTexture(USE='wood')))]),
        Transform(rotation=(1,0,0,1.57),
          children=[
          Shape(
            geometry=Cylinder(height=1.5,radius=0.1),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.5,0)),
              texture=ImageTexture(USE='wood')))]),
        Transform(translation=(0,1.5,0),
          children=[
          Shape(
            geometry=Cylinder(height=0.1,radius=1.2),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.5,0)),
              texture=ImageTexture(USE='wood'))),
          Transform(translation=(0.7,0.06,0),
            children=[
            Inline(DEF='dish',url=["Dish.x3d","https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/Dish.x3d","Dish.wrl","https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/Dish.wrl"])]),
          Transform(translation=(-0.7,0.06,0),
            children=[
            Inline(USE='dish')])])])]),
    PlaneSensor(DEF='tableSensor',maxPosition=(3,0),minPosition=(-2,0)),
    ROUTE(fromField='translation_changed',fromNode='tableSensor',toField='set_translation',toNode='table')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Table.py")
