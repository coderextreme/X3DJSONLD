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
    GeoViewpoint(description='GeoViewpoint_1_11',position=(36.61499997575882,-76.49299995575842,97125.00235182233),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.989999984839216,-76.99299996786561,0))),
    GeoLOD(center=(36.61499997575882,-76.49299995575842,0.0),range=116550.0,child1Url=['../../tiles/2/HamptonRoadsVA2-2.x3d'],child2Url=['../../tiles/2/HamptonRoadsVA2-3.x3d'],child3Url=['../../tiles/2/HamptonRoadsVA3-2.x3d'],child4Url=['../../tiles/2/HamptonRoadsVA3-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/1/HamptonRoadsVA1-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.239999966678425,-76.99299996786561,0.0),normalPerVertex=False,xDimension=21,xSpacing=0.05,zDimension=21,zSpacing=0.0375,height=[30,38,23,35,11,40,33,22,18,-3,13,8,12,7,4,9,-9,6,5,4,7,43,27,12,26,31,27,27,28,11,19,10,20,15,6,1,26,10,16,10,12,5,20,23,9,33,32,30,32,5,19,25,14,19,22,5,2,9,21,10,11,-1,3,17,16,9,27,29,25,33,32,27,23,20,12,14,7,4,19,20,3,5,6,2,7,17,17,27,31,29,32,18,29,20,17,16,15,8,18,9,3,5,12,2,9,10,6,10,14,25,18,15,34,27,15,23,11,11,3,6,6,4,5,10,4,5,19,17,6,23,16,17,32,24,23,22,25,19,20,5,18,5,9,7,1,-1,14,15,20,16,22,28,18,22,23,16,18,22,22,21,14,18,4,4,15,1,2,0,18,18,12,26,16,12,20,17,17,27,16,19,19,20,6,11,5,9,5,3,0,23,8,18,17,9,14,18,19,19,12,18,9,2,6,4,10,6,10,1,8,0,11,23,11,18,15,18,16,6,16,13,13,7,6,10,7,15,6,13,2,3,4,22,19,14,5,12,11,9,15,25,21,6,14,7,8,12,8,6,2,3,6,9,22,14,20,24,16,2,21,28,20,14,18,18,8,8,3,6,13,2,3,6,2,23,20,13,3,20,17,0,17,16,11,6,17,18,6,3,6,5,14,8,3,9,11,18,21,19,17,25,0,22,18,6,7,8,3,5,5,5,0,0,6,2,10,17,24,18,12,18,11,25,18,17,10,6,14,24,7,9,6,6,5,0,0,7,28,25,20,27,21,0,18,10,9,10,8,0,3,3,16,10,5,3,3,0,4,20,27,24,27,21,0,1,18,21,21,12,28,0,6,4,4,5,0,15,0,0,25,20,27,26,22,18,11,5,8,5,12,7,6,3,0,7,0,0,0,0,0,17,19,23,17,19,19,0,7,8,13,10,22,0,0,0,0,0,0,0,0,0,19,17,21,16,18,15,0,6,7,9,9,23,0,0,0,0,0,0,0,0,0],
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
