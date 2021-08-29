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
        texture=ImageTexture(url=['../../images/5/newport28-19.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.37349911997524,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,2,2,16,17,25,24,23,31,30,25,20,17,15,16,14,14,13,0,0,0,0,0,1,2,16,18,27,26,27,31,32,27,22,20,18,17,14,14,13,0,0,0,0,0,0,2,16,18,25,29,30,33,31,28,25,20,17,15,17,17,16,0,0,0,0,0,1,6,13,17,22,26,34,33,31,28,23,20,19,17,18,18,17,0,0,0,0,0,0,15,16,20,21,29,34,33,31,28,24,24,23,22,24,21,21,0,0,0,0,0,3,14,13,16,25,31,34,34,31,27,25,26,26,26,26,23,24,0,0,0,3,1,2,6,16,21,25,31,34,33,30,26,29,29,28,28,27,25,24,0,0,0,3,3,6,6,12,26,33,36,35,35,33,28,31,31,30,30,29,28,27,0,0,1,6,12,12,15,21,31,35,37,36,36,34,29,29,31,32,33,32,29,29,0,1,2,2,6,9,12,20,28,36,36,38,39,35,28,29,32,33,34,32,26,26,2,12,13,13,14,13,14,24,31,33,36,40,39,32,29,31,33,34,33,30,25,25,12,12,15,17,17,15,19,26,28,33,38,39,36,32,31,32,34,35,33,30,27,26,4,6,8,14,17,19,20,25,30,36,40,38,34,33,32,34,35,36,34,31,28,28,0,1,5,13,16,20,25,27,30,36,39,36,35,33,34,34,34,33,32,31,29,28,1,2,3,9,17,21,26,28,31,35,37,36,36,36,35,35,36,33,31,28,23,23,1,3,10,8,13,16,22,26,30,34,36,37,37,38,39,39,38,36,32,29,27,26,1,3,11,12,11,15,20,26,28,29,33,35,37,38,39,40,41,39,37,37,33,31,1,2,7,12,12,15,19,24,27,26,29,31,35,37,38,41,43,43,42,43,36,34,1,3,4,11,14,15,17,19,22,21,23,26,30,34,38,41,44,44,39,37,29,27,3,4,2,7,11,14,15,15,15,14,18,22,27,31,36,38,38,35,31,28,26,26,3,2,1,3,9,14,13,12,12,13,17,25,27,29,33,35,35,32,29,28,27,27,10,13,10,8,9,11,12,11,11,12,14,22,25,28,31,35,36,33,29,27,26,26,17,12,16,15,11,9,10,9,9,10,12,19,22,26,29,34,36,35,32,28,27,27,18,12,17,16,12,9,9,9,9,10,12,19,22,25,29,33,36,35,33,29,28,28],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
