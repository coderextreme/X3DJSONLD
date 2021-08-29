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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA14-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.333749968948524,-76.49299995575842,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[10,15,9,6,16,9,5,8,6,17,5,5,14,5,6,8,6,10,7,4,6,16,17,14,7,9,11,10,4,10,8,12,20,18,8,17,13,5,9,4,7,8,5,8,9,-3,6,10,12,17,4,4,6,9,7,5,4,6,6,7,6,4,8,6,7,7,9,12,20,11,11,12,1,5,12,21,8,6,5,7,5,3,8,19,9,7,8,6,8,13,7,5,7,9,0,7,11,5,3,6,9,8,3,18,9,9,10,18,13,16,15,7,7,7,6,10,9,0,10,6,13,13,19,5,6,3,8,16,20,3,16,24,7,7,6,7,5,4,3,0,8,5,6,7,3,3,4,5,1,8,11,4,8,7,5,4,8,5,7,10,7,0,0,0,0,0,6,5,5,7,8,7,11,6,6,7,10,8,8,9,4,8,7,7,0,0,0,0,2,3,4,7,7,13,1,4,6,5,11,16,23,8,5,11,6,6,9,0,0,0,0,0,5,4,6,6,22,2,8,6,6,14,5,6,9,7,7,6,15,6,0,0,0,0,0,8,-1,26,2,9,16,8,11,8,20,6,14,9,9,6,6,6,9,0,0,0,0,0,0,5,0,8,5,5,10,10,16,25,4,6,8,9,9,10,5,0,0,0,0,0,0,0,0,-1,14,12,10,10,9,6,14,17,7,4,8,7,8,7,0,0,0,0,0,0,0,7,5,6,18,20,7,10,6,8,6,10,16,5,15,4,8,10,0,0,0,0,0,11,5,9,17,15,7,8,8,6,7,7,17,6,6,7,5,8,12,0,0,0,0,0,9,5,11,15,8,8,7,14,10,7,23,24,14,5,6,4,7,6,0,0,0,0,7,4,17,15,17,5,11,6,10,5,20,7,8,11,8,13,6,5,10,0,0,0,0,13,9,5,14,10,17,9,15,22,4,10,5,11,8,26,7,6,15,9,0,0,0,0,26,12,6,17,14,16,5,16,13,5,8,6,7,5,13,13,11,14,0,0,0,0,19,8,5,13,17,7,13,17,10,21,19,10,25,18,11,15,12,14,15,0,0,0,20,17,11,9,18,14,6,8,12,22,19,8,17,13,14,14,18,7,17,18,0,0,24,15,14,6,16,15,8,8,11,22,17,8,19,13,15,15,16,9,15,19,0,0],
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
