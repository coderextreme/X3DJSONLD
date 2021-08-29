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
        texture=ImageTexture(url=['../../images/5/newport18-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.5833639510952,-71.19273786237466,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[1,1,1,1,3,4,2,1,1,1,2,4,6,9,9,9,9,10,9,8,8,8,9,1,1,1,2,5,6,5,4,3,4,5,6,9,11,11,11,11,11,11,10,10,10,10,1,1,2,4,6,6,7,6,6,6,7,9,10,12,12,12,12,12,12,11,11,11,10,1,2,4,5,6,7,7,8,8,8,9,11,12,13,13,12,13,14,13,13,12,12,11,2,3,4,6,7,7,8,8,9,9,10,12,13,14,13,14,14,15,14,14,14,13,12,2,3,4,5,6,6,7,8,10,11,12,14,14,14,13,14,14,15,15,15,15,14,13,2,3,3,3,4,4,6,9,12,13,14,15,15,14,14,14,15,16,16,16,16,15,14,1,2,2,2,2,4,6,9,13,15,16,16,15,14,14,14,15,17,18,17,17,15,14,1,1,1,2,2,4,7,10,14,16,17,16,15,14,14,15,16,17,18,18,17,15,14,0,0,1,2,2,5,8,12,15,17,17,16,15,14,14,15,16,17,19,18,16,15,14,0,1,1,2,3,6,9,12,15,17,18,17,15,14,14,15,16,17,17,17,16,14,13,1,1,1,2,3,6,10,13,15,18,19,17,16,15,15,16,16,16,16,16,15,14,13,1,1,1,2,3,6,10,14,19,21,20,18,17,16,15,16,16,16,15,15,15,14,13,1,1,1,1,3,6,13,19,23,22,20,18,18,17,17,16,16,15,15,15,15,14,13,1,1,1,2,4,9,17,22,25,23,21,19,18,17,17,16,16,15,15,14,14,13,12,1,1,1,3,6,12,18,22,24,22,21,20,19,18,17,16,15,15,14,14,14,13,11,1,1,2,4,8,13,17,21,22,22,21,20,20,19,18,16,15,14,14,14,14,13,11,1,1,2,5,9,13,16,19,20,21,22,21,21,20,18,16,15,14,14,14,13,12,11,0,1,3,6,10,13,15,17,18,20,22,22,21,20,18,16,15,14,14,14,13,12,12,1,1,3,6,10,12,14,16,18,20,22,22,21,19,18,16,15,14,14,14,13,13,12,2,2,3,6,9,12,14,16,18,20,22,22,21,19,17,16,15,14,13,13,13,12,12,1,2,3,6,9,13,16,18,19,21,22,22,20,19,17,16,14,14,13,13,12,12,11,1,1,4,7,10,13,16,18,20,22,22,22,20,18,17,15,14,13,13,12,12,12,11],
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
