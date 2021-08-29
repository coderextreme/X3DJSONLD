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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA4-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.27124999164951,-77.8679999890532,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[124,112,105,101,104,96,89,89,104,111,107,114,95,117,104,98,111,103,87,103,98,91,125,115,117,114,109,113,108,96,101,92,91,89,96,98,108,91,90,98,87,94,94,83,128,124,122,109,107,113,116,105,111,90,96,100,86,101,97,97,84,91,99,85,98,91,121,121,110,113,111,120,115,108,118,109,101,105,96,87,79,90,84,79,81,78,88,95,118,130,117,125,119,123,117,115,114,107,106,106,97,102,95,101,95,102,94,79,86,78,119,119,117,113,110,121,112,107,102,112,108,108,98,100,99,109,95,103,93,92,94,102,117,126,115,104,113,115,114,111,108,95,101,109,112,113,101,113,106,103,104,102,98,97,107,122,116,112,107,114,117,115,108,103,91,107,110,99,101,108,102,97,106,109,101,103,107,107,111,108,94,105,114,116,105,102,94,97,104,89,102,106,103,88,98,99,102,103,111,90,100,115,103,97,93,114,106,96,97,83,91,94,96,99,102,89,93,92,103,91,107,105,86,103,103,85,97,108,99,91,95,92,90,87,94,91,92,85,95,95,101,91,119,103,108,93,107,102,84,91,91,77,80,83,75,81,85,83,79,85,93,79,81,85,114,108,107,96,84,89,80,78,101,100,90,95,91,86,76,77,71,84,66,69,69,68,110,111,116,101,101,96,107,98,95,86,85,98,101,97,90,91,87,94,89,73,74,64,103,111,112,109,112,96,104,100,97,96,89,112,102,106,103,103,101,93,73,83,87,86,109,106,97,114,111,104,102,111,104,97,102,114,98,109,107,106,93,79,91,94,84,95,102,103,95,110,113,112,111,119,113,110,110,116,110,106,98,111,86,82,95,102,97,93,81,90,89,107,98,105,104,114,117,116,118,114,109,108,99,99,93,82,103,98,102,106,75,73,92,109,100,107,97,102,110,112,117,105,107,94,105,98,94,102,95,110,111,111,82,72,90,100,99,115,111,103,104,110,121,114,101,111,106,106,93,102,91,106,114,104,108,85,69,86,94,109,98,86,101,110,113,114,111,113,114,106,98,108,98,106,113,111,107,93,67,85,96,111,95,90,100,109,110,116,113,112,113,104,97,107,99,106,113,110],
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
