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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA7-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.989999984839216,-76.74299996181202,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[33,28,29,23,27,38,34,31,34,31,37,24,23,32,24,18,19,28,32,29,27,31,39,26,34,39,42,38,32,32,33,37,33,33,26,23,26,25,21,21,23,31,26,32,35,41,43,35,36,41,41,34,35,23,21,32,27,33,23,18,21,21,30,27,21,23,28,38,36,38,31,35,26,37,41,32,22,27,29,22,29,33,27,19,25,19,23,25,27,36,34,31,35,28,30,34,35,30,27,26,35,31,33,20,25,29,9,9,16,22,30,33,33,32,32,28,20,24,32,34,26,21,35,32,26,24,28,31,26,19,9,9,27,32,35,40,26,34,36,27,24,26,20,31,21,31,28,35,34,28,21,22,28,29,29,28,36,34,24,19,24,26,19,31,30,17,26,22,20,24,29,26,30,21,20,18,41,25,25,28,34,28,23,20,25,33,31,16,28,29,17,26,30,28,29,29,20,17,35,29,30,25,34,30,18,17,26,22,30,26,25,26,28,22,40,29,30,27,27,24,35,16,30,27,25,26,30,26,27,27,26,26,23,30,28,9,22,20,34,35,41,27,25,26,27,34,39,29,29,27,31,28,16,23,21,27,24,34,22,13,43,30,17,26,25,24,21,30,31,22,27,17,20,19,26,26,27,21,19,26,9,23,9,9,24,18,28,30,25,38,21,35,24,32,17,23,26,17,11,27,26,28,9,9,30,18,21,9,26,28,28,21,27,30,21,31,28,28,17,20,20,31,16,24,18,33,23,22,34,27,38,28,31,33,27,36,38,31,32,32,26,22,37,33,19,36,23,23,35,28,31,16,30,23,27,37,23,34,33,35,31,24,26,22,24,34,24,22,25,34,36,26,28,35,39,38,36,32,32,38,33,38,24,32,19,14,32,24,22,21,25,23,29,25,28,34,34,40,37,31,29,34,40,26,23,32,25,20,13,20,30,27,27,24,25,25,28,22,40,39,29,32,28,35,37,36,41,22,28,23,27,21,29,16,26,36,20,25,32,33,42,31,36,38,36,39,35,28,37,23,20,23,31,23,23,29,30,20,19,24,20,25,29,28,34,35,37,23,27,28,35,25,26,18,23,33,26,24,18,20,20,21,22,20,36,30,35,33,36,23,26,27,34,25,24,20,24,34,23,28,20,22,20,21,21,22],
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
