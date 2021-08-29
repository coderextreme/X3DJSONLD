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
    GeoViewpoint(description='GeoViewpoint_3_26',position=(36.33911456206557,-76.3556770703108,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.33911456206557,-76.3556770703108,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA4-12.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA4-13.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA5-12.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA5-13.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA2-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.299270811100776,-76.38729165440967,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[14,19,18,15,16,18,16,17,20,17,17,14,13,13,3,3,6,5,4,4,3,2,3,3,8,8,18,15,17,15,16,20,18,18,10,12,10,15,17,12,4,3,3,2,4,2,3,5,10,4,7,6,21,18,18,16,16,16,15,16,17,14,11,14,17,17,8,4,4,2,3,4,3,2,1,3,3,0,18,16,12,13,17,20,16,15,15,13,15,18,20,17,20,3,5,1,3,1,3,4,6,5,3,2,14,15,14,16,13,12,17,14,15,15,14,17,20,21,21,0,2,3,1,2,2,5,6,3,1,4,12,12,14,16,16,16,13,17,17,16,17,16,17,22,19,9,1,3,0,4,3,3,4,4,4,6,12,15,10,9,12,19,16,17,18,14,12,16,14,19,18,20,5,9,7,7,10,4,3,4,7,5,7,16,21,16,14,21,16,16,14,15,16,16,18,16,20,22,10,4,4,9,9,14,17,8,7,5,21,14,22,18,20,17,21,16,17,16,18,18,20,19,24,16,8,2,6,2,4,3,2,6,7,4,18,13,16,16,21,22,12,20,17,16,13,16,0,6,3,2,2,3,2,4,1,3,12,6,10,9,18,19,6,1,2,3,3,2,9,11,6,11,4,4,2,1,3,6,4,4,3,5,3,4,4,3,12,8,10,4,2,2,3,3,6,13,9,17,7,3,3,3,6,6,7,15,17,17,3,1,1,5,12,6,6,11,7,3,3,3,2,4,1,13,4,8,3,4,4,3,3,3,16,7,3,0,6,4,17,22,16,12,4,6,6,6,7,6,3,5,7,7,4,3,3,6,7,10,3,2,3,10,1,10,11,13,6,14,11,7,6,5,9,5,4,3,1,3,9,3,3,5,13,4,1,7,8,2,5,10,8,15,11,11,14,16,5,6,6,12,8,10,4,3,6,9,3,7,3,3,6,8,3,7,7,5,6,4,13,15,16,7,13,7,6,9,8,6,3,6,5,1,5,0,4,3,14,3,21,7,6,10,6,6,21,9,13,11,11,16,10,12,6,11,13,9,3,8,7,4,4,2,8,4,5,19,5,5,5,8,11,19,18,15,12,20,8,14,12,11,8,3,5,4,9,7,5,5,3,9,5,13,11,4,4,8,5,10,14,14,0,0,14,16,8,11,5,13,2,3,3,8,3,10,2,2,8,4,5,2,13,10,10,10,16,15,14,8,8,10,8,4,6,3,7,15,15,3,6,9,6,7,9,6,9,3,16,8,5,5,6,11,17,22,20,14,9,4,5,14,11,4,8,3,8,3,3,4,8,6,3,3,8,12,16,5,7,7,13,19,13,6,3,3,9,6,6,5,4,8,10,8,8,9,7,2,5,8,4,4,7,8,11,8,8,11,7,3,11,13,14,14,16,7,7,7,3,3,8,6,6,4,10,7,21,5,11,8,7,6,4,7,8,4,14,14,18,13,9,6,8,8,-1,3,5,3,8,4,4,10],
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
