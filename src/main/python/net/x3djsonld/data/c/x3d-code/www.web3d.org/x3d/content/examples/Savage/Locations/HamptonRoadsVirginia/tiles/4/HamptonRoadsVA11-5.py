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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA11-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.61499997575882,-77.36799997694601,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[37,35,39,34,34,41,36,43,36,39,38,33,28,36,40,38,39,28,30,36,28,32,41,33,38,39,48,40,42,37,36,31,36,38,29,31,46,42,34,32,48,32,25,29,38,40,33,41,42,48,43,42,41,40,36,34,35,48,37,39,36,41,45,29,25,24,41,45,43,47,41,43,50,44,47,40,38,45,38,44,44,38,34,28,27,25,34,27,42,42,42,44,35,37,38,38,38,36,33,47,36,37,32,36,32,27,23,34,30,31,47,36,39,33,36,43,36,44,40,33,37,34,37,40,34,36,34,29,38,20,41,39,39,36,39,36,38,42,38,42,36,35,36,38,42,41,38,37,47,34,28,35,43,32,44,35,33,33,35,43,34,36,34,34,37,31,37,29,25,38,37,32,20,30,35,34,40,36,34,31,31,30,33,34,31,29,28,28,36,33,25,27,26,27,24,27,36,33,37,37,39,38,36,37,35,41,35,33,38,36,32,31,31,26,22,22,37,35,32,36,48,43,38,37,45,45,48,34,31,31,35,38,39,34,31,30,35,32,37,22,33,43,44,42,39,38,41,40,37,38,39,36,35,29,38,32,38,33,46,46,41,41,35,40,39,40,41,47,37,39,47,38,35,32,38,38,32,40,36,39,39,35,37,43,42,39,44,40,40,37,42,40,40,45,38,37,36,31,31,31,30,38,45,42,35,36,40,38,44,39,38,46,43,51,39,42,38,36,41,35,33,36,29,31,35,33,33,33,39,37,42,42,43,43,43,43,39,38,43,41,37,32,32,32,21,32,36,33,35,33,35,30,49,38,45,42,47,43,45,36,39,31,33,33,36,30,29,33,31,31,29,39,29,30,45,44,30,43,38,47,41,33,31,34,35,37,33,29,36,33,33,31,38,33,27,30,40,37,42,35,41,34,34,34,33,29,39,35,28,38,26,30,28,48,29,29,28,29,28,27,36,31,33,33,37,34,27,26,34,31,32,33,23,21,25,32,34,31,31,26,33,27,30,34,27,33,33,33,25,23,22,31,33,31,27,30,20,33,28,30,22,30,31,28,28,36,32,31,31,33,24,25,23,28,32,31,29,29,20,33,31,35,24,29],
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
