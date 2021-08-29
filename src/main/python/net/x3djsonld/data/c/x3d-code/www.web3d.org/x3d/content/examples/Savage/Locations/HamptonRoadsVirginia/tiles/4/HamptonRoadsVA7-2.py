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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA7-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.989999984839216,-77.7429999860264,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[81,88,84,89,87,70,78,76,66,76,75,69,80,59,59,72,84,73,62,71,65,64,87,86,75,92,90,73,78,75,81,80,73,72,66,70,67,74,83,77,75,78,75,77,92,86,78,86,90,81,85,87,83,78,85,63,71,67,67,71,88,71,77,87,83,78,93,82,77,91,90,82,90,91,85,80,69,68,76,71,75,86,90,75,84,75,82,84,92,89,94,87,96,90,95,87,79,83,79,67,76,82,80,100,96,84,86,81,69,71,92,95,91,95,102,90,91,88,77,76,68,73,73,86,83,94,85,92,78,76,68,70,103,94,93,101,93,95,91,88,77,72,74,78,89,87,81,83,77,86,90,89,78,71,103,103,96,96,87,93,85,88,89,88,78,93,89,88,82,76,80,93,95,90,79,78,107,104,104,93,97,84,86,89,93,86,88,85,81,78,81,75,70,85,92,83,82,79,98,100,101,100,97,87,84,90,93,91,86,92,77,71,71,71,69,75,82,82,79,74,92,98,91,98,98,87,81,89,79,76,76,89,76,74,59,74,74,81,76,83,80,76,90,95,100,94,93,86,86,84,71,79,72,75,72,75,77,61,62,66,84,87,77,71,91,89,93,88,93,94,92,94,86,89,80,84,81,84,82,75,65,66,84,90,70,77,77,101,93,81,91,90,101,81,92,88,81,81,85,78,89,74,67,62,78,83,77,66,67,84,86,82,85,93,101,89,85,86,90,88,90,88,86,89,68,57,73,75,73,63,82,73,75,70,83,88,100,85,90,99,87,84,88,90,81,75,71,65,63,71,69,57,71,78,70,75,90,76,93,95,93,89,84,74,78,95,81,70,73,73,55,68,74,65,87,87,73,67,86,78,85,89,95,90,84,77,71,75,79,68,55,57,54,66,76,77,90,80,91,77,65,75,84,87,88,95,84,78,72,67,67,72,74,73,62,71,69,67,97,89,81,72,66,71,76,86,82,81,80,81,80,68,78,73,81,82,60,69,58,59,93,87,89,80,71,69,72,78,92,86,84,80,77,89,86,75,89,78,63,64,69,66,92,92,78,76,73,56,75,74,90,87,93,76,79,85,92,93,88,75,67,76,81,85,92,93,77,75,76,56,76,75,89,88,92,76,80,86,94,94,89,80,68,77,79,84],
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
