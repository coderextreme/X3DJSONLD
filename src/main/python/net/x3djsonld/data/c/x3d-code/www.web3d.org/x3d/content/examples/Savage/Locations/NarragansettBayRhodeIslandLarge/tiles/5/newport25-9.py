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
        texture=ImageTexture(url=['../../images/5/newport25-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.71825065109993,-71.59335266040932,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[123,117,109,108,106,105,102,106,111,113,114,112,110,108,103,98,95,98,100,101,103,103,127,123,120,117,114,110,107,110,114,115,113,111,110,109,105,102,98,98,103,106,104,105,132,128,125,120,118,112,111,113,115,113,112,112,110,109,106,104,99,100,104,105,106,106,138,132,132,129,118,114,113,114,112,112,111,112,109,106,105,104,100,100,102,103,101,101,141,138,137,136,130,121,116,111,108,107,109,110,110,108,105,105,102,99,99,99,100,100,146,145,140,132,128,125,119,115,111,105,103,105,107,108,106,103,100,94,97,96,95,95,150,146,138,131,126,120,117,115,108,102,99,100,100,101,100,100,95,90,94,93,92,91,150,145,136,128,121,117,114,113,110,101,96,96,98,97,98,98,96,92,91,91,90,90,146,142,133,123,116,112,109,106,107,105,100,96,95,96,98,96,95,91,85,88,90,89,141,136,129,121,114,110,106,104,103,102,99,96,95,99,99,96,88,85,82,89,91,92,140,133,125,121,117,114,106,105,104,101,96,94,98,102,99,94,86,84,81,85,88,89,138,133,126,129,122,114,107,108,105,100,94,92,101,105,101,96,86,81,81,80,81,82,137,133,125,126,121,112,109,109,103,96,93,91,96,98,96,93,86,84,83,84,80,80,135,129,126,119,113,108,107,106,100,96,94,92,90,93,91,87,88,88,83,83,80,79,134,130,121,118,113,109,106,105,100,96,94,93,91,90,92,91,92,88,85,85,84,83,122,121,120,116,112,108,106,103,100,97,96,93,90,90,92,96,90,87,86,86,85,85,113,113,116,115,109,107,106,102,100,97,99,97,90,88,88,90,89,86,85,79,74,73,106,110,112,111,108,104,99,98,98,98,95,94,93,89,84,82,83,83,80,76,72,72,101,105,108,104,100,98,96,95,95,94,92,94,95,91,86,80,81,77,78,75,74,73,99,99,101,99,96,95,94,92,92,89,92,97,96,87,86,82,75,74,79,76,70,69,100,97,94,95,95,94,91,89,87,85,88,96,90,88,81,78,75,69,72,68,64,64,99,96,94,92,92,94,92,88,86,84,82,82,84,84,79,75,79,75,67,63,60,60,100,98,95,92,90,90,89,88,87,85,82,81,81,81,82,77,72,73,68,66,61,61,99,97,94,91,90,90,89,88,87,86,82,80,81,81,81,77,71,71,68,66,62,62],
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
