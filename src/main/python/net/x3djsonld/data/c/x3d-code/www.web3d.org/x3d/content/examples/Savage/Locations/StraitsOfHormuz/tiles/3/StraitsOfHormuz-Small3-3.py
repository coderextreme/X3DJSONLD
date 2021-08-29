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
    GeoViewpoint(description='GeoViewpoint_3_33',geoSystem=['GDC'],position=(26.23356479529115,56.180963250426785,29163.6915586987),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(26.23356479529115,56.180963250426785,0.0),range=34996.43,child1Url=['../../tiles/4/StraitsOfHormuz-Small6-6.x3d'],child2Url=['../../tiles/4/StraitsOfHormuz-Small6-7.x3d'],child3Url=['../../tiles/4/StraitsOfHormuz-Small7-6.x3d'],child4Url=['../../tiles/4/StraitsOfHormuz-Small7-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/StraitsOfHormuz-Small3-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.1214698558067,56.03032222992296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0143467635,zDimension=22,zSpacing=0.010675709,height=[1,2,1,2,0,4,3,17,91,384,1081,866,448,557,447,83,645,323,946,720,133,93,2,0,1,2,3,3,0,248,202,383,778,349,990,537,666,82,218,587,952,944,176,174,0,1,0,0,0,2,2,87,38,139,842,439,130,503,146,60,104,716,375,958,166,145,0,0,2,1,1,0,1,3,3,104,829,594,142,277,46,56,404,318,253,626,336,209,0,1,0,0,0,1,3,4,3,113,623,713,277,40,38,296,52,167,126,591,51,28,1,0,1,1,1,0,0,0,6,4,158,669,556,67,25,25,330,547,572,609,10,38,2,2,1,1,1,1,2,2,4,4,105,589,432,347,19,28,450,330,674,71,258,335,1,0,4,0,1,0,1,1,2,6,3,687,497,17,11,7,362,115,34,0,82,92,0,0,1,0,2,1,2,3,2,3,108,500,452,63,65,3,267,88,7,0,0,0,0,0,0,2,0,0,0,1,0,2,4,338,369,3,173,17,76,31,24,398,65,44,2,1,0,2,1,3,3,3,3,3,1,261,281,13,4,-4,0,15,4,199,510,216,0,0,0,1,2,2,2,5,0,3,5,187,216,4,5,4,2,0,-2,472,261,256,0,0,1,0,1,1,0,2,1,1,3,2,147,2,1,3,5,-1,5,155,287,361,1,0,2,0,2,0,2,2,3,1,2,3,79,1,2,3,3,0,0,1,213,333,1,0,0,1,2,2,1,0,2,1,3,2,2,2,-3,5,5,3,6,58,391,443,2,1,1,0,0,0,2,1,4,0,3,1,4,3,5,4,2,2,4,1,374,386,3,1,1,3,1,1,1,2,2,3,0,4,1,1,3,4,4,5,5,2,68,32,1,2,3,0,0,0,1,0,1,2,0,2,4,3,2,6,0,7,4,0,3,1,3,2,0,0,1,3,2,1,2,3,4,1,3,1,3,6,4,6,6,3,188,214,1,0,2,2,0,-1,3,2,5,2,2,3,1,6,7,6,5,8,1,2,4,5,1,2,1,0,2,0,3,3,3,0,2,3,3,6,5,5,3,1,4,3,3,3,1,1,1,0,1,0,2,3,3,1,3,3,4,6,4,5,3,1,3,3,4,4],
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
