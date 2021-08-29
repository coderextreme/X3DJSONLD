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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA6-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.083749987109314,-77.24299997391921,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[24,19,26,21,18,15,20,24,20,24,30,37,44,43,35,41,27,30,24,18,31,34,25,23,20,24,17,15,9,15,17,14,20,37,51,44,46,36,38,40,26,29,28,32,24,27,22,21,24,12,12,18,18,16,21,33,42,39,43,44,40,33,30,25,26,27,26,22,28,31,19,21,16,13,13,13,16,41,37,38,37,41,36,39,37,28,14,23,30,32,28,26,30,24,20,15,20,15,16,21,24,36,33,38,37,42,34,37,18,18,28,27,37,33,29,21,19,23,19,18,21,24,41,33,42,38,38,40,40,29,19,22,33,28,29,36,34,20,20,21,21,18,21,22,29,26,41,34,34,38,38,30,26,27,32,33,34,29,33,28,21,27,15,14,15,19,37,29,27,34,30,37,31,24,25,31,34,29,31,27,28,23,21,23,16,16,20,23,27,35,22,39,36,33,37,22,16,18,22,32,36,31,30,25,30,15,11,14,11,20,35,36,23,29,34,33,32,27,22,21,21,22,26,31,32,29,31,29,18,16,21,23,27,29,24,28,34,34,32,32,24,20,25,24,26,34,32,34,32,38,17,13,17,15,20,27,21,26,31,32,32,30,25,17,31,23,23,28,28,25,31,32,19,21,13,21,25,17,26,25,38,32,35,27,29,27,30,29,18,35,35,30,30,25,27,19,19,20,15,21,29,29,40,36,21,22,26,24,34,28,36,26,32,30,29,33,29,13,22,18,20,21,34,31,37,40,34,28,18,24,37,31,25,20,23,22,27,30,21,15,13,16,22,29,35,34,37,34,36,32,18,21,36,31,26,17,25,26,23,37,27,18,14,17,18,18,34,37,38,30,24,21,29,25,34,25,33,34,27,23,28,30,27,16,24,12,18,22,16,28,35,40,32,33,33,31,31,39,36,39,36,13,21,16,17,10,15,23,19,15,21,20,33,30,38,35,33,40,37,40,40,35,26,34,27,19,18,19,18,22,22,13,18,17,28,25,34,30,44,36,42,38,36,32,34,24,24,32,32,24,15,20,15,14,20,16,21,27,32,36,33,27,43,39,36,33,34,22,24,32,32,23,16,19,14,15,21,16,20,26,33,42,30,24],
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
