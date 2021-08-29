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
        texture=ImageTexture(url=['../../images/4/Malacca8-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.070985940057265,101.7110626388113,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[43,70,59,80,70,57,248,293,192,156,388,283,610,934,581,379,575,402,145,191,199,106,58,106,69,56,45,106,104,360,275,146,224,487,781,776,810,523,456,311,409,293,170,182,108,65,103,96,102,275,237,384,362,222,292,323,359,591,721,521,285,280,198,135,136,340,31,53,87,119,230,48,169,183,214,264,141,229,335,550,553,384,476,273,130,242,233,363,32,49,65,86,369,115,60,79,93,349,245,359,396,428,445,557,735,261,423,221,628,450,67,44,52,60,95,114,67,155,128,450,178,488,321,767,378,675,565,153,746,449,744,568,41,42,51,56,79,229,114,66,264,284,116,131,600,850,398,268,194,387,998,772,799,646,32,45,50,71,108,202,206,114,343,124,115,279,906,909,332,208,295,662,1065,918,548,409,50,43,67,165,217,442,195,367,95,230,181,388,922,586,273,391,540,822,936,698,576,664,61,48,153,65,300,471,267,185,167,323,256,527,757,639,409,715,553,893,854,693,704,581,52,52,67,76,196,438,416,164,167,204,245,607,1030,786,533,747,711,776,726,428,613,463,48,65,141,114,133,472,542,280,173,229,260,371,882,569,651,904,792,969,742,412,381,396,59,85,269,136,188,443,627,345,364,665,524,503,887,603,1010,997,768,712,524,327,529,381,138,71,91,137,236,247,471,452,676,852,819,865,736,662,841,758,611,549,495,688,267,184,235,119,136,130,134,217,357,660,1089,1186,1377,915,714,820,904,763,535,668,273,320,123,206,333,192,269,272,192,311,403,885,1051,1025,1194,725,933,923,951,724,486,509,247,135,136,102,325,245,276,433,293,659,796,1006,785,711,605,927,965,722,839,920,622,314,131,117,206,94,250,378,234,480,569,627,669,631,582,470,783,1040,752,612,898,855,486,286,117,118,111,125,244,336,355,394,712,910,542,434,419,615,1018,935,863,431,851,825,365,318,90,254,92,138,268,675,750,432,884,824,482,476,399,814,766,821,731,449,825,612,261,145,88,138,106,116,381,767,925,784,771,477,339,307,398,555,732,504,679,371,580,535,243,126,89,107,91,113,561,809,1233,1113,755,585,574,374,469,283,426,527,498,439,170,232,122,86,150,81,100,96,549,801,1260,1081,748,605,572,398,427,277,442,567,492,449,174,227,112,90,144,79,97,97],
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
