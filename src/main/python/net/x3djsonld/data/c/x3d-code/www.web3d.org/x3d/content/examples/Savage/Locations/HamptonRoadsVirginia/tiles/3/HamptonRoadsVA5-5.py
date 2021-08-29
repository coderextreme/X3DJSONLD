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
    GeoViewpoint(description='GeoViewpoint_3_55',position=(36.100052056276816,-76.41890623850853,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.100052056276816,-76.41890623850853,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA10-10.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA10-11.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA11-10.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA11-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA5-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.060208305312024,-76.45052082260739,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,-2,0,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,42,28,4,8,6,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,13,5,11,15,7,4,3,7,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,6,6,15,10,4,3,5,7,6,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-2,-4,7,6,5,3,6,6,4,5,7,7,8,0,0,0,0,0,0,0,0,0,0,0,0,0,9,8,11,6,12,4,13,7,5,8,9,8,6,5,0,0,0,0,0,0,0,0,0,9,-1,10,14,12,4,7,5,8,7,5,9,10,6,5,0,5,6,5,0,0,0,0,0,0,0,14,4,7,13,6,5,3,8,8,8,8,9,8,4,8,9,6,0,5,6,4,0,0,0,5,6,5,7,10,12,8,5,3,9,7,9,6,8,9,10,12,6,7,4,4,4,7,0,0,0,10,-4,9,12,7,8,8,7,8,8,8,6,8,7,5,7,6,7,3,4,7,2,5,0,0,2,9,4,5,16,12,7,9,10,6,6,4,2,8,6,5,5,7,8,7,4,6,9,4,0,-1,6,4,5,11,10,8,7,6,10,5,6,4,5,5,6,9,8,6,5,6,4,9,10,11,0,0,0,3,0,15,9,6,8,5,7,4,7,8,8,7,7,2,8,5,7,6,8,5,6,7,0,0,0,1,4,15,9,9,9,6,11,7,8,9,12,8,6,8,6,5,10,5,6,6,9,6],
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
