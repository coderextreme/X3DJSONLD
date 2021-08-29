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
        texture=ImageTexture(url=['../../images/4/world14-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(67.45833802716578,89.95834137992705,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=1.0714287,zDimension=24,zSpacing=0.48913044,height=[312,422,489,493,543,427,510,695,844,593,665,407,402,435,629,395,578,408,349,528,610,385,257,122,424,491,319,567,698,394,834,548,409,465,423,629,428,404,493,584,658,647,492,607,80,502,267,329,854,300,795,906,549,722,564,664,474,443,508,538,459,523,696,699,477,536,414,327,215,699,580,485,787,591,796,764,881,427,604,488,432,473,752,344,613,543,400,401,492,185,197,783,797,711,672,560,800,849,863,295,521,488,435,457,480,259,300,300,277,395,394,387,612,253,906,791,897,670,844,806,426,449,242,244,440,410,378,365,419,357,352,378,58,137,715,562,617,268,857,1043,1051,528,1105,335,297,201,356,328,351,290,324,242,329,181,178,136,729,854,527,1254,1050,1173,1028,1055,481,334,381,225,196,244,241,219,209,278,293,259,72,503,568,818,1351,1096,1296,804,1271,540,427,459,365,284,276,370,487,392,468,327,334,426,399,104,894,1318,1097,972,851,884,593,563,665,554,328,253,366,587,944,627,570,672,262,444,81,482,707,657,710,793,688,736,461,622,520,337,403,268,312,561,454,624,611,540,372,324,67,95,46,46,40,19,72,57,102,79,201,418,470,43,263,248,525,640,641,640,463,254,159,96,47,29,61,73,47,39,38,6,44,53,299,205,247,307,372,390,432,510,339,228,47,34,100,160,43,35,66,94,77,45,19,43,43,126,242,254,219,189,161,232,95,42,38,107,67,33,27,19,57,31,60,80,64,78,51,25,63,56,174,330,274,132,6,121,71,52,22,133,119,90,27,28,106,112,18,14,35,109,58,8,24,86,9,36,65,36,50,23,106,86,26,24,27,56,122,71,114,129,88,50,65,49,56,0,34,30,52,47,47,233,6,55,146,84,131,16,77,73,130,149,48,109,67,82,67,14,-11,-8,-1,26,115,174,207,141,175,318,488,167,129,107,5,32,19,116,107,206,91,67,57,49,-10,-7,175,199,132,131,308,122,198,271,155,282,310,5,101,14,39,83,195,189,97,84,40,5,56,191,265,258,425,273,121,103,102,158,131,302,199,358,29,124,38,67,426,311,395,226,-18,-35,-9,34,175,277,141,189,196,58,107,117,72,209,246,323,473,560,538,660,439,214,-49,-30,-32,-51,-49,-25,-1,67,-53,52,18,31,15,106,302,340,244,178,284,457,307,37,-50,-26,-44,-31,-33,-31,32,43,-60,0,9,47,69,37,119,212,302,154,171,363,346,35],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])))])
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
