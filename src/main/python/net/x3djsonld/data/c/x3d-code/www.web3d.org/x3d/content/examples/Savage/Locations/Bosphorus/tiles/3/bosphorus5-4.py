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
    GeoViewpoint(description='GeoViewpoint_3_54',geoSystem=['GDC'],position=(41.22625451557576,29.10513432121479,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.22625451557576,29.10513432121479,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus10-8.x3d'],child2Url=['../../tiles/4/bosphorus10-9.x3d'],child3Url=['../../tiles/4/bosphorus11-8.x3d'],child4Url=['../../tiles/4/bosphorus11-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus5-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.171586403296146,29.030952729968703,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[4,5,3,-3,-2,1,0,71,70,25,123,120,53,108,115,149,142,166,124,161,127,107,41,24,2,0,0,1,8,39,116,52,119,109,104,138,156,114,192,188,185,138,101,109,99,105,71,7,1,0,1,71,121,136,76,97,145,131,170,195,206,164,159,132,103,93,202,204,174,71,11,0,0,1,42,189,165,144,175,181,204,157,153,146,125,169,123,81,126,106,80,40,46,91,8,0,1,57,143,199,202,195,153,181,145,145,87,145,149,128,138,193,155,74,109,64,27,-2,1,36,93,91,65,75,103,129,148,105,68,95,149,157,202,167,201,108,91,124,68,4,0,0,-1,-3,54,43,110,103,136,149,140,88,119,132,201,221,157,169,204,74,163,79,1,1,-2,0,-6,98,129,85,127,70,110,85,111,86,140,177,143,123,187,182,207,129,47,1,1,1,4,113,94,42,102,106,72,47,92,88,93,166,114,96,125,189,173,181,161,3,0,-2,3,28,57,70,72,102,80,43,96,80,77,92,128,72,163,145,174,131,142,105,38,0,0,1,6,72,52,68,17,67,91,82,55,87,147,106,110,163,160,101,142,117,94,31,5,-1,-3,8,10,57,14,63,88,89,66,56,93,103,122,136,89,118,118,78,65,2,-3,-1,1,0,2,55,20,42,68,77,49,31,79,116,67,89,96,95,68,79,83,9,3,4,4,0,1,0,0,64,1,7,70,36,45,107,94,90,94,65,83,68,42,62,-3,2,3,2,1,0,0,3,4,1,100,39,53,84,70,24,65,46,74,20,45,42,4,3,7,0,0,0,2,0,3,0,62,44,18,66,84,32,63,47,58,40,41,8,-1,0,3,3,2,0,0,0,2,0,35,23,18,87,54,72,45,56,38,23,2,1,0,-4,1,-1,3,0,1,1,0,0,0,32,11,56,52,35,6,15,0,1,2,0,4,2,0,1,0,0,4,1,0,0,0,0,5,38,22,2,2,2,5,0,3,1,0,0,4,0,0,0,1,3,0,3,1,0,1,1,-3,0,0,0,0,3,0,1,0,0,2,0,1,0,0,0,1,2,2,0,1,1,-1,0,0,2,0,0,0,0,0,1,1,0,1,1,0,0,0,1],
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
