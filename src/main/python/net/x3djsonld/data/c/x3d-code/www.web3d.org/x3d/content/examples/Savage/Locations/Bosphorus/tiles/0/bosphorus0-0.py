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
    GeoViewpoint(description='GeoViewpoint_0_00',geoSystem=['GDC'],position=(41.06225017873692,29.030952729968703,114418.53673082369),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.06225017873692,29.030952729968703,0.0),range=137302.25,child1Url=['../../tiles/1/bosphorus0-0.x3d'],child2Url=['../../tiles/1/bosphorus0-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/0/bosphorus0-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.6249052805,28.4375,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.056519307,zDimension=21,zSpacing=0.04373449,height=[0,0,-1,0,-1,0,0,0,0,121,96,76,178,40,58,75,110,227,152,157,287,328,0,0,0,-1,0,0,0,1,0,4,1,0,0,-2,2,4,24,84,45,232,425,406,0,-1,0,-1,0,0,0,0,0,-2,-2,-1,-1,0,1,-2,2,1,2,1,0,5,-1,0,0,0,0,-1,-1,-1,-1,-1,-1,-4,0,0,-2,0,23,-1,0,0,-1,-3,0,-1,0,0,-1,0,-2,-2,0,0,-2,-2,-3,0,0,0,36,187,154,186,275,347,-2,0,-1,-1,0,-2,0,-1,0,0,-1,-2,0,0,-22,66,89,185,90,317,277,283,0,-1,-1,-1,0,0,0,-1,0,0,0,0,0,21,77,40,146,196,215,233,313,316,0,0,0,-1,1,2,0,-1,0,0,-1,0,76,132,371,97,145,150,197,316,296,301,0,-2,0,82,98,45,22,4,0,1,-2,76,157,142,117,126,124,228,271,243,201,200,1,116,10,108,53,17,101,31,64,0,65,118,134,136,101,69,111,178,200,210,227,242,187,73,2,121,152,50,67,103,87,110,94,60,132,317,127,71,59,175,148,143,192,146,140,37,11,159,142,96,161,162,87,73,114,27,173,170,99,126,194,91,122,80,120,181,222,17,105,132,32,116,215,172,25,143,37,20,251,83,15,152,137,96,147,32,63,35,36,68,32,160,119,156,147,138,94,122,165,-4,110,8,47,90,45,32,0,4,0,0,112,68,39,75,140,94,108,94,104,67,67,61,3,1,0,3,0,0,0,3,2,0,112,107,107,135,47,23,61,16,-1,0,0,1,2,0,0,0,0,0,2,0,0,-1,81,132,6,38,42,5,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,10,25,1,0,0,0,0,0,1,1,2,4,0,0,0,0,0,0,0,0,0,2,38,0,-2,-3,-1,-2,3,1,3,0,2,1,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,2,4,3,1,1,0,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,3,3,2,1,1,0,1,0,0,-1,0,0,0,-1,0],
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
