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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA6-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.083749987109314,-77.7429999860264,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[78,57,53,67,80,76,82,92,76,88,94,103,97,78,71,81,66,76,78,91,86,85,69,54,57,66,74,71,82,95,85,89,90,90,89,81,75,76,76,68,78,80,87,88,67,61,59,61,62,67,76,86,73,83,82,92,93,91,80,85,84,87,71,83,83,85,81,69,74,78,61,72,66,73,74,80,85,90,100,90,78,74,73,70,61,74,89,91,86,68,84,74,74,54,63,69,79,85,77,86,95,84,81,72,67,64,68,79,88,88,85,74,81,74,69,53,71,68,80,84,73,85,95,92,83,74,81,73,63,75,71,80,64,72,71,68,75,52,62,60,72,78,74,87,91,94,87,87,81,67,73,67,74,77,81,53,67,56,55,60,59,63,69,73,73,79,92,86,77,78,80,78,62,61,65,68,74,64,62,78,75,70,51,58,62,80,72,75,80,76,66,67,75,68,69,61,71,79,82,71,74,84,78,78,70,63,49,60,64,71,78,75,73,64,70,74,67,59,66,73,85,81,80,86,81,71,77,63,55,52,51,67,63,69,82,56,63,68,64,57,66,74,90,83,87,84,82,82,85,70,65,54,57,53,49,62,70,62,57,62,62,58,57,63,89,90,80,78,73,73,72,70,55,54,51,73,65,68,61,64,50,60,64,58,54,64,93,87,76,82,77,68,63,61,57,62,61,75,72,64,54,58,60,48,62,51,57,67,82,81,64,67,71,63,70,56,70,65,68,78,81,73,72,68,62,49,62,54,58,59,80,78,77,69,66,59,60,65,76,75,75,72,72,80,71,58,52,50,63,52,49,54,85,88,85,75,73,63,63,77,80,79,75,74,72,82,64,57,64,51,63,50,56,49,91,83,80,73,64,72,71,76,83,81,80,76,64,80,66,60,62,58,51,56,62,65,79,74,68,73,73,80,87,81,82,76,73,64,66,59,63,71,65,73,61,60,65,61,67,62,72,76,73,82,71,88,72,67,63,68,76,61,61,73,76,74,68,66,55,61,81,87,80,89,87,70,78,76,70,75,75,69,80,58,59,70,85,74,62,69,65,63,81,88,84,89,87,70,78,76,66,76,75,69,80,59,59,72,84,73,62,71,65,64],
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
