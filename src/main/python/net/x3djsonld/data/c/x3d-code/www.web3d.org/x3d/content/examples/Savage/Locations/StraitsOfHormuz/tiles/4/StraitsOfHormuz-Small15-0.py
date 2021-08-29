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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small15-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.130324311166753,55.1264761069,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[1147,1124,965,868,1021,951,1032,855,845,793,832,974,806,861,972,887,891,724,798,870,677,525,1050,1090,950,854,960,920,927,903,733,734,923,897,693,778,914,801,832,619,730,832,700,534,999,959,978,834,844,838,822,809,623,667,852,758,564,739,791,727,788,599,564,720,563,478,1015,864,867,859,713,813,742,957,573,641,751,641,531,592,608,552,693,580,432,594,475,354,978,843,726,822,653,571,645,629,547,541,527,483,501,433,436,496,486,423,356,379,357,303,866,889,639,810,620,510,463,458,407,433,408,393,370,380,347,383,345,313,338,317,312,293,736,679,707,511,500,444,444,420,402,360,361,375,360,360,367,373,339,313,317,308,284,297,733,533,473,533,469,451,462,416,400,408,344,360,353,343,316,307,301,303,293,289,275,272,448,488,465,451,447,461,429,405,377,405,347,341,329,325,303,294,291,319,283,279,294,295,446,492,435,484,431,422,399,384,369,367,371,323,313,310,294,288,285,278,271,273,262,261,402,408,423,465,417,411,395,381,388,378,341,380,372,397,385,384,336,292,289,272,245,234,385,395,404,420,429,432,437,496,618,604,486,517,586,533,607,690,534,484,422,368,327,273,379,396,459,499,585,629,671,718,812,840,861,705,672,613,546,543,660,746,651,597,467,455,422,476,595,706,771,844,846,964,1096,1045,701,622,580,561,539,501,520,753,790,672,606,592,538,653,731,815,879,931,966,1174,1063,760,641,601,554,540,529,492,513,726,944,745,669,622,660,734,802,868,916,966,1018,1139,912,659,575,538,517,514,516,521,510,686,807,644,626,609,719,759,812,860,913,950,1006,1095,863,636,572,535,508,613,519,500,488,833,655,592,614,637,619,720,802,792,858,901,937,1010,1052,917,777,660,504,551,547,598,504,607,623,539,574,589,537,583,633,694,701,756,794,825,822,732,584,562,453,484,537,521,451,449,397,439,495,522,405,421,478,503,537,550,580,606,553,401,364,358,299,270,277,241,229,243,277,352,406,464,254,267,287,325,298,301,290,339,278,286,265,251,245,234,231,219,200,192,210,235,306,350,236,269,258,298,267,257,254,251,253,270,261,243,250,236,215,200,189,184,165,161,177,190,237,266,257,302,263,254,250,252,252,264,264,243,248,243,220,199,188,185,166,164,168,178],
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
