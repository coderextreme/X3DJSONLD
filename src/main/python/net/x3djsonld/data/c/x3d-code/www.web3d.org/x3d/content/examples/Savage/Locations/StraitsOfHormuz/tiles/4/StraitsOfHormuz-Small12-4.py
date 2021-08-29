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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small12-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.794039492713402,55.729040188915306,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[3,2,4,10,2,1,2,0,1,1,0,4,14,20,17,13,17,14,13,20,24,27,0,0,5,2,3,12,2,2,3,4,5,2,2,8,9,7,12,13,18,26,28,35,2,0,5,0,2,3,2,1,2,2,-8,3,3,6,5,13,13,15,23,40,44,40,4,15,1,2,3,5,15,3,5,0,1,1,3,6,9,12,14,17,30,52,55,54,6,13,1,1,1,8,2,2,2,4,0,3,5,3,8,8,15,20,28,41,38,53,4,-12,13,2,-16,-34,2,2,2,4,2,3,0,10,9,12,17,24,28,36,102,77,3,1,-10,-14,-35,-9,2,3,6,3,2,2,0,4,7,11,16,24,26,57,65,53,3,1,0,-8,-6,0,3,1,1,2,0,-2,3,5,6,8,15,17,49,34,41,55,3,10,2,0,-3,-5,2,2,2,2,2,4,0,4,6,10,14,26,48,76,48,64,0,5,2,0,0,1,3,0,1,0,15,6,1,6,9,11,13,15,31,10,34,94,0,-6,-2,-10,-14,-14,11,2,2,2,1,0,5,7,7,6,12,18,18,24,24,36,8,-5,6,45,-17,-8,0,-4,0,5,-2,4,3,13,11,12,15,14,16,20,43,49,9,8,45,17,-12,-18,-2,12,6,0,4,0,4,27,20,6,13,19,18,15,27,35,3,22,46,10,-5,-17,0,-2,2,0,0,3,3,9,24,22,17,21,25,29,33,39,-35,6,10,10,-12,-5,1,23,2,4,1,4,5,8,12,17,66,43,37,42,49,39,2,-6,10,10,-17,-5,3,27,0,1,2,4,6,9,10,18,29,50,58,39,44,49,32,-5,0,10,-14,-19,2,13,-11,2,6,7,7,11,11,17,25,41,36,36,39,52,38,2,0,0,-14,-14,-1,13,-10,12,9,6,10,14,17,20,27,31,26,25,30,26,5,15,6,-15,-13,-16,3,4,0,0,7,6,7,10,15,36,24,24,36,25,34,20,9,34,15,6,-19,-14,-5,-2,0,3,-4,7,11,11,15,21,21,33,24,11,18,62,23,8,12,3,5,10,2,12,21,12,12,10,-1,13,20,16,23,18,9,17,11,10,3,11,18,-11,6,-4,6,3,25,25,16,13,14,27,38,28,24,25,28,36,12,6,1,10,18,-11,6,-1,7,1,19,23,14,13,15,29,39,27,25,23,26,33,16,7],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])))])
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
