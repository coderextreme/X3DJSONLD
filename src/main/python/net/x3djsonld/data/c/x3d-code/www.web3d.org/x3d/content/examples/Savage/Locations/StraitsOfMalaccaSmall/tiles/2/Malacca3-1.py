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
    GeoViewpoint(description='GeoViewpoint_2_31',geoSystem=['GDC'],position=(4.979361030700214,101.29356261898111,163294.88275609037),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(4.979361030700214,101.29356261898111,0.0),range=195953.86,child1Url=['../../tiles/3/Malacca6-2.x3d'],child2Url=['../../tiles/3/Malacca6-3.x3d'],child3Url=['../../tiles/3/Malacca7-2.x3d'],child4Url=['../../tiles/3/Malacca7-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/Malacca3-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.343236000485898,100.45856257932074,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.07952382,zDimension=22,zSpacing=0.060583334,height=[0,7,10,8,15,15,10,21,30,476,894,852,1748,863,168,235,125,189,183,127,123,109,1,-1,24,17,18,16,30,40,37,398,591,712,1305,1335,654,206,139,163,157,171,139,178,0,1,7,18,35,42,48,49,32,263,759,1271,1178,707,363,237,154,167,130,389,156,175,0,0,11,9,25,73,57,40,40,485,1153,1577,1511,746,632,467,183,163,129,157,213,224,0,2,17,10,425,48,44,53,123,367,631,1496,1433,1520,935,488,188,293,360,178,276,318,0,0,10,16,599,49,91,290,63,504,841,1672,969,1380,648,421,193,392,439,182,207,229,0,1,8,17,880,301,72,605,68,251,1551,1143,808,546,327,279,241,195,630,250,504,683,0,0,19,14,369,208,58,626,96,584,1218,1641,961,819,378,415,303,344,548,309,969,688,1,0,9,14,506,167,65,193,81,668,1063,944,1096,996,411,471,250,225,132,195,1098,930,2,-2,3,9,1107,463,58,56,74,318,569,1085,1171,1414,421,238,190,151,115,241,179,207,1,18,3,29,40,833,78,91,74,176,235,822,1593,709,431,462,147,499,123,153,161,139,9,3,2,18,35,789,107,580,416,141,687,1174,1979,553,301,329,238,615,157,138,146,150,4,6,9,11,47,278,102,489,823,308,890,1099,1118,899,495,368,198,226,317,102,99,96,7,164,12,26,49,156,551,84,164,267,1045,1162,1084,1548,458,191,269,246,496,99,76,93,10,41,15,30,100,1371,341,123,277,283,1304,450,1204,1721,981,956,404,278,429,153,84,92,8,191,38,31,43,430,1337,169,128,187,669,355,861,1519,1229,582,518,1450,483,83,133,147,5,32,174,36,127,851,1103,184,286,155,490,273,913,1145,929,1022,907,1335,662,273,135,104,5,54,360,120,477,777,891,218,212,380,315,521,523,655,1278,1119,1099,125,136,44,383,353,6,15,46,51,537,1532,605,631,158,132,657,304,488,1228,726,1014,759,452,83,68,185,197,17,20,22,34,486,945,378,392,198,234,537,470,598,742,706,1133,1047,373,64,259,203,115,6,17,24,41,75,120,405,252,272,788,522,307,447,990,667,880,970,194,123,118,64,53,6,20,26,37,73,124,420,263,277,835,517,283,464,1003,654,873,979,234,127,130,61,55],
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
