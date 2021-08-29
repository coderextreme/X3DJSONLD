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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA0-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.64625000072991,-77.99299999208,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[82,81,99,80,97,87,108,97,112,107,88,90,85,90,82,109,103,102,93,91,80,93,70,88,99,92,98,72,100,91,110,109,106,92,74,88,82,105,91,94,89,86,71,86,79,76,103,84,90,75,102,88,101,96,89,100,98,81,74,94,83,84,73,75,76,82,85,86,71,73,76,70,87,86,87,91,86,89,98,70,72,93,74,71,79,89,84,86,85,91,79,76,80,67,77,69,70,84,76,70,73,87,81,89,83,78,86,94,100,97,93,100,88,85,79,89,84,79,81,71,65,64,69,77,68,74,76,77,83,94,90,88,91,106,96,88,83,91,93,86,100,85,73,73,84,79,86,84,73,72,86,104,82,87,103,95,91,97,96,87,93,98,99,72,84,83,87,76,98,89,90,66,95,101,80,80,100,90,94,88,87,92,101,102,99,89,98,92,95,79,100,79,75,60,94,92,77,67,100,100,105,82,96,98,100,91,110,89,105,99,93,93,102,89,74,71,88,82,71,72,96,109,110,94,101,104,104,99,101,96,97,97,97,99,106,90,80,71,78,72,64,65,104,109,110,101,105,101,110,104,106,108,101,105,100,96,105,86,74,69,72,70,81,81,97,106,103,103,104,101,104,110,111,99,109,103,100,99,110,94,89,87,80,84,92,90,93,104,108,96,100,90,99,102,84,98,96,99,94,102,110,93,87,79,88,93,84,80,91,100,106,93,96,89,100,100,96,98,99,92,102,95,105,114,101,94,106,93,82,76,98,94,92,89,88,89,93,98,88,99,100,104,88,99,99,92,99,103,101,97,89,90,104,92,88,92,95,85,85,96,85,87,93,99,84,97,92,94,92,98,104,91,94,102,103,104,95,95,85,84,86,80,73,95,97,96,85,99,87,91,98,97,99,93,96,94,92,104,92,88,72,83,75,70,68,75,95,82,91,84,91,75,92,87,97,95,87,77,94,94,87,74,67,70,74,73,66,83,79,88,78,78,93,72,78,89,98,89,79,66,86,76,78,84,75,73,79,79,72,71,76,84,79,78,89,71,77,87,79,87,71,72,85,73,76,83,75,75,82,77,74,72,75,83,78,80,90,71,76,94,75,86,70,69],
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
