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
        texture=ImageTexture(url=['../../images/5/newport9-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.331209432411974,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,1,1,1,1,1,2,3,3,3,3,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,1,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,4,3,2,3,0,0,0,0,0,0,0,0,0,2,4,2,4,3,2,0,0,0,5,5,5,2,0,0,0,6,6,4,0,0,0,5,7,5,7,7,5,2,1,2,7,7,7,8,2,0,1,7,7,6,3,0,1,5,7,7,8,6,4,2,2,2,9,11,12,8,7,2,9,9,8,5,2,0,1,6,6,8,9,8,3,3,3,3,12,12,8,9,16,14,14,11,10,9,4,2,3,6,8,8,11,9,4,3,3,3,17,14,6,6,17,21,21,16,12,13,12,8,10,13,13,12,12,10,8,3,5,5,19,17,8,6,21,26,25,20,12,14,12,13,11,15,18,18,20,14,10,8,9,9,18,16,12,15,20,22,26,21,14,15,15,13,12,16,19,21,21,17,14,11,15,15,22,17,12,18,20,24,27,22,16,18,21,15,18,22,19,19,19,19,17,15,20,21,25,16,10,14,21,27,29,22,17,23,28,23,24,30,22,22,23,25,22,20,25,25,25,18,14,16,20,23,27,21,19,23,28,27,28,30,22,24,25,27,26,23,24,25,27,26,26,22,24,26,26,25,23,18,20,24,27,27,23,23,26,27,24,24,21,21,26,25,31,25,32,28,28,28,25,20,21,24,27,27,28,29,28,26,24,23,23,22,22,21,27,22,17,18,26,28,25,28,26,23,25,26,27,28,28,24,20,20,20,20,29,21,16,19,17,17,22,25,24,25,24,22,24,25,25,23,22,19,18,18,18,18,20,20,14,18,18,19,25,26,25,22,22,19,22,22,23,23,22,22,22,22,22,22,14,15,16,15,15,15,23,27,27,23,19,19,18,14,16,24,27,25,22,20,24,24,13,15,16,15,14,15,22,27,27,23,18,19,17,13,15,24,27,24,21,19,24,25],
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
