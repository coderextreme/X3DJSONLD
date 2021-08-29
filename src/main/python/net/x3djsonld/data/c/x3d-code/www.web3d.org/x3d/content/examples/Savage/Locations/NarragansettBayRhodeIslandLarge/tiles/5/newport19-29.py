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
        texture=ImageTexture(url=['../../images/5/newport19-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.573110194091946,-71.15364557954115,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[44,46,45,42,41,41,43,39,34,38,39,36,33,28,21,17,19,19,20,19,20,20,49,48,46,43,44,44,38,29,30,33,37,35,34,28,21,19,19,20,22,25,25,24,50,47,45,42,41,37,31,28,30,32,33,31,29,27,23,25,26,26,26,26,24,23,50,47,45,43,38,30,26,26,29,31,30,30,26,25,25,29,31,34,34,31,21,21,51,48,46,42,36,28,26,25,28,31,28,26,25,26,30,33,31,32,36,30,23,22,52,49,46,41,32,27,25,25,27,30,28,25,25,28,32,31,32,33,33,28,23,22,50,48,44,38,29,26,25,25,29,29,26,25,25,29,32,31,33,36,32,27,21,21,49,45,41,32,28,25,25,26,30,26,25,25,27,30,31,31,33,35,29,25,23,23,47,43,35,29,25,25,25,26,28,25,25,25,28,30,32,32,33,30,26,25,24,24,45,41,33,27,25,25,25,28,25,25,25,25,30,31,32,33,32,27,26,24,24,24,42,36,32,26,25,25,26,28,25,25,25,28,31,33,32,29,27,26,25,24,25,24,37,33,28,25,25,25,25,25,25,25,26,30,31,31,29,28,25,24,24,24,26,26,35,31,28,25,25,25,25,25,25,25,25,29,30,29,27,25,24,24,25,28,31,31,36,32,28,25,25,25,25,25,25,25,27,29,29,26,25,24,24,25,29,32,33,33,35,30,27,26,25,25,25,25,25,25,26,27,25,25,25,25,26,28,34,36,32,31,32,28,26,25,25,25,25,25,25,25,25,25,25,25,25,27,31,35,37,36,31,29,31,28,25,27,26,25,25,25,25,25,25,25,25,25,26,32,35,39,39,37,30,30,30,27,25,26,26,25,25,25,25,25,25,25,25,25,29,34,38,40,40,37,32,31,30,25,25,27,25,25,25,25,25,25,25,25,25,26,32,37,40,42,40,35,33,33,29,26,26,25,25,25,26,26,25,25,25,25,25,30,35,39,43,42,40,38,35,34,29,26,25,25,26,26,26,25,25,25,25,25,25,31,36,40,43,42,40,39,36,35,27,26,25,26,26,25,25,25,25,25,25,25,28,32,37,41,42,41,40,36,34,35,27,27,26,26,25,25,25,25,25,25,25,25,29,33,38,43,45,44,40,36,36,36,28,27,26,26,25,25,25,25,25,25,25,25,29,34,39,43,45,44,40,37,36,36],
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
