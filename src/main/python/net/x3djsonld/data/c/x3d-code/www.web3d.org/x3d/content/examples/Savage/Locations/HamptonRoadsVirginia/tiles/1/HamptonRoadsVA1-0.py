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
    GeoViewpoint(description='GeoViewpoint_1_10',position=(36.61499997575882,-77.49299997997281,97125.00235182233),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.989999984839216,-76.99299996786561,0))),
    GeoLOD(center=(36.61499997575882,-77.49299997997281,0.0),range=116550.0,child1Url=['../../tiles/2/HamptonRoadsVA2-0.x3d'],child2Url=['../../tiles/2/HamptonRoadsVA2-1.x3d'],child3Url=['../../tiles/2/HamptonRoadsVA3-0.x3d'],child4Url=['../../tiles/2/HamptonRoadsVA3-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/1/HamptonRoadsVA1-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.239999966678425,-77.99299999208,0.0),normalPerVertex=False,xDimension=21,xSpacing=0.05,zDimension=21,zSpacing=0.0375,height=[83,106,86,91,98,87,92,56,60,40,35,47,37,49,41,29,19,14,11,28,30,92,82,66,64,73,77,70,88,62,43,46,47,42,38,29,27,35,30,3,32,43,106,63,74,68,65,55,59,53,43,47,43,31,28,29,38,43,41,31,31,4,20,111,93,112,74,96,93,65,83,69,40,30,24,39,36,34,38,40,44,23,16,17,104,119,108,101,92,67,66,57,52,50,29,24,20,33,33,38,32,34,26,27,7,87,104,105,96,82,101,79,80,58,41,37,25,20,17,26,29,16,35,28,21,10,84,84,89,85,90,68,66,71,44,31,24,26,23,18,13,0,15,13,30,25,19,62,77,82,80,77,95,78,57,53,40,38,37,39,37,33,11,28,7,14,28,15,84,62,85,85,57,43,43,25,55,45,47,39,43,45,40,24,31,11,10,16,18,107,105,107,82,79,88,72,47,19,43,47,42,44,31,39,44,30,30,30,11,23,111,83,113,99,94,88,64,45,28,22,35,32,34,37,41,26,29,33,22,27,11,99,76,101,86,115,77,64,42,34,17,21,28,27,34,29,26,20,20,19,21,22,99,63,68,67,97,65,42,46,35,24,20,28,28,32,35,20,21,25,22,23,22,85,86,73,83,77,56,47,39,37,22,18,16,30,22,24,28,22,20,24,13,23,82,91,52,78,63,47,41,32,37,27,20,17,15,21,29,34,26,29,19,23,11,64,99,77,72,55,37,40,32,36,32,39,22,25,19,25,33,29,35,41,24,17,64,47,58,66,35,48,31,35,28,42,36,40,17,18,15,34,27,24,25,23,28,105,90,52,38,38,43,33,24,29,27,42,38,27,25,19,13,34,29,36,30,20,53,74,70,51,44,44,41,31,29,29,34,33,31,9,9,21,24,27,23,24,25,71,65,58,51,39,27,28,36,36,25,37,30,25,30,10,16,21,25,23,27,17,69,65,58,51,38,28,28,35,37,23,36,30,29,29,9,13,20,24,24,30,19],
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
