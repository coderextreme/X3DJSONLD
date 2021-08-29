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
        texture=ImageTexture(url=['../../images/5/newport22-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[89,92,99,98,96,95,93,89,99,114,119,128,134,137,131,119,103,100,105,107,114,114,87,92,95,97,101,102,97,91,93,107,115,123,132,134,134,125,108,103,106,111,114,115,90,92,93,97,100,105,98,91,91,106,112,120,124,126,129,124,114,111,113,116,119,120,91,91,94,93,94,97,102,95,91,100,106,114,121,126,129,126,124,118,117,120,124,124,95,102,96,95,94,94,99,98,93,99,100,110,119,123,126,128,126,124,122,123,125,125,101,104,100,99,97,96,97,97,94,93,97,104,112,119,123,127,127,125,127,126,126,127,101,104,108,101,102,100,98,98,93,93,94,101,109,116,120,124,125,126,128,128,128,128,99,103,104,103,104,100,98,96,93,93,94,97,104,110,114,118,123,126,129,130,131,131,93,98,101,100,101,100,99,97,96,93,94,95,100,105,109,115,119,122,127,131,132,133,90,93,95,96,98,102,99,98,100,95,93,93,96,102,108,109,113,117,122,127,131,131,92,92,93,94,95,97,100,103,103,98,94,93,96,101,104,105,106,110,114,122,127,127,95,94,93,93,95,96,97,99,102,103,93,93,93,97,101,102,104,105,108,115,122,122,102,96,94,94,95,96,96,98,100,101,97,93,93,95,97,98,101,103,104,108,114,115,102,96,101,96,97,96,98,99,100,103,103,102,100,97,96,97,99,100,99,102,107,108,101,103,102,102,100,99,100,102,102,101,103,103,99,97,97,97,97,97,99,101,103,104,100,103,105,105,104,101,103,104,104,104,103,102,98,97,99,98,98,97,97,105,105,105,99,101,105,104,103,104,106,106,105,105,106,104,99,97,97,96,96,99,102,101,103,103,99,99,100,100,100,102,104,104,106,106,106,106,102,98,101,102,102,101,100,100,101,103,100,100,99,99,99,100,101,102,103,106,106,106,106,101,100,100,101,104,101,102,103,104,100,100,99,99,100,99,95,99,99,104,106,106,103,104,100,100,100,101,99,104,107,105,100,100,100,100,102,102,93,92,92,95,96,104,98,103,104,104,100,100,100,105,104,105,99,100,101,101,103,101,93,90,91,90,90,92,93,97,100,102,103,102,102,104,104,106,100,100,101,103,107,101,96,89,87,87,87,87,87,89,93,94,92,91,100,103,109,108,100,101,102,103,107,102,97,89,87,87,87,87,87,88,92,91,90,91,101,102,108,109],
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
