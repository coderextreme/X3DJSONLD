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
    GeoViewpoint(description='GeoViewpoint_2_12',position=(36.299270811100776,-76.45052082260739,15863.75038413098),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.299270811100776,-76.45052082260739,0.0),range=19036.5,child1Url=['../../tiles/3/HamptonRoadsVA2-4.x3d'],child2Url=['../../tiles/3/HamptonRoadsVA2-5.x3d'],child3Url=['../../tiles/3/HamptonRoadsVA3-4.x3d'],child4Url=['../../tiles/3/HamptonRoadsVA3-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/HamptonRoadsVA1-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.21958330917119,-76.51374999080511,0.0),normalPerVertex=False,xDimension=23,xSpacing=0.005748106,zDimension=23,zSpacing=0.0072443183,height=[18,15,21,22,20,17,19,14,11,16,14,12,15,15,15,18,18,14,21,17,14,19,15,15,19,19,15,14,17,19,16,14,15,18,17,14,18,15,13,16,11,17,16,12,13,17,18,17,11,13,13,16,16,13,15,15,23,19,17,17,17,17,14,17,15,19,15,12,12,11,16,10,11,12,16,19,12,18,20,18,12,19,19,13,18,18,16,15,19,12,23,16,10,13,15,12,16,19,16,12,12,15,15,10,14,12,11,14,20,17,13,13,19,18,19,11,14,11,15,9,16,18,24,19,8,17,25,15,12,16,14,19,14,13,12,12,10,10,8,6,6,7,9,6,18,10,21,19,17,17,20,13,15,16,11,11,14,16,14,14,16,25,24,12,5,15,17,24,19,24,16,13,13,22,17,13,18,13,10,12,15,15,6,4,2,13,8,13,8,9,11,11,11,22,22,22,12,11,17,14,18,11,13,6,5,4,8,12,7,25,11,9,12,11,18,18,16,9,16,17,12,16,12,16,1,2,8,13,11,7,8,19,22,13,23,16,16,17,11,4,7,14,19,13,10,20,14,2,4,4,9,6,3,11,12,8,7,7,12,12,19,8,6,4,5,3,1,9,16,11,5,5,7,1,4,6,20,11,16,16,17,12,13,15,10,15,7,9,6,15,11,11,11,9,7,10,11,12,12,24,20,12,13,18,11,18,14,12,13,13,17,8,6,6,4,5,6,7,1,7,14,4,5,11,8,16,15,8,9,16,19,16,12,8,6,9,2,4,3,14,5,3,5,5,7,13,9,11,7,19,10,6,7,13,13,10,4,9,11,6,6,7,4,14,9,13,7,6,13,9,10,8,8,5,9,7,17,8,6,12,13,6,6,11,4,13,9,9,3,6,6,10,12,7,6,10,5,6,7,12,11,11,9,15,10,10,10,5,5,8,1,0,2,5,13,8,9,5,1,3,8,4,6,6,6,6,12,16,12,7,11,13,7,7,0,0,0,6,7,8,1,6,3,12,10,14,9,11,11,24,9,5,8,1,2,9,11,4,9,0,0,8,7,8,2,2,15,17,8,6,15,23,9,6,4,4,6,7,3,7,9,6,8,0,1,5,6,13,5,6,4,12,4,5,14,7,16,13,9,13,6,12,8,7,4,5,0,-1,4,6,16,3,8,9,3,5,6,11,10,18,19,9,15,5,9,10,7,5,8],
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
