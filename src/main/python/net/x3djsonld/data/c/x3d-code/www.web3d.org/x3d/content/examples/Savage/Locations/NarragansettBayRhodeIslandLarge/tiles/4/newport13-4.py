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
    GeoLOD(center=(41.76663080343592,-71.59335266040932,0.0),range=6150.5674,child1Url=['../../tiles/5/newport26-8.x3d'],child2Url=['../../tiles/5/newport26-9.x3d'],child3Url=['../../tiles/5/newport27-8.x3d'],child4Url=['../../tiles/5/newport27-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport13-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[114,125,128,118,120,125,132,147,149,143,136,129,118,110,101,92,103,98,85,81,80,79,117,124,126,123,128,128,126,135,145,138,134,124,110,106,97,93,90,91,89,84,80,77,118,123,128,125,128,122,117,121,123,122,115,117,109,105,99,98,89,92,88,84,77,77,112,120,127,129,121,112,106,112,106,104,103,108,100,96,97,93,94,82,78,78,72,69,115,114,115,112,110,109,106,103,103,101,99,95,95,90,86,92,91,78,71,71,62,64,116,113,108,116,112,109,108,105,103,103,99,93,90,88,87,80,80,80,70,67,61,59,108,111,107,115,117,116,110,106,103,97,97,93,89,85,79,75,69,73,69,65,58,58,96,95,115,123,129,120,116,109,106,100,107,102,94,85,80,73,70,66,65,60,58,58,98,90,106,120,129,128,121,109,109,110,114,110,104,93,87,81,73,68,59,60,60,66,119,110,94,99,113,119,119,112,113,113,121,120,107,97,79,87,80,64,60,61,73,81,137,134,120,99,93,100,105,110,111,116,126,121,106,93,81,69,64,61,63,71,72,72,152,141,128,113,97,85,98,97,99,118,126,114,93,82,76,66,69,70,70,74,74,73,157,157,139,119,104,89,86,85,89,118,115,96,85,84,80,71,68,78,79,78,74,74,159,156,163,148,121,103,86,86,86,89,88,88,86,86,85,86,78,83,82,79,75,76,159,161,164,149,138,119,96,86,86,86,86,86,86,86,86,86,86,87,86,78,73,71,154,146,141,141,131,122,109,94,86,86,86,86,86,86,86,86,86,86,86,87,86,87,155,135,123,127,118,119,108,92,86,86,86,86,86,86,86,86,86,86,86,91,95,94,142,133,115,109,111,118,114,98,86,86,86,86,86,86,87,90,86,86,86,86,92,89,127,121,106,86,112,118,101,86,86,86,86,86,86,86,90,96,88,93,86,86,86,86,105,116,107,86,90,91,104,86,86,86,86,86,88,86,88,100,101,100,95,93,91,93,86,104,87,86,86,86,86,86,86,86,86,110,109,104,106,107,103,96,94,103,101,97,86,106,86,86,86,86,86,86,86,86,86,111,111,104,107,109,104,94,93,104,102,98],
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
