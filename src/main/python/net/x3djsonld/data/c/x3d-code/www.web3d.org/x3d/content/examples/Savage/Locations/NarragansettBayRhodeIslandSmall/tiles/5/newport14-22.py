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
        texture=ImageTexture(url=['../../images/5/newport14-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.551080519985156,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[85,83,81,78,75,74,75,74,74,73,72,72,70,68,67,67,67,68,65,63,62,62,62,88,84,82,77,73,72,75,74,74,74,72,71,70,68,67,66,66,67,64,65,62,61,61,86,83,82,80,78,77,76,76,74,74,73,70,69,69,68,67,67,67,67,65,62,61,61,85,83,83,82,81,78,75,76,75,75,73,70,67,68,68,67,67,67,68,65,63,61,60,86,83,81,81,80,77,75,75,76,73,73,70,68,69,69,69,68,66,65,64,63,62,62,85,83,80,81,81,78,76,75,76,74,73,72,71,72,71,69,69,67,66,65,64,63,62,81,80,80,82,81,80,77,77,76,74,74,73,72,72,72,71,71,71,68,67,67,66,63,77,78,84,84,82,81,78,76,75,75,74,73,71,70,71,73,74,73,71,68,67,67,64,78,80,84,82,83,83,74,74,73,74,74,74,72,72,71,71,71,70,69,68,68,68,65,82,81,82,82,83,83,73,73,73,73,74,74,74,73,73,70,69,70,70,69,68,67,65,84,82,81,83,84,83,77,77,77,74,73,74,75,72,71,70,69,70,72,69,65,64,64,83,80,80,82,83,81,78,77,76,74,74,74,72,70,69,69,69,69,69,67,64,63,63,80,78,78,78,78,78,76,75,75,75,73,74,72,73,72,71,71,70,69,67,67,65,63,79,77,76,76,76,76,75,74,74,74,73,73,74,78,79,77,74,72,70,69,70,68,65,76,74,73,75,72,73,74,73,74,76,77,78,81,88,90,87,84,79,76,73,70,70,67,75,74,73,72,70,71,73,73,75,78,80,82,86,89,90,89,87,83,78,76,74,70,65,73,72,73,73,73,74,75,76,76,78,81,83,84,83,84,86,83,79,77,77,76,70,65,72,72,73,73,73,76,77,78,78,79,82,81,80,79,80,80,78,76,76,76,73,70,68,71,72,72,72,74,76,77,79,78,78,81,81,81,80,78,78,77,76,76,75,72,70,68,70,70,70,71,72,74,75,77,76,77,79,80,82,80,77,77,78,77,75,73,71,71,70,69,70,71,71,70,72,74,75,76,78,79,79,78,77,77,77,78,79,77,73,71,72,72,68,68,70,72,70,72,74,75,78,79,79,79,78,78,78,79,78,78,76,73,70,69,69,68,68,70,72,71,72,74,76,78,78,79,79,78,78,79,79,78,77,76,73,72,69,67],
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
