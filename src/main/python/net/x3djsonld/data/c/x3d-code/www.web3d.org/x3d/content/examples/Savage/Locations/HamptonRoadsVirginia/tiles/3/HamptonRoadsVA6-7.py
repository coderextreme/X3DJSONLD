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
    GeoViewpoint(description='GeoViewpoint_3_67',position=(36.02036455434723,-76.29244790211308,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.02036455434723,-76.29244790211308,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA12-14.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA12-15.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA13-14.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA13-15.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA6-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(35.98052080338244,-76.32406248621194,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[0,0,0,0,0,0,0,5,2,8,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,17,1,2,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,2,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,11,5,4,3,0,0,0,0,0,0,2,4,0,0,0,0,0,0,0,0,0,0,0,0,0,4,1,7,6,5,3,0,0,0,0,0,1,5,15,0,0,0,0,0,0,0,0,0,0,0,0,5,8,3,5,5,6,7,0,0,0,0,0,4,1,0,0,0,0,0,0,0,0,0,0,0,0,5,4,8,5,5,4,4,6,0,0,2,-1,0,-3,0,0,0,0,0,0,0,0,0,0,0,0,7,-4,8,7,10,3,6,4,6,3,0,1,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,9,4,9,6,6,7,6,4,7,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,5,8,7,5,7,8,6,7,5,8,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,9,9,10,6,4,5,5,6,7,5,4,2,4,6,0,0,0,0,0,0,0,0,0,0,0,14,7,8,12,4,9,8,6,8,3,4,8,1,5,0,5,0,0,0,0,0,0,0,0,0,0,5,5,5,9,7,8,5,5,6,6,5,3,6,6,6,5,1,0,0,0,0,0,0,0,0,0,2,5,9,9,4,6,6,4,6,3,5,5,3,4,4,8,4,0,0,0,0,0,0,0,0,0,5,3,0,7,9,6,6,3,3,4,4,3,7,9,5,5,1,4,0,0,0,0,0,0,0,0,7,5,7,8,9,7,5,3,4,6,6,2,8,7,11,7,1,5,3,0,0,0,0,0,0,0,5,7,5,8,6,8,4,8,9,5,11,5,5,6,8,6,4,6,6,0,0,0,0,0,0,0,5,4,8,11,13,8,7,7,6,7,7,2,5,8,9,9,4,0,1,0,0,0,0,0,0,0,11,9,8,5,3,8,6,7,5,6,7,2,6,4,6,7,7,2,1,0,0,0,0,0,0,0,6,7,6,7,3,5,4,7,5,3,8,2,4,8,11,5,6,4,2,1,0,0,0,0,0,0,7,4,7,6,3,5,9,2,2,6,0,5,8,12,8,10,8,3,0,5,0,0,0,0,0,0,4,3,2,5,6,3,10,7,5,7,0,2,4,4,14,0,16,4,1,5,2,0,0,0,0,0,5,2,3,15,4,5,6,1,5,5,1,2,6,10,17,5,15,13,2,10,1,4,0,0,0,0,1,1,3,11,5,10,10,4,13,5,0,13,3,3,3,16,12,5,1,5,3,3,4,0,0,0,0,0,10,12,9,9,11,1,17,4,0,10,7,4,3,5,8,7,1,0,1,5,2,0,0,0],
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
