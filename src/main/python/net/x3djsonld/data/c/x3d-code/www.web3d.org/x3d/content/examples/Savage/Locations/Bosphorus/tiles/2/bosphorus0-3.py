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
    GeoViewpoint(description='GeoViewpoint_2_03',geoSystem=['GDC'],position=(40.73424150505923,29.47604227744523,28604.634182705922),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(40.73424150505923,29.47604227744523,0.0),range=34325.562,child1Url=['../../tiles/3/bosphorus0-6.x3d'],child2Url=['../../tiles/3/bosphorus0-7.x3d'],child3Url=['../../tiles/3/bosphorus1-6.x3d'],child4Url=['../../tiles/3/bosphorus1-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/bosphorus0-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.6249052805,29.327679094953055,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.014129827,zDimension=21,zSpacing=0.010933623,height=[54,89,80,86,96,160,105,121,234,175,94,121,152,65,127,137,157,165,175,234,272,322,40,54,58,65,71,93,85,214,202,173,107,241,152,116,105,141,159,222,294,286,447,476,25,66,27,108,49,91,163,219,217,224,191,57,113,302,288,293,293,288,273,360,370,348,12,55,62,137,33,123,173,142,187,221,316,61,123,327,242,252,386,386,381,371,423,382,5,32,27,92,27,231,138,174,70,155,217,268,45,171,137,250,220,279,304,306,405,416,-4,0,4,11,15,22,71,91,132,84,83,167,35,156,65,46,54,127,142,163,225,182,1,0,0,5,7,0,1,0,1,5,13,41,16,60,35,5,-4,-1,3,16,22,32,0,0,2,0,1,1,0,4,0,3,1,5,10,7,3,3,0,1,2,0,3,0,1,0,0,0,1,0,0,3,0,1,0,3,2,-5,0,2,1,2,0,3,2,4,0,1,2,0,2,0,0,0,1,2,3,-2,1,3,1,0,0,-1,0,4,3,0,0,0,1,0,0,0,0,1,-1,0,1,0,1,1,0,1,0,0,3,2,1,0,0,0,-1,0,1,-2,1,0,0,0,1,0,1,1,1,0,4,5,6,1,1,0,0,0,15,0,35,-1,-1,0,0,0,-1,6,0,3,-5,3,4,3,5,-4,-1,-1,0,3,39,83,106,93,68,0,-1,4,-5,0,0,3,8,9,-3,7,0,0,-1,11,0,-3,22,56,50,68,85,72,138,91,77,7,2,75,5,41,139,138,74,4,0,4,1,15,19,60,37,63,105,127,163,176,133,160,76,106,10,129,192,142,214,253,99,167,2,4,7,31,39,73,121,179,187,172,176,171,154,131,21,172,182,207,251,265,265,313,-2,3,14,14,76,98,209,175,175,178,156,176,150,161,22,240,282,271,235,333,343,373,11,43,49,53,68,111,188,213,174,145,187,150,117,40,178,237,339,324,245,270,338,402,35,68,70,42,92,129,197,183,169,146,154,151,62,58,194,277,337,323,340,259,296,301,36,58,73,38,90,135,195,185,172,149,145,145,62,60,199,280,342,321,339,259,292,297],
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
