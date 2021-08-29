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
    GeoViewpoint(description='GeoViewpoint_2_30',position=(35.98052080338244,-76.70343749539828,15863.75038413098),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(35.98052080338244,-76.70343749539828,0.0),range=19036.5,child1Url=['../../tiles/3/HamptonRoadsVA6-0.x3d'],child2Url=['../../tiles/3/HamptonRoadsVA6-1.x3d'],child3Url=['../../tiles/3/HamptonRoadsVA7-0.x3d'],child4Url=['../../tiles/3/HamptonRoadsVA7-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/HamptonRoadsVA3-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(35.900833301452856,-76.766666663596,0.0),normalPerVertex=False,xDimension=23,xSpacing=0.005748106,zDimension=23,zSpacing=0.0072443183,height=[27,29,30,26,27,30,27,24,25,22,31,25,27,29,24,23,17,15,14,11,24,18,15,27,24,29,32,35,41,24,20,23,24,31,30,30,33,29,24,20,19,29,26,17,20,27,31,27,27,34,25,27,24,19,26,28,25,35,32,19,23,23,23,27,23,14,29,19,21,30,34,31,32,33,34,22,26,36,33,28,27,23,23,21,21,25,22,27,27,31,9,0,23,31,35,30,28,28,28,36,26,34,34,30,22,35,24,17,21,21,3,0,0,0,0,37,32,30,28,37,35,27,26,30,28,26,17,21,22,20,15,17,7,0,0,0,0,0,29,31,33,30,32,28,24,36,26,24,16,29,23,24,25,21,20,0,0,0,0,0,0,31,34,33,31,30,27,29,28,22,20,20,18,19,24,23,22,25,0,0,0,0,0,0,38,34,36,34,33,27,20,16,25,15,12,17,9,10,12,24,13,0,0,0,0,0,0,34,36,39,32,33,34,24,18,21,12,17,19,13,18,24,12,18,15,0,0,0,0,0,34,33,32,37,26,34,22,26,25,19,20,15,22,10,2,21,18,13,0,0,0,0,0,32,37,27,37,29,34,28,25,23,22,30,20,22,26,19,12,11,9,17,0,0,0,0,28,30,21,19,17,24,25,25,21,32,27,24,14,21,4,17,16,16,14,0,0,0,0,28,35,29,17,18,21,21,20,19,18,22,26,20,15,20,1,1,13,18,0,0,0,0,24,33,24,18,17,11,18,23,13,21,24,26,16,13,9,0,8,14,0,0,0,0,0,24,21,18,22,21,28,14,13,12,21,11,17,16,13,10,0,0,20,0,0,0,0,0,7,19,19,17,20,22,17,16,23,24,14,16,15,13,15,12,-1,21,0,0,0,0,0,26,26,30,28,27,3,16,20,14,14,4,12,14,26,14,15,0,0,0,0,0,0,0,27,20,30,21,5,0,0,0,0,2,12,17,14,5,8,3,4,0,0,0,0,0,0,20,22,23,0,0,0,0,0,0,0,6,19,14,19,14,11,15,0,0,0,0,0,0,32,22,0,0,0,0,0,0,0,0,0,23,13,14,13,19,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,9,-1,-1,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-2,0,1,2,0,0,0,0,0],
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
