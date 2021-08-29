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
        texture=ImageTexture(url=['../../images/5/newport23-19.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.669870498763935,-71.37349911997524,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,6,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,13,4,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,14,8,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,16,11,4,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,17,13,5,3,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,19,12,7,4,3,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,20,13,8,5,3,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,24,22,15,8,5,3,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,24,18,7,4,3,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,23,15,7,3,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,18,12,3,3,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,24,12,8,3,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,28,17,12,3,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,31,27,23,8,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,38,31,26,17,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,36,34,25,15,4,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,30,29,20,12,7,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,26,21,17,12,7,5,2,6,7,0,0,0,0,0,0,0,0,0,0,0,0,32,25,20,17,12,7,5,2,5,10,0,0,0,0,0,0,0,0,0,0,0,0],
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
