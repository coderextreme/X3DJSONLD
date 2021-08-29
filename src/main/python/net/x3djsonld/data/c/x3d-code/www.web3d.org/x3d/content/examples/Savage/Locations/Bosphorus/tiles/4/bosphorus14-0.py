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
        texture=ImageTexture(url=['../../images/4/bosphorus14-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.390258852414604,28.4375,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[36,19,9,7,6,3,4,3,6,38,60,58,24,19,11,11,10,40,65,38,25,22,27,22,14,8,7,5,2,3,3,13,37,59,51,28,13,1,7,23,25,15,4,3,30,13,6,5,3,3,4,3,4,2,34,37,57,52,20,3,9,3,0,0,4,4,7,5,4,6,7,4,4,4,0,4,25,14,37,18,3,2,-1,-3,1,0,4,1,5,7,7,6,5,5,5,3,0,0,3,4,5,0,2,5,4,0,-2,5,7,7,8,7,7,6,6,7,6,4,3,0,1,4,3,2,6,3,9,15,22,12,11,6,11,9,7,10,19,24,6,4,4,6,2,4,2,9,13,23,40,54,42,16,23,21,14,10,11,24,23,24,25,8,6,6,6,4,3,19,21,33,49,61,41,25,27,25,19,9,19,26,29,35,21,11,9,4,0,7,9,21,26,33,51,60,39,31,29,25,41,12,29,41,44,33,28,12,17,10,6,14,22,35,36,39,53,55,36,20,2,3,18,19,25,49,42,47,36,21,28,18,14,17,31,50,41,46,56,37,6,10,0,0,19,30,44,47,58,46,25,28,38,29,32,29,42,52,47,39,17,-7,0,-3,-4,-1,39,42,59,44,68,60,28,30,48,35,54,44,40,35,26,0,1,3,0,0,0,0,31,54,64,80,57,41,23,40,62,51,69,52,30,8,-1,0,0,0,-1,-2,0,1,46,33,56,80,54,50,30,38,47,63,70,29,0,0,-1,-3,0,0,0,-2,-1,0,65,45,57,70,40,45,38,57,64,48,8,3,0,1,2,1,0,1,0,1,-1,-1,49,56,66,87,52,22,55,52,36,-4,-5,0,-3,-2,0,-1,0,-1,-1,1,0,0,45,55,51,85,35,14,46,1,4,3,1,1,1,0,0,1,0,0,0,-1,1,1,36,35,69,77,36,0,0,-5,1,-1,0,0,-1,1,1,0,0,-1,0,0,1,0,50,52,30,4,0,0,0,0,0,-2,1,0,0,-1,0,0,0,0,0,0,-1,-1,30,10,4,0,1,1,0,-1,0,0,1,0,0,0,0,0,0,0,0,2,0,0,0,0,1,-1,-2,1,0,0,1,0,0,0,1,0,0,0,-1,-2,-1,0,-1,-2,1,0,0,0,0,0,0,1,0,1,1,0,0,0,0,0,-1,0,-1,0,-1,0,1,0,0,0,0,0,1,1,-2,1,3,0,0,0,0,0,0,0,-1,-2,-1,0],
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
