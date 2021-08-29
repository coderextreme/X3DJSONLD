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
        texture=ImageTexture(url=['../../images/5/newport17-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.57529309331769,-71.24923386681724,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[72,72,71,70,69,69,69,69,67,67,67,65,63,61,59,58,57,56,56,55,55,54,54,74,72,71,72,71,69,69,68,68,68,68,66,63,61,59,58,57,57,57,56,56,55,54,73,73,73,72,72,71,68,67,68,67,67,65,63,62,60,58,58,58,58,57,56,55,54,75,75,74,73,73,72,69,68,69,68,67,65,63,62,60,59,59,58,58,57,56,55,54,77,76,76,75,74,72,69,69,70,69,67,65,63,62,61,60,59,59,58,57,56,55,54,77,77,76,76,75,73,71,71,71,69,68,66,64,63,62,61,60,59,58,56,55,54,53,77,76,76,75,76,75,74,74,72,70,68,67,65,63,62,61,60,58,57,56,55,54,53,77,76,75,75,76,73,73,74,73,70,68,67,66,64,63,62,60,59,57,56,55,54,53,80,79,80,81,79,76,75,76,74,72,70,68,66,65,63,62,61,59,57,56,55,54,53,83,83,83,85,85,81,78,78,75,72,71,69,67,66,64,63,62,59,58,56,55,54,53,85,86,86,86,85,82,80,78,75,73,72,70,68,66,65,63,62,60,58,57,55,54,52,86,87,88,87,85,82,81,79,76,73,71,70,68,67,65,64,62,60,58,57,55,54,53,87,88,87,86,83,81,81,80,77,73,71,70,68,67,66,65,63,61,59,57,56,54,53,89,88,86,85,83,81,81,78,74,72,71,70,69,68,67,65,63,62,60,58,56,55,53,89,88,86,84,81,80,79,77,75,74,73,71,70,69,67,66,64,62,60,58,56,55,54,88,88,87,84,81,81,80,77,75,74,73,72,71,69,68,66,64,62,60,59,57,56,54,85,86,87,85,82,82,82,77,75,73,72,72,70,69,68,66,64,62,60,59,57,56,54,80,79,81,84,83,82,81,77,75,73,72,71,70,69,67,65,63,62,60,58,57,55,54,79,76,75,78,81,81,79,76,75,73,72,71,70,68,67,65,63,61,60,58,57,55,53,81,79,77,74,76,78,77,76,76,74,72,70,69,67,66,64,63,61,59,58,56,55,53,81,80,80,77,76,75,74,74,76,75,71,68,67,66,65,64,63,61,59,58,56,55,53,79,80,79,77,75,73,69,69,71,70,68,66,65,65,64,63,62,61,59,58,56,54,53,79,80,79,75,74,73,69,69,69,69,68,66,65,65,64,63,62,61,59,58,56,54,53],
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
