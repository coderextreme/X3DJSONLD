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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA11-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.61499997575882,-77.6179999829996,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[39,49,54,51,50,50,49,46,51,55,50,50,47,51,55,48,50,45,42,39,36,40,41,41,49,44,50,51,50,47,52,50,45,45,50,49,50,47,45,47,39,48,40,44,36,43,44,46,52,51,51,45,47,46,49,50,44,50,60,46,47,51,47,50,47,46,41,39,40,45,47,51,39,44,43,40,50,46,51,57,50,58,57,45,49,52,46,49,41,40,39,41,36,43,43,41,43,45,50,43,50,50,49,47,55,55,50,58,49,48,44,41,42,42,40,44,41,41,34,39,44,42,51,48,49,50,43,45,43,42,52,45,43,41,41,43,42,45,32,38,37,34,37,47,43,45,53,43,46,45,47,39,55,51,40,43,48,39,44,41,27,30,34,33,36,42,48,43,47,47,41,47,45,49,47,55,33,42,45,38,37,32,37,37,32,36,38,44,46,51,46,42,44,41,45,49,54,47,24,28,42,37,31,33,42,36,35,41,45,47,44,43,41,47,43,43,44,42,48,52,30,27,18,22,22,29,37,41,45,44,42,46,42,38,30,37,40,45,42,45,45,45,29,17,18,38,19,19,35,35,37,45,44,38,44,40,37,34,35,41,44,37,44,42,31,29,22,23,29,28,34,34,35,33,31,37,34,35,31,33,42,39,41,36,36,32,39,32,28,37,25,12,26,37,32,38,32,39,40,29,35,33,34,30,44,44,43,34,41,37,28,23,27,22,16,38,43,24,34,48,34,40,37,39,30,34,35,37,39,29,36,38,35,24,27,24,18,26,26,27,34,36,44,24,31,32,36,33,42,49,26,29,35,30,30,29,25,30,18,21,18,20,15,19,37,34,36,35,33,35,40,39,43,29,27,28,33,35,34,31,24,20,26,21,28,21,17,43,36,36,35,32,34,34,29,30,33,30,39,36,29,19,26,21,18,21,18,18,29,43,34,37,31,34,35,32,37,32,43,42,40,38,36,23,21,25,18,24,23,22,25,26,33,33,28,30,37,32,32,31,40,41,33,39,35,34,33,19,20,19,22,14,25,14,32,34,36,28,34,33,29,28,39,40,34,38,35,34,32,20,20,18,21,14,24,14,33,34,35,28,34,33,28,28],
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
