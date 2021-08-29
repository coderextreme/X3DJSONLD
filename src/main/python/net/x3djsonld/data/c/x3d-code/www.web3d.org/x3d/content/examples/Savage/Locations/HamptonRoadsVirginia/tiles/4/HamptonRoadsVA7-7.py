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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA7-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.989999984839216,-77.11799997089241,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[24,19,21,35,38,38,34,36,41,30,39,42,38,42,32,37,31,29,29,45,39,30,38,25,19,27,31,39,37,35,42,36,35,43,39,43,44,32,28,30,35,30,30,35,37,27,21,38,31,35,31,40,37,35,35,42,44,38,39,33,32,26,31,31,28,29,35,23,22,28,30,38,31,37,35,40,44,44,39,32,36,28,28,27,31,23,25,24,23,20,12,19,29,32,28,26,33,33,35,36,44,39,29,33,29,26,30,26,17,19,29,14,20,23,39,32,19,34,44,39,37,45,42,40,37,39,23,40,33,38,30,25,28,29,17,23,21,31,36,36,48,45,38,39,43,38,29,29,34,40,33,31,25,20,29,24,20,20,34,30,34,35,52,40,41,40,32,31,32,44,43,46,37,30,28,29,20,28,14,23,19,31,41,42,39,48,44,38,40,43,39,40,41,33,39,34,31,29,25,27,11,15,23,36,34,36,37,34,37,37,42,36,43,45,42,36,39,40,36,29,32,20,25,19,18,35,35,33,37,38,35,32,31,28,34,49,40,35,26,33,30,28,23,27,30,24,21,28,31,31,36,34,39,38,31,37,40,42,39,37,30,33,32,35,35,25,28,21,21,38,36,27,35,33,45,37,33,27,32,38,39,28,31,32,32,28,30,27,25,21,26,31,32,21,25,29,41,41,28,25,33,32,39,39,46,38,34,44,19,23,32,21,17,30,29,38,25,25,30,30,28,21,27,31,44,41,29,33,42,40,18,30,33,25,9,16,30,31,28,43,28,32,24,20,29,28,33,31,37,30,32,34,29,23,31,22,17,26,30,25,35,28,25,27,26,25,29,34,37,40,32,30,29,31,33,20,17,13,23,23,30,29,23,25,18,29,27,23,30,25,32,40,37,39,27,39,30,15,20,16,22,18,25,21,19,27,24,24,27,29,28,30,31,40,31,31,31,35,23,18,16,17,14,17,16,19,30,32,21,23,25,34,30,33,32,33,27,31,30,21,18,33,23,21,17,18,17,15,17,34,30,24,19,25,36,40,36,35,31,27,30,26,23,29,19,22,16,15,17,23,23,15,31,28,28,39,34,35,29,28,28,28,29,31,18,30,17,20,18,14,17,23,21,14,30,26,27,38,35,36,28,31,31,26,31,32],
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
