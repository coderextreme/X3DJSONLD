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
        texture=ImageTexture(url=['../../images/5/newport17-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.15364557954115,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[30,26,25,27,27,27,24,24,26,28,32,30,25,18,13,9,6,5,4,1,3,3,27,25,25,25,26,25,27,28,29,31,31,28,23,18,12,9,6,4,3,2,4,5,25,25,25,25,26,28,29,31,32,33,30,27,21,17,12,8,6,4,4,6,10,10,25,25,27,31,29,30,31,33,33,33,30,25,21,17,12,8,6,4,6,10,12,12,25,25,30,33,33,32,32,34,35,34,30,25,21,17,11,8,6,6,9,12,13,13,30,30,32,34,34,33,34,35,36,34,29,24,19,14,11,9,7,8,11,14,12,12,33,31,33,36,38,36,36,36,36,33,28,23,17,15,12,9,9,10,12,13,11,10,34,33,35,37,38,38,37,37,36,31,25,21,18,14,11,12,12,10,10,11,10,10,35,36,37,38,40,39,36,35,33,29,25,23,20,15,12,15,13,11,11,10,11,11,37,38,38,40,41,40,37,34,32,30,27,22,17,14,15,14,14,14,13,11,12,12,38,40,42,43,42,40,38,36,33,29,22,18,17,16,15,14,16,16,12,12,14,14,38,40,44,45,41,38,36,33,29,25,21,19,17,16,17,16,14,13,13,13,15,15,40,43,44,41,38,35,33,30,27,23,21,18,17,16,16,15,14,13,13,13,13,13,41,44,44,38,34,33,32,29,24,21,21,18,16,17,17,15,14,14,14,15,17,17,42,44,42,39,34,31,29,27,26,24,19,16,17,19,18,16,16,16,16,19,19,18,41,45,44,39,36,32,31,30,26,21,18,18,18,18,18,17,17,17,20,21,19,19,40,39,41,43,40,37,33,28,22,18,18,18,20,18,18,18,18,20,21,21,21,21,38,37,37,37,38,35,30,25,19,18,18,18,19,19,19,20,20,22,24,24,23,23,40,40,39,38,34,29,24,20,18,18,18,19,18,19,20,20,22,24,27,26,25,25,40,40,38,35,32,28,22,19,18,18,18,19,19,20,21,23,24,28,30,28,27,27,38,37,34,31,30,25,21,19,18,18,18,19,20,21,23,25,28,30,29,28,26,26,36,35,34,30,26,22,20,19,18,19,20,21,20,20,23,27,31,30,27,26,24,24,35,34,33,30,26,22,20,20,20,21,21,21,22,23,24,28,31,28,27,26,26,26,34,33,33,29,26,22,20,19,20,21,21,22,22,24,24,28,31,28,27,27,27,27],
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
