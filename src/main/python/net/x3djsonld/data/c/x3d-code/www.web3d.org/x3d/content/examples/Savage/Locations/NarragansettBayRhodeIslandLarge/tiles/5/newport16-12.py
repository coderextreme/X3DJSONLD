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
        texture=ImageTexture(url=['../../images/5/newport16-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[45,48,49,46,49,50,51,56,61,66,69,72,72,70,68,66,63,62,61,55,52,51,40,44,47,48,49,50,53,57,64,67,71,75,76,74,71,69,67,66,62,57,55,55,36,42,45,46,48,50,54,60,67,72,73,76,78,78,75,73,70,68,64,59,56,56,38,41,44,45,48,51,56,63,71,75,74,79,81,81,78,75,73,69,64,61,57,57,38,41,41,45,48,54,60,65,70,75,80,80,80,81,80,76,72,72,68,64,60,59,40,39,40,43,48,56,60,66,71,73,80,82,80,81,82,79,78,74,71,64,62,61,32,33,35,41,48,55,63,67,70,74,79,84,82,85,84,83,79,74,71,67,62,62,33,33,35,38,45,53,59,64,69,74,77,81,87,85,84,82,80,75,71,69,65,64,37,37,34,38,39,48,53,61,67,71,75,81,85,87,85,82,78,75,71,67,67,66,37,42,40,37,38,48,51,59,65,68,73,78,81,81,82,80,78,77,71,71,67,66,35,39,43,39,42,44,52,61,65,67,69,74,77,80,81,78,76,76,71,66,64,64,33,34,36,37,41,46,52,58,63,68,71,71,75,75,79,78,75,74,70,66,62,61,38,36,35,34,36,43,51,60,66,69,70,69,71,76,78,77,74,73,70,65,59,58,36,36,39,35,37,42,49,56,62,65,70,70,71,75,76,76,73,68,67,62,56,56,36,37,37,41,38,41,46,53,59,63,64,66,68,75,74,74,70,66,61,57,58,58,38,39,42,42,42,39,41,45,54,59,62,68,67,69,71,69,65,65,56,56,58,57,42,36,40,40,42,43,43,41,45,52,58,63,67,66,68,66,60,57,56,54,56,56,48,37,37,40,40,43,45,42,41,45,52,54,58,63,65,66,61,55,54,54,55,55,54,42,35,35,40,40,39,40,40,39,42,48,55,57,59,58,58,56,56,56,57,58,59,42,37,35,35,38,39,39,38,40,40,41,45,52,54,56,57,61,59,60,59,59,61,49,38,38,35,38,36,37,40,38,40,41,43,45,47,53,53,56,60,65,64,65,61,55,47,43,36,35,34,36,37,38,41,43,40,40,43,50,55,57,58,61,63,63,66,62,51,42,38,36,40,40,41,38,38,39,39,38,40,43,51,56,58,61,62,62,67,62,52,43,39,36,39,41,42,39,37,39,39,38,40,43,50,55,58,60,61,61],
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
