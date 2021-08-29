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
        texture=ImageTexture(url=['../../images/4/bosphorus1-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.84357772961846,28.73422636498435,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.014129827,zDimension=21,zSpacing=0.010933623,height=[0,-2,0,0,-1,0,0,-2,-2,-1,-1,-1,0,-1,0,-1,-2,-1,-1,0,0,0,-1,0,0,0,0,-1,-1,-2,-1,0,-2,-2,-2,-1,0,0,0,-2,-2,0,0,0,0,-1,0,-2,-1,-1,-2,-2,-2,-1,0,0,0,-2,-1,0,0,-2,0,0,0,-1,-1,-1,-1,0,-1,0,-1,-1,-1,0,-1,0,0,-1,0,0,0,-1,1,0,0,-1,0,-3,0,-2,-1,-2,-2,-1,-2,-1,0,-2,-1,0,0,-2,0,-1,0,0,0,-1,0,-1,-1,0,0,-2,0,0,-1,0,0,0,0,0,-1,0,0,0,-1,0,0,-1,-2,-3,-1,-1,-1,-1,-3,-1,0,0,0,-1,0,0,0,0,0,-2,0,0,0,0,-1,-1,-2,0,0,0,-1,0,-1,0,0,0,-1,0,0,0,0,0,0,0,-1,0,0,-1,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-2,0,0,0,0,-1,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,-1,0,0,0,0,-1,0,-2,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,-1,-6,0,0,0,-1,0,0,0,0,-1,0,-2,0,0,0,0,0,0,-2,-3,0,-1,20,18,15,0,0,1,-6,-1,0,0,0,0,0,-2,0,0,-3,46,0,2,6,23,36,39,20,2,5,10,0,-2,-2,0,1,0,1,1,-1,0,0,44,-1,0,46,48,46,29,4,8,11,25,19,18,2,-1,-1,6,0,1,2,26,20,4,-1,1,71,69,46,13,33,21,48,25,20,35,23,4,-30,6,-4,2,-3,4,15,6,-4,-8,18,89,23,65,57,32,71,22,29,50,35,54,18,58,43,-3,3,48,25,22,0,10,40,102,18,50,72,28,62,31,55,65,57,28,65,0,3,-4,34,50,77,27,-6,19,74,88,25,70,88,42,85,51,71,89,61,69,-2,3,58,0,-2,72,70,1,0,17,24,121,27,61,84,46,88,87,49,90,87,7,38,12,48,43,0,4,-2,3,0,18,28,120,28,64,85,45,84,87,48,92,87,5,39,12,41,47,2,4,0],
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
