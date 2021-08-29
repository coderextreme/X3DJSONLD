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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA8-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.89624998256912,-76.99299996786561,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[32,30,30,26,33,25,23,22,34,25,25,30,14,17,12,12,18,13,12,12,12,16,26,30,31,35,32,38,27,37,31,33,31,21,22,27,28,15,16,7,4,15,8,20,45,27,32,49,38,34,31,29,28,21,34,26,19,21,17,6,10,2,15,21,9,12,31,32,30,39,28,36,42,40,27,20,32,28,16,18,6,23,13,18,17,10,9,11,31,41,30,31,36,29,29,31,30,19,33,22,26,12,12,8,14,11,10,11,17,15,43,28,29,29,38,32,26,34,26,25,23,25,13,11,13,10,4,6,18,26,14,22,37,29,37,32,30,31,33,26,29,18,16,12,26,10,19,9,15,22,9,15,17,20,27,40,34,36,36,36,35,16,12,19,16,26,15,15,14,9,21,22,15,14,21,26,23,30,23,32,30,41,35,28,23,20,19,26,17,11,7,14,20,15,11,12,28,31,20,31,24,28,24,28,34,17,22,22,11,21,10,25,13,17,16,22,16,18,24,26,35,23,22,21,26,34,33,37,23,15,13,24,7,3,13,14,18,16,23,16,26,26,26,30,29,20,25,25,29,29,26,29,18,9,12,10,22,15,20,20,17,27,25,29,21,26,27,35,29,38,33,34,18,18,24,18,9,10,13,14,16,17,17,28,29,26,22,23,22,27,21,39,29,28,20,12,15,22,13,6,13,22,25,12,12,12,22,24,18,27,24,26,22,21,27,28,24,26,21,17,8,11,11,16,25,13,13,13,17,18,28,16,19,29,27,27,29,35,28,20,17,11,12,4,7,24,14,18,9,15,16,16,15,26,16,21,16,30,32,26,32,36,18,24,9,13,6,19,12,15,14,24,12,14,11,19,21,32,23,20,33,24,29,22,17,15,8,4,9,13,13,12,14,26,13,13,15,7,22,23,22,23,33,41,30,31,17,9,3,4,10,29,13,11,16,17,17,19,21,16,16,30,19,19,24,32,33,34,23,24,22,9,5,14,6,11,15,19,27,15,11,17,16,26,11,19,26,23,28,25,33,8,13,4,6,20,14,9,13,19,19,15,18,19,14,21,27,20,21,31,27,11,15,22,11,8,6,22,14,25,16,15,17,15,16,19,13,17,31,22,22,30,26,6,10,22,12,7,9,23,10,23,12,10,16,11],
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
