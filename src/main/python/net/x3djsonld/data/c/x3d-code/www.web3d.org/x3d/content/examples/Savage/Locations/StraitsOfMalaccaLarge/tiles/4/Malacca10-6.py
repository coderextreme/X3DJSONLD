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
        texture=ImageTexture(url=['../../images/4/Malacca10-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.361918642077449,98.87600028804829,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[1428,1424,1571,1160,942,960,1029,1386,1246,1079,944,900,572,370,309,321,100,68,40,29,12,12,902,905,906,911,904,906,924,958,1379,1167,1178,509,427,272,536,91,247,47,33,26,8,7,905,895,915,900,975,910,905,923,1733,1427,1416,490,278,164,216,116,62,15,12,12,10,10,973,1114,960,906,1213,919,912,1135,1178,1442,1920,869,196,146,349,28,12,12,9,3,6,4,1401,1260,1051,915,1089,1000,1380,1333,851,876,509,365,93,57,71,43,16,13,6,5,4,3,1534,909,932,1216,1154,1870,1745,805,884,277,305,305,189,101,43,43,25,11,20,6,8,8,1490,914,1277,1252,1794,1345,1420,730,537,310,204,164,177,82,54,44,29,9,19,7,5,5,907,906,1027,1552,1415,1205,977,870,422,235,165,131,69,52,49,37,28,16,8,7,11,6,913,1141,1278,1205,1032,808,581,432,312,204,147,110,94,69,36,30,16,16,11,15,7,12,1335,1149,1102,963,731,625,481,355,254,190,158,121,89,84,70,34,20,5,16,13,18,14,1135,997,881,769,608,475,375,300,195,167,120,110,93,72,52,36,24,9,5,12,5,8,1021,867,751,595,486,370,297,240,156,181,150,104,76,53,45,36,24,8,5,8,1,1,951,828,699,558,442,329,253,214,184,171,114,97,64,47,34,24,20,7,2,5,7,9,972,911,659,510,390,283,227,187,146,135,119,80,45,33,34,24,10,13,3,2,10,8,932,961,801,431,324,263,195,160,126,109,101,71,57,30,19,21,14,11,8,10,6,10,511,534,362,279,241,200,168,142,116,82,84,60,44,20,22,14,5,9,6,9,0,0,354,285,207,181,172,152,142,119,91,68,69,52,33,15,12,3,2,2,7,0,0,0,321,209,183,113,121,126,108,102,56,52,52,39,29,11,0,4,4,0,0,1,0,1,199,179,129,93,55,97,51,66,57,38,35,30,6,2,3,7,6,1,0,1,1,1,132,125,90,56,45,45,45,46,24,42,11,14,9,4,0,1,1,0,0,0,1,1,114,71,96,69,42,31,35,35,29,11,15,5,4,1,0,0,1,1,0,0,0,0,111,77,97,70,44,33,33,34,27,11,10,5,4,0,1,0,2,1,1,0,0,0],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])))])
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
