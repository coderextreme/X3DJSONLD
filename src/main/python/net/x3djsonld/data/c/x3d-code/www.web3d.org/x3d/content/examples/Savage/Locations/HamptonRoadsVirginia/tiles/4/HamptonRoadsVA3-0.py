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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA3-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.36499999391961,-77.99299999208,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[91,99,97,93,89,76,85,75,90,76,91,102,77,89,98,109,95,93,97,91,81,66,98,106,103,92,78,67,95,86,90,88,88,93,93,89,100,97,93,104,97,91,66,84,106,106,96,86,84,91,89,74,100,96,91,92,102,88,98,106,104,104,100,87,78,86,101,98,95,83,91,96,73,86,88,98,96,100,100,95,97,109,101,96,84,82,85,79,100,90,76,73,95,91,76,89,78,88,98,108,112,111,105,103,83,81,73,85,85,88,82,70,83,91,97,80,88,91,69,84,81,103,114,105,110,99,102,101,87,98,98,105,71,77,85,106,89,80,97,94,79,81,85,104,114,107,111,103,105,90,93,82,97,99,89,78,90,98,82,82,98,93,75,88,90,97,109,117,114,114,97,81,97,102,94,99,94,96,103,97,84,87,93,84,70,91,99,103,107,115,122,109,105,84,94,102,104,112,81,111,98,87,78,102,101,90,79,81,99,99,97,109,120,113,97,95,115,116,115,114,98,105,105,101,76,104,97,91,81,88,88,88,103,109,122,102,99,97,109,114,121,114,84,107,96,80,90,103,93,79,81,93,97,98,103,111,117,104,95,102,106,115,111,114,101,104,78,100,102,97,94,97,78,100,110,101,99,110,122,115,97,110,105,115,113,111,113,94,94,101,109,100,93,100,85,93,115,119,115,119,123,104,97,109,119,113,108,102,104,99,99,86,96,101,88,106,85,90,97,113,120,115,118,100,119,110,120,121,110,119,98,83,106,86,98,108,104,106,95,91,88,101,116,118,117,108,115,120,120,121,112,108,100,80,110,96,99,110,105,109,109,85,104,100,114,128,120,121,123,115,108,114,112,103,101,88,112,86,94,103,116,120,107,86,109,95,110,125,127,127,113,120,105,111,107,99,86,94,102,86,103,106,118,110,107,93,108,105,107,115,128,121,114,108,109,109,90,89,86,99,107,92,101,120,124,114,91,105,110,113,114,117,122,124,108,104,104,110,109,118,84,106,113,94,109,118,123,113,101,118,113,114,117,119,127,115,116,107,112,115,111,117,97,105,114,95,110,113,128,112,113,123,114,109,115,128,136,119,122,115,123,112,127,124,96,105,116,96,106,113,130,113,113,123,114,110,118,129,135,119,125,116,124,110,130,124],
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
