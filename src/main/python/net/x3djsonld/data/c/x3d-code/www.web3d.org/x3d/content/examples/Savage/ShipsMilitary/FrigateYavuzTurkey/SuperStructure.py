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
    meta(content='SuperStructure.x3d',name='title'),
    meta(content='Superstructure of Yavuz class frigate',name='description'),
    meta(content='Ozan APAYDIN',name='creator'),
    meta(content='1 September 2001',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='S34-copy.jpg',name='photo'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/SuperStructure.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(position=(0,0,50)),
    Transform(translation=(-27.0,0.0,0.0),
      children=[
      Shape(DEF='FirstDeck',
        geometry=Box(size=(20,4,22)),
        appearance=Appearance(DEF='HullBlue',
          material=Material(diffuseColor=(.62,.639,.812))))]),
    Transform(translation=(27.0,0.0,0.0),
      children=[
      Shape(USE='FirstDeck')]),
    Transform(rotation=(0,1,0,-1.57),scale=(1.3,1.3,1.3),translation=(-17,0,0),
      children=[
      Inline(url=["Bridge.wrl","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/Bridge.wrl","Bridge.x3d","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/Bridge.x3d"])]),
    #  Center Deck 
    Transform(translation=(0.0,1.5,0.0),
      children=[
      Shape(
        geometry=Box(size=(43,7,14)),
        appearance=Appearance(USE='HullBlue'))]),
    #  Dom Nest & Dom 
    Transform(translation=(-12.3,7.0,0.0),
      children=[
      Shape(
        geometry=Box(size=(9,4.5,14)),
        appearance=Appearance(USE='HullBlue')),
      Transform(translation=(0,2.25,0),
        children=[
        Shape(
          geometry=Extrusion(convex=False,crossSection=[(-4.5,7.0),(4.5,7.0),(4.5,-7.0),(-4.5,-7.0),(-4.5,7.0)],scale=[(1,1),(0.7,0.7)],spine=[(0,0,0),(0,3,0)]),
          appearance=Appearance(USE='HullBlue'))]),
      Transform(scale=(1.0,1.1,1.0),translation=(-1.5,7.5,0),
        children=[
        Shape(
          geometry=Sphere(radius=2.2),
          appearance=Appearance(
            material=Material(diffuseColor=(1.0,1.0,1.0),shininess=0.7)))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SuperStructure.py")
