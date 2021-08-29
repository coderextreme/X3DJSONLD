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
        texture=ImageTexture(url=['../../images/5/newport20-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.7692354927566,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[102,103,107,107,109,116,126,136,144,145,141,135,131,124,112,105,103,105,102,94,88,87,100,107,108,111,113,118,129,139,146,147,146,139,131,124,117,109,108,107,99,92,85,83,105,108,110,110,112,121,133,143,149,150,145,137,132,124,122,116,111,102,96,93,80,78,105,108,110,110,114,123,136,146,151,155,146,137,134,128,124,117,111,103,93,86,75,74,108,109,112,115,117,129,142,149,149,152,144,136,133,130,125,118,109,98,87,79,72,70,111,116,121,122,121,131,142,149,152,147,141,135,132,129,122,113,103,94,85,77,68,66,118,124,127,124,123,135,143,148,151,141,136,134,128,122,117,108,96,89,82,70,66,67,126,130,128,127,130,136,144,150,147,137,130,129,125,118,116,108,96,84,72,64,59,59,132,135,134,131,137,143,147,148,140,134,131,129,126,117,109,102,89,75,65,63,60,60,140,143,140,137,144,149,148,149,143,135,131,130,127,116,106,94,80,66,61,63,62,62,150,150,148,147,151,153,150,145,141,136,133,130,124,113,99,85,71,62,60,62,64,63,156,155,155,154,157,154,154,146,141,138,133,125,115,103,89,75,64,64,65,65,68,67,164,161,161,158,161,157,150,143,136,133,128,116,103,90,78,67,64,65,66,62,64,65,166,164,164,161,157,151,145,138,133,124,115,103,91,78,68,65,66,67,66,65,66,66,167,166,163,163,155,146,137,132,125,114,101,89,78,71,71,67,66,66,65,71,74,75,170,166,163,159,151,141,131,121,110,100,88,77,74,75,72,70,71,70,72,79,81,80,166,164,161,152,143,132,121,110,100,88,78,77,78,76,76,77,77,77,83,85,81,80,160,157,150,142,133,123,111,100,89,80,78,83,85,84,85,80,76,78,84,83,79,79,153,147,141,133,123,113,102,92,85,82,85,87,88,92,88,82,80,81,83,84,87,88,144,135,127,119,109,100,95,93,89,90,93,94,94,91,85,82,82,85,86,88,96,97,131,121,111,102,97,94,95,93,94,99,103,101,94,86,80,82,86,89,90,93,100,102,111,103,93,89,88,90,93,97,104,109,105,99,90,82,78,83,87,90,92,95,102,103,95,89,87,91,89,92,99,107,114,113,104,94,85,77,79,85,89,92,94,98,101,101,93,89,87,90,89,92,101,109,115,112,104,93,84,77,79,85,89,92,95,97,100,101],
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
