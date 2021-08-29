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
        texture=ImageTexture(url=['../../images/5/newport19-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59143480887271,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[79,79,79,80,81,78,76,73,74,77,79,83,86,87,87,85,86,87,90,88,86,83,84,75,75,75,77,77,74,72,70,69,71,75,80,84,86,86,86,86,86,87,88,87,86,84,76,75,74,74,73,70,69,66,66,70,74,76,80,82,83,84,85,87,90,87,84,83,84,75,74,74,74,71,69,69,67,66,67,71,75,78,80,81,82,84,86,86,85,84,85,83,73,72,73,73,71,69,69,69,69,67,69,74,78,80,81,82,85,85,84,84,84,85,84,73,74,74,74,71,70,70,72,70,69,69,71,75,77,80,82,84,85,85,84,84,84,83,72,71,70,70,68,67,69,71,69,67,67,68,71,74,79,83,84,85,84,83,84,85,83,67,66,64,64,63,63,66,67,66,66,67,69,71,74,78,81,82,83,84,83,83,84,83,62,62,61,58,59,61,61,63,63,67,70,74,75,77,79,80,81,83,84,83,82,82,82,55,55,57,57,58,60,60,61,64,69,75,78,80,82,83,86,83,82,80,81,82,82,81,54,53,56,59,61,61,61,63,67,72,77,80,81,83,85,89,85,81,79,80,81,80,79,62,58,56,59,60,60,59,65,71,74,76,78,79,80,82,86,83,81,81,82,80,78,78,60,61,59,60,59,59,59,63,68,70,69,68,69,71,75,82,83,82,82,82,80,78,80,58,60,60,59,57,57,58,60,63,63,63,64,67,68,73,80,82,82,83,82,82,80,81,58,60,59,60,59,58,58,59,60,61,62,65,66,69,73,77,80,82,82,82,82,82,82,59,60,59,58,59,59,61,61,62,63,62,65,68,69,70,74,77,79,80,80,82,82,82,60,61,60,57,58,60,62,61,61,62,63,66,68,70,69,71,74,76,77,80,82,81,81,61,59,57,57,60,60,62,60,59,61,63,65,65,66,68,70,73,73,75,79,81,81,79,58,58,57,57,56,57,59,60,60,62,65,66,65,64,65,70,75,76,76,77,79,81,79,60,61,60,58,57,57,57,59,60,63,65,64,62,61,63,67,72,74,74,76,80,81,79,61,60,61,60,59,58,57,58,59,61,61,59,60,60,62,67,70,71,73,75,78,79,77,61,60,61,61,59,60,60,58,57,57,57,59,61,62,63,65,67,69,72,73,74,76,76,61,61,62,61,60,60,61,58,57,56,56,60,62,63,60,64,66,68,71,73,74,74,74],
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
