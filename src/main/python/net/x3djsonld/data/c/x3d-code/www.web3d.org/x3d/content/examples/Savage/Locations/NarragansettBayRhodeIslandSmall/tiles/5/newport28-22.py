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
        texture=ImageTexture(url=['../../images/5/newport28-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.664072528870314,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[19,18,19,17,15,14,13,12,11,11,10,10,9,7,5,5,4,1,0,0,1,0,0,23,19,17,14,12,14,12,11,11,13,11,9,9,10,7,5,3,1,0,0,1,0,0,22,19,16,13,15,13,13,12,12,14,11,8,8,10,6,3,2,1,0,1,1,0,0,19,16,16,15,15,12,14,13,12,12,12,10,8,9,6,2,1,1,1,1,1,0,0,18,16,16,14,16,15,13,10,10,13,14,12,7,7,5,2,1,1,1,0,1,0,0,18,16,15,14,13,13,12,9,9,10,10,11,8,8,6,4,4,4,1,0,1,0,0,18,17,16,16,13,12,13,11,10,12,11,9,7,7,5,5,5,4,1,0,1,0,0,18,18,16,15,13,12,12,12,11,11,10,9,7,6,4,5,5,3,1,0,1,1,0,17,17,16,15,14,14,12,12,11,10,10,7,5,5,4,5,7,5,2,1,1,1,0,15,16,16,16,15,15,12,12,12,13,12,9,7,8,7,7,6,6,4,1,1,1,0,15,16,17,18,17,17,15,12,11,12,12,11,10,11,9,5,3,2,2,0,1,1,0,14,16,17,17,16,16,13,12,10,11,11,11,10,10,10,8,4,3,3,1,1,1,1,15,16,17,17,16,16,13,11,10,12,12,11,10,10,10,10,7,6,6,4,1,1,1,16,17,18,20,18,16,16,11,10,12,14,13,11,9,10,11,9,7,7,4,1,0,1,17,17,18,19,19,17,16,13,11,12,16,16,14,11,11,11,7,7,6,3,1,0,0,15,15,16,19,21,19,19,17,14,12,14,15,14,11,12,12,8,6,6,3,1,0,0,14,15,14,18,21,20,18,17,16,13,13,14,14,13,13,12,9,7,8,5,2,0,0,16,15,14,16,18,18,16,15,15,15,13,14,14,12,12,11,10,8,7,5,2,1,1,16,16,15,15,16,19,18,16,14,14,13,12,13,12,12,11,10,8,8,7,6,3,1,18,19,18,16,16,19,21,18,15,14,12,12,14,14,13,11,11,9,7,7,6,5,3,22,21,18,16,16,17,19,20,18,15,12,13,13,12,10,10,10,8,7,7,6,5,4,24,23,21,19,16,17,18,19,16,15,14,16,14,11,8,8,9,7,7,6,5,5,5,22,21,21,19,16,17,19,17,16,15,16,17,15,11,7,7,7,6,6,6,6,6,6],
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
