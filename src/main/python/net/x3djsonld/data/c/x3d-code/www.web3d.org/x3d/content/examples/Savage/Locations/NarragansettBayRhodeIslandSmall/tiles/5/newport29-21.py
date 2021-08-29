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
        texture=ImageTexture(url=['../../images/5/newport29-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.672143386647825,-71.26537558237226,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[4,2,0,0,0,2,3,2,3,3,4,6,6,7,10,16,17,16,16,19,19,20,22,3,3,2,2,1,2,4,4,4,4,4,5,5,7,11,15,15,13,13,15,18,20,21,4,3,3,3,3,3,4,5,5,5,5,7,8,10,11,12,12,12,13,14,18,19,20,5,3,4,5,4,4,4,4,5,4,5,6,8,11,13,14,15,17,16,14,16,18,21,6,5,6,4,3,4,3,3,4,5,6,6,7,10,11,12,13,16,17,17,18,20,22,7,7,7,5,3,3,2,3,3,4,5,6,6,10,12,13,14,17,18,18,19,21,23,8,8,7,5,4,3,2,3,4,5,6,7,7,10,12,13,13,18,19,19,20,23,25,9,9,7,5,4,3,3,5,6,6,6,5,6,9,13,14,16,19,20,20,22,24,24,8,8,6,4,4,4,4,4,5,5,4,4,6,10,13,14,18,19,21,24,24,26,27,7,6,4,4,4,3,3,4,5,5,6,6,7,12,13,14,17,19,22,25,25,27,29,8,5,3,4,4,4,5,6,7,7,7,5,8,12,13,14,18,19,21,24,27,27,28,9,7,5,5,5,5,6,7,8,8,8,7,9,11,13,15,18,18,19,21,25,24,25,7,9,8,7,7,5,6,7,8,9,10,10,10,12,13,15,16,18,19,21,24,24,24,4,6,7,6,8,8,8,8,8,8,9,11,11,12,13,14,17,18,18,21,23,24,23,8,6,6,6,9,8,8,7,9,9,8,9,10,9,11,14,17,17,18,20,21,22,22,11,8,7,7,8,8,6,5,7,8,8,9,10,9,11,13,16,16,17,18,20,23,23,13,11,10,9,7,7,6,6,6,7,10,11,10,11,13,14,15,16,16,17,20,23,25,14,10,10,9,10,11,9,7,6,7,10,11,10,12,14,15,16,16,16,18,21,22,23,14,11,11,12,13,10,9,6,6,7,10,11,12,13,14,15,16,16,18,20,22,21,21,14,12,13,13,10,9,10,10,8,8,10,11,13,14,15,15,17,19,20,22,23,21,21,16,18,18,18,14,11,10,8,8,9,11,12,12,14,15,15,17,19,20,21,22,22,23,17,17,17,18,16,13,12,10,10,13,15,15,13,13,17,17,17,19,20,21,22,24,25,18,15,16,16,15,13,13,11,10,14,17,16,14,13,17,18,18,20,21,22,23,25,26],
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
