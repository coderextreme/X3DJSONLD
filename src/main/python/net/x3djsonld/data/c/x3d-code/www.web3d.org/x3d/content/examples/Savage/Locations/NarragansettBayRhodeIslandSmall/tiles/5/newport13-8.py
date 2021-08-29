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
        texture=ImageTexture(url=['../../images/5/newport13-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.543009662207645,-71.3702967334799,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[32,31,30,27,24,25,24,23,23,19,17,17,17,15,12,12,9,6,0,0,0,0,0,32,30,29,29,26,25,24,21,19,18,17,16,14,13,11,9,9,6,0,0,0,0,0,32,30,27,27,26,25,21,19,18,18,19,17,14,12,9,5,5,2,0,0,0,0,0,32,30,27,25,25,24,21,19,19,18,19,19,14,11,8,4,2,0,0,0,0,0,0,32,31,29,27,25,24,22,21,19,17,17,14,11,9,7,4,2,0,0,0,0,0,0,32,29,29,26,24,23,21,20,18,16,14,12,9,7,6,5,4,2,0,0,0,0,0,31,28,28,26,24,22,21,19,18,17,14,12,11,7,5,7,8,5,0,0,0,0,0,32,31,30,27,25,25,23,19,16,15,14,13,9,7,5,4,5,3,0,0,0,0,0,32,31,30,28,27,25,23,20,18,16,15,12,10,9,8,6,4,3,2,0,0,0,0,31,31,30,28,27,24,23,23,21,19,15,12,11,13,11,8,5,5,5,2,0,0,0,32,31,30,28,26,24,22,20,19,18,15,14,13,12,12,9,9,9,8,5,4,2,0,34,34,31,28,25,23,21,19,17,16,14,14,14,16,15,13,11,12,12,10,8,3,1,34,34,31,29,26,23,22,20,18,17,16,14,14,15,15,14,11,10,11,10,8,6,4,34,33,31,29,26,23,22,21,19,19,17,16,15,15,16,15,12,13,12,9,8,8,8,33,31,29,28,26,23,23,24,23,21,20,17,16,17,18,16,15,16,16,15,12,12,12,31,30,29,28,26,25,25,25,25,23,19,18,17,18,19,17,15,16,16,16,16,13,12,29,29,30,29,26,26,25,23,23,21,18,19,20,21,21,19,16,15,16,17,18,15,14,30,29,29,29,26,25,24,23,23,22,22,21,21,22,23,21,19,17,17,18,20,19,17,29,29,27,26,26,26,25,23,23,25,26,25,22,23,23,23,21,19,19,19,20,20,19,26,27,27,27,27,27,26,25,24,25,29,29,26,24,22,22,22,22,21,20,19,20,20,27,26,27,28,28,29,28,28,24,24,26,26,24,22,22,23,22,22,22,20,19,20,20,26,25,26,26,28,30,29,26,23,21,21,22,22,23,24,25,25,25,25,22,22,22,22,26,25,25,25,28,29,29,25,22,20,19,21,24,24,25,25,24,25,26,23,23,23,22],
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
