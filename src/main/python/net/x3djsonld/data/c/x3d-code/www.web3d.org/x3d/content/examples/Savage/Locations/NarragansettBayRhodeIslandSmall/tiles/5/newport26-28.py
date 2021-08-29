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
        texture=ImageTexture(url=['../../images/5/newport26-28.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64793081331529,-71.20887957792968,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[1,1,1,1,1,1,1,2,3,7,10,13,15,18,21,23,26,30,33,35,36,38,39,1,1,1,1,1,1,1,1,3,5,8,11,13,16,20,23,25,28,31,34,36,37,38,1,1,1,1,1,1,1,1,2,3,5,8,12,15,19,23,25,28,30,33,35,37,38,1,1,1,1,1,1,1,1,2,3,4,6,10,14,18,22,25,28,30,33,36,38,38,1,1,1,1,1,1,1,1,2,4,5,5,8,12,18,22,26,28,31,33,35,37,39,1,1,1,1,1,1,1,1,2,4,5,5,7,11,18,23,26,28,31,34,35,37,39,1,1,1,1,1,1,1,1,1,3,6,5,7,11,18,23,26,28,31,34,36,37,39,1,1,1,1,1,1,1,1,1,3,6,6,7,11,17,22,25,28,31,34,35,37,38,1,1,1,1,1,1,1,1,1,3,6,7,8,10,16,21,24,27,30,33,35,36,38,1,1,1,1,1,1,1,1,1,1,5,7,7,9,16,20,23,26,29,32,34,36,37,1,1,1,1,1,1,1,1,1,1,4,7,7,8,15,20,23,25,29,31,33,35,36,1,1,1,1,1,1,1,1,1,1,3,7,7,8,14,19,23,25,28,30,32,34,35,1,1,1,1,1,1,1,1,1,1,1,8,9,8,12,18,22,25,27,30,31,33,34,1,1,1,1,1,1,1,1,1,1,1,10,11,9,10,16,21,24,26,29,31,32,33,1,1,1,1,1,1,1,1,1,1,1,9,11,11,8,15,19,23,26,28,30,31,32,1,1,1,1,1,1,1,1,1,1,1,4,11,11,8,14,18,22,25,27,28,30,31,1,1,1,1,1,1,1,1,1,1,1,3,11,12,10,12,17,20,24,26,27,28,30,1,1,1,1,1,1,1,1,1,1,1,3,11,12,11,10,15,18,23,25,26,27,29,1,1,1,1,1,1,1,1,1,1,1,2,8,11,11,10,14,19,21,24,24,25,27,1,1,1,1,1,1,1,1,1,1,1,2,6,8,9,10,13,16,15,19,24,23,27,1,1,1,1,1,1,1,1,1,1,1,1,4,6,7,9,13,17,16,21,25,24,28,1,1,1,1,1,1,1,1,1,1,1,1,2,4,6,8,11,14,17,20,24,24,25,1,1,1,1,1,1,1,1,1,1,1,1,1,3,4,7,10,13,14,17,23,24,24],
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
