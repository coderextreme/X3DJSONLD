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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA7-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.989999984839216,-77.99299999208,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[117,100,105,97,104,102,105,102,108,114,122,99,106,118,115,124,112,115,117,114,115,120,111,126,116,97,91,110,108,96,90,95,108,93,109,115,114,111,106,119,118,106,107,111,121,132,119,108,97,118,98,101,109,90,112,95,104,105,113,101,98,113,114,112,106,112,122,122,116,111,114,112,105,103,107,84,91,90,100,104,113,107,107,105,107,94,104,108,116,119,110,100,118,105,105,117,103,104,82,96,101,101,108,111,98,114,107,92,106,94,107,103,103,97,111,112,111,122,102,99,92,98,79,101,109,110,98,109,104,97,95,86,114,96,106,99,103,96,108,108,116,98,98,84,75,99,110,105,102,108,103,98,91,89,110,92,89,98,112,107,113,116,111,110,110,93,89,93,112,102,94,113,109,105,81,82,104,107,99,96,98,99,109,124,119,113,99,99,75,99,108,104,93,101,98,103,90,85,105,96,89,103,103,104,110,112,115,116,114,88,80,93,101,103,103,83,86,99,88,82,101,98,85,102,105,109,122,109,108,110,105,96,89,78,97,108,108,111,95,90,87,78,108,99,76,102,92,95,110,112,98,95,96,95,94,78,92,98,107,99,92,83,89,83,93,91,73,91,86,102,109,117,103,104,94,87,90,90,80,100,107,105,93,89,74,84,85,86,82,83,82,87,99,112,119,112,112,91,82,81,84,91,113,109,106,91,84,81,90,71,86,74,99,99,115,114,117,120,118,107,97,80,93,90,95,102,87,83,70,77,93,66,76,83,101,109,112,110,119,119,118,111,104,91,70,89,95,99,92,85,73,66,75,68,72,92,86,105,115,124,117,108,101,107,96,93,70,73,97,91,95,87,80,79,84,67,70,72,86,104,102,111,100,117,107,103,87,81,88,70,73,83,95,90,86,82,81,84,64,84,97,96,89,105,103,112,111,109,89,84,98,75,71,76,76,91,93,87,61,72,63,80,81,97,100,89,102,110,116,118,94,88,89,99,91,70,72,84,97,96,56,77,57,66,73,87,100,86,100,114,100,114,106,101,99,98,97,92,83,92,88,81,84,88,80,63,87,72,97,92,105,109,95,108,95,105,87,100,96,87,69,80,90,81,86,89,82,60,85,77,95,93,105,109,96,107,93,105,89,99,92,84,66,80,89,81],
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
