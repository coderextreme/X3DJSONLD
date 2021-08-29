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
        texture=ImageTexture(url=['../../images/5/newport26-27.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.19761628762797,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[1,1,4,5,7,7,9,8,5,2,1,1,1,1,1,1,3,8,12,11,16,17,1,1,3,5,9,8,9,9,5,2,1,1,1,1,1,1,2,7,12,14,19,20,1,1,1,4,6,8,8,7,5,1,1,2,3,1,1,1,2,8,13,15,19,20,1,1,1,5,8,10,9,7,6,2,1,2,4,1,1,2,4,8,12,16,19,20,1,1,1,5,9,9,8,7,7,4,1,1,5,3,1,2,5,10,14,16,19,20,1,1,1,1,7,10,8,8,10,5,1,2,4,3,1,1,6,10,11,16,19,20,1,1,1,1,3,5,7,8,10,4,1,2,3,1,1,5,8,11,15,19,23,24,1,1,1,1,1,2,5,9,10,4,1,1,1,1,2,7,12,15,14,18,24,25,1,1,1,1,3,3,5,5,9,5,2,2,10,8,2,5,12,16,16,17,24,25,1,2,2,3,3,5,10,9,7,6,6,4,10,7,3,5,14,17,20,19,24,26,2,2,4,5,7,5,8,12,9,7,10,2,6,6,5,7,13,17,22,23,24,25,4,6,7,8,10,8,9,10,8,8,12,9,10,10,10,7,12,18,24,25,25,25,4,10,11,11,12,11,10,9,9,9,12,14,13,13,12,11,15,18,24,27,29,30,5,9,12,13,14,12,11,12,12,11,12,15,15,14,14,13,14,20,25,28,31,32,8,11,13,14,15,14,11,11,14,11,11,14,17,19,15,17,14,19,24,26,31,31,12,13,14,15,15,15,14,12,12,12,12,14,18,21,21,18,17,20,22,25,33,34,13,14,15,15,16,16,15,14,12,12,15,12,19,27,24,22,17,20,22,27,36,37,15,16,16,16,17,17,17,16,14,12,12,12,11,19,27,26,24,23,22,28,38,38,17,16,16,16,17,18,17,18,16,14,12,13,14,15,26,27,28,25,25,28,34,35,19,17,17,16,17,18,18,18,15,13,13,13,17,17,23,30,30,27,26,29,32,34,23,21,19,17,17,18,17,15,14,14,14,14,16,19,29,31,28,25,25,27,32,33,26,26,22,17,17,17,16,14,13,15,16,16,17,17,26,35,29,25,25,27,32,32,28,28,24,19,18,17,16,14,13,13,18,19,18,17,21,25,26,26,25,28,31,31,28,29,24,19,18,17,16,15,13,13,17,19,18,17,20,24,26,25,25,28,30,31],
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
