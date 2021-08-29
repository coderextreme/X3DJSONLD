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
        texture=ImageTexture(url=['../../images/5/newport18-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.68129407658296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[69,73,86,89,96,97,105,107,110,118,129,132,137,140,144,146,149,149,145,145,143,142,69,76,79,87,94,95,109,107,116,119,126,136,140,144,142,144,147,149,147,147,140,139,65,68,76,85,96,97,105,110,120,122,124,133,140,142,144,151,147,142,143,138,134,133,67,71,80,90,95,105,101,110,115,120,130,131,137,139,144,147,145,140,142,132,129,129,68,71,84,96,97,100,105,111,114,119,126,134,139,141,143,147,145,142,137,128,127,127,73,76,88,99,99,101,106,110,118,121,128,134,140,144,148,146,146,143,135,131,123,123,78,80,90,93,97,106,107,118,126,128,130,137,141,145,148,152,150,146,147,141,140,133,81,89,92,94,97,103,110,116,119,131,133,138,146,147,153,155,154,151,148,143,137,135,85,93,92,96,102,105,107,114,121,129,140,140,146,152,154,156,160,153,155,150,138,133,82,88,90,95,99,104,109,111,120,128,133,141,149,153,157,158,156,155,158,155,150,146,79,82,90,93,96,100,107,111,119,127,136,139,150,159,155,155,157,160,161,156,151,149,78,84,86,90,97,100,108,113,121,129,140,143,143,155,152,156,157,157,157,158,149,146,78,82,84,88,92,100,108,116,122,129,137,148,148,146,148,152,157,163,164,159,149,147,75,78,83,87,88,97,104,114,121,129,140,147,149,148,148,152,157,160,164,157,142,140,77,79,76,84,89,96,104,112,119,128,133,139,146,146,156,150,160,158,161,155,146,142,82,73,77,79,85,94,99,108,118,125,135,140,139,140,146,154,162,165,157,151,146,146,76,75,78,81,81,90,97,106,115,122,131,137,141,140,146,149,157,160,157,154,147,146,86,78,77,79,85,87,95,105,112,117,125,129,134,136,143,150,147,156,155,154,146,146,87,86,80,79,82,87,90,98,108,116,119,123,129,136,145,148,140,143,149,148,151,150,84,85,83,84,84,84,88,98,103,112,116,119,125,132,136,140,141,140,143,147,145,145,86,85,82,82,85,84,87,95,104,110,117,123,124,126,132,138,141,136,141,144,145,144,90,87,86,82,82,83,91,99,104,110,115,125,128,129,130,131,135,139,137,142,144,144,88,89,85,83,84,90,96,103,108,113,119,124,125,130,131,131,141,137,138,142,148,145,89,88,86,84,84,91,96,103,108,115,120,123,125,130,132,132,139,136,137,140,146,144],
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
