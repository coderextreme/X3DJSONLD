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
    GeoViewpoint(description='GeoViewpoint_2_03',position=(36.458645814959944,-76.32406248621194,15863.75038413098),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.458645814959944,-76.32406248621194,0.0),range=19036.5,child1Url=['../../tiles/3/HamptonRoadsVA0-6.x3d'],child2Url=['../../tiles/3/HamptonRoadsVA0-7.x3d'],child3Url=['../../tiles/3/HamptonRoadsVA1-6.x3d'],child4Url=['../../tiles/3/HamptonRoadsVA1-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/HamptonRoadsVA0-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.37895831303036,-76.38729165440967,0.0),normalPerVertex=False,xDimension=23,xSpacing=0.005748106,zDimension=23,zSpacing=0.0072443183,height=[25,23,19,13,13,13,20,20,16,20,15,21,20,17,19,15,18,17,18,14,20,20,10,20,19,19,13,3,8,3,7,4,4,9,11,5,20,6,5,19,16,20,20,23,24,9,26,21,9,11,6,6,5,6,6,3,18,19,18,4,2,7,14,19,19,20,8,8,7,22,24,10,6,8,3,7,2,3,6,14,18,9,5,16,16,19,24,22,20,5,6,3,19,3,10,8,8,3,5,3,4,4,3,8,4,18,20,18,18,7,22,20,19,9,17,18,5,5,3,6,6,4,2,4,9,3,22,3,17,5,5,5,4,17,16,13,23,22,22,9,7,4,4,6,3,4,4,11,22,12,18,7,18,3,5,4,2,20,6,13,13,15,4,5,5,8,7,3,5,3,8,13,4,6,3,9,5,3,5,16,2,1,10,8,5,10,6,7,5,12,3,4,6,7,3,10,3,7,4,6,9,4,4,1,9,5,8,4,3,5,6,1,2,4,4,6,3,5,7,7,8,5,2,5,5,4,7,5,6,8,4,4,2,3,3,2,1,0,3,19,18,8,13,10,12,12,17,12,9,10,1,8,14,14,15,9,3,3,2,20,16,19,12,1,0,12,1,4,7,9,12,8,9,0,6,7,13,16,11,12,13,15,18,7,6,10,5,7,5,10,4,14,3,4,6,5,13,11,14,10,23,20,13,11,6,7,12,13,11,13,7,5,15,21,17,11,6,8,4,4,5,7,18,15,22,10,6,1,13,24,5,5,20,5,9,10,17,17,15,10,13,14,16,14,9,16,16,19,10,2,2,3,5,3,5,5,12,13,17,22,19,18,15,5,6,8,10,13,15,14,20,21,5,2,6,16,2,5,4,4,9,17,13,22,13,19,18,13,17,17,16,14,13,14,17,6,4,8,6,7,4,3,6,4,18,12,12,11,27,5,9,6,11,13,16,18,16,16,9,5,9,8,11,7,3,16,10,5,4,5,3,16,4,12,13,13,20,20,15,21,17,18,8,8,7,13,5,5,18,10,10,2,6,3,14,10,12,17,8,5,22,17,22,17,19,10,7,5,3,8,5,5,16,19,3,3,3,3,14,16,7,10,15,21,19,23,12,16,13,3,5,3,7,8,19,15,6,17,6,1,3,3,12,8,12,7,15,17,19,10,15,10,3,5,4,10,9,5,15,7,15,3,5,2,4,16,8,10,5],
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
