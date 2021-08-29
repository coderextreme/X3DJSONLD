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
        texture=ImageTexture(url=['../../images/5/newport22-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,0,0,0,2,12,16,14,16,0,0,0,0,0,0,0,0,0,1,0,1,1,1,0,2,11,17,25,28,28,18,4,0,0,0,0,0,0,0,0,1,1,1,1,1,0,11,24,29,31,33,38,26,18,0,0,0,0,0,0,0,0,1,1,1,1,1,7,17,29,35,42,40,34,32,24,0,0,0,0,0,0,0,0,1,1,1,1,1,15,25,32,37,40,43,36,33,29,9,0,0,0,0,0,0,0,1,1,1,1,1,19,25,33,38,40,40,35,32,29,19,0,0,0,0,0,0,0,1,1,1,1,1,18,27,32,33,36,37,32,28,22,16,4,0,0,0,0,0,0,1,1,1,1,1,19,24,28,31,30,28,31,25,20,15,8,0,0,0,0,0,0,1,1,1,1,1,15,18,24,27,27,26,27,22,15,10,9,5,0,0,0,0,0,1,1,1,1,1,9,15,18,23,26,24,24,22,15,10,8,6,1,0,0,0,0,1,1,1,1,1,5,12,20,23,21,24,22,19,14,13,7,2,0,0,0,0,0,1,1,1,1,1,8,10,15,17,18,26,23,15,13,13,9,6,0,0,0,0,0,1,1,1,1,1,4,8,17,17,20,18,19,14,13,12,10,3,1,1,0,0,0,1,1,1,1,1,3,11,10,15,16,16,18,16,12,11,8,4,2,1,0,0,0,1,1,1,1,1,1,3,8,13,16,14,15,18,17,11,10,7,3,1,1,0,0,1,1,1,1,1,0,4,7,10,15,15,16,19,16,11,12,11,7,1,1,0,0,1,1,1,1,1,1,1,4,7,12,17,15,16,19,14,15,12,8,1,1,0,0,1,1,1,1,1,1,2,3,11,10,16,18,17,21,14,13,12,8,5,1,0,0,1,1,1,1,1,1,3,3,5,18,14,21,21,18,15,16,6,5,8,1,0,0,1,1,1,1,1,4,3,5,9,13,16,21,20,21,18,17,12,9,5,1,0,0,1,1,1,1,1,4,3,6,9,12,17,21,22,23,17,18,12,9,6,1,0,0,1,1,1,1,1],
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
