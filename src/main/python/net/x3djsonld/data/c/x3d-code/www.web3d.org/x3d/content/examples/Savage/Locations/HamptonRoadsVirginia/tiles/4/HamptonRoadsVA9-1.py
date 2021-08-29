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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA9-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.80249998029902,-77.8679999890532,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[83,92,96,80,72,85,73,83,84,89,93,98,96,95,83,85,92,94,100,90,89,89,88,96,96,91,89,78,72,79,86,89,100,108,97,105,88,99,98,98,97,93,91,90,92,94,112,100,96,87,67,79,88,97,105,101,97,107,97,91,88,94,99,89,80,82,95,105,106,102,96,82,75,84,93,96,102,101,99,87,94,91,80,83,84,97,91,87,103,107,109,98,93,83,90,96,92,98,105,101,101,97,88,92,85,78,88,93,90,95,104,107,105,96,91,81,92,107,101,99,94,99,101,100,99,93,89,72,77,91,92,89,113,107,97,94,96,77,86,98,101,105,92,91,100,106,104,98,98,86,83,75,87,85,107,110,105,101,95,89,92,103,103,105,90,86,94,98,96,97,96,88,69,73,84,85,112,108,107,98,94,97,94,102,98,103,106,99,90,87,80,95,87,82,79,73,69,74,105,109,108,106,102,102,107,97,100,100,105,106,95,90,84,91,92,89,95,77,71,62,98,96,97,97,101,108,111,96,94,89,95,95,104,107,92,82,98,94,92,85,81,66,104,94,93,96,104,97,103,104,82,85,94,98,102,98,97,81,92,87,83,70,70,68,97,99,102,90,86,95,98,106,93,81,99,92,88,91,97,88,85,75,82,84,63,73,85,93,95,91,76,82,90,92,88,90,73,92,84,85,86,98,95,94,101,79,79,83,89,80,84,90,82,76,78,77,68,73,75,83,72,77,82,88,93,92,98,89,84,89,91,90,102,88,79,72,90,83,84,94,92,74,77,75,79,72,75,79,97,89,93,89,107,96,90,98,101,86,94,87,92,95,90,85,83,79,75,83,81,82,86,77,95,100,96,96,94,100,96,95,100,84,98,101,87,92,81,90,89,84,79,78,85,76,90,99,97,86,87,88,98,103,97,98,103,109,95,97,89,76,83,75,74,81,71,69,88,95,89,78,89,79,92,103,100,102,102,104,101,88,77,91,82,75,89,87,62,74,84,86,83,83,88,76,95,88,100,99,90,93,101,99,91,88,84,86,98,98,82,68,72,73,82,81,87,78,95,89,100,98,91,92,100,100,94,88,84,87,99,99,82,69,70,71],
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
