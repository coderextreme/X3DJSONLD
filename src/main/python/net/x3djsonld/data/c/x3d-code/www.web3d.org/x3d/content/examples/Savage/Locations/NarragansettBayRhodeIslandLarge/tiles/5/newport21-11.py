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
        texture=ImageTexture(url=['../../images/5/newport21-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62149034642794,-71.5493819523225,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[120,113,114,112,115,123,128,128,128,126,122,120,120,115,113,108,105,99,96,96,96,96,119,112,115,112,113,117,119,119,117,116,115,114,110,110,107,103,95,93,94,92,95,95,115,111,109,109,111,107,107,108,108,107,106,107,105,102,98,95,95,89,87,91,91,91,111,107,106,107,104,103,102,102,103,103,100,97,96,95,92,91,91,89,88,86,87,87,106,104,101,101,102,103,99,96,94,94,97,93,91,89,90,87,85,86,86,82,82,82,104,104,102,101,98,97,94,93,91,87,87,88,88,87,85,84,83,82,83,84,83,83,107,104,102,102,98,96,93,92,89,87,85,85,85,83,83,84,85,82,83,84,82,82,108,109,104,99,96,94,91,88,86,86,87,86,86,84,82,83,83,84,83,85,83,83,105,107,106,98,96,93,89,86,86,89,86,86,88,83,83,83,83,85,84,84,85,85,102,106,107,101,96,93,90,85,84,87,85,85,84,83,84,84,84,85,87,87,86,86,96,96,100,107,99,95,93,86,84,83,82,82,84,83,83,85,90,85,84,85,88,88,97,98,95,96,98,94,88,85,87,86,81,83,87,84,82,83,92,91,86,86,86,87,97,100,97,92,91,92,88,84,82,82,83,86,85,84,82,85,91,88,88,85,86,87,97,101,99,95,95,90,89,89,84,83,84,87,91,85,81,81,88,92,89,87,87,88,98,96,98,94,94,90,91,92,90,92,93,90,90,85,81,81,90,90,89,87,87,87,97,96,95,95,93,92,92,93,97,99,96,93,88,84,82,83,88,91,89,88,87,87,98,98,95,94,94,96,95,93,95,102,101,97,94,92,88,87,90,93,90,89,86,86,100,99,98,96,96,100,99,95,94,104,103,100,98,96,94,92,91,93,92,90,87,86,103,101,99,103,105,104,104,103,103,102,103,100,96,96,93,91,90,92,88,86,85,85,104,109,107,105,109,111,112,109,108,105,102,100,97,93,92,90,89,88,85,82,79,79,107,113,113,115,115,117,117,111,109,103,97,94,94,93,92,90,87,85,83,81,79,79,108,117,118,120,117,113,112,111,111,100,94,94,91,92,91,88,86,84,83,80,78,78,113,117,119,120,118,116,115,112,113,107,100,97,92,90,91,87,85,85,84,84,80,79,114,117,120,121,118,117,117,113,112,106,101,99,92,90,91,87,86,86,84,83,79,79],
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
