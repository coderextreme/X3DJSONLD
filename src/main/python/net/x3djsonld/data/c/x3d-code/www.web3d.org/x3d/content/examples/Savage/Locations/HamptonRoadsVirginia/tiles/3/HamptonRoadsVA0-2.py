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
    GeoViewpoint(description='GeoViewpoint_3_02',position=(36.498489565924736,-76.6085937431017,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.498489565924736,-76.6085937431017,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA0-4.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA0-5.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA1-4.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA1-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA0-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.458645814959944,-76.64020832720055,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[19,18,18,17,24,20,26,26,14,13,22,17,13,24,21,20,14,23,18,15,17,19,18,19,21,16,27,24,19,22,15,15,16,19,14,25,12,19,18,16,20,17,15,16,21,9,17,18,15,21,22,18,15,22,18,14,18,22,15,21,15,15,23,17,13,10,17,18,20,11,14,15,13,29,26,20,18,18,24,18,13,14,25,23,18,21,15,17,13,29,29,30,25,21,21,11,19,19,15,28,15,17,22,24,24,24,20,23,31,28,16,14,27,26,15,21,26,27,17,20,16,29,20,23,26,26,25,27,25,30,39,23,25,18,28,19,20,22,27,27,28,24,21,18,26,28,23,23,19,20,13,14,31,20,20,19,19,22,21,25,26,22,24,18,14,16,17,13,15,18,28,26,26,15,15,16,17,16,30,22,23,31,22,25,23,31,22,22,22,22,19,19,20,30,12,23,17,14,20,22,16,14,16,20,17,18,16,21,29,24,28,33,36,20,20,23,23,22,19,12,15,24,13,15,15,17,16,15,15,25,15,22,17,14,39,34,40,31,23,25,15,19,23,13,20,26,19,17,16,17,13,17,19,17,17,15,18,31,26,21,30,18,25,22,28,21,22,22,19,25,30,26,17,19,18,15,18,17,21,18,19,19,19,24,28,29,21,23,21,26,27,21,21,22,24,30,32,12,26,25,19,21,29,27,23,22,20,17,21,25,30,28,21,23,25,23,28,33,21,16,11,16,25,20,29,26,29,16,18,12,32,20,26,22,22,26,20,24,32,29,19,23,22,29,19,25,29,27,25,30,35,20,26,33,22,24,23,21,28,22,24,20,21,23,27,18,21,26,25,24,24,33,27,17,29,25,31,30,23,30,28,24,25,26,20,20,28,22,17,29,30,22,23,36,19,20,21,31,26,30,30,20,27,20,19,29,35,31,26,20,22,20,23,16,17,25,25,24,20,25,21,22,23,24,26,24,26,23,20,18,24,18,32,34,18,31,24,17,20,23,20,15,17,22,25,18,20,24,24,22,22,24,25,20,18,18,29,30,26,23,29,21,21,20,25,22,19,26,21,33,17,26,39,21,26,27,25,25,21,30,22,21,31,31,29,24,24,24,27,20,22,27,26,25,21,29,24,27,29,21,21,25,30,17,20,18,25,22,32,27,32,22,23,23,22,20,20,14,25,25,20,23,24,32,24,23,25,23,25,33,31,22,21,16,30,30,32,29,29,35,19,17,19,31,24,24,24,33,25,26,25,19,20,26,32,21,35,34,27,27,28,30,34,26,30,30,25,17,21,23,22,20,25,26,22,25,21,16,15,18,19,24,25,24,33,26,20,32,20,39,22,23,22,19,20,23,17,14,24,20,31,25,22,22,20,17,21,21,32,26,18,18,27,21,20,28,19,30,15,27,23,20,21,21,21,25,28,22,26,24,16,17,16,25,26,23,18,20,27,19,17,22,21,33,21,27,17,22,25,17],
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
