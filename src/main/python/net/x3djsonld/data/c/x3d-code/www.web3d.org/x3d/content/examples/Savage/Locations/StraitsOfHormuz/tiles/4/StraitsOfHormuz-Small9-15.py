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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small9-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.457754674260052,57.3860914144574,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[275,309,179,195,211,233,297,357,447,484,364,423,373,401,401,438,476,543,549,603,632,606,254,154,168,310,277,256,288,361,461,464,393,366,399,408,419,478,480,498,549,565,624,646,176,163,177,193,226,255,295,392,479,472,390,385,405,424,458,486,511,517,579,588,617,655,143,167,169,200,218,249,284,389,494,438,397,421,418,438,451,495,543,562,582,632,686,742,193,215,195,200,232,254,346,458,509,432,438,448,440,464,489,516,561,624,675,730,841,900,327,282,224,219,247,314,366,483,500,547,611,527,509,524,566,617,687,793,853,1006,941,1005,408,389,261,246,276,357,406,442,494,594,778,651,698,708,803,854,962,989,1095,1222,1086,1095,375,407,312,293,308,399,430,553,462,595,697,736,742,795,952,957,915,872,914,1103,935,958,346,389,368,370,397,416,502,436,454,647,581,584,594,633,812,774,677,793,980,946,945,826,319,342,367,430,454,425,455,384,469,497,458,446,551,600,535,567,677,789,875,728,915,783,305,339,354,356,363,430,383,405,449,403,425,460,499,536,569,676,801,933,848,703,698,671,374,342,356,378,361,411,346,355,375,416,432,470,482,539,648,715,719,665,600,572,509,474,323,250,266,345,392,376,327,351,367,399,421,462,489,488,483,479,458,440,441,450,431,437,240,239,259,313,366,353,346,338,357,374,379,440,509,425,501,508,504,488,422,419,475,486,197,232,241,267,359,322,313,319,328,342,404,456,472,444,455,426,418,410,393,397,418,416,236,236,266,266,363,306,297,325,335,356,390,425,449,387,432,401,401,390,419,426,453,442,213,247,331,336,297,286,304,314,350,366,424,387,439,370,381,403,378,369,387,410,435,453,243,317,321,349,307,277,316,300,354,397,401,378,360,353,353,368,354,364,375,404,411,431,253,366,350,347,270,268,277,329,344,400,360,312,372,351,333,344,357,365,386,402,412,417,277,377,339,281,244,298,336,337,303,318,331,396,399,344,367,372,349,355,384,415,438,460,292,383,341,261,279,308,320,245,251,302,362,381,323,332,346,373,341,387,410,448,461,451,274,350,322,226,300,336,291,245,345,356,356,300,322,321,327,328,352,381,416,446,448,461,282,346,318,225,298,332,283,248,349,352,372,301,323,322,325,327,353,378,416,449,449,460],
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
