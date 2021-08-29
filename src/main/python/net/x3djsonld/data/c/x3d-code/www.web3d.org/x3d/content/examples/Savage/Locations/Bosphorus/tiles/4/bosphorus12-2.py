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
        texture=ImageTexture(url=['../../images/4/bosphorus12-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.280922627855375,28.585863182492176,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[78,69,39,86,67,123,130,158,138,125,98,72,107,106,98,89,115,85,121,112,113,108,31,35,51,58,93,102,90,142,127,131,112,76,111,137,108,88,125,103,108,133,116,112,32,61,81,86,74,59,87,136,110,89,85,81,106,128,100,113,120,126,112,109,84,86,42,88,108,63,36,44,69,108,142,120,101,102,133,130,134,137,114,119,125,95,58,59,50,72,83,42,44,81,76,95,129,144,104,99,142,120,122,115,75,86,104,77,62,56,51,45,81,32,41,60,98,101,88,117,122,129,116,86,95,86,63,50,92,78,48,41,33,42,64,18,47,56,92,57,69,82,98,112,78,68,84,45,52,44,90,97,72,66,46,61,33,20,57,76,77,61,41,44,93,113,75,62,89,52,28,63,84,68,87,86,72,63,25,20,31,63,37,36,43,86,96,107,61,55,90,54,28,45,70,56,55,61,61,47,26,8,25,33,20,33,58,87,59,96,66,55,92,66,29,22,64,55,32,42,73,43,34,8,10,23,42,59,63,79,43,74,43,60,84,46,26,14,46,53,21,20,49,41,4,8,35,36,53,67,34,64,44,49,39,82,95,59,36,13,26,57,13,17,10,9,3,1,6,6,12,41,23,35,49,26,61,89,68,94,60,32,5,36,8,11,6,8,7,9,14,17,13,11,13,16,34,24,52,71,69,90,83,53,14,3,5,2,8,12,26,35,46,45,37,27,24,22,22,39,35,41,59,38,66,16,13,4,0,2,24,30,53,54,63,54,74,45,56,35,47,52,60,39,10,8,9,3,4,-3,0,0,41,49,49,30,36,47,69,69,79,60,69,64,18,9,2,4,9,9,3,-3,-1,1,8,12,15,21,34,33,40,56,79,30,57,27,10,3,8,8,8,7,6,2,7,8,12,26,22,25,53,67,56,60,52,29,28,6,9,2,6,9,10,8,5,5,19,17,26,57,32,61,52,83,54,32,27,42,8,5,5,4,12,16,11,12,8,6,9,7,53,77,57,76,75,68,61,27,8,19,9,7,4,5,10,14,15,15,11,8,3,6,66,77,41,51,53,47,36,51,30,7,10,6,7,9,13,15,20,19,19,16,5,4,38,38,19,52,48,11,45,78,44,31,3,2,7,12,16,17,23,18,20,20,12,13,40,36,15,51,54,11,46,77,41,33,3,3,8,14,18,21,22,17,21,19,11,13],
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
