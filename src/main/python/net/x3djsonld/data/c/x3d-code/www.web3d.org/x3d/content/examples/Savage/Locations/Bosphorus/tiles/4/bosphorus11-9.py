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
        texture=ImageTexture(url=['../../images/4/bosphorus11-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.22625451557576,29.10513432121479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[52,32,1,7,0,0,0,1,1,1,0,2,-1,0,25,46,16,15,46,63,66,63,76,56,0,6,0,1,0,1,0,1,1,2,2,0,0,3,3,8,64,69,43,35,82,83,16,1,4,0,3,3,3,2,-1,0,0,2,-1,3,1,0,60,45,2,3,67,73,36,0,-3,0,0,0,1,7,4,0,1,-1,0,3,0,0,0,1,2,2,47,57,67,21,1,-1,3,2,0,3,2,0,1,3,0,1,0,-1,2,0,4,4,69,31,55,5,0,0,1,3,-1,0,3,0,3,0,0,0,1,1,0,2,0,1,50,20,45,6,3,3,3,4,5,0,3,0,1,0,0,0,2,1,0,-1,5,3,45,30,10,3,1,6,4,5,3,3,0,2,0,2,0,0,1,1,2,2,2,1,51,21,18,0,3,8,0,2,4,5,0,1,0,0,0,0,0,0,2,1,0,0,33,7,1,2,4,-2,2,1,1,1,0,0,0,0,2,2,0,1,0,2,1,2,0,1,0,2,0,6,3,1,1,1,0,1,0,1,1,0,3,0,0,0,1,2,2,-2,0,2,0,2,2,3,0,2,0,2,4,1,2,1,0,1,2,0,2,1,3,0,0,1,0,0,0,-1,3,2,2,3,1,2,4,0,0,0,2,1,2,3,2,3,0,0,1,0,2,2,2,1,4,0,0,3,1,1,1,0,0,0,0,1,0,0,0,0,1,0,0,0,1,2,0,0,3,2,4,0,1,2,2,0,0,1,2,0,4,1,1,1,2,2,1,4,0,1,-1,1,1,4,1,0,2,0,0,0,0,1,3,1,0,0,0,2,1,1,3,0,3,1,3,2,1,2,0,0,2,3,0,3,1,2,0,1,3,4,2,0,0,0,0,0,1,0,1,0,1,3,1,1,0,0,0,1,1,0,0,1,1,0,0,0,0,2,0,3,1,1,3,0,0,0,0,1,2,1,1,2,1,2,0,3,2,0,2,2,2,0,4,0,1,1,3,0,1,1,1,0,1,0,1,0,0,1,2,2,2,0,2,2,1,1,-1,2,1,2,0,1,0,2,0,0,0,0,0,2,1,1,3,3,1,0,1,3,1,3,0,0,1,0,2,1,2,1,0,0,0,1,1,2,1,0,1,1,0,1,0,0,0,1,1,1,1,2,2,1,0,0,1,1,0,3,1,0,0,3,0,1,0,0,0,1],
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
