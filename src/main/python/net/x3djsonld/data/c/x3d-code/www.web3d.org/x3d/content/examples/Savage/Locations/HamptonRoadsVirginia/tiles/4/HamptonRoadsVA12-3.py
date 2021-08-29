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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA12-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.52124997348872,-77.6179999829996,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[39,40,34,38,35,34,32,20,20,18,21,14,24,14,33,34,35,28,34,33,28,28,38,46,37,38,43,42,25,27,28,22,18,32,20,26,29,28,27,33,29,27,25,37,45,40,40,36,40,33,34,26,26,16,15,24,26,28,26,28,29,31,39,32,35,36,49,46,44,42,41,41,36,28,26,23,27,16,22,23,29,23,25,23,29,28,32,33,46,50,50,43,40,40,36,26,24,25,17,20,22,22,27,26,27,31,28,24,35,31,42,44,44,45,37,37,27,26,21,25,21,20,16,23,26,24,31,32,32,30,29,33,41,45,44,42,38,32,36,23,22,29,17,15,17,7,28,22,33,25,22,21,24,22,48,44,42,37,35,29,25,22,21,20,18,15,16,18,30,27,26,23,22,21,22,23,41,35,49,40,46,24,26,22,23,25,17,18,21,20,25,27,25,21,18,22,22,22,47,37,45,43,38,40,30,16,21,19,19,18,20,20,21,19,22,29,20,22,19,19,47,45,38,43,38,38,29,21,19,17,20,17,21,22,22,22,17,22,23,24,22,27,56,40,47,48,35,21,29,24,21,21,15,17,19,19,18,17,19,20,18,18,21,21,45,31,33,45,46,37,30,13,25,19,18,18,20,23,19,20,18,19,25,19,13,14,39,42,41,40,50,45,28,20,20,15,18,19,22,18,21,21,27,22,18,20,21,15,37,41,37,38,39,33,27,14,12,13,16,17,22,18,27,24,21,20,16,19,20,17,35,36,44,37,35,42,37,27,12,19,17,20,17,18,22,31,22,19,18,22,21,16,41,34,38,37,30,42,43,29,21,24,19,19,15,19,24,25,18,19,18,21,19,17,40,35,35,36,31,33,39,30,15,22,19,16,17,21,19,17,16,17,21,15,21,18,41,43,40,31,29,41,35,26,27,22,12,23,16,21,17,25,15,18,14,14,14,19,44,40,37,40,29,26,14,31,29,22,15,19,17,13,21,21,19,16,14,14,19,19,44,44,42,31,40,34,39,31,35,13,17,19,20,19,23,21,16,17,16,24,18,15,43,43,44,40,29,37,35,28,27,29,16,18,17,15,16,18,24,21,13,23,25,22,43,41,43,42,29,39,36,30,22,27,23,15,18,17,14,20,21,22,11,24,26,26],
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
