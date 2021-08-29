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
    GeoViewpoint(description='GeoViewpoint_3_41',position=(36.1797395582064,-76.67182291129942,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.1797395582064,-76.67182291129942,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA8-2.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA8-3.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA9-2.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA9-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA4-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.13989580724161,-76.70343749539828,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[35,23,27,33,30,20,32,29,32,21,31,34,28,35,33,35,26,29,30,33,25,11,22,14,9,20,32,21,27,22,20,34,34,34,31,25,26,25,24,24,27,32,36,21,24,20,25,18,19,28,19,23,32,37,34,24,28,23,29,32,31,27,24,31,28,38,27,21,19,37,36,26,20,19,19,23,27,30,34,30,31,30,30,35,31,36,36,24,26,24,21,24,26,26,33,23,29,21,26,21,20,20,24,23,37,32,35,28,25,38,35,25,28,22,23,23,23,22,21,24,20,23,18,19,25,23,25,24,21,25,34,22,39,42,39,38,43,37,24,25,22,23,32,32,29,21,19,18,0,18,24,21,23,21,19,20,41,21,37,23,32,41,41,40,39,18,21,24,21,20,21,19,26,18,13,17,18,20,16,18,22,17,36,39,28,25,27,31,27,16,22,24,18,24,31,30,17,21,28,25,24,25,26,20,22,19,16,14,22,19,23,18,24,16,23,28,31,18,31,29,15,15,18,16,15,17,18,18,11,17,19,20,25,19,35,28,27,22,20,27,35,36,23,17,29,16,17,22,18,23,24,16,17,19,17,19,18,30,25,26,21,22,39,27,31,18,23,24,29,29,24,18,19,26,23,20,20,22,17,19,18,25,27,27,22,30,32,25,25,23,26,20,30,16,20,10,28,31,29,29,26,26,26,21,23,30,34,24,25,25,24,28,20,31,25,22,22,25,30,26,28,21,25,22,26,25,24,23,22,23,25,24,27,30,29,25,26,26,27,22,25,27,25,23,22,21,22,26,28,25,25,31,29,31,29,29,35,33,27,28,34,27,24,23,31,26,31,21,20,24,20,23,25,24,26,26,25,26,27,28,23,28,27,28,28,26,27,31,23,22,35,29,22,18,16,13,14,20,19,21,23,24,25,26,29,33,26,26,26,28,25,24,25,23,26,24,28,14,14,13,19,20,20,21,22,29,34,32,22,34,22,22,23,30,26,25,28,23,26,30,28,32,14,19,24,24,21,24,23,23,29,21,24,25,29,28,20,27,36,32,35,24,22,29,26,23,22,22,28,27,22,24,24,22,22,26,30,27,27,22,26,23,29,22,21,24,21,27,30,24,29,29,29,26,22,26,24,28,23,25,28,28,25,26,20,23,16,21,20,19,22,18,25,26,22,21,26,30,22,26,24,19,25,24,23,31,26,23,27,24,18,18,22,13,23,17,19,17,26,22,24,19,21,24,25,14,23,28,25,25,25,25,24,24,25,27,27,24,26,25,25,18,21,13,22,22,21,24,20,17,20,17,23,23,32,22,23,24,24,22,26,25,25,19,32,27,28,18,19,20,15,24,17,11,17,10,12,12,23,28,26,25,29,30,32,22,23,23,26,23,19,20,18,16,13,14,22,23,26,17,22,26,25,20,29,30,27,26,32,33,29,23,23,23,24,19,20,21,17,22,16,13,15,18,21,19,16,18,26,22],
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
