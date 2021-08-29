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
        texture=ImageTexture(url=['../../images/4/bosphorus7-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.0075820664573,28.956771138722615,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[2,3,3,4,3,10,13,10,2,-1,0,2,1,2,-4,-10,1,2,23,32,11,9,7,12,11,15,15,21,37,28,6,4,-1,-2,3,-7,-2,6,2,10,31,41,24,20,13,24,30,39,53,55,44,38,25,4,0,-2,0,5,-3,0,3,37,31,47,37,31,23,39,52,57,56,62,49,34,42,12,9,3,-3,1,0,0,8,43,44,54,50,46,31,49,55,68,48,49,35,22,50,16,4,0,3,2,-7,-3,19,64,58,69,62,56,39,43,54,60,37,29,18,8,22,17,2,1,-5,-17,-4,0,34,65,57,63,75,76,52,33,40,48,16,7,4,5,7,3,3,-10,-8,-21,3,12,42,48,42,51,68,73,60,37,13,9,0,1,-2,12,-1,3,0,6,-12,4,-6,7,43,33,18,39,55,60,48,26,8,0,-7,1,6,12,-3,-6,-5,4,-2,0,-2,22,40,17,31,50,60,70,34,16,-1,-4,3,23,21,11,5,0,3,0,3,0,0,10,14,9,15,50,65,69,32,8,2,0,8,44,52,13,6,4,0,3,3,-2,0,-3,1,5,36,35,58,67,-14,2,4,0,8,42,74,25,58,23,5,3,3,0,-6,-5,-11,-1,41,50,86,79,-7,1,12,11,5,43,80,56,71,71,7,1,-4,0,-33,-3,0,0,3,17,57,73,2,0,4,35,8,27,78,83,78,58,59,3,2,3,-35,-16,0,0,1,2,32,56,9,29,25,47,8,27,51,65,83,83,73,27,-7,5,-2,-2,0,10,-3,4,3,5,16,47,53,31,17,14,22,36,78,85,54,21,15,9,4,0,3,6,5,3,2,3,45,61,75,33,21,21,55,30,61,77,67,26,45,18,8,5,2,9,1,4,5,3,35,70,69,43,18,37,72,67,46,82,66,39,57,28,16,26,26,13,6,6,9,5,24,80,69,48,23,63,55,92,68,89,65,77,57,26,44,38,56,35,28,15,6,6,57,82,80,64,34,64,62,89,97,84,83,92,75,24,55,57,85,47,69,32,10,5,86,79,90,80,46,67,86,88,114,97,108,100,77,30,46,77,96,78,75,22,21,33,78,100,97,90,46,63,92,98,111,107,111,96,79,28,76,88,104,89,46,20,51,48,73,102,95,83,75,41,66,83,113,113,88,69,49,54,99,98,98,55,56,24,85,90,68,99,95,85,78,45,61,85,112,117,87,64,46,56,97,102,97,57,67,24,86,94],
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
