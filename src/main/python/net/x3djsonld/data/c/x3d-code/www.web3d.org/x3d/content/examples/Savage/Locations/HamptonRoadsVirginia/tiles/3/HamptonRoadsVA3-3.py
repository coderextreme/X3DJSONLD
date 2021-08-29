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
    GeoViewpoint(description='GeoViewpoint_3_33',position=(36.259427060135984,-76.54536457490397,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.259427060135984,-76.54536457490397,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA6-6.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA6-7.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA7-6.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA7-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA3-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.21958330917119,-76.57697915900283,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[12,17,16,15,4,17,7,-1,0,-1,-1,5,6,5,6,10,4,8,11,7,7,12,23,18,9,8,16,19,12,9,4,10,3,7,8,5,2,0,0,2,3,1,11,3,6,4,10,9,14,15,12,15,9,9,5,9,5,5,6,7,8,13,7,5,-1,5,11,6,7,6,6,7,7,7,11,14,10,9,35,11,8,7,10,6,5,0,8,-3,-9,-6,-4,-1,8,9,5,7,5,6,10,7,14,14,22,14,14,9,15,3,1,7,5,5,0,4,-1,7,6,7,6,14,6,3,4,11,15,14,12,10,11,20,14,6,1,0,-1,0,0,-8,0,0,6,2,1,3,9,11,8,7,9,12,12,16,11,10,13,13,22,14,0,-1,2,1,-3,0,0,0,1,-1,1,0,4,11,15,8,5,19,13,11,15,16,13,17,16,9,0,2,12,8,1,0,0,0,0,1,8,8,5,4,4,5,11,6,6,8,8,10,17,20,16,1,-1,1,-1,5,4,0,0,0,9,1,0,3,8,7,7,5,9,4,8,7,8,11,12,12,9,0,-1,9,7,6,4,0,0,-1,-1,0,-1,-1,6,5,8,7,13,5,4,7,4,7,10,10,1,-1,-2,9,6,6,4,4,0,0,1,-1,0,-1,4,6,11,1,6,4,3,5,2,0,6,8,11,11,7,5,0,1,2,0,0,1,1,0,0,4,10,1,1,4,5,9,15,9,7,8,6,8,11,7,18,9,3,-1,-3,0,0,7,11,-2,0,0,1,0,5,4,5,8,7,6,8,17,21,12,16,14,19,10,6,8,5,5,3,0,1,1,-1,3,5,5,7,4,4,5,5,8,8,5,5,9,17,9,11,9,8,6,0,1,2,1,0,2,5,5,2,4,5,7,2,4,7,7,4,15,18,14,12,9,8,8,12,9,0,1,0,0,0,0,2,0,5,6,6,4,5,3,6,10,12,10,14,10,17,18,11,7,8,4,4,0,0,0,0,0,-1,1,0,7,7,5,13,6,14,10,8,13,18,13,17,11,15,9,9,1,0,0,0,0,1,6,5,6,8,6,7,24,10,7,12,9,12,11,12,9,23,17,5,6,3,1,0,0,0,0,0,0,9,7,11,8,5,-2,3,6,10,5,8,11,10,13,6,8,10,6,1,3,1,0,0,0,0,0,0,0,0,0,0,0,1,9,6,4,8,11,5,8,11,12,11,10,9,5,2,0,0,0,0,0,0,0,0,0,0,0,0,4,13,5,14,15,14,16,14,9,10,21,7,6,7,9,5,10,2,7,8,0,0,0,0,0,0,6,9,5,9,2,17,5,20,16,20,17,7,6,4,13,1,7,7,8,8,2,-1,0,0,0,0,0,0,0,0,0,0,7,17,16,20,7,5,11,7,1,3,6,7,10,5,5,2,1,0,0,0,0,0,0,0,0,0,0,21,17,21,6,7,8,11,2,2,7,8,9,6,5,2,1,0,0,0,0,0,0,0,0,0,0],
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
