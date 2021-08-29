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
        texture=ImageTexture(url=['../../images/5/newport30-19.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.37349911997524,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,2,5,5,7,8,8,8,8,8,8,8,7,7,6,6,5,5,5,5,0,0,0,1,4,6,5,6,8,8,8,8,8,8,6,5,5,5,5,5,5,5,0,0,0,0,3,6,4,6,8,7,5,5,6,5,5,5,5,4,4,5,5,5,0,0,0,0,0,0,5,6,7,5,5,3,3,3,7,8,7,5,10,10,3,3,0,0,0,0,0,0,2,5,7,6,5,3,3,3,7,10,8,9,14,15,8,10,0,0,0,0,0,0,1,4,6,6,6,3,3,3,8,14,17,16,17,17,8,9,0,0,0,0,0,0,0,2,3,4,3,3,4,8,13,17,18,19,16,17,15,15,0,0,0,0,1,2,5,6,3,3,3,8,9,15,18,18,18,19,19,15,16,17,0,0,0,0,1,3,5,7,5,3,8,10,18,19,18,19,18,19,20,19,15,15,0,0,0,0,0,4,6,6,7,5,10,11,15,18,18,18,18,19,19,19,16,16,0,0,0,0,0,2,5,6,7,8,10,12,14,13,13,15,18,18,19,19,18,18,0,0,0,0,0,0,3,5,7,8,11,16,19,19,18,17,14,17,18,19,18,18,0,0,0,0,0,0,2,3,6,8,12,18,21,21,20,20,17,18,18,19,19,18,0,0,0,0,0,0,0,1,4,9,13,17,21,23,23,20,18,19,18,18,19,19,0,0,0,0,0,0,0,0,2,6,14,20,24,25,24,22,20,19,20,20,20,20,0,0,0,0,0,0,0,0,1,4,16,21,24,26,25,23,21,20,21,21,20,20,0,0,0,0,0,0,0,0,1,4,14,21,24,25,25,26,21,20,20,20,20,20,0,0,0,0,0,0,5,2,1,5,14,19,21,22,23,24,21,20,20,20,20,20,0,0,0,0,0,1,4,3,2,3,12,16,17,21,22,23,22,21,21,21,21,21,0,0,0,0,0,1,1,2,2,5,11,16,14,17,22,23,22,21,21,21,21,21,0,0,0,0,0,0,0,0,3,10,16,17,15,17,20,22,21,20,21,21,20,20,0,0,0,0,0,0,1,3,17,17,17,17,17,16,19,20,20,20,20,20,20,20,0,0,0,0,0,1,2,6,16,17,17,20,18,18,19,20,21,21,21,21,21,21,0,0,0,0,0,2,3,7,16,17,17,21,18,18,19,20,21,21,21,21,21,21],
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
