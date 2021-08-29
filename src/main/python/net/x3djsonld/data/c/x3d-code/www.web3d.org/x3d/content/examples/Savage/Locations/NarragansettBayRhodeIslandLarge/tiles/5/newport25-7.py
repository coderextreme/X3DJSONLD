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
        texture=ImageTexture(url=['../../images/5/newport25-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.71825065109993,-71.63732336849614,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[75,75,75,75,75,75,82,85,87,93,90,84,88,87,83,85,86,87,89,85,85,85,75,75,76,79,76,77,80,87,95,89,83,83,84,85,84,85,89,94,97,91,90,89,75,75,78,81,86,86,82,88,90,87,84,84,85,85,86,90,92,99,101,103,97,97,78,79,84,91,93,92,88,87,82,82,88,87,85,86,89,92,98,103,106,106,103,102,83,82,86,90,93,94,98,93,84,85,86,89,87,85,88,91,97,104,107,109,105,104,89,87,92,95,93,95,97,91,85,85,91,87,86,86,89,95,103,103,108,108,107,107,94,92,93,93,95,94,95,90,88,89,89,86,85,88,89,94,101,108,109,108,109,109,95,97,96,97,97,95,89,89,89,89,88,88,88,88,91,97,102,108,109,109,110,111,97,101,103,101,100,97,90,89,91,90,89,89,91,91,92,95,102,109,109,109,110,110,103,106,105,111,107,100,92,89,90,89,89,92,94,93,91,92,100,106,109,109,111,112,103,109,114,111,110,106,99,94,92,91,92,93,94,93,94,97,97,103,106,108,110,111,99,115,118,117,112,110,108,101,95,92,93,93,94,96,101,103,105,106,107,108,110,111,98,106,113,118,118,115,107,99,96,97,98,98,98,100,99,109,111,109,108,108,110,111,100,96,105,113,116,111,108,104,100,99,99,100,100,102,104,108,112,110,109,110,113,114,95,96,99,106,108,109,102,99,101,97,98,100,102,103,106,108,112,111,111,112,116,116,98,99,100,100,102,101,100,97,95,94,98,100,103,104,110,112,111,110,111,112,115,116,102,100,99,99,99,99,98,96,95,94,94,97,101,103,107,109,107,109,108,111,113,114,106,104,101,100,98,100,98,97,97,96,94,95,99,100,102,103,104,106,107,109,111,111,114,109,106,103,102,103,102,100,95,97,97,93,93,97,96,100,105,107,109,112,113,113,121,114,110,109,105,103,105,102,99,96,93,92,94,97,97,99,103,107,109,112,114,115,123,125,120,112,109,104,106,104,102,96,93,91,94,97,98,99,103,109,109,111,114,115,128,131,128,125,121,113,104,101,99,96,95,95,95,96,97,98,101,106,108,109,113,113,127,130,130,132,129,120,112,104,100,98,97,97,96,97,96,101,101,106,106,108,110,112,127,129,131,133,129,121,114,105,101,99,98,98,96,98,96,100,101,106,106,109,111,112],
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
