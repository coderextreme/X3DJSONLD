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
        texture=ImageTexture(url=['../../images/5/newport29-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.672143386647825,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[19,18,18,17,16,14,13,13,13,13,13,14,16,16,16,16,17,17,17,16,15,15,15,22,20,19,17,16,15,14,14,13,13,13,14,15,17,17,18,19,20,20,19,17,16,15,23,21,20,18,17,16,16,16,15,13,13,14,15,16,16,16,18,20,23,23,20,17,15,24,23,22,20,18,17,17,17,17,17,17,17,17,17,16,16,18,20,23,23,21,18,16,23,22,21,21,20,18,17,17,18,19,20,20,19,17,17,17,19,20,21,21,21,20,18,19,18,18,20,22,20,19,18,18,20,22,22,21,19,19,19,20,19,18,17,18,18,18,14,14,15,18,20,21,21,21,21,22,22,23,22,21,21,21,21,20,18,16,16,16,17,12,12,13,14,16,19,21,22,22,22,22,22,21,21,22,22,22,22,20,18,16,16,16,9,9,9,10,12,14,17,19,20,21,21,21,21,21,22,21,21,21,21,19,17,16,16,6,5,5,6,8,10,13,17,18,19,19,19,21,22,23,22,21,19,16,16,17,16,16,2,3,3,4,6,8,10,14,16,17,17,19,21,23,24,23,17,11,7,13,17,16,16,0,0,0,0,3,4,6,9,12,14,15,18,21,22,23,20,13,4,3,10,16,17,16,0,0,0,0,0,0,0,1,5,6,10,14,17,20,21,20,15,8,2,5,13,16,17,0,0,0,0,0,0,0,0,0,0,2,6,10,13,16,18,18,13,5,5,10,16,16,0,0,0,0,0,0,0,0,0,0,0,0,2,3,8,12,15,16,9,6,10,14,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,9,13,12,11,12,15,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,6,8,10,13,15,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,7,12,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,7,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
