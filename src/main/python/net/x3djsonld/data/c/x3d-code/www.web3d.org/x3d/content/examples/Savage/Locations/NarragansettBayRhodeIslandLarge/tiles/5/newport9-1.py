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
        texture=ImageTexture(url=['../../images/5/newport9-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.331209432411974,-71.7692354927566,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,1,2,0,0,3,4,4,7,10,14,16,14,10,0,0,0,0,0,0,0,1,1,2,3,0,0,4,5,8,10,12,16,18,15,9,4,2,0,0,0,0,0,0,0,1,0,0,1,4,8,12,13,14,17,16,14,7,1,3,0,0,0,0,0,0,0,0,0,0,2,5,12,15,13,13,17,19,13,6,3,2,0,0,0,0,0,0,0,0,0,1,3,7,11,12,9,10,14,17,12,7,9,0,0,0,0,0,0,0,0,0,0,0,4,6,10,9,8,8,12,14,12,11,9,0,0,0,0,0,0,0,0,0,0,0,3,6,8,7,7,9,13,15,12,11,1,0,0,0,0,0,2,0,0,0,1,2,5,7,9,8,8,10,16,16,14,11,2,2,0,0,0,0,2,1,1,1,1,2,2,6,4,4,6,8,15,16,16,12,6,7,8,6,6,6,3,2,1,2,2,3,3,5,5,3,6,10,15,17,17,9,8,13,14,14,13,13,3,3,2,3,4,4,4,5,7,7,9,11,14,15,13,7,8,14,17,20,21,20,5,5,4,4,6,7,8,10,11,12,13,13,13,13,10,8,9,12,18,20,18,18,9,8,6,9,11,12,16,15,17,16,18,18,17,17,12,10,11,12,17,18,21,22,15,13,9,11,16,16,21,19,25,24,24,22,21,18,14,13,13,14,15,16,20,21,21,18,14,14,21,21,22,21,27,29,28,23,19,15,13,15,16,18,18,21,20,20,25,23,20,18,24,25,24,22,25,28,30,28,23,19,17,19,21,24,24,26,27,27,25,24,23,20,21,23,26,26,28,31,36,34,30,26,23,25,29,31,27,29,31,31,21,21,20,24,28,27,27,27,29,30,31,30,29,29,30,33,35,34,35,37,34,34,22,21,21,21,26,28,27,26,27,28,28,30,28,27,30,34,36,37,42,45,42,41,20,19,19,19,20,22,22,25,25,24,24,23,23,24,28,32,35,35,38,40,41,42,18,18,18,17,18,21,19,20,22,22,18,18,20,24,28,31,34,33,36,39,41,41,22,22,19,18,20,21,16,16,17,19,18,18,19,22,23,28,32,34,37,38,39,39,24,23,21,20,19,21,17,15,15,15,14,14,15,17,20,24,27,33,34,33,40,41,25,23,22,20,19,21,18,16,15,14,14,14,14,17,19,23,26,33,33,33,40,41],
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
