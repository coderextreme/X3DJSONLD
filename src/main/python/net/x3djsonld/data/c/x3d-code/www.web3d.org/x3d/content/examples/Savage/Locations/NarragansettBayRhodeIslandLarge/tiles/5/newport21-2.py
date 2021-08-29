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
        texture=ImageTexture(url=['../../images/5/newport21-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62149034642794,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[101,107,117,128,135,135,128,127,115,108,100,87,76,76,72,71,77,67,68,74,78,80,103,112,120,130,135,133,135,126,117,109,93,87,80,74,73,71,65,70,75,80,94,96,111,123,128,129,127,126,128,123,119,107,98,88,79,76,73,70,68,73,81,92,98,100,125,129,130,129,126,124,121,120,116,105,100,84,82,76,73,71,76,82,90,98,102,101,131,132,133,131,128,123,124,114,109,106,96,89,82,78,77,79,81,88,99,108,111,110,135,135,134,137,133,125,121,117,112,104,97,94,88,87,81,82,87,97,111,113,110,110,140,138,139,136,134,130,125,123,117,105,99,95,94,90,85,89,95,109,113,111,112,112,146,145,142,137,136,134,127,124,114,110,99,97,94,85,87,93,107,118,120,120,114,113,147,146,141,139,137,132,129,122,113,106,99,93,87,87,92,104,120,126,129,123,119,118,151,147,144,141,135,129,122,113,106,102,96,90,88,88,99,117,133,138,137,132,120,118,155,149,145,141,134,126,118,109,104,97,93,88,84,94,111,129,139,142,140,134,123,121,154,151,147,142,135,126,115,108,99,95,91,85,87,103,124,138,143,145,141,132,120,119,155,152,148,141,132,121,113,110,102,94,88,85,96,116,135,144,145,145,137,126,120,118,154,152,144,134,129,125,116,107,99,95,86,90,108,130,141,145,145,140,131,120,107,105,153,148,141,133,124,119,110,103,99,94,95,105,122,137,141,142,139,130,120,108,97,95,148,141,135,129,124,114,106,98,91,90,99,117,130,137,137,135,130,122,114,103,95,94,146,140,134,127,117,108,101,95,93,98,110,122,130,133,132,130,125,120,113,107,98,97,142,136,131,119,110,107,105,103,106,108,115,121,128,131,130,130,125,125,116,110,102,101,141,136,124,116,113,111,116,117,120,121,121,126,131,128,128,129,130,131,125,119,109,107,139,128,124,120,122,122,127,132,135,133,128,131,132,129,129,131,133,132,130,127,118,117,133,128,127,131,130,131,135,141,145,145,142,131,130,130,132,131,136,135,134,133,127,124,129,129,128,131,133,139,145,151,154,151,152,141,131,129,131,132,137,136,140,136,130,128,128,128,131,132,137,144,153,160,161,160,157,150,136,129,131,134,135,138,143,140,131,130,127,128,131,132,138,145,154,160,162,161,157,152,138,131,131,135,136,139,143,140,130,129],
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
