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
    GeoViewpoint(description='GeoViewpoint_2_11',position=(36.299270811100776,-76.57697915900283,15863.75038413098),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.299270811100776,-76.57697915900283,0.0),range=19036.5,child1Url=['../../tiles/3/HamptonRoadsVA2-2.x3d'],child2Url=['../../tiles/3/HamptonRoadsVA2-3.x3d'],child3Url=['../../tiles/3/HamptonRoadsVA3-2.x3d'],child4Url=['../../tiles/3/HamptonRoadsVA3-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/HamptonRoadsVA1-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.21958330917119,-76.64020832720055,0.0),normalPerVertex=False,xDimension=23,xSpacing=0.005748106,zDimension=23,zSpacing=0.0072443183,height=[24,27,26,31,36,21,28,22,31,30,28,22,28,19,26,26,25,20,18,20,16,19,18,23,26,16,31,19,6,19,18,22,28,21,19,32,26,28,25,20,24,21,16,24,18,15,17,25,19,19,23,26,20,21,23,21,23,14,21,17,8,16,22,21,19,16,19,21,18,29,21,17,26,13,11,25,34,16,13,17,18,18,17,8,21,24,27,19,21,17,21,11,22,26,32,21,42,14,16,20,22,22,20,18,22,18,13,14,15,34,23,15,11,12,10,33,22,23,33,21,27,-5,16,20,18,13,15,18,19,14,9,22,8,11,14,9,9,11,17,31,17,29,12,20,40,21,11,18,9,-4,10,15,7,8,10,9,17,11,8,8,8,28,27,22,15,15,16,13,21,11,13,16,8,4,1,11,13,17,7,8,6,8,12,25,23,18,22,12,11,11,12,22,14,18,15,1,4,8,9,13,6,13,5,3,-9,9,2,21,28,18,21,21,38,22,23,18,12,21,7,11,5,2,6,6,8,17,12,10,47,12,17,21,23,15,17,26,9,26,12,25,20,16,4,6,-1,-5,5,7,9,9,21,10,8,33,27,33,31,21,29,28,23,32,18,22,7,4,6,3,0,0,4,9,6,7,9,11,35,32,31,24,34,23,32,22,27,19,16,11,1,4,1,5,6,16,7,12,8,19,20,28,32,33,30,27,22,25,31,18,22,17,9,1,2,0,1,6,4,7,9,8,18,24,29,31,26,20,18,13,25,28,9,9,1,0,11,5,0,0,-1,5,12,3,6,9,5,20,21,18,9,13,18,9,6,9,9,9,11,10,-1,0,1,1,-1,6,6,9,6,13,33,44,33,35,35,20,9,13,8,13,17,10,10,9,7,0,0,6,4,3,10,17,13,22,31,29,21,9,9,14,17,24,24,23,18,7,1,0,0,-1,7,5,12,8,17,10,25,18,15,9,12,21,19,21,28,20,24,8,6,0,0,0,4,7,1,12,9,10,13,23,29,9,14,18,22,29,26,29,23,18,8,6,4,0,1,0,0,0,10,7,3,6,9,18,17,22,13,20,27,24,32,18,21,19,7,5,3,11,7,1,0,0,0,0,0,22,23,23,24,29,23,33,25,24,19,20,15,5,1,6,6,5,16,4,0,0,0,0,27,32,21,25,31,24,25,24,35,19,18,12,5,-2,6,8,11,16,3,0,0,0,0],
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
