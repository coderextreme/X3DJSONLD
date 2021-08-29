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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA11-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.61499997575882,-77.24299997391921,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[32,28,30,24,30,31,30,29,31,32,36,25,25,25,26,27,18,25,17,16,30,15,29,23,29,21,34,26,28,27,35,30,29,27,24,31,23,22,25,19,19,23,25,20,24,23,23,20,33,22,22,26,31,31,40,36,30,31,27,28,23,11,17,10,13,19,27,27,29,21,22,26,27,31,33,30,44,33,31,27,26,26,28,12,7,16,20,16,31,27,28,26,20,23,27,28,34,33,31,38,33,33,25,27,27,13,16,17,18,20,39,31,27,21,21,24,27,23,29,29,39,36,28,32,23,26,23,22,18,23,27,27,32,34,30,27,23,20,19,23,20,27,31,30,32,26,26,20,22,18,27,22,22,17,34,34,41,37,26,25,27,25,18,26,27,26,25,22,11,14,20,29,29,21,24,29,33,33,30,33,29,29,23,20,20,21,19,21,17,29,20,16,21,27,24,20,25,27,36,34,31,31,34,27,29,32,19,20,21,21,21,27,20,30,28,35,29,22,28,30,43,42,32,38,35,28,32,27,34,15,21,20,32,29,26,37,28,26,28,29,28,34,40,32,38,31,38,39,36,34,37,26,38,22,24,34,32,33,32,29,20,23,35,27,39,38,31,34,33,33,34,33,36,34,34,29,30,26,30,32,31,31,28,23,26,29,38,31,38,42,35,32,30,35,38,34,31,33,27,37,43,41,32,32,41,22,28,28,37,36,33,29,38,36,37,43,32,34,38,38,29,39,30,31,39,38,32,24,26,22,30,36,28,27,32,32,34,26,35,33,31,36,35,41,36,30,31,35,31,38,28,28,30,35,40,32,29,45,31,41,28,29,39,29,30,39,29,36,40,34,30,32,28,34,30,31,34,30,34,38,35,35,31,29,32,28,33,26,32,31,35,27,32,29,37,30,29,28,27,30,28,31,37,34,33,30,33,33,28,32,32,32,30,28,27,27,28,30,26,27,28,30,27,36,29,35,28,28,32,28,29,29,30,24,31,27,27,22,31,25,30,23,29,28,30,30,30,35,41,30,29,30,27,30,33,30,25,19,26,29,29,28,29,24,30,29,31,30,30,38,38,31,30,31,27,30,34,29,24,21,23,28,26,27],
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
