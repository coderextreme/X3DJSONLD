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
        texture=ImageTexture(url=['../../images/4/Malacca8-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.3471685463819594,98.87600028804829,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[-1,1,15,-4,2,-4,28,60,41,34,19,45,61,53,63,82,129,207,610,680,495,725,4,7,5,-2,4,1,16,30,195,49,46,67,84,57,150,237,325,461,848,752,753,772,5,2,3,0,1,2,21,11,12,34,23,37,77,217,343,489,679,777,986,1088,841,846,6,0,1,0,1,0,19,17,23,35,57,57,145,251,586,773,1526,1353,1392,1504,1287,1264,1,0,0,0,1,5,30,24,56,31,93,122,364,569,774,1108,1672,1485,1463,1410,1248,1133,1,0,1,0,1,8,23,32,52,66,91,197,520,930,722,954,927,1201,1106,1594,1060,1049,1,0,0,0,0,20,18,34,109,144,247,763,562,1005,1465,1351,1204,1019,820,1001,789,773,0,0,1,0,13,31,71,79,126,177,249,605,621,1318,1593,1055,695,490,582,705,1025,1067,0,0,0,0,14,4,51,237,203,251,403,554,1141,1276,1044,676,555,878,1303,1740,1465,1298,0,1,0,0,22,44,43,533,1551,674,1028,856,1050,1002,445,454,1215,774,1246,1467,1293,1290,0,0,0,0,46,27,32,424,1020,1174,764,1357,963,441,268,474,686,1025,1579,1066,801,756,2,0,0,20,39,71,167,623,845,774,927,1508,602,211,225,571,1195,1629,1997,1491,1332,1211,0,4,3,28,26,107,98,472,432,719,1117,831,746,188,328,858,1188,1685,1096,970,517,468,2,2,12,24,76,62,251,74,114,757,700,643,174,226,599,1525,1318,1057,487,312,569,556,1,1,33,27,31,209,117,28,405,414,430,466,163,225,596,1331,809,252,217,218,212,145,2,3,12,19,140,209,45,79,60,191,277,248,166,645,1183,1020,277,152,167,156,141,137,5,15,27,118,217,30,38,204,79,335,645,185,353,896,637,276,494,133,135,206,194,185,3,20,72,200,87,33,49,595,299,870,692,293,1204,1045,531,716,489,234,115,211,188,184,5,63,202,233,43,31,398,359,417,1063,428,592,884,632,1108,446,624,321,111,206,150,165,25,35,282,398,304,285,540,154,497,478,224,1028,678,660,612,495,345,121,123,217,229,236,29,9,373,12,41,413,180,170,881,266,423,667,252,209,301,348,85,80,96,148,165,169,28,11,353,12,42,348,189,148,831,266,499,644,290,174,264,335,83,78,94,140,153,163],
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
