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
        texture=ImageTexture(url=['../../images/5/newport31-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[97,108,108,111,112,113,112,109,107,106,103,101,102,96,90,85,88,83,90,99,92,91,110,111,111,112,108,110,111,109,106,104,100,98,92,88,88,92,86,82,92,92,91,90,111,113,112,111,108,110,108,101,105,102,101,96,93,89,89,94,87,82,82,82,82,82,115,118,113,112,111,103,104,99,101,98,95,94,92,90,91,82,84,82,82,82,82,82,121,116,117,114,111,104,99,100,94,97,97,92,93,89,87,89,87,86,82,82,82,82,125,121,117,107,106,101,98,101,100,98,94,94,93,92,93,91,89,82,82,82,82,82,129,117,114,105,104,99,98,99,106,103,100,100,98,96,93,92,86,82,82,82,82,83,116,115,107,103,103,104,105,105,106,106,107,105,102,101,95,85,82,82,82,82,91,90,112,110,108,104,102,106,108,110,114,110,111,107,103,98,93,85,82,82,82,82,87,89,105,100,104,108,111,114,115,118,117,117,116,110,101,96,88,82,82,82,82,82,90,91,104,104,101,110,113,120,125,124,119,119,114,104,99,94,86,91,89,84,82,82,89,91,108,101,104,112,118,126,131,128,122,115,110,101,94,88,89,90,91,89,83,86,88,90,105,109,108,116,121,126,128,125,117,111,102,99,94,91,94,88,91,86,83,90,88,89,105,110,112,113,116,118,123,122,116,107,101,96,95,94,92,85,87,86,86,80,89,91,109,110,109,111,109,115,117,117,113,102,96,94,89,90,89,89,90,86,86,84,85,89,101,108,112,112,115,115,107,105,102,98,95,92,90,89,89,93,89,86,89,85,84,85,107,109,109,112,106,105,103,102,98,95,90,92,92,91,91,90,92,88,84,85,79,81,106,110,112,110,103,103,101,98,97,94,91,92,91,89,90,92,89,86,83,80,79,81,106,106,105,102,103,101,99,96,94,93,92,90,88,90,88,88,86,85,84,81,84,84,102,103,101,99,99,98,95,92,91,88,89,89,92,92,91,88,88,86,82,82,81,80,105,99,101,102,103,92,89,89,88,91,93,94,94,91,92,88,88,86,82,80,78,78,107,108,103,106,96,93,92,93,94,95,96,96,96,99,93,89,83,83,79,77,78,78,118,122,117,104,101,107,102,95,102,101,101,101,99,97,93,87,82,77,79,81,78,78,120,123,121,106,104,110,104,96,102,100,102,102,99,98,93,88,82,77,78,80,77,79],
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
