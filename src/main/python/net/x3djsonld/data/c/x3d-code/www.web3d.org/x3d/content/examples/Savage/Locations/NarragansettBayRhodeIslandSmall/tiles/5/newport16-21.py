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
        texture=ImageTexture(url=['../../images/5/newport16-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.56722223554018,-71.26537558237226,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[70,70,70,71,72,74,74,73,72,73,74,75,77,77,78,78,80,80,80,81,81,83,85,70,71,72,73,73,73,73,73,73,74,74,75,77,78,79,79,79,79,80,82,83,85,86,68,70,70,72,72,71,72,72,71,73,74,74,75,77,79,80,79,80,81,83,85,86,87,66,67,68,69,70,71,72,71,71,72,75,75,77,79,81,81,80,81,82,84,85,85,88,66,66,66,68,69,71,71,71,72,73,74,76,78,80,81,80,79,80,83,84,85,86,90,65,65,66,67,68,68,70,71,72,71,72,75,79,81,81,80,79,82,85,86,86,85,89,64,65,66,67,67,66,66,69,71,72,72,75,80,84,84,83,83,86,89,89,86,82,84,62,64,64,64,65,65,67,68,71,72,73,76,79,81,83,84,85,87,87,87,85,82,81,59,62,63,60,62,64,66,68,70,71,74,75,76,79,81,82,84,86,86,87,87,85,82,59,61,60,60,60,61,63,67,69,71,75,75,76,80,82,83,82,84,86,88,89,89,86,58,58,59,60,61,61,63,66,68,69,70,72,73,78,81,81,82,83,85,87,87,89,89,54,54,55,58,60,60,61,64,66,68,71,74,75,77,79,80,82,86,86,86,85,85,87,51,52,54,58,58,59,59,63,64,67,70,73,75,77,79,80,83,86,86,86,86,84,84,48,50,53,56,57,60,62,63,64,65,66,69,72,76,78,81,85,84,85,85,86,86,84,48,50,54,56,58,60,61,61,62,64,65,67,69,72,76,81,85,84,83,82,82,83,82,49,50,53,54,56,58,58,60,61,64,66,67,69,68,75,78,80,80,80,81,81,84,83,48,48,51,51,51,53,56,60,59,61,66,68,68,70,75,78,79,76,77,80,82,85,85,47,48,49,51,51,52,55,58,58,61,63,69,69,69,73,77,79,78,79,79,81,84,86,48,47,47,48,50,51,51,54,57,61,65,70,71,71,74,78,80,82,83,81,81,84,85,48,48,47,48,51,52,51,53,57,61,63,66,70,73,73,75,77,78,80,81,82,82,83,47,48,48,50,52,52,53,53,55,59,63,66,68,69,71,73,76,78,79,80,81,78,79,48,49,50,51,52,53,53,55,56,59,62,64,66,69,70,72,74,76,78,79,78,78,78,49,51,51,51,52,52,54,54,56,59,62,63,67,70,71,72,73,75,77,77,77,78,79],
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
