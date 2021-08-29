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
        texture=ImageTexture(url=['../../images/5/newport28-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[132,133,130,121,125,118,117,112,107,112,109,110,111,109,106,107,109,111,114,114,115,115,124,120,122,124,120,115,116,111,109,107,110,106,108,108,107,106,105,108,115,112,107,106,117,118,118,117,117,116,112,113,107,104,105,104,105,111,108,105,103,105,103,100,94,94,115,114,113,117,114,115,110,109,105,102,103,103,106,106,103,98,97,98,94,91,96,95,112,115,113,112,110,110,107,107,107,106,103,102,100,97,98,93,95,95,99,94,94,94,119,116,114,114,114,110,107,107,106,105,101,99,99,93,91,93,92,91,92,91,95,95,121,118,119,118,116,113,110,108,107,104,100,97,92,90,91,91,92,86,91,92,94,94,121,125,124,121,121,113,110,107,107,105,100,94,89,86,86,87,86,86,88,94,95,96,126,124,122,124,120,117,113,104,104,101,102,96,86,86,86,86,86,86,86,94,96,98,124,123,118,117,118,111,111,107,103,96,92,87,86,86,86,90,88,90,89,87,93,93,117,117,117,116,110,111,106,102,95,92,90,86,86,89,94,91,90,87,89,85,93,94,114,109,108,108,106,107,99,96,92,89,86,86,86,96,99,92,91,88,89,86,88,89,112,108,105,102,99,96,92,93,91,87,88,99,101,96,93,102,100,94,88,87,83,83,111,104,100,98,93,90,90,89,88,88,100,105,111,107,102,106,96,96,87,91,84,84,106,105,100,96,91,88,88,88,88,95,108,112,112,111,108,101,101,96,91,88,86,85,104,102,96,96,90,88,88,88,88,105,112,115,117,118,111,103,100,95,93,89,84,83,99,95,91,91,90,88,88,90,103,108,102,110,114,111,108,106,102,96,94,96,97,95,99,92,89,88,88,89,91,95,103,107,112,116,117,109,108,107,106,102,100,97,95,95,92,92,90,90,91,95,94,98,105,108,114,110,109,111,112,109,109,104,102,103,104,104,93,90,96,94,90,94,100,102,106,109,110,108,109,110,111,110,111,111,110,107,103,104,87,89,92,95,98,100,104,107,108,109,113,114,110,107,107,107,109,115,110,109,112,111,96,95,96,96,99,108,109,110,111,112,110,110,108,105,107,105,103,113,109,106,107,108,100,102,105,106,109,109,108,109,112,110,107,108,107,107,104,101,100,100,104,103,100,99,101,104,107,108,110,109,108,109,111,108,106,107,107,107,104,99,100,100,103,102,99,98],
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
