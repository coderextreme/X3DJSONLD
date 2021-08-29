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
        texture=ImageTexture(url=['../../images/4/Malacca1-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.8445483343071585,99.20606251983018,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[581,437,471,968,839,766,710,532,883,1182,1393,1270,993,910,582,297,216,205,226,248,542,495,869,427,658,811,473,618,515,786,812,1008,1491,1271,1016,593,467,239,197,206,227,306,403,686,656,378,582,665,528,521,411,742,938,1134,1531,1372,919,912,406,234,193,202,225,446,549,694,297,266,200,315,369,358,800,792,986,1256,1220,1066,1123,645,360,201,189,213,242,349,528,633,428,320,379,425,487,476,924,764,1064,1381,1140,858,1198,763,311,194,188,240,313,699,728,999,362,311,280,318,446,420,555,897,1176,1254,999,736,1038,591,194,179,197,294,456,716,836,1027,276,181,146,416,316,576,815,940,925,951,680,1108,830,417,193,177,228,337,558,810,1251,1548,164,156,156,256,498,806,881,702,732,804,552,587,559,192,173,208,258,380,626,917,1541,1646,151,117,58,149,599,826,719,637,652,607,765,288,249,173,170,194,283,389,696,1096,1140,1303,97,42,78,396,818,578,649,544,411,375,673,172,163,161,166,184,235,562,676,1256,1375,1047,37,74,315,505,499,587,452,390,528,404,244,456,161,170,165,187,215,319,688,1045,1458,1269,18,82,401,375,475,421,440,181,432,227,416,357,166,162,174,205,263,469,679,967,1199,1123,36,375,215,249,176,428,422,119,239,363,622,294,163,164,185,258,320,451,884,1343,1115,749,44,100,61,246,98,249,107,402,245,394,591,209,166,166,199,281,321,708,1077,1003,615,1022,230,57,492,71,121,107,335,241,269,556,401,195,171,166,404,388,554,541,1181,1001,797,928,68,81,859,45,216,99,251,449,555,503,460,174,169,177,382,794,636,1111,1191,1026,590,780,45,339,463,70,66,217,599,529,617,818,394,179,174,206,471,776,1045,1100,882,978,632,557,49,613,357,120,185,324,399,888,1103,652,236,174,182,232,572,839,906,1228,941,808,361,254,50,341,493,89,456,382,539,744,825,677,261,180,195,432,615,798,933,1288,861,555,352,245,162,494,365,141,597,741,765,970,1070,666,324,211,212,420,958,959,778,1170,726,446,314,747,409,634,356,189,756,682,1331,1206,932,628,328,295,289,745,1029,982,954,815,571,339,740,883,507,564,139,195,632,837,1064,909,661,567,349,269,583,1241,1103,1045,992,486,473,502,812,493,543,432,146,209,594,818,1068,857,658,586,340,278,642,1268,1074,1074,989,548,471,529,776,482],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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
