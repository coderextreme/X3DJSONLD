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
    component(level=1,name='Geospatial'),
    meta(content='dardanel0-2.x3d',name='title'),
    meta(content='X3D Earth tile file for Dardanelles location',name='description'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='6 September 2010',name='created'),
    meta(content='12 Jume 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/Dardanelles.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/tiles/4/dardanel0-2.x3d',name='identifier'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(repeatS=False,repeatT=False,url=['../../images/4/dardanel0-2.jpg'])),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(39.4280100664,26.49987728550963,0.0),geoSystem=["GD"],height=[1,1,0,0,3,-1,1,1,0,0,1,0,0,21,9,51,151,200,121,99,194,235,1,1,0,3,0,4,0,0,2,1,1,0,0,1,3,4,56,124,105,158,80,106,2,0,1,1,0,0,1,0,2,1,3,0,0,3,0,28,36,58,86,102,130,91,0,1,-1,1,0,1,0,0,-1,5,0,2,1,0,5,1,1,0,3,33,41,39,2,0,2,2,0,1,4,0,-2,4,0,5,6,1,6,3,3,0,3,11,21,24,2,0,10,0,1,4,0,-4,0,3,1,4,0,2,3,6,3,3,6,6,5,6,142,153,19,3,-4,14,0,4,2,2,0,3,4,6,2,0,3,5,0,2,5,6,261,340,187,158,114,89,5,8,2,4,17,10,9,1,-5,-2,1,4,0,1,4,6,447,377,448,378,251,238,110,79,65,81,58,15,78,43,24,18,0,0,-17,3,4,5,440,406,579,526,322,199,235,436,253,450,538,419,351,215,158,127,61,14,11,9,9,11,366,332,374,370,517,568,533,582,582,587,754,718,861,517,295,482,132,58,55,37,60,95,431,330,343,610,462,579,732,550,823,753,976,927,907,822,887,879,357,172,171,66,224,234,238,370,343,399,471,650,695,815,659,941,1088,820,995,987,1089,982,825,724,340,307,341,351,346,261,441,365,465,640,744,770,927,912,1061,1193,1079,1095,782,1169,1140,757,762,671,381,436,216,358,359,541,606,653,752,768,849,904,980,1309,1251,1245,1084,1468,1530,1183,936,452,509,560,192,358,423,502,657,679,693,693,643,803,972,1149,1244,1292,1627,1712,1623,1295,795,797,756,702,208,298,426,544,604,762,560,401,345,409,670,1103,805,941,1358,1435,1258,1252,1247,1097,993,1183,190,254,353,506,570,553,577,362,272,311,308,619,710,532,812,876,1101,1342,1296,1105,1278,1276,113,164,209,346,329,367,313,314,225,245,272,291,277,362,652,866,1169,1063,1321,1296,1247,1115,86,121,137,156,195,170,261,203,162,207,259,305,274,328,592,812,924,660,1033,1294,1293,1257,69,86,109,114,130,128,276,224,144,191,235,188,317,329,321,525,757,698,830,928,970,1011,69,86,109,115,128,128,285,227,143,196,237,190,323,320,329,514,749,705,826,912,956,1004],normalPerVertex=False,xDimension=22,xSpacing=0.023009779,zDimension=22,zSpacing=0.017581536,
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(40.16643453115464,26.49987728550963,0),geoSystem=['GDC'])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for dardanel0-2.py")
