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
    GeoViewpoint(description='GeoViewpoint_1_11',geoSystem=['GDC'],position=(1.4218243602718554,103.93454881909646,20508.13489822758),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(1.3519706612479037,103.81964454606431,0),geoSystem=['GDC'])),
    GeoLOD(center=(1.4218243602718554,103.93454881909646,0.0),range=32813.016,child1Url=['../../tiles/2/singapore2-2.x3d'],child2Url=['../../tiles/2/singapore2-3.x3d'],child3Url=['../../tiles/2/singapore3-2.x3d'],child4Url=['../../tiles/2/singapore3-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0.6,0.6,0.6)),
            texture=ImageTexture(url=['../../images/1/singapore1-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.3519706612479037,103.81964454606431,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=27,xSpacing=0.0088387905,zDimension=28,zSpacing=0.005174348,height=[55,27,17,14,14,20,20,31,32,21,22,25,16,19,17,24,23,19,12,25,11,9,5,6,-15,2,8,60,28,26,24,12,26,26,30,16,18,17,28,16,25,14,25,23,27,7,24,5,8,5,4,3,2,1,43,37,25,12,30,28,28,15,11,8,16,33,18,17,14,15,16,21,11,13,5,11,7,6,6,2,6,31,15,20,26,31,17,31,19,15,11,19,43,17,15,14,11,18,24,25,2,2,8,7,26,1,3,3,32,24,33,31,38,13,29,22,13,19,11,33,22,11,16,9,25,17,27,6,10,12,6,-41,3,3,4,35,36,31,19,23,14,18,32,12,9,11,20,17,24,12,9,15,16,8,3,29,13,2,4,5,1,2,42,28,33,15,16,28,19,17,13,17,21,9,19,19,21,7,10,8,16,11,12,9,4,3,-1,0,0,44,31,26,17,19,20,22,16,25,17,11,30,7,8,2,0,4,-2,24,7,9,14,5,6,7,1,0,36,21,13,26,26,12,11,6,27,27,12,7,6,8,3,18,-7,11,13,9,3,-6,0,11,2,3,1,12,18,7,16,20,21,20,15,16,25,23,7,14,15,0,1,-34,-3,6,2,6,0,4,0,14,2,3,12,9,8,10,13,18,10,8,11,14,13,7,6,12,23,0,4,6,6,0,17,3,0,4,9,3,6,19,14,7,10,11,9,17,14,9,4,16,10,8,10,9,0,1,6,6,6,-2,0,9,8,11,11,2,37,14,29,13,12,14,15,6,9,7,29,1,13,5,10,9,5,5,5,9,9,0,-1,14,11,11,11,31,14,19,16,8,11,8,12,10,10,23,0,9,7,3,12,9,5,5,6,0,1,8,25,11,11,10,23,16,12,18,10,5,7,14,10,11,1,4,38,12,20,9,11,5,6,0,0,12,5,14,9,11,10,18,23,10,19,25,14,6,11,6,-18,19,20,9,11,24,6,14,12,10,1,0,5,7,0,4,12,0,20,18,24,9,21,7,4,6,31,1,10,8,3,10,15,10,11,12,27,12,9,6,0,2,4,4,0,20,18,14,9,8,4,11,7,6,8,9,6,7,7,13,17,18,19,12,9,11,5,8,8,3,10,5,17,15,11,5,9,4,25,8,10,9,10,17,10,12,17,18,10,10,14,12,12,7,8,3,-1,5,10,30,6,14,10,28,-2,-14,13,6,9,12,23,20,24,21,18,10,15,10,8,7,8,17,8,0,6,12,18,35,9,7,18,29,1,14,14,10,31,38,31,26,19,9,8,30,16,8,7,10,16,6,0,3,10,16,28,19,2,-15,14,5,10,19,20,27,33,22,9,12,5,16,25,24,17,5,18,8,6,-6,4,7,10,9,5,8,14,10,8,10,21,30,37,28,25,25,15,12,42,50,33,23,20,19,6,6,-2,18,11,8,-4,-1,10,6,13,10,14,11,31,42,25,31,24,9,17,19,48,47,16,9,15,7,-4,-1,9,13,0,-7,3,5,15,10,7,14,21,45,41,29,38,18,11,10,12,30,23,26,16,9,11,-7,5,0,5,10,7,4,16,13,43,13,13,17,24,39,35,33,12,12,11,27,30,16,8,18,11,3,-7,6,-1,-1,10,16,13,22,11,28,18,8,8,31,37,45,11,13,15,17,39,20,15,20,19,14,2,-8,0,0,6,11,18,12,23,10,30,18,8,9,32,37,44,13,12,16,18,39,21,18,18,19,13,2,-8,1,0,6],
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
