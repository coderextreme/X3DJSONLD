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
    GeoViewpoint(description='GeoViewpoint_3_46',position=(36.1797395582064,-76.3556770703108,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.1797395582064,-76.3556770703108,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA8-12.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA8-13.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA9-12.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA9-13.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA4-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.13989580724161,-76.38729165440967,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[5,1,6,15,9,9,16,13,14,15,1,7,6,0,0,0,0,3,5,7,0,6,6,4,5,3,1,6,4,7,10,7,5,11,11,4,10,2,14,7,0,0,0,0,4,3,18,2,4,8,6,1,-1,8,5,7,11,11,6,5,6,4,7,4,6,5,0,0,0,0,0,0,0,0,0,0,4,3,6,13,8,6,7,12,8,3,3,4,6,-8,19,7,5,3,3,3,4,8,0,0,0,0,0,0,3,4,9,7,5,4,9,12,10,6,5,8,5,7,9,11,-2,8,5,4,5,0,0,0,0,0,8,7,10,7,12,7,11,8,8,7,7,5,6,5,6,4,5,6,2,1,0,0,0,0,0,0,8,14,11,8,8,14,8,8,8,4,4,7,7,12,8,0,8,3,0,0,0,0,0,0,0,0,13,8,7,6,5,6,5,14,9,10,11,11,11,7,5,6,2,1,0,0,0,0,0,0,0,0,7,10,9,6,8,11,9,5,10,8,6,6,6,3,3,5,4,0,0,0,0,0,0,0,0,1,5,6,9,12,7,9,6,10,6,2,7,9,9,7,5,4,6,0,0,0,0,0,0,0,0,0,8,10,6,8,8,10,6,5,4,5,3,4,3,6,1,2,5,0,0,0,18,3,0,0,0,1,6,7,14,9,7,12,9,6,2,1,1,5,1,5,2,0,0,0,6,0,1,2,0,0,0,0,9,9,6,8,6,12,10,7,7,12,17,5,5,3,4,2,1,6,3,7,7,0,0,0,0,0,8,5,5,6,4,11,5,4,6,4,2,9,1,6,2,8,6,-10,5,4,4,0,0,0,0,0,5,4,3,6,6,7,7,7,8,8,8,9,8,6,11,7,8,1,0,0,0,0,0,0,0,0,0,0,2,4,4,4,4,-3,4,4,4,4,4,6,4,4,6,0,0,0,0,0,0,0,0,0,0,0,6,4,4,4,4,4,4,4,4,4,12,8,7,7,2,0,0,0,0,0,0,0,0,0,0,0,2,4,4,4,4,4,4,4,4,4,7,8,12,8,3,0,0,0,0,0,0,0,0,0,0,0,3,4,4,4,4,4,4,4,4,4,4,4,4,4,1,0,0,0,0,0,0,0,0,0,0,0,0,4,4,4,4,4,4,4,4,6,8,9,11,6,0,0,0,0,0,0,0,0,0,4,0,0,0,3,1,5,4,5,5,6,4,11,8,5,7,3,0,0,0,0,0,0,0,0,2,4,0,0,1,2,4,4,5,5,6,6,5,5,9,8,7,0,0,0,0,0,0,0,0,0,0,1,0,0,0,3,6,3,4,3,5,7,6,6,5,7,6,1,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3],
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
