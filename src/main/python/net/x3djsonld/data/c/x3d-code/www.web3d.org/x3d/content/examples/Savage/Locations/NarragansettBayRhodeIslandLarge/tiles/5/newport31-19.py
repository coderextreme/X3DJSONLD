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
        texture=ImageTexture(url=['../../images/5/newport31-19.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.37349911997524,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,2,3,7,16,17,17,21,18,18,19,20,21,21,21,21,21,21,0,0,0,0,1,3,4,13,16,19,21,21,19,19,20,21,22,22,22,21,20,20,0,0,5,9,17,16,15,16,18,20,21,21,20,20,21,21,22,23,22,21,20,20,0,1,5,8,11,14,15,17,18,21,21,21,20,20,21,22,23,23,22,21,21,21,0,0,9,11,10,12,18,20,21,21,21,21,21,21,21,22,22,22,22,21,21,21,0,8,13,16,16,15,19,20,21,21,21,21,21,21,21,21,21,21,22,22,22,22,8,14,17,18,17,16,19,20,21,21,22,22,22,22,22,21,21,21,22,22,22,22,9,17,19,20,19,18,19,20,21,21,21,22,22,22,22,22,23,23,23,23,23,23,12,19,21,21,20,18,20,20,20,21,21,22,22,22,23,23,23,24,24,23,23,23,16,20,23,23,22,19,20,23,22,21,21,21,21,22,23,23,24,24,24,23,23,23,20,24,25,24,21,19,19,21,23,21,21,21,21,23,23,23,24,24,24,23,23,23,22,27,26,25,21,20,18,23,23,23,23,23,22,23,24,24,24,24,24,23,23,23,27,28,27,25,19,21,17,23,23,23,24,24,24,24,24,24,24,24,24,24,24,24,27,29,27,25,20,22,25,24,24,24,24,24,25,24,24,24,24,24,24,23,24,24,29,28,27,25,22,22,24,23,24,24,24,25,25,25,25,24,24,24,23,23,23,23,26,28,27,24,24,22,24,23,23,23,24,25,25,25,25,25,24,24,23,22,22,22,25,26,25,25,24,24,24,24,24,24,24,25,25,25,25,24,24,23,23,22,21,21,25,24,25,25,24,23,23,23,23,25,26,26,26,26,25,25,25,24,24,24,23,23,26,26,25,24,24,23,22,23,23,26,27,27,26,26,26,26,26,26,25,25,24,24,27,26,26,26,25,24,23,23,23,24,26,26,26,26,26,26,26,26,26,26,25,25,28,28,28,28,27,26,27,24,23,23,24,26,27,27,26,26,26,26,26,26,26,25,29,29,30,30,29,27,26,25,24,24,24,26,26,27,27,26,26,26,26,26,26,26,29,30,31,30,29,27,26,25,25,25,25,25,26,26,27,26,26,26,26,26,25,25,29,30,31,30,29,27,26,25,24,24,24,25,25,26,26,26,26,26,26,26,25,25],
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
