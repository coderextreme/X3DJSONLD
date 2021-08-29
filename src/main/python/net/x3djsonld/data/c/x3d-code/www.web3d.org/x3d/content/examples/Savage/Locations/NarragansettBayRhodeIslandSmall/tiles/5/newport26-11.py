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
        texture=ImageTexture(url=['../../images/5/newport26-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64793081331529,-71.34608416014737,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[24,22,22,23,21,21,19,18,16,13,11,11,12,8,7,8,6,5,2,1,4,0,0,23,25,25,24,21,21,20,18,17,14,11,10,8,3,1,1,1,1,0,0,1,0,0,23,24,24,23,21,21,18,16,15,13,10,9,2,0,0,0,0,0,0,0,0,0,0,23,22,24,24,22,19,16,14,11,10,7,4,1,0,0,0,0,0,0,0,0,0,0,22,23,23,22,22,19,16,13,10,7,5,2,0,0,0,0,0,0,0,0,0,0,0,21,21,22,21,21,20,17,14,11,9,5,0,0,0,0,0,0,0,0,0,0,0,0,18,17,19,18,19,18,17,15,15,14,8,0,0,0,0,0,0,0,0,0,0,0,0,17,14,15,16,16,14,13,13,14,15,8,1,0,0,0,0,0,0,0,0,0,0,0,18,16,16,15,13,10,11,11,11,11,6,0,0,0,0,0,0,0,0,0,0,0,0,18,16,16,17,13,10,10,10,11,9,5,1,0,0,0,0,0,0,0,0,0,0,0,17,16,14,15,13,13,10,9,8,7,7,6,3,0,0,0,0,0,0,0,0,0,0,16,15,15,14,14,13,10,8,7,5,8,12,10,0,0,0,0,0,0,0,0,0,0,16,14,13,16,16,14,12,10,9,8,9,9,7,3,0,0,0,0,0,0,0,0,0,15,14,13,15,14,12,10,9,9,9,9,7,6,6,2,1,0,0,0,0,0,0,0,16,13,12,13,12,11,11,10,8,8,7,6,6,8,9,6,2,0,0,0,0,0,0,14,13,10,9,11,13,14,12,10,8,7,6,6,9,12,12,9,3,0,0,0,0,0,11,11,10,9,9,11,12,11,10,8,7,8,11,11,13,13,12,9,7,5,1,0,0,9,8,8,8,7,8,9,11,10,11,12,15,17,16,14,12,11,10,9,8,7,3,1,7,6,8,9,8,9,11,13,15,16,16,17,18,17,14,11,9,7,8,9,8,5,2,3,4,7,8,9,10,13,15,16,17,17,16,16,14,12,10,9,9,8,9,7,5,4,2,2,4,8,10,12,13,14,15,14,14,13,12,13,15,11,10,11,10,9,9,9,7,2,3,5,9,12,13,12,11,12,13,13,11,11,12,12,11,10,11,10,8,9,9,8,2,4,7,10,12,12,11,10,11,12,12,11,10,10,12,11,11,12,10,8,9,9,8],
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
