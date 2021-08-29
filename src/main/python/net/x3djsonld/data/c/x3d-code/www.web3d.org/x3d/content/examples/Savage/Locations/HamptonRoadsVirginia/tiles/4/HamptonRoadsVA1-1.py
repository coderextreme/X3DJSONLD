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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA1-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.55249999845981,-77.8679999890532,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[69,79,92,96,77,76,80,80,87,81,87,85,95,88,96,103,93,78,91,74,85,82,71,74,86,110,96,82,94,95,97,85,91,97,98,98,108,109,90,94,85,98,96,87,72,64,88,85,106,100,96,96,98,93,86,88,95,96,103,107,95,97,103,99,91,83,75,61,73,79,91,100,96,93,92,92,73,92,93,90,96,111,94,106,102,101,95,93,64,66,75,80,98,112,103,85,87,92,70,94,102,100,100,105,107,111,103,98,104,98,59,66,82,75,88,96,108,85,80,91,70,92,91,94,95,87,100,99,106,111,94,97,69,83,95,95,105,101,94,90,71,74,86,85,89,96,91,86,108,87,101,103,95,92,74,80,84,95,102,89,84,77,77,84,94,93,96,92,81,93,95,98,94,99,100,88,63,80,90,108,92,94,74,67,88,85,85,98,78,83,86,89,88,94,87,93,95,92,62,92,72,83,90,76,64,84,104,100,99,97,77,68,75,75,84,89,93,84,92,92,67,75,68,65,62,67,76,82,94,112,107,96,81,72,68,80,85,77,95,81,87,92,68,86,63,62,60,68,104,106,107,110,107,89,88,75,63,71,78,88,88,80,89,92,68,76,86,61,65,92,100,114,104,101,98,87,78,75,70,78,84,89,70,87,91,94,74,63,68,62,62,79,103,109,111,92,76,78,74,75,71,82,77,72,75,79,90,93,89,73,62,60,61,69,96,93,87,93,81,65,72,61,76,76,79,68,73,88,86,86,91,77,71,69,63,61,75,85,79,76,80,73,63,64,75,70,68,78,74,80,84,82,93,82,86,80,65,63,59,64,60,63,60,53,62,61,90,66,72,79,85,89,80,79,84,76,79,71,68,71,63,78,73,63,59,60,56,61,83,64,60,74,78,89,85,83,75,71,69,70,77,77,75,88,80,66,76,63,62,56,55,65,71,74,76,83,85,79,95,88,76,87,73,87,76,87,83,85,91,72,68,63,54,64,86,83,93,84,85,77,96,89,85,99,91,86,80,83,87,88,92,72,63,57,55,102,96,100,100,94,90,89,87,83,79,92,81,77,81,85,84,81,81,53,63,74,95,95,100,99,102,85,110,93,85,84,79,89,83,80,80,84,84,80,82,54,63,75,98,95,101,97,99,85,109,93],
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
