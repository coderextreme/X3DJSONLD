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
    GeoViewpoint(description='GeoViewpoint_3_05',position=(36.498489565924736,-76.41890623850853,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.498489565924736,-76.41890623850853,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA0-10.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA0-11.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA1-10.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA1-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA0-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.458645814959944,-76.45052082260739,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[22,24,14,22,21,16,19,21,17,18,20,19,22,25,21,18,20,21,22,22,22,17,23,22,23,23,19,15,19,17,19,19,22,23,17,19,23,19,21,22,23,20,22,25,24,21,23,24,21,22,23,22,20,18,10,14,16,23,21,21,19,16,16,21,24,16,24,24,20,21,16,24,24,28,23,24,23,22,10,13,16,13,14,17,19,12,8,17,12,12,16,17,22,24,21,22,19,19,19,26,23,21,26,22,16,23,18,17,10,12,9,12,7,4,11,13,11,12,22,24,22,23,26,24,22,19,18,21,17,23,18,17,18,13,10,15,14,14,15,17,16,18,18,21,17,15,14,26,20,25,25,21,19,20,23,20,16,16,17,16,8,13,14,14,15,19,19,22,23,20,20,23,22,17,19,22,25,14,19,20,22,19,15,18,21,20,15,12,17,11,18,14,16,14,16,13,26,18,18,18,18,23,20,21,24,27,25,22,20,16,20,19,20,19,18,27,23,27,14,17,16,17,18,21,20,24,27,20,23,20,21,19,25,22,18,22,18,17,12,17,18,20,18,16,22,21,16,18,23,21,19,20,19,23,25,19,24,23,24,18,20,19,19,19,21,17,15,20,20,18,15,24,23,18,20,27,20,20,19,22,18,21,21,23,21,22,18,19,17,13,18,15,18,16,21,19,20,20,22,19,18,20,19,22,19,21,23,24,23,25,23,23,16,19,22,25,19,22,14,18,11,16,13,17,16,17,17,17,18,25,17,18,19,21,23,20,21,19,23,18,17,23,21,22,19,16,20,16,18,13,16,17,20,18,21,16,17,18,17,19,19,22,24,22,22,26,25,20,21,21,22,22,14,11,17,12,14,19,15,20,21,19,19,22,17,22,23,16,19,18,11,15,23,18,25,20,20,21,15,17,20,15,11,18,19,24,22,16,17,21,20,17,21,18,14,9,11,11,12,20,24,22,19,19,12,22,22,24,20,21,21,25,22,18,22,25,26,23,25,17,21,7,11,11,11,14,22,15,10,10,18,12,13,12,13,10,8,6,2,7,7,8,5,6,6,11,5,7,11,11,11,16,29,21,18,15,15,17,17,7,6,10,7,5,7,7,4,5,3,5,7,5,5,4,11,11,11,17,18,24,15,13,16,22,12,6,3,4,10,8,10,10,4,11,6,6,5,6,4,6,11,11,11,15,19,19,14,13,18,20,4,4,9,6,8,7,7,3,6,5,8,9,2,1,0,2,11,11,11,18,20,16,16,19,20,15,18,19,8,7,6,8,12,9,8,6,7,4,5,6,6,3,11,17,19,24,19,15,18,8,21,15,15,16,13,7,0,8,5,3,8,6,5,5,4,4,4,4,18,23,22,19,18,19,15,20,18,15,18,15,14,10,12,16,22,13,12,13,3,4,6,7,4,2,23,18,23,20,20,19,16,16,14,18,16,16,12,16,19,22,20,15,16,17,7,4,8,4,9,9],
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
