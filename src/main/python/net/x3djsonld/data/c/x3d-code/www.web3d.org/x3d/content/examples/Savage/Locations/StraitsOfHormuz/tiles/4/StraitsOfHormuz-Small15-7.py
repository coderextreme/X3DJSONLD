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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small15-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.130324311166753,56.180963250426785,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[0,-4,-2,0,0,-1,0,-3,1,-8,0,-1,2,4,2,0,2,0,3,0,2,0,0,0,-5,0,0,-7,0,-2,5,1,0,-3,-1,-1,0,1,0,0,4,1,1,0,1,0,-1,-1,2,4,-4,3,0,0,0,0,0,0,3,0,2,2,-4,0,2,-1,-8,0,0,1,2,7,0,3,2,0,3,7,0,5,0,0,-2,6,0,1,-2,0,-5,0,0,1,-20,-1,2,11,2,-4,1,0,-1,0,16,7,-2,0,0,-1,-4,2,2,4,4,-4,0,4,1,5,-2,-1,0,0,0,2,1,2,1,0,-1,0,0,0,2,2,5,1,7,5,8,11,-4,0,3,-4,-1,1,-7,1,0,2,2,1,3,0,3,1,0,0,6,6,8,-1,4,0,1,-2,0,1,0,1,0,0,-4,0,2,1,1,0,0,3,6,6,6,4,0,2,0,3,2,2,0,4,1,2,1,-2,0,-1,7,5,5,5,4,7,5,4,6,8,-7,-2,12,-6,0,0,2,7,3,2,-1,-7,27,17,12,7,6,4,6,3,5,5,2,-5,2,-5,-5,0,1,1,0,2,0,0,56,44,33,9,5,12,11,9,6,5,9,5,2,-13,1,1,0,5,0,-2,5,-6,43,37,43,16,9,14,18,11,9,8,8,8,9,8,2,1,-12,-2,-12,-2,-1,2,48,25,22,27,7,44,22,33,18,12,11,9,7,8,6,1,4,4,0,2,0,4,23,32,18,29,9,7,13,60,36,18,20,15,12,8,7,6,8,8,9,5,3,3,26,22,25,13,10,7,7,11,36,45,24,37,16,17,10,7,15,17,13,7,16,13,17,18,14,13,12,11,11,12,22,19,39,50,16,35,14,10,22,25,25,9,28,29,17,16,15,10,18,14,13,12,10,15,15,38,27,40,27,12,19,26,20,13,37,36,23,16,11,15,16,13,13,10,13,14,13,20,19,63,37,11,30,35,23,17,31,41,17,16,15,21,16,10,15,12,10,18,16,13,15,62,62,14,55,47,37,20,43,59,49,26,27,19,20,17,12,13,16,16,15,22,15,29,50,25,55,73,42,33,24,63,19,21,27,21,21,20,14,14,13,16,18,17,15,31,48,36,72,87,56,34,34,70,15,20,30,21,20,20,16,17,14,14,18,17,14,32,50,37,74,88,57,36,35,70],
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
