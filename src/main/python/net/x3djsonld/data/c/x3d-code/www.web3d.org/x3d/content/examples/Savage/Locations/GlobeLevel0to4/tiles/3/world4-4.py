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
    GeoViewpoint(description='GeoViewpoint_3_44',geoSystem=['GDC'],position=(11.208336350785146,22.458339368270288,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(11.208336350785146,22.458339368270288,0.0),range=4495500.0,child1Url=['../../tiles/4/world8-8.x3d'],child2Url=['../../tiles/4/world8-9.x3d'],child3Url=['../../tiles/4/world9-8.x3d'],child4Url=['../../tiles/4/world9-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world4-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-0.041663984490980965,-0.04166130228196607,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[-4342,-4253,-4480,-4338,-1921,149,450,499,336,377,523,567,562,2183,1339,1237,2846,735,3,-3313,-4112,-4917,-4539,-4106,-3551,-831,168,549,472,322,368,436,562,555,2008,1173,1146,2238,825,35,-2813,-3925,-4854,-4810,-3948,-3237,-148,693,313,347,314,342,423,441,561,1908,1320,1134,2187,859,122,-534,-3547,-4918,-4648,-4092,-507,-827,479,521,425,329,357,430,443,682,999,1192,1134,1601,1836,132,18,-3063,-4954,-4493,-3962,-3161,-1918,676,510,541,335,344,427,409,542,835,1065,1037,942,675,195,59,-657,-4865,-4504,-3903,-2929,-1942,568,711,540,351,412,393,526,696,867,1117,1043,743,872,493,117,86,-4762,-4280,-3568,-820,791,615,697,641,499,430,502,542,677,734,967,1053,494,907,625,244,389,-3959,-3825,-1696,16,-2,752,663,631,473,391,489,590,641,708,710,721,462,1209,1165,276,407,38,-2803,-1214,18,197,891,704,655,619,438,626,622,676,589,473,443,1114,1436,1365,633,320,86,57,54,157,51,815,962,1249,496,576,587,692,589,501,419,416,1862,1592,1161,534,544,150,149,273,204,86,203,494,543,409,457,749,732,580,416,409,413,1896,2897,1819,916,917,146,324,428,150,381,115,318,429,474,392,558,1017,482,399,403,402,1816,2541,1041,1465,1164,160,406,291,255,951,568,577,335,351,401,436,528,425,403,411,422,855,1299,1000,959,761,190,347,209,458,570,303,374,307,363,423,478,536,446,491,545,466,818,2197,1068,581,-1062,302,271,227,455,447,361,300,296,341,453,579,783,509,532,1036,455,573,2455,812,266,-779,286,219,269,316,432,344,296,292,298,404,757,1734,605,618,448,427,518,1599,762,-17,514,284,235,292,413,472,376,291,336,294,392,1085,1250,740,551,412,411,547,1089,-109,-223,2544,299,297,320,465,475,426,338,334,281,390,1009,847,1118,501,575,447,447,720,-43,-4,2796,298,391,327,441,484,411,413,294,201,377,651,676,716,409,513,444,400,636,0,-4,2035,327,383,328,366,1284,422,542,354,335,352,802,645,538,388,377,416,512,1104,-1223,81,1154,446,555,387,387,792,416,482,421,465,392,559,679,577,388,320,388,586,-4,-395,2096,1030,420,548,397,388,939,416,479,453,475,406,542,685,563,372,301,382,707,-14,-328,1975,1031],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
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
