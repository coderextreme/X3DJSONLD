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
        texture=ImageTexture(url=['../../images/5/newport9-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.5107262310976,-71.28958815570479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[7,5,4,6,6,8,8,8,8,8,9,12,13,15,18,22,27,29,32,35,38,40,42,9,7,5,6,6,8,8,8,8,9,10,12,14,14,17,21,26,29,32,35,38,40,42,8,7,7,5,5,6,8,10,11,11,11,13,14,16,18,22,27,29,31,33,36,38,40,8,7,8,8,7,8,7,10,11,11,12,14,15,16,19,22,25,27,30,32,34,35,38,8,6,6,8,8,9,10,12,11,9,7,10,12,15,21,24,26,28,30,31,32,35,38,7,5,5,8,8,9,10,13,11,9,8,11,14,16,20,22,25,27,29,31,33,35,37,8,6,7,8,9,10,11,13,13,12,11,13,16,18,18,19,21,24,26,30,33,35,37,8,7,7,8,9,11,12,13,13,12,12,12,13,16,19,18,18,22,27,32,37,38,38,7,7,8,8,9,11,13,14,15,13,13,14,15,19,21,19,18,19,25,30,35,38,38,7,8,10,9,10,14,15,16,15,14,15,15,15,19,20,20,19,20,24,27,31,36,37,6,9,11,12,14,16,16,15,15,14,14,14,16,18,21,22,23,25,24,25,29,36,39,5,10,13,15,16,17,17,16,15,15,15,15,16,17,19,21,23,27,28,28,31,36,39,7,10,12,13,15,16,16,17,18,20,20,19,19,19,21,22,23,26,29,32,33,35,38,12,12,12,14,15,16,16,17,19,20,21,21,21,20,21,23,26,29,31,33,34,35,38,13,14,15,15,16,16,17,18,19,20,21,22,22,23,22,23,26,30,32,34,36,37,38,11,15,16,16,17,18,19,21,22,23,24,24,24,24,24,23,25,28,31,33,37,39,40,13,16,18,19,21,21,22,24,25,25,25,26,26,27,27,27,28,29,31,32,34,38,39,15,17,18,19,21,21,21,22,24,25,25,26,27,29,30,29,31,32,33,34,36,38,41,16,17,17,19,21,20,21,22,23,25,26,27,29,30,31,32,34,34,36,37,37,38,40,15,17,18,20,21,20,23,25,24,24,26,27,29,30,31,35,36,37,38,41,40,39,41,16,20,22,23,22,22,25,25,25,25,28,30,30,31,33,36,36,39,41,43,41,41,43,18,22,25,25,24,24,26,26,26,28,31,32,33,33,35,36,36,39,42,42,43,44,45,19,22,26,25,25,26,27,28,28,28,31,32,33,33,35,36,38,40,42,42,43,45,45],
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
