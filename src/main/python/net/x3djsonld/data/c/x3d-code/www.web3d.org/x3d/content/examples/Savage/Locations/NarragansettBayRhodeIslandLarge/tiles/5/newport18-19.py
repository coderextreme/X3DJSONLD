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
        texture=ImageTexture(url=['../../images/5/newport18-19.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.37349911997524,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[39,38,38,37,34,29,27,25,19,20,17,16,13,10,0,0,0,0,0,0,0,0,36,36,33,30,28,28,27,25,27,24,23,20,20,14,0,0,0,0,0,0,0,0,30,31,28,26,27,25,25,27,19,25,24,24,22,15,12,0,0,0,0,0,0,0,26,25,25,23,25,24,28,25,24,27,26,26,25,20,15,0,0,0,0,0,0,0,21,22,22,24,24,27,23,22,24,23,29,29,25,21,16,6,0,0,0,0,0,0,19,18,22,23,24,24,23,24,26,26,29,31,28,23,16,11,0,0,0,0,0,0,20,20,21,20,23,24,26,27,28,29,29,28,27,28,17,12,0,0,0,0,0,0,18,18,20,20,23,25,26,28,30,32,32,31,27,22,17,12,0,0,0,0,0,0,17,16,18,21,22,25,27,28,31,33,36,33,27,21,17,12,0,0,0,0,0,0,17,15,18,23,23,24,27,29,31,34,33,34,28,24,17,12,0,0,0,0,0,0,17,17,20,22,22,23,28,29,31,34,34,35,31,24,17,8,0,0,0,0,0,0,15,17,19,21,22,24,27,30,29,32,32,31,32,27,16,0,0,0,0,0,0,0,19,19,19,20,21,27,27,29,29,28,30,30,28,21,14,0,0,0,0,0,0,0,17,19,17,19,23,23,22,23,24,26,28,28,27,20,11,0,0,0,0,0,0,0,21,20,20,22,23,26,26,26,22,24,25,26,24,16,8,0,0,0,0,0,0,0,22,22,23,25,27,28,29,26,26,30,27,23,19,14,2,0,0,0,0,0,0,0,27,26,26,26,30,28,29,30,27,24,25,21,16,11,0,0,0,0,0,0,0,0,23,27,24,27,30,30,26,29,24,24,26,19,12,7,0,0,0,0,0,0,0,0,23,23,27,29,30,28,26,28,27,16,16,16,9,4,0,0,0,0,0,0,0,0,21,23,26,31,29,27,25,21,20,17,18,14,9,0,0,0,0,0,0,0,0,0,22,22,24,31,30,24,26,22,21,19,19,14,13,0,0,0,0,0,0,0,0,0,21,22,24,27,26,25,23,21,22,22,22,12,8,0,0,0,0,0,0,0,0,0,15,21,23,27,24,23,27,24,21,19,19,17,11,0,0,0,0,0,0,0,0,0,13,20,23,26,25,24,26,23,21,19,20,19,11,0,0,0,0,0,0,0,0,0],
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
