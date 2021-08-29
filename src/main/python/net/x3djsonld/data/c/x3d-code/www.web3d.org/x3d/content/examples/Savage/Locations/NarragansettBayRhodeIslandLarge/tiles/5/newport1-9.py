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
        texture=ImageTexture(url=['../../images/5/newport1-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.137688823068,-71.59335266040932,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,10,5,2,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,23,16,14,13,10,4,1,0,3,0,0,0,0,0,4,10,8,0,0,0,0,35,30,22,21,16,15,17,10,7,15,14,9,10,7,9,18,19,14,11,13,7,7,35,29,28,26,21,17,23,16,10,18,14,14,18,18,19,23,25,22,23,27,26,25,33,30,35,28,23,20,28,17,5,17,17,12,16,21,23,26,27,29,32,34,35,34,32,30,31,24,22,21,27,25,9,17,25,14,19,23,26,24,27,28,36,39,40,41,27,29,21,20,24,24,24,24,12,19,29,24,21,24,27,24,28,30,38,45,42,42,28,27,21,24,23,26,26,25,11,21,35,29,22,24,21,22,27,33,38,42,43,43,35,30,26,31,26,28,29,22,10,26,35,28,26,26,24,22,28,33,39,42,41,41,33,32,31,32,28,29,26,16,15,31,42,33,26,22,23,24,30,32,38,40,36,36,30,34,33,30,29,28,22,13,28,37,45,35,26,25,26,23,31,33,36,30,30,31,26,32,37,36,32,35,23,24,35,46,48,38,28,27,26,26,26,31,33,32,30,29,34,39,39,42,40,42,36,40,42,41,45,38,32,29,26,26,26,29,34,33,24,23,40,47,46,43,44,40,40,38,44,38,39,37,36,27,26,26,26,28,29,27,25,24,40,48,47,43,44,40,40,38,43,39,39,37,36,26,26,26,26,29,28,26,25,24],
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
