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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small3-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.78518503735335,57.23545039395357,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[2,0,0,0,0,5,0,0,0,0,0,4,8,0,1,0,1,1,0,0,1,0,4,0,0,0,0,-3,14,1,-3,9,0,0,0,-10,2,0,0,1,0,2,2,1,2,5,0,0,0,0,0,3,1,9,0,0,-1,4,0,0,0,2,1,0,1,1,-2,3,2,2,1,0,-2,-1,7,1,0,0,1,-1,0,0,1,1,7,1,7,5,1,-2,3,1,-2,2,6,4,-1,-1,-1,0,-2,0,-1,0,2,0,2,4,1,5,2,0,0,4,0,7,1,0,0,0,0,4,0,2,1,0,2,3,1,2,2,5,-1,2,-1,2,2,1,2,5,2,3,0,0,4,1,1,1,2,7,1,6,8,8,-1,0,1,-2,3,1,6,0,0,2,0,1,2,3,3,0,2,0,6,6,22,6,-1,-1,1,0,2,0,1,-6,0,6,1,1,1,4,1,3,8,5,9,9,18,17,0,-1,-1,3,1,0,1,1,5,6,2,1,2,1,3,3,5,9,8,10,35,11,0,0,-4,-15,4,4,0,2,2,0,4,1,2,4,6,4,6,9,5,14,13,13,0,0,1,3,2,0,0,2,5,3,3,5,3,3,5,5,4,0,14,8,17,12,0,0,0,0,0,0,1,1,1,0,2,7,3,4,0,3,8,11,9,11,7,14,0,0,0,-1,8,0,0,1,3,2,8,3,2,3,6,3,7,11,12,10,16,19,0,0,-1,2,3,6,2,5,1,0,-1,5,2,4,6,4,8,28,17,18,21,41,0,-1,1,0,0,0,3,0,1,2,2,2,3,3,4,4,9,19,20,17,35,65,0,0,0,0,6,0,6,0,4,2,2,2,2,7,7,6,17,18,21,24,62,77,-1,2,0,0,0,4,0,0,0,4,0,3,7,0,6,9,17,21,26,31,71,60,3,0,0,0,0,0,-4,5,3,2,4,5,2,13,10,6,13,32,33,38,99,27,4,0,0,0,6,2,3,1,0,1,1,3,5,8,10,11,78,37,54,55,76,28,6,0,0,1,1,1,0,1,1,4,1,8,8,9,12,34,50,41,121,88,40,28,0,-9,1,1,2,0,0,0,0,1,-1,8,9,9,12,12,56,33,38,78,24,23,0,-9,1,1,3,0,-1,1,0,2,-4,8,7,9,11,12,64,32,37,74,25,23],
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
