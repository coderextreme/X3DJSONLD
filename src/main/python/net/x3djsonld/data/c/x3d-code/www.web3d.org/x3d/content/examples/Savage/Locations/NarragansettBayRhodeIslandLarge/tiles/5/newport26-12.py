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
        texture=ImageTexture(url=['../../images/5/newport26-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[95,94,92,89,88,87,87,88,91,92,92,87,84,82,77,82,78,73,72,70,69,70,97,96,93,91,90,89,89,90,94,94,91,87,85,80,75,74,74,73,75,76,75,75,99,96,94,92,91,90,91,93,95,94,90,85,82,76,78,78,76,78,78,81,85,87,100,97,95,94,93,93,93,94,94,92,87,83,79,76,79,81,83,79,81,86,89,90,101,98,97,94,94,94,95,94,92,88,84,81,78,78,79,81,81,81,85,88,91,91,101,99,98,96,96,96,96,93,89,85,82,80,78,78,78,80,80,82,88,91,93,93,102,101,99,98,98,97,96,92,87,84,81,79,78,78,78,80,81,84,89,92,94,94,104,103,100,99,100,99,94,89,86,84,81,79,78,78,78,81,84,88,90,92,94,94,107,105,103,102,101,99,93,90,87,84,82,80,78,79,80,83,87,89,91,92,94,94,109,107,106,105,102,98,94,91,88,85,83,81,80,81,82,86,89,91,91,92,92,92,111,110,109,107,103,98,95,92,89,87,84,82,82,83,86,89,91,92,92,90,89,89,113,112,111,109,103,99,96,94,91,88,85,83,84,87,89,91,92,92,91,89,84,83,116,116,113,109,104,100,99,96,93,89,86,86,88,91,93,93,92,92,90,85,81,80,120,117,114,109,104,100,100,96,93,90,87,89,92,95,96,94,92,91,87,85,83,82,122,117,115,111,105,104,95,95,92,89,91,93,97,97,97,96,94,90,86,83,84,84,120,120,113,108,104,98,102,97,97,91,95,95,100,99,98,95,92,89,87,84,81,81,121,125,114,112,106,108,101,96,95,95,98,99,100,100,99,95,91,87,85,83,83,83,128,120,122,111,117,106,100,96,95,95,100,104,104,100,98,94,91,88,86,85,85,84,128,125,121,113,110,104,102,97,97,102,103,103,101,99,96,92,91,89,86,87,87,87,130,128,119,115,107,102,99,100,101,104,103,102,102,100,93,90,88,87,89,91,91,91,130,121,118,111,107,101,101,101,103,107,106,101,98,94,96,91,90,93,91,94,95,96,130,124,116,111,108,103,105,103,101,103,104,102,98,96,93,92,93,94,101,98,97,97,134,123,120,108,102,101,101,106,110,101,99,100,96,96,98,98,99,99,94,98,100,100,132,123,120,109,102,101,100,107,110,101,99,100,97,97,98,97,100,101,96,99,100,100],
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
