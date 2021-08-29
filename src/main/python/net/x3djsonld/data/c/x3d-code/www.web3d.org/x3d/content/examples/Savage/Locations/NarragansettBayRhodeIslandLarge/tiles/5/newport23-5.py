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
        texture=ImageTexture(url=['../../images/5/newport23-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.669870498763935,-71.68129407658296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[177,182,178,175,170,155,146,140,139,139,137,145,155,169,176,178,176,174,175,171,167,164,185,188,184,184,173,164,161,154,152,147,144,149,159,170,176,176,179,174,172,167,162,162,189,188,183,177,172,171,168,162,156,150,151,154,162,172,177,174,175,175,170,164,161,160,187,181,174,174,173,169,159,151,151,152,153,159,166,171,172,172,170,171,166,164,159,157,182,183,180,171,164,156,156,153,149,153,155,161,167,169,171,172,170,168,167,164,159,157,171,177,178,174,163,155,150,151,151,151,153,157,165,170,178,174,172,171,167,163,157,156,161,163,168,161,158,155,153,150,151,152,157,164,167,172,174,171,174,172,168,160,157,155,155,153,156,156,155,157,156,154,154,154,159,165,170,173,172,174,173,169,165,162,155,152,153,154,156,161,161,162,159,155,153,152,158,167,173,177,176,174,170,166,165,160,151,149,150,152,157,158,159,160,157,154,151,158,163,168,175,176,173,171,170,168,163,155,150,149,144,146,146,157,159,154,152,151,151,158,165,171,178,178,171,172,171,165,157,153,150,148,144,151,144,148,152,145,144,144,153,160,169,173,176,175,169,171,170,161,156,153,150,149,144,144,144,144,144,144,144,144,153,160,165,170,170,170,168,169,167,163,158,154,150,150,144,144,144,144,144,144,144,144,155,158,160,162,168,167,170,168,164,162,157,153,155,154,144,144,144,144,144,144,144,144,150,153,158,160,166,166,165,167,163,159,155,155,155,154,144,144,144,144,144,144,144,146,148,154,158,163,165,165,165,165,159,157,155,152,152,152,160,152,145,144,144,144,144,146,149,151,158,163,165,163,162,160,158,154,152,150,148,148,161,157,152,144,144,144,144,144,148,154,160,160,164,164,162,158,157,152,148,146,144,143,157,152,148,144,144,144,144,144,151,155,157,159,163,162,161,158,155,150,145,142,140,140,150,149,145,144,144,144,144,144,148,153,157,160,162,159,159,157,153,146,141,139,136,136,152,150,147,146,144,144,145,149,151,154,159,160,156,156,151,150,146,140,136,136,134,131,154,151,151,147,145,143,148,149,151,153,155,155,154,154,148,143,135,134,134,130,125,123,158,156,156,152,146,143,142,145,146,149,152,151,151,148,143,136,131,131,125,118,114,114,158,157,155,152,146,144,141,144,145,148,151,150,149,147,142,135,130,129,124,117,113,114],
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
