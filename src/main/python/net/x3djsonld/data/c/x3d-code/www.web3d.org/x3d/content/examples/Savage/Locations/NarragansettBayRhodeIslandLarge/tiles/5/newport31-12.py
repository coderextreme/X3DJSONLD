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
        texture=ImageTexture(url=['../../images/5/newport31-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[91,93,92,91,94,90,91,89,95,99,97,90,89,82,80,84,84,87,85,85,84,84,96,90,91,88,83,83,91,92,95,103,101,95,85,82,84,83,83,83,85,83,82,83,94,93,89,83,85,91,98,98,96,102,100,89,82,90,88,83,80,83,84,83,85,85,99,90,83,85,91,92,104,107,108,108,97,86,87,84,82,79,79,84,85,91,94,91,93,89,86,94,99,102,118,120,116,104,94,91,83,80,77,80,79,84,89,90,92,92,91,86,91,101,107,114,128,133,123,102,93,89,85,77,78,81,83,85,93,98,97,98,92,93,98,103,117,117,124,128,121,104,100,97,86,79,80,83,83,88,96,105,101,100,90,97,102,104,110,111,120,123,118,106,104,100,88,85,81,85,91,99,103,99,99,98,90,101,104,104,109,109,112,116,118,109,111,97,86,81,83,93,103,101,98,99,97,98,91,100,105,102,105,107,105,109,108,106,107,102,85,73,80,90,94,97,93,95,92,93,93,99,101,105,109,102,104,104,98,93,90,89,83,76,73,77,91,95,86,84,87,86,96,103,105,106,103,97,103,99,95,85,79,76,74,73,69,75,76,85,87,78,74,76,85,93,100,102,96,91,96,96,88,85,83,80,72,74,68,69,62,66,70,71,71,69,83,86,91,91,82,90,87,88,85,89,80,77,73,68,63,57,62,62,63,64,64,62,81,84,81,79,79,85,83,84,85,91,86,80,77,61,59,57,58,58,59,62,63,62,87,88,88,86,82,76,74,77,79,84,84,76,69,64,60,54,56,57,57,61,55,55,89,92,97,96,91,85,81,75,76,71,72,69,69,71,64,63,61,57,55,55,55,55,93,97,101,102,101,94,83,80,76,72,70,69,72,73,68,65,62,58,56,56,58,58,90,103,106,108,101,94,95,88,81,72,68,69,71,83,73,72,68,61,58,55,54,53,93,103,109,106,109,100,99,92,84,75,71,71,71,76,76,77,73,68,60,55,50,50,104,111,114,103,101,105,100,98,89,80,76,74,78,77,84,80,74,63,62,56,51,51,110,116,111,103,110,108,106,103,97,92,85,84,85,84,78,77,74,67,62,60,62,61,112,115,109,115,117,117,115,107,105,104,98,95,88,82,77,71,76,77,75,72,65,63,114,118,108,116,118,119,116,108,106,106,101,94,88,82,77,70,77,77,78,72,65,64],
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
