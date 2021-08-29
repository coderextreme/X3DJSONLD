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
        texture=ImageTexture(url=['../../images/5/newport21-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.607576524427735,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[22,18,14,10,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,19,15,12,8,5,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,20,17,14,11,10,10,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,23,19,18,15,12,10,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,22,22,22,19,15,11,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,24,20,21,22,20,17,15,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,22,21,21,20,20,17,11,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,25,22,21,22,22,20,14,7,1,0,0,0,0,0,0,0,0,0,0,0,0,0,28,27,25,21,20,20,20,16,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,34,29,26,25,24,22,20,15,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,37,32,29,26,25,23,21,15,10,4,0,0,0,0,0,0,0,0,0,0,0,0,0,35,32,31,28,24,24,22,17,12,6,0,0,0,0,0,0,0,0,0,0,0,0,0,33,31,29,27,23,22,22,18,13,8,3,0,0,0,0,0,0,0,0,0,0,0,0,33,33,32,31,27,24,21,18,14,11,8,4,0,0,0,0,0,0,0,0,0,0,0,36,34,31,30,27,23,22,19,16,12,9,6,6,2,0,0,0,0,0,0,0,0,0,36,32,30,27,24,24,23,22,18,14,10,7,7,5,0,0,0,0,0,0,0,0,0,38,33,30,29,28,27,27,24,16,11,8,5,6,3,0,0,0,0,0,0,0,0,0,40,35,32,31,29,27,27,25,17,12,9,5,2,0,0,0,0,0,0,0,0,0,0,38,37,35,33,32,30,27,24,16,11,8,5,0,0,0,0,0,0,0,0,0,0,0,38,38,36,34,32,30,29,25,17,11,7,3,0,0,0,0,0,0,0,0,0,0,0,40,40,39,36,34,31,28,23,16,10,4,0,0,0,0,0,0,0,0,0,0,0,0,40,39,38,34,31,30,28,23,16,11,5,0,0,0,0,0,0,0,0,0,0,0,0,40,38,37,33,29,29,27,22,17,11,5,0,0,0,0,0,0,0,0,0,0,0,0],
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
