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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA12-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.52124997348872,-77.8679999890532,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[87,92,94,87,89,93,97,97,105,94,102,101,105,111,91,101,93,87,83,66,85,83,86,88,94,94,84,86,93,90,98,97,102,106,103,113,99,104,76,82,86,64,80,85,85,78,89,105,92,91,87,87,97,87,98,95,107,106,102,103,84,70,74,69,76,78,94,81,84,88,96,80,74,94,91,76,86,109,109,103,99,100,85,73,76,68,57,67,92,84,76,94,99,76,82,98,85,88,101,94,102,96,82,90,85,81,76,59,68,74,102,94,86,73,97,76,91,79,74,94,100,104,113,103,83,79,79,80,79,67,75,84,94,97,97,90,84,76,81,83,81,93,88,89,105,97,98,77,69,68,63,78,75,79,100,95,86,93,66,65,78,71,76,93,85,90,106,102,101,82,80,75,79,84,81,89,84,97,87,82,80,68,79,76,83,92,108,98,97,105,96,93,88,74,75,86,77,75,87,92,93,88,76,68,70,71,84,83,103,105,99,105,107,100,84,85,78,77,76,66,73,79,88,87,76,70,60,73,87,92,102,99,102,108,101,99,82,91,82,79,69,67,70,73,77,81,77,65,58,78,87,100,102,104,96,104,98,89,83,87,71,72,66,67,73,72,76,84,80,66,64,83,82,91,99,96,93,97,88,96,79,74,80,74,68,68,80,67,72,82,74,66,65,72,85,98,103,99,88,91,90,98,96,89,83,77,67,68,78,63,72,82,79,69,73,80,94,96,105,104,100,83,96,94,86,81,77,73,67,57,81,57,69,79,73,55,78,82,85,88,101,104,99,90,88,96,89,83,75,71,67,69,87,73,61,75,69,55,78,71,80,98,103,102,98,90,77,90,89,74,76,69,65,62,79,77,61,68,57,57,67,65,79,100,106,101,95,92,77,87,88,84,69,73,67,68,89,79,70,56,54,75,75,76,90,100,107,97,100,86,74,88,88,85,75,74,68,63,90,75,78,67,55,77,80,99,88,93,97,95,85,80,87,93,90,88,69,71,68,68,82,75,75,67,65,73,80,87,83,90,84,86,89,80,72,87,91,90,73,70,67,72,77,70,66,54,72,69,85,89,85,76,78,80,76,65,77,90,86,81,69,64,69,68,76,71,67,54,73,69,85,88,85,76,78,80,76,64,82,90,85,81,69,64,70,70],
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
