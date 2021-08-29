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
        texture=ImageTexture(url=['../../images/5/newport7-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.49458451554258,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[9,9,9,9,5,5,7,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,10,10,13,8,4,5,5,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,14,11,12,15,11,5,4,6,5,2,0,0,0,0,0,0,0,0,0,0,0,0,0,13,12,14,18,14,7,4,6,8,4,1,0,0,0,0,0,0,0,0,0,0,0,0,10,13,15,19,18,10,6,7,11,6,1,0,0,0,0,0,0,0,0,0,0,0,0,3,12,15,19,20,14,8,8,14,8,3,0,0,0,0,0,0,0,0,0,0,0,0,0,7,13,16,19,17,11,10,17,14,9,4,1,0,0,0,0,0,0,0,0,0,0,0,0,8,14,19,18,13,12,19,20,15,7,3,2,0,0,0,0,0,0,0,0,0,0,0,4,11,18,20,16,15,20,22,19,11,6,4,1,1,1,1,1,1,1,1,1,1,1,1,7,16,19,19,19,19,22,18,13,8,5,3,1,1,1,1,1,1,1,1,3,1,1,3,12,18,20,21,18,21,16,13,10,7,5,3,4,4,4,4,4,5,4,5,2,2,2,10,17,19,21,16,19,18,14,11,8,5,5,6,6,6,6,7,8,8,10,4,2,2,8,15,17,16,13,16,16,14,11,9,8,7,8,9,8,9,9,10,11,12,9,3,3,4,13,15,14,12,14,14,13,12,11,10,9,10,10,10,11,11,12,13,14,12,5,3,3,11,14,13,12,12,12,12,13,12,12,11,11,12,12,12,12,13,14,17,15,6,5,5,11,13,14,13,13,13,12,12,12,12,10,11,11,12,13,13,14,15,20,18,13,11,9,10,13,13,14,14,13,12,12,11,10,10,10,11,12,13,13,14,16,24,21,18,15,11,10,12,13,14,14,12,12,11,10,10,10,11,11,12,14,15,16,17,27,24,22,18,14,11,12,13,13,13,12,12,11,10,10,10,11,12,14,15,16,17,19,29,28,26,21,17,14,13,13,13,12,12,11,11,10,10,10,11,13,14,15,17,18,20,31,31,28,25,20,16,15,14,13,12,11,11,11,10,10,11,11,13,14,15,17,18,20,31,33,31,27,23,20,18,16,14,12,11,10,11,11,11,12,12,13,15,15,17,18,19,31,32,32,29,25,21,19,17,15,13,11,11,10,11,11,12,13,14,14,15,16,18,19],
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
