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
    GeoViewpoint(description='GeoViewpoint_3_51',position=(36.100052056276816,-76.67182291129942,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.100052056276816,-76.67182291129942,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA10-2.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA10-3.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA11-2.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA11-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA5-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.060208305312024,-76.70343749539828,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[29,30,27,26,32,33,29,23,23,23,24,19,20,21,17,22,16,13,15,18,21,19,16,18,26,22,28,28,28,29,30,33,32,23,29,26,23,26,21,17,19,16,22,14,19,21,19,20,14,24,12,27,26,30,28,26,29,25,26,25,24,25,32,29,17,19,15,11,15,20,18,23,15,18,10,7,7,15,28,27,30,32,32,27,24,25,27,23,27,27,23,15,15,17,27,20,17,20,22,20,16,14,13,18,31,30,30,35,29,27,28,25,30,28,19,27,12,14,17,24,21,24,21,30,26,22,21,20,19,22,31,29,22,28,29,25,33,29,22,15,14,16,19,14,22,23,26,28,29,25,35,20,26,20,19,28,31,25,24,26,25,28,28,15,23,18,18,16,19,17,26,24,27,24,23,28,25,24,27,28,22,22,23,32,32,31,20,30,20,23,20,19,19,19,24,26,28,22,25,23,38,27,30,33,31,25,24,23,27,28,22,18,30,23,19,21,27,22,24,23,19,24,24,24,26,25,23,24,30,24,21,24,24,18,34,25,25,28,28,31,32,32,40,29,28,27,25,28,30,30,29,30,26,29,28,29,27,30,24,29,35,25,22,27,31,33,32,32,25,28,24,31,30,33,28,25,24,29,29,30,25,29,26,29,30,18,35,25,25,24,23,23,28,24,26,24,29,24,24,24,22,25,25,24,33,24,28,34,27,24,25,26,36,33,31,37,25,25,24,30,25,33,34,20,26,27,24,23,27,25,26,25,25,31,36,30,21,16,35,33,33,32,25,29,27,17,26,22,17,16,22,25,35,22,25,31,23,26,29,19,18,21,22,20,31,34,36,34,26,27,23,21,20,24,19,17,10,11,31,14,35,23,24,24,17,17,16,12,13,12,28,26,28,26,24,31,28,29,23,25,22,17,35,12,19,8,14,24,18,25,21,25,20,13,13,11,22,25,25,25,25,25,25,27,23,28,25,30,24,20,20,16,12,12,17,29,23,18,17,12,17,11,25,22,24,31,35,39,39,25,25,33,28,26,21,19,20,17,17,19,22,20,1,16,24,23,11,5,26,26,27,36,35,37,36,37,33,24,27,30,25,24,21,12,13,15,22,19,12,15,11,7,12,10,31,27,28,28,28,26,28,26,25,25,27,26,25,23,20,22,15,16,13,3,12,1,6,2,-1,5,26,25,27,16,24,33,24,22,18,20,33,22,22,21,21,27,16,8,13,15,11,13,0,6,9,5,26,24,26,29,23,27,21,14,19,29,11,24,21,15,18,21,24,21,17,15,16,9,1,17,11,9,26,24,23,24,27,14,12,23,25,21,20,22,23,23,22,25,18,18,24,12,0,11,22,18,14,10,31,28,27,31,19,25,26,15,23,20,24,26,24,22,16,23,17,2,3,5,18,18,20,19,18,16,27,26,29,26,26,25,24,18,19,21,22,29,17,18,14,17,20,3,13,7,12,20,20,19,21,15],
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
