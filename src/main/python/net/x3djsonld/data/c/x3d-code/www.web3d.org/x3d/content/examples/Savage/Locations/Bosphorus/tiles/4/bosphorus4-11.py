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
        texture=ImageTexture(url=['../../images/4/bosphorus4-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.84357772961846,29.253497503706967,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[-1,2,0,-2,-5,2,0,1,0,4,2,1,0,4,3,7,11,13,28,32,38,41,-3,-1,0,-9,-11,-7,9,8,29,-3,2,6,4,9,5,9,13,21,45,41,45,50,3,1,9,-4,-17,-16,1,33,44,-45,-39,0,3,27,8,21,13,26,41,58,56,69,0,0,-2,2,-11,-6,4,27,45,-27,-19,-3,10,11,9,28,26,21,46,65,79,83,1,11,42,-2,-9,0,-2,0,9,0,-13,2,3,14,26,34,37,34,42,67,107,112,-1,20,49,1,3,12,12,2,5,3,-15,3,12,24,39,55,59,42,53,72,108,123,0,8,5,1,6,6,6,3,5,9,2,11,31,48,35,67,98,66,60,73,122,142,0,4,4,10,19,5,3,12,28,28,23,15,43,64,62,73,92,110,83,76,119,128,-15,1,2,-19,-4,3,4,10,32,39,39,27,34,72,98,113,87,104,103,103,103,112,-15,3,0,-11,8,2,2,3,21,39,51,47,46,55,102,99,76,85,84,89,107,105,2,1,2,0,0,4,8,4,3,15,37,43,50,55,71,75,77,71,77,90,112,101,4,1,0,4,8,17,17,14,5,5,29,44,52,63,67,65,77,61,65,101,103,96,1,0,2,19,20,25,28,23,9,18,9,33,51,62,54,58,72,71,61,87,81,77,4,10,20,23,28,29,38,34,17,34,26,13,12,30,24,43,58,63,63,64,67,63,14,18,24,26,31,38,44,45,25,40,52,48,47,13,25,14,35,40,52,55,57,72,43,36,34,33,39,43,47,50,34,50,55,57,46,27,44,28,20,20,20,42,71,73,76,54,46,39,47,48,50,54,44,56,67,56,25,42,51,62,48,39,23,36,65,59,69,83,65,64,60,61,55,57,49,59,71,59,33,57,64,65,49,55,36,25,41,43,88,111,95,84,66,66,65,64,58,67,76,49,44,74,68,58,52,65,55,38,26,27,74,115,129,104,86,73,74,70,73,79,73,43,67,74,65,69,61,77,71,55,47,38,85,153,148,108,86,88,85,74,87,85,64,62,81,81,80,78,70,80,75,71,65,58,110,162,150,111,99,102,93,78,85,65,69,67,87,85,87,85,81,86,78,86,73,71,123,138,134,112,111,98,94,90,90,75,75,79,87,91,89,89,91,95,93,91,84,84,126,139,133,115,112,96,96,93,91,79,77,81,89,92,91,90,92,96,95,91,86,86],
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
