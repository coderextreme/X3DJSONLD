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
        texture=ImageTexture(url=['../../images/5/newport10-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.39450930681244,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,0,0,0,0,0,0,5,10,13,14,14,15,18,20,21,20,19,19,0,0,0,0,0,0,0,0,0,0,2,7,10,14,15,16,16,18,21,20,20,19,20,0,0,0,0,0,0,0,0,0,0,2,7,11,13,14,16,18,19,21,20,19,21,22,0,0,0,0,0,0,0,0,0,0,2,6,10,13,14,18,22,25,26,25,23,23,23,0,0,0,0,0,0,0,0,0,2,5,8,12,13,14,17,21,24,27,27,26,25,25,0,0,0,0,0,0,0,0,0,3,7,10,13,15,17,18,20,21,22,24,25,25,28,0,0,0,0,0,0,0,0,3,5,7,10,14,18,21,20,20,20,22,22,22,24,26,0,0,0,0,0,0,0,1,10,13,14,14,14,14,17,19,22,21,21,22,22,23,26,0,0,0,0,0,0,0,1,10,18,21,20,17,14,13,16,21,19,19,22,23,24,28,0,0,0,0,0,0,0,0,3,17,22,23,23,17,15,19,23,21,21,25,24,24,29,0,0,0,0,0,0,0,0,2,14,21,21,22,17,17,20,22,22,23,27,25,26,28,0,0,0,0,0,0,0,0,1,10,17,19,19,17,17,19,21,23,25,26,25,27,30,0,0,0,0,0,0,0,0,1,9,16,20,19,18,20,22,21,25,26,28,29,28,29,0,0,0,0,0,0,0,0,2,12,18,18,18,17,20,22,21,24,27,29,29,28,28,0,0,0,0,0,0,0,0,2,12,16,15,15,14,16,18,19,24,27,28,29,28,30,0,0,0,0,0,0,0,0,3,12,15,15,15,14,17,18,20,22,24,27,29,30,32,0,0,0,0,0,0,0,1,7,11,15,16,17,17,17,18,20,23,24,26,28,29,32,0,0,0,0,0,0,0,1,8,11,15,16,17,18,18,18,20,21,22,24,27,29,32,0,0,0,0,0,0,0,2,9,12,16,17,18,17,18,20,21,20,21,24,27,29,31,0,0,0,0,0,0,0,2,10,11,13,16,17,17,18,19,21,21,22,25,27,28,30,0,0,0,0,0,0,0,2,9,11,13,17,19,18,18,19,21,22,24,25,25,27,29,0,0,0,0,0,0,0,0,5,11,14,17,18,17,18,20,22,21,22,23,24,27,28,0,0,0,0,0,0,0,0,3,10,13,16,18,17,19,20,21,20,21,23,24,26,28],
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
