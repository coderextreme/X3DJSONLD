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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA10-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.70874997802892,-76.86799996483882,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[12,10,17,17,21,14,11,16,14,14,17,24,19,27,22,19,23,29,26,19,16,7,14,9,13,16,20,10,17,19,16,22,26,14,17,24,17,26,18,28,26,23,7,15,11,11,14,16,15,16,10,24,24,18,14,21,18,24,16,25,17,22,21,20,10,19,12,11,10,28,12,10,16,24,22,12,22,16,17,17,18,21,15,12,18,19,14,13,12,12,11,16,10,19,15,11,9,9,11,11,17,24,13,10,17,14,18,20,18,17,13,20,8,14,19,14,8,11,11,13,14,18,20,17,24,18,16,20,23,26,18,16,10,14,9,13,8,6,4,13,12,16,23,18,15,25,23,28,14,21,25,26,28,35,13,15,5,9,13,14,9,19,15,13,21,22,18,22,19,14,18,22,16,19,19,19,19,11,17,18,15,21,19,19,10,13,18,17,12,19,13,10,21,22,12,24,23,16,15,21,21,20,12,17,17,18,23,13,17,17,24,14,20,18,26,26,25,36,20,20,21,12,11,16,14,18,17,16,18,14,24,29,25,19,22,11,34,31,20,19,16,24,11,13,12,18,16,11,23,10,15,20,19,26,25,29,27,32,28,36,28,33,28,19,17,23,33,25,15,18,17,21,16,20,26,29,25,19,25,26,25,27,27,30,25,23,11,19,26,27,18,19,19,21,23,25,18,24,17,26,24,27,27,26,23,20,23,24,9,20,12,18,13,15,18,22,20,22,18,23,27,25,25,35,23,23,25,28,23,16,12,21,15,16,13,21,14,21,27,28,25,21,28,26,34,33,22,23,35,30,25,23,8,12,18,25,13,25,27,23,26,17,27,24,30,37,29,35,29,21,27,31,26,35,7,9,14,10,12,14,21,30,36,23,24,25,24,31,22,27,26,22,25,38,30,21,15,26,23,13,19,22,22,30,23,20,31,25,29,31,13,20,37,34,29,29,19,13,22,20,23,17,21,15,32,29,26,22,19,19,28,24,22,19,20,24,29,34,31,27,19,24,13,12,22,15,17,23,20,24,24,33,22,30,26,25,20,34,27,28,19,15,20,21,15,15,12,13,12,20,17,16,20,26,30,25,15,28,23,21,31,33,14,14,23,23,14,12,10,13,13,19,18,15,20,22,30,25,20,26,23,23,35,34,17,14],
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
