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
        texture=ImageTexture(url=['../../images/5/newport24-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[114,117,113,110,108,104,103,99,99,100,98,104,92,91,91,92,91,91,93,92,94,93,113,113,110,107,107,104,102,97,94,93,91,91,91,91,91,91,91,94,90,89,93,93,112,111,111,112,107,105,98,95,93,93,91,91,91,91,91,91,91,91,89,88,91,92,112,115,116,114,112,108,103,99,93,91,91,91,91,91,91,91,91,91,91,91,91,91,117,117,120,118,114,112,107,100,95,92,93,91,91,91,91,91,91,91,91,91,91,91,127,124,120,116,116,114,110,106,103,99,94,95,94,91,91,91,91,91,91,91,91,91,123,122,121,119,116,118,116,113,109,105,101,103,100,96,91,91,91,91,91,91,91,91,129,128,126,128,125,120,119,120,118,111,108,108,102,100,96,91,91,91,91,91,91,91,133,136,136,139,139,129,127,123,119,116,113,109,107,103,98,91,91,91,91,91,91,91,142,142,140,142,144,140,138,133,125,118,116,113,114,111,105,100,97,95,91,91,91,91,145,149,145,142,143,151,148,142,133,128,125,117,116,114,111,107,107,106,99,91,91,91,144,142,142,143,146,150,147,147,143,138,130,120,115,113,113,111,112,111,105,100,92,92,139,137,139,139,139,142,145,143,144,138,129,120,113,112,112,112,110,109,106,101,98,97,131,129,129,130,131,131,132,134,133,127,122,116,112,109,110,109,106,104,101,97,96,95,124,122,121,121,121,121,122,121,118,117,113,111,109,106,105,105,108,104,99,94,90,89,119,116,116,113,113,111,113,112,113,112,109,105,102,102,102,103,109,105,100,93,85,85,113,108,108,107,109,108,111,111,110,107,106,104,101,102,105,104,96,96,93,91,87,86,106,105,105,107,107,110,109,110,109,110,107,104,101,102,95,96,87,87,86,85,84,84,101,103,103,104,106,108,111,111,107,106,104,102,99,92,89,86,84,86,77,76,77,77,96,99,99,102,103,105,107,108,106,104,102,95,91,88,85,78,76,75,75,75,75,75,93,95,96,100,103,101,101,102,101,98,96,92,89,86,82,76,75,75,75,75,75,75,97,91,91,95,100,102,100,98,96,91,88,85,85,85,78,76,75,75,75,75,75,75,96,83,91,96,95,100,104,98,95,86,80,80,80,76,75,75,75,75,75,75,75,75,96,85,92,96,94,99,102,97,93,85,80,79,80,75,76,75,75,75,75,75,75,75],
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
