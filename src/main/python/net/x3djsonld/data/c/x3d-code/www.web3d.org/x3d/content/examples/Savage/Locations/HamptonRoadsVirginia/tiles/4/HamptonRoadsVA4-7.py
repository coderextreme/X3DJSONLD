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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA4-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.27124999164951,-77.11799997089241,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[34,38,36,38,41,38,40,39,36,38,43,37,39,38,33,38,42,39,48,39,37,42,34,37,30,42,38,42,41,35,43,39,43,41,41,40,39,43,46,43,37,43,37,36,44,34,36,38,41,43,40,33,34,33,41,42,43,37,42,40,45,35,38,36,46,37,42,38,39,25,30,39,31,36,30,26,34,40,45,40,39,38,41,38,38,33,39,36,41,39,40,35,36,31,29,25,26,31,28,32,40,36,33,35,41,41,35,36,39,39,33,33,42,34,36,38,39,32,43,29,35,31,31,28,29,34,42,36,42,37,38,35,32,35,43,44,40,39,38,40,41,29,24,30,38,40,34,31,39,41,46,37,39,39,32,26,29,43,38,43,40,39,41,43,37,29,36,35,38,41,41,41,37,37,39,36,26,27,24,31,41,33,39,41,34,43,40,27,28,32,39,36,41,36,42,37,36,42,38,29,24,24,26,32,38,33,32,39,40,30,30,39,37,38,40,37,47,39,35,39,35,39,32,26,27,27,28,32,33,35,37,30,23,34,34,29,33,47,35,39,36,38,36,34,32,29,25,29,21,26,30,31,37,34,29,29,32,35,40,34,34,39,40,32,41,30,31,27,27,29,30,28,27,41,40,25,23,30,27,37,31,33,39,40,27,39,34,31,37,35,38,38,27,27,25,30,33,30,19,27,26,30,33,29,37,29,34,40,36,44,34,32,38,35,37,30,27,29,31,29,25,21,22,25,20,29,30,24,33,31,40,38,37,37,40,37,32,43,22,22,30,20,25,28,22,27,21,27,36,26,34,34,37,43,39,38,37,35,32,31,26,24,32,26,22,29,33,27,25,23,28,22,25,26,45,40,43,47,36,31,33,29,30,28,30,36,33,29,36,24,25,26,21,22,26,25,48,38,48,47,40,39,38,32,31,33,31,29,35,32,32,32,39,28,21,17,27,23,48,39,35,33,33,34,29,34,32,36,33,38,46,36,34,32,31,35,28,21,29,28,44,50,43,35,31,26,37,40,35,40,37,40,36,35,34,35,37,32,29,34,29,34,44,46,40,34,30,28,38,37,37,40,36,40,36,35,33,35,39,33,30,37,29,33],
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
