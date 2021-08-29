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
    GeoViewpoint(description='GeoViewpoint_1_10',geoSystem=['GDC'],position=(1.4218243602718554,103.70474027303216,20508.13489822758),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(1.3519706612479037,103.81964454606431,0),geoSystem=['GDC'])),
    GeoLOD(center=(1.4218243602718554,103.70474027303216,0.0),range=32813.016,child1Url=['../../tiles/2/singapore2-0.x3d'],child2Url=['../../tiles/2/singapore2-1.x3d'],child3Url=['../../tiles/2/singapore3-0.x3d'],child4Url=['../../tiles/2/singapore3-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0.6,0.6,0.6)),
            texture=ImageTexture(url=['../../images/1/singapore1-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.3519706612479037,103.589836,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=27,xSpacing=0.0088387905,zDimension=28,zSpacing=0.005174348,height=[8,10,10,16,11,9,4,32,27,21,32,43,26,13,16,19,16,25,34,21,74,91,62,53,34,50,55,11,10,7,13,6,-14,27,18,23,20,26,20,22,10,19,12,10,28,37,38,51,162,57,54,52,57,60,12,20,15,6,6,5,3,5,15,14,41,18,22,21,16,11,14,23,33,68,35,71,67,44,52,77,43,18,33,33,13,7,2,4,6,11,9,21,27,22,18,21,19,20,36,29,129,26,36,59,56,46,41,31,17,19,49,21,10,15,7,10,7,9,46,19,23,12,8,18,22,32,24,76,37,53,41,56,50,34,32,18,14,52,9,8,7,7,8,3,14,8,12,25,19,15,19,17,25,24,32,40,37,62,47,54,37,35,25,13,12,10,13,10,4,5,12,6,6,14,25,19,12,25,6,27,29,16,33,64,60,69,39,43,42,35,29,12,11,10,12,14,8,16,26,7,17,22,18,11,18,9,19,44,29,39,66,50,50,49,43,44,38,23,10,18,23,25,9,9,2,30,15,20,24,19,21,11,10,23,24,31,41,44,37,43,37,30,36,39,29,12,10,10,19,11,9,11,39,29,30,35,32,12,12,7,31,35,38,56,44,45,37,26,22,12,22,26,30,26,24,17,18,13,2,25,29,32,19,20,21,13,6,19,40,35,9,46,47,42,27,18,12,45,17,18,25,23,22,28,11,6,28,37,38,23,9,27,14,18,8,12,28,47,32,49,39,45,27,19,49,35,20,23,29,25,16,13,7,18,58,37,19,10,5,8,7,11,9,15,51,27,68,44,33,57,37,33,32,27,38,21,32,10,21,17,-2,23,11,17,23,11,7,7,8,11,35,9,34,53,33,31,37,31,26,50,19,32,18,39,37,23,18,16,15,20,16,28,20,9,10,12,9,14,16,63,45,32,28,24,23,24,31,40,34,25,22,13,23,17,5,18,20,17,29,12,17,7,2,9,9,41,31,29,34,25,18,18,22,22,16,18,34,16,29,17,15,13,0,12,14,22,16,13,13,-8,8,8,28,28,30,34,19,28,20,14,8,31,24,25,28,26,29,22,10,11,24,0,25,13,10,11,0,17,9,10,34,19,34,30,27,20,6,10,22,30,15,38,11,17,30,16,19,29,2,3,12,8,8,11,33,3,17,22,24,33,16,10,17,9,15,20,43,24,28,19,30,22,25,24,18,6,-3,7,5,6,-26,6,37,7,27,38,23,16,24,30,20,19,47,32,31,17,21,26,14,30,14,15,10,2,0,5,13,-12,17,7,24,0,32,18,14,10,18,18,38,47,41,32,33,39,24,13,19,13,11,6,5,0,8,10,7,32,31,23,5,4,21,14,15,16,26,39,19,24,38,55,29,27,13,10,14,23,25,19,6,4,24,28,38,33,33,12,8,12,12,12,10,29,21,18,22,67,68,35,29,17,13,12,13,17,14,10,7,45,36,18,24,31,12,8,10,-40,9,8,40,14,17,36,53,35,31,29,21,17,11,12,11,6,7,12,42,36,36,38,28,22,10,71,-51,3,0,21,33,54,56,23,16,22,27,19,11,14,20,12,9,10,12,41,47,42,33,36,22,18,16,12,24,10,16,37,64,24,29,26,24,14,13,8,19,30,8,-1,7,17,48,38,38,33,19,24,10,1,10,9,10,17,38,63,26,29,27,25,14,12,9,17,30,7,-1,6,12,45,41,37,30,19,25,10,2,10,12,11],
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
