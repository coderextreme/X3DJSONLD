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
        texture=ImageTexture(url=['../../images/5/newport27-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[171,166,164,161,158,161,162,165,165,166,162,160,155,155,154,154,151,144,144,139,137,137,174,171,169,166,161,156,154,155,156,156,155,150,146,145,144,145,145,141,138,143,140,138,181,176,171,170,166,160,154,152,151,148,146,148,148,149,146,141,138,137,137,137,139,138,184,177,171,168,167,162,155,151,154,153,152,152,149,148,142,139,138,137,137,137,137,137,188,180,173,166,162,159,155,154,154,156,154,153,150,148,147,138,137,137,139,137,137,137,190,184,178,170,162,158,158,156,158,158,157,159,157,150,148,138,137,141,138,137,137,137,194,188,179,173,164,161,158,161,164,166,166,164,162,157,150,144,139,146,139,137,138,139,192,189,182,173,165,163,160,161,166,172,174,172,169,164,156,149,143,145,145,144,146,144,188,186,184,176,169,166,163,162,167,173,177,175,170,164,157,151,147,143,147,147,144,143,185,185,183,180,176,171,165,164,168,172,172,172,167,163,155,148,144,141,139,147,139,138,184,184,183,180,174,171,168,170,169,172,175,169,164,160,154,150,148,141,138,137,137,137,182,182,180,178,175,173,172,173,171,172,173,173,172,170,166,163,153,143,138,137,140,142,179,179,177,175,173,170,169,170,168,169,170,171,175,173,171,168,159,145,139,138,139,138,179,177,173,169,166,164,165,166,166,167,165,166,168,167,168,163,153,141,138,140,140,140,175,174,172,166,164,163,165,167,166,164,161,162,163,163,161,156,157,151,146,141,138,138,174,169,166,164,163,162,163,165,164,162,159,158,158,159,157,160,160,155,149,147,143,143,169,166,163,162,159,158,159,158,159,160,158,153,151,152,150,151,153,151,149,146,138,137,166,163,161,158,156,154,154,152,154,155,153,146,143,141,142,142,145,149,144,137,136,136,163,160,154,151,152,151,154,151,151,149,146,142,139,139,139,134,134,136,133,127,129,129,160,157,150,145,144,146,146,152,153,151,148,142,136,137,132,128,127,126,127,128,123,123,153,151,146,144,141,139,140,145,149,152,153,141,137,136,130,129,134,139,138,139,127,125,155,152,151,150,145,137,135,137,141,144,149,150,144,136,133,132,135,140,139,142,127,125,159,154,153,157,150,142,134,128,135,135,142,147,143,133,136,139,144,146,138,121,120,120,159,154,153,158,150,142,134,128,136,134,141,146,144,133,136,140,146,146,137,121,122,122],
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
