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
    GeoViewpoint(description='GeoViewpoint_2_32',position=(35.98052080338244,-76.45052082260739,15863.75038413098),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(35.98052080338244,-76.45052082260739,0.0),range=19036.5,child1Url=['../../tiles/3/HamptonRoadsVA6-4.x3d'],child2Url=['../../tiles/3/HamptonRoadsVA6-5.x3d'],child3Url=['../../tiles/3/HamptonRoadsVA7-4.x3d'],child4Url=['../../tiles/3/HamptonRoadsVA7-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/HamptonRoadsVA3-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(35.900833301452856,-76.51374999080511,0.0),normalPerVertex=False,xDimension=23,xSpacing=0.005748106,zDimension=23,zSpacing=0.0072443183,height=[0,0,0,0,0,0,0,0,0,0,0,10,10,10,11,2,5,6,9,9,7,12,3,0,0,0,0,0,0,0,0,0,0,12,10,7,7,6,4,3,5,5,2,6,7,12,0,0,0,0,0,0,0,0,0,10,8,7,5,5,7,4,5,9,11,3,6,2,-1,0,0,0,0,0,0,5,15,17,13,8,8,8,8,11,7,9,11,6,3,7,10,5,0,0,0,0,14,7,18,13,11,17,9,8,8,9,9,6,5,7,5,6,5,8,6,0,0,18,18,20,20,14,15,13,11,11,10,11,13,9,9,8,9,7,11,9,7,5,10,18,14,17,16,15,14,18,13,11,10,7,10,23,18,12,6,8,7,9,5,6,4,12,11,16,14,10,12,13,12,8,12,16,14,23,15,9,7,6,18,11,5,12,13,13,18,14,14,11,14,13,9,12,14,13,15,25,20,5,4,13,9,12,16,6,14,12,9,18,11,15,11,15,21,13,10,19,14,16,9,9,11,16,14,14,14,12,16,9,8,13,17,16,11,11,14,13,11,13,22,15,6,11,9,10,11,12,9,7,8,1,13,8,5,18,11,16,12,12,16,10,15,11,11,16,10,13,9,15,6,8,6,13,5,-1,8,4,11,15,14,11,20,13,10,8,19,18,11,11,10,10,9,6,9,8,5,2,-2,0,10,18,28,12,11,14,13,13,10,10,9,14,16,19,12,15,5,8,20,14,5,6,5,3,14,12,13,12,14,12,15,12,12,9,10,12,13,10,14,17,13,7,9,13,12,4,2,9,10,11,8,15,11,12,13,10,13,11,10,17,12,9,7,2,6,3,8,15,5,7,10,17,20,10,14,10,11,23,19,16,12,10,5,9,8,0,6,5,4,7,13,4,5,18,21,23,12,9,20,26,10,9,16,12,13,11,17,-1,0,15,1,0,6,6,5,6,16,14,21,19,15,15,21,7,19,22,23,19,14,8,10,0,0,10,3,6,1,0,11,18,18,21,28,18,16,3,9,21,20,19,9,14,14,3,12,5,0,0,1,5,1,5,19,17,24,24,21,17,12,17,19,19,17,0,9,7,9,5,13,16,0,0,0,0,0,23,17,23,26,18,26,10,17,22,15,9,16,10,11,8,3,10,4,13,0,0,0,0,23,20,31,26,20,25,16,15,14,17,16,10,9,12,8,4,14,10,12,0,0,0,0],
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
