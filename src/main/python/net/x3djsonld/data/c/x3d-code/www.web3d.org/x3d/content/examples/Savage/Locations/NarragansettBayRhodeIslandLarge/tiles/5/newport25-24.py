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
        texture=ImageTexture(url=['../../images/5/newport25-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.71825065109993,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[40,44,47,47,43,37,28,19,9,5,1,1,1,1,1,1,1,1,1,1,1,1,40,47,47,46,44,39,26,14,7,2,1,1,1,1,1,1,1,1,1,1,1,1,43,48,52,43,40,32,24,13,7,1,1,1,1,1,1,1,1,1,1,1,1,1,41,45,49,42,39,29,22,8,1,1,1,1,1,1,1,1,1,1,1,1,0,0,38,43,41,37,32,24,14,1,1,1,1,1,1,1,1,1,1,1,1,2,4,4,32,34,31,29,24,13,5,1,1,1,1,1,1,1,1,1,1,2,2,7,10,10,29,26,24,23,15,8,1,1,1,1,1,1,2,3,1,2,2,2,5,10,19,20,22,22,18,16,8,2,0,1,1,1,1,1,3,2,1,1,1,4,8,13,17,16,14,14,14,9,2,1,1,1,1,1,1,1,5,6,2,1,3,5,10,14,16,14,9,7,6,4,2,1,1,1,1,1,1,2,2,4,3,4,6,8,11,14,15,15,6,7,5,3,1,1,1,1,1,1,1,6,2,5,5,6,8,10,12,14,14,14,6,4,0,1,1,0,1,0,1,1,1,4,5,6,10,8,10,9,12,14,14,15,9,7,4,1,1,4,2,0,2,1,1,5,6,6,9,10,9,10,11,14,15,15,10,9,7,3,1,1,4,4,4,2,2,1,8,11,12,9,12,11,12,13,13,13,9,8,9,8,1,3,3,8,6,5,3,6,9,10,11,12,10,13,14,15,15,14,9,7,7,5,5,3,6,9,8,5,7,9,5,7,11,15,16,14,16,17,15,15,10,5,7,2,1,4,3,6,8,10,11,11,7,13,12,17,18,19,19,19,16,16,6,6,4,1,4,4,6,11,11,14,12,11,11,11,11,14,17,19,20,19,17,16,4,4,2,5,5,6,8,5,11,12,12,16,12,12,14,12,16,19,20,20,17,16,3,6,7,1,6,7,13,7,9,10,12,9,11,13,14,16,19,21,22,21,17,16,8,6,5,1,9,7,10,10,10,10,10,9,12,12,16,18,19,22,23,21,18,17,13,8,3,1,8,8,13,10,11,4,2,4,14,16,16,20,19,22,24,21,17,16,11,9,7,1,6,7,11,9,8,2,2,2,9,14,18,19,20,22,22,20,15,15,11,10,6,1,5,4,10,9,8,2,2,2,9,15,17,18,20,21,22,20,15,14],
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
