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
        texture=ImageTexture(url=['../../images/5/newport13-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.543009662207645,-71.19273786237466,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[29,28,28,28,28,29,29,29,29,29,28,28,27,26,25,24,22,21,19,17,16,14,14,30,29,30,30,30,30,31,31,31,31,30,29,28,27,26,24,22,20,19,17,15,14,14,30,30,31,31,31,32,33,33,33,32,32,31,29,27,26,24,22,21,19,17,15,14,14,31,31,33,33,33,34,35,35,34,34,33,31,29,28,26,24,22,21,19,16,14,14,14,33,34,34,35,35,36,36,36,36,35,34,32,30,28,25,24,22,20,18,16,14,14,14,34,35,36,36,37,37,38,37,36,35,33,32,30,28,26,24,22,20,17,15,14,14,14,34,36,37,38,38,39,39,38,36,35,33,31,29,27,25,24,22,20,18,15,14,14,14,35,37,38,39,39,40,39,38,36,35,33,31,29,27,25,23,22,20,18,15,14,14,14,34,37,38,39,40,40,39,38,36,35,33,31,29,27,25,23,21,19,17,15,14,14,14,35,38,39,40,41,40,39,38,36,35,33,31,29,27,25,23,21,19,16,14,14,14,14,35,38,41,42,41,40,39,37,36,34,32,31,29,27,25,23,20,18,15,14,14,14,14,34,38,41,41,40,39,38,36,35,33,32,30,29,26,24,23,20,16,14,14,14,14,14,33,36,38,39,39,38,36,35,33,32,31,30,28,26,24,22,19,15,14,14,14,14,14,32,34,36,37,37,36,34,33,32,31,30,28,27,26,24,21,18,15,14,14,14,13,13,31,33,35,36,36,35,33,32,30,30,28,27,26,25,23,20,17,15,14,13,12,11,11,29,31,33,34,35,34,33,31,30,29,28,27,25,24,22,20,17,15,12,10,8,8,8,29,31,32,33,33,33,32,30,29,29,27,26,25,23,21,19,16,14,11,9,7,7,8,29,31,32,32,32,31,31,30,29,28,27,25,24,23,21,18,16,14,11,8,7,7,9,29,30,30,30,30,30,29,29,28,27,26,24,23,21,19,17,15,13,11,8,6,7,8,27,28,29,29,29,28,28,27,27,26,25,23,21,20,18,16,14,13,10,8,6,6,7,26,27,28,27,27,27,26,26,25,24,23,21,19,18,16,15,13,11,9,7,5,5,7,24,26,26,26,25,25,25,24,24,22,21,19,17,16,15,14,12,10,8,6,5,5,7,22,24,25,25,25,24,24,24,23,21,19,18,16,15,15,13,11,10,8,6,5,5,7],
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
