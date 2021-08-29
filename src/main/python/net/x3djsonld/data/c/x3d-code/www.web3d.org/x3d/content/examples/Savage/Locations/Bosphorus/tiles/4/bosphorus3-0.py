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
        texture=ImageTexture(url=['../../images/4/bosphorus3-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.280922627855375,28.4375,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.014129827,zDimension=21,zSpacing=0.010933623,height=[227,214,139,175,57,65,143,143,90,163,193,183,99,94,139,76,117,110,145,118,124,119,217,218,149,97,48,101,89,130,130,134,168,162,134,65,81,62,119,144,122,117,135,117,105,138,71,58,74,137,106,138,57,47,54,76,149,86,115,109,112,72,140,111,134,89,114,96,126,84,96,71,57,127,110,53,30,27,106,123,81,60,76,38,100,109,30,12,70,103,141,83,33,16,84,86,25,8,40,12,48,88,45,38,23,22,80,40,24,16,54,63,90,101,72,29,17,64,13,32,4,22,17,29,77,4,3,61,29,53,27,43,82,46,86,71,59,58,13,74,14,6,15,38,59,5,10,16,0,8,26,41,64,8,63,25,59,67,128,73,51,2,3,-1,22,69,58,8,22,16,18,69,57,25,0,5,81,17,23,81,111,32,27,23,8,1,5,3,6,9,31,45,91,35,1,0,0,-1,39,17,12,74,47,59,66,46,5,1,3,11,4,4,4,27,0,4,0,-1,0,0,17,23,12,55,75,73,45,54,28,3,8,30,3,0,0,4,0,0,0,0,2,1,10,10,59,53,12,85,1,0,-2,3,9,-2,0,0,0,0,0,1,1,3,2,4,31,6,3,36,9,8,1,55,15,8,0,1,0,0,0,0,0,0,2,2,0,0,7,8,3,4,13,14,52,4,0,0,-1,0,-1,-1,0,0,-2,0,0,0,0,0,26,43,25,29,55,0,1,1,0,0,0,-1,2,1,0,1,0,0,0,-1,0,-1,52,57,42,1,-2,-2,0,0,0,-1,0,0,-1,0,-4,1,0,0,-1,-2,1,-2,58,4,0,0,0,0,0,0,0,-1,1,0,-4,-3,-3,0,-2,0,0,-1,-2,0,0,0,0,0,0,1,2,3,-1,0,0,0,0,0,-3,-1,-1,0,0,-1,-1,-1,0,0,0,-1,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,-1,-1,0,0,-1,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,1,0,-1,0,0,-1,0,0],
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
