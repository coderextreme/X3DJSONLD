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
    meta(content='Baltimore.x3d',name='title'),
    meta(content='Terrain model of Baltimore Maryland',name='description'),
    meta(content='Brian Boone',name='creator'),
    meta(content='9 July 2007',name='created'),
    meta(content='6 October 2007',name='modified'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='https://savage.nps.edu/Savage/Locations/BaltimoreMaryland/Baltimore.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(translation=(-1723.5834,1643.1363636363637,14177.167),
      children=[
      Transform(
        children=[
        Viewpoint(DEF='Vp1',description='Viewpoint 1',orientation=(0,1,0,-0.795))])]),
    Transform(translation=(-1723.583375068847,1643.1363636363637,-2577.6667),
      children=[
      Transform(
        children=[
        Viewpoint(DEF='Vp2',description='Viewpoint 2',orientation=(0,1,0,-2.356))])]),
    Transform(translation=(19359.535,1643.1363636363637,-2577.6667),
      children=[
      Transform(
        children=[
        Viewpoint(DEF='Vp3',description='Viewpoint 3',orientation=(0,1,0,2.356))])]),
    Transform(translation=(19359.535,1643.1363636363637,15466.0),
      children=[
      Transform(
        children=[
        Viewpoint(DEF='Vp4',description='Viewpoint 4',orientation=(0,1,0,0.795))])]),
    Viewpoint(DEF='Vp5',description='Viewpoint 5',orientation=(-1,0,0,1.54),position=(5314.382,3012.4167,9021.834)),
    Viewpoint(DEF='Vp6',description='Viewpoint 6',orientation=(-1,0,0,1.64),position=(3159.9028,3012.4167,3866.5)),
    Viewpoint(DEF='Vp7',description='Viewpoint 7',orientation=(-1,0,0,1.54),position=(13932.299,3012.4167,5155.3335)),
    Viewpoint(DEF='Vp8',description='Viewpoint 8',orientation=(-1,0,0,1.54),position=(15081.3545,3012.4167,8377.417)),
    NavigationInfo(DEF='FlyNav',speed=100,type=["FLY","EXAMINE","ANY"],visibilityLimit=188276.04),
    NavigationInfo(DEF='WalkNav',speed=100,type=["WALK","EXAMINE","ANY"],visibilityLimit=188276.04),
    DirectionalLight(ambientIntensity=0.3,direction=(0.1,-1,-0.1),intensity=0.3),
    Collision(
      children=[
      Inline(url=["tiles/0/Harbor0-0.x3d","https://savage.nps.edu/Savage/Locations/BaltimoreMaryland/tiles/0/Harbor0-0.x3d"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Baltimore.py")
