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
        texture=ImageTexture(url=['../../images/5/newport16-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[40,41,44,46,51,55,60,59,54,53,49,50,58,50,60,69,69,66,66,58,49,48,40,42,43,45,49,56,60,59,56,56,53,52,58,50,52,54,58,60,57,48,44,44,41,45,47,48,51,56,62,59,55,55,51,50,53,54,50,49,48,55,51,46,45,45,45,49,53,53,57,57,62,57,57,55,51,48,47,49,48,50,49,49,50,46,46,46,50,57,61,61,64,59,56,53,55,57,54,50,45,42,44,44,49,52,53,50,48,48,50,58,65,68,60,59,55,54,52,51,51,50,51,54,45,45,47,45,47,50,46,46,51,56,56,59,54,55,55,54,56,55,51,54,52,49,48,46,47,45,44,41,41,41,55,51,50,52,49,55,55,57,51,52,54,52,55,53,52,48,44,40,37,43,40,40,48,49,49,49,53,48,45,53,55,54,54,54,52,51,47,42,40,39,39,42,44,44,43,46,52,55,50,48,52,47,48,54,56,54,50,49,46,41,42,41,36,36,42,43,48,50,55,55,53,53,50,46,52,55,52,52,52,43,46,43,40,40,39,39,45,46,45,48,53,55,56,56,52,49,47,52,56,52,50,49,48,48,41,38,39,50,47,49,49,57,63,61,60,56,55,53,53,50,51,59,57,52,45,50,42,44,43,51,52,53,54,63,65,67,63,61,58,54,54,50,52,61,59,56,52,47,48,47,52,54,58,58,67,71,74,71,67,57,58,56,52,54,58,59,62,60,56,48,44,44,51,54,62,63,78,77,78,77,73,67,59,56,59,56,53,52,53,55,57,54,52,43,50,57,65,65,78,83,83,79,80,73,65,60,60,54,50,46,50,53,54,56,53,49,53,57,62,63,82,84,83,82,80,72,71,65,60,56,49,51,55,54,52,50,47,43,49,57,67,69,83,83,80,79,77,76,72,65,57,55,55,51,52,56,53,50,50,50,46,56,72,76,78,78,78,76,74,78,74,64,60,58,57,53,52,56,58,56,56,54,49,59,77,79,77,74,78,75,79,74,72,67,63,55,52,55,57,57,62,60,62,55,59,64,75,77,81,80,76,82,79,76,78,74,62,56,54,58,57,60,60,67,60,59,55,60,76,78,82,79,84,83,80,82,84,79,72,66,63,54,56,63,64,66,66,61,61,62,76,78,82,77,86,83,80,83,86,81,72,65,64,54,59,66,66,65,65,62,61,62,75,78],
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
