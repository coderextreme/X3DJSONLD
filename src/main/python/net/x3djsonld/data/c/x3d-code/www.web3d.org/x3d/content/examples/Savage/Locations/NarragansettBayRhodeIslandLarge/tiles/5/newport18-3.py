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
        texture=ImageTexture(url=['../../images/5/newport18-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.72526478466978,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[105,102,98,85,79,67,61,53,50,48,47,47,43,45,47,44,49,48,56,59,61,62,102,96,87,82,70,63,52,48,50,47,43,45,44,45,47,39,43,50,52,58,54,53,94,88,82,73,63,51,54,48,41,44,45,44,46,43,43,39,39,44,43,49,50,50,88,79,73,64,51,50,48,49,44,41,47,44,43,41,40,42,42,42,46,38,48,48,79,68,57,52,49,51,46,44,43,43,42,44,43,43,44,49,54,54,47,35,39,40,68,62,50,46,47,45,44,49,46,44,49,45,44,45,43,56,51,53,49,51,35,35,61,51,47,44,45,46,52,54,53,46,43,44,42,44,48,51,50,52,49,55,47,45,53,46,42,43,47,55,54,51,48,46,44,40,46,47,41,49,53,53,48,50,55,56,46,45,49,53,52,47,49,49,48,44,40,42,48,40,43,45,48,48,51,51,51,52,48,50,52,49,45,46,49,44,43,44,42,41,39,40,42,43,46,48,62,60,58,57,52,50,46,43,45,48,44,43,40,42,42,36,34,39,49,43,52,60,59,64,63,62,53,50,53,50,49,47,44,44,37,40,38,41,40,41,49,51,54,52,61,66,68,68,56,57,52,53,54,48,45,44,39,40,37,38,44,48,46,51,54,66,69,67,69,70,62,58,56,52,51,48,46,49,52,44,38,41,43,47,45,52,62,67,76,79,77,79,58,57,57,55,53,53,54,58,48,40,36,40,41,47,49,57,66,78,87,91,97,97,53,59,56,55,49,52,57,51,53,48,45,39,44,43,47,60,72,83,96,105,111,113,55,54,55,54,49,52,49,44,43,49,51,50,48,47,51,63,74,90,105,112,117,118,53,47,45,44,44,46,49,46,52,54,52,42,44,49,53,64,81,96,111,118,123,124,44,45,49,46,46,47,39,38,43,51,45,40,43,54,57,73,90,103,110,121,129,129,42,45,43,42,44,39,39,40,38,40,42,43,52,54,65,82,94,107,113,121,131,133,46,46,44,40,41,38,40,42,37,43,46,42,50,57,68,83,97,109,116,125,130,129,48,47,43,43,39,39,39,41,41,41,40,42,50,60,74,87,99,112,115,122,131,133,49,45,39,38,38,40,39,40,42,43,41,46,48,57,74,86,98,111,119,126,132,133,48,44,38,39,38,38,39,40,43,43,42,45,48,57,74,85,100,112,119,127,131,132],
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
