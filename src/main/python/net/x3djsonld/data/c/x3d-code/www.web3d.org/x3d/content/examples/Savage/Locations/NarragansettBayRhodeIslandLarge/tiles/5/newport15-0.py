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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/5/newport15-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47634988941996,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[67,68,65,64,61,64,67,72,77,76,81,85,93,99,102,103,106,110,114,117,116,115,69,68,65,64,65,64,68,74,78,80,85,89,96,98,105,107,112,116,120,123,117,116,73,68,69,69,68,69,71,75,80,85,91,97,102,103,104,106,113,119,122,125,120,118,78,71,70,69,72,75,76,77,80,89,95,102,103,107,109,114,121,122,121,119,114,113,85,79,74,74,78,80,80,81,86,91,98,105,107,109,110,114,118,117,117,117,116,116,94,87,79,79,82,84,86,89,92,95,98,105,108,109,113,113,114,116,116,116,113,112,95,91,84,84,84,89,91,95,99,99,100,102,106,110,114,116,115,116,117,115,112,111,99,93,89,85,87,92,93,98,101,100,105,105,107,110,114,112,114,115,114,112,111,110,98,96,94,93,95,96,99,99,102,105,108,109,110,114,115,110,113,112,112,116,117,116,101,101,99,99,99,100,100,103,106,109,110,110,113,117,114,112,116,115,115,117,116,115,104,103,101,105,106,107,107,109,111,112,112,115,120,119,114,112,115,114,114,116,116,115,104,102,106,108,106,109,112,114,116,117,119,122,123,120,116,115,110,112,114,113,110,109,107,107,110,112,112,113,115,118,118,123,125,127,125,119,114,116,112,114,114,111,109,108,108,111,114,111,113,118,119,119,121,125,127,130,125,120,117,114,116,117,116,109,100,99,111,111,111,113,116,115,116,120,123,125,128,128,124,120,119,118,118,115,110,102,94,92,111,111,110,111,109,113,117,120,121,124,125,121,115,114,116,117,116,112,104,95,84,83,114,115,114,114,116,117,119,120,122,124,125,120,119,115,115,115,113,105,96,86,78,77,116,115,113,115,116,120,124,122,125,127,123,119,117,119,118,111,104,94,85,79,73,71,112,114,112,115,122,121,126,124,127,127,119,117,117,119,114,104,93,84,77,71,70,69,107,111,115,117,121,122,123,125,129,125,120,118,117,113,106,94,83,75,68,63,64,65,107,111,115,117,119,122,125,128,127,121,119,115,110,103,93,84,75,68,67,65,67,68,102,109,113,116,117,121,124,126,123,119,114,108,102,93,84,77,71,70,69,71,72,72,96,104,110,114,113,117,121,119,117,115,110,100,93,83,78,72,70,70,73,80,79,79,95,103,110,113,111,116,120,119,116,114,109,100,92,82,77,72,71,71,74,79,78,78],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
