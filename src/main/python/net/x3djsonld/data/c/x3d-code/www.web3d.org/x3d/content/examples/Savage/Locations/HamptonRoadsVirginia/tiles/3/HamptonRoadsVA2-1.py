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
    GeoViewpoint(description='GeoViewpoint_3_21',position=(36.33911456206557,-76.67182291129942,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.33911456206557,-76.67182291129942,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA4-2.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA4-3.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA5-2.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA5-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA2-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.299270811100776,-76.70343749539828,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[16,24,32,40,25,22,29,29,34,21,19,26,19,25,27,19,19,23,21,20,27,31,30,31,32,23,31,21,24,23,28,24,26,38,36,33,30,20,13,25,34,24,15,29,26,25,24,39,27,29,26,27,31,30,24,36,37,36,33,37,23,31,26,18,26,29,25,28,29,24,26,34,33,37,27,25,24,21,22,25,26,30,28,36,40,34,23,21,27,26,22,32,18,23,26,16,21,25,30,26,27,22,25,23,33,35,30,35,37,36,29,25,33,24,24,24,20,26,26,24,26,26,32,26,23,27,20,22,25,24,30,31,32,33,30,24,31,32,25,33,32,22,24,25,29,22,19,34,27,35,26,21,20,27,19,24,32,32,32,37,28,26,25,26,28,23,11,26,26,22,29,23,24,22,28,40,22,27,16,27,25,20,35,31,33,25,32,24,23,22,23,30,24,23,27,31,34,19,25,25,19,25,26,26,15,22,19,20,35,33,30,20,21,26,29,27,26,19,28,30,29,31,40,28,34,17,21,20,20,25,25,17,18,16,28,29,30,45,38,38,27,25,23,24,30,36,34,34,30,33,36,26,26,31,25,28,21,21,22,15,28,32,24,22,24,26,20,23,22,22,28,38,34,36,34,43,28,27,19,20,20,25,34,27,27,25,31,26,20,23,19,28,21,31,37,34,22,21,30,24,34,28,23,26,23,23,22,29,17,31,34,27,30,31,23,29,22,28,25,33,33,29,25,27,33,31,17,34,28,23,27,35,26,30,22,21,17,22,23,26,29,28,21,23,34,29,20,29,19,20,23,25,22,23,30,25,29,29,28,28,26,22,18,26,24,23,27,25,28,28,29,29,19,26,24,22,24,21,21,23,24,22,26,27,25,20,21,21,28,24,27,29,35,27,29,24,26,23,21,11,22,40,20,16,28,23,18,27,15,24,18,23,22,22,14,20,23,31,28,26,22,23,22,16,22,23,16,19,20,21,22,19,18,18,17,19,14,19,27,26,31,29,25,24,25,22,17,22,15,18,17,17,18,25,19,16,24,21,21,24,29,16,19,23,28,19,22,16,24,24,21,20,17,19,29,24,24,25,19,17,14,18,18,13,21,12,21,34,38,29,19,27,18,16,23,30,15,17,21,35,28,21,17,21,21,23,29,22,21,14,19,16,16,25,26,25,18,29,16,18,15,27,23,34,28,28,22,23,24,18,25,36,32,28,26,15,17,25,15,27,19,22,15,16,16,19,20,22,30,27,33,19,21,21,23,33,31,24,25,22,29,23,23,35,26,15,20,19,24,23,35,33,25,25,29,31,31,37,35,26,26,25,24,32,34,29,24,23,18,23,33,20,32,19,21,22,7,22,33,21,22,25,17,26,20,28,21,29,22,17,36,32,21,20,17,25,13,19,22,18,30,21,22,22,26,26,23,23,23,22,28,23,26,32,30,25,31,33,28,22,20,30,16,21,24,17,20,12,22,19],
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
