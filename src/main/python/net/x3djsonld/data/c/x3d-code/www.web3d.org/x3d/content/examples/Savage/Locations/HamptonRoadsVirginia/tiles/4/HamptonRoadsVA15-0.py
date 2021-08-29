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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA15-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.239999966678425,-77.99299999208,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[85,77,66,58,64,64,63,47,56,52,61,60,62,70,67,64,65,55,45,44,66,60,75,76,77,69,54,54,55,56,51,52,47,52,60,72,63,63,70,71,54,66,65,60,67,63,69,59,58,52,48,49,59,57,56,50,55,53,65,64,69,58,52,68,68,67,53,65,60,52,52,70,67,68,73,66,61,55,52,44,64,68,71,69,59,75,67,67,55,54,51,54,60,72,75,74,68,70,71,59,58,49,50,57,73,68,75,72,66,66,51,59,59,54,60,83,69,73,71,72,66,62,56,53,44,55,63,69,62,61,70,73,72,80,72,70,73,82,77,76,73,65,73,66,51,46,42,59,63,64,55,59,63,63,80,81,82,87,85,82,75,78,72,65,65,62,53,42,43,51,58,58,57,70,60,64,81,84,83,91,81,80,77,72,78,75,61,64,50,42,40,46,43,57,42,67,54,57,82,75,84,85,74,73,70,74,68,68,63,48,49,60,57,51,46,45,38,39,52,52,71,78,88,89,76,77,73,79,68,66,61,55,56,59,64,61,60,39,60,44,41,44,76,79,84,88,86,79,82,60,67,63,55,59,63,61,62,53,52,59,64,53,42,49,66,74,87,81,85,78,72,71,59,62,63,53,56,57,59,59,60,62,68,58,53,50,77,77,86,81,84,75,70,62,57,49,67,58,58,57,58,58,57,68,66,69,59,57,67,78,77,81,80,74,70,65,64,64,64,65,58,58,60,56,55,59,66,65,56,62,61,77,72,79,85,77,66,64,59,59,62,61,58,59,60,55,57,57,62,61,57,56,55,65,88,85,83,76,69,61,59,60,58,58,58,58,64,62,66,61,67,58,52,61,57,71,81,78,80,67,69,58,64,59,67,58,59,63,57,65,66,62,63,62,68,57,59,69,84,74,73,70,62,63,60,63,63,55,59,56,54,59,64,66,63,61,59,60,61,68,79,75,69,64,61,62,60,61,59,54,61,56,62,66,65,63,62,63,62,61,59,64,68,79,62,64,57,62,56,53,56,47,48,58,60,68,64,63,61,59,54,55,58,64,66,79,64,64,57,58,55,54,55,46,47,56,59,67,67,65,61,56,57,54],
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
