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
        texture=ImageTexture(url=['../../images/5/newport26-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.13166022549774,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[1,4,7,8,15,23,33,42,56,59,53,46,44,45,47,48,48,50,52,57,61,62,1,1,2,6,10,17,27,38,45,51,46,41,43,46,49,49,49,51,57,63,66,67,1,1,1,2,8,14,24,31,37,40,37,43,47,50,52,51,51,54,60,66,70,71,1,1,1,1,1,12,18,20,21,30,41,48,49,53,54,54,52,55,59,63,69,69,1,1,1,1,1,3,10,15,21,24,36,45,49,57,55,54,54,55,58,59,62,62,1,1,1,1,1,1,7,11,14,19,30,42,55,56,56,55,57,57,58,58,59,59,1,1,1,1,1,1,10,9,11,16,25,38,51,53,55,57,59,59,59,60,58,58,1,1,1,1,1,1,1,8,15,21,23,35,45,49,55,59,60,60,60,60,58,58,1,1,1,1,1,1,1,3,10,20,22,31,40,51,57,60,61,61,62,63,59,59,1,1,1,1,1,1,1,2,5,12,15,27,36,48,55,59,60,61,65,64,62,62,1,1,1,1,1,1,1,2,3,8,13,22,29,42,54,58,57,58,62,61,63,63,2,1,1,1,1,1,1,2,3,3,14,17,28,40,48,55,55,56,58,59,62,62,3,1,1,1,1,1,1,2,2,3,9,18,27,35,43,50,53,54,55,57,61,62,4,1,1,2,2,2,2,2,3,5,8,15,23,30,39,48,52,53,55,57,58,58,7,2,1,1,1,1,1,1,3,11,13,12,21,29,36,43,48,52,54,56,57,57,8,3,1,1,1,1,1,1,2,15,16,13,16,28,35,40,46,49,53,55,55,55,7,3,1,1,1,1,1,1,7,14,16,15,16,24,32,42,48,47,50,52,54,54,7,4,2,2,2,2,1,2,4,5,14,17,16,23,33,44,49,50,47,52,52,52,9,6,2,2,2,2,2,2,4,4,6,18,16,17,32,44,49,52,50,48,47,47,12,7,2,2,2,2,2,2,2,6,16,17,15,18,27,38,49,52,51,47,47,48,11,7,3,2,2,2,2,2,1,1,11,6,9,11,26,34,42,48,47,42,48,49,11,8,4,2,2,2,2,2,1,1,6,7,5,8,19,29,36,43,42,41,44,45,11,7,3,2,2,2,2,1,1,1,1,8,6,6,10,24,29,31,33,38,42,43,11,7,3,2,2,2,2,1,1,1,0,6,6,5,10,23,27,28,31,38,41,42],
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
