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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small11-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.681944553228952,57.084809373449744,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[32,56,66,98,138,76,68,91,89,115,125,153,175,179,217,181,254,342,315,255,261,263,18,30,60,130,95,80,62,86,98,107,116,164,144,134,156,197,285,402,285,330,292,339,22,44,112,125,74,61,60,85,93,101,104,172,161,142,198,234,303,379,297,339,375,324,31,51,106,84,62,55,64,71,92,102,101,122,209,234,167,227,284,379,437,359,409,356,36,66,110,90,61,59,58,63,79,92,104,105,217,176,173,244,304,333,443,510,391,347,32,70,124,80,53,45,51,64,71,87,100,117,158,226,255,282,287,348,479,427,393,366,37,57,89,59,54,47,67,82,71,83,95,94,131,209,314,229,254,381,461,451,404,379,46,99,96,51,38,50,70,78,74,80,85,86,122,195,284,244,352,343,486,420,386,345,49,98,72,47,40,66,70,77,70,74,77,87,116,180,326,201,319,319,496,459,384,306,79,67,46,39,49,60,72,68,65,73,72,81,136,176,311,175,202,351,325,358,375,318,87,77,37,34,51,57,65,62,69,67,76,76,116,152,311,179,205,344,322,261,319,275,57,50,30,45,45,50,53,55,58,64,84,83,99,143,271,156,199,258,335,262,260,243,28,30,33,36,43,50,47,54,56,65,92,81,113,137,261,150,181,222,269,219,208,218,28,23,32,41,45,42,45,49,60,72,94,85,141,137,199,163,200,182,179,203,192,206,20,27,48,41,40,40,45,47,63,53,72,89,118,127,134,174,212,196,173,195,188,198,20,53,48,34,38,37,40,47,44,49,71,98,123,112,115,160,219,206,171,183,160,182,20,61,41,32,33,39,43,56,55,73,75,84,118,103,130,169,178,238,171,158,206,171,59,43,37,30,31,39,52,110,116,55,72,82,116,99,112,158,157,243,177,139,164,181,54,36,30,25,35,36,70,64,116,56,73,81,123,92,116,172,138,154,158,146,270,250,40,30,24,30,32,40,64,59,86,68,84,77,130,92,110,219,132,129,203,176,188,241,30,25,22,29,29,37,49,72,82,69,73,72,115,92,105,186,124,128,171,129,241,234,27,22,21,26,31,32,43,74,87,71,74,83,79,84,141,177,122,122,113,187,205,189,27,21,21,26,31,31,43,76,88,71,75,86,80,84,144,170,118,119,112,190,206,196],
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
