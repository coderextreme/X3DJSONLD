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
        texture=ImageTexture(url=['../../images/5/newport21-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62149034642794,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[90,99,109,112,119,117,115,119,118,119,115,111,112,115,117,117,111,104,106,105,106,107,94,100,107,113,118,117,115,121,120,120,116,109,109,107,106,107,106,102,104,103,103,104,99,106,110,113,114,115,116,123,120,112,110,108,102,104,106,102,101,99,101,105,106,105,101,107,110,114,117,116,120,119,117,112,106,104,98,97,99,99,98,99,98,103,102,102,97,104,108,112,113,117,119,117,111,106,105,100,99,96,91,92,96,94,96,99,102,102,93,100,104,109,111,115,116,112,108,105,100,96,96,97,94,90,89,91,93,95,98,99,90,95,101,104,108,112,109,108,106,102,99,101,98,95,94,90,89,91,90,90,95,97,87,91,94,102,107,108,108,107,106,102,99,97,96,92,92,91,90,88,91,91,94,94,86,90,95,101,107,107,105,103,103,100,96,94,91,91,90,90,90,89,89,92,95,95,84,91,100,103,106,106,105,103,97,95,94,91,88,88,89,95,92,88,89,90,91,91,85,95,101,106,105,104,104,103,97,92,97,92,86,86,85,92,90,88,90,91,90,91,91,90,95,102,103,106,102,96,91,86,94,94,91,86,83,84,86,91,93,91,93,95,99,92,94,97,100,101,97,92,97,94,86,84,83,82,83,87,90,93,94,94,95,95,86,95,95,100,99,96,90,91,93,91,85,84,82,82,85,91,93,94,98,96,97,96,81,86,85,82,82,85,87,87,87,85,91,89,82,84,92,96,98,100,100,99,101,99,79,78,81,85,89,85,83,83,82,81,83,81,81,84,95,99,102,103,100,100,96,95,75,76,78,83,84,82,81,80,80,81,81,81,81,84,95,102,103,100,97,95,91,90,77,75,88,89,88,86,80,80,80,81,83,83,85,86,94,101,102,100,98,97,93,92,76,76,89,91,86,86,80,80,82,84,85,88,87,84,93,99,100,101,101,100,95,95,76,81,91,90,88,83,80,80,81,82,83,85,85,84,91,97,99,101,103,101,96,95,76,77,88,88,88,85,85,81,80,80,81,82,81,83,89,95,98,100,102,98,92,90,76,75,78,82,83,84,84,82,78,78,79,80,81,84,89,94,96,98,98,94,86,86,80,77,75,75,78,80,80,81,78,78,79,80,81,84,89,91,92,95,93,86,82,81,80,77,75,75,77,79,79,81,78,78,79,80,81,84,89,90,92,94,91,85,81,81],
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
