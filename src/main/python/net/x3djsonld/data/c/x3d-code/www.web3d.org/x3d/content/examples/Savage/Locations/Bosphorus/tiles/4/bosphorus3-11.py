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
        texture=ImageTexture(url=['../../images/4/bosphorus3-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.788909617338845,29.253497503706967,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[-2,0,-1,0,0,-1,0,-4,0,0,0,-1,-1,0,0,-1,-2,0,0,0,0,0,0,0,0,0,0,1,-1,2,0,-1,0,0,0,0,0,-4,1,-1,0,0,0,0,2,-2,0,0,2,-2,3,3,0,1,1,0,1,5,0,-3,-3,-7,0,4,0,2,-1,1,-1,0,-1,-1,-2,2,0,3,2,-2,0,1,2,-3,0,0,2,1,4,0,0,3,1,0,0,-3,2,1,0,0,0,0,0,0,0,2,-1,3,2,-2,6,1,3,-3,1,1,0,0,0,1,1,-1,6,1,-1,0,0,1,0,2,0,1,11,-2,1,0,0,2,8,-1,6,-1,-1,1,0,8,0,0,0,3,1,0,3,-2,2,0,0,1,0,7,0,3,1,0,3,0,4,3,0,-1,5,14,-1,5,0,2,-2,-2,0,1,3,9,6,5,0,0,0,0,0,0,1,1,3,1,1,-7,2,0,0,-2,2,-2,0,2,1,0,7,5,6,-1,2,-8,2,0,0,1,-6,2,5,1,0,0,-2,0,1,5,1,5,3,3,-1,1,1,-3,2,2,-22,-10,6,4,-2,1,3,-28,0,7,11,8,2,3,10,6,5,7,10,6,3,6,-3,-2,0,6,5,-9,3,-3,-2,6,0,3,1,5,12,8,6,12,10,17,12,7,2,5,1,8,3,-2,7,-6,3,1,2,0,0,3,7,4,16,23,11,11,11,10,7,4,5,5,13,9,2,3,-5,2,16,3,5,17,2,7,12,12,7,8,8,12,11,11,9,11,17,14,8,8,9,9,21,16,17,-4,9,5,5,5,6,1,5,6,14,15,13,15,18,18,15,22,11,14,22,21,1,1,-7,1,-3,3,2,-2,3,7,15,20,23,19,16,16,19,18,5,14,22,22,31,-9,-4,2,-3,0,7,-9,1,8,13,26,28,26,16,14,19,20,13,8,17,9,-11,-11,0,7,0,12,4,12,2,7,13,20,27,31,15,16,22,24,0,1,4,-29,-11,-13,5,12,0,3,12,56,0,2,10,21,21,25,11,18,24,28,4,0,9,6,-32,0,2,2,0,1,7,9,0,1,3,10,14,14,15,27,31,35,0,1,3,3,-21,-10,2,0,-1,4,1,0,0,1,9,10,7,9,21,25,35,37,0,11,-3,0,-4,2,0,0,0,8,2,2,0,5,4,7,9,12,25,31,36,41,-1,2,0,-2,-5,2,0,1,0,4,2,1,0,4,3,7,11,13,28,32,38,41],
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
