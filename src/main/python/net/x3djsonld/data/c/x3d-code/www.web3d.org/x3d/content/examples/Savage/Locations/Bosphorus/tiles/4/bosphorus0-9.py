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
        texture=ImageTexture(url=['../../images/4/bosphorus0-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.6249052805,29.10513432121479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[398,394,334,271,302,300,280,226,208,196,203,172,178,151,87,124,144,117,113,92,134,144,373,351,332,256,213,229,222,215,177,157,165,145,124,148,87,84,98,77,99,88,132,140,321,277,324,284,188,179,178,183,162,144,128,127,115,122,98,70,50,65,74,77,119,126,267,278,221,243,195,129,149,161,168,146,126,99,91,94,65,56,47,42,49,73,112,118,170,212,181,146,178,99,114,137,138,124,108,100,77,72,83,86,58,35,42,80,99,105,163,172,107,107,114,89,81,100,107,111,106,110,111,112,119,87,58,47,32,67,77,79,127,95,83,49,48,49,60,75,71,88,104,120,130,126,123,105,86,69,28,38,49,47,25,14,18,19,25,31,47,65,56,93,92,92,100,108,109,87,75,60,31,21,20,20,0,10,-2,1,9,18,23,24,29,68,72,65,78,91,91,67,48,36,33,40,18,18,0,1,-6,-1,0,7,7,5,11,23,35,33,55,54,71,53,45,40,64,52,52,45,1,1,0,-3,0,0,-1,-1,1,3,5,11,24,40,70,68,74,61,71,79,62,50,4,0,0,0,0,0,1,1,0,0,0,6,19,31,57,75,59,43,62,71,51,45,1,2,0,1,0,-1,4,4,0,3,1,0,8,21,35,54,30,13,37,22,32,34,0,1,1,1,2,2,2,1,1,0,0,1,3,8,20,2,3,3,3,0,2,5,-1,3,0,1,2,1,0,0,2,0,2,-1,5,11,-2,2,1,-3,1,0,0,0,0,1,0,1,0,1,1,2,1,1,2,-3,1,-1,1,-1,0,5,2,3,0,0,0,2,0,2,0,1,2,3,0,0,2,0,4,-1,0,1,1,-1,-1,4,-1,1,1,0,0,0,0,0,2,3,0,0,2,0,0,0,0,0,3,1,0,1,2,4,0,3,0,0,0,0,1,0,1,-2,0,0,1,0,0,0,0,1,2,-1,1,2,0,0,0,-1,0,2,0,0,3,0,2,0,-3,0,0,0,0,3,0,0,6,6,0,1,-1,0,0,0,1,0,2,1,1,0,0,0,0,0,0,-1,1,0,0,4,-1,2,0,0,0,0,0,0,0,1,2,1,0,1,0,0,0,0,5,3,0,0,1,1,0,0,0,0,2,0,0,0,0,0,0,2,0,0,2,1,1,0,-2,1,1,1,0,0,0,0,1,0,0,0,0,0,0,1,0,0,2,0,2,0,-2,0],
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
