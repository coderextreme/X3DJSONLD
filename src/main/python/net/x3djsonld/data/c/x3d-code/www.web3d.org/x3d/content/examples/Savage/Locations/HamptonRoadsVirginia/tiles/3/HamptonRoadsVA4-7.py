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
    GeoViewpoint(description='GeoViewpoint_3_47',position=(36.1797395582064,-76.29244790211308,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.1797395582064,-76.29244790211308,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA8-14.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA8-15.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA9-14.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA9-15.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA4-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.13989580724161,-76.32406248621194,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[3,5,2,5,8,3,3,0,1,0,0,0,0,-1,27,16,17,18,6,6,5,3,4,10,7,9,1,5,3,4,4,1,2,9,0,0,0,0,0,2,8,7,6,9,5,3,7,4,3,4,5,7,3,5,6,6,4,5,1,0,0,10,3,4,-2,1,2,9,6,12,6,4,4,3,4,5,6,10,0,1,4,-3,6,1,0,0,3,6,10,16,7,7,5,2,4,3,7,5,7,4,5,6,4,9,0,0,0,0,0,0,0,0,5,4,11,15,8,7,5,7,7,6,13,9,4,5,5,2,8,6,0,0,0,0,0,13,7,2,5,6,6,5,6,6,6,7,7,6,5,5,6,5,4,5,7,5,0,0,0,0,0,7,4,3,9,5,7,7,9,10,10,9,7,6,7,4,4,3,6,5,2,1,0,0,0,-1,3,4,2,4,7,6,5,7,6,5,4,6,4,5,4,5,6,8,5,-5,5,7,1,4,4,3,5,3,5,1,5,2,5,5,5,8,7,10,0,6,5,4,3,0,25,5,7,4,0,9,6,6,9,9,8,4,11,6,5,6,6,5,7,6,7,5,7,7,6,7,8,4,6,6,1,0,0,3,10,4,3,5,5,7,4,5,3,5,6,6,7,9,6,6,7,2,0,6,6,4,0,0,0,6,-6,5,5,7,9,10,6,5,7,6,4,6,8,5,4,5,7,4,0,3,2,4,0,0,0,0,0,0,5,6,2,10,6,2,5,9,9,5,6,6,8,2,0,0,6,6,13,10,0,0,0,0,0,0,8,4,3,4,3,7,5,2,0,0,0,0,0,0,6,2,0,3,10,12,0,0,0,0,0,0,5,7,7,6,4,4,9,6,0,0,5,6,5,2,7,9,0,3,9,0,0,0,0,0,0,0,1,6,1,1,6,7,4,6,3,0,1,8,4,8,7,5,5,4,0,5,0,0,0,0,66,0,2,3,0,2,6,2,2,0,0,0,0,1,4,7,9,7,5,7,7,-10,0,0,7,24,0,0,0,0,0,0,0,0,0,0,0,8,0,9,11,8,9,8,5,3,7,8,0,7,2,4,0,0,0,0,0,2,0,0,9,9,6,8,6,0,1,6,4,5,5,6,3,9,4,2,3,6,0,1,3,4,7,8,8,2,4,2,6,4,5,10,13,7,5,5,6,4,6,6,4,4,2,2,3,6,7,5,7,6,6,12,6,5,5,5,6,5,7,8,9,7,7,5,5,5,1,3,3,4,3,3,6,9,0,11,7,7,5,8,4,3,5,7,6,6,10,4,8,7,10,4,4,4,4,6,6,4,9,4,3,5,6,2,7,4,4,8,6,5,7,9,6,3,-1,7,9,3,-9,7,4,3,5,1,1,8,5,3,4,3,3,5,2,3,6,9,0,0,3,6,7,8,9,4,3,-1,4,3,3,7,1,1,1,2,1,1,2,2,2,1,8,10,1,-1,0,7,8,8,8,3],
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
