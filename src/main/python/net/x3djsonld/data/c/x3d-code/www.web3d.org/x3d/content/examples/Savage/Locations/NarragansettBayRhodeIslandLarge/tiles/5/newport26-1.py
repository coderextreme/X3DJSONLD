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
        texture=ImageTexture(url=['../../images/5/newport26-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.7692354927566,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[170,172,162,158,155,148,148,147,148,147,146,142,139,138,132,131,131,129,131,132,131,131,170,170,167,159,155,157,152,147,147,146,141,139,137,134,134,131,130,130,131,135,138,138,175,171,167,163,163,159,152,149,145,142,142,140,137,134,134,133,134,134,135,137,140,141,175,170,167,166,163,159,154,147,142,138,142,139,137,136,138,137,136,138,137,138,143,143,173,170,166,163,160,158,154,145,137,136,142,145,142,140,139,138,137,138,138,140,143,143,173,167,165,160,157,152,145,147,149,144,143,141,141,138,136,137,136,133,137,140,140,141,174,169,164,157,151,147,144,141,145,146,143,141,140,139,138,137,136,135,136,136,135,135,166,165,161,154,152,149,147,146,148,147,144,143,142,139,135,134,133,133,132,132,131,131,163,158,155,154,148,146,148,152,155,153,150,145,140,136,131,129,131,131,127,128,128,128,163,157,155,152,149,152,157,160,156,154,151,146,140,135,132,128,126,125,125,126,129,129,163,159,159,157,159,164,163,159,156,154,149,143,139,136,132,127,126,124,124,128,130,130,166,163,162,165,170,169,166,161,156,153,148,143,135,131,130,127,127,125,128,128,129,129,169,170,171,172,175,174,172,165,156,148,140,135,132,131,132,132,130,128,128,130,131,132,172,175,176,178,177,175,169,162,155,148,141,136,132,130,129,131,131,132,130,133,135,135,177,179,183,182,181,174,164,157,152,147,142,136,136,132,130,133,133,134,137,140,141,141,183,185,189,185,179,168,162,156,152,147,141,138,140,136,133,135,135,136,138,143,148,148,192,196,192,185,177,169,160,154,149,145,143,142,145,140,137,134,134,136,142,148,152,152,197,199,193,184,175,166,158,153,152,152,152,150,149,141,136,134,135,140,146,148,154,156,198,194,189,178,166,160,161,163,161,164,162,158,148,138,137,133,139,148,154,153,154,155,195,191,182,171,162,159,162,164,165,165,165,164,156,143,138,137,142,150,155,157,162,163,189,182,174,168,164,161,162,164,171,171,172,164,155,144,139,140,144,153,157,160,167,169,187,180,171,168,168,165,161,166,171,172,168,162,153,142,137,141,149,156,161,163,166,167,180,180,175,171,176,172,165,165,169,172,165,157,150,144,143,147,157,163,165,170,180,181,179,179,175,173,176,173,166,166,170,171,164,156,150,144,142,148,157,164,167,171,182,184],
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
