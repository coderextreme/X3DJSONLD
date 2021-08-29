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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA11-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.61499997575882,-77.99299999208,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[70,97,96,91,96,78,77,72,84,62,62,62,62,62,79,81,72,71,75,79,83,76,83,100,105,90,84,69,63,74,63,67,77,69,62,62,89,76,85,82,72,84,82,74,98,86,96,85,83,70,79,62,75,89,84,73,67,62,89,77,85,82,78,86,90,79,97,103,88,79,76,68,79,76,72,85,88,83,90,73,85,89,92,80,85,98,82,75,90,100,97,94,91,73,83,84,84,98,89,83,72,83,91,92,101,95,76,92,89,79,80,96,104,95,82,73,80,85,103,102,84,86,75,83,102,105,107,87,84,94,84,84,86,103,109,100,79,73,82,88,102,106,93,79,70,76,92,108,111,106,93,101,87,80,99,105,102,95,99,74,75,94,105,104,103,84,62,88,84,105,104,102,106,98,91,93,106,104,104,96,77,79,88,79,107,103,109,91,66,95,90,92,117,112,97,106,94,97,101,97,92,94,82,93,89,93,96,106,100,87,84,105,95,101,120,109,108,100,96,101,113,104,92,89,75,82,96,88,100,114,93,89,72,105,112,111,112,113,111,107,100,93,110,106,94,76,82,82,102,90,105,116,103,94,95,112,116,122,117,115,114,111,99,102,97,99,83,80,99,103,105,98,107,109,103,88,97,119,120,122,118,115,108,98,108,108,92,96,94,92,100,99,104,102,113,100,111,98,110,117,118,118,124,114,113,109,108,103,114,110,91,106,104,108,108,108,105,99,103,109,114,115,119,114,122,125,114,118,117,111,114,99,98,100,101,102,100,108,104,98,119,101,106,114,116,114,116,115,125,114,115,109,108,113,115,108,98,112,98,101,105,89,104,93,106,111,112,109,112,123,114,106,106,103,113,119,112,100,90,100,99,96,96,80,103,93,108,107,113,107,106,112,108,98,96,93,111,112,109,106,101,89,95,89,74,96,82,97,106,107,102,106,110,108,114,108,93,91,109,90,102,110,104,87,79,85,75,94,100,110,102,94,91,104,105,109,102,100,98,91,106,89,98,115,103,95,89,78,84,97,99,94,102,87,92,99,107,104,100,99,90,87,105,89,98,117,102,95,91,79,84,96,98,93,102,84,91,99,107,104,100,99,93,87],
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
