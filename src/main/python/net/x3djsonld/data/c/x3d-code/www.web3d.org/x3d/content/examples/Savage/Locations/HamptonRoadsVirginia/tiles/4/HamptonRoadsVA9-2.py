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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA9-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.80249998029902,-77.7429999860264,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[89,80,89,71,76,89,72,83,68,84,92,87,92,80,70,75,73,79,67,63,58,63,90,93,81,69,85,91,81,81,78,80,91,92,87,84,80,72,73,80,67,65,63,56,82,93,82,88,93,97,88,87,81,84,87,91,83,81,78,68,72,82,63,66,53,51,87,95,88,86,89,86,87,83,78,83,85,92,88,78,86,73,72,85,71,58,52,58,95,76,84,81,77,81,83,71,70,79,88,91,87,86,84,74,79,85,64,46,67,67,89,75,81,80,78,72,79,77,76,83,84,88,88,83,76,69,80,82,67,51,68,66,85,76,68,66,77,69,76,66,80,81,86,94,89,89,79,75,75,70,62,53,59,65,85,78,74,73,77,64,61,59,69,74,91,89,90,82,84,80,79,70,59,52,64,71,74,69,86,89,74,74,74,64,61,83,91,89,86,66,88,84,75,57,66,51,67,70,62,70,78,80,71,83,86,66,65,84,92,82,74,63,77,74,66,59,50,57,64,67,66,63,70,76,65,78,83,72,56,80,82,82,81,62,79,71,54,53,61,68,63,67,68,64,61,64,61,66,68,74,59,78,73,79,68,58,69,61,54,65,73,76,68,66,73,60,72,72,71,62,66,74,60,65,56,74,53,58,54,64,60,59,74,75,69,66,83,85,80,80,71,62,62,63,62,56,65,52,71,68,55,65,68,75,77,72,65,70,89,84,91,73,70,69,68,63,55,63,75,78,82,82,71,80,76,75,73,73,70,67,89,93,96,79,75,79,64,57,65,71,79,92,82,81,86,85,74,66,67,71,74,73,100,88,82,79,68,72,73,57,67,86,86,82,74,84,83,67,61,69,63,64,69,65,99,81,78,67,70,68,54,73,76,89,82,75,75,80,82,80,74,65,53,54,58,56,95,91,82,66,62,62,68,69,86,88,74,71,72,80,78,81,78,63,73,64,58,51,86,76,89,68,68,55,63,89,92,85,74,64,72,80,85,82,73,78,74,74,68,68,73,81,76,69,62,62,78,87,91,75,80,61,80,79,83,76,74,71,70,69,68,61,71,79,74,70,64,62,79,86,92,74,80,60,78,78,83,75,75,71,71,68,67,60],
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
