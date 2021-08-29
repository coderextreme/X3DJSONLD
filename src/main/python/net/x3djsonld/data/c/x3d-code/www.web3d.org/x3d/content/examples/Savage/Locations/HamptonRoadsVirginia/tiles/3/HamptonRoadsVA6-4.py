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
    GeoViewpoint(description='GeoViewpoint_3_64',position=(36.02036455434723,-76.48213540670625,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.02036455434723,-76.48213540670625,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA12-8.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA12-9.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA13-8.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA13-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA6-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(35.98052080338244,-76.51374999080511,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,9,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,13,11,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,9,12,14,9,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,15,14,15,9,11,8,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,11,16,20,16,12,14,12,12,6,8,11,0,0,0,0,0,0,0,0,0,0,0,0,6,13,15,12,14,16,22,12,11,9,10,9,8,8,0,0,0,0,0,0,0,0,0,1,14,10,17,7,24,15,12,13,12,9,10,13,13,10,9,12,0,0,0,0,0,0,0,0,13,15,20,22,21,7,21,18,15,11,12,13,9,11,11,10,13,9,0,0,0,0,0,6,15,16,20,20,23,19,22,7,21,25,23,12,13,14,14,10,11,12,10,14,0,0,0,2,6,12,15,19,14,19,18,19,13,10,23,14,12,11,15,9,10,15,12,13,10,10,6,9,18,16,14,6,16,16,14,22,16,17,19,11,13,14,17,24,11,13,12,11,12,11,11,10,15,13,18,13,10,15,16,18,14,11,11,13,24,19,9,22,22,10,13,14,10,12,12,15,12,8,17,18,16,19,15,19,19,15,12,11,14,13,17,12,13,13,12,11,12,15,12,12,12,14,18,13,9,13,18,18,13,13,15,13,17,13,12,16,10,13,15,19,15,14,12,14,14,13,12,16,20,20,13,16,12,10,18,15,16,11,16,6,12,15,14,10,15,17,17,18,9,15,11,13,12,17,19,22,14,19,15,14,22,18,14,13,16,10,14,13,15,15,10,12,11,12,15,13,16,18,13,13,15,14,12,16,15,13,17,13,12,13,17,16,13,14,14,13,11,13,10,12,13,14,11,12,15,12,12,12,13,14,14,11,11,15,12,13,14,15,16,17,18,15,13,12,12,14,11,12,11,12,10,11,12,10,18,17,11,11,17,13,13,12,13,15,15,14,17,14,11,13,13,10,10,14,11,15,12,14,16,12],
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
