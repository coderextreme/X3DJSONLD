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
    GeoViewpoint(description='GeoViewpoint_2_21',geoSystem=['GDC'],position=(3.7071109702715814,101.29356261898111,163294.88275609037),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(3.7071109702715814,101.29356261898111,0.0),range=195953.86,child1Url=['../../tiles/3/Malacca4-2.x3d'],child2Url=['../../tiles/3/Malacca4-3.x3d'],child3Url=['../../tiles/3/Malacca5-2.x3d'],child4Url=['../../tiles/3/Malacca5-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/Malacca2-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.070985940057265,100.45856257932074,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.07952382,zDimension=22,zSpacing=0.060583334,height=[1,0,2,-10,2,-2,-2,0,0,-1,3,3,8,5,20,46,73,114,695,580,198,185,0,1,2,2,-5,-2,0,4,-1,0,0,7,37,34,59,34,330,144,585,525,327,360,1,1,1,0,8,13,0,3,2,1,2,14,15,40,86,46,234,95,969,483,549,481,1,0,3,1,0,0,0,2,0,2,2,32,13,37,240,64,176,550,847,606,287,191,0,1,1,0,4,3,0,2,3,0,6,9,65,65,120,303,439,706,920,562,100,104,1,0,1,1,0,0,1,2,1,6,10,11,31,102,83,523,836,490,308,107,105,94,0,1,0,1,0,0,2,0,0,5,6,7,12,124,84,171,1686,455,389,72,85,65,2,2,0,1,3,3,3,2,2,9,21,19,18,21,33,201,875,395,210,67,65,70,0,1,1,2,2,1,5,4,5,21,20,28,56,55,97,478,1121,165,111,192,78,62,0,1,1,1,1,1,1,5,24,20,24,27,71,74,220,480,688,193,80,101,87,95,1,1,0,0,3,0,8,7,22,17,19,47,174,54,553,972,812,133,118,133,148,129,0,1,0,1,0,1,8,4,2,7,29,71,31,70,777,1060,314,164,117,293,844,556,0,0,1,1,1,7,6,6,9,11,23,34,90,498,1227,570,494,132,145,1312,1123,1079,0,3,1,0,2,6,6,5,10,22,53,51,44,474,1196,1047,173,151,180,1305,907,897,0,5,1,14,6,7,4,7,10,35,42,73,369,422,873,775,312,121,357,280,605,593,0,1,0,7,2,4,7,12,14,20,48,58,696,789,723,375,177,143,139,443,113,93,0,18,0,0,5,2,3,12,6,17,38,274,442,835,740,415,176,253,131,103,128,116,0,0,-5,-4,9,9,7,2,16,15,42,584,553,1256,621,199,157,127,119,108,142,168,-3,0,104,5,13,12,14,6,26,38,96,373,1251,1071,645,292,119,120,145,100,84,90,0,31,5,10,19,15,14,8,19,58,242,657,1521,705,631,132,131,85,78,107,107,119,0,8,10,8,16,18,10,25,27,499,865,893,1697,911,171,237,122,192,213,117,115,101,0,7,10,8,15,15,10,21,30,476,894,852,1748,863,168,235,125,189,183,127,123,109],
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
