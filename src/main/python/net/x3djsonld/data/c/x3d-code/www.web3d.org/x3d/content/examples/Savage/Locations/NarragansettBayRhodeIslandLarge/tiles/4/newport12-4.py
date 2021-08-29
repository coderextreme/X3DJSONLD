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
    GeoLOD(center=(41.71825065109993,-71.59335266040932,0.0),range=6150.5674,child1Url=['../../tiles/5/newport24-8.x3d'],child2Url=['../../tiles/5/newport24-9.x3d'],child3Url=['../../tiles/5/newport25-8.x3d'],child4Url=['../../tiles/5/newport25-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport12-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[84,87,82,78,75,75,77,78,78,78,79,90,87,75,74,74,75,79,78,75,72,72,89,88,79,76,75,75,75,75,75,77,88,95,88,79,75,75,73,73,74,72,72,72,95,80,77,75,75,75,75,75,75,80,90,89,87,79,75,73,73,73,72,75,81,82,87,78,76,76,75,75,76,75,77,84,88,87,84,77,72,73,73,72,73,73,74,75,78,76,75,75,75,75,76,78,90,90,89,89,87,76,74,74,73,72,72,79,76,73,78,75,75,75,75,76,79,92,93,94,94,95,78,76,75,75,75,75,73,72,72,73,76,75,78,75,75,76,94,95,93,93,88,76,74,72,73,73,74,75,74,72,72,72,76,76,79,75,75,79,85,88,85,77,72,72,72,72,72,72,72,76,72,72,76,78,75,75,75,75,75,75,75,75,75,75,75,72,75,77,73,72,74,72,75,78,80,78,76,75,76,75,75,76,78,78,76,75,75,74,76,77,74,74,74,74,80,89,88,87,75,75,78,79,76,75,77,78,78,75,76,77,75,77,74,74,76,76,83,98,90,90,78,79,79,78,78,78,78,83,79,84,79,78,78,76,75,75,76,80,85,98,99,97,84,83,81,78,79,86,90,93,106,97,82,79,78,78,80,84,89,83,87,99,108,110,83,84,79,84,84,90,104,110,118,103,97,87,82,82,86,93,98,93,88,98,105,106,79,84,86,97,95,96,107,123,121,113,112,99,94,95,101,107,108,100,93,96,106,108,86,83,94,106,109,110,121,131,127,123,123,112,108,106,113,113,109,101,97,103,104,107,99,91,96,120,118,115,129,136,138,138,132,126,115,113,113,112,108,105,99,105,103,102,104,100,101,118,123,126,133,143,148,148,144,137,128,116,107,106,109,104,99,96,97,96,114,115,110,113,123,122,140,151,158,154,148,132,120,114,106,96,99,99,96,93,90,90,116,122,119,114,118,120,140,155,155,150,139,125,112,105,102,97,97,97,85,86,92,91,114,123,128,118,119,125,132,148,150,144,136,130,118,110,102,92,104,98,84,80,81,80,114,125,128,118,120,125,132,147,149,143,136,129,118,110,101,92,103,98,85,81,80,79],
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
