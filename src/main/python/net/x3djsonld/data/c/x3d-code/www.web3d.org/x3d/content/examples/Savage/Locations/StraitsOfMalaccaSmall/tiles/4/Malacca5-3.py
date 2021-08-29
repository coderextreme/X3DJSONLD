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
        texture=ImageTexture(url=['../../images/4/Malacca5-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.116798394735791,100.04106255949056,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[10,19,13,9,11,10,7,7,6,11,5,5,5,5,7,11,29,27,29,30,33,30,8,8,9,10,11,9,6,6,5,4,6,4,22,28,9,8,23,23,32,26,25,27,6,10,10,11,11,9,7,5,4,5,8,4,21,21,9,19,24,25,30,27,23,24,6,7,10,10,11,9,9,11,5,6,4,5,6,10,24,22,17,24,29,27,28,23,9,7,6,8,8,6,7,9,10,5,1,4,8,16,26,23,34,27,24,23,21,26,6,7,5,6,6,7,8,5,4,6,5,2,10,22,25,27,35,31,31,25,28,28,14,5,4,5,6,7,14,5,3,8,4,5,12,24,32,32,34,30,30,30,27,16,5,8,5,6,8,7,10,16,3,9,3,23,18,27,35,31,25,22,32,25,25,15,5,9,6,7,8,7,7,5,4,6,5,11,12,21,34,28,23,27,31,24,28,21,4,4,4,5,8,7,5,7,3,15,6,13,9,12,27,30,30,30,33,25,16,10,3,9,13,8,8,6,5,5,8,3,3,6,12,24,27,30,30,27,25,20,8,-1,2,3,4,3,6,7,4,6,8,10,3,6,21,23,22,29,33,25,20,3,0,-1,6,2,13,7,10,7,6,7,9,5,3,3,24,28,21,31,27,18,6,9,0,0,2,3,4,10,11,8,8,6,6,3,7,12,24,28,27,32,23,11,7,0,0,-3,5,8,1,5,1,8,7,7,2,1,3,1,7,26,27,28,28,16,4,0,2,2,7,9,2,2,3,10,8,6,1,1,2,2,18,29,30,27,25,26,0,-1,0,2,5,3,1,0,5,8,7,7,7,2,2,4,24,21,26,25,25,7,0,0,3,5,6,3,3,3,12,8,5,11,10,4,2,6,27,25,24,25,21,11,0,0,0,1,9,1,6,1,5,9,7,4,2,2,2,21,27,19,20,18,7,8,1,0,0,5,9,1,1,0,3,6,1,0,2,1,8,20,25,26,18,4,7,2,2,3,1,0,11,4,3,7,8,5,3,7,1,1,7,8,19,25,17,5,10,1,3,0,2,1,10,3,2,3,7,7,5,5,6,3,6,14,25,25,16,10,-4,0,1,0,1,0,10,3,2,2,7,7,4,4,6,0,6,17,25,26,17,9,-2,-1,2,0,3,0],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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
