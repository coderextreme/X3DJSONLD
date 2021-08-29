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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA9-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.80249998029902,-76.49299995575842,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[31,17,10,18,14,21,10,11,8,15,13,14,18,20,18,17,13,15,12,14,13,13,21,18,19,17,12,20,8,13,12,12,13,13,15,27,20,18,15,9,17,15,16,14,16,21,18,20,18,21,27,12,13,14,13,14,15,18,17,17,13,17,16,12,13,12,18,18,18,13,22,14,23,24,21,15,12,20,18,18,20,17,14,13,13,14,13,13,18,22,19,18,15,19,19,19,19,17,15,20,19,17,19,16,17,14,12,15,15,17,30,21,19,23,14,22,17,23,26,20,12,19,14,14,13,13,13,13,15,14,19,19,19,20,27,22,17,23,20,18,18,15,14,15,13,11,15,13,12,16,17,13,17,18,24,20,19,23,20,17,18,18,14,20,20,11,19,14,13,13,18,17,16,14,19,17,19,20,24,21,19,16,22,20,16,21,15,15,11,13,15,6,14,13,16,14,17,18,18,15,17,13,14,19,22,16,20,15,15,20,13,19,14,11,11,10,13,18,17,17,15,18,18,13,19,16,21,17,17,16,17,16,20,15,14,13,20,12,18,19,18,20,16,18,19,20,12,19,13,20,19,14,20,17,18,22,13,13,13,14,13,20,10,15,26,22,16,16,11,11,17,21,18,15,21,16,11,17,20,19,15,15,14,18,17,10,20,21,15,11,11,11,11,11,24,21,15,19,15,18,15,18,14,11,15,11,19,13,25,19,18,11,11,11,11,11,11,21,20,16,21,16,12,6,7,3,3,4,2,4,18,18,13,11,11,11,11,11,11,11,12,18,17,11,5,7,7,5,5,4,14,4,19,13,19,11,11,11,11,11,11,11,18,14,18,6,4,7,8,5,1,3,5,5,22,20,17,11,11,11,11,11,11,11,19,23,16,8,5,3,9,5,6,3,15,3,17,19,22,11,11,11,11,11,11,11,17,12,15,7,2,7,3,5,8,4,2,4,20,15,18,11,11,11,11,11,11,18,18,20,19,17,24,15,25,17,17,11,5,4,21,14,19,25,11,11,11,18,19,25,22,22,16,14,13,20,19,19,19,23,3,6,20,14,18,23,11,11,11,24,22,28,21,22,18,15,15,22,18,19,17,19,4,5],
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
