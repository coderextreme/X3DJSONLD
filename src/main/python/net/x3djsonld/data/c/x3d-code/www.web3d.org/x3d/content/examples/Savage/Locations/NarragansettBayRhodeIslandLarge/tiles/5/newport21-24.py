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
        texture=ImageTexture(url=['../../images/5/newport21-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62149034642794,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[12,11,6,8,7,11,18,25,29,36,38,43,46,49,53,53,51,45,40,35,29,28,17,11,5,3,5,12,18,27,29,35,35,41,44,41,47,40,44,39,36,34,29,27,15,13,8,2,5,8,17,25,29,33,38,37,42,38,43,33,26,30,32,33,29,28,14,11,9,7,7,10,12,19,27,31,35,33,35,36,33,31,24,25,28,30,28,28,13,9,4,3,7,4,5,12,26,34,34,29,32,29,25,29,20,22,26,28,28,28,12,6,4,1,4,3,10,11,22,24,32,31,28,25,26,22,25,20,24,27,28,27,5,3,2,1,0,5,4,12,19,28,33,30,26,22,21,19,22,20,22,24,25,24,3,1,1,2,8,0,4,9,16,24,29,28,29,29,22,19,16,19,19,21,21,21,0,0,1,4,6,8,6,6,10,18,26,30,33,30,26,21,18,17,16,16,17,17,0,0,0,0,1,6,7,6,9,15,24,30,34,31,26,23,19,17,14,14,14,14,0,0,0,1,2,2,2,2,6,12,24,31,34,31,27,24,21,18,14,11,10,11,0,0,0,1,1,1,1,1,5,8,21,29,33,31,28,25,23,20,14,9,6,6,0,0,0,1,1,1,1,1,2,7,17,27,32,32,29,24,24,19,13,9,5,5,0,0,0,0,0,0,0,0,1,7,15,23,28,27,28,24,23,18,13,8,4,3,0,0,0,0,0,0,0,0,0,6,9,18,24,25,24,23,21,17,12,7,3,2,0,0,0,0,0,0,0,0,0,2,6,11,19,23,24,23,19,16,11,7,2,2,0,0,0,0,0,0,0,0,0,0,5,7,12,17,19,22,16,15,11,6,2,2,0,0,0,0,0,0,0,0,0,0,1,5,6,10,14,17,17,12,10,7,2,2,0,0,0,0,0,0,0,0,0,0,0,0,1,5,8,10,13,11,9,5,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,6,8,9,8,4,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,5,6,5,4,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1],
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
