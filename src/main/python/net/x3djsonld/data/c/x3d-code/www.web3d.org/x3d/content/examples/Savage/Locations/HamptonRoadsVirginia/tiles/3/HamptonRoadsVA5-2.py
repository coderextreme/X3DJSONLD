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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_3_52',position=(36.100052056276816,-76.6085937431017,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.100052056276816,-76.6085937431017,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA10-4.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA10-5.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA11-4.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA11-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA5-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.060208305312024,-76.64020832720055,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[22,7,25,21,12,13,22,25,24,22,27,23,12,11,10,20,13,12,17,14,17,14,22,23,21,18,27,25,18,25,17,18,19,24,19,23,15,17,11,14,17,19,11,14,23,8,21,14,20,20,21,20,15,21,21,12,6,18,23,21,19,18,13,17,10,11,11,18,5,4,21,23,14,14,20,21,22,10,18,13,13,10,15,22,16,15,16,10,12,13,8,9,14,7,5,12,16,0,0,16,19,19,19,9,22,19,13,13,4,6,26,21,13,10,10,12,14,13,13,8,14,9,13,16,8,13,12,8,8,11,28,19,17,11,12,5,6,6,-1,25,13,9,8,5,6,15,9,15,19,16,16,16,10,9,7,4,22,28,24,15,18,13,12,7,5,4,5,8,1,5,12,12,9,16,14,18,14,18,17,16,4,5,23,24,22,21,16,19,15,4,2,5,4,10,7,15,13,15,10,12,15,11,6,11,6,11,22,4,18,19,19,14,16,15,18,2,-2,-1,-1,7,9,10,6,15,14,11,11,11,11,7,11,5,8,16,29,32,20,20,16,12,15,10,11,9,1,0,13,7,8,14,20,13,14,7,5,6,15,1,13,2,18,15,14,12,10,10,7,12,15,14,1,2,2,13,15,13,16,16,15,14,9,9,16,13,-1,15,26,14,14,13,10,14,14,10,9,10,-1,8,16,13,14,15,15,11,17,9,6,9,11,9,6,12,16,10,16,14,12,12,5,12,11,8,8,0,15,14,9,15,10,19,12,13,14,12,14,12,7,6,20,10,13,15,13,13,14,7,6,21,1,-4,9,11,16,12,14,17,17,14,19,14,9,22,23,7,12,18,9,10,19,13,9,7,7,0,-6,11,15,14,9,15,19,16,17,18,15,7,15,15,15,14,11,12,2,8,19,19,11,9,6,3,3,15,14,14,10,8,15,7,19,16,12,8,11,12,8,6,11,12,8,8,9,3,12,11,-3,-2,15,14,12,9,19,15,19,8,11,11,17,14,8,7,6,2,5,12,14,13,13,5,8,2,1,0,12,16,14,15,12,10,9,6,12,6,9,14,9,6,6,4,10,13,4,1,2,-1,0,-2,-2,0,18,18,12,8,12,18,9,9,8,-2,-1,6,0,10,11,9,5,-2,7,4,12,9,-1,-1,0,5,4,-1,4,9,11,8,7,13,11,15,8,2,10,10,9,17,5,6,8,11,11,16,17,0,-1,1,0,0,-1,13,13,8,10,7,11,10,13,1,6,9,5,6,9,10,4,10,12,12,16,11,0,0,0,0,12,0,0,0,8,1,0,1,-1,1,0,2,0,1,10,12,14,9,15,14,17,23,0,-1,0,0,0,0,0,0,0,0,0,-1,0,-2,-1,0,0,0,16,9,14,17,21,19,13,23,28,10,0,0,0,0,0,0,0,0,-1,0,-1,-1,0,-3,-2,0,15,15,17,18,17,23,15,24,25,19,1,0,0,0,0,0,0,0,-1,0,0,-1,-3,-2,1,0],
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
