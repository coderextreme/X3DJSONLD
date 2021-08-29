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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA12-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.52124997348872,-76.49299995575842,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[8,10,13,18,16,20,19,18,13,19,7,4,5,9,7,6,7,5,6,7,22,25,15,20,13,16,14,19,17,15,17,17,20,12,17,7,5,5,5,8,7,7,4,9,10,11,15,11,18,15,14,20,15,17,11,17,23,15,2,7,10,5,19,6,7,4,12,11,14,17,14,16,18,19,16,21,11,12,13,17,14,11,17,5,5,7,7,7,11,14,15,11,15,18,16,21,11,9,10,12,9,18,15,16,19,4,11,8,15,6,14,9,14,20,10,16,13,13,7,12,13,16,11,17,19,18,12,17,11,14,7,3,10,9,9,9,9,5,4,5,14,13,12,13,9,17,16,8,10,5,4,5,9,10,5,5,9,9,6,6,11,20,9,14,13,13,12,12,7,6,6,5,2,5,4,5,14,6,6,7,6,16,15,14,15,13,17,18,13,6,9,6,7,8,8,3,7,6,7,5,7,7,6,13,15,13,13,13,3,11,13,6,10,6,6,9,3,7,6,4,7,4,8,4,9,13,13,14,17,6,9,7,11,13,8,8,8,7,6,8,5,8,5,10,6,10,16,10,14,9,7,7,8,7,7,9,6,9,7,8,5,6,7,4,22,21,9,12,20,5,4,5,7,8,3,5,7,5,8,7,6,6,6,5,6,6,13,10,16,16,17,6,4,6,6,7,4,3,3,6,7,9,6,8,6,7,4,5,7,14,16,19,4,3,10,8,10,24,6,5,6,6,6,8,6,10,9,8,7,7,10,13,8,10,6,6,7,5,6,25,8,10,5,8,6,8,6,6,6,6,6,6,8,14,7,17,6,7,7,7,3,7,8,6,7,6,6,6,8,6,6,6,6,6,10,16,9,8,14,6,9,5,5,6,8,6,7,6,5,5,7,4,3,7,9,6,6,6,9,5,21,9,9,8,5,5,6,7,7,8,4,7,6,5,6,7,4,4,6,9,7,7,7,8,8,15,6,6,5,5,14,14,8,6,8,3,8,6,7,10,10,5,11,7,8,21,13,16,17,6,4,7,13,8,6,8,8,8,6,6,9,11,15,6,5,9,9,4,7,21,17,22,10,8,7,4,4,7,5,6,5,6,15,17,17,5,5,8,9,5,5,22,16,21,12,7,7,5,5,7,6,6,6,7,16,16],
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
