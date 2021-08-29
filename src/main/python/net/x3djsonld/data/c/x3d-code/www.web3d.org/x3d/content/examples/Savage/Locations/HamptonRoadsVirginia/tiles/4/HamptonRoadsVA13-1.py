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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA13-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.42749997121862,-77.8679999890532,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[76,71,67,54,73,69,85,88,85,76,78,80,76,64,82,90,85,81,69,64,70,70,71,62,55,64,67,76,89,87,83,68,77,73,67,68,82,89,83,66,66,54,65,63,63,57,60,68,76,80,89,89,84,80,71,70,58,88,86,86,66,65,60,53,60,61,65,49,64,75,85,86,102,88,70,77,70,57,82,87,82,72,61,64,70,63,62,57,54,51,66,76,71,81,102,84,75,65,64,83,84,78,70,81,73,65,61,54,65,55,51,63,65,66,79,93,91,76,66,60,75,81,78,79,61,70,66,64,65,51,56,61,59,77,72,73,80,85,88,72,62,56,73,76,74,75,67,65,70,74,62,66,44,51,72,79,81,87,88,79,71,74,58,58,78,77,73,61,62,59,62,67,65,64,57,55,85,76,79,83,83,75,74,73,65,63,71,71,74,66,57,56,61,61,65,64,56,48,70,73,79,81,75,68,78,83,76,58,61,71,70,67,63,52,56,64,64,63,58,57,86,73,86,79,72,61,70,83,68,49,60,63,66,69,62,54,53,54,58,60,57,53,79,81,98,82,75,72,64,70,69,47,51,64,62,69,61,63,56,43,53,60,57,53,73,80,94,88,82,81,77,60,57,74,60,67,53,65,57,64,62,62,53,48,45,50,93,93,90,86,79,73,73,69,59,52,54,67,64,57,63,64,62,57,57,50,42,41,98,86,73,82,85,86,81,74,62,46,56,70,68,55,59,62,58,61,57,50,51,44,80,79,71,79,78,79,84,74,62,51,47,60,71,71,47,54,56,51,48,49,47,49,67,74,71,73,77,75,79,68,74,61,48,54,57,64,58,51,44,51,47,53,49,51,67,76,78,58,73,79,79,73,65,66,61,50,65,65,64,54,48,48,47,53,41,47,68,63,69,64,77,76,72,73,58,61,52,45,57,60,56,49,50,43,48,42,38,43,50,62,57,69,71,78,74,69,64,50,46,47,52,54,48,42,45,38,37,42,44,35,55,49,47,64,77,71,70,59,58,57,43,45,53,51,50,47,45,43,42,44,41,42,55,49,47,63,75,71,70,62,58,57,42,46,52,52,50,46,45,43,42,44,40,41],
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
