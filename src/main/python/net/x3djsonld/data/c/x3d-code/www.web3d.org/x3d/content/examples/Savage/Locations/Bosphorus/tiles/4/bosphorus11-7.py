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
        texture=ImageTexture(url=['../../images/4/bosphorus11-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.22625451557576,28.956771138722615,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[194,162,142,160,157,141,105,95,110,100,122,71,142,147,103,105,122,97,62,67,87,79,191,169,154,128,157,148,138,139,119,74,58,55,120,98,77,72,111,102,87,54,49,47,179,172,157,132,108,147,153,141,159,98,97,102,43,61,48,80,83,92,86,75,55,54,183,178,144,94,107,141,93,95,140,111,96,65,45,40,47,78,55,86,84,85,79,85,183,170,117,80,108,110,102,82,99,65,105,80,72,52,32,38,52,52,57,94,97,89,146,165,136,82,112,80,94,46,59,56,81,90,69,62,51,23,45,29,57,82,98,97,87,118,148,94,87,58,84,66,23,75,53,63,92,59,42,27,17,21,58,81,79,89,87,82,100,91,67,41,36,40,24,18,23,37,50,60,54,45,23,13,45,64,78,85,43,50,79,84,71,66,44,34,42,29,16,14,15,26,52,54,30,9,40,45,67,70,64,31,73,71,97,59,65,38,55,38,23,19,11,9,25,52,27,7,21,28,73,73,57,26,49,73,83,94,70,56,68,54,32,31,16,7,7,44,15,6,31,45,61,63,58,38,22,50,58,92,81,79,72,42,56,41,20,5,5,15,14,3,10,11,13,13,57,57,15,20,42,64,83,89,76,61,66,32,20,6,2,7,2,4,5,2,7,8,33,57,36,9,26,59,45,65,56,26,7,3,5,3,7,4,0,0,-1,0,0,2,16,37,45,10,31,21,10,28,11,6,6,2,0,0,-2,4,0,-3,-3,1,0,0,14,17,15,4,3,1,5,2,9,0,6,5,2,1,0,0,4,-3,-1,0,0,-2,15,18,19,5,3,0,0,0,0,0,0,-3,0,1,1,-3,0,0,0,0,0,1,23,16,13,3,0,-2,-2,-2,-1,-1,0,-2,0,1,0,0,0,-1,-1,1,0,1,13,3,3,0,0,0,1,-2,0,-1,0,0,0,0,0,0,0,-2,0,0,-2,0,0,5,0,0,3,0,0,1,1,-2,0,-2,1,0,0,0,0,0,-1,0,0,0,5,3,-2,1,1,-3,1,0,0,0,0,0,0,0,1,0,0,2,0,0,0,0,0,0,0,0,-2,0,0,0,0,-1,0,-1,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,-1,0,2,0,-1,0,-1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,-1,0,2,0,-1,0,0,0,0,0,0,2,-1,1,0,0],
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
