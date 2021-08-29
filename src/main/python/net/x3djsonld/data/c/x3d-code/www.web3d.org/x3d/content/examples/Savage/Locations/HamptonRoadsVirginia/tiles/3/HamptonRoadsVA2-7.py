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
    GeoViewpoint(description='GeoViewpoint_3_27',position=(36.33911456206557,-76.29244790211308,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.33911456206557,-76.29244790211308,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA4-14.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA4-15.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA5-14.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA5-15.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA2-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.299270811100776,-76.32406248621194,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[8,1,11,7,9,10,8,6,3,5,5,1,0,1,2,2,2,6,10,11,5,9,5,5,5,4,6,7,9,11,15,1,3,18,16,9,8,3,4,4,4,0,4,8,4,12,15,11,9,7,7,6,0,-1,4,4,4,4,2,2,6,7,2,6,5,5,7,4,0,17,11,15,13,6,11,10,13,15,2,3,4,4,2,4,4,4,3,4,5,8,4,5,14,7,5,7,7,9,10,8,8,12,10,7,4,4,7,18,3,4,4,4,3,4,4,7,16,18,16,8,8,6,8,4,2,4,7,9,9,11,6,1,6,5,4,5,1,3,6,5,7,6,2,4,14,9,7,8,-1,2,5,6,3,5,7,6,5,7,4,10,2,1,4,3,5,1,1,3,1,-4,3,3,5,7,5,-1,6,8,8,13,2,1,5,4,9,13,5,6,16,6,4,10,15,-1,2,1,3,6,-2,3,2,5,3,9,1,11,6,10,4,2,3,3,6,3,8,7,1,4,1,3,5,2,3,-5,5,6,5,4,4,4,3,0,3,3,9,11,16,1,4,1,2,4,4,13,1,3,0,3,-5,1,3,4,3,6,6,7,3,4,3,2,3,7,3,5,6,8,7,9,5,5,6,3,1,1,4,5,8,1,4,1,1,-3,-1,11,-1,1,5,6,14,5,10,10,7,8,0,2,2,8,6,3,4,9,4,11,1,10,17,0,0,0,5,0,4,0,7,6,14,14,4,3,1,2,6,5,0,5,2,0,8,0,2,0,3,3,3,5,0,2,10,8,0,1,2,2,7,0,2,3,9,5,4,0,0,11,13,9,4,4,5,6,2,7,3,9,10,1,7,17,16,11,5,10,8,11,9,0,0,5,5,1,10,14,4,3,7,10,9,9,4,6,5,2,5,11,8,9,8,5,5,5,3,2,0,0,6,3,8,-1,0,5,16,8,9,2,12,6,10,13,13,8,4,12,2,9,11,4,11,0,1,0,3,-1,14,6,1,8,9,5,16,12,5,9,5,8,5,14,11,17,4,3,9,1,3,14,1,0,5,2,1,6,-1,4,8,4,6,4,7,7,4,9,11,12,7,8,11,4,10,2,0,4,8,0,0,0,8,2,4,11,10,12,8,7,6,7,2,3,4,2,0,5,0,7,2,11,4,-2,4,0,5,1,1,3,6,4,4,7,4,5,4,7,3,7,5,15,2,-2,6,0,7,-1,4,3,0,0,0,3,4,7,8,6,6,8,5,4,7,7,3,8,8,6,3,13,12,2,3,4,9,11,0,5,10,4,12,-1,8,5,6,3,6,8,9,6,8,9,7,3,2,14,14,12,4,3,4,3,0,0,3,5,3,3,3,4,5,3,5,11,5,7,7,8,5,7,2,2,8,4,7,2,2,9,2,0,3,5,6,4,0,15,6,3,7,4,7,6,10,12,10,9,5,2,4,3,14,3,1,17,5,0,4,6,3,3,3,12,6,2,5,7,7,9],
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
