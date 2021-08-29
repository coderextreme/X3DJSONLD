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
        texture=ImageTexture(url=['../../images/5/newport16-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.68129407658296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[38,35,33,31,31,29,31,34,38,38,37,39,40,39,41,38,36,35,34,36,39,40,38,37,35,33,35,32,32,33,39,38,39,44,45,42,41,40,39,37,38,38,40,40,34,34,35,36,36,36,34,36,38,39,43,47,46,44,43,41,41,41,40,39,40,41,34,36,35,34,35,37,36,38,38,41,44,47,44,44,40,41,42,43,43,43,44,45,36,35,38,36,35,37,36,34,41,46,44,41,43,41,43,41,42,41,45,44,48,50,36,36,35,37,34,37,39,39,36,44,44,45,48,50,48,46,42,44,44,43,48,50,36,34,35,35,35,39,43,42,42,49,53,53,55,52,48,48,50,46,45,47,50,51,34,34,36,39,46,49,55,53,57,58,61,62,60,56,51,47,48,45,42,49,53,55,34,34,39,49,61,60,58,65,62,69,74,68,60,54,56,50,53,50,45,39,48,48,37,37,42,50,63,64,67,69,74,75,73,73,66,62,54,52,48,42,45,52,45,43,35,37,40,48,60,72,76,73,80,83,78,73,67,61,57,49,48,42,43,48,48,48,40,41,41,51,57,71,79,82,84,79,72,68,67,62,54,53,44,43,50,48,47,45,46,43,42,47,61,70,83,83,87,81,71,64,61,55,51,45,44,46,53,45,48,49,44,45,46,46,56,74,81,86,83,73,64,61,54,54,49,49,47,50,45,49,50,54,44,41,46,49,55,75,80,81,82,71,61,53,51,50,51,48,51,52,49,51,63,67,37,39,52,58,59,69,77,77,71,65,60,52,45,52,52,46,52,52,55,62,73,78,37,44,52,62,64,60,69,67,58,58,57,54,46,51,53,54,55,55,63,70,77,78,40,44,49,52,58,52,55,59,52,52,53,48,50,57,65,59,60,59,62,74,81,82,41,40,43,45,48,45,44,50,49,52,51,49,58,61,63,61,55,61,70,80,82,83,46,43,41,39,38,42,39,40,47,54,52,54,60,60,55,62,64,69,73,80,81,78,45,44,39,37,36,37,37,39,50,54,56,63,68,59,59,60,64,76,75,79,77,77,43,40,40,38,37,38,41,41,49,54,51,58,58,60,64,63,67,65,73,76,80,81,45,43,37,36,36,36,38,46,51,50,50,56,62,60,62,64,65,69,72,79,82,82,45,42,38,37,36,36,38,45,51,48,50,58,63,59,60,63,67,71,74,80,83,82],
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
