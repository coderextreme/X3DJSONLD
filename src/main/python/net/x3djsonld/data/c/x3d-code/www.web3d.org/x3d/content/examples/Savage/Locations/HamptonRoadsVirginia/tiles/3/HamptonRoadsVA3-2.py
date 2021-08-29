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
    GeoViewpoint(description='GeoViewpoint_3_32',position=(36.259427060135984,-76.6085937431017,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.259427060135984,-76.6085937431017,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA6-4.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA6-5.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA7-4.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA7-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA3-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.21958330917119,-76.64020832720055,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[19,18,20,19,20,19,19,17,8,15,20,17,20,22,19,20,24,13,25,12,21,25,21,24,16,12,23,22,23,21,20,26,28,37,21,13,21,22,35,17,18,23,15,18,19,19,18,18,19,19,18,16,22,21,20,29,33,24,30,35,26,20,22,27,27,26,30,24,19,20,19,22,15,13,16,25,19,9,33,33,31,27,27,31,27,29,25,17,27,26,26,20,22,26,20,16,18,16,16,19,17,24,29,35,26,30,24,31,22,31,25,28,28,36,25,38,28,24,17,27,23,26,18,20,18,18,23,29,20,14,25,31,23,30,26,28,31,27,27,28,30,32,27,33,35,34,38,24,19,33,26,14,25,21,15,14,39,30,22,36,33,38,32,30,28,23,31,23,24,25,33,30,23,32,32,24,24,18,20,17,17,22,33,25,22,30,28,33,17,27,31,26,24,22,22,22,25,21,34,29,24,18,18,22,17,17,13,16,32,30,23,27,29,25,30,20,23,14,19,22,31,31,21,23,19,22,24,10,15,9,9,23,15,16,32,28,23,19,22,26,23,19,25,21,15,22,19,19,24,20,22,18,9,9,9,9,9,9,6,9,21,15,17,23,26,21,9,22,23,9,9,24,31,9,9,9,13,9,9,9,9,9,9,8,3,1,9,9,9,9,9,9,9,9,9,9,20,10,11,11,17,9,9,9,13,9,9,9,10,4,7,11,26,10,18,21,16,24,19,6,9,25,17,19,15,16,10,9,10,9,8,15,14,12,16,19,25,11,33,21,30,30,17,26,31,20,24,20,20,16,13,17,20,9,10,7,12,9,20,15,27,19,19,16,30,28,36,41,37,30,32,19,37,33,29,16,10,9,9,9,9,10,12,9,13,17,16,14,17,17,32,39,28,22,36,33,27,25,35,27,18,11,9,9,9,9,13,16,14,19,22,19,24,21,19,12,27,25,27,27,24,29,25,18,16,16,9,9,9,17,15,13,14,15,13,24,24,22,17,30,19,17,23,23,29,25,21,22,16,15,17,9,9,9,18,16,20,23,28,20,16,19,27,32,21,18,22,17,30,28,24,31,22,19,19,11,9,9,11,20,21,29,28,19,25,22,27,28,34,25,24,21,20,23,22,23,28,25,24,20,9,19,9,8,18,20,22,18,30,27,28,20,22,19,25,24,25,19,18,6,26,32,22,26,20,16,9,12,9,15,21,22,23,26,27,28,26,26,24,22,21,21,19,26,14,11,27,9,9,9,9,9,10,10,20,18,17,27,22,23,30,24,25,32,22,32,27,20,18,20,17,14,9,9,9,16,16,15,20,15,12,15,23,17,20,23,20,21,25,29,31,28,25,24,27,24,23,20,9,14,15,13,22,18,25,27,15,17,18,18,20,31,27,25,27,24,27,29,28,24,25,23,19,17,20,15,15,13,21,23,28,21,21,22,18,23,21,27,29,28,31,28,27,28,27,28,26,21,21,21],
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
