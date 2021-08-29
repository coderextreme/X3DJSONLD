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
        texture=ImageTexture(url=['../../images/4/bosphorus6-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.95291395417769,28.80840795623044,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[0,0,3,0,-6,-2,-1,-2,-2,2,0,0,-1,-1,0,-2,0,0,-3,0,0,-1,0,3,0,0,-1,0,1,0,0,0,0,0,2,-2,2,0,0,-4,0,0,0,0,-6,0,-1,0,-1,3,14,-9,-2,0,0,0,2,-2,0,0,0,0,-1,0,0,0,-6,-7,1,4,8,0,0,3,-13,-3,-3,0,-2,-1,-4,-4,0,-2,-2,-1,-2,0,0,5,18,15,5,7,11,12,8,3,-3,3,0,-1,0,0,-2,4,-2,0,-1,-2,4,18,22,16,9,16,15,16,17,13,5,-2,-6,0,0,0,3,-6,-1,-2,0,0,12,22,23,17,11,17,18,19,19,14,9,-1,0,0,0,4,-2,-9,-3,0,0,0,22,25,24,15,18,21,22,16,17,11,13,0,0,-2,-1,0,0,-8,-9,0,1,0,30,28,23,20,19,22,24,18,19,7,4,2,0,-3,-6,-2,2,-1,-7,1,-1,0,32,31,26,18,22,23,24,25,18,10,7,4,1,11,2,0,-2,-13,0,0,2,2,34,32,23,30,24,24,25,25,16,7,3,3,5,10,1,0,0,0,9,3,4,5,36,29,24,30,35,29,27,24,21,4,3,3,2,5,2,3,4,11,16,12,9,5,38,36,30,35,38,31,28,29,15,5,3,3,4,7,7,9,4,16,18,17,24,24,39,34,31,42,37,31,22,14,9,7,3,4,10,5,5,10,10,22,22,23,23,22,42,38,38,37,35,27,14,5,6,4,5,7,12,8,4,22,13,29,29,25,20,14,43,43,33,45,34,14,6,17,4,3,8,13,10,9,9,19,13,30,34,25,25,19,46,45,39,42,25,13,11,4,6,6,15,17,7,9,10,24,19,29,34,32,23,21,45,45,42,45,10,5,10,7,10,9,17,16,10,7,16,36,33,29,38,40,24,19,47,43,34,20,6,7,10,14,13,20,24,18,17,14,18,41,34,34,43,40,32,31,49,45,18,8,8,13,24,30,21,19,36,21,23,29,33,49,38,34,47,42,35,35,47,39,9,5,10,17,32,44,33,28,44,19,18,46,48,53,47,40,49,43,26,24,41,15,8,9,21,23,43,57,38,31,45,18,23,53,61,61,56,47,50,58,39,33,38,15,10,15,31,27,51,62,42,33,45,21,31,61,71,71,59,54,56,59,54,49,37,14,11,17,33,29,53,65,43,34,46,21,30,61,72,70,58,55,56,59,54,48],
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
