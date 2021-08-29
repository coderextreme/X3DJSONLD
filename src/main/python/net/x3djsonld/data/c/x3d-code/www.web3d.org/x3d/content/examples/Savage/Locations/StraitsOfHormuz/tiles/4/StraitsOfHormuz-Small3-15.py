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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small3-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.78518503735335,57.3860914144574,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[0,1,0,2,1,3,2,2,2,2,1,1,2,2,3,0,1,2,2,2,1,2,1,3,3,2,1,1,3,5,1,3,1,4,3,2,1,3,0,5,2,1,2,1,1,5,4,4,6,1,1,5,6,5,3,3,2,2,0,2,4,3,6,5,4,1,5,2,0,4,4,3,5,1,4,5,3,4,6,-2,3,4,4,6,5,7,7,6,5,6,9,4,7,6,5,4,5,2,4,4,3,5,6,7,6,4,7,6,6,9,5,7,6,4,6,5,2,5,6,9,4,6,5,9,8,10,8,8,9,10,11,34,8,7,5,5,9,7,8,6,5,5,7,5,8,6,9,5,10,9,9,9,22,34,6,9,13,10,7,11,4,8,6,9,6,8,9,8,9,8,11,11,13,14,18,14,17,10,11,9,11,11,10,12,13,8,11,10,10,12,10,13,11,14,12,14,13,13,11,10,13,9,8,8,8,10,13,9,16,18,12,12,10,13,15,12,14,16,16,12,13,9,12,10,12,11,11,9,10,9,30,21,16,13,14,10,14,15,15,13,14,15,12,12,12,11,13,14,13,15,16,12,27,20,16,15,13,13,14,15,18,15,17,18,14,14,16,10,13,15,12,13,13,19,32,20,19,15,17,15,13,16,18,19,18,16,19,15,19,13,16,17,17,15,14,39,28,24,20,16,17,18,15,19,18,21,22,17,41,19,14,17,16,14,17,14,23,34,26,22,20,19,19,17,23,19,19,20,19,20,65,19,19,18,18,18,12,16,20,31,27,24,21,22,21,24,28,23,22,23,20,19,77,18,23,21,28,25,21,19,18,29,25,27,26,21,24,23,30,28,23,28,21,23,60,22,20,42,35,59,25,19,23,30,25,28,26,25,25,28,47,28,24,23,21,25,27,24,20,21,73,61,26,22,23,35,31,28,30,29,27,31,39,27,27,25,25,26,28,25,23,26,34,24,24,26,30,38,31,30,34,34,46,35,36,33,33,32,37,28,28,24,20,24,28,72,27,26,30,41,35,37,39,39,54,42,37,30,30,30,31,32,23,25,27,25,29,29,28,27,34,42,33,42,79,71,78,54,35,31,35,33,35,68,23,25,24,25,29,31,28,28,34,42,34,43,84,74,80,51,35,32,35,32,35,72],
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
