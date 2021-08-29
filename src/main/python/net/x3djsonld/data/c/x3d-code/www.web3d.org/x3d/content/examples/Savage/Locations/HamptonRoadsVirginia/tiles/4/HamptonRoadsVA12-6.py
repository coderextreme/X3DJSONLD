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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA12-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.52124997348872,-77.24299997391921,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[29,24,30,29,31,30,30,38,38,31,30,31,27,30,34,29,24,21,23,28,26,27,25,30,34,27,33,32,37,33,33,35,38,32,34,29,44,31,28,23,26,10,29,21,27,22,30,32,28,29,29,28,28,32,32,36,31,30,32,25,25,28,24,26,22,26,24,26,27,28,39,29,27,25,29,29,33,32,32,29,25,38,28,24,25,25,26,25,25,22,21,31,35,28,41,30,26,32,32,30,35,32,27,25,33,25,28,19,23,24,24,26,21,22,23,26,26,26,28,28,23,21,23,27,27,29,27,28,25,27,20,17,27,22,24,20,17,17,20,28,22,20,27,25,18,13,14,26,25,16,15,24,8,12,26,31,28,22,21,21,18,24,16,22,28,19,16,20,22,26,18,16,24,17,13,11,21,25,22,16,16,23,24,18,23,21,21,12,16,19,12,19,15,15,19,14,17,19,25,25,27,28,29,30,28,23,18,22,17,24,15,29,20,11,21,14,21,24,28,31,27,25,28,24,25,31,27,23,23,22,28,17,20,20,18,23,15,21,22,26,20,26,27,24,25,27,25,22,27,24,28,34,17,27,18,23,22,23,28,18,34,20,18,19,31,25,26,21,23,27,16,26,32,22,28,32,26,28,20,22,30,20,18,20,23,25,31,33,29,28,26,19,19,22,20,23,26,23,25,22,37,21,23,21,18,22,22,31,23,29,28,24,25,24,19,19,29,20,28,25,22,31,31,20,19,19,24,29,30,28,20,16,26,24,22,22,16,24,23,25,21,19,31,20,21,20,16,29,21,27,21,23,26,18,19,27,17,27,29,23,22,23,21,27,32,31,20,18,18,24,21,28,20,13,19,22,22,26,23,22,26,25,22,26,17,27,19,33,28,21,23,28,26,20,16,18,18,21,28,30,25,21,23,25,20,31,25,21,18,28,20,23,21,25,29,23,21,23,28,22,26,22,30,37,27,22,21,22,24,27,29,23,24,17,31,23,37,18,19,19,27,25,23,24,29,32,31,26,22,34,24,23,22,22,22,24,25,15,32,24,26,26,24,27,24,25,22,38,28,34,21,20,24,29,19,32,22,23,26,22,19,24,27,28,25,25,24,27,22,36,28,35,22,20,24,27,20,32,23,22,26,19,20,23,25,29],
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
