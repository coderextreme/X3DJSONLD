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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA14-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.333749968948524,-77.36799997694601,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[13,12,12,12,18,14,21,22,18,14,17,16,23,24,32,26,21,24,22,24,27,28,12,12,13,13,11,20,21,17,9,14,13,11,21,30,15,24,25,26,22,27,25,25,17,13,18,15,12,20,14,18,15,13,17,10,14,22,15,14,27,26,28,20,23,22,16,20,17,12,19,19,22,13,11,13,12,10,23,14,28,30,33,22,33,29,27,37,16,12,8,20,19,19,17,10,15,13,12,9,15,17,22,30,31,40,36,32,30,33,13,11,18,15,18,20,16,17,9,10,14,13,16,13,12,22,17,34,32,36,31,32,13,15,10,14,18,22,18,24,13,14,13,12,14,19,17,21,23,25,37,34,30,33,15,11,26,8,21,13,14,11,13,13,14,12,16,16,13,26,17,27,34,33,29,30,18,15,14,11,15,21,16,17,15,15,10,14,14,16,14,13,19,25,34,45,45,30,18,13,15,13,16,16,11,16,13,8,19,11,23,18,17,16,11,24,37,26,38,35,22,14,17,18,16,14,11,13,18,20,13,18,16,15,14,18,17,18,29,30,32,27,18,15,12,12,12,20,12,18,14,16,22,17,16,16,15,16,20,21,31,20,30,34,22,18,14,10,14,18,19,15,13,14,12,12,15,20,26,29,18,15,24,18,26,22,27,18,17,15,16,19,16,14,17,12,11,14,11,22,13,22,14,17,16,14,12,15,23,23,18,24,20,20,15,13,15,13,14,21,24,13,21,15,20,11,23,11,15,14,17,20,21,19,28,24,17,14,15,10,13,12,14,12,18,10,16,18,19,9,17,19,20,18,20,21,29,24,13,17,12,12,7,13,14,18,12,10,6,17,10,14,13,13,23,18,26,19,19,21,17,12,14,13,13,16,19,14,21,15,14,12,18,11,14,16,23,24,26,23,20,20,13,14,12,21,11,13,10,11,8,10,11,9,17,12,12,11,25,28,15,23,19,20,15,14,16,13,15,12,11,13,11,9,8,9,6,21,25,15,20,22,16,23,22,13,15,13,12,13,14,15,14,10,10,5,16,14,15,18,17,22,24,25,26,12,22,23,13,13,13,11,16,11,11,15,13,16,18,12,23,18,25,21,28,26,25,13,24,22,16,11,12,11,11,12,12,16,13,13,16,12,23,18,23,22],
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
