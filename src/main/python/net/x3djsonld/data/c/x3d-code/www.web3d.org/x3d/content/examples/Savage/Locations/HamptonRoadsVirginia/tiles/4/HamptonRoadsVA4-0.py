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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA4-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.27124999164951,-77.99299999208,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[96,105,116,96,106,113,130,113,113,123,114,110,118,129,135,119,125,116,124,110,130,124,97,109,116,96,116,119,129,109,119,120,124,121,130,129,128,123,118,125,124,127,121,125,107,111,119,100,115,121,128,114,128,120,127,125,126,128,126,127,112,116,115,117,124,128,112,116,125,101,108,124,125,126,131,127,126,133,130,120,127,122,120,111,118,115,119,121,107,130,123,114,114,109,126,130,130,128,122,129,119,118,119,108,116,118,111,113,115,118,121,128,123,108,125,121,135,134,130,126,122,120,122,120,121,120,123,109,107,122,112,119,123,133,129,121,131,128,135,136,135,124,121,105,99,121,119,119,119,111,101,108,111,117,121,136,125,127,135,133,134,135,136,126,121,118,107,115,130,116,117,120,112,105,107,107,116,134,126,127,137,142,136,133,123,110,118,118,117,109,116,109,123,112,119,119,111,107,125,138,130,131,133,135,137,129,127,121,104,99,114,92,102,96,111,110,108,111,111,111,129,124,123,131,130,135,139,133,119,123,118,109,109,111,86,96,103,96,105,116,111,107,131,131,124,124,136,127,143,133,141,130,124,120,110,87,90,93,94,88,116,107,114,119,135,129,121,120,131,129,125,133,134,127,121,122,114,102,105,100,107,84,100,97,107,114,134,128,120,111,127,135,127,127,130,133,132,124,124,113,113,113,114,100,92,103,111,110,132,130,123,121,124,127,127,125,127,129,138,123,125,117,121,104,97,98,90,96,101,103,129,132,123,101,123,126,125,120,130,126,123,120,127,111,111,113,103,86,78,84,99,109,125,135,114,99,125,123,129,117,134,119,123,115,116,114,111,109,109,103,92,71,92,102,120,135,117,102,115,133,118,116,134,118,108,109,111,115,96,98,114,111,94,97,72,81,116,122,116,101,106,125,114,122,126,123,125,99,107,99,104,110,111,115,108,99,80,75,128,119,125,112,110,119,117,117,120,126,118,120,99,86,95,99,108,109,109,110,101,82,112,112,122,126,113,89,124,112,114,124,117,116,117,107,106,85,91,106,112,100,109,108,115,113,120,123,113,89,126,114,115,123,118,116,118,106,107,82,94,105,114,102,110,107],
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
