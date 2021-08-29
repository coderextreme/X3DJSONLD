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
        texture=ImageTexture(url=['../../images/5/newport22-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.72526478466978,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[129,120,115,111,109,115,129,143,148,156,157,171,180,183,187,188,179,178,173,170,163,162,130,123,119,118,113,120,130,145,153,162,168,179,191,193,196,196,186,180,178,171,165,165,134,125,118,123,123,120,130,145,153,163,175,189,195,198,202,200,189,184,177,173,169,168,137,130,124,123,121,120,134,146,155,165,179,192,196,199,200,196,192,182,177,173,168,168,139,133,130,126,122,121,132,144,152,169,184,190,192,193,190,189,185,181,175,171,169,168,145,138,133,130,123,123,126,136,153,170,185,191,191,190,186,183,182,181,176,171,170,170,145,140,134,129,123,123,127,137,153,171,183,187,185,181,180,182,182,182,180,175,174,174,144,141,136,129,125,125,127,137,152,165,175,178,176,178,182,183,186,184,184,181,177,177,142,141,134,128,128,126,127,138,149,158,166,173,173,175,182,186,187,187,186,184,178,176,141,140,134,131,130,131,129,134,144,154,158,165,170,173,179,187,188,190,187,185,178,177,142,138,137,134,135,136,130,131,135,147,152,162,169,171,180,191,188,192,189,182,174,173,141,141,138,138,143,144,137,133,135,139,148,156,160,166,175,182,190,191,187,181,171,169,142,139,142,146,147,145,143,138,131,132,139,149,157,164,176,182,186,190,183,176,169,168,140,139,143,145,142,141,139,138,137,137,140,147,154,168,178,182,187,183,180,173,169,169,140,140,137,136,136,138,136,137,140,146,150,150,156,169,175,177,185,185,179,171,167,166,139,134,136,132,135,136,139,139,140,142,147,155,162,172,180,183,182,177,172,169,167,167,131,131,131,131,131,137,139,142,143,144,147,154,162,170,176,179,175,167,167,169,169,168,131,131,131,131,131,131,140,141,143,141,143,149,158,164,168,168,165,164,165,167,168,168,131,131,131,131,131,135,138,140,140,141,140,145,149,155,156,157,157,164,165,164,168,169,131,131,131,133,135,134,137,138,136,140,140,142,144,145,147,147,151,158,162,163,165,166,131,131,131,134,143,137,132,133,138,139,141,139,139,140,144,146,148,152,159,163,168,168,133,131,132,133,135,137,137,137,138,139,140,137,140,143,144,146,150,152,160,162,166,167,132,133,134,135,135,136,136,137,136,137,140,143,145,146,148,150,154,156,159,163,168,169,132,132,135,135,135,136,137,136,136,138,140,143,145,147,149,151,155,156,159,163,169,170],
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
