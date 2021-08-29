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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA10-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.70874997802892,-77.24299997391921,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[18,21,26,25,26,27,18,17,14,21,21,13,23,24,38,29,28,20,21,23,29,33,15,19,23,13,16,22,10,15,16,16,12,10,19,26,23,33,23,20,22,24,24,23,16,15,21,24,20,16,17,13,25,14,14,7,11,18,15,20,21,18,14,17,21,19,20,18,22,21,22,27,21,14,23,14,14,11,17,12,18,23,19,17,16,12,29,28,19,23,15,8,13,17,17,17,22,15,19,10,15,11,12,11,12,15,10,18,16,18,15,17,19,7,11,13,15,20,25,16,11,11,11,14,12,12,12,16,20,15,15,19,14,19,18,10,17,12,14,17,26,19,18,20,8,19,17,10,14,22,10,20,15,21,17,14,11,14,14,14,17,12,20,14,14,12,19,11,8,15,12,11,23,15,11,14,11,11,22,12,8,12,6,9,7,10,13,11,12,15,22,11,8,21,12,9,15,12,13,23,15,11,12,16,15,18,10,12,11,12,12,11,19,13,8,15,15,15,15,13,20,20,11,22,12,11,12,11,13,14,8,11,16,8,18,11,12,7,9,13,12,19,20,20,23,20,23,20,8,10,12,8,18,8,11,12,12,19,25,12,14,8,11,12,14,32,26,28,25,28,11,9,10,13,16,26,25,20,12,15,16,6,16,9,7,10,15,33,30,25,26,35,15,15,26,23,22,27,29,21,24,9,13,7,15,8,16,12,13,34,34,30,37,27,18,13,40,28,41,28,28,34,18,23,9,12,11,12,9,12,36,42,35,35,43,32,29,36,28,39,26,28,30,28,31,22,19,13,6,12,19,12,40,33,40,37,35,31,31,29,36,27,29,35,29,30,20,29,19,10,8,10,6,20,32,37,40,34,30,34,31,28,27,29,28,23,32,30,26,18,10,1,4,6,10,5,39,37,41,41,28,29,35,32,27,36,35,23,30,25,28,19,10,11,6,17,8,6,24,33,34,39,30,29,32,31,34,29,26,29,29,27,31,24,19,15,22,14,11,6,21,23,28,32,27,34,34,40,31,30,29,25,32,21,29,25,25,20,19,18,21,15,33,27,28,25,32,30,31,29,30,37,36,24,23,24,23,25,14,24,17,17,24,15,32,28,30,24,30,31,30,29,31,32,36,25,25,25,26,27,18,25,17,16,30,15],
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
