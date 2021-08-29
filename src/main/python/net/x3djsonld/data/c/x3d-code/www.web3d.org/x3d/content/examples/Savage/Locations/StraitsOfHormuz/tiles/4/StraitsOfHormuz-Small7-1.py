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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small7-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.23356479529115,55.27711712740383,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[0,-3,8,4,3,0,0,4,0,1,-5,0,2,1,6,4,1,4,6,0,0,3,3,7,2,0,-2,3,5,-1,4,-6,0,1,4,1,3,1,5,3,3,2,0,1,8,-1,0,3,0,2,0,3,-2,5,5,1,2,0,1,-3,-1,0,-2,3,0,0,-8,8,10,1,-5,0,6,-2,-1,1,-1,2,5,0,1,0,0,0,-1,1,2,0,11,3,0,0,3,11,3,2,12,0,0,0,3,2,0,1,1,1,5,1,4,2,1,0,0,11,15,6,2,4,8,4,4,4,5,1,0,0,3,0,2,2,0,3,-4,9,22,21,13,20,8,2,-1,2,-1,4,2,2,2,1,5,-1,0,2,3,2,6,3,22,45,28,17,9,7,0,-2,0,2,0,3,-1,3,1,0,1,0,0,0,-3,-6,16,47,37,8,8,11,2,2,5,3,5,0,2,1,0,4,0,0,5,0,-8,-2,7,29,31,21,14,13,3,0,0,2,1,0,0,2,0,1,2,0,0,0,10,4,3,22,10,11,8,14,0,6,9,0,2,-2,0,0,-2,0,0,4,-1,0,0,6,28,-6,2,4,12,9,14,-7,2,-1,1,4,0,5,3,0,3,0,1,0,-7,-5,30,0,0,5,14,11,10,4,-1,5,0,0,0,1,3,-3,0,2,-1,8,-10,-18,17,8,7,6,11,13,8,0,6,0,1,3,5,5,0,1,1,0,-2,0,-13,-15,21,2,7,15,6,22,5,2,0,2,-1,-2,3,2,1,-1,1,0,0,3,-1,-11,16,-1,19,6,16,10,11,17,1,1,0,-1,2,0,0,0,6,1,4,0,1,8,6,-6,8,7,13,15,14,21,14,3,0,3,-3,-3,0,0,0,0,3,0,4,1,2,-6,12,-2,8,15,22,16,10,2,-5,-3,0,-3,0,0,-2,1,0,1,0,19,3,-6,10,6,7,14,12,10,10,-6,-5,-3,0,6,2,2,3,3,4,0,7,-1,-14,-3,7,6,1,-6,12,7,19,0,-5,7,2,1,0,0,4,4,-2,-1,4,9,5,-9,-5,0,-3,9,0,5,-4,3,4,0,3,0,-6,3,6,2,0,-1,0,4,2,-1,1,13,-2,9,-3,0,-7,5,13,9,3,13,1,0,-4,2,4,0,-1,6,3,-5,5,10,-3,11,-3,0,-3,7,14,4,3,8,1,0,-3,2,4,-1],
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
