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
    GeoViewpoint(description='GeoViewpoint_3_36',position=(36.259427060135984,-76.3556770703108,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.259427060135984,-76.3556770703108,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA6-12.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA6-13.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA7-12.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA7-13.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA3-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.21958330917119,-76.38729165440967,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[21,5,11,8,7,6,4,7,8,4,14,14,18,13,9,6,8,8,-1,3,5,3,8,4,4,10,15,8,9,8,13,12,6,18,5,13,14,17,5,0,14,22,21,21,15,7,6,5,1,5,7,7,10,5,5,9,14,8,9,4,5,8,9,5,7,8,10,5,5,11,10,3,5,11,5,6,5,5,6,6,11,12,7,5,6,10,11,13,11,11,7,10,8,6,7,4,7,4,6,12,7,6,8,5,8,8,5,5,6,6,14,17,10,6,5,4,6,6,6,9,3,7,6,6,6,7,5,4,1,10,14,15,23,9,3,6,5,8,6,6,3,5,4,7,8,5,4,5,9,12,8,5,7,5,8,10,17,21,22,19,15,6,7,5,11,12,7,9,12,1,11,3,6,6,6,7,8,4,7,7,4,8,7,4,16,18,4,5,7,17,11,9,9,10,8,6,8,7,3,6,5,5,4,5,8,5,11,9,10,6,6,4,12,10,5,5,7,9,7,6,8,7,6,8,7,8,5,5,9,7,7,9,9,9,6,6,6,6,9,8,11,8,5,7,7,9,8,7,8,5,5,3,1,15,9,16,11,11,4,15,2,0,6,6,7,9,4,5,7,11,5,6,5,6,6,4,6,8,8,6,15,17,13,9,7,8,10,4,5,6,5,3,3,2,4,6,7,8,5,4,9,6,7,7,12,18,14,17,5,7,6,9,6,9,4,9,5,3,8,6,6,5,3,6,4,5,5,7,10,11,6,5,2,8,9,7,9,8,13,13,5,10,9,5,6,6,5,7,10,4,3,5,5,5,1,5,5,6,5,9,5,6,3,7,7,5,5,4,5,8,7,9,9,4,0,3,3,4,5,5,7,6,7,3,6,8,7,6,4,7,2,3,4,7,10,6,6,8,7,7,6,6,1,1,5,8,7,2,5,5,5,5,6,4,7,2,6,5,3,4,9,8,5,0,3,7,5,4,1,3,5,5,7,5,8,7,3,5,5,5,5,5,3,3,6,5,5,5,6,5,6,2,1,3,7,6,6,6,3,8,3,9,7,1,5,8,4,6,0,0,2,7,3,8,4,0,4,6,4,0,7,7,8,6,4,4,10,4,5,6,7,6,5,5,6,0,0,3,8,3,6,0,1,1,0,6,2,1,2,4,3,4,6,7,9,5,2,4,-4,4,5,4,4,0,0,0,0,0,0,0,0,0,0,0,7,4,6,2,6,3,8,7,7,4,6,7,7,4,0,8,7,19,0,5,11,6,0,0,0,2,6,6,9,3,5,5,7,11,5,5,4,7,4,7,6,7,2,6,7,8,6,5,6,0,0,0,0,2,9,4,5,5,5,2,6,1,2,9,8,-1,11,10,10,12,14,8,8,14,4,3,0,0,0,0,0,5,7,4,3,5,5,4,2,4,5,1,6,15,9,9,16,13,14,15,1,7,6,0,0,0,0,3,5,7,0,6,6,4,5,3],
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
