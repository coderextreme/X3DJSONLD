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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA14-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.333749968948524,-76.99299996786561,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[17,24,21,18,20,19,11,18,28,31,35,25,26,26,22,27,21,19,24,22,24,24,26,12,29,16,18,9,32,26,30,29,22,23,20,30,20,21,31,23,20,24,28,25,23,20,17,20,13,17,22,13,25,22,20,19,35,27,30,20,22,13,30,20,22,23,21,19,10,18,14,21,20,25,16,19,16,21,20,26,29,28,22,20,27,29,21,23,13,22,18,20,21,27,25,19,22,21,14,23,21,19,24,31,22,19,18,26,31,23,23,22,16,20,20,24,18,21,22,16,18,13,17,31,23,16,31,15,24,38,23,21,20,19,14,18,21,29,25,25,30,24,21,18,17,15,13,19,25,21,20,19,27,31,19,20,20,15,22,20,22,25,27,27,23,19,22,27,26,18,29,19,31,20,23,21,21,17,17,29,22,29,26,22,33,32,26,23,26,30,32,32,20,20,18,29,11,19,18,27,18,22,27,28,29,25,27,23,28,24,24,23,20,23,21,19,28,19,23,27,22,21,19,20,22,25,29,25,26,23,20,25,28,33,21,34,21,26,30,20,21,23,18,22,15,20,31,28,27,21,24,28,24,26,22,40,23,26,20,21,29,32,27,23,21,16,21,26,15,25,19,26,28,31,30,34,26,27,27,22,26,24,25,36,31,34,20,26,22,26,34,27,15,31,31,30,32,25,32,29,25,32,22,21,23,22,24,29,35,29,26,22,22,13,16,21,18,34,31,33,27,28,27,30,26,25,24,25,23,23,22,26,23,24,29,18,27,25,29,24,24,31,28,32,23,25,28,34,25,29,21,21,22,23,16,22,14,16,19,26,19,21,26,23,25,26,30,26,23,24,32,33,27,24,21,18,24,26,26,23,14,28,27,32,24,25,29,27,22,29,23,28,26,35,21,25,21,21,26,25,22,23,26,21,24,33,22,20,34,26,27,22,21,28,25,30,35,23,26,23,24,22,24,15,27,26,35,28,25,24,35,30,36,24,22,32,23,31,33,22,24,27,26,22,19,20,21,20,27,33,24,21,26,22,32,25,21,22,22,34,23,23,20,22,25,20,23,18,25,20,21,36,24,20,28,19,33,18,25,19,19,27,22,24,21,21,25,22,24,18,28,21,21,30,25,20,31,18,38,21,23,18,21,27,20,26],
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
