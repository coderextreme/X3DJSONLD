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
    GeoViewpoint(description='GeoViewpoint_3_53',geoSystem=['GDC'],position=(4.0251734853787395,101.7110626388113,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(4.0251734853787395,101.7110626388113,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca10-6.x3d'],child2Url=['../../tiles/4/Malacca10-7.x3d'],child3Url=['../../tiles/4/Malacca11-6.x3d'],child4Url=['../../tiles/4/Malacca11-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca5-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.7071109702715814,101.29356261898111,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[24,20,32,36,49,129,74,82,244,709,566,584,1011,724,253,113,85,100,118,138,135,105,7,22,61,37,241,113,50,488,412,523,1101,659,758,317,310,107,136,99,119,107,116,109,18,17,48,83,142,38,92,335,792,975,939,1079,1172,257,151,173,129,96,125,119,140,126,16,12,42,65,30,84,82,190,883,1575,1189,1220,436,436,135,192,114,109,151,605,550,278,53,17,64,37,45,37,121,846,1207,1526,740,601,380,213,150,178,163,209,334,1038,996,1019,22,19,43,88,64,54,392,997,1445,709,696,804,403,315,221,158,181,206,812,918,1345,1146,50,40,30,33,68,71,652,1305,1128,691,569,644,701,410,150,127,139,334,1200,1554,1652,1560,60,73,52,45,43,124,702,1388,1112,1161,1230,834,160,196,157,141,161,369,1043,1531,1599,1693,145,235,72,150,68,75,490,980,1082,1302,1045,902,212,124,144,159,138,280,1177,1200,745,645,98,145,116,77,158,65,553,1363,862,907,991,1042,388,150,145,149,329,159,755,714,933,594,39,55,58,72,578,255,485,1012,786,699,515,783,236,128,132,128,299,384,218,852,392,327,50,80,94,276,889,289,963,945,446,385,483,253,149,150,122,118,141,122,394,573,172,152,48,54,80,530,862,641,764,1220,699,175,187,278,148,168,158,107,132,134,236,285,126,131,37,66,136,226,814,964,818,1031,671,353,331,233,139,182,196,123,101,103,121,121,157,180,39,104,539,494,705,1142,799,1155,1044,372,294,280,165,168,198,176,142,93,104,124,138,158,53,67,410,859,544,1077,858,1480,845,334,264,370,185,169,130,216,156,140,140,167,176,364,46,123,385,1168,586,1053,1247,1037,766,329,197,219,144,149,140,167,117,120,103,142,138,218,83,87,354,872,1094,1469,997,716,384,281,169,181,136,168,140,138,149,142,133,148,170,126,66,378,432,942,1258,1194,1331,814,756,204,199,149,119,107,100,114,166,118,114,88,93,82,75,126,540,1224,1972,1167,918,934,746,201,230,176,119,111,90,121,89,81,94,82,121,98,254,449,603,1205,1534,901,538,874,634,194,117,244,113,103,84,111,75,82,115,93,111,102,283,448,591,1152,1523,878,501,848,672,189,114,252,110,100,80,111,81,93,107,89,109,93],
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
