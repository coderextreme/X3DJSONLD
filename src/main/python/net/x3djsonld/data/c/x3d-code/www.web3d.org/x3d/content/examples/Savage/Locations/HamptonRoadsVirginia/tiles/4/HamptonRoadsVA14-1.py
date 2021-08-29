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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA14-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.333749968948524,-77.8679999890532,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[55,49,47,63,75,71,70,62,58,57,42,46,52,52,50,46,45,43,42,44,40,41,60,51,46,63,69,67,66,67,54,46,46,39,50,47,52,52,53,44,42,47,43,41,64,52,59,72,75,72,67,60,63,60,60,38,42,50,48,50,45,52,44,45,41,44,57,49,58,78,76,70,67,58,48,55,51,42,47,45,48,43,43,43,46,41,40,39,51,44,67,79,78,77,68,65,63,54,41,47,40,45,47,45,53,47,45,46,45,42,49,46,66,84,77,71,69,73,63,57,47,42,40,48,50,51,45,39,37,38,36,40,47,61,66,74,78,71,64,60,59,56,48,47,36,47,45,50,49,42,43,45,45,49,47,59,62,80,73,68,70,56,64,57,53,49,38,38,49,46,48,46,45,42,51,43,48,63,78,79,73,74,62,56,52,49,49,44,50,38,40,43,46,41,44,45,43,43,52,57,69,80,79,65,67,66,61,47,45,47,45,33,33,43,46,37,38,42,34,43,55,61,71,75,65,65,59,62,59,53,48,45,53,40,38,38,36,41,36,34,42,40,66,68,71,71,58,63,57,59,62,53,52,47,50,49,46,39,34,37,33,43,40,34,65,70,65,63,63,69,57,67,55,53,50,45,40,43,41,38,34,33,31,33,33,33,60,70,65,56,52,59,67,65,55,54,49,47,46,42,46,42,37,35,26,42,33,36,53,53,60,47,64,63,66,63,57,67,52,52,47,48,48,39,37,37,33,30,33,36,44,44,45,43,60,62,57,59,62,54,62,50,43,40,38,40,34,36,39,34,31,49,35,41,37,43,44,48,41,47,57,55,48,38,43,40,40,47,32,44,35,31,43,43,44,45,41,44,43,43,40,36,39,36,47,43,36,42,38,38,36,35,33,37,41,43,47,54,52,41,56,61,56,57,47,50,46,42,38,39,39,35,34,36,31,41,44,40,58,67,56,64,60,61,57,51,47,46,45,40,43,51,39,36,34,34,37,43,48,44,65,62,71,58,60,58,56,49,48,47,45,40,48,36,37,39,37,32,42,41,42,41,61,57,54,47,48,54,56,48,45,44,45,51,43,43,40,40,32,30,38,45,43,42,60,58,53,48,52,54,55,49,43,42,46,49,43,43,40,40,34,29,36,44,41,45],
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
