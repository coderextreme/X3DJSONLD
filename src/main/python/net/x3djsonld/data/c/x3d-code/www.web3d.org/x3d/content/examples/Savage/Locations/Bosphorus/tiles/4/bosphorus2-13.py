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
        texture=ImageTexture(url=['../../images/4/bosphorus2-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.73424150505923,29.401860686199143,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[2,3,0,1,2,-1,2,0,0,0,2,0,0,2,0,0,0,0,1,1,1,0,0,0,2,0,0,0,1,0,1,2,1,0,0,0,0,0,1,0,0,2,2,0,0,0,0,0,0,4,1,2,0,1,1,-1,0,0,0,1,0,1,1,0,0,0,0,0,0,2,0,1,0,0,0,1,0,0,0,0,-2,0,0,0,2,0,0,0,0,1,0,0,0,0,1,0,1,1,3,0,0,2,-1,0,0,1,0,1,-2,0,0,-1,-4,-4,0,1,2,0,2,2,0,0,0,0,1,1,-1,0,0,1,0,0,0,1,0,1,0,0,-2,-1,0,-1,0,0,0,0,0,0,1,0,0,1,0,0,-2,0,0,-3,-6,-3,0,0,0,-3,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-4,1,-1,-2,0,-3,2,-3,1,0,0,0,0,0,3,-2,-1,-1,0,0,0,0,3,1,-2,0,-5,1,-1,-4,0,0,1,-1,0,0,0,1,-1,-1,0,0,41,0,0,0,0,0,-3,-6,-2,0,-3,0,-1,2,3,1,1,-1,5,-2,0,0,65,21,2,2,-7,-2,-1,-1,0,2,4,0,1,2,1,-2,0,0,0,0,-1,1,68,46,22,7,0,-3,-9,3,1,1,0,1,0,0,0,0,3,0,0,1,1,12,73,59,39,32,13,15,-1,4,0,-1,1,0,3,-2,3,0,0,0,0,1,0,1,102,82,68,64,47,67,54,13,-4,13,0,-11,4,-4,-10,-2,-2,0,-6,-1,-3,-2,125,120,105,101,90,92,56,27,14,3,14,0,6,11,26,20,7,1,1,1,-1,-8,121,118,116,122,115,121,90,69,34,14,16,33,22,41,48,36,37,41,8,24,11,6,91,96,106,129,107,111,89,54,16,56,48,70,76,76,68,58,55,59,43,55,36,23,70,78,84,95,94,75,64,26,27,59,104,133,115,110,89,87,78,73,67,72,61,56,61,66,73,79,83,77,39,36,58,76,107,149,157,145,121,109,99,97,97,80,77,80,54,61,66,70,79,78,62,73,89,102,103,134,172,172,156,144,124,111,108,95,90,90,52,57,64,70,73,82,70,62,70,79,115,127,150,178,177,177,171,140,128,125,113,111,53,61,67,74,82,93,103,129,114,119,97,149,155,169,178,180,182,176,180,161,133,131,52,62,66,74,83,95,108,136,121,125,109,140,158,168,178,179,181,177,183,168,138,135],
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
