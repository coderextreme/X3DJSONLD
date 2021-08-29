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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA8-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.89624998256912,-77.8679999890532,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[81,78,83,79,61,65,73,82,84,81,90,93,96,94,98,95,96,82,83,86,90,92,85,67,76,78,73,67,88,84,84,82,91,99,87,91,95,80,85,73,83,88,89,89,67,67,72,76,81,62,87,87,72,85,93,98,89,79,92,84,70,76,77,85,86,84,70,83,58,62,66,75,65,80,73,85,88,94,84,70,74,87,80,66,82,72,60,70,80,86,64,55,62,77,53,80,64,79,79,90,77,65,81,93,79,73,75,62,44,79,88,89,72,70,56,55,56,69,58,74,80,80,73,73,84,92,85,77,63,59,85,95,77,83,91,84,73,71,59,56,54,66,62,79,72,61,87,90,85,77,55,57,82,80,65,79,73,87,89,83,71,72,65,54,60,80,66,66,90,82,83,80,70,57,78,71,54,50,54,78,78,84,79,75,67,71,50,60,65,68,80,85,78,83,77,67,60,56,61,50,53,67,63,71,76,66,72,75,72,55,50,68,72,89,78,73,81,80,70,60,57,61,60,59,49,75,70,60,72,71,67,71,59,52,68,76,76,65,69,71,60,58,55,52,64,51,59,63,55,57,52,56,63,70,63,59,50,69,64,61,55,66,65,64,52,77,72,64,68,74,69,61,46,61,54,50,58,49,53,46,54,55,53,52,63,62,53,58,50,68,74,75,70,56,59,60,69,51,63,72,66,71,71,46,61,64,68,59,59,56,61,77,83,71,59,59,63,77,69,73,68,70,79,66,72,50,70,72,64,71,62,75,69,80,84,67,61,56,69,76,80,69,86,81,68,62,74,59,71,71,76,68,59,76,81,90,83,80,60,77,73,84,91,80,85,79,77,73,82,61,71,83,79,85,67,85,94,96,90,87,65,81,76,89,92,89,87,84,63,73,90,65,86,81,86,86,65,90,99,97,87,73,67,79,81,93,101,98,101,90,73,87,86,68,87,97,94,85,64,93,105,96,92,82,67,74,82,86,91,102,94,88,77,83,86,76,97,89,84,83,69,90,101,96,86,73,64,86,83,88,94,100,84,91,74,85,91,87,95,93,84,77,83,91,96,79,71,84,73,83,85,91,93,98,95,95,79,85,91,92,99,91,87,88,83,92,96,80,72,85,73,83,84,89,93,98,96,95,83,85,92,94,100,90,89,89],
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
