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
        texture=ImageTexture(url=['../../images/5/newport29-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.15364557954115,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[34,34,34,34,33,36,35,30,30,39,34,28,21,20,19,20,22,24,25,31,38,40,34,36,36,36,33,36,33,28,28,34,30,24,20,19,19,19,20,21,23,30,40,42,34,36,36,35,33,36,30,26,25,30,26,22,20,18,18,17,17,17,22,32,41,43,34,33,34,34,33,33,29,23,22,24,22,19,19,17,16,16,16,16,22,30,40,41,34,33,33,33,32,30,26,22,19,19,18,18,18,17,16,16,16,16,21,28,37,38,34,34,35,33,32,29,24,19,18,17,16,17,18,17,16,16,16,16,21,27,32,33,36,37,35,33,32,29,24,17,16,16,16,16,17,16,16,16,15,15,19,24,28,28,38,38,35,33,32,29,22,16,16,16,16,16,16,16,16,16,15,14,16,20,24,24,39,37,35,33,32,29,22,16,16,16,16,16,16,16,17,18,17,15,14,17,18,18,40,38,34,35,32,27,19,16,16,16,17,17,17,18,18,18,18,18,14,13,13,13,41,36,35,34,31,24,18,16,17,17,18,18,18,19,18,18,17,16,15,15,14,14,42,38,37,35,30,23,17,16,17,18,19,20,19,19,19,18,17,16,17,17,18,18,43,38,34,33,28,21,16,17,19,20,20,21,20,19,19,18,17,16,17,18,18,18,44,39,35,30,26,20,17,18,20,22,24,23,20,20,19,18,17,15,14,14,13,13,46,40,36,31,25,23,22,21,21,23,26,25,22,20,19,18,17,16,13,12,11,11,47,41,37,32,27,24,23,22,22,24,27,26,23,21,20,19,18,16,13,12,11,10,46,41,37,33,29,27,24,23,24,27,30,27,24,22,20,18,17,16,13,12,9,9,46,41,36,31,28,25,24,24,27,31,31,29,26,23,19,17,17,15,13,8,4,5,44,39,36,32,27,25,24,24,27,31,32,29,26,24,18,17,18,15,13,5,5,5,42,36,32,29,26,25,24,24,26,31,31,28,25,23,19,17,16,15,10,4,4,4,40,36,32,31,28,25,25,25,26,30,30,28,23,21,18,17,15,12,6,5,4,4,39,36,35,33,29,25,25,25,26,28,30,27,23,20,18,16,15,11,7,5,5,5,40,39,37,34,29,25,25,25,25,28,29,27,24,20,18,16,14,10,6,5,5,5,40,39,37,34,29,26,25,25,25,28,29,27,24,20,18,16,14,10,6,6,5,5],
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
