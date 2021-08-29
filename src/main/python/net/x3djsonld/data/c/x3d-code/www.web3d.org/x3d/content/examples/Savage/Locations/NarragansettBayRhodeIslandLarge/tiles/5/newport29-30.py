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
        texture=ImageTexture(url=['../../images/5/newport29-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.13166022549774,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[40,50,52,52,52,52,57,56,58,45,31,26,21,17,11,5,1,1,1,4,4,4,42,51,52,53,46,45,48,51,49,47,38,33,30,17,7,5,1,1,1,1,1,1,43,48,49,46,38,36,40,42,44,44,39,32,27,14,6,2,1,1,1,1,1,1,41,45,44,40,31,30,33,36,36,35,31,20,13,9,4,1,2,1,1,1,1,1,38,40,38,32,25,21,23,22,22,20,13,7,4,4,2,1,2,1,1,1,1,1,33,34,30,23,14,8,8,8,6,5,3,3,2,4,3,3,3,2,1,1,1,1,28,28,23,13,8,8,8,8,7,5,4,4,3,5,5,3,3,2,1,1,1,1,24,23,16,8,8,9,10,10,14,10,6,6,5,5,4,4,3,2,1,1,1,1,18,17,12,11,14,15,15,14,14,15,13,8,6,5,5,5,4,2,1,1,1,1,13,11,11,15,17,17,16,15,11,9,11,7,6,6,6,7,4,2,1,1,1,1,14,16,17,17,17,18,17,15,14,10,7,6,5,5,7,7,4,2,1,1,1,1,18,19,19,19,19,17,16,15,13,11,8,5,3,4,5,5,3,1,1,1,1,1,18,19,18,18,20,18,16,16,16,14,9,5,2,2,2,3,2,1,1,1,1,1,13,12,6,5,7,12,18,17,18,17,11,5,4,2,1,1,2,1,1,1,1,1,11,9,5,5,4,5,5,9,12,11,6,2,2,2,1,1,1,1,1,1,1,1,10,9,5,4,4,4,4,6,5,2,2,2,2,3,3,1,1,1,1,1,1,1,9,9,6,4,4,4,3,4,3,2,2,4,5,8,5,2,1,1,1,4,6,6,5,6,6,4,4,3,3,2,1,1,2,8,11,6,4,2,1,1,1,2,7,7,5,5,4,3,3,3,2,2,2,2,3,5,5,4,3,2,1,1,1,1,1,1,4,4,3,2,2,2,2,2,2,2,3,4,5,5,7,9,3,1,3,2,1,1,4,3,3,2,2,2,3,2,2,2,4,5,5,9,11,12,12,10,6,2,1,1,5,4,3,3,3,3,3,3,2,3,4,5,6,8,10,12,14,14,8,4,2,1,5,4,4,4,5,4,4,3,2,4,5,7,9,9,10,11,12,11,8,7,7,7,5,4,4,4,5,4,4,3,2,4,6,8,9,9,10,11,12,11,8,7,8,8],
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
