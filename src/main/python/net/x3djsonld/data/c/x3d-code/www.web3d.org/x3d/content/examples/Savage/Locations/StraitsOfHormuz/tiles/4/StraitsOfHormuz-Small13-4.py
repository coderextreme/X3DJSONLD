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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small13-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.906134432197852,55.729040188915306,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[1,10,18,-11,6,-1,7,1,19,23,14,13,15,29,39,27,25,23,26,33,16,7,0,11,0,1,6,10,13,8,14,20,15,18,-3,24,46,37,20,12,9,5,1,4,4,5,4,-13,4,9,31,45,48,81,22,12,7,9,8,10,10,7,8,6,2,1,22,4,22,0,10,10,14,51,93,74,9,13,17,11,11,3,5,-1,6,1,1,5,-7,-1,6,5,15,13,24,88,23,26,6,13,19,2,3,13,0,2,-1,7,-3,0,5,-6,0,0,9,23,41,20,52,8,15,18,-6,18,1,2,-1,6,-14,-3,11,0,-2,7,4,18,21,13,37,21,12,15,17,4,19,1,2,0,4,0,2,0,-4,11,2,11,11,6,6,16,22,17,15,26,13,12,8,2,3,0,10,3,0,5,1,4,0,11,14,11,13,19,26,8,12,8,12,9,8,-8,0,3,0,0,-1,7,2,7,2,6,20,11,11,20,15,9,6,4,7,3,6,17,7,11,5,-1,2,4,0,-2,3,3,6,9,8,11,8,20,10,-4,3,5,-3,13,-4,2,17,-3,12,0,5,-5,-1,12,6,3,8,7,-3,2,12,-17,-1,-6,2,6,1,-15,10,4,3,4,4,-1,10,3,-1,0,5,2,-14,-4,5,0,-3,-5,-18,16,4,5,-13,13,3,0,5,-1,-15,4,0,5,1,-4,8,8,1,-33,0,12,2,3,-33,19,-4,-10,13,3,3,-3,6,1,-4,0,1,5,-8,0,8,15,-1,0,3,4,15,23,10,-16,-3,6,0,7,-15,-7,11,11,-2,-10,9,7,-12,-8,-3,10,-7,-13,9,17,4,-6,-4,-1,5,2,1,3,1,3,8,9,-1,-3,6,26,0,-7,-4,8,-2,-9,17,17,7,3,7,0,1,-1,8,8,4,2,-1,9,5,-7,0,23,-4,0,14,7,4,13,7,3,2,-2,4,4,4,2,0,15,9,-5,-10,12,1,-6,9,2,5,-1,2,8,6,1,0,2,3,3,3,4,4,4,-6,3,14,-11,-4,10,4,3,0,5,1,0,-4,-8,10,1,4,5,6,1,4,2,4,1,0,13,6,0,6,0,10,6,6,0,1,0,2,-4,10,7,6,3,1,3,-4,1,7,0,-11,9,11,1,2,1,-7,6,7,5,0,4,10,7,6,5,3,2,-8,3,7,0,-9,9,7,1,3,1,0,5,0,6,0,4],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])))])
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
