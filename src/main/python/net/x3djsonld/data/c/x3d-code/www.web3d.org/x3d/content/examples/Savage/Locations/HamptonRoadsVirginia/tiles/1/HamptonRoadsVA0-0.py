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
    GeoViewpoint(description='GeoViewpoint_1_00',position=(37.36499999391961,-77.49299997997281,97125.00235182233),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.989999984839216,-76.99299996786561,0))),
    GeoLOD(center=(37.36499999391961,-77.49299997997281,0.0),range=116550.0,child1Url=['../../tiles/2/HamptonRoadsVA0-0.x3d'],child2Url=['../../tiles/2/HamptonRoadsVA0-1.x3d'],child3Url=['../../tiles/2/HamptonRoadsVA1-0.x3d'],child4Url=['../../tiles/2/HamptonRoadsVA1-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/1/HamptonRoadsVA0-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.989999984839216,-77.99299999208,0.0),normalPerVertex=False,xDimension=21,xSpacing=0.05,zDimension=21,zSpacing=0.0375,height=[82,109,98,86,103,90,79,98,106,94,65,39,41,48,49,50,27,38,40,32,33,97,105,68,101,87,94,83,94,72,81,65,32,46,49,49,48,42,27,30,40,30,98,76,101,83,78,82,81,62,74,66,58,41,21,46,17,34,46,43,38,2,0,101,107,95,88,97,96,68,85,82,64,61,34,37,11,1,6,29,31,40,34,38,100,94,80,62,63,94,76,97,87,69,72,59,52,39,33,10,19,25,24,20,24,119,98,96,73,68,100,53,91,81,65,51,50,26,1,0,0,0,7,0,23,11,81,99,86,81,71,50,76,60,69,92,60,47,5,39,24,38,42,7,5,0,5,97,87,99,96,86,59,85,61,60,82,64,42,7,51,32,39,34,34,28,29,0,69,69,104,83,95,64,80,69,88,83,60,49,49,48,39,40,41,40,17,12,39,92,96,117,90,104,84,102,90,61,66,64,51,54,45,39,41,38,39,43,31,26,108,129,113,108,86,92,88,76,95,55,60,45,53,51,41,45,25,39,40,41,37,129,127,104,104,78,93,64,67,68,63,56,53,48,41,46,39,39,40,27,42,34,128,118,108,101,103,102,90,87,75,44,42,32,48,37,42,33,42,29,36,36,32,83,94,95,86,102,93,91,67,94,64,47,44,31,28,33,35,46,36,33,23,29,108,111,107,101,76,78,101,87,60,59,44,33,30,20,29,16,34,33,50,34,33,131,120,124,102,85,79,76,77,62,63,43,33,20,23,33,28,13,34,28,42,40,137,124,118,105,103,90,58,55,80,62,48,32,23,39,42,30,20,36,36,47,28,117,108,115,102,95,79,66,80,67,75,37,29,55,45,37,43,33,25,41,44,34,97,124,90,106,105,98,82,76,72,72,50,46,35,40,24,31,21,26,31,49,36,83,106,87,91,97,88,92,57,58,40,38,45,39,49,41,31,17,16,13,27,29,83,106,86,91,98,87,92,56,60,40,35,47,37,49,41,29,19,14,11,28,30],
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
