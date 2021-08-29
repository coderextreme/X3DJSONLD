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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA6-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.083749987109314,-77.8679999890532,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[112,115,108,107,115,110,100,82,95,96,102,94,92,102,99,97,93,80,87,85,74,78,113,113,109,101,99,101,91,92,90,93,86,93,92,96,98,95,99,89,94,78,68,69,102,103,116,106,106,100,98,101,95,79,74,80,85,86,79,81,95,98,89,87,66,67,102,98,105,111,104,110,107,99,101,97,89,88,89,83,78,78,79,95,94,88,78,81,110,106,98,103,102,93,99,90,96,91,87,80,85,71,71,68,64,84,85,84,82,86,115,101,103,88,86,94,86,82,85,84,89,73,75,89,84,81,84,79,60,65,78,85,107,100,101,104,104,99,91,92,84,81,75,84,85,92,88,99,94,71,81,69,70,64,82,80,90,94,99,89,89,78,74,74,81,91,100,94,98,90,89,76,82,83,86,81,99,96,77,76,71,81,71,69,95,84,94,96,106,98,96,85,86,85,95,83,83,74,101,103,92,83,90,79,86,90,99,83,101,107,91,96,89,86,86,102,98,74,74,82,111,103,99,100,111,107,100,99,90,89,102,106,100,96,105,95,99,106,89,88,83,85,118,104,113,106,111,107,103,106,103,90,105,105,95,92,103,103,102,96,104,97,92,90,112,115,101,104,105,107,108,107,104,107,104,109,104,106,108,110,105,92,94,95,92,89,104,111,95,97,104,98,101,102,98,100,105,107,113,108,104,100,91,98,83,89,89,93,95,98,104,90,104,97,88,86,98,99,100,103,112,105,102,101,93,101,94,88,90,82,86,79,84,105,84,81,90,81,86,95,85,92,95,101,107,108,101,98,91,91,79,80,92,95,101,104,94,97,87,91,88,90,78,78,91,96,104,99,103,97,96,94,86,85,103,111,104,97,95,89,90,99,94,93,88,78,95,93,96,92,91,88,87,96,89,91,116,105,106,103,96,100,105,104,96,94,96,84,77,80,98,92,86,89,84,83,83,79,111,114,111,110,102,103,106,104,88,85,82,82,85,67,70,88,77,75,85,78,64,67,121,113,124,111,105,108,98,105,95,94,92,93,91,86,85,88,83,76,63,78,73,81,120,113,122,112,102,106,98,102,96,95,92,93,93,84,86,88,84,75,61,81,74,81],
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
