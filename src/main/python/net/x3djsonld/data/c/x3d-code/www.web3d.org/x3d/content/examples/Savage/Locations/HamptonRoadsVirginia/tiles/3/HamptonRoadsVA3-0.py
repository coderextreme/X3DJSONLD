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
    GeoViewpoint(description='GeoViewpoint_3_30',position=(36.259427060135984,-76.73505207949714,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.259427060135984,-76.73505207949714,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA6-0.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA6-1.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA7-0.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA7-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA3-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.21958330917119,-76.766666663596,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[39,38,29,28,26,28,41,37,31,27,35,21,33,38,34,39,30,34,26,29,33,30,31,34,26,26,42,37,28,32,23,32,40,38,39,29,33,31,29,37,27,28,38,27,38,35,36,32,32,28,32,36,39,42,34,35,36,38,39,38,36,33,32,18,34,31,28,30,28,40,41,38,37,35,40,35,35,28,36,34,36,39,36,37,37,41,44,36,29,35,31,31,29,35,37,28,35,24,40,41,22,16,16,24,36,35,35,37,38,36,35,37,37,39,38,31,29,29,31,30,36,33,31,36,29,41,33,23,19,20,32,37,34,39,39,38,39,43,43,36,32,24,35,34,25,27,34,36,34,35,34,36,34,42,32,22,30,37,39,40,31,34,38,22,28,21,25,25,28,40,23,28,26,28,29,32,35,31,35,35,34,34,31,43,42,40,33,26,27,25,28,26,27,20,17,28,34,39,34,25,31,27,39,29,35,39,30,32,35,33,37,43,38,37,36,39,25,30,33,24,38,34,24,25,30,34,36,30,35,32,29,28,29,29,36,35,36,39,37,36,26,24,27,26,23,28,29,25,32,39,24,29,25,33,22,28,27,39,25,23,35,40,42,36,37,31,36,27,30,24,29,23,36,39,30,24,25,23,27,34,27,26,29,24,34,18,38,37,37,33,32,31,32,31,26,30,29,25,26,30,29,24,28,23,35,32,23,32,23,24,25,32,35,33,33,25,33,24,26,26,28,29,30,31,36,37,31,25,28,26,24,29,21,18,21,22,24,19,36,28,38,36,36,22,30,29,29,25,30,24,35,33,33,36,39,28,29,28,28,20,24,25,21,30,31,35,40,36,40,43,30,26,26,30,32,24,44,26,23,28,27,27,24,29,29,23,23,30,25,27,41,31,21,41,41,39,35,42,29,24,38,32,35,30,38,28,28,28,31,30,19,17,25,16,22,30,25,27,36,43,34,40,39,36,29,26,25,24,36,31,35,34,31,37,36,36,27,26,30,19,23,27,29,24,24,32,33,38,40,32,26,33,27,28,37,31,30,27,29,22,24,20,24,32,31,20,20,30,22,26,24,38,39,36,28,32,34,37,34,33,30,34,29,27,24,26,24,21,27,28,25,23,29,22,25,23,25,32,40,24,32,31,25,33,41,33,32,27,37,27,25,24,22,32,30,39,19,24,31,27,34,24,25,30,34,28,30,20,29,39,33,29,27,35,17,29,25,39,22,21,29,32,33,27,26,28,26,32,34,20,35,27,27,31,34,37,26,33,29,33,41,25,17,21,22,25,26,23,34,36,26,28,36,38,22,35,21,23,25,29,39,37,36,29,34,31,27,32,24,19,28,25,28,30,38,38,36,36,37,35,26,24,22,22,29,40,41,40,35,38,34,28,27,39,35,33,33,26,30,37,37,37,32,40,33,36,37,25,24,21,27,23,31,37,36,38,35,30,25,33,31,34,34,31,30,38,35,39,31,35],
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
