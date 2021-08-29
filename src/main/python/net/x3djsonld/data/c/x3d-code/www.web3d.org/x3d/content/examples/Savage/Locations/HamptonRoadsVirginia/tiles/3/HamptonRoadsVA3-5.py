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
    GeoViewpoint(description='GeoViewpoint_3_35',position=(36.259427060135984,-76.41890623850853,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.259427060135984,-76.41890623850853,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA6-10.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA6-11.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA7-10.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA7-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA3-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.21958330917119,-76.45052082260739,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[17,15,8,18,25,14,16,8,11,14,11,5,9,10,4,8,8,8,10,4,5,10,8,10,10,21,11,9,6,6,14,19,17,14,4,9,12,21,9,6,5,5,5,7,8,6,5,13,5,14,13,15,4,8,6,8,3,7,7,9,9,5,5,5,6,4,11,7,5,5,4,4,5,9,13,14,8,10,7,6,5,5,6,4,6,11,8,7,10,14,14,14,5,6,7,8,9,11,5,8,7,8,10,6,8,9,4,7,8,7,7,4,17,17,17,10,11,5,7,9,6,6,10,7,7,4,5,8,10,8,9,5,7,5,7,4,4,13,10,18,16,5,10,8,5,5,5,7,6,7,7,10,12,16,12,14,15,17,11,16,14,14,11,5,9,6,12,5,5,4,4,2,3,0,3,6,12,5,5,9,15,17,17,15,14,6,12,10,6,9,1,-1,-1,4,7,5,10,6,7,6,3,2,1,7,4,7,8,7,10,8,5,8,14,11,9,6,8,4,1,10,3,3,10,9,7,5,2,-4,1,7,5,5,7,10,13,9,8,16,8,8,6,9,2,5,5,3,4,3,8,12,8,6,7,5,8,14,5,5,6,6,17,12,8,13,10,6,8,6,8,5,5,5,11,14,13,10,8,10,3,8,6,3,7,4,7,2,14,12,10,7,18,13,19,12,19,6,11,14,4,7,8,6,9,-2,7,7,9,1,7,4,7,10,11,5,7,4,9,10,14,7,11,3,6,3,4,6,1,0,4,13,9,7,5,0,10,9,7,6,7,6,10,3,8,9,5,16,5,-1,4,5,2,5,3,7,4,5,18,10,0,2,4,5,11,13,10,9,9,16,11,7,5,5,7,5,8,9,7,2,6,11,10,12,8,12,11,0,3,2,4,7,15,6,7,8,9,11,5,5,11,6,10,8,3,8,5,2,5,3,7,2,5,2,0,7,6,2,18,9,6,7,19,17,10,12,10,8,17,10,10,5,7,6,4,5,9,4,1,9,3,1,6,6,4,11,12,11,16,8,15,11,11,10,9,18,23,11,11,5,12,4,6,5,6,3,4,0,0,3,3,5,7,7,15,21,12,17,18,13,12,8,7,17,21,10,7,5,9,7,5,3,0,5,0,0,5,9,8,14,20,13,17,17,12,18,8,8,11,6,6,7,6,4,6,-1,4,5,6,1,7,6,6,7,13,14,8,13,7,7,10,5,6,7,7,5,7,3,11,1,10,9,6,5,0,2,3,5,15,9,10,9,13,14,10,6,6,5,6,1,9,1,8,6,2,6,6,6,10,7,9,5,7,7,18,15,20,23,13,14,7,12,12,7,4,6,6,4,5,2,9,7,5,9,10,16,13,8,5,4,16,15,19,14,9,5,8,6,6,6,6,8,6,4,9,10,6,4,5,12,6,3,5,11,6,8,17,14,14,13,14,6,10,4,11,11,6,9,6,5,9,10,10,6,6,9,5,13,7,9,3,5],
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
