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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA14-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.333749968948524,-76.61799995878522,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[16,17,16,20,15,18,9,7,9,4,5,6,11,11,6,9,12,9,6,12,10,10,27,17,19,18,18,10,11,8,7,6,8,8,12,21,7,13,6,9,6,9,16,17,16,16,23,17,21,10,8,11,16,16,15,17,10,24,22,8,11,9,4,5,7,9,13,17,21,19,16,8,9,8,13,14,13,16,17,7,9,6,7,8,6,16,5,9,22,18,26,7,9,7,7,15,13,14,10,13,19,20,15,11,8,9,8,11,12,8,20,13,8,6,6,10,5,7,18,16,19,23,17,17,5,9,10,8,8,10,21,15,25,13,13,8,11,10,4,7,2,6,6,6,22,8,13,12,9,9,5,19,9,7,21,14,8,5,6,5,7,6,7,7,8,9,9,14,13,11,10,4,7,6,5,5,17,21,13,9,6,5,6,8,5,5,8,8,6,6,11,18,6,15,12,8,11,10,12,19,20,11,16,6,7,5,6,8,7,5,12,6,18,5,5,19,14,17,19,11,9,11,18,8,16,7,13,6,4,10,6,8,6,7,7,8,7,9,17,13,23,6,7,6,12,10,17,15,23,5,7,7,7,7,7,9,8,15,17,5,9,6,6,11,7,7,6,5,7,20,10,10,12,7,6,7,8,8,16,17,13,18,6,9,11,10,15,8,7,6,9,26,27,24,13,17,16,11,16,10,18,13,15,15,15,17,12,10,9,7,10,15,21,21,20,22,6,6,8,25,22,18,15,16,18,18,15,16,9,18,10,6,7,18,19,23,21,20,21,20,16,8,10,22,24,17,11,12,8,13,18,17,5,10,21,20,22,21,26,18,20,15,17,21,22,20,21,4,14,13,9,15,9,11,6,11,4,21,18,22,16,21,16,16,13,16,22,20,17,18,10,7,12,7,20,17,7,10,8,15,22,17,19,22,20,17,21,18,20,16,23,22,13,8,6,6,9,9,6,10,13,8,13,16,15,17,19,22,19,20,18,18,17,23,6,7,19,6,6,26,2,6,6,5,5,9,13,13,12,15,19,17,18,19,19,11,16,23,6,14,17,19,8,6,5,6,6,6,5,8,14,14,24,17,19,11,16,16,17,18,18,18,17,20,7,7,6,6,6,7,6,10,14,16,22,18,18,10,14,16,17,19,17,18,16,24],
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
