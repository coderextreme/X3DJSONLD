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
        texture=ImageTexture(url=['../../images/4/bosphorus3-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.788909617338845,29.17931591246088,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[0,-1,0,0,0,0,0,0,0,0,-1,-1,-2,0,1,1,-1,0,-2,-3,-1,-2,-1,-1,0,-1,0,0,0,0,0,0,-2,-4,0,0,-2,0,0,0,0,0,0,0,0,-2,-2,-1,-1,0,0,-1,0,0,0,-2,0,2,-1,0,0,-1,-1,0,2,2,0,0,-1,0,0,0,0,-3,-1,-1,0,0,-1,-1,0,1,0,0,0,-1,-1,-1,0,0,0,0,-2,0,-2,0,0,0,1,1,-3,0,0,0,-3,-2,-1,1,-1,0,-2,0,0,0,0,0,1,0,-1,0,0,-1,0,3,0,0,-1,-1,1,-7,0,3,-2,4,-4,1,0,0,0,-1,0,0,-1,0,-2,-1,1,-2,-2,0,1,1,0,1,0,1,0,0,0,0,0,0,2,-2,1,1,-5,1,6,0,0,1,0,3,0,0,1,0,-1,1,1,1,0,0,-4,0,0,0,3,0,1,1,1,1,1,0,-2,0,0,2,1,-2,0,0,0,1,0,2,4,0,0,0,2,-2,3,4,2,0,1,2,1,-1,0,0,0,0,1,2,0,0,0,0,1,0,0,2,0,1,0,1,0,-2,-1,1,1,-1,0,0,0,1,1,0,1,1,0,2,0,-1,-2,-3,0,0,1,0,-2,-1,0,0,0,2,0,1,2,0,0,0,0,0,2,0,4,0,9,-4,0,-2,0,-2,0,0,0,0,0,0,2,0,-2,3,-5,0,-1,1,4,-2,6,0,0,3,-2,-1,-1,0,1,-1,-2,1,0,3,0,-2,-1,0,20,1,3,0,-2,6,-6,-5,-1,-2,0,0,0,1,1,1,-4,-2,0,3,0,5,8,-5,5,-8,0,0,8,9,-3,-1,0,-1,0,0,0,-6,-1,2,3,2,0,-8,4,-3,0,9,-15,4,17,11,0,-2,-2,0,0,0,1,0,-1,-4,-2,3,0,6,0,0,-2,12,-9,13,9,5,0,0,-1,0,-1,0,0,0,-1,2,9,-2,1,-5,6,15,-11,0,47,13,16,13,-2,-2,0,-2,0,0,0,0,0,3,0,-2,5,-3,25,-16,14,2,2,0,0,0,-1,0,0,0,0,0,-1,0,-6,-2,-5,-1,0,7,20,-6,1,-19,15,7,0,4,0,0,-1,0,-1,-1,0,-1,-1,0,0,3,0,-7,5,2,7,28,7,0,0,0,-1,0,0,0,0,-2,0,0,0,0,0,-1,-5,0,-1,4,3,10,1,0,-1,0,-2,0,0,0,0,-1,0,0,0,0,-1,-2,-3,3,-3,3,1,10,2,1,0,-1],
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
