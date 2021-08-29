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
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/5/newport19-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.573110194091946,-71.59335266040932,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[132,112,99,90,87,88,100,90,85,87,86,84,84,82,82,84,80,79,74,69,67,67,120,107,95,90,86,88,97,98,101,93,92,86,84,85,86,80,78,77,74,71,67,67,113,102,94,86,89,90,92,100,101,95,98,91,88,88,86,82,74,70,68,68,68,69,105,97,93,87,89,94,95,94,93,101,97,92,89,90,87,84,79,76,72,71,68,68,104,98,95,95,88,92,93,101,102,101,93,91,88,86,85,82,79,77,74,73,69,68,103,100,100,96,98,96,98,103,104,101,98,94,90,85,80,81,83,84,83,78,73,73,101,105,101,101,103,104,108,113,115,108,104,96,89,86,83,84,87,94,88,81,76,76,109,105,105,110,115,113,115,116,112,108,104,102,92,87,86,88,94,94,94,85,81,80,112,108,111,115,118,117,113,110,111,111,104,96,93,89,89,89,96,95,91,90,83,82,110,115,111,116,117,118,115,108,103,102,98,92,88,86,91,93,92,95,93,91,81,79,111,113,115,118,118,117,112,109,103,96,92,90,86,84,91,96,96,94,92,86,75,74,114,114,119,116,116,115,111,107,100,93,86,86,89,96,98,100,99,96,90,83,76,75,114,116,119,117,115,117,110,105,98,93,92,93,95,103,103,104,96,98,95,86,73,70,121,122,119,116,116,111,105,99,94,95,98,100,106,108,107,105,97,92,82,71,72,73,124,123,122,118,113,105,103,96,95,100,103,109,112,109,106,99,85,82,75,70,73,74,131,124,118,113,109,103,99,99,105,108,108,108,109,106,98,95,88,79,72,70,73,72,132,121,114,110,108,106,106,104,106,109,110,107,108,99,95,91,89,80,73,67,61,61,127,120,120,119,116,111,106,107,108,105,104,104,102,98,97,89,82,78,74,74,65,64,127,126,124,120,115,110,109,113,106,104,104,102,99,97,93,87,79,70,67,70,70,69,127,124,121,120,118,117,117,111,107,105,108,108,101,96,86,77,71,71,71,69,69,69,132,123,120,116,118,120,118,111,114,112,109,105,102,92,83,77,73,68,66,70,70,70,136,130,122,121,120,125,118,116,113,107,102,96,88,84,85,73,70,71,73,75,70,69,139,131,125,121,121,122,119,114,104,97,94,87,85,82,74,73,75,76,75,74,79,80,139,131,126,120,121,121,118,114,103,96,91,86,84,82,74,74,75,77,74,75,81,81],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
