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
    GeoViewpoint(description='GeoViewpoint_3_54',geoSystem=['GDC'],position=(33.7083370213374,22.458339368270288,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(33.7083370213374,22.458339368270288,0.0),range=4495500.0,child1Url=['../../tiles/4/world10-8.x3d'],child2Url=['../../tiles/4/world10-9.x3d'],child3Url=['../../tiles/4/world11-8.x3d'],child4Url=['../../tiles/4/world11-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world5-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(22.458336686061273,-0.04166130228196607,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[420,548,397,388,939,416,479,453,475,406,542,685,563,372,301,382,707,-14,-328,1975,1031,385,634,523,423,1215,420,499,565,832,575,609,763,592,348,365,339,596,-615,-6,1238,876,340,517,621,558,604,472,584,564,1698,653,630,727,544,341,318,364,424,-760,834,1042,820,349,425,593,788,735,574,597,922,830,645,542,542,527,290,256,384,781,-1981,969,981,929,335,401,668,1215,870,866,704,860,558,685,489,504,538,246,156,371,12,-763,1252,938,770,303,414,719,1146,1001,859,688,514,470,569,495,443,717,351,266,299,-4,6,776,1001,992,282,231,1007,1018,1393,719,638,608,393,344,293,369,496,285,409,409,-719,848,1174,835,707,228,195,401,817,741,573,522,480,420,257,197,269,301,219,357,670,-846,525,1276,962,635,184,374,460,539,487,504,348,455,685,207,116,191,151,269,208,171,121,1071,1060,827,490,221,566,533,368,534,624,558,594,222,93,67,114,141,209,309,280,1083,943,914,718,476,399,418,327,265,377,600,607,287,330,27,70,13,-80,167,51,586,919,728,715,543,373,583,486,233,200,258,565,547,91,111,12,89,151,203,72,9,582,1423,557,791,334,226,786,553,320,154,203,582,757,-2,-1158,1,147,192,-1374,-2014,-32,-484,251,845,742,290,19,1063,784,445,109,135,79,28,-781,-2067,-734,528,-2743,-2838,-2798,-1920,-1505,-125,650,736,296,27,986,1491,613,-21,16,-4,-324,-680,-2679,-3500,-1962,-2064,-2723,-3010,-2557,-2264,1020,881,486,136,50,601,1260,1151,884,792,17,-83,-189,-2194,-3030,-3248,-1549,-2316,-2796,-2303,266,-1174,927,247,233,240,-1986,406,921,838,509,-45,-565,-450,-3873,-3123,-4140,-705,-1182,-3732,-2572,-90,-411,356,353,239,682,-2680,-2783,-2560,-1846,-162,-61,-488,-2040,-3212,-3422,823,5,-181,1337,161,1117,80,641,450,384,1837,-113,-1535,-2706,-2858,-2337,-675,-223,-3,-2470,-2861,-352,-547,229,1068,1077,969,1282,1149,736,1775,1788,-2,-854,-1838,-2854,136,-2719,-3575,-1158,-1707,-676,103,-212,8,1175,909,927,1453,1763,1834,1884,1479,1470,-1783,-2514,-2836,460,-2884,-2095,1003,76,417,661,-494,29,-185,1209,1327,872,1946,1665,2341,1453,1362,-1762,-2517,-2801,570,-2832,-2756,1092,104,663,404,-371,86,352,773,1365,621,1485,2585,2317,1811],
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
