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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA2-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.45874999618971,-77.6179999829996,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[96,84,89,70,76,68,73,63,58,55,64,75,65,52,53,48,48,59,62,54,56,36,95,93,87,81,80,81,82,67,72,68,65,77,70,46,56,69,71,66,61,58,54,52,96,83,82,92,89,92,84,74,81,75,81,67,60,56,62,66,71,62,67,58,55,55,92,78,86,93,98,87,82,82,86,84,77,67,66,57,70,74,72,76,64,62,57,56,85,78,86,96,93,80,77,75,72,64,61,56,64,66,71,77,69,61,62,60,57,57,73,84,81,84,91,83,83,82,87,80,75,83,69,76,76,71,69,67,72,65,50,52,69,82,66,84,89,90,87,98,102,92,92,85,83,75,66,62,74,69,65,61,54,51,71,61,76,84,90,83,94,109,101,101,96,80,78,67,69,64,72,68,63,62,58,51,80,64,68,78,82,82,87,98,97,92,97,79,77,69,72,61,50,61,52,53,54,56,74,67,58,79,74,80,76,91,92,93,88,79,71,72,78,73,68,46,67,64,58,61,61,48,60,68,73,67,71,79,78,89,94,87,84,73,73,64,56,66,67,72,66,64,48,48,68,48,53,63,75,73,79,89,94,86,78,70,67,73,69,68,68,60,66,66,64,68,65,53,58,79,68,65,83,98,103,82,91,80,82,75,69,69,69,65,60,61,75,72,71,61,48,72,74,72,87,95,94,97,85,88,84,79,71,66,74,70,60,62,76,76,61,59,48,69,64,65,75,95,95,91,86,92,76,76,71,66,65,70,61,60,84,68,64,69,57,48,48,64,82,86,83,92,95,81,71,73,71,67,75,70,64,64,91,82,80,69,64,58,48,48,78,64,85,92,88,88,76,70,72,65,67,65,71,68,74,86,76,66,67,48,59,48,60,48,79,79,85,82,75,73,70,70,68,70,69,70,74,63,70,66,66,48,72,56,48,56,48,77,74,85,78,87,75,69,70,68,65,63,67,68,59,56,65,65,79,61,73,59,48,68,69,68,69,65,68,73,73,69,63,63,67,61,65,63,69,60,76,72,70,72,48,58,48,48,48,58,48,74,69,70,58,51,66,60,65,62,69,60,76,74,68,71,48,48,48,48,48,55,48,74,70,71,61,53],
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
