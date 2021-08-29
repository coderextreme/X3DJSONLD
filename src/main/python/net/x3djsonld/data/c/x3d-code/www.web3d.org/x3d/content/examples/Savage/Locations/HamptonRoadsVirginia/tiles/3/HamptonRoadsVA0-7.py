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
    GeoViewpoint(description='GeoViewpoint_3_07',position=(36.498489565924736,-76.29244790211308,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.498489565924736,-76.29244790211308,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA0-14.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA0-15.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA1-14.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA1-15.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA0-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.458645814959944,-76.32406248621194,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[21,16,24,20,20,21,19,16,21,23,19,15,21,20,17,17,20,19,18,16,13,18,21,22,26,19,5,3,6,6,4,4,4,5,9,5,10,15,8,19,17,16,16,17,17,15,17,21,25,21,26,26,10,7,7,7,9,4,9,10,8,3,5,7,12,19,16,18,20,18,23,21,21,23,23,23,27,22,18,17,21,12,7,9,10,9,7,5,5,7,13,22,16,16,17,18,23,29,25,20,26,18,19,19,23,19,17,13,14,6,4,4,4,5,5,4,3,16,16,17,22,21,22,26,23,25,25,23,10,12,21,18,18,15,18,5,3,4,3,4,4,11,17,11,16,21,25,21,13,4,6,4,7,6,4,6,14,15,13,8,11,9,3,7,16,13,15,20,16,19,27,24,24,23,25,20,16,12,6,5,6,4,15,19,21,16,5,6,10,19,16,12,11,16,15,16,21,23,23,24,22,16,20,19,13,5,5,5,4,11,6,3,4,5,17,12,12,11,19,19,15,13,17,9,21,20,25,20,18,16,18,12,4,5,6,20,8,5,4,6,17,14,17,21,17,18,20,17,12,9,5,19,22,25,19,19,10,20,20,14,7,7,9,13,9,12,7,11,13,16,6,2,4,5,4,4,5,4,17,20,17,19,14,17,20,18,4,8,13,8,4,5,6,20,20,14,4,4,6,3,3,3,4,2,16,16,14,16,12,13,16,19,8,11,10,6,6,5,18,23,4,6,16,5,3,4,2,4,4,5,5,15,8,4,9,3,15,8,17,19,20,19,4,3,5,16,14,24,4,4,4,3,7,3,6,4,4,13,5,6,12,3,3,7,17,6,16,19,16,4,5,6,11,7,3,2,5,5,5,4,7,2,6,4,8,17,12,12,16,10,5,18,4,4,2,5,4,6,8,9,6,6,4,4,2,7,3,8,4,6,4,1,3,4,7,13,15,3,7,9,5,5,2,5,6,12,3,4,3,4,3,9,8,4,16,6,3,11,9,1,2,8,11,3,4,3,6,3,5,6,5,6,5,7,6,4,10,11,6,4,4,2,5,19,14,9,2,2,5,6,6,3,3,5,5,4,4,5,4,6,9,7,7,1,4,1,4,7,4,12,16,7,8,6,6,11,13,14,10,7,7,9,13,7,7,7,5,6,6,5,9,9,7,9,8,6,7,6,4,4,7,6,7,6,5,5,2,6,3,6,6,1,3,5,9,6,2,3,5,5,7,6,5,5,4,3,16,5,7,4,3,5,7,6,11,14,7,9,11,6,9,16,13,14,9,4,8,11,9,6,6,11,16,9,6,9,12,16,8,16,14,15,9,12,15,10,10,4,4,9,5,11,9,4,0,-1,8,9,14,12,11,8,4,18,12,14,8,6,10,11,10,13,15,15,13,4,15,16,14,6,2,6,4,17,13,10,9,3,11,16,20,13,10,5,7,13,6,11,13,14,5,4,16,14,5,11,1,4,2,7],
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
