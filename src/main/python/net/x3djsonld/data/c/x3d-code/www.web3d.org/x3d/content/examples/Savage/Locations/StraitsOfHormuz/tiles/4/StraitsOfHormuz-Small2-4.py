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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small2-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.6730900978689,55.729040188915306,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[1,2,3,5,2,2,6,0,7,6,17,23,24,26,33,31,36,35,23,47,44,34,2,3,3,3,0,5,0,0,0,6,10,21,11,9,30,25,38,30,34,30,50,51,3,0,2,4,4,2,-5,3,7,3,4,13,24,16,17,16,40,21,39,30,28,52,0,2,2,1,1,1,5,1,0,8,0,11,20,10,22,24,46,35,34,52,36,26,3,2,2,0,0,3,4,5,2,0,11,0,15,16,11,19,25,28,29,36,35,37,0,0,3,1,1,1,0,4,0,0,0,4,2,8,14,13,20,31,34,32,26,30,3,1,2,1,1,1,3,2,0,0,0,0,6,8,10,10,16,23,28,30,31,27,0,2,1,0,1,1,0,0,0,3,1,4,2,2,8,8,16,28,18,29,33,27,1,0,0,1,0,1,0,0,0,2,1,1,4,2,3,2,8,19,25,18,23,25,1,0,2,0,1,0,1,3,0,2,4,0,0,2,0,2,0,0,26,15,24,21,0,0,1,1,2,1,0,2,0,2,3,2,4,2,2,1,3,0,2,6,17,19,3,1,-1,1,0,0,1,0,0,1,3,2,0,0,0,2,-1,1,0,1,0,25,1,0,0,1,3,0,1,1,1,2,2,0,1,1,2,1,1,3,0,-1,2,1,0,1,2,0,3,1,0,1,0,1,0,3,1,2,2,0,0,3,4,0,3,0,2,2,0,0,0,0,1,0,0,0,2,2,2,0,1,3,0,0,0,2,0,1,0,1,4,1,1,0,0,2,0,0,0,0,0,0,2,1,1,0,1,1,2,3,0,0,2,2,1,2,1,2,0,2,1,0,1,0,1,0,0,0,0,0,1,2,2,0,2,0,5,2,0,0,0,0,1,1,0,1,1,3,2,2,0,-1,1,4,0,1,2,1,5,1,1,0,2,0,0,0,0,1,1,1,1,1,1,1,1,4,0,1,0,3,2,1,1,0,1,0,1,1,0,2,0,2,0,0,2,3,0,0,0,1,1,2,0,0,0,1,2,2,1,1,2,2,0,2,4,2,0,1,1,0,0,0,1,2,2,1,1,0,0,2,3,0,1,0,1,1,0,2,0,3,0,1,1,0,3,2,2,1,2,0,0,2,5,0,1,0,0,0,1,2,0,2,0,2],
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
