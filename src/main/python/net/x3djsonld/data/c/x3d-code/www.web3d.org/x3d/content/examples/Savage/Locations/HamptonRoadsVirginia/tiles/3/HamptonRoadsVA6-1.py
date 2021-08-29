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
    GeoViewpoint(description='GeoViewpoint_3_61',position=(36.02036455434723,-76.67182291129942,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.02036455434723,-76.67182291129942,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA12-2.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA12-3.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA13-2.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA13-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA6-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(35.98052080338244,-76.70343749539828,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[27,26,29,26,26,25,24,18,19,21,22,29,17,18,14,17,20,3,13,7,12,20,20,19,21,15,26,25,27,26,25,27,28,31,25,23,19,19,16,12,14,21,4,4,16,9,12,16,20,18,15,12,26,28,29,27,26,25,29,22,24,29,26,28,20,15,15,12,14,2,2,14,16,13,19,17,13,16,25,24,35,27,27,26,29,25,24,23,23,18,16,18,15,14,22,14,9,19,16,17,24,17,18,19,25,31,32,32,26,25,26,25,24,32,26,26,20,20,22,17,3,22,23,27,21,22,9,30,16,19,26,25,26,30,34,31,28,30,22,25,29,29,21,13,6,9,25,26,23,29,23,18,14,22,15,22,38,32,37,34,24,33,30,29,25,27,16,15,12,10,21,13,15,22,28,23,17,22,18,20,17,15,29,36,30,30,25,24,37,18,20,26,21,16,3,17,18,21,24,20,16,18,20,25,20,17,21,21,29,37,35,32,34,27,21,25,26,23,24,11,21,24,19,30,23,24,23,17,20,16,27,19,21,20,30,36,32,33,30,25,17,17,29,15,12,15,20,21,27,19,33,22,22,20,19,21,21,27,19,22,28,25,26,24,19,27,28,19,24,19,23,17,25,25,17,22,24,28,18,31,36,21,14,0,0,0,27,30,27,20,29,34,31,36,27,25,20,15,17,31,30,19,21,29,22,21,0,0,0,0,0,0,32,40,38,22,17,35,35,27,25,21,17,16,19,22,20,21,30,3,0,0,0,0,0,0,0,0,30,21,22,20,20,23,28,27,22,24,13,17,21,20,28,17,3,0,0,0,0,0,0,0,0,0,29,18,18,21,19,21,25,21,25,31,16,19,17,21,33,6,0,0,0,0,0,0,0,0,0,0,15,17,17,19,17,17,26,26,25,28,26,20,22,23,20,0,0,0,0,0,0,0,0,0,0,0,20,21,22,26,21,22,15,21,20,21,20,19,18,20,0,0,0,0,0,0,0,0,0,0,0,0,23,26,30,21,27,26,25,28,29,35,26,24,21,19,0,0,0,0,0,0,0,0,0,0,0,0,24,26,15,26,21,20,25,17,21,27,25,25,30,25,0,0,0,0,0,0,0,0,0,0,0,0,13,12,16,21,19,20,24,21,22,27,25,20,25,22,10,0,0,0,0,0,0,0,0,0,0,0,9,10,11,8,5,19,18,15,21,17,21,29,21,22,0,0,0,0,0,0,0,0,0,0,0,0,16,16,15,9,6,11,18,16,19,21,24,18,17,15,16,0,0,0,0,0,0,0,0,0,0,0,20,17,22,17,13,14,16,17,18,20,17,18,18,19,20,0,0,0,0,0,0,0,0,0,0,0,20,17,15,17,6,9,9,20,19,13,10,15,19,14,17,9,0,0,0,0,0,0,0,0,0,0,22,21,11,13,13,14,13,22,20,15,12,20,12,16,17,14,0,0,0,0,0,0,0,0,0,0],
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
