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
        texture=ImageTexture(url=['../../images/5/newport18-27.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.19761628762797,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[2,1,11,21,29,34,32,29,25,19,11,8,13,24,31,30,23,15,14,14,14,14,1,2,8,19,27,30,28,26,22,16,10,6,13,26,39,37,29,24,18,14,14,14,0,0,5,14,22,25,24,20,16,12,7,5,15,26,39,37,33,29,24,18,16,16,0,0,1,6,13,16,16,16,13,8,5,8,17,29,33,35,33,29,26,25,22,21,1,0,0,3,7,9,11,13,12,5,6,12,19,27,31,36,32,29,28,28,25,24,3,0,0,1,2,4,8,10,10,4,7,14,22,28,30,31,33,31,31,29,26,26,8,2,0,0,0,1,5,5,1,5,9,16,24,26,28,30,33,35,31,29,30,29,10,5,1,0,0,1,1,2,3,8,13,21,27,28,29,31,32,31,29,30,29,29,12,6,2,1,0,0,1,3,5,10,15,24,27,30,32,30,27,25,24,26,28,28,13,7,4,1,0,0,1,2,4,10,17,26,29,31,27,24,22,21,22,25,29,29,13,9,4,1,1,1,1,1,4,10,18,24,29,28,22,20,18,17,21,23,25,25,10,7,4,1,1,1,0,1,5,11,17,23,28,24,20,18,16,16,16,17,23,24,10,11,5,0,1,1,1,2,5,10,17,22,25,23,19,17,16,16,17,17,23,24,11,11,7,2,1,1,1,1,4,9,15,20,22,19,18,16,16,18,20,21,23,23,10,9,6,1,1,1,1,1,3,10,15,19,19,17,18,16,17,19,19,20,22,23,12,9,4,1,1,1,1,1,2,8,14,17,15,16,17,17,18,18,19,20,23,24,9,9,5,1,1,1,1,0,1,5,12,14,13,15,15,17,18,19,20,22,24,24,10,9,7,2,1,1,1,1,1,3,6,8,8,12,14,15,18,16,18,20,19,20,12,11,6,2,1,1,1,1,1,1,1,3,7,10,13,14,12,12,14,18,22,22,13,10,5,1,1,1,1,1,1,1,0,3,6,7,10,10,9,12,16,19,20,20,14,13,9,2,1,1,1,1,1,1,1,2,7,10,10,9,8,12,13,16,17,17,16,15,12,4,1,1,1,1,1,1,0,1,7,13,15,8,8,10,11,13,16,16,18,20,15,5,1,1,1,1,1,1,1,1,2,5,7,7,7,9,14,15,19,19,19,21,15,5,0,1,1,1,1,1,1,1,2,4,6,7,7,10,15,16,20,20],
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
