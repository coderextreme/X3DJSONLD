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
    GeoViewpoint(description='GeoViewpoint_3_13',geoSystem=['GDC'],position=(25.78518503735335,56.180963250426785,29163.6915586987),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(25.78518503735335,56.180963250426785,0.0),range=34996.43,child1Url=['../../tiles/4/StraitsOfHormuz-Small2-6.x3d'],child2Url=['../../tiles/4/StraitsOfHormuz-Small2-7.x3d'],child3Url=['../../tiles/4/StraitsOfHormuz-Small3-6.x3d'],child4Url=['../../tiles/4/StraitsOfHormuz-Small3-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/StraitsOfHormuz-Small1-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.6730900978689,56.03032222992296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0143467635,zDimension=22,zSpacing=0.010675709,height=[46,72,199,544,577,1171,1202,1426,1296,1175,1002,800,167,67,44,63,3,6,-1,3,1,-1,49,69,185,560,726,1195,1088,1127,1236,1200,1186,992,670,306,262,81,231,0,2,0,0,2,52,69,168,405,857,1004,777,1185,1422,1307,1351,1155,947,450,663,83,298,16,1,2,3,-1,51,159,134,296,573,725,734,870,1142,890,1355,1119,1158,771,527,167,11,1,0,2,1,6,39,174,207,242,203,226,280,798,958,1125,1144,1244,1200,1182,526,181,272,-1,4,4,2,1,71,177,214,357,414,497,618,589,773,1326,1270,1277,1394,1219,1071,636,577,34,0,2,1,0,43,203,213,423,675,831,875,907,1124,1411,1328,1402,1401,1422,1288,913,476,394,0,-1,5,6,60,246,474,425,637,844,616,603,1014,1202,1254,1287,1667,1317,970,1060,689,581,67,31,-1,1,62,138,493,585,662,448,488,385,712,1075,1410,1203,1119,1394,894,897,595,591,414,15,93,73,48,214,248,255,473,232,365,840,1049,1182,1111,997,1020,1095,820,480,522,600,500,321,328,309,47,89,78,143,184,462,569,921,1078,894,980,672,847,1132,806,576,536,539,643,272,178,224,34,90,167,115,356,355,598,820,907,617,457,703,926,807,666,611,793,706,498,482,140,117,24,36,158,113,116,147,457,763,714,247,338,656,643,841,638,950,838,374,265,144,426,419,16,26,80,240,428,192,478,485,335,538,485,425,386,1066,1073,686,673,562,427,460,144,105,11,138,54,104,464,185,273,414,253,281,763,368,353,1243,1126,1152,956,917,574,380,374,357,13,177,66,127,406,242,179,206,701,563,735,633,349,492,1232,1107,636,615,661,427,525,548,58,249,105,141,241,194,360,596,924,681,862,627,338,1097,1259,1139,475,429,718,483,234,204,102,477,443,466,523,354,368,380,811,1090,1072,813,411,441,875,994,424,456,406,567,475,500,209,198,574,534,485,648,576,683,889,1352,944,916,409,463,378,435,411,408,448,757,719,711,5,12,29,616,631,408,778,961,1056,1199,715,456,612,505,604,549,494,446,437,793,736,755,2,0,9,345,863,260,710,453,738,946,878,893,590,623,433,833,626,636,525,778,905,912,2,0,10,332,868,260,696,413,730,920,886,920,575,631,425,889,656,636,526,814,888,889],
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
