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
    GeoViewpoint(description='GeoViewpoint_3_53',position=(36.100052056276816,-76.54536457490397,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.100052056276816,-76.54536457490397,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA10-6.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA10-7.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA11-6.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA11-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA5-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.060208305312024,-76.57697915900283,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[18,14,9,21,18,10,6,6,6,7,6,8,8,22,4,6,7,10,16,-1,9,15,9,15,11,13,20,14,12,6,16,6,12,10,2,7,11,15,15,9,5,10,14,15,10,3,11,8,12,5,10,11,10,16,20,11,15,7,8,8,11,14,7,18,15,20,13,5,11,13,9,8,8,6,10,5,10,17,9,12,8,11,15,21,12,11,14,19,14,10,15,11,18,9,11,6,4,12,16,7,9,8,16,21,11,14,10,13,10,12,14,8,8,10,26,13,17,11,13,12,14,12,7,8,9,16,17,15,10,6,4,11,11,14,10,13,15,15,10,11,18,9,8,8,10,5,14,10,8,7,13,16,13,21,10,9,5,11,11,17,15,4,10,9,8,19,21,12,15,6,11,16,5,8,13,14,6,14,20,11,13,7,4,14,14,22,9,16,7,15,12,6,11,21,18,20,18,13,13,16,6,13,8,12,9,13,10,6,16,15,20,10,14,9,9,17,6,6,14,13,17,9,19,19,17,6,16,6,7,16,2,4,3,3,2,4,17,6,11,-1,7,5,3,17,7,17,15,14,21,18,13,12,8,8,5,4,9,10,1,2,15,8,-2,5,13,7,4,3,6,8,6,6,10,17,15,13,7,17,17,7,7,4,7,2,0,7,12,4,6,8,1,2,4,9,8,6,8,0,11,7,8,13,10,10,6,7,9,9,8,1,-1,0,6,-1,1,-2,8,8,9,10,15,8,-3,14,18,18,18,3,16,18,22,8,17,3,-1,1,-1,4,7,7,-2,0,5,13,5,10,0,1,7,10,13,17,7,8,9,18,12,8,3,0,2,1,1,8,14,10,3,-2,-4,0,4,0,2,3,2,4,10,8,6,7,13,10,7,16,1,-1,6,8,0,0,6,7,-1,8,18,0,2,8,5,5,6,8,7,4,4,8,8,8,7,-1,3,-2,0,0,0,0,2,4,9,10,13,-7,9,5,10,6,10,9,7,14,3,2,13,14,0,5,1,3,0,0,0,0,4,6,9,8,4,0,16,9,7,7,8,10,15,16,12,8,6,0,1,-1,-1,0,1,0,0,0,9,10,15,6,4,-1,-1,6,10,5,11,17,15,16,13,8,-1,0,0,0,0,0,0,0,0,0,17,13,13,7,5,0,1,6,8,7,6,16,18,8,8,0,0,0,0,0,0,0,0,0,0,0,6,6,8,6,6,3,0,1,7,15,20,14,16,11,0,0,0,0,0,0,0,0,0,0,0,0,1,8,9,2,5,-2,0,4,6,7,12,8,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,19,11,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,8,10,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
