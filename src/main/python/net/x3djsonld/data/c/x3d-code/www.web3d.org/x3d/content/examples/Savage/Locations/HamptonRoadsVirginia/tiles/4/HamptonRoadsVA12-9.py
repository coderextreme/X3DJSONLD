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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA12-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.52124997348872,-76.86799996483882,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[11,5,10,10,6,9,17,14,18,25,21,4,16,8,20,12,24,8,10,11,17,12,8,4,6,3,8,6,10,15,13,13,20,12,8,6,15,17,4,3,2,10,4,11,14,10,10,9,8,7,8,14,13,9,14,6,13,15,12,13,12,11,10,3,-5,13,7,8,13,8,13,9,8,5,13,14,12,7,13,10,9,12,9,7,13,11,7,9,13,12,15,11,16,10,14,9,9,14,9,10,12,7,13,11,14,14,14,11,7,9,11,6,6,6,5,9,9,11,17,15,10,8,10,9,12,7,6,11,11,12,11,14,21,11,6,6,5,5,5,11,11,7,11,10,11,11,10,11,9,9,8,13,15,12,14,13,14,9,12,5,5,5,5,9,10,9,7,11,10,15,7,7,10,13,8,15,24,19,15,18,22,25,10,9,5,4,13,10,10,11,7,9,6,7,13,11,10,12,32,25,11,15,21,15,25,26,27,4,4,4,4,15,6,3,3,10,13,13,15,14,32,14,26,15,32,31,24,24,26,14,15,24,24,3,3,14,13,3,10,7,11,15,25,23,18,15,16,31,13,19,16,17,-5,14,20,24,18,6,3,12,2,2,8,11,23,14,27,18,26,30,14,20,5,14,10,10,20,14,13,12,11,10,8,2,2,15,16,22,17,16,30,17,16,24,26,24,27,15,21,10,12,14,15,11,5,2,2,2,22,25,16,19,16,28,26,23,13,20,10,19,26,23,17,10,11,12,9,9,8,2,13,24,19,30,21,25,12,17,11,22,9,14,22,12,25,7,8,17,9,10,10,12,20,10,17,18,26,20,17,14,13,7,14,7,13,13,8,12,19,10,12,13,12,8,18,15,10,30,11,23,9,16,1,8,23,21,12,9,14,11,18,12,9,11,15,25,12,16,8,18,18,27,10,9,10,15,10,14,12,12,6,15,13,16,9,5,18,22,16,10,11,17,15,6,14,4,9,13,13,13,13,15,11,10,15,25,30,24,14,20,15,9,9,9,16,8,22,10,10,23,23,26,36,13,9,14,32,15,20,26,20,19,8,13,9,10,10,21,8,7,13,10,14,12,12,16,16,13,21,22,32,24,21,23,7,13,8,11,11,14,9,12,14,10,18,11,15,15,16,12,20,21,31,23,24,23],
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
