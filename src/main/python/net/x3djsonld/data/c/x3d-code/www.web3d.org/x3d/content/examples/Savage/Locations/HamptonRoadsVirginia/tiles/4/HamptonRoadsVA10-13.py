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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA10-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.70874997802892,-76.36799995273162,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[5,4,5,5,6,4,2,20,22,19,8,6,7,3,5,5,3,4,13,3,13,7,7,3,4,3,3,2,3,4,18,17,5,18,16,4,5,4,9,16,5,8,8,8,11,4,7,2,3,2,2,20,12,21,4,22,4,4,3,5,4,13,16,20,4,7,5,6,3,2,5,3,4,2,9,4,4,8,9,4,4,4,20,14,21,20,16,5,5,13,8,3,5,3,3,2,4,7,5,15,23,20,10,21,23,8,19,6,9,12,3,3,3,4,5,5,4,21,17,19,5,12,18,19,15,18,19,14,5,4,6,8,9,6,11,5,4,3,4,4,20,15,15,14,18,20,22,21,24,12,6,5,4,7,13,11,10,9,6,4,3,16,20,15,15,4,5,17,21,22,7,8,4,5,21,19,23,13,4,6,10,3,5,4,18,19,9,5,4,6,13,21,26,28,22,6,7,7,15,6,1,11,0,8,4,3,15,15,6,22,5,14,15,18,25,27,22,6,7,14,24,8,9,5,5,5,5,6,4,5,5,4,8,8,17,17,19,25,26,8,9,14,19,25,19,13,19,20,17,20,17,19,20,24,18,23,17,18,16,20,27,13,9,8,21,17,15,11,16,18,13,16,19,16,20,19,24,25,22,16,14,14,17,16,8,8,23,17,10,9,14,12,19,19,21,19,20,22,19,23,19,20,18,14,14,15,9,13,19,26,24,8,15,11,9,26,24,22,19,18,20,21,23,19,21,17,15,11,17,16,25,23,24,11,7,6,9,10,28,11,17,21,4,18,19,23,19,18,18,19,17,20,24,22,25,17,4,6,6,8,12,8,10,9,5,16,21,21,15,18,17,12,13,12,20,20,25,23,8,11,13,6,8,7,7,9,7,17,19,20,18,20,17,14,15,11,21,23,22,21,18,10,9,4,6,8,9,10,8,6,18,22,22,6,16,18,14,17,21,21,25,22,17,10,13,8,9,6,17,9,6,7,14,8,5,6,5,23,20,17,16,18,24,24,21,7,10,6,9,19,10,7,8,5,7,7,5,5,7,5,27,15,17,16,20,21,25,11,6,11,6,6,8,3,15,7,7,6,6,6,4,8,17,15,16,19,19,22,23,9,5,10,6,7,8,4,18,8,6,5,6,6,6,7,16,15],
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
