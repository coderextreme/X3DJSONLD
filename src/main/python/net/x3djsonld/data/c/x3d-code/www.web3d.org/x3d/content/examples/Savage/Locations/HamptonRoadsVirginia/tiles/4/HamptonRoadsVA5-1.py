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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA5-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.17749998937941,-77.8679999890532,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[107,93,67,85,96,111,95,90,100,109,110,116,113,112,113,104,97,107,99,106,113,110,111,96,64,92,92,99,95,93,103,108,108,111,106,101,107,109,105,107,105,111,113,111,90,101,74,80,73,91,87,95,103,99,105,97,111,98,100,114,105,108,114,111,113,110,96,92,91,68,83,94,88,97,98,101,100,94,102,106,96,108,108,104,102,104,100,104,92,74,94,83,89,97,91,108,94,87,100,98,106,104,90,104,110,105,99,106,107,112,89,73,83,65,81,92,74,94,96,79,97,96,102,103,85,91,94,105,94,95,96,101,95,81,66,84,85,91,74,97,81,93,100,99,107,100,90,83,92,98,101,93,94,98,81,84,86,65,83,98,88,82,86,88,93,108,106,105,94,77,96,97,103,84,94,97,70,65,72,66,97,89,94,91,77,72,86,96,105,100,88,81,96,104,97,91,83,87,94,82,85,80,81,82,80,89,86,83,80,95,104,94,87,72,87,101,87,91,75,79,103,94,100,92,76,61,75,69,85,79,88,89,95,91,90,72,85,97,92,80,72,74,98,96,89,89,79,69,60,62,84,83,72,76,93,86,97,73,85,96,90,83,67,74,78,72,66,74,78,79,76,61,69,72,83,70,89,83,94,83,87,91,84,76,67,85,100,89,77,75,74,96,82,82,84,82,67,72,60,76,84,88,78,90,83,77,80,89,92,76,77,94,100,88,90,81,87,74,74,62,65,61,83,88,62,84,81,64,76,94,94,88,96,85,99,93,92,90,87,80,80,81,88,78,73,69,66,66,79,66,87,93,89,86,105,100,106,98,98,90,85,74,73,74,64,72,66,81,61,60,58,66,84,81,92,99,96,99,103,100,95,82,94,83,87,81,84,88,79,88,71,64,55,59,71,74,96,105,109,107,103,94,90,99,94,89,93,85,102,96,90,85,79,60,54,58,69,74,99,106,113,108,96,101,104,102,96,94,97,98,91,93,91,86,95,87,81,54,54,62,107,108,115,111,107,107,96,97,100,103,103,102,93,100,95,95,95,86,70,66,58,61,112,112,108,107,115,112,99,83,94,99,101,93,92,104,102,96,94,80,81,85,73,79,112,115,108,107,115,110,100,82,95,96,102,94,92,102,99,97,93,80,87,85,74,78],
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
