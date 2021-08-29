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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA7-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.989999984839216,-77.36799997694601,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[45,42,49,40,52,43,48,37,42,39,36,39,41,34,42,35,35,42,36,42,47,43,42,47,44,35,41,34,35,40,39,39,35,32,35,27,38,38,28,36,30,38,38,42,40,41,47,40,41,42,34,33,36,40,37,39,31,33,32,33,32,30,33,32,36,43,35,36,44,45,41,39,37,35,40,39,37,40,43,36,33,32,33,31,26,35,36,34,47,35,35,43,44,38,36,30,35,31,30,42,39,44,37,34,37,37,28,32,41,43,50,40,34,40,40,40,40,40,28,36,39,43,38,32,34,39,39,37,26,23,32,24,45,35,40,27,34,44,42,36,26,35,38,32,29,43,30,39,41,33,38,32,34,25,45,46,47,38,29,37,34,38,27,36,31,35,24,32,35,34,43,34,40,35,37,34,42,38,38,41,41,35,29,32,27,31,26,35,24,31,27,30,37,38,39,38,35,41,38,35,37,48,47,45,35,38,44,40,37,30,24,35,29,26,36,30,33,33,30,35,30,35,33,36,36,38,40,46,39,45,38,38,31,36,34,26,19,29,31,22,31,27,42,40,40,37,33,42,32,33,33,35,35,36,35,36,36,26,19,21,30,32,25,23,43,42,43,41,42,35,31,29,28,27,38,40,30,36,37,32,20,20,21,25,23,24,41,37,35,38,31,33,35,40,32,32,32,37,30,31,34,30,29,21,25,20,17,22,45,42,40,44,39,38,41,46,46,38,38,26,27,27,25,26,28,31,21,21,21,16,45,37,39,41,40,43,42,38,35,45,32,42,27,22,33,22,28,26,37,35,20,24,35,37,44,47,46,43,41,41,42,34,32,43,34,40,34,33,36,27,23,22,27,29,43,45,49,43,50,49,40,43,42,40,40,37,37,36,35,36,39,31,22,21,34,29,37,43,40,46,40,42,40,44,44,38,37,36,35,41,32,41,36,27,26,34,37,40,40,36,45,30,33,35,48,38,37,39,42,38,38,34,39,30,34,32,33,35,41,36,33,25,25,32,24,38,34,43,35,40,42,36,36,40,37,28,31,34,36,34,31,31,28,32,37,40,33,32,38,44,45,34,31,35,31,38,24,29,22,28,28,28,29,30,29,34,38,39,33,31,37,43,44,36,32,35,30,38,23,27,22,29,27,30,29,28],
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
