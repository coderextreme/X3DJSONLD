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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA4-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.27124999164951,-76.86799996483882,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[33,33,43,32,23,29,36,40,35,44,38,39,26,32,30,26,29,22,14,9,17,16,34,40,37,33,32,41,41,37,40,36,43,44,29,34,30,25,30,19,18,23,18,19,36,35,36,41,41,43,39,47,44,42,48,36,30,21,25,28,25,26,28,21,20,19,34,33,35,38,37,37,38,32,39,50,39,39,36,29,34,28,28,32,20,28,23,20,33,31,36,37,44,38,44,40,39,38,40,31,37,35,34,29,35,29,30,31,24,22,30,38,34,43,37,39,43,33,37,35,31,32,31,31,31,31,33,35,37,33,20,22,32,29,41,35,42,36,34,35,36,38,28,37,37,38,36,33,33,33,32,28,28,27,40,41,34,35,38,40,30,33,29,28,30,30,34,35,28,36,37,40,27,32,20,27,38,34,41,41,37,37,34,34,32,25,29,31,37,31,32,40,33,36,35,33,31,30,42,43,36,34,34,35,28,30,28,28,32,41,34,30,37,36,34,40,31,41,32,36,46,36,38,31,29,26,32,35,35,26,31,32,30,27,40,33,37,36,37,37,30,29,46,35,35,31,31,29,28,38,33,42,26,29,25,34,30,39,36,39,29,38,35,40,44,36,40,25,26,28,32,28,32,29,28,29,32,33,25,28,36,36,37,39,36,37,37,28,33,25,27,33,26,30,34,33,32,22,31,33,37,38,35,33,35,37,38,41,28,23,28,27,26,33,34,35,29,31,35,25,29,28,35,36,37,36,37,35,34,36,31,26,28,30,35,31,33,35,32,31,34,28,28,34,34,31,36,41,38,32,33,37,30,29,26,30,26,22,26,36,31,29,24,35,34,36,33,28,27,27,31,32,32,32,28,32,29,29,35,30,31,32,36,27,30,32,36,30,35,36,26,26,42,34,33,32,32,32,34,29,26,32,24,29,28,31,33,32,28,33,34,33,32,34,25,33,34,31,36,32,33,35,26,30,26,33,26,30,37,35,32,32,37,32,28,37,35,31,34,32,34,33,31,36,34,30,35,35,20,37,28,31,32,29,29,36,35,30,30,24,31,31,31,31,32,40,34,29,34,34,22,36,25,31,32,29,28,38,34,30,30,25,30,31],
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
