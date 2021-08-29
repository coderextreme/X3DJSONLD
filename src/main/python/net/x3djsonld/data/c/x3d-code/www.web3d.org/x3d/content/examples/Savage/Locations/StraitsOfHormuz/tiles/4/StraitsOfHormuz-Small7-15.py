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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small7-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.23356479529115,57.3860914144574,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[144,153,155,157,165,170,177,219,237,268,268,357,449,429,447,443,435,583,844,727,699,687,150,152,148,165,157,167,186,224,253,340,307,378,409,381,385,395,510,687,569,565,580,568,155,171,175,127,164,169,191,234,281,319,317,327,376,381,359,419,663,519,502,507,505,529,168,175,125,120,140,168,195,238,317,298,301,310,368,340,370,609,488,450,459,465,489,490,118,118,115,134,161,147,191,234,299,286,300,305,313,376,467,542,445,428,431,472,480,546,104,124,135,173,209,140,188,218,286,274,286,312,344,439,534,517,421,415,465,562,624,602,115,125,128,134,148,172,181,222,294,267,287,314,390,353,455,382,378,465,555,585,607,686,104,155,118,147,137,177,169,221,289,259,356,326,311,303,335,397,435,562,536,700,837,798,100,145,119,144,149,171,157,225,306,249,302,273,291,331,401,467,451,533,578,711,700,719,99,116,102,130,163,183,168,232,336,260,255,278,312,350,527,588,477,558,517,610,690,732,90,97,102,113,195,178,178,222,299,239,238,287,332,348,400,410,423,478,555,651,817,772,109,116,111,114,189,215,171,191,237,222,334,262,308,353,390,406,459,569,651,679,681,744,101,94,125,112,165,327,216,223,246,269,347,284,301,334,455,419,517,511,653,762,829,809,81,103,111,129,141,319,270,241,312,291,310,320,328,341,417,577,512,690,622,668,762,806,88,99,102,114,147,259,277,223,310,261,354,373,338,368,564,716,593,727,710,747,924,909,94,93,113,129,138,202,301,205,262,263,325,432,358,461,630,778,602,695,819,790,896,956,119,113,110,141,138,199,335,265,245,276,354,400,392,491,616,769,709,691,743,763,929,876,118,121,116,127,145,207,396,272,336,268,324,420,425,508,718,787,846,877,855,794,820,970,103,145,136,127,146,184,439,293,319,274,438,510,550,595,610,653,813,903,936,909,971,867,97,111,167,139,146,196,481,302,305,299,388,505,460,534,700,732,783,952,1059,1088,1014,944,92,149,187,158,152,179,489,310,285,335,349,496,515,539,702,723,764,863,1025,1193,1116,1140,90,106,137,208,157,207,501,341,286,306,442,527,423,516,671,711,673,736,883,1018,1154,1117,94,101,146,208,158,207,499,342,284,313,437,525,427,515,650,696,658,732,869,1012,1144,1111],
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
