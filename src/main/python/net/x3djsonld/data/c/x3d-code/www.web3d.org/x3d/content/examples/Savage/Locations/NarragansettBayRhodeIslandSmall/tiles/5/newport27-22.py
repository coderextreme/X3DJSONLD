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
        texture=ImageTexture(url=['../../images/5/newport27-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.6560016710928,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[35,31,31,30,31,29,26,24,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,34,35,32,32,29,27,27,21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,35,33,32,32,30,29,26,19,1,0,0,0,0,0,0,0,0,0,0,0,0,0,36,34,32,34,33,29,26,22,18,10,1,0,0,0,0,0,0,0,0,0,0,0,0,35,34,33,32,31,29,26,22,19,14,1,0,0,0,0,0,0,0,0,0,0,0,0,35,34,32,32,30,29,27,22,20,15,5,1,0,0,0,0,0,0,0,0,0,0,0,36,34,33,31,28,26,24,19,17,14,7,1,0,0,0,0,0,0,0,0,0,0,0,34,33,31,29,27,25,22,17,16,13,10,3,0,0,0,0,0,0,0,0,0,0,0,31,29,28,26,25,23,20,17,16,16,16,9,0,0,0,0,0,0,0,0,0,0,0,30,29,28,25,23,21,18,16,16,16,16,9,0,0,0,0,0,0,0,0,0,0,0,32,32,28,23,21,20,18,16,15,15,12,7,2,0,0,0,0,0,0,0,0,0,0,32,31,26,23,21,20,20,17,15,13,9,9,7,2,0,0,0,0,0,0,0,0,0,27,25,24,22,21,20,18,16,13,10,9,10,10,5,2,1,0,0,0,0,0,0,0,26,24,23,21,19,17,14,13,11,8,9,11,11,8,6,3,1,0,0,0,0,0,0,25,23,22,20,19,16,15,15,12,8,6,7,8,8,7,5,2,0,0,0,0,0,0,23,22,21,20,18,18,17,15,11,8,7,8,9,9,8,4,1,0,0,0,0,0,0,25,24,22,21,18,16,15,13,11,9,8,8,8,8,7,4,2,1,0,0,0,0,0,24,23,22,21,18,15,15,13,11,11,9,8,8,7,6,5,3,1,0,0,0,0,0,19,20,20,21,20,15,15,15,13,11,9,8,7,5,5,4,3,1,0,0,0,0,0,20,20,20,20,18,16,15,15,14,12,10,8,6,5,3,3,4,1,0,0,0,0,0,21,20,20,18,15,14,13,12,13,13,11,8,7,5,2,4,4,1,0,0,0,0,0,19,18,19,18,15,14,12,12,12,11,9,9,8,6,4,5,5,1,0,0,0,0,0,19,18,19,17,15,14,13,12,11,11,10,10,9,7,5,5,4,1,0,0,1,0,0],
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
