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
        texture=ImageTexture(url=['../../images/4/bosphorus7-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.0075820664573,28.660044773738264,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[135,143,135,101,70,47,25,25,58,88,112,96,116,128,126,118,105,62,41,3,-2,-4,140,137,110,91,70,36,26,38,67,114,124,108,117,132,125,113,75,36,20,0,17,17,141,130,97,74,47,31,31,44,70,117,131,117,125,131,122,94,52,15,0,2,0,-2,148,120,95,72,45,26,33,51,89,128,140,133,131,132,113,86,42,2,4,0,-7,-8,149,114,88,66,47,32,47,70,99,135,140,137,133,125,101,64,35,1,-5,-5,6,3,149,107,86,49,31,35,54,80,114,134,125,130,126,108,90,60,22,4,0,0,3,7,129,101,75,40,37,59,69,90,124,126,107,118,111,95,67,50,13,1,1,0,12,17,117,93,67,35,47,71,81,111,132,123,97,97,92,87,52,25,5,0,1,3,11,16,97,75,54,37,54,70,92,118,132,122,88,71,71,71,50,16,2,1,1,9,21,23,90,67,43,47,66,78,105,124,122,107,85,65,52,55,39,14,0,1,10,16,30,30,86,54,43,51,71,92,116,122,119,87,84,54,38,37,27,2,0,1,14,23,39,33,59,54,45,65,82,101,124,135,117,89,62,48,29,24,11,3,3,3,13,30,39,35,71,52,52,74,95,111,128,131,112,94,82,58,38,14,7,4,2,5,21,39,39,35,63,56,74,75,98,117,127,111,105,84,75,57,27,18,8,3,2,13,24,39,33,24,60,67,79,98,98,124,123,100,95,78,61,48,28,15,4,3,3,16,31,43,26,15,59,84,93,110,114,127,120,98,78,71,56,36,25,7,3,2,6,23,38,38,22,10,64,95,114,117,123,130,111,92,76,68,51,38,14,3,4,2,10,25,39,31,8,5,68,105,119,129,135,128,112,108,97,75,47,22,5,3,4,4,13,29,32,11,0,0,71,88,110,128,138,131,115,112,85,64,34,11,6,6,6,8,18,34,24,1,5,4,79,103,105,117,136,124,94,86,74,47,23,7,6,6,10,14,23,34,23,6,4,0,89,118,111,118,133,117,84,63,62,35,12,7,7,7,12,20,30,40,24,19,8,2,98,121,118,123,124,112,84,62,49,30,10,8,7,12,15,22,32,45,41,36,31,13,108,129,127,118,134,124,86,67,48,29,14,10,10,18,24,31,37,51,53,37,19,11,110,128,129,117,135,126,88,65,51,35,16,9,12,21,25,32,37,52,55,37,20,13],
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
