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
    meta(content='Chair.x3d',name='title'),
    meta(content='Simple chair.',name='description'),
    meta(content='Baris AKTOP',name='creator'),
    meta(content='16 August 2002',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/Chair.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(DEF='chair',
      children=[
      Group(
        children=[
        Transform(rotation=(1,0,0,0.2),translation=(-0.5,0.5,-0.5),
          children=[
          Shape(DEF='chairLeg',
            geometry=Cylinder(height=1,radius=0.1),
            appearance=Appearance(DEF='chairapp',
              material=Material(diffuseColor=(0.8,0.5,0)),
              texture=ImageTexture(DEF='wood',url=["wood.jpg","https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/wood.jpg"])))]),
        Transform(rotation=(1,0,0,0.2),translation=(0.5,0.5,-0.5),
          children=[
          Shape(USE='chairLeg')]),
        Transform(rotation=(1,0,0,-0.2),translation=(-0.5,0.5,0.5),
          children=[
          Shape(USE='chairLeg')]),
        Transform(rotation=(1,0,0,-0.2),translation=(0.5,0.5,0.5),
          children=[
          Shape(USE='chairLeg')]),
        Transform(translation=(0,1,0),
          children=[
          Shape(
            geometry=Box(size=(1.2,0.1,1.2)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.5,0)),
              texture=ImageTexture(USE='wood')))]),
        Transform(rotation=(1,0,0,-0.4),translation=(-0.5,1.5,-0.7),
          children=[
          Shape(DEF='bar',
            geometry=Cylinder(height=1.1,radius=0.08),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.5,0)),
              texture=ImageTexture(USE='wood')))]),
        Transform(rotation=(1,0,0,-0.4),translation=(0.5,1.5,-0.7),
          children=[
          Shape(USE='bar')]),
        Transform(rotation=(1,0,0,1.17),scale=(2,1,1),translation=(0,2,-0.8),
          children=[
          Shape(
            geometry=Cylinder(height=0.05,radius=0.3),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.5,0)),
              texture=ImageTexture(USE='wood')))])])]),
    PlaneSensor(DEF='chairSensor',description='click and drag to move object',maxPosition=(2,0),minPosition=(-2,0)),
    ROUTE(fromField='translation_changed',fromNode='chairSensor',toField='set_translation',toNode='chair')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Chair.py")
