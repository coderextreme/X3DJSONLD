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
        texture=ImageTexture(url=['../../images/5/newport10-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.38643844903493,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[19,20,22,22,24,26,25,23,25,24,21,21,21,19,18,17,16,17,19,20,19,18,17,20,22,24,24,25,27,26,24,28,28,25,24,24,23,22,20,18,19,21,20,19,18,17,22,25,27,27,26,26,25,27,31,34,31,29,27,25,23,20,19,19,20,19,18,18,18,23,23,25,27,28,28,28,30,34,38,36,33,30,26,22,21,19,19,19,19,18,17,18,25,24,25,26,28,30,31,34,37,38,35,32,30,27,24,23,21,19,20,20,18,17,18,28,27,28,29,30,32,33,35,36,35,32,32,30,29,29,27,24,21,22,22,20,19,18,26,27,29,33,34,34,33,35,35,35,34,31,30,31,31,29,25,22,20,19,18,20,20,26,29,32,36,36,35,36,35,35,36,38,35,33,33,32,31,28,25,22,20,19,19,21,28,34,37,38,35,36,37,36,36,38,41,38,36,36,35,34,31,29,26,23,22,20,19,29,32,34,36,34,34,35,36,38,41,43,42,41,41,40,37,33,32,28,25,23,20,18,28,31,32,33,35,37,37,37,38,40,41,42,43,42,40,37,35,32,27,27,24,22,18,30,31,33,33,36,37,37,39,38,39,40,44,44,45,44,40,36,33,29,26,25,24,20,29,34,34,34,37,36,37,39,37,39,44,45,46,46,46,43,39,35,33,29,27,25,21,28,32,34,36,36,38,40,41,39,42,45,44,47,45,42,41,39,38,35,32,29,25,21,30,32,35,37,38,40,43,43,42,43,45,44,46,44,42,41,38,38,35,32,29,27,24,32,35,35,36,38,40,43,43,42,44,46,47,45,44,42,40,38,36,36,32,29,29,27,32,33,32,35,37,39,41,41,42,43,43,43,45,45,44,44,42,39,40,36,31,29,28,32,32,31,33,35,38,40,41,42,42,41,43,46,46,45,45,44,42,39,37,33,31,28,31,31,30,33,34,37,39,39,40,42,42,43,44,44,44,47,45,41,38,36,34,32,31,30,31,31,32,35,37,38,37,35,38,39,40,41,43,45,46,45,44,40,38,34,31,29,29,29,30,32,33,35,36,36,35,36,37,38,40,42,44,44,43,42,40,38,35,32,29,28,28,29,30,32,34,34,35,35,34,33,36,38,40,42,45,43,42,39,36,35,33,29,28,28,29,29,31,33,33,34,34,33,33,35,38,40,42,46,45,42,39,36,35,33,29],
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
