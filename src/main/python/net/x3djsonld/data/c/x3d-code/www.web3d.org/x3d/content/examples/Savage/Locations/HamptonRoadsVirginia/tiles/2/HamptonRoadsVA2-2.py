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
    GeoViewpoint(description='GeoViewpoint_2_22',position=(36.13989580724161,-76.45052082260739,15863.75038413098),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.13989580724161,-76.45052082260739,0.0),range=19036.5,child1Url=['../../tiles/3/HamptonRoadsVA4-4.x3d'],child2Url=['../../tiles/3/HamptonRoadsVA4-5.x3d'],child3Url=['../../tiles/3/HamptonRoadsVA5-4.x3d'],child4Url=['../../tiles/3/HamptonRoadsVA5-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/HamptonRoadsVA2-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.060208305312024,-76.51374999080511,0.0),normalPerVertex=False,xDimension=23,xSpacing=0.005748106,zDimension=23,zSpacing=0.0072443183,height=[0,-1,4,6,16,3,8,9,3,5,6,11,10,18,19,9,15,5,9,10,7,5,8,0,0,8,10,6,5,-1,6,6,4,5,6,6,4,15,15,9,4,6,6,8,8,5,0,0,0,0,8,8,-1,6,6,7,0,4,6,4,7,7,20,5,9,9,9,8,10,-1,0,0,0,7,3,-2,-1,4,4,0,1,4,8,12,3,7,4,3,5,7,8,9,6,0,0,0,0,0,0,0,0,0,0,18,14,4,6,6,5,7,5,0,-3,5,7,13,6,4,9,2,0,0,0,0,0,0,2,7,5,16,9,6,4,4,6,0,7,3,7,13,15,14,10,8,0,0,0,0,0,0,7,9,14,12,13,1,0,0,0,0,0,0,-3,-2,8,10,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,3,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,0,14,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,3,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,12,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-3,0,1,7,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,16,5,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,6,5,5,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,12,3,8,8,4,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,7,7,8,8,8,7,4,3,6,6,0,0,0,0,0,0,0,0,0,0,0,8,2,15,7,8,6,3,10,6,8,10,7,0,0,0,0,0,0,0,0,0,0,0,0,4,11,11,7,8,6,4,6,5,11,6,0,0,0,0,0,0,0,0,0,0,0,11,9,8,9,4,7,8,4,9,6,6,5,0,0,0,0,0,0,0,0,0,0,0,10,10,10,11,2,5,6,9,9,7,12,3],
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
