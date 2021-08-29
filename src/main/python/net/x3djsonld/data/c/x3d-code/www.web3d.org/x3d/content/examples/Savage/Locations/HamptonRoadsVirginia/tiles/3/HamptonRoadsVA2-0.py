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
    GeoViewpoint(description='GeoViewpoint_3_20',position=(36.33911456206557,-76.73505207949714,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.33911456206557,-76.73505207949714,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA4-0.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA4-1.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA5-0.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA5-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA2-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.299270811100776,-76.766666663596,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[37,36,27,26,29,31,29,26,35,36,35,38,40,22,27,25,28,22,26,21,25,32,31,26,11,16,35,36,29,29,35,33,31,35,40,38,40,39,29,28,21,21,29,26,24,22,21,29,38,15,22,31,37,29,23,26,30,27,27,30,42,43,37,32,32,26,25,22,29,19,28,24,27,26,24,18,22,31,33,36,31,32,32,30,35,33,25,24,27,32,38,37,26,27,21,31,29,22,27,23,27,32,26,22,40,44,40,36,38,40,41,25,30,25,22,24,21,31,22,26,22,35,29,25,25,25,20,32,33,33,37,34,36,33,41,32,39,34,27,34,23,38,33,31,28,23,32,26,39,39,39,23,22,28,32,30,37,38,41,38,36,37,35,30,33,30,30,37,27,32,34,33,33,31,28,40,42,23,25,29,32,32,38,43,28,30,33,35,40,36,31,35,36,34,34,35,29,32,39,38,35,28,25,25,31,26,32,35,25,24,26,36,33,34,29,33,32,30,26,33,27,32,25,29,35,29,24,25,26,25,27,35,33,35,24,24,29,26,26,24,25,33,33,35,26,23,25,29,28,34,34,39,23,20,27,28,28,24,31,28,30,31,22,28,24,29,39,32,32,30,31,34,31,26,30,20,25,30,27,38,30,33,28,28,23,28,28,33,24,43,31,29,33,37,31,28,28,25,32,27,35,35,33,36,27,25,25,24,36,34,32,31,29,31,38,35,38,33,29,25,27,22,37,24,27,28,28,32,24,25,26,39,26,22,35,29,35,30,32,21,24,26,35,32,36,37,26,22,28,23,28,38,36,22,21,24,20,32,17,34,26,30,29,23,25,24,33,28,38,26,29,36,25,29,31,35,22,30,34,29,22,22,21,20,24,22,27,26,23,24,36,25,25,33,32,23,29,25,23,27,24,23,29,27,35,22,21,23,24,34,28,30,20,35,24,27,33,39,30,33,26,26,21,25,26,18,24,33,25,27,22,25,25,24,33,30,29,29,26,35,22,23,32,39,37,39,26,30,36,31,21,28,27,19,26,28,29,22,30,33,23,16,29,26,26,20,24,25,42,38,40,37,32,29,23,29,21,22,30,21,22,33,23,34,29,32,28,27,31,22,24,31,19,24,43,35,29,28,29,24,33,35,32,31,31,30,30,25,25,25,22,24,34,32,22,22,17,24,32,23,22,25,30,25,28,27,29,32,28,19,26,32,29,31,33,26,25,25,23,22,32,25,36,35,17,15,27,29,36,31,32,23,28,29,35,22,24,26,35,36,33,32,32,34,32,24,22,23,24,34,37,20,33,35,27,31,26,35,31,22,20,26,27,25,36,36,36,36,38,32,24,34,22,24,27,32,24,25,36,37,20,25,23,28,38,35,31,25,36,31,32,34,32,42,30,34,24,24,24,24,29,29,22,33,39,38,29,28,26,28,41,37,31,27,35,21,33,38,34,39,30,34,26,29,33,30,31,34,26,26],
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
