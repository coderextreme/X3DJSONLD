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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small5-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.00937491632225,56.180963250426785,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[1594,1525,1397,1389,1382,1099,1251,1380,1214,1214,1272,1724,1602,1558,1541,1553,1488,1495,1254,1284,1209,1083,1588,1522,1478,1370,1367,1048,1215,1205,1214,1323,1303,1659,1629,1599,1505,1550,1520,1183,644,1056,1284,990,1542,1606,1484,1364,1371,942,1137,1091,1071,1345,1568,1610,1560,1484,1166,1468,1458,1036,630,424,356,468,1530,1649,1486,1385,1317,908,804,891,781,1198,1638,1505,1274,1054,936,1158,1249,1109,701,278,357,467,1427,1429,1516,1385,1098,1014,700,462,933,963,1112,1468,1205,950,736,903,780,1102,499,231,376,194,981,1128,1425,1123,908,872,657,419,729,759,853,1240,1161,848,604,783,532,754,403,226,201,194,915,998,1240,1085,917,717,568,558,590,569,620,701,1139,905,683,511,436,631,748,390,193,184,762,755,1073,951,817,674,469,490,460,687,630,603,908,775,602,450,286,408,636,274,178,175,690,612,984,916,680,672,466,375,629,783,691,532,871,724,478,468,250,271,541,600,328,233,827,450,883,721,568,751,577,251,284,715,621,520,704,678,443,319,227,256,513,401,298,214,724,417,894,674,415,709,652,440,183,644,479,180,535,586,320,233,188,218,329,203,149,151,567,422,497,659,317,531,688,576,301,237,398,187,437,533,354,161,184,281,135,136,142,143,766,577,404,222,230,170,507,697,400,228,141,140,658,614,293,171,156,135,136,134,140,141,919,751,561,360,365,202,363,707,483,361,144,135,506,655,470,215,138,128,128,132,131,134,998,947,560,258,703,268,149,435,520,403,332,119,122,332,300,131,127,126,230,173,134,174,991,983,481,672,636,505,164,214,285,169,265,118,106,111,115,122,292,155,162,230,136,268,973,971,711,1012,825,596,359,135,118,107,138,95,106,108,121,324,363,286,216,482,172,410,1021,996,1015,973,672,427,316,134,192,120,96,95,380,339,553,516,531,342,182,444,281,170,1333,1143,1052,811,634,341,167,352,374,127,90,258,224,593,796,786,885,441,327,481,223,88,1172,1139,993,717,466,331,363,647,456,122,86,93,333,657,501,750,969,942,935,569,345,234,929,1017,660,870,673,502,541,872,619,198,79,164,528,359,212,409,639,883,1051,745,325,220,738,850,682,579,925,1007,842,956,728,394,78,73,111,198,479,350,618,855,982,768,113,41,748,850,627,469,935,992,817,947,740,416,79,73,103,187,484,355,665,868,978,812,99,40],
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
