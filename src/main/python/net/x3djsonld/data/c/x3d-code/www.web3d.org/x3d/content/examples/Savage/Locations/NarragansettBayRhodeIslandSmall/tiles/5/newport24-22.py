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
        texture=ImageTexture(url=['../../images/5/newport24-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.63178909776027,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[4,6,8,11,13,15,18,21,23,24,27,29,30,31,28,27,27,29,30,30,30,28,26,4,6,6,9,11,13,15,18,21,23,26,28,29,31,29,27,29,32,32,31,30,28,26,4,5,6,7,9,10,13,15,18,21,24,26,28,30,30,30,31,34,32,31,30,30,28,6,6,6,6,7,9,11,13,17,20,23,25,27,29,30,30,30,33,33,32,31,30,29,7,6,6,6,7,9,10,12,15,19,22,25,26,28,30,30,30,33,34,33,31,30,28,8,7,6,6,6,8,10,12,13,18,21,24,26,28,29,30,32,34,35,34,31,30,28,7,5,5,6,6,7,10,11,12,17,19,23,26,27,30,32,33,34,34,34,33,30,27,4,3,3,4,6,6,8,10,12,16,19,23,25,27,30,33,34,35,34,33,33,31,29,2,2,1,3,5,6,6,9,11,15,19,23,25,26,29,33,35,35,35,32,32,32,29,2,2,2,3,5,6,6,7,9,14,19,23,25,26,29,33,34,34,34,32,31,31,30,2,2,1,2,4,5,6,6,8,13,17,21,24,26,29,32,34,34,34,33,32,30,29,1,1,1,1,2,4,6,7,8,11,15,20,24,26,28,31,32,33,33,33,32,30,29,1,1,1,1,1,4,6,7,7,10,14,19,23,26,28,30,32,33,33,33,32,31,30,1,1,1,1,1,2,5,6,7,9,13,18,22,25,27,29,31,33,32,32,33,31,31,1,1,1,1,1,1,4,6,7,8,11,16,20,24,26,28,31,32,32,32,32,32,31,1,1,1,1,1,1,3,6,7,7,10,14,19,24,26,28,30,32,32,32,33,31,30,0,0,0,0,0,1,3,6,7,7,9,14,19,23,25,26,29,31,31,32,31,29,28,0,0,0,0,0,1,3,5,6,7,9,13,17,21,24,25,26,28,29,28,28,28,27,0,0,0,0,0,0,1,4,6,8,9,13,16,19,22,24,25,27,28,28,28,27,27,0,0,0,0,0,0,1,3,6,7,9,11,14,17,20,22,24,26,27,28,27,27,28,0,0,0,0,0,0,1,3,6,7,8,9,12,15,18,21,23,25,25,25,26,26,26,0,0,0,0,0,0,0,2,5,6,7,8,10,12,16,19,22,24,25,25,25,24,24,0,0,0,0,0,0,0,1,4,6,7,7,9,11,15,18,21,23,24,25,25,24,24],
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
