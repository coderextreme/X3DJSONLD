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
        texture=ImageTexture(url=['../../images/4/Malacca8-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.3471685463819594,96.85450019203219,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[-99,-99,-99,-99,2,4,0,3,3,3,1,3,4,2,3,3,5,6,4,3,5,2,-99,-99,-99,-99,0,6,7,0,2,5,5,2,4,5,4,4,7,5,2,2,1,3,-99,-99,-99,-99,6,13,3,4,4,4,3,3,4,4,5,5,4,4,0,0,0,1,-99,-99,-99,-99,13,10,7,2,2,4,2,2,3,5,4,3,3,4,2,4,0,0,-99,-99,-99,-99,10,7,7,0,5,6,8,4,3,3,2,3,3,3,-2,0,0,0,-99,-99,-99,-99,7,7,6,5,8,5,3,3,2,1,2,2,3,1,14,4,5,0,-99,-99,-99,-99,4,-5,3,-7,6,3,3,1,3,1,1,3,1,1,162,141,131,20,-99,-99,-99,-99,4,4,-5,3,7,1,4,3,1,2,3,3,2,35,120,206,407,327,-99,-99,-99,-99,20,4,0,2,1,7,5,1,2,3,2,5,2,29,138,266,117,60,-99,-99,-99,-99,0,3,4,4,0,3,7,3,2,3,3,4,-6,69,328,365,101,80,-99,-99,-99,-99,10,4,2,5,3,4,1,2,1,2,4,1,204,399,216,235,203,281,-99,-99,-99,-99,5,5,0,0,9,0,0,-3,1,-3,0,103,289,524,273,159,55,21,-99,-99,-99,-99,0,1,6,2,4,-4,1,12,-5,-1,43,142,402,614,467,243,208,179,-99,-99,-99,-99,9,0,2,3,0,3,6,3,9,28,92,369,463,369,388,129,34,29,-99,-99,-99,-99,3,3,1,5,3,15,-15,0,23,125,235,148,429,456,132,35,21,16,-99,-99,-99,-99,13,5,0,-7,9,13,5,12,40,47,320,404,333,127,126,41,11,10,-99,-99,-99,-99,10,1,-11,0,-6,-2,-10,14,94,110,40,102,170,216,19,16,1,5,-99,-99,-99,-99,1,3,4,4,4,-2,25,84,20,149,144,327,204,137,10,5,2,1,-99,-99,-99,-99,0,1,3,4,8,125,46,165,185,157,185,122,20,1,2,2,4,2,-99,-99,-99,-99,0,0,1,0,0,80,53,73,164,93,263,117,3,4,3,2,2,2,-99,-99,-99,-99,2,0,1,75,77,33,19,92,128,42,115,101,3,3,1,1,0,1,-99,-99,-99,-99,2,0,0,86,82,39,22,65,151,46,124,86,1,3,2,2,2,1],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])))])
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
