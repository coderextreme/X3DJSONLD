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
        texture=ImageTexture(url=['../../images/4/bosphorus6-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.95291395417769,28.660044773738264,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[0,-1,-1,0,2,-1,0,0,0,0,0,-2,0,-2,0,1,0,-4,0,-1,0,0,-2,0,-2,-1,1,0,0,0,-2,0,1,-1,-2,-2,-6,-1,-2,-1,-1,-3,0,-1,4,0,2,0,0,0,0,0,-1,-1,0,-3,1,0,-2,-3,0,0,0,0,-1,0,-7,0,-4,0,0,0,-1,0,1,-4,0,-2,-3,0,1,-3,0,-2,0,-3,2,-2,0,-1,-7,0,-3,1,-2,4,-1,2,0,-4,0,3,1,0,-3,0,-4,0,3,3,1,-7,-12,0,1,20,-17,0,33,4,1,-4,-5,-1,0,-3,0,0,0,-1,-2,1,0,2,5,1,2,5,0,8,48,-3,0,-3,-1,-11,0,0,-5,-1,0,-1,-1,0,25,26,28,12,5,1,1,4,46,3,10,5,0,-3,8,-1,-6,-4,-1,0,2,2,39,45,46,22,13,6,4,6,8,-16,13,2,1,-2,-4,-2,-5,20,-1,14,0,0,69,72,60,49,36,21,15,17,13,1,0,3,0,0,0,0,0,5,3,1,0,2,97,94,90,82,63,56,39,45,40,7,2,0,2,3,7,12,22,34,34,24,20,21,123,122,109,108,100,86,74,61,45,10,3,3,17,31,38,35,41,45,43,54,45,45,124,130,122,116,106,92,78,65,39,11,5,6,20,45,53,41,63,57,60,59,59,60,126,132,126,121,112,97,76,45,19,8,5,9,28,53,61,56,72,68,76,75,68,68,128,135,130,122,114,98,63,40,13,11,7,19,33,64,70,75,87,84,83,77,73,71,133,138,133,127,111,86,53,28,10,8,15,30,57,79,79,88,95,90,80,77,70,70,138,138,131,123,101,65,33,18,14,14,30,46,70,95,92,92,98,90,85,77,68,59,138,141,132,116,84,57,22,13,15,15,35,53,83,103,104,99,100,93,81,69,46,36,143,143,133,111,79,44,18,14,17,26,35,57,89,108,107,105,99,91,67,41,15,8,135,146,135,100,71,40,17,16,27,46,35,61,91,110,112,108,102,98,81,62,29,10,131,150,137,106,68,38,22,20,38,62,57,71,97,116,115,114,107,100,91,69,19,5,127,147,139,102,70,42,26,22,48,75,82,78,106,122,118,117,111,99,71,34,4,5,134,143,136,102,71,48,25,24,57,85,108,93,115,128,124,119,108,64,43,4,0,0,135,143,135,101,70,47,25,25,58,88,112,96,116,128,126,118,105,62,41,3,-2,-4],
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
