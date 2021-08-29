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
    GeoViewpoint(description='GeoViewpoint_2_11',geoSystem=['GDC'],position=(26.1214698558067,56.03032222992296,58327.3831173974),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(26.1214698558067,56.03032222992296,0.0),range=69992.86,child1Url=['../../tiles/3/StraitsOfHormuz-Small2-2.x3d'],child2Url=['../../tiles/3/StraitsOfHormuz-Small2-3.x3d'],child3Url=['../../tiles/3/StraitsOfHormuz-Small3-2.x3d'],child4Url=['../../tiles/3/StraitsOfHormuz-Small3-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/StraitsOfHormuz-Small1-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.8972799768378,55.729040188915306,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.028693527,zDimension=22,zSpacing=0.021351418,height=[0,0,0,1,0,1,1,3,3,1,2,7,707,301,650,1257,660,438,986,998,517,486,0,0,0,0,0,0,1,0,0,1,1,6,561,1350,757,1476,788,665,727,592,1092,1085,0,2,0,0,0,1,2,1,0,4,2,0,488,552,1401,1330,1277,1062,558,1201,1106,1097,2,1,1,0,1,1,1,0,4,2,2,6,275,306,716,1659,1439,1583,763,1411,1241,1164,0,0,0,0,0,0,0,0,0,1,4,3,107,177,147,477,1173,1452,1122,1402,1149,1017,0,0,1,1,-1,0,0,1,-2,2,0,1,60,794,568,1606,1377,1280,1576,1481,1159,885,1,0,0,0,-1,-3,0,1,1,1,3,0,7,67,254,1144,909,744,1103,629,195,241,1,1,0,0,0,0,0,0,0,0,0,2,5,610,195,795,556,361,826,202,221,155,0,1,0,0,0,0,-1,2,0,0,2,2,3,36,709,933,433,460,554,133,137,135,0,0,0,0,0,1,0,1,0,1,2,0,3,435,55,1127,661,211,491,674,117,46,0,1,0,0,0,0,0,1,0,2,0,3,2,0,190,821,982,699,210,958,182,164,0,1,0,0,1,2,1,1,1,0,1,0,1,0,3,861,142,43,408,153,336,131,0,0,2,0,0,0,0,0,0,2,0,1,0,1,2,69,536,26,490,671,17,19,0,1,0,0,0,1,3,2,1,0,0,0,1,1,2,2,535,9,337,18,17,109,1,0,0,1,0,2,0,3,0,0,1,2,1,1,1,4,348,136,118,30,78,104,1,0,2,1,0,3,0,2,0,2,1,0,1,1,2,5,212,0,2,-7,208,282,1,0,0,0,1,0,0,1,0,1,2,0,0,3,0,2,56,3,5,5,456,551,1,1,0,2,0,1,0,0,-1,2,1,0,1,2,0,0,2,5,5,2,330,278,0,2,1,2,1,1,0,0,1,1,2,1,1,3,1,0,4,5,8,5,4,2,2,1,0,2,0,1,0,2,1,1,3,-1,2,3,2,4,4,6,4,7,4,4,2,3,0,0,0,1,1,3,2,2,0,0,2,4,2,3,3,4,3,5,3,2,2,2,0,1,0,1,1,3,2,1,0,0,2,3,2,2,4,4,4,5,2,3],
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
