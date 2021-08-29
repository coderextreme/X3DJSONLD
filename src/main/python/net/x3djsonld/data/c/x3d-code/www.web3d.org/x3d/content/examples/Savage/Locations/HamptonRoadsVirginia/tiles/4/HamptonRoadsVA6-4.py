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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA6-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.083749987109314,-77.49299997997281,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[44,39,47,45,53,41,43,35,33,26,24,27,31,35,20,20,24,21,24,22,23,20,42,42,45,46,43,38,40,36,30,30,29,25,23,30,25,38,26,25,25,24,26,22,39,47,51,45,42,39,37,33,30,28,24,26,27,29,32,30,32,24,24,22,25,22,45,44,43,50,52,39,33,32,29,34,32,36,37,39,42,34,28,27,22,24,23,20,54,41,45,44,45,38,38,38,39,40,39,42,44,48,41,40,24,28,25,23,22,22,51,38,44,39,40,40,38,43,51,42,46,48,41,41,38,27,27,30,20,23,21,24,47,43,46,40,38,38,42,60,46,40,40,37,40,31,27,21,31,31,24,20,23,24,47,42,45,41,41,40,42,57,50,43,37,35,31,38,38,35,24,30,28,27,26,24,53,49,53,47,43,43,44,41,40,36,34,32,26,33,34,24,26,25,25,26,23,25,54,46,49,51,40,42,34,38,35,35,41,32,31,32,34,27,28,25,27,23,25,27,48,47,50,45,41,39,40,40,32,33,31,33,34,35,30,30,29,24,25,24,28,26,56,54,49,47,42,42,40,35,35,32,43,34,28,31,26,23,23,25,30,24,26,30,52,49,56,52,44,42,35,33,33,36,38,26,26,23,26,22,24,28,24,33,36,37,56,54,50,49,46,39,32,34,37,37,33,24,33,25,22,25,25,23,28,33,38,45,53,50,52,50,54,44,41,36,34,36,26,25,27,28,24,25,24,39,39,39,41,42,50,46,49,42,45,46,41,32,33,30,26,24,28,25,28,24,36,38,45,42,44,47,48,44,43,48,48,37,35,38,30,28,32,24,30,23,26,24,34,39,49,43,43,40,43,48,48,45,39,36,32,31,27,25,31,27,30,36,31,29,33,41,45,46,44,44,41,40,41,45,39,36,30,29,27,34,28,29,31,29,31,32,41,44,48,45,48,48,46,35,32,31,39,31,30,27,28,32,34,37,31,32,36,37,54,52,42,47,46,50,37,39,36,30,31,28,27,36,27,28,38,36,36,34,33,41,47,44,44,45,43,43,38,41,35,32,35,27,26,37,27,30,36,36,38,33,34,41,46,42,45,45,42,45],
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
