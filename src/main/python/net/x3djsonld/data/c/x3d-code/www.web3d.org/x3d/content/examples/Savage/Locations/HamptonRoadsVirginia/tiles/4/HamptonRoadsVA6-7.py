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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA6-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.083749987109314,-77.11799997089241,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[34,33,31,42,45,33,42,37,31,27,29,38,38,50,38,35,38,34,41,39,41,32,32,32,29,32,36,32,37,36,27,33,41,46,39,41,35,39,39,38,37,29,37,35,27,23,30,39,37,28,25,33,36,33,38,40,34,35,32,36,41,41,37,34,41,42,23,28,30,32,28,26,20,30,30,34,34,42,35,40,38,39,44,43,37,34,39,44,18,20,31,29,24,28,31,27,26,33,41,38,44,42,43,38,44,39,40,36,36,39,22,19,21,22,24,39,33,31,40,41,38,44,46,44,43,38,42,35,37,36,47,38,27,23,35,32,26,31,38,34,32,37,36,36,46,46,48,36,35,42,35,46,41,42,31,42,28,32,22,33,44,43,30,45,43,40,44,47,43,41,28,43,36,41,41,39,18,27,38,36,37,23,37,45,43,36,44,35,40,42,39,39,36,39,37,38,40,38,21,30,30,29,33,28,28,32,35,43,46,45,41,37,42,34,29,36,33,35,36,35,20,21,26,34,39,37,30,28,43,34,44,38,39,30,30,29,42,41,43,31,35,33,17,13,25,27,33,43,35,37,40,43,45,47,42,35,32,44,36,41,38,36,42,34,27,15,23,38,38,40,40,40,42,28,42,42,38,45,37,41,37,41,37,27,45,27,24,16,24,35,42,39,36,39,43,38,37,38,48,43,39,35,37,32,33,35,41,40,24,17,20,31,35,29,37,43,44,50,36,45,40,45,49,39,41,38,30,41,39,34,21,17,23,26,37,38,45,38,39,46,48,39,35,38,40,48,41,33,35,31,27,31,25,28,17,29,38,31,44,40,34,42,38,36,36,38,37,40,43,33,27,27,43,33,31,25,25,26,32,27,35,38,44,34,35,39,39,36,35,39,33,35,32,29,29,39,40,24,17,29,26,35,26,40,47,27,48,38,48,36,38,36,28,36,32,33,30,36,36,23,17,37,34,31,40,25,41,33,47,34,36,44,34,33,33,33,32,37,30,35,27,22,25,30,39,35,35,36,41,33,39,41,41,41,32,35,31,29,30,43,38,33,24,19,21,35,38,38,34,36,41,30,39,42,38,42,32,37,31,29,29,45,39,30],
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
