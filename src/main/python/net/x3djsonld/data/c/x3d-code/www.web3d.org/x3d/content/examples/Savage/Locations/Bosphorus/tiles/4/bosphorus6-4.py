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
        texture=ImageTexture(url=['../../images/4/bosphorus6-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.95291395417769,28.73422636498435,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[0,-1,-3,-2,0,0,1,0,0,0,0,2,0,-3,0,-2,1,0,-1,0,0,0,-1,0,-1,-1,0,-1,0,0,0,0,0,0,0,0,1,0,-1,0,1,0,1,0,0,0,0,0,-1,0,0,0,3,0,-1,1,0,4,0,-2,0,1,0,0,-1,-6,-2,0,0,0,-2,1,0,0,-1,1,0,0,-3,1,2,0,5,2,1,0,-2,-6,3,-4,-1,-2,0,1,0,2,-1,0,0,1,0,0,-2,-3,0,-1,3,-1,0,0,1,-3,-2,0,2,4,1,0,-2,-1,1,-4,0,1,3,0,-1,-3,0,-2,0,4,0,0,0,-5,0,1,-23,2,1,3,0,0,-1,0,-1,0,0,0,0,10,10,12,2,0,-4,0,-4,2,-3,-2,-1,-4,0,-1,-2,0,0,0,-8,0,20,23,21,22,0,-1,2,7,-2,0,-1,4,0,0,3,0,0,0,-2,0,0,7,29,30,28,30,2,0,0,25,34,4,-5,6,0,0,-5,0,-2,0,0,0,9,20,37,40,34,32,21,30,24,8,52,13,12,0,1,0,0,-3,-4,-3,3,14,11,38,36,46,37,34,45,42,33,9,1,0,0,-1,0,0,-3,-3,2,13,18,31,19,39,40,46,39,36,60,52,42,29,5,0,0,-1,-1,-3,-2,0,17,32,29,41,35,39,48,47,40,38,68,57,38,27,8,4,1,0,0,0,0,1,22,38,34,51,46,39,52,46,40,39,71,57,15,3,-2,-4,3,2,1,2,0,3,8,46,36,49,50,42,49,47,44,42,70,30,4,0,-12,-12,-4,14,11,3,3,0,22,46,44,50,53,46,55,53,45,43,59,10,-7,-8,-4,-4,-1,19,4,-10,1,4,37,58,50,59,53,47,57,57,45,46,36,5,1,9,7,5,0,-6,-10,0,1,9,52,63,50,64,59,52,61,60,45,45,8,-17,4,11,0,-1,-3,-6,0,0,4,25,58,65,57,62,65,58,66,60,47,47,10,0,4,1,0,0,2,-3,-15,0,12,41,65,63,71,64,68,60,69,54,49,49,5,1,0,3,-1,0,-2,0,0,4,24,60,72,69,74,72,68,66,71,54,49,47,5,-3,4,-4,-1,0,-1,-4,-3,2,18,60,75,73,77,75,69,72,71,61,46,41,0,0,1,0,1,0,-5,-3,-5,0,3,35,68,77,80,78,70,81,76,64,44,38,-4,-1,1,-2,2,-4,-4,-4,-4,0,1,31,67,77,80,78,70,82,76,62,44,37],
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
