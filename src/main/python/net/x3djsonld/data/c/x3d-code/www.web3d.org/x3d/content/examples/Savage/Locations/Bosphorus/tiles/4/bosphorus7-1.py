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
        texture=ImageTexture(url=['../../images/4/bosphorus7-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.0075820664573,28.511681591246088,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[21,25,34,38,47,59,63,68,60,39,22,2,-10,-2,-1,-1,0,0,1,0,4,2,29,35,49,56,59,78,69,69,61,45,29,6,0,-1,0,0,-1,-2,1,-3,-2,0,42,51,59,64,67,84,75,73,61,50,34,14,6,0,-4,-3,-5,2,2,2,1,0,54,65,70,70,75,85,78,73,67,53,45,27,8,3,2,2,-2,0,0,1,-3,-1,75,76,81,81,88,94,83,75,62,53,49,40,29,16,-4,0,0,-2,-2,2,-9,-8,106,92,94,97,108,103,90,79,65,55,44,38,35,24,9,0,-5,-7,0,0,-3,-4,129,109,106,111,121,113,100,88,73,55,41,30,19,9,3,2,-6,-7,-7,1,0,0,132,130,126,122,129,125,111,97,77,50,34,19,10,6,2,4,1,1,1,1,1,2,132,148,148,138,138,132,120,104,78,51,33,11,8,5,3,7,0,1,4,4,4,5,139,160,150,141,143,128,120,109,86,53,29,22,10,5,3,10,0,0,2,5,7,7,139,151,147,130,128,117,112,101,89,56,35,19,10,5,14,40,4,6,1,-1,17,22,125,144,151,118,108,97,91,87,87,58,40,23,12,4,33,25,16,2,1,8,3,6,114,138,141,117,88,80,72,71,90,71,44,25,12,6,0,13,3,2,1,5,2,4,108,129,125,122,91,62,56,56,97,83,71,31,10,6,5,7,-11,1,0,0,0,2,100,116,109,118,112,72,43,39,65,73,47,27,20,10,1,0,3,0,0,0,5,7,89,108,97,106,129,95,60,27,33,36,33,31,31,24,-13,2,3,2,2,8,0,3,76,104,90,98,120,111,86,50,20,14,16,33,47,27,5,1,3,0,4,-1,-1,0,63,96,76,81,104,90,61,68,24,7,8,48,65,44,1,3,1,2,0,4,0,1,52,71,67,67,104,69,26,60,20,4,3,16,18,24,2,-1,5,2,2,2,0,1,51,46,53,54,80,59,14,18,22,4,3,5,9,3,-6,1,2,-1,-1,2,0,0,77,53,34,40,57,48,7,4,4,4,14,1,4,2,3,6,0,4,0,0,0,1,81,74,50,30,34,20,6,6,5,10,11,1,0,2,2,7,1,0,-2,1,4,4,79,101,97,49,24,10,7,10,10,9,7,2,3,1,2,3,0,-3,2,2,5,6,78,104,99,53,26,9,7,10,10,7,4,3,2,0,1,3,1,-5,1,3,6,6],
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
