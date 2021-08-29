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
        texture=ImageTexture(url=['../../images/4/bosphorus9-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.11691829101653,29.10513432121479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[93,53,110,136,136,99,78,130,126,136,184,173,173,194,162,169,175,173,179,149,164,156,99,81,82,91,133,148,149,88,159,156,156,196,170,194,172,173,191,146,148,164,155,142,63,65,68,106,105,124,183,152,143,170,158,192,178,202,174,161,169,174,160,123,115,112,34,47,53,91,146,156,178,180,142,181,182,178,220,194,192,167,195,172,154,158,145,134,15,43,64,73,107,130,149,173,173,206,211,196,226,238,230,196,199,196,174,180,167,161,22,51,38,91,165,154,199,202,189,242,274,235,258,223,193,185,194,166,214,216,193,182,11,41,83,127,205,235,269,269,265,256,269,279,245,206,191,163,164,157,182,173,140,144,25,93,152,185,235,248,259,244,278,265,231,309,297,259,238,199,150,186,134,157,150,146,42,99,123,187,186,171,178,169,221,217,200,244,278,238,205,174,159,150,162,130,111,112,97,115,155,159,139,120,123,161,195,167,203,195,205,200,221,201,193,138,166,162,155,145,68,86,110,94,93,89,130,167,174,141,183,170,212,185,190,201,180,152,134,148,161,146,76,61,56,72,79,108,135,134,158,131,154,187,206,174,188,188,160,168,136,128,149,158,52,57,84,85,107,107,122,131,143,163,183,200,208,159,176,170,171,142,130,121,129,139,35,74,109,145,134,140,86,127,136,170,152,167,197,185,149,137,150,165,155,138,114,123,33,90,132,74,81,79,59,104,127,120,160,177,198,194,172,161,141,128,150,132,112,121,41,112,78,32,92,81,95,77,106,134,173,199,196,214,197,183,169,174,123,139,114,110,37,28,33,62,75,96,82,114,121,141,224,223,256,269,247,218,212,200,143,120,124,111,76,39,75,85,57,66,71,61,69,97,149,169,212,216,221,193,182,173,173,148,137,134,126,58,110,111,67,95,89,134,98,91,137,132,151,177,172,139,128,129,156,163,140,127,125,89,78,135,70,117,90,161,96,157,109,141,171,197,152,170,139,139,118,143,131,115,110,132,108,131,95,110,125,149,141,146,113,175,175,209,176,195,166,184,133,105,122,103,53,104,154,152,145,92,158,168,155,158,151,150,220,203,192,208,208,222,190,140,87,84,53,62,124,162,156,98,138,178,149,182,199,160,218,206,183,177,166,165,155,122,118,100,57,63,110,161,154,98,131,182,156,190,194,164,213,203,175,173,161,156,142,132,120,102],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])))])
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
