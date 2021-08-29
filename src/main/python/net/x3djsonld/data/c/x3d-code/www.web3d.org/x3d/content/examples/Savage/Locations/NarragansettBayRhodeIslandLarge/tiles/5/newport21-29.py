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
        texture=ImageTexture(url=['../../images/5/newport21-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62149034642794,-71.15364557954115,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[69,74,75,71,73,78,81,80,76,68,62,59,57,57,54,48,45,42,41,41,41,41,70,75,74,73,76,82,85,84,78,72,66,62,60,59,54,51,48,42,41,41,41,41,70,74,73,74,79,86,88,84,78,73,68,65,65,61,58,53,48,43,41,41,41,41,69,71,73,77,82,87,88,82,77,72,69,67,66,65,61,53,44,41,41,41,41,41,70,71,73,78,84,87,84,79,76,72,71,70,69,66,59,53,47,42,41,41,41,41,71,71,74,80,86,87,81,75,74,73,73,72,70,67,61,53,47,45,43,41,41,41,72,72,74,81,87,84,77,72,71,72,72,72,72,69,60,54,49,46,44,42,42,42,73,73,75,81,84,79,73,70,70,70,71,71,72,68,62,56,52,47,43,42,41,41,74,74,76,78,79,74,70,69,70,70,73,73,73,67,62,56,51,46,44,42,42,42,73,74,76,77,72,68,64,64,69,74,75,74,72,68,61,57,52,47,45,43,42,42,74,75,75,73,67,64,62,64,66,66,70,73,72,69,64,58,53,47,44,46,43,43,74,75,72,67,62,61,61,62,62,65,67,69,69,66,62,58,52,47,45,44,44,44,75,73,67,61,61,61,61,61,61,62,65,67,67,63,60,59,54,48,45,42,40,40,72,67,61,61,61,61,61,61,61,62,63,66,65,62,56,53,50,46,43,42,41,40,68,61,61,61,61,61,61,61,61,61,62,64,64,61,58,53,49,46,43,42,41,41,63,61,61,61,61,61,61,61,61,61,61,63,61,59,62,57,52,46,46,45,44,44,61,61,61,61,61,61,61,61,61,61,63,63,62,63,61,56,58,50,47,47,46,45,61,61,61,61,61,61,61,61,61,62,65,65,63,65,62,56,54,52,49,47,46,45,61,61,61,61,61,61,61,61,62,63,64,64,62,61,59,58,55,51,50,48,46,46,61,61,61,61,61,61,61,61,63,64,65,65,63,61,60,60,57,53,52,51,48,47,61,61,61,61,61,61,61,62,64,65,67,66,62,61,61,59,55,54,53,53,50,49,61,61,61,61,61,61,61,64,65,67,68,66,64,64,63,62,58,57,55,52,48,48,61,61,61,61,61,61,61,62,66,68,68,65,65,64,64,63,61,58,56,53,49,48,61,61,61,61,61,61,61,62,65,68,67,65,65,64,64,63,61,59,56,53,49,48],
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
