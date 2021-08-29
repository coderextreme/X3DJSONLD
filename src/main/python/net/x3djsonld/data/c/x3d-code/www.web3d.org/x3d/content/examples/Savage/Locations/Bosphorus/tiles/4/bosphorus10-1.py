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
        texture=ImageTexture(url=['../../images/4/bosphorus10-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.171586403296146,28.511681591246088,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[23,28,16,5,5,18,23,22,18,12,11,17,25,29,44,60,100,112,138,153,156,154,31,29,14,6,5,14,30,32,33,23,19,16,18,53,90,105,109,124,147,169,155,151,34,30,15,8,6,7,14,35,40,38,36,22,17,40,92,112,99,126,151,172,152,148,34,29,17,10,6,6,8,13,25,49,52,40,27,22,53,85,82,113,148,162,140,136,36,30,25,15,8,7,8,8,11,31,47,50,45,30,28,47,71,96,118,149,125,119,36,31,35,17,7,7,16,15,10,12,29,40,50,52,28,33,53,73,111,136,110,101,38,36,32,13,7,8,19,25,20,13,15,29,45,56,46,30,38,68,103,128,93,83,42,42,30,9,7,20,36,39,31,21,16,22,40,56,66,46,32,42,75,113,69,66,49,53,34,9,11,29,50,47,33,27,26,20,37,53,74,64,51,38,52,74,60,68,57,48,40,13,17,35,65,56,38,35,32,22,39,59,85,86,72,57,42,45,75,89,61,33,14,11,23,43,70,61,52,45,42,21,39,59,89,110,102,78,51,83,61,62,61,24,9,16,28,42,60,67,71,65,49,33,32,58,85,127,126,89,62,115,94,84,48,16,10,21,30,38,52,67,87,83,59,45,31,53,81,111,141,102,80,126,108,103,31,10,10,16,28,35,46,67,99,107,78,54,47,40,65,98,145,111,98,136,129,126,21,12,12,12,23,25,45,64,102,141,98,78,59,38,60,100,137,124,104,144,146,142,11,13,17,13,14,29,38,59,92,135,128,100,71,50,46,81,102,139,128,153,157,154,14,19,27,15,14,20,31,51,76,105,145,118,83,71,70,55,88,134,146,157,165,161,14,28,30,18,15,14,25,39,51,92,131,131,104,89,105,77,69,115,153,158,164,165,16,28,35,23,20,15,19,28,38,67,104,123,124,114,138,96,86,94,135,140,161,164,20,31,35,28,24,21,18,32,54,72,77,102,139,150,156,113,127,105,104,140,164,170,21,31,37,33,28,27,18,28,46,73,97,127,143,155,170,156,140,136,148,156,169,169,27,34,45,39,35,29,21,19,40,58,81,121,121,138,170,134,114,144,161,174,162,159,34,37,51,46,44,38,28,19,25,53,56,109,75,142,166,122,104,152,165,177,169,168,34,38,53,47,45,40,28,19,24,51,54,105,73,142,165,124,100,147,162,175,171,170],
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
