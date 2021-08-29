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
    GeoViewpoint(description='GeoViewpoint_3_24',position=(36.33911456206557,-76.48213540670625,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.33911456206557,-76.48213540670625,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA4-8.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA4-9.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA5-8.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA5-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA2-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.299270811100776,-76.51374999080511,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[23,21,23,23,23,23,19,21,17,20,18,15,14,13,18,20,18,16,18,15,16,20,18,13,18,20,25,21,16,15,19,25,22,22,22,23,20,17,16,15,15,18,15,14,13,14,18,17,16,16,14,19,18,19,19,22,18,14,22,19,16,17,18,17,15,14,15,12,14,17,13,19,16,20,17,16,18,14,17,17,24,25,18,21,16,20,17,18,17,15,14,16,17,18,15,17,14,17,19,15,16,17,24,16,17,16,20,23,23,16,13,20,15,20,18,18,19,18,16,18,17,16,17,16,15,16,17,15,14,17,17,21,22,17,19,13,15,15,21,14,14,14,16,19,17,15,15,15,20,13,15,15,19,18,21,18,25,21,15,12,17,14,14,16,14,14,12,14,19,14,19,15,17,16,13,14,16,21,18,14,24,19,17,16,18,15,12,15,13,11,12,15,12,15,17,15,20,19,14,19,19,16,17,17,23,23,19,19,18,12,18,10,12,13,10,10,13,14,13,14,10,20,11,20,13,19,20,19,18,22,17,20,25,15,12,13,14,14,14,9,12,11,12,11,12,11,12,15,12,13,15,19,20,19,19,17,19,15,19,17,14,10,12,13,15,14,13,17,13,15,16,15,13,20,18,15,17,12,18,13,14,15,16,16,15,14,12,10,11,10,12,16,13,14,12,17,18,19,18,13,16,17,16,22,16,14,17,15,16,15,15,17,13,13,15,12,16,13,17,14,14,14,13,13,12,19,20,20,15,25,23,15,15,13,14,15,15,21,10,10,14,12,5,9,12,15,15,13,11,16,18,13,14,16,17,24,16,18,14,17,14,13,9,21,10,12,8,7,8,7,8,9,10,13,11,8,9,10,14,14,18,21,23,25,14,14,16,14,11,23,8,8,11,5,4,6,5,8,7,8,25,21,16,16,16,17,19,16,19,13,9,11,13,16,14,4,24,25,18,9,7,5,8,6,4,2,13,23,23,24,24,23,18,19,21,20,10,16,16,16,8,18,24,30,23,26,28,20,10,8,5,5,12,18,21,23,29,25,18,16,13,19,18,21,15,16,21,17,13,7,10,19,12,13,12,7,14,10,16,12,13,16,15,15,12,13,11,12,20,16,19,16,21,21,7,4,8,13,11,5,4,7,12,7,8,7,8,14,11,10,11,11,10,9,18,21,18,18,22,22,10,12,10,7,15,22,30,11,11,5,8,9,14,20,20,23,22,12,8,11,12,11,9,8,12,12,11,15,7,5,11,20,26,21,13,10,6,10,13,11,25,23,20,17,22,20,19,13,9,10,10,11,13,11,12,8,19,26,23,16,12,14,7,8,16,12,8,12,16,11,12,19,17,16,14,20,19,23,10,7,9,18,19,24,27,11,13,13,22,17,14,17,11,19,17,21,19,6,8,11,8,6,10,19,8,7,6,17,21,17,22,16,20,13,23,18,15,18,15,17,14,17,17,7,8,5,12,8,8,17],
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
