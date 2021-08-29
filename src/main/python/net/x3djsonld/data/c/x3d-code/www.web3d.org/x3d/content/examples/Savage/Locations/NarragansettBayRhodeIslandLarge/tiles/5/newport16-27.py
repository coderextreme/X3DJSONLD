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
        texture=ImageTexture(url=['../../images/5/newport16-27.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.19761628762797,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,2,3,6,9,11,13,14,15,16,14,15,18,20,20,17,14,12,13,14,14,0,2,4,4,6,9,11,13,16,18,17,15,18,20,21,19,16,14,14,15,15,15,3,5,7,8,7,8,11,13,16,18,17,16,16,19,21,20,17,16,17,17,16,16,5,7,9,10,11,10,11,12,15,17,17,17,16,18,20,21,20,19,18,17,16,16,7,9,11,12,12,11,12,14,16,16,16,16,17,17,18,20,21,21,20,18,16,15,10,12,14,13,12,12,14,15,16,16,16,17,17,17,18,20,22,22,21,19,16,16,12,14,15,15,14,14,15,16,17,16,16,17,17,18,19,20,22,24,22,19,16,16,13,15,17,16,14,14,16,17,18,18,17,17,18,20,21,22,24,24,22,19,17,16,12,17,18,16,15,16,17,18,19,19,18,18,20,22,24,25,25,24,22,19,17,17,12,16,16,15,15,17,18,20,20,20,20,19,21,24,27,27,25,23,21,20,18,17,9,13,12,14,16,18,20,21,22,21,21,21,22,24,27,28,24,21,20,19,18,17,6,9,12,14,17,20,24,24,23,23,23,23,23,25,26,25,24,22,20,19,17,17,6,9,12,15,18,24,27,27,25,24,24,24,25,25,24,24,22,21,20,19,19,19,5,8,10,14,19,25,28,28,27,26,25,25,24,23,23,23,21,20,19,20,19,19,2,4,8,13,19,25,28,30,30,27,25,25,24,23,22,22,20,19,19,19,19,19,0,1,6,13,20,25,29,31,30,27,24,23,24,24,22,21,20,20,20,20,20,20,0,0,5,12,19,25,29,31,30,27,25,23,23,22,21,20,21,22,22,22,20,19,0,0,4,10,18,25,30,31,30,28,25,23,23,22,21,21,23,26,25,23,21,20,0,1,2,7,17,25,30,31,30,28,25,23,23,22,22,23,27,29,29,26,23,22,1,0,1,8,18,26,30,31,31,28,25,24,23,23,22,24,29,33,32,29,25,25,1,1,2,10,20,26,30,31,31,28,26,24,24,24,23,26,30,34,35,31,27,27,1,1,3,13,21,25,28,31,32,29,27,26,25,24,24,27,34,37,37,33,29,28,1,1,7,15,22,25,26,29,32,30,28,26,25,24,24,27,33,37,38,34,31,30,1,1,8,15,22,25,26,29,32,31,29,26,25,25,24,27,33,36,37,34,31,30],
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
