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
        texture=ImageTexture(url=['../../images/5/newport29-19.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.37349911997524,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[18,12,17,16,12,9,9,9,9,10,12,19,22,25,29,33,36,35,33,29,28,28,19,18,18,19,16,14,12,11,11,11,13,15,18,20,26,31,31,29,28,27,26,26,19,20,19,20,19,18,18,17,17,13,15,16,17,19,24,27,27,25,24,23,22,22,19,19,19,19,18,15,15,14,16,14,16,17,18,19,20,23,24,23,22,20,18,18,20,20,19,18,17,15,15,15,14,14,15,16,17,20,21,21,20,19,18,17,17,17,24,22,20,18,17,17,18,17,17,17,17,17,17,18,19,20,20,19,16,14,15,15,30,27,24,23,21,20,18,20,20,18,18,18,18,18,20,20,19,18,15,14,14,14,31,29,27,24,21,21,20,18,18,19,18,18,18,19,19,19,18,17,16,15,14,14,27,28,29,27,24,22,21,20,20,20,20,20,20,19,19,19,18,17,17,17,17,17,23,24,24,24,23,23,22,21,21,20,20,20,20,20,20,20,19,19,18,19,19,19,23,23,23,23,23,23,22,21,21,21,21,21,21,20,20,20,21,20,18,18,17,17,23,23,23,23,24,23,23,21,21,20,20,20,20,20,21,23,21,19,18,18,17,17,24,24,24,24,25,24,23,21,20,18,18,18,18,18,19,20,20,19,18,18,17,17,24,25,24,24,24,21,20,20,19,17,17,16,16,17,18,18,18,18,18,18,17,16,22,22,23,22,20,20,19,19,19,18,17,16,15,15,17,17,16,17,16,16,15,15,19,19,19,19,19,18,18,18,17,18,18,17,14,15,18,16,15,15,15,14,14,14,17,16,16,17,19,19,17,15,16,16,16,15,14,14,14,15,15,14,14,16,17,17,11,12,14,17,18,18,17,15,14,13,13,12,11,10,9,11,11,13,15,16,17,17,5,7,14,17,16,14,12,11,11,11,11,11,10,9,9,9,8,8,8,8,8,8,0,3,3,7,8,8,9,11,11,10,10,10,10,9,8,8,8,7,7,7,6,6,0,0,2,1,5,7,9,9,9,9,9,9,9,9,9,8,8,8,7,7,6,6,0,0,1,1,2,6,8,8,8,9,9,9,9,9,9,8,8,7,7,6,6,6,0,0,0,2,5,6,7,8,8,8,8,9,9,8,8,7,6,6,5,5,5,5,0,0,0,2,5,5,7,8,8,8,8,8,8,8,7,7,6,6,5,5,5,5],
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
