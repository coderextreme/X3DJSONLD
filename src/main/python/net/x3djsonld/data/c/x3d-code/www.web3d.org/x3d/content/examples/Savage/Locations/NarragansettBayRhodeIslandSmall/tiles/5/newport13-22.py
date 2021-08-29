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
        texture=ImageTexture(url=['../../images/5/newport13-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.543009662207645,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[71,69,69,68,66,66,67,67,67,68,67,67,67,68,67,65,65,64,65,66,65,62,62,72,71,70,69,68,66,65,66,67,67,66,67,68,68,67,64,64,65,65,67,63,57,58,73,72,71,71,71,68,64,64,66,66,66,68,69,68,68,66,65,64,63,64,60,58,58,73,71,71,70,70,68,66,66,67,67,66,66,68,68,67,67,66,64,62,61,59,59,58,73,72,70,69,70,70,70,69,68,66,67,67,67,66,66,67,66,62,61,59,57,58,57,75,74,73,71,71,70,68,69,68,67,67,66,66,65,65,66,64,60,58,57,55,55,55,76,75,74,73,73,71,69,68,68,69,68,66,66,66,64,63,61,61,59,57,54,54,54,76,75,74,74,75,72,69,67,67,67,67,67,67,66,64,62,62,62,62,59,55,54,54,77,77,75,71,72,70,70,69,68,68,68,68,67,65,63,66,66,64,62,59,57,55,53,78,77,76,73,70,70,71,71,70,69,67,66,65,64,63,65,66,65,62,59,57,55,52,77,77,76,74,71,71,72,71,69,68,66,64,63,64,66,66,66,65,63,58,56,54,53,80,78,77,74,71,70,69,68,67,68,69,65,65,67,69,65,66,67,62,58,57,56,56,80,79,77,75,73,72,71,69,68,68,71,72,73,72,70,64,64,64,62,59,60,59,58,79,78,78,76,75,74,72,69,68,69,71,74,75,73,69,64,64,63,61,60,60,59,57,80,79,80,80,77,73,72,71,70,71,71,72,73,72,69,66,65,63,63,63,62,59,60,82,81,79,78,77,75,75,75,75,73,71,69,69,70,68,66,64,62,62,62,63,61,59,82,82,79,77,76,76,76,76,75,73,72,71,69,69,69,68,65,62,62,62,62,60,58,81,80,80,79,77,77,76,75,74,74,74,73,72,70,69,70,67,63,62,62,61,60,58,81,78,80,79,76,75,75,74,73,74,73,71,72,70,69,68,67,66,62,62,61,61,59,82,78,78,78,76,76,75,74,73,74,71,70,71,70,69,67,65,65,63,63,63,61,60,82,79,78,78,77,77,75,75,75,74,72,70,72,70,68,67,66,65,63,63,62,61,61,83,82,81,78,76,75,75,74,74,73,72,72,71,68,68,67,67,67,65,63,62,62,62,85,83,81,78,75,74,75,74,74,73,72,72,70,68,67,67,67,68,65,63,62,62,62],
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
