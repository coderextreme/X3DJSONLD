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
        texture=ImageTexture(url=['../../images/4/bosphorus12-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.280922627855375,28.80840795623044,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[48,46,63,73,89,78,59,86,84,53,53,61,62,79,105,80,80,64,55,43,18,21,27,34,47,65,95,65,61,69,73,56,47,41,54,78,80,101,94,79,23,6,13,15,23,34,45,63,96,67,75,77,39,25,13,28,48,33,42,71,67,50,12,2,3,4,27,44,64,71,69,85,75,76,56,30,11,14,27,37,15,12,9,4,1,0,-1,-1,20,42,65,53,76,57,49,66,61,25,7,26,14,23,13,11,3,-1,-16,1,3,1,12,33,42,27,41,33,36,45,23,14,19,13,7,9,3,4,8,1,0,0,0,-1,9,19,16,23,30,32,30,14,3,8,7,5,12,0,-1,2,1,0,3,7,0,0,9,19,22,23,20,13,26,17,4,5,4,5,3,0,1,0,-2,5,2,0,-1,0,9,10,9,11,14,12,20,18,4,0,1,0,2,0,0,-1,-1,3,1,0,1,0,6,4,5,7,6,1,14,2,0,0,-1,2,0,0,-3,0,0,0,0,0,0,0,-5,-13,0,1,6,5,6,0,5,3,-1,2,0,0,0,0,0,0,0,0,2,0,-18,-21,-19,-5,0,0,0,2,1,-1,-1,1,0,0,0,0,0,0,1,-1,0,0,-22,-24,-19,3,6,4,0,0,-2,0,0,4,-1,0,0,1,1,3,0,0,3,4,-1,-14,1,5,2,0,0,-1,0,1,0,0,1,0,1,0,2,0,2,1,2,2,-2,0,3,0,1,4,-1,0,0,0,0,3,2,0,0,1,0,0,1,0,-2,0,-1,0,0,2,3,-2,-2,-2,-1,0,1,0,0,0,0,1,0,0,0,1,-1,0,3,0,2,0,0,1,3,0,1,-1,2,0,2,0,0,0,1,0,0,0,0,0,0,-1,0,0,2,0,1,0,0,0,0,0,0,0,0,2,0,0,1,0,0,0,0,-3,0,0,0,1,0,1,0,0,0,0,0,0,2,1,0,1,1,2,0,0,1,0,0,0,0,0,1,1,0,-3,1,0,3,0,1,1,2,2,0,0,0,0,0,-1,0,0,0,1,0,-1,0,0,0,-2,1,2,1,1,0,0,0,0,1,0,0,0,0,0,2,0,0,0,2,0,0,0,2,0,0,2,0,0,0,0,0,0,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,1,2,1,0,1,0,1,0,1,0,0,0,0,1,1,0,0,1,2,0,0,0,1,3,0,0,1,0,0],
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
