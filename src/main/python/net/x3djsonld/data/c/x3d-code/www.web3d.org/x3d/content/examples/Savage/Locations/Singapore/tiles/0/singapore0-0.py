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
    GeoViewpoint(description='GeoViewpoint_0_00',geoSystem=['GDC'],position=(1.3519706612479037,103.81964454606431,41016.26979645516),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(1.3519706612479037,103.81964454606431,0),geoSystem=['GDC'])),
    GeoLOD(center=(1.3519706612479037,103.81964454606431,0.0),range=65626.03,child1Url=['../../tiles/1/singapore0-0.x3d'],child2Url=['../../tiles/1/singapore0-1.x3d'],child3Url=['../../tiles/1/singapore1-0.x3d'],child4Url=['../../tiles/1/singapore1-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0.6,0.6,0.6)),
            texture=ImageTexture(url=['../../images/0/singapore0-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2122632632,103.589836,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=27,xSpacing=0.017677581,zDimension=27,zSpacing=0.010746723,height=[1,5,14,0,0,1,-1,-1,2,5,3,-6,0,5,0,8,14,4,4,10,9,6,9,10,5,4,9,0,4,8,0,3,7,3,0,8,31,44,9,3,1,5,6,7,4,8,4,4,11,3,7,10,3,2,13,3,1,3,7,0,6,2,-1,0,7,-6,4,1,-5,1,12,11,8,11,8,5,5,6,1,8,4,0,0,0,9,0,0,7,34,7,-2,-1,-1,-18,24,6,2,18,9,4,4,10,1,3,-5,8,4,17,2,0,-12,-4,0,-1,3,2,1,2,6,7,21,12,9,20,1,0,10,4,0,3,10,12,7,34,-11,2,-5,0,0,4,11,9,8,7,5,9,18,11,7,7,12,0,15,9,5,11,3,6,9,11,-1,-11,0,2,-4,7,0,8,7,14,6,5,11,10,51,26,22,-4,6,1,4,3,11,1,7,11,16,-4,-50,0,1,9,10,0,-3,-18,9,0,8,15,46,22,13,11,17,7,3,7,-13,7,11,-1,5,11,5,-4,0,5,7,12,14,12,16,7,7,8,34,25,15,23,18,33,6,13,10,3,3,14,15,6,8,4,0,5,6,10,7,11,9,6,11,7,13,33,24,49,35,15,13,10,10,10,14,16,0,-17,5,3,8,7,4,6,8,12,13,12,16,12,10,10,24,26,11,20,18,8,10,6,12,20,10,10,7,3,6,24,24,5,14,12,8,6,41,8,12,16,10,41,14,20,35,28,12,13,11,26,16,9,8,5,5,12,11,11,6,13,-4,5,26,53,19,22,24,17,41,48,34,37,21,11,22,21,23,19,21,12,8,7,14,5,12,11,8,6,22,32,64,10,14,16,29,83,76,44,33,32,25,29,17,28,25,25,19,14,6,2,5,2,18,39,9,7,8,23,26,10,23,39,40,50,48,22,20,20,20,11,43,17,17,20,10,7,3,6,3,16,57,7,7,0,8,30,12,13,32,35,72,55,45,19,13,28,7,20,24,10,15,1,6,6,0,1,46,7,13,12,25,6,22,26,4,11,31,65,34,31,15,21,10,25,31,7,0,-14,10,11,5,1,0,45,13,12,15,12,27,24,16,14,12,60,29,24,24,15,15,16,14,8,9,2,4,7,0,0,6,3,60,20,32,21,1,61,19,5,18,10,32,32,39,28,11,11,8,5,16,14,4,5,6,-1,9,11,4,38,30,23,20,16,19,17,9,17,10,32,44,32,18,17,10,15,9,-3,12,13,5,8,2,4,11,10,24,16,31,18,17,-1,10,10,8,8,15,30,33,12,10,11,1,-5,10,7,11,11,-3,3,2,0,-2,11,35,15,23,34,16,-1,10,19,2,26,34,12,20,6,-2,-5,11,10,8,15,5,10,4,6,10,5,17,63,25,24,28,15,10,6,6,9,15,19,19,26,9,30,8,8,32,21,25,36,6,12,-7,3,5,28,33,63,40,12,14,17,9,13,14,21,6,10,13,8,9,11,38,31,14,11,27,16,12,-1,8,7,30,16,42,30,21,15,10,9,24,27,27,6,-29,-9,1,9,12,39,30,20,12,26,28,7,-7,-1,2,17,71,29,16,13,24,7,14,35,39,26,5,13,19,21,24,7,25,47,19,17,18,16,8,-7,0,6,16,61,27,17,13,24,7,14,41,38,23,5,13,22,20,25,6,31,47,15,16,19,16,8,-7,0,6],
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
