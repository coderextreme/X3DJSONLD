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
    GeoViewpoint(description='GeoViewpoint_3_72',position=(35.94067705241765,-76.6085937431017,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(35.94067705241765,-76.6085937431017,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA14-4.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA14-5.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA15-4.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA15-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA7-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(35.900833301452856,-76.64020832720055,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,6,8,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,1,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,0,-1,0,-2,1,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,3,4,8,11,2,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,4,5,7,6,12,3,5,11,3,8,8,0,0,0,0,0,0,0,0,0,0,0,3,4,17,12,7,2,11,12,2,9,13,6,7,5,4,0,0,0,0,0,0,0,0,0,0,0,1,4,11,0,9,15,9,1,7,6,13,10,5,6,13,0,0,0,0,0,0,0,0,0,1,11,-1,1,7,5,12,12,1,15,12,8,5,5,4,10,3,0,0,0,0,0,0,1,1,1,6,12,10,9,10,3,5,1,2,11,11,11,7,8,9,1,0,0,0,0,0,0,0,0,1,1,6,9,4,3,0,1,3,2,4,6,3,7,2,6,2,2,-1,0,0,0,0,0,0,0,0,3,5,7,2,2,4,3,2,4,5,4,11,12,6,3,1,3,0,0,0,0,0,0,0,0,0,3,1,4,6,5,2,4,1,3,6,14,5,13,9,6,1,20,21,0,0,0,0,0,0,0,0,0,3,9,6,-1,2,5,5,12,7,13,11,5,0,1,-2,4,1,0,0,0,0,0,0,0,0,0,0,0,12,11,5,15,9,11,7,8,11,10,8,12,12,15,14,0,0,0,0,0,0,0,0,0,0,0,0,17,10,9,9,6,11,10,15,21,7,13,11,15,10,0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,4,6,6,8,19,9,11,12,8,13,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,3,20,10,8,12,9,11,10,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,3,2,10,9,18,16,15,15,13,11,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,8,8,9,16,15,20,14,11,14,11],
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
