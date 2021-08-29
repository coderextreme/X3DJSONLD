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
        texture=ImageTexture(url=['../../images/5/newport29-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.39548447401864,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,2,18,19,15,17,19,17,14,15,18,18,18,0,0,0,0,0,0,0,0,0,0,13,22,21,14,15,19,21,21,20,20,19,19,0,0,0,0,0,0,0,0,0,2,20,21,21,20,19,21,21,22,21,20,19,19,0,0,0,0,0,0,0,0,0,2,18,21,21,21,21,21,22,22,22,20,19,19,0,0,0,0,0,0,0,1,1,2,19,20,20,20,21,22,23,24,24,21,20,20,0,0,0,0,0,0,0,2,2,15,22,23,21,20,21,22,24,27,32,30,25,24,0,0,0,0,0,0,0,1,3,16,25,24,20,16,17,20,23,27,31,33,31,30,0,0,0,0,0,0,0,0,0,1,3,10,10,8,11,14,18,22,25,29,30,31,4,2,0,0,0,0,0,0,0,0,0,2,4,6,9,11,14,17,20,23,26,27,6,6,4,1,1,0,0,1,2,1,0,0,2,4,5,7,15,18,19,20,23,23,7,8,9,11,12,10,8,7,3,1,0,0,1,2,4,9,17,19,21,22,23,23,8,12,15,17,17,15,10,6,3,1,0,0,0,1,3,6,19,21,21,22,23,23,11,15,17,19,18,16,12,7,3,0,0,0,0,0,0,5,6,14,21,23,24,24,17,18,20,20,19,16,12,8,4,1,0,0,0,0,0,3,4,15,21,22,24,24,20,22,24,25,22,18,15,10,5,2,0,0,0,0,0,4,4,12,20,22,22,22,23,26,27,29,25,20,17,13,8,1,2,3,0,0,0,0,1,5,18,19,19,19,26,29,30,32,28,23,20,16,10,4,1,1,2,1,0,0,0,1,4,14,17,17,29,31,33,33,30,24,22,20,17,14,12,7,5,4,3,2,0,0,2,6,10,11,30,33,34,34,32,26,24,20,18,17,13,11,11,7,5,5,5,0,0,1,4,5,34,35,36,36,33,28,24,21,21,20,18,17,15,16,15,13,10,2,0,0,0,0,39,39,37,36,32,28,24,22,22,21,20,19,18,18,18,17,16,6,0,0,0,0,43,42,38,36,33,29,24,22,20,21,20,20,19,19,18,18,12,2,0,0,0,0,46,43,39,36,32,29,25,22,20,19,18,18,19,19,19,18,17,13,4,0,0,0,46,43,39,36,32,29,25,21,20,19,18,18,19,19,19,18,17,14,6,0,0,0],
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
