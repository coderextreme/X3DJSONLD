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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA7-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.989999984839216,-76.86799996483882,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[39,34,23,40,21,22,7,11,20,23,25,35,32,36,32,32,30,26,37,32,27,33,28,29,28,28,19,19,8,22,31,30,31,43,24,39,22,34,22,26,36,25,39,39,32,27,27,18,10,16,23,15,27,27,34,30,31,25,24,18,16,20,20,29,28,35,26,29,35,31,14,16,12,20,22,26,31,26,20,29,30,20,23,20,40,33,26,28,28,38,37,15,9,16,20,18,16,23,18,18,22,17,32,28,19,26,37,23,20,27,27,34,21,24,17,22,18,14,23,26,23,28,30,24,26,32,25,28,26,32,23,30,24,22,31,9,18,24,25,31,14,28,26,34,35,19,28,29,31,24,21,22,23,27,31,28,28,21,23,23,23,28,13,19,17,28,17,22,23,21,15,32,33,33,42,29,15,8,14,9,23,25,20,18,35,20,20,18,26,19,14,31,21,22,26,25,38,41,12,16,4,22,26,21,14,23,31,27,24,28,20,24,24,30,26,33,31,36,43,35,15,15,8,11,19,24,14,24,22,28,27,26,28,32,24,26,37,27,30,35,43,35,19,9,11,8,22,14,23,26,18,27,31,28,27,29,33,33,32,35,38,38,31,25,18,18,11,12,18,26,23,24,23,31,25,30,28,29,26,26,31,31,35,33,29,25,7,21,18,13,24,23,28,21,38,34,27,34,26,25,23,25,30,41,39,35,31,28,16,10,16,16,27,25,32,20,29,27,19,23,26,31,31,23,24,26,30,29,41,26,19,13,9,27,23,30,23,22,23,29,25,26,20,16,30,37,26,26,40,43,37,38,14,14,6,20,32,24,25,22,24,26,22,20,13,19,19,27,28,30,28,39,26,30,17,12,14,18,27,32,23,19,21,26,21,13,32,12,31,21,25,27,39,34,35,39,14,14,10,32,21,18,10,19,32,23,33,20,26,30,24,27,20,26,39,38,34,34,21,8,18,24,15,12,15,15,33,29,27,35,25,33,36,25,32,26,39,38,35,40,10,19,23,32,20,23,23,18,21,22,24,23,25,32,25,27,30,39,35,25,30,42,16,11,27,27,28,18,18,21,10,25,22,20,30,25,29,26,31,37,36,33,31,29,16,11,24,26,24,18,18,21,18,20,22,19,29,23,31,25,31,41,36,33,38,36],
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
