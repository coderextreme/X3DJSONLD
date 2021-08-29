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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA2-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.45874999618971,-77.7429999860264,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[93,83,81,65,69,74,68,60,57,62,79,70,79,79,81,81,84,90,82,87,99,96,103,95,77,64,77,77,74,72,60,53,73,65,85,75,73,75,92,91,72,94,96,95,106,94,80,73,76,80,74,75,72,52,64,67,67,64,79,81,88,76,81,91,98,96,96,91,75,73,72,78,73,78,75,61,53,48,48,75,88,79,83,73,78,88,87,92,91,80,70,68,72,66,57,53,79,68,61,48,48,72,74,74,77,73,81,84,86,85,95,75,67,71,79,51,52,53,50,72,67,50,48,48,66,68,57,76,79,84,77,73,89,79,62,69,73,66,65,64,54,79,67,50,61,62,56,56,75,77,79,86,80,69,72,64,53,57,67,59,71,61,63,56,59,64,59,50,48,54,65,68,87,86,78,71,66,62,53,65,69,70,73,62,64,51,52,62,64,56,48,58,70,76,80,78,79,80,54,55,56,83,79,80,80,65,71,62,69,63,73,64,48,54,59,72,81,79,68,74,54,55,52,73,86,79,84,75,82,60,74,74,75,66,49,48,48,65,66,64,66,61,54,56,55,57,65,77,81,77,79,62,70,80,83,70,68,48,48,69,48,58,48,48,62,57,51,69,72,81,85,85,84,73,73,85,77,69,67,63,48,48,61,66,65,64,68,68,53,71,84,83,95,89,85,78,74,72,74,73,66,53,48,64,75,74,74,75,59,65,59,69,82,91,85,73,77,79,71,71,67,67,64,57,48,56,62,72,78,76,52,56,67,78,86,80,74,67,73,77,80,71,60,69,72,59,56,63,69,80,83,84,66,67,68,74,88,85,80,69,68,76,72,70,69,68,65,48,69,69,65,84,82,91,57,67,74,78,94,90,90,90,68,62,59,58,66,55,59,58,65,74,73,83,73,74,59,59,79,79,85,85,88,83,83,80,70,76,59,57,66,61,71,67,86,85,72,74,70,75,81,84,80,83,70,91,78,76,58,57,71,68,72,68,71,82,89,89,75,67,69,80,88,76,72,74,79,70,62,66,60,62,68,73,71,60,73,80,86,75,78,67,70,77,86,76,73,73,76,68,63,64,61,63,68,73,70,64,74,78,83,77,75,66],
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
