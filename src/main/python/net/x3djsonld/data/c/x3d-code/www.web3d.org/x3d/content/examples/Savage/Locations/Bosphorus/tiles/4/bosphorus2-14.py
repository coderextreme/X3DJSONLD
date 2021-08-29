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
        texture=ImageTexture(url=['../../images/4/bosphorus2-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.73424150505923,29.47604227744523,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[0,0,2,1,0,0,0,0,-3,0,0,0,1,4,2,-2,1,1,0,0,1,1,0,1,0,1,0,0,0,0,0,0,1,0,1,1,0,1,0,0,1,0,0,0,0,2,3,1,1,1,0,0,0,-1,0,1,1,0,1,1,4,0,0,1,0,0,0,0,2,1,0,0,0,1,-2,0,0,0,0,0,1,0,0,1,0,1,0,2,0,0,-1,0,0,2,0,0,0,1,0,0,2,2,2,0,0,0,0,0,2,3,0,0,2,1,0,0,1,0,0,1,0,0,3,0,3,2,0,4,2,1,0,1,0,0,0,0,2,0,0,0,0,0,0,1,0,0,2,0,-3,0,1,1,0,1,0,0,1,0,0,0,0,0,1,0,1,3,1,1,-1,0,0,2,1,2,4,3,0,2,0,0,5,1,1,0,-2,2,2,0,1,0,3,0,1,0,2,4,4,6,0,1,0,2,2,0,0,1,2,0,0,0,-3,-1,0,-4,-1,7,1,0,0,0,0,1,0,3,0,1,0,3,-5,2,0,3,1,0,-2,0,9,0,5,-1,5,3,1,9,0,0,1,0,0,-1,-2,0,2,3,-1,-6,-3,1,-9,5,-2,0,7,6,12,12,-2,0,3,0,-3,4,0,0,-1,-25,0,-8,-10,-16,-13,-15,1,0,5,7,1,1,0,-5,2,0,2,0,2,-3,0,-9,-5,-29,-17,-16,-11,-3,-14,11,4,10,-2,-7,4,0,0,0,1,6,3,-4,0,-9,-34,8,0,0,6,3,2,7,16,19,-8,2,0,7,1,0,-1,0,1,0,-3,-11,2,35,38,2,6,6,11,11,2,3,6,1,-6,-3,1,0,-3,-3,0,0,-2,-3,6,47,69,5,3,17,63,73,9,18,23,1,1,1,-4,1,0,-2,-3,0,-1,4,15,63,80,54,10,5,12,53,15,17,56,23,20,8,0,1,1,-2,0,2,10,70,36,91,103,67,11,9,8,17,25,31,80,73,80,33,52,8,4,9,1,5,42,86,61,113,108,61,6,4,6,12,30,34,90,101,97,95,109,39,59,55,36,13,28,63,79,107,125,69,8,10,6,17,33,40,111,110,110,109,120,58,110,89,70,36,61,74,102,111,94,47,9,8,9,29,50,50,131,117,118,118,129,94,100,113,91,45,82,81,126,96,60,28,9,10,31,64,75,74,135,120,119,115,131,107,100,117,88,52,84,82,127,94,55,25,10,12,35,72,85,83],
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
