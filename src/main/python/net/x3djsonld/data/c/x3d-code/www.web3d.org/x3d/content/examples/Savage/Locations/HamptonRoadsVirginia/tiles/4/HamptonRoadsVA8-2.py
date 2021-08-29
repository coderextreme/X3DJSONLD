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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA8-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.89624998256912,-77.7429999860264,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[92,93,77,75,76,56,76,75,89,88,92,76,80,86,94,94,89,80,68,77,79,84,89,92,84,82,71,61,77,74,83,83,87,89,83,92,101,98,94,71,79,79,84,79,84,96,88,94,82,61,64,74,68,88,95,93,92,93,95,97,87,75,75,76,74,80,70,88,93,88,75,62,53,68,78,83,81,81,89,91,90,91,87,86,79,76,68,66,79,86,83,86,80,81,66,61,65,75,79,82,78,91,90,75,79,87,89,72,73,69,95,89,85,95,81,79,85,59,66,71,74,83,77,80,89,77,76,85,76,67,65,66,80,79,77,79,81,72,83,68,60,71,80,84,70,85,82,76,76,83,71,68,60,59,71,69,73,87,79,77,71,67,61,69,68,73,71,80,77,76,70,83,70,66,67,64,56,62,77,75,62,80,74,82,68,63,56,78,93,92,78,69,71,78,69,65,62,59,60,58,70,75,63,72,67,79,76,57,59,80,96,71,74,64,64,66,71,71,72,69,58,59,57,61,58,67,77,77,80,71,54,60,85,65,63,62,55,60,63,71,70,70,64,56,53,49,62,51,64,58,77,78,48,45,62,61,52,55,56,55,52,65,72,67,62,47,64,53,52,53,47,48,67,74,60,45,52,45,45,44,57,52,44,65,60,67,59,72,66,59,44,48,45,58,53,68,61,44,52,54,66,61,49,53,50,55,53,53,71,76,74,62,75,57,63,46,50,52,61,44,63,70,64,57,52,52,45,46,46,53,68,68,74,76,60,55,46,55,44,38,44,53,67,83,69,55,57,68,55,61,60,59,85,82,75,66,63,55,52,52,80,71,53,52,68,74,70,60,58,57,52,56,68,61,86,82,64,69,53,66,65,63,67,67,64,54,66,77,66,59,54,53,66,70,69,68,85,79,76,73,61,79,76,67,65,74,65,61,69,74,61,65,55,52,69,71,64,69,83,71,84,81,61,77,75,61,63,76,75,71,82,74,69,53,63,72,68,72,65,67,77,82,85,75,66,82,80,69,71,80,77,82,87,62,63,62,67,85,74,71,59,67,88,80,88,72,73,87,70,80,67,82,91,87,93,78,70,73,74,80,68,65,57,64,89,80,89,71,76,89,72,83,68,84,92,87,92,80,70,75,73,79,67,63,58,63],
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
