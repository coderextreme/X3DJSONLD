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
    GeoViewpoint(description='GeoViewpoint_3_76',position=(35.94067705241765,-76.3556770703108,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(35.94067705241765,-76.3556770703108,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA14-12.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA14-13.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA15-12.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA15-13.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA7-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(35.900833301452856,-76.38729165440967,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[6,13,15,6,5,10,-1,6,0,0,0,0,-1,-1,2,7,0,3,5,9,2,0,0,0,0,0,7,9,4,4,4,16,4,1,12,5,-3,1,0,3,4,0,-1,1,2,3,5,10,0,0,0,0,7,9,7,2,6,5,6,12,4,0,5,4,2,3,0,1,0,2,-1,-3,1,1,0,0,0,0,7,4,5,7,4,9,4,4,4,3,2,4,3,4,2,-1,0,2,6,0,-1,1,0,0,0,0,12,7,9,6,4,9,0,-1,3,3,1,0,1,3,-1,7,4,2,1,0,0,0,0,0,0,0,11,14,5,4,15,8,5,4,0,3,-2,2,6,4,2,0,0,0,0,0,0,0,0,0,0,0,8,12,10,7,12,7,2,3,2,0,0,0,-2,3,0,1,0,0,0,2,0,0,0,0,0,0,2,7,7,2,4,5,4,6,0,-3,3,0,0,-3,1,0,0,0,0,-3,3,0,0,0,0,0,2,-1,0,1,0,0,0,0,2,2,-2,0,0,0,0,0,0,0,5,2,13,0,0,0,0,0,13,3,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,-1,11,3,0,-2,-1,4,0,5,16,15,10,-1,0,2,-2,0,0,0,0,0,0,0,0,0,2,7,12,0,-1,2,-1,1,0,3,5,5,1,5,2,1,-3,0,1,5,1,0,-1,7,4,12,1,8,3,1,0,1,-1,1,-1,6,5,11,6,4,5,4,2,3,11,6,2,9,6,2,4,5,8,7,2,3,3,-1,0,1,2,6,3,4,7,4,4,4,4,7,16,10,6,8,3,14,6,7,5,4,3,5,1,5,1,3,-1,3,8,7,9,6,5,3,9,10,6,6,7,4,6,13,6,5,3,1,3,4,6,-2,2,0,3,1,10,6,3,1,1,6,7,6,8,8,1,4,5,1,2,0,0,4,6,1,-2,6,2,0,1,3,4,2,6,5,6,4,1,0,2,3,3,1,0,7,1,5,1,9,3,2,-1,3,1,1,-1,2,8,-2,6,2,7,4,7,7,4,1,0,1,2,0,1,3,11,-1,-3,1,1,0,1,-1,1,4,6,4,2,0,1,3,2,4,4,0,0,0,0,0,1,2,4,2,9,1,0,-1,0,2,-2,6,3,6,3,3,1,-1,6,0,1,0,1,1,2,5,0,1,0,0,1,0,0,0,-2,-1,0,2,7,6,0,2,1,2,-3,0,0,1,-1,4,1,0,-1,0,3,1,1,1,0,-1,-2,0,0,8,15,8,3,3,0,0,0,0,-4,1,5,1,0,1,0,0,-2,0,0,0,0,0,0,0,0,0,3,6,2,-4,0,0,0,0,0,0,0,0,0,0,0,0,0,-2,1,0,-1,0,1,0,0,0,0,0,0,0,0,0,0,-2,-1,0,-1,-8,-4,0,0,-1,-1,1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,-1,0,-1,-1,9,1,0,0,0,0,-1,0,1,0,0,0,0,0],
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
