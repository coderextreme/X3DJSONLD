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
        texture=ImageTexture(url=['../../images/4/bosphorus12-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.280922627855375,28.73422636498435,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[94,69,47,57,51,58,58,46,72,101,113,127,128,119,89,56,54,61,80,64,48,48,86,56,38,61,46,57,43,47,88,74,102,99,95,60,49,51,70,70,53,38,27,27,63,44,44,52,37,48,43,65,72,69,105,74,53,47,54,68,76,79,45,27,24,23,39,22,33,36,36,27,30,53,64,69,74,70,61,64,45,78,75,65,46,21,24,27,23,17,17,24,31,20,47,65,63,85,86,80,59,41,39,48,53,67,44,11,16,20,16,15,9,14,17,36,55,55,55,69,78,65,51,38,39,48,62,67,43,13,10,12,23,15,17,19,26,49,55,45,48,65,57,53,56,40,41,54,70,65,48,16,8,9,38,16,10,20,40,54,54,51,48,67,57,53,59,53,47,53,68,73,52,24,7,9,30,14,16,15,46,74,64,58,58,65,59,40,57,58,52,53,66,73,46,19,8,9,17,11,12,10,35,63,77,50,36,53,39,34,44,43,47,48,53,61,41,18,7,6,33,31,22,14,28,57,60,35,21,26,28,32,22,25,31,28,26,40,36,5,-2,-5,42,50,47,22,35,69,59,32,26,31,45,41,18,14,25,17,5,15,12,2,-13,-18,41,52,58,39,19,43,45,22,25,36,36,45,35,21,8,5,1,2,3,7,-13,-22,53,42,46,53,18,50,50,14,10,14,17,36,37,36,7,1,5,3,1,1,1,-1,31,40,33,45,14,47,39,12,-5,-8,1,25,34,33,21,4,0,1,0,0,-1,-2,10,28,27,19,23,45,34,5,-6,-10,-10,8,21,2,10,4,0,2,1,2,-2,-1,26,16,19,34,49,21,17,9,-5,-3,-13,-13,11,-14,-1,0,0,0,0,0,1,3,24,5,9,25,51,13,1,0,0,0,-6,1,5,-2,2,2,0,0,-2,0,-1,0,19,-2,-9,5,15,5,5,5,-29,-7,-4,3,0,-2,0,0,-1,0,0,-2,0,0,15,-12,-19,0,5,5,4,0,-32,-5,2,-1,0,0,0,0,-3,0,0,1,0,1,19,-16,-18,-6,8,7,6,1,-1,0,0,0,0,0,-3,0,0,0,0,1,0,0,9,0,1,1,9,4,0,2,0,2,0,2,1,0,0,0,0,0,3,1,0,0,4,5,3,3,0,0,3,2,0,-3,1,2,0,0,0,-1,0,0,0,0,0,0,4,5,4,3,0,0,5,1,0,0,1,3,0,0,0,0,0,0,0,2,0,0],
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
