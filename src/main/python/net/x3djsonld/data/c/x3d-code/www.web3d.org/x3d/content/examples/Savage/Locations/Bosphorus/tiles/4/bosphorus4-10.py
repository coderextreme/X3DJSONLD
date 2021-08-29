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
        texture=ImageTexture(url=['../../images/4/bosphorus4-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.84357772961846,29.17931591246088,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[-2,0,0,0,0,-1,0,0,0,0,-1,-2,-3,3,-3,3,1,10,2,1,0,-1,0,0,0,-2,0,0,0,-1,0,0,-1,-2,0,-2,0,-10,-4,-3,3,-2,0,-3,0,-3,-1,0,0,-1,0,1,0,-1,-1,0,0,2,0,-5,0,-3,7,-10,0,3,-2,-1,-1,0,0,0,-1,0,-3,0,-1,0,-1,0,-5,-6,-4,6,5,1,0,0,0,-1,0,0,0,-1,0,-1,0,-2,0,-1,-1,-1,1,0,3,0,1,-6,1,1,0,0,0,0,0,-1,-1,0,-2,0,-2,0,-2,-1,0,0,-4,-4,-16,7,0,-1,0,0,0,0,0,-1,0,0,0,-3,-1,0,-3,-3,-2,2,-6,-6,-4,-7,-1,0,0,0,0,0,0,0,0,-1,0,-1,0,0,0,0,-2,0,3,-2,-3,-9,-2,0,-1,0,-2,0,0,0,0,-2,0,0,-2,0,3,0,0,0,-2,-3,0,-14,-23,-15,0,-2,0,-2,-1,-1,0,-1,-1,0,0,0,-1,-1,0,-4,-2,0,-1,-11,-23,-15,0,0,-2,0,-1,0,-1,0,0,0,-2,5,-1,0,0,0,-3,0,6,-2,3,2,0,0,-1,0,0,-2,-1,0,0,-1,1,-1,0,5,-2,-3,0,2,0,0,4,4,-1,0,0,0,-1,0,0,-1,-1,-3,0,6,-4,0,0,-1,2,3,0,0,-1,1,0,-3,-1,0,0,2,2,-1,-3,5,0,-1,0,-3,1,19,0,9,10,3,0,4,1,-2,2,-1,4,-2,-4,3,3,-2,2,0,0,0,7,17,4,0,1,7,12,14,6,0,-1,10,-4,0,0,1,0,-1,-1,6,0,3,9,10,10,4,4,25,40,43,0,-1,0,-5,-4,-4,0,-13,-12,19,2,1,15,9,13,8,9,7,10,28,70,76,-2,-4,-3,-3,0,0,0,-3,-1,1,3,8,16,14,15,11,9,12,15,31,59,69,-6,-2,-2,0,1,0,1,5,7,8,13,18,18,24,16,16,16,24,24,33,73,88,-13,5,7,1,3,14,17,31,16,18,20,26,25,25,20,19,26,34,40,60,65,74,0,18,31,13,7,33,34,37,27,28,35,33,29,27,26,24,31,44,67,84,76,85,6,35,46,43,14,26,49,43,36,35,36,35,35,31,31,29,43,61,85,119,108,110,10,30,56,63,42,37,49,49,43,39,39,38,37,36,40,37,57,90,115,122,124,123,13,30,54,65,46,40,50,51,45,39,41,40,38,37,41,37,60,95,123,129,127,126],
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
