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
        texture=ImageTexture(url=['../../images/5/newport27-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.5493819523225,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[112,113,114,115,119,129,131,135,138,140,143,138,135,136,141,140,143,140,141,136,134,132,116,118,117,125,125,132,134,134,140,143,144,144,139,141,143,143,142,139,134,131,124,124,121,123,127,128,135,133,137,143,141,144,141,143,143,146,144,140,139,135,136,131,125,124,129,130,133,136,140,142,141,145,146,141,140,141,148,146,142,142,135,137,130,127,118,116,137,138,138,142,144,144,145,147,143,144,141,143,144,143,141,136,138,132,124,122,121,121,140,141,141,144,144,145,145,144,144,145,143,144,144,136,137,134,134,129,124,119,108,107,147,145,145,144,149,145,144,144,143,143,141,146,137,131,131,128,124,126,119,112,108,108,152,151,147,150,144,145,144,145,141,138,138,132,133,138,130,126,124,118,118,113,110,110,151,153,150,147,147,150,149,144,142,142,139,135,128,126,126,122,118,115,113,117,120,121,151,151,149,147,149,149,151,145,149,140,138,133,131,130,124,122,123,119,122,119,122,122,153,149,150,155,147,148,143,146,146,144,141,136,134,130,126,124,122,121,125,129,123,124,152,153,151,150,157,156,150,141,139,139,139,138,136,132,126,127,121,126,130,133,134,133,153,151,152,151,157,147,146,144,146,140,141,137,134,128,129,123,123,127,136,136,137,136,154,152,149,152,151,146,144,147,142,136,134,134,131,130,124,124,124,128,134,137,139,140,151,151,151,147,145,145,143,142,137,136,135,128,129,125,123,125,125,130,134,136,137,138,154,153,151,144,142,141,139,137,136,131,129,129,124,122,118,120,132,133,132,139,140,141,152,149,146,146,140,140,139,134,130,127,125,126,125,125,127,124,129,134,134,135,133,133,151,148,145,143,144,137,135,133,131,132,131,125,125,124,123,128,132,135,138,137,139,138,151,149,147,144,139,136,139,133,133,133,129,129,126,127,131,134,133,134,140,141,140,140,152,150,148,141,140,135,135,139,138,137,133,134,132,134,139,137,138,143,142,143,143,143,151,153,145,141,137,138,134,139,137,134,137,133,142,143,142,143,143,142,145,141,140,139,154,146,144,139,138,137,137,139,136,137,138,140,140,143,141,144,144,146,141,138,138,139,147,145,141,142,140,139,140,134,140,140,138,141,140,140,142,146,144,141,136,131,131,131,147,145,141,142,141,140,142,134,141,140,137,143,139,139,141,147,144,139,135,131,132,132],
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
