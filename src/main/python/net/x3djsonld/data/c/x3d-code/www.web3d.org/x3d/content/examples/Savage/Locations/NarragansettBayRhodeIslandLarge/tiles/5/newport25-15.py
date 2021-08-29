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
        texture=ImageTexture(url=['../../images/5/newport25-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.71825065109993,-71.46144053614887,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[27,25,27,22,24,22,22,22,22,22,22,23,24,24,24,24,22,22,22,21,20,21,28,27,25,28,24,24,22,22,22,23,24,23,21,21,21,27,23,23,22,21,22,22,28,29,28,28,25,25,25,23,22,21,21,23,20,19,22,27,25,24,21,22,22,23,28,29,26,26,27,26,25,24,24,22,22,18,18,19,23,28,27,22,20,21,23,23,22,26,28,29,25,23,23,26,25,21,21,20,19,18,18,23,26,25,23,21,23,24,24,28,29,25,24,24,23,22,20,22,22,22,20,19,15,13,20,22,23,25,24,24,25,26,27,28,26,17,17,15,16,22,23,23,22,18,12,8,18,23,24,23,24,24,26,27,29,25,27,21,17,16,16,17,17,17,18,15,12,16,20,22,24,24,22,22,28,29,28,26,25,23,20,19,19,16,13,13,15,15,14,17,22,24,26,22,24,23,31,30,28,26,26,26,22,18,17,15,15,16,16,16,11,11,23,26,30,24,22,22,29,27,27,27,25,25,22,17,16,8,12,20,14,11,16,18,20,24,28,27,25,24,24,24,22,21,21,18,15,13,14,16,9,8,8,15,20,20,22,25,27,26,24,23,16,17,16,14,13,12,13,13,13,12,10,8,9,12,22,26,33,34,27,26,23,22,11,6,13,15,11,11,12,12,13,11,10,11,13,19,24,29,28,31,27,28,26,24,10,11,6,11,13,10,11,9,11,16,18,16,13,14,20,26,28,30,34,27,26,26,10,9,10,7,11,14,12,14,16,17,13,13,15,18,20,21,26,24,29,30,26,25,12,13,10,7,7,13,15,17,14,11,13,14,15,20,24,22,24,26,26,28,23,24,14,12,8,4,11,14,13,16,15,13,12,7,10,17,19,25,25,25,25,24,27,27,24,21,14,7,4,10,11,10,12,14,13,6,6,7,15,22,23,23,21,25,26,26,26,25,23,21,14,7,8,7,4,5,11,9,8,8,12,14,16,17,19,21,26,26,30,30,29,30,27,17,10,9,6,4,2,10,12,12,10,13,13,14,20,20,25,25,33,35,35,36,32,28,17,12,8,6,3,7,12,14,11,14,14,15,14,19,21,22,35,34,38,38,39,35,29,18,9,4,4,10,12,15,13,14,15,15,15,18,21,24,35,34,38,39,40,37,30,19,10,3,5,10,12,15,14,14,15,15,16,18,20,23],
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
