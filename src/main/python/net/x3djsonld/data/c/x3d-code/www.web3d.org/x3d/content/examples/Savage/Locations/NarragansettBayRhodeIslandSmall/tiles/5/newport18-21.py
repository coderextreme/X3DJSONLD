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
        texture=ImageTexture(url=['../../images/5/newport18-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.5833639510952,-71.26537558237226,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[64,65,65,65,66,67,71,73,74,74,74,74,74,74,78,82,82,85,87,89,93,91,91,65,65,66,67,66,67,70,72,72,73,75,75,74,74,78,81,81,84,85,88,91,90,90,66,65,65,66,65,67,69,71,71,72,75,76,77,76,78,80,81,82,86,90,90,91,91,67,66,66,67,67,69,69,69,71,72,73,75,76,78,79,80,82,84,87,89,91,91,90,68,67,67,67,68,69,69,68,71,72,72,74,76,77,79,80,82,85,87,88,90,92,91,68,67,67,67,67,67,68,69,71,73,72,71,75,79,81,82,83,85,88,87,89,91,91,65,65,66,66,66,66,65,67,70,72,72,73,76,79,83,82,82,83,85,87,89,89,92,61,62,64,64,65,66,66,66,69,72,73,74,75,78,80,80,81,85,86,87,88,89,89,59,61,62,63,65,65,66,67,69,71,73,73,74,75,78,80,84,87,88,87,88,87,88,58,62,63,63,65,64,65,69,70,70,71,71,73,75,78,80,83,86,86,87,86,86,84,59,62,63,64,64,63,64,67,68,67,67,69,71,74,77,79,80,81,83,84,84,84,84,58,62,64,63,63,63,63,64,65,65,65,67,69,72,74,77,78,78,78,79,81,82,85,54,58,62,64,65,64,64,64,65,66,66,69,70,70,73,77,78,78,77,78,79,84,87,55,60,62,64,65,65,65,64,64,64,65,68,71,71,73,75,78,79,79,80,80,83,87,56,59,61,64,65,66,66,65,64,65,66,67,70,71,72,74,76,78,79,81,80,81,84,57,59,60,63,65,66,65,65,65,66,67,69,71,72,72,73,76,77,78,79,80,80,80,58,59,59,61,64,66,65,63,63,66,68,70,72,72,72,75,77,77,78,78,79,80,82,57,59,59,61,64,65,64,62,64,67,69,71,72,73,73,75,77,78,78,78,79,80,82,58,60,60,60,63,63,63,64,67,69,70,70,71,72,72,74,76,78,78,79,79,80,81,59,58,59,60,63,64,66,67,68,68,70,70,71,73,73,73,74,76,77,78,79,81,81,59,58,61,63,64,66,68,68,67,67,69,70,71,73,73,70,70,72,73,75,78,80,81,60,61,64,65,65,65,63,64,65,66,68,68,68,73,72,70,68,69,72,75,75,78,80,61,62,65,65,64,63,61,63,65,66,69,68,69,74,73,71,70,70,73,74,73,76,79],
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
