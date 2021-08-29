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
    GeoViewpoint(description='GeoViewpoint_3_23',position=(36.33911456206557,-76.54536457490397,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.33911456206557,-76.54536457490397,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA4-6.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA4-7.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA5-6.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA5-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA2-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.299270811100776,-76.57697915900283,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[23,14,41,27,21,21,18,21,19,31,24,19,25,22,23,18,20,19,21,20,14,18,23,20,16,23,18,22,23,22,30,21,23,22,26,32,24,23,24,28,21,20,19,17,17,20,22,18,16,21,19,25,25,23,23,19,22,19,26,19,20,31,18,24,22,23,24,13,20,20,18,13,16,17,21,24,22,18,31,21,31,33,30,25,18,25,30,30,21,26,24,24,22,24,22,19,23,18,16,21,14,21,18,17,33,18,19,15,28,14,19,18,18,19,21,25,24,27,24,26,25,18,23,17,17,24,19,21,19,17,23,28,26,24,9,15,17,15,22,11,12,24,25,23,22,21,20,16,14,17,15,19,23,15,17,17,20,25,20,24,17,18,21,14,17,19,12,24,21,25,24,23,21,17,15,22,15,12,20,20,19,25,18,16,17,15,14,18,12,12,21,22,28,24,23,22,24,27,25,16,16,18,13,13,21,21,21,17,23,20,15,10,18,18,15,11,13,14,26,23,31,23,27,26,29,25,21,19,25,20,18,19,16,18,20,18,19,16,16,18,11,11,13,7,18,14,22,31,28,21,24,24,29,24,20,17,21,16,14,12,18,18,15,19,18,19,10,17,13,13,12,8,8,11,30,34,24,18,22,23,19,19,11,13,10,14,19,19,19,15,18,15,8,16,17,13,18,9,15,18,31,14,19,27,22,20,20,16,15,14,15,12,17,17,19,31,24,18,15,14,15,10,10,11,19,28,18,13,25,20,17,16,16,9,9,14,12,13,17,19,14,19,18,12,16,22,19,7,14,20,29,22,9,12,12,7,7,6,5,8,7,9,9,10,4,3,25,12,14,12,14,13,13,7,9,15,15,21,4,11,7,6,10,9,7,8,8,8,12,10,12,12,22,2,4,17,11,0,15,14,7,9,11,18,13,11,15,18,13,18,6,6,10,9,8,8,20,-1,-1,6,18,7,3,15,20,12,17,13,18,9,17,9,10,10,8,10,10,7,7,4,12,24,-1,11,16,13,5,1,14,7,11,7,12,12,23,12,9,7,14,5,9,6,9,6,6,6,8,24,14,4,6,10,14,8,5,10,14,14,14,9,15,8,9,6,9,7,12,4,14,14,12,11,10,13,4,1,16,0,2,1,6,7,9,15,12,13,8,5,13,13,11,10,11,8,10,6,-9,7,8,7,18,8,2,2,-6,2,9,6,7,10,6,17,10,4,9,4,5,12,13,12,11,7,5,0,7,10,26,2,4,5,-1,7,1,1,4,9,5,7,7,7,11,1,11,19,8,15,8,13,15,37,48,11,18,6,9,9,17,17,4,0,5,-1,5,9,8,9,10,11,20,11,7,11,7,10,12,16,19,13,8,14,10,14,4,15,-3,-1,1,0,0,6,7,9,7,5,6,15,12,6,6,13,18,15,11,10,12,17,16,15,4,17,7,-1,0,-1,-1,5,6,5,6,10,4,8,11,7,7,12,23,18,9,8],
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
