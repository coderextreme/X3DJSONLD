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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small15-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.130324311166753,55.87968120941913,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[17,16,50,51,76,87,128,137,132,190,138,185,151,118,62,23,18,11,7,8,3,10,12,18,22,44,78,89,98,125,134,161,129,134,95,71,88,21,15,12,8,7,5,3,18,20,25,38,54,60,67,107,106,124,112,116,137,172,30,39,14,10,12,7,7,10,20,24,38,45,49,50,62,85,88,85,92,188,373,68,35,26,11,11,9,14,10,14,26,20,27,37,56,71,60,69,81,94,111,346,137,43,23,16,20,13,14,13,13,12,24,21,23,25,35,60,115,127,137,146,221,218,85,47,26,19,20,15,17,17,18,17,29,21,23,23,30,30,35,34,43,47,46,47,42,37,36,31,16,15,21,19,17,20,37,27,26,28,27,26,28,33,34,50,42,49,43,39,37,36,48,42,23,22,20,20,41,29,26,28,30,20,27,31,26,34,36,46,64,69,41,45,51,60,37,54,34,20,42,32,29,31,30,30,31,28,30,33,47,56,64,66,82,66,54,50,44,45,37,32,46,42,34,30,35,34,36,31,39,36,165,190,224,216,88,88,78,55,50,44,32,32,51,52,39,33,30,45,38,44,40,48,201,361,417,370,318,252,90,87,58,52,38,42,52,66,41,38,34,45,44,45,64,124,215,248,215,192,382,378,139,138,66,61,62,53,60,63,60,44,40,37,58,68,89,127,155,107,122,112,194,324,368,382,104,87,64,80,68,68,71,61,57,53,59,111,86,106,54,96,115,104,75,162,194,329,365,263,104,79,71,75,77,65,64,61,97,94,68,44,65,74,52,62,67,61,104,202,311,332,392,141,90,68,81,82,85,100,96,72,48,39,42,36,33,39,51,43,52,74,139,296,350,371,69,55,72,79,100,104,87,72,42,30,26,30,33,29,31,38,48,57,88,173,247,323,54,45,52,77,97,82,52,20,28,23,29,21,34,33,25,38,45,46,57,66,174,236,39,34,44,55,51,30,25,23,26,21,29,26,28,32,38,29,41,45,50,50,69,100,71,79,38,22,20,26,25,27,29,30,34,28,31,29,33,35,34,33,47,51,63,62,23,21,22,25,25,20,25,31,29,32,35,34,28,33,34,33,34,37,49,44,51,60,22,21,22,27,26,23,26,30,28,33,35,34,27,34,34,35,34,36,48,41,49,62],
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
