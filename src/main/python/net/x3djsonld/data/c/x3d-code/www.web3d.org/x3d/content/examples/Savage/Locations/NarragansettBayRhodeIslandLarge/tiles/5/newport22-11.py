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
        texture=ImageTexture(url=['../../images/5/newport22-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.5493819523225,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[114,117,120,121,118,117,117,113,112,106,101,99,92,90,91,87,86,86,84,83,79,79,115,120,122,122,122,122,120,115,112,109,106,104,95,92,88,87,85,84,83,83,77,76,120,123,125,124,123,124,122,117,113,111,109,105,100,95,89,88,85,81,79,82,75,75,124,125,127,127,125,125,123,119,114,111,109,106,102,101,95,90,86,83,82,77,75,75,125,126,127,126,123,122,120,117,113,110,105,102,99,96,100,94,89,84,82,76,74,74,127,128,127,124,121,119,117,115,110,105,103,100,98,93,95,93,85,82,79,79,74,74,128,128,126,123,120,117,115,113,108,104,102,100,97,93,90,91,87,81,81,78,75,75,131,130,128,124,118,116,113,109,103,102,102,99,97,95,91,93,86,82,80,78,78,78,133,133,128,120,117,113,108,104,101,98,101,98,99,98,92,89,87,85,81,81,80,80,131,131,124,118,115,112,105,100,100,98,96,93,98,96,91,88,84,81,83,82,80,79,127,126,121,117,112,107,105,104,101,96,93,91,90,90,88,85,85,83,81,85,86,86,122,124,120,114,112,108,111,109,105,100,95,92,89,86,83,82,81,83,84,82,82,83,115,117,116,115,114,114,112,108,102,98,95,91,89,87,85,83,82,82,81,81,81,81,108,111,117,117,116,116,116,110,104,102,97,96,93,89,88,88,87,85,88,85,81,81,104,106,109,114,117,119,119,111,106,102,97,94,94,93,92,91,91,88,90,85,81,82,105,105,110,117,119,119,116,112,108,103,99,96,96,96,95,94,91,89,88,83,82,83,103,106,109,114,117,118,119,116,110,109,103,97,94,91,88,87,88,87,85,84,83,83,103,105,107,109,110,114,116,117,115,110,105,97,94,93,90,88,88,86,85,87,83,83,104,106,109,109,109,105,108,111,108,105,102,97,95,91,90,89,87,87,89,87,86,87,105,105,109,106,104,103,103,103,103,104,103,100,99,97,95,92,91,88,91,87,89,90,105,105,105,103,103,103,103,102,100,100,100,101,101,99,96,94,93,92,89,89,93,93,106,107,103,103,103,103,104,103,102,98,92,95,102,102,101,100,98,94,94,88,89,90,108,105,100,100,100,98,100,104,102,100,92,97,102,103,101,98,100,98,95,90,86,85,109,103,97,97,96,96,98,103,103,101,93,97,101,102,102,98,100,98,95,91,86,85],
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
