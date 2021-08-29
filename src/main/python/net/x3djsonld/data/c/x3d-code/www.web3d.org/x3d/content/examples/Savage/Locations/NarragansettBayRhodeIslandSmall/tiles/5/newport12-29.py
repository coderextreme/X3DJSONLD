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
        texture=ImageTexture(url=['../../images/5/newport12-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.20080872015217,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[19,22,24,26,27,27,28,28,28,27,27,26,25,24,24,23,22,21,21,20,20,19,20,19,22,24,25,27,28,28,28,28,28,28,27,26,25,24,23,22,22,21,20,20,20,20,18,21,23,25,27,28,29,29,29,29,28,27,26,26,25,24,23,22,22,21,20,20,20,18,20,22,25,27,28,29,29,29,29,29,28,27,26,25,25,24,23,22,21,21,20,20,17,19,21,24,27,28,29,30,30,30,30,29,28,27,26,25,24,23,22,22,21,21,21,16,19,21,24,26,28,29,30,31,31,31,30,29,28,27,25,24,23,23,22,22,22,22,17,19,21,24,26,28,30,31,32,32,32,31,30,28,27,25,24,23,23,22,22,22,22,16,19,21,23,26,29,30,32,33,33,33,31,30,29,27,26,24,23,23,23,22,22,22,14,18,20,23,26,29,31,32,34,34,33,32,30,29,28,26,25,24,23,23,23,23,22,12,16,20,23,26,29,31,33,34,34,33,31,30,29,28,27,25,24,24,23,23,23,23,12,16,20,23,26,30,32,34,35,34,32,31,30,29,28,26,25,25,24,23,23,23,23,12,16,20,23,26,30,32,34,36,34,32,30,30,29,27,26,25,25,24,24,24,23,23,13,16,20,23,26,30,32,34,35,33,31,30,29,28,27,26,25,25,25,24,24,24,23,14,18,21,24,27,29,31,32,33,32,31,29,28,27,27,26,26,26,25,25,25,25,24,14,18,22,25,27,29,30,31,31,31,30,29,28,27,27,26,26,26,25,26,26,25,25,14,18,22,25,27,28,29,30,30,30,29,28,28,27,26,26,26,26,26,26,27,26,26,12,17,21,24,26,27,28,29,28,28,28,28,27,27,26,26,26,26,26,27,27,27,27,11,16,20,23,26,27,27,27,27,27,27,27,27,26,26,26,26,26,26,27,28,27,27,8,14,18,21,24,26,26,26,26,26,26,26,26,26,26,26,27,27,27,27,28,28,27,4,11,15,19,22,24,24,24,24,25,24,24,25,26,26,27,27,27,28,28,28,28,28,2,7,13,16,19,21,22,23,23,23,23,23,24,25,26,27,28,28,29,29,29,28,27,0,4,9,13,16,18,20,20,21,21,22,22,23,24,26,27,28,29,30,30,29,29,28,0,2,7,11,14,16,18,19,20,20,21,22,23,24,26,27,28,29,30,30,29,29,29],
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
