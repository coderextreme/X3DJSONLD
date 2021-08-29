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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA11-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.61499997575882,-77.8679999890532,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[76,77,82,83,88,81,72,72,75,62,69,67,51,43,43,44,43,48,43,52,68,74,74,77,80,82,91,84,77,87,69,68,74,69,50,69,60,43,43,43,43,43,43,43,79,75,82,94,84,78,85,81,63,71,76,67,63,68,49,64,43,43,43,43,43,43,75,94,82,102,89,79,82,81,67,84,77,74,66,69,62,61,49,59,57,43,43,43,79,89,87,102,102,90,100,79,74,87,89,73,65,75,67,70,63,81,69,55,44,43,84,84,100,96,98,97,101,95,86,89,97,76,75,77,69,65,74,66,72,58,43,44,80,100,93,97,93,99,88,95,102,103,103,75,82,69,75,67,60,53,54,53,43,49,93,99,102,92,91,86,85,84,102,89,103,97,95,66,64,66,53,51,53,54,56,54,97,99,96,95,75,80,70,83,82,86,95,103,79,71,62,60,52,84,65,64,69,67,101,98,101,92,82,91,69,78,81,79,78,81,87,68,63,51,61,87,91,77,75,84,93,89,100,106,81,91,71,68,73,78,70,76,76,71,53,49,66,76,93,82,93,91,102,91,85,98,85,97,89,73,62,76,71,73,72,74,66,60,87,95,93,96,92,92,108,93,90,86,90,90,81,87,63,71,69,56,64,72,56,59,77,92,100,100,93,80,103,104,94,89,96,93,74,74,69,59,64,56,68,64,50,97,93,94,96,98,87,84,111,114,105,102,106,96,91,89,76,67,76,60,63,56,57,95,97,97,92,90,87,87,109,114,111,103,107,99,88,90,76,71,78,64,61,61,64,87,109,92,94,89,96,88,103,113,112,104,103,96,83,76,75,83,81,63,74,68,79,71,90,93,86,93,86,83,93,107,104,104,95,91,81,67,84,82,82,68,83,68,102,65,85,94,97,77,90,90,91,93,97,110,96,93,78,91,82,92,92,82,98,83,85,77,104,96,85,83,83,85,91,94,101,99,93,95,91,95,94,97,98,90,99,101,85,92,93,82,82,80,87,81,87,90,94,86,88,92,95,98,104,96,101,96,105,110,90,100,94,89,83,65,84,83,87,92,94,87,89,93,97,97,105,94,102,101,105,111,91,101,93,87,83,66,85,83],
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
