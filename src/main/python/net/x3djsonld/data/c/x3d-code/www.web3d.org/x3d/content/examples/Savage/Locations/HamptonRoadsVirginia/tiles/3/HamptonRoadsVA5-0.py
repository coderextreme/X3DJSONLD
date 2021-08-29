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
    GeoViewpoint(description='GeoViewpoint_3_50',position=(36.100052056276816,-76.73505207949714,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.100052056276816,-76.73505207949714,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA10-0.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA10-1.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA11-0.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA11-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA5-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.060208305312024,-76.766666663596,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[32,27,24,30,22,32,39,42,35,29,33,30,27,27,26,25,26,24,24,23,27,26,35,29,31,29,33,21,30,29,29,31,38,33,41,42,44,26,29,25,28,26,30,28,25,27,28,28,21,24,25,28,30,26,29,24,24,29,35,28,42,39,46,35,27,27,26,24,26,25,26,27,27,29,32,34,29,26,29,27,26,27,22,32,40,28,24,26,29,41,25,33,27,27,25,27,27,27,25,27,28,34,29,28,32,33,27,22,31,42,46,43,44,38,31,34,26,25,29,26,30,29,28,28,24,23,25,21,24,31,35,34,37,36,38,36,25,25,24,35,41,41,29,25,25,25,25,24,26,27,25,25,30,24,29,31,32,34,35,41,35,36,39,35,23,24,33,24,27,25,25,25,26,26,26,29,27,24,24,33,35,31,29,26,26,22,41,36,34,28,22,25,25,24,22,33,30,31,28,25,26,25,31,27,34,34,33,23,28,22,21,29,41,24,23,21,24,25,24,23,25,32,29,30,32,33,37,32,32,30,36,34,32,27,32,18,20,21,19,22,25,22,25,27,27,31,29,30,33,34,30,34,35,34,34,32,34,35,35,34,29,19,18,25,29,41,29,22,29,23,22,22,24,27,29,32,29,32,33,35,37,34,37,38,35,35,27,28,13,16,27,32,35,22,22,23,18,18,24,26,32,29,32,31,21,25,26,28,28,29,36,35,18,25,25,27,29,29,36,27,29,17,18,18,21,22,23,28,25,21,23,26,28,28,28,36,37,36,21,24,25,29,32,25,23,25,31,27,22,25,29,22,24,27,35,23,22,23,26,27,29,31,34,35,21,20,22,23,22,26,27,30,26,30,20,23,29,26,27,24,27,29,31,32,27,28,30,28,24,31,25,25,24,23,25,30,30,31,28,23,28,31,23,26,25,36,27,28,29,27,29,26,27,25,23,28,17,24,25,24,24,24,34,27,24,32,29,28,29,25,24,28,31,29,23,24,28,21,20,23,23,22,14,16,24,25,23,24,29,23,28,24,25,22,25,24,27,26,26,26,17,20,20,30,27,28,27,25,23,19,16,23,20,20,25,23,22,26,22,25,23,25,22,25,26,19,25,26,26,27,29,23,26,26,26,22,21,22,20,26,19,27,21,18,27,31,28,26,16,25,29,24,27,27,33,35,29,31,38,31,24,25,25,22,25,22,22,17,17,19,16,26,23,21,26,25,28,26,24,29,34,30,26,28,25,26,22,23,25,24,24,24,22,21,20,21,20,24,28,25,22,26,35,35,36,30,29,26,28,28,28,26,23,26,23,24,23,20,23,22,25,26,19,20,39,32,29,23,26,26,24,30,27,32,28,30,28,26,24,34,31,24,18,29,25,24,27,21,23,25,16,28,32,24,39,24,24,35,35,30,35,35,34,31,26,35,31,32,20,26,26,24,24,23,21,27,19,20,26,29,26,24,26,35,34,41,29,30,34,27],
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
