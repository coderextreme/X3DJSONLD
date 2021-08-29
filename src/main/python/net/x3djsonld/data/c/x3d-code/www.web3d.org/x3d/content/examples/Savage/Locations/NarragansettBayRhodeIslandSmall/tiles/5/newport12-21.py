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
        texture=ImageTexture(url=['../../images/5/newport12-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.26537558237226,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[59,59,58,58,60,61,61,62,60,60,61,61,60,61,63,64,63,62,61,62,62,63,64,64,63,61,60,62,64,64,62,60,60,60,60,61,60,59,60,61,62,62,62,63,66,67,65,64,63,63,64,64,66,65,64,62,61,61,61,61,60,59,61,62,62,63,62,64,65,64,64,64,65,65,64,67,66,65,64,63,64,65,67,64,61,61,64,65,64,62,61,62,67,67,68,68,66,64,64,64,64,65,64,65,68,69,67,64,63,65,65,62,62,61,61,68,68,68,68,68,67,66,67,69,69,66,66,66,65,65,64,63,63,62,62,63,63,64,72,70,70,69,69,70,70,70,71,69,66,64,63,64,64,64,65,65,65,65,67,66,64,75,73,72,71,69,70,71,70,70,68,67,64,64,64,66,67,69,69,67,68,67,65,63,73,75,76,71,71,70,70,71,71,72,72,69,69,68,68,69,69,68,65,64,63,62,62,75,76,75,73,73,72,69,69,71,72,74,72,71,70,69,69,69,68,66,65,65,64,63,76,75,76,75,75,74,72,72,72,74,75,73,70,72,71,72,71,70,70,69,68,66,64,80,79,78,79,79,77,76,77,77,76,78,75,72,73,73,74,73,71,72,71,69,66,64,82,81,80,81,82,79,77,78,79,79,77,77,75,75,73,73,71,69,69,68,67,66,65,82,80,81,82,83,83,84,80,79,78,78,79,77,77,75,74,72,71,70,69,68,66,65,81,83,83,84,83,86,89,84,79,78,82,82,78,76,77,75,73,73,72,70,69,67,66,81,83,86,85,84,85,85,86,83,84,84,82,80,77,76,75,73,72,69,67,66,68,67,82,84,86,85,87,86,84,86,86,85,85,82,81,78,77,76,74,71,70,69,68,68,68,84,84,85,85,86,87,87,86,86,84,82,81,80,79,78,76,75,73,71,72,70,69,68,81,83,85,85,86,86,86,87,87,87,85,84,82,79,78,75,75,75,73,73,72,69,67,81,83,84,85,85,85,87,88,88,90,89,87,84,82,81,77,75,74,72,72,73,73,70,83,83,83,84,85,87,89,90,89,89,88,88,85,83,82,78,76,75,72,72,74,72,70,82,82,83,85,86,86,87,90,92,91,88,86,84,83,80,79,79,78,75,72,71,71,69,81,82,83,84,85,85,86,90,92,90,87,86,84,83,79,79,80,79,75,73,73,72,71],
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
