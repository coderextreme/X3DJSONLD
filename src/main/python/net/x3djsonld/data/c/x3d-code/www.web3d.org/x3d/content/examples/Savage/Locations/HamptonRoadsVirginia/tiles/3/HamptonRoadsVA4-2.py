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
    GeoViewpoint(description='GeoViewpoint_3_42',position=(36.1797395582064,-76.6085937431017,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.1797395582064,-76.6085937431017,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA8-4.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA8-5.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA9-4.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA9-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA4-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.13989580724161,-76.64020832720055,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[20,15,15,13,21,23,28,21,21,22,18,23,21,27,29,28,31,28,27,28,27,28,26,21,21,21,23,26,24,17,25,32,21,21,26,25,23,25,28,21,33,33,33,25,27,26,25,23,19,21,16,14,30,25,23,32,21,21,20,21,27,35,29,27,24,25,28,27,26,25,22,35,34,23,19,18,18,11,23,30,31,32,28,24,35,25,24,26,32,25,34,27,26,25,24,29,27,27,22,24,18,17,15,12,25,32,28,22,22,32,32,33,26,24,31,31,32,27,29,23,25,26,17,23,22,21,19,20,11,13,20,28,22,25,23,33,35,35,31,28,25,24,27,22,23,31,19,15,14,16,18,15,10,15,8,12,17,26,27,22,31,27,36,37,34,37,26,25,26,25,25,25,24,24,21,16,13,16,14,18,7,8,14,20,20,22,32,32,29,26,28,31,34,34,26,24,23,25,23,27,22,16,26,20,17,22,11,9,19,19,22,24,25,27,30,28,29,25,25,33,28,25,29,25,22,20,22,25,19,24,23,20,8,0,26,28,28,24,34,29,24,24,30,32,23,21,22,23,19,12,11,20,31,29,14,16,21,24,11,4,30,25,29,36,26,35,27,28,30,24,23,22,13,15,6,13,19,19,20,23,21,29,25,18,16,12,28,30,27,28,25,21,34,23,16,15,16,18,20,26,20,22,22,22,27,23,22,22,21,24,21,18,26,25,24,25,30,22,19,21,24,27,18,25,23,21,24,24,23,23,22,22,22,20,18,19,15,14,23,24,24,24,30,29,20,21,24,22,20,21,20,23,22,23,24,30,30,30,24,19,17,19,15,15,22,25,33,35,28,24,29,23,27,23,19,23,25,36,25,22,25,26,20,28,29,20,19,26,26,20,24,26,24,22,22,25,25,25,24,39,26,24,26,22,26,19,18,17,22,20,21,16,20,21,24,20,32,21,29,23,24,23,29,43,28,23,34,31,21,18,25,23,14,14,17,17,21,17,16,20,14,12,22,34,32,30,29,22,21,19,19,24,17,25,23,22,16,25,20,15,15,27,16,10,14,12,17,19,26,25,30,31,22,27,27,28,21,23,26,22,22,23,16,22,16,21,18,19,26,10,14,18,14,17,26,19,21,25,26,26,29,25,27,27,22,23,20,17,22,21,16,18,14,12,25,9,19,23,26,21,14,18,23,33,28,22,22,26,32,25,21,26,28,30,25,15,12,22,26,18,13,22,24,24,19,21,17,20,28,21,32,20,21,23,22,25,20,28,35,17,25,22,12,23,9,13,10,15,22,20,21,20,12,16,31,16,25,28,23,24,25,23,23,26,21,20,14,10,11,13,13,13,18,24,20,20,23,29,20,8,28,22,12,20,23,24,20,21,28,24,21,20,11,4,15,15,21,14,15,17,21,24,20,26,22,7,25,21,12,13,22,25,24,22,27,23,12,11,10,20,13,12,17,14,17,14,22,23,21,18],
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
