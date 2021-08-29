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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small7-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.23356479529115,55.1264761069,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[0,4,-1,-1,1,2,0,4,0,1,2,1,2,4,3,0,8,3,0,0,6,0,3,3,-2,-2,5,4,2,4,3,0,4,3,0,0,3,5,1,0,0,8,1,3,2,0,5,8,-1,7,1,2,-2,2,3,1,0,4,1,-1,2,6,5,-1,1,8,8,3,1,3,6,4,4,6,6,2,1,5,4,3,4,3,3,3,0,3,8,-8,0,5,16,7,8,5,2,1,1,0,1,4,1,0,5,7,-1,-7,16,12,-6,11,6,1,6,-6,4,2,3,1,1,11,1,-1,3,7,1,0,7,15,2,-7,-2,1,10,3,4,6,3,1,4,2,1,6,9,0,6,0,-3,18,9,-1,1,9,8,-4,1,0,7,3,1,2,10,3,-1,5,8,5,-8,0,9,3,3,1,13,6,-1,6,8,6,9,0,-5,3,-3,-2,6,3,-6,2,7,9,2,0,14,5,0,-13,10,-3,4,-6,-1,7,3,0,2,1,0,-4,0,18,5,-3,0,11,6,-3,-2,8,12,-8,4,1,8,0,4,2,6,-25,-9,3,2,6,-6,9,13,1,-1,-19,13,-11,6,10,8,9,0,-10,15,5,0,-1,3,11,7,-6,3,5,11,-4,0,2,7,0,-8,0,4,0,-8,6,3,-5,0,16,6,5,-2,-10,16,3,0,-20,9,-29,5,-5,7,-7,2,1,4,7,6,-10,4,0,14,4,8,2,4,7,8,18,52,43,25,6,3,-10,0,0,6,4,6,0,0,7,1,-2,3,4,5,11,0,-3,19,29,2,13,9,-13,9,7,6,4,3,7,12,12,2,0,-2,3,2,13,1,-3,-2,20,13,9,5,-1,3,2,11,3,3,-5,1,15,9,14,1,11,4,5,4,2,10,10,8,10,9,1,3,-8,9,4,4,6,-2,5,9,0,4,-1,3,4,2,-2,5,8,13,3,-3,4,1,1,4,0,0,-1,-4,4,2,4,8,8,5,-6,9,3,3,15,-1,0,5,0,1,4,2,-1,1,2,4,1,3,3,7,0,4,1,11,2,5,-4,3,6,2,7,2,7,-8,7,-3,6,9,1,4,4,0,0,16,0,0,8,7,4,0,0,11,4,-1,-3,0,12,-1,8,4,2,0,2,1,7,3,-9,13,3,0,4,8,-5,5,0,0,-1,0,14,-4,6,3,3,0,1,5,6,4,-7,12,6,-1,4,6,-3,10,-1],
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
