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
    GeoViewpoint(description='GeoViewpoint_3_62',geoSystem=['GDC'],position=(4.661298515593056,100.87606259915093,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(4.661298515593056,100.87606259915093,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca12-4.x3d'],child2Url=['../../tiles/4/Malacca12-5.x3d'],child3Url=['../../tiles/4/Malacca13-4.x3d'],child4Url=['../../tiles/4/Malacca13-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca6-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.343236000485898,100.45856257932074,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[0,0,11,-5,58,1,4,14,19,12,15,21,15,8,10,11,16,21,41,50,269,283,0,0,0,6,7,0,7,15,16,18,15,12,12,8,40,13,34,34,733,80,330,796,0,-8,0,84,10,29,11,20,17,21,12,28,10,17,23,18,22,35,770,65,778,971,-1,0,0,5,25,3,10,15,21,23,23,28,21,28,25,13,21,28,944,175,967,1219,0,2,0,6,44,2,10,15,15,21,15,25,56,19,66,14,39,33,401,151,485,575,0,0,0,0,414,13,9,20,19,62,17,22,60,22,48,22,24,43,188,657,1125,978,0,1,1,2,4,8,15,14,20,56,64,30,113,43,60,25,32,44,64,296,571,1013,2,1,0,1,11,10,11,12,22,61,28,25,46,51,40,30,42,64,211,236,353,499,0,2,1,1,11,10,9,17,18,60,41,76,38,79,43,33,37,67,323,541,950,1065,0,3,2,2,1,6,13,163,221,241,40,44,97,384,58,30,47,60,363,806,1261,1022,0,1,0,-1,14,12,11,93,377,714,47,48,31,185,110,40,56,139,172,653,644,588,0,0,2,2,8,22,100,108,615,502,133,35,48,80,248,41,55,130,368,720,1058,838,0,0,2,0,12,20,17,74,435,997,46,43,266,125,354,50,54,64,246,748,573,900,1,1,0,0,0,7,11,87,725,1154,484,67,73,324,483,59,61,70,178,281,873,829,1,0,1,4,7,17,18,252,849,817,403,64,64,83,419,117,63,90,166,748,1152,1611,0,0,1,0,16,21,11,36,824,617,820,56,53,319,693,500,78,153,491,811,1288,1236,1,0,0,11,21,16,7,67,266,229,355,69,64,101,419,497,79,99,505,1118,1011,1339,0,0,1,-2,12,15,15,26,51,87,62,71,45,159,571,544,90,131,320,901,641,991,2,2,1,10,20,4,6,63,384,703,298,79,65,205,415,104,86,229,492,551,1174,1230,4,1,-1,20,11,5,12,23,482,980,479,114,95,54,133,122,79,117,131,779,835,965,0,9,-1,11,7,8,8,53,1031,954,656,78,43,85,64,103,70,116,221,358,671,614,0,9,0,14,7,8,8,46,1030,900,619,67,44,66,88,100,68,116,215,347,708,595],
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
