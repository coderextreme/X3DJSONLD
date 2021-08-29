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
    GeoViewpoint(description='GeoViewpoint_3_06',position=(36.498489565924736,-76.3556770703108,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.498489565924736,-76.3556770703108,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA0-12.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA0-13.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA1-12.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA1-13.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA0-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.458645814959944,-76.38729165440967,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[23,25,20,21,24,20,21,24,13,14,17,14,14,10,17,20,18,21,19,22,14,18,20,19,21,21,22,20,21,22,21,23,20,27,6,8,8,4,4,7,4,5,6,9,8,6,6,8,5,5,7,5,22,24,21,22,19,24,21,18,13,7,12,8,5,5,3,7,7,8,5,5,9,4,6,4,4,10,22,20,25,21,22,18,17,10,18,8,7,6,7,8,6,8,0,7,5,7,6,6,5,5,15,18,23,22,18,19,19,26,3,5,6,7,7,3,8,8,9,4,8,7,3,6,4,5,3,14,23,23,20,25,27,24,17,15,8,9,7,5,8,5,7,8,6,6,4,3,6,5,4,10,16,18,21,21,19,23,22,22,24,3,13,7,6,6,6,7,7,8,6,7,4,3,4,4,3,14,7,4,2,14,22,27,23,23,11,9,6,9,4,4,9,5,3,4,4,5,3,5,4,4,4,17,12,11,13,15,22,20,23,12,8,3,2,4,9,8,12,5,5,3,4,2,3,2,4,3,4,3,3,0,2,4,18,19,25,7,4,6,9,8,8,3,9,7,3,3,4,5,4,3,4,2,2,3,4,2,4,6,22,21,12,4,4,0,9,6,8,10,6,3,5,5,4,1,2,2,1,1,0,7,3,4,4,7,23,18,8,4,7,8,9,1,5,5,4,6,3,6,5,4,3,2,3,3,3,3,3,3,4,4,19,20,8,8,6,7,7,6,6,5,5,7,5,5,4,5,3,3,3,1,5,2,6,21,10,8,22,26,5,8,5,7,5,4,7,2,4,5,5,3,1,3,3,4,1,4,3,2,9,9,21,17,18,22,14,4,3,4,5,4,3,3,3,3,4,4,3,4,7,1,1,2,2,2,5,18,19,17,9,22,23,4,2,6,6,2,4,3,3,5,5,3,4,4,4,5,4,4,5,5,10,12,5,5,7,12,17,18,5,6,3,4,3,4,9,8,8,4,1,3,5,3,4,2,5,7,4,5,11,15,7,5,6,10,2,5,5,6,9,4,4,4,7,4,3,4,3,1,2,5,6,7,13,10,18,11,4,5,3,8,6,9,6,8,7,6,6,4,13,12,7,3,3,2,3,7,10,5,7,11,5,5,6,5,4,5,7,5,3,5,24,20,4,6,5,7,9,3,3,3,4,3,18,4,14,4,4,6,2,4,4,6,11,3,4,2,5,6,2,5,3,3,3,5,3,3,4,4,4,6,4,3,3,7,3,3,4,2,11,4,3,2,3,4,4,1,4,3,2,2,2,2,2,3,6,5,3,4,7,16,4,6,8,5,4,4,4,3,2,6,4,3,3,5,3,5,5,3,3,1,-1,7,14,19,15,16,2,5,9,18,19,13,4,3,3,2,2,1,4,2,5,4,1,1,8,15,4,12,13,-1,13,14,9,10,12,18,22,18,5,3,4,2,5,3,2,5,2,3,3,4,13,15,8,11,7,0,10,13],
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
