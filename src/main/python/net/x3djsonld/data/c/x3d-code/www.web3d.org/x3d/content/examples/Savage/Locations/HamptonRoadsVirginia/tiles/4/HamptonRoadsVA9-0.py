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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA9-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.80249998029902,-77.99299999208,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[111,96,93,97,92,96,79,82,91,95,76,92,61,82,98,103,112,110,101,95,77,83,103,108,110,101,99,92,87,85,97,95,71,100,83,79,95,88,101,102,90,94,79,88,116,113,117,104,117,103,83,89,108,94,85,102,105,81,93,95,102,116,100,89,79,92,110,103,120,105,107,83,92,110,108,90,96,98,100,80,88,99,103,113,104,96,88,95,95,112,113,103,93,105,93,111,104,93,96,99,103,88,92,99,105,107,102,96,101,103,114,110,121,116,113,102,108,100,93,91,99,104,93,86,94,100,109,111,101,96,106,104,116,112,119,124,116,113,98,112,97,109,97,107,113,82,91,101,110,112,109,107,107,113,117,125,122,125,125,116,99,105,101,114,102,116,109,95,101,110,113,107,111,107,108,107,110,126,126,122,126,111,106,108,113,119,119,119,113,99,114,107,112,112,108,110,97,112,109,120,120,114,126,120,120,110,118,117,121,119,119,116,109,108,108,102,106,110,105,105,111,111,108,114,110,106,113,119,118,123,122,119,116,113,110,110,108,101,108,110,105,98,102,109,108,114,112,109,101,113,110,116,117,117,122,119,111,109,104,102,107,103,105,104,92,103,111,105,99,97,107,112,111,110,110,120,108,113,106,108,115,110,97,97,97,97,94,97,105,104,90,102,95,114,113,103,108,108,110,108,110,105,110,104,109,91,87,85,99,98,99,96,84,101,104,102,120,114,114,112,96,95,98,87,103,101,97,92,81,89,90,90,95,88,90,88,99,99,116,113,104,118,104,114,100,106,103,95,90,104,104,91,92,89,87,83,86,99,112,113,115,102,108,113,103,101,99,99,103,104,93,104,101,107,87,84,76,83,86,87,106,116,102,96,109,110,99,93,97,94,101,101,86,100,96,96,83,98,87,93,101,106,111,113,111,105,104,95,97,88,89,90,98,99,78,92,95,97,89,86,94,108,99,96,114,110,113,98,100,92,95,93,76,84,90,91,75,90,89,89,86,96,101,98,94,96,104,109,98,110,100,106,95,89,95,87,67,73,72,78,81,83,86,98,99,98,93,97,103,109,100,109,102,105,96,91,97,87,65,73,73,79,81,82],
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
