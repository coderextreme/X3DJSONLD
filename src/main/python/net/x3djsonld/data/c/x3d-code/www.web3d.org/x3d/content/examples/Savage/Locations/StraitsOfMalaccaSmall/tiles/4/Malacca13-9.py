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
        texture=ImageTexture(url=['../../images/4/Malacca13-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.661298515593056,102.54606267847167,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[392,168,165,281,199,249,562,796,579,638,254,335,329,246,462,796,948,1020,870,913,910,644,256,171,269,287,188,236,421,792,686,411,277,263,419,291,652,679,762,766,665,647,697,963,256,170,203,549,170,184,441,700,1042,451,397,355,545,521,619,920,1191,609,512,507,640,795,209,207,211,324,187,227,390,582,813,569,452,603,508,586,676,1199,908,706,567,452,358,333,240,383,345,298,211,268,391,623,1118,743,378,427,327,279,465,958,878,667,639,829,283,146,475,568,315,354,268,305,397,850,1045,587,352,308,242,519,454,922,1044,913,957,498,369,292,299,297,256,371,296,347,739,1198,821,531,551,544,255,436,867,1387,1137,1311,1094,974,697,519,265,180,361,523,438,460,893,797,838,350,845,505,254,392,548,1008,1199,1341,1330,1154,897,681,219,295,506,1042,796,1042,1137,1007,487,499,605,509,192,360,665,632,680,1109,1382,1142,870,883,216,472,633,1093,1037,1216,1218,920,624,264,280,233,215,490,343,398,461,983,1150,1156,1053,701,478,361,474,825,1112,1045,902,671,386,237,185,191,264,330,312,503,659,849,1133,978,958,694,588,372,482,874,956,755,876,424,264,235,201,165,198,180,477,748,1138,1066,1256,1165,711,600,217,446,665,699,761,732,693,331,529,281,259,251,238,208,307,435,716,1238,1200,1108,856,761,245,671,527,447,524,706,450,383,212,217,191,169,516,462,333,525,931,833,739,795,742,388,151,340,391,240,358,665,599,212,165,224,162,182,277,470,478,437,1157,1223,703,469,523,475,131,202,171,194,588,726,630,372,212,156,147,400,570,780,308,472,1101,1026,1102,717,522,300,138,154,196,367,425,557,576,431,253,151,155,237,364,388,281,606,1029,1041,998,771,557,457,223,150,348,230,339,478,703,452,464,181,414,157,576,287,303,336,809,909,662,646,553,487,618,278,242,232,495,639,674,675,292,204,344,156,702,211,208,473,968,903,517,690,619,635,265,260,180,166,282,607,630,755,275,166,146,183,460,240,290,329,552,806,684,401,475,291,215,193,154,343,577,772,349,575,144,150,220,369,494,271,415,670,782,849,918,516,325,135,246,212,142,153,218,404,361,197,163,148,208,670,203,429,550,487,579,746,1087,533,220,71,254,220,146,146,183,431,311,175,160,149,198,670,198,443,522,482,562,743,1081,525,238,83],
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
