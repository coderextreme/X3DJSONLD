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
    GeoViewpoint(description='GeoViewpoint_3_31',position=(36.259427060135984,-76.67182291129942,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.259427060135984,-76.67182291129942,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA6-2.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA6-3.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA7-2.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA7-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA3-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.21958330917119,-76.70343749539828,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[26,26,23,23,23,22,28,23,26,32,30,25,31,33,28,22,20,30,16,21,24,17,20,12,22,19,36,32,25,25,23,22,21,27,26,35,28,32,26,24,30,19,19,26,30,25,25,30,20,19,18,23,28,40,22,22,28,29,22,29,19,23,24,19,19,20,21,34,28,21,25,30,24,25,32,20,20,22,24,32,25,26,30,28,27,24,19,14,26,19,25,28,16,20,18,26,31,26,19,25,17,31,27,33,20,34,23,26,27,23,22,23,25,14,19,18,25,26,29,32,25,32,25,25,35,30,27,21,26,26,22,20,30,32,21,18,17,16,31,23,27,24,27,22,22,27,36,26,21,30,25,19,21,32,35,25,34,23,26,30,24,26,21,13,23,31,25,38,36,41,23,33,27,21,23,20,24,22,32,28,44,39,32,34,36,34,19,25,24,24,28,27,20,29,23,23,23,22,28,27,26,29,35,33,26,20,24,33,29,35,25,27,24,21,25,22,23,25,29,20,35,26,22,20,35,31,28,26,17,35,19,15,35,32,23,20,23,18,24,20,19,21,21,24,20,35,34,34,32,21,21,17,10,31,29,23,36,27,17,32,18,32,24,21,21,26,21,22,29,25,10,21,21,16,27,26,18,27,9,9,9,23,9,16,15,21,32,34,23,29,27,22,14,22,18,14,16,33,25,18,19,22,24,15,17,17,31,23,25,9,9,9,19,21,27,19,24,35,30,20,27,24,23,20,25,25,19,24,23,20,33,24,22,19,13,20,28,26,30,22,19,25,26,12,28,31,24,19,22,25,25,25,23,26,22,28,27,33,40,38,21,20,23,33,27,17,23,22,28,31,19,21,24,19,27,27,29,29,17,21,25,25,22,22,35,25,28,20,19,30,30,26,28,20,24,23,25,28,24,26,24,24,16,23,27,19,18,19,22,26,23,23,29,32,19,32,27,27,23,23,24,25,21,22,30,33,34,24,35,21,35,23,20,22,23,31,30,25,43,32,33,27,30,27,26,26,25,24,23,22,17,18,31,16,24,33,21,19,28,23,25,29,20,28,31,28,30,23,22,28,32,26,22,28,20,19,22,22,24,35,21,22,22,13,20,23,24,22,25,25,26,24,26,30,27,29,25,27,24,25,20,28,23,24,22,34,36,38,25,27,25,27,20,24,28,25,32,31,23,22,28,34,24,23,27,23,22,32,27,25,26,37,28,33,30,29,31,33,24,27,30,37,32,32,25,26,28,40,33,28,36,26,29,28,23,25,41,29,33,29,32,28,23,23,28,24,27,19,28,26,28,27,36,34,29,30,32,27,27,30,38,40,32,35,32,33,32,31,30,26,27,32,21,17,21,18,9,9,40,40,26,33,31,26,28,32,32,27,35,28,29,33,33,34,25,38,36,29,23,25,24,9,9,9,35,23,27,33,30,20,32,29,32,21,31,34,28,35,33,35,26,29,30,33,25,11,22,14,9,20],
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
