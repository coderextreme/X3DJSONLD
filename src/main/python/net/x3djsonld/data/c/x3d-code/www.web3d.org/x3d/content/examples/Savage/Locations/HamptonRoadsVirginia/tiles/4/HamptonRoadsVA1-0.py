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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA1-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.55249999845981,-77.99299999208,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[85,73,76,83,75,75,82,77,74,72,75,83,78,80,90,71,76,94,75,86,70,69,75,91,88,84,87,87,89,86,83,85,69,78,78,79,80,88,68,71,71,87,72,71,88,91,92,96,91,86,82,78,76,66,71,68,59,71,70,74,65,64,72,84,73,72,99,102,97,91,80,78,70,72,97,91,92,77,79,82,82,75,84,72,67,69,70,75,100,103,91,91,80,84,68,78,99,94,104,85,78,81,69,79,88,77,72,61,65,64,101,101,90,88,78,83,95,82,97,101,95,94,73,66,73,80,93,81,83,66,58,59,95,89,86,75,79,90,97,99,94,110,87,95,99,91,73,84,98,95,89,65,60,69,101,103,82,79,81,90,110,107,109,113,92,98,100,90,84,86,96,93,96,79,67,74,113,98,84,76,90,98,109,107,113,98,91,106,96,99,90,103,96,87,75,77,65,63,96,99,84,97,102,99,100,103,110,100,100,108,103,99,94,96,88,82,74,72,65,62,82,82,78,105,108,109,107,118,113,115,108,99,110,103,84,91,90,93,82,64,65,67,90,89,80,101,106,108,115,115,109,102,105,95,110,101,106,80,86,83,74,77,70,68,101,97,103,93,105,110,119,114,110,103,95,84,96,99,103,93,87,70,69,65,66,68,98,107,105,107,97,113,112,102,94,112,106,97,84,94,101,96,97,79,68,82,83,74,97,107,100,108,110,112,101,101,90,111,96,107,96,93,89,91,93,81,77,79,77,89,110,118,106,114,110,103,99,97,96,101,92,101,92,71,74,90,90,78,84,92,87,91,97,109,116,112,119,125,119,109,107,92,83,92,84,83,100,80,75,69,91,92,102,93,106,116,114,121,117,116,114,106,93,93,94,96,99,96,101,84,79,75,80,93,88,84,120,105,125,121,123,121,101,106,96,82,79,103,111,103,95,80,92,79,87,87,83,75,114,116,126,123,121,125,111,116,105,105,102,102,111,110,90,88,86,95,94,88,86,95,117,121,121,117,116,110,108,105,105,108,108,106,112,109,93,90,95,94,93,93,97,96,121,125,116,115,109,112,109,103,96,115,110,116,114,108,100,99,96,102,96,99,94,87,121,126,116,115,109,112,108,100,96,116,112,117,110,109,101,99,97,103,95,100,93,85],
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
