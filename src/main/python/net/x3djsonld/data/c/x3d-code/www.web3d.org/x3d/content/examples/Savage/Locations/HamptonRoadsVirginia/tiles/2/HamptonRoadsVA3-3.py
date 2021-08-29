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
    GeoViewpoint(description='GeoViewpoint_2_33',position=(35.98052080338244,-76.32406248621194,15863.75038413098),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(35.98052080338244,-76.32406248621194,0.0),range=19036.5,child1Url=['../../tiles/3/HamptonRoadsVA6-6.x3d'],child2Url=['../../tiles/3/HamptonRoadsVA6-7.x3d'],child3Url=['../../tiles/3/HamptonRoadsVA7-6.x3d'],child4Url=['../../tiles/3/HamptonRoadsVA7-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/HamptonRoadsVA3-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(35.900833301452856,-76.38729165440967,0.0),normalPerVertex=False,xDimension=23,xSpacing=0.005748106,zDimension=23,zSpacing=0.0072443183,height=[3,6,7,9,9,6,9,8,0,0,5,7,3,0,0,2,0,0,0,0,0,0,0,12,8,5,7,7,6,5,11,0,9,0,4,6,5,0,0,0,0,0,0,0,0,0,-1,8,3,5,2,8,7,4,8,0,11,4,4,3,5,0,2,0,0,0,0,0,0,5,1,2,5,0,4,4,7,0,0,8,8,10,5,8,3,0,0,0,0,0,0,0,6,4,5,6,2,7,3,6,5,7,9,3,7,3,5,3,7,4,0,0,0,0,0,5,4,7,4,3,2,4,7,7,4,8,0,7,3,5,9,11,7,0,0,0,0,0,4,3,2,6,5,0,0,5,10,5,7,6,11,6,7,4,9,7,4,0,0,0,0,13,5,7,0,1,1,0,4,7,4,6,8,4,2,3,1,8,3,1,0,0,0,0,9,1,0,2,-2,4,49,5,0,3,3,3,6,5,5,2,4,12,1,1,0,0,0,13,2,1,0,-10,-2,7,1,5,0,0,6,9,7,12,10,4,8,1,4,0,0,0,5,5,7,4,4,1,0,2,0,0,0,6,0,6,0,6,13,0,1,1,2,0,0,4,4,1,2,3,2,7,0,0,0,0,0,-2,0,0,0,0,4,1,0,0,0,0,10,2,7,-1,0,-2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,1,0,0,0,0,0,0,5,-2,-1,0,1,0,2,0,0,0,0,0,0,0,0,2,2,4,-1,4,0,7,-1,0,1,0,0,0,0,-1,0,0,0,0,0,0,0,0,7,6,5,5,5,3,10,3,6,0,1,3,1,-1,0,0,1,0,0,0,0,0,0,5,5,7,6,3,-1,2,1,-1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,6,3,1,4,0,0,1,2,0,-1,1,-2,3,0,0,0,0,0,0,0,0,0,0,11,0,2,0,0,-1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,-2,0,0,0,0,0,-2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
