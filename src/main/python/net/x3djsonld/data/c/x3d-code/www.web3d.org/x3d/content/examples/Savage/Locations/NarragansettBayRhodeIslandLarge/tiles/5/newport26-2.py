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
        texture=ImageTexture(url=['../../images/5/newport26-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[131,137,142,141,140,142,144,146,145,144,142,141,145,153,154,151,148,148,147,149,154,155,138,138,138,139,141,146,149,149,150,149,144,144,147,149,156,156,152,151,149,154,159,160,141,138,140,144,147,150,152,150,151,149,151,150,147,150,153,157,155,154,155,158,161,161,143,143,144,148,151,151,149,148,149,148,146,149,153,154,158,157,156,158,160,164,167,167,143,143,146,149,151,150,146,144,143,143,147,152,156,157,156,161,159,162,167,166,167,168,141,142,143,146,145,145,143,141,138,142,143,151,162,159,160,163,164,166,169,171,176,177,135,139,139,139,139,137,136,138,141,142,146,149,156,161,163,165,166,169,174,179,181,181,131,134,135,136,134,134,133,133,137,138,141,145,149,159,165,166,171,176,178,182,185,186,128,131,130,130,132,132,131,132,135,131,133,139,147,154,161,170,179,185,186,189,186,186,129,129,129,131,131,133,133,131,129,133,135,137,142,150,164,176,186,186,184,182,184,184,130,129,129,130,131,132,134,133,134,134,139,140,140,149,163,178,184,186,184,184,186,187,129,130,130,134,137,139,139,139,135,133,134,137,144,151,162,173,181,188,189,186,186,186,132,133,137,141,143,140,140,138,136,134,134,135,143,154,163,173,181,187,189,186,186,185,135,139,139,145,147,146,144,139,136,136,137,137,141,152,164,176,181,188,189,184,184,184,141,139,145,143,146,149,149,146,146,142,138,142,141,149,162,173,182,188,188,184,184,185,148,148,147,147,148,153,150,150,149,145,145,146,145,152,160,170,182,187,186,184,184,184,152,155,153,154,156,157,151,151,149,147,146,144,145,152,164,176,181,186,185,183,183,184,156,159,162,155,161,165,165,152,148,148,145,145,146,150,164,179,183,184,183,182,183,184,155,165,167,162,161,168,169,158,149,148,146,145,147,149,170,180,181,181,181,183,185,186,163,170,171,165,171,166,164,162,157,153,149,145,146,152,163,172,177,178,179,183,185,186,169,176,177,170,171,173,170,165,160,155,150,147,146,152,159,167,171,172,175,179,183,184,167,176,177,169,167,167,161,161,160,156,151,148,148,150,153,160,165,168,173,177,181,182,181,185,181,174,168,171,169,161,154,151,149,149,148,152,152,153,159,165,169,174,179,180,184,185,181,175,168,169,170,162,154,149,149,148,148,153,153,153,158,165,168,174,179,180],
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
