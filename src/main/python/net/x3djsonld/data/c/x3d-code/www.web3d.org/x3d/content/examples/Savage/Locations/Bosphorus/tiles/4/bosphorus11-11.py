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
        texture=ImageTexture(url=['../../images/4/bosphorus11-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.22625451557576,29.253497503706967,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[38,33,33,33,34,58,62,46,43,67,66,48,46,21,66,59,53,44,36,4,5,6,22,25,37,23,52,57,49,45,50,46,50,51,32,22,49,40,22,12,2,2,3,2,32,17,24,25,39,52,33,52,50,44,22,15,2,1,3,4,1,0,0,0,1,1,39,17,17,33,58,41,43,53,54,24,6,1,5,1,2,1,0,4,4,2,2,1,45,33,12,34,54,19,33,11,7,1,6,0,0,3,0,3,0,0,2,2,2,0,44,25,10,10,23,8,2,1,2,2,0,0,0,0,0,1,2,0,1,0,2,1,10,35,20,7,4,3,1,3,2,1,1,1,1,4,2,0,2,0,0,2,3,0,3,1,4,0,2,2,2,2,1,1,0,0,0,-1,-1,2,0,0,2,3,2,0,0,2,3,6,1,2,1,2,0,1,0,2,1,1,0,3,1,0,0,0,1,0,1,1,3,1,0,0,1,0,1,0,3,0,2,1,1,2,0,1,1,1,1,0,0,2,2,0,1,0,2,1,0,2,0,2,4,0,1,0,1,2,0,0,1,2,0,1,2,0,0,1,1,0,1,3,0,2,0,0,1,1,1,3,0,0,1,0,1,0,0,3,2,0,1,0,2,0,1,1,0,0,0,1,0,2,1,0,0,0,3,2,1,1,1,0,0,2,1,3,0,2,0,0,1,0,1,2,0,0,3,3,2,0,1,2,0,2,0,0,0,2,0,0,0,0,0,0,1,2,2,2,0,0,1,2,4,0,0,2,0,1,1,0,1,1,1,0,2,1,0,0,1,0,0,0,0,1,1,2,0,1,0,1,1,1,0,1,0,1,1,1,0,1,1,1,0,0,2,1,2,1,0,-1,2,2,0,0,2,0,1,0,1,0,0,2,1,1,0,0,0,2,1,2,0,2,2,0,0,1,1,0,0,0,0,1,1,0,0,0,1,1,0,1,3,0,1,2,0,1,1,0,0,0,1,0,0,0,0,0,1,1,0,1,3,1,0,1,2,0,2,0,0,0,1,1,2,2,0,1,-1,1,2,1,0,0,1,0,0,0,0,0,0,2,0,0,1,0,0,1,2,1,1,1,0,0,0,2,0,1,3,0,1,2,0,0,1,2,3,0,0,2,0,0,0,0,1,1,0,0,0,2,3,1,1,2,0,0,1,3,2,1,1,2,0,0,0,0,0,1,0,0],
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
