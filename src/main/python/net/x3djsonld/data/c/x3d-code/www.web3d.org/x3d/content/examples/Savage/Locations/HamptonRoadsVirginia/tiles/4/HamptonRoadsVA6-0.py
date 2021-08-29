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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA6-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.083749987109314,-77.99299999208,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[125,103,114,130,131,114,113,111,107,108,107,97,100,112,117,103,115,110,109,112,112,112,121,124,119,128,130,121,115,114,110,121,118,106,97,117,114,108,110,115,116,114,105,113,132,124,114,127,127,112,113,110,124,120,109,104,115,113,115,114,114,112,113,108,105,102,131,127,128,135,129,119,125,122,128,117,114,115,115,115,114,126,128,117,107,110,107,102,130,134,131,132,132,126,129,123,120,120,109,115,118,117,113,120,113,114,115,112,113,110,136,127,132,123,136,126,125,130,118,110,118,118,118,114,106,97,114,110,109,112,102,115,133,135,124,110,126,121,123,130,120,101,114,110,109,108,92,98,97,87,112,104,102,107,133,138,127,125,109,110,112,112,102,108,108,96,117,106,115,112,114,101,100,93,84,82,141,123,120,134,120,125,126,121,126,119,117,117,115,111,114,106,102,104,103,91,102,99,140,127,126,137,139,126,129,119,124,121,113,121,117,115,109,113,111,103,103,106,106,101,139,136,139,143,133,122,133,126,120,116,120,123,125,111,110,113,113,112,111,116,111,111,134,142,143,142,131,125,131,122,124,125,126,127,125,126,118,117,118,117,110,107,110,118,135,134,140,131,124,129,122,123,119,127,121,119,119,123,123,122,113,115,111,102,100,112,126,125,137,122,127,132,122,119,126,122,123,113,114,119,107,113,110,115,113,118,100,104,128,119,134,113,130,134,123,118,122,129,125,125,119,112,114,107,109,103,110,107,105,95,126,113,130,107,127,123,121,119,111,124,124,122,120,114,106,106,104,104,96,96,87,86,128,120,122,119,127,112,117,103,103,115,121,120,119,121,113,120,104,114,102,109,84,92,117,110,116,126,122,119,114,108,112,115,121,110,120,130,118,118,115,115,105,116,103,103,113,95,101,124,117,114,115,109,106,117,115,111,107,119,122,124,113,116,116,115,114,116,93,101,111,107,114,113,120,107,114,113,105,101,115,118,121,122,110,122,125,116,113,111,117,101,103,98,105,104,106,103,108,114,122,97,105,118,117,126,111,115,120,113,116,121,117,100,105,97,104,102,105,102,108,114,122,99,106,118,115,124,112,115,117,114,115,120],
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
