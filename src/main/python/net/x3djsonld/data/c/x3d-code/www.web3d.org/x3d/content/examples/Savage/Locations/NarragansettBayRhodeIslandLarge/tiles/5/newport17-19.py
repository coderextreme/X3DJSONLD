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
        texture=ImageTexture(url=['../../images/5/newport17-19.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.37349911997524,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[17,16,15,17,18,20,21,19,15,12,9,5,4,0,0,0,0,0,0,0,0,0,15,14,15,13,17,18,21,25,22,16,12,8,6,0,0,0,0,0,0,0,0,0,16,12,13,15,16,22,23,28,27,22,18,13,10,5,0,0,0,0,0,0,0,0,14,14,11,17,21,23,25,26,32,28,27,18,13,7,0,0,0,0,0,0,0,0,16,13,13,15,17,23,27,30,31,32,27,21,13,8,0,0,0,0,0,0,0,0,19,13,11,10,14,19,22,28,32,32,30,25,13,7,0,0,0,0,0,0,0,0,22,17,15,10,9,15,20,24,31,32,28,24,16,7,3,0,0,0,0,0,0,0,23,18,15,10,16,16,17,20,25,34,30,21,16,8,0,0,0,0,0,0,0,0,25,20,15,19,12,8,18,24,29,31,30,20,14,9,0,0,0,0,0,0,0,0,28,22,17,16,14,14,17,24,28,30,30,22,16,8,0,0,0,0,0,0,0,0,31,26,23,19,15,14,16,23,28,31,32,25,17,8,0,0,0,0,0,0,0,0,37,32,25,16,14,13,20,24,27,28,30,27,16,2,0,0,0,0,0,0,0,0,41,35,28,24,24,16,20,23,25,28,28,19,13,0,0,0,0,0,0,0,0,0,43,37,34,26,24,25,22,23,27,26,18,21,12,0,0,0,0,0,0,0,0,0,46,41,37,31,27,28,28,26,26,25,18,11,0,0,0,0,0,0,0,0,0,0,47,47,40,35,30,29,28,25,25,20,16,7,0,0,0,0,0,0,0,0,0,0,46,47,41,37,31,29,29,24,23,18,13,0,0,0,0,0,0,0,0,0,0,0,43,46,41,38,34,32,26,24,18,16,11,0,0,0,0,0,0,0,0,0,0,0,42,43,43,39,36,32,25,19,19,12,3,0,0,0,0,0,0,0,0,0,0,0,42,43,42,40,36,30,25,20,15,9,8,0,0,0,0,0,0,0,0,0,0,0,40,43,42,38,33,31,28,23,17,13,7,4,0,0,0,0,0,0,0,0,0,0,40,41,41,39,36,35,28,21,17,15,12,11,5,0,0,0,0,0,0,0,0,0,38,38,39,38,35,30,27,25,20,18,16,16,12,6,0,0,0,0,0,0,0,0,39,38,38,37,34,29,27,25,19,20,17,16,13,10,0,0,0,0,0,0,0,0],
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
