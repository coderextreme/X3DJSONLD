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
        texture=ImageTexture(url=['../../images/5/newport25-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.71825065109993,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[141,138,136,134,136,138,140,142,141,139,142,142,143,147,150,155,161,160,153,142,133,132,146,144,141,137,137,138,139,140,144,142,142,142,143,146,150,157,161,158,150,140,131,130,153,150,146,142,139,139,139,139,142,142,141,140,143,144,149,156,154,148,139,134,131,130,158,156,153,149,144,140,139,140,140,142,143,142,142,144,146,147,144,137,135,133,132,132,167,162,159,156,153,149,145,144,145,143,140,140,142,143,144,138,135,134,137,135,132,131,168,166,160,157,155,154,147,147,145,141,143,144,142,144,144,140,142,141,136,134,126,121,174,171,165,159,153,150,150,147,145,146,150,150,144,143,142,143,143,141,139,132,128,128,174,170,165,161,155,155,154,152,148,146,144,147,146,141,138,139,141,143,145,139,134,133,179,173,169,166,162,162,161,156,150,146,141,141,142,143,143,142,142,144,142,143,138,137,183,177,175,169,165,163,162,156,148,144,142,141,140,142,147,147,146,147,145,145,144,142,183,180,175,171,166,162,157,153,147,142,140,140,139,141,145,146,150,153,153,150,144,143,177,178,173,171,167,157,150,148,146,140,136,136,137,139,142,148,153,157,157,153,151,150,178,174,173,172,169,161,153,147,144,140,138,138,142,142,145,152,158,163,164,163,157,156,171,171,174,171,168,158,150,145,140,140,140,142,145,149,152,157,160,164,168,169,168,168,164,168,168,166,163,156,147,145,143,142,142,145,149,152,159,162,166,166,167,169,173,173,156,160,164,166,164,156,146,138,138,140,143,147,154,158,157,162,164,167,167,167,163,163,146,150,155,158,153,151,143,137,137,139,146,150,154,156,156,157,163,166,168,165,159,158,146,145,145,142,140,140,139,138,138,144,150,154,158,158,156,159,161,166,164,158,154,153,143,142,138,136,136,135,136,136,141,146,152,158,160,159,160,159,156,160,158,155,152,151,135,138,139,137,135,134,135,139,143,148,153,157,158,163,165,167,161,155,155,155,152,152,129,130,133,132,134,135,138,140,147,149,156,162,163,167,171,167,161,160,161,160,157,156,132,127,128,129,127,133,139,144,150,157,160,166,170,173,172,170,167,167,168,169,168,168,129,128,128,127,128,134,141,147,155,159,161,167,175,180,181,180,176,171,169,170,170,170,130,128,128,127,128,134,141,147,154,158,162,169,176,181,182,182,177,173,170,170,170,170],
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
