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
        texture=ImageTexture(url=['../../images/4/bosphorus3-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.788909617338845,29.47604227744523,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[135,120,119,115,131,107,100,117,88,52,84,82,127,94,55,25,10,12,35,72,85,83,151,138,131,128,156,152,142,133,98,91,86,114,123,84,37,13,9,11,56,98,118,120,157,157,131,135,169,176,173,137,134,100,77,125,123,76,32,19,10,11,35,78,107,114,161,149,132,133,162,183,186,148,129,127,105,118,125,78,49,43,11,12,22,52,99,109,179,160,139,140,141,156,175,158,135,142,108,108,121,116,80,50,18,12,43,83,112,130,180,168,143,161,155,166,167,165,145,152,136,143,139,130,88,56,32,14,55,85,128,144,180,170,164,169,169,173,162,169,162,158,155,151,136,145,108,85,51,18,46,96,147,159,174,176,164,173,175,174,168,156,165,181,168,156,149,155,160,113,60,15,42,108,139,144,162,161,164,162,170,179,170,157,157,170,178,164,163,157,156,119,51,28,90,129,196,204,152,153,163,147,169,176,167,157,147,165,156,170,172,154,129,131,49,31,123,180,213,224,157,150,145,155,171,178,176,167,155,154,124,144,160,164,156,103,50,27,132,195,224,230,168,134,127,140,162,167,173,170,170,117,112,131,132,153,151,74,28,55,144,229,257,260,184,168,149,149,135,171,179,164,161,137,106,104,131,119,82,37,97,131,209,249,264,264,193,188,166,156,126,145,167,162,126,126,81,74,102,64,24,66,96,168,225,259,255,252,193,176,163,165,138,113,145,167,137,86,66,56,64,79,32,127,125,115,157,226,229,231,206,186,198,192,169,126,131,162,136,100,58,38,31,28,62,149,181,207,156,187,209,213,213,204,201,188,178,168,108,147,121,87,57,32,29,46,94,148,195,231,233,211,217,226,187,209,201,191,172,174,144,79,106,64,47,33,31,53,106,157,212,231,229,215,229,238,177,185,168,168,189,190,160,105,57,46,40,34,37,60,109,183,186,194,199,228,246,249,143,163,172,124,160,171,159,120,90,42,39,43,42,88,160,181,179,201,224,236,263,274,103,96,82,86,120,121,153,147,98,41,60,51,42,109,154,181,201,213,214,239,272,277,113,124,130,104,85,73,116,132,85,45,83,98,77,89,166,189,186,180,199,208,240,243,119,159,159,158,131,94,99,86,70,62,115,99,139,94,175,174,161,183,215,212,217,219,121,161,163,164,142,98,115,104,82,66,119,99,144,97,175,168,162,181,216,214,218,219],
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
