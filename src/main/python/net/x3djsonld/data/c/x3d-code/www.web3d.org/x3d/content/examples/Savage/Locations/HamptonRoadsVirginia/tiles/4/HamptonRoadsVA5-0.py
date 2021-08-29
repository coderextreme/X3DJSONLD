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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA5-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.17749998937941,-77.99299999208,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[115,113,120,123,113,89,126,114,115,123,118,116,118,106,107,82,94,105,114,102,110,107,111,119,118,122,113,86,114,111,108,112,117,119,121,113,111,88,99,108,107,104,103,111,108,110,110,114,111,94,118,104,103,111,118,113,104,109,104,100,87,107,115,115,105,90,92,122,127,121,121,98,95,107,121,123,111,125,110,91,89,86,99,98,111,105,103,96,94,108,113,117,121,102,97,110,112,111,102,116,113,106,96,98,85,92,107,101,91,92,71,103,112,109,102,113,108,80,107,110,112,117,116,106,99,79,74,91,96,101,88,89,88,105,118,119,108,119,109,104,89,107,101,111,113,114,108,106,102,77,94,89,85,95,84,76,101,102,110,108,111,106,96,79,101,113,110,104,125,110,95,78,76,81,81,81,104,89,80,101,115,97,88,103,112,81,82,108,96,109,124,109,96,94,79,73,66,70,119,112,98,83,105,111,105,78,93,89,70,101,83,96,118,118,95,102,94,91,93,94,109,104,104,82,100,116,116,104,83,72,67,84,83,100,106,104,114,94,91,100,104,103,84,81,86,73,76,104,104,104,97,101,101,85,81,104,97,106,94,99,80,79,102,98,108,111,107,111,81,90,86,82,81,105,86,102,70,94,105,92,84,81,63,62,77,78,119,115,114,107,85,76,77,87,84,74,78,89,84,73,87,75,74,84,85,89,100,100,114,108,92,91,81,87,95,97,86,101,106,85,80,70,83,89,100,97,100,97,98,92,106,106,78,104,96,93,115,106,93,102,94,80,95,93,88,112,107,113,102,88,71,94,103,88,68,102,104,80,112,101,108,97,78,92,95,87,81,102,105,112,96,80,90,89,98,87,86,106,105,107,122,111,105,88,88,106,103,91,100,109,109,97,102,105,93,92,84,85,101,117,104,132,121,116,106,91,101,109,75,106,102,119,108,106,102,111,96,96,95,88,111,117,112,131,112,112,101,86,102,94,98,105,103,110,105,99,103,111,108,99,104,87,110,122,124,117,113,97,88,104,105,92,97,103,119,107,102,112,98,113,114,107,125,100,115,130,130,119,111,110,108,107,107,94,101,110,116,103,114,108,108,110,112,112,125,103,114,130,131,114,113,111,107,108,107,97,100,112,117,103,115,110,109,112,112,112],
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
