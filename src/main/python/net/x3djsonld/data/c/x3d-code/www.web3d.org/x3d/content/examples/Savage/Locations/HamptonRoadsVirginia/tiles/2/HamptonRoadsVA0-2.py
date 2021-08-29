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
    GeoViewpoint(description='GeoViewpoint_2_02',position=(36.458645814959944,-76.45052082260739,15863.75038413098),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.458645814959944,-76.45052082260739,0.0),range=19036.5,child1Url=['../../tiles/3/HamptonRoadsVA0-4.x3d'],child2Url=['../../tiles/3/HamptonRoadsVA0-5.x3d'],child3Url=['../../tiles/3/HamptonRoadsVA1-4.x3d'],child4Url=['../../tiles/3/HamptonRoadsVA1-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/HamptonRoadsVA0-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.37895831303036,-76.51374999080511,0.0),normalPerVertex=False,xDimension=23,xSpacing=0.005748106,zDimension=23,zSpacing=0.0072443183,height=[19,13,22,23,18,20,18,18,21,12,10,17,19,19,18,23,25,20,23,22,21,24,25,18,11,15,15,18,27,16,21,20,21,20,19,15,20,16,19,21,24,26,23,23,27,20,18,22,20,18,13,25,11,17,20,14,16,18,14,8,5,13,24,20,19,22,23,19,26,24,19,25,18,16,9,15,15,18,17,17,17,20,18,15,18,33,20,16,21,25,19,22,24,22,20,23,15,23,18,20,20,17,21,17,14,18,18,20,18,17,22,25,22,13,19,25,18,20,18,28,25,19,23,20,21,21,22,13,16,19,17,26,18,20,21,20,22,18,24,25,21,20,16,24,25,21,23,26,18,17,20,18,16,12,15,23,19,24,20,20,22,13,19,20,14,18,11,11,11,11,11,11,11,19,21,19,25,20,24,19,24,17,12,15,19,19,18,19,20,11,11,11,11,11,11,11,24,18,17,14,10,2,5,3,7,6,5,22,16,15,19,15,11,11,11,11,11,11,11,18,15,19,10,8,10,8,7,4,3,4,26,19,23,21,17,11,11,11,11,11,11,22,22,16,15,17,6,9,7,5,3,4,4,18,20,23,25,20,17,11,11,11,26,20,21,30,17,17,19,16,18,16,14,12,15,14,20,19,14,19,15,20,17,18,20,21,17,17,19,17,18,16,14,13,14,15,16,12,13,20,17,19,19,16,16,24,18,19,22,19,16,21,21,15,20,17,18,14,10,15,16,10,20,16,20,21,22,18,18,21,17,19,22,21,15,17,21,13,11,13,10,20,13,17,18,21,27,24,21,22,23,22,21,28,17,19,21,17,17,13,17,17,12,13,20,12,17,16,23,19,20,24,18,21,19,20,18,18,24,17,20,12,15,18,16,19,15,16,13,9,15,20,15,18,22,18,21,21,19,15,16,8,12,16,13,15,17,16,24,14,16,18,15,14,18,21,17,21,13,17,15,23,14,10,14,15,12,15,12,22,19,17,15,16,14,14,16,20,24,22,20,20,20,18,16,15,18,19,15,19,11,14,14,17,21,14,21,19,14,20,21,18,21,21,22,18,18,18,14,17,16,13,11,14,16,15,15,21,17,22,19,21,22,21,17,22,16,17,17,19,14,16,19,16,16,13,14,13,17,18,17,15,21,18,20,21,18,15,21,22,20,17,19,14,11,16,14,12,15,15,15,18,18,14,21,17,14,19,15],
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
