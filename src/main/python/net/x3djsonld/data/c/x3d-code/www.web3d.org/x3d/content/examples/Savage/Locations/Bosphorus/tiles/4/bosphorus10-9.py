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
        texture=ImageTexture(url=['../../images/4/bosphorus10-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.171586403296146,29.10513432121479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[57,63,110,161,154,98,131,182,156,190,194,164,213,203,175,173,161,156,142,132,120,102,120,142,107,136,170,115,134,173,218,205,169,207,188,185,151,161,138,174,164,151,112,89,170,163,128,132,170,133,171,182,196,215,161,186,155,183,167,158,129,181,168,169,130,111,194,194,160,168,155,169,177,206,168,197,174,173,141,181,135,126,112,117,162,179,149,136,183,195,201,185,179,209,212,198,152,189,188,149,132,132,153,104,115,123,163,171,138,125,109,169,156,209,175,189,183,155,168,134,173,172,157,116,110,108,90,124,129,157,169,162,119,98,94,167,114,111,131,135,141,150,140,160,165,153,109,114,70,129,93,129,160,159,34,17,65,63,60,137,87,73,120,142,128,151,152,159,126,87,75,102,88,133,143,145,1,4,26,7,92,80,31,91,130,118,113,137,148,115,151,117,121,64,107,140,133,127,-5,-2,-5,0,23,32,41,101,112,83,87,139,148,98,139,145,144,71,76,118,127,118,0,1,-4,0,0,31,39,106,109,57,113,128,150,107,80,118,123,86,93,128,128,118,-2,0,-1,-1,-5,16,95,130,138,67,78,110,125,125,77,81,100,116,69,118,107,111,-1,1,-4,0,1,33,128,131,118,103,40,97,111,125,90,68,77,117,54,97,93,96,1,0,-1,2,0,10,121,113,91,96,36,94,97,111,108,58,64,87,42,91,83,93,0,0,0,2,1,36,85,78,76,68,29,95,89,96,107,68,72,93,41,78,67,79,0,1,-2,0,0,14,51,30,57,33,47,99,75,80,105,60,65,80,65,38,84,89,-3,-1,0,-1,0,-2,-1,7,11,23,80,98,85,72,99,76,61,55,39,57,106,106,8,4,0,-1,0,-1,4,1,2,55,78,87,71,72,79,77,33,18,41,84,95,98,72,33,0,0,0,1,0,0,3,49,43,77,47,71,62,76,25,27,70,68,82,90,96,83,22,-1,-1,0,0,0,1,3,35,74,27,67,47,81,26,25,78,51,83,90,91,79,46,3,1,0,0,0,0,0,1,14,3,16,52,66,24,25,74,57,82,81,84,43,18,5,0,3,2,3,-2,0,0,4,4,4,16,57,37,11,35,47,56,69,62,29,3,7,-2,-1,0,3,2,1,0,1,1,0,42,56,28,13,43,58,70,68,52,32,1,7,0,0,0,1,1,1,0,2,-1,0,25,46,16,15,46,63,66,63],
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
