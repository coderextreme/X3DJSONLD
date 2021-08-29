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
    GeoViewpoint(description='GeoViewpoint_2_21',position=(36.13989580724161,-76.57697915900283,15863.75038413098),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.13989580724161,-76.57697915900283,0.0),range=19036.5,child1Url=['../../tiles/3/HamptonRoadsVA4-2.x3d'],child2Url=['../../tiles/3/HamptonRoadsVA4-3.x3d'],child3Url=['../../tiles/3/HamptonRoadsVA5-2.x3d'],child4Url=['../../tiles/3/HamptonRoadsVA5-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/HamptonRoadsVA2-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.060208305312024,-76.64020832720055,0.0),normalPerVertex=False,xDimension=23,xSpacing=0.005748106,zDimension=23,zSpacing=0.0072443183,height=[27,32,21,25,31,24,25,24,35,19,18,12,5,-2,6,8,11,16,3,0,0,0,0,27,29,32,34,30,31,22,22,12,11,14,13,1,7,7,8,15,12,11,5,0,0,0,19,24,32,37,28,23,25,29,9,19,11,9,3,6,9,14,14,21,6,2,0,0,0,24,26,29,26,25,24,18,17,30,19,13,4,7,10,16,17,10,11,13,11,10,10,-1,30,27,21,15,12,20,20,21,23,19,22,15,6,9,8,2,2,10,4,10,13,7,6,23,23,21,22,23,23,23,33,28,21,16,15,3,5,12,8,9,-2,0,5,6,9,13,25,22,24,22,33,26,22,16,18,18,15,12,8,9,9,9,7,6,8,7,0,7,7,27,31,24,24,27,26,17,20,24,14,21,16,10,10,8,6,7,9,19,6,0,0,0,17,25,22,30,25,28,23,23,18,19,21,19,9,17,6,3,9,1,14,1,10,9,0,12,27,22,23,23,19,13,14,13,25,22,20,8,14,11,8,13,6,12,1,11,8,12,28,13,17,25,17,11,17,5,18,20,13,9,5,8,2,17,12,9,6,12,16,10,8,24,15,20,17,9,15,12,10,17,16,10,12,15,11,10,17,14,9,15,13,12,6,15,28,17,14,8,-3,4,10,17,18,16,9,8,16,11,7,14,7,19,8,12,21,15,10,19,14,15,-2,2,9,10,14,11,7,22,15,17,11,6,12,10,19,8,13,2,2,-3,19,9,11,16,-1,2,18,15,13,11,3,6,1,8,6,7,16,15,18,8,0,5,6,11,11,11,10,13,14,15,15,16,11,10,3,9,9,10,12,12,5,11,8,2,6,3,8,7,20,4,0,15,10,7,15,11,13,8,10,-1,8,12,2,6,8,8,3,0,0,8,16,5,3,5,14,18,0,6,7,5,6,8,9,7,8,12,8,0,0,1,0,0,4,14,7,0,0,6,8,10,7,10,10,11,6,0,4,7,21,0,0,0,0,0,0,13,4,14,21,0,0,0,0,0,0,0,0,1,1,10,11,0,0,0,0,0,0,0,15,19,17,21,13,0,2,4,-1,3,0,0,0,0,0,0,0,0,0,0,0,0,0,14,23,32,23,28,15,9,13,7,11,-1,0,0,0,0,0,0,0,0,0,0,0,0,15,24,32,27,29,14,8,17,8,29,-1,0,0,0,0,0,0,0,0,0,0,0,0],
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
