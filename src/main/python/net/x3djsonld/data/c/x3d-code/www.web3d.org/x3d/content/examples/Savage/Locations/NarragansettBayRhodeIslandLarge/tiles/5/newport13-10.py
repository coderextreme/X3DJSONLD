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
        texture=ImageTexture(url=['../../images/5/newport13-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.42796973708396,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[39,42,42,44,38,34,32,32,32,32,33,33,33,33,33,32,31,32,28,28,28,28,33,34,34,33,31,30,31,31,32,32,32,32,34,36,35,35,34,34,32,29,28,29,29,28,28,28,26,26,28,30,33,34,35,33,35,35,34,34,35,36,35,34,35,35,27,26,26,25,25,27,30,32,32,33,33,34,35,35,34,35,36,36,37,37,37,37,26,26,26,26,26,28,29,30,30,31,31,33,34,36,34,33,33,35,36,39,39,39,26,26,26,26,26,26,26,27,31,32,31,32,32,35,35,32,31,34,36,37,38,38,26,26,26,26,26,26,26,26,26,29,30,31,31,31,33,32,31,32,33,33,36,36,26,26,26,26,26,26,26,26,26,29,33,34,32,29,29,29,29,30,31,31,32,33,26,26,26,26,26,26,26,26,26,26,33,34,34,31,30,31,30,29,29,30,30,29,26,26,26,26,26,26,26,26,26,28,33,33,33,32,32,34,34,33,32,32,32,32,26,26,26,26,26,26,26,26,26,26,31,33,33,33,33,34,36,36,36,33,32,32,26,26,26,26,26,26,26,26,26,26,32,31,31,32,32,33,35,36,36,34,32,31,26,26,26,26,26,26,26,26,26,29,32,32,32,33,31,33,34,35,36,35,34,34,26,26,26,26,26,26,26,26,31,31,30,30,31,32,33,34,36,35,37,38,38,38,26,26,26,26,26,26,26,26,26,27,26,32,33,34,34,35,39,41,42,45,43,41,26,26,26,26,26,26,26,26,26,26,26,28,32,31,33,40,46,48,48,47,43,41,26,26,26,26,26,26,26,26,26,26,26,29,35,33,34,44,51,53,53,47,42,40,26,26,26,26,26,26,26,26,26,26,26,26,32,33,40,48,55,55,54,50,45,43,26,26,26,26,26,26,26,26,26,26,26,26,26,33,40,46,51,55,54,52,48,46,26,26,26,26,26,26,26,26,26,26,26,26,26,32,38,44,49,53,53,50,45,44,26,26,26,26,26,26,26,26,26,26,26,26,26,27,39,45,49,51,51,48,42,41,36,31,30,26,26,26,26,26,26,26,26,26,26,26,40,46,49,54,52,47,42,41,39,38,37,34,32,28,27,27,26,26,26,26,26,26,29,46,53,54,53,49,42,41,38,37,37,34,33,31,30,30,29,26,26,26,26,26,29,45,53,54,53,49,42,41],
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
