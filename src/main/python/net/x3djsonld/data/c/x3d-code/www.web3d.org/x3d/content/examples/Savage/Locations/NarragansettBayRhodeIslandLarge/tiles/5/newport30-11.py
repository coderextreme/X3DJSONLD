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
        texture=ImageTexture(url=['../../images/5/newport30-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.5493819523225,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[119,115,115,113,111,115,121,121,120,128,122,121,118,124,129,133,127,124,116,112,108,107,123,120,118,118,126,133,133,129,131,128,125,123,123,126,129,126,120,115,109,106,107,108,118,120,123,127,134,138,139,139,138,134,127,122,125,124,121,117,109,109,105,103,98,97,112,117,125,131,132,134,141,148,144,135,131,132,126,123,113,110,104,105,100,89,83,83,104,114,122,123,131,136,143,141,140,135,136,132,124,113,109,110,101,101,93,86,80,80,108,117,118,122,121,132,138,138,135,135,138,129,122,115,103,100,100,97,91,83,80,80,106,104,112,118,128,128,135,131,128,136,135,130,115,111,101,91,99,90,91,86,90,90,96,100,104,115,122,133,130,122,125,127,128,123,112,101,96,93,92,90,91,90,91,92,93,94,97,105,114,122,114,121,123,120,113,105,103,96,96,89,88,93,90,90,93,93,97,91,93,99,104,103,107,113,115,115,104,94,93,89,87,93,87,90,92,94,96,96,96,95,93,94,99,94,95,99,101,100,97,100,92,94,95,95,91,82,85,86,86,86,94,100,92,93,93,92,95,95,94,90,97,96,94,93,95,98,88,84,82,87,90,89,96,92,96,99,96,95,98,91,93,94,91,90,92,94,90,91,95,88,91,89,87,88,101,98,106,102,94,96,90,92,90,88,91,90,95,94,95,94,99,98,97,88,81,79,101,111,113,99,90,87,85,86,88,87,88,93,90,89,95,98,97,95,92,91,90,88,118,124,104,93,89,82,84,86,88,88,87,86,89,95,100,98,97,96,95,91,85,84,127,111,95,92,91,85,86,89,89,88,89,88,88,96,95,92,105,107,95,86,84,87,126,119,103,91,89,90,88,89,89,88,86,86,91,92,95,102,102,98,97,84,90,92,120,119,109,98,91,89,87,90,86,84,88,90,92,95,95,99,98,97,94,87,88,88,113,113,115,107,94,89,91,92,88,87,87,91,86,86,97,99,101,100,88,89,86,85,99,106,105,101,97,89,88,91,92,94,98,102,92,95,100,101,104,97,93,93,86,86,96,96,97,96,96,90,90,95,100,109,115,106,101,104,106,103,107,106,97,90,88,90,93,84,94,98,94,93,90,97,104,113,116,116,122,115,106,107,110,105,105,95,90,91,91,82,93,96,96,93,89,98,104,115,117,119,124,113,108,109,109,105,104,95,90,91],
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
