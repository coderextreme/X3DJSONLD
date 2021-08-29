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
        texture=ImageTexture(url=['../../images/5/newport11-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.37958958474797,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[14,10,10,10,7,6,7,6,6,2,1,0,0,0,0,1,2,7,8,9,9,8,14,13,12,11,8,6,5,4,3,2,6,0,0,0,0,1,5,6,7,8,8,8,16,14,13,10,8,6,2,2,1,0,0,0,0,0,0,1,6,6,6,8,6,6,16,16,14,8,4,4,2,0,0,0,0,0,0,0,0,0,5,6,7,8,3,3,15,13,14,8,6,5,4,3,0,2,2,6,3,2,1,3,3,5,6,4,3,3,15,16,16,12,9,6,3,8,8,7,6,6,7,7,10,8,2,4,3,2,2,2,12,14,13,10,6,3,1,5,9,9,8,8,7,8,9,9,4,3,2,4,4,4,15,12,9,8,6,5,3,7,10,9,9,9,8,9,8,8,4,3,4,5,3,3,22,20,16,15,18,16,13,13,13,10,10,9,7,7,8,6,3,4,5,4,4,4,28,30,26,24,24,22,18,17,17,17,11,6,4,3,4,6,5,5,4,6,4,4,27,30,32,27,23,20,18,21,21,18,10,8,8,10,9,9,9,7,4,6,5,5,22,24,30,30,27,23,24,28,28,19,15,20,16,22,22,19,17,13,9,7,5,4,16,14,29,32,30,27,28,29,31,27,26,27,23,25,28,28,23,22,20,13,11,11,15,14,27,30,27,28,33,36,32,29,31,32,27,28,31,28,26,26,24,19,17,17,15,21,26,27,27,27,32,36,32,30,32,32,27,31,35,34,30,24,22,19,18,18,20,31,33,31,28,31,31,33,33,32,33,35,32,36,35,35,30,23,23,26,21,21,21,23,28,33,31,32,30,29,29,33,35,36,37,36,34,33,33,29,26,29,25,25,17,17,22,26,25,28,27,27,29,31,35,37,37,36,39,33,34,34,29,31,27,27,18,16,19,19,17,18,18,21,25,30,31,38,39,41,39,37,35,33,33,30,28,28,21,15,19,19,16,16,20,21,25,33,32,38,41,41,36,39,35,37,34,30,33,33,21,17,20,21,19,19,21,21,21,25,30,35,38,36,36,39,38,32,30,30,30,29,20,18,18,18,20,21,21,23,21,20,30,30,31,31,33,35,28,26,24,28,27,26,19,19,17,18,19,21,21,23,29,31,24,24,24,26,31,30,21,21,25,23,25,25,19,20,18,19,20,21,21,23,30,32,24,24,24,25,31,29,21,20,25,22,25,25],
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
