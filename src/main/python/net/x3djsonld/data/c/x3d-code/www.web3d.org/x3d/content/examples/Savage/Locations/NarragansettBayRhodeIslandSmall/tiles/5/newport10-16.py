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
        texture=ImageTexture(url=['../../images/5/newport10-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[27,27,28,30,31,31,32,34,34,34,34,35,36,37,36,37,37,38,38,38,39,38,37,22,23,25,28,28,30,31,31,32,33,34,34,35,35,34,35,37,37,37,36,37,38,37,21,21,22,23,26,28,28,29,32,32,32,33,33,35,36,36,37,37,36,36,37,37,37,18,19,21,22,22,25,25,26,29,31,31,32,32,34,36,36,36,36,36,37,37,35,34,16,19,21,20,20,21,23,24,27,29,31,31,32,32,32,33,34,34,34,36,37,35,34,15,16,18,18,19,21,23,24,25,29,30,30,31,31,30,31,32,32,33,35,35,34,35,14,15,16,17,19,21,22,23,25,27,29,30,32,31,31,31,31,31,31,31,32,33,34,14,15,16,17,18,19,21,23,25,26,28,29,30,32,32,31,31,31,31,30,30,31,32,14,16,17,16,16,17,20,23,24,25,27,28,28,30,30,30,30,31,33,32,30,31,32,14,14,14,14,15,17,19,21,23,25,28,30,30,32,32,32,31,33,34,35,34,34,34,13,13,14,16,18,19,20,23,26,28,29,31,32,34,33,32,30,31,31,34,34,33,32,16,13,13,17,21,21,21,23,26,28,28,30,31,35,32,30,29,30,30,31,31,29,28,17,15,14,16,18,20,21,21,23,25,28,30,31,33,32,32,32,30,30,30,31,29,28,14,14,15,17,18,18,20,21,23,24,27,29,31,33,34,33,35,32,32,31,32,31,30,12,14,16,18,20,19,21,24,25,27,28,30,32,34,35,33,32,31,30,29,31,32,32,13,15,16,16,17,20,22,25,26,27,27,29,30,33,36,36,34,33,33,32,31,31,31,13,15,15,16,17,20,23,25,27,28,29,30,30,32,34,35,35,34,33,32,32,31,30,9,12,15,18,18,21,24,26,28,31,31,31,32,33,34,34,34,33,32,32,31,30,31,8,10,12,16,19,22,25,26,28,30,30,32,34,34,35,36,36,34,33,32,31,28,30,8,9,13,17,20,23,25,25,27,29,31,34,34,33,35,37,37,35,33,31,30,29,30,12,13,15,18,20,23,24,26,27,30,33,34,33,33,34,34,34,34,31,30,29,29,29,17,16,16,18,19,21,24,27,29,31,32,33,35,33,34,35,34,33,32,31,30,29,28,17,16,16,18,19,21,24,27,30,31,32,34,35,34,34,35,33,32,31,31,30,29,27],
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
