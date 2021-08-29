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
        texture=ImageTexture(url=['../../images/4/bosphorus4-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.84357772961846,29.10513432121479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[-1,0,1,14,122,102,39,-3,-4,0,-2,-1,0,0,0,0,0,-2,0,0,-2,-2,-2,-1,0,28,116,129,33,-1,-2,-1,0,0,0,0,0,0,0,-1,0,0,0,0,-1,0,0,0,83,153,68,3,-2,-2,0,0,0,0,-3,-1,0,0,0,0,0,0,0,0,-2,0,70,184,85,5,-1,-1,-1,0,28,0,-1,0,1,0,0,0,-2,-2,0,0,0,5,112,168,62,0,-3,-2,-3,16,41,2,0,0,-1,-2,-1,0,0,0,-2,0,0,39,140,139,51,-1,-2,0,-1,0,13,0,0,0,-2,0,0,0,0,0,-1,-1,0,22,95,97,17,0,-2,-1,-1,-2,0,3,0,-3,0,0,0,0,-1,0,0,-3,0,10,37,62,29,8,0,0,-3,-2,-1,-1,-2,-1,0,-1,0,-2,1,0,0,-1,5,13,40,85,118,57,10,-2,0,0,-3,-3,0,0,0,0,0,0,0,-1,-1,0,0,-2,17,51,120,123,46,0,-1,0,-2,0,-1,0,-1,0,0,0,0,0,0,0,-1,1,18,72,143,101,74,11,-1,-4,-3,0,0,-1,0,0,0,0,1,0,0,-2,0,0,42,103,115,57,82,55,2,-2,0,0,-1,0,1,0,0,-1,0,0,0,0,0,1,15,39,51,31,48,28,8,-1,0,-3,0,0,-1,-1,0,-1,0,-1,2,0,0,0,1,2,12,22,16,9,1,2,-1,-1,0,0,-2,-1,-3,0,0,0,6,0,0,-2,0,0,2,1,2,1,2,2,0,-1,0,0,-1,0,-1,-2,0,1,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,-1,-3,-5,0,0,1,6,1,0,0,0,0,0,-2,0,0,-1,0,0,0,-1,-1,-2,-1,0,3,2,-9,0,0,0,1,0,0,0,-1,-1,0,-1,-2,-1,0,-1,0,-2,-1,0,0,-4,-3,-2,0,0,0,0,0,1,0,0,0,0,0,0,-2,0,-3,0,0,0,0,-4,-8,-6,-1,0,0,0,0,-1,0,0,0,0,0,0,-1,1,0,0,0,-1,0,0,-14,-13,0,0,-2,0,0,0,0,0,-2,0,0,1,0,0,0,-6,-4,-2,-12,-8,1,0,-2,0,0,0,-1,-1,-1,0,-1,-1,1,0,0,0,6,0,-11,-7,-14,-6,3,6,0,0,0,0,0,0,-1,-3,0,-1,-9,0,1,0,-4,-5,-18,-18,-5,3,7,10,0,0,0,0,0,0,0,-4,0,-1,-13,-1,1,0,-4,-6,-20,-15,-2,3,9,13],
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
