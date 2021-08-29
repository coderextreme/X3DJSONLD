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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA2-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.45874999618971,-77.8679999890532,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[85,84,79,89,83,80,80,84,84,80,82,54,63,75,98,95,101,97,99,85,109,93,93,79,73,79,71,73,76,67,76,74,72,60,67,75,78,84,93,83,81,93,105,103,89,70,68,76,72,62,66,74,71,67,71,56,66,74,67,61,69,63,90,94,95,106,77,66,81,88,79,72,62,62,56,61,63,59,56,65,61,57,62,80,97,105,102,96,65,62,79,80,77,80,67,72,71,67,76,67,50,58,59,57,51,101,92,89,97,91,65,72,83,75,70,67,60,80,86,67,82,77,78,75,57,56,52,82,91,73,83,95,77,74,71,73,63,64,65,74,79,86,81,74,72,61,64,57,54,61,82,70,80,89,66,60,61,60,64,81,60,74,84,86,83,80,68,75,63,57,54,57,62,60,64,72,72,71,70,65,78,81,64,64,84,86,70,73,87,70,63,51,52,55,58,57,59,66,59,75,70,69,72,79,66,75,82,86,83,84,85,80,68,59,54,59,55,56,56,54,60,78,60,73,80,82,76,96,79,89,84,86,76,78,97,74,61,59,56,52,53,54,72,78,62,77,85,96,81,103,90,92,86,88,81,80,92,86,71,86,73,63,49,54,84,78,67,73,93,97,77,91,92,103,97,98,88,85,89,87,85,94,91,88,69,62,85,76,66,78,94,100,81,94,97,101,94,78,79,79,76,76,88,82,71,76,69,68,83,70,61,73,89,103,86,93,98,100,97,96,84,87,84,75,75,77,67,56,54,59,91,70,72,78,90,92,98,97,104,99,99,102,96,92,91,75,76,77,72,72,54,52,78,72,81,81,84,86,97,104,103,95,90,101,98,84,91,79,71,58,58,74,66,66,94,74,79,78,82,93,101,94,94,93,93,88,97,85,80,79,63,63,67,79,68,57,83,78,74,90,86,105,100,92,81,90,76,86,75,76,77,66,63,57,73,72,63,59,81,63,91,93,88,96,97,98,86,82,87,69,73,67,69,83,64,70,78,73,64,70,66,90,88,93,97,101,97,99,97,86,92,72,77,80,85,82,64,77,88,74,59,69,66,90,85,94,96,104,97,97,99,86,91,75,77,79,83,81,68,73,87,72,58,70],
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
