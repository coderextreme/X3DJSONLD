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
        texture=ImageTexture(url=['../../images/4/bosphorus7-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.0075820664573,28.73422636498435,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[-4,-1,1,-2,2,-4,-4,-4,-4,0,1,31,67,77,80,78,70,82,76,62,44,37,17,1,0,0,-2,-9,-1,-5,0,0,3,6,41,64,85,84,86,84,83,55,32,27,-2,2,5,-2,1,-10,-3,-16,-11,0,-15,0,18,40,77,86,88,85,82,64,31,26,-8,0,-5,2,0,-2,0,-30,-8,0,-1,1,13,32,67,89,88,92,89,67,28,20,3,-1,-3,0,-3,0,3,15,15,1,8,6,11,43,66,89,90,93,92,65,31,23,7,7,1,-4,-4,0,14,33,15,1,18,33,14,41,65,93,93,96,78,61,29,20,17,22,4,-3,0,0,10,34,15,1,9,42,26,42,53,84,99,93,67,47,21,16,16,24,7,10,6,-4,10,40,24,2,18,40,48,39,48,79,102,91,60,39,21,18,23,24,7,5,10,0,14,41,35,2,25,47,59,55,50,75,102,88,59,45,20,17,30,23,3,4,3,7,19,46,41,5,31,47,54,64,57,73,103,80,58,43,24,20,33,13,4,3,-4,2,24,56,41,7,28,41,51,75,88,75,97,69,50,38,24,20,35,14,2,1,-8,0,24,56,31,6,12,36,59,88,106,102,95,65,45,32,24,21,35,4,0,-3,-4,2,31,51,30,10,22,46,70,96,110,111,106,67,64,44,28,24,24,-1,3,-3,3,0,24,47,34,10,11,37,61,75,98,115,109,100,81,54,29,24,15,0,16,4,1,0,15,43,20,7,7,30,59,54,74,111,118,110,80,54,34,29,10,5,12,1,7,3,7,30,18,12,12,9,51,40,65,102,121,109,76,58,35,29,5,-1,7,-3,1,3,13,26,14,29,31,10,23,28,56,86,117,100,64,55,35,29,0,-14,3,-3,3,13,36,26,19,55,49,10,52,41,55,76,95,101,64,51,33,28,4,-2,4,0,6,51,72,22,38,73,67,19,46,69,47,59,91,102,74,56,35,32,0,3,-1,1,4,77,77,21,48,88,67,17,35,77,55,60,82,93,66,56,34,31,2,3,0,-1,0,55,72,24,52,94,62,14,33,75,61,60,69,86,66,50,44,41,13,2,-1,-1,0,29,58,27,54,90,45,15,33,71,68,69,71,79,63,45,59,57,11,0,0,0,0,37,56,29,65,89,42,21,39,60,67,86,84,70,59,55,65,63,13,1,1,0,0,42,57,29,67,89,44,21,37,54,68,89,84,71,60,56,65,64],
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
