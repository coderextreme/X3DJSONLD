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
        texture=ImageTexture(url=['../../images/5/newport22-28.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.615647382205246,-71.20887957792968,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,2,4,6,8,10,13,15,17,18,19,19,20,20,20,20,19,19,18,0,0,0,0,1,3,4,7,9,11,14,16,18,19,20,20,20,20,20,20,18,17,16,0,0,0,0,1,3,5,8,10,13,16,17,18,20,20,21,21,21,20,19,18,16,15,0,0,0,0,1,3,5,8,12,14,17,18,20,21,22,21,21,21,19,18,17,16,14,0,0,0,0,1,3,5,9,12,15,18,19,20,22,22,21,21,20,18,17,16,15,13,0,0,0,0,0,4,7,10,13,16,18,20,21,22,22,22,21,19,18,17,15,14,12,0,0,0,0,1,5,8,11,14,17,19,21,22,22,22,21,20,18,17,16,14,12,11,0,0,0,0,3,6,9,11,15,17,19,21,22,22,22,21,19,17,16,15,14,12,10,0,0,0,0,3,6,9,11,15,17,20,21,22,22,21,20,18,16,15,14,12,10,9,0,0,0,0,3,6,8,11,15,18,20,22,22,21,20,18,17,15,13,12,10,9,7,0,0,0,0,3,6,9,13,16,18,21,22,21,21,19,17,15,13,11,10,8,7,6,0,0,0,0,2,6,9,13,16,18,20,21,21,20,18,16,13,12,10,8,7,5,3,0,0,0,0,1,6,9,13,15,18,20,21,20,19,16,15,12,10,9,7,5,3,2,0,0,0,0,1,5,9,13,15,17,19,20,19,17,15,12,10,9,7,5,3,2,1,0,0,0,0,1,5,9,12,15,17,18,18,18,16,13,11,9,7,6,4,2,1,0,0,0,0,0,0,4,9,12,15,16,17,17,16,14,11,10,7,5,4,2,1,0,0,0,0,0,0,0,4,9,12,14,16,17,16,14,12,10,8,6,4,3,1,0,0,0,0,0,0,0,0,4,8,12,14,15,16,15,13,11,9,7,5,3,1,0,0,0,0,0,0,0,0,0,4,8,11,14,15,15,13,11,9,7,5,3,1,0,0,0,0,0,0,0,0,0,0,5,8,11,13,14,14,12,10,8,6,3,2,0,0,0,0,0,0,0,0,0,0,0,4,8,11,12,13,13,11,9,7,5,3,1,0,0,0,0,0,0,0,0,0,0,0,5,9,11,12,13,12,10,8,6,4,3,1,0,0,0,0,0,0,0,0,0,0,1,5,9,11,12,12,11,10,8,6,4,2,1,0,0,0,0,0,0],
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
