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
        texture=ImageTexture(url=['../../images/5/newport15-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.55915137776267,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[68,68,70,72,71,72,74,76,78,78,79,79,78,78,79,79,78,77,76,73,72,69,67,69,70,70,71,71,72,75,76,76,77,79,81,80,82,84,84,83,79,77,74,71,68,66,69,71,71,72,73,75,78,78,78,78,79,81,81,82,84,85,83,81,78,73,71,69,66,71,73,73,73,76,79,82,82,83,81,80,81,82,82,81,79,78,77,76,72,71,70,67,74,75,74,74,77,78,82,83,82,80,79,81,84,85,84,81,79,77,73,72,71,69,68,75,76,75,75,78,80,82,83,82,80,79,80,83,83,84,82,79,77,74,77,76,74,73,74,76,77,78,80,81,81,82,82,81,80,80,81,82,83,80,79,78,80,82,81,78,77,76,75,76,78,80,79,78,79,81,81,80,81,81,83,83,81,80,79,83,84,80,78,77,73,74,76,78,78,78,79,80,82,83,82,83,82,84,83,82,79,80,81,81,77,75,74,74,74,75,76,76,79,80,80,82,83,83,85,84,83,82,82,82,80,79,76,74,73,73,75,75,76,78,78,79,80,79,81,83,86,87,86,84,83,84,82,78,75,74,73,73,76,74,74,76,78,79,82,81,80,81,84,86,87,86,85,84,84,81,78,76,76,74,74,75,74,75,78,78,81,82,81,81,82,85,86,86,86,86,84,82,81,80,78,77,76,75,74,77,77,77,78,80,81,81,83,83,84,84,85,85,85,84,82,82,81,79,78,77,75,74,78,78,77,79,81,82,82,83,83,84,83,82,84,85,85,83,83,81,81,81,79,77,76,77,79,78,80,82,81,82,83,83,85,84,83,83,84,84,83,81,81,80,80,81,80,78,77,78,78,79,80,80,82,83,84,85,85,85,84,84,84,83,81,80,78,78,80,80,78,79,79,80,81,81,81,82,83,84,85,86,86,86,86,86,83,81,81,79,77,76,77,77,80,82,83,83,83,83,84,84,85,88,90,90,89,88,88,85,82,81,79,76,74,74,75,83,85,86,85,86,86,86,85,87,90,92,90,88,87,86,84,82,81,78,76,74,74,74,84,84,85,86,86,87,87,86,87,88,88,88,88,87,85,85,84,83,81,79,77,75,74,84,83,83,85,86,87,88,87,87,87,87,89,89,87,85,84,83,82,80,78,77,76,74,85,84,84,85,87,89,89,89,89,87,87,89,89,87,85,84,83,82,81,79,77,76,75],
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
