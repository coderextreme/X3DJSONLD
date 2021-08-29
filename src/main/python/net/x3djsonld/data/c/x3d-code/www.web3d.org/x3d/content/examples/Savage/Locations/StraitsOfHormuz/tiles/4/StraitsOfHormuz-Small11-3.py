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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small11-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.681944553228952,55.57839916841148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[59,38,24,49,45,109,33,42,44,18,12,8,1,3,3,0,7,13,7,2,2,4,100,63,58,60,59,34,70,39,18,12,25,11,7,2,-4,-1,0,12,-7,1,4,2,208,212,160,74,62,68,77,33,28,66,57,10,10,10,4,0,44,-2,2,0,0,-1,188,235,201,189,79,72,112,234,65,138,41,3,5,26,5,5,0,-7,-2,0,6,7,200,201,181,218,113,128,169,228,94,107,50,18,14,9,8,40,13,8,7,5,9,6,84,110,200,171,203,170,151,164,150,79,48,18,29,53,12,26,50,44,29,10,24,24,53,59,92,129,153,114,130,130,73,97,158,112,74,40,19,23,27,45,15,18,40,49,37,15,50,70,105,95,70,91,82,85,65,141,97,48,46,39,50,29,23,46,46,71,6,14,17,24,58,44,34,57,52,46,77,145,107,117,127,133,149,127,28,47,62,79,5,14,15,8,15,29,21,28,33,34,49,92,90,192,194,191,175,114,149,116,85,84,4,6,9,10,22,15,25,77,81,104,71,75,58,76,209,174,146,173,158,153,147,146,2,-3,3,4,9,14,15,35,23,57,49,48,26,29,28,138,56,76,100,162,146,74,3,4,19,22,6,9,12,11,5,15,13,23,17,12,41,157,154,35,34,26,47,110,14,9,11,-9,4,5,7,0,24,13,6,30,26,25,36,26,32,23,26,26,33,42,7,-7,-2,6,-3,0,5,0,11,7,2,12,17,6,10,14,18,15,30,18,16,49,-5,-9,14,0,0,3,14,6,3,-9,20,6,9,10,16,15,9,15,23,14,14,37,15,2,-5,4,5,4,6,-1,3,4,5,2,8,15,2,3,18,13,9,13,13,18,0,0,-13,2,5,0,4,22,2,2,6,9,0,-5,11,18,4,10,4,7,9,8,-11,4,5,4,0,4,5,-1,0,3,1,-6,-6,18,8,-4,-1,0,13,9,6,7,10,6,-1,-20,13,10,-5,3,0,-3,3,2,9,1,5,3,0,8,6,0,-5,1,-2,0,3,10,-2,-6,6,2,3,5,-4,0,-2,0,5,2,3,-2,8,5,5,3,3,11,6,-4,15,9,0,-6,4,2,0,1,0,35,0,1,2,6,-1,0,2,3,3,10,5,-2,16,12,-3,-7,4,2,0,0,0,19,0,1,3,5,-5,0,2,3],
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
