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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA12-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.52124997348872,-77.99299999208,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[105,89,98,117,102,95,91,79,84,96,98,93,102,84,91,99,107,104,100,99,93,87,99,90,106,103,102,105,103,88,87,89,88,81,93,87,81,98,103,91,96,110,92,86,92,87,108,96,92,107,107,94,100,77,78,78,85,89,82,84,101,93,109,102,94,85,92,90,101,96,92,96,103,100,106,87,72,72,82,77,68,83,96,94,104,94,103,94,80,82,80,90,84,91,92,91,102,90,89,75,66,70,83,93,100,101,85,93,96,92,77,70,79,87,79,93,90,84,87,91,93,89,72,73,86,97,95,96,88,87,106,102,83,81,72,94,75,89,75,76,73,89,95,90,86,65,76,86,99,93,81,92,96,94,106,90,79,85,77,77,74,83,68,76,82,81,82,67,76,86,97,95,78,94,103,100,101,92,82,68,67,75,66,66,61,69,72,75,79,74,90,95,98,93,83,89,88,84,86,85,81,88,88,96,76,71,74,69,67,72,76,72,72,88,97,89,98,88,91,87,73,74,83,89,82,96,85,86,90,85,73,56,71,68,90,92,91,87,94,90,69,73,67,74,75,74,79,88,81,88,80,81,81,66,66,71,96,81,82,74,85,92,71,70,87,83,77,84,70,74,82,81,80,81,87,68,55,67,82,73,75,73,83,93,81,73,96,90,77,94,71,69,80,74,81,81,96,76,71,71,78,66,64,80,79,88,81,80,105,92,84,93,69,65,61,62,63,64,70,76,68,55,66,62,71,87,88,85,81,78,98,91,94,87,78,67,67,60,79,60,66,74,76,56,61,59,67,78,83,92,92,81,91,99,100,89,72,78,72,77,84,72,69,65,68,67,61,61,76,86,86,100,88,87,111,113,87,80,75,87,81,75,87,81,73,60,60,62,56,73,81,85,82,83,86,79,107,109,100,84,89,82,89,80,88,84,76,71,73,63,52,67,75,76,76,77,92,89,99,106,100,90,96,85,80,85,75,77,83,79,79,70,55,67,70,63,72,81,88,90,100,88,87,93,92,93,82,83,74,76,71,75,68,80,66,67,68,72,75,77,84,82,102,90,85,88,96,89,87,71,74,67,63,76,66,73,66,67,65,78,83,84,80,77,100,92,83,89,95,89,86,73,74,68,62,75,66,71,64,66,66,77,86,83,80,76],
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
