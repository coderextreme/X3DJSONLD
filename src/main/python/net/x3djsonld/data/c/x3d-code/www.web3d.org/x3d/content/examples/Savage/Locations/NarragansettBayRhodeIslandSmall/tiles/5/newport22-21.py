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
        texture=ImageTexture(url=['../../images/5/newport22-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.615647382205246,-71.26537558237226,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[13,13,13,15,16,14,14,15,13,15,17,19,18,20,18,19,21,22,26,30,34,38,42,10,11,14,17,16,15,15,15,14,15,18,19,18,21,22,22,24,26,30,32,35,38,41,10,10,14,15,15,16,17,17,17,17,17,16,16,17,23,25,27,29,30,32,37,38,42,13,13,13,12,13,16,17,14,15,16,17,17,16,17,23,27,30,30,28,31,35,38,43,13,15,14,13,13,17,17,13,13,16,18,19,18,17,20,25,28,28,28,32,35,41,45,11,13,14,13,13,15,16,13,12,13,15,17,17,17,19,23,26,28,32,35,37,42,45,10,11,12,12,12,11,11,12,12,12,13,14,16,19,22,25,29,33,37,39,39,40,43,10,13,14,13,14,12,11,13,13,14,14,14,15,19,20,24,28,33,37,37,39,40,42,11,12,14,15,14,12,12,14,14,14,13,13,17,20,20,21,25,29,33,35,37,39,42,10,11,13,15,13,12,12,14,13,11,11,14,18,22,22,20,22,27,31,34,37,39,40,9,10,11,12,12,11,11,11,11,12,16,16,18,23,24,20,19,22,27,30,34,36,37,10,10,11,12,12,12,12,12,13,13,16,17,17,20,19,17,17,21,25,27,31,33,34,11,9,11,13,14,14,13,13,13,13,13,16,17,15,14,14,18,21,25,27,30,31,32,12,11,12,13,14,14,14,14,14,13,12,13,12,10,10,14,18,21,24,25,24,26,27,13,13,13,13,13,12,10,10,12,12,12,13,12,10,11,13,14,16,19,21,21,23,27,18,15,12,11,11,9,8,9,11,12,12,13,12,12,13,13,13,13,15,18,20,23,26,22,20,16,14,10,8,9,11,12,12,11,10,8,10,12,13,12,12,14,15,17,20,22,24,23,19,14,11,9,9,11,11,10,9,9,10,11,12,11,10,11,12,14,17,19,21,21,22,18,14,13,11,9,9,8,8,7,7,9,9,10,12,12,10,11,15,18,19,20,19,20,20,16,13,10,10,9,9,7,6,7,9,8,9,11,11,10,11,13,17,19,19,17,17,17,13,8,8,9,10,9,7,7,9,10,10,8,7,9,11,12,13,15,17,18,16,14,12,10,8,8,9,9,8,7,7,8,8,10,8,7,8,12,13,13,16,18,19,15,13,12,12,11,10,11,9,7,6,6,8,9,8,7,7,8,12,12,13,16,18,20],
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
