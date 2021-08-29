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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA3-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.36499999391961,-77.7429999860264,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[70,77,86,76,73,73,76,68,63,64,61,63,68,73,70,64,74,78,83,77,75,66,65,83,93,82,81,69,74,58,63,58,73,65,74,89,72,72,81,85,80,75,66,67,72,78,86,84,81,62,66,59,66,60,68,83,88,82,73,78,79,84,66,77,61,64,76,72,78,81,64,61,62,69,77,66,84,72,86,79,72,85,83,82,79,61,76,75,67,68,76,67,64,64,71,81,66,82,88,87,91,84,80,88,79,76,66,69,76,87,68,69,72,63,59,72,80,76,68,83,94,91,95,98,86,87,88,74,58,70,88,86,67,63,64,59,64,79,85,80,73,87,96,93,91,92,89,83,75,62,76,75,71,79,60,56,67,65,80,85,87,83,76,85,90,90,96,83,83,79,72,75,84,69,83,82,59,57,70,85,81,90,91,86,76,90,94,96,96,76,68,77,77,75,83,82,81,89,61,68,72,67,75,91,92,84,84,88,89,90,84,83,88,92,71,83,89,90,88,88,73,65,78,86,72,88,91,99,91,87,95,92,85,86,94,81,88,85,92,88,91,93,70,65,76,88,80,77,99,100,100,92,93,95,85,85,86,94,87,89,92,93,90,93,67,63,81,82,84,79,93,100,99,91,100,93,89,92,92,91,95,93,91,93,87,90,69,74,91,85,89,93,85,95,94,93,102,99,98,94,96,93,95,91,82,90,83,91,85,72,77,79,97,90,98,96,97,94,103,98,98,92,82,93,94,86,84,86,80,80,90,79,85,85,83,96,97,97,101,98,102,105,95,95,86,82,91,82,81,81,81,73,81,87,85,97,96,96,93,95,104,97,98,101,97,93,86,92,94,88,74,74,74,72,94,94,93,94,101,97,82,100,90,97,98,100,92,90,91,94,89,91,90,88,81,73,99,98,95,99,93,91,81,92,90,92,91,89,96,93,90,91,76,86,94,92,80,87,99,90,89,95,88,82,86,80,90,91,89,95,98,96,92,83,89,90,88,86,88,92,96,96,81,92,101,86,95,88,76,87,87,103,99,92,96,96,90,96,95,95,90,90,93,90,81,83,94,100,95,87,79,83,89,102,101,89,91,97,93,91,83,89,92,91,91,90,82,81,95,100,96,88,79,83,88,102,99,90,91,98,94,92,81,86,91,92],
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
