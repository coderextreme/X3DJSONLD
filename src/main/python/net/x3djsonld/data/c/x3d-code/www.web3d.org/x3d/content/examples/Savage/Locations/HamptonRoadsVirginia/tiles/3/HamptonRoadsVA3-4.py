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
    GeoViewpoint(description='GeoViewpoint_3_34',position=(36.259427060135984,-76.48213540670625,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.259427060135984,-76.48213540670625,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA6-8.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA6-9.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA7-8.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA7-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA3-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.21958330917119,-76.51374999080511,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[8,7,6,17,21,17,22,16,20,13,23,18,15,18,15,17,14,17,17,7,8,5,12,8,8,17,15,7,17,14,15,12,8,15,15,17,15,19,18,18,18,18,17,13,9,17,11,6,4,6,7,11,9,11,18,12,12,17,6,7,6,9,13,24,19,15,18,17,14,12,16,10,8,5,4,9,8,4,14,16,8,13,11,8,8,8,7,10,5,13,10,15,12,11,7,6,14,12,11,10,13,11,11,7,20,17,19,15,17,13,11,12,11,13,16,15,17,18,21,18,13,21,16,13,14,11,6,4,6,8,13,18,14,13,17,15,16,21,16,18,15,19,13,15,15,15,15,15,16,14,10,9,11,15,4,9,17,18,22,16,11,5,6,7,12,14,13,10,9,15,13,12,14,13,14,16,18,15,15,13,15,15,20,23,21,20,13,10,8,10,11,17,18,19,13,10,11,13,19,14,15,18,13,15,14,9,13,17,12,11,11,14,12,11,8,8,15,12,13,10,13,13,14,13,14,16,18,16,16,12,17,18,12,10,10,7,18,11,13,9,15,13,13,17,18,7,7,13,19,9,11,17,11,16,17,16,15,12,14,13,8,8,6,8,9,6,11,19,12,4,3,5,5,23,8,7,4,7,14,19,12,17,18,12,12,17,8,10,14,7,10,7,8,5,14,11,8,6,7,8,10,6,7,9,7,10,15,13,15,12,14,14,12,16,14,8,7,13,7,8,6,5,6,13,16,10,7,6,8,8,7,6,8,8,12,12,10,11,9,8,13,14,16,14,7,4,7,7,3,12,7,8,8,1,5,2,2,7,11,10,10,12,14,7,14,18,7,9,14,5,5,5,4,3,4,10,12,12,8,6,12,10,5,4,7,11,8,8,7,10,10,11,9,14,12,7,3,12,2,5,9,9,12,15,6,10,7,8,7,11,11,17,11,10,8,15,13,9,11,12,6,5,7,9,7,6,10,10,7,4,7,5,3,7,2,7,5,11,13,15,11,18,9,10,12,9,7,5,5,4,-2,4,6,7,5,7,10,10,5,11,8,9,8,4,13,6,6,4,13,11,13,5,5,5,4,4,3,6,-1,2,5,11,3,4,7,6,17,16,8,10,8,7,7,3,8,7,9,7,6,6,5,3,2,3,12,4,10,2,13,6,6,6,6,9,6,7,8,6,7,5,16,6,9,7,10,4,4,6,3,1,3,2,5,6,12,16,16,6,7,6,8,5,7,6,7,6,5,9,7,9,5,4,7,3,8,1,4,7,6,9,13,21,8,7,5,4,10,13,15,7,5,15,7,5,5,9,8,7,3,6,7,1,15,3,6,10,7,20,13,10,10,7,6,11,10,10,13,18,0,0,3,0,0,1,11,9,11,10,3,3,4,6,9,6,7,13,6,6,7,6,5,10,13,16,0,0,0,0,1,-1,7,11,16,13,4,5,6,4,-2,3,15,6,12,6,7,9,4,11,12,17],
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
