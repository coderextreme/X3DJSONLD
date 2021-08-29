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
        texture=ImageTexture(url=['../../images/5/newport25-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.71825065109993,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[170,168,168,165,163,161,159,163,164,161,157,157,157,162,161,161,151,138,129,125,116,116,169,168,166,162,161,163,163,160,158,157,159,157,160,165,163,160,154,143,130,120,114,114,172,169,167,163,161,159,162,160,162,159,156,157,156,160,158,153,147,140,127,117,115,115,175,169,166,165,166,166,166,161,158,153,156,155,154,152,150,142,137,131,121,114,112,112,174,170,168,166,165,167,163,160,156,152,154,155,150,144,138,131,123,117,114,111,109,109,173,168,164,163,164,162,160,156,151,147,150,150,147,136,129,123,115,111,109,109,106,106,172,164,156,154,155,154,151,148,144,145,143,138,135,131,127,122,119,114,111,106,105,105,156,151,142,145,142,140,139,140,137,136,134,132,128,126,121,117,113,112,108,106,100,100,143,138,134,134,134,137,137,135,135,132,129,130,127,123,121,115,112,107,105,105,107,108,136,136,137,135,135,138,136,137,138,135,130,129,127,122,117,115,112,109,110,107,115,114,136,134,139,135,134,138,146,151,156,150,139,137,135,134,130,121,116,112,111,110,112,111,137,138,136,136,143,151,156,163,168,165,156,148,145,142,141,137,127,115,114,116,124,124,151,141,138,141,148,158,169,178,177,173,173,164,157,151,148,144,135,121,118,125,129,129,162,150,141,141,152,162,173,179,183,183,182,179,173,162,152,142,132,125,124,131,135,135,165,154,146,147,156,167,178,180,182,182,183,179,174,164,147,137,133,132,130,135,142,144,159,154,150,154,161,174,179,179,182,179,175,173,168,157,145,138,140,134,131,138,146,148,156,152,153,157,165,175,177,176,176,171,167,162,158,154,146,146,142,134,133,139,150,151,171,167,167,164,170,173,175,176,173,166,160,155,153,153,144,144,143,136,137,142,151,153,182,178,173,170,168,171,178,182,177,174,166,163,165,159,150,144,135,139,145,149,157,159,180,181,178,176,173,177,181,183,178,176,175,171,175,173,172,160,141,143,147,151,156,158,178,179,180,180,180,182,182,181,176,174,178,180,179,180,183,169,149,142,148,156,162,164,178,177,179,181,181,185,186,180,173,168,169,175,177,179,178,173,159,149,153,161,168,169,186,181,181,182,180,180,176,174,167,167,163,167,169,170,173,172,162,150,152,163,169,169,186,183,181,182,180,179,175,173,167,166,163,166,168,169,173,170,162,150,151,163,169,169],
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
