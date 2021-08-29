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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA10-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.70874997802892,-77.99299999208,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[86,98,99,98,93,97,103,109,100,109,102,105,96,91,97,87,65,73,73,79,81,82,90,101,107,97,83,98,95,95,102,107,96,101,101,91,98,89,83,76,79,69,79,76,97,99,98,90,77,92,96,99,110,108,99,97,100,91,97,97,96,88,78,78,64,61,90,96,88,91,75,83,81,91,94,97,110,90,94,92,94,101,89,84,84,80,74,71,86,92,94,85,75,93,93,83,85,100,93,92,81,75,98,100,100,93,91,92,87,76,90,99,84,81,77,85,87,91,82,98,89,88,77,75,73,90,101,91,87,82,92,86,89,94,75,82,88,75,84,97,83,91,93,93,72,75,74,91,99,95,85,70,70,71,90,84,80,65,80,68,89,94,77,94,95,86,76,82,81,85,92,95,83,81,62,62,84,87,77,62,75,66,88,84,81,88,92,76,77,72,92,82,97,91,93,79,79,69,79,88,83,69,75,76,86,82,80,86,85,81,74,64,74,84,96,82,96,77,73,81,81,88,66,62,80,63,70,63,85,95,89,80,77,62,69,80,88,84,92,83,78,68,69,87,85,74,62,63,88,86,87,86,87,79,64,62,62,84,86,75,72,71,85,79,84,90,87,78,66,65,86,83,77,87,88,83,75,62,69,80,90,87,78,64,75,75,75,79,94,82,83,62,72,62,77,82,80,82,77,68,63,80,84,82,82,72,62,62,62,86,90,86,78,62,69,76,74,70,66,86,88,83,67,64,79,62,84,72,74,79,62,62,73,62,62,62,62,62,67,62,78,71,81,90,74,62,73,62,62,66,65,79,62,62,62,62,62,62,62,62,62,62,62,62,62,63,78,62,68,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,73,69,62,62,62,62,62,62,74,62,62,72,82,84,83,62,62,62,62,62,62,62,62,62,62,70,62,62,62,62,62,66,75,90,92,80,91,75,62,62,62,62,62,62,62,62,63,71,67,72,62,62,67,83,91,94,97,86,81,87,81,79,72,62,62,62,66,75,81,78,75,70,70,75,70,100,94,93,96,78,79,75,85,62,62,62,62,62,76,81,75,75,77,79,82,77,70,97,96,91,96,78,77,72,84,62,62,62,62,62,79,81,72,71,75,79,83,76],
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
