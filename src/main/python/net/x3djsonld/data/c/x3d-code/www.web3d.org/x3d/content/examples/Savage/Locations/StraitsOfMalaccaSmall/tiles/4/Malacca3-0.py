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
        texture=ImageTexture(url=['../../images/4/Malacca3-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4806733645214747,98.7885625,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[19,141,19,48,21,16,14,16,19,35,34,31,51,79,73,182,208,511,544,843,1661,1696,147,141,27,104,169,69,48,58,21,103,28,28,60,75,99,116,133,374,549,840,1226,1399,6,5,12,14,14,209,11,129,78,43,92,37,221,87,263,362,261,318,516,705,901,1035,5,5,7,14,207,72,16,21,42,80,57,79,210,313,507,319,213,266,317,614,787,864,5,5,3,94,34,10,17,35,80,84,108,216,346,487,718,400,310,449,321,436,744,871,305,80,8,5,7,10,15,285,103,125,249,162,231,503,778,320,418,514,351,537,739,792,211,2,42,4,5,7,32,204,225,227,443,172,288,417,561,609,427,529,578,505,871,1055,3,41,177,3,5,7,85,195,414,547,510,420,340,564,627,617,548,640,564,391,938,948,1,221,8,4,10,16,216,198,317,612,536,693,295,667,650,763,657,696,624,402,798,808,2,3,3,14,15,60,316,395,266,510,753,867,544,783,773,826,719,717,716,620,589,763,0,2,3,2,79,54,150,479,278,567,707,917,694,755,808,847,772,767,717,706,510,710,0,3,2,89,46,151,247,601,417,588,922,973,785,794,800,875,865,829,786,627,527,880,0,2,4,23,64,305,185,278,773,712,1070,1056,1047,810,832,891,839,859,748,497,699,890,4,1,0,0,28,283,401,372,512,1107,921,934,861,856,862,884,862,704,573,515,683,1040,-1,0,3,119,31,75,280,578,615,968,906,901,858,888,899,879,823,608,447,510,882,1112,38,144,165,16,78,221,598,641,745,1053,904,856,891,899,921,906,774,681,472,588,901,944,124,33,26,17,297,611,495,722,712,894,908,829,874,912,943,903,600,551,447,639,822,822,4,65,104,149,421,540,549,578,672,731,859,836,909,959,936,846,657,449,452,826,716,674,138,343,477,301,279,407,568,577,696,795,798,878,949,954,918,781,558,451,546,865,679,634,314,419,473,625,479,537,491,689,702,796,908,934,967,1005,957,642,498,456,593,637,635,637,335,399,599,836,731,725,847,807,780,886,931,982,999,937,838,618,467,492,921,665,595,617,451,361,712,670,676,629,794,756,809,907,969,1014,1001,838,566,525,500,752,952,771,685,708,426,357,727,663,659,617,816,754,809,927,974,1021,979,851,550,513,505,809,952,783,688,677],
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
