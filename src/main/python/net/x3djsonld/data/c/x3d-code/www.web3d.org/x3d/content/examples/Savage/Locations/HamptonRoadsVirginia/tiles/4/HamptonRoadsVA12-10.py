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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA12-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.52124997348872,-76.74299996181202,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[12,9,13,14,20,19,11,25,26,24,17,16,20,20,28,20,15,23,10,18,16,22,11,12,11,14,13,12,17,23,22,24,20,24,19,19,24,27,21,23,17,14,12,14,13,8,9,6,10,22,16,27,15,20,15,9,19,28,28,22,30,25,23,21,14,14,9,8,13,10,7,14,11,18,22,11,22,13,13,10,18,24,24,26,18,23,17,16,9,5,8,23,10,10,8,29,14,21,11,15,15,23,14,14,23,29,21,20,22,23,14,12,17,9,13,12,19,13,9,6,12,15,17,11,22,12,13,20,27,23,29,20,12,8,8,14,13,7,15,16,9,23,18,13,13,23,36,26,12,30,24,27,24,22,15,12,9,14,9,14,12,13,7,16,18,10,13,16,24,10,13,17,24,13,21,22,12,10,10,8,9,10,8,11,12,15,19,6,6,8,24,31,11,13,15,23,28,10,14,14,12,12,14,17,21,10,6,5,7,12,14,13,5,14,10,10,14,14,22,12,15,15,11,10,11,20,12,14,8,7,6,14,8,7,12,20,8,7,9,22,18,13,11,15,10,12,9,8,5,9,3,6,6,11,9,8,3,11,18,6,10,17,30,23,15,7,8,13,8,7,13,12,21,10,8,16,9,19,0,12,11,16,10,14,14,12,2,13,13,12,7,10,14,10,24,12,4,15,15,10,14,11,11,21,27,9,12,18,2,11,10,6,13,10,14,9,24,16,9,7,6,2,16,10,13,15,12,5,28,27,12,2,12,11,15,7,6,9,12,20,5,0,5,8,12,0,13,29,10,13,17,23,8,2,1,6,10,9,9,10,12,6,6,10,4,0,4,8,13,10,19,7,23,22,25,12,1,1,10,8,12,4,9,18,8,3,10,12,11,0,7,9,10,30,15,22,22,18,5,1,6,11,12,3,12,15,18,12,11,14,9,10,3,6,22,12,13,20,20,21,16,13,1,8,9,10,10,3,14,15,14,15,9,7,7,14,14,13,21,18,19,34,20,16,18,1,8,11,3,11,15,12,10,7,7,9,21,12,21,20,15,18,23,27,17,19,21,1,0,5,1,13,11,9,12,14,7,15,15,17,14,14,22,17,23,24,21,18,21,1,0,5,1,16,11,9,12,14,7,12,16,16,16,15,19,19],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.989999984839216,-76.99299996786561,0))))])
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
