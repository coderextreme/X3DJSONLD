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
        texture=ImageTexture(url=['../../images/5/newport29-17.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.41746982806205,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[22,22,21,21,20,20,19,18,17,17,19,18,18,12,8,4,2,1,0,0,0,0,22,21,21,20,20,18,17,15,12,12,12,14,14,10,6,3,2,0,0,0,0,0,22,21,21,20,19,18,16,13,11,10,8,8,9,6,4,3,1,0,0,0,0,0,21,21,20,19,18,17,15,14,13,13,12,7,6,5,3,2,0,0,0,0,0,0,20,19,19,19,20,20,20,17,15,13,12,9,7,5,3,2,1,1,0,0,0,0,18,17,20,21,21,21,21,19,15,11,9,8,5,4,3,2,1,0,0,0,0,0,18,18,19,21,21,21,20,18,15,11,6,5,4,3,3,2,1,0,0,0,0,0,20,20,20,20,21,22,20,17,14,11,9,5,4,3,2,2,0,0,0,2,1,0,21,21,21,20,21,21,18,15,11,10,9,6,3,2,2,0,0,0,2,4,5,4,21,21,19,17,17,17,14,15,10,8,7,5,3,2,1,0,0,1,4,6,6,6,19,20,17,15,14,12,11,12,7,6,5,3,2,2,0,0,1,3,5,7,7,7,15,16,14,12,10,9,8,6,5,4,3,2,2,0,0,1,3,5,11,11,8,8,16,13,11,8,6,5,5,5,4,3,2,2,1,0,0,3,11,19,20,16,11,11,16,13,9,6,5,4,4,4,3,3,2,2,1,0,2,10,23,28,25,21,17,17,15,11,6,5,4,3,3,2,2,2,2,1,0,1,9,21,29,30,25,22,20,20,5,4,3,3,2,2,2,2,2,2,1,1,2,9,21,26,31,30,26,24,23,23,2,2,2,3,3,2,6,5,2,2,1,2,3,16,25,31,34,30,27,26,26,26,4,3,4,3,2,1,2,4,2,1,1,3,13,23,31,36,36,32,29,28,28,29,3,3,2,2,2,1,1,2,2,1,2,7,18,30,40,41,39,34,32,29,30,30,3,4,6,6,4,3,2,2,2,2,3,13,26,38,47,47,42,37,35,33,34,34,9,13,16,14,12,11,6,2,2,2,6,19,36,48,53,49,44,39,38,38,39,39,13,16,21,21,18,19,14,6,2,5,12,26,45,53,54,49,44,42,41,42,43,43,19,22,23,24,21,21,18,7,2,4,20,34,50,57,55,49,44,43,44,44,46,46,20,23,24,24,22,21,18,7,2,4,20,35,50,58,54,49,44,44,44,44,46,46],
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
