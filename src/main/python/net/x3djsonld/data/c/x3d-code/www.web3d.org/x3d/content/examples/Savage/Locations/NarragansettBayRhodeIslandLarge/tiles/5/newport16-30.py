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
        texture=ImageTexture(url=['../../images/5/newport16-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.13166022549774,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[3,5,5,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,8,9,4,1,0,0,0,0,0,0,0,1,1,1,1,1,2,8,8,2,0,0,12,8,3,0,0,0,0,0,0,0,0,1,1,1,1,3,8,12,6,1,0,0,12,7,2,0,0,0,0,0,0,0,1,1,1,1,1,7,12,8,3,2,1,1,10,6,2,0,0,0,0,0,0,0,0,0,1,1,4,11,11,4,2,1,0,0,8,5,1,0,0,0,0,0,0,0,0,0,1,1,8,12,7,3,1,0,0,0,5,2,0,0,0,0,0,0,0,0,0,1,1,5,13,8,5,2,1,0,0,0,4,1,0,0,0,0,0,0,1,1,1,0,1,10,12,11,8,3,1,0,0,0,2,0,0,0,0,0,0,0,1,1,1,2,9,15,13,10,7,5,2,0,0,0,2,0,0,0,0,0,0,0,1,1,2,4,9,11,11,8,7,6,2,1,1,1,5,1,0,0,0,0,0,0,1,1,2,5,7,7,8,8,8,5,4,3,2,2,5,1,0,0,0,0,0,0,1,1,1,3,5,5,6,7,8,6,5,5,2,2,4,0,0,0,0,0,0,0,1,1,1,2,3,6,10,9,8,7,8,6,3,3,3,0,0,0,0,0,0,0,1,1,2,2,5,10,11,11,10,11,11,5,5,4,3,0,0,0,0,0,0,1,1,2,3,3,7,11,12,12,13,17,13,6,4,5,2,0,0,0,0,0,2,4,1,2,4,6,10,13,13,13,17,20,14,9,8,9,1,0,0,0,0,1,7,4,2,3,6,11,14,14,15,17,23,20,16,12,11,12,1,0,0,0,0,7,7,4,4,6,8,14,16,16,18,23,25,20,15,13,13,13,0,0,0,0,3,9,7,4,4,7,10,18,18,19,22,27,24,20,16,14,15,15,0,0,0,1,6,9,5,5,5,8,14,17,20,22,25,28,25,20,20,17,19,19,0,0,1,4,9,6,5,6,5,12,19,21,22,24,28,29,24,25,21,18,21,22,0,1,4,9,6,6,9,6,7,16,22,24,25,26,29,29,26,26,21,20,23,23,3,4,7,7,7,11,10,6,10,16,21,25,27,29,30,29,30,25,20,21,25,26,3,5,8,7,7,12,10,6,11,16,21,25,28,29,30,30,30,25,20,21,25,26],
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
