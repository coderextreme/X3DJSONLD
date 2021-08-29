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
        texture=ImageTexture(url=['../../images/5/newport10-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.41872188014497,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[30,29,26,24,21,18,16,13,10,6,0,0,0,0,0,0,0,0,0,0,0,0,0,31,29,30,28,24,19,15,11,9,9,4,0,0,0,0,0,0,0,0,0,0,0,0,30,29,29,27,24,20,15,11,9,9,4,0,0,0,0,0,0,0,0,0,0,0,0,32,31,30,24,21,18,17,14,12,9,3,0,0,0,0,0,0,0,0,0,0,0,0,35,34,30,24,21,19,16,15,13,9,7,3,0,0,0,0,0,0,0,0,0,0,0,36,34,30,24,23,21,18,15,12,10,8,8,4,0,0,0,0,0,0,0,0,0,0,34,30,28,26,23,19,17,16,13,11,10,10,6,0,0,0,0,0,0,0,0,0,0,33,30,29,30,25,20,17,17,15,13,13,11,5,0,0,0,0,0,0,0,0,0,0,37,33,29,28,25,20,17,15,15,14,14,11,4,0,0,0,0,0,0,0,0,0,0,38,34,30,28,26,22,18,16,15,13,12,7,2,0,0,0,0,0,0,0,0,0,0,39,34,29,27,25,24,22,19,17,14,11,3,0,0,0,0,0,0,0,0,0,0,0,39,35,30,26,24,25,25,21,18,13,8,2,0,0,0,0,0,0,0,0,0,0,0,39,35,29,25,22,23,25,22,18,13,4,0,0,0,0,0,0,0,0,0,0,0,0,38,34,30,27,23,22,24,24,20,13,3,0,0,0,0,0,0,0,0,0,0,0,0,36,32,29,27,24,23,24,23,19,13,3,0,0,0,0,0,0,0,0,0,0,0,0,34,31,28,24,23,23,25,23,20,14,3,0,0,0,0,0,0,0,0,0,0,0,0,35,34,30,26,25,24,25,24,21,15,3,0,0,0,0,0,0,0,0,0,0,0,0,36,34,30,28,27,26,26,25,23,15,3,0,0,0,0,0,0,0,0,0,0,0,0,33,32,29,27,24,26,27,24,20,16,7,0,0,0,0,0,0,0,0,0,0,0,0,32,33,31,26,24,26,24,18,15,15,12,1,0,0,0,0,0,0,0,0,0,0,0,33,30,30,26,25,24,19,12,9,11,9,1,0,0,0,0,0,0,0,0,0,0,0,35,31,28,24,23,23,16,10,6,6,5,0,0,0,0,0,0,0,0,0,0,0,0,35,32,29,24,23,22,16,10,6,4,3,0,0,0,0,0,0,0,0,0,0,0,0],
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
