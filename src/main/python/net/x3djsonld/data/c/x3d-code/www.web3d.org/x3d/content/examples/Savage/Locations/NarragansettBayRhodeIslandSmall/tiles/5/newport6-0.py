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
        texture=ImageTexture(url=['../../images/5/newport6-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.486513657765066,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[19,18,15,13,10,8,7,7,7,7,7,7,7,8,9,8,6,5,6,7,8,9,10,19,18,16,14,12,10,8,7,7,7,7,7,7,7,7,6,5,5,7,8,9,10,11,19,18,16,15,13,11,9,8,8,8,7,7,7,5,4,5,5,5,8,10,11,11,12,19,17,16,14,13,12,10,9,8,8,8,7,6,5,4,4,5,6,9,11,12,13,13,18,17,15,14,12,12,10,9,9,9,8,8,7,6,4,5,6,8,10,12,13,14,14,18,16,14,12,12,11,10,9,9,9,8,8,6,7,6,6,7,9,11,13,14,15,15,17,16,14,12,11,10,10,8,8,8,7,8,8,7,7,8,8,9,11,13,14,15,16,18,16,15,13,11,10,9,9,9,8,8,8,8,7,6,7,8,9,10,12,13,14,14,19,17,15,14,13,11,10,9,9,10,8,8,8,7,6,8,8,9,10,11,12,13,14,18,16,15,14,12,11,10,9,8,8,7,7,8,7,6,8,8,9,10,11,12,13,13,18,16,15,13,11,10,10,8,7,7,6,8,8,8,7,8,9,10,11,12,13,14,15,18,16,14,12,11,10,10,8,7,6,6,7,7,8,8,9,9,11,12,13,14,15,15,18,16,15,13,12,10,9,8,7,6,6,7,7,7,8,9,10,12,13,14,15,16,17,18,17,16,14,13,12,10,8,6,5,5,6,7,8,9,10,11,12,13,14,16,17,18,19,18,17,16,14,13,11,9,6,5,5,6,7,8,10,11,12,13,14,15,17,19,20,21,19,18,17,15,14,12,9,7,5,5,6,8,9,11,12,13,15,16,17,19,21,21,22,20,19,18,16,14,12,10,8,6,6,7,8,9,11,13,15,16,18,20,21,23,24,23,22,21,19,17,15,13,11,9,8,7,7,8,10,12,14,16,18,20,21,23,25,25,24,23,21,19,18,16,14,12,11,10,9,9,10,11,13,15,17,19,21,22,24,26,27,24,23,22,20,18,17,15,14,14,13,12,12,12,14,15,16,17,19,21,22,24,25,27,24,23,22,20,19,17,16,16,16,15,15,14,15,15,16,17,17,19,22,23,24,26,27,25,23,22,21,20,18,17,17,17,17,16,16,16,17,18,18,20,21,23,25,26,27,28,25,23,22,21,20,19,18,18,18,18,17,17,17,18,18,20,21,22,24,26,28,29,30],
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
