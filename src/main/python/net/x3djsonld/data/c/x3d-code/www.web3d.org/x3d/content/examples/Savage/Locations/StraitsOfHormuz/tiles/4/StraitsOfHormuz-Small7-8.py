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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small7-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.23356479529115,56.33160427093061,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[278,156,56,173,8,4,11,5,6,5,14,3,212,529,269,18,23,257,540,542,37,21,187,629,198,265,178,10,64,14,21,63,27,25,389,61,210,18,6,-7,542,127,33,22,203,598,522,503,245,87,176,13,14,19,172,136,298,47,0,-1,8,-10,-1,13,-7,0,351,623,331,295,200,165,150,42,115,39,322,153,222,73,0,5,22,-6,-3,6,5,-7,170,494,103,41,54,83,29,262,218,301,146,11,4,17,14,-5,0,-11,-1,-2,6,-18,516,575,108,9,18,17,11,233,397,322,120,30,-4,0,28,2,0,0,-4,-2,4,-1,460,521,96,3,4,7,1,104,403,37,24,30,5,-6,3,4,0,-7,0,-1,-38,-10,400,351,174,19,2,6,19,97,386,19,22,19,3,0,0,0,-6,0,0,7,-3,-1,374,316,4,0,0,81,339,326,379,234,304,58,7,0,-3,0,-3,-4,0,0,0,-1,347,159,0,8,3,5,92,259,413,281,210,18,4,0,0,-1,-1,1,0,-8,-9,5,57,0,-1,45,16,28,21,296,350,143,23,10,2,2,0,1,0,1,1,0,-4,-3,30,8,9,198,243,176,243,110,445,67,1,2,0,1,0,5,0,3,-1,4,-1,0,5,0,152,296,429,398,468,499,456,147,-3,9,-5,49,109,8,4,0,0,-1,0,-1,1,0,315,331,334,371,499,504,488,460,103,349,58,233,12,10,0,5,-1,2,-2,0,40,251,227,209,212,292,428,452,436,434,232,456,446,102,0,1,2,4,8,9,0,0,197,265,118,202,57,217,408,414,421,461,602,441,415,54,35,0,0,0,4,0,-10,3,78,242,32,179,8,156,436,399,431,419,459,432,453,80,209,8,51,24,3,-4,1,-1,4,18,3,66,24,126,291,404,355,428,399,443,402,378,380,339,388,350,235,15,17,8,5,1,5,0,-1,37,315,203,332,347,354,413,454,316,421,480,307,347,135,34,186,108,3,5,3,1,0,71,217,76,286,245,415,339,191,354,373,134,71,107,20,0,16,22,6,3,2,6,1,-1,110,279,323,269,284,238,261,413,364,49,1,4,55,-1,5,5,4,1,32,105,1,68,142,181,237,203,257,109,98,237,369,32,14,0,8,-1,0,0,5,2,21,121,1,74,137,160,224,208,255,123,83,223,367,46,14,0,4,0,-3,1],
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
