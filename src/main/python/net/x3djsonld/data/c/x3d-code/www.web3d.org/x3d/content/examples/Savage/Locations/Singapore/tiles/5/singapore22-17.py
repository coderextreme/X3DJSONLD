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
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0.6,0.6,0.6)),
        texture=ImageTexture(url=['../../images/5/singapore22-17.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4043609355158675,103.83400758019333,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=22,zSpacing=4.1579583E-4,height=[12,11,10,10,9,8,8,8,8,8,8,7,7,6,5,3,3,3,3,3,3,4,4,5,5,4,3,1,0,1,2,4,5,6,7,8,10,12,11,11,10,9,8,8,8,8,8,8,7,7,7,6,4,4,3,3,3,3,3,4,5,6,6,5,5,4,4,5,5,6,7,7,8,9,11,11,11,10,9,8,8,8,8,8,8,7,7,7,6,5,4,3,3,3,3,3,4,6,7,8,8,8,8,8,7,7,7,8,8,8,8,11,12,11,10,9,9,8,8,8,8,8,8,7,7,7,6,5,4,4,3,3,3,4,6,7,9,11,12,12,11,11,9,9,8,8,8,7,11,12,11,10,10,9,8,7,7,8,8,8,8,7,7,7,6,5,5,4,3,3,3,5,8,11,13,13,14,13,13,11,10,9,8,7,7,11,11,11,10,10,9,8,7,7,8,8,8,8,8,7,7,7,6,6,6,4,3,3,4,7,12,14,14,14,13,12,11,10,9,8,7,6,10,9,9,9,9,9,8,7,7,7,8,9,9,8,8,7,7,7,7,7,6,5,4,4,7,12,14,13,12,12,11,11,11,9,8,7,6,8,7,7,7,7,7,7,6,6,7,8,9,9,9,8,8,8,7,7,8,8,8,7,7,8,10,11,10,10,10,11,10,10,9,8,6,5,6,5,5,5,5,5,5,6,6,7,8,9,10,9,9,9,8,7,8,10,10,11,11,10,10,10,9,9,9,10,11,10,9,9,8,6,4,5,3,2,2,3,4,5,5,6,8,9,9,10,10,9,9,9,10,11,14,14,14,13,12,11,10,9,9,9,10,11,10,9,8,6,4,3,4,2,1,0,1,3,4,6,7,9,9,10,9,9,9,9,10,12,14,17,18,17,16,15,13,11,9,9,9,10,11,10,8,7,5,3,2,5,4,1,0,0,2,5,7,9,10,11,10,9,8,9,10,12,14,16,19,19,18,18,17,16,14,12,11,11,11,12,12,10,8,4,2,2,6,5,3,0,1,2,5,9,11,12,12,11,9,7,9,11,14,17,20,22,22,20,19,19,18,17,16,14,13,12,13,13,12,8,4,2,2,8,6,4,3,3,3,7,11,13,15,13,11,10,10,11,13,16,20,23,26,26,23,22,22,21,20,19,18,16,15,15,15,13,10,7,5,3,11,9,8,7,6,6,9,13,16,18,16,12,12,12,13,15,19,24,27,31,30,26,24,24,24,23,22,21,20,18,16,15,14,12,9,7,5,14,12,12,13,12,12,14,17,18,18,15,13,13,14,16,19,24,29,32,33,31,28,26,25,24,24,23,23,21,19,17,16,14,12,10,9,7,17,16,18,18,17,17,18,20,20,18,17,15,15,16,19,22,28,34,36,35,33,30,28,27,26,25,24,24,23,20,18,17,15,13,12,11,9,18,19,20,21,20,19,21,23,23,22,21,19,18,18,22,26,32,37,38,37,36,34,33,32,31,30,28,26,23,20,18,16,14,12,11,10,9,19,20,22,23,22,21,23,26,26,26,24,22,22,21,24,29,34,39,40,39,38,38,37,37,36,33,30,27,23,19,17,15,13,11,10,9,9,20,21,22,22,22,23,24,25,26,28,26,25,23,21,22,26,30,33,35,37,37,38,39,39,36,33,29,25,21,18,16,14,12,10,10,10,10,21,21,22,21,22,24,24,25,27,29,28,26,24,20,21,23,25,27,30,33,36,38,39,39,36,31,27,23,20,16,14,13,11,10,9,9,9,23,23,22,21,22,23,23,23,25,26,27,28,25,21,20,21,22,23,24,26,28,32,34,34,32,28,25,22,19,16,14,12,11,10,9,8,7],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(1.3519706612479037,103.81964454606431,0),geoSystem=['GDC'])))])
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
