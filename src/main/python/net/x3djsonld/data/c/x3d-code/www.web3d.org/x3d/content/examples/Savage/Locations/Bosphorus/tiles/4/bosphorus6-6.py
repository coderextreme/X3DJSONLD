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
        texture=ImageTexture(url=['../../images/4/bosphorus6-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.95291395417769,28.882589547476528,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[-1,0,0,0,0,0,0,-1,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,-1,1,0,0,-2,0,0,0,0,0,0,0,0,0,0,-1,-1,0,0,0,0,0,0,0,0,-1,-3,0,-2,0,-2,0,0,0,-1,-1,0,-1,-1,0,0,0,0,0,1,-5,0,0,0,0,0,0,0,-1,0,0,0,-1,0,0,1,0,0,0,0,-2,0,0,-4,1,-2,0,0,0,1,-1,0,0,-1,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,4,0,0,-1,0,-2,0,0,0,1,0,0,0,0,0,0,0,2,-1,0,-2,0,-1,1,0,0,-1,0,-2,0,-3,3,0,0,0,0,0,0,0,2,0,-2,-4,0,0,0,-5,0,-1,-1,0,-1,0,0,-1,0,0,-1,0,0,0,6,0,0,0,-2,1,0,-2,2,0,0,-1,-1,0,-1,-2,5,-1,0,0,0,2,0,-1,-1,-2,-2,1,0,1,-1,0,2,0,-3,0,1,0,0,1,0,0,0,5,-1,1,1,0,0,0,0,0,0,1,1,-5,0,4,2,0,0,2,0,0,0,5,10,7,1,-2,2,1,-1,-2,-2,3,0,-1,0,2,-1,-1,0,1,1,2,2,24,6,9,-5,2,6,-5,3,-2,6,0,1,-2,0,1,-1,-1,0,0,2,0,0,22,13,4,1,1,1,5,0,0,0,1,-11,0,0,1,0,1,4,-1,4,0,-1,14,8,4,3,9,12,11,11,4,-35,-3,0,1,0,0,2,0,2,0,-1,1,0,19,5,2,3,19,24,19,16,8,2,-4,0,1,2,-3,0,1,-3,1,1,3,6,21,8,6,1,22,31,21,23,18,4,-1,4,0,2,0,2,-1,3,-3,2,1,1,19,16,5,2,17,31,32,33,30,15,4,4,8,2,0,1,-1,1,1,2,1,1,31,29,11,6,12,36,37,39,33,13,5,5,15,8,0,1,-3,1,-2,-4,3,3,35,31,15,8,10,31,38,40,34,18,11,5,16,22,5,6,3,3,0,-1,-6,-4,24,23,10,9,20,23,41,41,32,30,22,10,25,28,14,3,6,0,3,-4,-30,-33,33,21,10,12,27,40,45,47,38,37,26,12,24,32,21,4,1,-3,0,0,1,2,49,18,11,13,16,45,52,50,45,39,27,13,28,38,38,23,6,5,4,4,2,2,48,17,11,14,15,42,53,50,45,39,28,13,28,37,40,28,10,6,4,4,4,2],
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
