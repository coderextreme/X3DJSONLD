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
        texture=ImageTexture(url=['../../images/5/newport25-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.71825065109993,-71.2855577038016,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[5,2,1,7,13,15,18,20,17,18,19,18,18,21,23,25,30,32,35,38,40,40,0,2,0,3,5,12,14,15,19,20,20,20,22,24,25,26,29,32,35,39,40,40,0,0,0,1,5,8,14,14,20,21,23,20,22,23,24,29,31,35,38,39,41,43,0,0,0,0,6,7,9,15,18,22,21,22,23,22,26,27,29,35,37,37,39,41,0,0,0,0,4,3,10,16,19,18,21,20,22,21,23,26,31,33,34,34,36,38,0,0,0,0,0,3,10,12,16,18,19,18,18,20,19,25,28,30,31,31,33,32,0,0,0,0,0,6,7,10,13,17,16,16,15,18,20,24,23,26,24,26,30,29,0,0,0,0,1,5,9,9,12,12,14,15,16,15,16,20,22,18,20,19,23,22,0,0,0,0,1,7,13,13,11,12,11,13,13,12,13,18,20,17,19,14,15,14,0,0,0,0,1,4,5,11,12,14,12,11,14,13,13,10,11,14,14,13,10,9,0,0,0,0,1,6,7,8,13,12,12,12,12,10,12,12,10,11,9,11,6,6,0,0,0,1,4,3,6,8,11,11,9,10,9,12,12,10,10,9,10,5,6,6,1,0,0,0,4,4,6,7,8,9,10,10,12,7,10,9,12,8,7,8,8,9,4,0,0,0,5,5,9,10,7,6,10,11,8,7,7,9,10,10,9,9,10,10,5,1,0,0,7,9,10,10,9,6,9,7,9,8,4,7,8,14,15,15,12,9,7,0,0,1,10,10,12,11,11,7,8,9,5,6,5,7,7,12,13,12,10,9,2,0,0,2,9,11,14,15,10,9,7,4,4,5,7,6,6,9,12,14,12,10,0,0,0,3,7,13,17,13,10,8,4,4,4,4,5,6,7,5,5,10,7,6,0,0,0,6,9,10,9,11,7,8,1,2,1,5,2,5,5,5,8,6,5,4,0,0,1,7,10,9,8,7,8,5,2,2,1,1,4,3,3,4,6,3,3,3,0,0,8,5,9,10,11,5,5,1,1,1,1,1,1,5,3,2,7,7,9,8,0,0,9,10,10,11,6,2,1,1,1,1,1,2,2,2,4,5,9,8,12,13,0,0,6,10,11,6,3,1,1,1,1,2,4,5,3,5,5,9,8,13,11,11,0,0,9,11,8,6,2,1,1,1,2,2,4,5,3,4,5,12,8,13,12,11],
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
