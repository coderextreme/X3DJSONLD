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
        texture=ImageTexture(url=['../../images/5/newport28-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.664072528870314,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,4,8,12,14,14,15,16,17,18,18,18,0,0,0,0,0,0,0,0,0,0,0,3,10,14,14,15,15,16,18,18,18,19,19,0,0,0,0,0,0,0,0,0,0,0,4,12,16,16,14,14,15,18,19,21,20,19,0,0,0,0,0,0,0,0,0,0,1,7,13,16,18,17,16,18,19,19,20,21,20,0,0,0,0,0,0,0,0,0,0,5,11,16,16,16,16,19,22,22,18,19,20,19,0,0,0,0,0,0,0,0,0,0,5,10,13,14,14,15,18,22,23,23,23,21,21,0,0,0,0,0,0,0,0,0,0,6,10,11,14,14,14,16,19,22,23,23,22,23,0,0,0,0,0,0,0,0,0,2,6,9,14,16,16,15,15,18,20,21,23,25,25,0,0,0,0,0,0,0,0,1,4,7,11,15,17,16,15,16,16,17,20,23,25,26,0,0,0,0,0,0,0,0,1,4,9,12,14,14,14,15,17,17,18,22,24,24,25,0,0,0,0,0,0,0,0,1,5,9,11,11,12,14,16,19,22,24,25,24,23,23,0,0,0,0,0,0,0,0,1,6,10,11,10,11,14,16,17,20,24,25,24,22,22,0,0,0,0,0,0,0,0,1,7,10,11,9,9,14,16,17,20,22,22,23,22,22,0,0,0,0,0,0,0,0,1,5,8,9,9,10,15,18,20,22,22,22,23,23,23,0,0,0,0,0,0,0,0,1,6,8,8,10,13,17,22,24,24,23,22,20,20,21,0,0,0,0,0,0,0,0,1,8,10,9,9,11,14,19,21,23,23,23,21,22,23,0,0,0,0,0,0,0,0,1,7,10,10,10,11,15,18,19,20,22,22,24,25,25,0,0,0,0,0,0,0,0,1,6,8,11,12,14,18,20,21,21,21,21,21,21,21,0,0,0,0,0,0,0,0,1,4,7,10,11,13,16,18,22,22,24,23,21,19,17,0,0,0,0,0,0,0,0,0,1,6,8,10,12,16,18,21,21,22,22,22,20,18,0,0,0,0,0,0,0,0,0,1,4,6,9,13,16,18,20,20,19,19,20,19,18,0,0,0,0,0,0,0,0,0,1,5,8,10,14,18,19,20,20,18,17,18,16,17,0,0,0,0,0,0,0,0,0,1,7,10,11,14,17,19,20,21,18,16,16,16,16],
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
