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
        texture=ImageTexture(url=['../../images/5/newport29-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.30754305784501,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[11,17,20,22,22,21,20,14,10,8,8,6,5,5,5,5,6,8,9,10,11,11,18,20,23,24,23,23,22,17,11,10,9,7,5,5,5,5,5,5,6,8,9,10,21,26,29,29,27,26,25,22,19,15,12,8,7,6,6,6,6,5,5,6,6,6,24,31,35,32,28,27,24,21,17,15,13,10,8,7,7,7,6,5,4,5,5,5,25,31,33,31,28,24,22,19,17,17,17,12,10,9,8,7,6,5,4,5,6,6,31,37,39,35,30,24,21,20,20,19,19,17,15,10,9,9,6,5,5,5,6,6,33,42,40,35,31,27,25,23,22,21,20,18,17,12,10,9,8,6,5,5,7,7,35,44,38,34,31,28,25,23,22,22,23,18,14,13,10,8,6,5,4,4,9,10,38,43,37,34,30,27,24,23,21,21,19,16,14,12,9,8,7,7,5,4,4,4,41,43,38,34,30,27,24,23,22,21,20,16,14,12,9,8,8,8,5,6,5,5,42,41,35,32,29,27,24,23,22,23,21,18,16,13,11,9,9,9,8,7,5,5,42,39,33,28,27,27,24,23,24,24,23,21,17,14,11,10,10,9,8,8,9,8,42,36,29,26,26,26,25,26,27,26,24,20,16,13,11,10,9,9,9,9,9,9,41,35,30,27,27,28,28,29,30,29,25,21,17,13,11,10,9,8,8,9,11,12,38,34,30,25,26,29,30,30,32,31,27,23,19,15,11,11,9,8,9,10,12,12,33,27,26,25,26,30,31,32,34,32,28,23,18,14,12,12,10,9,9,10,11,12,29,27,25,26,27,30,31,34,37,35,30,24,19,15,13,11,11,11,10,10,11,11,24,23,24,26,28,29,31,34,36,35,29,24,19,14,13,11,12,11,11,11,11,11,22,22,23,27,30,30,33,35,36,34,28,22,18,16,14,12,12,11,13,14,14,13,24,23,23,28,30,32,32,35,37,33,28,22,18,18,15,16,15,11,14,14,14,14,28,25,25,30,33,33,35,36,36,31,27,22,21,20,17,16,16,14,15,14,15,15,28,30,32,35,36,32,35,38,35,29,26,24,21,18,16,15,14,14,15,15,12,12,29,31,35,39,35,36,38,38,35,30,27,24,21,17,16,15,15,16,16,14,12,12,29,31,36,40,35,36,38,38,34,30,26,24,21,17,17,16,16,16,16,14,13,13],
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
