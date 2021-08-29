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
        texture=ImageTexture(url=['../../images/5/newport19-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.573110194091946,-71.7692354927566,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[107,105,106,105,105,107,110,109,106,102,97,95,94,91,86,80,79,75,74,75,74,73,107,104,104,104,108,108,111,111,108,106,103,99,96,92,85,79,78,75,74,72,69,69,112,108,107,106,112,113,114,113,111,111,106,97,93,89,85,80,76,72,74,73,71,70,115,113,111,110,113,114,115,113,113,108,105,99,92,86,83,79,75,72,68,66,71,72,118,115,115,115,114,112,113,116,112,106,103,97,92,88,83,77,73,70,68,66,64,65,118,116,120,122,120,116,111,109,105,102,98,97,91,88,83,80,74,70,67,64,64,65,120,119,119,120,121,118,111,104,102,99,94,92,90,86,82,81,76,70,69,67,67,65,122,123,121,120,118,114,110,103,99,98,94,91,88,82,79,78,75,72,71,70,68,67,120,118,118,116,114,114,109,104,98,93,91,86,83,81,83,79,75,76,77,80,78,78,121,120,121,117,111,107,105,102,96,92,88,84,82,82,79,78,78,80,82,79,80,80,125,123,119,116,111,107,103,100,96,90,86,85,85,83,78,75,77,80,84,82,83,83,126,124,121,116,111,106,101,96,91,88,88,86,85,85,80,77,75,77,78,84,85,87,125,124,119,113,106,102,97,91,90,89,90,87,85,79,77,78,76,74,75,82,89,91,128,122,116,108,105,99,95,91,90,89,89,88,84,79,79,79,77,74,75,82,93,95,126,120,114,108,102,97,93,92,91,92,92,91,85,84,84,80,79,78,77,86,94,96,127,119,110,105,101,95,93,93,95,98,100,95,91,87,85,81,79,81,82,86,102,104,128,119,110,104,96,89,92,96,104,107,106,104,102,96,88,81,80,82,84,94,111,113,122,117,111,103,92,93,97,103,112,117,115,115,113,103,90,84,86,85,90,98,114,116,119,113,107,99,94,96,101,112,121,126,127,125,119,107,97,91,88,87,95,107,114,115,117,108,103,96,96,101,110,121,129,131,133,130,123,113,104,96,90,90,102,109,106,106,113,105,98,100,102,107,117,126,134,134,133,134,125,114,105,100,93,95,103,109,103,103,108,103,102,103,105,113,122,133,139,141,138,133,129,120,110,102,96,98,106,102,95,93,103,103,107,107,108,116,125,135,143,144,139,134,132,124,111,104,102,104,103,96,89,88,102,103,107,107,109,116,126,136,144,145,141,135,131,124,112,105,103,105,102,94,88,87],
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
