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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small11-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.681944553228952,55.42775814790765,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[8,1,7,9,14,21,37,33,48,47,27,38,34,76,138,205,203,240,179,142,188,59,17,0,3,8,10,15,20,18,38,50,14,16,22,57,84,114,170,205,321,278,250,100,-18,12,0,2,4,8,14,9,24,22,12,13,19,36,73,79,116,168,270,289,224,208,4,1,6,4,-4,3,8,8,16,18,14,11,14,35,33,39,93,100,153,186,255,188,0,3,0,1,12,0,2,4,4,8,19,11,22,19,8,15,14,61,111,111,162,200,0,0,-4,-3,11,2,6,7,-1,5,7,9,38,8,20,11,14,34,62,60,83,84,3,2,3,1,4,10,-3,-10,2,0,7,3,4,2,7,8,17,15,14,24,12,53,-10,4,0,10,3,5,1,0,1,12,7,4,3,0,2,5,7,1,15,4,12,37,3,-1,15,1,24,6,0,-3,-3,8,5,2,2,11,2,10,1,3,19,7,13,6,2,4,1,12,2,3,14,-2,-3,6,2,2,1,9,0,8,2,4,1,1,4,5,4,6,16,3,-7,11,3,8,-1,-5,2,0,13,0,0,5,4,1,-2,-7,2,4,-1,8,-3,11,7,5,8,10,-4,0,-2,7,0,0,0,2,1,0,-1,1,5,2,1,-1,7,1,-2,1,4,3,-4,0,2,14,0,0,0,3,1,1,0,0,1,3,7,6,0,5,-3,6,3,3,-4,0,15,11,6,3,4,1,0,0,1,0,9,14,4,-4,1,0,2,4,3,11,-4,14,10,6,5,2,-8,0,0,0,0,2,-5,7,-1,2,-4,-2,-2,0,2,-5,27,0,0,0,1,-4,0,6,0,0,-1,-6,15,-5,4,3,4,4,4,3,4,4,-4,3,-1,2,2,-1,3,4,0,0,-4,-4,8,15,1,4,4,6,1,5,3,3,13,-2,5,3,-9,0,5,0,2,-3,-8,11,0,0,0,5,3,8,4,3,4,6,4,3,2,-6,0,6,3,0,0,0,-18,-19,15,-11,7,4,6,5,1,1,5,8,2,1,3,-1,5,4,0,0,3,0,-2,-20,-7,10,4,5,4,5,0,7,11,0,-3,5,5,4,5,0,0,4,-5,0,0,0,0,-2,4,6,4,0,4,6,4,10,3,2,3,2,4,3,4,8,5,-8,3,0,0,3,3,6,3,0,4,7,4,13,5,1,3,3,4,2,4,8,4,-8,3,0,0,3],
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
