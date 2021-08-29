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
        texture=ImageTexture(url=['../../images/4/bosphorus8-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,28.4375,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[165,161,166,173,141,120,116,120,111,85,76,69,60,56,55,52,51,53,70,74,74,78,184,180,164,151,154,144,114,99,91,92,86,75,68,71,61,53,49,42,49,58,72,82,184,183,173,180,183,148,116,113,111,113,106,69,79,91,75,67,63,54,39,44,73,83,187,183,184,190,178,146,130,145,131,122,95,82,85,99,81,88,79,69,52,40,90,91,190,179,187,190,181,148,160,145,123,118,83,89,97,104,95,108,98,84,70,61,41,53,191,181,178,177,178,165,167,140,119,98,98,101,103,112,114,121,111,103,91,68,48,40,194,189,184,154,165,172,179,150,132,99,109,112,113,124,129,118,118,118,108,71,44,36,192,187,181,169,156,172,179,151,119,111,119,121,122,134,125,114,117,123,94,61,37,32,189,149,149,158,139,161,167,166,129,125,130,131,134,142,125,110,117,104,75,54,34,26,150,161,154,133,134,136,159,170,139,139,144,137,144,139,130,109,122,88,62,44,21,20,177,173,157,140,139,131,136,165,159,152,160,145,149,141,127,115,87,72,55,37,17,17,193,171,169,151,149,120,130,169,168,162,171,156,160,155,148,117,93,64,46,35,21,19,189,155,177,170,150,128,123,146,155,161,176,164,163,174,152,121,95,59,29,23,21,21,193,140,173,176,148,122,114,132,138,157,175,169,166,182,155,122,94,50,26,24,26,28,152,131,174,173,141,120,109,124,134,147,166,175,181,159,148,105,61,44,25,27,35,35,116,119,151,154,134,113,111,120,129,141,160,183,191,168,143,101,66,43,27,31,41,43,98,110,127,136,131,106,110,115,127,141,161,191,164,156,134,88,56,39,27,35,46,48,104,97,111,120,115,98,106,115,128,147,181,187,150,113,124,77,55,35,28,36,50,53,111,96,94,104,99,99,107,117,133,157,212,188,140,118,106,63,49,35,28,38,53,55,121,106,98,91,92,100,108,118,136,162,207,183,160,164,104,54,41,33,33,51,55,54,133,119,106,88,90,100,112,125,153,187,207,194,182,140,88,44,38,38,50,59,44,38,140,128,108,88,86,97,120,146,182,205,207,203,171,139,64,40,37,48,54,55,27,22,131,123,105,92,85,93,124,177,221,215,198,191,153,99,52,38,44,57,60,44,22,17,129,122,104,92,84,93,126,183,222,217,197,184,153,93,51,39,46,58,61,41,22,18],
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
