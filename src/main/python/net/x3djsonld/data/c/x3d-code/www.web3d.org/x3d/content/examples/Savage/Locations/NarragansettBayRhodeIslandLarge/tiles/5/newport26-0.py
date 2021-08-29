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
        texture=ImageTexture(url=['../../images/5/newport26-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[130,128,128,127,128,134,141,147,154,158,162,169,176,181,182,182,177,173,170,170,170,170,138,131,129,128,129,135,144,151,155,161,168,172,177,183,186,185,182,181,179,175,171,170,140,134,128,130,133,136,143,152,160,167,171,176,176,183,185,182,182,183,180,177,175,175,140,134,132,131,132,136,146,156,162,168,173,175,178,183,183,184,188,192,186,181,176,175,140,137,132,131,135,139,147,155,162,168,172,175,178,183,185,186,190,194,189,181,174,173,138,137,135,132,135,142,148,153,161,166,171,176,181,184,190,188,190,189,185,178,174,173,137,138,135,133,138,148,154,154,159,166,171,176,179,184,188,187,185,186,182,177,175,174,138,138,135,134,140,148,154,161,162,166,171,175,178,181,187,187,185,182,175,172,167,166,138,134,137,136,138,147,155,156,159,166,172,175,176,180,184,184,183,176,174,169,164,163,140,139,139,139,141,147,153,156,159,165,170,176,176,178,179,180,178,172,173,170,164,163,136,137,138,136,140,145,153,158,159,164,169,174,177,174,178,179,174,171,172,170,164,163,136,138,134,136,141,145,151,157,162,163,166,170,176,177,174,173,174,174,172,168,166,166,130,135,137,139,144,148,154,158,158,164,165,168,171,173,175,174,174,171,167,166,169,169,132,134,139,145,150,155,156,158,160,162,165,168,169,170,171,173,175,174,169,168,172,172,137,139,140,145,152,157,159,164,164,164,165,166,168,168,171,174,175,177,176,173,177,177,137,137,143,151,157,162,165,166,164,163,162,163,167,169,175,179,181,180,181,183,182,183,137,139,144,151,159,167,171,171,170,166,163,164,165,169,176,181,181,184,188,189,191,192,138,139,149,158,165,170,176,177,174,167,165,167,169,176,178,182,185,188,192,190,196,197,143,146,156,164,169,174,177,177,175,170,167,170,174,178,183,187,190,194,195,195,198,198,149,155,158,161,169,176,176,176,177,176,171,173,176,183,190,190,190,196,197,194,194,195,149,154,158,165,172,177,180,179,178,179,177,177,180,185,190,189,193,193,196,193,190,189,147,153,160,168,173,180,182,181,183,180,179,178,182,185,185,189,192,191,190,186,188,187,150,157,165,173,176,181,183,184,182,182,181,183,187,189,189,189,190,188,183,180,180,180,150,157,165,172,176,182,183,184,182,184,182,183,187,189,189,189,189,187,182,178,179,179],
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
