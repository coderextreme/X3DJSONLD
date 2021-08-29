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
        texture=ImageTexture(url=['../../images/5/newport24-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.5493819523225,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[66,66,72,82,91,88,83,80,76,71,62,53,48,53,56,59,62,61,57,55,54,54,66,66,73,83,86,82,79,76,72,67,59,52,50,55,62,64,66,63,60,57,57,57,69,66,72,83,81,78,74,69,67,64,52,51,52,57,63,63,63,63,60,59,60,60,66,66,71,79,78,73,67,64,63,59,52,53,55,57,58,59,60,59,60,60,60,60,67,66,70,75,76,74,68,65,62,59,54,54,58,61,61,60,59,59,59,59,60,60,70,68,67,72,77,76,73,68,66,60,55,57,60,62,63,61,60,59,59,59,60,60,73,70,66,66,70,77,73,65,61,55,59,62,64,64,62,61,60,60,60,60,56,55,70,66,65,64,64,63,65,63,60,60,62,66,67,66,67,66,64,61,60,58,53,51,69,68,67,66,66,64,60,60,61,63,69,70,70,69,73,70,67,63,59,56,52,51,77,73,71,70,68,66,64,64,66,71,75,74,71,69,71,69,65,61,58,54,49,49,77,76,76,72,67,65,66,68,72,77,81,82,81,79,72,69,65,62,60,58,49,48,78,76,74,70,66,65,68,72,76,80,82,82,82,82,78,70,67,63,59,56,50,49,80,77,74,71,66,67,68,72,74,80,84,78,79,75,70,64,60,57,55,53,50,50,79,75,74,74,72,69,72,72,73,75,78,72,79,71,63,57,55,54,54,52,51,51,78,80,85,89,78,73,72,72,73,74,74,68,67,64,58,58,59,55,54,53,53,53,86,90,94,93,78,72,72,72,72,72,71,68,66,62,63,61,59,58,56,56,56,56,84,92,95,86,77,72,72,72,72,72,71,69,66,64,67,65,64,61,58,59,63,63,81,85,90,80,72,72,72,72,73,73,71,68,66,73,72,70,69,68,65,67,70,71,81,81,83,78,74,73,72,72,74,73,68,67,74,80,79,79,79,76,76,77,77,77,82,85,85,83,78,76,74,72,69,71,69,69,75,85,84,86,86,85,84,83,79,79,84,84,87,85,83,78,74,69,68,68,68,69,77,85,87,86,84,83,81,77,71,70,85,86,85,85,81,79,73,69,69,68,68,71,80,84,85,84,81,81,78,74,67,65,84,89,87,86,82,80,72,70,69,69,71,74,80,83,83,81,80,79,76,72,65,64,84,89,87,87,83,79,72,70,69,70,71,75,80,82,82,81,80,79,76,71,64,63],
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
