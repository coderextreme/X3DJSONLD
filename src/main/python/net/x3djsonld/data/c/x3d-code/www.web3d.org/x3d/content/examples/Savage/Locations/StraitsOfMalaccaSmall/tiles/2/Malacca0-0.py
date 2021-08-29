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
    GeoViewpoint(description='GeoViewpoint_2_00',geoSystem=['GDC'],position=(1.1626108494143166,99.62356253966037,163294.88275609037),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(1.1626108494143166,99.62356253966037,0.0),range=195953.86,child1Url=['../../tiles/3/Malacca0-0.x3d'],child2Url=['../../tiles/3/Malacca0-1.x3d'],child3Url=['../../tiles/3/Malacca1-0.x3d'],child4Url=['../../tiles/3/Malacca1-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/Malacca0-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.5264858192000004,98.7885625,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.07952382,zDimension=22,zSpacing=0.060583334,height=[0,1,0,0,30,23,50,134,308,492,1248,1494,1056,1212,1343,243,938,437,219,388,110,111,0,0,1,0,3,15,85,193,417,974,990,1325,945,751,492,310,234,564,231,141,94,101,-1,0,0,0,26,77,255,364,612,1605,978,620,588,972,893,452,501,158,385,205,189,154,6,0,0,2,11,361,459,506,819,1043,604,558,1271,1656,1115,881,283,580,555,225,90,82,-6,1,1,11,57,216,1318,785,1206,382,770,696,1412,1247,881,660,1075,445,147,167,70,67,7,0,0,35,51,574,699,847,986,210,507,1598,1763,977,447,314,344,136,96,62,69,72,0,1,2,26,118,343,531,1171,1035,218,1007,1320,821,496,277,220,106,82,68,59,49,58,4,2,6,64,133,130,737,676,165,383,1162,917,321,472,160,101,100,80,60,50,56,73,5,1,17,172,228,47,125,158,165,447,1030,182,185,194,99,125,80,58,66,49,53,43,4,5,41,33,51,38,150,740,183,1109,367,145,129,163,116,115,95,78,54,52,43,43,0,1,166,256,27,482,657,625,940,672,548,230,124,187,168,84,91,82,67,53,38,37,5,32,267,260,23,311,789,218,938,1010,326,338,156,170,194,150,136,95,60,50,37,36,3,24,429,236,103,196,797,235,329,499,261,69,131,166,119,133,125,57,52,38,30,32,5,32,139,218,389,184,351,738,204,223,115,91,98,78,161,119,116,97,57,33,27,28,4,36,32,116,683,625,362,529,340,127,83,58,50,57,86,80,127,85,75,49,31,32,20,43,21,74,297,1638,708,531,215,154,106,89,72,45,58,85,67,55,48,46,16,17,5,13,89,439,465,860,1081,449,344,388,122,102,78,63,38,51,118,84,83,53,22,30,8,17,359,646,688,838,890,1217,881,341,588,144,84,64,56,35,48,82,101,45,47,41,1,59,825,833,847,1055,852,1291,1358,583,879,220,63,46,38,48,80,77,99,57,80,55,-11,381,763,920,469,698,828,1719,1390,425,572,349,156,51,34,28,38,116,71,74,22,40,533,799,810,957,536,716,916,996,956,1482,539,252,74,91,62,19,56,72,47,36,22,19,519,793,812,940,562,730,963,1013,971,1452,541,263,74,97,65,18,65,72,47,40,20,22],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
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
