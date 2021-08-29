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
        texture=ImageTexture(url=['../../images/5/newport26-26.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.21960164167137,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[17,20,18,15,15,13,13,11,9,5,3,1,1,1,1,1,1,1,1,3,1,1,19,22,19,15,14,15,15,14,10,5,2,1,1,1,1,1,1,1,3,1,1,1,20,24,19,15,13,14,14,13,14,7,3,2,1,1,1,1,2,2,2,3,1,1,20,24,19,14,11,10,11,7,5,4,1,1,1,1,2,3,3,2,2,5,1,1,21,23,21,16,12,12,12,8,4,1,1,1,2,1,4,5,3,2,5,5,2,1,20,23,20,17,14,14,13,8,4,2,1,1,1,3,4,2,4,3,12,10,2,1,21,21,20,18,16,15,13,4,1,1,2,1,3,5,4,3,4,4,9,4,1,1,21,23,20,19,18,16,12,3,1,1,1,2,3,3,7,11,5,5,6,6,1,1,23,24,20,19,19,17,10,7,1,1,3,4,7,8,4,13,8,4,6,4,1,1,24,24,21,21,20,16,11,10,6,5,5,5,11,7,5,4,5,5,6,7,1,1,25,24,22,21,20,18,14,10,9,5,5,6,7,7,7,5,5,5,4,4,2,2,25,24,23,21,19,17,13,11,11,8,8,8,8,5,7,6,5,5,4,3,3,4,25,24,23,21,18,16,12,13,12,11,12,11,9,7,6,7,6,5,5,3,3,4,24,24,23,22,19,13,14,14,14,13,14,14,10,8,7,7,6,5,4,4,5,5,25,24,22,20,17,14,13,13,14,14,15,17,13,9,7,6,6,5,5,4,7,8,26,24,20,20,15,14,13,13,14,13,13,16,14,11,8,6,9,8,5,5,11,12,27,26,22,20,17,14,14,14,13,12,13,15,13,13,10,6,12,12,6,7,12,13,27,26,26,21,18,16,15,14,12,12,15,15,13,10,7,9,11,12,8,9,14,15,26,31,26,18,17,16,15,13,12,11,15,16,16,10,6,11,16,12,7,13,18,17,33,32,22,17,16,15,14,12,10,11,15,16,15,9,6,9,17,15,11,17,20,19,31,28,23,17,16,14,12,10,10,10,15,15,13,11,6,12,18,16,13,19,23,23,33,31,25,21,18,13,10,10,10,10,15,14,13,7,6,12,17,17,16,19,25,26,31,29,27,24,19,12,10,10,10,9,11,12,23,8,6,10,13,13,14,19,26,28,31,29,27,24,20,13,11,11,10,9,10,12,25,7,7,10,12,13,14,19,26,28],
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
