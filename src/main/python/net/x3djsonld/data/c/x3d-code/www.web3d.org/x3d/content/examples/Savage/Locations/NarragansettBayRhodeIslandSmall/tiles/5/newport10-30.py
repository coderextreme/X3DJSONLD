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
        texture=ImageTexture(url=['../../images/5/newport10-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.19273786237466,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[17,20,23,25,27,29,30,31,31,31,31,31,30,30,29,28,27,26,24,23,23,23,23,17,20,23,25,28,29,30,31,31,31,31,31,31,30,29,28,26,26,25,24,23,23,23,18,21,23,25,28,29,30,31,31,31,31,31,30,30,29,28,26,26,25,24,24,23,23,18,21,23,25,27,29,30,31,31,31,31,31,31,30,29,28,26,26,25,24,24,23,23,18,21,23,25,27,29,30,31,31,31,31,31,31,30,29,28,27,26,25,25,24,24,23,18,22,24,26,28,30,30,31,31,31,31,31,31,30,29,28,27,26,25,25,24,24,23,19,22,25,26,28,29,30,31,31,31,31,31,31,30,29,28,27,26,26,25,24,24,23,20,23,25,26,28,29,30,31,31,31,31,31,31,30,29,28,27,27,26,25,24,24,24,21,23,25,26,28,29,30,30,31,31,31,31,31,30,29,28,28,27,26,25,25,24,24,21,23,25,26,27,28,29,30,31,31,31,31,32,31,29,29,27,27,26,26,25,25,25,21,23,24,26,26,27,28,29,31,31,31,31,32,31,29,29,28,27,27,26,26,25,25,21,23,25,25,26,27,27,28,29,31,32,32,32,31,30,29,28,28,27,26,26,26,25,22,24,25,25,25,26,27,27,29,30,31,32,32,31,30,30,29,28,27,27,26,26,26,22,24,24,25,25,26,26,27,28,29,31,32,32,32,31,30,29,29,28,27,27,26,26,22,23,24,25,25,25,26,27,28,29,30,31,32,32,32,31,30,29,29,28,27,26,26,21,23,24,25,25,26,26,27,28,29,30,31,32,33,33,33,32,30,29,28,27,27,26,21,23,24,24,25,25,26,27,27,29,30,31,32,33,33,33,33,32,30,29,28,27,26,22,23,24,24,25,25,26,26,27,28,30,31,32,33,34,34,33,32,31,29,28,27,26,22,23,24,24,24,25,25,26,27,28,29,31,32,34,34,34,34,33,31,29,28,27,27,22,23,24,24,24,25,25,26,27,28,29,30,32,33,34,34,34,33,32,31,29,28,27,20,22,23,23,24,24,25,26,27,28,29,30,32,33,34,35,34,34,33,32,30,29,27,19,21,22,23,24,25,25,26,27,28,29,30,32,34,35,35,35,34,34,33,31,29,28,18,20,22,23,24,25,25,26,27,28,30,30,32,34,35,35,35,35,34,33,31,30,29],
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
