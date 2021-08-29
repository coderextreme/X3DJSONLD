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
        texture=ImageTexture(url=['../../images/5/newport17-27.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.19761628762797,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[1,1,8,15,22,25,26,29,32,31,29,26,25,25,24,27,33,36,37,34,31,30,1,1,8,16,22,24,26,28,32,34,31,27,26,24,24,26,29,32,34,32,30,29,0,1,7,15,21,23,25,28,32,35,33,29,26,24,24,25,28,33,33,31,28,28,1,3,7,11,17,22,26,29,33,36,35,31,27,25,25,26,28,33,32,30,28,28,5,5,7,10,14,20,25,29,38,40,36,33,29,27,26,28,30,32,31,30,28,27,10,9,9,10,14,21,25,29,37,40,39,35,32,29,27,29,31,31,30,29,26,26,16,14,12,12,18,22,25,32,36,36,38,36,33,30,28,29,31,29,27,26,23,23,22,20,15,17,20,23,27,32,33,33,34,34,33,31,29,30,31,28,24,22,22,22,24,23,18,18,19,22,29,30,30,29,29,30,31,31,32,32,29,25,23,21,20,20,26,24,21,19,20,22,26,27,26,26,26,27,28,31,33,30,28,25,23,21,18,18,27,25,22,20,20,22,23,23,22,22,22,24,28,31,32,30,28,27,24,21,17,17,29,26,24,21,21,22,21,20,19,19,19,22,28,31,31,29,28,26,23,19,16,15,33,29,24,23,22,22,21,20,19,19,19,19,25,30,30,30,27,24,21,17,14,14,33,29,25,23,23,22,22,21,20,18,17,19,23,25,27,26,25,22,19,15,14,14,31,28,26,25,24,24,24,23,21,19,18,17,20,22,23,21,20,19,17,14,14,14,29,27,26,26,26,25,25,24,24,21,19,16,16,19,19,15,15,18,14,14,14,14,25,26,27,27,27,26,26,26,25,23,20,16,14,15,14,14,14,14,14,14,14,14,21,24,28,30,29,28,29,29,27,24,19,14,14,14,14,14,14,14,14,14,14,14,16,23,27,29,31,33,35,34,29,24,18,14,14,14,14,14,14,14,14,14,14,14,10,20,25,28,35,38,39,35,29,24,18,14,14,14,14,14,14,14,14,14,14,14,4,11,20,28,35,40,39,35,29,23,16,14,14,14,14,14,14,14,14,14,14,14,2,6,14,25,33,39,36,32,28,22,14,14,14,14,17,19,17,14,14,14,14,14,2,2,12,22,29,34,33,29,25,19,12,8,13,23,29,29,22,14,14,14,14,14,2,1,11,21,29,34,32,29,25,19,11,8,13,24,31,30,23,15,14,14,14,14],
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
