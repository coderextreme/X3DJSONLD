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
        texture=ImageTexture(url=['../../images/4/Malacca6-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.434860909842949,99.62356253966037,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[78,148,48,30,13,16,13,9,9,8,9,7,10,10,9,7,2,2,6,8,9,10,63,42,17,26,10,6,8,16,9,6,6,7,8,8,7,6,5,2,7,7,9,9,38,24,18,9,7,15,8,7,5,5,4,6,6,6,6,6,5,2,3,6,7,5,28,18,22,16,17,18,7,8,7,7,7,8,3,5,5,5,4,3,2,3,4,1,29,15,26,16,22,12,7,6,12,4,1,3,4,2,4,1,2,1,0,1,4,2,37,35,27,15,10,10,9,7,6,3,4,3,1,3,1,2,1,1,1,2,3,3,43,22,15,19,16,15,12,12,4,2,3,3,3,1,1,4,1,0,1,3,3,2,28,25,18,21,17,13,18,11,9,3,1,0,1,3,1,1,1,1,0,1,2,2,24,23,30,27,26,18,16,6,5,1,5,3,10,3,4,2,1,7,1,2,2,2,44,36,24,24,21,11,12,19,12,11,4,5,9,4,3,3,1,0,0,1,2,2,28,24,29,19,15,23,18,12,16,4,7,5,6,4,10,4,4,3,1,3,1,0,38,34,23,26,15,17,10,9,6,5,7,7,4,2,4,3,5,1,6,3,4,2,40,31,26,30,9,8,10,19,19,5,5,4,4,5,3,8,1,1,1,1,1,6,49,30,28,28,11,13,7,6,10,4,6,18,12,4,15,21,1,1,0,1,2,-7,44,44,27,21,14,20,15,9,6,5,6,20,9,8,15,15,0,0,1,4,0,1,41,41,31,23,15,19,15,8,7,6,6,16,11,6,5,4,1,0,0,1,0,1,28,24,25,29,22,17,14,6,7,7,7,7,8,5,2,1,1,1,0,0,-9,0,34,22,21,9,18,13,12,8,11,8,6,6,6,4,3,2,0,4,3,5,0,0,33,27,18,12,6,6,13,7,11,8,7,6,7,3,1,1,1,2,-2,1,1,1,27,20,17,13,7,8,13,9,8,20,17,20,6,4,0,0,4,0,6,1,1,2,30,24,11,11,16,21,17,16,14,13,15,19,6,3,1,1,6,1,0,11,7,2,34,22,17,8,11,8,19,12,11,13,14,13,9,5,3,2,2,1,0,-3,4,7,33,19,17,8,9,8,20,10,12,13,13,15,9,5,3,3,2,1,-5,-6,6,10],
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
