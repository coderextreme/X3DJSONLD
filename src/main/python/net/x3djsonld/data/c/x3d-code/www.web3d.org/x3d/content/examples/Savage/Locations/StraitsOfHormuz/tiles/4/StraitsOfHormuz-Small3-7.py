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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small3-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.78518503735335,56.180963250426785,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[818,846,523,565,939,990,940,1012,868,707,555,627,749,629,631,600,661,652,529,378,195,83,573,749,655,835,963,970,857,888,766,625,606,619,670,657,723,681,577,546,385,534,290,123,274,421,837,789,854,891,962,754,802,670,723,814,865,742,707,595,450,486,397,388,479,334,299,745,723,736,751,735,932,746,662,663,922,911,1028,725,530,426,376,455,362,367,480,448,541,671,634,651,602,559,813,816,655,937,1068,956,716,712,354,620,397,390,371,129,365,431,477,429,537,556,417,516,592,832,941,1066,854,672,564,668,475,715,483,405,418,405,128,96,609,283,300,309,379,478,921,1096,1106,1016,990,832,891,625,652,759,527,426,433,376,246,203,602,339,287,449,366,472,1043,1224,1121,1069,1110,1246,1028,977,1025,867,608,449,425,252,356,357,710,514,591,495,362,320,398,1341,1164,1231,1083,1216,864,939,931,987,581,504,390,447,720,445,704,647,685,493,322,362,471,1422,1191,1281,1172,1118,631,819,799,785,829,498,433,427,448,499,684,853,620,451,329,656,515,1397,1415,1283,1176,601,636,878,636,557,819,680,461,446,477,468,789,951,819,458,350,352,755,1410,1394,1319,1150,577,526,714,461,467,676,754,563,490,436,425,897,820,590,489,355,337,351,1391,1235,1181,1315,498,493,738,599,475,457,693,597,449,245,328,865,1147,928,545,434,402,352,586,1060,1040,1326,563,464,607,588,410,401,523,635,501,386,434,1177,1270,956,599,443,424,363,437,723,958,878,467,441,408,455,411,390,419,714,560,327,476,1166,1109,1000,653,575,374,362,364,393,459,446,480,418,403,403,401,401,415,740,708,630,662,933,961,705,702,422,480,491,372,411,408,457,442,425,403,415,436,403,496,719,649,561,732,773,606,649,583,459,573,472,376,556,557,532,550,451,421,428,586,408,417,615,751,553,672,704,569,459,544,527,708,564,381,560,656,623,617,474,564,521,508,524,429,484,886,684,765,870,574,604,671,738,820,627,394,394,624,678,467,582,613,800,545,748,465,458,835,750,931,908,790,1124,729,479,893,686,521,398,659,686,925,618,737,765,683,845,699,562,945,883,881,1250,1217,1281,839,538,833,806,561,406,683,857,937,769,1202,1049,669,906,848,925,1183,830,555,1251,1220,1280,835,539,825,815,573,409,679,858,938,768,1203,1058,675,920,852,940,1173,835,537],
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
