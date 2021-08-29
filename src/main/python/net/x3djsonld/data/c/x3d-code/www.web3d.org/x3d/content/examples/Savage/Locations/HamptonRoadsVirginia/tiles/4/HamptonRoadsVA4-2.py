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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA4-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.27124999164951,-77.7429999860264,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[91,90,82,81,95,100,96,88,79,83,88,102,99,90,91,98,94,92,81,86,91,92,83,93,75,79,87,92,81,99,88,82,87,95,101,95,90,88,84,87,79,87,86,86,91,89,83,83,85,93,81,89,94,77,86,91,92,100,85,77,73,69,69,77,78,86,95,75,70,68,71,82,82,79,93,75,83,73,95,94,90,90,86,84,70,68,70,74,78,80,87,83,73,78,65,81,73,82,85,69,89,87,92,89,90,88,87,75,76,67,102,93,87,88,78,84,73,64,66,73,71,75,84,79,91,89,87,89,87,86,59,61,97,100,87,83,84,87,84,86,69,64,77,58,69,68,88,78,84,88,83,80,74,62,103,103,86,92,87,99,92,86,80,84,77,73,61,70,73,82,84,83,77,77,76,75,103,104,87,92,93,92,87,87,83,82,85,76,74,67,76,82,78,79,82,69,69,73,91,98,91,90,87,88,89,75,72,72,73,70,75,84,75,82,79,64,71,74,66,60,91,78,77,97,85,84,70,69,72,58,65,70,60,74,77,65,60,59,64,63,61,63,85,76,80,72,75,80,65,61,63,71,69,60,74,62,61,60,69,60,64,53,67,68,68,71,73,65,68,81,71,78,77,82,85,82,79,80,70,65,75,64,59,68,81,74,64,83,74,72,77,83,77,80,86,83,84,80,73,64,60,65,58,66,75,78,80,77,86,92,90,75,89,89,83,91,87,90,81,73,67,78,85,75,60,72,72,86,81,78,95,99,86,76,86,96,92,85,83,73,79,68,65,86,82,70,79,75,82,79,80,74,93,100,97,90,92,96,96,91,76,70,82,84,77,80,79,74,89,84,79,80,66,70,106,105,104,93,90,87,85,84,70,79,84,87,76,68,72,76,81,84,85,80,73,70,111,99,90,95,89,82,79,78,77,82,89,83,76,87,63,79,83,97,80,72,72,74,104,94,104,101,93,84,85,77,88,88,93,77,71,85,80,81,85,85,80,87,75,67,111,111,103,98,82,89,82,82,87,90,84,85,73,91,87,82,89,95,78,82,72,75,110,112,104,98,82,88,83,83,88,88,84,87,73,94,88,83,89,92,77,83,72,75],
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
