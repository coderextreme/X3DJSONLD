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
        texture=ImageTexture(url=['../../images/5/newport28-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.664072528870314,-71.26537558237226,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[3,7,9,9,8,8,9,13,16,17,18,19,18,17,19,19,19,22,23,23,23,21,19,0,4,7,7,8,9,9,13,14,15,16,16,16,17,17,18,19,24,26,23,24,23,23,0,1,3,5,7,8,9,11,13,13,14,17,17,18,18,19,19,23,24,22,22,22,22,0,0,1,4,5,7,8,10,13,15,16,17,17,18,19,20,21,21,19,20,20,21,19,0,0,1,3,5,6,7,9,13,17,16,16,17,18,19,20,19,18,17,18,20,21,18,0,0,0,1,4,6,8,9,11,14,14,15,17,16,17,18,20,23,21,19,19,20,18,0,0,0,1,5,9,11,11,11,11,12,13,15,15,15,15,19,22,20,18,17,18,18,0,0,0,1,5,8,10,13,11,9,11,12,14,15,15,15,17,17,16,16,16,17,18,0,0,0,1,4,5,8,11,11,10,12,13,14,15,14,15,14,15,14,15,15,15,17,0,0,0,1,3,4,5,6,7,8,10,12,13,14,14,15,14,13,14,14,14,15,15,0,0,0,1,3,4,3,3,5,6,10,13,13,14,14,15,16,14,14,15,16,16,15,0,0,0,0,1,2,4,4,5,7,11,13,12,13,14,15,15,15,16,17,16,14,14,0,0,0,0,0,2,4,4,5,6,8,9,10,13,14,15,14,14,17,17,15,14,15,0,0,0,0,1,3,4,5,7,7,6,7,8,11,13,15,14,14,15,15,15,15,16,0,0,0,0,1,2,1,3,6,7,6,7,8,10,13,15,16,17,16,15,15,17,17,0,2,1,1,2,2,1,3,4,5,6,6,7,8,8,11,15,17,16,16,15,15,15,2,3,2,1,1,1,1,2,1,3,5,7,7,7,8,11,14,15,15,17,17,15,14,3,2,3,2,1,1,0,0,2,5,6,8,8,8,9,10,11,13,16,20,22,20,16,2,2,2,2,1,2,3,2,2,4,6,6,8,9,10,10,11,14,16,19,20,17,16,1,2,2,1,0,1,2,3,2,2,3,6,10,12,12,10,10,13,15,16,16,16,18,3,2,2,1,0,0,0,1,2,3,4,6,10,13,13,11,9,11,16,18,17,20,22,4,2,1,0,0,1,1,1,3,3,4,6,7,9,11,14,14,14,16,20,20,21,24,4,2,0,0,0,2,3,2,3,3,4,6,6,7,10,16,17,16,16,19,19,20,22],
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
