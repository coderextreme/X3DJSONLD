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
        texture=ImageTexture(url=['../../images/5/newport29-27.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.19761628762797,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[39,39,36,32,32,32,30,29,30,31,31,30,27,25,25,25,25,25,25,25,25,25,37,36,32,31,31,30,30,31,31,33,33,31,28,29,27,25,25,25,25,25,25,25,35,33,31,32,31,32,31,32,32,33,34,35,33,31,30,26,25,25,25,25,25,25,33,33,33,32,32,32,32,36,37,38,35,35,33,35,32,28,25,25,25,25,25,25,31,31,33,33,33,34,35,39,41,41,39,38,37,37,33,29,26,25,25,25,25,25,29,29,32,33,34,35,37,41,44,44,43,43,42,42,38,33,27,25,25,25,25,25,29,29,32,33,34,35,37,41,45,45,46,46,46,44,40,34,27,25,25,25,25,25,29,30,33,33,34,35,38,42,45,45,46,46,46,46,41,36,30,28,26,25,25,25,29,30,32,33,34,35,38,43,45,45,46,46,45,45,42,36,30,29,28,27,26,25,29,29,32,33,35,36,38,44,46,46,46,45,43,42,40,34,32,31,31,26,27,27,31,33,33,34,35,36,39,44,46,46,45,43,41,39,38,35,34,32,32,29,27,27,31,33,33,34,35,37,40,45,46,46,44,41,40,39,36,34,34,33,31,28,26,26,32,33,34,35,36,39,42,46,46,45,42,41,39,38,35,35,35,36,31,26,27,27,32,34,34,35,37,41,44,46,47,45,42,41,40,39,37,35,35,35,30,28,25,25,34,35,35,36,40,43,45,47,46,44,43,43,41,40,38,38,37,34,31,29,25,25,32,36,39,41,43,45,46,48,47,47,45,44,42,41,39,38,38,35,32,28,25,25,36,35,35,41,43,45,47,47,47,47,45,44,43,42,40,40,38,35,33,29,27,27,38,37,36,44,45,45,46,45,45,46,46,46,45,43,42,40,38,35,33,32,29,29,42,41,38,40,44,44,44,43,43,44,46,45,45,45,43,42,40,35,33,30,26,26,44,45,44,41,40,42,44,45,44,44,46,45,45,44,43,42,40,35,33,30,26,26,46,46,45,45,44,43,42,43,43,44,45,45,45,44,43,41,39,36,34,30,28,27,48,47,47,46,44,44,44,43,43,43,43,42,42,43,42,40,37,35,33,30,28,28,50,50,49,48,45,44,44,44,44,45,45,45,45,45,42,39,35,32,31,30,30,31,50,50,49,48,45,44,45,44,44,45,45,45,45,45,41,39,35,32,31,30,31,31],
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
