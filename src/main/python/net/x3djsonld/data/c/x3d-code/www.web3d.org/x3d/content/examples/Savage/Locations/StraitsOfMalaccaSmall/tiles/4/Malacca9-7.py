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
        texture=ImageTexture(url=['../../images/4/Malacca9-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.3890484551644233,101.7110626388113,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[549,801,1260,1081,748,605,572,398,427,277,442,567,492,449,174,227,112,90,144,79,97,97,487,1009,797,1064,808,1068,765,863,412,145,482,701,586,591,436,425,115,76,219,74,96,114,459,775,586,1005,1040,1381,982,667,538,226,499,730,497,410,766,540,132,71,98,78,82,116,361,703,560,908,1444,1514,1173,994,650,158,443,650,621,376,533,256,93,67,85,70,99,95,129,271,503,872,1692,1370,1107,933,548,194,171,405,349,375,186,96,68,70,89,99,122,69,233,222,658,938,1656,1387,1094,687,484,230,170,580,460,373,157,71,83,75,53,68,95,60,76,237,578,1061,1337,1116,893,676,394,294,166,266,764,274,102,187,72,69,84,62,66,66,105,327,849,1145,1053,974,976,678,574,267,189,109,360,166,224,135,78,72,66,74,71,61,174,500,914,1175,790,824,650,742,514,233,184,97,97,142,104,83,81,65,78,86,70,72,204,386,753,1360,775,702,608,394,197,113,149,97,169,111,97,89,64,86,179,85,59,106,225,673,844,1080,859,1144,561,641,498,133,94,121,216,99,93,82,80,134,90,77,76,120,375,854,639,832,1182,1178,796,772,197,202,101,408,125,88,93,68,85,141,105,62,78,83,576,754,422,975,1073,1487,1044,818,280,133,160,294,108,83,78,87,300,113,90,93,83,84,269,383,362,571,827,1159,1001,435,218,190,231,155,95,91,71,246,125,95,98,80,104,82,190,207,441,670,975,1158,929,797,274,161,263,118,118,74,93,112,120,101,107,109,105,99,208,300,360,687,846,965,947,578,277,134,222,99,98,88,90,89,124,100,106,110,117,105,342,561,409,840,728,997,932,406,216,198,136,85,80,105,126,100,109,107,111,117,163,84,499,756,545,763,980,738,905,376,180,391,120,97,88,114,95,113,117,113,156,104,102,126,758,673,801,676,992,652,423,424,381,191,106,120,91,108,131,100,114,131,138,105,144,113,991,921,798,1042,874,643,348,267,276,132,120,130,105,100,98,96,112,260,101,102,133,115,1018,922,678,1046,1061,476,388,399,203,115,137,133,118,109,97,110,108,339,116,125,141,132,967,915,854,1176,913,662,268,462,212,135,151,212,113,152,99,103,113,207,118,124,136,125,996,915,881,1149,961,675,268,449,207,130,149,232,111,156,98,104,112,205,116,122,138,122],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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
