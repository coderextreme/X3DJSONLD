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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA15-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.239999966678425,-77.8679999890532,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[60,58,53,48,52,54,55,49,43,42,46,49,43,43,40,40,34,29,36,44,41,45,60,59,57,59,54,43,54,46,44,43,51,44,42,42,41,37,30,43,40,36,42,43,67,64,61,61,52,59,47,48,48,40,49,45,44,38,39,36,39,44,44,40,41,40,67,63,60,54,51,49,45,48,49,40,44,40,45,42,33,40,41,43,41,41,38,44,66,63,62,58,51,45,49,38,42,38,39,50,37,35,42,47,41,41,48,41,42,41,73,72,57,56,48,47,47,43,46,41,44,41,44,46,45,38,41,39,36,42,44,39,63,70,65,57,54,52,45,47,47,43,49,46,44,46,45,40,40,32,44,44,41,40,64,68,62,61,55,49,42,43,42,48,49,41,42,45,40,44,41,37,39,43,40,41,57,65,66,59,54,46,39,44,45,45,43,50,43,46,41,39,41,42,39,32,39,39,52,57,61,53,51,42,46,48,46,42,45,43,43,39,43,40,47,40,37,41,36,33,44,61,56,57,48,43,45,45,44,40,41,50,38,38,38,35,40,39,41,34,34,29,49,55,54,53,50,45,47,43,45,37,44,38,40,33,39,35,34,31,31,35,31,30,50,44,41,52,53,48,54,41,37,39,39,37,38,36,33,33,38,34,38,29,24,26,57,52,42,45,46,41,46,39,39,35,31,37,35,31,32,34,32,35,34,26,29,25,62,56,44,40,48,44,42,45,43,41,38,36,36,38,33,33,36,31,30,30,29,35,56,53,49,44,42,49,45,51,47,41,35,37,37,31,36,36,34,31,33,34,33,33,61,52,42,46,48,45,49,49,48,47,43,39,37,41,40,40,44,39,40,39,35,35,57,57,38,51,51,49,49,51,46,44,45,41,37,44,42,45,41,42,41,39,41,39,60,54,53,53,50,46,47,50,52,50,45,44,45,43,44,46,46,41,37,39,41,42,61,56,55,59,60,54,45,48,46,44,42,45,44,47,43,42,42,39,39,29,37,35,55,59,54,64,63,51,48,45,47,45,45,42,41,43,46,41,42,49,40,33,33,36,54,58,54,60,63,50,50,46,46,45,44,42,42,43,45,42,41,45,38,34,35,34],
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
