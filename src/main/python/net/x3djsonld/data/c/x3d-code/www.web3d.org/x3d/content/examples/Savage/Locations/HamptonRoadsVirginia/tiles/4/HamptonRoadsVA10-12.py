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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA10-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.70874997802892,-76.49299995575842,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[20,14,18,23,11,11,11,24,22,28,21,22,18,15,15,22,18,19,17,19,4,5,11,23,18,19,23,20,28,23,22,17,21,15,15,18,16,16,15,22,24,6,7,7,16,20,15,22,17,21,19,18,19,17,14,18,16,20,20,20,23,18,24,12,6,11,23,19,20,20,20,15,22,17,19,21,15,21,16,20,22,18,23,24,24,5,6,5,20,21,19,18,13,18,21,21,19,19,15,24,20,13,20,20,19,21,16,24,2,5,20,20,20,16,18,23,20,21,17,21,18,19,16,17,26,24,20,20,19,23,8,3,18,21,17,19,21,24,17,15,21,15,17,18,19,27,20,24,22,22,21,22,16,9,19,20,19,17,27,20,20,24,19,19,14,13,9,20,23,26,26,20,23,28,17,13,27,19,22,18,14,16,17,18,15,21,14,9,10,6,17,21,22,24,22,16,24,23,16,13,15,21,18,22,21,19,19,21,17,20,19,24,23,26,18,22,22,26,26,15,15,16,19,19,22,14,14,15,18,18,19,20,23,20,25,25,25,21,21,21,22,24,20,16,20,18,16,18,16,20,18,19,24,21,19,21,19,24,23,22,21,27,21,19,18,23,23,19,17,23,22,14,14,22,21,20,21,25,14,24,22,20,19,23,21,21,23,25,19,20,20,22,28,16,20,23,24,16,22,27,28,25,24,23,21,21,23,23,22,22,20,20,18,16,22,24,16,21,18,21,17,19,22,23,13,22,19,24,22,19,23,19,25,21,21,19,20,21,23,18,20,25,15,21,21,26,19,18,23,27,25,25,21,16,25,19,17,19,21,20,13,22,23,20,15,19,22,23,22,22,20,20,17,24,17,24,22,19,24,19,24,20,24,27,24,23,24,11,22,28,20,23,18,20,24,20,14,19,22,21,18,22,24,16,19,28,25,21,21,19,16,21,19,15,21,21,17,21,22,20,21,18,13,22,23,24,23,24,20,20,19,19,15,16,19,20,24,22,19,21,21,22,24,21,21,19,16,25,19,25,24,25,22,17,19,15,19,17,19,19,15,16,19,21,15,23,24,20,18,19,22,19,21,19,21,23,20,22,23,20,16,19,14,17,20,22,20,20,24,19,17,19,23,16,20,20,21,21,18,21,24,19,17,20,13,16],
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
