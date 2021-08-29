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
    GeoViewpoint(description='GeoViewpoint_3_75',position=(35.94067705241765,-76.41890623850853,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(35.94067705241765,-76.41890623850853,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA14-10.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA14-11.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA15-10.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA15-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA7-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(35.900833301452856,-76.45052082260739,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[12,13,9,10,10,10,11,29,37,5,8,14,15,14,13,11,14,9,11,11,16,14,10,6,12,6,10,14,11,12,11,9,9,11,10,10,14,9,13,16,16,14,8,6,9,15,11,6,8,7,13,7,17,17,10,11,7,9,10,9,9,12,13,9,12,13,14,23,9,6,6,8,4,7,9,10,9,7,11,6,8,9,9,9,9,10,18,19,17,11,7,7,9,10,9,2,3,4,5,2,7,7,9,7,14,11,16,11,6,6,6,6,6,10,6,6,7,10,16,6,3,5,5,3,2,4,9,5,5,12,15,9,-2,13,6,15,10,10,11,13,12,10,7,7,8,9,9,12,5,7,8,2,0,3,5,11,7,12,12,7,10,7,10,15,11,12,6,3,6,6,7,8,6,8,5,7,7,6,-3,4,4,8,8,16,10,11,10,18,11,13,10,12,10,15,9,11,12,8,5,1,2,-1,-1,-2,1,-1,3,2,10,9,16,15,17,14,11,11,15,12,9,12,17,8,7,4,13,11,19,12,3,4,0,1,-2,2,13,16,15,13,22,9,12,11,14,12,13,9,6,8,18,20,14,3,15,3,5,8,11,1,9,13,9,16,15,14,16,14,11,13,18,10,7,11,7,7,9,5,3,8,8,3,3,4,11,7,2,5,15,12,18,12,11,12,11,13,14,16,14,17,13,14,13,10,5,10,8,11,5,5,14,11,8,3,11,12,19,17,15,10,11,20,12,10,9,13,17,13,12,7,17,11,7,15,12,10,11,16,14,6,11,15,18,13,22,19,21,13,14,9,11,10,7,5,3,2,4,20,5,7,15,3,9,13,6,6,14,10,11,11,14,13,22,12,13,24,9,6,8,4,3,2,3,8,8,8,2,7,15,12,2,3,11,9,10,9,7,20,9,9,14,6,4,0,15,14,5,6,5,3,8,5,3,7,13,8,4,1,11,11,12,9,12,21,10,0,4,2,0,5,3,11,8,10,10,6,3,6,8,5,8,4,5,3,11,22,10,2,0,9,30,14,6,4,0,9,11,9,14,1,4,6,4,10,2,9,6,11,8,2,15,9,14,12,11,15,17,7,4,2,0,1,4,15,16,3,4,0,2,6,6,4,8,7,13,4,20,22,17,12,5,5,11,4,3,5,2,0,6,8,17,4,3,0,-1,6,9,14,7,14,5,6,16,16,12,11,12,9,10,10,14,7,3,0,0,2,3,8,1,0,-1,0,4,13,7,7,4,2,28,15,10,13,16,17,11,8,11,8,5,6,0,0,0,0,0,0,1,4,11,15,4,2,0,8,15,8,10,11,18,18,18,10,10,5,0,0,0,0,0,0,0,0,0,0,4,4,3,2,0,0,15,9,8,10,13,13,9,4,4,5,8,10,3,3,5,6,0,0,0,0,0,4,5,3,1,0,13,8,5,9,17,11,8,2,1,0,11,11,4,3,7,9,0,0,0,0,0,1,10,-6,0,0],
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
