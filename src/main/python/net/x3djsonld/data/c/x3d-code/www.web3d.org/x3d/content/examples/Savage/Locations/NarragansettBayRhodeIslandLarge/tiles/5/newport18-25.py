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
        texture=ImageTexture(url=['../../images/5/newport18-25.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.24158699571478,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[45,44,43,41,38,25,31,28,18,1,0,0,0,0,0,0,0,0,0,0,0,0,47,46,44,42,36,35,36,31,19,2,0,0,0,0,0,0,0,0,0,0,0,0,47,45,43,38,39,41,37,31,20,6,0,0,0,0,0,0,0,0,0,0,0,0,46,43,41,42,44,42,38,31,20,10,0,0,0,0,0,0,0,0,0,0,0,0,46,43,42,46,46,43,37,30,18,9,1,0,0,0,0,0,0,0,0,0,0,0,47,44,44,46,46,43,36,28,17,10,4,0,0,0,0,0,0,0,0,0,0,0,45,45,46,46,46,41,33,24,17,9,1,0,0,0,0,0,0,0,0,0,0,0,46,46,46,46,44,38,30,21,13,4,1,0,0,0,0,0,0,0,0,0,0,0,47,46,44,45,41,34,26,17,8,1,1,0,0,0,0,0,0,0,0,0,0,0,50,48,46,38,35,32,23,14,5,0,0,0,0,0,0,0,0,0,0,0,0,0,45,45,43,41,31,18,16,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,39,36,30,19,7,4,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,30,22,20,22,19,14,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,31,36,36,33,27,17,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,37,42,42,35,28,17,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42,42,43,41,35,27,17,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,44,43,45,45,37,29,18,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,45,46,46,46,41,33,24,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,46,46,46,46,43,38,29,18,6,0,0,0,0,0,0,0,0,0,0,0,0,0,47,47,48,48,45,41,34,23,11,0,0,0,0,0,0,0,0,0,0,0,0,0,48,48,49,49,46,42,36,26,14,0,0,0,0,0,0,0,0,0,0,0,0,0,49,49,50,49,47,44,38,30,18,3,0,0,0,0,0,0,0,0,0,0,0,0,50,51,51,50,48,45,40,32,19,5,0,0,0,0,0,0,0,0,0,0,0,0,50,51,51,50,48,45,41,32,19,4,0,0,0,0,0,0,0,0,0,0,0,0],
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
