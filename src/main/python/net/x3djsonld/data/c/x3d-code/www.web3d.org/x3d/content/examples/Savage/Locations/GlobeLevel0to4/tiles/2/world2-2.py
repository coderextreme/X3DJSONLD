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
    GeoViewpoint(description='GeoViewpoint_2_22',geoSystem=['GDC'],position=(22.458336686061273,44.95834003882254,7492500.2232939005),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(22.458336686061273,44.95834003882254,0.0),range=8991000.0,child1Url=['../../tiles/3/world4-4.x3d'],child2Url=['../../tiles/3/world4-5.x3d'],child3Url=['../../tiles/3/world5-4.x3d'],child4Url=['../../tiles/3/world5-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/world2-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-0.041663984490980965,-0.04166130228196607,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=4.5,zDimension=21,zSpacing=2.25,height=[-4705,-4762,-3674,200,381,566,585,1075,1241,-964,-4572,-5007,-2524,-4127,-4350,-2752,-3728,-5112,-5076,-4947,-3944,-4667,-4033,-108,537,313,429,575,1224,1535,32,-4057,-5006,-4604,-4422,-4581,-3101,-4157,-4897,-4883,-4735,-4607,-4945,-4044,-320,553,322,408,700,1222,1671,122,-3394,-4764,-4949,-4736,-3749,-3001,-4111,-4533,-4617,-4519,-3892,-4838,-3945,-1935,622,339,392,567,776,634,534,84,-4416,-5043,-4772,-3262,-3146,-3674,-3845,-4457,-4315,-2785,-3970,-1179,11,693,445,541,653,601,375,1123,338,-2863,-5165,-4065,-2945,-3792,-3819,-2945,-4319,-3984,-3784,126,106,121,952,492,647,567,418,2061,2291,688,-41,-5101,-3653,-4160,-4445,-3691,-1766,1415,-3841,-3005,154,263,1267,237,612,566,447,406,2074,860,997,618,-4812,-3866,-4476,-4538,-3087,-30,5,-3643,-3181,240,213,563,347,402,540,460,558,900,831,-1186,-152,-3281,-3699,-4323,-4304,-997,126,-3155,-3404,-3166,303,267,435,285,305,879,649,432,622,-41,995,-2094,-2830,-4376,-4077,-4091,-1805,700,-3215,-3141,-2894,309,325,519,372,272,742,768,498,426,-1,1145,841,-2526,-3936,-3904,-3795,-1793,583,4,-2903,-2559,348,359,1200,476,397,527,590,303,536,-558,996,447,305,-3350,-3650,-3424,-91,620,295,-2364,-2179,371,565,832,500,1119,568,591,341,451,225,682,300,92,1,-3460,-3062,-95,610,365,56,-146,346,689,824,887,625,495,493,242,36,1068,1010,200,133,554,-3090,-257,33,547,694,459,10,299,812,1270,640,436,345,588,430,-335,910,770,261,-21,-1377,-689,77,52,266,398,90,17,166,478,511,433,581,139,211,74,15,928,562,0,387,457,1178,131,248,585,124,172,2616,354,333,401,600,347,87,-118,95,852,747,344,-27,1637,1087,986,1878,119,228,1130,4981,5443,761,293,212,557,-1143,148,-988,-16,782,742,19,388,2320,628,602,1856,176,686,5457,5517,4647,1041,577,22,-309,-2680,-2161,-2644,-2543,1855,475,50,2120,751,1359,2723,3391,428,4601,4823,4881,5109,-1373,604,512,-655,-3769,-2086,-819,-2538,-154,384,492,1623,1861,1341,539,1559,4590,4259,3246,5136,4769,-128,-2657,-1330,-1154,-2564,428,-127,1189,1367,919,1317,-29,-29,90,193,2971,3942,2535,1178,1175,3468,-52,-2681,-1128,-1420,-2282,891,-64,953,1444,854,1517,-29,-27,86,187,2667,4515,1871,1187,1162,3206],
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
