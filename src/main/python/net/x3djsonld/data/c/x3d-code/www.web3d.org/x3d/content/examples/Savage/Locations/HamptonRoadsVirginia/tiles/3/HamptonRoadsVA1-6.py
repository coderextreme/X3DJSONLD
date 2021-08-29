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
    GeoViewpoint(description='GeoViewpoint_3_16',position=(36.41880206399515,-76.3556770703108,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.41880206399515,-76.3556770703108,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA2-12.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA2-13.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA3-12.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA3-13.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA1-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.37895831303036,-76.38729165440967,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[9,10,12,18,22,18,5,3,4,2,5,3,2,5,2,3,3,4,13,15,8,11,7,0,10,13,13,12,11,14,15,12,3,6,1,3,4,3,3,1,2,4,14,15,17,20,18,11,11,0,0,22,12,13,20,14,15,15,4,3,3,4,5,0,3,15,3,15,15,16,17,14,18,13,14,13,3,3,15,12,17,17,14,15,11,3,4,10,8,16,15,18,18,18,17,13,13,13,3,5,5,10,5,5,11,14,15,15,20,20,13,9,17,12,14,13,10,15,20,17,19,8,3,4,8,5,5,4,8,7,17,14,14,17,16,16,17,7,10,10,10,12,11,16,17,8,16,8,11,10,6,6,7,14,14,7,10,10,12,18,21,17,26,19,13,3,11,22,17,2,8,7,9,5,14,13,8,8,11,12,20,6,12,13,14,16,18,18,19,17,11,3,7,4,1,4,5,6,10,13,9,12,10,10,14,9,7,11,14,13,19,11,19,17,19,15,12,4,5,8,2,4,4,9,15,21,12,13,6,11,4,8,17,9,15,12,17,17,12,19,21,9,13,12,10,4,4,4,8,9,20,6,17,13,4,8,9,4,3,7,14,16,10,13,16,18,17,16,9,9,7,6,3,2,2,6,4,6,5,3,7,5,4,4,4,2,15,19,10,18,17,16,17,16,15,7,13,9,6,3,6,5,2,5,3,6,5,5,4,3,4,6,15,17,14,13,15,15,20,19,16,15,2,4,14,17,15,12,5,3,5,3,4,3,1,3,3,4,11,12,13,14,16,14,23,14,18,14,8,4,6,2,6,6,18,15,15,13,3,3,4,1,2,5,19,14,18,11,15,13,18,15,16,15,9,3,6,5,4,11,14,8,13,17,4,3,1,6,4,3,12,14,13,15,16,15,12,17,17,13,8,1,4,5,8,8,9,8,8,8,4,5,4,4,4,5,15,13,18,15,18,16,15,13,16,16,11,10,7,2,2,4,10,7,10,10,8,5,6,9,9,6,15,15,13,15,17,17,16,16,12,16,17,12,7,4,7,6,11,11,7,10,8,13,9,6,5,16,14,18,16,14,11,17,14,13,14,15,14,16,11,10,9,8,11,9,11,11,10,8,8,6,10,9,16,17,16,14,17,20,22,11,15,17,13,20,7,7,10,11,9,14,4,2,3,2,2,5,8,14,15,17,18,23,21,21,21,21,19,13,20,15,16,10,8,10,10,15,3,4,3,2,6,2,4,11,16,16,18,21,23,21,16,14,20,16,19,15,9,6,9,7,10,9,1,2,4,5,4,3,3,9,22,23,21,19,18,18,20,20,21,13,20,16,11,6,2,4,3,3,4,4,3,7,5,4,5,8,19,17,21,21,19,15,18,16,16,15,19,13,12,13,3,4,1,1,3,4,3,1,3,13,8,9,14,19,18,15,16,18,16,17,20,17,17,14,13,13,3,3,6,5,4,4,3,2,3,3,8,8],
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
