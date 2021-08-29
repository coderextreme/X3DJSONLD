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
        texture=ImageTexture(url=['../../images/4/Malacca6-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.434860909842949,99.20606251983018,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[924,967,1688,1306,1635,1480,1470,1444,1715,1360,1150,701,408,280,221,182,131,157,256,200,93,78,942,1107,1342,1184,1356,1202,1381,1772,1337,1013,680,431,261,341,158,156,118,249,119,135,102,63,958,1343,1347,1171,1091,1209,1373,1995,1742,1117,1023,712,279,213,190,135,71,207,187,146,68,38,938,1165,1380,1286,991,1323,1708,1305,1677,1334,900,642,413,195,111,177,54,326,120,45,35,28,1108,1177,1145,1077,971,1107,1241,823,1337,762,695,561,149,90,77,60,131,142,98,42,33,29,1167,1052,972,954,858,873,1055,1068,776,791,690,395,305,198,54,60,32,119,56,36,45,37,1267,1130,1014,739,843,867,830,927,487,909,650,241,279,96,161,52,66,109,76,51,45,43,1419,1243,969,893,718,831,906,817,379,792,235,189,191,163,133,76,85,44,66,51,36,28,1067,1476,996,968,814,664,965,658,383,519,322,210,188,154,129,114,107,49,23,25,24,24,903,1111,704,960,803,626,479,362,357,340,335,177,193,193,125,137,83,64,36,42,33,44,1010,826,866,593,585,879,602,715,471,338,269,181,189,187,151,95,98,50,61,45,36,28,846,704,702,652,511,705,687,321,229,308,168,148,139,215,141,95,86,70,46,38,34,38,834,760,802,587,619,554,463,284,213,242,177,134,77,197,130,86,76,74,48,44,37,40,839,675,749,353,482,332,308,209,208,187,163,125,129,67,108,69,59,63,51,55,51,49,937,620,555,541,309,322,249,202,187,170,155,130,118,79,76,72,75,55,62,55,52,44,978,621,432,393,296,251,243,165,199,141,127,106,87,68,68,56,73,57,46,46,44,41,649,557,376,429,282,228,216,201,184,170,141,106,81,70,64,31,53,53,50,50,36,28,470,371,333,303,277,247,215,173,171,159,136,131,112,110,102,57,46,46,42,39,35,34,506,355,290,320,212,197,194,170,160,140,136,84,59,90,61,76,56,30,14,40,31,33,451,386,352,310,269,245,159,177,147,154,104,99,92,92,75,54,80,41,36,31,30,27,437,318,318,308,263,234,205,179,163,162,154,97,97,94,60,60,48,62,23,33,33,30,407,301,326,288,260,215,196,179,164,135,133,138,89,84,71,87,54,24,53,36,46,34,413,304,317,284,267,218,194,178,162,136,119,138,88,94,70,79,54,25,43,40,42,33],
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
