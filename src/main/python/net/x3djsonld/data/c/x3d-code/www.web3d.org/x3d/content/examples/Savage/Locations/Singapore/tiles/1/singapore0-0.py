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
    GeoViewpoint(description='GeoViewpoint_1_00',geoSystem=['GDC'],position=(1.2821169622239519,103.70474027303216,20508.13489822758),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(1.3519706612479037,103.81964454606431,0),geoSystem=['GDC'])),
    GeoLOD(center=(1.2821169622239519,103.70474027303216,0.0),range=32813.016,child1Url=['../../tiles/2/singapore0-0.x3d'],child2Url=['../../tiles/2/singapore0-1.x3d'],child3Url=['../../tiles/2/singapore1-0.x3d'],child4Url=['../../tiles/2/singapore1-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0.6,0.6,0.6)),
            texture=ImageTexture(url=['../../images/1/singapore0-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2122632632,103.589836,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=27,xSpacing=0.0088387905,zDimension=28,zSpacing=0.005174348,height=[1,1,7,0,14,4,0,0,-1,5,4,1,1,0,-1,6,0,-3,4,1,1,-5,3,7,7,7,4,1,3,4,6,3,0,0,0,6,0,4,4,1,4,1,11,3,0,11,5,14,19,0,1,3,0,3,0,7,3,16,3,2,4,0,0,0,6,10,1,2,2,9,7,5,69,25,39,31,5,4,1,3,2,9,2,3,6,0,0,7,2,0,0,6,11,4,8,0,2,1,6,59,10,6,3,0,2,2,1,1,15,5,1,1,2,4,2,0,1,0,3,2,8,5,2,6,5,5,20,-5,11,1,3,4,12,2,3,14,1,9,4,3,-1,2,0,5,0,2,4,3,9,0,9,9,2,7,-22,0,3,0,0,3,2,-2,4,2,6,2,5,-1,6,4,-1,6,1,-1,0,9,0,7,3,-4,12,-22,-5,9,-2,8,4,0,4,2,6,2,0,0,0,2,2,0,3,3,4,7,36,63,4,3,0,9,0,-5,9,10,4,2,9,6,10,4,0,7,11,-1,0,8,4,1,0,3,5,7,19,47,3,1,5,6,-9,9,2,7,13,5,14,4,1,0,4,4,0,0,2,3,0,7,4,9,12,-8,9,1,7,15,1,-8,17,6,21,8,10,17,6,3,6,14,1,10,0,3,3,-7,9,0,7,21,8,6,8,18,11,1,17,9,14,14,32,13,7,3,-3,10,5,8,0,0,0,7,7,5,7,12,7,6,14,10,1,6,7,0,4,11,8,17,10,74,1,1,5,4,0,10,4,4,6,4,9,8,8,7,13,7,11,7,4,0,4,9,7,15,17,40,29,0,2,6,8,2,8,11,8,5,19,1,8,8,9,9,7,-21,6,3,6,5,2,25,21,39,39,38,1,1,0,-22,4,9,8,5,-3,20,6,5,-15,0,7,5,0,-6,7,15,12,10,34,37,25,31,27,3,0,3,-3,11,7,6,3,6,11,14,3,2,-6,0,0,16,5,6,1,7,30,44,21,28,11,7,2,0,0,3,12,6,14,21,11,8,6,10,20,95,0,-1,11,6,5,12,14,40,28,32,12,23,16,4,5,2,7,4,10,11,4,11,7,8,8,10,11,7,9,6,10,11,7,26,18,16,14,36,34,22,2,4,9,-33,6,7,14,8,11,8,8,14,9,6,5,7,7,9,4,12,20,36,22,40,47,40,30,6,6,0,12,6,3,11,7,10,11,11,16,12,10,9,11,11,5,11,11,21,24,18,34,23,41,36,3,4,5,10,14,-4,8,8,7,14,12,15,14,18,8,7,9,11,12,18,21,32,30,24,26,19,17,7,1,8,7,9,11,8,12,15,13,14,17,14,14,14,10,10,15,12,14,12,53,29,16,15,11,11,1,5,9,3,4,8,12,9,11,13,15,12,11,9,10,15,7,30,13,28,21,38,25,22,14,25,24,8,5,8,2,13,7,9,10,8,20,35,18,9,8,11,20,11,15,12,13,38,37,25,27,29,27,39,4,4,5,24,-9,3,11,1,29,34,34,21,27,13,9,16,10,25,12,19,47,21,26,21,32,37,36,7,10,13,15,2,3,4,4,22,36,57,35,25,23,16,14,18,24,24,38,47,36,38,42,51,26,25,8,11,11,18,11,10,5,36,26,22,38,42,22,13,17,18,17,23,33,19,72,85,61,51,33,48,60,8,10,10,16,11,9,4,32,27,21,32,43,26,13,16,19,16,25,34,21,74,91,62,53,34,50,55],
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
