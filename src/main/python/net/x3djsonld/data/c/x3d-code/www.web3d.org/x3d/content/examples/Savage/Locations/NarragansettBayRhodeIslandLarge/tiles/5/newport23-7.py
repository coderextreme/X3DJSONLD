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
        texture=ImageTexture(url=['../../images/5/newport23-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.669870498763935,-71.63732336849614,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[111,104,96,89,89,91,86,84,83,81,83,84,82,81,79,81,78,77,80,82,81,81,102,96,91,89,88,91,86,89,94,93,85,80,81,83,83,84,82,78,76,75,78,80,95,91,92,91,92,94,90,86,84,84,83,83,84,84,85,85,84,80,77,75,75,76,88,89,90,87,85,85,87,85,88,89,87,83,84,86,90,92,91,86,80,77,75,75,88,84,83,84,83,81,86,87,86,82,84,84,88,93,98,100,93,87,81,79,76,75,82,85,84,81,81,77,79,82,83,82,83,85,91,96,99,95,90,86,78,79,79,78,82,82,80,80,80,79,81,80,80,84,85,89,91,95,96,94,91,85,78,76,75,75,85,83,86,85,82,80,80,82,85,88,87,92,93,94,96,93,90,83,79,76,77,77,87,88,86,85,86,88,87,88,90,91,92,95,95,94,95,93,90,79,77,77,80,81,93,96,91,89,89,89,87,85,87,91,98,100,101,102,103,100,89,79,77,78,83,84,98,95,93,93,91,90,86,88,86,90,96,104,110,109,112,108,94,83,78,80,86,88,98,96,98,96,93,93,91,89,92,95,97,106,113,114,112,109,99,87,83,90,88,88,99,100,103,99,100,98,97,96,102,104,104,110,118,120,104,101,101,91,91,91,86,86,99,100,109,110,111,106,106,109,111,110,113,113,118,116,103,97,95,91,91,87,85,85,99,105,116,117,116,115,114,115,114,118,121,120,118,112,109,102,101,97,90,87,87,87,99,109,114,114,116,117,120,118,122,132,126,120,121,117,111,108,104,100,99,90,90,90,92,101,111,119,122,123,126,126,133,135,131,124,119,118,116,112,104,98,93,96,96,95,95,101,105,115,122,122,126,130,135,133,131,126,120,116,116,113,110,104,102,105,100,99,95,96,106,114,117,123,127,134,134,133,129,125,116,113,114,111,109,107,107,104,98,97,96,97,102,110,115,124,127,130,129,126,125,122,116,110,110,108,107,107,105,100,92,90,94,96,101,106,116,123,127,128,127,124,123,121,117,112,110,108,107,106,101,96,88,87,97,96,100,107,116,122,129,128,128,126,124,120,117,113,109,108,106,103,93,86,80,79,94,95,98,107,118,127,130,132,132,129,125,121,117,113,108,105,102,94,86,80,78,78,93,95,99,109,119,127,130,131,132,130,126,122,117,113,108,105,101,93,84,79,78,78],
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
