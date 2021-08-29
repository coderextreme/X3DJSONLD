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
        texture=ImageTexture(url=['../../images/5/newport30-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[132,128,123,123,121,120,122,120,130,143,148,155,164,169,170,170,167,165,165,171,170,169,134,130,128,129,127,124,122,121,127,135,145,151,158,167,169,169,166,165,165,169,170,170,136,132,131,140,136,125,120,121,122,126,133,141,146,151,161,169,166,166,165,168,170,169,134,133,136,149,140,129,121,121,121,121,126,139,151,162,173,174,174,172,167,168,173,171,132,132,141,147,150,135,127,122,121,127,137,147,156,171,188,180,177,165,163,168,169,169,140,136,142,137,151,140,131,131,127,131,135,144,163,179,187,178,163,158,162,164,167,168,149,136,141,136,138,131,129,129,129,134,135,139,156,169,168,161,153,156,157,161,167,168,148,139,136,134,132,128,128,129,130,134,138,136,146,153,150,144,146,152,155,161,167,168,150,141,132,129,128,130,130,129,130,134,137,136,136,141,147,144,148,154,159,166,173,174,147,139,131,129,129,130,130,130,131,131,137,137,136,138,142,148,152,159,165,170,175,176,148,139,133,131,133,133,130,134,140,139,137,139,140,140,143,149,155,163,169,175,180,181,148,139,132,132,135,136,136,141,148,146,143,142,144,143,145,146,159,165,171,176,180,182,139,134,133,138,139,139,138,140,148,152,150,150,147,145,145,145,152,161,170,178,185,187,146,141,139,139,147,143,141,143,149,156,157,153,150,148,147,145,156,168,175,180,187,188,150,150,143,142,150,145,146,149,152,157,158,154,154,151,147,147,158,163,171,179,189,191,155,152,149,143,142,144,146,148,152,162,163,157,157,150,146,152,160,163,166,179,191,193,156,160,156,149,150,159,160,156,159,163,161,151,150,148,149,152,160,163,169,180,193,194,159,167,161,155,151,168,170,164,164,162,155,151,151,149,154,155,159,162,166,178,191,192,169,169,166,159,155,164,175,175,175,166,154,151,158,150,155,157,160,163,167,176,188,190,165,168,166,164,161,165,175,174,176,168,154,153,154,150,155,155,158,162,168,175,186,187,167,173,178,177,171,172,174,169,168,160,157,155,154,150,155,154,155,161,167,174,184,185,168,181,186,188,177,186,183,174,166,158,156,155,150,150,154,153,154,160,167,176,182,182,177,187,193,186,178,179,179,173,171,163,158,156,150,150,154,152,155,159,167,172,179,180,178,188,193,187,180,179,178,173,176,163,158,156,150,150,154,152,155,159,167,171,178,179],
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
