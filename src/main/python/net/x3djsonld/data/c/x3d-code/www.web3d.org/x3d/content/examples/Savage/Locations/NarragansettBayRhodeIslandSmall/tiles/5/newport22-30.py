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
        texture=ImageTexture(url=['../../images/5/newport22-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.615647382205246,-71.19273786237466,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,0,0,1,3,4,7,9,11,12,13,14,14,14,14,14,15,16,19,0,0,0,0,0,0,0,1,3,6,11,13,13,12,12,12,13,13,14,15,16,18,22,0,0,0,0,0,0,0,1,4,9,15,17,14,11,11,11,10,11,13,16,20,23,27,0,0,0,0,0,0,0,2,6,10,12,12,12,11,10,10,10,12,14,18,22,27,30,0,0,0,0,0,0,1,5,6,8,9,12,12,11,11,11,11,13,16,20,24,28,32,0,0,0,0,0,2,4,6,8,9,10,11,11,11,11,11,12,13,17,21,26,32,37,0,0,0,0,1,3,5,8,9,11,11,10,10,10,10,11,12,16,21,25,30,38,43,0,0,0,0,1,3,5,7,10,11,10,9,8,9,10,11,15,25,28,30,36,42,45,0,0,0,0,1,3,5,7,9,10,10,8,8,8,10,14,22,32,33,33,38,44,47,0,0,0,0,1,2,4,6,8,10,10,8,7,8,11,17,25,31,34,35,38,42,44,0,0,0,0,1,2,4,5,7,8,7,7,7,10,12,17,23,29,30,32,35,39,42,0,0,0,0,1,2,3,4,5,6,6,6,8,12,15,18,20,24,27,28,30,34,39,0,0,0,1,1,2,3,4,4,5,4,5,8,12,17,21,21,21,22,24,26,30,34,0,0,0,0,1,1,4,6,6,6,6,5,7,10,16,21,22,21,21,23,25,28,32,2,0,0,1,1,1,2,5,7,8,8,9,10,11,13,16,18,19,21,23,24,25,29,3,2,1,1,1,1,2,4,6,8,10,13,15,15,13,14,16,17,19,23,25,24,24,4,3,3,2,2,3,4,5,7,9,12,16,19,18,16,15,15,16,18,21,22,23,24,5,5,4,4,4,5,7,9,10,12,16,19,20,19,17,17,17,17,18,20,21,22,24,6,6,5,5,7,8,11,14,15,15,18,20,20,19,18,18,17,18,19,21,23,25,26,7,8,8,8,12,15,17,20,21,20,20,20,19,20,20,20,19,19,21,24,26,28,30,10,11,12,13,17,23,26,26,24,25,25,24,23,23,23,22,21,22,23,25,28,30,32,14,17,18,18,21,29,30,27,26,29,30,30,29,28,27,25,24,24,26,28,31,34,35,16,20,21,21,22,29,29,27,28,31,32,32,31,30,29,27,25,25,27,30,33,35,36],
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
