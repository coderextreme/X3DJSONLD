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
    GeoViewpoint(description='GeoViewpoint_3_22',position=(36.33911456206557,-76.6085937431017,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.33911456206557,-76.6085937431017,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA4-4.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA4-5.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA5-4.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA5-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA2-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.299270811100776,-76.64020832720055,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[23,29,24,23,29,23,32,29,21,33,24,28,23,23,22,31,17,21,31,30,30,25,22,28,18,23,27,32,25,26,31,26,23,29,23,30,33,27,21,21,22,21,24,28,19,31,27,33,20,24,25,18,21,29,26,22,21,26,26,23,21,26,18,27,18,15,29,26,21,19,21,17,19,24,19,22,26,25,23,23,24,23,24,16,23,34,27,20,13,19,13,17,19,16,25,23,20,20,33,27,30,18,25,31,24,20,30,22,23,17,21,14,17,16,12,16,20,29,26,24,20,36,14,18,19,24,19,22,24,33,24,20,27,29,19,19,16,15,15,8,11,18,22,26,20,13,17,24,17,28,22,25,18,17,21,23,20,34,25,19,23,26,16,14,14,16,21,16,9,15,21,21,17,27,17,18,20,18,21,22,17,20,20,26,31,36,27,26,20,26,20,20,14,14,22,27,21,15,22,24,17,22,16,23,30,20,16,18,16,22,25,25,22,18,32,31,22,18,17,20,9,7,20,28,27,33,21,23,28,15,23,19,20,23,15,23,20,30,20,22,26,21,28,29,22,22,20,17,16,26,22,22,26,16,26,22,22,21,29,20,25,26,23,30,28,32,33,30,29,25,25,18,14,25,9,16,26,21,21,22,20,27,24,21,18,18,27,30,23,26,23,33,25,20,37,29,19,22,26,24,23,8,13,28,20,26,23,24,40,17,19,19,22,18,22,23,24,25,32,34,33,21,30,23,17,18,13,20,13,18,20,15,22,21,23,14,14,17,26,29,14,16,28,23,29,24,26,23,7,0,20,27,23,1,21,22,16,27,23,20,13,9,14,17,24,23,23,20,20,23,26,27,33,15,23,19,24,24,27,25,19,17,11,28,23,20,14,11,-4,4,20,26,23,25,22,18,24,26,29,21,22,18,22,19,19,17,29,18,21,23,11,24,12,15,15,12,29,25,22,23,21,26,20,24,21,26,21,21,19,18,16,21,28,27,19,22,11,11,-1,17,14,20,16,26,21,29,23,24,16,15,19,12,22,27,17,6,16,24,11,15,18,11,18,18,15,14,22,-1,16,16,18,26,19,27,23,28,19,9,13,14,16,18,20,19,11,16,14,10,14,26,17,13,28,14,18,31,22,24,16,22,4,12,11,11,11,11,11,11,9,11,15,25,10,14,9,18,12,19,17,4,19,29,36,34,32,30,25,26,22,23,11,27,25,21,17,12,25,12,18,16,17,16,12,23,22,18,33,16,15,18,20,18,22,15,20,21,23,16,20,24,21,31,10,14,27,12,20,21,18,24,19,26,22,17,24,31,16,29,29,18,10,32,30,7,19,38,35,25,18,16,23,19,20,19,19,22,17,18,22,18,23,23,26,16,18,15,11,11,18,17,20,20,21,17,16,27,15,16,20,20,23,20,17,8,19,18,20,19,20,19,19,17,8,15,20,17,20,22,19,20,24,13,25,12,21,25,21,24,16,12],
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
