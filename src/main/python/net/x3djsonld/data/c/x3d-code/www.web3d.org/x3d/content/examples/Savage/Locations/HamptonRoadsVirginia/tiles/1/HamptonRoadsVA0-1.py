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
    GeoViewpoint(description='GeoViewpoint_1_01',position=(37.36499999391961,-76.49299995575842,97125.00235182233),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.989999984839216,-76.99299996786561,0))),
    GeoLOD(center=(37.36499999391961,-76.49299995575842,0.0),range=116550.0,child1Url=['../../tiles/2/HamptonRoadsVA0-2.x3d'],child2Url=['../../tiles/2/HamptonRoadsVA0-3.x3d'],child3Url=['../../tiles/2/HamptonRoadsVA1-2.x3d'],child4Url=['../../tiles/2/HamptonRoadsVA1-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/1/HamptonRoadsVA0-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.989999984839216,-76.99299996786561,0.0),normalPerVertex=False,xDimension=21,xSpacing=0.05,zDimension=21,zSpacing=0.0375,height=[33,39,30,43,0,-1,28,17,38,31,28,21,13,15,3,0,0,0,0,0,0,30,13,8,30,36,0,12,29,30,32,26,10,11,16,0,0,0,0,0,0,0,0,28,10,31,23,31,0,20,30,30,27,0,6,5,5,0,0,0,0,0,0,38,1,10,30,38,21,30,0,34,37,13,0,0,3,11,1,0,0,0,0,0,24,15,14,43,12,45,26,0,12,15,5,4,0,0,8,0,0,0,0,0,0,11,11,12,8,32,29,39,30,0,2,20,4,1,0,0,0,0,0,0,0,0,5,16,14,0,21,35,26,34,9,0,9,12,3,0,0,0,0,0,0,0,5,0,0,0,0,14,31,23,26,28,26,0,0,0,0,0,0,0,0,0,0,4,39,29,0,29,0,2,0,0,18,30,29,14,4,0,0,0,0,0,0,0,11,26,32,31,8,5,0,26,0,17,12,19,11,0,0,0,0,0,0,0,0,0,37,35,33,39,28,21,18,0,3,13,16,12,7,9,-1,0,0,0,0,0,0,34,21,42,29,26,36,20,0,0,0,11,18,6,2,6,0,0,0,0,0,0,32,37,41,34,29,28,17,0,0,0,17,8,7,6,5,0,0,0,0,0,0,29,45,21,13,28,36,28,23,12,0,0,11,6,8,2,0,0,0,0,0,0,33,29,28,18,20,37,26,20,7,5,0,0,0,0,0,0,0,0,0,0,0,40,21,37,35,34,40,30,23,10,24,1,0,0,0,1,11,0,0,0,0,0,28,30,31,26,21,31,29,24,16,11,11,0,0,0,5,8,11,10,-2,3,12,34,16,29,17,38,33,33,26,25,16,2,3,5,4,0,9,8,7,10,5,7,36,35,25,21,23,38,13,29,18,2,14,13,5,6,4,7,3,3,3,20,4,29,39,23,33,13,42,31,25,20,-2,14,9,14,4,3,8,-8,6,5,5,7,30,38,23,35,11,40,33,22,18,-3,13,8,12,7,4,9,-9,6,5,4,7],
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
