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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA5-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.17749998937941,-77.36799997694601,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[40,45,46,39,39,43,35,34,35,30,33,33,35,37,39,42,47,38,32,29,28,27,33,42,41,45,36,35,36,41,25,30,34,38,36,36,37,38,44,32,30,30,39,35,44,37,46,42,41,43,35,43,26,30,45,36,43,40,36,32,37,39,45,44,41,40,45,35,36,39,47,45,44,42,36,29,28,33,38,39,26,39,35,47,42,38,31,33,38,36,31,36,33,46,49,38,37,29,28,30,35,34,30,35,43,33,40,38,38,45,34,36,36,38,36,36,43,43,41,37,36,29,30,30,36,35,36,31,36,39,35,36,36,35,35,30,37,32,46,43,42,38,29,34,21,24,28,32,34,30,43,38,30,29,42,42,37,30,30,29,34,45,35,31,35,27,32,23,20,25,26,30,42,43,43,36,48,40,36,39,26,36,34,41,34,40,36,37,31,31,35,30,25,31,36,40,36,31,43,39,34,28,30,23,39,36,35,34,33,35,37,32,30,32,19,27,29,37,26,36,45,35,28,32,24,21,35,36,30,40,22,35,25,24,22,33,29,18,24,28,24,33,42,30,30,26,25,26,25,29,17,20,16,23,19,21,20,17,18,24,23,20,20,25,35,28,28,28,23,34,22,20,20,18,21,20,20,19,18,22,17,15,16,17,24,18,24,25,21,21,17,29,28,22,26,21,20,27,22,21,23,18,17,19,16,18,21,21,27,20,23,21,19,27,25,20,23,25,26,24,26,19,19,23,18,19,14,22,21,19,24,27,25,18,21,19,27,22,20,25,24,23,22,23,20,20,25,23,17,18,17,20,25,17,20,26,19,18,18,21,28,30,19,29,29,22,24,23,24,24,18,20,16,16,26,25,25,20,21,25,20,27,20,26,22,28,29,30,27,24,23,26,22,22,17,20,27,26,23,20,21,16,24,24,24,21,28,26,28,29,25,30,29,30,33,21,18,18,25,32,22,21,21,23,24,23,23,29,29,30,30,31,34,33,30,26,28,24,14,24,33,25,26,22,23,27,20,21,29,27,27,31,37,34,39,36,36,25,18,26,24,20,21,27,26,23,24,31,26,24,30,30,28,31,38,35,33,36,33,29,22,23,28,25,20,28,28,24,23,34,25,24,30,30,30,30,36,36,32,38,33,30,22,25,29,24],
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
