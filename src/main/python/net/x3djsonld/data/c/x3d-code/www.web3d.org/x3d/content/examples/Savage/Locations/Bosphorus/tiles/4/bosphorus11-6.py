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
        texture=ImageTexture(url=['../../images/4/bosphorus11-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.22625451557576,28.882589547476528,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[73,96,85,92,114,143,109,99,113,121,139,129,128,110,129,155,168,148,151,174,196,194,73,90,109,95,144,131,106,106,129,141,154,135,144,128,162,137,151,169,178,176,194,191,75,109,132,112,154,119,100,118,126,170,144,110,151,128,152,152,170,169,173,142,169,179,81,96,113,142,148,124,114,140,161,168,134,112,153,165,154,182,175,165,138,125,165,183,94,102,110,153,135,113,125,136,171,149,128,140,142,177,145,159,152,143,159,138,177,183,97,107,138,155,145,113,133,168,165,146,144,161,145,162,142,149,118,112,135,103,161,146,110,110,122,149,138,131,151,157,168,140,159,154,145,137,105,151,142,99,80,77,85,87,110,134,114,140,150,146,135,151,141,145,121,154,145,93,99,103,115,144,98,94,63,87,116,128,112,115,155,141,128,137,115,131,104,143,128,77,70,74,75,104,129,95,53,43,120,110,107,109,141,113,124,133,98,109,101,119,81,76,76,71,57,95,92,95,72,64,133,108,108,84,136,98,102,104,65,73,122,95,74,61,53,72,65,102,69,81,65,57,135,103,122,63,143,81,126,112,53,95,118,101,89,64,50,62,68,64,87,79,53,58,136,102,85,64,102,109,60,61,64,82,106,81,87,71,75,62,58,51,44,30,47,57,140,105,112,63,100,70,54,47,49,54,95,103,101,54,58,59,59,42,21,17,29,33,90,108,107,73,79,38,48,63,72,90,52,42,54,38,52,48,46,21,12,17,18,16,79,73,68,74,29,38,49,47,102,108,78,25,42,37,33,36,30,22,28,37,16,14,62,71,58,69,39,54,42,46,64,87,55,18,28,19,11,20,27,11,25,13,14,15,52,67,68,27,15,65,49,38,34,37,27,12,6,12,7,12,17,12,28,13,24,23,45,41,67,58,17,51,46,41,45,43,30,6,4,27,29,23,13,3,22,13,14,13,39,55,68,63,28,40,57,62,61,41,11,6,6,23,26,26,14,3,0,3,-3,0,31,65,49,59,32,33,45,38,36,40,6,8,13,17,22,15,4,6,1,1,4,5,10,23,45,39,31,19,40,32,22,33,26,19,7,5,-2,3,0,0,0,1,4,0,18,7,13,18,5,2,2,8,2,3,20,31,9,0,1,-1,-4,0,1,2,0,0,21,7,11,13,5,2,1,6,1,3,15,25,7,0,0,0,-2,0,0,2,0,0],
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
