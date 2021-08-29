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
        texture=ImageTexture(url=['../../images/5/newport24-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.72526478466978,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[137,137,134,139,136,136,137,138,139,143,140,140,142,142,147,142,141,142,147,151,147,146,138,137,137,136,138,140,140,140,137,139,137,137,138,138,137,140,141,140,142,139,140,140,143,140,140,138,140,141,143,140,140,136,138,139,137,139,141,141,140,139,139,139,137,137,150,150,149,145,143,142,141,145,145,139,144,143,137,140,136,145,150,143,138,139,141,142,154,154,154,153,151,151,147,146,146,144,146,144,141,138,141,143,145,145,143,141,141,141,159,159,160,163,157,155,153,151,155,152,142,142,142,141,144,143,143,147,147,147,145,145,163,164,164,165,165,161,155,154,158,157,149,141,139,141,143,146,149,153,151,150,147,146,169,172,168,170,168,163,159,156,154,153,152,147,146,146,147,152,156,153,156,156,153,153,169,170,170,168,167,164,159,156,158,156,152,151,149,149,154,157,156,158,158,155,152,152,165,170,171,170,165,161,163,160,156,158,158,157,155,152,150,154,156,158,158,158,159,159,169,170,171,167,164,162,164,159,157,158,161,156,158,155,155,153,158,158,159,159,163,163,167,168,171,166,164,163,162,165,162,163,161,159,157,155,157,159,161,162,163,163,163,163,173,171,171,169,171,168,164,167,164,164,162,163,159,162,158,160,163,170,165,173,169,167,174,172,172,174,168,167,164,170,169,166,170,167,166,165,164,166,169,172,172,170,170,170,176,176,172,171,169,170,171,173,176,176,171,169,166,169,169,174,177,172,175,172,168,168,173,173,173,176,175,177,177,178,179,177,174,173,172,169,173,177,174,172,173,172,169,169,170,170,172,175,179,177,181,182,181,182,182,180,176,172,170,171,171,174,178,173,168,167,164,168,170,172,174,177,182,183,183,180,181,182,179,175,176,172,172,176,170,165,169,170,161,165,167,167,172,179,182,180,184,183,182,181,182,182,179,176,179,176,169,166,163,163,157,157,162,168,175,180,183,183,182,183,185,184,184,184,185,182,177,171,167,168,168,168,160,164,170,174,179,182,186,187,185,186,188,188,185,187,189,181,176,170,172,170,174,173,163,170,178,178,182,189,185,188,191,191,186,184,184,185,184,180,177,175,176,177,175,174,162,170,179,184,186,186,188,189,190,186,182,185,186,186,180,179,179,179,176,174,171,171,162,170,179,184,186,186,187,189,189,185,182,186,187,187,180,178,180,180,176,174,170,170],
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
