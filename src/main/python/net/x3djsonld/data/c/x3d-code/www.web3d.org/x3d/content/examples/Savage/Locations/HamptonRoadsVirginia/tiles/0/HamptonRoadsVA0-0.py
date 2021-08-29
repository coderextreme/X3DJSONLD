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
    GeoViewpoint(description='GeoViewpoint_0_00',position=(36.989999984839216,-76.99299996786561,194250.00470364466),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.989999984839216,-76.99299996786561,0))),
    GeoLOD(center=(36.989999984839216,-76.99299996786561,0.0),range=233100.0,child1Url=['../../tiles/1/HamptonRoadsVA0-0.x3d'],child2Url=['../../tiles/1/HamptonRoadsVA0-1.x3d'],child3Url=['../../tiles/1/HamptonRoadsVA1-0.x3d'],child4Url=['../../tiles/1/HamptonRoadsVA1-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/0/HamptonRoadsVA0-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.239999966678425,-77.99299999208,0.0),normalPerVertex=False,xDimension=21,xSpacing=0.1,zDimension=21,zSpacing=0.075,height=[82,98,103,79,106,65,41,49,27,40,35,32,0,27,40,28,12,4,0,0,0,98,101,78,81,74,58,21,17,46,38,1,9,25,0,29,26,6,4,0,0,0,100,80,63,76,87,72,52,33,19,24,24,14,14,25,11,4,0,9,0,0,0,81,86,71,76,69,60,5,24,42,5,5,14,19,26,7,9,3,0,0,0,6,69,104,95,80,88,60,49,39,41,17,38,0,0,0,18,26,1,0,0,0,11,108,113,86,88,95,60,53,41,25,40,36,33,30,18,2,12,8,-1,0,0,0,128,108,103,90,75,42,48,42,42,36,33,41,29,16,0,17,6,5,0,0,0,108,107,76,101,60,44,30,29,34,50,31,30,22,25,7,0,0,0,0,0,0,137,118,103,58,80,48,23,42,20,36,24,28,20,24,16,11,0,6,0,-1,13,97,90,105,82,72,50,35,24,21,31,38,25,23,16,19,10,3,5,6,2,3,90,65,71,72,61,47,43,31,35,3,40,8,35,27,11,9,12,0,10,10,6,111,111,96,67,69,31,37,35,39,23,18,14,30,30,26,19,13,4,19,5,2,87,105,81,77,56,35,19,25,16,28,11,12,23,12,24,23,11,5,4,11,4,67,83,78,78,50,38,36,33,31,13,15,17,26,23,23,20,21,20,4,1,0,105,107,77,73,19,47,44,39,27,30,23,18,10,15,20,18,0,5,6,1,0,98,101,111,62,35,19,30,25,22,18,22,16,10,10,21,5,5,19,6,3,4,86,75,74,48,37,17,29,24,24,26,23,8,22,0,17,5,19,3,6,5,9,64,75,52,37,36,37,25,24,28,38,18,16,16,25,19,7,21,8,8,0,5,104,53,38,31,28,43,29,20,35,36,20,26,21,3,21,13,0,2,5,14,0,72,58,40,28,35,37,26,10,18,22,15,26,19,0,8,13,0,0,0,0,0,71,58,39,28,36,37,25,10,21,23,17,23,19,0,7,11,0,0,0,0,0],
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
