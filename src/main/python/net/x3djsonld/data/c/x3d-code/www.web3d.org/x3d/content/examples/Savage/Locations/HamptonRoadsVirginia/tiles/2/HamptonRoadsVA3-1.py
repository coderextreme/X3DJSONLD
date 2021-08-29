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
    GeoViewpoint(description='GeoViewpoint_2_31',position=(35.98052080338244,-76.57697915900283,15863.75038413098),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(35.98052080338244,-76.57697915900283,0.0),range=19036.5,child1Url=['../../tiles/3/HamptonRoadsVA6-2.x3d'],child2Url=['../../tiles/3/HamptonRoadsVA6-3.x3d'],child3Url=['../../tiles/3/HamptonRoadsVA7-2.x3d'],child4Url=['../../tiles/3/HamptonRoadsVA7-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/HamptonRoadsVA3-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(35.900833301452856,-76.64020832720055,0.0),normalPerVertex=False,xDimension=23,xSpacing=0.005748106,zDimension=23,zSpacing=0.0072443183,height=[15,24,32,27,29,14,8,17,8,29,-1,0,0,0,0,0,0,0,0,0,0,0,0,27,22,22,18,12,8,13,20,10,11,20,0,0,0,0,0,0,0,0,0,0,0,0,21,27,16,17,16,13,14,20,6,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,13,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,12,18,0,0,0,0,0,0,0,0,0,0,0,0,0,-2,2,3,0,0,0,8,1,17,18,0,0,0,0,0,0,0,0,0,0,0,0,1,2,8,1,0,0,15,9,7,12,17,0,0,0,0,0,0,0,0,0,0,0,-1,1,12,0,0,0,7,11,17,10,4,18,0,0,0,0,0,0,0,0,0,1,0,0,9,3,0,7,8,11,15,18,14,14,11,0,0,0,0,0,0,0,0,0,8,7,13,4,0,0,11,9,13,11,11,15,21,18,0,0,0,0,0,8,16,4,2,5,5,9,0,0,9,0,10,2,9,9,12,12,14,0,0,0,0,5,4,11,-2,14,11,16,2,2,12,10,14,12,12,14,11,11,10,9,0,0,0,0,9,1,3,9,8,1,6,6,13,15,12,11,12,10,11,10,10,12,10,0,0,0,0,10,-1,3,8,11,0,3,3,1,10,7,15,14,11,9,10,18,19,18,0,0,0,0,0,8,14,10,9,15,13,9,12,4,11,14,25,24,21,9,15,17,16,0,0,0,0,0,0,8,3,10,15,11,13,23,5,14,15,11,17,16,16,15,14,18,0,0,0,0,0,5,9,16,12,15,18,14,11,13,16,17,13,14,20,16,21,18,19,0,0,0,0,0,13,0,3,13,15,19,18,17,12,15,11,11,10,17,18,25,29,23,0,0,0,0,0,18,0,17,27,19,18,18,22,8,14,12,16,14,14,21,22,24,23],
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
