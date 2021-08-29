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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA10-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.70874997802892,-77.8679999890532,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[82,81,87,78,95,89,100,98,91,92,100,100,94,88,84,87,99,99,82,69,70,71,76,73,80,85,76,98,94,102,95,89,96,97,102,104,92,104,98,82,73,66,62,61,61,62,65,80,82,90,93,91,103,95,89,95,95,97,102,106,96,88,76,78,63,62,71,64,73,67,89,83,79,95,103,102,96,84,90,99,99,94,93,91,72,89,72,73,76,70,64,75,74,80,86,95,95,101,93,92,75,92,91,92,99,91,77,83,77,74,86,82,62,63,77,86,92,96,97,104,100,98,95,78,77,86,80,92,72,73,67,66,71,75,68,73,82,87,91,88,99,98,101,100,90,88,88,75,67,80,67,72,67,69,62,72,62,62,71,66,94,94,98,95,93,81,85,86,79,76,71,65,65,83,84,85,69,62,62,80,62,82,81,99,105,97,103,100,94,93,80,90,81,89,80,92,86,85,81,62,62,76,73,76,79,95,100,97,95,99,101,87,91,99,93,87,84,97,92,84,68,64,66,80,86,81,83,85,96,89,88,93,96,93,94,105,102,96,98,97,83,90,79,62,63,79,80,85,97,102,86,82,83,85,101,98,102,100,102,82,100,100,97,91,75,62,74,65,68,76,89,87,79,77,74,73,93,95,91,98,105,104,95,97,94,102,62,62,67,62,67,81,78,93,75,83,71,68,86,93,102,104,110,105,95,95,95,98,79,67,62,70,79,82,70,86,63,82,72,67,72,68,112,111,97,97,98,95,97,98,79,74,63,67,79,81,75,69,64,74,84,65,84,85,91,88,100,103,99,92,90,85,62,64,62,62,62,66,76,62,71,68,82,80,60,66,101,82,71,88,103,101,92,87,62,62,62,62,62,62,79,63,62,62,69,78,62,65,76,62,58,84,101,99,95,92,62,62,62,62,62,62,62,62,62,62,62,66,57,41,41,48,56,73,88,93,87,87,62,69,68,68,62,75,62,62,62,62,62,44,48,45,43,43,47,71,75,89,77,89,75,67,80,72,73,68,74,62,68,62,62,43,47,43,50,43,43,43,76,89,67,75,77,77,81,81,87,80,73,70,76,62,63,67,50,43,43,43,43,47,43,53,69,78,76,77,82,83,88,81,72,72,75,62,69,67,51,43,43,44,43,48,43,52,68,74],
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
