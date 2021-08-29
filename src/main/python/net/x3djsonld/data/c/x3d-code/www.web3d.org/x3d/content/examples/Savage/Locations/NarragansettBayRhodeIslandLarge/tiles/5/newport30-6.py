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
        texture=ImageTexture(url=['../../images/5/newport30-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[201,199,195,192,188,183,179,175,171,167,163,159,152,148,146,145,144,143,141,139,138,138,201,199,195,191,186,182,178,173,169,166,161,154,148,145,144,143,142,141,140,140,140,141,201,200,195,189,184,181,176,172,167,163,156,150,147,145,144,143,142,141,143,144,145,145,201,198,194,189,183,179,175,172,167,161,155,149,147,146,146,145,144,144,146,150,152,152,200,197,194,189,184,180,176,172,167,161,155,149,148,149,150,149,148,146,146,148,152,152,198,196,193,188,183,178,173,169,165,159,154,151,153,155,156,157,155,151,149,148,150,150,197,194,190,186,181,175,170,166,161,156,154,156,158,161,164,168,167,161,157,154,152,152,194,191,187,183,177,173,170,166,161,157,157,158,160,163,167,171,171,170,167,161,156,155,193,190,187,180,174,172,168,164,161,158,158,159,161,164,167,169,171,171,171,168,165,164,194,191,186,178,176,172,168,163,160,161,161,160,161,164,166,167,168,170,172,171,167,166,191,189,185,182,179,176,169,164,162,163,163,162,161,163,165,166,167,170,171,170,165,164,187,185,180,176,173,169,166,165,165,165,165,164,163,164,165,166,167,169,170,168,162,161,184,182,178,175,171,170,169,168,168,168,167,166,164,163,164,166,167,168,167,164,159,158,184,182,178,176,175,174,173,172,171,170,168,167,165,164,165,166,166,165,162,159,155,154,184,181,178,178,178,176,175,173,172,170,169,167,166,165,164,164,163,160,158,155,150,149,183,180,181,181,179,178,175,173,172,171,168,166,165,164,162,160,158,155,153,150,144,143,185,184,183,182,180,177,175,172,171,169,166,165,165,164,158,156,154,150,147,141,137,136,187,186,184,181,178,176,173,172,170,167,164,163,163,160,154,149,145,140,138,132,127,126,188,186,184,181,177,175,173,170,168,165,162,160,159,154,147,139,134,132,127,121,115,114,189,187,186,183,179,176,174,170,168,164,160,157,153,144,139,131,124,120,119,118,117,117,188,187,186,184,180,176,173,169,165,161,157,151,142,135,130,124,119,115,118,122,121,120,187,187,186,183,178,174,169,163,160,156,148,141,133,126,119,115,114,114,113,114,114,115,186,186,182,179,175,170,162,159,155,146,137,130,127,120,115,114,114,115,114,115,117,117,186,185,182,178,174,168,161,158,154,145,136,129,125,118,115,114,114,115,114,114,118,119],
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
