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
        texture=ImageTexture(url=['../../images/5/newport14-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.551080519985156,-71.26537558237226,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[77,79,83,88,87,85,84,84,80,79,79,81,89,91,89,88,87,86,86,87,86,85,85,76,79,80,86,86,84,82,81,81,79,78,82,86,88,89,88,86,84,85,87,87,89,88,78,80,82,85,85,84,81,81,81,79,82,81,84,85,86,86,87,88,86,86,86,86,86,83,87,87,87,86,82,80,79,79,79,81,80,81,84,83,84,87,88,85,85,86,86,85,86,84,83,83,81,80,79,78,81,80,79,81,83,86,82,82,83,83,84,85,88,88,86,81,79,77,78,78,78,77,79,82,82,79,81,84,87,85,83,84,84,86,85,86,85,85,76,76,76,78,79,78,77,80,82,82,81,82,83,85,85,85,86,86,85,83,82,82,81,74,77,77,77,76,77,77,77,80,80,80,79,80,82,84,86,86,84,84,84,84,81,77,71,74,75,73,75,78,78,80,81,83,83,80,80,82,83,85,85,83,83,82,82,80,78,67,68,70,71,74,76,78,80,82,83,82,79,79,81,83,85,85,84,82,81,80,82,82,63,65,68,70,72,73,76,78,79,80,79,77,78,81,83,84,84,84,81,81,81,83,84,63,65,68,69,69,72,75,76,77,77,77,77,78,80,82,84,83,83,83,83,82,82,83,59,61,65,67,68,72,73,74,73,72,74,77,77,79,81,83,81,82,86,87,86,82,80,53,55,57,61,67,71,72,72,71,71,71,74,78,79,80,80,79,80,86,89,88,83,79,53,53,53,54,60,68,70,69,68,70,70,71,74,76,76,75,77,81,86,90,87,82,76,53,53,53,53,54,59,66,67,67,68,69,70,71,73,74,73,75,79,81,84,82,77,75,53,53,53,53,53,53,63,68,67,67,68,69,69,71,73,73,72,75,77,79,78,74,73,53,53,53,53,53,53,56,66,69,67,70,71,70,69,70,71,72,73,74,74,73,73,72,53,53,53,53,53,53,53,62,67,66,71,73,69,68,71,71,71,71,71,70,71,72,71,53,53,53,53,53,53,53,57,62,65,69,70,68,68,72,74,73,72,70,69,69,71,70,53,53,53,53,53,53,53,54,60,66,67,68,68,70,71,73,74,72,70,68,67,69,69,53,53,53,53,53,53,53,53,59,66,66,68,71,72,71,73,76,74,70,67,66,67,68,53,53,53,53,53,53,53,53,55,64,66,68,71,71,69,72,75,73,69,66,66,67,68],
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
