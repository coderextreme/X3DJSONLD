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
    GeoViewpoint(description='GeoViewpoint_3_72',geoSystem=['GDC'],position=(5.297423545807372,100.87606259915093,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(5.297423545807372,100.87606259915093,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca14-4.x3d'],child2Url=['../../tiles/4/Malacca14-5.x3d'],child3Url=['../../tiles/4/Malacca15-4.x3d'],child4Url=['../../tiles/4/Malacca15-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca7-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.979361030700214,100.45856257932074,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[0,9,0,14,7,8,8,46,1030,900,619,67,44,66,88,100,68,116,215,347,708,595,1,12,10,7,13,5,9,26,417,265,744,101,68,57,91,99,77,112,265,469,363,479,1,11,17,7,4,187,23,66,39,45,745,211,76,67,82,93,71,78,156,434,210,265,8,6,10,9,2,39,18,73,33,137,926,439,67,430,714,284,93,97,256,139,642,600,8,3,0,3,3,16,21,24,39,132,798,611,68,107,738,614,354,163,132,150,515,791,1,1,3,3,4,23,11,44,26,90,676,1056,103,92,690,809,636,104,270,456,348,547,6,3,7,7,8,19,10,58,47,55,385,828,186,73,426,830,837,217,250,865,674,803,2,9,8,14,5,11,29,41,43,221,234,713,236,74,141,577,799,330,187,356,514,573,4,4,63,5,9,17,31,43,39,271,355,611,647,95,84,365,222,244,357,495,1144,910,7,9,46,42,24,16,21,24,129,226,478,424,691,99,73,146,191,144,449,761,1177,1314,5,14,23,220,9,16,24,52,86,663,1099,1130,317,176,138,114,470,183,230,731,1267,1537,3,10,49,225,24,18,30,67,61,837,735,1278,719,623,248,81,196,175,177,1072,866,897,6,11,169,91,46,43,28,31,49,358,460,977,1588,1079,291,94,148,112,194,434,637,655,7,15,45,342,105,86,40,47,55,237,646,826,1617,709,218,159,331,124,148,541,492,473,4,32,31,150,73,201,22,41,61,473,920,683,1242,569,187,155,405,153,156,222,791,508,5,33,45,83,214,456,61,42,317,271,644,958,976,547,210,266,368,135,133,183,393,231,8,223,58,33,489,146,47,91,417,479,487,1004,758,657,186,480,254,227,317,259,336,343,8,17,24,72,250,101,56,76,245,1064,1031,916,895,673,495,233,141,120,287,303,177,190,10,29,19,32,52,38,47,55,436,565,1804,848,508,407,543,715,154,177,181,295,500,278,4,21,23,42,48,33,51,72,546,546,1770,815,501,396,662,275,191,274,142,240,392,358,7,12,25,28,25,33,27,44,392,1112,918,1084,366,487,578,476,174,134,152,230,585,463,8,12,25,34,24,31,26,40,405,1137,872,1068,385,486,563,501,178,130,157,233,607,484],
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
