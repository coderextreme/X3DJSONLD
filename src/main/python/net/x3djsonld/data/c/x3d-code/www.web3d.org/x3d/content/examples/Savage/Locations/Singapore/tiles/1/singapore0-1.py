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
    GeoViewpoint(description='GeoViewpoint_1_01',geoSystem=['GDC'],position=(1.2821169622239519,103.93454881909646,20508.13489822758),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(1.3519706612479037,103.81964454606431,0),geoSystem=['GDC'])),
    GeoLOD(center=(1.2821169622239519,103.93454881909646,0.0),range=32813.016,child1Url=['../../tiles/2/singapore0-2.x3d'],child2Url=['../../tiles/2/singapore0-3.x3d'],child3Url=['../../tiles/2/singapore1-2.x3d'],child4Url=['../../tiles/2/singapore1-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0.6,0.6,0.6)),
            texture=ImageTexture(url=['../../images/1/singapore0-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2122632632,103.81964454606431,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=27,xSpacing=0.0088387905,zDimension=28,zSpacing=0.005174348,height=[4,3,3,0,7,9,9,8,2,6,7,4,4,9,8,8,-2,1,10,5,6,10,7,6,10,9,9,3,3,1,7,1,8,3,3,7,8,11,9,10,7,10,6,3,8,4,5,9,9,5,4,11,0,7,2,1,4,7,30,4,4,7,1,8,9,9,10,6,9,5,5,7,9,10,10,1,3,4,7,8,3,1,0,0,0,5,0,4,2,21,11,3,0,7,5,2,3,7,7,14,9,10,0,6,5,9,7,0,3,3,0,-2,7,0,2,3,4,7,7,7,6,9,3,6,2,6,7,8,1,9,14,8,1,5,6,-2,2,-7,14,13,2,-5,22,0,5,3,8,3,5,6,8,8,7,7,10,9,1,-6,4,-1,4,5,4,28,17,-1,9,-2,14,18,10,9,3,8,4,6,3,3,1,3,6,5,4,4,9,6,9,6,23,6,14,28,4,2,23,26,23,9,2,9,5,5,5,7,7,7,2,3,7,2,2,6,5,10,17,7,14,19,2,6,28,3,2,13,32,3,6,13,-3,5,3,8,8,7,16,8,9,33,8,1,14,-7,9,17,11,8,21,40,1,8,11,-1,10,9,10,6,8,6,6,8,6,11,0,1,13,2,0,10,3,19,7,8,15,8,14,6,2,0,4,10,-5,5,7,4,4,9,8,5,7,0,7,4,2,4,5,9,2,74,9,9,6,7,10,14,0,7,11,-6,0,8,9,7,5,2,7,8,10,7,13,7,2,9,1,8,29,22,24,11,15,17,3,0,8,-6,1,0,-5,-2,9,1,7,6,8,27,7,9,7,13,6,20,-58,38,38,16,21,2,15,6,8,12,13,8,21,0,17,-3,-15,7,5,20,2,11,5,9,9,2,7,-22,27,20,39,13,5,11,10,8,11,4,12,1,13,-19,8,10,4,12,-8,5,39,14,11,10,4,9,2,7,21,17,27,28,12,7,9,13,19,5,10,12,0,14,10,8,9,5,1,2,10,10,11,-2,15,-9,16,20,30,26,23,14,21,13,12,9,17,13,14,0,10,0,12,0,14,4,12,-6,-4,7,8,-1,-2,22,29,50,24,20,18,10,6,8,8,12,11,16,19,16,2,4,7,17,-2,3,7,7,1,0,11,1,30,32,32,14,13,10,8,12,7,9,8,13,14,10,25,23,4,-10,0,2,0,-3,-1,-14,11,0,9,36,18,19,10,8,17,11,12,10,9,10,10,12,13,18,14,24,13,8,4,5,4,14,0,5,0,4,17,15,11,15,10,17,4,14,9,10,9,10,7,9,21,9,5,9,16,6,7,6,5,3,10,12,3,11,16,19,24,13,13,11,9,12,9,9,11,16,15,13,8,13,10,7,10,12,6,4,7,0,19,24,24,33,11,9,11,9,18,9,14,12,17,19,22,18,8,10,5,11,11,5,6,6,3,12,9,0,20,39,29,13,23,30,8,14,17,8,10,25,26,26,16,13,10,7,8,2,5,9,2,6,3,5,11,11,36,25,14,28,15,12,24,17,11,12,39,23,16,12,14,20,15,9,9,7,13,4,1,-13,16,11,10,25,36,24,14,16,11,22,18,21,18,41,22,19,16,15,21,13,13,1,8,10,6,6,3,13,3,13,60,26,16,14,15,20,21,31,31,22,24,25,17,19,17,24,27,20,12,27,11,9,5,7,-16,1,9,55,27,17,14,14,20,20,31,32,21,22,25,16,19,17,24,23,19,12,25,11,9,5,6,-15,2,8],
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
