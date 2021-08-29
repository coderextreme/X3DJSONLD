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
        texture=ImageTexture(url=['../../images/5/newport23-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62371823998276,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[36,34,33,32,29,26,23,18,13,11,9,4,0,0,0,0,0,0,0,0,0,0,0,34,33,30,30,28,24,20,16,13,11,9,4,0,0,0,0,0,0,0,0,0,0,0,32,32,31,29,26,22,19,16,12,10,9,6,0,0,0,0,0,0,0,0,0,0,0,30,28,28,26,22,19,17,14,11,10,9,5,0,0,0,0,0,0,0,0,0,0,0,28,25,24,22,19,16,14,13,12,9,6,1,0,0,0,0,0,0,0,0,0,0,0,28,24,23,22,19,16,15,14,12,8,4,0,0,0,0,0,0,0,0,0,0,0,0,26,24,23,21,19,18,17,14,10,4,2,0,0,0,0,0,0,0,0,0,0,0,0,25,23,21,19,17,18,15,12,7,2,1,0,0,0,0,0,0,0,0,0,0,0,0,24,23,22,20,19,17,13,10,8,4,2,0,0,0,0,0,0,0,0,0,0,0,0,23,21,20,19,18,16,12,9,8,5,1,0,0,0,0,0,0,0,0,0,0,0,0,22,20,19,18,15,13,10,7,4,2,0,0,0,0,0,0,0,0,0,0,0,0,0,23,20,16,14,11,9,8,7,5,2,0,0,0,0,0,0,0,0,0,0,0,0,0,23,19,14,11,9,7,7,5,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,16,12,10,9,8,7,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,13,12,12,11,9,6,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,14,13,11,10,7,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,13,12,10,8,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,10,9,8,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,10,9,7,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,10,9,6,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,8,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,7,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,6,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
