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
        texture=ImageTexture(url=['../../images/4/Malacca0-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-7.7118318364,107.97275072012073,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[145,32,128,143,145,159,210,151,120,111,92,5,1,0,0,5,-1,2,66,3,4,5,232,291,210,221,254,212,230,180,146,128,143,102,14,9,13,73,117,1,7,1,2,3,552,312,404,278,262,192,267,282,143,168,203,170,157,135,267,225,3,2,2,1,24,35,741,640,626,413,311,133,309,209,375,246,455,430,343,517,432,25,7,4,2,10,48,97,818,654,654,566,316,162,398,342,706,431,492,394,69,49,22,12,7,11,19,30,98,89,828,842,435,294,258,215,326,498,714,551,173,157,24,19,15,14,10,27,138,31,152,136,1192,635,610,437,351,278,432,398,335,277,199,63,31,15,7,10,15,213,62,55,173,182,890,614,496,421,382,362,343,309,254,117,103,62,39,74,21,17,31,27,47,83,235,192,925,881,626,554,458,392,328,325,234,149,137,135,91,63,96,84,29,36,345,411,613,499,1022,1217,1288,867,565,428,691,542,376,217,186,285,318,201,535,564,205,144,132,365,203,98,759,904,1417,1339,748,458,1291,908,517,411,432,354,413,268,579,527,568,657,679,180,99,133,688,715,899,1392,523,467,921,725,425,473,494,398,394,939,1058,1223,662,345,359,391,60,116,658,653,1518,853,676,505,595,691,825,608,396,372,789,518,330,824,588,741,628,124,143,241,694,531,596,660,1202,838,955,1140,778,721,407,314,369,443,126,135,102,76,162,85,63,52,850,754,448,730,1025,858,478,604,582,719,537,615,334,148,111,165,168,69,33,40,19,22,1416,1211,694,347,571,385,312,587,946,1311,826,529,311,205,136,22,38,22,18,17,12,13,592,732,578,239,399,281,274,587,1001,2217,1377,493,313,76,62,21,18,12,7,8,12,7,567,385,338,204,322,107,243,427,971,1548,874,449,271,114,23,9,7,7,2,2,3,2,548,453,304,117,91,75,106,194,326,468,357,277,201,51,5,2,0,2,3,2,0,0,1070,581,183,92,35,43,49,67,120,319,98,71,22,2,1,0,-2,1,9,7,5,6,383,297,254,48,33,30,34,40,50,85,26,22,6,17,0,2,0,0,4,1,2,3,354,274,261,44,32,28,32,40,49,45,25,20,4,8,0,3,0,0,4,2,2,3],
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
