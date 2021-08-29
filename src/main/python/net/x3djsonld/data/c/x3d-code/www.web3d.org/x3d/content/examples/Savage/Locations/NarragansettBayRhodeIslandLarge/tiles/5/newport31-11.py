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
        texture=ImageTexture(url=['../../images/5/newport31-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.5493819523225,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[91,82,93,96,96,93,89,98,104,115,117,119,124,113,108,109,109,105,104,95,90,91,90,83,82,90,98,94,85,89,101,112,119,120,118,113,114,111,112,113,107,102,99,96,82,82,93,92,93,97,94,83,94,103,114,120,119,117,111,117,112,118,112,103,95,94,82,84,92,87,92,85,91,84,89,92,105,115,118,116,112,103,110,112,108,101,99,99,82,83,93,87,88,89,81,84,87,88,96,105,114,114,103,90,94,99,106,98,93,93,82,82,90,90,83,81,82,92,89,88,90,92,92,89,91,84,82,94,102,93,91,91,83,86,88,88,81,92,96,95,86,81,81,83,77,79,85,79,76,81,90,94,95,92,90,93,90,81,81,90,87,77,87,88,76,74,75,75,76,77,79,87,84,90,89,90,89,91,88,91,95,92,89,82,78,82,80,73,79,74,75,78,80,83,83,87,89,90,91,90,94,98,94,92,92,90,87,87,84,77,72,77,72,77,83,89,87,89,90,91,91,93,95,96,97,97,96,96,97,91,88,77,72,69,71,80,91,91,84,86,90,93,90,89,94,99,102,101,103,103,100,98,90,83,71,72,73,73,76,81,85,83,93,96,89,94,99,102,107,107,104,102,100,98,94,83,71,71,69,72,74,78,83,84,83,85,91,97,102,109,108,107,107,101,97,89,87,83,78,70,69,73,74,80,78,80,84,83,89,99,100,106,107,105,105,102,94,86,80,81,80,76,73,73,77,78,78,81,82,81,85,91,96,98,103,101,101,98,95,87,81,79,76,77,78,73,75,72,76,81,87,87,81,87,91,95,95,97,97,96,93,90,82,79,77,74,74,74,74,72,72,80,88,89,81,82,89,91,94,96,96,94,91,87,82,79,78,73,74,73,69,69,73,85,92,93,84,82,83,86,89,89,91,90,89,86,82,81,77,75,71,70,73,76,77,82,88,90,80,79,78,81,85,88,87,85,84,86,87,79,71,69,68,72,71,77,82,89,92,93,78,79,77,79,80,81,80,85,86,86,83,77,70,69,69,71,69,71,83,96,102,104,78,77,76,77,77,76,77,79,79,80,80,78,79,67,67,68,67,75,83,98,109,110,78,76,76,74,73,73,73,74,77,80,80,76,69,66,65,70,75,84,88,95,109,112,79,75,77,75,73,73,73,75,76,78,80,76,66,66,64,72,77,86,87,96,111,114],
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
