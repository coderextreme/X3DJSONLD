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
        texture=ImageTexture(url=['../../images/5/newport16-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.39548447401864,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,4,11,14,16,19,18,15,14,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,17,21,21,21,19,17,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,16,23,24,22,22,20,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,17,22,24,23,23,21,20,1,1,0,0,0,0,0,0,0,0,0,0,0,0,2,13,17,21,23,22,21,21,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,18,20,20,17,16,20,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,12,15,13,13,13,24,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,8,9,8,20,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,3,9,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,8,10,5,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,8,10,10,12,8,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,5,9,11,13,12,12,12,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5,5,12,14,14,14,13,13,0,0,0,0,0,0,0,0,0,0,0,0,4,5,10,10,6,11,15,16,14,13,0,0,0,0,0,0,0,0,0,0,3,10,8,8,12,12,11,8,13,16,18,18,0,0,0,0,0,0,0,0,2,8,12,11,14,16,14,13,16,13,14,14,19,20,0,0,0,0,0,0,0,5,12,17,17,21,20,21,18,15,14,16,16,19,22,24,0,0,0,0,0,0,0,11,16,20,20,25,26,29,25,23,19,18,18,17,18,20,0,0,0,0,0,0,2,12,17,25,26,26,31,37,31,25,20,19,18,19,20,20,0,0,0,0,0,0,16,15,19,21,23,34,36,35,36,33,27,20,19,18,20,20,0,0,0,0,0,0,13,20,20,24,27,32,39,38,42,41,32,25,18,19,17,17,0,0,0,0,0,0,12,17,20,28,28,34,39,41,44,41,38,29,21,17,15,16,0,0,0,0,0,0,12,15,18,28,28,34,40,42,44,42,38,29,23,18,16,17],
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
