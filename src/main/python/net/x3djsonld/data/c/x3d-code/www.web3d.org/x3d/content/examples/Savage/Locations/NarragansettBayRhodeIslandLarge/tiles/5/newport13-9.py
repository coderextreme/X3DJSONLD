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
        texture=ImageTexture(url=['../../images/5/newport13-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.42796973708396,-71.59335266040932,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[34,33,32,34,36,39,39,38,38,37,37,35,32,29,30,31,32,32,34,36,39,39,32,30,30,30,31,35,36,35,38,37,37,36,35,34,33,31,30,31,33,34,33,33,34,33,32,32,32,32,33,34,36,37,36,36,35,35,34,34,33,32,31,31,29,29,37,35,33,33,33,34,34,34,34,33,33,31,31,31,31,30,31,28,27,27,27,27,41,37,34,33,32,35,35,35,36,34,33,32,30,29,26,26,26,26,26,26,26,26,40,37,34,32,32,34,35,34,34,34,32,26,26,26,26,26,26,26,26,26,26,26,41,38,33,28,30,33,36,33,30,26,26,26,26,26,26,26,26,26,26,26,26,26,43,40,36,31,31,33,33,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,49,46,44,36,31,30,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,49,47,44,37,29,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,43,41,38,33,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,36,36,34,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,33,32,30,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,31,29,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,31,30,29,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,31,30,30,28,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,27,28,28,27,27,28,30,28,26,26,26,26,26,26,26,26,26,26,26,26,26,26,30,32,31,28,28,29,30,27,26,26,26,26,26,26,26,26,26,26,26,26,26,26,29,30,30,29,30,30,30,26,26,26,26,26,26,26,30,32,26,26,26,26,26,26,31,31,32,33,35,35,33,26,26,26,26,26,26,26,36,37,26,26,26,26,26,26,31,32,32,39,42,37,35,32,29,26,27,28,28,33,33,33,29,26,26,26,26,26,33,33,38,44,46,44,42,37,36,35,35,35,35,35,36,35,35,35,36,36,36,36,32,36,40,48,54,53,51,42,35,35,36,35,35,37,39,36,32,35,37,39,39,39,33,37,42,49,55,54,51,43,35,35,35,34,34,37,39,35,32,34,36,39,38,38],
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
