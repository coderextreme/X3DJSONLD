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
        texture=ImageTexture(url=['../../images/5/newport10-25.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.23309215126221,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[19,19,18,17,16,15,14,12,10,8,6,1,0,0,0,0,0,0,0,0,0,0,0,20,20,19,18,17,16,14,13,11,10,7,2,0,0,0,0,0,0,0,0,0,0,0,21,21,21,20,19,18,16,14,13,11,9,4,0,0,0,0,0,0,0,0,0,0,0,22,21,21,21,20,19,17,16,15,13,11,7,3,0,0,0,0,0,0,0,0,0,0,22,22,21,21,21,20,19,18,17,15,12,10,8,4,1,0,0,0,0,0,0,0,0,22,22,22,21,21,21,20,20,19,17,14,12,11,8,3,0,0,0,0,0,0,0,0,23,22,21,21,21,22,22,21,20,18,16,14,12,10,5,0,0,0,0,0,0,0,0,22,22,22,21,22,22,23,22,22,20,18,16,13,10,5,0,0,0,0,0,0,0,0,22,22,22,22,22,22,23,23,23,22,21,19,15,10,3,0,0,0,0,0,0,0,0,22,22,22,22,23,23,23,24,24,24,23,21,17,11,5,1,0,0,0,0,0,0,0,21,21,21,22,22,23,23,24,25,25,24,22,20,14,7,2,0,0,0,0,0,0,0,20,20,20,21,22,22,23,24,25,25,25,24,22,18,11,5,1,0,0,0,0,0,0,20,20,20,20,21,22,23,24,25,25,26,25,24,21,16,10,6,3,0,0,0,0,0,19,19,19,19,20,21,22,23,24,25,26,26,26,25,21,15,10,6,1,0,0,0,0,18,18,18,18,19,20,21,22,23,25,26,27,28,27,24,19,14,10,4,0,0,0,0,18,17,17,17,18,18,20,21,22,24,27,28,29,28,26,21,16,13,8,2,0,0,0,16,16,16,16,17,17,18,20,21,23,26,28,29,29,28,24,20,15,10,5,1,0,0,14,14,14,15,16,16,17,19,20,22,24,27,28,30,29,27,23,17,12,9,4,0,0,13,14,14,14,14,15,16,18,19,21,23,25,27,29,30,28,25,21,16,13,8,1,0,13,14,14,14,13,14,16,17,19,20,22,25,26,28,29,29,27,24,20,16,10,2,0,13,14,14,14,13,14,15,17,19,20,22,24,25,26,28,29,28,24,21,18,13,4,0,13,13,14,13,13,13,15,16,18,20,21,23,24,25,27,28,28,26,23,20,16,7,1,13,13,14,13,13,13,15,16,18,19,20,22,23,25,27,28,28,26,24,21,18,9,2],
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
