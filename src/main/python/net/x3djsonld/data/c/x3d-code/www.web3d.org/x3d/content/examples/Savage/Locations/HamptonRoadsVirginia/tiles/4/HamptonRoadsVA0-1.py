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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA0-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.64625000072991,-77.8679999890532,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[93,100,88,79,96,115,114,115,117,111,118,112,103,89,89,99,99,104,92,89,104,93,86,85,82,92,97,101,113,120,114,117,115,116,102,109,109,105,88,105,90,83,91,86,82,84,95,98,115,108,114,112,111,119,106,124,114,111,99,83,91,76,83,78,97,93,86,104,91,113,104,114,111,104,96,101,122,111,126,109,101,102,106,84,67,77,91,76,97,100,105,117,101,106,115,102,97,111,115,113,113,111,100,99,99,90,97,94,80,73,88,90,110,97,85,102,106,98,85,105,96,112,108,115,112,105,100,92,91,84,84,89,87,78,89,86,86,95,110,110,85,86,96,102,113,94,108,107,100,90,91,91,93,99,80,74,79,94,108,101,109,95,84,88,98,99,114,94,104,112,104,103,89,93,76,75,67,97,90,92,99,106,103,97,79,90,101,107,96,103,98,113,103,97,81,85,90,88,72,82,85,88,102,103,95,84,97,100,98,101,98,93,103,98,105,95,106,95,101,96,65,80,82,100,103,86,86,82,93,99,97,100,88,93,99,100,98,106,95,98,102,93,81,80,96,83,94,79,76,97,102,97,85,84,86,80,84,101,98,94,96,91,88,88,90,75,72,89,84,86,86,83,88,99,96,81,82,80,99,86,96,98,93,89,86,79,80,84,77,88,77,76,79,100,92,100,93,78,71,88,94,95,102,93,92,85,89,95,76,69,68,79,70,79,93,106,95,89,87,77,74,87,91,100,101,99,79,85,94,94,90,87,77,67,102,97,90,97,86,87,75,70,89,89,94,95,106,99,88,82,75,86,102,80,66,62,95,88,89,97,77,80,82,66,79,86,86,98,96,95,93,91,74,69,94,77,70,71,81,78,73,69,75,66,61,76,79,87,80,80,94,92,80,87,84,80,77,75,80,78,75,82,64,76,76,79,82,93,85,74,86,90,97,96,96,96,95,94,66,61,64,67,64,63,78,75,80,86,80,85,93,83,93,96,100,91,89,89,84,86,72,77,89,97,76,75,80,80,87,82,87,85,94,87,96,102,94,79,91,75,84,82,69,79,92,96,77,76,80,80,87,81,87,85,95,88,96,103,93,78,91,74,85,82],
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
