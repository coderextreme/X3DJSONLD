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
        texture=ImageTexture(url=['../../images/5/newport1-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.137688823068,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,2,0,0,0,1,13,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,20,16,19,21,22,29,29,11,8,1,0,0,0,0,0,0,0,0,0,0,0,34,32,28,28,32,32,33,36,33,32,23,21,21,17,11,0,0,0,0,0,0,0,41,40,39,33,30,30,32,37,42,39,36,37,35,30,30,23,11,18,17,18,20,18,42,42,43,40,32,32,34,38,43,43,37,38,36,35,34,33,31,29,33,36,30,30,43,43,43,40,31,30,30,36,41,41,41,39,37,38,38,36,33,33,35,34,31,31,41,41,38,34,28,26,29,36,39,44,45,42,38,39,36,37,38,35,33,35,30,28,36,37,38,36,29,29,33,37,38,42,46,43,41,45,38,37,36,39,35,36,37,34,31,36,36,37,35,34,35,37,40,43,48,46,41,43,39,38,35,38,36,34,34,33,29,30,33,37,35,33,35,34,35,45,44,39,43,40,41,40,37,36,35,31,27,26,23,21,28,34,36,34,33,32,32,37,39,35,39,36,37,37,33,31,33,30,26,23,24,16,19,27,34,37,35,32,29,33,34,33,36,37,32,32,30,29,28,23,23,24,24,16,19,26,34,37,35,33,29,33,33,33,35,37,32,31,29,29,27,22,23,24],
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
