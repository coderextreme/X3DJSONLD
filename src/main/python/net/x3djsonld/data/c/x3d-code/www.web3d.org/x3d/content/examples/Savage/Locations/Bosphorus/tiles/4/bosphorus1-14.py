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
        texture=ImageTexture(url=['../../images/4/bosphorus1-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.679573392779616,29.47604227744523,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[81,121,121,182,189,180,142,92,59,25,34,73,144,158,126,111,77,46,31,54,50,51,64,67,90,121,141,154,137,98,47,18,66,134,158,138,119,120,95,64,26,27,28,28,45,50,61,73,98,103,117,102,41,17,72,103,122,131,106,84,80,66,45,15,15,15,23,35,48,44,62,63,84,83,37,18,75,86,100,89,91,77,61,49,45,18,10,9,16,19,31,35,41,53,73,44,42,17,53,56,100,77,82,70,48,41,30,22,10,9,10,12,16,40,52,29,39,21,16,15,17,24,41,73,54,54,46,30,25,13,4,5,6,7,7,11,16,13,10,12,12,14,14,14,13,26,34,44,32,29,10,3,4,5,3,5,5,7,7,11,10,11,11,12,14,16,15,11,11,15,11,9,5,3,2,1,3,2,5,6,6,13,9,9,11,11,14,13,13,10,9,8,8,6,3,1,0,1,2,2,3,5,5,5,7,9,11,9,21,10,6,7,9,7,5,4,6,3,1,1,-1,2,0,3,5,6,6,9,9,9,9,4,5,5,6,7,5,3,3,0,1,2,-2,1,1,2,4,7,7,6,7,9,6,4,4,4,3,3,6,3,0,6,0,1,-1,0,1,5,4,7,6,6,6,6,4,3,1,2,1,0,3,3,0,0,2,0,0,-1,0,5,1,4,5,5,4,4,2,1,1,0,0,1,1,1,0,1,5,9,0,-1,0,0,2,4,5,3,3,3,0,0,0,4,0,1,1,0,1,1,3,3,0,-5,0,0,1,3,3,3,2,1,0,0,0,2,0,-3,1,0,0,2,0,0,1,-1,0,0,0,0,4,3,0,1,0,0,5,6,0,1,0,-1,1,0,0,0,1,-3,0,-8,-1,0,0,0,0,1,0,0,7,6,0,2,0,-1,0,0,0,2,-1,0,0,-1,0,-1,1,0,2,3,9,19,5,0,0,0,0,0,0,1,0,2,0,-1,0,0,-2,0,2,0,0,1,7,14,14,2,0,0,0,0,1,2,1,1,0,3,0,-1,0,0,0,0,0,0,4,7,9,0,2,1,0,0,0,0,0,0,2,0,0,0,-1,0,1,-1,-2,0,0,2,5,1,3,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,-2,0,0,1,1,2,1,-1,0,0,0,0,0,1,0,0,2,1,0,0,0,0,-3,0,0,0,1,4,2,-2,1,1,0,0,1,1],
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
