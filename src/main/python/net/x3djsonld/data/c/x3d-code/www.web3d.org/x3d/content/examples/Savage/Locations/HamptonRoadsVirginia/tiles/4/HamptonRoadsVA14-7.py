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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA14-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.333749968948524,-77.11799997089241,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[23,26,30,27,25,29,27,29,28,23,23,25,40,28,26,21,22,29,25,26,25,17,26,28,24,24,30,27,27,29,27,23,23,33,36,23,28,20,25,29,27,23,24,26,24,23,26,38,30,30,23,26,26,22,25,26,28,28,23,28,30,18,21,18,22,23,22,25,29,26,33,48,31,25,26,33,23,25,26,29,32,27,25,18,20,20,21,21,21,27,30,36,38,30,30,35,29,32,32,26,21,22,17,23,23,20,24,17,15,13,23,30,22,39,24,31,30,30,31,32,30,29,21,29,17,21,21,25,18,27,26,23,31,35,25,29,26,32,31,30,30,25,31,25,25,21,23,21,19,25,23,22,21,20,29,29,29,20,26,32,29,23,30,28,23,31,25,23,33,33,19,21,22,24,21,19,33,28,23,25,22,24,24,26,32,27,28,23,25,25,28,30,23,30,30,26,22,21,32,24,31,24,26,22,18,22,18,23,31,26,33,27,29,29,22,24,30,21,19,18,26,31,25,23,22,22,26,23,26,22,32,25,28,23,28,30,21,22,33,18,20,22,24,29,23,22,24,22,23,21,17,22,28,21,21,21,21,21,18,22,34,26,22,18,24,29,35,34,30,22,23,31,31,22,21,30,22,22,18,24,20,21,18,26,22,21,21,34,28,34,31,31,25,27,25,31,26,30,21,20,21,25,22,21,32,20,22,20,27,26,28,36,23,28,27,32,31,23,32,26,28,29,28,23,28,18,32,28,29,35,23,29,23,31,26,30,33,20,23,25,26,27,32,31,28,28,25,33,23,24,24,22,23,28,33,21,25,31,20,22,37,16,20,21,23,21,31,25,27,29,26,27,24,22,25,27,24,23,24,28,29,30,26,17,19,22,18,24,22,22,24,28,33,30,24,21,20,18,24,26,31,24,31,25,20,19,17,14,21,28,20,25,25,30,28,22,24,21,20,27,22,25,30,28,36,25,25,27,23,21,18,22,25,30,20,28,28,19,22,26,15,24,31,24,27,23,37,27,28,24,20,22,24,12,24,23,21,25,29,26,28,24,27,26,25,22,23,23,32,35,20,24,25,22,27,15,15,19,20,23,26,23,21,20,26,19,25,23,22,23,34,32,21,25,25,23,28,16,15,19,21,25,25,23,21,21],
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
