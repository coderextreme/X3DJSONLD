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
        texture=ImageTexture(url=['../../images/5/newport7-19.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.49458451554258,-71.28151729792728,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[3,4,6,8,9,11,11,12,14,15,15,16,17,18,19,20,21,22,22,23,25,28,30,3,4,6,7,9,11,11,12,13,15,16,17,18,19,20,21,22,23,24,25,27,29,32,2,4,5,7,9,10,11,12,13,15,16,18,19,21,21,22,23,25,26,28,29,31,33,3,4,6,7,9,10,11,12,13,15,17,19,20,21,22,22,24,26,27,29,31,32,34,4,5,6,8,9,11,11,12,13,15,18,21,21,21,22,22,23,24,27,29,31,32,34,5,6,7,8,9,11,11,12,13,15,19,22,22,21,21,21,22,23,26,29,31,33,34,5,6,7,8,10,11,11,12,13,15,19,22,22,22,22,22,22,23,26,29,32,33,35,6,7,8,9,10,11,12,13,14,16,20,22,23,23,24,24,24,25,27,30,33,35,36,7,8,9,10,11,12,13,14,16,17,19,22,23,24,25,26,26,27,29,31,34,36,37,8,8,9,11,11,12,14,15,16,19,20,22,24,25,26,27,28,28,29,31,33,35,37,9,9,10,11,13,14,15,16,17,20,22,23,25,26,27,28,28,27,27,29,31,34,36,10,10,10,12,13,14,16,16,18,21,23,24,25,27,28,28,27,27,26,28,30,33,35,11,11,12,13,14,15,16,17,18,21,23,24,25,26,28,28,28,27,27,28,30,33,36,14,14,14,15,15,16,17,18,19,21,22,22,23,25,27,28,28,29,29,30,32,35,38,16,17,17,17,17,18,19,19,20,21,22,22,22,24,26,27,29,30,31,32,34,36,39,18,19,19,19,19,19,20,20,21,21,22,22,23,25,26,27,29,31,32,33,34,36,38,18,20,21,20,20,20,21,21,21,21,22,24,25,27,29,29,31,32,33,33,34,36,37,20,21,22,22,23,22,21,21,21,21,23,26,27,29,31,31,32,32,33,33,35,36,37,21,21,23,23,24,25,25,24,24,24,25,27,29,30,32,32,32,33,34,34,35,36,37,21,22,24,24,25,27,28,27,27,27,27,29,30,31,32,33,34,35,35,35,36,37,39,21,23,24,25,27,29,30,30,29,30,30,32,31,32,33,35,35,35,35,36,38,38,40,22,24,26,27,28,31,32,31,31,31,32,33,34,35,35,36,36,36,36,37,38,39,40,23,25,26,27,29,31,32,31,31,32,33,35,36,36,37,37,37,37,37,38,38,38,40],
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
