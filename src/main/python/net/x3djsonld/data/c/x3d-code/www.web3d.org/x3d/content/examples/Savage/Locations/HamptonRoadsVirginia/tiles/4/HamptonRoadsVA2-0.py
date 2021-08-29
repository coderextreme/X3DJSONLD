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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA2-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.45874999618971,-77.99299999208,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[121,126,116,115,109,112,108,100,96,116,112,117,110,109,101,99,97,103,95,100,93,85,118,128,121,116,105,94,95,91,100,111,105,104,111,102,101,101,96,94,96,100,88,93,122,131,127,130,108,105,100,82,98,105,113,95,98,107,104,91,91,87,91,99,94,89,120,115,110,123,113,109,98,93,85,89,94,85,89,99,101,94,79,84,91,87,77,77,110,125,108,108,110,123,104,95,91,80,77,84,88,112,97,99,85,86,81,78,69,65,102,121,121,108,99,113,116,109,100,97,85,84,76,93,97,94,80,78,81,80,73,65,108,108,102,107,107,111,102,114,112,107,94,104,85,78,84,83,86,66,75,81,76,77,103,110,102,102,113,104,105,104,112,102,111,108,99,83,76,66,91,86,85,80,74,66,98,99,91,102,113,117,100,85,90,87,97,88,78,78,86,85,90,90,100,82,80,72,91,100,86,100,101,115,113,114,103,100,97,100,97,92,95,89,87,84,86,75,69,59,75,93,95,86,95,109,94,97,88,101,99,101,98,90,86,84,79,77,73,67,60,60,78,85,83,87,87,107,97,103,96,98,88,102,92,84,85,81,72,70,61,61,65,72,85,79,78,87,98,110,83,97,96,74,94,92,84,78,79,80,74,64,74,77,87,84,88,88,75,73,79,87,88,88,83,78,77,81,79,78,67,62,58,65,86,79,85,85,99,93,87,79,72,82,73,73,66,70,72,70,69,62,65,65,71,76,90,99,91,83,106,93,98,77,81,69,73,86,83,80,87,87,63,79,67,63,89,81,79,84,90,91,97,98,104,86,93,81,86,92,74,79,88,84,76,83,78,85,93,93,83,94,86,78,103,84,94,88,86,89,89,70,72,65,72,73,65,85,79,83,98,92,83,94,89,94,98,84,79,80,86,80,92,71,93,66,76,90,86,90,71,81,98,99,88,100,92,83,83,80,80,82,75,76,80,76,79,69,91,97,93,71,97,97,95,105,106,93,85,81,91,99,95,94,88,79,83,80,91,74,93,102,78,89,94,108,95,95,100,91,81,66,91,99,97,93,89,76,85,75,90,76,91,102,77,89,98,109,95,93,97,91,81,66],
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
