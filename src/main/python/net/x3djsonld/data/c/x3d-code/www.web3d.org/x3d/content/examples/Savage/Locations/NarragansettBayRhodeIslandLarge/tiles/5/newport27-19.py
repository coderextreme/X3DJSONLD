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
        texture=ImageTexture(url=['../../images/5/newport27-19.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.37349911997524,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,9,8,7,7,6,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,7,6,5,4,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,3,8,5,5,3,3,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,9,9,8,8,8,7,4,1,1,0,0,0,0,0,0,0,0,0,0,0,0,8,8,9,9,8,7,4,1,1,1,0,0,0,0,0,0,0,0,0,0,2,8,8,8,8,8,8,7,5,1,1,2,0,0,0,0,0,0,0,1,6,5,3,6,8,8,8,8,8,5,4,1,2,4,0,0,0,0,0,0,0,0,7,8,7,7,8,8,8,10,8,5,1,2,8,9,0,0,0,0,0,0,0,0,0,9,9,9,9,9,9,9,9,7,2,6,8,8,0,0,0,0,0,0,0,0,0,6,9,9,9,10,9,8,9,8,5,9,8,8,0,0,0,0,0,0,0,0,0,0,9,10,9,10,9,10,10,9,5,7,8,8,0,0,0,0,0,0,0,0,0,0,6,9,9,10,11,11,11,10,7,7,9,8,0,0,0,0,0,0,0,0,0,0,2,8,9,11,11,12,13,12,7,7,8,8,0,0,0,0,0,0,0,0,0,0,6,8,7,13,15,14,13,9,8,8,9,9,0,0,0,0,0,0,0,0,0,0,3,5,14,19,21,17,12,9,8,8,9,9,0,0,0,0,0,0,0,0,0,0,2,5,15,20,22,18,14,11,8,8,8,8,0,0,0,0,0,0,0,0,0,1,0,13,18,21,22,21,18,18,9,8,8,8,0,0,0,0,0,0,0,0,0,0,3,16,22,23,22,22,21,19,13,9,8,8,0,0,0,0,0,0,0,0,0,0,8,15,22,23,22,20,17,16,17,12,8,8,0,0,0,0,0,0,0,0,1,6,12,15,23,28,23,18,15,15,14,17,8,9,0,0,0,0,0,0,1,0,3,15,17,17,25,28,26,21,14,13,11,11,10,10,0,0,0,0,0,1,2,2,11,19,23,19,26,28,26,21,15,14,13,12,9,9,0,0,0,0,0,1,2,15,16,25,25,22,30,30,25,20,17,15,15,14,13,12,0,0,0,0,0,2,2,16,17,25,24,23,31,30,25,20,17,15,16,14,14,13],
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
