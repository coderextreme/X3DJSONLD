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
    GeoViewpoint(description='GeoViewpoint_3_71',position=(35.94067705241765,-76.67182291129942,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(35.94067705241765,-76.67182291129942,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA14-2.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA14-3.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA15-2.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA15-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA7-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(35.900833301452856,-76.70343749539828,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[22,21,11,13,13,14,13,22,20,15,12,20,12,16,17,14,0,0,0,0,0,0,0,0,0,0,21,10,9,15,9,15,15,13,12,12,15,25,19,19,4,13,11,0,0,0,0,0,0,0,0,0,14,13,18,21,18,16,10,3,12,9,20,12,17,17,14,9,20,0,0,0,0,0,0,0,0,0,29,36,24,15,23,14,25,15,2,19,13,22,11,11,17,17,19,8,0,0,0,0,0,0,0,0,31,24,27,27,19,24,16,18,24,2,20,11,14,13,10,18,19,15,0,0,0,0,0,0,0,0,20,24,20,29,31,22,18,14,2,8,19,11,10,16,12,11,13,16,10,0,0,0,0,0,0,0,24,20,18,21,19,24,12,15,2,14,27,13,11,13,15,12,16,10,0,0,0,0,0,0,0,0,24,27,20,18,17,16,20,14,2,3,3,19,16,14,18,19,17,12,16,0,0,0,0,0,0,0,33,31,22,19,16,18,23,16,8,10,3,-1,16,20,14,13,17,14,8,0,0,0,0,0,0,0,19,24,27,20,16,20,13,19,20,11,1,0,1,14,12,13,17,18,11,0,0,0,0,0,0,0,23,26,24,29,29,18,19,22,20,14,5,1,4,10,14,11,14,14,17,0,0,0,0,0,0,0,19,24,24,18,19,20,14,9,10,15,0,1,-2,10,9,20,22,0,0,0,0,0,0,0,0,0,19,19,20,18,18,15,13,11,7,4,1,0,6,13,13,11,3,0,0,0,0,0,0,0,0,0,21,23,15,16,15,14,12,12,12,8,1,1,7,9,11,17,0,0,0,0,0,0,0,0,0,0,22,18,20,19,17,14,16,17,10,12,1,0,1,17,15,20,0,0,0,0,0,0,0,0,0,0,20,19,20,14,16,15,15,13,11,13,7,0,-1,-1,9,18,9,0,0,0,0,0,0,0,0,0,13,15,14,11,11,15,14,17,16,12,13,0,-1,0,4,19,0,0,0,0,0,0,0,0,0,0,10,19,14,12,26,24,14,16,17,10,3,-1,2,0,20,19,0,0,0,0,0,0,0,0,0,0,12,13,13,14,16,25,20,23,19,19,15,17,2,1,1,0,0,0,0,0,0,0,0,0,0,0,2,16,13,17,16,9,22,16,3,15,20,21,19,7,0,0,0,0,0,0,0,0,0,0,0,0,19,16,19,10,21,22,9,4,3,3,1,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,14,15,17,9,12,15,16,13,12,10,4,8,11,11,0,0,0,0,0,0,0,0,0,0,0,0,16,14,17,14,21,17,12,14,9,11,9,11,14,8,0,0,0,0,0,0,0,0,0,0,0,0,22,26,26,13,13,14,12,16,14,12,11,12,14,7,0,0,0,0,0,0,0,0,0,0,0,0,20,18,24,13,18,14,13,19,21,12,12,14,10,7,0,0,0,0,0,0,0,0,0,0,0,0],
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
