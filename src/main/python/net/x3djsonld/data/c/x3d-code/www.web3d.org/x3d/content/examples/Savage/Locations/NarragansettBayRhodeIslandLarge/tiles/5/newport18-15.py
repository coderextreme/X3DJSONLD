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
        texture=ImageTexture(url=['../../images/5/newport18-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.46144053614887,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[30,26,27,29,27,31,34,27,28,26,23,27,28,28,24,22,18,15,17,18,12,11,31,30,28,26,26,31,27,29,29,28,29,29,26,25,22,19,20,16,17,15,10,10,32,29,30,27,28,25,25,26,26,32,27,25,27,21,23,17,15,16,15,13,16,17,27,29,27,28,32,29,25,24,23,23,25,28,29,21,15,19,15,12,12,12,12,15,27,28,29,30,27,24,23,23,22,25,26,25,20,22,18,17,12,12,10,15,11,13,26,24,27,26,21,22,24,25,26,23,29,22,25,21,16,15,12,13,12,10,10,10,24,22,29,25,21,28,20,18,21,22,28,20,19,15,18,12,12,8,10,9,10,10,27,24,22,20,17,21,19,20,22,22,20,16,15,14,15,11,10,9,12,11,13,12,28,25,21,17,15,16,15,19,18,18,19,16,15,15,12,10,11,12,13,13,13,14,24,21,18,16,15,16,12,15,15,19,17,16,12,11,8,8,8,14,17,16,12,14,22,20,18,15,14,16,11,13,17,14,13,13,12,10,11,13,10,12,15,13,15,12,15,17,14,16,15,18,12,13,11,11,11,12,13,12,12,12,11,9,11,15,9,9,16,13,16,15,15,14,14,13,10,14,11,11,15,16,13,11,11,8,6,9,9,9,17,17,16,18,15,16,15,12,13,11,12,17,17,18,16,13,9,7,6,7,9,9,15,17,16,18,17,16,15,13,11,13,16,20,23,21,17,15,10,9,9,9,12,11,16,14,13,15,12,12,15,12,10,13,18,23,24,25,20,16,13,11,10,9,11,10,14,15,13,9,8,11,12,6,11,14,19,21,21,19,23,16,18,15,12,11,10,11,11,12,11,7,6,4,1,7,11,15,17,19,18,17,17,20,18,13,11,11,9,10,19,12,9,8,3,0,1,7,9,11,14,15,16,14,14,12,14,10,12,11,8,4,16,15,13,9,7,4,1,3,4,7,13,12,11,12,11,7,6,11,5,6,0,0,22,19,20,16,11,7,2,2,1,1,3,10,10,10,8,9,4,2,3,0,0,0,22,22,20,19,19,12,6,3,1,3,1,4,10,10,10,8,2,4,1,0,0,0,25,28,25,19,19,10,7,6,10,6,6,2,10,11,10,3,0,3,3,1,0,0,25,27,26,19,17,10,8,6,11,5,7,3,10,10,12,1,0,3,3,3,0,0],
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
