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
        texture=ImageTexture(url=['../../images/5/newport12-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.37836759125742,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[42,42,42,39,36,34,33,31,31,30,28,26,25,26,25,23,20,18,17,15,14,14,14,43,44,43,42,40,38,36,34,32,30,27,25,22,22,21,20,19,18,16,15,14,14,14,43,43,43,42,41,40,38,37,34,31,28,27,25,23,21,19,16,16,16,15,14,14,14,43,42,42,43,42,42,40,37,35,33,31,29,28,25,22,19,16,15,15,15,14,14,13,43,42,42,44,45,44,40,38,37,35,33,32,30,27,24,21,19,16,16,15,14,13,13,44,44,45,46,46,44,40,39,38,37,35,33,31,28,25,25,24,22,21,20,18,15,13,44,44,45,45,44,42,41,41,39,37,36,34,32,29,27,26,25,23,21,22,22,22,17,44,44,44,44,44,42,42,42,41,39,37,35,33,30,28,25,24,23,21,24,26,27,21,45,43,43,43,44,44,44,45,43,40,38,36,34,32,29,26,24,23,23,27,30,30,26,43,42,43,43,44,44,44,44,43,41,38,35,34,33,31,27,25,25,25,25,27,28,27,43,43,42,42,43,44,43,43,43,41,39,37,37,36,34,30,27,26,25,24,24,25,26,42,42,43,44,45,44,43,43,44,43,41,40,39,37,34,32,28,27,27,25,22,23,26,41,43,44,44,45,45,44,45,45,44,42,40,39,38,35,33,30,29,28,27,25,26,27,40,43,43,43,44,46,45,45,45,44,43,41,40,39,37,35,33,31,30,27,27,27,28,38,40,42,43,44,46,46,45,45,46,45,43,41,40,37,36,33,32,31,29,29,29,31,38,39,40,41,43,44,45,46,46,46,46,45,44,41,39,38,35,34,31,30,29,29,30,38,39,40,41,42,44,45,45,47,46,46,46,44,42,40,38,36,35,33,31,30,29,29,39,40,41,42,42,43,44,45,45,46,46,45,44,42,40,38,36,36,33,32,30,29,29,37,39,39,40,41,43,44,45,45,47,47,45,43,41,40,38,36,36,34,32,29,28,28,34,36,39,39,40,42,44,45,45,47,47,46,44,41,40,39,38,35,34,32,31,30,30,33,35,37,38,39,41,43,44,45,46,46,45,44,42,41,39,37,35,35,35,33,31,30,33,35,36,38,39,41,43,43,44,47,46,45,43,41,40,40,38,36,35,35,33,32,32,33,36,36,37,39,42,42,43,44,46,46,45,43,41,40,40,39,37,36,35,34,33,32],
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
