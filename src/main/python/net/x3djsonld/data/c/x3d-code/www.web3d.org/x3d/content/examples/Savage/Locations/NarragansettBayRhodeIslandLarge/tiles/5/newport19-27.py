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
        texture=ImageTexture(url=['../../images/5/newport19-27.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.573110194091946,-71.19761628762797,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[19,21,15,5,0,1,1,1,1,1,1,1,2,4,6,7,7,10,15,16,20,20,23,26,13,7,2,0,1,1,1,1,1,1,1,3,4,5,5,7,12,16,20,21,19,15,11,9,7,4,0,1,1,1,1,2,4,6,6,6,5,6,9,14,17,18,9,9,12,13,11,8,4,4,4,4,6,6,9,8,7,6,6,7,8,12,16,16,6,7,8,10,11,10,7,3,5,11,9,10,10,8,6,7,7,8,8,12,18,18,3,2,4,6,7,6,5,1,1,5,9,12,10,8,7,8,8,10,11,11,15,16,1,1,1,1,1,1,1,1,1,2,8,14,9,7,7,8,11,12,14,15,14,14,1,2,0,1,1,1,1,1,1,2,8,12,8,7,8,9,11,13,14,18,17,17,2,1,1,1,1,1,1,1,3,7,8,8,9,7,9,12,15,16,17,19,19,19,1,1,1,0,1,3,6,5,10,11,11,10,10,7,10,14,19,20,23,23,21,20,0,0,0,1,2,6,7,10,14,14,14,14,11,8,12,16,22,25,28,28,25,24,1,1,1,1,1,2,7,15,15,15,18,15,11,9,12,18,23,27,29,27,26,26,1,1,1,1,1,2,10,18,16,16,16,14,10,9,12,17,23,28,28,27,29,32,1,1,1,1,0,2,16,23,18,16,15,13,10,10,13,18,26,32,31,29,30,30,1,1,1,1,1,5,17,21,21,16,14,12,10,10,17,27,29,31,32,32,36,35,0,2,2,2,2,6,14,20,21,16,13,12,10,11,18,26,36,36,35,35,33,33,1,1,1,1,1,9,18,22,20,14,12,12,10,11,20,27,38,41,35,36,34,35,1,1,1,1,1,8,19,25,18,14,12,11,10,12,21,34,43,42,36,34,35,34,1,1,1,1,2,10,19,21,18,15,13,11,10,13,24,39,46,44,36,34,34,34,1,1,1,1,2,9,18,20,19,18,15,11,10,15,28,47,46,36,34,34,34,34,1,1,1,1,1,9,16,20,21,19,15,10,10,19,35,48,41,36,35,34,34,34,1,1,1,1,3,10,16,20,22,19,15,11,12,21,33,38,38,39,39,35,34,34,1,1,1,1,3,9,15,21,23,19,15,10,12,20,27,37,38,39,38,37,34,34,1,1,1,1,4,11,15,22,23,18,14,10,12,20,27,37,39,40,37,36,34,34],
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
