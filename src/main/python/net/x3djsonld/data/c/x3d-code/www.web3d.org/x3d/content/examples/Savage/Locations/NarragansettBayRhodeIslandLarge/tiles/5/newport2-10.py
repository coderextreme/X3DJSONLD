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
        texture=ImageTexture(url=['../../images/5/newport2-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.161878899235994,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[24,16,19,26,34,37,35,33,29,33,33,33,35,37,32,31,29,29,27,22,23,24,18,21,26,28,28,29,31,32,30,31,31,30,32,34,33,26,23,26,26,21,17,16,20,24,25,25,18,21,25,29,27,27,29,29,29,28,24,27,24,21,26,21,15,14,24,23,20,19,15,11,12,16,25,29,30,30,29,24,20,22,19,20,26,23,19,16,22,22,19,13,10,12,12,17,19,20,25,27,27,24,22,24,19,17,25,17,10,8,22,21,18,12,10,12,15,15,14,17,21,27,27,26,24,24,17,19,20,9,4,2,24,17,17,15,15,13,15,12,9,12,18,25,27,28,30,27,26,25,14,4,0,0,26,19,13,15,14,20,16,10,10,12,15,25,28,28,23,22,23,18,9,0,0,0,20,14,12,12,15,20,17,15,13,11,12,17,21,22,18,19,16,11,6,0,0,0,23,17,14,13,16,18,16,13,13,14,16,13,8,14,12,15,14,13,0,0,0,0,21,14,20,21,16,11,14,13,11,15,15,7,8,9,10,13,13,7,0,0,0,0,14,11,13,14,13,10,10,9,10,17,8,8,11,9,5,0,0,0,0,0,0,0,10,7,10,8,8,10,6,9,8,7,6,11,11,0,0,0,0,0,0,0,0,0,11,12,18,12,10,0,3,9,0,0,13,3,0,0,0,0,0,0,0,0,0,0,17,24,16,0,0,19,0,0,3,16,7,0,0,0,0,0,0,0,0,0,0,0,2,22,27,0,0,0,0,25,27,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,21,10,17,0,22,22,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,16,7,0,23,2,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,1,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,17,0,0,13,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,22,0,0,13,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,17,4,18,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,18,15,17,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,17,15,17,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
