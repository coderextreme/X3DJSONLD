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
        texture=ImageTexture(url=['../../images/5/newport12-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[33,32,33,33,33,32,31,29,27,25,25,23,22,22,24,25,25,23,24,26,27,29,30,33,34,34,34,33,33,32,28,26,24,23,23,22,22,21,22,23,23,25,27,27,29,30,34,36,36,35,34,34,32,29,25,23,23,24,25,24,21,21,22,23,26,27,27,30,31,37,35,36,35,35,34,31,29,26,24,23,23,22,21,20,20,21,21,25,27,29,32,33,39,37,34,33,33,31,29,27,25,24,23,22,21,21,21,22,23,23,25,27,31,33,34,37,36,34,33,30,29,29,27,26,24,24,22,21,20,22,22,25,26,28,30,33,34,34,36,36,34,32,30,29,28,27,26,23,21,21,20,20,21,22,24,27,30,32,32,33,34,39,38,34,31,30,28,26,24,24,23,21,21,20,20,22,23,25,26,27,29,32,33,34,35,36,33,31,29,28,26,24,23,22,21,19,19,21,22,22,23,25,26,28,31,34,35,31,33,32,29,28,27,25,23,21,20,19,18,18,21,22,23,24,27,29,30,32,34,36,30,31,30,27,27,26,24,22,20,19,18,19,19,20,21,22,25,28,29,30,33,34,36,30,27,26,25,25,23,22,19,18,18,19,18,18,18,21,22,23,25,27,30,32,33,35,24,23,25,25,25,20,17,14,15,17,18,17,17,18,20,21,22,25,27,30,32,34,34,22,26,27,25,20,16,13,11,14,15,15,15,17,19,21,21,24,26,28,30,32,35,36,21,22,22,20,16,14,12,12,14,14,15,15,17,19,22,23,24,27,29,31,33,36,36,19,19,18,18,16,12,12,15,17,15,15,16,18,21,23,24,25,27,28,31,34,35,36,17,20,19,17,15,13,13,15,17,16,16,16,17,19,21,23,25,26,27,30,32,33,35,16,20,19,15,13,14,15,16,17,16,16,18,17,18,20,22,25,27,29,30,31,34,35,14,14,13,11,13,15,17,17,18,17,18,18,18,19,21,23,25,27,28,30,32,35,36,11,11,10,11,13,16,17,17,17,19,20,20,19,21,23,25,26,26,28,30,33,36,37,9,9,11,12,13,17,19,18,18,18,18,19,20,22,24,23,24,26,29,31,33,36,37,8,8,10,10,12,16,19,18,17,18,18,19,20,23,24,25,25,27,30,32,34,37,39,8,8,9,9,10,14,17,18,17,18,20,20,20,23,25,26,26,28,31,33,35,38,39],
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
