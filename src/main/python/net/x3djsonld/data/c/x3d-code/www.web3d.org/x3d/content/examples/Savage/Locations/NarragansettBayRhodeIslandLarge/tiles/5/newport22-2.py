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
        texture=ImageTexture(url=['../../images/5/newport22-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[127,128,131,132,138,145,154,160,162,161,157,152,138,131,131,135,136,139,143,140,130,129,130,129,132,136,141,149,154,161,158,162,157,159,148,148,138,137,139,142,138,137,131,130,129,131,132,136,143,149,158,160,160,161,155,158,160,154,146,144,139,142,139,137,135,134,132,134,133,137,142,149,154,153,155,157,157,158,161,154,153,154,151,152,151,146,138,137,133,137,135,136,142,149,148,148,150,151,156,157,160,159,163,164,165,160,157,152,141,139,137,138,137,136,142,143,145,145,145,149,154,158,161,166,167,168,165,161,156,153,147,145,141,140,143,144,141,143,140,139,142,146,155,159,164,168,167,166,162,158,155,151,146,145,146,145,147,146,145,145,139,138,141,146,152,159,166,168,166,162,156,154,147,146,144,144,152,145,145,146,151,150,145,144,148,149,154,159,164,162,159,154,153,150,147,144,142,142,156,149,146,154,153,146,149,147,146,149,156,161,161,159,155,153,151,148,146,143,141,141,153,155,154,153,148,147,146,148,147,152,160,160,159,158,155,152,151,147,144,145,143,142,148,155,157,147,144,141,142,145,148,152,156,158,157,158,156,154,150,149,146,144,141,141,144,148,148,141,138,139,143,144,146,149,152,156,157,158,155,150,149,146,146,144,143,142,140,141,139,136,138,137,139,143,144,145,149,154,155,156,152,152,150,148,146,142,140,140,136,137,136,135,136,137,136,139,140,142,146,147,152,153,152,148,145,145,144,139,141,140,140,135,132,137,137,139,142,143,145,146,146,145,147,149,149,144,141,144,143,140,138,139,135,130,131,130,132,136,140,144,147,146,141,138,139,138,139,138,139,138,138,135,131,131,131,124,125,130,130,133,137,137,138,137,136,136,137,136,137,134,131,133,129,128,131,131,124,124,124,124,126,134,135,136,135,135,134,135,135,134,134,133,131,127,130,132,131,131,126,129,133,133,129,126,130,132,133,139,136,135,133,132,130,132,132,131,132,131,131,131,130,131,129,131,132,130,133,136,137,140,141,140,136,131,131,131,133,133,131,131,131,131,133,133,130,130,137,134,135,137,141,137,140,141,140,141,134,135,135,131,132,136,134,133,125,131,130,132,138,142,137,137,137,140,140,143,141,141,138,137,140,138,136,137,132,132,125,131,131,134,137,140,138,138,138,141,140,142,141,141,138,138,140,139,137,138,132,132],
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
