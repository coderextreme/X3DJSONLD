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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA14-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.333749968948524,-77.7429999860264,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[41,44,34,36,33,34,25,30,35,42,37,39,27,26,34,34,32,33,24,33,39,36,41,43,42,36,32,29,35,34,31,29,35,34,31,34,33,33,22,22,30,35,37,42,44,41,38,34,31,32,32,34,33,25,38,37,34,37,29,28,25,27,30,36,36,40,39,36,36,30,35,34,38,34,32,26,35,33,34,29,29,25,25,36,44,35,38,36,42,37,34,31,45,38,39,38,34,31,25,31,36,25,23,23,27,33,34,37,30,31,40,36,38,41,43,45,37,38,34,37,30,30,33,30,30,23,24,32,35,34,36,35,49,45,42,38,37,38,36,36,37,36,36,24,24,27,34,35,27,22,21,24,27,26,43,42,39,42,41,46,40,39,34,36,30,30,33,32,33,35,26,32,24,25,23,19,43,43,39,41,37,39,42,34,40,34,35,31,36,35,34,29,34,32,35,26,24,24,43,43,42,36,35,38,37,37,39,37,40,35,37,36,34,34,32,32,34,29,27,26,40,36,35,35,37,36,39,34,35,37,39,36,37,35,39,37,32,31,32,32,31,28,34,36,35,36,34,33,34,32,39,34,33,38,42,32,36,34,37,33,32,32,27,29,33,33,33,36,37,37,36,36,33,39,31,32,30,32,31,32,34,31,35,32,36,28,36,38,30,34,34,37,34,35,36,33,30,31,27,34,34,32,30,33,32,33,28,34,36,38,34,31,35,33,28,35,33,32,33,32,30,33,30,33,38,33,33,33,34,31,49,30,33,37,35,34,28,26,30,27,28,25,25,28,32,27,31,34,31,31,31,31,43,38,28,35,33,39,28,36,34,30,33,31,30,31,28,25,25,26,28,30,31,26,43,37,31,35,31,37,38,40,30,30,37,24,29,29,28,26,25,29,26,29,28,30,40,38,35,36,36,34,35,34,34,28,35,29,28,32,31,25,23,25,23,22,26,24,44,42,41,40,30,31,37,36,33,33,29,31,21,26,31,29,29,28,30,23,27,24,41,42,42,39,41,38,41,37,33,27,27,20,29,28,29,33,29,29,27,24,22,23,42,40,42,40,38,36,28,35,30,30,34,31,27,25,31,27,29,23,25,22,26,23,45,41,42,40,40,36,28,35,29,33,35,30,26,26,31,28,30,22,25,24,27,22],
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
