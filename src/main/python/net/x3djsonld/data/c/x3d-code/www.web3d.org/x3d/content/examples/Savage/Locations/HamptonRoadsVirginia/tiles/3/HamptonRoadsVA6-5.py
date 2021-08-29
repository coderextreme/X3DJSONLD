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
    GeoViewpoint(description='GeoViewpoint_3_65',position=(36.02036455434723,-76.41890623850853,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.02036455434723,-76.41890623850853,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA12-10.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA12-11.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA13-10.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA13-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA6-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(35.98052080338244,-76.45052082260739,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[0,0,0,1,4,15,9,9,9,6,11,7,8,9,12,8,6,8,6,5,10,5,6,6,9,6,0,0,0,4,15,8,7,7,12,9,5,6,6,7,6,5,13,4,12,9,2,8,9,11,8,15,0,0,11,11,10,7,4,8,8,10,7,6,6,6,5,8,5,7,4,6,1,9,8,5,6,7,7,11,11,12,8,9,10,9,7,11,7,8,2,5,6,5,6,7,13,8,9,6,9,6,9,9,7,10,14,6,6,4,5,7,7,4,7,5,7,4,3,5,7,6,7,11,8,9,4,3,7,15,10,15,7,7,8,5,7,7,6,8,6,7,5,5,2,3,4,12,6,5,9,10,9,0,6,6,4,9,14,9,8,8,10,5,10,5,6,5,4,3,6,7,8,4,1,1,2,0,3,4,1,4,7,9,7,8,5,5,4,6,6,10,4,6,7,5,7,6,6,11,5,6,4,4,4,0,1,7,7,6,7,6,5,9,7,6,7,6,9,8,6,8,7,9,10,7,6,10,5,6,7,7,2,5,6,12,9,6,6,5,6,10,7,10,9,10,5,8,6,5,7,6,8,4,7,5,6,10,12,10,11,6,7,6,5,6,9,9,8,11,9,12,12,17,17,12,5,7,8,7,6,10,6,10,13,6,8,8,8,9,12,9,7,10,10,10,10,13,8,10,8,8,9,4,7,5,5,10,8,4,8,9,12,9,11,10,9,9,9,8,7,7,9,6,9,5,11,8,7,10,4,3,6,5,6,4,7,9,9,8,9,9,12,10,8,8,7,4,7,7,8,7,9,8,11,7,9,7,0,8,5,6,5,7,14,7,11,13,10,10,11,14,9,7,12,10,5,10,7,6,7,10,8,14,12,7,7,9,7,6,10,6,6,8,8,16,9,17,10,9,12,7,7,8,10,10,8,5,8,19,6,7,8,6,6,5,10,10,9,7,6,7,11,7,7,8,17,8,10,6,8,6,7,7,13,6,10,8,6,6,6,6,8,7,7,7,8,9,21,8,11,15,11,8,4,10,12,12,11,10,4,6,7,4,6,5,5,5,13,9,9,14,15,14,21,16,13,14,17,8,5,7,8,8,17,6,11,10,7,9,7,4,5,4,20,17,9,12,24,14,10,13,14,11,9,10,4,6,17,17,20,14,12,10,1,5,13,13,9,13,22,19,23,16,25,21,2,17,14,8,10,12,17,14,15,12,12,6,4,11,12,3,7,11,5,15,14,27,17,21,21,13,5,1,3,8,8,14,10,9,18,12,13,17,12,10,6,12,15,8,11,9,12,9,17,16,3,0,1,-1,3,4,8,11,8,17,14,13,14,11,13,13,17,11,16,17,12,15,10,11,7,10,9,7,10,30,27,5,7,8,13,14,13,14,14,14,10,13,12,17,8,10,12,9,12,13,9,10,10,10,11,29,37,5,8,14,15,14,13,11,14,9,11,11,16,14,10,6,12,6],
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
