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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA8-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.89624998256912,-77.36799997694601,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[29,34,38,39,33,31,37,43,44,36,32,35,30,38,23,27,22,29,27,30,29,28,36,32,32,40,30,33,35,39,38,39,33,38,37,35,37,36,29,29,19,29,27,28,36,42,42,42,44,39,27,29,29,38,46,43,41,38,38,39,32,40,27,24,39,37,42,41,46,43,39,36,30,33,23,25,31,32,38,34,37,35,37,38,29,32,28,33,47,41,41,41,38,38,40,43,33,26,20,27,30,26,34,30,31,33,30,26,31,30,51,38,40,39,33,32,44,39,33,30,33,22,20,29,31,26,27,25,35,21,24,26,35,41,40,37,41,33,31,40,38,33,29,24,18,26,26,27,23,23,24,26,15,16,42,31,35,34,37,46,33,32,30,35,24,20,15,21,19,16,29,23,15,19,15,19,30,25,32,26,35,28,33,32,30,30,24,22,18,16,19,19,20,17,23,18,14,15,43,36,42,32,27,27,33,20,18,19,20,21,18,30,24,26,22,24,21,27,22,23,27,28,31,37,34,29,20,18,18,22,17,20,23,32,34,27,34,27,31,41,34,27,36,35,31,35,30,21,23,19,18,19,24,26,30,32,37,33,37,26,39,33,30,22,31,27,26,22,24,23,23,31,22,25,28,32,37,40,44,41,37,34,38,44,32,28,28,24,21,21,31,31,26,31,31,28,34,36,40,40,40,33,33,31,35,29,31,44,24,22,26,32,19,39,36,37,34,29,40,41,40,32,37,43,38,29,31,28,22,39,25,27,31,21,37,37,41,35,44,30,39,37,43,31,30,27,27,41,33,32,28,23,28,27,36,28,32,33,41,38,28,42,39,41,39,34,37,32,36,35,34,26,25,25,39,31,33,33,35,30,33,39,30,42,38,40,43,36,36,35,31,33,35,25,32,32,35,35,35,36,34,35,32,40,41,40,39,45,47,44,34,30,31,28,33,29,40,41,39,38,40,38,44,34,36,41,42,37,37,43,44,40,39,31,37,29,31,27,41,39,42,40,43,45,37,39,44,37,41,40,41,44,33,39,36,37,36,31,37,24,26,35,38,39,45,40,39,35,40,35,40,37,39,47,39,36,34,39,33,37,32,33,34,34,37,39,45,38,38,34,40,39,38,37,37,46,37,34,35,38,35,35,32,32,35,31],
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
