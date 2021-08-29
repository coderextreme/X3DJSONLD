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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA12-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.52124997348872,-77.49299997997281,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[28,47,44,40,36,37,28,33,24,42,42,40,45,45,30,33,45,37,41,36,32,31,37,34,35,44,36,27,33,33,26,34,37,34,35,35,39,31,50,31,35,31,30,26,36,35,33,31,35,32,28,33,31,33,32,35,40,39,34,32,28,33,34,33,28,29,33,33,35,34,37,37,33,36,30,32,28,32,36,34,34,28,37,39,27,28,27,31,31,30,34,35,33,47,35,31,28,26,28,32,38,34,31,32,44,37,34,30,30,28,33,26,33,33,37,49,43,31,26,40,37,29,36,31,35,31,35,29,36,27,28,30,22,44,31,42,35,36,29,23,24,27,31,37,35,29,31,33,32,31,32,31,29,30,23,19,19,27,32,37,30,21,38,34,37,34,29,32,31,35,37,37,33,34,37,31,22,22,23,18,33,23,25,35,34,31,43,25,26,33,34,37,32,35,33,33,32,35,19,19,20,21,30,20,30,29,31,36,38,31,26,35,26,39,32,34,29,35,31,34,27,18,18,17,21,29,24,33,37,30,36,36,30,31,29,29,29,27,29,35,24,31,21,20,20,19,22,26,26,21,29,30,25,30,28,34,28,30,26,25,30,28,29,34,14,21,24,23,26,17,27,19,23,24,27,30,32,34,23,27,33,29,26,34,29,34,15,21,20,23,23,13,12,21,23,27,36,30,33,32,30,29,31,30,32,31,33,25,17,13,26,22,17,13,28,27,28,29,32,28,22,28,31,31,35,34,30,28,28,28,16,14,19,21,19,19,34,25,30,24,27,27,25,35,31,29,29,27,27,28,29,30,17,15,22,22,22,17,24,34,29,27,27,28,23,24,33,29,29,30,31,36,27,28,18,15,18,20,22,20,30,27,33,29,33,26,25,27,28,31,28,29,33,34,29,28,19,19,18,18,19,28,18,15,15,17,11,23,23,27,29,27,27,33,26,26,34,29,19,21,19,19,23,12,15,12,15,13,8,28,26,25,24,24,32,28,27,32,28,30,15,20,18,19,18,17,10,14,16,12,9,9,21,24,25,26,30,22,27,30,34,32,22,26,21,18,17,16,13,15,13,13,12,12,18,22,26,26,22,27,30,25,23,22,26,22,20,18,17,19,12,17,13,10,10,12,15,24,28,28,22,24,31,26,22,23],
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
