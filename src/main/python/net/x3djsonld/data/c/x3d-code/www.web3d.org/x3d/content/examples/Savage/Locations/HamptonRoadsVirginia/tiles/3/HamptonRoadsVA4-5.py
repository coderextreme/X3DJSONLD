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
    GeoViewpoint(description='GeoViewpoint_3_45',position=(36.1797395582064,-76.41890623850853,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.1797395582064,-76.41890623850853,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA8-10.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA8-11.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA9-10.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA9-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA4-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.13989580724161,-76.45052082260739,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[17,14,14,13,14,6,10,4,11,11,6,9,6,5,9,10,10,6,6,9,5,13,7,9,3,5,11,17,11,16,5,7,12,14,9,6,9,6,10,9,7,5,5,11,16,6,6,5,10,4,4,1,8,11,18,22,8,11,18,19,19,10,14,10,17,15,5,6,3,14,10,8,10,9,6,4,2,-1,11,14,16,14,11,11,10,10,15,18,16,18,17,9,4,6,5,6,5,8,8,7,6,5,6,6,17,8,8,6,10,9,7,9,17,6,16,18,18,8,6,8,6,9,7,7,5,0,4,3,6,3,10,12,6,3,2,5,3,2,5,8,7,7,10,5,6,3,6,5,6,8,9,7,5,5,6,8,-2,3,6,4,8,8,4,6,5,4,4,12,8,10,6,3,8,7,7,6,8,3,8,7,7,8,6,4,5,5,9,6,4,7,7,8,10,8,5,3,6,8,7,8,6,8,5,6,4,6,8,13,-1,1,0,3,4,6,7,6,5,9,11,13,5,6,5,4,9,4,5,8,8,8,7,5,9,7,4,0,3,7,1,4,9,12,16,12,13,6,3,7,6,3,7,6,4,5,5,5,6,9,5,5,2,6,7,2,12,6,15,10,13,6,7,7,7,5,-1,5,4,8,9,11,3,5,8,7,4,8,6,16,2,8,9,3,4,6,3,4,5,5,10,5,2,2,7,6,8,5,0,6,2,7,5,6,0,1,6,2,0,0,18,14,6,4,2,3,1,5,7,4,7,2,4,0,8,9,5,5,7,9,1,1,5,4,1,9,6,8,12,6,9,10,4,3,1,6,8,5,6,1,0,5,0,11,4,8,0,1,6,8,4,8,9,14,12,10,5,2,6,9,4,2,4,3,5,1,1,10,14,14,7,5,0,0,6,5,11,9,10,9,10,5,9,7,4,10,8,1,2,7,0,0,0,0,0,0,0,0,0,0,0,4,4,2,5,6,5,12,10,4,4,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,7,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
