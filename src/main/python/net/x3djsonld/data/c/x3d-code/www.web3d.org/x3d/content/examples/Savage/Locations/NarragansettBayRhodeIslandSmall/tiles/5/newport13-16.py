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
        texture=ImageTexture(url=['../../images/5/newport13-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.543009662207645,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[8,8,9,9,10,14,17,18,17,18,20,20,20,23,25,26,26,28,31,33,35,38,39,9,10,12,12,12,14,17,19,19,20,22,22,22,24,25,26,28,29,31,35,36,38,40,8,11,13,13,14,16,17,19,22,24,23,24,25,24,25,27,28,30,30,33,37,39,41,3,8,11,12,12,15,17,18,21,22,23,25,26,26,27,29,29,31,31,34,37,41,43,0,6,11,12,13,14,17,19,20,20,23,25,25,25,27,29,31,33,33,36,39,42,44,0,2,11,13,14,15,17,19,19,19,22,25,27,27,27,29,31,33,34,37,40,43,44,0,0,6,11,12,13,15,17,17,19,23,25,26,25,27,29,33,36,37,39,42,45,46,0,0,2,10,12,12,14,15,17,20,22,23,26,26,29,30,34,36,37,40,42,45,47,0,0,1,9,12,12,14,16,17,18,20,22,25,27,30,31,34,36,38,40,44,47,48,0,0,1,8,12,13,15,17,17,18,20,22,23,25,28,31,33,37,40,43,45,49,50,0,0,1,8,11,14,15,16,16,17,19,22,24,25,27,31,34,35,39,42,45,49,51,0,0,3,9,11,13,15,16,17,18,19,22,25,26,27,30,34,35,37,41,46,49,51,1,5,8,10,12,14,14,16,18,19,21,21,23,25,25,29,32,35,37,40,44,49,51,3,9,10,10,11,12,12,14,18,19,21,21,22,25,27,30,31,34,37,39,43,47,48,10,10,10,9,10,11,12,15,17,20,21,21,22,25,27,29,30,33,36,38,42,46,47,9,9,9,10,11,12,14,17,17,19,22,22,23,25,25,27,29,32,35,37,40,44,45,11,10,10,10,13,14,14,17,19,20,22,23,23,24,26,28,29,31,34,36,39,42,45,12,12,12,13,14,16,17,18,20,22,22,24,25,26,27,29,30,30,32,34,38,43,45,12,14,14,14,14,17,19,22,24,24,24,25,26,27,27,27,28,28,30,32,37,42,43,16,16,16,16,18,19,21,23,25,26,27,26,26,26,25,26,28,28,30,32,34,39,41,19,19,19,20,22,22,22,24,26,28,28,26,26,26,27,27,28,29,31,33,34,39,41,19,20,20,21,22,23,22,24,27,29,29,29,28,28,28,29,29,30,30,32,34,38,39,20,21,21,21,22,24,24,25,26,29,29,29,29,29,30,31,29,29,29,30,33,35,36],
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
