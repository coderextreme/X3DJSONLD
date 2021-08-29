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
    GeoViewpoint(description='GeoViewpoint_3_43',position=(36.1797395582064,-76.54536457490397,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.1797395582064,-76.54536457490397,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA8-6.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA8-7.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA9-6.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA9-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA4-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.13989580724161,-76.57697915900283,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[21,17,21,6,7,8,11,2,2,7,8,9,6,5,2,1,0,0,0,0,0,0,0,0,0,0,14,19,15,14,12,6,4,5,6,8,5,8,8,14,7,1,2,5,4,3,0,0,0,0,0,0,11,12,11,6,5,1,0,2,6,5,8,6,9,10,24,16,2,5,3,5,0,0,0,0,0,0,12,7,10,6,8,12,9,7,8,6,20,18,21,17,18,13,19,4,15,6,5,0,0,0,0,0,13,14,11,26,4,6,6,8,6,5,13,15,14,12,17,15,10,16,9,5,3,0,0,0,0,0,12,16,15,16,13,7,8,9,9,6,12,18,19,7,20,16,7,6,8,12,13,6,0,0,0,0,8,5,5,0,3,8,5,6,6,10,10,15,7,12,10,7,7,8,7,7,7,12,0,0,0,0,9,5,2,3,7,5,12,7,11,11,10,10,13,10,10,16,13,8,7,6,14,1,1,2,1,0,0,10,12,8,6,4,3,4,7,6,16,14,8,12,14,9,10,24,6,11,13,4,11,8,5,5,4,9,6,6,10,3,6,-1,12,5,7,7,7,9,12,14,14,11,16,13,6,8,0,8,8,6,12,10,10,7,6,9,5,6,3,0,1,8,3,9,8,11,12,12,16,11,13,10,10,11,14,17,18,15,9,8,11,7,5,7,8,11,3,4,2,1,8,10,5,9,9,7,2,3,13,16,7,6,14,15,12,9,5,8,8,7,16,23,27,6,8,6,3,2,3,10,1,7,8,2,15,5,7,15,15,13,8,8,5,7,6,5,20,25,18,10,9,7,6,-1,1,1,1,5,6,-1,6,8,5,6,20,13,8,7,8,9,7,5,9,12,10,8,12,10,10,10,8,3,5,0,0,0,5,4,4,7,20,27,13,9,8,6,7,10,17,7,11,11,10,9,16,15,11,6,4,9,0,0,1,3,6,8,12,8,12,9,11,10,12,10,9,9,8,7,17,14,15,10,11,21,11,11,12,10,0,0,9,4,19,16,12,8,14,9,7,11,8,8,9,8,7,4,16,19,9,16,21,13,6,7,0,0,0,6,17,23,14,9,12,10,7,18,8,8,6,9,8,7,1,4,13,17,19,12,4,6,3,0,0,0,21,20,21,21,19,8,10,7,7,8,6,5,6,5,13,9,2,3,13,9,1,0,7,12,8,0,21,19,19,9,16,15,14,7,6,5,5,7,6,10,8,1,4,10,1,1,2,7,10,6,6,6,20,26,13,16,16,7,10,5,6,7,6,4,1,6,3,11,12,7,12,1,7,6,10,12,4,8,29,20,9,9,14,14,8,10,-1,0,5,4,7,15,5,6,6,13,7,17,2,13,13,7,14,9,26,17,13,22,14,15,7,7,9,7,9,6,12,18,6,6,6,5,10,14,4,8,12,13,8,14,18,14,9,21,18,10,6,6,6,7,6,8,8,22,4,6,7,10,16,-1,9,15,9,15,11,13],
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
