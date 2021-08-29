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
    GeoViewpoint(description='GeoViewpoint_2_23',position=(36.13989580724161,-76.32406248621194,15863.75038413098),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.13989580724161,-76.32406248621194,0.0),range=19036.5,child1Url=['../../tiles/3/HamptonRoadsVA4-6.x3d'],child2Url=['../../tiles/3/HamptonRoadsVA4-7.x3d'],child3Url=['../../tiles/3/HamptonRoadsVA5-6.x3d'],child4Url=['../../tiles/3/HamptonRoadsVA5-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/HamptonRoadsVA2-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.060208305312024,-76.38729165440967,0.0),normalPerVertex=False,xDimension=23,xSpacing=0.005748106,zDimension=23,zSpacing=0.0072443183,height=[8,8,6,6,6,4,0,0,0,0,3,4,4,0,0,4,6,13,6,4,5,8,9,5,7,8,7,4,5,10,6,5,0,0,0,0,0,4,23,5,4,9,5,5,5,7,10,6,10,8,2,13,3,1,0,0,0,0,6,5,7,9,6,6,6,6,6,4,9,9,7,8,2,8,7,4,0,0,0,0,9,4,6,8,6,7,6,7,7,0,8,7,7,5,12,2,-1,1,0,0,-1,0,0,0,-6,5,8,5,5,9,4,7,4,5,6,3,5,5,5,7,4,6,9,4,0,0,0,0,11,7,3,3,0,1,8,0,5,0,0,4,4,4,4,4,7,0,0,0,0,0,0,9,0,5,0,0,7,8,6,3,6,0,4,4,4,4,4,4,0,0,0,0,4,0,0,-2,0,6,11,5,4,9,8,10,0,-4,5,5,6,8,3,0,0,0,13,2,3,2,5,12,4,3,7,8,6,6,6,0,6,5,2,6,5,2,0,0,0,0,2,3,3,6,9,2,12,5,3,6,8,6,0,0,0,0,0,0,0,0,0,0,0,3,5,-1,6,3,4,-2,1,0,6,8,8,0,0,0,0,0,0,0,0,0,0,10,0,3,0,1,-1,5,0,3,11,2,5,5,0,0,0,0,0,0,0,0,0,0,3,2,7,2,7,3,0,0,6,9,6,6,9,0,0,0,0,0,0,0,0,0,0,-1,1,5,3,0,-2,0,0,0,0,0,5,6,0,0,0,0,0,0,0,0,0,0,6,3,0,0,0,0,0,0,0,0,0,-1,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,8,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,9,9,10,9,4,0,0,0,0,0,0,5,6,0,0,0,0,0,0,0,0,5,5,8,9,12,11,9,5,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,3,6,7,9,9,6,9,8,0,0,5,7,3,0,0,2,0,0,0,0,0,0,0],
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
