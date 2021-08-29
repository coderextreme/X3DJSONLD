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
        texture=ImageTexture(url=['../../images/4/bosphorus10-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.171586403296146,29.401860686199143,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[133,127,98,70,97,111,123,108,64,111,121,92,82,106,109,108,103,58,91,109,113,112,117,119,112,70,94,109,118,129,92,95,103,104,70,109,114,83,92,40,72,87,107,108,92,110,118,79,76,101,98,121,77,47,68,94,67,100,101,76,56,43,66,104,72,79,84,93,122,85,77,108,128,125,98,76,82,107,71,70,97,84,67,36,44,77,68,82,94,63,100,89,64,114,119,124,121,82,71,100,64,72,97,106,109,78,31,52,80,90,109,59,96,76,55,106,89,111,105,107,41,58,73,107,109,104,106,109,87,26,99,100,106,70,66,91,52,76,62,106,105,85,73,43,110,112,89,90,95,95,102,31,58,70,95,93,74,106,100,53,47,88,110,96,48,29,88,104,58,78,100,71,86,76,20,34,104,86,41,91,80,70,44,92,97,100,92,52,54,93,73,50,90,90,50,57,11,9,103,93,59,67,97,46,52,84,98,80,92,48,17,82,76,23,64,64,48,27,15,10,106,103,64,52,91,47,24,73,95,58,96,84,19,17,52,28,39,45,44,26,15,12,97,96,88,35,72,83,19,84,77,44,82,65,28,13,10,10,9,23,18,19,13,11,88,89,62,38,20,51,12,52,45,44,47,48,39,23,19,12,7,4,6,6,4,2,49,76,57,31,16,20,10,25,19,13,37,29,31,25,19,16,11,2,1,4,5,5,37,60,67,46,21,11,7,4,4,7,25,18,22,11,4,2,0,1,0,4,0,-2,29,44,46,50,25,16,9,4,3,2,14,5,2,2,4,1,0,0,0,0,0,1,12,31,41,44,33,20,12,7,3,0,0,0,0,1,0,0,0,2,0,0,0,0,21,8,20,39,18,7,0,0,2,0,0,0,0,0,0,1,2,-2,1,0,0,0,21,1,25,28,3,2,4,2,1,0,1,0,0,0,0,0,1,0,1,1,1,0,29,0,1,2,3,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1,0,0,0,1,0,0,0,0,-1,0,1,1,1,0,2,1,0,0,2,0,1,0,0,0,0,1,0,0,0,-1,0,0,0,2,1,2,2,2,1,1,0,2,1,0,0,-1,0,1,0,0,0,-1,0,0,0,1,1,2,1,2,1,1,0,2,2],
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
