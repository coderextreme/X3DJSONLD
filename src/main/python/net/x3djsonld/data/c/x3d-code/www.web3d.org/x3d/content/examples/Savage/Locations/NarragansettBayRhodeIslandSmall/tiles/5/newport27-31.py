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
        texture=ImageTexture(url=['../../images/5/newport27-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.6560016710928,-71.18466700459715,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[69,71,72,71,68,68,71,72,72,71,70,70,71,73,75,78,78,78,77,75,72,68,66,69,70,71,73,72,72,73,73,72,72,71,71,71,71,74,76,79,80,79,77,74,69,67,70,70,71,72,73,73,71,71,72,72,72,72,72,72,73,75,78,80,79,78,74,70,67,71,71,71,73,74,73,71,71,71,71,71,71,72,73,73,74,77,79,79,77,74,70,67,70,70,70,72,74,73,71,70,70,70,70,71,72,74,74,74,75,77,77,75,73,70,68,69,69,70,70,71,70,70,70,70,70,70,70,71,73,74,74,75,76,76,75,73,70,68,69,69,69,70,70,70,70,71,71,71,71,71,71,72,73,74,75,76,76,75,73,70,68,71,70,70,70,70,70,70,71,71,71,72,72,72,72,73,74,75,74,74,74,74,71,68,72,71,70,70,70,70,70,70,71,71,72,73,73,74,74,76,75,74,73,73,72,69,67,75,72,70,70,71,71,71,71,72,73,74,74,74,74,75,76,75,73,72,71,69,67,65,77,74,73,71,71,72,72,73,74,74,75,74,74,74,76,76,74,73,71,70,69,67,66,80,78,76,74,71,72,73,75,75,76,75,74,74,74,75,76,75,74,73,71,69,68,66,82,81,78,76,73,73,74,76,77,76,75,74,74,75,76,77,76,75,73,71,70,69,67,83,82,80,78,76,76,76,77,78,77,76,74,75,76,77,77,76,75,74,73,71,70,68,85,83,81,80,79,78,77,78,78,77,76,75,75,76,77,78,77,76,75,74,73,71,69,87,85,83,81,81,82,80,79,78,77,76,75,76,77,78,78,77,76,75,74,73,72,71,89,86,84,83,84,84,83,80,79,77,76,76,76,77,78,78,77,77,76,75,74,72,71,91,87,85,84,85,85,84,82,79,77,77,76,77,77,78,78,77,77,75,74,73,71,70,91,87,86,86,86,85,84,83,80,78,77,77,77,78,78,78,77,77,75,74,73,71,70,89,86,86,87,87,86,84,83,81,79,78,78,78,79,79,78,78,77,76,75,74,72,70,87,86,85,87,86,85,84,83,81,80,79,79,79,79,80,79,78,77,76,75,74,72,71,85,84,84,85,85,85,84,83,81,80,79,79,79,80,81,80,79,78,76,75,73,72,71,83,83,84,85,85,84,84,83,81,80,80,80,80,81,81,80,79,78,76,75,73,72,71],
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
