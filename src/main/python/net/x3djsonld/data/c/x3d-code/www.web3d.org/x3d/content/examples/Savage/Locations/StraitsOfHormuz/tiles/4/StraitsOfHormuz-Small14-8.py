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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small14-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.018229371682303,56.33160427093061,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[3,1,1,3,1,1,2,3,3,5,1,4,2,3,2,3,3,2,5,2,1,2,1,4,3,1,1,2,3,2,3,1,3,0,2,4,1,3,2,3,0,1,1,2,3,3,2,1,0,1,3,3,1,3,4,3,2,4,4,3,5,4,6,2,0,1,2,1,3,1,2,2,2,3,1,2,3,3,2,3,0,2,4,3,3,0,1,0,1,4,0,0,3,2,2,0,5,3,2,2,2,3,4,5,1,0,1,0,3,2,2,2,2,3,3,1,1,2,2,3,2,3,1,3,2,2,1,3,2,0,0,0,3,2,2,4,0,1,0,0,0,0,2,2,3,3,3,1,3,0,28,27,43,1,3,0,0,2,1,0,1,2,2,2,2,3,3,-3,3,8,95,75,76,116,84,64,2,2,1,6,5,2,0,4,2,3,2,2,5,4,33,101,128,82,109,103,100,87,2,0,3,1,0,1,2,2,-2,3,2,4,2,22,48,74,113,96,85,60,62,46,1,2,2,3,2,1,4,3,2,3,3,3,3,17,72,116,113,88,100,83,92,86,0,0,0,0,2,0,1,2,2,5,3,2,4,7,74,82,82,115,118,106,110,80,3,1,3,2,2,8,3,2,4,0,3,2,9,1,16,28,84,132,164,133,93,95,0,0,0,0,2,0,3,1,1,0,3,2,-2,1,18,24,101,114,129,112,75,93,2,2,7,5,0,2,4,7,5,1,4,5,0,0,11,20,28,120,137,116,69,18,0,5,2,0,0,0,2,-2,4,1,2,0,0,0,0,5,19,24,23,20,17,11,1,2,0,0,2,2,5,2,2,0,5,0,0,0,2,0,10,13,11,10,11,4,2,3,0,1,6,5,3,4,6,3,2,-1,0,2,3,0,0,8,4,0,0,5,-1,3,-5,1,0,3,3,2,0,0,0,0,0,0,0,0,3,6,0,1,0,1,3,4,2,5,0,5,3,0,0,2,-4,0,0,-1,1,0,0,0,1,0,2,0,3,0,0,1,-3,1,1,4,0,0,1,0,3,0,1,1,3,1,-1,-1,2,1,0,6,1,0,2,-1,2,-1,1,-1,1,0,2,1,0,0,0,0,2,0,0,0,0,4,4,0,4,0,1,0,1,-1,0,0,0,1,-1,0,0,0,2,0,0,0],
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
