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
        texture=ImageTexture(url=['../../images/5/newport12-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.3702967334799,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[14,14,13,14,16,20,23,25,27,28,30,31,30,31,31,29,29,27,26,23,20,18,16,14,14,13,15,18,21,22,24,26,27,30,32,32,32,34,33,31,30,28,24,21,18,16,14,14,14,16,19,21,22,24,26,27,30,32,31,32,32,30,29,30,31,28,23,19,17,13,14,14,18,20,21,23,24,25,26,28,29,29,30,31,29,28,29,31,29,24,20,18,13,13,14,18,21,22,23,24,25,27,28,28,29,29,30,31,29,28,27,24,21,18,15,13,13,14,18,20,22,21,23,24,26,26,26,27,29,31,31,29,26,23,21,20,18,17,17,13,14,18,22,23,22,23,23,25,26,26,28,30,31,30,26,23,21,20,18,17,16,21,15,15,19,22,23,24,24,23,23,26,28,28,28,29,29,26,22,19,16,14,14,13,26,19,16,18,21,22,26,26,24,22,23,27,27,26,26,25,24,20,17,15,13,12,12,27,22,19,20,21,23,25,26,27,25,23,25,27,27,23,21,21,20,19,17,13,12,12,26,25,24,23,23,24,23,23,27,28,28,27,26,25,21,18,17,19,21,18,13,13,11,26,27,27,25,24,23,23,24,26,28,28,28,25,22,19,18,17,19,19,15,11,6,4,27,28,27,26,25,24,24,24,25,26,27,27,25,22,20,19,17,16,14,13,10,2,0,28,28,28,28,26,25,26,25,25,26,25,25,25,23,22,19,16,14,11,9,6,0,0,31,32,30,29,27,24,24,26,27,27,26,23,21,21,19,17,14,13,11,8,2,0,0,30,30,29,28,27,26,25,24,25,26,27,24,21,18,16,16,14,12,9,7,1,0,0,29,28,28,28,28,28,27,25,24,24,24,22,21,18,17,17,14,10,8,4,0,0,0,29,27,28,28,30,28,28,29,25,23,20,20,20,20,17,15,12,11,7,1,0,0,0,28,28,29,30,27,26,25,25,24,23,21,22,21,19,17,14,12,9,5,0,0,0,0,30,29,30,30,27,27,26,25,24,23,20,19,19,16,15,14,11,7,1,0,0,0,0,30,30,29,29,28,29,27,25,22,21,18,14,15,15,14,13,11,7,1,0,0,0,0,32,31,30,27,25,26,25,24,24,20,17,17,17,15,12,13,9,6,0,0,0,0,0,32,31,30,27,24,25,24,23,23,19,17,17,17,15,12,12,9,6,0,0,0,0,0],
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
