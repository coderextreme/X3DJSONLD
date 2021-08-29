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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small14-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.018229371682303,55.42775814790765,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[550,538,527,663,846,798,523,490,381,389,295,388,389,324,272,340,252,230,260,270,279,271,624,749,752,643,728,553,480,440,424,409,481,410,410,316,305,310,283,308,302,285,279,255,778,992,804,593,565,468,465,517,515,457,417,446,393,389,415,409,378,373,355,340,328,307,801,802,634,567,518,512,505,528,504,437,458,512,553,652,866,808,817,788,782,438,416,452,667,660,668,660,637,552,564,562,557,511,568,760,847,773,733,828,865,848,870,816,915,823,691,704,772,726,655,610,668,664,677,778,952,959,844,665,533,537,619,590,605,663,795,717,747,843,824,825,783,706,741,894,1121,979,835,744,684,450,385,387,408,525,443,632,612,561,912,1012,971,1090,1155,1205,1188,1134,1046,924,808,661,487,356,360,474,415,429,485,390,428,479,1014,1387,1382,1216,1128,1114,1028,958,956,863,722,600,362,360,627,643,664,636,391,324,318,326,1202,1427,1316,1136,1020,979,921,823,828,843,726,548,334,396,361,579,543,503,551,542,319,284,1383,1323,1259,1063,907,841,804,731,728,660,408,356,289,278,293,293,561,307,411,402,268,255,1258,1177,1161,1027,964,751,698,611,519,375,328,299,273,248,267,249,411,307,263,251,235,237,1107,1024,1073,969,776,796,580,387,274,366,268,263,247,251,247,239,231,259,225,258,218,266,951,901,921,822,654,738,547,315,237,229,242,216,228,211,208,222,213,205,210,204,209,235,737,749,715,844,712,450,456,345,262,194,223,208,187,199,226,199,194,219,228,195,195,224,775,670,618,752,590,429,314,242,193,194,202,176,168,198,180,213,180,222,208,178,211,219,672,506,465,564,415,269,322,216,224,200,185,171,167,177,175,174,195,181,184,172,213,210,792,669,508,373,249,217,226,192,177,165,147,156,141,170,161,147,173,159,166,200,229,223,645,479,310,300,278,192,182,153,146,129,139,138,140,180,168,135,141,142,182,298,260,231,430,251,287,254,261,221,187,150,135,130,124,143,162,172,148,122,133,156,167,275,392,321,243,204,200,224,247,201,172,139,123,119,119,129,118,134,137,145,134,156,165,256,348,370,249,213,168,184,194,205,158,159,111,113,103,96,93,159,133,103,132,152,209,312,334,401,249,214,169,184,191,202,160,158,110,110,103,97,94,161,130,104,132,155,212,311,333,393],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])))])
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
