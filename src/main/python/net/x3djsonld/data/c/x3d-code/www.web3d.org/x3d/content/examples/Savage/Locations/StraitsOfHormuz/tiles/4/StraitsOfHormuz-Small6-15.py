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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small6-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.1214698558067,57.3860914144574,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[57,74,102,71,85,91,108,185,148,184,207,250,260,267,279,326,489,393,420,355,359,381,59,62,64,67,80,88,102,192,147,168,193,198,263,250,344,388,489,472,430,383,322,353,64,68,63,72,123,118,130,118,147,166,156,176,262,267,490,483,495,491,379,335,339,303,69,67,74,72,103,90,106,147,135,140,152,200,255,264,393,417,486,483,388,352,365,311,77,65,70,78,89,106,132,124,163,155,179,191,225,355,452,367,396,424,434,390,408,364,74,72,80,89,167,107,178,128,148,156,175,228,251,382,395,404,399,420,436,450,459,340,67,71,80,104,177,137,136,139,146,176,223,237,310,314,336,401,451,408,438,500,363,331,67,72,78,163,192,172,165,145,162,181,185,232,297,368,363,426,404,415,439,473,378,351,72,73,87,132,205,215,210,151,172,180,210,263,265,358,506,350,357,416,474,459,349,340,71,76,87,139,142,173,225,171,165,194,205,245,273,312,399,372,360,419,514,416,404,380,78,80,86,135,154,165,193,192,190,197,232,310,306,406,396,341,379,424,454,408,429,426,79,81,91,106,158,156,207,182,196,218,237,332,512,340,336,328,341,394,408,573,434,371,84,85,92,104,132,182,171,196,221,233,249,311,299,294,386,328,347,382,428,552,386,411,97,90,95,113,128,213,208,205,216,231,251,267,268,283,324,368,396,414,457,458,416,421,95,111,98,144,132,189,211,202,202,224,231,249,270,338,326,395,389,431,525,461,437,468,99,103,110,109,126,178,248,198,203,218,236,240,314,310,334,378,492,545,499,448,481,496,102,109,119,117,134,189,312,184,190,209,237,251,278,315,381,397,517,609,489,532,491,551,106,129,113,127,134,167,303,176,175,208,289,309,357,355,410,483,688,556,537,582,604,625,109,138,128,127,145,147,161,162,190,213,283,341,323,353,460,753,557,583,582,601,770,891,127,133,151,137,133,147,160,217,168,185,235,374,300,368,549,579,518,485,537,698,1058,1204,123,156,155,181,172,152,173,213,183,204,285,292,340,373,511,540,469,477,648,1007,1020,874,144,154,154,157,163,172,177,219,229,267,279,360,447,430,452,448,436,562,866,749,700,706,144,153,155,157,165,170,177,219,237,268,268,357,449,429,447,443,435,583,844,727,699,687],
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
