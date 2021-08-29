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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small8-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.3456597347756,56.33160427093061,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[5,2,21,121,1,74,137,160,224,208,255,123,83,223,367,46,14,0,4,0,-3,1,0,5,11,116,18,30,64,112,173,186,144,27,2,191,201,7,-2,4,0,0,0,-2,5,3,1,67,34,-1,58,89,198,146,103,97,-7,2,98,20,0,0,0,0,0,9,0,2,1,77,54,0,42,133,156,137,36,139,8,4,3,2,1,7,4,2,4,3,5,3,5,78,5,0,76,152,55,79,1,93,12,0,0,1,4,1,1,1,0,1,2,2,2,44,14,-2,48,53,10,12,0,69,111,0,4,6,3,1,5,2,0,1,1,1,4,1,12,3,17,5,45,0,8,2,3,-3,1,1,3,172,88,2,1,1,3,3,1,1,10,0,48,1,13,0,-1,1,4,0,1,1,0,157,11,7,-3,4,4,3,2,1,3,8,4,0,3,4,3,-2,90,6,2,0,2,1,0,2,1,0,3,2,2,1,4,0,2,25,0,2,1,2,5,3,7,0,1,0,4,0,4,4,2,3,2,3,1,0,4,5,4,2,4,3,0,0,4,3,2,3,1,1,1,0,3,3,4,4,0,0,5,3,1,2,1,4,0,1,-1,3,2,2,3,0,2,2,3,3,4,2,2,3,4,3,1,2,2,2,3,1,4,0,3,2,3,2,1,3,2,3,3,2,2,2,4,2,2,2,0,1,3,5,0,4,1,3,2,3,3,0,4,3,2,2,2,3,3,1,4,0,5,1,3,3,0,1,5,2,0,1,1,2,3,4,5,5,1,2,1,1,3,0,4,4,1,2,3,2,2,2,3,2,4,1,3,5,3,2,1,0,2,1,0,3,2,2,1,3,1,4,1,5,4,0,1,2,4,4,3,3,4,3,3,3,4,2,3,4,1,3,1,3,5,3,1,1,0,4,2,2,3,3,0,4,1,4,3,3,1,4,1,1,2,2,1,1,1,0,1,0,3,3,5,0,2,3,3,3,1,3,0,4,1,2,1,2,3,3,0,0,0,0,1,3,3,1,0,3,2,2,3,1,4,4,2,4,1,0,2,0,0,2,1,0,5,1,2,1,2,5,1,1,1,2,3,3,5,1,4,1,2,0,0,0,1,0,4,3,1,1,2,4,0,2,2,2,2,3,4,1,3,0,2,-2,-2,1,1,0],
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
