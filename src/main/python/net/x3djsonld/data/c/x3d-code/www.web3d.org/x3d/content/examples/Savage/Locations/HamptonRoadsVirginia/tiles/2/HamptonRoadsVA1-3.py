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
    GeoViewpoint(description='GeoViewpoint_2_13',position=(36.299270811100776,-76.32406248621194,15863.75038413098),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.299270811100776,-76.32406248621194,0.0),range=19036.5,child1Url=['../../tiles/3/HamptonRoadsVA2-6.x3d'],child2Url=['../../tiles/3/HamptonRoadsVA2-7.x3d'],child3Url=['../../tiles/3/HamptonRoadsVA3-6.x3d'],child4Url=['../../tiles/3/HamptonRoadsVA3-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/HamptonRoadsVA1-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.21958330917119,-76.38729165440967,0.0),normalPerVertex=False,xDimension=23,xSpacing=0.005748106,zDimension=23,zSpacing=0.0072443183,height=[15,17,19,10,15,10,3,5,4,10,9,5,15,7,15,3,5,2,4,16,8,10,5,17,16,17,14,17,18,5,3,3,5,4,6,2,3,3,5,9,11,8,7,7,6,10,12,12,16,15,16,20,20,5,4,6,2,15,1,3,4,3,-3,6,5,3,2,5,12,16,19,20,17,13,11,22,2,8,8,6,6,3,12,9,0,0,4,2,5,3,1,3,19,1,4,9,10,2,1,4,5,3,2,3,6,-3,5,3,2,3,4,0,14,4,-1,10,13,3,3,8,13,3,3,7,3,8,2,15,2,0,4,8,0,1,4,3,4,0,16,13,3,16,4,5,5,5,7,3,20,2,15,10,12,0,6,5,5,9,6,10,6,4,12,15,12,9,6,4,4,3,3,7,3,13,1,9,12,0,0,4,5,3,6,11,8,11,29,14,10,9,3,4,7,8,4,-6,0,3,11,-2,0,0,6,1,6,6,9,7,5,11,6,12,7,3,5,3,8,2,4,3,2,2,18,6,12,7,4,4,7,5,3,7,3,7,15,15,8,7,2,5,12,5,8,0,8,6,0,7,5,16,6,7,7,6,9,11,11,9,3,5,4,5,11,2,7,8,13,0,5,4,9,2,3,2,4,9,12,4,6,8,6,7,3,8,5,8,5,6,11,2,4,1,2,5,5,10,6,10,9,4,16,6,11,15,8,7,5,4,8,5,8,7,14,4,11,0,9,5,6,4,6,8,7,6,7,5,6,5,6,3,17,19,4,7,6,10,4,10,3,9,5,14,6,6,7,6,3,9,5,6,5,9,5,8,9,8,8,8,4,14,8,9,0,3,11,8,10,5,6,4,6,3,5,1,4,3,9,5,6,6,7,8,11,11,2,0,2,8,11,11,5,5,7,5,3,5,-5,5,4,3,5,7,8,7,7,5,3,4,0,10,8,7,7,4,0,6,11,11,0,4,3,5,4,3,2,3,3,2,5,6,0,6,5,2,4,9,9,0,0,0,0,0,0,6,5,7,10,5,2,7,8,2,8,1,3,0,1,0,0,0,8,9,12,5,0,0,0,3,4,7,4,14,25,4,5,0,2,11,14,4,8,3,5,5,8,7,7,5,4,0,0,-1,4,2,4,6,3,0,3,13,6,5,4,5,8,6,8,8,6,6,6,4,0,0,0,0,3,4,4,0,0,4,6,13,6,4,5,8,9],
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
