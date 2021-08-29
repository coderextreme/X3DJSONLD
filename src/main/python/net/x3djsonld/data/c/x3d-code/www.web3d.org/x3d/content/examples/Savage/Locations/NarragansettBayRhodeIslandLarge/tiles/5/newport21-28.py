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
        texture=ImageTexture(url=['../../images/5/newport21-28.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62149034642794,-71.17563093358456,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[58,55,50,45,43,43,42,43,47,52,58,62,62,57,56,55,56,58,60,62,68,69,59,55,51,47,43,43,43,43,48,53,58,60,62,60,56,56,56,58,60,62,69,70,58,56,51,47,43,43,43,43,48,54,58,59,60,61,60,58,57,59,60,63,69,70,57,52,48,47,44,43,44,48,50,54,56,58,60,64,62,60,59,60,61,65,69,69,46,48,48,46,44,45,47,48,54,58,59,60,63,65,63,60,60,60,62,67,69,70,47,46,45,45,45,46,48,51,54,57,60,64,66,66,64,62,60,61,63,68,70,71,46,45,44,45,46,47,48,53,57,59,62,65,69,69,66,63,62,62,65,69,71,72,46,45,44,45,47,48,50,54,59,63,64,68,72,72,68,64,62,64,67,71,73,73,44,45,46,45,47,49,52,57,61,64,65,68,73,75,70,65,65,66,69,72,74,74,42,42,43,44,47,50,54,58,62,64,66,69,76,77,72,69,67,69,71,72,73,73,41,41,42,45,46,49,54,60,63,63,67,72,77,78,75,72,70,71,71,72,73,74,40,41,41,44,47,50,55,61,63,65,68,73,77,79,78,74,72,71,70,72,74,74,40,40,44,46,47,52,61,64,64,66,69,74,78,80,79,77,74,71,70,72,75,75,41,44,47,49,51,54,63,66,65,67,69,73,78,80,81,79,76,71,69,72,73,72,42,46,48,49,50,56,66,68,67,69,69,72,76,79,81,79,76,70,69,72,69,68,50,52,50,49,50,56,68,70,69,70,71,72,75,79,82,79,76,69,69,71,64,63,46,51,52,50,49,53,65,70,71,72,73,75,77,81,82,79,73,66,69,69,62,61,46,46,48,51,52,52,61,71,74,73,74,77,80,84,81,75,69,64,70,65,61,61,51,50,50,57,57,56,66,72,77,77,76,79,81,84,80,73,67,64,68,61,61,61,54,50,55,57,59,59,66,70,73,75,77,79,82,82,78,72,64,63,64,61,61,61,58,53,57,59,61,61,68,72,77,78,79,82,83,81,78,73,66,62,61,61,61,61,62,57,64,61,62,65,68,70,74,73,77,81,82,80,77,74,68,63,61,61,61,61,65,62,67,68,66,65,72,70,71,75,81,82,83,80,76,72,66,62,61,61,61,61,66,60,66,68,67,65,71,70,71,76,81,83,82,80,76,72,66,61,61,61,61,61],
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
