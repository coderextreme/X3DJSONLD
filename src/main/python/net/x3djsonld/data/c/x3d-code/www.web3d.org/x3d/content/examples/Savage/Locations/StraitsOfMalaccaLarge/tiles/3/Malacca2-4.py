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
    GeoViewpoint(description='GeoViewpoint_3_24',geoSystem=['GDC'],position=(-2.674956597161276,101.90825043207244,224011.88563999312),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(-2.674956597161276,101.90825043207244,0.0),range=268814.25,child1Url=['../../tiles/4/Malacca4-8.x3d'],child2Url=['../../tiles/4/Malacca4-9.x3d'],child3Url=['../../tiles/4/Malacca5-8.x3d'],child4Url=['../../tiles/4/Malacca5-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca2-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-3.6823316450090204,100.89750038406439,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.09626191,zDimension=22,zSpacing=0.09594048,height=[3,3,3,3,2,2,2,1,1,1,3,2,3,3,29,45,92,731,363,467,716,496,3,2,3,5,3,3,2,3,1,4,2,1,3,33,35,160,393,759,943,808,1411,1206,3,4,2,3,2,2,3,3,2,4,2,6,44,101,174,735,645,1395,992,858,838,547,2,4,2,4,2,3,3,2,3,7,19,56,114,158,685,1443,850,954,948,309,189,167,4,2,2,2,2,3,4,2,6,59,24,85,210,464,1212,1053,1268,1189,728,267,141,107,2,0,4,3,3,4,2,7,65,72,125,124,396,1297,580,1166,1790,701,174,135,86,87,3,3,3,3,2,3,4,70,120,180,188,216,200,367,1466,1166,1831,998,428,69,59,53,2,3,3,2,4,3,16,96,106,279,305,520,956,1196,859,1271,781,300,104,81,53,49,4,3,3,4,3,3,63,177,219,282,530,1473,991,1751,1682,796,281,177,76,69,43,42,2,3,4,4,5,29,127,117,239,806,961,747,1991,1299,355,387,417,258,74,53,45,43,3,2,3,6,32,73,337,441,750,953,1738,1487,1345,809,219,190,266,161,95,74,45,39,3,3,5,12,38,84,290,435,1283,1254,1305,1243,750,550,531,359,206,164,87,56,48,49,5,4,7,34,102,193,647,548,828,1364,2106,962,712,504,230,392,273,81,91,69,51,58,2,8,12,33,158,343,815,929,1585,1638,981,609,503,369,389,236,107,71,66,61,82,65,25,9,21,44,373,739,1430,1466,969,716,584,427,289,287,263,143,106,60,39,74,79,75,16,29,21,386,597,1392,1110,873,1057,541,606,351,314,171,138,107,79,63,39,38,58,54,7,12,95,628,1116,1370,801,1024,1242,770,676,139,142,116,135,79,57,47,48,50,46,43,22,90,589,1006,1625,796,1178,1548,813,713,484,285,174,94,108,78,63,62,46,65,55,59,10,501,781,1166,1037,1910,1319,1488,1040,1052,408,231,175,95,97,73,58,88,132,66,57,67,300,335,1111,1421,1411,1711,1350,1103,1265,765,472,240,289,92,90,48,78,70,62,80,57,81,438,760,1886,2105,2319,2046,1147,521,445,213,242,161,82,70,97,71,47,48,59,81,30,39,394,778,1902,2097,2337,2032,1107,529,476,195,217,160,74,68,98,67,44,48,57,76,30,27],
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
