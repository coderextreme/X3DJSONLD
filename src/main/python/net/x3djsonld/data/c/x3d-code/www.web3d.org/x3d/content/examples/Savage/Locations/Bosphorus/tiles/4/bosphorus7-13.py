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
        texture=ImageTexture(url=['../../images/4/bosphorus7-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.0075820664573,29.401860686199143,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[96,106,100,108,131,114,78,126,136,130,98,85,145,144,143,121,138,168,162,176,164,165,95,105,84,97,123,98,78,118,140,119,97,90,124,158,163,146,149,173,167,154,164,171,82,85,83,87,112,69,90,117,144,123,116,80,136,151,150,165,168,167,153,153,175,179,65,79,76,76,88,62,83,107,137,141,78,69,95,130,156,170,151,142,147,169,171,174,69,61,90,65,66,79,101,121,133,97,86,81,123,148,164,143,129,159,160,171,194,194,77,60,74,75,68,98,113,137,112,64,71,120,124,154,153,122,152,161,146,159,174,181,92,83,70,89,63,75,105,135,92,59,89,119,150,150,126,124,144,138,166,162,185,181,82,96,58,90,64,85,99,94,100,68,89,117,137,170,120,115,152,139,199,206,171,156,70,82,64,74,60,86,64,62,61,93,115,139,151,125,116,135,213,124,162,196,152,150,58,60,58,59,63,72,60,63,74,89,98,126,115,105,130,160,242,156,135,137,165,183,56,58,70,66,57,59,80,67,67,59,70,123,81,156,161,161,227,184,179,158,210,222,70,68,82,89,67,76,104,83,97,94,62,127,73,117,148,196,234,217,228,223,212,217,80,73,82,107,66,98,105,83,120,138,70,84,88,136,165,177,199,192,207,226,222,214,90,96,89,111,73,110,113,91,124,137,79,64,101,107,120,137,164,157,190,216,194,200,88,104,87,117,84,109,127,106,115,118,101,72,70,84,111,110,122,174,215,205,172,180,84,114,100,113,96,101,134,125,133,115,89,104,85,69,94,93,118,163,173,179,151,155,103,105,112,130,108,104,133,155,152,136,131,119,116,99,64,96,130,117,128,135,132,136,103,101,119,134,120,108,124,146,172,150,153,145,139,136,116,73,120,98,155,165,183,186,73,78,119,124,146,126,126,161,177,173,180,152,128,107,87,83,101,91,138,148,195,194,56,94,137,145,155,121,131,162,199,193,181,141,128,145,124,122,72,109,109,121,159,156,68,100,157,163,154,136,144,163,195,208,161,157,168,179,121,95,111,78,79,77,79,76,94,112,102,141,186,172,172,188,212,218,182,201,204,176,156,137,132,96,117,120,97,100,131,150,133,106,134,150,176,202,206,209,211,202,163,141,164,180,177,115,129,137,118,117,127,155,139,113,129,144,168,195,201,209,207,200,157,143,165,181,180,116,131,134,124,121],
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
