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
    GeoViewpoint(description='GeoViewpoint_3_44',position=(36.1797395582064,-76.48213540670625,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.1797395582064,-76.48213540670625,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA8-8.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA8-9.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA9-8.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA9-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA4-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.13989580724161,-76.51374999080511,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[0,0,0,0,1,-1,7,11,16,13,4,5,6,4,-2,3,15,6,12,6,7,9,4,11,12,17,0,1,1,0,0,0,11,9,5,-1,0,0,1,3,6,2,3,5,4,4,5,5,7,7,7,11,0,-1,-2,-1,12,0,6,8,6,7,16,2,4,-5,7,6,12,9,9,4,16,5,2,11,6,8,0,0,0,0,5,6,7,7,12,6,7,8,6,-4,1,11,8,3,3,5,6,7,6,4,11,11,0,0,0,0,0,0,5,9,8,6,5,4,3,10,0,1,3,3,4,6,4,6,8,6,7,17,0,0,0,0,6,6,11,8,7,8,9,22,4,4,1,-1,6,4,8,7,11,7,4,6,6,10,0,0,0,0,0,0,0,1,6,8,11,9,10,6,-1,0,4,6,8,5,5,8,10,7,3,-2,0,0,0,0,0,0,0,0,0,0,4,6,4,4,1,-1,-2,4,3,14,6,8,6,6,3,6,5,0,0,0,0,0,0,0,0,0,4,5,8,3,-1,0,5,5,4,3,5,11,1,12,-1,-1,6,0,4,0,0,0,0,0,0,3,6,6,5,1,0,1,-1,0,0,5,6,14,9,-3,0,4,17,5,4,1,0,0,0,0,0,0,0,0,0,0,0,0,1,-1,-1,5,7,7,5,1,-6,2,6,10,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,15,7,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,9,9,6,10,9,6,7,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,7,7,7,7,5,12,9,7,8,7,8,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,6,9,9,11,9,11,11,10,13,15,9,6,7,0,0,0,0,0,0,0,0,0,0,0,0,4,12,7,13,10,5,15,12,10,9,9,3,11,10,0,0,0,0,0,0,0,0,0,0,0,0,6,7,16,11,14,7,10,14,23,8,7,9,9,7,3,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,10,1,8,6,5,9,10,7,10,17,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,8,6,8,10,16,6,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,15,4,0,0,0,0,4,6,3,12,12,12,12,0,0,0,0,0,0,0,0,0,0,0,8,10,12,16,14,0,0,0,0,0,8,10,19,0,0,0,0,0,0,0,0,0,0,0,0,0,9,9,9,3,3,18,10,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,7,13,0,13,6,9,13,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,5,3,2,15,7,8,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
