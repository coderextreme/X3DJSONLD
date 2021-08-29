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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA3-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.36499999391961,-77.8679999890532,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[66,90,85,94,96,104,97,97,99,86,91,75,77,79,83,81,68,73,87,72,58,70,84,91,75,91,97,97,88,88,84,81,69,84,81,93,78,70,80,71,77,68,69,65,86,90,83,94,98,96,87,79,93,74,84,97,102,92,73,89,81,81,89,77,77,72,79,99,102,102,100,94,77,102,101,95,90,102,93,82,84,91,88,83,106,89,74,76,88,98,112,104,102,86,86,95,96,100,101,94,80,82,91,100,85,87,96,81,69,67,105,116,108,99,97,95,96,99,107,108,95,89,97,96,89,83,82,84,85,77,71,68,99,104,106,96,95,92,102,100,103,100,86,96,93,83,83,86,90,74,76,75,71,67,99,110,96,97,99,89,102,99,100,99,92,92,92,79,75,73,69,65,62,61,65,60,112,108,111,106,110,92,106,105,102,101,98,94,86,75,88,97,89,68,75,61,61,59,114,113,112,110,108,103,106,118,102,99,101,88,84,86,96,92,90,82,81,81,79,61,114,113,99,100,109,111,106,108,111,98,93,81,89,87,94,99,96,79,82,89,78,73,114,102,98,91,97,101,105,101,103,98,80,79,98,87,91,105,86,84,84,87,75,70,111,104,104,89,95,98,94,97,94,97,82,69,94,80,96,108,99,92,86,81,64,67,102,101,94,101,97,80,80,81,82,81,69,83,97,81,101,109,98,96,85,79,77,69,119,110,106,95,88,79,99,103,88,101,97,87,107,87,104,95,86,89,89,71,74,85,108,105,97,87,96,82,118,109,103,91,103,92,101,94,107,107,104,99,83,74,75,90,103,95,88,104,91,95,115,100,96,91,106,99,108,98,96,112,108,85,83,84,92,81,99,94,101,110,106,111,112,108,111,99,108,100,113,100,110,112,106,95,96,91,90,94,89,107,112,112,112,111,113,112,108,109,111,116,120,110,114,108,111,100,97,97,96,99,118,110,114,115,114,111,109,114,117,117,115,106,108,114,103,114,105,101,101,96,107,99,117,117,113,121,113,109,106,103,119,114,118,108,106,118,93,103,111,101,85,93,98,96,124,111,107,100,102,95,89,91,104,113,108,113,96,119,102,98,110,103,86,102,97,93,124,112,105,101,104,96,89,89,104,111,107,114,95,117,104,98,111,103,87,103,98,91],
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
