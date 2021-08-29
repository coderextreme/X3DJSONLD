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
        texture=ImageTexture(url=['../../images/5/newport31-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.46144053614887,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[76,75,78,79,80,77,67,59,60,63,59,53,49,47,45,37,31,25,22,22,22,23,79,77,79,81,79,73,63,60,62,65,63,60,55,46,42,37,25,23,23,25,24,24,79,78,79,79,76,67,63,63,62,63,67,64,56,48,38,30,24,24,28,34,29,27,80,81,81,79,75,67,62,61,59,62,64,61,55,45,37,31,26,28,36,45,50,46,80,85,82,80,74,64,59,57,56,58,59,56,50,42,35,28,27,31,39,47,50,49,81,85,84,80,77,68,61,55,51,51,50,47,41,36,31,30,30,32,36,47,48,47,81,92,85,80,77,70,63,57,51,46,44,41,35,32,33,33,32,33,35,44,46,46,82,85,83,79,76,70,65,59,49,42,39,37,35,35,38,40,36,38,42,42,43,43,82,82,79,75,71,66,61,51,47,46,41,37,37,37,40,42,44,42,44,44,44,45,83,80,76,72,66,61,54,49,50,47,42,38,38,39,43,46,48,45,48,48,49,50,82,79,74,69,62,56,49,46,46,44,40,38,45,44,48,51,50,48,49,49,53,55,77,74,70,64,59,51,49,52,45,42,39,41,47,48,53,57,56,57,51,52,57,59,74,68,63,60,53,51,54,53,48,44,41,44,47,51,57,62,64,65,54,55,60,61,67,63,59,54,53,55,60,54,48,44,46,47,48,49,54,58,60,62,54,58,60,62,62,58,57,60,59,57,55,50,46,46,50,51,50,52,59,61,58,55,55,57,61,63,61,61,62,64,63,56,52,51,48,50,53,55,54,57,60,63,64,56,54,54,60,61,61,62,64,69,71,66,59,55,48,52,54,56,59,60,62,63,62,60,56,54,56,57,61,62,67,70,73,70,65,56,51,53,56,60,62,63,64,60,60,60,58,56,55,55,62,66,69,72,70,68,65,54,55,57,59,63,65,64,64,59,59,60,59,57,57,56,66,70,71,72,69,65,57,56,59,62,64,67,68,65,61,61,58,58,57,57,57,56,70,73,70,69,68,66,62,58,62,65,69,70,70,65,67,67,57,57,58,59,57,57,72,75,72,71,69,69,65,60,65,69,72,73,70,68,74,71,65,62,60,60,57,57,74,74,73,72,71,72,67,63,69,72,75,73,71,77,77,76,77,69,59,60,58,58,75,74,73,72,71,72,67,63,69,73,75,73,72,79,78,76,78,71,60,60,58,58],
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
