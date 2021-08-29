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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA7-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.989999984839216,-76.99299996786561,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[30,37,26,29,26,26,18,26,23,20,24,24,18,21,30,34,28,26,21,27,38,39,35,28,31,26,28,28,20,14,24,22,21,20,14,13,20,21,26,18,21,27,27,28,29,30,30,25,24,25,17,21,24,21,27,10,15,25,11,13,21,17,33,36,27,32,24,22,21,19,26,24,20,28,26,22,26,27,20,25,16,13,14,15,20,24,29,26,19,22,27,23,23,35,23,25,26,31,29,30,26,25,22,18,16,17,22,24,31,28,25,25,28,26,25,25,34,23,22,29,29,36,29,25,25,27,13,14,14,32,33,27,20,25,36,27,28,42,40,29,28,23,38,28,27,30,34,24,30,25,15,12,31,24,29,33,37,38,27,26,29,28,26,24,38,29,26,25,39,27,24,26,16,17,22,31,29,41,39,35,39,32,34,36,34,30,33,29,26,30,36,29,29,23,11,16,14,15,29,36,42,31,30,29,31,27,31,32,29,27,23,37,35,34,18,21,12,24,14,12,28,36,30,33,35,41,26,33,36,33,28,31,30,21,30,25,27,23,28,18,10,15,35,36,31,33,26,30,30,36,35,36,22,27,28,25,24,34,27,17,22,20,14,19,28,32,32,29,29,33,33,37,29,27,26,24,16,21,33,30,32,32,18,17,16,18,44,33,28,23,26,31,29,28,21,30,17,17,19,17,20,27,16,23,15,18,14,7,40,29,30,28,27,30,36,20,28,29,33,17,29,30,24,24,14,24,20,14,15,16,34,34,35,27,26,34,25,18,29,22,28,26,22,22,22,17,17,23,13,12,11,19,31,32,27,34,38,21,32,23,33,25,24,24,24,23,18,26,13,17,11,12,19,14,39,30,36,33,31,29,30,28,33,42,40,26,26,26,24,15,16,17,18,16,19,17,35,33,41,31,29,30,40,28,27,29,29,28,31,27,29,21,11,11,21,15,4,14,21,33,44,29,24,10,33,38,31,28,29,25,34,22,15,23,14,16,12,9,18,21,26,29,35,31,32,28,29,22,26,30,24,22,20,19,13,12,18,22,22,15,18,10,31,29,32,26,33,28,25,23,35,24,25,32,14,18,14,15,18,18,15,11,11,16,32,30,30,26,33,25,23,22,34,25,25,30,14,17,12,12,18,13,12,12,12,16],
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
