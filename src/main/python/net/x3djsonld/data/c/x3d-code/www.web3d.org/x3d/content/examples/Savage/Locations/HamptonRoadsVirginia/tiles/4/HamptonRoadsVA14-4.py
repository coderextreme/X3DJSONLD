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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA14-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.333749968948524,-77.49299997997281,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[41,37,36,36,24,24,27,18,22,22,18,16,17,17,22,24,21,16,20,22,15,13,39,40,37,39,30,19,23,26,17,21,17,22,23,20,16,30,19,19,18,21,14,12,38,38,40,38,35,27,22,24,21,17,20,20,22,18,25,26,30,21,19,8,18,17,41,37,39,35,37,34,33,29,26,25,25,26,23,23,24,27,15,23,17,16,13,16,38,39,38,34,41,39,39,38,30,27,26,22,30,20,23,31,22,17,15,15,14,16,37,44,39,40,40,37,40,43,36,33,28,21,21,16,26,33,32,17,18,22,13,13,39,36,39,39,39,32,40,41,41,35,28,29,23,20,25,24,23,21,14,19,15,13,39,38,42,37,42,33,34,35,40,33,35,30,24,24,23,19,20,23,19,13,12,15,42,37,35,39,36,31,35,33,34,40,35,30,25,18,18,20,20,20,21,20,19,18,41,40,40,37,35,37,39,37,35,36,37,27,28,34,18,17,23,18,18,21,18,18,40,38,37,36,37,37,30,35,37,35,32,34,30,30,29,27,19,17,16,18,18,22,41,37,41,37,38,40,30,32,37,35,37,33,40,31,33,31,20,20,27,15,24,18,42,41,37,39,34,36,26,36,39,35,38,37,39,30,36,33,25,26,22,24,29,22,34,40,39,39,33,31,31,33,33,39,40,42,39,34,37,39,31,31,31,22,27,27,36,42,37,34,34,29,38,31,36,38,37,38,40,38,37,33,33,35,30,30,18,23,44,43,37,34,30,41,33,41,34,46,37,40,41,34,39,39,32,35,31,29,17,17,45,42,35,30,28,35,39,38,36,35,36,38,38,34,30,28,31,30,29,35,28,20,39,38,36,36,25,34,30,36,32,34,34,36,32,32,31,31,31,28,31,31,29,23,29,37,30,33,26,29,27,37,37,36,31,28,39,38,34,33,25,33,28,29,26,23,34,47,29,31,27,32,25,35,31,33,36,32,39,35,34,32,35,20,26,20,22,25,37,42,41,38,37,26,27,31,33,32,32,37,34,33,32,32,34,34,36,28,25,20,42,35,39,37,38,37,32,29,25,34,29,30,29,34,33,33,30,28,33,31,24,24,41,35,39,40,35,35,32,30,25,33,29,32,30,34,34,33,30,30,32,31,23,28],
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
