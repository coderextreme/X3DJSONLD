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
    GeoViewpoint(description='GeoViewpoint_3_73',position=(35.94067705241765,-76.54536457490397,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(35.94067705241765,-76.54536457490397,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA14-6.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA14-7.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA15-6.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA15-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA7-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(35.900833301452856,-76.57697915900283,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[0,0,0,0,0,0,0,0,2,0,0,3,0,0,0,0,0,0,0,0,8,0,1,6,14,18,0,0,0,0,0,0,-1,0,9,9,12,0,0,0,0,0,0,0,5,4,6,18,5,0,10,12,0,0,0,0,-1,1,1,7,1,3,2,0,0,0,0,0,6,10,8,3,9,13,19,1,12,9,0,0,4,-1,7,2,8,12,17,15,0,0,0,0,0,11,12,11,13,7,8,11,13,3,20,16,0,2,0,0,0,19,13,8,3,0,0,0,0,0,3,11,14,10,9,12,14,13,17,15,7,15,3,12,6,-1,18,14,7,0,0,0,0,0,1,11,8,14,10,11,10,25,16,9,10,17,5,-1,9,1,1,13,10,11,13,0,0,0,0,3,12,11,9,12,12,11,13,14,30,13,12,8,9,13,2,5,8,9,10,10,9,0,0,0,6,10,8,8,9,13,12,15,12,13,23,14,11,16,11,12,7,7,10,11,0,0,0,0,0,0,13,9,10,13,8,12,12,12,15,11,15,14,10,13,15,12,3,13,9,-1,0,0,0,0,0,12,11,11,8,11,8,13,13,10,12,12,11,13,15,14,16,10,8,11,3,0,0,0,0,-1,-2,10,10,11,11,11,11,9,10,11,11,13,13,13,13,12,10,9,4,6,0,3,0,-1,5,0,8,0,7,15,11,9,8,12,5,12,9,7,13,16,13,15,10,13,13,6,0,3,0,2,1,8,9,11,20,5,7,9,10,9,10,13,18,21,9,3,8,13,21,15,3,-2,0,2,0,5,14,21,11,16,12,13,13,10,10,18,10,14,19,9,8,14,7,14,13,9,0,1,2,3,13,13,12,15,17,12,8,11,5,14,12,12,12,12,10,10,9,11,8,11,13,10,-1,2,8,11,13,12,14,17,12,12,6,7,11,10,16,8,7,8,8,8,8,9,11,13,11,17,0,7,11,17,16,14,14,13,18,9,12,15,11,18,11,10,5,6,6,9,10,10,11,10,11,12,21,19,15,13,20,21,19,7,-1,2,6,9,10,11,14,13,11,11,7,7,8,12,15,9,11,13,1,3,1,1,-2,4,11,3,7,13,13,15,18,14,11,11,11,10,11,10,9,7,18,14,20,15,14,13,22,10,12,-4,5,11,11,13,12,23,12,18,24,12,11,16,14,15,15,14,15,17,14,14,10,9,13,12,20,0,9,14,13,11,16,14,18,18,19,27,24,11,18,12,10,11,20,15,14,19,10,10,13,13,3,7,7,15,10,15,10,14,12,15,18,11,11,23,14,12,12,15,13,18,13,18,11,12,13,12,8,6,10,12,15,20,13,14,13,14,17,14,12,16,13,10,15,13,13,13,17,16,14,10,10,18,13,14,2,9,9,14,16,12,14,15,13,17,17,18,12,17,15,13,21,18,19,17,11,17,13,14,18,20,2,7,11,18,15,15,13,15,12,19,21,19,15,12,19,14,17,17,18,18],
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
