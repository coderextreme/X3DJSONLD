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
        texture=ImageTexture(url=['../../images/5/newport12-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.403779660915966,-71.59335266040932,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[35,37,34,40,41,51,52,46,56,53,50,49,48,44,41,38,36,34,35,38,34,34,37,39,37,39,47,51,51,48,58,58,55,56,56,51,53,48,45,41,46,43,36,36,38,39,39,40,48,51,49,54,62,62,58,62,60,58,58,56,55,49,57,44,41,40,39,40,38,40,47,53,49,58,65,60,58,65,65,62,57,55,57,52,58,46,43,43,35,39,39,42,47,53,54,63,64,58,62,65,70,67,60,59,58,58,56,47,49,50,39,43,46,49,55,54,58,64,65,66,67,68,71,72,70,65,58,62,59,53,53,53,50,49,51,52,59,62,58,61,68,74,71,70,73,71,72,68,60,62,58,55,55,55,52,53,47,47,56,64,61,62,71,76,71,71,74,73,69,69,61,61,58,56,64,65,48,54,48,48,53,58,60,64,70,73,71,72,76,72,75,73,68,67,62,66,70,71,47,55,55,55,54,52,56,62,69,69,72,70,73,70,77,76,77,73,67,73,74,74,46,52,55,55,54,52,54,55,65,63,66,66,69,70,73,74,75,73,68,72,69,70,41,44,48,48,49,52,52,51,57,56,59,62,66,68,71,73,69,70,69,64,60,61,38,41,42,43,45,45,47,48,49,50,50,55,61,64,65,66,63,63,63,55,57,58,37,38,40,41,42,41,41,41,39,43,42,48,52,55,55,55,55,54,55,49,51,51,36,37,40,41,42,42,42,38,35,36,37,40,45,48,47,45,46,47,46,45,45,44,38,39,42,42,41,40,40,38,36,37,38,39,39,44,45,42,42,42,43,43,42,42,41,41,41,40,39,37,37,40,39,38,37,38,38,40,41,41,41,41,42,41,40,40,43,44,43,40,38,37,40,41,38,37,36,37,40,41,38,37,39,42,43,42,40,40,38,40,39,38,38,37,39,41,37,38,36,35,37,37,35,37,38,39,42,44,45,45,35,35,34,36,38,38,37,37,37,35,34,33,33,33,34,37,37,38,42,46,49,49,36,35,36,39,39,37,38,40,39,37,36,35,35,35,35,35,36,37,39,43,48,48,37,36,37,39,40,40,40,41,40,37,36,36,35,35,35,35,33,35,38,41,44,44,34,33,33,35,37,40,39,39,38,38,37,35,32,29,30,31,33,33,34,36,40,40,34,33,32,34,36,39,39,38,38,37,37,35,32,29,30,31,32,32,34,36,39,39],
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
