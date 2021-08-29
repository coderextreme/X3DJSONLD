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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small14-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.018229371682303,55.87968120941913,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[4,24,16,15,8,6,6,6,4,4,4,4,5,3,11,15,7,0,0,0,0,0,10,4,20,7,8,5,6,5,-2,4,4,4,2,5,14,7,9,0,0,0,0,0,1,11,7,36,8,1,6,-7,6,4,4,1,4,13,13,8,5,0,0,0,0,0,0,4,6,13,2,0,2,6,5,0,6,4,6,16,9,5,5,0,0,0,0,0,11,24,-4,6,8,2,1,3,3,1,3,1,10,6,8,5,5,0,0,0,0,0,-16,30,3,8,-1,0,-2,3,8,4,3,-4,-7,5,5,5,5,0,0,0,0,0,6,10,14,5,3,4,-3,3,-3,3,0,5,6,2,5,4,-18,0,0,0,0,0,-5,1,5,6,2,-2,2,3,5,0,1,4,7,3,0,-18,1,0,0,0,0,0,2,5,8,-1,9,3,6,3,11,2,6,3,-8,-2,-9,-10,18,0,0,0,0,0,3,0,4,6,8,5,5,12,4,4,6,5,3,5,2,6,48,0,0,0,0,0,3,9,5,3,0,2,4,4,5,3,6,7,4,5,7,34,50,0,0,0,-1,1,8,1,2,1,7,4,4,12,12,10,7,6,7,3,-4,20,50,0,0,0,2,5,5,11,5,5,5,15,31,26,36,29,37,39,13,4,1,48,-4,0,0,-1,2,7,6,7,6,5,13,48,65,63,38,42,37,47,26,12,6,-3,4,0,-1,4,9,5,5,5,7,14,23,93,54,78,71,67,50,42,32,27,23,7,4,2,1,4,5,8,7,9,12,12,27,88,73,79,143,84,82,65,56,46,33,11,7,6,3,3,0,11,11,12,11,77,62,125,107,106,110,113,88,91,74,56,55,16,11,9,8,2,4,-4,11,12,17,98,110,131,114,113,132,141,114,123,115,65,43,27,25,20,10,5,8,3,11,9,21,90,96,123,120,144,152,157,168,158,110,66,41,33,35,32,24,13,7,2,11,13,42,72,80,101,116,134,161,151,171,196,206,72,47,45,50,27,12,12,9,5,12,14,63,65,68,108,102,133,157,175,161,188,144,74,52,53,22,13,11,-4,7,5,19,16,54,51,74,86,121,129,133,195,141,182,145,110,59,23,18,10,8,9,4,11,17,16,50,51,76,87,128,137,132,190,138,185,151,118,62,23,18,11,7,8,3,10],
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
