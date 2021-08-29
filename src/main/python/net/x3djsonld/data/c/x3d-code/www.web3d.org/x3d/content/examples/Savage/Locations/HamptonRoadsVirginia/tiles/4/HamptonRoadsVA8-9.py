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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA8-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.89624998256912,-76.86799996483882,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[16,11,24,26,24,18,18,21,18,20,22,19,29,23,31,25,31,41,36,33,38,36,20,9,16,26,29,35,29,19,35,18,24,26,24,43,25,35,36,26,39,26,25,20,12,16,22,24,31,27,30,20,24,18,19,17,24,31,31,26,31,38,32,30,25,19,11,20,15,28,27,26,28,27,28,15,16,22,22,25,24,34,48,43,32,32,26,34,15,23,35,29,25,22,30,36,26,25,24,15,17,25,35,27,24,41,30,36,33,33,22,28,27,26,29,25,33,27,31,26,26,21,22,28,24,23,25,32,33,31,25,27,20,19,37,32,36,30,26,27,21,35,24,36,25,15,19,29,20,28,35,27,35,28,26,29,33,29,37,27,23,27,20,40,26,23,19,25,34,24,31,35,21,22,35,37,31,39,27,33,33,42,26,25,32,27,23,32,33,19,32,27,27,26,30,38,33,28,26,35,21,20,25,28,30,22,22,28,38,24,36,31,27,34,29,27,28,29,35,34,26,26,30,15,22,17,21,24,34,33,26,24,27,34,29,32,28,26,28,27,23,25,29,25,14,20,25,30,28,37,36,23,24,30,38,31,23,28,30,27,30,26,35,26,26,24,23,27,23,24,23,24,19,19,26,25,28,31,24,29,32,29,36,36,37,39,24,20,16,26,29,38,24,28,23,30,33,24,29,32,21,30,30,27,44,35,33,39,18,11,21,34,24,30,27,31,21,30,22,19,25,29,33,29,29,24,38,42,39,39,16,21,28,23,24,29,19,30,22,22,24,18,23,22,14,21,23,24,21,33,34,30,14,16,18,18,19,19,22,26,15,24,22,20,25,28,25,27,30,25,22,26,32,32,13,20,14,16,20,23,17,22,28,19,24,21,35,28,28,24,25,31,37,27,29,26,19,17,11,14,22,19,19,28,21,21,21,24,18,29,16,29,31,35,29,26,30,32,15,23,14,20,16,23,18,18,23,24,24,19,25,20,29,22,26,27,28,24,19,26,15,23,19,24,26,29,20,23,26,25,36,26,21,28,29,39,30,32,33,26,0,29,15,29,21,24,24,33,25,23,23,28,18,45,31,29,29,23,31,33,32,35,26,37,11,25,19,24,23,32,26,24,24,28,19,46,33,27,28,25,31,32,31,35,25,31],
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
