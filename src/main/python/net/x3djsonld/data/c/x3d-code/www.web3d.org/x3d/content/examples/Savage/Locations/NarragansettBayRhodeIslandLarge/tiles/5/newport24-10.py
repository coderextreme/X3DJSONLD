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
        texture=ImageTexture(url=['../../images/5/newport24-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[72,75,74,75,86,80,74,71,69,67,67,67,66,67,66,66,66,66,66,66,66,66,72,72,73,74,79,76,72,68,67,67,67,68,66,67,67,68,68,68,68,66,66,66,72,72,72,72,72,72,70,67,67,68,70,70,70,71,70,72,73,70,72,70,69,69,72,73,74,77,77,75,70,68,70,73,73,73,73,73,73,74,72,72,74,71,66,66,74,73,75,76,78,75,71,73,74,77,77,75,76,78,77,76,76,74,77,71,67,67,75,77,75,76,77,76,75,79,80,80,81,79,79,83,81,79,77,76,75,73,70,70,75,76,77,79,76,76,77,80,82,82,83,83,84,85,83,81,79,79,78,76,73,73,78,77,76,81,79,78,80,82,85,86,87,87,87,88,86,84,83,81,80,76,70,70,83,80,78,81,81,80,83,86,90,89,91,91,90,89,87,87,86,84,80,70,69,69,88,84,79,81,87,86,87,91,94,94,94,95,93,91,90,89,87,84,76,72,78,77,91,87,84,83,90,92,95,97,98,100,99,98,95,93,92,84,84,79,76,78,76,77,92,89,85,86,91,95,100,102,103,105,103,99,96,96,93,90,82,78,78,79,78,78,92,92,89,91,93,97,102,108,109,106,102,100,97,96,93,90,84,79,78,81,81,80,96,96,92,98,98,99,106,112,115,113,105,102,100,99,93,87,82,80,78,81,81,79,98,97,97,101,100,100,110,113,110,106,105,105,101,97,94,91,86,82,79,81,79,78,103,106,103,102,102,105,109,109,108,109,108,107,103,98,95,92,87,82,81,81,83,86,106,109,106,108,108,108,106,107,108,111,108,106,102,100,94,88,81,81,81,81,82,84,106,109,107,108,109,107,106,107,108,107,104,101,97,99,89,84,82,81,81,81,81,81,105,107,110,110,110,111,106,107,110,106,103,99,97,92,89,85,81,81,81,82,81,81,99,107,113,115,114,113,106,107,109,105,102,98,96,92,89,87,85,84,83,83,82,82,102,106,109,113,112,113,110,106,107,104,101,96,96,95,92,90,87,87,85,84,84,84,103,109,108,108,109,108,105,104,104,102,98,96,96,96,93,92,90,88,88,88,85,85,103,109,110,109,109,107,106,102,99,95,93,92,92,94,93,91,91,90,89,87,84,84,103,109,111,109,109,107,105,101,98,94,93,92,92,94,93,91,91,90,89,86,83,84],
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
