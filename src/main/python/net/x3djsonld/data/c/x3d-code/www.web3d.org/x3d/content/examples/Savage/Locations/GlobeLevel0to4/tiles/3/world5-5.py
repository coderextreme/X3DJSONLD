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
    GeoViewpoint(description='GeoViewpoint_3_55',geoSystem=['GDC'],position=(33.7083370213374,67.4583407093748,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(33.7083370213374,67.4583407093748,0.0),range=4495500.0,child1Url=['../../tiles/4/world10-10.x3d'],child2Url=['../../tiles/4/world10-11.x3d'],child3Url=['../../tiles/4/world11-10.x3d'],child4Url=['../../tiles/4/world11-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world5-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(22.458336686061273,44.95834003882254,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[1031,680,375,294,243,221,-1506,-3010,-3609,-3417,-3304,-3019,-41,652,720,359,127,872,-258,-2231,-1950,876,552,336,215,124,135,-3,-3488,-3490,-3182,-2925,-677,-20,572,488,295,321,228,98,-1340,-1349,820,498,274,164,86,115,52,-3316,-3508,-3205,-2424,-88,-2,415,269,368,367,313,136,-85,-217,929,522,240,116,115,66,216,-2609,-3258,-2807,-1836,24,89,129,262,714,579,256,319,20,-1,770,619,150,78,109,173,806,-3285,-2857,-2029,-217,120,13,140,524,325,689,529,599,56,4,992,653,298,82,-19,323,-1974,-2769,-3250,-2858,-61,3,39,283,399,439,533,265,471,132,10,707,725,260,42,-26,128,-257,-19,-17,-4,75,12,57,627,259,316,132,79,65,51,23,635,513,103,-18,-83,-72,463,724,661,649,335,43,234,302,283,167,110,87,61,60,43,490,295,11,-52,532,448,389,597,1330,1402,823,64,167,292,458,168,137,89,666,1202,3443,476,303,-56,24,1061,1314,1067,1551,616,787,1297,95,110,204,253,189,157,2669,3983,5557,5271,373,213,-22,475,1692,1949,993,1721,707,860,1839,980,112,173,227,264,1595,4588,5095,5392,4978,226,16,9,2090,2347,1449,270,1475,627,1071,1549,1570,137,175,258,1130,4888,5461,4992,4919,5055,19,8,44,2329,2242,2149,643,1353,612,895,2435,1447,178,206,618,5215,5572,4992,5221,4891,4527,27,260,1836,1813,1001,871,919,1432,828,1293,2636,2090,209,307,1613,4522,5082,4572,4898,4885,5140,50,1529,2300,1252,759,707,1350,737,2215,2441,2551,3090,369,1976,4160,6044,5018,5618,5376,5290,5540,240,2100,1601,808,959,707,822,1246,861,2529,3243,1583,2099,4180,3316,5411,5084,5045,4989,4980,5118,682,2288,1917,2635,2498,1065,1035,741,450,690,1062,2080,4059,2981,4754,5581,4033,4802,5112,4954,4950,1837,2132,550,-29,-29,1322,1436,202,294,277,294,623,3843,4788,4443,2080,1309,1389,3283,4670,4162,1788,1572,-29,-29,-29,283,135,138,187,239,2452,1093,2670,4211,3671,1240,1203,1215,1212,2492,5030,1479,580,-26,-29,-24,42,75,126,175,256,1904,3334,2166,3875,1275,1134,1117,1076,1039,867,986,1453,401,416,-29,151,221,124,145,172,276,888,335,459,3009,3821,1872,1032,974,923,870,803,1811,217,736,-29,117,166,123,140,173,258,467,349,440,2970,3824,1938,1033,968,917,845,802],
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
