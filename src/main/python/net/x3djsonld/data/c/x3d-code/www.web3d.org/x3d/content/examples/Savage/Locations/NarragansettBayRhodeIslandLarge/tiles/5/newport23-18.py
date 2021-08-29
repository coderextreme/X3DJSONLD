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
        texture=ImageTexture(url=['../../images/5/newport23-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.669870498763935,-71.39548447401864,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,12,14,13,8,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,17,21,19,16,13,8,6,0,0,0,0,0,0,0,0,0,0,0,0,4,12,19,22,24,22,23,18,14,13,0,0,0,0,0,0,0,0,0,0,0,2,12,18,22,25,27,27,25,21,17,16,0,0,0,0,0,0,0,0,0,1,5,10,16,20,25,26,27,27,25,22,19,18,0,0,0,0,0,0,0,0,5,11,11,15,19,22,26,29,30,28,24,21,19,18,0,0,0,0,0,0,0,0,9,13,16,17,23,25,27,27,30,29,24,23,21,20,0,0,0,0,0,0,0,2,9,15,17,24,25,27,29,33,32,30,26,23,22,22,0,0,0,0,0,0,0,3,10,14,19,25,24,28,30,33,34,32,30,26,24,23,0,0,0,0,0,0,0,3,10,16,19,22,24,27,31,33,33,32,27,24,24,24,0,0,0,0,0,0,0,2,10,16,21,23,24,25,28,32,35,32,30,26,26,27,0,0,0,0,0,0,0,2,12,18,25,23,21,22,22,29,32,35,33,32,26,26,0,0,0,0,0,0,0,7,11,16,19,19,20,24,23,28,33,38,38,37,32,30,0,0,0,0,0,0,0,0,9,12,16,16,18,20,26,29,35,38,38,37,36,35,0,0,0,0,0,0,0,0,0,4,8,13,17,24,25,32,38,43,41,40,36,35,1,0,0,1,0,0,0,0,0,1,5,11,17,20,24,32,41,45,44,43,37,36,5,5,3,3,2,0,0,0,1,3,6,7,15,18,23,32,40,44,47,43,38,38,5,5,5,5,2,0,0,0,0,0,4,10,17,18,23,32,41,44,45,43,38,38,5,5,6,5,3,0,0,0,1,4,6,11,17,17,22,33,40,45,46,40,35,34,7,7,8,6,2,0,0,0,0,4,7,14,17,17,23,33,40,44,43,38,33,32,7,7,8,5,2,0,0,0,0,4,8,15,17,17,23,33,40,44,43,38,33,32],
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
