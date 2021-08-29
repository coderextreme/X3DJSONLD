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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA1-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.55249999845981,-77.7429999860264,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[82,75,73,73,78,95,80,78,68,65,66,56,52,52,72,77,84,72,62,70,63,66,87,80,89,75,89,85,78,73,79,65,67,77,52,70,88,90,78,65,70,81,80,78,83,93,86,77,101,97,86,84,87,81,73,59,60,79,85,79,63,68,74,88,86,85,93,96,91,86,96,101,85,81,78,81,60,68,69,88,83,67,78,70,85,87,89,76,98,90,98,96,100,99,76,76,65,71,77,63,76,84,74,83,77,83,86,77,79,86,97,90,101,96,90,86,81,69,65,78,74,69,85,83,73,84,83,90,83,80,77,75,92,90,97,88,96,77,71,87,75,83,82,69,76,88,67,88,90,87,78,86,77,85,88,83,82,90,97,84,80,74,83,79,82,78,91,94,84,93,95,88,86,88,89,84,92,88,89,80,84,78,83,84,86,80,94,85,92,81,88,93,95,94,87,87,77,77,92,99,99,86,78,87,81,91,94,98,96,96,94,94,92,97,96,89,84,86,83,89,92,97,105,98,83,70,84,85,88,106,100,105,105,93,100,93,87,94,92,87,80,79,92,91,96,92,85,73,68,87,98,97,103,106,107,98,102,95,104,97,90,86,81,82,94,90,92,96,76,87,67,82,95,91,101,103,100,97,105,102,92,90,84,84,87,91,93,82,85,85,80,79,76,85,87,91,92,100,92,103,106,98,95,93,92,97,95,92,86,76,75,85,70,69,77,83,81,91,95,98,84,96,96,99,92,97,96,86,88,89,82,86,77,71,77,64,82,84,80,93,88,85,83,97,95,91,85,88,90,83,87,88,79,82,81,79,67,77,82,89,82,89,84,77,87,90,94,91,81,75,73,77,80,76,83,71,72,76,63,71,81,74,81,86,82,81,79,87,95,93,89,84,84,87,75,81,79,81,69,59,60,74,92,70,83,68,76,79,79,95,101,93,94,96,95,87,84,92,77,86,85,72,57,73,77,86,66,73,84,81,84,95,93,86,94,96,104,92,92,95,89,90,75,69,63,64,66,81,71,76,83,83,83,92,72,86,95,99,92,95,99,92,93,84,80,65,70,75,70,57,56,60,77,72,79,80,81,82,85,91,83,89,97,96,93,83,81,65,69,74,68,60,57,62,79,70,79,79,81,81,84,90,82,87,99,96],
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
