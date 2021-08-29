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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA7-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.989999984839216,-77.8679999890532,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[120,113,122,112,102,106,98,102,96,95,92,93,93,84,86,88,84,75,61,81,74,81,111,108,112,107,105,97,98,107,104,101,99,94,91,83,94,94,79,65,78,91,81,87,112,103,104,114,101,112,103,109,108,104,102,97,92,98,97,77,82,95,88,94,95,92,108,98,107,113,113,113,118,113,104,105,100,93,90,83,85,68,83,100,94,98,90,93,94,98,105,113,114,119,113,109,102,95,95,95,79,88,85,77,88,103,101,96,95,92,86,113,102,109,97,115,114,105,105,92,87,87,92,93,84,89,105,99,102,100,97,92,89,113,96,98,105,113,111,108,101,95,92,93,97,88,98,90,102,97,102,110,108,103,82,96,93,103,99,120,113,102,115,107,99,104,105,99,101,93,102,100,97,98,100,103,85,86,100,102,109,113,122,114,114,102,104,105,102,97,113,101,98,96,90,97,98,107,82,95,113,106,98,110,118,123,111,101,100,108,113,102,107,102,97,92,94,84,98,98,78,95,95,95,101,105,115,123,104,97,107,110,108,106,109,98,96,94,90,85,100,92,83,80,86,86,99,112,107,114,105,105,106,100,102,105,103,104,100,103,92,85,96,90,84,86,100,93,108,106,98,108,109,100,108,100,101,100,102,103,106,102,89,82,87,91,81,100,94,102,99,95,93,109,97,99,101,107,99,92,102,90,102,100,91,85,79,77,77,94,91,102,103,82,97,102,88,98,98,104,100,90,92,93,96,96,95,93,90,67,66,85,96,99,101,85,83,100,86,94,101,99,101,101,90,93,96,95,88,89,89,82,79,71,79,91,100,90,81,90,92,88,96,96,99,90,90,91,85,94,83,87,78,71,82,78,85,83,91,85,77,82,87,80,98,103,98,100,95,87,81,90,78,81,83,87,87,76,65,86,81,95,72,80,81,79,94,100,100,104,109,98,91,97,92,92,90,90,96,88,63,78,77,82,78,75,75,84,93,97,108,104,111,94,95,97,92,92,94,97,81,92,75,63,65,77,74,75,85,87,95,95,103,100,101,98,101,90,88,89,91,93,81,78,84,77,62,69,73,84,82,81,92,94,96,93,99,95,94,81,87,87,93,92,81,78,83,79,61,65,73,82,84,81,90,93,96,94,98,95,96,82,83,86,90,92],
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
