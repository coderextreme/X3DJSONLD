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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_3_56',geoSystem=['GDC'],position=(41.22625451557576,29.401860686199143,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.22625451557576,29.401860686199143,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus10-12.x3d'],child2Url=['../../tiles/4/bosphorus10-13.x3d'],child3Url=['../../tiles/4/bosphorus11-12.x3d'],child4Url=['../../tiles/4/bosphorus11-13.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus5-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.171586403296146,29.327679094953055,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[146,106,96,131,71,96,124,117,119,125,103,100,120,107,102,133,133,118,127,119,137,117,115,136,143,70,56,124,129,92,109,117,136,86,133,87,98,134,117,102,105,117,117,133,133,115,116,69,100,122,80,113,117,108,134,80,107,131,77,110,97,107,59,76,111,112,79,127,103,93,70,78,79,83,99,125,90,106,72,122,69,87,79,94,44,100,94,90,114,83,98,31,64,102,109,58,68,117,80,111,93,110,116,80,62,110,105,28,110,111,106,71,97,68,54,80,94,81,88,81,103,93,57,72,104,33,105,70,94,82,67,88,104,59,37,61,42,54,83,77,44,79,99,43,78,76,86,64,45,50,82,34,7,9,115,106,104,16,94,93,96,92,62,94,99,77,75,62,82,75,20,13,13,21,8,5,75,105,80,18,71,51,57,68,62,31,56,47,14,9,16,33,27,16,4,1,2,0,102,88,109,39,61,38,54,66,60,41,26,53,25,7,3,4,2,2,2,0,2,0,76,45,88,59,62,23,56,61,65,56,14,33,9,2,0,0,3,0,0,1,-1,0,73,68,58,33,7,5,2,22,62,35,-2,0,1,2,0,0,0,1,0,2,1,1,4,4,2,2,0,0,2,0,6,0,0,0,0,1,0,0,0,0,0,1,0,1,1,4,0,1,-2,0,0,0,0,0,0,0,0,-1,0,0,0,0,1,2,1,1,2,1,2,1,0,0,2,0,0,0,2,0,1,0,0,0,0,0,2,1,1,1,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,2,0,0,1,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,1,1,0,0,1,0,0,0,0,0,1,0,1,0,1,0,0,1,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,1,0,2,0,0,1,1,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,2,0,0,1,2,0,2,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,2,1,3,1,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,2,1,2,1],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
