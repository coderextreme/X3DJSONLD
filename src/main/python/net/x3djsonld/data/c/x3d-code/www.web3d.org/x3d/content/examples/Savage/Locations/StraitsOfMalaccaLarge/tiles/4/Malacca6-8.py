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
        texture=ImageTexture(url=['../../images/4/Malacca6-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-1.6675815493135302,100.89750038406439,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[241,422,1033,1337,1792,2221,2109,2330,2847,1373,1985,2100,1173,782,511,527,520,386,176,187,173,270,769,725,1350,1586,1680,1700,1535,1423,1626,1145,1549,1389,727,533,371,367,270,352,254,175,166,167,1063,781,1610,1440,1317,1035,822,754,819,702,778,755,626,418,406,355,287,224,280,215,182,161,1041,1096,1592,1277,559,1147,790,784,533,548,514,520,400,380,336,304,265,164,190,126,146,181,1001,1514,1399,641,721,654,750,470,509,580,375,312,298,307,286,266,255,168,177,167,146,135,1179,1520,921,438,698,413,830,470,636,355,291,274,285,262,226,221,185,162,155,123,88,142,2004,1380,691,931,1166,688,682,584,459,324,248,285,239,364,200,150,160,154,139,98,95,84,1901,1520,754,802,902,880,601,299,384,380,281,250,235,244,176,187,156,104,129,125,121,100,1960,876,652,1057,935,761,599,291,242,324,220,217,512,432,187,138,143,81,115,107,88,91,1036,1422,1660,1300,603,473,565,249,416,207,384,316,314,178,161,134,103,122,98,92,103,87,1643,1544,760,1019,496,619,447,654,261,273,239,315,201,123,147,118,117,107,103,93,100,93,1744,778,710,1185,891,672,785,362,390,214,179,212,200,198,178,102,89,104,86,88,84,83,1191,1133,867,666,488,654,513,250,208,239,179,245,219,177,161,141,103,81,82,68,66,76,1560,1508,920,945,759,1170,756,241,342,232,394,191,197,123,146,101,94,87,124,104,127,109,1020,1059,1057,1091,1458,460,312,366,201,191,179,138,171,135,107,101,103,82,118,131,117,117,671,996,1239,1248,1114,662,745,320,239,297,246,157,130,113,154,135,124,119,161,151,114,108,655,479,1042,518,858,533,245,296,245,206,133,124,103,456,130,226,166,97,86,113,124,131,461,527,724,441,351,551,609,438,299,272,123,114,123,136,249,127,198,62,81,95,118,108,311,335,337,369,311,392,689,489,258,157,192,146,232,207,130,228,88,67,81,119,138,141,201,373,252,308,418,595,483,364,141,126,140,265,224,123,92,76,56,53,100,93,132,119,229,157,158,204,494,493,338,117,361,133,253,317,105,94,104,99,131,73,50,82,93,73,214,156,159,201,464,507,265,118,343,114,245,300,108,96,106,111,132,77,52,75,91,80],
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
