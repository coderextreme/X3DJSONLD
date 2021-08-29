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
        texture=ImageTexture(url=['../../images/4/bosphorus13-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.33559074013499,28.511681591246088,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[82,74,68,68,37,26,10,1,0,11,13,0,2,4,0,0,2,70,62,59,31,40,52,82,42,52,49,34,14,4,3,10,2,4,1,4,-2,1,0,17,32,31,26,38,36,64,57,30,22,18,8,5,2,-1,2,10,3,1,6,4,5,5,3,15,6,1,34,40,57,57,48,39,19,0,7,4,9,7,5,3,0,1,2,7,3,-1,4,1,32,19,35,63,33,18,6,5,23,18,27,17,7,5,1,4,5,0,1,2,1,2,37,26,13,46,14,5,18,23,29,24,35,14,8,7,5,-1,1,4,3,6,6,5,76,56,19,9,9,30,54,29,46,43,51,33,21,3,0,2,2,2,1,4,6,4,71,36,35,8,16,39,71,47,53,73,51,34,24,0,0,3,3,2,1,3,4,3,64,53,14,18,52,33,73,77,73,74,50,31,5,5,0,3,0,5,0,6,0,1,40,38,13,41,56,52,74,79,44,59,54,37,3,4,1,1,0,0,1,0,2,2,49,14,30,49,71,72,75,61,37,29,16,10,10,0,1,4,0,1,0,2,2,2,21,25,33,58,87,95,89,59,43,37,37,43,8,1,3,2,2,1,3,5,2,2,33,44,55,77,59,78,83,89,79,65,61,49,23,1,1,4,1,0,1,3,4,5,41,67,86,64,39,51,58,80,72,43,32,25,11,15,17,0,3,3,1,3,5,7,80,81,102,73,42,29,50,69,47,62,46,34,36,39,5,3,4,1,2,4,9,10,82,63,63,74,45,14,39,54,24,62,64,73,49,13,2,2,3,2,8,8,11,10,61,31,63,73,42,11,15,33,11,41,38,40,15,1,5,1,3,7,7,12,14,14,77,24,37,36,57,36,0,0,0,-3,3,10,1,3,4,2,2,10,13,12,10,10,82,39,13,32,14,3,4,1,1,0,11,-2,0,0,0,3,4,11,14,12,10,9,77,48,14,13,1,2,1,-1,-1,3,3,4,0,2,6,6,2,10,12,13,0,0,43,44,23,4,0,5,2,-1,10,7,4,4,4,5,25,19,20,8,5,0,0,0,25,13,3,0,1,4,6,13,22,12,12,3,4,12,38,37,41,10,-4,0,0,0,24,4,8,6,2,2,9,33,42,26,14,8,12,23,53,37,10,-2,0,0,1,0,22,4,7,6,1,1,8,35,44,29,16,8,14,26,54,29,4,-1,0,2,1,0],
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
