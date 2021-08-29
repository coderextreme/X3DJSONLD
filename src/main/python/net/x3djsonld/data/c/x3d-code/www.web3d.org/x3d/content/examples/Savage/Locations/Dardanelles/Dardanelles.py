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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    component(level=1,name='Geospatial'),
    meta(content='Dardanelles.x3d',name='title'),
    meta(content='Terrain model of Dardanelles, Turkey',name='description'),
    meta(content='Murat Ozdogan',name='creator'),
    meta(content='23 October 2007',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/Dardanelles.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      PointLight(location=(10000000000,0,0),radius=100000000000000),
      PointLight(location=(-10000000000,0,0),radius=100000000000000),
      PointLight(location=(0,10000000000,0),radius=100000000000000),
      PointLight(location=(0,-10000000000,0),radius=100000000000000),
      PointLight(location=(0,0,10000000000),radius=100000000000000),
      PointLight(location=(0,0,-10000000000),radius=100000000000000),
      GeoViewpoint(description='Default Viewpoint',orientation=(-1,0,0,1.57),position=(40.16643453115464,26.49987728550963,189236.70777323423),
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(40.16643453115464,26.49987728550963,0))),
      Inline(url=["tiles/0/dardanel0-0.x3d","https://savage.nps.edu/Savage/Locations/Dardanelles/tiles/0/dardanel0-0.x3d","tiles/0/dardanel0-0.wrl","https://savage.nps.edu/Savage/Locations/Dardanelles/tiles/0/dardanel0-0.wrl"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Dardanelles.py")
