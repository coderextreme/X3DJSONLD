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
    GeoViewpoint(description='GeoViewpoint_1_10',geoSystem=['GDC'],position=(26.794039492713402,55.729040188915306,116654.7662347948),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(26.794039492713402,55.729040188915306,0.0),range=139985.72,child1Url=['../../tiles/2/StraitsOfHormuz-Small2-0.x3d'],child2Url=['../../tiles/2/StraitsOfHormuz-Small2-1.x3d'],child3Url=['../../tiles/2/StraitsOfHormuz-Small3-0.x3d'],child4Url=['../../tiles/2/StraitsOfHormuz-Small3-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/1/StraitsOfHormuz-Small1-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.3456597347756,55.1264761069,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.057387054,zDimension=22,zSpacing=0.042702835,height=[1,7,1,0,10,2,0,2,3,0,2,0,0,0,2,1,2,3,6,4,3,2,1,1,0,0,2,16,4,2,4,0,0,0,1,2,1,1,1,3,2,2,2,0,0,3,1,3,-2,-11,-6,4,0,0,0,0,2,2,4,3,2,1,2,3,3,3,1,1,6,8,8,-1,-7,0,-1,2,2,0,0,1,2,2,1,3,4,2,0,0,0,1,-4,-2,-4,0,0,0,0,2,3,1,2,1,1,1,0,0,0,1,1,1,0,0,1,32,5,-2,-4,0,3,1,0,1,3,2,1,0,0,0,1,3,1,0,1,0,3,20,25,29,134,0,10,0,1,1,3,2,1,1,2,3,1,2,3,3,3,3,2,2,1,8,142,126,0,0,0,-2,4,32,0,1,0,0,2,3,2,3,0,3,0,2,-1,4,-1,14,186,30,27,15,2,2,0,0,0,2,0,2,0,1,355,13,-2,0,2,5,-5,0,-1,21,22,95,7,5,45,0,2,2,2,3,0,2,131,123,180,21,5,4,-2,-12,1,3,0,3,11,41,27,82,4,3,4,1,1,2,338,520,652,365,17,6,4,2,4,0,9,2,14,79,33,24,3,0,1,1,28,41,76,52,62,24,16,11,3,2,6,1,5,1,23,63,12,37,126,10,2,1,4,6,99,85,71,61,51,38,8,7,3,-4,3,27,3,2,9,73,66,21,0,2,6,1,215,138,105,116,146,95,165,61,24,6,5,6,-1,15,-14,0,7,7,9,11,0,3,607,233,156,245,275,579,465,288,452,88,14,-1,1,8,3,0,6,2,1,0,2,3,439,266,280,589,1095,1334,827,489,569,839,500,5,6,3,4,-1,4,8,2,1,1,2,1012,845,1014,927,709,640,141,136,189,567,386,10,7,89,109,7,5,12,6,0,6,3,819,387,327,251,194,163,88,227,313,46,13,22,23,27,52,16,10,-7,2,3,-2,1,526,1028,558,584,433,123,338,76,36,19,16,19,40,60,115,95,38,33,12,12,3,4,239,260,173,173,147,213,153,51,45,56,44,15,35,29,36,44,106,139,41,31,54,85,238,247,175,163,145,225,152,52,45,55,47,16,36,29,34,43,100,138,41,30,56,81],
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
