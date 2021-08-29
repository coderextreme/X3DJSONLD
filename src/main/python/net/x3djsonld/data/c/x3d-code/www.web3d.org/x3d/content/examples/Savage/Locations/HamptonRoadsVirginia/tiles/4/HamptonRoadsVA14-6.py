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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA14-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.333749968948524,-77.24299997391921,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[28,28,28,35,32,33,33,29,33,32,26,29,26,30,29,33,32,35,27,29,28,23,25,28,29,31,36,38,40,30,33,38,31,23,26,30,23,25,26,31,35,37,29,26,22,31,30,29,35,33,29,30,27,32,28,34,29,23,23,28,26,24,30,34,29,24,37,33,35,31,30,33,31,31,29,28,32,28,27,26,33,23,25,27,31,25,24,22,33,34,32,34,31,27,34,32,25,31,35,31,33,27,24,31,24,30,25,26,22,21,32,32,33,42,32,31,33,31,27,30,33,25,31,35,27,26,30,27,32,23,27,23,33,29,33,34,32,31,28,34,35,34,28,23,26,22,26,24,26,31,33,31,29,31,30,28,28,28,28,27,31,31,28,32,26,26,26,25,21,24,30,22,37,34,31,29,30,30,32,32,30,26,32,27,30,27,30,24,25,24,29,25,29,23,40,41,32,33,35,34,36,22,32,32,27,31,25,30,29,25,24,28,28,33,35,22,32,27,32,32,27,30,28,27,37,26,31,29,24,28,24,29,21,26,25,28,21,29,30,24,27,26,34,30,27,30,35,29,28,30,23,30,20,21,27,22,28,38,27,23,33,27,26,24,22,30,31,30,33,35,27,32,26,30,19,30,22,23,23,28,23,26,29,31,26,24,15,29,30,31,27,32,30,32,32,27,25,25,26,22,24,30,20,30,31,32,29,21,14,28,26,30,30,31,32,32,28,29,36,30,23,23,26,25,31,21,21,30,31,27,19,23,23,28,29,26,21,29,31,29,27,27,27,34,27,30,24,17,25,27,25,23,13,21,18,19,25,28,28,24,37,35,26,25,28,20,28,24,28,25,32,22,20,23,16,18,30,21,26,28,29,29,28,25,27,27,25,21,30,23,21,23,29,31,21,25,11,19,23,18,28,30,25,29,29,31,30,28,25,25,25,19,23,27,21,20,23,20,15,14,19,18,24,31,30,27,26,35,33,27,26,23,26,27,17,19,27,21,23,20,22,14,15,19,27,27,31,30,28,31,29,28,30,25,31,33,27,17,26,17,23,15,21,19,10,19,24,28,23,31,27,26,29,29,28,26,32,30,23,18,30,15,23,27,22,19,12,17,24,25,22,32,28,26,28,31,28,25,32,32,25,22,31,18,21,26],
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
