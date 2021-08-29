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
        texture=ImageTexture(url=['../../images/5/newport21-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.607576524427735,-71.26537558237226,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[42,42,43,43,43,44,44,44,43,38,36,37,36,35,34,31,29,27,23,23,24,24,25,41,39,40,42,41,40,40,39,38,37,35,33,31,30,29,28,27,25,23,23,21,22,22,37,35,36,38,38,36,35,35,34,36,35,31,29,28,26,24,23,22,20,20,19,18,18,33,32,33,34,34,34,33,32,30,30,30,28,27,27,24,20,18,19,19,20,19,18,17,30,29,30,30,28,28,29,29,29,29,30,29,27,24,21,18,18,19,19,16,16,18,17,28,28,29,28,25,25,26,26,27,28,27,26,24,21,20,18,18,17,17,15,15,17,19,26,26,25,26,25,25,26,25,24,24,22,20,18,19,19,18,16,15,15,17,17,18,21,24,24,22,21,21,20,22,21,19,22,22,19,16,16,15,13,14,14,15,17,18,20,21,23,22,19,19,18,17,16,16,17,20,19,16,13,13,13,12,13,14,15,16,18,21,22,19,20,20,17,15,15,14,15,17,16,15,13,11,10,11,13,16,16,17,20,20,21,23,15,14,16,16,15,17,17,16,15,12,12,12,12,10,11,15,17,18,19,22,23,24,24,14,14,14,14,14,14,13,11,10,10,11,11,10,11,15,18,18,18,19,22,24,24,25,16,15,12,12,12,10,9,8,9,9,11,11,9,13,17,19,17,17,18,21,23,22,25,15,13,11,10,11,9,7,9,11,9,9,10,12,15,16,18,17,18,20,22,24,24,23,17,13,11,10,9,8,8,10,11,9,10,11,12,15,17,18,16,18,20,21,24,25,26,17,13,11,10,9,7,9,11,10,10,12,11,13,14,15,17,17,18,21,22,24,26,29,13,13,11,9,8,8,9,9,11,11,8,10,13,11,12,14,17,20,23,24,24,26,29,12,14,12,10,10,10,10,10,12,13,10,11,13,14,13,15,16,21,23,22,24,27,30,13,14,12,12,13,13,12,12,10,12,11,11,12,13,15,17,18,20,22,23,26,29,32,15,13,9,9,13,14,12,11,8,8,9,12,12,11,15,17,20,24,25,29,30,35,37,14,12,9,9,11,11,12,11,11,13,12,14,14,16,17,20,24,27,26,29,32,39,41,13,13,12,12,13,13,13,14,14,15,16,18,17,19,18,19,22,24,26,29,34,39,42,13,13,13,15,16,14,14,15,13,15,17,19,18,20,18,19,21,22,26,30,34,38,42],
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
