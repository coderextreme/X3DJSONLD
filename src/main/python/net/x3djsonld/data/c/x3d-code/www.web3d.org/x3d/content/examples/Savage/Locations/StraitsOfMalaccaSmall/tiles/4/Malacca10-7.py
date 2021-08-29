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
        texture=ImageTexture(url=['../../images/4/Malacca10-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.7071109702715814,101.7110626388113,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[996,915,881,1149,961,675,268,449,207,130,149,232,111,156,98,104,112,205,116,122,138,122,1115,1045,1043,832,1051,556,255,374,146,168,267,186,137,116,92,100,108,142,233,174,234,151,1271,1118,1198,954,598,384,363,333,133,184,186,143,110,101,102,117,131,203,433,484,444,237,1061,1111,1123,690,407,233,301,274,134,205,280,147,113,112,111,117,145,347,664,957,700,531,989,882,879,634,314,201,198,391,198,214,205,142,125,135,116,137,228,459,890,1414,1035,682,726,907,534,442,317,335,217,195,221,181,183,147,172,135,500,165,278,622,1007,1467,1182,1345,850,629,576,454,323,470,425,352,230,173,143,155,176,450,234,596,447,959,791,1240,1611,1331,753,879,875,673,441,261,283,248,204,171,151,158,170,402,154,714,757,1026,1054,1194,1477,1232,615,886,716,989,606,220,379,173,179,133,148,151,157,350,164,507,833,1291,1557,1395,1585,1167,599,419,542,740,686,274,401,152,159,145,126,123,137,314,319,635,1120,1460,1365,1911,1760,1763,1064,605,309,423,387,353,179,229,131,144,124,214,208,279,518,685,947,1348,1485,1500,1836,1893,1131,1077,672,492,156,367,202,271,162,127,170,176,183,604,307,846,1153,1345,1417,1324,1448,1460,1038,907,759,576,191,218,137,230,140,120,159,177,168,396,283,668,1163,1248,1247,1541,902,870,1057,1122,867,371,237,229,125,171,154,117,158,182,149,633,344,428,1117,1165,1034,1298,956,590,1049,1168,891,592,284,175,130,152,153,122,169,262,141,322,250,357,858,982,838,1111,877,510,1003,821,995,746,400,179,158,131,142,134,189,151,278,246,131,248,776,767,652,880,1089,608,753,1028,787,845,420,167,141,113,152,128,136,153,260,253,453,139,289,431,914,1115,811,742,534,713,806,627,225,125,128,111,142,131,121,202,289,216,380,289,164,508,758,988,527,360,660,649,506,341,201,129,125,111,110,119,135,156,196,146,128,476,204,305,487,388,227,135,520,699,189,210,137,125,134,142,127,117,127,127,160,111,105,458,401,542,785,248,238,149,568,540,143,194,130,124,166,140,122,128,109,178,136,151,122,188,581,336,535,148,225,135,289,191,248,214,173,127,161,143,133,122,102,160,139,103,96,136,212,260,276,125,94,116,281,187,267,209,166,127,168,145,139,122,102,143,145,104,93,136,209,239,239,110,102,142],
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
