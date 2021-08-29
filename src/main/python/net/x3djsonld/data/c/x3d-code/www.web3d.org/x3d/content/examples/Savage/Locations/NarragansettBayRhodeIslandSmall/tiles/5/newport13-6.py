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
        texture=ImageTexture(url=['../../images/5/newport13-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.543009662207645,-71.38643844903493,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,2,3,5,9,12,14,12,13,14,14,17,18,18,22,25,27,28,33,0,0,0,0,0,1,2,4,8,11,12,13,14,13,12,16,19,19,22,25,27,28,32,0,0,0,0,0,0,2,3,5,8,11,12,13,14,13,17,20,21,22,24,26,27,31,0,0,0,0,0,0,2,2,4,8,12,12,12,14,14,16,19,23,23,23,24,25,29,0,0,0,0,0,2,3,4,5,8,11,13,13,15,16,16,18,19,21,22,23,24,29,0,0,0,1,3,5,5,5,7,9,11,13,14,15,16,18,18,20,21,21,23,25,28,0,0,0,1,5,4,5,7,11,11,12,11,13,15,18,18,19,21,21,21,24,25,28,0,0,0,1,3,5,5,9,10,11,14,16,14,15,16,18,19,19,20,22,23,24,27,0,0,0,1,2,4,5,8,7,10,12,17,16,14,16,17,18,20,22,23,23,25,29,0,0,0,1,5,4,5,8,9,10,11,15,14,15,17,17,19,21,22,23,24,28,31,0,0,0,2,5,5,6,8,11,11,13,12,12,14,17,20,18,18,19,21,25,28,29,0,0,0,1,5,5,7,9,12,13,14,14,15,15,15,19,20,19,16,20,24,27,28,0,0,0,2,6,7,7,9,11,11,12,13,15,14,14,17,21,20,19,21,24,27,29,0,0,0,4,11,11,11,10,11,11,12,13,16,13,14,17,19,19,20,21,23,26,29,0,0,0,4,10,12,12,11,11,11,14,17,17,16,16,16,18,18,19,19,22,25,28,0,0,0,3,9,11,11,12,13,14,16,19,19,19,18,17,18,18,18,20,22,25,27,0,0,0,3,8,10,11,13,14,15,17,20,22,21,19,18,19,19,19,20,23,26,27,0,0,0,3,9,11,11,12,14,15,18,21,22,22,22,21,21,21,20,20,23,24,25,0,0,0,4,10,11,12,12,14,16,19,21,22,22,22,22,24,24,22,21,22,24,24,0,0,0,5,11,12,13,14,15,16,19,22,22,22,22,21,22,24,24,21,22,24,24,0,0,1,6,11,13,15,16,18,19,22,24,24,24,23,21,20,21,21,19,21,24,25,0,0,3,9,12,14,15,17,19,20,22,24,26,25,23,22,20,19,18,18,19,22,23,0,0,1,6,11,13,14,17,19,19,21,23,25,25,24,22,21,19,18,18,19,21,22],
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
