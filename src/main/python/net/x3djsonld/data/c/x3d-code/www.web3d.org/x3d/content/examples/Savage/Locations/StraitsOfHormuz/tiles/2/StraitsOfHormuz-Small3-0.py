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
    GeoViewpoint(description='GeoViewpoint_2_30',geoSystem=['GDC'],position=(27.018229371682303,55.42775814790765,58327.3831173974),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(27.018229371682303,55.42775814790765,0.0),range=69992.86,child1Url=['../../tiles/3/StraitsOfHormuz-Small6-0.x3d'],child2Url=['../../tiles/3/StraitsOfHormuz-Small6-1.x3d'],child3Url=['../../tiles/3/StraitsOfHormuz-Small7-0.x3d'],child4Url=['../../tiles/3/StraitsOfHormuz-Small7-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/StraitsOfHormuz-Small3-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.794039492713402,55.1264761069,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.028693527,zDimension=22,zSpacing=0.021351418,height=[130,111,132,250,210,66,37,7,4,6,5,4,1,3,-13,0,0,0,3,4,0,0,522,508,566,656,805,624,378,187,7,9,2,4,4,4,4,3,0,12,0,0,0,2,314,417,498,618,657,631,370,46,19,11,5,6,4,0,1,7,5,-4,1,4,8,-2,94,82,90,126,153,159,52,55,15,11,9,6,6,2,3,1,-2,-1,3,3,-4,-30,77,62,52,52,61,36,25,22,17,14,11,5,4,-2,2,7,7,-9,2,2,5,10,162,100,64,68,59,38,33,33,27,28,23,13,5,4,5,4,3,0,14,6,0,21,105,93,88,82,72,53,62,53,51,43,35,23,9,14,9,10,7,3,6,1,1,-1,149,132,107,109,88,68,94,85,82,76,54,35,21,42,22,17,0,3,-3,-1,0,4,219,183,139,129,106,92,120,115,151,143,99,106,206,100,62,111,25,4,6,0,3,6,341,253,177,149,117,131,147,146,221,252,483,613,561,234,221,156,136,79,6,6,8,0,621,556,233,184,154,134,239,267,287,479,610,637,494,364,298,273,489,307,71,19,14,12,676,443,240,218,272,384,475,429,754,1082,731,736,954,752,472,613,730,667,360,77,29,25,432,357,266,264,285,382,576,571,1069,1326,1382,931,797,279,504,262,559,836,858,306,518,558,684,541,618,469,499,605,553,688,1097,1017,754,712,257,186,191,212,316,663,971,816,499,390,1030,849,872,840,1025,859,904,791,701,597,592,274,140,181,128,242,190,233,516,390,374,342,1030,923,761,592,724,578,602,374,316,234,210,182,113,80,238,344,390,152,160,85,32,25,805,494,376,352,334,325,247,227,191,174,173,102,84,221,218,332,309,214,42,14,12,14,405,419,373,349,309,237,225,171,142,117,124,110,219,134,98,56,64,44,22,12,14,14,549,889,965,531,563,628,595,586,443,124,127,228,322,152,77,44,36,29,18,22,16,17,505,671,726,426,371,497,653,584,346,117,214,334,310,99,65,40,35,33,37,37,25,25,237,297,235,238,177,187,154,135,144,143,236,301,150,75,51,44,46,53,55,42,49,45,238,302,231,238,180,184,150,136,144,146,242,296,147,74,50,44,46,55,55,43,50,45],
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
