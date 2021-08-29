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
    GeoLOD(center=(41.79082087960392,-71.5273965982791,0.0),range=24602.27,child1Url=['../../tiles/3/newport6-2.x3d'],child2Url=['../../tiles/3/newport6-3.x3d'],child3Url=['../../tiles/3/newport7-2.x3d'],child4Url=['../../tiles/3/newport7-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/newport3-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.008375373,zDimension=22,zSpacing=0.009215267,height=[78,75,90,83,73,73,68,66,93,48,50,64,65,63,68,44,45,49,26,1,0,1,75,75,75,76,74,78,87,83,63,69,50,46,41,41,35,35,37,21,7,1,17,15,84,79,105,78,91,109,110,81,73,63,65,37,76,63,60,69,39,21,4,27,22,20,96,117,137,114,106,101,94,83,71,76,43,18,18,19,31,40,41,21,28,18,23,23,116,121,148,113,101,78,87,68,65,33,44,64,77,72,30,5,18,14,16,8,24,22,115,109,103,95,84,63,76,49,54,54,91,87,79,55,33,25,25,33,31,13,22,26,101,124,112,102,79,69,80,79,85,117,104,85,86,79,46,11,30,50,37,25,17,20,161,109,88,85,70,79,82,102,116,131,123,93,90,69,51,17,23,52,34,10,8,6,150,123,86,86,86,90,150,124,138,146,119,98,102,80,64,26,14,48,38,22,14,16,86,86,86,115,108,100,148,159,153,133,133,117,112,77,80,84,27,35,33,11,15,17,86,107,86,126,137,120,105,152,136,145,135,119,101,87,68,52,45,24,24,21,20,20,126,100,86,125,130,103,127,139,148,129,121,107,86,107,59,61,42,27,18,21,12,19,139,104,86,100,111,113,145,155,142,126,99,105,101,78,56,32,39,23,25,50,18,22,146,103,86,90,110,122,137,139,118,110,111,94,88,86,36,38,51,65,20,26,21,17,146,105,94,86,120,115,122,168,146,120,98,97,81,42,42,66,59,27,27,11,10,7,115,114,107,103,122,145,130,115,108,120,117,73,52,66,62,63,32,29,48,41,27,25,102,87,90,97,94,92,109,132,126,105,93,80,81,90,58,48,23,31,52,35,25,32,106,118,107,117,111,92,144,120,92,93,88,99,87,77,48,35,37,40,68,34,45,49,115,114,124,116,108,115,103,82,87,121,94,99,80,93,70,33,42,57,76,57,37,25,99,127,134,126,99,103,116,90,102,72,100,91,77,58,35,69,84,73,60,46,57,63,129,152,124,108,99,99,90,86,81,69,107,84,70,49,78,97,101,67,68,70,58,65,132,152,123,109,99,99,92,86,81,68,107,86,69,48,80,97,100,68,68,70,57,64],
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
