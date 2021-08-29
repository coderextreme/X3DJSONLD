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
    GeoViewpoint(description='GeoViewpoint_3_74',position=(35.94067705241765,-76.48213540670625,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(35.94067705241765,-76.48213540670625,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA14-8.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA14-9.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA15-8.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA15-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA7-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(35.900833301452856,-76.51374999080511,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[18,17,11,11,17,13,13,12,13,15,15,14,17,14,11,13,13,10,10,14,11,15,12,14,16,12,12,16,7,14,15,16,15,16,16,20,19,10,12,15,13,14,11,9,14,9,11,12,14,12,14,10,9,13,16,15,14,16,15,13,11,17,10,13,18,9,12,11,12,12,14,12,14,16,15,9,9,17,16,19,17,19,14,11,6,8,19,15,22,13,14,21,11,14,10,12,11,11,14,16,17,11,10,11,15,0,4,6,6,9,14,15,12,16,13,15,16,14,10,11,16,13,11,13,15,12,15,16,16,14,-1,11,17,17,13,17,16,11,12,13,16,16,13,21,19,15,9,14,16,12,10,11,13,10,17,15,13,10,14,17,15,15,14,11,11,11,13,15,20,10,12,21,19,8,9,15,11,12,13,13,13,7,12,11,12,12,13,20,13,11,12,14,18,14,17,19,13,17,12,10,8,11,14,17,18,13,11,8,12,12,11,12,10,10,12,11,12,11,17,13,16,16,8,12,12,9,10,15,11,19,21,16,12,10,10,24,13,28,5,10,13,9,10,16,14,18,14,16,20,13,19,10,12,9,13,9,9,9,14,13,9,11,12,9,13,15,13,20,15,11,13,14,11,12,11,12,10,11,10,13,12,10,16,12,13,9,13,12,10,9,14,12,10,-1,13,10,14,12,13,15,15,14,11,15,12,14,16,10,13,14,10,15,15,7,13,6,8,5,9,11,11,11,13,13,13,6,15,11,17,12,11,13,13,11,13,14,13,11,9,15,10,9,10,12,13,11,12,23,14,12,13,13,12,17,12,10,13,14,12,12,13,10,10,11,10,13,11,11,17,9,7,14,9,7,7,14,20,10,14,16,18,13,11,16,13,11,13,19,16,14,17,17,13,12,13,11,6,14,11,7,12,10,9,11,13,17,21,15,20,19,17,17,17,18,12,11,12,12,17,15,17,12,16,10,12,12,11,12,9,8,8,10,9,17,27,23,18,12,12,19,11,11,13,18,12,14,21,16,11,13,10,12,13,11,15,15,13,15,10,9,9,11,15,3,3,3,4,11,15,21,13,21,24,24,20,16,10,15,9,18,16,22,24,20,7,10,11,12,3,11,14,17,12,15,14,12,16,14,24,26,25,24,22,13,13,23,11,17,26,17,15,17,3,16,17,19,13,14,15,20,19,16,16,15,19,28,23,25,22,16,17,12,7,19,21,28,3,3,18,16,23,19,17,17,17,16,18,19,18,19,16,20,27,20,18,17,16,12,12,21,22,16,3,20,13,21,26,15,19,22,20,28,16,16,18,20,26,27,23,29,27,23,23,19,22,14,14,12,13,10,12,16,18,30,21,17,21,15,17,19,19,19,18,21,26,27,27,25,19,19,16,14,17,9,10,14,20,27,24,22,17,17,14,15,18,16,19,22,20,23,25,22,24,19,21,13,17,17,17,7,12,14,16,22,20,17,20,17,19,13],
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
