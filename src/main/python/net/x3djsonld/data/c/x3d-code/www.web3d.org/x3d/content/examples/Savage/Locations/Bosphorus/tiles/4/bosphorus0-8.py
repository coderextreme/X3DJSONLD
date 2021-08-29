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
        texture=ImageTexture(url=['../../images/4/bosphorus0-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.6249052805,29.030952729968703,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[118,48,122,195,304,376,324,247,329,281,351,296,174,135,108,31,71,100,196,283,383,398,70,38,101,228,213,282,250,178,223,249,279,261,234,99,59,28,51,134,216,312,369,373,24,27,79,140,130,161,184,107,171,181,223,182,176,161,38,24,74,160,221,239,321,321,43,21,19,34,51,51,57,52,75,136,153,157,75,89,19,31,94,114,134,186,259,267,53,21,16,13,12,9,7,11,20,57,80,56,28,18,14,30,48,60,131,120,160,170,73,20,15,13,10,8,5,4,6,7,41,15,6,8,10,10,15,80,91,68,136,163,112,60,18,13,10,7,5,2,2,2,8,17,5,4,7,7,13,48,40,46,114,127,130,61,25,15,37,7,5,4,1,2,0,0,4,2,4,4,5,52,10,9,20,25,104,89,53,45,67,28,8,4,3,3,1,-3,-2,5,4,6,4,13,-1,1,3,0,16,40,29,24,29,31,38,29,9,3,-5,0,0,-1,2,0,-1,0,2,1,1,0,17,32,16,4,0,4,6,4,27,8,0,1,0,-1,2,2,2,1,4,1,0,1,-1,-4,-2,2,7,4,4,4,5,3,3,2,1,2,0,2,1,2,0,2,3,4,-1,-9,0,6,6,4,-2,6,-1,0,0,1,1,1,1,0,0,0,1,0,0,1,7,-5,-1,4,8,0,0,-1,-1,-1,0,0,1,2,1,2,0,0,0,2,0,0,-1,0,-4,-3,0,-1,0,0,1,0,0,2,1,0,0,1,0,0,1,1,0,-1,0,4,0,0,2,1,4,0,-2,0,0,0,1,2,0,0,0,0,4,2,0,0,3,-2,0,4,-6,-5,4,0,0,0,0,0,1,1,0,1,2,0,2,1,0,0,-2,0,-1,-4,-4,3,0,0,0,0,0,1,0,0,2,0,2,0,1,0,1,1,1,-1,3,0,0,3,-1,0,2,0,-1,0,-1,-2,0,1,0,0,0,1,0,0,0,0,1,0,0,-1,0,-4,2,0,3,0,1,0,0,0,1,0,1,2,0,0,-5,0,5,0,-1,3,0,-3,0,2,-3,-1,0,-4,0,0,0,-1,0,0,0,0,0,0,2,-1,0,0,4,-2,-2,3,1,0,3,-1,0,0,2,1,1,1,0,-1,1,0,0,2,1,1,2,0,2,2,0,-2,1,1,0,2,0,0,-2,0,0,1,0,0,1,2,1,0,2,1,3,3,-2,-1,1,1,0,0,-1,0,-1,0,0,1],
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
