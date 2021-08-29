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
        texture=ImageTexture(url=['../../images/5/newport30-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[118,116,114,107,101,98,99,101,97,102,107,106,110,109,111,111,114,106,99,100,99,99,113,111,108,102,104,104,101,99,97,98,105,107,105,110,107,105,104,105,103,95,88,87,108,105,102,102,104,98,101,101,103,105,97,95,98,103,105,116,106,98,88,87,87,87,102,101,104,99,108,106,97,99,98,97,95,101,102,96,95,98,88,87,87,87,87,87,100,99,94,98,99,108,102,100,94,93,91,96,92,97,87,87,87,87,87,87,87,87,103,104,105,103,96,95,99,96,92,85,87,87,87,87,87,87,87,87,87,87,87,87,109,102,101,100,99,97,94,90,84,87,87,87,91,90,87,87,88,89,89,89,88,88,112,103,98,95,92,92,89,88,90,87,87,87,87,90,88,92,99,90,93,92,91,91,114,110,105,100,103,96,96,93,89,87,94,91,88,89,93,95,94,98,97,96,102,101,114,110,111,109,103,105,104,95,87,87,87,87,87,87,87,89,97,98,104,104,111,111,121,126,121,116,108,98,93,89,87,88,87,87,87,87,87,88,100,106,109,109,110,110,123,123,121,116,109,101,92,91,93,89,87,87,87,87,90,98,103,108,111,108,112,114,120,117,111,109,109,107,97,94,90,88,87,90,87,86,95,101,106,113,120,111,112,111,113,108,113,109,100,101,95,95,95,94,93,92,90,102,106,103,100,109,104,112,111,111,116,105,107,104,95,95,101,106,102,96,103,95,100,110,103,107,105,105,105,107,108,109,98,100,100,105,102,106,115,113,111,110,103,102,96,101,101,102,114,107,100,104,107,108,117,114,105,104,108,110,110,116,113,120,111,105,103,103,101,105,110,105,105,105,109,111,130,128,126,115,117,111,111,113,113,113,100,97,109,103,105,109,106,107,110,111,110,110,138,143,138,126,120,112,107,107,104,104,104,104,100,104,107,108,106,110,108,113,112,113,149,152,146,135,120,110,106,101,107,104,100,105,104,106,104,103,104,108,109,110,114,115,149,149,145,133,112,103,105,105,106,105,95,96,105,105,105,106,108,104,108,108,108,108,147,144,136,122,110,104,106,105,105,95,97,103,106,105,111,112,111,106,109,108,115,116,140,133,120,111,108,103,97,100,100,103,106,107,108,118,119,116,112,112,111,113,119,119,138,130,119,111,108,103,99,98,102,104,107,107,109,119,120,118,114,115,111,112,119,120],
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
