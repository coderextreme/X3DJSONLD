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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA4-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.27124999164951,-76.99299996786561,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[42,36,47,34,37,34,35,36,42,35,38,32,33,31,23,29,30,32,40,35,34,33,36,37,30,40,39,40,37,38,42,35,37,36,35,35,23,24,32,30,29,34,34,34,37,38,38,39,41,42,37,39,46,40,40,38,35,33,25,22,29,37,37,33,35,36,36,35,43,42,37,41,39,45,38,37,38,37,38,37,29,19,26,35,31,29,33,34,39,44,44,45,39,35,42,40,38,39,38,32,35,41,26,20,25,34,28,30,34,33,35,30,41,39,40,38,36,35,40,40,36,32,33,27,30,18,19,23,22,26,30,30,39,36,30,31,31,44,34,33,39,36,38,43,37,37,29,23,25,32,35,30,35,32,36,34,38,38,35,27,33,33,37,34,38,37,39,38,25,26,32,36,34,28,39,40,42,42,42,40,37,31,29,42,34,40,37,35,38,30,25,24,37,37,39,36,34,38,39,38,41,38,32,35,26,23,33,38,42,33,33,26,21,27,38,35,39,39,44,42,38,38,40,37,30,41,40,36,22,31,37,34,28,29,21,28,38,39,43,37,43,46,32,37,36,36,36,37,37,36,31,27,41,40,27,26,25,30,36,35,45,36,43,46,39,35,46,34,43,38,44,34,33,31,28,32,30,21,23,28,34,38,43,41,34,44,40,31,36,35,41,44,38,40,36,23,28,26,36,36,27,30,26,29,37,43,31,37,31,33,35,33,33,33,31,34,30,35,37,31,36,40,23,30,30,28,41,36,29,28,34,33,35,35,27,33,35,31,41,38,35,41,39,27,24,31,27,37,41,33,28,31,26,34,29,33,29,29,38,30,33,37,39,33,33,26,23,33,35,38,39,36,24,30,25,30,37,30,31,25,35,33,34,40,36,34,27,24,29,29,39,33,36,35,32,28,23,25,31,25,20,18,19,32,36,43,33,37,25,22,26,20,30,28,38,42,30,32,28,22,22,26,23,19,19,29,32,34,45,39,32,28,23,33,30,47,33,42,27,36,34,27,37,31,22,19,23,30,32,25,36,36,34,31,22,22,25,32,35,36,26,34,33,25,38,31,22,18,23,28,33,28,40,36,32,33,23,23,17,36,34,36,26,31],
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
