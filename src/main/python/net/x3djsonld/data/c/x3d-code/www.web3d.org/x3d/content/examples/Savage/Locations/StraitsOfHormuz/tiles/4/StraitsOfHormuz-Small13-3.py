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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small13-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.906134432197852,55.57839916841148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[4,4,1,3,0,0,3,5,0,3,8,3,-11,-2,-2,-1,0,3,0,0,23,1,2,4,5,2,5,2,-2,11,-2,0,0,1,6,3,-1,0,8,3,3,2,8,0,0,2,1,5,2,-4,7,-1,3,-6,3,4,0,0,10,3,1,0,0,7,23,4,3,4,0,0,5,4,1,3,-6,7,-2,4,0,2,0,-3,0,5,4,1,-4,22,3,3,2,3,0,-2,2,-2,4,0,0,4,1,-5,4,6,4,0,-1,5,9,-7,-1,4,2,0,4,0,3,18,1,0,0,-3,0,1,4,1,0,4,4,1,0,5,-1,10,2,2,3,0,3,-1,0,0,-1,2,0,-9,-12,3,4,0,-3,12,23,-2,2,1,2,5,0,3,-1,5,-1,0,1,0,-1,4,0,4,-8,0,7,7,-2,2,5,1,3,6,0,2,4,0,0,1,1,0,3,0,-4,0,6,1,-2,0,15,0,10,6,0,0,2,0,0,4,0,3,0,5,-1,-3,4,4,-4,-4,9,12,-3,2,18,11,4,0,0,0,0,0,0,0,-2,0,2,0,0,-6,7,2,0,-5,8,3,26,16,8,3,6,8,-2,-7,3,2,0,0,-1,-1,-5,4,-2,-7,1,9,3,-1,30,18,13,6,7,4,4,0,-1,-8,3,-2,-1,4,6,-2,0,6,4,-5,-4,10,70,40,57,12,17,17,8,7,-4,11,-6,-7,6,1,1,0,4,0,-1,2,11,-15,134,149,74,106,27,26,14,3,2,7,-15,2,-3,-7,8,1,-2,-1,9,0,-7,6,103,147,72,100,58,88,15,3,4,3,4,2,2,26,-2,0,-2,-2,-11,-3,8,-15,97,86,77,103,58,113,38,20,5,2,3,1,3,3,0,4,-1,2,3,3,-1,1,116,110,99,82,76,144,95,67,12,5,3,3,0,4,10,1,4,6,2,0,5,1,141,135,115,104,113,165,98,103,81,9,5,6,5,2,4,4,4,3,5,6,4,4,177,133,155,134,172,238,171,206,103,101,30,15,16,9,4,7,5,3,7,3,3,3,197,162,156,177,229,367,430,322,235,95,86,28,32,17,9,8,7,13,5,6,6,4,270,185,176,218,323,653,525,413,302,276,104,44,39,19,14,11,15,17,13,11,6,10,271,189,180,222,321,663,531,416,284,285,116,45,41,20,13,12,13,17,13,12,7,10],
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
