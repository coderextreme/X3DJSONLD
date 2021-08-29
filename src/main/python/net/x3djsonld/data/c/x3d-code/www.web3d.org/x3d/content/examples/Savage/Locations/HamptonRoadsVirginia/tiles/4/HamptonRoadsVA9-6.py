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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA9-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.80249998029902,-77.24299997391921,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[31,34,37,37,38,33,42,36,45,46,32,34,30,33,38,42,39,46,32,30,30,27,37,36,38,40,38,40,40,45,38,29,30,37,30,41,45,48,39,37,28,30,26,32,36,33,41,43,38,33,36,42,46,41,31,29,36,39,43,43,35,33,31,30,31,23,37,32,42,47,42,34,40,44,46,38,36,34,34,33,41,30,33,23,31,30,25,22,36,38,36,36,38,34,43,42,38,29,27,31,31,40,33,34,30,32,26,26,30,25,45,38,48,49,32,31,39,36,41,34,34,34,34,32,33,29,31,33,30,23,29,20,44,47,46,31,32,33,34,39,34,23,36,52,46,30,36,27,32,23,17,29,17,19,32,44,37,35,29,21,31,28,29,32,41,46,41,31,27,36,23,25,24,25,34,34,33,41,41,29,30,20,32,30,27,31,34,34,31,28,34,31,33,30,30,30,35,31,34,39,43,29,32,20,29,28,29,31,37,39,30,39,34,33,33,33,32,43,26,30,39,41,31,34,38,25,29,27,30,30,39,41,38,38,39,37,44,31,29,29,29,36,36,37,29,44,38,30,20,31,35,41,34,37,30,33,40,32,30,42,40,42,30,33,26,36,32,28,31,39,32,39,38,38,31,33,29,26,21,32,31,37,24,28,30,34,28,30,35,23,26,26,24,31,38,36,38,34,31,33,27,30,33,37,28,28,32,28,31,31,33,27,32,18,22,30,28,31,32,36,34,29,30,34,34,32,25,36,37,33,29,30,23,23,18,25,24,26,35,32,32,33,27,35,29,37,44,34,43,41,30,39,32,25,19,21,23,27,24,27,17,29,27,25,23,31,29,30,28,28,29,30,38,29,26,26,25,28,30,30,32,29,24,33,28,32,19,31,26,29,32,33,29,28,29,29,23,24,18,25,22,29,26,29,18,24,27,26,31,36,33,34,25,24,29,28,22,27,28,36,27,17,12,16,20,16,20,26,26,16,25,27,33,33,28,20,23,24,31,32,18,22,25,25,24,26,17,16,17,19,22,14,24,19,38,30,26,18,22,24,28,34,18,21,26,25,26,27,18,17,14,21,21,13,23,24,38,29,28,20,21,23,29,33],
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
