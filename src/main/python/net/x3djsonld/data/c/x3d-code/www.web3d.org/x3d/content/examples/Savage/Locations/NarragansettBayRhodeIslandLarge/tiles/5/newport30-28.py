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
        texture=ImageTexture(url=['../../images/5/newport30-28.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.17563093358456,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[31,28,25,25,25,25,28,29,31,33,34,35,39,39,43,48,53,54,50,45,41,40,32,31,27,25,28,30,33,33,32,32,34,35,41,42,46,50,54,54,50,45,42,42,32,31,29,28,31,33,33,33,34,33,33,38,43,46,48,50,54,53,49,45,44,45,33,31,30,29,29,32,31,32,32,32,34,41,45,46,48,50,52,50,46,45,46,47,34,32,32,31,31,31,30,30,30,33,35,40,42,45,45,50,50,46,41,44,47,47,34,33,31,33,33,32,30,28,28,30,32,35,39,40,42,46,44,39,38,43,47,47,35,34,36,36,35,32,29,27,26,26,28,29,32,35,37,39,36,30,35,42,46,47,36,36,38,39,35,32,28,26,25,25,24,24,25,27,31,31,27,26,33,40,44,45,38,39,42,42,37,33,30,27,29,30,27,23,22,27,28,25,22,26,32,37,40,40,40,42,42,39,35,32,29,29,33,35,28,24,22,24,23,23,20,25,29,32,32,32,40,41,38,34,32,31,28,32,35,39,32,26,24,21,20,19,20,23,24,26,25,25,39,37,35,32,31,29,28,33,39,41,30,27,26,22,19,18,20,21,20,20,22,22,39,38,35,33,31,30,29,34,41,39,29,26,22,20,19,18,18,19,19,18,18,18,37,36,33,32,31,30,31,35,41,35,28,26,21,20,20,19,21,20,20,20,21,21,35,34,33,32,31,31,31,33,37,30,26,24,22,21,20,20,21,20,19,20,22,22,32,33,32,32,31,31,30,31,31,26,23,22,21,20,20,19,21,20,20,23,23,24,31,31,31,31,31,30,30,30,27,23,22,22,21,21,21,20,21,20,20,23,26,25,32,32,31,31,31,30,30,29,27,23,22,22,23,23,21,19,20,22,23,26,26,26,33,33,32,31,30,30,29,27,24,23,23,24,24,23,20,20,21,22,24,28,27,27,35,36,35,32,30,27,26,25,23,23,24,25,24,24,21,21,22,23,26,29,28,27,36,38,38,36,31,28,26,25,25,25,25,25,24,23,22,22,22,24,29,29,28,27,42,43,41,37,35,31,27,26,26,28,26,25,24,22,23,22,23,26,29,29,27,27,47,47,44,42,38,33,29,28,29,29,27,25,25,23,23,23,23,27,29,28,27,27,47,48,45,43,38,34,29,29,30,30,28,25,25,23,23,23,24,27,30,29,27,27],
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
