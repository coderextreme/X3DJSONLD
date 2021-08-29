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
        texture=ImageTexture(url=['../../images/4/bosphorus8-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,29.327679094953055,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[104,152,103,70,46,40,45,33,27,49,66,65,59,58,61,61,48,59,56,75,113,127,92,116,112,66,53,44,22,21,24,27,74,61,59,59,61,54,53,55,76,79,113,121,110,84,117,65,78,29,19,52,62,29,61,65,57,59,60,60,58,61,69,95,145,157,58,68,84,70,30,41,19,21,50,84,66,76,63,67,57,62,60,57,65,100,151,160,68,45,58,66,28,19,29,22,31,93,101,79,78,67,62,55,62,58,65,109,155,165,82,71,45,50,27,23,19,19,42,58,99,75,88,69,60,59,64,57,70,123,163,175,82,62,49,35,28,42,53,25,79,85,85,79,91,64,59,60,66,58,63,107,174,178,60,55,56,24,23,28,33,52,77,89,101,87,89,63,61,71,68,62,65,73,130,134,85,61,43,46,27,19,22,44,67,78,93,94,67,64,70,93,67,92,113,67,70,77,116,71,53,48,24,17,18,31,37,59,86,95,83,67,77,103,77,86,150,117,85,102,69,58,35,31,19,18,19,19,43,53,53,84,95,77,86,101,120,97,156,109,99,117,53,35,19,16,16,18,17,16,20,44,71,79,87,88,79,104,152,112,178,171,121,111,35,17,16,17,17,16,18,17,22,35,38,52,105,129,111,136,174,127,145,181,175,161,16,15,14,16,17,17,17,17,29,58,57,79,134,147,148,154,168,126,174,188,174,164,15,13,16,15,16,17,21,19,22,37,82,101,131,120,149,173,163,145,154,169,150,146,15,13,14,16,18,29,38,33,26,27,67,73,95,87,140,180,179,172,161,172,176,177,13,14,15,26,47,49,35,46,53,45,40,43,47,100,138,137,161,193,193,192,182,180,13,15,16,39,48,59,48,67,86,57,76,98,41,76,99,121,167,150,170,157,152,154,12,14,22,37,66,97,93,82,134,86,124,127,72,68,125,165,176,147,119,165,182,185,22,24,30,64,78,119,133,85,134,96,152,117,102,86,60,81,89,96,166,186,187,184,53,73,52,56,98,139,151,104,111,154,150,178,95,131,97,104,125,166,204,182,157,155,117,130,86,108,81,141,120,124,130,146,182,151,88,86,139,149,191,198,177,141,149,156,148,125,122,127,108,91,94,129,150,180,181,110,116,78,143,185,174,161,130,154,146,152,146,121,123,130,106,92,95,119,143,178,178,119,109,82,135,181,167,158,129,159,147,151],
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
