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
    GeoViewpoint(description='GeoViewpoint_3_25',position=(36.33911456206557,-76.41890623850853,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.33911456206557,-76.41890623850853,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA4-10.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA4-11.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA5-10.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA5-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA2-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.299270811100776,-76.45052082260739,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[20,15,15,12,14,14,15,15,16,14,15,15,21,19,16,18,19,14,19,16,19,22,19,18,19,14,19,15,16,15,15,14,15,17,17,15,14,18,18,18,18,19,19,20,20,15,17,16,16,13,17,18,14,15,16,15,17,14,14,14,15,15,16,14,18,17,15,13,14,12,13,18,18,18,9,24,24,21,16,21,14,18,18,13,13,16,15,15,20,23,17,13,17,17,10,11,14,14,19,19,20,15,14,18,17,18,16,16,13,14,17,18,13,12,15,19,16,20,18,18,20,16,14,17,17,18,13,9,15,14,18,18,13,16,16,16,15,14,13,18,22,18,16,15,16,17,15,14,22,16,18,21,22,16,10,12,19,16,16,13,16,14,20,17,15,17,15,13,14,12,14,15,17,20,16,15,18,22,20,20,9,12,19,14,17,17,17,14,20,19,18,18,17,13,15,19,20,11,13,17,21,19,17,16,17,18,20,7,15,19,12,17,13,14,15,14,18,18,18,19,16,17,14,17,17,14,14,22,22,17,17,16,17,21,17,13,16,15,13,12,15,22,21,16,14,13,16,17,15,17,15,15,17,17,22,23,20,18,16,18,14,13,13,15,13,12,12,13,12,14,15,13,14,20,18,17,14,9,13,16,13,15,18,22,18,18,17,26,21,14,12,13,12,16,13,12,19,16,15,12,16,12,16,17,17,10,14,11,14,13,11,12,21,28,23,18,18,13,11,11,9,16,16,12,15,19,17,13,14,21,12,12,12,8,10,15,17,12,21,28,22,21,13,16,18,19,18,23,15,17,21,16,17,17,17,13,14,10,13,11,12,14,12,17,23,18,23,21,17,19,16,15,15,16,12,13,9,15,16,11,8,15,12,12,12,10,13,12,12,11,4,16,20,21,21,21,14,16,13,10,13,11,14,15,11,10,11,11,12,17,16,18,14,16,15,8,18,18,16,13,9,16,17,16,13,13,15,17,11,10,8,11,10,14,13,11,12,19,16,19,4,6,17,18,17,21,12,16,10,12,13,18,15,11,10,14,15,9,10,13,15,14,16,14,5,7,7,6,21,14,19,21,17,17,25,8,11,16,15,13,12,13,14,17,12,11,7,0,7,7,6,7,5,5,22,13,14,22,11,8,11,12,11,22,14,12,15,18,14,10,12,12,12,13,6,5,3,6,6,4,12,13,12,12,13,13,14,9,9,22,23,10,15,9,15,12,8,8,12,6,9,9,11,10,15,13,11,12,15,13,11,10,12,10,9,12,9,8,8,18,8,6,4,6,7,11,17,16,13,11,16,16,23,26,20,13,16,9,12,9,14,14,14,18,18,16,5,4,5,7,6,8,14,11,13,8,10,8,19,12,18,17,19,15,13,9,10,13,10,5,7,9,5,6,7,8,7,6,5,13,12,15,11,4,17,15,8,18,25,14,16,8,11,14,11,5,9,10,4,8,8,8,10,4,5,10,8,10,10,21],
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
