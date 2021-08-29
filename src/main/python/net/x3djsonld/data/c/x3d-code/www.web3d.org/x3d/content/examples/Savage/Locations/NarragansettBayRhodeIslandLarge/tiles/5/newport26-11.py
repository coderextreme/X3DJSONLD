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
        texture=ImageTexture(url=['../../images/5/newport26-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.5493819523225,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[51,55,58,66,70,72,74,74,74,72,70,66,63,70,72,77,81,89,91,94,95,95,54,61,65,71,74,76,77,78,79,79,79,71,68,74,78,82,87,95,96,97,97,97,61,67,70,76,77,79,79,79,81,83,83,76,78,85,87,88,94,99,101,101,99,99,64,72,77,79,80,81,81,81,82,85,89,87,92,96,98,97,100,103,104,103,101,100,70,78,81,82,82,83,81,82,85,89,93,97,103,104,105,105,105,106,105,103,101,101,76,83,85,85,85,83,83,85,88,92,97,105,107,109,110,109,109,109,108,105,102,101,83,88,88,87,85,85,85,87,92,99,106,111,113,113,113,113,112,110,108,105,102,102,88,91,90,86,85,85,86,91,95,105,112,115,117,116,115,115,114,112,108,106,104,104,93,94,90,87,85,86,88,92,100,111,116,119,120,119,119,119,117,112,109,108,107,107,96,96,90,88,91,89,90,95,105,116,120,122,122,122,121,120,117,114,112,111,110,109,99,94,91,93,92,91,91,101,112,118,121,122,123,124,124,121,118,115,115,114,112,111,101,95,95,95,95,93,99,108,114,120,122,123,124,127,126,123,119,118,117,115,113,113,104,97,96,96,95,98,106,113,119,121,123,125,127,128,126,123,121,121,118,117,116,116,106,97,95,97,99,105,113,118,122,123,124,128,129,128,125,123,124,121,120,118,120,120,93,93,96,96,106,115,120,126,125,125,128,129,128,127,125,123,124,124,120,122,122,122,100,95,96,97,106,116,125,128,129,124,126,131,127,127,126,125,124,126,123,123,121,120,104,96,97,100,113,118,122,128,125,131,129,129,132,128,129,126,123,123,122,121,121,121,106,98,98,103,113,117,120,126,129,129,134,134,135,129,124,126,126,126,128,126,128,128,106,100,106,107,114,114,121,130,130,133,135,137,137,130,129,125,125,127,131,131,128,128,109,105,106,108,107,114,120,125,131,133,135,136,136,136,131,129,131,132,134,130,131,130,107,105,106,108,110,115,126,131,131,137,137,134,130,132,133,136,138,134,136,137,132,130,106,108,109,110,113,121,128,132,138,137,135,135,135,132,137,139,137,139,139,136,131,130,111,112,115,114,117,127,130,135,137,140,142,135,136,135,142,140,142,140,140,136,135,134,112,113,114,115,119,129,131,135,138,140,143,138,135,136,141,140,143,140,141,136,134,132],
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
