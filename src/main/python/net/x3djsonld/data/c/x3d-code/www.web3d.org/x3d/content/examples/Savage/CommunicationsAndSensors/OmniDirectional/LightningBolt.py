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
    meta(content='LightningBolt.x3d',name='title'),
    meta(content='Mike Hunsberger',name='creator'),
    meta(content='14 June 2001',name='created'),
    meta(content='2 January 2002',name='modified'),
    meta(content='LightningBolt with Arrowhead as 3D communications icon.',name='description'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/OmniDirectional/LightningBolt.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Geodesic Hemisphere Order 4, radius 1m'),
    Viewpoint(description='Initial',position=(0,10,30)),
    Background(skyAngle=[.2],skyColor=[(1,1,1),(0.2,0.2,1)]),
    Group(
      children=[
      Transform(rotation=(0,0,1,1),
        children=[
        Shape(
          geometry=Extrusion(creaseAngle=3.14,crossSection=[(1,0),(.707,.707),(0,1),(-.707,.707),(-1,0),(-.707,-.707),(0,-1),(.707,-.707),(1,0)],scale=[(.75,.75),(1,1),(1.5,1.5),(1.5,1.5),(1.2,1.2),(1,1),(.75,.75)],solid=False,spine=[(0,0,0),(5,0,0),(10,0,0),(7,3,0),(8,3,0),(13,3,0),(18,3,0)]),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0)))),
        Transform(rotation=(0,0,1,-1.57),scale=(3,3,3),translation=(18,3,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,0,0))),
            geometry=Cone(),)])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for LightningBolt.py")
