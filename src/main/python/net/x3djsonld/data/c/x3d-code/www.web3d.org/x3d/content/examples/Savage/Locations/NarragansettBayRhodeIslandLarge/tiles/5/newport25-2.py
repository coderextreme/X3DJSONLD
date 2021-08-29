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
        texture=ImageTexture(url=['../../images/5/newport25-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.71825065109993,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[152,150,151,151,153,153,154,155,155,151,146,143,143,143,142,144,140,140,150,155,161,162,149,150,151,151,150,153,152,152,149,145,144,147,144,143,143,146,140,140,146,156,165,166,149,151,152,155,156,155,153,151,147,146,146,144,146,144,144,146,140,140,146,162,166,166,153,154,155,153,153,155,153,153,150,149,149,150,149,145,141,146,140,140,151,154,164,167,158,159,159,156,155,155,153,151,154,151,149,146,146,147,148,142,140,140,147,156,163,165,163,164,164,163,157,154,155,153,153,152,149,150,146,144,150,144,140,141,150,157,168,169,166,167,167,167,164,159,155,155,155,153,150,151,154,147,145,149,139,141,148,157,166,167,165,166,166,168,169,164,164,160,157,155,159,156,153,148,147,148,146,145,149,153,161,162,162,164,166,170,168,170,167,164,161,161,158,159,158,159,154,154,152,147,148,154,161,163,163,166,164,164,165,168,166,164,164,166,161,160,158,164,163,159,154,148,147,151,159,161,160,165,165,166,162,160,162,163,163,164,164,161,163,166,164,159,154,149,148,152,159,161,157,159,163,163,162,160,161,162,162,165,163,162,164,162,160,152,151,148,146,151,158,159,153,157,161,160,161,160,160,160,161,160,166,165,168,164,156,151,151,150,148,152,156,159,153,155,159,157,158,156,159,160,162,162,170,167,162,163,156,159,162,158,153,149,153,153,150,152,153,156,155,159,159,161,161,167,169,167,161,160,160,159,164,158,152,153,154,155,146,147,152,156,158,159,160,161,162,165,164,164,160,154,159,158,161,160,158,154,158,158,142,144,146,152,157,159,161,161,159,158,157,159,156,153,158,159,155,157,155,156,156,156,138,140,143,145,154,156,157,156,156,154,149,147,147,150,153,154,153,155,156,155,152,152,136,137,138,145,147,150,149,148,144,143,142,140,143,149,150,150,152,150,154,154,152,152,133,135,137,140,141,143,143,142,139,138,140,142,146,144,145,146,148,149,148,149,152,152,133,135,136,138,140,143,142,140,140,138,139,141,142,144,143,146,147,148,148,148,147,149,131,135,139,141,141,139,143,143,143,138,137,140,142,148,149,148,148,148,147,147,153,154,130,137,142,141,140,142,144,146,144,144,141,141,145,153,153,150,148,148,147,149,156,157,131,137,142,141,140,142,144,146,145,144,142,141,145,153,154,151,148,148,147,149,154,155],
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
