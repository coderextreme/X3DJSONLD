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
        texture=ImageTexture(url=['../../images/4/Malacca6-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-1.6675815493135302,97.86525024004024,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[-99,-99,-99,4,13,6,7,5,5,10,0,4,0,0,0,0,0,6,10,15,0,11,-99,-99,-99,2,4,6,7,5,5,4,10,6,3,0,0,0,5,4,6,11,2,10,-99,-99,-99,3,5,4,7,3,0,5,17,16,6,4,0,6,3,4,4,10,112,71,-99,-99,-99,6,5,2,7,4,4,0,8,17,15,3,7,3,3,13,11,21,104,82,-99,-99,-99,1,3,4,4,0,0,3,-4,8,5,5,5,5,8,0,4,85,103,119,-99,-99,-99,0,11,1,1,7,7,8,1,-10,4,5,8,5,4,7,28,31,159,77,-99,-99,-99,1,0,0,9,1,6,8,4,5,6,5,5,6,4,-2,84,23,36,72,-99,-99,-99,1,1,1,1,6,3,8,6,7,9,5,2,6,8,55,116,90,106,139,-99,-99,-99,1,1,1,1,0,4,5,4,-1,6,7,3,6,33,112,175,75,162,184,-99,-99,-99,1,1,2,2,6,8,1,7,4,2,6,8,1,170,34,128,202,157,78,-99,-99,-99,1,3,1,3,4,5,7,3,7,6,1,6,39,28,133,50,201,103,173,-99,-99,-99,2,2,2,1,1,8,1,4,4,2,5,3,-3,53,45,199,121,150,131,-99,-99,-99,2,1,1,0,0,4,-1,5,1,4,1,0,8,26,78,113,158,23,96,-99,-99,-99,2,1,0,2,0,2,4,6,4,5,4,6,0,0,98,135,107,21,43,-1,2,0,1,0,2,3,2,5,1,0,1,3,2,0,0,-2,92,47,58,33,35,1,1,1,0,0,3,2,1,2,2,3,-5,1,3,0,0,-1,5,1,-1,25,11,0,0,0,0,2,3,1,0,2,2,2,2,0,0,0,-2,3,5,5,6,-4,9,1,0,2,1,3,1,2,3,2,1,1,0,0,0,0,3,5,5,6,-4,8,4,2,1,0,2,2,2,2,3,2,2,2,2,0,0,0,2,5,6,-4,7,1,6,1,2,2,2,1,1,1,1,2,1,2,1,0,0,2,0,14,0,7,1,2,12,1,1,2,1,2,2,2,2,2,1,1,1,0,2,0,14,0,3,1,1,2,3,1,1,1,1,2,2,2,2,2,1,1,2,0,1,0,14,0,0,0,3,3,0],
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
