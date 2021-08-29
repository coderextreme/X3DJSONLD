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
        texture=ImageTexture(url=['../../images/5/newport31-25.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.24158699571478,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[22,24,25,26,25,20,22,23,21,20,19,18,17,18,20,24,27,28,32,33,33,33,26,23,22,21,20,20,21,24,23,23,20,19,19,19,19,23,24,26,29,30,31,31,27,26,23,24,21,21,26,26,25,24,21,19,20,19,19,19,20,24,28,30,32,33,29,29,26,24,21,22,28,27,25,25,23,20,20,21,20,20,20,24,27,30,34,34,30,29,27,27,24,25,32,30,28,26,24,21,22,22,21,20,20,21,23,28,34,35,28,30,29,31,28,30,34,33,33,31,27,26,25,23,21,20,23,22,24,27,34,35,26,30,31,31,29,31,35,38,35,33,29,28,27,25,21,22,22,24,26,28,35,36,28,31,34,34,32,36,38,37,36,34,28,28,29,26,22,22,26,26,26,29,33,33,33,37,40,38,34,35,37,37,36,35,29,28,31,28,24,22,23,27,29,30,31,31,39,43,46,41,36,36,37,36,35,34,29,31,33,30,26,23,22,27,29,30,31,31,41,44,41,40,39,37,37,35,34,32,32,34,34,30,27,25,23,25,28,30,30,31,44,43,41,41,41,40,37,36,36,32,35,37,34,29,27,25,24,23,26,26,28,29,47,45,43,43,44,43,38,37,37,37,40,38,33,30,29,27,27,24,24,27,28,28,43,42,42,43,43,42,38,38,39,39,43,42,36,32,31,29,28,26,25,27,29,29,41,41,41,43,43,40,39,40,40,40,42,41,37,36,33,30,30,29,26,27,29,29,40,42,45,46,46,41,40,42,41,40,39,38,38,36,35,32,32,28,27,30,29,29,41,44,46,46,45,43,43,45,44,40,37,37,36,36,35,35,37,35,29,28,30,30,42,44,46,46,44,44,45,47,47,40,39,40,40,36,35,33,32,33,34,30,31,31,45,48,49,46,43,44,45,47,45,42,43,45,44,41,38,33,31,31,33,32,31,31,46,49,50,44,43,44,46,47,48,46,45,44,44,42,39,35,33,33,32,31,32,32,46,49,49,43,43,44,46,48,47,45,46,45,44,41,39,36,34,32,32,32,32,32,44,43,43,44,44,44,46,46,45,44,44,44,43,42,38,34,32,32,31,32,32,32,44,42,43,44,44,45,46,46,44,43,42,42,42,39,35,34,32,31,31,32,32,32,44,42,43,44,44,45,46,46,44,43,42,42,41,38,35,34,32,32,32,32,32,32],
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
