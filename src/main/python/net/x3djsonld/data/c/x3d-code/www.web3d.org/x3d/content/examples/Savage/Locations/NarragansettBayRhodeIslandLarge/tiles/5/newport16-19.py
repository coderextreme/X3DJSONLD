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
        texture=ImageTexture(url=['../../images/5/newport16-19.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.37349911997524,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[13,13,14,14,13,11,10,7,4,0,0,0,0,0,0,0,0,0,0,0,0,0,17,15,15,14,16,15,12,8,4,1,0,0,0,0,0,0,0,0,0,0,0,0,20,18,18,17,18,17,15,11,6,3,0,0,0,0,0,0,0,0,0,0,0,0,20,19,20,19,19,20,17,15,9,4,1,0,0,0,0,0,0,0,0,0,0,0,21,19,18,21,22,22,19,16,11,8,4,2,0,0,0,0,0,0,0,0,0,0,16,16,15,18,19,19,21,19,17,11,12,7,6,1,0,0,0,0,0,0,0,0,13,11,11,14,16,18,19,17,18,16,13,11,10,9,5,3,0,0,0,0,0,0,8,7,6,9,13,12,19,18,18,18,15,18,15,12,12,8,1,0,0,0,0,0,3,2,6,7,7,8,14,14,16,17,17,18,20,19,16,13,10,0,0,0,0,0,2,3,2,4,5,3,5,10,12,13,12,18,24,31,28,19,10,0,0,0,0,0,2,5,4,3,3,3,1,4,10,12,13,16,21,18,22,22,17,6,0,0,0,0,7,5,5,3,3,3,2,1,3,6,8,13,13,17,15,18,10,3,0,0,0,0,12,11,5,4,3,3,2,1,1,1,5,6,1,1,9,11,8,0,0,0,0,0,13,8,7,4,4,2,2,1,1,1,1,1,1,0,0,1,0,0,0,0,0,0,13,13,12,9,3,5,2,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,18,20,16,13,11,6,3,2,1,0,1,0,0,0,0,0,0,0,0,0,0,0,20,25,25,18,16,10,8,4,3,1,0,0,0,0,0,0,0,0,0,0,0,0,24,27,26,24,21,17,9,6,4,1,1,0,0,0,0,0,0,0,0,0,0,0,20,23,29,30,22,20,13,8,6,2,0,0,0,0,0,0,0,0,0,0,0,0,20,20,26,31,26,21,12,10,6,4,1,0,0,0,0,0,0,0,0,0,0,0,20,19,22,24,19,24,17,13,8,6,4,2,0,0,0,0,0,0,0,0,0,0,17,18,17,22,24,18,22,14,10,7,5,4,0,0,0,0,0,0,0,0,0,0,16,17,15,17,19,20,21,19,13,11,8,4,3,0,0,0,0,0,0,0,0,0,17,16,15,17,18,20,21,19,15,12,9,5,4,0,0,0,0,0,0,0,0,0],
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
